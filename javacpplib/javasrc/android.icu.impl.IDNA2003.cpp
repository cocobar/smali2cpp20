// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\IDNA2003.smali
#include "java2ctype.h"
#include "android.icu.impl.IDNA2003.h"
#include "android.icu.impl.Punycode.h"
#include "android.icu.text.StringPrep.h"
#include "android.icu.text.StringPrepParseException.h"
#include "android.icu.text.UCharacterIterator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"

static android::icu::impl::IDNA2003::ACE_PREFIX = nullptr;
static android::icu::impl::IDNA2003::CAPITAL_A = 0x41;
static android::icu::impl::IDNA2003::CAPITAL_Z = 0x5a;
static android::icu::impl::IDNA2003::FULL_STOP = 0x2e;
static android::icu::impl::IDNA2003::HYPHEN = 0x2d;
static android::icu::impl::IDNA2003::LOWER_CASE_DELTA = 0x20;
static android::icu::impl::IDNA2003::MAX_DOMAIN_NAME_LENGTH = 0xff;
static android::icu::impl::IDNA2003::MAX_LABEL_LENGTH = 0x3f;
static android::icu::impl::IDNA2003::namePrep;
// .method static constructor <clinit>()V
void android::icu::impl::IDNA2003::static_cinit()
{
	
	std::shared<std::vector<char[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<char[]>>(0x4);
	?;
	android::icu::impl::IDNA2003::ACE_PREFIX = cVar0;
	android::icu::impl::IDNA2003::namePrep = android::icu::text::StringPrep::getInstance(0x0);
	return;
	// 052    .line 25
	// 053    :array_10
	// 054    .array-data 2
	// 055        0x78s
	// 056        0x6es
	// 057        0x2ds
	// 058        0x2ds
	// 059    .end array-data

}
// .method public constructor <init>()V
android::icu::impl::IDNA2003::IDNA2003()
{
	
	// 067    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static compare(Ljava/lang/String;Ljava/lang/String;I)I
int android::icu::impl::IDNA2003::compare(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2,int options)
{
	
	//    .param p0, "s1"    # Ljava/lang/String;
	//    .param p1, "s2"    # Ljava/lang/String;
	//    .param p2, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 078        value = {
	// 079            Landroid/icu/text/StringPrepParseException;
	// 080        }
	// 081    .end annotation
	//    .local v0, "s1Out":Ljava/lang/StringBuffer;
	//    .local v1, "s2Out":Ljava/lang/StringBuffer;
	return android::icu::impl::IDNA2003::compareCaseInsensitiveASCII(android::icu::impl::IDNA2003::convertIDNToASCII(s1, options), android::icu::impl::IDNA2003::convertIDNToASCII(s2, options));

}
// .method private static compareCaseInsensitiveASCII(Ljava/lang/StringBuffer;Ljava/lang/StringBuffer;)I
int android::icu::impl::IDNA2003::compareCaseInsensitiveASCII(std::shared_ptr<java::lang::StringBuffer> s1,std::shared_ptr<java::lang::StringBuffer> s2)
{
	
	int i;
	char c1;
	char c2;
	int rc;
	
	//    .param p0, "s1"    # Ljava/lang/StringBuffer;
	//    .param p1, "s2"    # Ljava/lang/StringBuffer;
	i = 0x0;
	//    .local v2, "i":I
label_goto_2:
	if ( i != s1->length() )
		goto label_cond_9;
	return 0x0;
	// 127    .line 77
label_cond_9:
	c1 = s1->charAt(i);
	//    .local v0, "c1":C
	c2 = s2->charAt(i);
	//    .local v1, "c2":C
	if ( c1 == c2 )
		goto label_cond_20;
	rc = (android::icu::impl::IDNA2003::toASCIILower(c1) - android::icu::impl::IDNA2003::toASCIILower(c2));
	//    .local v3, "rc":I
	if ( !(rc) )  
		goto label_cond_20;
	return rc;
	// 161    .line 71
	// 162    .end local v3    # "rc":I
label_cond_20:
	i = ( i + 0x1);
	goto label_goto_2;

}
// .method public static convertIDNToASCII(Ljava/lang/String;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::IDNA2003::convertIDNToASCII(std::shared_ptr<java::lang::String> src,int options)
{
	
	std::shared_ptr<char[]> srcArr;
	std::shared_ptr<java::lang::StringBuffer> result;
	int oldSepIndex;
	int sepIndex;
	std::shared_ptr<java::lang::String> label;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar0;
	
	//    .param p0, "src"    # Ljava/lang/String;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 174        value = {
	// 175            Landroid/icu/text/StringPrepParseException;
	// 176        }
	// 177    .end annotation
	srcArr = src->toCharArray();
	//    .local v5, "srcArr":[C
	result = std::make_shared<java::lang::StringBuffer>();
	//    .local v3, "result":Ljava/lang/StringBuffer;
	//    .local v4, "sepIndex":I
	oldSepIndex = 0x0;
	//    .local v2, "oldSepIndex":I
label_goto_b:
	sepIndex = android::icu::impl::IDNA2003::getSeparatorIndex(srcArr, sepIndex, srcArr->size());
	label = std::make_shared<java::lang::String>(srcArr, oldSepIndex, (sepIndex - oldSepIndex));
	//    .local v1, "label":Ljava/lang/String;
	if ( label->length() )     
		goto label_cond_20;
	if ( sepIndex == srcArr->size() )
		goto label_cond_2b;
label_cond_20:
	//    .local v0, "iter":Landroid/icu/text/UCharacterIterator;
	result->append(android::icu::impl::IDNA2003::convertToASCII(android::icu::text::UCharacterIterator::getInstance(label), options));
	//    .end local v0    # "iter":Landroid/icu/text/UCharacterIterator;
label_cond_2b:
	if ( sepIndex != srcArr->size() )
		goto label_cond_41;
	if ( result->length() <= 0xff )
		goto label_cond_4a;
	cVar0 = std::make_shared<android::icu::text::StringPrepParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The output exceed the max allowed length.")), 0xb);
	// throw
	throw cVar0;
	// 268    .line 284
label_cond_41:
	sepIndex = ( sepIndex + 0x1);
	oldSepIndex = sepIndex;
	result->append(0x2e);
	goto label_goto_b;
	// 282    .line 291
label_cond_4a:
	return result;

}
// .method public static convertIDNToUnicode(Ljava/lang/String;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::IDNA2003::convertIDNToUnicode(std::shared_ptr<java::lang::String> src,int options)
{
	
	std::shared_ptr<char[]> srcArr;
	std::shared_ptr<java::lang::StringBuffer> result;
	int oldSepIndex;
	int sepIndex;
	std::shared_ptr<java::lang::String> label;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar0;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar1;
	
	//    .param p0, "src"    # Ljava/lang/String;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 292        value = {
	// 293            Landroid/icu/text/StringPrepParseException;
	// 294        }
	// 295    .end annotation
	srcArr = src->toCharArray();
	//    .local v5, "srcArr":[C
	result = std::make_shared<java::lang::StringBuffer>();
	//    .local v3, "result":Ljava/lang/StringBuffer;
	//    .local v4, "sepIndex":I
	oldSepIndex = 0x0;
	//    .local v2, "oldSepIndex":I
label_goto_b:
	sepIndex = android::icu::impl::IDNA2003::getSeparatorIndex(srcArr, sepIndex, srcArr->size());
	label = std::make_shared<java::lang::String>(srcArr, oldSepIndex, (sepIndex - oldSepIndex));
	//    .local v1, "label":Ljava/lang/String;
	if ( label->length() )     
		goto label_cond_2b;
	if ( sepIndex == srcArr->size() )
		goto label_cond_2b;
	cVar0 = std::make_shared<android::icu::text::StringPrepParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Found zero length lable after NamePrep.")), 0xa);
	// throw
	throw cVar0;
	// 356    .line 417
label_cond_2b:
	//    .local v0, "iter":Landroid/icu/text/UCharacterIterator;
	result->append(android::icu::impl::IDNA2003::convertToUnicode(android::icu::text::UCharacterIterator::getInstance(label), options));
	if ( sepIndex != srcArr->size() )
		goto label_cond_4c;
	if ( result->length() <= 0xff )
		goto label_cond_55;
	cVar1 = std::make_shared<android::icu::text::StringPrepParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The output exceed the max allowed length.")), 0xb);
	// throw
	throw cVar1;
	// 395    .line 423
label_cond_4c:
	result->append(srcArr[sepIndex]);
	sepIndex = ( sepIndex + 0x1);
	oldSepIndex = sepIndex;
	goto label_goto_b;
	// 409    .line 431
label_cond_55:
	return result;

}
// .method public static convertToASCII(Landroid/icu/text/UCharacterIterator;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::IDNA2003::convertToASCII(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options)
{
	
	int srcIsLDH;
	int ch;
	int failPos;
	std::shared_ptr<java::lang::StringBuffer> processOut;
	int poLen;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar0;
	std::shared_ptr<java::lang::StringBuffer> dest;
	int j;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar1;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar3;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar4;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar2;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar5;
	
	//    .param p0, "src"    # Landroid/icu/text/UCharacterIterator;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 419        value = {
	// 420            Landroid/icu/text/StringPrepParseException;
	// 421        }
	// 422    .end annotation
	0x0;
	//    .local v5, "caseFlags":[Z
	//    .local v14, "srcIsASCII":Z
	srcIsLDH = 0x1;
	//    .local v15, "srcIsLDH":Z
	if ( !(( options & 0x2)) )  
		goto label_cond_1b;
	//    .local v16, "useSTD3ASCIIRules":Z
label_cond_9:
label_goto_9:
	ch = src->next();
	//    .local v6, "ch":I
	if ( ch == -0x1 )
		goto label_cond_1e;
	if ( ch <= 0x7f )
		goto label_cond_9;
	0x0;
	goto label_goto_9;
	// 471    .line 166
	// 472    .end local v6    # "ch":I
	// 473    .end local v16    # "useSTD3ASCIIRules":Z
label_cond_1b:
	//    .restart local v16    # "useSTD3ASCIIRules":Z
	goto label_goto_9;
	// 480    .line 174
	// 481    .restart local v6    # "ch":I
label_cond_1e:
	failPos = -0x1;
	//    .local v8, "failPos":I
	src->setToStart();
	0x0;
	//    .local v12, "processOut":Ljava/lang/StringBuffer;
	if ( 0x1 )     
		goto label_cond_42;
	processOut = android::icu::impl::IDNA2003::namePrep->prepare(src, options);
	//    .local v12, "processOut":Ljava/lang/StringBuffer;
label_goto_31:
	poLen = processOut->length();
	//    .local v11, "poLen":I
	if ( poLen )     
		goto label_cond_4e;
	cVar0 = std::make_shared<android::icu::text::StringPrepParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Found zero length lable after NamePrep.")), 0xa);
	// throw
	throw cVar0;
	// 531    .line 182
	// 532    .end local v11    # "poLen":I
	// 533    .local v12, "processOut":Ljava/lang/StringBuffer;
label_cond_42:
	//    .end local v12    # "processOut":Ljava/lang/StringBuffer;
	processOut = std::make_shared<java::lang::StringBuffer>(src->getText());
	//    .local v12, "processOut":Ljava/lang/StringBuffer;
	goto label_goto_31;
	// 549    .line 189
	// 550    .restart local v11    # "poLen":I
label_cond_4e:
	dest = std::make_shared<java::lang::StringBuffer>();
	//    .local v7, "dest":Ljava/lang/StringBuffer;
	j = 0x0;
	//    .local v9, "j":I
label_goto_55:
	if ( j >= poLen )
		goto label_cond_6e;
	ch = processOut->charAt(j);
	if ( ch <= 0x7f )
		goto label_cond_65;
	0x0;
label_cond_62:
label_goto_62:
	j = ( j + 0x1);
	goto label_goto_55;
	// 589    .line 199
label_cond_65:
	if ( android::icu::impl::IDNA2003::isLDHChar(ch) )     
		goto label_cond_62;
	0x0;
	j;
	goto label_goto_62;
	// 605    .line 208
label_cond_6e:
	if ( !(useSTD3ASCIIRules) )  
		goto label_cond_b3;
	if ( !(srcIsLDH) )  
		goto label_cond_82;
	if ( processOut->charAt(0x0) != 0x2d )
		goto label_cond_9f;
label_cond_82:
	if ( srcIsLDH )     
		goto label_cond_dd;
	if ( failPos <= 0 )
		goto label_cond_91;
	//    .end local v8    # "failPos":I
label_cond_91:
	var62 = cVar1(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input does not conform to the STD 3 ASCII rules")), 0x5, processOut->toString(), failPos);
	// throw
	throw cVar1;
	// 666    .line 212
	// 667    .restart local v8    # "failPos":I
label_cond_9f:
	if ( processOut->charAt(( processOut->length() + -0x1)) == 0x2d )
		goto label_cond_82;
label_cond_b3:
	if ( !(0x1) )  
		goto label_cond_123;
	dest = processOut;
	//    .end local v5    # "caseFlags":[Z
label_goto_b6:
	if ( dest->length() <= 0x3f )
		goto label_cond_167;
	var88 = cVar2(std::make_shared<java::lang::String>(std::make_shared<char[]>("The labels in the input are too long. Length > 63.")), 0x8, dest->toString(), 0x0);
	// throw
	throw cVar2;
	// 740    .line 220
	// 741    .restart local v5    # "caseFlags":[Z
label_cond_dd:
	if ( processOut->charAt(0x0) != 0x2d )
		goto label_cond_108;
	var107 = cVar3(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input does not conform to the STD 3 ASCII rules")), 0x5, processOut->toString(), 0x0);
	// throw
	throw cVar3;
	// 788    .line 225
label_cond_108:
	if ( poLen <= 0 )
		goto label_cond_115;
	//    .end local v11    # "poLen":I
label_cond_115:
	var119 = cVar4(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input does not conform to the STD 3 ASCII rules")), 0x5, processOut->toString(), poLen);
	// throw
	throw cVar4;
	// 822    .line 237
	// 823    .restart local v11    # "poLen":I
label_cond_123:
	if ( android::icu::impl::IDNA2003::startsWithPrefix(processOut) )     
		goto label_cond_14c;
	//    .local v5, "caseFlags":[Z
	//    .local v13, "punyout":Ljava/lang/StringBuilder;
	//    .local v10, "lowerOut":Ljava/lang/StringBuffer;
	dest->append(android::icu::impl::IDNA2003::ACE_PREFIX, 0x0, android::icu::impl::IDNA2003::ACE_PREFIX->size());
	dest->append(android::icu::impl::IDNA2003::toASCIILower(android::icu::impl::Punycode::encode(processOut, std::make_shared<std::vector<bool[]>>(poLen))));
	goto label_goto_b6;
	// 873    .line 253
	// 874    .end local v10    # "lowerOut":Ljava/lang/StringBuffer;
	// 875    .end local v13    # "punyout":Ljava/lang/StringBuilder;
	// 876    .local v5, "caseFlags":[Z
label_cond_14c:
	var148 = cVar5(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input does not start with the ACE Prefix.")), 0x6, processOut->toString(), 0x0);
	// throw
	throw cVar5;
	// 906    .line 261
	// 907    .end local v5    # "caseFlags":[Z
label_cond_167:
	return dest;

}
// .method public static convertToUnicode(Landroid/icu/text/UCharacterIterator;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::IDNA2003::convertToUnicode(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options)
{
	
	int ch;
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::StringBuffer> processOut;
	std::shared_ptr<java::lang::StringBuffer> decodeOut;
	std::shared_ptr<java::lang::StringBuffer> cVar1;
	
	//    .param p0, "src"    # Landroid/icu/text/UCharacterIterator;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 917        value = {
	// 918            Landroid/icu/text/StringPrepParseException;
	// 919        }
	// 920    .end annotation
	//    .local v0, "caseFlags":[Z
	//    .local v7, "srcIsASCII":Z
	//    .local v6, "saveIndex":I
label_cond_6:
label_goto_6:
	ch = src->next();
	//    .local v1, "ch":I
	if ( ch == -0x1 )
		goto label_cond_13;
	if ( ch <= 0x7f )
		goto label_cond_6;
	0x0;
	goto label_goto_6;
	// 959    .line 320
label_cond_13:
	if ( 0x1 )     
		goto label_cond_58;
	try {
	//label_try_start_15:
	src->setIndex(src->getIndex());
	//label_try_end_1d:
	}
	catch (android::icu::text::StringPrepParseException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4d;
	}
	//    .catch Landroid/icu/text/StringPrepParseException; {:try_start_15 .. :try_end_1d} :catch_4d
	processOut = android::icu::impl::IDNA2003::namePrep->prepare(src, options);
	//    .local v5, "processOut":Ljava/lang/StringBuffer;
label_goto_1e:
	if ( !(android::icu::impl::IDNA2003::startsWithPrefix(processOut)) )  
		goto label_cond_65;
	0x0;
	//    .local v2, "decodeOut":Ljava/lang/StringBuffer;
	//    .local v8, "temp":Ljava/lang/String;
	try {
	//label_try_start_30:
	//    .end local v2    # "decodeOut":Ljava/lang/StringBuffer;
	decodeOut = std::make_shared<java::lang::StringBuffer>(android::icu::impl::Punycode::decode(processOut->substring(android::icu::impl::IDNA2003::ACE_PREFIX->size(), processOut->length()), 0x0));
	//label_try_end_39:
	}
	catch (android::icu::text::StringPrepParseException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_62;
	}
	//    .catch Landroid/icu/text/StringPrepParseException; {:try_start_30 .. :try_end_39} :catch_62
label_goto_39:
	if ( !(decodeOut) )  
		goto label_cond_4a;
	//    .local v9, "toASCIIOut":Ljava/lang/StringBuffer;
	if ( !(android::icu::impl::IDNA2003::compareCaseInsensitiveASCII(processOut, android::icu::impl::IDNA2003::convertToASCII(android::icu::text::UCharacterIterator::getInstance(decodeOut), options))) )  
		goto label_cond_4a;
	decodeOut = 0x0;
	//    .end local v9    # "toASCIIOut":Ljava/lang/StringBuffer;
label_cond_4a:
	if ( !(decodeOut) )  
		goto label_cond_65;
	return decodeOut;
	// 1048    .line 325
	// 1049    .end local v5    # "processOut":Ljava/lang/StringBuffer;
	// 1050    .end local v8    # "temp":Ljava/lang/String;
label_catch_4d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "ex":Landroid/icu/text/StringPrepParseException;
	cVar0 = std::make_shared<java::lang::StringBuffer>(src->getText());
	return cVar0;
	// 1066    .line 331
	// 1067    .end local v4    # "ex":Landroid/icu/text/StringPrepParseException;
label_cond_58:
	processOut = std::make_shared<java::lang::StringBuffer>(src->getText());
	//    .restart local v5    # "processOut":Ljava/lang/StringBuffer;
	goto label_goto_1e;
	// 1080    .line 350
	// 1081    .restart local v8    # "temp":Ljava/lang/String;
label_catch_62:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Landroid/icu/text/StringPrepParseException;
	decodeOut = 0x0;
	//    .restart local v2    # "decodeOut":Ljava/lang/StringBuffer;
	goto label_goto_39;
	// 1092    .line 401
	// 1093    .end local v2    # "decodeOut":Ljava/lang/StringBuffer;
	// 1094    .end local v3    # "e":Landroid/icu/text/StringPrepParseException;
	// 1095    .end local v8    # "temp":Ljava/lang/String;
label_cond_65:
	cVar1 = std::make_shared<java::lang::StringBuffer>(src->getText());
	return cVar1;

}
// .method private static getSeparatorIndex([CII)I
int android::icu::impl::IDNA2003::getSeparatorIndex(std::shared_ptr<char[]> src,int start,int limit)
{
	
	int start;
	
	//    .param p0, "src"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
label_goto_0:
	if ( start >= limit )
		goto label_cond_e;
	if ( !(android::icu::impl::IDNA2003::isLabelSeparator(src[start])) )  
		goto label_cond_b;
	return start;
	// 1131    .line 91
label_cond_b:
	start = ( start + 0x1);
	goto label_goto_0;
	// 1137    .line 97
label_cond_e:
	return start;

}
// .method private static isLDHChar(I)Z
bool android::icu::impl::IDNA2003::isLDHChar(int ch)
{
	
	int cVar0;
	bool cVar1;
	
	//    .param p0, "ch"    # I
	cVar0 = 0x7a;
	cVar1 = 0x0;
	if ( ch <= cVar0 )
		goto label_cond_6;
	return cVar1;
	// 1157    .line 126
label_cond_6:
	if ( ch == 0x2d )
		goto label_cond_12;
	if ( 0x30 >  ch )
		goto label_cond_14;
	if ( ch >  0x39 )
		goto label_cond_14;
label_cond_12:
	return 0x1;
	// 1178    .line 128
label_cond_14:
	if ( 0x41 >  ch )
		goto label_cond_1c;
	if ( ch <= 0x5a )
		goto label_cond_12;
label_cond_1c:
	if ( 0x61 >  ch )
		goto label_cond_22;
	if ( ch <= cVar0 )
		goto label_cond_12;
label_cond_22:
	return cVar1;

}
// .method private static isLabelSeparator(I)Z
bool android::icu::impl::IDNA2003::isLabelSeparator(int ch)
{
	
	//    .param p0, "ch"    # I
	// switch
	{
	auto item = ( ch );
	if (item == 0x2e) goto label_sswitch_5;
	if (item == 0x3002) goto label_sswitch_5;
	if (item == 0xff0e) goto label_sswitch_5;
	if (item == 0xff61) goto label_sswitch_5;
	}
	return 0x0;
	// 1214    .line 149
label_sswitch_5:
	return 0x1;
	// 1220    .line 144
	// 1221    nop
	// 1223    :sswitch_data_8
	// 1224    .sparse-switch
	// 1225        0x2e -> :sswitch_5
	// 1226        0x3002 -> :sswitch_5
	// 1227        0xff0e -> :sswitch_5
	// 1228        0xff61 -> :sswitch_5
	// 1229    .end sparse-switch

}
// .method private static startsWithPrefix(Ljava/lang/StringBuffer;)Z
bool android::icu::impl::IDNA2003::startsWithPrefix(std::shared_ptr<java::lang::StringBuffer> src)
{
	
	int i;
	
	//    .param p0, "src"    # Ljava/lang/StringBuffer;
	//    .local v1, "startsWithPrefix":Z
	if ( src->length() >= android::icu::impl::IDNA2003::ACE_PREFIX->size() )
		goto label_cond_c;
	return 0x0;
	// 1257    .line 45
label_cond_c:
	i = 0x0;
	//    .local v0, "i":I
label_goto_d:
	if ( i >= android::icu::impl::IDNA2003::ACE_PREFIX->size() )
		goto label_cond_24;
	if ( android::icu::impl::IDNA2003::toASCIILower(src->charAt(i)) == android::icu::impl::IDNA2003::ACE_PREFIX[i] )
		goto label_cond_21;
	0x0;
label_cond_21:
	i = ( i + 0x1);
	goto label_goto_d;
	// 1293    .line 50
label_cond_24:
	return 0x1;

}
// .method private static toASCIILower(C)C
char android::icu::impl::IDNA2003::toASCIILower(char ch)
{
	
	//    .param p0, "ch"    # C
	if ( 0x41 >  ch )
		goto label_cond_c;
	if ( ch >  0x5a )
		goto label_cond_c;
	return (char)(( ch + 0x20));
	// 1319    .line 57
label_cond_c:
	return ch;

}
// .method private static toASCIILower(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::IDNA2003::toASCIILower(std::shared_ptr<java::lang::CharSequence> src)
{
	
	std::shared_ptr<java::lang::StringBuffer> dest;
	int i;
	
	//    .param p0, "src"    # Ljava/lang/CharSequence;
	dest = std::make_shared<java::lang::StringBuffer>();
	//    .local v0, "dest":Ljava/lang/StringBuffer;
	i = 0x0;
	//    .local v1, "i":I
label_goto_6:
	if ( i >= src->length() )
		goto label_cond_1a;
	dest->append(android::icu::impl::IDNA2003::toASCIILower(src->charAt(i)));
	i = ( i + 0x1);
	goto label_goto_6;
	// 1362    .line 65
label_cond_1a:
	return dest;

}


