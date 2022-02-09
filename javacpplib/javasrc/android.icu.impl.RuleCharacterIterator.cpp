// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\RuleCharacterIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.RuleCharacterIterator.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.SymbolTable.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"

static android::icu::impl::RuleCharacterIterator::DONE = -0x1;
static android::icu::impl::RuleCharacterIterator::PARSE_ESCAPES = 0x2;
static android::icu::impl::RuleCharacterIterator::PARSE_VARIABLES = 0x1;
static android::icu::impl::RuleCharacterIterator::SKIP_WHITESPACE = 0x4;
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/SymbolTable;Ljava/text/ParsePosition;)V
android::icu::impl::RuleCharacterIterator::RuleCharacterIterator(std::shared_ptr<java::lang::String> text,std::shared_ptr<android::icu::text::SymbolTable> sym,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "sym"    # Landroid/icu/text/SymbolTable;
	//    .param p3, "pos"    # Ljava/text/ParsePosition;
	// 041    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( !(text) )  
		goto label_cond_10;
	if ( pos->getIndex() <= text->length() )
		goto label_cond_16;
label_cond_10:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 064    .line 110
label_cond_16:
	this->text = text;
	this->sym = sym;
	this->pos = pos;
	this->buf = 0x0;
	return;

}
// .method private _advance(I)V
void android::icu::impl::RuleCharacterIterator::_advance(int count)
{
	
	//    .param p1, "count"    # I
	if ( !(this->buf) )  
		goto label_cond_14;
	this->bufPos = (this->bufPos +  count);
	if ( this->bufPos != this->buf->size() )
		goto label_cond_13;
	this->buf = 0x0;
label_cond_13:
label_goto_13:
	return;
	// 117    .line 343
label_cond_14:
	this->pos->setIndex((this->pos->getIndex() +  count));
	if ( this->pos->getIndex() <= this->text->length() )
		goto label_cond_13;
	this->pos->setIndex(this->text->length());
	goto label_goto_13;

}
// .method private _current()I
int android::icu::impl::RuleCharacterIterator::_current()
{
	
	int i;
	int cVar0;
	
	if ( !(this->buf) )  
		goto label_cond_11;
	return android::icu::text::UTF16::charAt(this->buf, 0x0, this->buf->size(), this->bufPos);
	// 186    .line 327
label_cond_11:
	i = this->pos->getIndex();
	//    .local v0, "i":I
	if ( i >= this->text->length() )
		goto label_cond_26;
	cVar0 = android::icu::text::UTF16::charAt(this->text, i);
label_goto_25:
	return cVar0;
label_cond_26:
	cVar0 = -0x1;
	goto label_goto_25;

}
// .method public atEnd()Z
bool android::icu::impl::RuleCharacterIterator::atEnd()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->buf )     
		goto label_cond_14;
	if ( this->pos->getIndex() != this->text->length() )
		goto label_cond_14;
	cVar1 = 0x1;
label_cond_14:
	return cVar1;

}
// .method public getPos(Ljava/lang/Object;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::RuleCharacterIterator::getPos(std::shared_ptr<java::lang::Object> p)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar3;
	std::shared<std::vector<int[]>> cVar4;
	std::shared_ptr<std::vector<java::lang::Object>> a;
	std::shared_ptr<int[]> v;
	
	//    .param p1, "p"    # Ljava/lang/Object;
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	if ( p )     
		goto label_cond_1c;
	cVar3 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar3[cVar2] = this->buf;
	cVar4 = std::make_shared<std::vector<int[]>>(cVar0);
	cVar4[cVar2] = this->pos->getIndex();
	cVar4[cVar1] = this->bufPos;
	cVar3[cVar1] = cVar4;
	return cVar3;
