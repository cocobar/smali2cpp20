// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$3$1.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_3_S_1.h"
#include "android.icu.impl.ICUResourceBundle_S_3.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Set.h"

// .method constructor <init>(Landroid/icu/impl/ICUResourceBundle$3;Ljava/util/Set;)V
android::icu::impl::ICUResourceBundle_S_3_S_1::ICUResourceBundle_S_3_S_1(std::shared_ptr<android::icu::impl::ICUResourceBundle_S_3> this_S_1,std::shared_ptr<java::util::Set> var1)
{
	
	//    .param p1, "this$1"    # Landroid/icu/impl/ICUResourceBundle$3;
	this->this_S_1 = this_S_1;
	this->val_S_names = var1;
	// 038    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public visit(Ljava/lang/String;)V
void android::icu::impl::ICUResourceBundle_S_3_S_1::visit(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	if ( !(s->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(".res")))) )  
		goto label_cond_19;
	//    .local v0, "locstr":Ljava/lang/String;
	this->val_S_names->add(s->substring(0x0, ( s->length() + -0x4)));
	//    .end local v0    # "locstr":Ljava/lang/String;
label_cond_19:
	return;

}


