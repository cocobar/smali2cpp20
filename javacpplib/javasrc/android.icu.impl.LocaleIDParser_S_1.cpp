// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleIDParser$1.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleIDParser_S_1.h"
#include "android.icu.impl.LocaleIDParser.h"
#include "java.lang.String.h"

// .method constructor <init>(Landroid/icu/impl/LocaleIDParser;)V
android::icu::impl::LocaleIDParser_S_1::LocaleIDParser_S_1(std::shared_ptr<android::icu::impl::LocaleIDParser> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/LocaleIDParser;
	this->this_S_0 = this_S_0;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public compare(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::impl::LocaleIDParser_S_1::compare(std::shared_ptr<java::lang::String> lhs,std::shared_ptr<java::lang::String> rhs)
{
	
	//    .param p1, "lhs"    # Ljava/lang/String;
	//    .param p2, "rhs"    # Ljava/lang/String;
	return lhs->compareTo(rhs);

}


