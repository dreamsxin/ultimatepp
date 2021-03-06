#include <Core/Core.h>

using namespace Upp;

CONSOLE_APP_MAIN
{
	String path = GetHomeDirFile("test.gz");
	{
		FileOut fout(path);
		Zlib zlib;
		OutFilterStream out(fout, zlib);
		zlib.GZip().Compress();
		out.Put("Hello world!");
		out.Close();
	}

	{
		FileIn fin(path);
		Zlib zlib;
		InFilterStream in(fin, zlib);
		zlib.GZip().Decompress();
		LOG(in.GetLine());
	}


	{
		HttpRequest http("www.ultimatepp.org");
		InFilterStream in;
		http.WhenContent = callback(&in, &InFilterStream::Out);
		in.More = callback(&http, &HttpRequest::Do);
		http.Blocking();
		while(!in.IsEof())
			LOG(in.GetLine());
	}
}
