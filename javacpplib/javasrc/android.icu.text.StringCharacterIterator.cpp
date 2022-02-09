// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\StringCharacterIterator.smali
#include "java2ctype.h"
#include "android.icu.text.StringCharacterIterator.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::StringCharacterIterator::StringCharacterIterator(std::shared_ptr<java::lang::String> text)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 029    .end annotation
	android::icu::text::StringCharacterIterator::(text, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;I)V
android::icu::text::StringCharacterIterator::StringCharacterIterator(std::shared_ptr<java::lang::String> text,int pos)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "pos"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 046    .end annotation
	android::icu::text::StringCharacterIterator::(text, 0x0, text->length(), pos);
	return;

}
// .method public constructor <init>(Ljava/lang/String;III)V
android::icu::text::StringCharacterIterator::StringCharacterIterator(std::shared_ptr<java::lang::String> text,int begin,int end,int pos)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "begin"    # I
	//    .param p3, "end"    # I
	//    .param p4, "pos"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 069    .end annotation
	// 073    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( text )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 085    .line 81
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
	// 104    .line 83
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
	// 127    .line 91
label_cond_2d:
	this->begin = begin;
	this->end = end;
	this->pos = pos;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::StringCharacterIterator::clone()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar0;
	std::shared_ptr<android::icu::text::StringCharacterIterator> other;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 146    .end annotation
	try {
	//label_try_start_0:
	other = this->clone();
	other->checkCast("android::icu::text::StringCharacterIterator");
	//label_try_end_6:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_6} :catch_7
	//    .local v1, "other":Landroid/icu/text/StringCharacterIterator;
	return other;
	// 163    .line 298
	// 164    .end local v1    # "other":Landroid/icu/text/StringCharacterIterator;
label_catch_7:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar0 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public current()C
char android::icu::text::StringCharacterIterator::current()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 180    .end annotation
	if ( this->pos <  this->begin )
		goto label_cond_15;
	if ( this->pos >= this->end )
		goto label_cond_15;
	return this->text->charAt(this->pos);
	// 207    .line 171
label_cond_15:
	return 0xffff;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::StringCharacterIterator::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::StringCharacterIterator> that;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 218    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return cVar0;
	// 231    .line 256
label_cond_5:
	if ( obj->instanceOf("android::icu::text::StringCharacterIterator") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	that = obj;
	that->checkCast("android::icu::text::StringCharacterIterator");
	//    .local v0, "that":Landroid/icu/text/StringCharacterIterator;
	if ( this->hashCode() == that->hashCode() )
		goto label_cond_18;
	return cVar1;
	// 261    .line 265
label_cond_18:
	if ( this->text->equals(that->text) )     
		goto label_cond_23;
	return cVar1;
	// 276    .line 268
label_cond_23:
	if ( this->pos != that->pos )
		goto label_cond_2f;
	if ( this->begin == that->begin )
		goto label_cond_30;
label_cond_2f:
	return cVar1;
	// 294    .line 268
label_cond_30:
	if ( this->end != that->end )
		goto label_cond_2f;
	return cVar0;

}
// .method public first()C
char android::icu::text::StringCharacterIterator::first()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 309    .end annotation
	this->pos = this->begin;
	return this->current();

}
// .method public getBeginIndex()I
int android::icu::text::StringCharacterIterator::getBeginIndex()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 328    .end annotation
	return this->begin;

}
// .method public getEndIndex()I
int android::icu::text::StringCharacterIterator::getEndIndex()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 340    .end annotation
	return this->end;

}
// .method public getIndex()I
int android::icu::text::StringCharacterIterator::getIndex()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 352    .end annotation
	return this->pos;

}
// .method public hashCode()I
int android::icu::text::StringCharacterIterator::hashCode()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 364    .end annotation
	return (((this->text->hashCode() ^  this->pos) ^  this->begin) ^  this->end);

}
// .method public last()C
char android::icu::text::StringCharacterIterator::last()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 392    .end annotation
	if ( this->end == this->begin )
		goto label_cond_11;
	this->pos = ( this->end + -0x1);
label_goto_c:
	return this->current();
	// 417    .line 139
label_cond_11:
	this->pos = this->end;
	goto label_goto_c;

}
// .method public next()C
char android::icu::text::StringCharacterIterator::next()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 429    .end annotation
	if ( this->pos >= ( this->end + -0x1) )
		goto label_cond_17;
	this->pos = ( this->pos + 0x1);
	return this->text->charAt(this->pos);
	// 459    .line 188
label_cond_17:
	this->pos = this->end;
	return 0xffff;

}
// .method public previous()C
char android::icu::text::StringCharacterIterator::previous()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 474    .end annotation
	if ( this->pos <= this->begin )
		goto label_cond_15;
	this->pos = ( this->pos + -0x1);
	return this->text->charAt(this->pos);
	// 502    .line 206
label_cond_15:
	return 0xffff;

}
// .method public setIndex(I)C
char android::icu::text::StringCharacterIterator::setIndex(int p)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "p"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 513    .end annotation
	if ( p <  this->begin )
		goto label_cond_8;
	if ( p <= this->end )
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid index")));
	// throw
	throw cVar0;
	// 535    .line 155
label_cond_11:
	this->pos = p;
	return this->current();

}
// .method public setText(Ljava/lang/String;)V
void android::icu::text::StringCharacterIterator::setText(std::shared_ptr<java::lang::String> text)
{
	
	int cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 551    .end annotation
	cVar0 = 0x0;
	if ( text )     
		goto label_cond_9;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 566    .line 110
label_cond_9:
	this->text = text;
	this->begin = cVar0;
	this->end = text->length();
	this->pos = cVar0;
	return;

}


