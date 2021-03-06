TITLE("pick_")
TOPIC_TEXT(
"[ $$0,0#00000000000000000000000000000000:Default][l288;i704;a17;O9;~~~.992; $$1,"
"0#10431211400427159095818037425705:param][a83;*R6 $$2,5#3131016247420302412518841"
"7583966:caption][b83;* $$3,5#07864147445237544204411237157677:title][b167;a42;C $"
"$4,6#40027414424643823182269349404212:item][b42;a42; $$5,5#4541300047534217475409"
"1244180557:text][l288;a17; $$6,6#27521748481378242620020725143825:desc][l321;t246"
";C@5;1 $$7,7#20902679421464641399138805415013:code][b2503; $$8,0#6514237545610002"
"3862071332075487:separator][*@(0.0.255) $$9,0#83433469410354161042741608181528:ba"
"se][t4167;C+117 $$10,0#37138531426314131251341829483380:class][l288;a17;*1 $$11,1"
"1#70004532496200323422659154056402:requirement][i416;b42;a42;O9;~~~.416; $$12,12#"
"10566046415157235020018451313112:tparam][b167;C $$13,13#9243045944346046191110808"
"0531343:item1][a42;C $$14,14#77422149456609303542238260500223:item2][*@2$(0.128.1"
"28) $$15,15#34511555403152284025741354420178:NewsDate][l321;*C$7 $$16,16#03451589"
"433145915344929335295360:result][l321;b83;a83;*C$7 $$17,17#0753155046352950537122"
"8428965313:result`-line][l160;t4167;*C+117 $$18,5#8860394944220582595880005322242"
"5:package`-title][{_} [s2; [%EN-US Transfer semantics]&][s3; [%EN-US Deep copy se"
"mantics]&][s5; [%EN-US Talking about transfer semantics, we are interested in pas"
"sing values from one place to another, e.g]&][s7;l320; [%EN-US int a, b;]&][s7;l3"
"20; [%EN-US a = b;]&][s5; [%EN-US Here we transfer value contained in variable ]["
"%EN-US* b][%EN-US  to variable ][%EN-US* a][%EN-US . We are doing so using implic"
"it assignment operator of type ][%EN-US* int.][%EN-US  This assignment operator p"
"asses value of source to target while preserving value of source. This kind of tr"
"ansfer semantics we call ][%EN-US*/ deep copy][%EN-US . For large number of types"
", deep copy is good choice as default transfer semantics. However there are types"
" where preserving source is not that important and dropping this feature has adva"
"ntages. Consider this simple 'container']&][s7; class Int")
TOPIC_TEXT(
"Array {&][s7; -|int count;&][s7; -|int *array;&][s7; -|void Copy(const IntArray`"
"& src) {&][s7; -|-|array = new int`[count = src.count`];&][s7; -|-|memcpy(array, "
"src.array, count * sizeof(int));&][s7; -|}&][s7; public:&][s7; -|int`& operator`["
"`](int i)        { return array`[i`]; }&][s7; -|int  GetCount() const         { r"
"eturn count; }&][s7; -|IntArray(int n)               { count = n; array = new int"
"`[n`]; }&][s7; -|IntArray(const IntArray`& src) { Copy(src); }&][s7; -|IntArray`&"
" operator=(const IntArray`& src)&][s7; -|                              { delete`["
"`] array; Copy(src) }&][s7; -|~IntArray()                   { delete`[`] array; }"
"&][s7; };&][s5; [%EN-US This shows typical implementation of container class with"
" deep copy transfer semantics. Now consider we want to have function that has the"
" ][* IntArray][%EN-US  as return type]&][s7; IntArray MakeArray(int n) {&][s7; -|"
"IntArray a(n);&][s7; -|for(int i = 0; i < n; i`++)&][s7; -|-|a`[i`] = i;&][s7; -|"
"return a;&][s7; }&][s5; and see what happens if we use this function&][s7; IntArr"
"ay y = MakeArray(1000);&][s5; [%EN-US Problem here is that ][* IntArray][%EN-US  "
"copy constructor will be invoked to copy created ][* IntArray][%EN-US  to tempora"
"ry object and to copy this temporary object to target ][%EN-US* y][%EN-US . (Some"
" really good C`++ compilers might elide these copy constructors in this simple ca"
"se, but there are other cases where this is not possible). And all these deep cop"
"ies are made to preserve value of source that is destroyed just one step later an"
"yway. ]&][s3; [%EN-US Pick semantics]&][s5; [%EN-US Without this preserving we co"
"uld simply copy ][%EN-US* array][%EN-US  member of source to target and somewhat "
"disallow delete in ][%EN-US* ~][* IntArray][%EN-US . And in fact, we do not need "
"deep copies of containers too much often. That is why we have introduced ][%EN-US"
"*/ pick][%EN-US/  ][%EN-US transfer semantics. Let us recreate ][* IntArray][%EN-"
"US  with it]&][s7; class IntArray {&][s7; -|int count;&][")
TOPIC_TEXT(
"s7; -|[* mutable] int *array;&][s7;* -|void Pick(pick`_ IntArray`& src) {&][s7;*"
" -|-|count = src.count;&][s7;* -|-|array = src.array;&][s7;* -|-|src.array = NULL"
";&][s7;* -|}&][s7; public:&][s7; -|int`& operator`[`](int i)        { return arra"
"y`[i`]; }&][s7; -|int  GetCount() const         { return count; }&][s7; -|IntArra"
"y(int n)               { count = n; array = new int`[n`]; }&][s7; -|IntArray([* p"
"ick`_] IntArray`& src) { [* Pick](src); }&][s7; -|IntArray`& operator=([* pick`_]"
" IntArray`& src)&][s7; -|                              { [* if(array) ]delete`[`]"
" array;&][s7; -|                                Pick(src) }&][s7; -|~IntArray()  "
"                 { [* if(array)] delete`[`] array; }&][s7; };&][s5; Now with pick"
" semantics,  no unnecessary copying is made and we are free to use such container"
" as return value. What has to be explained here is '[* pick`_]'. Problem is that "
"C`++ disallows binding temporaries to non-const references - and that is unfortun"
"ately just the thing we need to do here, as we need to change source temporary re"
"turned from function. C`++ allows only one possibility for temporary to be passed"
" - via const reference. But using const reference in interface would be pretty mi"
"sguiding here, as what we do is quite opposite - we change parameter. That is why"
" we decided to&][s7; #define pick`_ const&][s5; [%EN-US Yes, this ][%EN-US* is][%"
"EN-US  ][%EN-US* very][%EN-US  ugly, but unfortunately this best option that curr"
"ent C`++ gives to us. There is effort to introduce changes in future C`++, but fo"
"r now we have to live with this.]&][s3; [%EN-US Pick caveats]&][s5; [%EN-US Now l"
"et us look in pick semantics little bit deeper. One thing is apparent - if type h"
"as default pick transfer semantics, one has to be cautious when using copy constr"
"uctor or operator=]&][s7; IntArray a = MakeArray(100);&][s7; IntArray b = a; // A"
"TTENTION: a is now picked !&][s7; a`[3`] = 10; //illegal !&][s5; [%EN-US This exa"
"mple shows one important aspect of pick semantics that we")
TOPIC_TEXT(
" use throughout our code: after being picked, number of operations that can be p"
"erformed on source is limited. In most cases, only allowed operations here are op"
"erator= and destructor. Real containers add some more (we will provide common lis"
"t of allowed operations later), but operations accessing or changing data of pick"
"ed object are always disallowed.]&][s5; [%EN-US In fact, we had choice here - alt"
"ernative approach could simply reset source to some default state - this is as st"
"d`::auto`_ptr. However several years of practice in using pick semantics taught u"
"s that accessing or changing data in picked object is almost always error and usu"
"ally hard to spot one. So we made them illegal and we are also checking for such "
"logic errors in debug mode.]&][s3; [%EN-US Optional deep copy]&][s5; [%EN-US Now "
"we have effective way how to transfer values without copying internal data at pri"
"ce of loosing source. But what if we would like to preserve source in some cases?"
" No problem, we can simply add alternative methods for the ][%EN-US*/ optional de"
"ep copy][%EN-US . Unlike normal deep copy and pick semantics, where signatures of"
" methods are dictated by C`++ (that is, operator= and copy constructor), here we "
"can choose names of methods ourselves. Anyway, it is a good idea to standardize t"
"hem. We selected (for type T)]&][s7; [%EN-US T(const T`&, int)]&][s5; [%EN-US to "
"be the signature of the ][%EN-US*/ optional deep copy constructor][%EN-US . We ha"
"ve to distinguish it from pick constructor ][%EN-US*@5 T(pick`_ T`&)][%EN-US  and"
" we can do it only by adding a parameter. It could be anything, but int somewhat "
"resembles solution for postfix operator`++. We also need optional deep copy assig"
"nment, so we overload]&][s7; [%EN-US T`& operator<<=(const T`&)]&][s5; [%EN-US as"
" the ][%EN-US*/ optional deep copy operator][%EN-US . Now we can improve our simp"
"le container class to include optional deep copy semantics]&][s7; class IntArray "
"{&][s7; -|int count;&][s7; -|mutable int *array;&][s7; -|")
TOPIC_TEXT(
"void Pick(pick`_ IntArray`& src) {&][s7; -|-|count = src.count;&][s7; -|-|array "
"= src.array;&][s7; -|-|src.array = NULL;&][s7; -|}&][s7;* [* -|]void Copy(const I"
"ntArray`& src) {&][s7;* -|-|array = new int`[count = src.count`];&][s7;* -|-|memc"
"py(array, src.array, count * sizeof(int));&][s7;* -|}&][s7; public:&][s7; -|int`&"
" operator`[`](int i)        { return array`[i`]; }&][s7; -|int  GetCount() const "
"        { return count; }&][s7; -|IntArray(int n)               { count = n; arra"
"y = new int`[n`]; }&][s7; -|IntArray(pick`_ IntArray`& src) { Pick(src); }&][s7; "
"-|IntArray`& operator=(pick`_ IntArray`& src)&][s7; -|                           "
"   { if(array) delete`[`] array;&][s7; -|                                Pick(src"
") }&][s7;* -|IntArray(const IntArray`& src, int) { Copy(src); }&][s7;* -|IntArray"
"`& operator<<=(const IntArray`& src)&][s7;* -|                              { if("
"array) delete`[`] array;&][s7;* -|                                Copy(src) }-|&]"
"[s7; -|~IntArray()                   { if(array) delete`[`] array; }&][s7; };&][s"
"5; With optional deep copy we have full control of transfer&][s7; IntArray a = Ma"
"keArray(100);&][s7; IntArray b(a, 1); // deep copy&][s7; a`[3`] = 10; //legal&][s"
"7; b <<= a; // deep copy&][s7; IntArray c(a); // pick&][s7; a = b; // pick - now "
"b is picked, a and c contain MakeArray(100)&][s3; [%EN-US Uniform access to deep "
"copy]&][s5; But we need even more. Consider this example with real NTL container "
":&][s7; Vector< IntArray > x, y;&][s7; ....&][s7; // put something to y&][s7; ..."
".&][s7; x <<= y;&][s5; Here we are deep copy assigning container of pick with opt"
"ional deep copy types to another container. During this operation we need deep co"
"pies of each indivudual element of [* y]. Problem is that we need [* Vector] cont"
"ainer to work both with normal deep copy types and with optional deep copy types."
" We need an uniform way how to invoke deep copy constructor regardless of fact it"
" has [* T(const T`&)] or [* T(const T`&, int)] signature.")
TOPIC_TEXT(
" Solution is to provide two addtional functions&][s7; void DeepCopyConstruct(voi"
"d *p, const T`& x);&][s7; T   *DeepCopyNew(const T`& x);&][s5; [* DeepCopyConstru"
"ct] constructs new deep copy of [* x] at given memory adress (much like placement"
" operator new does), [* DeepCopyNew] constructs new deep copy of [* x] at heap (l"
"ike normal new). Now we can provide default version of these functions that will "
"be used for types with default deep copy &][s7; template <class T>&][s7; inline v"
"oid DeepCopyConstruct(void *p, const T`& x) {&][s7; -|`::new(p) T(x);&][s7; }&][s"
"7; &][s7; template <class T>&][s7; inline T *DeepCopyNew(const T`& x) {&][s7; -|r"
"eturn new T(x);&][s7; }&][s5; For types with optional deep copy we simply provide"
" specialized version&][s7; void DeepCopyConstruct(void *p, const IntArray`& x) {&"
"][s7; -|`::new(p) IntArray(x, 1);&][s7; }&][s7; &][s7; IntArray *DeepCopyNew(cons"
"t IntArray`& x) {&][s7; -|return new IntArray(x, 1);&][s7; }&][s3; [%EN-US Making"
" things easy]&][s5; [%EN-US Now there exists way how to deep copy objects of both"
" default and optional deep copy. Anyway, this might seem pretty annoying - you ha"
"ve to implement two methods and two global functions to get optional deep copy se"
"mantics working. Fortunately, it is possible to automatize this work by using ][*"
" DeepCopyOption ][%EN-US base]&][s7; class IntArray : DeepCopyOption<IntArray> {&"
"][s7; -|int count;&][s7; -|mutable int *array;&][s7; -|void Pick(pick`_ IntArray`"
"& src) {&][s7; -|-|count = src.count;&][s7; -|-|array = src.array;&][s7; -|-|src."
"array = NULL;&][s7; -|}&][s7; -|void Copy(const IntArray`& src) {&][s7; -|-|array"
" = new int`[count = src.count`];&][s7; -|-|memcpy(array, src.array, count * sizeo"
"f(int));&][s7; -|}&][s7; public:&][s7; -|int`& operator`[`](int i)        { retur"
"n array`[i`]; }&][s7; -|int  GetCount() const         { return const; }&][s7; -|I"
"ntArray(int n)               { count = n; array = new int`[n`]; }&][s7; -|IntArra"
"y(pick`_ IntArray`& src) { Pick(src); }&][s7; -|IntArray`")
TOPIC_TEXT(
"& operator=(pick`_ IntArray`& src)&][s7; -|                              { if(ar"
"ray) delete`[`] array;&][s7; -|                                Pick(src) }&][s7; "
"-|IntArray(const IntArray`& src, int) { Copy(src); }&][s7; -|~IntArray()         "
"          { if(array) delete`[`] array; }&][s7; };&][s7; &][s5; [%EN-US Using ][*"
" DeepCopyOption][%EN-US  template all you must provide is optional deep copy cons"
"tructor - and template generates rest of methods and functions automatically.]&]["
"s3; [%EN-US Changing default semantics]&][s5; [%EN-US If for some reason we need "
"version of ][%EN-US/ optional][%EN-US  deep copy type with ][%EN-US/ default][%EN"
"-US  deep copy, we can easily create it with ][* WithDeepCopy ][%EN-US template]&"
"][s7; IntArray a = MakeArray(100);&][s7; WithDeepCopy<IntArray> b(a); // b now ha"
"s deep copy semantics&][s7; a`[3`] = 10; //legal&][s7; b = a; // deep copy&][s7; "
"a = b; // pick&][s7; b`[4`] = 1; // illegal&][s3; Polymorphic deep copy&][s5;* [*"
" Now there is one last type of transfer semantics. Some of containers allow stori"
"ng polymorphic elements. E.g. Array allows storing object of type derived from ba"
"sic element type. This causes new problems in situation when we want to create de"
"ep copy of such container - what we need is polymorphic deep copy of elements. Pr"
"oblem is solved by already introduced ]DeepCopyNew&][s7; class Base : PolyDeepCop"
"yNew<Base> {&][s7; -|....&][s7; public:&][s7; -|....&][s7; -|virtual Base  *Copy("
") const    { return new Base(*this); }&][s7; };&][s7; &][s7; class Derived : Base"
" {&][s7; -|....&][s7; public:&][s7; -|....&][s7; -|virtual Base    *Copy() const "
" { return new Derived(*this); }&][s7; };&][s7; &][s7; &][s7; ....&][s7; Array<Bas"
"e> a;&][s7; a.Add(new Base);&][s7; a.Add(new Derived);&][s7; Array<Base> b(a, 1);"
" // deep copy using Copy members&][s5; [* PolyDeepCopyNew][%EN-GB*  ][%EN-GB base"
" class creates appropriate ][* DeepCopyNew ]specialization based on [* Copy] virt"
"ual method. We call this transfer method [*/ polymorphic ")
TOPIC_TEXT(
"deep copy].&][s0;2 ")
