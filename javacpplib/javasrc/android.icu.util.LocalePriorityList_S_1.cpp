// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\LocalePriorityList$1.smali
#include "java2ctype.h"
#include "android.icu.util.LocalePriorityList_S_1.h"
#include "java.lang.Double.h"

// .method constructor <init>()V
android::icu::util::LocalePriorityList_S_1::LocalePriorityList_S_1()
{
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public compare(Ljava/lang/Double;Ljava/lang/Double;)I
int android::icu::util::LocalePriorityList_S_1::compare(std::shared_ptr<java::lang::Double> o1,std::shared_ptr<java::lang::Double> o2)
{
	
	int cVar1;
	int result;
	
	//    .param p1, "o1"    # Ljava/lang/Double;
	//    .param p2, "o2"    # Ljava/lang/Double;
	cVar1 = 0x0;
	result = o1->compareTo(o2);
	//    .local v0, "result":I
	if ( result <= 0 )
		goto label_cond_9;
	cVar1 = -0x1;
label_cond_8:
label_goto_8:
	return cVar1;
label_cond_9:
	if ( result >= 0 )
		goto label_cond_8;
	cVar1 = 0x1;
	goto label_goto_8;

}


