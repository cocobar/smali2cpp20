// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\AsciiUtil$CaseInsensitiveKey.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.AsciiUtil_S_CaseInsensitiveKey.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;)V
android::icu::impl::locale::AsciiUtil_S_CaseInsensitiveKey::AsciiUtil_S_CaseInsensitiveKey(std::shared_ptr<java::lang::String> key)
{
	
	//    .param p1, "key"    # Ljava/lang/String;
	// 030    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_key = key;
	this->_hash = android::icu::impl::locale::AsciiUtil::toLowerString(key)->hashCode();
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::locale::AsciiUtil_S_CaseInsensitiveKey::equals(std::shared_ptr<java::lang::Object> o)
{
	
	//    .param p1, "o"    # Ljava/lang/Object;
	if ( this != o )
		goto label_cond_4;
	return 0x1;
	// 065    .line 182
label_cond_4:
	if ( !(o->instanceOf("android::icu::impl::locale::AsciiUtil_S_CaseInsensitiveKey")) )  
		goto label_cond_13;
	o->checkCast("android::icu::impl::locale::AsciiUtil_S_CaseInsensitiveKey");
	//    .end local p1    # "o":Ljava/lang/Object;
	return android::icu::impl::locale::AsciiUtil::caseIgnoreMatch(this->_key, o->_key);
	// 085    .line 185
	// 086    .restart local p1    # "o":Ljava/lang/Object;
label_cond_13:
	return 0x0;

}
// .method public hashCode()I
int android::icu::impl::locale::AsciiUtil_S_CaseInsensitiveKey::hashCode()
{
	
	return this->_hash;

}


