// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarAstronomer$3.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarAstronomer_S_3.h"
#include "android.icu.impl.CalendarAstronomer.h"

// .method constructor <init>(Landroid/icu/impl/CalendarAstronomer;)V
android::icu::impl::CalendarAstronomer_S_3::CalendarAstronomer_S_3(std::shared_ptr<android::icu::impl::CalendarAstronomer> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/CalendarAstronomer;
	this->this_S_0 = this_S_0;
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public eval()D
double android::icu::impl::CalendarAstronomer_S_3::eval()
{
	
	return this->this_S_0->getMoonAge();

}


