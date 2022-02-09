// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BreakTransliterator.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.BreakTransliterator_S_ReplaceableCharacterIterator.h"
#include "android.icu.text.BreakTransliterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.lang.System.h"

static android::icu::text::BreakTransliterator::LETTER_OR_MARK_MASK = 0x1fe;
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/UnicodeFilter;)V
android::icu::text::BreakTransliterator::BreakTransliterator(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::UnicodeFilter> filter)
{
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "filter"    # Landroid/icu/text/UnicodeFilter;
	android::icu::text::BreakTransliterator::(ID, filter, 0x0, std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")));
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/UnicodeFilter;Landroid/icu/text/BreakIterator;Ljava/lang/String;)V
android::icu::text::BreakTransliterator::BreakTransliterator(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::UnicodeFilter> filter,std::shared_ptr<android::icu::text::BreakIterator> bi,std::shared_ptr<java::lang::String> insertion)
{
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "filter"    # Landroid/icu/text/UnicodeFilter;
	//    .param p3, "bi"    # Landroid/icu/text/BreakIterator;
	//    .param p4, "insertion"    # Ljava/lang/String;
	android::icu::text::Transliterator::(ID, filter);
	this->boundaries = std::make_shared<std::vector<int[]>>(0x32);
	this->boundaryCount = 0x0;
	this->bi = bi;
	this->insertion = insertion;
	return;

}
// .method static register()V
void android::icu::text::BreakTransliterator::register()
{
	
	std::shared_ptr<android::icu::text::BreakTransliterator> trans;
	
	trans = std::make_shared<android::icu::text::BreakTransliterator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-BreakInternal")), 0x0);
	//    .local v0, "trans":Landroid/icu/text/Transliterator;
	android::icu::text::Transliterator::registerInstance(trans, 0x0);
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::BreakTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	//    .param p1, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	//    .local v0, "myFilter":Landroid/icu/text/UnicodeSet;
	if ( !(this->getFilterAsUnicodeSet(inputFilter)->size()) )  
		goto label_cond_f;
	targetSet->addAll(this->insertion);
label_cond_f:
	return;

}
// .method public getBreakIterator()Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakTransliterator::getBreakIterator()
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	if ( this->bi )     
		goto label_cond_12;
	cVar0 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("th_TH")));
	this->bi = android::icu::text::BreakIterator::getWordInstance(cVar0);
label_cond_12:
	return this->bi;

}
// .method public getInsertion()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::BreakTransliterator::getInsertion()
{
	
	return this->insertion;

}
// .method protected declared-synchronized handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::BreakTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos,bool incremental)
{
	
	int cVar0;
	int boundary;
	std::shared_ptr<android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator> cVar1;
	std::shared<std::vector<int[]>> temp;
	int cVar2;
	int delta;
	int cVar3;
	int cVar4;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "pos"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "incremental"    # Z
	cVar0 = 0x1;
	this->monitor_enter();
	try {
	//label_try_start_3:
	this->boundaryCount = 0x0;
	boundary = 0x0;
	//    .local v0, "boundary":I
	this->getBreakIterator();
	cVar1 = std::make_shared<android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator>(text, pos->start, pos->limit, pos->start);
	this->bi->setText(cVar1);
	boundary = this->bi->first();
label_goto_1f:
	if ( boundary == -0x1 )
		goto label_cond_75;
	if ( boundary >= pos->limit )
		goto label_cond_75;
	if ( boundary )     
		goto label_cond_2f;
label_cond_28:
label_goto_28:
	boundary = this->bi->next();
	goto label_goto_1f;
	// 241    .line 98
label_cond_2f:
	//    .local v1, "cp":I
	//    .local v5, "type":I
	if ( !(( (cVar0 << android::icu::lang::UCharacter::getType(android::icu::text::UTF16::charAt(text, ( boundary + -0x1)))) & 0x1fe)) )  
		goto label_cond_28;
	if ( !(( (cVar0 << android::icu::lang::UCharacter::getType(android::icu::text::UTF16::charAt(text, boundary))) & 0x1fe)) )  
		goto label_cond_28;
	if ( this->boundaryCount <  this->boundaries->size() )
		goto label_cond_67;
	temp = std::make_shared<std::vector<int[]>>(( this->boundaries->size() * 0x2));
	//    .local v4, "temp":[I
	java::lang::System::arraycopy(this->boundaries, 0x0, temp, 0x0, this->boundaries->size());
	this->boundaries = temp;
	//    .end local v4    # "temp":[I
label_cond_67:
	cVar2 = this->boundaryCount;
	this->boundaryCount = ( cVar2 + 0x1);
	this->boundaries[cVar2] = boundary;
	//label_try_end_71:
	}
	catch (...){
		goto label_catchall_72;
	}
	//    .catchall {:try_start_3 .. :try_end_71} :catchall_72
	goto label_goto_28;
	// 332    .end local v0    # "boundary":I
	// 333    .end local v1    # "cp":I
	// 334    .end local v5    # "type":I
label_catchall_72:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 342    .line 118
	// 343    .restart local v0    # "boundary":I
label_cond_75:
	delta = 0x0;
	//    .local v2, "delta":I
	0x0;
	//    .local v3, "lastBoundary":I
	try {
	//label_try_start_77:
	if ( !(this->boundaryCount) )  
		goto label_cond_a1;
	delta = (this->boundaryCount * this->insertion->length());
label_goto_8d:
	if ( this->boundaryCount <= 0 )
		goto label_cond_a1;
	cVar3 = ( this->boundaryCount + -0x1);
	this->boundaryCount = cVar3;
	boundary = this->boundaries[cVar3];
	text->replace(boundary, boundary, this->insertion);
	goto label_goto_8d;
	// 402    .line 134
label_cond_a1:
	pos->contextLimit = (pos->contextLimit +  delta);
	pos->limit = (pos->limit +  delta);
	if ( !(incremental) )  
		goto label_cond_b3;
	cVar4 = (this->boundaries[( this->boundaryCount + -0x1)] + delta);
label_goto_af:
	pos->start = cVar4;
	//label_try_end_b1:
	}
	catch (...){
		goto label_catchall_72;
	}
	//    .catchall {:try_start_77 .. :try_end_b1} :catchall_72
	this->monitor_exit();
	return;
	// 432    .line 136
label_cond_b3:
	try {
	//label_try_start_b3:
	cVar4 = pos->limit;
	//label_try_end_b5:
	}
	catch (...){
		goto label_catchall_72;
	}
	//    .catchall {:try_start_b3 .. :try_end_b5} :catchall_72
	goto label_goto_af;

}
// .method public setBreakIterator(Landroid/icu/text/BreakIterator;)V
void android::icu::text::BreakTransliterator::setBreakIterator(std::shared_ptr<android::icu::text::BreakIterator> bi)
{
	
	//    .param p1, "bi"    # Landroid/icu/text/BreakIterator;
	this->bi = bi;
	return;

}
// .method public setInsertion(Ljava/lang/String;)V
void android::icu::text::BreakTransliterator::setInsertion(std::shared_ptr<java::lang::String> insertion)
{
	
	//    .param p1, "insertion"    # Ljava/lang/String;
	this->insertion = insertion;
	return;

}


