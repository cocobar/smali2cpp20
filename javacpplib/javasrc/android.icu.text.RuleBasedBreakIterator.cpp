// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedBreakIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Assert.h"
#include "android.icu.impl.CharTrie.h"
#include "android.icu.impl.CharacterIteration.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.BurmeseBreakEngine.h"
#include "android.icu.text.CjkBreakEngine.h"
#include "android.icu.text.DictionaryBreakEngine_S_DequeI.h"
#include "android.icu.text.KhmerBreakEngine.h"
#include "android.icu.text.LanguageBreakEngine.h"
#include "android.icu.text.LaoBreakEngine.h"
#include "android.icu.text.RBBIDataWrapper_S_RBBIDataHeader.h"
#include "android.icu.text.RBBIDataWrapper.h"
#include "android.icu.text.RBBIRuleBuilder.h"
#include "android.icu.text.RuleBasedBreakIterator_S_LookAheadResults.h"
#include "android.icu.text.RuleBasedBreakIterator.h"
#include "android.icu.text.ThaiBreakEngine.h"
#include "android.icu.text.UnhandledBreakEngine.h"
#include "java.io.ByteArrayOutputStream.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.io.PrintStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.nio.ByteBuffer.h"
#include "java.text.CharacterIterator.h"
#include "java.text.StringCharacterIterator.h"
#include "java.util.Collection.h"
#include "java.util.Iterator.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

static android::icu::text::RuleBasedBreakIterator::_assertionsDisabled;
static android::icu::text::RuleBasedBreakIterator::RBBI_DEBUG_ARG = std::make_shared<java::lang::String>("rbbi");
static android::icu::text::RuleBasedBreakIterator::RBBI_END = 0x2;
static android::icu::text::RuleBasedBreakIterator::RBBI_RUN = 0x1;
static android::icu::text::RuleBasedBreakIterator::RBBI_START = 0x0;
static android::icu::text::RuleBasedBreakIterator::START_STATE = 0x1;
static android::icu::text::RuleBasedBreakIterator::STOP_STATE = 0x0;
static android::icu::text::RuleBasedBreakIterator::TRACE;
static android::icu::text::RuleBasedBreakIterator::fDebugEnv;
static android::icu::text::RuleBasedBreakIterator::kMaxLookaheads = 0x8;
// .method static constructor <clinit>()V
void android::icu::text::RuleBasedBreakIterator::static_cinit()
{
	
	bool cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	
	cVar1 = 0x0;
	android::icu::text::RuleBasedBreakIterator::_assertionsDisabled = ( android::icu::text::RuleBasedBreakIterator()->desiredAssertionStatus() ^ 0x1);
	if ( !(android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("rbbi")))) )  
		goto label_cond_25;
	if ( android::icu::impl::ICUDebug::value(std::make_shared<java::lang::String>(std::make_shared<char[]>("rbbi")))->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("trace"))) < 0 ) 
		goto label_cond_25;
	cVar1 = 0x1;
label_cond_25:
	android::icu::text::RuleBasedBreakIterator::TRACE = cVar1;
	if ( !(android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("rbbi")))) )  
		goto label_cond_3a;
	cVar2 = android::icu::impl::ICUDebug::value(std::make_shared<java::lang::String>(std::make_shared<char[]>("rbbi")));
label_goto_37:
	android::icu::text::RuleBasedBreakIterator::fDebugEnv = cVar2;
	return;
	// 140    .line 1083
