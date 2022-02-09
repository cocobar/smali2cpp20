// CPP L:\smali2cpp20\x64\Release\out\android\icu\lang\UScriptRun.smali
#include "java2ctype.h"
#include "android.icu.lang.UScript.h"
#include "android.icu.lang.UScriptRun_S_ParenStackEntry.h"
#include "android.icu.lang.UScriptRun.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"

static android::icu::lang::UScriptRun::PAREN_STACK_DEPTH;
static android::icu::lang::UScriptRun::pairedCharExtra;
static android::icu::lang::UScriptRun::pairedCharPower;
static android::icu::lang::UScriptRun::pairedChars;
static android::icu::lang::UScriptRun::parenStack;
// .method static constructor <clinit>()V
void android::icu::lang::UScriptRun::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	android::icu::lang::UScriptRun::PAREN_STACK_DEPTH = 0x20;
	android::icu::lang::UScriptRun::parenStack = std::make_shared<std::vector<std::vector<android::icu::lang::UScriptRun_S_ParenStackEntry>>>(android::icu::lang::UScriptRun::PAREN_STACK_DEPTH);
	cVar0 = std::make_shared<std::vector<int[]>>(0x22);
	?;
	android::icu::lang::UScriptRun::pairedChars = cVar0;
	android::icu::lang::UScriptRun::pairedCharPower = (0x1 << android::icu::lang::UScriptRun::highBit(android::icu::lang::UScriptRun::pairedChars->size()));
	android::icu::lang::UScriptRun::pairedCharExtra = (android::icu::lang::UScriptRun::pairedChars->size() -  android::icu::lang::UScriptRun::pairedCharPower);
	return;
	// 108    .line 625
	// 109    :array_28
	// 110    .array-data 4
	// 111        0x28
	// 112        0x29
	// 113        0x3c
	// 114        0x3e
	// 115        0x5b
	// 116        0x5d
	// 117        0x7b
	// 118        0x7d
	// 119        0xab
	// 120        0xbb
	// 121        0x2018
	// 122        0x2019
	// 123        0x201c
	// 124        0x201d
	// 125        0x2039
	// 126        0x203a
	// 127        0x3008
	// 128        0x3009
	// 129        0x300a
	// 130        0x300b
	// 131        0x300c
	// 132        0x300d
	// 133        0x300e
	// 134        0x300f
	// 135        0x3010
	// 136        0x3011
	// 137        0x3014
	// 138        0x3015
	// 139        0x3016
	// 140        0x3017
	// 141        0x3018
	// 142        0x3019
	// 143        0x301a
	// 144        0x301b
	// 145    .end array-data

}
// .method public constructor <init>()V
android::icu::lang::UScriptRun::UScriptRun()
{
	
	int cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 151    .end annotation
	cVar0 = 0x0;
	// 157    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->emptyCharArray = std::make_shared<std::vector<char[]>>(cVar0);
	this->parenSP = -0x1;
	this->pushCount = cVar0;
	this->fixupCount = cVar0;
	//    .local v0, "nullChars":[C
	this->reset(0x0, cVar0, cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::lang::UScriptRun::UScriptRun(std::shared_ptr<java::lang::String> text)
{
	
	int cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 190    .end annotation
	cVar0 = 0x0;
	// 196    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->emptyCharArray = std::make_shared<std::vector<char[]>>(cVar0);
	this->parenSP = -0x1;
	this->pushCount = cVar0;
	this->fixupCount = cVar0;
	this->reset(text);
	return;

}
// .method public constructor <init>(Ljava/lang/String;II)V
android::icu::lang::UScriptRun::UScriptRun(std::shared_ptr<java::lang::String> text,int start,int count)
{
	
	int cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "count"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 227    .end annotation
	cVar0 = 0x0;
	// 233    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->emptyCharArray = std::make_shared<std::vector<char[]>>(cVar0);
	this->parenSP = -0x1;
	this->pushCount = cVar0;
	this->fixupCount = cVar0;
	this->reset(text, start, count);
	return;

}
// .method public constructor <init>([C)V
android::icu::lang::UScriptRun::UScriptRun(std::shared_ptr<char[]> chars)
{
	
	int cVar0;
	
	//    .param p1, "chars"    # [C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 262    .end annotation
	cVar0 = 0x0;
	// 268    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->emptyCharArray = std::make_shared<std::vector<char[]>>(cVar0);
	this->parenSP = -0x1;
	this->pushCount = cVar0;
	this->fixupCount = cVar0;
	this->reset(chars);
	return;

}
// .method public constructor <init>([CII)V
android::icu::lang::UScriptRun::UScriptRun(std::shared_ptr<char[]> chars,int start,int count)
{
	
	int cVar0;
	
	//    .param p1, "chars"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "count"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 299    .end annotation
	cVar0 = 0x0;
	// 305    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->emptyCharArray = std::make_shared<std::vector<char[]>>(cVar0);
	this->parenSP = -0x1;
	this->pushCount = cVar0;
	this->fixupCount = cVar0;
	this->reset(chars, start, count);
	return;

}
// .method private static final dec(I)I
int android::icu::lang::UScriptRun::dec(int sp)
{
	
	//    .param p0, "sp"    # I
	return android::icu::lang::UScriptRun::dec(sp, 0x1);

}
// .method private static final dec(II)I
int android::icu::lang::UScriptRun::dec(int sp,int count)
{
	
	//    .param p0, "sp"    # I
	//    .param p1, "count"    # I
	return android::icu::lang::UScriptRun::mod(((android::icu::lang::UScriptRun::PAREN_STACK_DEPTH +  sp) -  count));

}
// .method private final fixup(I)V
void android::icu::lang::UScriptRun::fixup(int scrptCode)
{
	
	int cVar0;
	int fixupSP;
	
	//    .param p1, "scrptCode"    # I
	//    .local v0, "fixupSP":I
label_goto_8:
	cVar0 = this->fixupCount;
	this->fixupCount = ( cVar0 + -0x1);
	if ( cVar0 <= 0 )
		goto label_cond_1b;
	fixupSP = android::icu::lang::UScriptRun::inc(fixupSP);
	android::icu::lang::UScriptRun::parenStack[fixupSP]->scriptCode = scrptCode;
	goto label_goto_8;
	// 404    .line 532
label_cond_1b:
	return;

}
// .method private static getPairIndex(I)I
int android::icu::lang::UScriptRun::getPairIndex(int ch)
{
	
	int probe;
	int index;
	
	//    .param p0, "ch"    # I
	probe = android::icu::lang::UScriptRun::pairedCharPower;
	//    .local v1, "probe":I
	index = 0x0;
	//    .local v0, "index":I
	if ( ch <  android::icu::lang::UScriptRun::pairedChars[android::icu::lang::UScriptRun::pairedCharExtra] )
		goto label_cond_d;
	index = android::icu::lang::UScriptRun::pairedCharExtra;
label_cond_d:
label_goto_d:
	if ( probe <= 0x1 )
		goto label_cond_1c;
	probe = _shri(probe,0x1);
	if ( ch <  android::icu::lang::UScriptRun::pairedChars[(index + probe)] )
		goto label_cond_d;
	index = (index +  probe);
	goto label_goto_d;
	// 458    .line 618
label_cond_1c:
	if ( android::icu::lang::UScriptRun::pairedChars[index] == ch )
		goto label_cond_23;
	index = -0x1;
label_cond_23:
	return index;

}
// .method private static final highBit(I)B
unsigned char android::icu::lang::UScriptRun::highBit(int cVar4)
{
	
	int cVar0;
	int cVar4;
	unsigned char bit;
	
	//    .param p0, "n"    # I
	cVar0 = 0x10;
	if ( cVar4 > 0 ) 
		goto label_cond_7;
	return -0x20;
	// 489    .line 565
label_cond_7:
	//    .local v0, "bit":B
	if ( cVar4 <  0x10000 )
		goto label_cond_f;
	cVar4 = _shri(cVar4,0x10);
	bit = (unsigned char)(cVar0);
	//    .end local v0    # "bit":B
label_cond_f:
	if ( cVar4 <  0x100 )
		goto label_cond_18;
	cVar4 = _shri(cVar4,0x8);
	bit = (unsigned char)(( bit + 0x8));
label_cond_18:
	if ( cVar4 <  cVar0 )
		goto label_cond_1f;
	cVar4 = _shri(cVar4,0x4);
	bit = (unsigned char)(( bit + 0x4));
label_cond_1f:
	if ( cVar4 <  0x4 )
		goto label_cond_27;
	cVar4 = _shri(cVar4,0x2);
	bit = (unsigned char)(( bit + 0x2));
label_cond_27:
	if ( cVar4 <  0x2 )
		goto label_cond_2f;
	_shri(cVar4,0x1);
label_cond_2f:
	return 0x0;

}
// .method private static final inc(I)I
int android::icu::lang::UScriptRun::inc(int sp)
{
	
	//    .param p0, "sp"    # I
	return android::icu::lang::UScriptRun::inc(sp, 0x1);

}
// .method private static final inc(II)I
int android::icu::lang::UScriptRun::inc(int sp,int count)
{
	
	//    .param p0, "sp"    # I
	//    .param p1, "count"    # I
	return android::icu::lang::UScriptRun::mod((sp + count));

}
// .method private static final limitInc(I)I
int android::icu::lang::UScriptRun::limitInc(int cVar0)
{
	
	int cVar0;
	
	//    .param p0, "count"    # I
	if ( cVar0 >= android::icu::lang::UScriptRun::PAREN_STACK_DEPTH )
		goto label_cond_6;
	cVar0 = ( cVar0 + 0x1);
label_cond_6:
	return cVar0;

}
// .method private static final mod(I)I
int android::icu::lang::UScriptRun::mod(int sp)
{
	
	//    .param p0, "sp"    # I
	return (sp % android::icu::lang::UScriptRun::PAREN_STACK_DEPTH);

}
// .method private final pop()V
void android::icu::lang::UScriptRun::pop()
{
	
	if ( !(this->stackIsEmpty()) )  
		goto label_cond_7;
	return;
	// 641    .line 498
label_cond_7:
	android::icu::lang::UScriptRun::parenStack[this->parenSP] = 0x0;
	if ( this->fixupCount <= 0 )
		goto label_cond_18;
	this->fixupCount = ( this->fixupCount + -0x1);
label_cond_18:
	this->pushCount = ( this->pushCount + -0x1);
	this->parenSP = android::icu::lang::UScriptRun::dec(this->parenSP);
	if ( !(this->stackIsEmpty()) )  
		goto label_cond_2f;
	this->parenSP = -0x1;
label_cond_2f:
	return;

}
// .method private final push(II)V
void android::icu::lang::UScriptRun::push(int pairIndex,int scrptCode)
{
	
	std::shared_ptr<android::icu::lang::UScriptRun_S_ParenStackEntry> cVar0;
	
	//    .param p1, "pairIndex"    # I
	//    .param p2, "scrptCode"    # I
	this->pushCount = android::icu::lang::UScriptRun::limitInc(this->pushCount);
	this->fixupCount = android::icu::lang::UScriptRun::limitInc(this->fixupCount);
	this->parenSP = android::icu::lang::UScriptRun::inc(this->parenSP);
	cVar0 = std::make_shared<android::icu::lang::UScriptRun_S_ParenStackEntry>(pairIndex, scrptCode);
	android::icu::lang::UScriptRun::parenStack[this->parenSP] = cVar0;
	return;

}
// .method private static sameScript(II)Z
bool android::icu::lang::UScriptRun::sameScript(int scriptOne,int scriptTwo)
{
	
	bool cVar0;
	
	//    .param p0, "scriptOne"    # I
	//    .param p1, "scriptTwo"    # I
	cVar0 = 0x1;
	if ( scriptOne <= cVar0 )
		goto label_cond_5;
	if ( scriptTwo >  cVar0 )
		goto label_cond_6;
label_cond_5:
label_goto_5:
	return cVar0;
label_cond_6:
	if ( scriptOne == scriptTwo )
		goto label_cond_5;
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method private final stackIsEmpty()Z
bool android::icu::lang::UScriptRun::stackIsEmpty()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->pushCount > 0 ) 
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method private final stackIsNotEmpty()Z
bool android::icu::lang::UScriptRun::stackIsNotEmpty()
{
	
	return ( this->stackIsEmpty() ^ 0x1);

}
// .method private final syncFixup()V
void android::icu::lang::UScriptRun::syncFixup()
{
	
	this->fixupCount = 0x0;
	return;

}
// .method private final top()Landroid/icu/lang/UScriptRun$ParenStackEntry;
std::shared_ptr<android::icu::lang::UScriptRun_S_ParenStackEntry> android::icu::lang::UScriptRun::top()
{
	
	return android::icu::lang::UScriptRun::parenStack[this->parenSP];

}
// .method public final getScriptCode()I
int android::icu::lang::UScriptRun::getScriptCode()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 833    .end annotation
	return this->scriptCode;

}
// .method public final getScriptLimit()I
int android::icu::lang::UScriptRun::getScriptLimit()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 845    .end annotation
	return this->scriptLimit;

}
// .method public final getScriptStart()I
int android::icu::lang::UScriptRun::getScriptStart()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 857    .end annotation
	return this->scriptStart;

}
// .method public final next()Z
bool android::icu::lang::UScriptRun::next()
{
	
	bool cVar0;
	bool cVar1;
	int ch;
	int codePointCount;
	int sc;
	int pairIndex;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 869    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this->scriptLimit <  this->textLimit )
		goto label_cond_9;
	return cVar1;
	// 886    .line 349
