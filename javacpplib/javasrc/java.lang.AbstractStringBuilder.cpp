// CPP L:\smali2cpp20\x64\Release\out\java\lang\AbstractStringBuilder.smali
#include "java2ctype.h"
#include "java.lang.AbstractStringBuilder.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Integer.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.OutOfMemoryError.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.StringIndexOutOfBoundsException.h"
#include "java.lang.System.h"
#include "java.util.Arrays.h"
#include "sun.misc.FloatingDecimal.h"

static java::lang::AbstractStringBuilder::MAX_ARRAY_SIZE = 0x7ffffff7;
// .method constructor <init>()V
java::lang::AbstractStringBuilder::AbstractStringBuilder()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method constructor <init>(I)V
java::lang::AbstractStringBuilder::AbstractStringBuilder(int capacity)
{
	
	//    .param p1, "capacity"    # I
	// 038    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = std::make_shared<std::vector<char[]>>(capacity);
	return;

}
// .method private appendNull()Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::appendNull()
{
	
	char cVar0;
	int c;
	std::shared_ptr<char[]> value;
	
	cVar0 = 0x6c;
	c = this->count;
	//    .local v0, "c":I
	this->ensureCapacityInternal(( c + 0x4));
	value = this->value;
	//    .local v2, "value":[C
	c = ( c + 0x1);
	//    .end local v0    # "c":I
	//    .local v1, "c":I
	value[c] = 0x6e;
	c = ( c + 0x1);
	//    .end local v1    # "c":I
	//    .restart local v0    # "c":I
	value[c] = 0x75;
	c = ( c + 0x1);
	//    .end local v0    # "c":I
	//    .restart local v1    # "c":I
	value[c] = cVar0;
	//    .end local v1    # "c":I
	//    .restart local v0    # "c":I
	value[c] = cVar0;
	this->count = ( c + 0x1);
	return this;

}
// .method private ensureCapacityInternal(I)V
void java::lang::AbstractStringBuilder::ensureCapacityInternal(int minimumCapacity)
{
	
	//    .param p1, "minimumCapacity"    # I
	if ( (minimumCapacity - this->value->size()) <= 0 )
		goto label_cond_13;
	this->value = java::util::Arrays::copyOf(this->value, this->newCapacity(minimumCapacity));
label_cond_13:
	return;

}
// .method private hugeCapacity(I)I
int java::lang::AbstractStringBuilder::hugeCapacity(int minCapacity)
{
	
	int cVar0;
	std::shared_ptr<java::lang::OutOfMemoryError> cVar1;
	int minCapacity;
	
	//    .param p1, "minCapacity"    # I
	cVar0 = 0x7ffffff7;
	if ( (0x7fffffff -  minCapacity) >= 0 )
		goto label_cond_f;
	cVar1 = std::make_shared<java::lang::OutOfMemoryError>();
	// throw
	throw cVar1;
	// 162    .line 164
label_cond_f:
	if ( minCapacity <= cVar0 )
		goto label_cond_12;
	//    .end local p1    # "minCapacity":I
label_goto_11:
	return minCapacity;
	// 170    .restart local p1    # "minCapacity":I
label_cond_12:
	minCapacity = cVar0;
	goto label_goto_11;

}
// .method private newCapacity(I)I
int java::lang::AbstractStringBuilder::newCapacity(int minCapacity)
{
	
	int newCapacity;
	
	//    .param p1, "minCapacity"    # I
	newCapacity = ( ( this->value->size() << 0x1) + 0x2);
	//    .local v0, "newCapacity":I
	if ( (newCapacity - minCapacity) >= 0 )
		goto label_cond_c;
	newCapacity = minCapacity;
label_cond_c:
	if ( newCapacity <= 0 )
		goto label_cond_14;
	if ( (0x7ffffff7 -  newCapacity) >= 0 )
		goto label_cond_18;
label_cond_14:
	//    .end local v0    # "newCapacity":I
label_cond_18:
	return newCapacity;

}
// .method private reverseAllValidSurrogatePairs()V
void java::lang::AbstractStringBuilder::reverseAllValidSurrogatePairs()
{
	
	int i;
	char c2;
	char c1;
	
	i = 0x0;
	//    .local v2, "i":I
label_goto_1:
	if ( i >= ( this->count + -0x1) )
		goto label_cond_2b;
	c2 = this->value[i];
	//    .local v1, "c2":C
	if ( !(java::lang::Character::isLowSurrogate(c2)) )  
		goto label_cond_28;
	c1 = this->value[( i + 0x1)];
	//    .local v0, "c1":C
	if ( !(java::lang::Character::isHighSurrogate(c1)) )  
		goto label_cond_28;
	i = ( i + 0x1);
	//    .end local v2    # "i":I
	//    .local v3, "i":I
	this->value[i] = c1;
	this->value[i] = c2;
	i = i;
	//    .end local v0    # "c1":C
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
label_cond_28:
	i = ( i + 0x1);
	goto label_goto_1;
	// 291    .line 1478
	// 292    .end local v1    # "c2":C
label_cond_2b:
	return;

}
// .method public append(C)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(char c)
{
	
	int cVar0;
	
	//    .param p1, "c"    # C
	this->ensureCapacityInternal(( this->count + 0x1));
	cVar0 = this->count;
	this->count = ( cVar0 + 0x1);
	this->value[cVar0] = c;
	return this;

}
// .method public append(D)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(double d)
{
	
	//    .param p1, "d"    # D
	sun::misc::FloatingDecimal::appendTo(d, this);
	return this;

}
// .method public append(F)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(float f)
{
	
	//    .param p1, "f"    # F
	sun::misc::FloatingDecimal::appendTo(f, this);
	return this;

}
// .method public append(I)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(int i)
{
	
	int spaceNeeded;
	
	//    .param p1, "i"    # I
	if ( i != -0x80000000 )
		goto label_cond_b;
	this->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-2147483648")));
	return this;
	// 368    .line 683
label_cond_b:
	if ( i >= 0 )
		goto label_cond_23;
	//    .local v0, "appendedLength":I
label_goto_14:
	spaceNeeded = (this->count + appendedLength);
	//    .local v1, "spaceNeeded":I
	this->ensureCapacityInternal(spaceNeeded);
	java::lang::Integer::getChars(i, spaceNeeded, this->value);
	this->count = spaceNeeded;
	return this;
	// 402    .line 684
	// 403    .end local v0    # "appendedLength":I
	// 404    .end local v1    # "spaceNeeded":I
label_cond_23:
	//    .restart local v0    # "appendedLength":I
	goto label_goto_14;

}
// .method public append(J)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(long long l)
{
	
	int spaceNeeded;
	
	//    .param p1, "l"    # J
	if ( (l > -0x8000000000000000L) )     
		goto label_cond_d;
	this->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-9223372036854775808")));
	return this;
	// 434    .line 710
label_cond_d:
	if ( (l > 0x0) >= 0 )
		goto label_cond_29;
	//    .local v0, "appendedLength":I
label_goto_1a:
	spaceNeeded = (this->count + appendedLength);
	//    .local v1, "spaceNeeded":I
	this->ensureCapacityInternal(spaceNeeded);
	java::lang::Long::getChars(l, spaceNeeded, this->value);
	this->count = spaceNeeded;
	return this;
	// 472    .line 711
	// 473    .end local v0    # "appendedLength":I
	// 474    .end local v1    # "spaceNeeded":I
label_cond_29:
	//    .restart local v0    # "appendedLength":I
	goto label_goto_1a;

}
// .method append(Ljava/lang/AbstractStringBuilder;)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(std::shared_ptr<java::lang::AbstractStringBuilder> asb)
{
	
	int len;
	
	//    .param p1, "asb"    # Ljava/lang/AbstractStringBuilder;
	if ( asb )     
		goto label_cond_7;
	return this->appendNull();
	// 499    .line 476
label_cond_7:
	len = asb->length();
	//    .local v0, "len":I
	this->ensureCapacityInternal((this->count +  len));
	asb->getChars(0x0, len, this->value, this->count);
	this->count = (this->count +  len);
	return this;

}
// .method public append(Ljava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	if ( s )     
		goto label_cond_7;
	return this->appendNull();
	// 548    .line 489
