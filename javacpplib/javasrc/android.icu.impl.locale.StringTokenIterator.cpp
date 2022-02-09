// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\StringTokenIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.StringTokenIterator.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::impl::locale::StringTokenIterator::StringTokenIterator(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::lang::String> dlms)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "dlms"    # Ljava/lang/String;
	// 028    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_text = text;
	this->_dlms = dlms;
	this->setStart(0x0);
	return;

}
// .method private nextDelimiter(I)I
int android::icu::impl::locale::StringTokenIterator::nextDelimiter(int start)
{
	
	int idx;
	int i;
	
	//    .param p1, "start"    # I
	idx = start;
	//    .local v2, "idx":I
label_goto_1:
	if ( idx >= this->_text->length() )
		goto label_cond_20;
	//    .local v0, "c":C
	i = 0x0;
	//    .local v1, "i":I
label_goto_10:
	if ( i >= this->_dlms->length() )
		goto label_cond_24;
	if ( this->_text->charAt(idx) != this->_dlms->charAt(i) )
		goto label_cond_21;
	//    .end local v0    # "c":C
	//    .end local v1    # "i":I
label_cond_20:
	return idx;
	// 100    .line 89
	// 101    .restart local v0    # "c":C
	// 102    .restart local v1    # "i":I
label_cond_21:
	i = ( i + 0x1);
	goto label_goto_10;
	// 108    .line 94
label_cond_24:
	idx = ( idx + 0x1);
	goto label_goto_1;

}
// .method public current()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::StringTokenIterator::current()
{
	
	return this->_token;

}
// .method public currentEnd()I
int android::icu::impl::locale::StringTokenIterator::currentEnd()
{
	
	return this->_end;

}
// .method public currentStart()I
int android::icu::impl::locale::StringTokenIterator::currentStart()
{
	
	return this->_start;

}
// .method public first()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::StringTokenIterator::first()
{
	
	this->setStart(0x0);
	return this->_token;

}
// .method public hasNext()Z
bool android::icu::impl::locale::StringTokenIterator::hasNext()
{
	
	bool cVar0;
	
	if ( this->_end >= this->_text->length() )
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public isDone()Z
bool android::icu::impl::locale::StringTokenIterator::isDone()
{
	
	return this->_done;

}
// .method public next()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::StringTokenIterator::next()
{
	
	if ( !(this->hasNext()) )  
		goto label_cond_23;
	this->_start = ( this->_end + 0x1);
	this->_end = this->nextDelimiter(this->_start);
	this->_token = this->_text->substring(this->_start, this->_end);
label_goto_20:
	return this->_token;
	// 244    .line 57
label_cond_23:
	this->_start = this->_end;
	this->_token = 0x0;
	this->_done = 0x1;
	goto label_goto_20;

}
// .method public setStart(I)Landroid/icu/impl/locale/StringTokenIterator;
std::shared_ptr<android::icu::impl::locale::StringTokenIterator> android::icu::impl::locale::StringTokenIterator::setStart(int offset)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p1, "offset"    # I
	if ( offset <= this->_text->length() )
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 284    .line 72
label_cond_e:
	this->_start = offset;
	this->_end = this->nextDelimiter(this->_start);
	this->_token = this->_text->substring(this->_start, this->_end);
	this->_done = 0x0;
	return this;

}
// .method public setText(Ljava/lang/String;)Landroid/icu/impl/locale/StringTokenIterator;
std::shared_ptr<android::icu::impl::locale::StringTokenIterator> android::icu::impl::locale::StringTokenIterator::setText(std::shared_ptr<java::lang::String> text)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	this->_text = text;
	this->setStart(0x0);
	return this;

}