label_cond_3a:
	cVar2 = 0x0;
	goto label_goto_37;

}
// .method private constructor <init>()V
android::icu::text::RuleBasedBreakIterator::RuleBasedBreakIterator()
{
	
	std::shared_ptr<java::text::StringCharacterIterator> cVar0;
	std::shared_ptr<android::icu::text::UnhandledBreakEngine> cVar1;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar2;
	std::shared_ptr<android::icu::text::RuleBasedBreakIterator_S_LookAheadResults> cVar3;
	
	// 152    invoke-direct {p0}, Landroid/icu/text/BreakIterator;-><init>()V
	cVar0 = std::make_shared<java::text::StringCharacterIterator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	this->fText = cVar0;
	this->fBreakType = 0x2;
	cVar1 = std::make_shared<android::icu::text::UnhandledBreakEngine>();
	this->fUnhandledBreakEngine = cVar1;
	cVar2 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	this->fBreakEngines = cVar2;
	cVar3 = std::make_shared<android::icu::text::RuleBasedBreakIterator_S_LookAheadResults>();
	this->fLookAheadMatches = cVar3;
	this->fLastStatusIndexValid = 0x1;
	this->fDictionaryCharCount = 0x0;
	this->fBreakEngines->put(java::lang::Integer::valueOf(-0x1), this->fUnhandledBreakEngine);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::RuleBasedBreakIterator::RuleBasedBreakIterator(std::shared_ptr<java::lang::String> rules)
{
	
	std::shared_ptr<java::lang::RuntimeException> rte;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::io::ByteArrayOutputStream> ruleOS;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "rules"    # Ljava/lang/String;
	// 223    invoke-direct {p0}, Landroid/icu/text/RuleBasedBreakIterator;-><init>()V
	try {
	//label_try_start_3:
	ruleOS = std::make_shared<java::io::ByteArrayOutputStream>();
	//    .local v2, "ruleOS":Ljava/io/ByteArrayOutputStream;
	android::icu::text::RuleBasedBreakIterator::compileRules(rules, ruleOS);
	this->fRData = android::icu::text::RBBIDataWrapper::get(java::nio::ByteBuffer::wrap(ruleOS->toByteArray()));
	//label_try_end_19:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1a;
	}
	//    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_19} :catch_1a
	return;
	// 255    .line 108
	// 256    .end local v2    # "ruleOS":Ljava/io/ByteArrayOutputStream;
label_catch_1a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	rte = std::make_shared<java::lang::RuntimeException>(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RuleBasedBreakIterator rule compilation internal error: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	//    .local v1, "rte":Ljava/lang/RuntimeException;
	// throw
	throw rte;

}
// .method private checkDictionary(IIZ)I
int android::icu::text::RuleBasedBreakIterator::checkDictionary(int startPos,int endPos,bool reverse)
{
	
	int startPos;
	int cVar1;
	int rangeStart;
	int rangeEnd;
	std::shared_ptr<android::icu::text::DictionaryBreakEngine_S_DequeI> breaks;
	int foundBreakCount;
	int c;
	short category;
	int current;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	int i;
	int cVar6;
	std::shared_ptr<android::icu::text::LanguageBreakEngine> lbe;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	
	//    .param p1, "startPos"    # I
	//    .param p2, "endPos"    # I
	//    .param p3, "reverse"    # Z
	this->reset();
	if ( (endPos - startPos) >  0x1 )
		goto label_cond_e;
	if ( !(reverse) )  
		goto label_cond_b;
	//    .end local p1    # "startPos":I
label_goto_a:
	return startPos;
	// 319    .restart local p1    # "startPos":I
label_cond_b:
	startPos = endPos;
	goto label_goto_a;
	// 325    .line 444
label_cond_e:
	if ( !(reverse) )  
		goto label_cond_ac;
	cVar1 = endPos;
label_goto_14:
	this->fText->setIndex(cVar1);
	if ( !(reverse) )  
		goto label_cond_1e;
	android::icu::impl::CharacterIteration::previous32(this->fText);
label_cond_1e:
	rangeStart = startPos;
	//    .local v3, "rangeStart":I
	rangeEnd = endPos;
	//    .local v4, "rangeEnd":I
	breaks = std::make_shared<android::icu::text::DictionaryBreakEngine_S_DequeI>();
	//    .local v7, "breaks":Landroid/icu/text/DictionaryBreakEngine$DequeI;
	foundBreakCount = 0x0;
	//    .local v11, "foundBreakCount":I
	c = android::icu::impl::CharacterIteration::current32(this->fText);
	//    .local v8, "c":I
	category = (short)(this->fRData->fTrie->getCodePointValue(c));
	//    .local v9, "category":I
	if ( !(( category & 0x4000)) )  
		goto label_cond_74;
	if ( !(reverse) )  
		goto label_cond_b7;
label_cond_3d:
	android::icu::impl::CharacterIteration::next32(this->fText);
	c = android::icu::impl::CharacterIteration::current32(this->fText);
	category = (short)(this->fRData->fTrie->getCodePointValue(c));
	if ( c == 0x7fffffff )
		goto label_cond_5a;
	if ( ( category & 0x4000) )     
		goto label_cond_3d;
label_cond_5a:
	rangeEnd = this->fText->getIndex();
	if ( c != 0x7fffffff )
		goto label_cond_b0;
	c = android::icu::impl::CharacterIteration::previous32(this->fText);
label_goto_6b:
	(short)(this->fRData->fTrie->getCodePointValue(c));
label_cond_74:
	if ( !(reverse) )  
		goto label_cond_8a;
	this->fText->setIndex(rangeStart);
	c = android::icu::impl::CharacterIteration::current32(this->fText);
	category = (short)(this->fRData->fTrie->getCodePointValue(c));
label_cond_8a:
label_goto_8b:
	current = this->fText->getIndex();
	//    .local v10, "current":I
	if ( current >= rangeEnd )
		goto label_cond_ed;
	if ( ( category & 0x4000) )     
		goto label_cond_ed;
	android::icu::impl::CharacterIteration::next32(this->fText);
	c = android::icu::impl::CharacterIteration::current32(this->fText);
	category = (short)(this->fRData->fTrie->getCodePointValue(c));
	goto label_goto_8b;
	// 527    .end local v3    # "rangeStart":I
	// 528    .end local v4    # "rangeEnd":I
	// 529    .end local v7    # "breaks":Landroid/icu/text/DictionaryBreakEngine$DequeI;
	// 530    .end local v8    # "c":I
	// 531    .end local v9    # "category":I
	// 532    .end local v10    # "current":I
	// 533    .end local v11    # "foundBreakCount":I
label_cond_ac:
	cVar1 = startPos;
	goto label_goto_14;
	// 540    .line 480
	// 541    .restart local v3    # "rangeStart":I
	// 542    .restart local v4    # "rangeEnd":I
	// 543    .restart local v7    # "breaks":Landroid/icu/text/DictionaryBreakEngine$DequeI;
	// 544    .restart local v8    # "c":I
	// 545    .restart local v9    # "category":I
	// 546    .restart local v11    # "foundBreakCount":I
label_cond_b0:
	c = android::icu::impl::CharacterIteration::previous32(this->fText);
	goto label_goto_6b;
	// 556    .line 485
label_cond_b7:
	c = android::icu::impl::CharacterIteration::previous32(this->fText);
	category = (short)(this->fRData->fTrie->getCodePointValue(c));
	if ( c == 0x7fffffff )
		goto label_cond_cf;
	if ( ( category & 0x4000) )     
		goto label_cond_b7;
label_cond_cf:
	if ( c != 0x7fffffff )
		goto label_cond_e1;
	c = android::icu::impl::CharacterIteration::current32(this->fText);
label_goto_da:
	this->fText->getIndex();
	goto label_goto_6b;
	// 607    .line 495
label_cond_e1:
	android::icu::impl::CharacterIteration::next32(this->fText);
	c = android::icu::impl::CharacterIteration::current32(this->fText);
	goto label_goto_da;
	// 622    .line 521
	// 623    .restart local v10    # "current":I
label_cond_ed:
	if ( current <  rangeEnd )
		goto label_cond_124;
	if ( foundBreakCount <= 0 )
		goto label_cond_1a0;
	if ( foundBreakCount == breaks->size() )
		goto label_cond_114;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("oops, foundBreakCount != breaks.size().  LBE = ")))->append(0x0->getClass())->toString());
label_cond_114:
	if ( android::icu::text::RuleBasedBreakIterator::_assertionsDisabled )     
		goto label_cond_15d;
	if ( foundBreakCount == breaks->size() )
		goto label_cond_15d;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 682    .line 527
label_cond_124:
	lbe = this->getLanguageBreakEngine(c);
	//    .local v1, "lbe":Landroid/icu/text/LanguageBreakEngine;
	if ( !(lbe) )  
		goto label_cond_14c;
	//    .local v14, "startingIdx":I
	foundBreakCount = (foundBreakCount +  lbe->findBreaks(this->fText, rangeStart, rangeEnd, 0x0, this->fBreakType, breaks));
	if ( android::icu::text::RuleBasedBreakIterator::_assertionsDisabled )     
		goto label_cond_14c;
	if ( this->fText->getIndex() >  this->fText->getIndex() )
		goto label_cond_14c;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 732    .line 538
	// 733    .end local v14    # "startingIdx":I
label_cond_14c:
	c = android::icu::impl::CharacterIteration::current32(this->fText);
	category = (short)(this->fRData->fTrie->getCodePointValue(c));
	goto label_goto_8b;
	// 754    .line 549
	// 755    .end local v1    # "lbe":Landroid/icu/text/LanguageBreakEngine;
label_cond_15d:
	if ( startPos >= breaks->peekLast() )
		goto label_cond_16a;
	breaks->offer(startPos);
label_cond_16a:
	if ( endPos <= breaks->peek() )
		goto label_cond_177;
	breaks->push(endPos);
label_cond_177:
	this->fCachedBreakPositions = std::make_shared<std::vector<int[]>>(breaks->size());
	i = 0x0;
	//    .local v12, "i":I
label_goto_180:
	if ( breaks->size() <= 0 )
		goto label_cond_192;
	//    .end local v12    # "i":I
	//    .local v13, "i":I
	this->fCachedBreakPositions[i] = breaks->pollLast();
	i = ( i + 0x1);
	//    .end local v13    # "i":I
	//    .restart local v12    # "i":I
	goto label_goto_180;
	// 826    .line 567
label_cond_192:
	if ( !(reverse) )  
		goto label_cond_19b;
	return this->preceding(endPos);
	// 839    .line 571
label_cond_19b:
	return this->following(startPos);
	// 847    .line 577
	// 848    .end local v12    # "i":I
label_cond_1a0:
	if ( !(reverse) )  
		goto label_cond_1ac;
	cVar6 = startPos;
label_goto_1a6:
	this->fText->setIndex(cVar6);
	if ( !(reverse) )  
		goto label_cond_1af;
	//    .end local p1    # "startPos":I
label_goto_1ab:
	return startPos;
	// 866    .restart local p1    # "startPos":I
label_cond_1ac:
	cVar6 = endPos;
	goto label_goto_1a6;
label_cond_1af:
	startPos = endPos;
	goto label_goto_1ab;

}
// .method protected static final checkOffset(ILjava/text/CharacterIterator;)V
void android::icu::text::RuleBasedBreakIterator::checkOffset(int offset,std::shared_ptr<java::text::CharacterIterator> text)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "offset"    # I
	//    .param p1, "text"    # Ljava/text/CharacterIterator;
	if ( offset <  text->getBeginIndex() )
		goto label_cond_c;
	if ( offset <= text->getEndIndex() )
		goto label_cond_15;