label_cond_7:
	if ( !(s->instanceOf("java::lang::String")) )  
		goto label_cond_12;
	s->checkCast("java::lang::String");
	//    .end local p1    # "s":Ljava/lang/CharSequence;
	return this->append(s);
	// 564    .line 491
	// 565    .restart local p1    # "s":Ljava/lang/CharSequence;
label_cond_12:
	if ( !(s->instanceOf("java::lang::AbstractStringBuilder")) )  
		goto label_cond_1d;
	s->checkCast("java::lang::AbstractStringBuilder");
	//    .end local p1    # "s":Ljava/lang/CharSequence;
	return this->append(s);
	// 581    .line 494
	// 582    .restart local p1    # "s":Ljava/lang/CharSequence;
label_cond_1d:
	return this->append(s, 0x0, s->length());

}
// .method public append(Ljava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(std::shared_ptr<java::lang::CharSequence> cVar0,int start,int end)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	int len;
	int i;
	int j;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "end"    # I
	if ( cVar0 )     
		goto label_cond_5;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("null"));
label_cond_5:
	if ( start < 0 ) 
		goto label_cond_9;
	if ( start <= end )
		goto label_cond_3d;
label_cond_9:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("start ")))->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", end ")))->append(end)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", s.length() ")))->append(cVar0->length())->toString());
	// throw
	throw cVar1;
	// 670    .line 543
