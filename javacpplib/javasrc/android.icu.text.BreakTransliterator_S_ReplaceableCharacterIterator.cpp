// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BreakTransliterator$ReplaceableCharacterIterator.smali
#include "java2ctype.h"
#include "android.icu.text.BreakTransliterator_S_ReplaceableCharacterIterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method public constructor <init>(Landroid/icu/text/Replaceable;III)V
android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::BreakTransliterator_S_ReplaceableCharacterIterator(std::shared_ptr<android::icu::text::Replaceable> text,int begin,int end,int pos)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "begin"    # I
	//    .param p3, "end"    # I
	//    .param p4, "pos"    # I
	// 040    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( text )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 052    .line 198
label_cond_b:
	this->text = text;
	if ( begin < 0 ) 
		goto label_cond_11;
	if ( begin <= end )
		goto label_cond_1a;
label_cond_11:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid substring range")));
	// throw
	throw cVar1;
	// 071    .line 200
label_cond_1a:
	if ( end >  text->length() )
		goto label_cond_11;
	if ( pos <  begin )
		goto label_cond_24;
	if ( pos <= end )
		goto label_cond_2d;
label_cond_24:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid position")));
	// throw
	throw cVar2;
	// 094    .line 208
label_cond_2d:
	this->begin = begin;
	this->end = end;
	this->pos = pos;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::clone()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar0;
	std::shared_ptr<android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator> other;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	other = this->clone();
	other->checkCast("android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator");
	//label_try_end_6:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_6} :catch_7
	//    .local v1, "other":Landroid/icu/text/BreakTransliterator$ReplaceableCharacterIterator;
	return other;
	// 128    .line 401
	// 129    .end local v1    # "other":Landroid/icu/text/BreakTransliterator$ReplaceableCharacterIterator;
label_catch_7:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar0 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>();
	// throw
	throw cVar0;

}
// .method public current()C
char android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::current()
{
	
	if ( this->pos <  this->begin )
		goto label_cond_15;
	if ( this->pos >= this->end )
		goto label_cond_15;
	return this->text->charAt(this->pos);
	// 170    .line 282
label_cond_15:
	return 0xffff;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator> that;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return cVar0;
	// 192    .line 361
label_cond_5:
	if ( obj->instanceOf("android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	that = obj;
	that->checkCast("android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator");
	//    .local v0, "that":Landroid/icu/text/BreakTransliterator$ReplaceableCharacterIterator;
	if ( this->hashCode() == that->hashCode() )
		goto label_cond_18;
	return cVar1;
	// 222    .line 370
label_cond_18:
	if ( this->text->equals(that->text) )     
		goto label_cond_23;
	return cVar1;
	// 237    .line 373
label_cond_23:
	if ( this->pos != that->pos )
		goto label_cond_2f;
	if ( this->begin == that->begin )
		goto label_cond_30;
label_cond_2f:
	return cVar1;
	// 255    .line 373
label_cond_30:
	if ( this->end != that->end )
		goto label_cond_2f;
	return cVar0;

}
// .method public first()C
char android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::first()
{
	
	this->pos = this->begin;
	return this->current();

}
// .method public getBeginIndex()I
int android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::getBeginIndex()
{
	
	return this->begin;

}
// .method public getEndIndex()I
int android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::getEndIndex()
{
	
	return this->end;

}
// .method public getIndex()I
int android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::getIndex()
{
	
	return this->pos;

}
// .method public hashCode()I
int android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::hashCode()
{
	
	return (((this->text->hashCode() ^  this->pos) ^  this->begin) ^  this->end);

}
// .method public last()C
char android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::last()
{
	
	if ( this->end == this->begin )
		goto label_cond_11;
	this->pos = ( this->end + -0x1);
label_goto_c:
	return this->current();
	// 366    .line 252
label_cond_11:
	this->pos = this->end;
	goto label_goto_c;

}
// .method public next()C
char android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::next()
{
	
	if ( this->pos >= ( this->end + -0x1) )
		goto label_cond_17;
	this->pos = ( this->pos + 0x1);
	return this->text->charAt(this->pos);
	// 406    .line 298
label_cond_17:
	this->pos = this->end;
	return 0xffff;

}
// .method public previous()C
char android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::previous()
{
	
	if ( this->pos <= this->begin )
		goto label_cond_15;
	this->pos = ( this->pos + -0x1);
	return this->text->charAt(this->pos);
	// 447    .line 315
label_cond_15:
	return 0xffff;

}
// .method public setIndex(I)C
char android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::setIndex(int p)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "p"    # I
	if ( p <  this->begin )
		goto label_cond_8;
	if ( p <= this->end )
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid index")));
	// throw
	throw cVar0;
	// 478    .line 267
label_cond_11:
	this->pos = p;
	return this->current();

}
// .method public setText(Landroid/icu/text/Replaceable;)V
void android::icu::text::BreakTransliterator_S_ReplaceableCharacterIterator::setText(std::shared_ptr<android::icu::text::Replaceable> text)
{
	
	int cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	cVar0 = 0x0;
	if ( text )     
		goto label_cond_9;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 507    .line 225
label_cond_9:
	this->text = text;
	this->begin = cVar0;
	this->end = text->length();
	this->pos = cVar0;
	return;

}


