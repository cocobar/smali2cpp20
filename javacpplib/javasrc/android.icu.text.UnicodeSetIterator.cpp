// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSetIterator.smali
#include "java2ctype.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.text.UnicodeSetIterator.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Iterator.h"
#include "java.util.TreeSet.h"

static android::icu::text::UnicodeSetIterator::IS_STRING;
// .method static constructor <clinit>()V
void android::icu::text::UnicodeSetIterator::static_cinit()
{
	
	android::icu::text::UnicodeSetIterator::IS_STRING = -0x1;
	return;

}
// .method public constructor <init>()V
android::icu::text::UnicodeSetIterator::UnicodeSetIterator()
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar1;
	
	cVar0 = 0x0;
	// 066    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->endRange = cVar0;
	this->range = cVar0;
	this->stringIterator = 0x0;
	cVar1 = std::make_shared<android::icu::text::UnicodeSet>();
	this->reset(cVar1);
	return;

}
// .method public constructor <init>(Landroid/icu/text/UnicodeSet;)V
android::icu::text::UnicodeSetIterator::UnicodeSetIterator(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	int cVar0;
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	cVar0 = 0x0;
	// 098    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->endRange = cVar0;
	this->range = cVar0;
	this->stringIterator = 0x0;
	this->reset(set);
	return;

}
// .method public getSet()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSetIterator::getSet()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 123    .end annotation
	return this->set;

}
// .method public getString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSetIterator::getString()
{
	
	if ( this->codepoint == android::icu::text::UnicodeSetIterator::IS_STRING )
		goto label_cond_d;
	return android::icu::text::UTF16::valueOf(this->codepoint);
	// 152    .line 219
label_cond_d:
	return this->string;

}
// .method protected loadRange(I)V
void android::icu::text::UnicodeSetIterator::loadRange(int aRange)
{
	
	//    .param p1, "aRange"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 163    .end annotation
	this->nextElement = this->set->getRangeStart(aRange);
	this->endElement = this->set->getRangeEnd(aRange);
	return;

}
// .method public next()Z
bool android::icu::text::UnicodeSetIterator::next()
{
	
	bool cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<java::lang::String> cVar4;
	
	cVar0 = 0x1;
	if ( this->nextElement >  this->endElement )
		goto label_cond_13;
	cVar1 = this->nextElement;
	this->nextElement = ( cVar1 + 0x1);
	this->codepointEnd = cVar1;
	this->codepoint = cVar1;
	return cVar0;
	// 217    .line 115
label_cond_13:
	if ( this->range >= this->endRange )
		goto label_cond_2d;
	cVar2 = ( this->range + 0x1);
	this->range = cVar2;
	this->loadRange(cVar2);
	cVar3 = this->nextElement;
	this->nextElement = ( cVar3 + 0x1);
	this->codepointEnd = cVar3;
	this->codepoint = cVar3;
	return cVar0;
	// 248    .line 123
label_cond_2d:
	if ( this->stringIterator )     
		goto label_cond_33;
	return 0x0;
	// 259    .line 126
label_cond_33:
	this->codepoint = android::icu::text::UnicodeSetIterator::IS_STRING;
	cVar4 = this->stringIterator->next();
	cVar4->checkCast("java::lang::String");
	this->string = cVar4;
	if ( this->stringIterator->hasNext() )     
		goto label_cond_4b;
	this->stringIterator = 0x0;
label_cond_4b:
	return cVar0;

}
// .method public nextRange()Z
bool android::icu::text::UnicodeSetIterator::nextRange()
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	
	cVar0 = 0x1;
	if ( this->nextElement >  this->endElement )
		goto label_cond_17;
	this->codepointEnd = this->endElement;
	this->codepoint = this->nextElement;
	this->nextElement = ( this->endElement + 0x1);
	return cVar0;
	// 328    .line 160
label_cond_17:
	if ( this->range >= this->endRange )
		goto label_cond_35;
	cVar1 = ( this->range + 0x1);
	this->range = cVar1;
	this->loadRange(cVar1);
	this->codepointEnd = this->endElement;
	this->codepoint = this->nextElement;
	this->nextElement = ( this->endElement + 0x1);
	return cVar0;
	// 365    .line 170
label_cond_35:
	if ( this->stringIterator )     
		goto label_cond_3b;
	return 0x0;
	// 376    .line 173
label_cond_3b:
	this->codepoint = android::icu::text::UnicodeSetIterator::IS_STRING;
	cVar2 = this->stringIterator->next();
	cVar2->checkCast("java::lang::String");
	this->string = cVar2;
	if ( this->stringIterator->hasNext() )     
		goto label_cond_53;
	this->stringIterator = 0x0;
label_cond_53:
	return cVar0;

}
// .method public reset()V
void android::icu::text::UnicodeSetIterator::reset()
{
	
	std::shared_ptr<java::util::Iterator> cVar0;
	int cVar1;
	
	cVar0 = 0x0;
	cVar1 = 0x0;
	this->endRange = ( this->set->getRangeCount() + -0x1);
	this->range = cVar1;
	this->endElement = -0x1;
	this->nextElement = cVar1;
	if ( this->endRange < 0 ) 
		goto label_cond_1c;
	this->loadRange(this->range);
label_cond_1c:
	this->stringIterator = cVar0;
	if ( !(this->set->strings) )  
		goto label_cond_38;
	this->stringIterator = this->set->strings->iterator();
	if ( this->stringIterator->hasNext() )     
		goto label_cond_38;
	this->stringIterator = cVar0;
label_cond_38:
	return;

}
// .method public reset(Landroid/icu/text/UnicodeSet;)V
void android::icu::text::UnicodeSetIterator::reset(std::shared_ptr<android::icu::text::UnicodeSet> uset)
{
	
	//    .param p1, "uset"    # Landroid/icu/text/UnicodeSet;
	this->set = uset;
	this->reset();
	return;

}


