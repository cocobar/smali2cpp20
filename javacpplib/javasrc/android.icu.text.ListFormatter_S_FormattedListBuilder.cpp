// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ListFormatter$FormattedListBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "android.icu.text.ListFormatter_S_FormattedListBuilder.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Ljava/lang/Object;Z)V
android::icu::text::ListFormatter_S_FormattedListBuilder::ListFormatter_S_FormattedListBuilder(std::shared_ptr<java::lang::Object> start,bool recordOffset)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	int cVar1;
	
	//    .param p1, "start"    # Ljava/lang/Object;
	//    .param p2, "recordOffset"    # Z
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::lang::StringBuilder>(start->toString());
	this->current = cVar0;
	if ( !(recordOffset) )  
		goto label_cond_14;
	cVar1 = 0x0;
label_goto_11:
	this->offset = cVar1;
	return;
	// 055    .line 260
label_cond_14:
	cVar1 = -0x1;
	goto label_goto_11;

}
// .method private offsetRecorded()Z
bool android::icu::text::ListFormatter_S_FormattedListBuilder::offsetRecorded()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->offset < 0 ) 
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method public append(Ljava/lang/String;Ljava/lang/Object;Z)Landroid/icu/text/ListFormatter$FormattedListBuilder;
std::shared_ptr<android::icu::text::ListFormatter_S_FormattedListBuilder> android::icu::text::ListFormatter_S_FormattedListBuilder::append(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::Object> next,bool recordOffset)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared<std::vector<int[]>> cVar4;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<int[]> cVar4;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "next"    # Ljava/lang/Object;
	//    .param p3, "recordOffset"    # Z
	cVar0 = 0x2;
	cVar1 = -0x1;
	cVar2 = 0x1;
	cVar3 = 0x0;
	if ( recordOffset )     
		goto label_cond_c;
	if ( !(this->offsetRecorded()) )  
		goto label_cond_43;
label_cond_c:
	cVar4 = std::make_shared<std::vector<int[]>>(cVar0);
label_goto_e:
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(cVar0);
	cVar5[cVar3] = this->current;
	cVar5[cVar2] = next->toString();
	android::icu::impl::SimpleFormatterImpl::formatAndReplace(pattern, this->current, cVar4, cVar5);
	if ( !(cVar4) )  
		goto label_cond_4b;
	if ( cVar4[cVar3] == cVar1 )
		goto label_cond_29;
	if ( cVar4[cVar2] != cVar1 )
		goto label_cond_45;
label_cond_29:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} or {1} missing from pattern ")))->append(pattern)->toString());
	// throw
	throw cVar6;
	// 169    .line 268
label_cond_43:
	cVar4 = 0x0;
	//    .local v0, "offsets":[I
	goto label_goto_e;
	// 176    .line 276
	// 177    .end local v0    # "offsets":[I
label_cond_45:
	if ( !(recordOffset) )  
		goto label_cond_4c;
	this->offset = cVar4[cVar2];
label_cond_4b:
label_goto_4b:
	return this;
	// 191    .line 279
label_cond_4c:
	this->offset = (this->offset +  cVar4[cVar3]);
	goto label_goto_4b;

}
// .method public getOffset()I
int android::icu::text::ListFormatter_S_FormattedListBuilder::getOffset()
{
	
	return this->offset;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ListFormatter_S_FormattedListBuilder::toString()
{
	
	return this->current->toString();

}


