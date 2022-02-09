// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UResource$Key.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::impl::UResource_S_Key::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::UResource_S_Key::static_cinit()
{
	
	android::icu::impl::UResource_S_Key::_assertionsDisabled = ( android::icu::impl::UResource_S_Key()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
android::icu::impl::UResource_S_Key::UResource_S_Key()
{
	
	// 072    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->s = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::impl::UResource_S_Key::UResource_S_Key(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	// 089    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->setString(s);
	return;

}
// .method private constructor <init>([BII)V
android::icu::impl::UResource_S_Key::UResource_S_Key(std::shared_ptr<unsigned char[]> keyBytes,int keyOffset,int keyLength)
{
	
	//    .param p1, "keyBytes"    # [B
	//    .param p2, "keyOffset"    # I
	//    .param p3, "keyLength"    # I
	// 106    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->bytes = keyBytes;
	this->offset = keyOffset;
	this->length = keyLength;
	return;

}
// .method private internalSubString(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UResource_S_Key::internalSubString(int start,int end)
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	sb = std::make_shared<java::lang::StringBuilder>((end - start));
	//    .local v1, "sb":Ljava/lang/StringBuilder;
	i = start;
	//    .local v0, "i":I
label_goto_8:
	if ( i >= end )
		goto label_cond_18;
	sb->append((char)(this->bytes[(this->offset +  i)]));
	i = ( i + 0x1);
	goto label_goto_8;
	// 160    .line 160
label_cond_18:
	return sb->toString();

}
// .method private regionMatches(ILjava/lang/CharSequence;I)Z
bool android::icu::impl::UResource_S_Key::regionMatches(int start,std::shared_ptr<java::lang::CharSequence> cs,int n)
{
	
	int i;
	
	//    .param p1, "start"    # I
	//    .param p2, "cs"    # Ljava/lang/CharSequence;
	//    .param p3, "n"    # I
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= n )
		goto label_cond_16;
	if ( this->bytes[((this->offset +  start) +  i)] == cs->charAt(i) )
		goto label_cond_13;
	return 0x0;
	// 205    .line 190
label_cond_13:
	i = ( i + 0x1);
	goto label_goto_1;
	// 211    .line 195
label_cond_16:
	return 0x1;

}
// .method private regionMatches([BII)Z
bool android::icu::impl::UResource_S_Key::regionMatches(std::shared_ptr<unsigned char[]> otherBytes,int otherOffset,int n)
{
	
	int i;
	
	//    .param p1, "otherBytes"    # [B
	//    .param p2, "otherOffset"    # I
	//    .param p3, "n"    # I
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= n )
		goto label_cond_15;
	if ( this->bytes[(this->offset +  i)] == otherBytes[(otherOffset + i)] )
		goto label_cond_12;
	return 0x0;
	// 252    .line 181
label_cond_12:
	i = ( i + 0x1);
	goto label_goto_1;
	// 258    .line 186
label_cond_15:
	return 0x1;

}
// .method public charAt(I)C
char android::icu::impl::UResource_S_Key::charAt(int i)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "i"    # I
	if ( android::icu::impl::UResource_S_Key::_assertionsDisabled )     
		goto label_cond_10;
	if ( i < 0 ) 
		goto label_cond_a;
	if ( i <  this->length )
		goto label_cond_10;
