// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\StandardPlural.smali
#include "java2ctype.h"
#include "android.icu.impl.StandardPlural.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Enum.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Arrays.h"
#include "java.util.Collections.h"
#include "java.util.List.h"

static android::icu::impl::StandardPlural::_S_VALUES;
static android::icu::impl::StandardPlural::COUNT;
static android::icu::impl::StandardPlural::FEW;
static android::icu::impl::StandardPlural::MANY;
static android::icu::impl::StandardPlural::ONE;
static android::icu::impl::StandardPlural::OTHER;
static android::icu::impl::StandardPlural::OTHER_INDEX;
static android::icu::impl::StandardPlural::TWO;
static android::icu::impl::StandardPlural::VALUES;
static android::icu::impl::StandardPlural::ZERO;
// .method static constructor <clinit>()V
void android::icu::impl::StandardPlural::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::impl::StandardPlural> cVar5;
	std::shared_ptr<android::icu::impl::StandardPlural> cVar6;
	std::shared_ptr<android::icu::impl::StandardPlural> cVar7;
	std::shared_ptr<android::icu::impl::StandardPlural> cVar8;
	std::shared_ptr<android::icu::impl::StandardPlural> cVar9;
	std::shared_ptr<android::icu::impl::StandardPlural> cVar10;
	std::shared<std::vector<std::vector<android::icu::impl::StandardPlural>>> cVar11;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::impl::StandardPlural>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ZERO")), cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("zero")));
	android::icu::impl::StandardPlural::ZERO = cVar5;
	cVar6 = std::make_shared<android::icu::impl::StandardPlural>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ONE")), cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("one")));
	android::icu::impl::StandardPlural::ONE = cVar6;
	cVar7 = std::make_shared<android::icu::impl::StandardPlural>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TWO")), cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("two")));
	android::icu::impl::StandardPlural::TWO = cVar7;
	cVar8 = std::make_shared<android::icu::impl::StandardPlural>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FEW")), cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("few")));
	android::icu::impl::StandardPlural::FEW = cVar8;
	cVar9 = std::make_shared<android::icu::impl::StandardPlural>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MANY")), cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("many")));
	android::icu::impl::StandardPlural::MANY = cVar9;
	cVar10 = std::make_shared<android::icu::impl::StandardPlural>(std::make_shared<java::lang::String>(std::make_shared<char[]>("OTHER")), 0x5, std::make_shared<java::lang::String>(std::make_shared<char[]>("other")));
	android::icu::impl::StandardPlural::OTHER = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<android::icu::impl::StandardPlural>>>(0x6);
	cVar11[cVar4] = android::icu::impl::StandardPlural::ZERO;
	cVar11[cVar3] = android::icu::impl::StandardPlural::ONE;
	cVar11[cVar2] = android::icu::impl::StandardPlural::TWO;
	cVar11[cVar1] = android::icu::impl::StandardPlural::FEW;
	cVar11[cVar0] = android::icu::impl::StandardPlural::MANY;
	cVar11[0x5] = android::icu::impl::StandardPlural::OTHER;
	android::icu::impl::StandardPlural::_S_VALUES = cVar11;
	android::icu::impl::StandardPlural::OTHER_INDEX = android::icu::impl::StandardPlural::OTHER->ordinal();
	android::icu::impl::StandardPlural::VALUES = java::util::Collections::unmodifiableList(java::util::Arrays::asList(android::icu::impl::StandardPlural::values({const[class].FS-Param})));
	android::icu::impl::StandardPlural::COUNT = android::icu::impl::StandardPlural::VALUES->size();
	return;

}
// .method private constructor <init>(Ljava/lang/String;ILjava/lang/String;)V
android::icu::impl::StandardPlural::StandardPlural(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<java::lang::String> kw)
{
	
	//    .param p3, "kw"    # Ljava/lang/String;
	java::lang::Enum::(var0, var1);
	this->keyword = kw;
	return;

}
// .method public static final fromString(Ljava/lang/CharSequence;)Landroid/icu/impl/StandardPlural;
std::shared_ptr<android::icu::impl::StandardPlural> android::icu::impl::StandardPlural::fromString(std::shared_ptr<java::lang::CharSequence> keyword)
{
	
	std::shared_ptr<android::icu::impl::StandardPlural> p;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "keyword"    # Ljava/lang/CharSequence;
	p = android::icu::impl::StandardPlural::orNullFromString(keyword);
	//    .local v0, "p":Landroid/icu/impl/StandardPlural;
	if ( !(p) )  
		goto label_cond_7;
	return p;
	// 238    .line 111
label_cond_7:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(keyword->toString());
	// throw
	throw cVar0;

}
// .method public static final indexFromString(Ljava/lang/CharSequence;)I
int android::icu::impl::StandardPlural::indexFromString(std::shared_ptr<java::lang::CharSequence> keyword)
{
	
	std::shared_ptr<android::icu::impl::StandardPlural> p;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "keyword"    # Ljava/lang/CharSequence;
	p = android::icu::impl::StandardPlural::orNullFromString(keyword);
	//    .local v0, "p":Landroid/icu/impl/StandardPlural;
	if ( !(p) )  
		goto label_cond_b;
	return p->ordinal();
	// 272    .line 143
label_cond_b:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(keyword->toString());
	// throw
	throw cVar0;

}
// .method public static final indexOrNegativeFromString(Ljava/lang/CharSequence;)I
int android::icu::impl::StandardPlural::indexOrNegativeFromString(std::shared_ptr<java::lang::CharSequence> keyword)
{
	
	std::shared_ptr<android::icu::impl::StandardPlural> p;
	int cVar0;
	
	//    .param p0, "keyword"    # Ljava/lang/CharSequence;
	p = android::icu::impl::StandardPlural::orNullFromString(keyword);
	//    .local v0, "p":Landroid/icu/impl/StandardPlural;
	if ( !(p) )  
		goto label_cond_b;
	cVar0 = p->ordinal();
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = -0x1;
	goto label_goto_a;

}
// .method public static final indexOrOtherIndexFromString(Ljava/lang/CharSequence;)I
int android::icu::impl::StandardPlural::indexOrOtherIndexFromString(std::shared_ptr<java::lang::CharSequence> keyword)
{
	
	std::shared_ptr<android::icu::impl::StandardPlural> p;
	int cVar0;
	
	//    .param p0, "keyword"    # Ljava/lang/CharSequence;
	p = android::icu::impl::StandardPlural::orNullFromString(keyword);
	//    .local v0, "p":Landroid/icu/impl/StandardPlural;
	if ( !(p) )  
		goto label_cond_b;
	cVar0 = p->ordinal();
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = android::icu::impl::StandardPlural::OTHER->ordinal();
	goto label_goto_a;

}
// .method public static final orNullFromString(Ljava/lang/CharSequence;)Landroid/icu/impl/StandardPlural;
std::shared_ptr<android::icu::impl::StandardPlural> android::icu::impl::StandardPlural::orNullFromString(std::shared_ptr<java::lang::CharSequence> keyword)
{
	
	//    .param p0, "keyword"    # Ljava/lang/CharSequence;
	// switch
	{
	auto item = ( keyword->length() );
	if (item == 3) goto label_pswitch_9;
	if (item == 4) goto label_pswitch_2d;
	if (item == 5) goto label_pswitch_45;
	}
label_cond_7:
	return 0x0;
	// 361    .line 66
label_pswitch_9:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("one"))->contentEquals(keyword)) )  
		goto label_cond_15;
	return android::icu::impl::StandardPlural::ONE;
	// 376    .line 68
