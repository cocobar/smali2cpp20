// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\InternalLocaleBuilder$CaseInsensitiveChar.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.impl.locale.InternalLocaleBuilder_S_CaseInsensitiveChar.h"
#include "java.lang.Object.h"

// .method constructor <init>(C)V
android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar::InternalLocaleBuilder_S_CaseInsensitiveChar(char c)
{
	
	//    .param p1, "c"    # C
	// 028    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_c = c;
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return cVar0;
	// 054    .line 687
label_cond_5:
	if ( obj->instanceOf("android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar") )     
		goto label_cond_a;
	return cVar1;
	// 063    .line 690
label_cond_a:
	obj->checkCast("android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar");
	//    .end local p1    # "obj":Ljava/lang/Object;
	if ( this->_c != android::icu::impl::locale::AsciiUtil::toLower(obj->value()) )
		goto label_cond_19;
label_goto_18:
	return cVar0;
label_cond_19:
	cVar0 = cVar1;
	goto label_goto_18;

}
// .method public hashCode()I
int android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar::hashCode()
{
	
	return android::icu::impl::locale::AsciiUtil::toLower(this->_c);

}
// .method public value()C
char android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar::value()
{
	
	return this->_c;

}


