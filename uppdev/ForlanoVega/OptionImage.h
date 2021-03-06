#ifndef _ForlanoVega_OptionImage_h_
#define _ForlanoVega_OptionImage_h_

#include <CtrlLib/CtrlLib.h>


class OptionImage : public Option {
	void ReFocus();
protected:
	Image imgYes, imgNo, imgMaybe;
public:
//	Callback WhenChange;
	virtual void   Paint(Draw& draw);
	OptionImage& SetImage(const Image& m1, const Image& m2, const Image& m3)
			            { imgYes = m1; imgNo = m2; imgMaybe = m3; Refresh(); return *this; }
	OptionImage& SetImage(const Image& m1, const Image& m2)
			            { imgYes = m1; imgNo = m2; Refresh(); return *this; }

	OptionImage& ThreeState(bool b = true)             { threestate = b; notnull = false; return *this; }

//	void OnChange() {WhenChange();}
	typedef OptionImage CLASSNAME;
	OptionImage();
	~OptionImage(){;}
};


#endif
