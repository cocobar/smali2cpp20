// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\PropsVectors$1.smali
#include "java2ctype.h"
#include "android.icu.impl.PropsVectors_S_1.h"
#include "android.icu.impl.PropsVectors.h"
#include "java.lang.Integer.h"

// .method constructor <init>(Landroid/icu/impl/PropsVectors;)V
android::icu::impl::PropsVectors_S_1::PropsVectors_S_1(std::shared_ptr<android::icu::impl::PropsVectors> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/PropsVectors;
	this->this_S_0 = this_S_0;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public compare(Ljava/lang/Integer;Ljava/lang/Integer;)I
int android::icu::impl::PropsVectors_S_1::compare(std::shared_ptr<java::lang::Integer> o1,std::shared_ptr<java::lang::Integer> o2)
{
	
	int indexOfRow1;
	int indexOfRow2;
	int index;
	int cVar0;
	int count;
	
	//    .param p1, "o1"    # Ljava/lang/Integer;
	//    .param p2, "o2"    # Ljava/lang/Integer;
	indexOfRow1 = o1->intValue();
	//    .local v2, "indexOfRow1":I
	indexOfRow2 = o2->intValue();
	//    .local v3, "indexOfRow2":I
	//    .local v0, "count":I
	index = 0x2;
	//    .local v1, "index":I
label_cond_10:
	if ( android::icu::impl::PropsVectors::-get1(this->this_S_0)[(indexOfRow1 + index)] == android::icu::impl::PropsVectors::-get1(this->this_S_0)[(indexOfRow2 + index)] )
		goto label_cond_40;
	if ( android::icu::impl::PropsVectors::-get1(this->this_S_0)[(indexOfRow1 + index)] >= android::icu::impl::PropsVectors::-get1(this->this_S_0)[(indexOfRow2 + index)] )
		goto label_cond_3e;
	cVar0 = -0x1;
label_goto_3d:
	return cVar0;
	// 136    .line 399
label_cond_3e:
	cVar0 = 0x1;
	goto label_goto_3d;
	// 142    .line 401
label_cond_40:
	index = ( index + 0x1);
	if ( index != android::icu::impl::PropsVectors::-get0(this->this_S_0) )
		goto label_cond_4b;
	index = 0x0;
label_cond_4b:
	count = ( count + -0x1);
	if ( count > 0 ) 
		goto label_cond_10;
	return 0x0;

}


