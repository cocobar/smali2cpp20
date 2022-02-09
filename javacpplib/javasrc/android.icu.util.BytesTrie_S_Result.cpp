// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrie$Result.smali
#include "java2ctype.h"
#include "android.icu.util.BytesTrie_S_Result.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::util::BytesTrie_S_Result::_S_VALUES;
static android::icu::util::BytesTrie_S_Result::FINAL_VALUE;
static android::icu::util::BytesTrie_S_Result::INTERMEDIATE_VALUE;
static android::icu::util::BytesTrie_S_Result::NO_MATCH;
static android::icu::util::BytesTrie_S_Result::NO_VALUE;
// .method static constructor <clinit>()V
void android::icu::util::BytesTrie_S_Result::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar4;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar5;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar6;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar7;
	std::shared<std::vector<std::vector<android::icu::util::BytesTrie_S_Result>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::util::BytesTrie_S_Result>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NO_MATCH")), cVar3);
	android::icu::util::BytesTrie_S_Result::NO_MATCH = cVar4;
	cVar5 = std::make_shared<android::icu::util::BytesTrie_S_Result>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NO_VALUE")), cVar2);
	android::icu::util::BytesTrie_S_Result::NO_VALUE = cVar5;
	cVar6 = std::make_shared<android::icu::util::BytesTrie_S_Result>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FINAL_VALUE")), cVar1);
	android::icu::util::BytesTrie_S_Result::FINAL_VALUE = cVar6;
	cVar7 = std::make_shared<android::icu::util::BytesTrie_S_Result>(std::make_shared<java::lang::String>(std::make_shared<char[]>("INTERMEDIATE_VALUE")), cVar0);
	android::icu::util::BytesTrie_S_Result::INTERMEDIATE_VALUE = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::util::BytesTrie_S_Result>>>(0x4);
	cVar8[cVar3] = android::icu::util::BytesTrie_S_Result::NO_MATCH;
	cVar8[cVar2] = android::icu::util::BytesTrie_S_Result::NO_VALUE;
	cVar8[cVar1] = android::icu::util::BytesTrie_S_Result::FINAL_VALUE;
	cVar8[cVar0] = android::icu::util::BytesTrie_S_Result::INTERMEDIATE_VALUE;
	android::icu::util::BytesTrie_S_Result::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::util::BytesTrie_S_Result::BytesTrie_S_Result(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::BytesTrie_S_Result::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::util::BytesTrie_S_Result(), name);
	cVar0->checkCast("android::icu::util::BytesTrie_S_Result");
	return cVar0;

}
// .method public static values()[Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::BytesTrie_S_Result::values()
{
	
	return android::icu::util::BytesTrie_S_Result::_S_VALUES;

}
// .method public hasNext()Z
bool android::icu::util::BytesTrie_S_Result::hasNext()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( !(( this->ordinal() & 0x1)) )  
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method public hasValue()Z
bool android::icu::util::BytesTrie_S_Result::hasValue()
{
	
	bool cVar0;
	
	if ( this->ordinal() <  0x2 )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method public matches()Z
bool android::icu::util::BytesTrie_S_Result::matches()
{
	
	bool cVar0;
	
	if ( this == android::icu::util::BytesTrie_S_Result::NO_MATCH )
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}


