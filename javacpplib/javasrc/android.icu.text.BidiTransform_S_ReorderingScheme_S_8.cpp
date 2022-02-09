// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BidiTransform$ReorderingScheme$8.smali
#include "java2ctype.h"
#include "android.icu.text.BidiTransform_S_Order.h"
#include "android.icu.text.BidiTransform_S_ReorderingScheme_S_8.h"
#include "android.icu.text.BidiTransform_S_ReorderingScheme.h"
#include "android.icu.text.BidiTransform.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;I)V
android::icu::text::BidiTransform_S_ReorderingScheme_S_8::BidiTransform_S_ReorderingScheme_S_8(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	android::icu::text::BidiTransform_S_ReorderingScheme::(var0, var1, 0x0);
	return;

}
// .method doTransform(Landroid/icu/text/BidiTransform;)V
void android::icu::text::BidiTransform_S_ReorderingScheme_S_8::doTransform(std::shared_ptr<android::icu::text::BidiTransform> transform)
{
	
	unsigned char cVar0;
	
	//    .param p1, "transform"    # Landroid/icu/text/BidiTransform;
	cVar0 = 0x0;
	android::icu::text::BidiTransform::-wrap7(transform);
	android::icu::text::BidiTransform::-wrap6(transform, cVar0, 0x5);
	android::icu::text::BidiTransform::-wrap5(transform);
	android::icu::text::BidiTransform::-wrap8(transform, cVar0, cVar0);
	return;

}
// .method matches(BLandroid/icu/text/BidiTransform$Order;BLandroid/icu/text/BidiTransform$Order;)Z
bool android::icu::text::BidiTransform_S_ReorderingScheme_S_8::matches(unsigned char inLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> inOrder,unsigned char outLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> outOrder)
{
	
	bool cVar0;
	
	//    .param p1, "inLevel"    # B
	//    .param p2, "inOrder"    # Landroid/icu/text/BidiTransform$Order;
	//    .param p3, "outLevel"    # B
	//    .param p4, "outOrder"    # Landroid/icu/text/BidiTransform$Order;
	if ( !(android::icu::text::BidiTransform::-wrap2(inLevel)) )  
		goto label_cond_17;
	if ( !(android::icu::text::BidiTransform::-wrap3(inOrder)) )  
		goto label_cond_17;
	if ( !(android::icu::text::BidiTransform::-wrap0(outLevel)) )  
		goto label_cond_17;
	cVar0 = android::icu::text::BidiTransform::-wrap1(outOrder);
label_goto_16:
	return cVar0;
label_cond_17:
	cVar0 = 0x0;
	goto label_goto_16;

}