label_cond_9:
	this->scriptCode = cVar1;
	this->scriptStart = this->scriptLimit;
	this->syncFixup();
label_cond_12:
label_goto_12:
	if ( this->textIndex >= this->textLimit )
		goto label_cond_88;
	ch = android::icu::text::UTF16::charAt(this->text, this->textStart, this->textLimit, (this->textIndex -  this->textStart));
	//    .local v0, "ch":I
	codePointCount = android::icu::text::UTF16::getCharCount(ch);
	//    .local v1, "codePointCount":I
	sc = android::icu::lang::UScript::getScript(ch);
	//    .local v4, "sc":I
	pairIndex = android::icu::lang::UScriptRun::getPairIndex(ch);
	//    .local v2, "pairIndex":I
	this->textIndex = (this->textIndex +  codePointCount);
	if ( pairIndex < 0 ) 
		goto label_cond_43;
	if ( ( pairIndex & 0x1) )     
		goto label_cond_62;
	this->push(pairIndex, this->scriptCode);
label_cond_43:
label_goto_43:
	if ( !(android::icu::lang::UScriptRun::sameScript(this->scriptCode, sc)) )  
		goto label_cond_83;
	if ( this->scriptCode >  cVar0 )
		goto label_cond_58;
	if ( sc <= cVar0 )
		goto label_cond_58;
	this->scriptCode = sc;
	this->fixup(this->scriptCode);
