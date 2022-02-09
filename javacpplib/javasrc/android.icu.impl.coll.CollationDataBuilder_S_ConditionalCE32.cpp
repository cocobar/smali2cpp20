// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationDataBuilder$ConditionalCE32.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_ConditionalCE32.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;I)V
android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32::CollationDataBuilder_S_ConditionalCE32(std::shared_ptr<java::lang::String> ct,int ce)
{
	
	int cVar0;
	
	//    .param p1, "ct"    # Ljava/lang/String;
	//    .param p2, "ce"    # I
	cVar0 = 0x1;
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->context = ct;
	this->ce32 = ce;
	this->defaultCE32 = cVar0;
	this->builtCE32 = cVar0;
	this->next = -0x1;
	return;

}
// .method hasContext()Z
bool android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32::hasContext()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	if ( this->context->length() <= cVar0 )
		goto label_cond_a;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method prefixLength()I
int android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32::prefixLength()
{
	
	return this->context->charAt(0x0);

}


