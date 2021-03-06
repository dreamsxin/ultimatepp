#include "Sql.h"

NAMESPACE_UPP

void S_info_maker::Field(const char *name, Ref f, bool *b)
{
	if(b) f = Ref(*b);
	info.column.Add(name, MakeTuple((byte *)f.GetVoidPtr() - (byte *)s, f.GetManager()));		
}

Ref S_info::GetRef(const void *s, int i) const
{
	return Ref((byte *)s + column[i].a, column[i].b);
}

Ref S_info::GetRef(const void *s, const SqlId& id) const
{
	int q = column.Find(~id);
	return q >= 0 ? GetRef(s, q) : Ref();
}

Value S_info::Get(const void *s, const SqlId& id) const
{
	return ~GetRef(s, id);
}

Value S_info::Get(const void *s, int i) const
{
	return ~GetRef(s, i);
}

ValueMap S_info::Get(const void *s) const
{
	ValueMap m;
	for(int i = 0; i < column.GetCount(); i++)
		m.Add(column.GetKey(i), GetRef(s, i));
	return m;
}

void S_info::Set(const void *s, int i, const Value& v) const
{
	Ref f = GetRef(s, i);
	if(f.Is<bool>() && IsString(v)) {
		String h = v;
		f = !(h == "0" || IsNull(h));
	}
	else
		f = v;
}

void S_info::Set(const void *s, const SqlId& id, const Value& v) const
{
	int q = column.Find(~id);
	if(q >= 0)
		Set(s, q, v);
}

void S_info::Set(const void *s, const ValueMap& m) const
{
	for(int i = 0; i < m.GetCount(); i++) {
		Value v = m.GetKey(i);
		if(IsString(v))
			Set(s, (String)v, m.GetValue(i));
	}
}

SqlSet S_info::GetSet(const String& prefix) const
{
	SqlSet set;
	for(int i = 0; i < column.GetCount(); i++)
		set << SqlId(prefix + column.GetKey(i));
	return set;
}

SqlSet S_info::GetOf(const SqlId& table) const
{
	SqlSet set;
	for(int i = 0; i < ids.GetCount(); i++)
		set << SqlId(ids[i].Of(table));
	return set;
}

void S_info::Init()
{
	column.Shrink();
	ids.SetCount(column.GetCount());
	for(int i = 0; i < column.GetCount(); i++) {
		SqlId id(column.GetKey(i));
		ids[i] = id;
		set << id;
	}
}

END_UPP_NAMESPACE