label_cond_3d:
	if ( end >  cVar0->length() )
		goto label_cond_9;
	len = (end - start);
	//    .local v2, "len":I
	this->ensureCapacityInternal((this->count +  len));
	i = start;
	//    .local v0, "i":I
	j = this->count;
	//    .local v1, "j":I
label_goto_4e:
	if ( i >= end )
		goto label_cond_5d;
	this->value[j] = cVar0->charAt(i);
	i = ( i + 0x1);
	j = ( j + 0x1);
	goto label_goto_4e;
	// 715    .line 551
label_cond_5d:
	this->count = (this->count +  len);
	return this;

}
// .method public append(Ljava/lang/Object;)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	return this->append(java::lang::String::valueOf(obj));

}
// .method public append(Ljava/lang/String;)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(std::shared_ptr<java::lang::String> str)
{
	
	int len;
	
	//    .param p1, "str"    # Ljava/lang/String;
	if ( str )     
		goto label_cond_7;
	return this->appendNull();
	// 759    .line 450
label_cond_7:
	len = str->length();
	//    .local v0, "len":I
	this->ensureCapacityInternal((this->count +  len));
	str->getChars(0x0, len, this->value, this->count);
	this->count = (this->count +  len);
	return this;

}
// .method public append(Ljava/lang/StringBuffer;)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(std::shared_ptr<java::lang::StringBuffer> sb)
{
	
	int len;
	
	//    .param p1, "sb"    # Ljava/lang/StringBuffer;
	if ( sb )     
		goto label_cond_7;
	return this->appendNull();
	// 808    .line 462
label_cond_7:
	len = sb->length();
	//    .local v0, "len":I
	this->ensureCapacityInternal((this->count +  len));
	sb->getChars(0x0, len, this->value, this->count);
	this->count = (this->count +  len);
	return this;

}
// .method public append(Z)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(bool b)
{
	
	char cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	int cVar5;
	int cVar6;
	int cVar7;
	int cVar8;
	int cVar9;
	
	//    .param p1, "b"    # Z
	cVar0 = 0x65;
	if ( !(b) )  
		goto label_cond_3a;
	this->ensureCapacityInternal(( this->count + 0x4));
	cVar1 = this->count;
	this->count = ( cVar1 + 0x1);
	this->value[cVar1] = 0x74;
	cVar2 = this->count;
	this->count = ( cVar2 + 0x1);
	this->value[cVar2] = 0x72;
	cVar3 = this->count;
	this->count = ( cVar3 + 0x1);
	this->value[cVar3] = 0x75;
	cVar4 = this->count;
	this->count = ( cVar4 + 0x1);
	this->value[cVar4] = cVar0;
label_goto_39:
	return this;
	// 913    .line 632
label_cond_3a:
	this->ensureCapacityInternal(( this->count + 0x5));
	cVar5 = this->count;
	this->count = ( cVar5 + 0x1);
	this->value[cVar5] = 0x66;
	cVar6 = this->count;
	this->count = ( cVar6 + 0x1);
	this->value[cVar6] = 0x61;
	cVar7 = this->count;
	this->count = ( cVar7 + 0x1);
	this->value[cVar7] = 0x6c;
	cVar8 = this->count;
	this->count = ( cVar8 + 0x1);
	this->value[cVar8] = 0x73;
	cVar9 = this->count;
	this->count = ( cVar9 + 0x1);
	this->value[cVar9] = cVar0;
	goto label_goto_39;

}
// .method public append([C)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(std::shared_ptr<char[]> str)
{
	
	int len;
	
	//    .param p1, "str"    # [C
	len = str->size();
	//    .local v0, "len":I
	this->ensureCapacityInternal((this->count +  len));
	java::lang::System::arraycopy(str, 0x0, this->value, this->count, len);
	this->count = (this->count +  len);
	return this;

}
// .method public append([CII)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::append(std::shared_ptr<char[]> str,int offset,int len)
{
	
	//    .param p1, "str"    # [C
	//    .param p2, "offset"    # I
	//    .param p3, "len"    # I
	if ( len <= 0 )
		goto label_cond_8;
	this->ensureCapacityInternal((this->count +  len));
label_cond_8:
	java::lang::System::arraycopy(str, offset, this->value, this->count, len);
	this->count = (this->count +  len);
	return this;

}
// .method public appendCodePoint(I)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::appendCodePoint(int codePoint)
{
	
	int count;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "codePoint"    # I
	count = this->count;
	//    .local v0, "count":I
	if ( !(java::lang::Character::isBmpCodePoint(codePoint)) )  
		goto label_cond_17;
	this->ensureCapacityInternal(( count + 0x1));
	this->value[count] = (char)(codePoint);
	this->count = ( count + 0x1);
label_goto_16:
	return this;
	// 1147    .line 812
label_cond_17:
	if ( !(java::lang::Character::isValidCodePoint(codePoint)) )  
		goto label_cond_2c;
	this->ensureCapacityInternal(( count + 0x2));
	java::lang::Character::toSurrogates(codePoint, this->value, count);
	this->count = ( count + 0x2);
	goto label_goto_16;
	// 1172    .line 817
label_cond_2c:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;

}
// .method public capacity()I
int java::lang::AbstractStringBuilder::capacity()
{
	
	return this->value->size();

}
// .method public charAt(I)C
char java::lang::AbstractStringBuilder::charAt(int index)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	
	//    .param p1, "index"    # I
	if ( index < 0 ) 
		goto label_cond_6;
	if ( index <  this->count )
		goto label_cond_c;
