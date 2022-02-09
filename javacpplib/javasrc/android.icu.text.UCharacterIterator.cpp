// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UCharacterIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.CharacterIteratorWrapper.h"
#include "android.icu.impl.ReplaceableUCharacterIterator.h"
#include "android.icu.impl.UCharArrayIterator.h"
#include "android.icu.impl.UCharacterIteratorWrapper.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.UCharacterIterator.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.Character.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.CharacterIterator.h"

// .method protected constructor <init>()V
android::icu::text::UCharacterIterator::UCharacterIterator()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static final getInstance(Landroid/icu/text/Replaceable;)Landroid/icu/text/UCharacterIterator;
std::shared_ptr<android::icu::text::UCharacterIterator> android::icu::text::UCharacterIterator::getInstance(std::shared_ptr<android::icu::text::Replaceable> source)
{
	
	std::shared_ptr<android::icu::impl::ReplaceableUCharacterIterator> cVar0;
	
	//    .param p0, "source"    # Landroid/icu/text/Replaceable;
	cVar0 = std::make_shared<android::icu::impl::ReplaceableUCharacterIterator>(source);
	return cVar0;

}
// .method public static final getInstance(Ljava/lang/String;)Landroid/icu/text/UCharacterIterator;
std::shared_ptr<android::icu::text::UCharacterIterator> android::icu::text::UCharacterIterator::getInstance(std::shared_ptr<java::lang::String> source)
{
	
	std::shared_ptr<android::icu::impl::ReplaceableUCharacterIterator> cVar0;
	
	//    .param p0, "source"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::impl::ReplaceableUCharacterIterator>(source);
	return cVar0;

}
// .method public static final getInstance(Ljava/lang/StringBuffer;)Landroid/icu/text/UCharacterIterator;
std::shared_ptr<android::icu::text::UCharacterIterator> android::icu::text::UCharacterIterator::getInstance(std::shared_ptr<java::lang::StringBuffer> source)
{
	
	std::shared_ptr<android::icu::impl::ReplaceableUCharacterIterator> cVar0;
	
	//    .param p0, "source"    # Ljava/lang/StringBuffer;
	cVar0 = std::make_shared<android::icu::impl::ReplaceableUCharacterIterator>(source);
	return cVar0;

}
// .method public static final getInstance(Ljava/text/CharacterIterator;)Landroid/icu/text/UCharacterIterator;
std::shared_ptr<android::icu::text::UCharacterIterator> android::icu::text::UCharacterIterator::getInstance(std::shared_ptr<java::text::CharacterIterator> source)
{
	
	std::shared_ptr<android::icu::impl::CharacterIteratorWrapper> cVar0;
	
	//    .param p0, "source"    # Ljava/text/CharacterIterator;
	cVar0 = std::make_shared<android::icu::impl::CharacterIteratorWrapper>(source);
	return cVar0;

}
// .method public static final getInstance([C)Landroid/icu/text/UCharacterIterator;
std::shared_ptr<android::icu::text::UCharacterIterator> android::icu::text::UCharacterIterator::getInstance(std::shared_ptr<char[]> source)
{
	
	//    .param p0, "source"    # [C
	return android::icu::text::UCharacterIterator::getInstance(source, 0x0, source->size());

}
// .method public static final getInstance([CII)Landroid/icu/text/UCharacterIterator;
std::shared_ptr<android::icu::text::UCharacterIterator> android::icu::text::UCharacterIterator::getInstance(std::shared_ptr<char[]> source,int start,int limit)
{
	
	std::shared_ptr<android::icu::impl::UCharArrayIterator> cVar0;
	
	//    .param p0, "source"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	cVar0 = std::make_shared<android::icu::impl::UCharArrayIterator>(source, start, limit);
	return cVar0;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::UCharacterIterator::clone()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 111        value = {
	// 112            Ljava/lang/CloneNotSupportedException;
	// 113        }
	// 114    .end annotation
	return this->clone();

}
// .method public currentCodePoint()I
int android::icu::text::UCharacterIterator::currentCodePoint()
{
	
	int ch;
	int ch2;
	
	ch = this->current();
	//    .local v0, "ch":I
	if ( !(android::icu::text::UTF16::isLeadSurrogate((char)(ch))) )  
		goto label_cond_23;
	this->next();
	ch2 = this->current();
	//    .local v1, "ch2":I
	this->previous();
	if ( !(android::icu::text::UTF16::isTrailSurrogate((char)(ch2))) )  
		goto label_cond_23;
	return java::lang::Character::toCodePoint((char)(ch), (char)(ch2));
	// 179    .line 163
	// 180    .end local v1    # "ch2":I
label_cond_23:
	return ch;

}
// .method public getCharacterIterator()Ljava/text/CharacterIterator;
std::shared_ptr<java::text::CharacterIterator> android::icu::text::UCharacterIterator::getCharacterIterator()
{
	
	std::shared_ptr<android::icu::impl::UCharacterIteratorWrapper> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::UCharacterIteratorWrapper>(this);
	return cVar0;

}
// .method public final getText([C)I
int android::icu::text::UCharacterIterator::getText(std::shared_ptr<char[]> fillIn)
{
	
	//    .param p1, "fillIn"    # [C
	return this->getText(fillIn, 0x0);

}
// .method public getText()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UCharacterIterator::getText()
{
	
	std::shared<std::vector<char[]>> text;
	std::shared_ptr<java::lang::String> cVar0;
	
	text = std::make_shared<std::vector<char[]>>(this->getLength());
	//    .local v0, "text":[C
	this->getText(text);
	cVar0 = std::make_shared<java::lang::String>(text);
	return cVar0;

}
// .method public moveCodePointIndex(I)I
int android::icu::text::UCharacterIterator::moveCodePointIndex(int delta)
{
	
	int cVar0;
	int delta;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar3;
	
	//    .param p1, "delta"    # I
	cVar0 = -0x1;
	if ( delta <= 0 )
		goto label_cond_e;
label_goto_3:
	if ( delta <= 0 )
		goto label_cond_19;
	if ( this->nextCodePoint() == cVar0 )
		goto label_cond_19;
	delta = ( delta + -0x1);
	goto label_goto_3;
	// 269    .line 359
label_cond_e:
label_goto_e:
	if ( delta >= 0 )
		goto label_cond_19;
	if ( this->previousCodePoint() == cVar0 )
		goto label_cond_19;
	delta = ( delta + 0x1);
	goto label_goto_e;
	// 285    .line 363
label_cond_19:
	if ( !(delta) )  
		goto label_cond_21;
	cVar3 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar3;
	// 296    .line 367
label_cond_21:
	return this->getIndex();

}
// .method public moveIndex(I)I
int android::icu::text::UCharacterIterator::moveIndex(int delta)
{
	
	int x;
	
	//    .param p1, "delta"    # I
	x = java::lang::Math::max(0x0, java::lang::Math::min((this->getIndex() +  delta), this->getLength()));
	//    .local v0, "x":I
	this->setIndex(x);
	return x;

}
// .method public nextCodePoint()I
int android::icu::text::UCharacterIterator::nextCodePoint()
{
	
	int ch1;
	int ch2;
	
	ch1 = this->next();
	//    .local v0, "ch1":I
	if ( !(android::icu::text::UTF16::isLeadSurrogate((char)(ch1))) )  
		goto label_cond_23;
	ch2 = this->next();
	//    .local v1, "ch2":I
	if ( !(android::icu::text::UTF16::isTrailSurrogate((char)(ch2))) )  
		goto label_cond_1d;
	return java::lang::Character::toCodePoint((char)(ch1), (char)(ch2));
	// 387    .line 203
label_cond_1d:
	if ( ch2 == -0x1 )
		goto label_cond_23;
	this->previous();
	//    .end local v1    # "ch2":I
label_cond_23:
	return ch1;

}
// .method public previousCodePoint()I
int android::icu::text::UCharacterIterator::previousCodePoint()
{
	
	int ch1;
	int ch2;
	
	ch1 = this->previous();
	//    .local v0, "ch1":I
	if ( !(android::icu::text::UTF16::isTrailSurrogate((char)(ch1))) )  
		goto label_cond_23;
	ch2 = this->previous();
	//    .local v1, "ch2":I
	if ( !(android::icu::text::UTF16::isLeadSurrogate((char)(ch2))) )  
		goto label_cond_1d;
	return java::lang::Character::toCodePoint((char)(ch2), (char)(ch1));
	// 450    .line 233
label_cond_1d:
	if ( ch2 == -0x1 )
		goto label_cond_23;
	this->next();
	//    .end local v1    # "ch2":I
label_cond_23:
	return ch1;

}
// .method public setToLimit()V
void android::icu::text::UCharacterIterator::setToLimit()
{
	
	this->setIndex(this->getLength());
	return;

}
// .method public setToStart()V
void android::icu::text::UCharacterIterator::setToStart()
{
	
	this->setIndex(0x0);
	return;

}