label_cond_15:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("two"))->contentEquals(keyword)) )  
		goto label_cond_21;
	return android::icu::impl::StandardPlural::TWO;
	// 391    .line 70
label_cond_21:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("few"))->contentEquals(keyword)) )  
		goto label_cond_7;
	return android::icu::impl::StandardPlural::FEW;
	// 406    .line 75
label_pswitch_2d:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("many"))->contentEquals(keyword)) )  
		goto label_cond_39;
	return android::icu::impl::StandardPlural::MANY;
	// 421    .line 77
label_cond_39:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"))->contentEquals(keyword)) )  
		goto label_cond_7;
	return android::icu::impl::StandardPlural::ZERO;
	// 436    .line 82
label_pswitch_45:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("other"))->contentEquals(keyword)) )  
		goto label_cond_7;
	return android::icu::impl::StandardPlural::OTHER;
	// 451    .line 64
	// 452    nop
	// 454    :pswitch_data_52
	// 455    .packed-switch 0x3
	// 456        :pswitch_9
	// 457        :pswitch_2d
	// 458        :pswitch_45
	// 459    .end packed-switch

}
// .method public static final orOtherFromString(Ljava/lang/CharSequence;)Landroid/icu/impl/StandardPlural;
std::shared_ptr<android::icu::impl::StandardPlural> android::icu::impl::StandardPlural::orOtherFromString(std::shared_ptr<java::lang::CharSequence> keyword)
{
	
	std::shared_ptr<android::icu::impl::StandardPlural> p;
	
	//    .param p0, "keyword"    # Ljava/lang/CharSequence;
	p = android::icu::impl::StandardPlural::orNullFromString(keyword);
	//    .local v0, "p":Landroid/icu/impl/StandardPlural;
	if ( !(p) )  
		goto label_cond_7;
	//    .end local v0    # "p":Landroid/icu/impl/StandardPlural;
label_goto_6:
	return p;
	// 480    .restart local v0    # "p":Landroid/icu/impl/StandardPlural;
label_cond_7:
	p = android::icu::impl::StandardPlural::OTHER;
	goto label_goto_6;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/StandardPlural;
std::shared_ptr<android::icu::impl::StandardPlural> android::icu::impl::StandardPlural::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::StandardPlural> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::StandardPlural(), name);
	cVar0->checkCast("android::icu::impl::StandardPlural");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/StandardPlural;
std::shared_ptr<android::icu::impl::StandardPlural> android::icu::impl::StandardPlural::values()
{
	
	return android::icu::impl::StandardPlural::_S_VALUES;

}
// .method public final getKeyword()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::StandardPlural::getKeyword()
{
	
	return this->keyword;

}


