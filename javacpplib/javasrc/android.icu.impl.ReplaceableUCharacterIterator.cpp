// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ReplaceableUCharacterIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.ReplaceableUCharacterIterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.ReplaceableString.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.Character.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

// .method public constructor <init>(Landroid/icu/text/Replaceable;)V
android::icu::impl::ReplaceableUCharacterIterator::ReplaceableUCharacterIterator(std::shared_ptr<android::icu::text::Replaceable> replaceable)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "replaceable"    # Landroid/icu/text/Replaceable;
	// 019    invoke-direct {p0}, Landroid/icu/text/UCharacterIterator;-><init>()V
	if ( replaceable )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 031    .line 40
label_cond_b:
	this->replaceable = replaceable;
	this->currentIndex = 0x0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::impl::ReplaceableUCharacterIterator::ReplaceableUCharacterIterator(std::shared_ptr<java::lang::String> str)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::text::ReplaceableString> cVar1;
	
	//    .param p1, "str"    # Ljava/lang/String;
	// 050    invoke-direct {p0}, Landroid/icu/text/UCharacterIterator;-><init>()V
	if ( str )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 062    .line 52
label_cond_b:
	cVar1 = std::make_shared<android::icu::text::ReplaceableString>(str);
	this->replaceable = cVar1;
	this->currentIndex = 0x0;
	return;

}
// .method public constructor <init>(Ljava/lang/StringBuffer;)V
android::icu::impl::ReplaceableUCharacterIterator::ReplaceableUCharacterIterator(std::shared_ptr<java::lang::StringBuffer> buf)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::text::ReplaceableString> cVar1;
	
	//    .param p1, "buf"    # Ljava/lang/StringBuffer;
	// 085    invoke-direct {p0}, Landroid/icu/text/UCharacterIterator;-><init>()V
	if ( buf )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 097    .line 64
label_cond_b:
	cVar1 = std::make_shared<android::icu::text::ReplaceableString>(buf);
	this->replaceable = cVar1;
	this->currentIndex = 0x0;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ReplaceableUCharacterIterator::clone()
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	//label_try_end_3:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_3} :catch_5
	return this->clone();
	// 130    .line 79
label_catch_5:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	return 0x0;

}
// .method public current()I
int android::icu::impl::ReplaceableUCharacterIterator::current()
{
	
	if ( this->currentIndex >= this->replaceable->length() )
		goto label_cond_13;
	return this->replaceable->charAt(this->currentIndex);
	// 167    .line 93
label_cond_13:
	return -0x1;

}
// .method public currentCodePoint()I
int android::icu::impl::ReplaceableUCharacterIterator::currentCodePoint()
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
	// 225    .line 121
	// 226    .end local v1    # "ch2":I
label_cond_23:
	return ch;

}
// .method public getIndex()I
int android::icu::impl::ReplaceableUCharacterIterator::getIndex()
{
	
	return this->currentIndex;

}
// .method public getLength()I
int android::icu::impl::ReplaceableUCharacterIterator::getLength()
{
	
	return this->replaceable->length();

}
// .method public getText([CI)I
int android::icu::impl::ReplaceableUCharacterIterator::getText(std::shared_ptr<char[]> fillIn,int offset)
{
	
	int length;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p1, "fillIn"    # [C
	//    .param p2, "offset"    # I
	length = this->replaceable->length();
	//    .local v0, "length":I
	if ( offset < 0 ) 
		goto label_cond_e;
	if ( (offset + length) <= fillIn->size() )
		goto label_cond_18;
label_cond_e:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>(java::lang::Integer::toString(length));
	// throw
	throw cVar0;
	// 292    .line 199
label_cond_18:
	this->replaceable->getChars(0x0, length, fillIn, offset);
	return length;

}
// .method public next()I
int android::icu::impl::ReplaceableUCharacterIterator::next()
{
	
	int cVar0;
	
	if ( this->currentIndex >= this->replaceable->length() )
		goto label_cond_17;
	cVar0 = this->currentIndex;
	this->currentIndex = ( cVar0 + 0x1);
	return this->replaceable->charAt(cVar0);
	// 332    .line 155
label_cond_17:
	return -0x1;

}
// .method public previous()I
int android::icu::impl::ReplaceableUCharacterIterator::previous()
{
	
	int cVar0;
	
	if ( this->currentIndex <= 0 )
		goto label_cond_11;
	cVar0 = ( this->currentIndex + -0x1);
	this->currentIndex = cVar0;
	return this->replaceable->charAt(cVar0);
	// 363    .line 172
label_cond_11:
	return -0x1;

}
// .method public setIndex(I)V
void android::icu::impl::ReplaceableUCharacterIterator::setIndex(int currentIndex)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p1, "currentIndex"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 374        value = {
	// 375            Ljava/lang/IndexOutOfBoundsException;
	// 376        }
	// 377    .end annotation
	if ( currentIndex < 0 ) 
		goto label_cond_a;
	if ( currentIndex <= this->replaceable->length() )
		goto label_cond_10;
label_cond_a:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 399    .line 190
label_cond_10:
	this->currentIndex = currentIndex;
	return;

}


