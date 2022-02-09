// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleData$PaperSize.smali
#include "java2ctype.h"
#include "android.icu.util.LocaleData_S_PaperSize.h"

// .method private constructor <init>(II)V
android::icu::util::LocaleData_S_PaperSize::LocaleData_S_PaperSize(int h,int w)
{
	
	//    .param p1, "h"    # I
	//    .param p2, "w"    # I
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->height = h;
	this->width = w;
	return;

}
// .method synthetic constructor <init>(IILandroid/icu/util/LocaleData$PaperSize;)V
android::icu::util::LocaleData_S_PaperSize::LocaleData_S_PaperSize(int h,int w,std::shared_ptr<android::icu::util::LocaleData_S_PaperSize> _this2)
{
	
	//    .param p1, "h"    # I
	//    .param p2, "w"    # I
	//    .param p3, "-this2"    # Landroid/icu/util/LocaleData$PaperSize;
	android::icu::util::LocaleData_S_PaperSize::(h, w);
	return;

}
// .method public getHeight()I
int android::icu::util::LocaleData_S_PaperSize::getHeight()
{
	
	return this->height;

}
// .method public getWidth()I
int android::icu::util::LocaleData_S_PaperSize::getWidth()
{
	
	return this->width;

}