label_cond_a:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 290    .line 129
label_cond_10:
	return (char)(this->bytes[(this->offset +  i)]);

}
// .method public clone()Landroid/icu/impl/UResource$Key;
std::shared_ptr<android::icu::impl::UResource_S_Key> android::icu::impl::UResource_S_Key::clone()
{
	
	std::shared_ptr<android::icu::impl::UResource_S_Key> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	cVar0 = this->clone();
	cVar0->checkCast("android::icu::impl::UResource_S_Key");
	//label_try_end_6:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_6} :catch_7
	return cVar0;
	// 321    .line 121
label_catch_7:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "cannotOccur":Ljava/lang/CloneNotSupportedException;
	return 0x0;

}
// .method public compareTo(Landroid/icu/impl/UResource$Key;)I
int android::icu::impl::UResource_S_Key::compareTo(std::shared_ptr<android::icu::impl::UResource_S_Key> other)
{
	
	//    .param p1, "other"    # Landroid/icu/impl/UResource$Key;
	return this->compareTo(other);

}
// .method public compareTo(Ljava/lang/CharSequence;)I
int android::icu::impl::UResource_S_Key::compareTo(std::shared_ptr<java::lang::CharSequence> cs)
{
	
	int csLength;
	int i;
	int diff;
	
	//    .param p1, "cs"    # Ljava/lang/CharSequence;
	csLength = cs->length();
	//    .local v0, "csLength":I
	if ( this->length >  csLength )
		goto label_cond_1a;
	//    .local v3, "minLength":I
label_goto_a:
	i = 0x0;
	//    .local v2, "i":I
label_goto_b:
	if ( i >= minLength )
		goto label_cond_1f;
	diff = (this->charAt(i) - cs->charAt(i));
	//    .local v1, "diff":I
	if ( !(diff) )  
		goto label_cond_1c;
	return diff;
	// 407    .line 261
	// 408    .end local v1    # "diff":I
	// 409    .end local v2    # "i":I
	// 410    .end local v3    # "minLength":I
label_cond_1a:
	//    .restart local v3    # "minLength":I
	goto label_goto_a;
	// 417    .line 262
	// 418    .restart local v1    # "diff":I
	// 419    .restart local v2    # "i":I
label_cond_1c:
	i = ( i + 0x1);
	goto label_goto_b;
	// 425    .line 268
	// 426    .end local v1    # "diff":I
label_cond_1f:
	return (this->length -  csLength);

}
// .method public contentEquals(Ljava/lang/CharSequence;)Z
bool android::icu::impl::UResource_S_Key::contentEquals(std::shared_ptr<java::lang::CharSequence> cs)
{
	
	bool cVar1;
	
	//    .param p1, "cs"    # Ljava/lang/CharSequence;
	cVar1 = 0x0;
	if ( cs )     
		goto label_cond_4;
	return cVar1;
	// 462    .line 217
label_cond_4:
	if ( this == cs )
		goto label_cond_15;
	if ( cs->length() != this->length )
		goto label_cond_14;
	cVar1 = this->regionMatches(cVar1, cs, this->length);
label_cond_14:
label_goto_14:
	return cVar1;
label_cond_15:
	cVar1 = 0x1;
	goto label_goto_14;

}
// .method public endsWith(Ljava/lang/CharSequence;)Z
bool android::icu::impl::UResource_S_Key::endsWith(std::shared_ptr<java::lang::CharSequence> cs)
{
	
	int csLength;
	bool cVar0;
	
	//    .param p1, "cs"    # Ljava/lang/CharSequence;
	csLength = cs->length();
	//    .local v0, "csLength":I
	if ( csLength >  this->length )
		goto label_cond_10;
	cVar0 = this->regionMatches((this->length -  csLength), cs, csLength);
label_goto_f:
	return cVar0;
label_cond_10:
	cVar0 = 0x0;
	goto label_goto_f;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::UResource_S_Key::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::impl::UResource_S_Key> otherKey;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( other )     
		goto label_cond_4;
	return cVar1;
	// 536    .line 202
label_cond_4:
	if ( this != other )
		goto label_cond_8;
	return 0x1;
	// 545    .line 204
label_cond_8:
	if ( !(other->instanceOf("android::icu::impl::UResource_S_Key")) )  
		goto label_cond_20;
	otherKey = other;
	otherKey->checkCast("android::icu::impl::UResource_S_Key");
	//    .local v0, "otherKey":Landroid/icu/impl/UResource$Key;
	if ( this->length != otherKey->length )
		goto label_cond_1f;
	cVar1 = this->regionMatches(otherKey->bytes, otherKey->offset, this->length);
label_cond_1f:
	return cVar1;
	// 579    .line 209
	// 580    .end local v0    # "otherKey":Landroid/icu/impl/UResource$Key;
label_cond_20:
	return cVar1;

}
// .method public hashCode()I
int android::icu::impl::UResource_S_Key::hashCode()
{
	
	int h;
	int i;
	
	if ( this->length )     
		goto label_cond_6;
	return 0x0;
	// 599    .line 247
label_cond_6:
	h = this->bytes[this->offset];
	//    .local v0, "h":I
	i = 0x1;
	//    .local v1, "i":I
label_goto_d:
	if ( i >= this->length )
		goto label_cond_1e;
	h = (( h * 0x25) + this->bytes[this->offset]);
	i = ( i + 0x1);
	goto label_goto_d;
	// 633    .line 251
label_cond_1e:
	return h;

}
// .method public length()I
int android::icu::impl::UResource_S_Key::length()
{
	
	return this->length;

}
// .method public regionMatches(ILjava/lang/CharSequence;)Z
bool android::icu::impl::UResource_S_Key::regionMatches(int start,std::shared_ptr<java::lang::CharSequence> cs)
{
	
	int csLength;
	bool cVar0;
	
	//    .param p1, "start"    # I
	//    .param p2, "cs"    # Ljava/lang/CharSequence;
	csLength = cs->length();
	//    .local v0, "csLength":I
	if ( csLength != (this->length -  start) )
		goto label_cond_e;
	cVar0 = this->regionMatches(start, cs, csLength);
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method public setBytes([BI)Landroid/icu/impl/UResource$Key;
std::shared_ptr<android::icu::impl::UResource_S_Key> android::icu::impl::UResource_S_Key::setBytes(std::shared_ptr<unsigned char[]> keyBytes,int keyOffset)
{
	
	//    .param p1, "keyBytes"    # [B
	//    .param p2, "keyOffset"    # I
	this->bytes = keyBytes;
	this->offset = keyOffset;
	this->length = 0x0;
label_goto_7:
	if ( !(keyBytes[(this->length +  keyOffset)]) )  
		goto label_cond_15;
	this->length = ( this->length + 0x1);
	goto label_goto_7;
	// 714    .line 76
label_cond_15:
	this->s = 0x0;
	return this;

}
// .method public setString(Ljava/lang/String;)Landroid/icu/impl/UResource$Key;
std::shared_ptr<android::icu::impl::UResource_S_Key> android::icu::impl::UResource_S_Key::setString(std::shared_ptr<java::lang::String> s)
{
	
	int i;
	int c;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "s"    # Ljava/lang/String;
	if ( !(s->isEmpty()) )  
		goto label_cond_a;
	this->setToEmpty();
label_goto_9:
	return this;
	// 743    .line 97
label_cond_a:
	this->bytes = std::make_shared<std::vector<unsigned char[]>>(s->length());
	this->offset = 0x0;
	this->length = s->length();
	i = 0x0;
	//    .local v1, "i":I
label_goto_1c:
	if ( i >= this->length )
		goto label_cond_50;
	c = s->charAt(i);
	//    .local v0, "c":C
	if ( c >  0x7f )
		goto label_cond_30;
	this->bytes[i] = (unsigned char)(c);
	i = ( i + 0x1);
	goto label_goto_1c;
	// 797    .line 105
label_cond_30:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(0x22)->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar0;
	// 829    .line 108
	// 830    .end local v0    # "c":C
label_cond_50:
	this->s = s;
	goto label_goto_9;

}
// .method public setToEmpty()Landroid/icu/impl/UResource$Key;
std::shared_ptr<android::icu::impl::UResource_S_Key> android::icu::impl::UResource_S_Key::setToEmpty()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->bytes = 0x0;
	this->length = cVar0;
	this->offset = cVar0;
	this->s = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	return this;

}
// .method public startsWith(Ljava/lang/CharSequence;)Z
bool android::icu::impl::UResource_S_Key::startsWith(std::shared_ptr<java::lang::CharSequence> cs)
{
	
	int cVar1;
	int csLength;
	bool cVar1;
	
	//    .param p1, "cs"    # Ljava/lang/CharSequence;
	cVar1 = 0x0;
	csLength = cs->length();
	//    .local v0, "csLength":I
	if ( csLength >  this->length )
		goto label_cond_d;
	cVar1 = this->regionMatches(cVar1, cs, csLength);
label_cond_d:
	return cVar1;

}
// .method public subSequence(II)Landroid/icu/impl/UResource$Key;
std::shared_ptr<android::icu::impl::UResource_S_Key> android::icu::impl::UResource_S_Key::subSequence(int start,int end)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<android::icu::impl::UResource_S_Key> cVar2;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	if ( android::icu::impl::UResource_S_Key::_assertionsDisabled )     
		goto label_cond_10;
	if ( start < 0 ) 
		goto label_cond_a;
	if ( start <  this->length )
		goto label_cond_10;
label_cond_a:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 912    .line 140
label_cond_10:
	if ( android::icu::impl::UResource_S_Key::_assertionsDisabled )     
		goto label_cond_20;
	if ( start >  end )
		goto label_cond_1a;
	if ( end <= this->length )
		goto label_cond_20;
label_cond_1a:
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 931    .line 141
label_cond_20:
	cVar2 = std::make_shared<android::icu::impl::UResource_S_Key>(this->bytes, (this->offset +  start), (end - start));
	return cVar2;

}
// .method public substring(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UResource_S_Key::substring(int start)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "start"    # I
	if ( android::icu::impl::UResource_S_Key::_assertionsDisabled )     
		goto label_cond_10;
	if ( start < 0 ) 
		goto label_cond_a;
	if ( start <  this->length )
		goto label_cond_10;
label_cond_a:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 983    .line 168
label_cond_10:
	return this->internalSubString(start, this->length);

}
// .method public substring(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UResource_S_Key::substring(int start,int end)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	if ( android::icu::impl::UResource_S_Key::_assertionsDisabled )     
		goto label_cond_10;
	if ( start < 0 ) 
		goto label_cond_a;
	if ( start <  this->length )
		goto label_cond_10;
label_cond_a:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1018    .line 176
label_cond_10:
	if ( android::icu::impl::UResource_S_Key::_assertionsDisabled )     
		goto label_cond_20;
	if ( start >  end )
		goto label_cond_1a;
	if ( end <= this->length )
		goto label_cond_20;
label_cond_1a:
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 1037    .line 177
label_cond_20:
	return this->internalSubString(start, end);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UResource_S_Key::toString()
{
	
	if ( this->s )     
		goto label_cond_d;
	this->s = this->internalSubString(0x0, this->length);
label_cond_d:
	return this->s;

}


