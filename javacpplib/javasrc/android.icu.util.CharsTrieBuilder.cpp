// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\CharsTrieBuilder.smali
#include "java2ctype.h"
#include "android.icu.util.CharsTrie.h"
#include "android.icu.util.CharsTrieBuilder.h"
#include "android.icu.util.StringTrieBuilder_S_Option.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.nio.CharBuffer.h"

static android::icu::util::CharsTrieBuilder::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::util::CharsTrieBuilder::static_cinit()
{
	
	android::icu::util::CharsTrieBuilder::_assertionsDisabled = ( android::icu::util::CharsTrieBuilder()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
android::icu::util::CharsTrieBuilder::CharsTrieBuilder()
{
	
	// 042    invoke-direct {p0}, Landroid/icu/util/StringTrieBuilder;-><init>()V
	this->intUnits = std::make_shared<std::vector<char[]>>(0x3);
	return;

}
// .method private buildChars(Landroid/icu/util/StringTrieBuilder$Option;)V
void android::icu::util::CharsTrieBuilder::buildChars(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption)
{
	
	//    .param p1, "buildOption"    # Landroid/icu/util/StringTrieBuilder$Option;
	if ( this->chars )     
		goto label_cond_a;
	this->chars = std::make_shared<std::vector<char[]>>(0x400);
label_cond_a:
	this->buildImpl(buildOption);
	return;

}
// .method private ensureCapacity(I)V
void android::icu::util::CharsTrieBuilder::ensureCapacity(int length)
{
	
	int newCapacity;
	std::shared<std::vector<char[]>> newChars;
	
	//    .param p1, "length"    # I
	if ( length <= this->chars->size() )
		goto label_cond_21;
	//    .local v0, "newCapacity":I
label_cond_8:
	newCapacity = ( newCapacity * 0x2);
	if ( newCapacity <= length )
		goto label_cond_8;
	newChars = std::make_shared<std::vector<char[]>>(newCapacity);
	//    .local v1, "newChars":[C
	java::lang::System::arraycopy(this->chars, (this->chars->size() -  this->charsLength), newChars, (newChars->size() -  this->charsLength), this->charsLength);
	this->chars = newChars;
	//    .end local v0    # "newCapacity":I
	//    .end local v1    # "newChars":[C
label_cond_21:
	return;

}
// .method private write([CI)I
int android::icu::util::CharsTrieBuilder::write(std::shared_ptr<char[]> s,int length)
{
	
	int newLength;
	
	//    .param p1, "s"    # [C
	//    .param p2, "length"    # I
	newLength = (this->charsLength + length);
	//    .local v0, "newLength":I
	this->ensureCapacity(newLength);
	this->charsLength = newLength;
	java::lang::System::arraycopy(s, 0x0, this->chars, (this->chars->size() -  this->charsLength), length);
	return this->charsLength;

}
// .method public add(Ljava/lang/CharSequence;I)Landroid/icu/util/CharsTrieBuilder;
std::shared_ptr<android::icu::util::CharsTrieBuilder> android::icu::util::CharsTrieBuilder::add(std::shared_ptr<java::lang::CharSequence> s,int value)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "value"    # I
	this->addImpl(s, value);
	return this;

}
// .method public build(Landroid/icu/util/StringTrieBuilder$Option;)Landroid/icu/util/CharsTrie;
std::shared_ptr<android::icu::util::CharsTrie> android::icu::util::CharsTrieBuilder::build(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption)
{
	
	std::shared_ptr<android::icu::util::CharsTrie> cVar0;
	
	//    .param p1, "buildOption"    # Landroid/icu/util/StringTrieBuilder$Option;
	cVar0 = std::make_shared<android::icu::util::CharsTrie>(this->buildCharSequence(buildOption), 0x0);
	return cVar0;

}
// .method public buildCharSequence(Landroid/icu/util/StringTrieBuilder$Option;)Ljava/lang/CharSequence;
std::shared_ptr<java::lang::CharSequence> android::icu::util::CharsTrieBuilder::buildCharSequence(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption)
{
	
	//    .param p1, "buildOption"    # Landroid/icu/util/StringTrieBuilder$Option;
	this->buildChars(buildOption);
	return java::nio::CharBuffer::wrap(this->chars, (this->chars->size() -  this->charsLength), this->charsLength);

}
// .method public clear()Landroid/icu/util/CharsTrieBuilder;
std::shared_ptr<android::icu::util::CharsTrieBuilder> android::icu::util::CharsTrieBuilder::clear()
{
	
	this->clearImpl();
	this->chars = 0x0;
	this->charsLength = 0x0;
	return this;

}
// .method protected getMaxBranchLinearSubNodeLength()I
int android::icu::util::CharsTrieBuilder::getMaxBranchLinearSubNodeLength()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 267    .end annotation
	return 0x5;

}
// .method protected getMaxLinearMatchLength()I
int android::icu::util::CharsTrieBuilder::getMaxLinearMatchLength()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 279    .end annotation
	return 0x10;

}
// .method protected getMinLinearMatch()I
int android::icu::util::CharsTrieBuilder::getMinLinearMatch()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 291    .end annotation
	return 0x30;

}
// .method protected matchNodesCanHaveValues()Z
bool android::icu::util::CharsTrieBuilder::matchNodesCanHaveValues()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 303    .end annotation
	return 0x1;

}
// .method protected write(I)I
int android::icu::util::CharsTrieBuilder::write(int unit)
{
	
	int newLength;
	
	//    .param p1, "unit"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 316    .end annotation
	newLength = ( this->charsLength + 0x1);
	//    .local v0, "newLength":I
	this->ensureCapacity(newLength);
	this->charsLength = newLength;
	this->chars[(this->chars->size() -  this->charsLength)] = (char)(unit);
	return this->charsLength;

}
// .method protected write(II)I
int android::icu::util::CharsTrieBuilder::write(int offset,int length)
{
	
	int newLength;
	int charsOffset;
	int offset;
	int length;
	
	//    .param p1, "offset"    # I
	//    .param p2, "length"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 357    .end annotation
	newLength = (this->charsLength + length);
	//    .local v2, "newLength":I
	this->ensureCapacity(newLength);
	this->charsLength = newLength;
	//    .local v0, "charsOffset":I
	charsOffset = (this->chars->size() - this->charsLength);
	//    .end local v0    # "charsOffset":I
	//    .local v1, "charsOffset":I
	offset = offset;
	//    .end local p1    # "offset":I
	//    .local v3, "offset":I
label_goto_12:
	if ( length <= 0 )
		goto label_cond_27;
	//    .end local v1    # "charsOffset":I
	//    .restart local v0    # "charsOffset":I
	//    .end local v3    # "offset":I
	//    .restart local p1    # "offset":I
	this->chars[charsOffset] = this->strings->charAt(offset);
	length = ( length + -0x1);
	charsOffset = ( charsOffset + 0x1);
	//    .end local v0    # "charsOffset":I
	//    .restart local v1    # "charsOffset":I
	offset = ( offset + 0x1);
	//    .end local p1    # "offset":I
	//    .restart local v3    # "offset":I
	goto label_goto_12;
	// 426    .line 177
label_cond_27:
	return this->charsLength;

}
// .method protected writeDeltaTo(I)I
int android::icu::util::CharsTrieBuilder::writeDeltaTo(int jumpTarget)
{
	
	int cVar0;
	int i;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int length;
	
	//    .param p1, "jumpTarget"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 437    .end annotation
	cVar0 = 0x0;
	i = (this->charsLength - jumpTarget);
	//    .local v0, "i":I
	if ( android::icu::util::CharsTrieBuilder::_assertionsDisabled )     
		goto label_cond_11;
	if ( i >= 0 )
		goto label_cond_11;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 461    .line 256
label_cond_11:
	if ( i >  0xfbff )
		goto label_cond_1b;
	return this->write(i);
	// 474    .line 260
label_cond_1b:
	if ( i >  0x3feffff )
		goto label_cond_3a;
	this->intUnits[cVar0] = (char)((_shri(i,0x10) +  0xfc00));
	length = 0x1;
	//    .local v1, "length":I
label_goto_2c:
	//    .end local v1    # "length":I
	//    .local v2, "length":I
	this->intUnits[length] = (char)(i);
	return this->write(this->intUnits, ( length + 0x1));
	// 518    .line 264
	// 519    .end local v2    # "length":I
label_cond_3a:
	this->intUnits[cVar0] = 0xffff;
	this->intUnits[0x1] = (char)(_shri(i,0x10));
	length = 0x2;
	//    .restart local v1    # "length":I
	goto label_goto_2c;

}
// .method protected writeValueAndFinal(IZ)I
int android::icu::util::CharsTrieBuilder::writeValueAndFinal(int i,bool isFinal)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	
	//    .param p1, "i"    # I
	//    .param p2, "isFinal"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 550    .end annotation
	cVar0 = 0x8000;
	cVar1 = 0x1;
	cVar2 = 0x0;
	if ( i < 0 ) 
		goto label_cond_15;
	if ( i >  0x3fff )
		goto label_cond_15;
	if ( !(isFinal) )  
		goto label_cond_13;