label_cond_6:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(index);
	// throw
	throw cVar0;
	// 1213    .line 239
label_cond_c:
	return this->value[index];

}
// .method public codePointAt(I)I
int java::lang::AbstractStringBuilder::codePointAt(int index)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	
	//    .param p1, "index"    # I
	if ( index < 0 ) 
		goto label_cond_6;
	if ( index <  this->count )
		goto label_cond_c;
label_cond_6:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(index);
	// throw
	throw cVar0;
	// 1242    .line 267
label_cond_c:
	return java::lang::Character::codePointAtImpl(this->value, index, this->count);

}
// .method public codePointBefore(I)I
int java::lang::AbstractStringBuilder::codePointBefore(int index)
{
	
	int i;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	
	//    .param p1, "index"    # I
	i = ( index + -0x1);
	//    .local v0, "i":I
	if ( i < 0 ) 
		goto label_cond_9;
	if ( i <  this->count )
		goto label_cond_f;
label_cond_9:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(index);
	// throw
	throw cVar0;
	// 1281    .line 296
label_cond_f:
	return java::lang::Character::codePointBeforeImpl(this->value, index, 0x0);

}
// .method public codePointCount(II)I
int java::lang::AbstractStringBuilder::codePointCount(int beginIndex,int endIndex)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p1, "beginIndex"    # I
	//    .param p2, "endIndex"    # I
	if ( beginIndex < 0 ) 
		goto label_cond_6;
	if ( endIndex <= this->count )
		goto label_cond_c;
label_cond_6:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 1313    .line 320
label_cond_c:
	if ( beginIndex >  endIndex )
		goto label_cond_6;
	return java::lang::Character::codePointCountImpl(this->value, beginIndex, (endIndex - beginIndex));

}
// .method public delete(II)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::_delete_(int start,int cVar1)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar2;
	int len;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	if ( start >= 0 )
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(start);
	// throw
	throw cVar0;
	// 1345    .line 773
label_cond_8:
	if ( cVar1 <= this->count )
		goto label_cond_e;
	cVar1 = this->count;
