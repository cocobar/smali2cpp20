// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Normalizer2Impl$ReorderingBuffer.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl_S_ReorderingBuffer.h"
#include "android.icu.impl.Normalizer2Impl_S_UTF16Plus.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "java.io.IOException.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"

// .method public constructor <init>(Landroid/icu/impl/Normalizer2Impl;Ljava/lang/Appendable;I)V
android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::Normalizer2Impl_S_ReorderingBuffer(std::shared_ptr<android::icu::impl::Normalizer2Impl> ni,std::shared_ptr<java::lang::Appendable> dest,int destCapacity)
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "ni"    # Landroid/icu/impl/Normalizer2Impl;
	//    .param p2, "dest"    # Ljava/lang/Appendable;
	//    .param p3, "destCapacity"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	// 051    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->impl = ni;
	this->app = dest;
	if ( !(this->app->instanceOf("java::lang::StringBuilder")) )  
		goto label_cond_3f;
	this->appIsStringBuilder = cVar0;
	dest->checkCast("java::lang::StringBuilder");
	//    .end local p2    # "dest":Ljava/lang/Appendable;
	this->str = dest;
	this->str->ensureCapacity(destCapacity);
	this->reorderStart = cVar1;
	if ( this->str->length() )     
		goto label_cond_27;
	this->lastCC = cVar1;
label_goto_26:
	return;
	// 099    .line 136
label_cond_27:
	this->setIterator();
	this->lastCC = this->previousCC();
	if ( this->lastCC <= cVar0 )
		goto label_cond_3a;
label_cond_34:
	if ( this->previousCC() >  cVar0 )
		goto label_cond_34;
label_cond_3a:
	this->reorderStart = this->codePointLimit;
	goto label_goto_26;
	// 131    .line 145
	// 132    .restart local p2    # "dest":Ljava/lang/Appendable;
label_cond_3f:
	this->appIsStringBuilder = cVar1;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	this->str = cVar2;
	this->reorderStart = cVar1;
	this->lastCC = cVar1;
	goto label_goto_26;

}
// .method private insert(II)V
void android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::insert(int c,int cc)
{
	
	int cVar0;
	
	//    .param p1, "c"    # I
	//    .param p2, "cc"    # I
	cVar0 = 0x1;
	this->setIterator();
	this->skipPrevious();
label_cond_7:
	if ( this->previousCC() >  cc )
		goto label_cond_7;
	if ( c >  0xffff )
		goto label_cond_23;
	this->str->insert(this->codePointLimit, (char)(c));
	if ( cc >  cVar0 )
		goto label_cond_22;
	this->reorderStart = ( this->codePointLimit + 0x1);
label_cond_22:
label_goto_22:
	return;
	// 201    .line 323
label_cond_23:
	this->str->insert(this->codePointLimit, java::lang::Character::toChars(c));
	if ( cc >  cVar0 )
		goto label_cond_22;
	this->reorderStart = ( this->codePointLimit + 0x2);
	goto label_goto_22;

}
// .method private previousCC()I
int android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::previousCC()
{
	
	int cVar0;
	int c;
	
	cVar0 = 0x0;
	this->codePointLimit = this->codePointStart;
	if ( this->reorderStart <  this->codePointStart )
		goto label_cond_c;
	return cVar0;
	// 247    .line 348
label_cond_c:
	c = this->str->codePointBefore(this->codePointStart);
	//    .local v0, "c":I
	this->codePointStart = (this->codePointStart -  java::lang::Character::charCount(c));
	if ( c >= 0x300 )
		goto label_cond_22;
	return cVar0;
	// 277    .line 353
label_cond_22:
	return android::icu::impl::Normalizer2Impl::getCCFromYesOrMaybe(this->impl->getNorm16(c));

}
// .method private setIterator()V
void android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::setIterator()
{
	
	this->codePointStart = this->str->length();
	return;

}
// .method private skipPrevious()V
void android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::skipPrevious()
{
	
	this->codePointLimit = this->codePointStart;
	this->codePointStart = this->str->offsetByCodePoints(this->codePointStart, -0x1);
	return;

}
// .method public append(C)Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::append(char c)
{
	
	//    .param p1, "c"    # C
	this->str->append(c);
	this->lastCC = 0x0;
	this->reorderStart = this->str->length();
	return this;

}
// .method public append(Ljava/lang/CharSequence;)Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::append(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	if ( !(s->length()) )  
		goto label_cond_16;
	this->str->append(s);
	this->lastCC = 0x0;
	this->reorderStart = this->str->length();
label_cond_16:
	return this;

}
// .method public append(Ljava/lang/CharSequence;II)Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::append(std::shared_ptr<java::lang::CharSequence> s,int start,int limit)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	if ( start == limit )
		goto label_cond_12;
	this->str->append(s, start, limit);
	this->lastCC = 0x0;
	this->reorderStart = this->str->length();
