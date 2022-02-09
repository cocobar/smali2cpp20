// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BidiTransform$ReorderingScheme$4.smali
#include "java2ctype.h"
#include "android.icu.text.BidiTransform_S_Order.h"
#include "android.icu.text.BidiTransform_S_ReorderingScheme_S_4.h"
#include "android.icu.text.BidiTransform_S_ReorderingScheme.h"
#include "android.icu.text.BidiTransform.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;I)V
android::icu::text::BidiTransform_S_ReorderingScheme_S_4::BidiTransform_S_ReorderingScheme_S_4(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	android::icu::text::BidiTransform_S_ReorderingScheme::(var0, var1, 0x0);
	return;

}
// .method doTransform(Landroid/icu/text/BidiTransform;)V
void android::icu::text::BidiTransform_S_ReorderingScheme_S_4::doTransform(std::shared_ptr<android::icu::text::BidiTransform> transform)
{
	
	int cVar0;
	
	//    .param p1, "transform"    # Landroid/icu/text/BidiTransform;
	cVar0 = 0x0;
	android::icu::text::BidiTransform::-wrap6(transform, 0x1, cVar0);
	android::icu::text::BidiTransform::-wrap5(transform);
	android::icu::text::BidiTransform::-wrap8(transform, cVar0, 0x4);
	android::icu::text::BidiTransform::-wrap7(transform);
	return;

}
// .method matches(BLandroid/icu/text/BidiTransform$Order;BLandroid/icu/text/BidiTransform$Order;)Z
bool android::icu::text::BidiTransform_S_ReorderingScheme_S_4::matches(unsigned char inLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> inOrder,unsigned char outLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> outOrder)
{
	
	bool cVar0;
	
	//    .param p1, "inLevel"    # B
	//    .param p2, "inOrder"    # Landroid/icu/text/BidiTransform$Order;
	//    .param p3, "outLevel"    # B
	//    .param p4, "outOrder"    # Landroid/icu/text/BidiTransform$Order;
	if ( !(android::icu::text::BidiTransform::-wrap2(inLevel)) )  
		goto label_cond_17;
	if ( !(android::icu::text::BidiTransform::-wrap1(inOrder)) )  
		goto label_cond_17;
	if ( !(android::icu::text::BidiTransform::-wrap2(outLevel)) )  
		goto label_cond_17;
	cVar0 = android::icu::text::BidiTransform::-wrap3(outOrder);
label_goto_16:
	return cVar0;
label_cond_17:
	cVar0 = 0x0;
	goto label_goto_16;

}