label_cond_58:
	if ( pairIndex < 0 ) 
		goto label_cond_12;
	if ( !(( pairIndex & 0x1)) )  
		goto label_cond_12;
	this->pop();
	goto label_goto_12;
	// 1002    .line 372
label_cond_62:
	//    .local v3, "pi":I
label_goto_64:
	if ( !(this->stackIsNotEmpty()) )  
		goto label_cond_76;
	if ( this->top()->pairIndex == ( pairIndex & -0x2) )
		goto label_cond_76;
	this->pop();
	goto label_goto_64;
	// 1028    .line 378
label_cond_76:
	if ( !(this->stackIsNotEmpty()) )  
		goto label_cond_43;
	sc = this->top()->scriptCode;
	goto label_goto_43;
	// 1045    .line 400
	// 1046    .end local v3    # "pi":I
label_cond_83:
	this->textIndex = (this->textIndex -  codePointCount);
	//    .end local v0    # "ch":I
	//    .end local v1    # "codePointCount":I
	//    .end local v2    # "pairIndex":I
	//    .end local v4    # "sc":I
label_cond_88:
	this->scriptLimit = this->textIndex;
	return cVar0;

}
// .method public final reset()V
void android::icu::lang::UScriptRun::reset()
{
	
	int cVar0;
	int cVar1;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1071    .end annotation
	cVar0 = 0x0;
	cVar1 = -0x1;
label_goto_2:
	if ( !(this->stackIsNotEmpty()) )  
		goto label_cond_c;
	this->pop();
	goto label_goto_2;
	// 1091    .line 155
label_cond_c:
	this->scriptStart = this->textStart;
	this->scriptLimit = this->textStart;
	this->scriptCode = cVar1;
	this->parenSP = cVar1;
	this->pushCount = cVar0;
	this->fixupCount = cVar0;
	this->textIndex = this->textStart;
	return;

}
// .method public final reset(II)V
void android::icu::lang::UScriptRun::reset(int start,int count)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "start"    # I
	//    .param p2, "count"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1128        value = {
	// 1129            Ljava/lang/IllegalArgumentException;
	// 1130        }
	// 1131    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1134    .end annotation
	0x0;
	//    .local v0, "len":I
	if ( !(this->text) )  
		goto label_cond_8;
