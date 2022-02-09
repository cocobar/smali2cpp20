// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\StringTokenIterator.smali
#include "java2ctype.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.String.h"
#include "sun.util.locale.StringTokenIterator.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
sun::util::locale::StringTokenIterator::StringTokenIterator(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::lang::String> dlms)
{
	
	int cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "dlms"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 032    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->text = text;
	if ( dlms->length() != 0x1 )
		goto label_cond_17;
	this->delimiterChar = dlms->charAt(cVar0);
label_goto_13:
	this->setStart(cVar0);
	return;
	// 060    .line 48
label_cond_17:
	this->dlms = dlms;
	goto label_goto_13;

}
// .method private nextDelimiter(I)I
int sun::util::locale::StringTokenIterator::nextDelimiter(int start)
{
	
	int textlen;
	int idx;
	int i;
	
	//    .param p1, "start"    # I
	textlen = this->text->length();
	//    .local v4, "textlen":I
	if ( this->dlms )     
		goto label_cond_1b;
	idx = start;
	//    .local v3, "idx":I
label_goto_b:
	if ( idx >= textlen )
		goto label_cond_3c;
	if ( this->text->charAt(idx) != this->delimiterChar )
		goto label_cond_18;
	return idx;
	// 106    .line 111
label_cond_18:
	idx = ( idx + 0x1);
	goto label_goto_b;
	// 112    .line 117
	// 113    .end local v3    # "idx":I
label_cond_1b:
	//    .local v1, "dlmslen":I
	idx = start;
	//    .restart local v3    # "idx":I
label_goto_22:
	if ( idx >= textlen )
		goto label_cond_3c;
	//    .local v0, "c":C
	i = 0x0;
	//    .local v2, "i":I
label_goto_2b:
	if ( i >= this->dlms->length() )
		goto label_cond_39;
	if ( this->text->charAt(idx) != this->dlms->charAt(i) )
		goto label_cond_36;
	return idx;
	// 156    .line 120
label_cond_36:
	i = ( i + 0x1);
	goto label_goto_2b;
	// 162    .line 118
label_cond_39:
	idx = ( idx + 0x1);
	goto label_goto_22;
	// 168    .line 127
	// 169    .end local v0    # "c":C
	// 170    .end local v1    # "dlmslen":I
	// 171    .end local v2    # "i":I
label_cond_3c:
	return textlen;

}
// .method public current()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::StringTokenIterator::current()
{
	
	return this->token;

}
// .method public currentEnd()I
int sun::util::locale::StringTokenIterator::currentEnd()
{
	
	return this->end;

}
// .method public currentStart()I
int sun::util::locale::StringTokenIterator::currentStart()
{
	
	return this->start;

}
// .method public first()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::StringTokenIterator::first()
{
	
	this->setStart(0x0);
	return this->token;

}
// .method public hasNext()Z
bool sun::util::locale::StringTokenIterator::hasNext()
{
	
	bool cVar0;
	
	if ( this->end >= this->text->length() )
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public isDone()Z
bool sun::util::locale::StringTokenIterator::isDone()
{
	
	return this->done;

}
// .method public next()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::StringTokenIterator::next()
{
	
	if ( !(this->hasNext()) )  
		goto label_cond_23;
	this->start = ( this->end + 0x1);
	this->end = this->nextDelimiter(this->start);
	this->token = this->text->substring(this->start, this->end);
label_goto_20:
	return this->token;
	// 305    .line 80
label_cond_23:
	this->start = this->end;
	this->token = 0x0;
	this->done = 0x1;
	goto label_goto_20;

}
// .method public setStart(I)Lsun/util/locale/StringTokenIterator;
std::shared_ptr<sun::util::locale::StringTokenIterator> sun::util::locale::StringTokenIterator::setStart(int offset)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p1, "offset"    # I
	if ( offset <= this->text->length() )
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 345    .line 95
label_cond_e:
	this->start = offset;
	this->end = this->nextDelimiter(this->start);
	this->token = this->text->substring(this->start, this->end);
	this->done = 0x0;
	return this;

}
// .method public setText(Ljava/lang/String;)Lsun/util/locale/StringTokenIterator;
std::shared_ptr<sun::util::locale::StringTokenIterator> sun::util::locale::StringTokenIterator::setText(std::shared_ptr<java::lang::String> text)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	this->text = text;
	this->setStart(0x0);
	return this;

}