label_cond_e:
	if ( start <= cVar1 )
		goto label_cond_16;
	cVar2 = std::make_shared<java::lang::StringIndexOutOfBoundsException>();
	// throw
	throw cVar2;
	// 1365    .line 777
label_cond_16:
	len = (cVar1 - start);
	//    .local v0, "len":I
	if ( len <= 0 )
		goto label_cond_2b;
	java::lang::System::arraycopy(this->value, (start + len), this->value, start, (this->count -  cVar1));
	this->count = (this->count -  len);
label_cond_2b:
	return this;

}
// .method public deleteCharAt(I)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::deleteCharAt(int index)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	
	//    .param p1, "index"    # I
	if ( index < 0 ) 
		goto label_cond_6;
	if ( index <  this->count )
		goto label_cond_c;
label_cond_6:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(index);
	// throw
	throw cVar0;
	// 1418    .line 843
label_cond_c:
	java::lang::System::arraycopy(this->value, ( index + 0x1), this->value, index, ( (this->count -  index) + -0x1));
	this->count = ( this->count + -0x1);
	return this;

}
// .method public ensureCapacity(I)V
void java::lang::AbstractStringBuilder::ensureCapacity(int minimumCapacity)
{
	
	//    .param p1, "minimumCapacity"    # I
	if ( minimumCapacity <= 0 )
		goto label_cond_5;
	this->ensureCapacityInternal(minimumCapacity);
label_cond_5:
	return;

}
// .method public getChars(II[CI)V
void java::lang::AbstractStringBuilder::getChars(int srcBegin,int srcEnd,std::shared_ptr<char[]> dst,int dstBegin)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar1;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar2;
	
	//    .param p1, "srcBegin"    # I
	//    .param p2, "srcEnd"    # I
	//    .param p3, "dst"    # [C
	//    .param p4, "dstBegin"    # I
	if ( srcBegin >= 0 )
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(srcBegin);
	// throw
	throw cVar0;
	// 1479    .line 385
label_cond_8:
	if ( srcEnd < 0 ) 
		goto label_cond_e;
	if ( srcEnd <= this->count )
		goto label_cond_14;
label_cond_e:
	cVar1 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(srcEnd);
	// throw
	throw cVar1;
	// 1495    .line 387
label_cond_14:
	if ( srcBegin <= srcEnd )
		goto label_cond_1f;
	cVar2 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("srcBegin > srcEnd")));
	// throw
	throw cVar2;
	// 1508    .line 389
label_cond_1f:
	java::lang::System::arraycopy(this->value, srcBegin, dst, dstBegin, (srcEnd - srcBegin));
	return;

}
// .method final getValue()[C
char java::lang::AbstractStringBuilder::getValue()
{
	
	return this->value;

}
// .method public indexOf(Ljava/lang/String;)I
int java::lang::AbstractStringBuilder::indexOf(std::shared_ptr<java::lang::String> str)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	return this->indexOf(str, 0x0);

}
// .method public indexOf(Ljava/lang/String;I)I
int java::lang::AbstractStringBuilder::indexOf(std::shared_ptr<java::lang::String> str,int fromIndex)
{
	
	int cVar0;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "fromIndex"    # I
	cVar0 = 0x0;
	return java::lang::String::indexOf(this->value, cVar0, this->count, str->toCharArray(), cVar0, str->length(), fromIndex);

}
// .method public insert(IC)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::insert(int offset,char c)
{
	
	//    .param p1, "offset"    # I
	//    .param p2, "c"    # C
	this->ensureCapacityInternal(( this->count + 0x1));
	java::lang::System::arraycopy(this->value, offset, this->value, ( offset + 0x1), (this->count -  offset));
	this->value[offset] = c;
	this->count = ( this->count + 0x1);
	return this;

}
// .method public insert(ID)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::insert(int offset,double d)
{
	
	//    .param p1, "offset"    # I
	//    .param p2, "d"    # D
	return this->insert(offset, java::lang::String::valueOf(d));

}
// .method public insert(IF)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::insert(int offset,float f)
{
	
	//    .param p1, "offset"    # I
	//    .param p2, "f"    # F
	return this->insert(offset, java::lang::String::valueOf(f));

}
// .method public insert(II)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::insert(int offset,int i)
{
	
	//    .param p1, "offset"    # I
	//    .param p2, "i"    # I
	return this->insert(offset, java::lang::String::valueOf(i));

}
// .method public insert(IJ)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::insert(int offset,long long l)
{
	
	//    .param p1, "offset"    # I
	//    .param p2, "l"    # J
	return this->insert(offset, java::lang::String::valueOf(l));

}
// .method public insert(ILjava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::insert(int dstOffset,std::shared_ptr<java::lang::CharSequence> cVar0)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "dstOffset"    # I
	//    .param p2, "s"    # Ljava/lang/CharSequence;
	if ( cVar0 )     
		goto label_cond_5;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("null"));
