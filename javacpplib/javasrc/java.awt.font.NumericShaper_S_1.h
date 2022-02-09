#ifndef __java_awt_font_NumericShaper_S_1__
#define __java_awt_font_NumericShaper_S_1__
// H L:\smali2cpp20\x64\Release\out\java\awt\font\NumericShaper$1.smali
#include "java2ctype.h"
#include "java.awt.font.NumericShaper_S_Range.h"
#include "java.awt.font.NumericShaper.h"
#include "java.util.Comparator.h"

namespace java::awt::font{
class NumericShaper_S_1 : public java::util::Comparator<java::awt::font::NumericShaper_S_Range> {
protected:
private:
public:
	std::shared_ptr<java::awt::font::NumericShaper> this_S_0;
	NumericShaper_S_1(std::shared_ptr<java::awt::font::NumericShaper> this_S_0);
	int virtual compare(std::shared_ptr<java::awt::font::NumericShaper_S_Range> s1,std::shared_ptr<java::awt::font::NumericShaper_S_Range> s2);
public:
	virtual ~NumericShaper_S_1(){
	}

}; // class NumericShaper_S_1
}; // namespace java::awt::font

#endif //__java_awt_font_NumericShaper_S_1__

