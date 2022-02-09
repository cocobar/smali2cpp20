// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleValidityChecker$Where.smali
#include "java2ctype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datatype.h"
#include "android.icu.impl.locale.LocaleValidityChecker_S_Where.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>()V
android::icu::impl::locale::LocaleValidityChecker_S_Where::LocaleValidityChecker_S_Where()
{
	
	// 029    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public set(Landroid/icu/impl/ValidIdentifiers$Datatype;Ljava/lang/String;)Z
bool android::icu::impl::locale::LocaleValidityChecker_S_Where::set(std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> datatype,std::shared_ptr<java::lang::String> code)
{
	
	//    .param p1, "datatype"    # Landroid/icu/impl/ValidIdentifiers$Datatype;
	//    .param p2, "code"    # Ljava/lang/String;
	this->fieldFailure = datatype;
	this->codeFailure = code;
	return 0x0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LocaleValidityChecker_S_Where::toString()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	if ( this->fieldFailure )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("OK"));
label_goto_7:
	return cVar0;
label_cond_8:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("{")))->append(this->fieldFailure)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(this->codeFailure)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")))->toString();
	goto label_goto_7;

}


