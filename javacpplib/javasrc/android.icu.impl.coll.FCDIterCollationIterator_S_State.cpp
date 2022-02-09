// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\FCDIterCollationIterator$State.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.FCDIterCollationIterator_S_State.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::coll::FCDIterCollationIterator_S_State::_S_VALUES;
static android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_LIMIT;
static android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_START;
static android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_BWD;
static android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_FWD;
static android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT;
// .method static constructor <clinit>()V
void android::icu::impl::coll::FCDIterCollationIterator_S_State::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> cVar5;
	std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> cVar6;
	std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> cVar7;
	std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> cVar8;
	std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> cVar9;
	std::shared<std::vector<std::vector<android::icu::impl::coll::FCDIterCollationIterator_S_State>>> cVar10;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::impl::coll::FCDIterCollationIterator_S_State>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ITER_CHECK_FWD")), cVar4);
	android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_FWD = cVar5;
	cVar6 = std::make_shared<android::icu::impl::coll::FCDIterCollationIterator_S_State>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ITER_CHECK_BWD")), cVar3);
	android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_BWD = cVar6;
	cVar7 = std::make_shared<android::icu::impl::coll::FCDIterCollationIterator_S_State>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ITER_IN_FCD_SEGMENT")), cVar2);
	android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT = cVar7;
	cVar8 = std::make_shared<android::icu::impl::coll::FCDIterCollationIterator_S_State>(std::make_shared<java::lang::String>(std::make_shared<char[]>("IN_NORM_ITER_AT_LIMIT")), cVar1);
	android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_LIMIT = cVar8;
	cVar9 = std::make_shared<android::icu::impl::coll::FCDIterCollationIterator_S_State>(std::make_shared<java::lang::String>(std::make_shared<char[]>("IN_NORM_ITER_AT_START")), cVar0);
	android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_START = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<android::icu::impl::coll::FCDIterCollationIterator_S_State>>>(0x5);
	cVar10[cVar4] = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_FWD;
	cVar10[cVar3] = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_BWD;
	cVar10[cVar2] = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT;
	cVar10[cVar1] = android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_LIMIT;
	cVar10[cVar0] = android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_START;
	android::icu::impl::coll::FCDIterCollationIterator_S_State::_S_VALUES = cVar10;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::impl::coll::FCDIterCollationIterator_S_State::FCDIterCollationIterator_S_State(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/coll/FCDIterCollationIterator$State;
std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> android::icu::impl::coll::FCDIterCollationIterator_S_State::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::coll::FCDIterCollationIterator_S_State(), name);
	cVar0->checkCast("android::icu::impl::coll::FCDIterCollationIterator_S_State");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/coll/FCDIterCollationIterator$State;
std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> android::icu::impl::coll::FCDIterCollationIterator_S_State::values()
{
	
	return android::icu::impl::coll::FCDIterCollationIterator_S_State::_S_VALUES;

}