label_cond_5:
	if ( !(cVar0->instanceOf("java::lang::String")) )  
		goto label_cond_10;
	cVar0->checkCast("java::lang::String");
	//    .end local p2    # "s":Ljava/lang/CharSequence;
	return this->insert(dstOffset, cVar0);
	// 1721    .line 1128
	// 1722    .restart local p2    # "s":Ljava/lang/CharSequence;
label_cond_10:
	return this->insert(dstOffset, cVar0, 0x0, cVar0->length());

}
// .method public insert(ILjava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::insert(int dstOffset,std::shared_ptr<java::lang::CharSequence> s,int start,int end)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	int len;
	int i;
	int dstOffset;
	
	//    .param p1, "dstOffset"    # I
	//    .param p2, "s"    # Ljava/lang/CharSequence;
	//    .param p3, "start"    # I
	//    .param p4, "end"    # I
	if ( s )     
		goto label_cond_5;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("null"));
label_cond_5:
	if ( dstOffset < 0 ) 
		goto label_cond_d;
	if ( dstOffset <= this->length() )
		goto label_cond_27;
label_cond_d:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("dstOffset ")))->append(dstOffset)->toString());
	// throw
	throw cVar1;
	// 1787    .line 1182
label_cond_27:
	if ( start < 0 ) 
		goto label_cond_2b;
	if ( end >= 0 )
		goto label_cond_5f;
label_cond_2b:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("start ")))->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", end ")))->append(end)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", s.length() ")))->append(cVar0->length())->toString());
	// throw
	throw cVar3;
	// 1847    .line 1182
label_cond_5f:
	if ( start >  end )
		goto label_cond_2b;
	if ( end >  cVar0->length() )
		goto label_cond_2b;
	len = (end - start);
	//    .local v2, "len":I
	this->ensureCapacityInternal((this->count +  len));
	java::lang::System::arraycopy(this->value, dstOffset, this->value, (dstOffset + len), (this->count -  dstOffset));
	i = start;
	//    .local v1, "i":I
	dstOffset = dstOffset;
	//    .end local p1    # "dstOffset":I
	//    .local v0, "dstOffset":I
label_goto_7d:
	if ( i >= end )
		goto label_cond_8d;
	//    .end local v0    # "dstOffset":I
	//    .restart local p1    # "dstOffset":I
	this->value[dstOffset] = cVar0->charAt(i);
	i = ( i + 0x1);
	dstOffset = ( dstOffset + 0x1);
	//    .end local p1    # "dstOffset":I
	//    .restart local v0    # "dstOffset":I
	goto label_goto_7d;
	// 1916    .line 1192
label_cond_8d:
	this->count = (this->count +  len);
	return this;

}
// .method public insert(ILjava/lang/Object;)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::insert(int offset,std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "offset"    # I
	//    .param p2, "obj"    # Ljava/lang/Object;
	return this->insert(offset, java::lang::String::valueOf(obj));

}
// .method public insert(ILjava/lang/String;)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::insert(int offset,std::shared_ptr<java::lang::String> cVar1)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	int len;
	
	//    .param p1, "offset"    # I
	//    .param p2, "str"    # Ljava/lang/String;
	if ( offset < 0 ) 
		goto label_cond_8;
	if ( offset <= this->length() )
		goto label_cond_e;
label_cond_8:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset);
	// throw
	throw cVar0;
	// 1969    .line 1055
label_cond_e:
	if ( cVar1 )     
		goto label_cond_13;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("null"));