label_cond_c:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("offset out of bounds")));
	// throw
	throw cVar0;
	// 909    .line 897
label_cond_15:
	return;

}
// .method public static compileRules(Ljava/lang/String;Ljava/io/OutputStream;)V
void android::icu::text::RuleBasedBreakIterator::compileRules(std::shared_ptr<java::lang::String> rules,std::shared_ptr<java::io::OutputStream> ruleBinary)
{
	
	//    .param p0, "rules"    # Ljava/lang/String;
	//    .param p1, "ruleBinary"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 919        value = {
	// 920            Ljava/io/IOException;
	// 921        }
	// 922    .end annotation
	android::icu::text::RBBIRuleBuilder::compileRules(rules, ruleBinary);
	return;

}
// .method public static getInstanceFromCompiledRules(Ljava/io/InputStream;)Landroid/icu/text/RuleBasedBreakIterator;
std::shared_ptr<android::icu::text::RuleBasedBreakIterator> android::icu::text::RuleBasedBreakIterator::getInstanceFromCompiledRules(std::shared_ptr<java::io::InputStream> is)
{
	
	std::shared_ptr<android::icu::text::RuleBasedBreakIterator> This;
	
	//    .param p0, "is"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 936        value = {
	// 937            Ljava/io/IOException;
	// 938        }
	// 939    .end annotation
	This = std::make_shared<android::icu::text::RuleBasedBreakIterator>();
	//    .local v0, "This":Landroid/icu/text/RuleBasedBreakIterator;
	This->fRData = android::icu::text::RBBIDataWrapper::get(android::icu::impl::ICUBinary::getByteBufferFromInputStreamAndCloseStream(is));
	return This;

}
// .method public static getInstanceFromCompiledRules(Ljava/nio/ByteBuffer;)Landroid/icu/text/RuleBasedBreakIterator;
std::shared_ptr<android::icu::text::RuleBasedBreakIterator> android::icu::text::RuleBasedBreakIterator::getInstanceFromCompiledRules(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	std::shared_ptr<android::icu::text::RuleBasedBreakIterator> This;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 967        value = {
	// 968            Ljava/io/IOException;
	// 969        }
	// 970    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 973    .end annotation
	This = std::make_shared<android::icu::text::RuleBasedBreakIterator>();
	//    .local v0, "This":Landroid/icu/text/RuleBasedBreakIterator;
	This->fRData = android::icu::text::RBBIDataWrapper::get(bytes);
	return This;

}
// .method private getLanguageBreakEngine(I)Landroid/icu/text/LanguageBreakEngine;
std::shared_ptr<android::icu::text::LanguageBreakEngine> android::icu::text::RuleBasedBreakIterator::getLanguageBreakEngine(int c)
{
	
	int cVar0;
	std::shared_ptr<java::util::Iterator> candidate_S_iterator;
	std::shared_ptr<android::icu::text::LanguageBreakEngine> candidate;
	int script;
	std::shared_ptr<android::icu::text::LanguageBreakEngine> eng;
	std::shared_ptr<java::lang::Object> eng;
	std::shared_ptr<android::icu::text::LanguageBreakEngine> existingEngine;
	std::shared_ptr<android::icu::text::UnhandledBreakEngine> eng;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::text::CjkBreakEngine> eng;
	std::shared_ptr<android::icu::text::KhmerBreakEngine> eng;
	std::shared_ptr<android::icu::text::LaoBreakEngine> eng;
	std::shared_ptr<android::icu::text::BurmeseBreakEngine> eng;
	std::shared_ptr<android::icu::text::ThaiBreakEngine> eng;
	
	//    .param p1, "c"    # I
	cVar0 = 0x1;
	candidate_S_iterator = this->fBreakEngines->values()->iterator();
	//    .local v1, "candidate$iterator":Ljava/util/Iterator;
label_cond_b:
	if ( !(candidate_S_iterator->hasNext()) )  
		goto label_cond_20;
	candidate = candidate_S_iterator->next();
	candidate->checkCast("android::icu::text::LanguageBreakEngine");
	//    .local v0, "candidate":Landroid/icu/text/LanguageBreakEngine;
	if ( !(candidate->handles(c, this->fBreakType)) )  
		goto label_cond_b;
	return candidate;
	// 1038    .line 1097
	// 1039    .end local v0    # "candidate":Landroid/icu/text/LanguageBreakEngine;
label_cond_20:
	script = android::icu::lang::UCharacter::getIntPropertyValue(c, 0x100a);
	//    .local v5, "script":I
	if ( script == 0x16 )
		goto label_cond_2e;
	if ( script != 0x14 )
		goto label_cond_30;
label_cond_2e:
	script = 0x11;
label_cond_30:
	eng = this->fBreakEngines->get(java::lang::Integer::valueOf(script));
	eng->checkCast("android::icu::text::LanguageBreakEngine");
	//    .local v3, "eng":Landroid/icu/text/LanguageBreakEngine;
	// switch
	{
	auto item = ( script );
	if (item == 0x11) goto label_sswitch_78;
	if (item == 0x12) goto label_sswitch_91;
	if (item == 0x17) goto label_sswitch_72;
	if (item == 0x18) goto label_sswitch_66;
	if (item == 0x1c) goto label_sswitch_6c;
	if (item == 0x26) goto label_sswitch_60;
	}
	try {
	//label_try_start_3f:
	this->fUnhandledBreakEngine->handleChar(c, this->getBreakType());
	eng = this->fUnhandledBreakEngine;
	//label_try_end_4a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_aa;
	}
	//    .catch Ljava/io/IOException; {:try_start_3f .. :try_end_4a} :catch_aa
	//    .end local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
label_goto_4a:
	if ( !(eng) )  
		goto label_cond_5f;
	if ( eng == this->fUnhandledBreakEngine )
		goto label_cond_5f;
	existingEngine = this->fBreakEngines->putIfAbsent(java::lang::Integer::valueOf(script), eng);
	existingEngine->checkCast("android::icu::text::LanguageBreakEngine");
	//    .local v4, "existingEngine":Landroid/icu/text/LanguageBreakEngine;
	if ( !(existingEngine) )  
		goto label_cond_5f;
	eng = existingEngine;
	//    .end local v4    # "existingEngine":Landroid/icu/text/LanguageBreakEngine;
label_cond_5f:
	return eng;
	// 1128    .line 1113
	// 1129    .restart local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
label_sswitch_60:
	try {
	//label_try_start_60:
	//    .end local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
	eng = std::make_shared<android::icu::text::ThaiBreakEngine>();
	//    .restart local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
	goto label_goto_4a;
	// 1141    .line 1116
label_sswitch_66:
	//    .end local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
	eng = std::make_shared<android::icu::text::LaoBreakEngine>();
	//    .restart local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
	goto label_goto_4a;
	// 1152    .line 1119
label_sswitch_6c:
	//    .end local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
	eng = std::make_shared<android::icu::text::BurmeseBreakEngine>();
	//    .restart local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
	goto label_goto_4a;
	// 1163    .line 1122
label_sswitch_72:
	//    .end local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
	eng = std::make_shared<android::icu::text::KhmerBreakEngine>();
	//    .restart local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
	goto label_goto_4a;
	// 1174    .line 1125
label_sswitch_78:
	if ( this->getBreakType() != cVar0 )
		goto label_cond_85;
	//    .end local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
	eng = std::make_shared<android::icu::text::CjkBreakEngine>(0x0);
	//    .restart local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
	goto label_goto_4a;
	// 1193    .line 1129
label_cond_85:
	this->fUnhandledBreakEngine->handleChar(c, this->getBreakType());
	eng = this->fUnhandledBreakEngine;
	goto label_goto_4a;
	// 1208    .line 1134
label_sswitch_91:
	if ( this->getBreakType() != cVar0 )
		goto label_cond_9e;
	//    .end local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
	eng = std::make_shared<android::icu::text::CjkBreakEngine>(0x1);
	//    .restart local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
	goto label_goto_4a;
	// 1227    .line 1137
label_cond_9e:
	this->fUnhandledBreakEngine->handleChar(c, this->getBreakType());
	eng = this->fUnhandledBreakEngine;
	//label_try_end_a9:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_aa;
	}
	//    .catch Ljava/io/IOException; {:try_start_60 .. :try_end_a9} :catch_aa
	goto label_goto_4a;
	// 1244    .line 1146
	// 1245    .end local v3    # "eng":Landroid/icu/text/LanguageBreakEngine;
label_catch_aa:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/io/IOException;
	eng = 0x0;
	//    .local v3, "eng":Landroid/icu/text/LanguageBreakEngine;
	goto label_goto_4a;
	// 1256    .line 1111
	// 1257    nop
	// 1259    :sswitch_data_ae
	// 1260    .sparse-switch
	// 1261        0x11 -> :sswitch_78
	// 1262        0x12 -> :sswitch_91
	// 1263        0x17 -> :sswitch_72
	// 1264        0x18 -> :sswitch_66
	// 1265        0x1c -> :sswitch_6c
	// 1266        0x26 -> :sswitch_60
	// 1267    .end sparse-switch

}
// .method private handleNext([S)I
int android::icu::text::RuleBasedBreakIterator::handleNext(std::shared_ptr<short[]> stateTable)
{
	
	std::shared_ptr<java::text::CharacterIterator> text;
	int c;
	int initialPosition;
	int result;
	int state;
	int category;
	int mode;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	int row;
	int completedRule;
	int lookaheadResult;
	int rule;
	int pos;
	short category;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p1, "stateTable"    # [S
	if ( !(android::icu::text::RuleBasedBreakIterator::TRACE) )  
		goto label_cond_c;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Handle Next   pos      char  state category")));
label_cond_c:
	this->fLastStatusIndexValid = 0x1;
	this->fLastRuleStatusIndex = 0x0;
	text = this->fText;
	//    .local v13, "text":Ljava/text/CharacterIterator;
	//    .local v14, "trie":Landroid/icu/impl/CharTrie;
	c = text->current();
	//    .local v1, "c":I
	if ( c <  0xd800 )
		goto label_cond_34;
	c = android::icu::impl::CharacterIteration::nextTrail32(text, c);
	if ( c != 0x7fffffff )
		goto label_cond_34;
	return -0x1;
	// 1342    .line 1246
label_cond_34:
	initialPosition = text->getIndex();
	//    .local v5, "initialPosition":I
	result = initialPosition;
	//    .local v9, "result":I
	state = 0x1;
	//    .local v12, "state":I
	//    .local v10, "row":I
	category = 0x3;
	//    .local v2, "category":S
	//    .local v4, "flagsState":I
	mode = 0x1;
	//    .local v7, "mode":I
	if ( !(( this->fRData->getStateTableFlags(stateTable) & 0x2)) )  
		goto label_cond_ae;
	category = 0x2;
	mode = 0x0;
	if ( !(android::icu::text::RuleBasedBreakIterator::TRACE) )  
		goto label_cond_ae;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->print(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("            ")))->append(android::icu::text::RBBIDataWrapper::intToString(text->getIndex(), 0x5))->toString());
	java::lang::System::out->print(android::icu::text::RBBIDataWrapper::intToHexString(c, 0xa));
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar1->append(android::icu::text::RBBIDataWrapper::intToString(state, 0x7))->append(android::icu::text::RBBIDataWrapper::intToString(0x2, 0x6))->toString());
label_cond_ae:
	this->fLookAheadMatches->reset();
	//    .end local v2    # "category":S
