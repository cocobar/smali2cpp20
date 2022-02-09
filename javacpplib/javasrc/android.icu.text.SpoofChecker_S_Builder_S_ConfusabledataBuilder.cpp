// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$Builder$ConfusabledataBuilder.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder.h"
#include "android.icu.text.SpoofChecker_S_ConfusableDataUtils.h"
#include "android.icu.text.SpoofChecker_S_SpoofData.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.io.LineNumberReader.h"
#include "java.io.Reader.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParseException.h"
#include "java.util.ArrayList.h"
#include "java.util.Hashtable.h"
#include "java.util.Iterator.h"
#include "java.util.regex.Matcher.h"
#include "java.util.regex.Pattern.h"

static android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder::static_cinit()
{
	
	android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder::_assertionsDisabled = ( android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>()V
android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder::SpoofChecker_S_Builder_S_ConfusabledataBuilder()
{
	
	std::shared_ptr<java::util::Hashtable> cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar1;
	std::shared_ptr<java::util::ArrayList> cVar2;
	std::shared_ptr<java::util::ArrayList> cVar3;
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool> cVar4;
	
	// 101    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::Hashtable>();
	this->fTable = cVar0;
	cVar1 = std::make_shared<android::icu::text::UnicodeSet>();
	this->fKeySet = cVar1;
	cVar2 = std::make_shared<java::util::ArrayList>();
	this->fKeyVec = cVar2;
	cVar3 = std::make_shared<java::util::ArrayList>();
	this->fValueVec = cVar3;
	cVar4 = std::make_shared<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool>();
	this->stringPool = cVar4;
	return;

}
// .method public static buildConfusableData(Ljava/io/Reader;Landroid/icu/text/SpoofChecker$SpoofData;)V
void android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder::buildConfusableData(std::shared_ptr<java::io::Reader> confusables,std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> dest)
{
	
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder> builder;
	
	//    .param p0, "confusables"    # Ljava/io/Reader;
	//    .param p1, "dest"    # Landroid/icu/text/SpoofChecker$SpoofData;
	//    .annotation system Ldalvik/annotation/Throws;
	// 147        value = {
	// 148            Ljava/io/IOException;,
	// 149            Ljava/text/ParseException;
	// 150        }
	// 151    .end annotation
	builder = std::make_shared<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder>();
	//    .local v0, "builder":Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder;
	builder->build(confusables, dest);
	return;

}
// .method build(Ljava/io/Reader;Landroid/icu/text/SpoofChecker$SpoofData;)V
void android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder::build(std::shared_ptr<java::io::Reader> confusables,std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> dest)
{
	
	std::shared_ptr<java::lang::StringBuffer> fInput;
	std::shared_ptr<java::io::LineNumberReader> lnr;
	std::shared_ptr<java::lang::String> line;
	std::shared_ptr<java::util::regex::Matcher> matcher;
	std::shared_ptr<java::text::ParseException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int keyChar;
	std::shared_ptr<java::text::ParseException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::util::regex::Matcher> m;
	std::shared_ptr<java::lang::StringBuilder> mapString;
	int c;
	std::shared_ptr<java::text::ParseException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	std::shared_ptr<java::lang::StringBuffer> cVar7;
	int i;
	auto s;
	std::shared_ptr<java::util::Iterator> keyCharStr_S_iterator;
	std::shared_ptr<java::lang::String> keyCharStr;
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString> targetMapping;
	std::shared_ptr<java::lang::AssertionError> cVar8;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar9;
	int numKeys;
	int previousCodePoint;
	std::shared_ptr<java::lang::Integer> cVar10;
	int key;
	int codePoint;
	std::shared_ptr<java::lang::AssertionError> cVar11;
	int numValues;
	std::shared_ptr<java::lang::AssertionError> cVar12;
	std::shared_ptr<java::util::Iterator> value_S_iterator;
	std::shared_ptr<java::lang::Integer> cVar13;
	int value;
	std::shared_ptr<java::lang::AssertionError> cVar14;
	
	//    .param p1, "confusables"    # Ljava/io/Reader;
	//    .param p2, "dest"    # Landroid/icu/text/SpoofChecker$SpoofData;
	//    .annotation system Ldalvik/annotation/Throws;
	// 174        value = {
	// 175            Ljava/text/ParseException;,
	// 176            Ljava/io/IOException;
	// 177        }
	// 178    .end annotation
	fInput = std::make_shared<java::lang::StringBuffer>();
	//    .local v5, "fInput":Ljava/lang/StringBuffer;
	lnr = std::make_shared<java::io::LineNumberReader>(confusables);
	//    .local v13, "lnr":Ljava/io/LineNumberReader;
label_goto_c:
	line = lnr->readLine();
	//    .local v12, "line":Ljava/lang/String;
	if ( line )     
		goto label_cond_bf;
	this->fParseLine = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("(?m)^[ \\t]*([0-9A-Fa-f]+)[ \\t]+;[ \\t]*([0-9A-Fa-f]+(?:[ \\t]+[0-9A-Fa-f]+)*)[ \\t]*;\\s*(?:(SL)|(SA)|(ML)|(MA))[ \\t]*(?:#.*?)?$|^([ \\t]*(?:#.*?)?)$|^(.*?)$")));
	this->fParseHexNum = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\s*([0-9A-F]+)")));
	if ( fInput->charAt(0x0) != 0xfeff )
		goto label_cond_48;
	fInput->setCharAt(0x0, 0x20);
label_cond_48:
	matcher = this->fParseLine->matcher(fInput);
	//    .local v16, "matcher":Ljava/util/regex/Matcher;
label_cond_54:
label_goto_54:
	if ( !(matcher->find()) )  
		goto label_cond_1da;
	this->fLineNum = ( this->fLineNum + 0x1);
	if ( matcher->start(0x7) >= 0 )
		goto label_cond_54;
	if ( matcher->start(0x8) < 0 ) 
		goto label_cond_cb;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::text::ParseException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Confusables, line ")))->append(this->fLineNum)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": Unrecognized Line: ")))->append(matcher->group(0x8))->toString(), matcher->start(0x8));
	// throw
	throw cVar0;
	// 388    .line 796
	// 389    .end local v16    # "matcher":Ljava/util/regex/Matcher;
label_cond_bf:
	fInput->append(line);
	fInput->append(0xa);
	goto label_goto_c;
	// 402    .line 846
	// 403    .restart local v16    # "matcher":Ljava/util/regex/Matcher;
label_cond_cb:
	keyChar = java::lang::Integer::parseInt(matcher->group(0x1), 0x10);
	//    .local v9, "keyChar":I
	if ( keyChar <= 0x10ffff )
		goto label_cond_121;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::text::ParseException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Confusables, line ")))->append(this->fLineNum)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": Bad code point: ")))->append(matcher->group(0x1))->toString(), matcher->start(0x1));
	// throw
	throw cVar2;
	// 493    .line 852
label_cond_121:
	m = this->fParseHexNum->matcher(matcher->group(0x2));
	//    .local v14, "m":Ljava/util/regex/Matcher;
	mapString = std::make_shared<java::lang::StringBuilder>();
	//    .local v15, "mapString":Ljava/lang/StringBuilder;
label_goto_13a:
	if ( !(m->find()) )  
		goto label_cond_196;
	c = java::lang::Integer::parseInt(m->group(0x1), 0x10);
	//    .local v3, "c":I
	if ( c <= 0x10ffff )
		goto label_cond_192;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::text::ParseException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Confusables, line ")))->append(this->fLineNum)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": Bad code point: ")))->append(java::lang::Integer::toString(c, 0x10))->toString(), matcher->start(0x2));
	// throw
	throw cVar4;
	// 615    .line 862
label_cond_192:
	mapString->appendCodePoint(c);
	goto label_goto_13a;
	// 621    .line 864
	// 622    .end local v3    # "c":I
label_cond_196:
	if ( android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder::_assertionsDisabled )     
		goto label_cond_1ac;
	if ( mapString->length() >= 0x1 )
		goto label_cond_1ac;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 646    .line 869
label_cond_1ac:
	//    .local v22, "smapString":Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
	this->fTable->put(java::lang::Integer::valueOf(keyChar), this->stringPool->addString(mapString->toString()));
	this->fKeySet->add(keyChar);
	goto label_goto_54;
	// 695    .line 891
	// 696    .end local v9    # "keyChar":I
	// 697    .end local v14    # "m":Ljava/util/regex/Matcher;
	// 698    .end local v15    # "mapString":Ljava/lang/StringBuilder;
	// 699    .end local v22    # "smapString":Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
label_cond_1da:
	this->stringPool->sort();
	cVar7 = std::make_shared<java::lang::StringBuffer>();
	this->fStringTable = cVar7;
	//    .local v19, "poolSize":I
	i = 0x0;
	//    .local v6, "i":I
label_goto_1f9:
	if ( i >= this->stringPool->size() )
		goto label_cond_250;
	s = this->stringPool->getByIndex(i);
	//    .local v21, "s":Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
	//    .local v24, "strLen":I
	//    .local v23, "strIndex":I
	if ( s->fStr->length() != 0x1 )
		goto label_cond_23a;
	s->fCharOrStrTableIndex = s->fStr->charAt(0x0);
label_goto_237:
	i = ( i + 0x1);
	goto label_goto_1f9;
	// 813    .line 905
label_cond_23a:
	s->fCharOrStrTableIndex = this->fStringTable->length();
	this->fStringTable->append(s->fStr);
	goto label_goto_237;
	// 838    .line 918
	// 839    .end local v21    # "s":Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
	// 840    .end local v23    # "strIndex":I
	// 841    .end local v24    # "strLen":I
label_cond_250:
	keyCharStr_S_iterator = this->fKeySet->iterator();
	//    .local v11, "keyCharStr$iterator":Ljava/util/Iterator;
label_goto_25a:
	if ( !(keyCharStr_S_iterator->hasNext()) )  
		goto label_cond_2d6;
	keyCharStr = keyCharStr_S_iterator->next();
	keyCharStr->checkCast("java::lang::String");
	//    .local v10, "keyCharStr":Ljava/lang/String;
	keyChar = keyCharStr->codePointAt(0x0);
	//    .restart local v9    # "keyChar":I
	targetMapping = this->fTable->get(java::lang::Integer::valueOf(keyChar));
	targetMapping->checkCast("android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString");
	//    .local v25, "targetMapping":Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
	if ( android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder::_assertionsDisabled )     
		goto label_cond_28a;
	if ( targetMapping )     
		goto label_cond_28a;
	cVar8 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar8;
	// 909    .line 925
label_cond_28a:
	if ( targetMapping->fStr->length() <= 0x100 )
		goto label_cond_2a5;
	cVar9 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Confusable prototypes cannot be longer than 256 entries.")));
	// throw
	throw cVar9;
	// 938    .line 929
label_cond_2a5:
	//    .local v8, "key":I
	//    .local v26, "value":I
	this->fKeyVec->add(java::lang::Integer::valueOf(android::icu::text::SpoofChecker_S_ConfusableDataUtils::codePointAndLengthToKey(keyChar, targetMapping->fStr->length())));
	this->fValueVec->add(java::lang::Integer::valueOf(targetMapping->fCharOrStrTableIndex));
	goto label_goto_25a;
	// 993    .line 941
	// 994    .end local v8    # "key":I
	// 995    .end local v9    # "keyChar":I
	// 996    .end local v10    # "keyCharStr":Ljava/lang/String;
	// 997    .end local v25    # "targetMapping":Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
	// 998    .end local v26    # "value":I
label_cond_2d6:
	numKeys = this->fKeyVec->size();
	//    .local v17, "numKeys":I
	dest->fCFUKeys = std::make_shared<std::vector<int[]>>(numKeys);
	previousCodePoint = 0x0;
	//    .local v20, "previousCodePoint":I
	i = 0x0;
label_goto_2ef:
	if ( i >= numKeys )
		goto label_cond_324;
	cVar10 = this->fKeyVec->get(i);
	cVar10->checkCast("java::lang::Integer");
	key = cVar10->intValue();
	//    .restart local v8    # "key":I
	codePoint = android::icu::text::SpoofChecker_S_ConfusableDataUtils::keyToCodePoint(key);
	//    .local v4, "codePoint":I
	if ( android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder::_assertionsDisabled )     
		goto label_cond_317;
	if ( codePoint >  previousCodePoint )
		goto label_cond_317;
	cVar11 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar11;
	// 1077    .line 949
label_cond_317:
	dest->fCFUKeys[i] = key;
	previousCodePoint = codePoint;
	i = ( i + 0x1);
	goto label_goto_2ef;
	// 1095    .line 954
	// 1096    .end local v4    # "codePoint":I
	// 1097    .end local v8    # "key":I
label_cond_324:
	numValues = this->fValueVec->size();
	//    .local v18, "numValues":I
	if ( android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder::_assertionsDisabled )     
		goto label_cond_33e;
	if ( numKeys == numValues )
		goto label_cond_33e;
	cVar12 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar12;
	// 1127    .line 956
label_cond_33e:
	dest->fCFUValues = std::make_shared<std::vector<short[]>>(numValues);
	i = 0x0;
	value_S_iterator = this->fValueVec->iterator();
	//    .local v27, "value$iterator":Ljava/util/Iterator;
label_goto_355:
	if ( !(value_S_iterator->hasNext()) )  
		goto label_cond_389;
	cVar13 = value_S_iterator->next();
	cVar13->checkCast("java::lang::Integer");
	value = cVar13->intValue();
	//    .restart local v26    # "value":I
	if ( android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder::_assertionsDisabled )     
		goto label_cond_378;
	if ( value <  0xffff )
		goto label_cond_378;
	cVar14 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar14;
	// 1193    .line 960
label_cond_378:
	i = ( i + 0x1);
	//    .end local v6    # "i":I
	//    .local v7, "i":I
	dest->fCFUValues[i] = (short)(value);
	i = i;
	//    .end local v7    # "i":I
	//    .restart local v6    # "i":I
	goto label_goto_355;
	// 1219    .line 964
	// 1220    .end local v26    # "value":I
label_cond_389:
	dest->fCFUStrings = this->fStringTable->toString();
	return;

}