label_cond_8:
	if ( start < 0 ) 
		goto label_cond_c;
	if ( count >= 0 )
		goto label_cond_12;
label_cond_c:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 1165    .line 187
label_cond_12:
	if ( start >  (this->text->size() - count) )
		goto label_cond_c;
	this->textStart = start;
	this->textLimit = (start + count);
	this->reset();
	return;

}
// .method public final reset(Ljava/lang/String;)V
void android::icu::lang::UScriptRun::reset(std::shared_ptr<java::lang::String> str)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1190    .end annotation
	//    .local v0, "length":I
	if ( !(str) )  
		goto label_cond_7;
label_cond_7:
	this->reset(str, 0x0, 0x0);
	return;

}
// .method public final reset(Ljava/lang/String;II)V
void android::icu::lang::UScriptRun::reset(std::shared_ptr<java::lang::String> str,int start,int count)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "count"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1221    .end annotation
	//    .local v0, "chars":[C
	if ( !(str) )  
		goto label_cond_7;
	//    .end local v0    # "chars":[C
label_cond_7:
	this->reset(0x0, start, count);
	return;

}
// .method public final reset([C)V
void android::icu::lang::UScriptRun::reset(std::shared_ptr<char[]> chars)
{
	
	//    .param p1, "chars"    # [C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1249    .end annotation
	//    .local v0, "length":I
	if ( !(chars) )  
		goto label_cond_4;
label_cond_4:
	this->reset(chars, 0x0, 0x0);
	return;

}
// .method public final reset([CII)V
void android::icu::lang::UScriptRun::reset(std::shared_ptr<char[]> cVar0,int start,int count)
{
	
	std::shared_ptr<char[]> cVar0;
	
	//    .param p1, "chars"    # [C
	//    .param p2, "start"    # I
	//    .param p3, "count"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1278    .end annotation
	if ( cVar0 )     
		goto label_cond_4;
	cVar0 = this->emptyCharArray;
label_cond_4:
	this->text = cVar0;
	this->reset(start, count);
	return;

}