label_cond_b5:
label_goto_b5:
	if ( !(state) )  
		goto label_cond_bf;
	if ( c != 0x7fffffff )
		goto label_cond_143;
	if ( mode != 0x2 )
		goto label_cond_f7;
label_cond_bf:
	if ( result != initialPosition )
		goto label_cond_1e6;
	if ( !(android::icu::text::RuleBasedBreakIterator::TRACE) )  
		goto label_cond_cd;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Iterator did not move. Advancing by 1.")));
label_cond_cd:
	text->setIndex(initialPosition);
	android::icu::impl::CharacterIteration::next32(text);
	result = text->getIndex();
label_goto_d7:
	if ( !(android::icu::text::RuleBasedBreakIterator::TRACE) )  
		goto label_cond_f6;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("result = ")))->append(result)->toString());
label_cond_f6:
	return result;
	// 1573    .line 1277
label_cond_f7:
	mode = 0x2;
	category = 0x1;
label_cond_f9:
label_goto_f9:
	state = stateTable[(( row + 0x4) +  category)];
	row = this->fRData->getRowIndex(state);
	if ( stateTable[( row + 0x0)] != -0x1 )
		goto label_cond_127;
	if ( c <  0x10000 )
		goto label_cond_11f;
	if ( c >  0x10ffff )
		goto label_cond_11f;
	( text->getIndex() + -0x1);
label_cond_11f:
	this->fLastRuleStatusIndex = stateTable[( row + 0x2)];
label_cond_127:
	completedRule = stateTable[( row + 0x0)];
	//    .local v3, "completedRule":I
	if ( completedRule <= 0 )
		goto label_cond_1c8;
	lookaheadResult = this->fLookAheadMatches->getPosition(completedRule);
	//    .local v6, "lookaheadResult":I
	if ( lookaheadResult < 0 ) 
		goto label_cond_1c8;
	this->fLastRuleStatusIndex = stateTable[( row + 0x2)];
	text->setIndex(lookaheadResult);
	return lookaheadResult;
	// 1674    .line 1280
	// 1675    .end local v3    # "completedRule":I
	// 1676    .end local v6    # "lookaheadResult":I
label_cond_143:
	if ( mode != 0x1 )
		goto label_cond_1c5;
	category = (short)(this->fRData->fTrie->getCodePointValue(c));
	//    .local v2, "category":S
	if ( !(( category & 0x4000)) )  
		goto label_cond_15c;
	this->fDictionaryCharCount = ( this->fDictionaryCharCount + 0x1);
	category = (short)(( category & -0x4001));
label_cond_15c:
	if ( !(android::icu::text::RuleBasedBreakIterator::TRACE) )  
		goto label_cond_1b6;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->print(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("            ")))->append(android::icu::text::RBBIDataWrapper::intToString(text->getIndex(), 0x5))->toString());
	java::lang::System::out->print(android::icu::text::RBBIDataWrapper::intToHexString(c, 0xa));
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar4->append(android::icu::text::RBBIDataWrapper::intToString(state, 0x7))->append(android::icu::text::RBBIDataWrapper::intToString(category, 0x6))->toString());
label_cond_1b6:
	c = text->next();
	if ( c <  0xd800 )
		goto label_cond_f9;
	c = android::icu::impl::CharacterIteration::nextTrail32(text, c);
	goto label_goto_f9;
	// 1818    .line 1317
	// 1819    .end local v2    # "category":S