label_cond_1c:
	a = p;
	a->checkCast("std::vector<java::lang::Object>");
	//    .local v0, "a":[Ljava/lang/Object;
	a[cVar2] = this->buf;
	v = a[cVar1];
	v->checkCast("int[]");
	//    .local v1, "v":[I
	v[cVar2] = this->pos->getIndex();
	v[cVar1] = this->bufPos;
	return p;

}
// .method public inVariable()Z
bool android::icu::impl::RuleCharacterIterator::inVariable()
{
	
	bool cVar0;
	
	if ( !(this->buf) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public isEscaped()Z
bool android::icu::impl::RuleCharacterIterator::isEscaped()
{
	
	return this->isEscaped;

}
// .method public jumpahead(I)V
void android::icu::impl::RuleCharacterIterator::jumpahead(int count)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "count"    # I
	if ( count >= 0 )
		goto label_cond_9;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 374    .line 289
label_cond_9:
	if ( !(this->buf) )  
		goto label_cond_29;
	this->bufPos = (this->bufPos +  count);
	if ( this->bufPos <= this->buf->size() )
		goto label_cond_1f;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar1;
	// 403    .line 294
label_cond_1f:
	if ( this->bufPos != this->buf->size() )
		goto label_cond_28;
	this->buf = 0x0;
label_cond_28:
	return;
	// 420    .line 298
label_cond_29:
	i = (this->pos->getIndex() + count);
	//    .local v0, "i":I
	this->pos->setIndex(i);
	if ( i <= this->text->length() )
		goto label_cond_28;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar2;

}
// .method public lookahead()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::RuleCharacterIterator::lookahead()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	if ( !(this->buf) )  
		goto label_cond_14;
	cVar0 = std::make_shared<java::lang::String>(this->buf, this->bufPos, (this->buf->size() -  this->bufPos));
	return cVar0;
	// 481    .line 276
label_cond_14:
	return this->text->substring(this->pos->getIndex());

}
// .method public next(I)I
int android::icu::impl::RuleCharacterIterator::next(int options)
{
	
	bool cVar0;
	bool cVar1;
	int c;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared<std::vector<int[]>> offset;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	
	//    .param p1, "options"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	-0x1;
	//    .local v0, "c":I
	this->isEscaped = cVar1;
label_cond_6:
label_goto_6:
	c = this->_current();
	this->_advance(android::icu::text::UTF16::getCharCount(c));
	if ( c != 0x24 )
		goto label_cond_64;
	if ( this->buf )     
		goto label_cond_64;
	if ( !(( options & 0x1)) )  
		goto label_cond_64;
	if ( !(this->sym) )  
		goto label_cond_64;
	name = this->sym->parseReference(this->text, this->pos, this->text->length());
	//    .local v1, "name":Ljava/lang/String;
	if ( name )     
		goto label_cond_34;
	//    .end local v1    # "name":Ljava/lang/String;
label_cond_33:
	return c;
	// 574    .line 147
	// 575    .restart local v1    # "name":Ljava/lang/String;
label_cond_34:
	this->bufPos = cVar1;
	this->buf = this->sym->lookup(name);
	if ( this->buf )     
		goto label_cond_5c;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Undefined variable: ")))->append(name)->toString());
	// throw
	throw cVar2;
	// 620    .line 154
label_cond_5c:
	if ( this->buf->size() )     
		goto label_cond_6;
	this->buf = 0x0;
	goto label_goto_6;
	// 633    .line 160
	// 634    .end local v1    # "name":Ljava/lang/String;
label_cond_64:
	if ( !(( options & 0x4)) )  
		goto label_cond_6e;
	if ( android::icu::impl::PatternProps::isWhiteSpace(c) )     
		goto label_cond_6;
label_cond_6e:
	if ( c != 0x5c )
		goto label_cond_33;
	if ( !(( options & 0x2)) )  
		goto label_cond_33;
	offset = std::make_shared<std::vector<int[]>>(cVar0);
	offset[cVar1] = cVar1;
	//    .local v2, "offset":[I
	c = android::icu::impl::Utility::unescapeAt(this->lookahead(), offset);
	this->jumpahead(offset[cVar1]);
	this->isEscaped = cVar0;
	if ( c >= 0 )
		goto label_cond_33;
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid escape")));
	// throw
	throw cVar4;

}
// .method public setPos(Ljava/lang/Object;)V
void android::icu::impl::RuleCharacterIterator::setPos(std::shared_ptr<java::lang::Object> p)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<std::vector<java::lang::Object>> a;
	std::shared_ptr<char[]> cVar2;
	std::shared_ptr<int[]> v;
	
	//    .param p1, "p"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	a = p;
	a->checkCast("std::vector<java::lang::Object>");
	//    .local v0, "a":[Ljava/lang/Object;
	cVar2 = a[cVar1];
	cVar2->checkCast("char[]");
	this->buf = cVar2;
	v = a[cVar0];
	v->checkCast("int[]");
	//    .local v1, "v":[I
	this->pos->setIndex(v[cVar1]);
	this->bufPos = v[cVar0];
	return;

}
// .method public skipIgnored(I)V
void android::icu::impl::RuleCharacterIterator::skipIgnored(int options)
{
	
	int a;
	
	//    .param p1, "options"    # I
	if ( !(( options & 0x4)) )  
		goto label_cond_e;
label_goto_4:
	a = this->_current();
	//    .local v0, "a":I
	if ( android::icu::impl::PatternProps::isWhiteSpace(a) )     
		goto label_cond_f;
	//    .end local v0    # "a":I
label_cond_e:
	return;
	// 767    .line 255
	// 768    .restart local v0    # "a":I
label_cond_f:
	this->_advance(android::icu::text::UTF16::getCharCount(a));
	goto label_goto_4;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::RuleCharacterIterator::toString()
{
	
	int b;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	b = this->pos->getIndex();
	//    .local v0, "b":I
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->text->substring(0x0, b))->append(0x7c)->append(this->text->substring(b))->toString();

}