label_cond_13:
	len = cVar1->length();
	//    .local v0, "len":I
	this->ensureCapacityInternal((this->count +  len));
	java::lang::System::arraycopy(this->value, offset, this->value, (offset + len), (this->count -  offset));
	cVar1->getChars(this->value, offset);
	this->count = (this->count +  len);
	return this;

}
// .method public insert(IZ)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::insert(int offset,bool b)
{
	
	//    .param p1, "offset"    # I
	//    .param p2, "b"    # Z
	return this->insert(offset, java::lang::String::valueOf(b));

}
// .method public insert(I[C)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::insert(int offset,std::shared_ptr<char[]> str)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	int len;
	
	//    .param p1, "offset"    # I
	//    .param p2, "str"    # [C
	if ( offset < 0 ) 
		goto label_cond_9;
	if ( offset <= this->length() )
		goto label_cond_f;
label_cond_9:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset);
	// throw
	throw cVar0;
	// 2062    .line 1093
label_cond_f:
	len = str->size();
	//    .local v0, "len":I
	this->ensureCapacityInternal((this->count +  len));
	java::lang::System::arraycopy(this->value, offset, this->value, (offset + len), (this->count -  offset));
	java::lang::System::arraycopy(str, 0x0, this->value, offset, len);
	this->count = (this->count +  len);
	return this;

}
// .method public insert(I[CII)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::insert(int index,std::shared_ptr<char[]> str,int offset,int len)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "index"    # I
	//    .param p2, "str"    # [C
	//    .param p3, "offset"    # I
	//    .param p4, "len"    # I
	if ( index < 0 ) 
		goto label_cond_8;
	if ( index <= this->length() )
		goto label_cond_e;
label_cond_8:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(index);
	// throw
	throw cVar0;
	// 2128    .line 985
label_cond_e:
	if ( offset < 0 ) 
		goto label_cond_12;
	if ( len >= 0 )
		goto label_cond_43;
label_cond_12:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("offset ")))->append(offset)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", len ")))->append(len)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", str.length ")))->append(str->size())->toString());
	// throw
	throw cVar1;
	// 2186    .line 985
label_cond_43:
	if ( offset >  (str->size() -  len) )
		goto label_cond_12;
	this->ensureCapacityInternal((this->count +  len));
	java::lang::System::arraycopy(this->value, index, this->value, (index + len), (this->count -  index));
	java::lang::System::arraycopy(str, offset, this->value, index, len);
	this->count = (this->count +  len);
	return this;

}
// .method public lastIndexOf(Ljava/lang/String;)I
int java::lang::AbstractStringBuilder::lastIndexOf(std::shared_ptr<java::lang::String> str)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	return this->lastIndexOf(str, this->count);

}
// .method public lastIndexOf(Ljava/lang/String;I)I
int java::lang::AbstractStringBuilder::lastIndexOf(std::shared_ptr<java::lang::String> str,int fromIndex)
{
	
	int cVar0;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "fromIndex"    # I
	cVar0 = 0x0;
	return java::lang::String::lastIndexOf(this->value, cVar0, this->count, str->toCharArray(), cVar0, str->length(), fromIndex);

}
// .method public length()I
int java::lang::AbstractStringBuilder::length()
{
	
	return this->count;

}
// .method public offsetByCodePoints(II)I
int java::lang::AbstractStringBuilder::offsetByCodePoints(int index,int codePointOffset)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p1, "index"    # I
	//    .param p2, "codePointOffset"    # I
	if ( index < 0 ) 
		goto label_cond_7;
	if ( index <= this->count )
		goto label_cond_d;
label_cond_7:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 2312    .line 349
label_cond_d:
	return java::lang::Character::offsetByCodePointsImpl(this->value, 0x0, this->count, index, codePointOffset);

}
// .method public replace(IILjava/lang/String;)Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::replace(int start,int cVar3,std::shared_ptr<java::lang::String> str)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar1;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar2;
	int cVar3;
	int len;
	int newCount;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "str"    # Ljava/lang/String;
	if ( start >= 0 )
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(start);
	// throw
	throw cVar0;
	// 2342    .line 871
label_cond_8:
	if ( start <= this->count )
		goto label_cond_15;
	cVar1 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("start > length()")));
	// throw
	throw cVar1;
	// 2357    .line 873
label_cond_15:
	if ( start <= cVar3 )
		goto label_cond_20;
	cVar2 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("start > end")));
	// throw
	throw cVar2;
	// 2370    .line 876
label_cond_20:
	if ( cVar3 <= this->count )
		goto label_cond_26;
	cVar3 = this->count;
