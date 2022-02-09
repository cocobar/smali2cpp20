// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\InternalLocaleBuilder$CaseInsensitiveString.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.impl.locale.InternalLocaleBuilder_S_CaseInsensitiveString.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;)V
android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString::InternalLocaleBuilder_S_CaseInsensitiveString(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	// 028    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_s = s;
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 052    .line 659
label_cond_4:
	if ( obj->instanceOf("android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString") )     
		goto label_cond_a;
	return 0x0;
	// 063    .line 662
label_cond_a:
	obj->checkCast("android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString");
	//    .end local p1    # "obj":Ljava/lang/Object;
	return android::icu::impl::locale::AsciiUtil::caseIgnoreMatch(this->_s, obj->value());

}
// .method public hashCode()I
int android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString::hashCode()
{
	
	return android::icu::impl::locale::AsciiUtil::toLowerString(this->_s)->hashCode();

}
// .method public value()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString::value()
{
	
	return this->_s;

}