label_goto_d:
	return this->write((cVar0 |  i));
label_cond_13:
	cVar0 = cVar2;
	goto label_goto_d;
	// 583    .line 202
label_cond_15:
	if ( i < 0 ) 
		goto label_cond_1c;
	if ( i <= 0x3ffeffff )
		goto label_cond_43;
label_cond_1c:
	this->intUnits[cVar2] = 0x7fff;
	this->intUnits[cVar1] = (char)(_shri(i,0x10));
	this->intUnits[0x2] = (char)(i);
	//    .local v0, "length":I
label_goto_30:
	if ( !(isFinal) )  
		goto label_cond_53;
label_goto_38:
	this->intUnits[cVar2] = (char)((cVar0 |  this->intUnits[cVar2]));
	return this->write(this->intUnits, length);
	// 647    .line 211
	// 648    .end local v0    # "length":I
label_cond_43:
	this->intUnits[cVar2] = (char)(( _shri(i,0x10) + 0x4000));
	this->intUnits[cVar1] = (char)(i);
	//    .restart local v0    # "length":I
	goto label_goto_30;
label_cond_53:
	cVar0 = cVar2;
	goto label_goto_38;

}
// .method protected writeValueAndType(ZII)I
int android::icu::util::CharsTrieBuilder::writeValueAndType(bool hasValue,int value,int node)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<char[]> cVar2;
	
	//    .param p1, "hasValue"    # Z
	//    .param p2, "value"    # I
	//    .param p3, "node"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 686    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( hasValue )     
		goto label_cond_9;
	return this->write(node);
	// 703    .line 230
label_cond_9:
	if ( value < 0 ) 
		goto label_cond_10;
	if ( value <= 0xfdffff )
		goto label_cond_34;
label_cond_10:
	this->intUnits[cVar1] = 0x7fc0;
	this->intUnits[cVar0] = (char)(_shri(value,0x10));
	this->intUnits[0x2] = (char)(value);
	//    .local v0, "length":I
label_goto_24:
	cVar2 = this->intUnits;
	cVar2[cVar1] = (char)((cVar2[cVar1] |  (char)(node)));
	return this->write(this->intUnits, length);
	// 764    .line 235
	// 765    .end local v0    # "length":I
label_cond_34:
	if ( value >  0xff )
		goto label_cond_43;
	this->intUnits[cVar1] = (char)(( ( value + 0x1) << 0x6));
	//    .restart local v0    # "length":I
	goto label_goto_24;
	// 788    .line 239
	// 789    .end local v0    # "length":I
label_cond_43:
	this->intUnits[cVar1] = (char)(( ( _shri(value,0xa) & 0x7fc0) + 0x4040));
	this->intUnits[cVar0] = (char)(value);
	//    .restart local v0    # "length":I
	goto label_goto_24;

}


