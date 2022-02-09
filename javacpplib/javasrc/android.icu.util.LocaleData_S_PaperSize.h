#ifndef __android_icu_util_LocaleData_S_PaperSize__
#define __android_icu_util_LocaleData_S_PaperSize__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleData$PaperSize.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class LocaleData_S_PaperSize : public java::lang::Object {
protected:
private:
	int height;
	int width;
	LocaleData_S_PaperSize(int h,int w);
public:
	LocaleData_S_PaperSize(int h,int w,std::shared_ptr<android::icu::util::LocaleData_S_PaperSize> _this2);
	int virtual getHeight();
	int virtual getWidth();
public:
	virtual ~LocaleData_S_PaperSize(){
	}

}; // class LocaleData_S_PaperSize
}; // namespace android::icu::util

#endif //__android_icu_util_LocaleData_S_PaperSize__