label_cond_1c5:
	mode = 0x1;
	goto label_goto_f9;
	// 1825    .line 1348
	// 1826    .restart local v3    # "completedRule":I
label_cond_1c8:
	rule = stateTable[( row + 0x1)];
	//    .local v11, "rule":I
	if ( !(rule) )  
		goto label_cond_b5;
	pos = text->getIndex();
	//    .local v8, "pos":I
	if ( c <  0x10000 )
		goto label_cond_1dd;
	if ( c >  0x10ffff )
		goto label_cond_1dd;
label_cond_1dd:
	this->fLookAheadMatches->setPosition(rule, pos);
	goto label_goto_b5;
	// 1864    .line 1381
	// 1865    .end local v3    # "completedRule":I
	// 1866    .end local v8    # "pos":I
	// 1867    .end local v11    # "rule":I
label_cond_1e6:
	text->setIndex(result);
	goto label_goto_d7;

}
// .method private handlePrevious([S)I
int android::icu::text::RuleBasedBreakIterator::handlePrevious(std::shared_ptr<short[]> stateTable)
{
	
	int category;
	int result;
	int initialPosition;
	int c;
	int state;
	int mode;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	short category;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int row;
	int completedRule;
	int lookaheadResult;
	int rule;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p1, "stateTable"    # [S
	if ( !(this->fText) )  
		goto label_cond_6;
	if ( stateTable )     
		goto label_cond_8;
label_cond_6:
	return 0x0;
	// 1892    .line 1395
label_cond_8:
	category = 0x0;
	//    .local v1, "category":I
	result = 0x0;
	//    .local v7, "result":I
	0x0;
	//    .local v3, "initialPosition":I
	this->fLookAheadMatches->reset();
	this->fLastStatusIndexValid = 0x0;
	this->fLastRuleStatusIndex = 0x0;
	initialPosition = this->fText->getIndex();
	result = initialPosition;
	c = android::icu::impl::CharacterIteration::previous32(this->fText);
	//    .local v0, "c":I
	state = 0x1;
	//    .local v10, "state":I
	//    .local v8, "row":I
	category = 0x3;
	mode = 0x1;
	//    .local v5, "mode":I
	if ( !(( this->fRData->getStateTableFlags(stateTable) & 0x2)) )  
		goto label_cond_38;
	category = 0x2;
	mode = 0x0;
label_cond_38:
	if ( !(android::icu::text::RuleBasedBreakIterator::TRACE) )  
		goto label_cond_44;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Handle Prev   pos   char  state category ")));
label_cond_44:
label_goto_44:
	if ( c != 0x7fffffff )
		goto label_cond_99;
	if ( mode == 0x2 )
		goto label_cond_55;
	if ( this->fRData->fHeader->fVersion != 0x1 )
		goto label_cond_97;
label_cond_55:
	if ( result != initialPosition )
		goto label_cond_61;
	this->fText->setIndex(initialPosition);
	android::icu::impl::CharacterIteration::previous32(this->fText);
label_cond_61:
label_goto_61:
	if ( result != initialPosition )
		goto label_cond_74;
	this->fText->setIndex(initialPosition);
	android::icu::impl::CharacterIteration::previous32(this->fText);
	result = this->fText->getIndex();
label_cond_74:
	this->fText->setIndex(result);
	if ( !(android::icu::text::RuleBasedBreakIterator::TRACE) )  
		goto label_cond_96;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Result = ")))->append(result)->toString());
label_cond_96:
	return result;
	// 2085    .line 1447
label_cond_97:
	mode = 0x2;
	category = 0x1;
label_cond_99:
	if ( mode != 0x1 )
		goto label_cond_b1;
	category = (short)(this->fRData->fTrie->getCodePointValue(c));
	if ( !(( category & 0x4000)) )  
		goto label_cond_b1;
	this->fDictionaryCharCount = ( this->fDictionaryCharCount + 0x1);
	category = ( category & -0x4001);
label_cond_b1:
	if ( !(android::icu::text::RuleBasedBreakIterator::TRACE) )  
		goto label_cond_12e;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->print(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("             ")))->append(this->fText->getIndex())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   ")))->toString());
	if ( 0x20 >  c )
		goto label_cond_157;
	if ( c >= 0x7f )
		goto label_cond_157;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->print(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")))->append(c)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")))->toString());
label_goto_103:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(state)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")))->append(category)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->toString());
label_cond_12e:
	state = stateTable[(( row + 0x4) +  category)];
	row = this->fRData->getRowIndex(state);
	if ( stateTable[( row + 0x0)] != -0x1 )
		goto label_cond_146;
	result = this->fText->getIndex();
label_cond_146:
	completedRule = stateTable[( row + 0x0)];
	//    .local v2, "completedRule":I
	if ( completedRule <= 0 )
		goto label_cond_17c;
	lookaheadResult = this->fLookAheadMatches->getPosition(completedRule);
	//    .local v4, "lookaheadResult":I
	if ( lookaheadResult < 0 ) 
		goto label_cond_17c;
	result = lookaheadResult;
	goto label_goto_61;
	// 2301    .line 1475
	// 2302    .end local v2    # "completedRule":I
	// 2303    .end local v4    # "lookaheadResult":I
label_cond_157:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->print(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(java::lang::Integer::toHexString(c))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->toString());
	goto label_goto_103;
	// 2339    .line 1501
	// 2340    .restart local v2    # "completedRule":I
label_cond_17c:
	rule = stateTable[( row + 0x1)];
	//    .local v9, "rule":I
	if ( !(rule) )  
		goto label_cond_18d;
	//    .local v6, "pos":I
	this->fLookAheadMatches->setPosition(rule, this->fText->getIndex());
	//    .end local v6    # "pos":I
label_cond_18d:
	if ( !(state) )  
		goto label_cond_61;
	if ( mode != 0x1 )
		goto label_cond_19a;
	c = android::icu::impl::CharacterIteration::previous32(this->fText);
	goto label_goto_44;
	// 2382    .line 1518
