// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleValidityChecker$SpecialCase.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.LocaleValidityChecker_S_SpecialCase.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::_S_VALUES;
static android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::anything;
static android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::codepoints;
static android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::normal;
static android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::reorder;
static android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::rgKey;
static android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::subdivision;
// .method static constructor <clinit>()V
void android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> cVar5;
	std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> cVar6;
	std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> cVar7;
	std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> cVar8;
	std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> cVar9;
	std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> cVar10;
	std::shared<std::vector<std::vector<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase>>> cVar11;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase>(std::make_shared<java::lang::String>(std::make_shared<char[]>("normal")), cVar4);
	android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::normal = cVar5;
	cVar6 = std::make_shared<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase>(std::make_shared<java::lang::String>(std::make_shared<char[]>("anything")), cVar3);
	android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::anything = cVar6;
	cVar7 = std::make_shared<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase>(std::make_shared<java::lang::String>(std::make_shared<char[]>("reorder")), cVar2);
	android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::reorder = cVar7;
	cVar8 = std::make_shared<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase>(std::make_shared<java::lang::String>(std::make_shared<char[]>("codepoints")), cVar1);
	android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::codepoints = cVar8;
	cVar9 = std::make_shared<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase>(std::make_shared<java::lang::String>(std::make_shared<char[]>("subdivision")), cVar0);
	android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::subdivision = cVar9;
	cVar10 = std::make_shared<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase>(std::make_shared<java::lang::String>(std::make_shared<char[]>("rgKey")), 0x5);
	android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::rgKey = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase>>>(0x6);
	cVar11[cVar4] = android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::normal;
	cVar11[cVar3] = android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::anything;
	cVar11[cVar2] = android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::reorder;
	cVar11[cVar1] = android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::codepoints;
	cVar11[cVar0] = android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::subdivision;
	cVar11[0x5] = android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::rgKey;
	android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::_S_VALUES = cVar11;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::LocaleValidityChecker_S_SpecialCase(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method static get(Ljava/lang/String;)Landroid/icu/impl/locale/LocaleValidityChecker$SpecialCase;
std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::get(std::shared_ptr<java::lang::String> key)
{
	
	//    .param p0, "key"    # Ljava/lang/String;
	if ( !(key->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("kr")))) )  
		goto label_cond_c;
	return android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::reorder;
	// 173    .line 125
label_cond_c:
	if ( !(key->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("vt")))) )  
		goto label_cond_18;
	return android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::codepoints;
	// 188    .line 127
label_cond_18:
	if ( !(key->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("sd")))) )  
		goto label_cond_24;
	return android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::subdivision;
	// 203    .line 129
label_cond_24:
	if ( !(key->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("rg")))) )  
		goto label_cond_30;
	return android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::rgKey;
	// 218    .line 131
label_cond_30:
	if ( !(key->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("x0")))) )  
		goto label_cond_3c;
	return android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::anything;
	// 233    .line 134
label_cond_3c:
	return android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::normal;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/locale/LocaleValidityChecker$SpecialCase;
std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase(), name);
	cVar0->checkCast("android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/locale/LocaleValidityChecker$SpecialCase;
std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::values()
{
	
	return android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::_S_VALUES;

}