label_cond_26:
	len = str->length();
	//    .local v0, "len":I
	newCount = ((this->count +  len) - (cVar3 - start));
	//    .local v1, "newCount":I
	this->ensureCapacityInternal(newCount);
	java::lang::System::arraycopy(this->value, cVar3, this->value, (start + len), (this->count -  cVar3));
	str->getChars(this->value, start);
	this->count = newCount;
	return this;

}
// .method public reverse()Ljava/lang/AbstractStringBuilder;
std::shared_ptr<java::lang::AbstractStringBuilder> java::lang::AbstractStringBuilder::reverse()
{
	
	int n;
	int j;
	int k;
	char cj;
	char ck;
	
	//    .local v2, "hasSurrogates":Z
	n = ( this->count + -0x1);
	//    .local v5, "n":I
	j = _shri(( n + -0x1),0x1);
	//    .local v3, "j":I
label_goto_9:
	if ( j < 0 ) 
		goto label_cond_2d;
	k = (n - j);
	//    .local v4, "k":I
	cj = this->value[j];
	//    .local v0, "cj":C
	ck = this->value[k];
	//    .local v1, "ck":C
	this->value[j] = ck;
	this->value[k] = cj;
	if ( java::lang::Character::isSurrogate(cj) )     
		goto label_cond_29;
	if ( !(java::lang::Character::isSurrogate(ck)) )  
		goto label_cond_2a;
label_cond_29:
	0x1;
label_cond_2a:
	j = ( j + -0x1);
	goto label_goto_9;
	// 2498    .line 1460
	// 2499    .end local v0    # "cj":C
	// 2500    .end local v1    # "ck":C
	// 2501    .end local v4    # "k":I
label_cond_2d:
	if ( !(0x0) )  
		goto label_cond_32;
	this->reverseAllValidSurrogatePairs();
label_cond_32:
	return this;

}
// .method public setCharAt(IC)V
void java::lang::AbstractStringBuilder::setCharAt(int index,char ch)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	
	//    .param p1, "index"    # I
	//    .param p2, "ch"    # C
	if ( index < 0 ) 
		goto label_cond_6;
	if ( index <  this->count )
		goto label_cond_c;
label_cond_6:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(index);
	// throw
	throw cVar0;
	// 2534    .line 409
label_cond_c:
	this->value[index] = ch;
	return;

}
// .method public setLength(I)V
void java::lang::AbstractStringBuilder::setLength(int newLength)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	
	//    .param p1, "newLength"    # I
	if ( newLength >= 0 )
		goto label_cond_9;
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(newLength);
	// throw
	throw cVar0;
	// 2561    .line 209
label_cond_9:
	this->ensureCapacityInternal(newLength);
	if ( this->count >= newLength )
		goto label_cond_17;
	java::util::Arrays::fill(this->value, this->count, newLength, 0x0);
label_cond_17:
	this->count = newLength;
	return;

}
// .method public subSequence(II)Ljava/lang/CharSequence;
std::shared_ptr<java::lang::CharSequence> java::lang::AbstractStringBuilder::subSequence(int start,int end)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	return this->substring(start, end);

}
// .method public substring(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::AbstractStringBuilder::substring(int start)
{
	
	//    .param p1, "start"    # I
	return this->substring(start, this->count);

}
// .method public substring(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::AbstractStringBuilder::substring(int start,int end)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar1;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	if ( start >= 0 )
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(start);
	// throw
	throw cVar0;
	// 2630    .line 951
label_cond_8:
	if ( end <= this->count )
		goto label_cond_12;
	cVar1 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(end);
	// throw
	throw cVar1;
	// 2643    .line 953
label_cond_12:
	if ( start <= end )
		goto label_cond_1c;
	cVar2 = std::make_shared<java::lang::StringIndexOutOfBoundsException>((end - start));
	// throw
	throw cVar2;
	// 2656    .line 955
label_cond_1c:
	cVar3 = std::make_shared<java::lang::String>(this->value, start, (end - start));
	return cVar3;

}
// .method public trimToSize()V
void java::lang::AbstractStringBuilder::trimToSize()
{
	
	if ( this->count >= this->value->size() )
		goto label_cond_11;
	this->value = java::util::Arrays::copyOf(this->value, this->count);
label_cond_11:
	return;

}


