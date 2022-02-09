// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BidiTransform$Order.smali
#include "java2ctype.h"
#include "android.icu.text.BidiTransform_S_Order.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::BidiTransform_S_Order::_S_VALUES;
static android::icu::text::BidiTransform_S_Order::LOGICAL;
static android::icu::text::BidiTransform_S_Order::VISUAL;
// .method static constructor <clinit>()V
void android::icu::text::BidiTransform_S_Order::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::BidiTransform_S_Order> cVar2;
	std::shared_ptr<android::icu::text::BidiTransform_S_Order> cVar3;
	std::shared<std::vector<std::vector<android::icu::text::BidiTransform_S_Order>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::text::BidiTransform_S_Order>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LOGICAL")), cVar1);
	android::icu::text::BidiTransform_S_Order::LOGICAL = cVar2;
	cVar3 = std::make_shared<android::icu::text::BidiTransform_S_Order>(std::make_shared<java::lang::String>(std::make_shared<char[]>("VISUAL")), cVar0);
	android::icu::text::BidiTransform_S_Order::VISUAL = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::text::BidiTransform_S_Order>>>(0x2);
	cVar4[cVar1] = android::icu::text::BidiTransform_S_Order::LOGICAL;
	cVar4[cVar0] = android::icu::text::BidiTransform_S_Order::VISUAL;
	android::icu::text::BidiTransform_S_Order::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::BidiTransform_S_Order::BidiTransform_S_Order(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/BidiTransform$Order;
std::shared_ptr<android::icu::text::BidiTransform_S_Order> android::icu::text::BidiTransform_S_Order::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::BidiTransform_S_Order> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::BidiTransform_S_Order(), name);
	cVar0->checkCast("android::icu::text::BidiTransform_S_Order");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/BidiTransform$Order;
std::shared_ptr<android::icu::text::BidiTransform_S_Order> android::icu::text::BidiTransform_S_Order::values()
{
	
	return android::icu::text::BidiTransform_S_Order::_S_VALUES;

}