label_cond_12:
	return this;

}
// .method public append(II)V
void android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::append(int c,int cc)
{
	
	//    .param p1, "c"    # I
	//    .param p2, "cc"    # I
	if ( this->lastCC <= cc )
		goto label_cond_6;
	if ( cc )     
		goto label_cond_19;
label_cond_6:
	this->str->appendCodePoint(c);
	this->lastCC = cc;
	if ( cc >  0x1 )
		goto label_cond_18;
	this->reorderStart = this->str->length();
label_cond_18:
label_goto_18:
	return;
	// 526    .line 175
label_cond_19:
	this->insert(c, cc);
	goto label_goto_18;

}
// .method public append(Ljava/lang/CharSequence;IIII)V
void android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::append(std::shared_ptr<java::lang::CharSequence> s,int start,int limit,int leadCC,int trailCC)
{
	
	int cVar0;
	int c;
	int cVar1;
	int cVar3;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "leadCC"    # I
	//    .param p5, "trailCC"    # I
	cVar0 = 0x1;
	if ( start != limit )
		goto label_cond_4;
	return;
	// 550    .line 184
label_cond_4:
	if ( this->lastCC <= leadCC )
		goto label_cond_a;
	if ( leadCC )     
		goto label_cond_2c;
label_cond_a:
	if ( trailCC >  cVar0 )
		goto label_cond_1f;
	this->reorderStart = (this->str->length() +  (limit - start));
label_cond_17:
label_goto_17:
	this->str->append(s, start, limit);
	this->lastCC = trailCC;
label_cond_1e:
	return;
	// 589    .line 187
label_cond_1f:
	if ( leadCC >  cVar0 )
		goto label_cond_17;
	this->reorderStart = ( this->str->length() + 0x1);
	goto label_goto_17;
	// 606    .line 193
label_cond_2c:
	c = java::lang::Character::codePointAt(s, start);
	//    .local v0, "c":I
	cVar1 = (start +  java::lang::Character::charCount(c));
	this->insert(c, leadCC);
label_goto_38:
	if ( cVar1 >= limit )
		goto label_cond_1e;
	c = java::lang::Character::codePointAt(s, cVar1);
	cVar1 = (cVar1 +  java::lang::Character::charCount(c));
	if ( cVar1 >= limit )
		goto label_cond_53;
	cVar3 = android::icu::impl::Normalizer2Impl::getCCFromYesOrMaybe(this->impl->getNorm16(c));
label_goto_4f:
	this->append(c, cVar3);
	goto label_goto_38;
	// 659    .line 203
label_cond_53:
	cVar3 = trailCC;
	goto label_goto_4f;

}
// .method public appendZeroCC(I)V
void android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::appendZeroCC(int c)
{
	
	//    .param p1, "c"    # I
	this->str->appendCodePoint(c);
	this->lastCC = 0x0;
	this->reorderStart = this->str->length();
	return;

}
// .method public equals(Ljava/lang/CharSequence;II)Z
bool android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::equals(std::shared_ptr<java::lang::CharSequence> s,int start,int limit)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	return android::icu::impl::Normalizer2Impl_S_UTF16Plus::equal(this->str, 0x0, this->str->length(), s, start, limit);

}
// .method public flush()V
void android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::flush()
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(this->appIsStringBuilder) )  
		goto label_cond_10;
	this->reorderStart = this->str->length();
label_goto_d:
	this->lastCC = 0x0;
	return;
	// 752    .line 256
label_cond_10:
	try {
	//label_try_start_10:
	this->app->append(this->str);
	this->str->setLength(0x0);
	this->reorderStart = 0x0;
	//label_try_end_20:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_21;
	}
	//    .catch Ljava/io/IOException; {:try_start_10 .. :try_end_20} :catch_21
	goto label_goto_d;
	// 777    .line 259
label_catch_21:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public flushAndAppendZeroCC(Ljava/lang/CharSequence;II)Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::flushAndAppendZeroCC(std::shared_ptr<java::lang::CharSequence> s,int start,int limit)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	if ( !(this->appIsStringBuilder) )  
		goto label_cond_15;
	this->str->append(s, start, limit);
	this->reorderStart = this->str->length();
label_goto_12:
	this->lastCC = 0x0;
	return this;
	// 825    .line 277
label_cond_15:
	try {
	//label_try_start_15:
	this->app->append(this->str)->append(s, start, limit);
	this->str->setLength(0x0);
	this->reorderStart = 0x0;
	//label_try_end_29:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a;
	}
	//    .catch Ljava/io/IOException; {:try_start_15 .. :try_end_29} :catch_2a
	goto label_goto_12;
	// 854    .line 280
label_catch_2a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public getLastCC()I
int android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::getLastCC()
{
	
	return this->lastCC;

}
// .method public getStringBuilder()Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::getStringBuilder()
{
	
	return this->str;

}
// .method public isEmpty()Z
bool android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::isEmpty()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->str->length() )     
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method public length()I
int android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::length()
{
	
	return this->str->length();

}
// .method public remove()V
void android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::remove()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->str->setLength(cVar0);
	this->lastCC = cVar0;
	this->reorderStart = cVar0;
	return;

}
// .method public removeSuffix(I)V
void android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::removeSuffix(int suffixLength)
{
	
	int oldLength;
	
	//    .param p1, "suffixLength"    # I
	oldLength = this->str->length();
	//    .local v0, "oldLength":I
	this->str->delete((oldLength - suffixLength), oldLength);
	this->lastCC = 0x0;
	this->reorderStart = this->str->length();
	return;

}
// .method public setLastChar(C)V
void android::icu::impl::Normalizer2Impl_S_ReorderingBuffer::setLastChar(char c)
{
	
	//    .param p1, "c"    # C
	this->str->setCharAt(( this->str->length() + -0x1), c);
	return;

}