label_cond_19a:
	if ( mode )     
		goto label_cond_44;
	mode = 0x1;
	goto label_goto_44;

}
// .method private makeRuleStatusValid()V
void android::icu::text::RuleBasedBreakIterator::makeRuleStatusValid()
{
	
	bool cVar0;
	int cVar3;
	int curr;
	bool cVar2;
	bool cVar3;
	int pa;
	bool cVar4;
	
	cVar0 = 0x1;
	cVar3 = 0x0;
	if ( this->fLastStatusIndexValid )     
		goto label_cond_32;
	curr = this->current();
	//    .local v0, "curr":I
	if ( curr == -0x1 )
		goto label_cond_15;
	if ( curr != this->fText->getBeginIndex() )
		goto label_cond_33;
label_cond_15:
	this->fLastRuleStatusIndex = cVar3;
	this->fLastStatusIndexValid = cVar0;
label_goto_19:
	if ( !(this->fLastStatusIndexValid) )  
		goto label_cond_56;
	cVar2 = cVar0;
label_goto_1e:
	android::icu::impl::Assert::assrt(cVar2);
	if ( this->fLastRuleStatusIndex < 0 ) 
		goto label_cond_2f;
	if ( this->fLastRuleStatusIndex >= this->fRData->fStatusTable->size() )
		goto label_cond_2f;
	cVar3 = cVar0;
label_cond_2f:
	android::icu::impl::Assert::assrt(cVar3);
	//    .end local v0    # "curr":I
label_cond_32:
	return;
	// 2467    .line 955
	// 2468    .restart local v0    # "curr":I
label_cond_33:
	pa = this->fText->getIndex();
	//    .local v1, "pa":I
	this->first();
	//    .local v2, "pb":I
label_goto_40:
	if ( this->fText->getIndex() >= pa )
		goto label_cond_4d;
	this->next();
	goto label_goto_40;
	// 2503    .line 961
label_cond_4d:
	if ( pa != this->current() )
		goto label_cond_54;
	cVar4 = cVar0;
label_goto_50:
	android::icu::impl::Assert::assrt(cVar4);
	goto label_goto_19;
label_cond_54:
	cVar4 = cVar3;
	goto label_goto_50;
	// 2519    .end local v1    # "pa":I
	// 2520    .end local v2    # "pb":I
label_cond_56:
	cVar2 = cVar3;
	goto label_goto_1e;

}
// .method private reset()V
void android::icu::text::RuleBasedBreakIterator::reset()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->fCachedBreakPositions = 0x0;
	this->fDictionaryCharCount = cVar0;
	this->fPositionInCache = cVar0;
	return;

}
// .method private rulesFollowing(I)I
int android::icu::text::RuleBasedBreakIterator::rulesFollowing(int offset)
{
	
	int result;
	int oldresult;
	
	//    .param p1, "offset"    # I
	this->fLastRuleStatusIndex = 0x0;
	this->fLastStatusIndexValid = 0x1;
	if ( !(this->fText) )  
		goto label_cond_12;
	if ( offset <  this->fText->getEndIndex() )
		goto label_cond_1a;
label_cond_12:
	this->last();
	return this->next();
	// 2588    .line 722
label_cond_1a:
	if ( offset >= this->fText->getBeginIndex() )
		goto label_cond_27;
	return this->first();
	// 2605    .line 730
label_cond_27:
	result = 0x0;
	//    .local v1, "result":I
	if ( !(this->fRData->fSRTable) )  
		goto label_cond_4b;
	this->fText->setIndex(offset);
	android::icu::impl::CharacterIteration::next32(this->fText);
	this->handlePrevious(this->fRData->fSRTable);
	result = this->next();
label_goto_43:
	if ( result >  offset )
		goto label_cond_4a;
	result = this->next();
	goto label_goto_43;
	// 2650    .line 746
label_cond_4a:
	return result;
	// 2654    .line 748
label_cond_4b:
	if ( !(this->fRData->fSFTable) )  
		goto label_cond_7d;
	this->fText->setIndex(offset);
	android::icu::impl::CharacterIteration::previous32(this->fText);
	this->handleNext(this->fRData->fSFTable);
	oldresult = this->previous();
	//    .local v0, "oldresult":I
label_goto_66:
	if ( oldresult <= offset )
		goto label_cond_71;
	result = this->previous();
	if ( result >  offset )
		goto label_cond_6f;
	return oldresult;
	// 2700    .line 764
label_cond_6f:
	oldresult = result;
	goto label_goto_66;
	// 2706    .line 766
label_cond_71:
	result = this->next();
	if ( result >  offset )
		goto label_cond_7c;
	return this->next();
	// 2722    .line 770
label_cond_7c:
	return result;
	// 2726    .line 781
	// 2727    .end local v0    # "oldresult":I
label_cond_7d:
	this->fText->setIndex(offset);
	if ( offset != this->fText->getBeginIndex() )
		goto label_cond_8f;
	return this->next();
	// 2749    .line 785
label_cond_8f:
	result = this->previous();
label_goto_93:
	if ( result == -0x1 )
		goto label_cond_9d;
	if ( result >  offset )
		goto label_cond_9d;
	result = this->next();
	goto label_goto_93;
	// 2770    .line 791
label_cond_9d:
	return result;

}
// .method private rulesPreceding(I)I
int android::icu::text::RuleBasedBreakIterator::rulesPreceding(int offset)
{
	
	int result;
	int oldresult;
	
	//    .param p1, "offset"    # I
	if ( !(this->fText) )  
		goto label_cond_c;
	if ( offset <= this->fText->getEndIndex() )
		goto label_cond_11;
label_cond_c:
	return this->last();
	// 2801    .line 836
label_cond_11:
	if ( offset >= this->fText->getBeginIndex() )
		goto label_cond_1e;
	return this->first();
	// 2818    .line 845
label_cond_1e:
	if ( !(this->fRData->fSFTable) )  
		goto label_cond_41;
	this->fText->setIndex(offset);
	android::icu::impl::CharacterIteration::previous32(this->fText);
	this->handleNext(this->fRData->fSFTable);
	result = this->previous();
	//    .local v1, "result":I
label_goto_39:
	if ( result <  offset )
		goto label_cond_40;
	result = this->previous();
	goto label_goto_39;
	// 2860    .line 858
label_cond_40:
	return result;
	// 2864    .line 860
	// 2865    .end local v1    # "result":I
label_cond_41:
	if ( !(this->fRData->fSRTable) )  
		goto label_cond_73;
	this->fText->setIndex(offset);
	android::icu::impl::CharacterIteration::next32(this->fText);
	this->handlePrevious(this->fRData->fSRTable);
	oldresult = this->next();
	//    .local v0, "oldresult":I
label_goto_5c:
	if ( oldresult >= offset )
		goto label_cond_67;
	result = this->next();
	//    .restart local v1    # "result":I
	if ( result <  offset )
		goto label_cond_65;
	return oldresult;
	// 2912    .line 876
label_cond_65:
	oldresult = result;
	goto label_goto_5c;
	// 2918    .line 878
	// 2919    .end local v1    # "result":I
label_cond_67:
	result = this->previous();
	//    .restart local v1    # "result":I
	if ( result <  offset )
		goto label_cond_72;
	return this->previous();
	// 2936    .line 882
label_cond_72:
	return result;
	// 2940    .line 886
	// 2941    .end local v0    # "oldresult":I
	// 2942    .end local v1    # "result":I
label_cond_73:
	this->fText->setIndex(offset);
	return this->previous();

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::RuleBasedBreakIterator::clone()
{
	
	std::shared_ptr<android::icu::text::RuleBasedBreakIterator> result;
	std::shared_ptr<java::text::CharacterIterator> cVar0;
	
	result = this->clone();
	result->checkCast("android::icu::text::RuleBasedBreakIterator");
	//    .local v0, "result":Landroid/icu/text/RuleBasedBreakIterator;
	if ( !(this->fText) )  
		goto label_cond_14;
	cVar0 = this->fText->clone();
	cVar0->checkCast("java::text::CharacterIterator");
	result->fText = cVar0;
label_cond_14:
	return result;

}
// .method public current()I
int android::icu::text::RuleBasedBreakIterator::current()
{
	
	int cVar0;
	
	if ( !(this->fText) )  
		goto label_cond_b;
	cVar0 = this->fText->getIndex();
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = -0x1;
	goto label_goto_a;

}
// .method public dump(Ljava/io/PrintStream;)V
void android::icu::text::RuleBasedBreakIterator::dump(std::shared_ptr<java::io::PrintStream> cVar0)
{
	
	std::shared_ptr<java::io::PrintStream> cVar0;
	
	//    .param p1, "out"    # Ljava/io/PrintStream;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3019    .end annotation
	if ( cVar0 )     
		goto label_cond_4;
	cVar0 = java::lang::System::out;
label_cond_4:
	this->fRData->dump(cVar0);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::RuleBasedBreakIterator::equals(std::shared_ptr<java::lang::Object> that)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::RuleBasedBreakIterator> cVar2;
	std::shared_ptr<android::icu::text::RBBIDataWrapper> other;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "that"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( that )     
		goto label_cond_5;
	return cVar1;
	// 3053    .line 147
label_cond_5:
	if ( this != that )
		goto label_cond_8;
	return cVar0;
	// 3060    .line 151
label_cond_8:
	try {
	//label_try_start_8:
	cVar2 = that;
	cVar2->checkCast("android::icu::text::RuleBasedBreakIterator");
	other = cVar2;
	//    .local v2, "other":Landroid/icu/text/RuleBasedBreakIterator;
	if ( this->fRData == other->fRData )
		goto label_cond_1b;
	if ( !(this->fRData) )  
		goto label_cond_1a;
	if ( other->fRData )     
		goto label_cond_1b;
label_cond_1a:
	return cVar1;
	// 3089    .line 155
label_cond_1b:
	if ( !(this->fRData) )  
		goto label_cond_34;
	if ( !(other->fRData) )  
		goto label_cond_34;
	if ( !(( this->fRData->fRuleSource->equals(other->fRData->fRuleSource) ^ 0x1)) )  
		goto label_cond_34;
	return cVar1;
	// 3120    .line 159
label_cond_34:
	if ( this->fText )     
		goto label_cond_3d;
	if ( other->fText )     
		goto label_cond_3d;
	return cVar0;
	// 3133    .line 162
label_cond_3d:
	if ( !(this->fText) )  
		goto label_cond_45;
	if ( other->fText )     
		goto label_cond_46;
label_cond_45:
	return cVar1;
	// 3147    .line 165
label_cond_46:
	//label_try_end_4d:
	}
	catch (java::lang::ClassCastException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4f;
	}
	//    .catch Ljava/lang/ClassCastException; {:try_start_8 .. :try_end_4d} :catch_4f
	return this->fText->equals(other->fText);
	// 3161    .line 167
	// 3162    .end local v2    # "other":Landroid/icu/text/RuleBasedBreakIterator;
label_catch_4f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/ClassCastException;
	return cVar1;

}
// .method public first()I
int android::icu::text::RuleBasedBreakIterator::first()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->fCachedBreakPositions = 0x0;
	this->fDictionaryCharCount = cVar0;
	this->fPositionInCache = cVar0;
	this->fLastRuleStatusIndex = cVar0;
	this->fLastStatusIndexValid = 0x1;
	if ( this->fText )     
		goto label_cond_13;
	return -0x1;
	// 3206    .line 340
label_cond_13:
	this->fText->first();
	return this->fText->getIndex();

}
// .method public following(I)I
int android::icu::text::RuleBasedBreakIterator::following(int offset)
{
	
	int cVar0;
	std::shared_ptr<java::text::CharacterIterator> text;
	
	//    .param p1, "offset"    # I
	cVar0 = 0x0;
	text = this->getText();
	//    .local v0, "text":Ljava/text/CharacterIterator;
	if ( !(this->fCachedBreakPositions) )  
		goto label_cond_10;
	if ( offset >= this->fCachedBreakPositions[cVar0] )
		goto label_cond_17;
label_cond_10:
	this->fCachedBreakPositions = 0x0;
	return this->rulesFollowing(offset);
	// 3259    .line 694
label_cond_17:
	if ( offset >= this->fCachedBreakPositions[( this->fCachedBreakPositions->size() + -0x1)] )
		goto label_cond_10;
	this->fPositionInCache = cVar0;
label_goto_24:
	if ( this->fPositionInCache >= this->fCachedBreakPositions->size() )
		goto label_cond_3a;
	if ( offset <  this->fCachedBreakPositions[this->fPositionInCache] )
		goto label_cond_3a;
	this->fPositionInCache = ( this->fPositionInCache + 0x1);
	goto label_goto_24;
	// 3304    .line 707
label_cond_3a:
	text->setIndex(this->fCachedBreakPositions[this->fPositionInCache]);
	return text->getIndex();

}
// .method getBreakType()I
int android::icu::text::RuleBasedBreakIterator::getBreakType()
{
	
	return this->fBreakType;

}
// .method public getRuleStatus()I
int android::icu::text::RuleBasedBreakIterator::getRuleStatus()
{
	
	this->makeRuleStatusValid();
	//    .local v0, "idx":I
	//    .local v1, "tagVal":I
	return this->fRData->fStatusTable[(this->fLastRuleStatusIndex + this->fRData->fStatusTable[this->fLastRuleStatusIndex])];

}
// .method public getRuleStatusVec([I)I
int android::icu::text::RuleBasedBreakIterator::getRuleStatusVec(std::shared_ptr<int[]> fillInArray)
{
	
	int numStatusVals;
	int i;
	
	//    .param p1, "fillInArray"    # [I
	this->makeRuleStatusValid();
	numStatusVals = this->fRData->fStatusTable[this->fLastRuleStatusIndex];
	//    .local v1, "numStatusVals":I
	if ( !(fillInArray) )  
		goto label_cond_25;
	//    .local v2, "numToCopy":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_13:
	if ( i >= java::lang::Math::min(numStatusVals, fillInArray->size()) )
		goto label_cond_25;
	fillInArray[i] = this->fRData->fStatusTable[( (this->fLastRuleStatusIndex +  i) + 0x1)];
	i = ( i + 0x1);
	goto label_goto_13;
	// 3421    .line 1037
	// 3422    .end local v0    # "i":I
	// 3423    .end local v2    # "numToCopy":I
label_cond_25:
	return numStatusVals;

}
// .method public getText()Ljava/text/CharacterIterator;
std::shared_ptr<java::text::CharacterIterator> android::icu::text::RuleBasedBreakIterator::getText()
{
	
	return this->fText;

}
// .method public hashCode()I
int android::icu::text::RuleBasedBreakIterator::hashCode()
{
	
	return this->fRData->fRuleSource->hashCode();

}
// .method public isBoundary(I)Z
bool android::icu::text::RuleBasedBreakIterator::isBoundary(int offset)
{
	
	bool cVar0;
	
	//    .param p1, "offset"    # I
	cVar0 = 0x1;
	android::icu::text::RuleBasedBreakIterator::checkOffset(offset, this->fText);
	if ( offset != this->fText->getBeginIndex() )
		goto label_cond_12;
	this->first();
	return cVar0;
	// 3481    .line 917
label_cond_12:
	if ( offset != this->fText->getEndIndex() )
		goto label_cond_1e;
	this->last();
	return cVar0;
	// 3497    .line 929
label_cond_1e:
	this->fText->setIndex(offset);
	android::icu::impl::CharacterIteration::previous32(this->fText);
	//    .local v0, "pos":I
	if ( this->following(this->fText->getIndex()) != offset )
		goto label_cond_36;
	//    .local v1, "result":Z
label_goto_35:
	return result;
	// 3530    .line 932
	// 3531    .end local v1    # "result":Z
label_cond_36:
	//    .restart local v1    # "result":Z
	goto label_goto_35;

}
// .method public last()I
int android::icu::text::RuleBasedBreakIterator::last()
{
	
	int cVar0;
	int pos;
	
	cVar0 = 0x0;
	this->fCachedBreakPositions = 0x0;
	this->fDictionaryCharCount = cVar0;
	this->fPositionInCache = cVar0;
	if ( this->fText )     
		goto label_cond_13;
	this->fLastRuleStatusIndex = cVar0;
	this->fLastStatusIndexValid = 0x1;
	return -0x1;
	// 3574    .line 365
label_cond_13:
	this->fLastStatusIndexValid = cVar0;
	pos = this->fText->getEndIndex();
	//    .local v0, "pos":I
	this->fText->setIndex(pos);
	return pos;

}
// .method public next()I
int android::icu::text::RuleBasedBreakIterator::next()
{
	
	int cVar0;
	int pos;
	int result;
	
	cVar0 = 0x0;
	if ( !(this->fCachedBreakPositions) )  
		goto label_cond_23;
	if ( this->fPositionInCache >= ( this->fCachedBreakPositions->size() + -0x1) )
		goto label_cond_20;
	this->fPositionInCache = ( this->fPositionInCache + 0x1);
	pos = this->fCachedBreakPositions[this->fPositionInCache];
	//    .local v0, "pos":I
	this->fText->setIndex(pos);
	return pos;
	// 3640    .line 410
	// 3641    .end local v0    # "pos":I
label_cond_20:
	this->reset();
label_cond_23:
	//    .local v2, "startPos":I
	this->fDictionaryCharCount = cVar0;
	result = this->handleNext(this->fRData->fFTable);
	//    .local v1, "result":I
	if ( this->fDictionaryCharCount <= 0 )
		goto label_cond_39;
label_cond_39:
	return result;

}
// .method public next(I)I
int android::icu::text::RuleBasedBreakIterator::next(int n)
{
	
	int n;
	
	//    .param p1, "n"    # I
	//    .local v0, "result":I
label_goto_4:
	if ( n <= 0 )
		goto label_cond_d;
	this->next();
	n = ( n + -0x1);
	goto label_goto_4;
	// 3705    .line 387
label_cond_d:
label_goto_d:
	if ( n >= 0 )
		goto label_cond_16;
	this->previous();
	n = ( n + 0x1);
	goto label_goto_d;
	// 3720    .line 391
label_cond_16:
	return this->current();

}
// .method public preceding(I)I
int android::icu::text::RuleBasedBreakIterator::preceding(int offset)
{
	
	int cVar0;
	std::shared_ptr<java::text::CharacterIterator> text;
	
	//    .param p1, "offset"    # I
	cVar0 = 0x0;
	text = this->getText();
	//    .local v0, "text":Ljava/text/CharacterIterator;
	if ( !(this->fCachedBreakPositions) )  
		goto label_cond_10;
	if ( offset >  this->fCachedBreakPositions[cVar0] )
		goto label_cond_17;
label_cond_10:
	this->fCachedBreakPositions = 0x0;
	return this->rulesPreceding(offset);
	// 3762    .line 808
label_cond_17:
	if ( offset >  this->fCachedBreakPositions[( this->fCachedBreakPositions->size() + -0x1)] )
		goto label_cond_10;
	this->fPositionInCache = cVar0;
label_goto_24:
	if ( this->fPositionInCache >= this->fCachedBreakPositions->size() )
		goto label_cond_3a;
	if ( offset <= this->fCachedBreakPositions[this->fPositionInCache] )
		goto label_cond_3a;
	this->fPositionInCache = ( this->fPositionInCache + 0x1);
	goto label_goto_24;
	// 3807    .line 821
label_cond_3a:
	this->fPositionInCache = ( this->fPositionInCache + -0x1);
	text->setIndex(this->fCachedBreakPositions[this->fPositionInCache]);
	return text->getIndex();

}
// .method public previous()I
int android::icu::text::RuleBasedBreakIterator::previous()
{
	
	bool cVar0;
	int cVar1;
	bool cVar2;
	int pos;
	int startPos;
	int result;
	int lastResult;
	
	cVar0 = 0x1;
	cVar1 = -0x1;
	cVar2 = 0x0;
	//    .local v7, "text":Ljava/text/CharacterIterator;
	this->fLastStatusIndexValid = cVar2;
	if ( !(this->fCachedBreakPositions) )  
		goto label_cond_2a;
	if ( this->fPositionInCache <= 0 )
		goto label_cond_27;
	this->fPositionInCache = ( this->fPositionInCache + -0x1);
	if ( this->fPositionInCache > 0 ) 
		goto label_cond_1d;
	this->fLastStatusIndexValid = cVar2;
label_cond_1d:
	pos = this->fCachedBreakPositions[this->fPositionInCache];
	//    .local v3, "pos":I
	this->getText()->setIndex(pos);
	return pos;
	// 3891    .line 610
	// 3892    .end local v3    # "pos":I
label_cond_27:
	this->reset();
label_cond_2a:
	startPos = this->current();
	//    .local v6, "startPos":I
	if ( !(this->fText) )  
		goto label_cond_3a;
	if ( startPos != this->fText->getBeginIndex() )
		goto label_cond_3f;
label_cond_3a:
	this->fLastRuleStatusIndex = cVar2;
	this->fLastStatusIndexValid = cVar0;
	return cVar1;
	// 3926    .line 623
label_cond_3f:
	if ( this->fRData->fSRTable )     
		goto label_cond_4b;
	if ( !(this->fRData->fSFTable) )  
		goto label_cond_5c;
label_cond_4b:
	result = this->handlePrevious(this->fRData->fRTable);
	//    .local v4, "result":I
	if ( this->fDictionaryCharCount <= 0 )
		goto label_cond_5b;
label_cond_5b:
	return result;
	// 3965    .line 638
	// 3966    .end local v4    # "result":I
label_cond_5c:
	//    .local v5, "start":I
	android::icu::impl::CharacterIteration::previous32(this->fText);
	lastResult = this->handlePrevious(this->fRData->fRTable);
	//    .local v1, "lastResult":I
	if ( lastResult != cVar1 )
		goto label_cond_7a;
	lastResult = this->fText->getBeginIndex();
	this->fText->setIndex(lastResult);
label_cond_7a:
	lastResult;
	//    .restart local v4    # "result":I
	//    .local v2, "lastTag":I
	//    .local v0, "breakTagValid":Z
label_goto_7d:
	result = this->next();
	if ( result == cVar1 )
		goto label_cond_85;
	if ( result <  this->current() )
		goto label_cond_8f;
label_cond_85:
	this->fText->setIndex(lastResult);
	this->fLastRuleStatusIndex = 0x0;
	this->fLastStatusIndexValid = 0x0;
	return lastResult;
	// 4042    .line 659
label_cond_8f:
	result;
	this->fLastRuleStatusIndex;
	0x1;
	goto label_goto_7d;

}
// .method setBreakType(I)V
void android::icu::text::RuleBasedBreakIterator::setBreakType(int type)
{
	
	//    .param p1, "type"    # I
	this->fBreakType = type;
	return;

}
// .method public setText(Ljava/text/CharacterIterator;)V
void android::icu::text::RuleBasedBreakIterator::setText(std::shared_ptr<java::text::CharacterIterator> newText)
{
	
	//    .param p1, "newText"    # Ljava/text/CharacterIterator;
	this->fText = newText;
	this->first();
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedBreakIterator::toString()
{
	
	//    .local v0, "retStr":Ljava/lang/String;
	if ( !(this->fRData) )  
		goto label_cond_b;
label_cond_b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));

}


