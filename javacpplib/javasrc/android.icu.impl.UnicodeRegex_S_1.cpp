// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UnicodeRegex$1.smali
#include "java2ctype.h"
#include "android.icu.impl.UnicodeRegex_S_1.h"
#include "android.icu.impl.UnicodeRegex.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method constructor <init>(Landroid/icu/impl/UnicodeRegex;)V
android::icu::impl::UnicodeRegex_S_1::UnicodeRegex_S_1(std::shared_ptr<android::icu::impl::UnicodeRegex> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UnicodeRegex;
	this->this_S_0 = this_S_0;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public compare(Ljava/lang/Object;Ljava/lang/Object;)I
int android::icu::impl::UnicodeRegex_S_1::compare(std::shared_ptr<java::lang::Object> obj0,std::shared_ptr<java::lang::Object> obj1)
{
	
	std::shared_ptr<java::lang::String> arg0;
	std::shared_ptr<java::lang::String> arg1;
	int len0;
	int len1;
	
	//    .param p1, "obj0"    # Ljava/lang/Object;
	//    .param p2, "obj1"    # Ljava/lang/Object;
	arg0 = obj0->toString();
	//    .local v0, "arg0":Ljava/lang/String;
	arg1 = obj1->toString();
	//    .local v1, "arg1":Ljava/lang/String;
	len0 = arg0->length();
	//    .local v2, "len0":I
	len1 = arg1->length();
	//    .local v3, "len1":I
	if ( len0 == len1 )
		goto label_cond_15;
	return (len1 - len0);
	// 089    .line 369
label_cond_15:
	return arg0->compareTo(arg1);

}


