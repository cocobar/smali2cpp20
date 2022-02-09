// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedCollator.smali
#include "java2ctype.h"
#include "android.icu.impl.ClassLoaderUtil.h"
#include "android.icu.impl.Normalizer2Impl_S_ReorderingBuffer.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.impl.coll.BOCSU.h"
#include "android.icu.impl.coll.CollationCompare.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationFastLatin.h"
#include "android.icu.impl.coll.CollationKeys_S_LevelCallback.h"
#include "android.icu.impl.coll.CollationKeys_S_SortKeyByteSink.h"
#include "android.icu.impl.coll.CollationKeys.h"
#include "android.icu.impl.coll.CollationLoader.h"
#include "android.icu.impl.coll.CollationRoot.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "android.icu.impl.coll.CollationTailoring.h"
#include "android.icu.impl.coll.ContractionsAndExpansions_S_CESink.h"
#include "android.icu.impl.coll.ContractionsAndExpansions.h"
#include "android.icu.impl.coll.FCDUTF16CollationIterator.h"
#include "android.icu.impl.coll.SharedObject_S_Reference.h"
#include "android.icu.impl.coll.SharedObject.h"
#include "android.icu.impl.coll.TailoredSet.h"
#include "android.icu.impl.coll.UTF16CollationIterator.h"
#include "android.icu.text.CollationElementIterator.h"
#include "android.icu.text.CollationKey.h"
#include "android.icu.text.Collator.h"
#include "android.icu.text.RawCollationKey.h"
#include "android.icu.text.RuleBasedCollator_S_CollationBuffer.h"
#include "android.icu.text.RuleBasedCollator_S_CollationKeyByteSink.h"
#include "android.icu.text.RuleBasedCollator_S_FCDUTF16NFDIterator.h"
#include "android.icu.text.RuleBasedCollator_S_NFDIterator.h"
#include "android.icu.text.RuleBasedCollator_S_UTF16NFDIterator.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "android.icu.text.UCharacterIterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.text.UnicodeSetIterator.h"
#include "android.icu.util.ByteArrayWrapper.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.lang.reflect.Constructor.h"
#include "java.lang.reflect.InvocationTargetException.h"
#include "java.lang.reflect.Method.h"
#include "java.text.CharacterIterator.h"
#include "java.util.Arrays.h"
#include "java.util.Map.h"
#include "java.util.concurrent.locks.Lock.h"
#include "java.util.concurrent.locks.ReentrantLock.h"

static android::icu::text::RuleBasedCollator::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::text::RuleBasedCollator::static_cinit()
{
	
	android::icu::text::RuleBasedCollator::_assertionsDisabled = ( android::icu::text::RuleBasedCollator()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>(Landroid/icu/impl/coll/CollationTailoring;Landroid/icu/util/ULocale;)V
android::icu::text::RuleBasedCollator::RuleBasedCollator(std::shared_ptr<android::icu::impl::coll::CollationTailoring> t,std::shared_ptr<android::icu::util::ULocale> vl)
{
	
	//    .param p1, "t"    # Landroid/icu/impl/coll/CollationTailoring;
	//    .param p2, "vl"    # Landroid/icu/util/ULocale;
	// 073    invoke-direct {p0}, Landroid/icu/text/Collator;-><init>()V
	this->data = t->data;
	this->settings = t->settings->clone();
	this->tailoring = t;
	this->validLocale = vl;
	this->actualLocaleIsSameAsValid = 0x0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::RuleBasedCollator::RuleBasedCollator(std::shared_ptr<java::lang::String> rules)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "rules"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 108        value = {
	// 109            Ljava/lang/Exception;
	// 110        }
	// 111    .end annotation
	// 115    invoke-direct {p0}, Landroid/icu/text/Collator;-><init>()V
	if ( rules )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Collation rules can not be null")));
	// throw
	throw cVar0;
	// 129    .line 209
label_cond_e:
	this->validLocale = android::icu::util::ULocale::ROOT;
	this->internalBuildTailoring(rules);
	return;

}
// .method private adoptTailoring(Landroid/icu/impl/coll/CollationTailoring;)V
void android::icu::text::RuleBasedCollator::adoptTailoring(std::shared_ptr<android::icu::impl::coll::CollationTailoring> t)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "t"    # Landroid/icu/impl/coll/CollationTailoring;
	if ( android::icu::text::RuleBasedCollator::_assertionsDisabled )     
		goto label_cond_16;
	if ( this->settings )     
		goto label_cond_c;
	if ( !(this->data) )  
		goto label_cond_12;
label_cond_c:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
label_cond_12:
	if ( this->tailoring )     
		goto label_cond_c;
label_cond_16:
	this->data = t->data;
	this->settings = t->settings->clone();
	this->tailoring = t;
	this->validLocale = t->actualLocale;
	this->actualLocaleIsSameAsValid = 0x0;
	return;

}
// .method private checkNotFrozen()V
void android::icu::text::RuleBasedCollator::checkNotFrozen()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify frozen RuleBasedCollator")));
	// throw
	throw cVar0;
	// 224    .line 348
label_cond_f:
	return;

}
// .method private static final compareNFDIter(Landroid/icu/impl/Normalizer2Impl;Landroid/icu/text/RuleBasedCollator$NFDIterator;Landroid/icu/text/RuleBasedCollator$NFDIterator;)I
int android::icu::text::RuleBasedCollator::compareNFDIter(std::shared_ptr<android::icu::impl::Normalizer2Impl> nfcImpl,std::shared_ptr<android::icu::text::RuleBasedCollator_S_NFDIterator> left,std::shared_ptr<android::icu::text::RuleBasedCollator_S_NFDIterator> right)
{
	
	int cVar0;
	int leftCp;
	int rightCp;
	
	//    .param p0, "nfcImpl"    # Landroid/icu/impl/Normalizer2Impl;
	//    .param p1, "left"    # Landroid/icu/text/RuleBasedCollator$NFDIterator;
	//    .param p2, "right"    # Landroid/icu/text/RuleBasedCollator$NFDIterator;
	cVar0 = 0xfffe;
label_cond_4:
	leftCp = left->nextCodePoint();
	//    .local v0, "leftCp":I
	rightCp = right->nextCodePoint();
	//    .local v1, "rightCp":I
	if ( leftCp != rightCp )
		goto label_cond_11;
	if ( leftCp >= 0 )
		goto label_cond_4;
	return 0x0;
	// 262    .line 1564
label_cond_11:
	if ( leftCp >= 0 )
		goto label_cond_1b;
	leftCp = -0x2;
label_goto_14:
	if ( rightCp >= 0 )
		goto label_cond_24;
	rightCp = -0x2;
label_goto_17:
	if ( leftCp >= rightCp )
		goto label_cond_2d;
	return -0x1;
	// 284    .line 1566
label_cond_1b:
	if ( leftCp != cVar0 )
		goto label_cond_1f;
	leftCp = -0x1;
	goto label_goto_14;
	// 293    .line 1569
label_cond_1f:
	leftCp = left->nextDecomposedCodePoint(nfcImpl, leftCp);
	goto label_goto_14;
	// 301    .line 1573
label_cond_24:
	if ( rightCp != cVar0 )
		goto label_cond_28;
	rightCp = -0x1;
	goto label_goto_17;
	// 310    .line 1576
label_cond_28:
	rightCp = right->nextDecomposedCodePoint(nfcImpl, rightCp);
	goto label_goto_17;
	// 318    .line 1579
label_cond_2d:
	if ( leftCp <= rightCp )
		goto label_cond_4;
	return 0x1;

}
// .method private final getCollationBuffer()Landroid/icu/text/RuleBasedCollator$CollationBuffer;
std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> android::icu::text::RuleBasedCollator::getCollationBuffer()
{
	
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> cVar0;
	
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	this->frozenLock->lock();
label_cond_c:
label_goto_c:
	return this->collationBuffer;
	// 352    .line 1786
label_cond_f:
	if ( this->collationBuffer )     
		goto label_cond_c;
	cVar0 = std::make_shared<android::icu::text::RuleBasedCollator_S_CollationBuffer>(this->data, 0x0);
	this->collationBuffer = cVar0;
	goto label_goto_c;

}
// .method private getCollationKey(Ljava/lang/String;Landroid/icu/text/RuleBasedCollator$CollationBuffer;)Landroid/icu/text/CollationKey;
std::shared_ptr<android::icu::text::CollationKey> android::icu::text::RuleBasedCollator::getCollationKey(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> buffer)
{
	
	std::shared_ptr<android::icu::text::CollationKey> cVar0;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "buffer"    # Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	buffer->rawCollationKey = this->getRawCollationKey(source, buffer->rawCollationKey, buffer);
	cVar0 = std::make_shared<android::icu::text::CollationKey>(source, buffer->rawCollationKey);
	return cVar0;

}
// .method private final getDefaultSettings()Landroid/icu/impl/coll/CollationSettings;
std::shared_ptr<android::icu::impl::coll::CollationSettings> android::icu::text::RuleBasedCollator::getDefaultSettings()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	
	cVar0 = this->tailoring->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	return cVar0;

}
// .method private final getOwnedSettings()Landroid/icu/impl/coll/CollationSettings;
std::shared_ptr<android::icu::impl::coll::CollationSettings> android::icu::text::RuleBasedCollator::getOwnedSettings()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	
	cVar0 = this->settings->copyOnWrite();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	return cVar0;

}
// .method private getRawCollationKey(Ljava/lang/CharSequence;Landroid/icu/text/RawCollationKey;Landroid/icu/text/RuleBasedCollator$CollationBuffer;)Landroid/icu/text/RawCollationKey;
std::shared_ptr<android::icu::text::RawCollationKey> android::icu::text::RuleBasedCollator::getRawCollationKey(std::shared_ptr<java::lang::CharSequence> source,std::shared_ptr<android::icu::text::RawCollationKey> key,std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> buffer)
{
	
	std::shared_ptr<android::icu::text::RawCollationKey> key;
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationKeyByteSink> sink;
	
	//    .param p1, "source"    # Ljava/lang/CharSequence;
	//    .param p2, "key"    # Landroid/icu/text/RawCollationKey;
	//    .param p3, "buffer"    # Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	if ( key )     
		goto label_cond_1a;
	//    .end local p2    # "key":Landroid/icu/text/RawCollationKey;
	key = std::make_shared<android::icu::text::RawCollationKey>(this->simpleKeyLengthEstimate(source));
	//    .restart local p2    # "key":Landroid/icu/text/RawCollationKey;
label_cond_b:
label_goto_b:
	sink = std::make_shared<android::icu::text::RuleBasedCollator_S_CollationKeyByteSink>(key);
	//    .local v0, "sink":Landroid/icu/text/RuleBasedCollator$CollationKeyByteSink;
	this->writeSortKey(source, sink, buffer);
	key->size = sink->NumberOfBytesAppended();
	return key;
	// 471    .line 1115
	// 472    .end local v0    # "sink":Landroid/icu/text/RuleBasedCollator$CollationKeyByteSink;
label_cond_1a:
	if ( key->bytes )     
		goto label_cond_b;
	key->bytes = std::make_shared<std::vector<unsigned char[]>>(this->simpleKeyLengthEstimate(source));
	goto label_goto_b;

}
// .method private final initMaxExpansions()V
void android::icu::text::RuleBasedCollator::initMaxExpansions()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationTailoring> cVar0;
	
	cVar0 = this->tailoring;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	if ( this->tailoring->maxExpansions )     
		goto label_cond_15;
	this->tailoring->maxExpansions = android::icu::text::CollationElementIterator::computeMaxExpansions(this->tailoring->data);
	//label_try_end_15:
	}
	catch (...){
		goto label_catchall_17;
	}
	//    .catchall {:try_start_3 .. :try_end_15} :catchall_17
label_cond_15:
	cVar0->monitor_exit();
	return;
	// 528    .line 254
label_catchall_17:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method private final internalBuildTailoring(Ljava/lang/String;)V
void android::icu::text::RuleBasedCollator::internalBuildTailoring(std::shared_ptr<java::lang::String> rules)
{
	
	std::shared_ptr<java::lang::Exception> cVar4;
	std::shared_ptr<java::lang::Class> builderClass;
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar0;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar1;
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar2;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar3;
	std::shared_ptr<android::icu::impl::coll::CollationTailoring> t;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "rules"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 541        value = {
	// 542            Ljava/lang/Exception;
	// 543        }
	// 544    .end annotation
	//    .local v0, "base":Landroid/icu/impl/coll/CollationTailoring;
	//    .local v3, "classLoader":Ljava/lang/ClassLoader;
	try {
	//label_try_start_c:
	builderClass = android::icu::impl::ClassLoaderUtil::getClassLoader(this->getClass())->loadClass(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.impl.coll.CollationBuilder")));
	//    .local v2, "builderClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x1);
	cVar0[0x0] = android::icu::impl::coll::CollationTailoring();
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar1[0x0] = android::icu::impl::coll::CollationRoot::getRoot({const[class].FS-Param});
	//    .local v1, "builder":Ljava/lang/Object;
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x1);
	cVar2[0x0] = java::lang::String();
	//    .local v5, "parseAndBuild":Ljava/lang/reflect/Method;
	cVar3 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar3[0x0] = rules;
	t = builderClass->getMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("parseAndBuild")), cVar2)->invoke(builderClass->getConstructor(cVar0)->newInstance(cVar1), cVar3);
	t->checkCast("android::icu::impl::coll::CollationTailoring");
	//label_try_end_44:
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4b;
	}
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_c .. :try_end_44} :catch_4b
	//    .local v6, "t":Landroid/icu/impl/coll/CollationTailoring;
	t->actualLocale = 0x0;
	this->adoptTailoring(t);
	return;
	// 647    .line 231
	// 648    .end local v1    # "builder":Ljava/lang/Object;
	// 649    .end local v2    # "builderClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 650    .end local v5    # "parseAndBuild":Ljava/lang/reflect/Method;
	// 651    .end local v6    # "t":Landroid/icu/impl/coll/CollationTailoring;
label_catch_4b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v4, "e":Ljava/lang/reflect/InvocationTargetException;
	tryCatchExcetionList.pop_back();
	cVar4 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	cVar4->checkCast("java::lang::Exception");
	// throw
	throw cVar4;

}
// .method private internalSetVariableTop(J)V
void android::icu::text::RuleBasedCollator::internalSetVariableTop(long long varTop)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	int group;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	long long v;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar3;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	//    .param p1, "varTop"    # J
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !((varTop > cVar0->variableTop)) )  
		goto label_cond_62;
	group = this->data->getGroupForPrimary(varTop);
	//    .local v0, "group":I
	if ( group <  0x1000 )
		goto label_cond_1c;
	if ( 0x1003 >= group )
		goto label_cond_25;
label_cond_1c:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The variable top must be a primary weight in the space/punctuation/symbols/currency symbols range")));
	// throw
	throw cVar1;
	// 713    .line 833
label_cond_25:
	v = this->data->getLastPrimaryForGroup(group);
	//    .local v2, "v":J
	if ( android::icu::text::RuleBasedCollator::_assertionsDisabled )     
		goto label_cond_3f;
	if ( !((v > 0x0)) )  
		goto label_cond_39;
	if ( (v > varTop) >= 0 )
		goto label_cond_3f;
label_cond_39:
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 744    .line 835
label_cond_3f:
	v;
	cVar3 = this->settings->readOnly();
	cVar3->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !((v > cVar3->variableTop)) )  
		goto label_cond_62;
	ownedSettings = this->getOwnedSettings();
	//    .local v1, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setMaxVariable(( group + -0x1000), this->getDefaultSettings()->options);
	ownedSettings->variableTop = v;
	this->setFastLatinOptions(ownedSettings);
	//    .end local v0    # "group":I
	//    .end local v1    # "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	//    .end local v2    # "v":J
label_cond_62:
	return;

}
// .method private final releaseCollationBuffer(Landroid/icu/text/RuleBasedCollator$CollationBuffer;)V
void android::icu::text::RuleBasedCollator::releaseCollationBuffer(std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> buffer)
{
	
	//    .param p1, "buffer"    # Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	if ( !(this->isFrozen()) )  
		goto label_cond_b;
	this->frozenLock->unlock();
label_cond_b:
	return;

}
// .method private setFastLatinOptions(Landroid/icu/impl/coll/CollationSettings;)V
void android::icu::text::RuleBasedCollator::setFastLatinOptions(std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings)
{
	
	//    .param p1, "ownedSettings"    # Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->fastLatinOptions = android::icu::impl::coll::CollationFastLatin::getOptions(this->data, ownedSettings, ownedSettings->fastLatinPrimaries);
	return;

}
// .method private simpleKeyLengthEstimate(Ljava/lang/CharSequence;)I
int android::icu::text::RuleBasedCollator::simpleKeyLengthEstimate(std::shared_ptr<java::lang::CharSequence> source)
{
	
	//    .param p1, "source"    # Ljava/lang/CharSequence;
	return ( ( source->length() * 0x2) + 0xa);

}
// .method private writeIdenticalLevel(Ljava/lang/CharSequence;Landroid/icu/text/RuleBasedCollator$CollationKeyByteSink;)V
void android::icu::text::RuleBasedCollator::writeIdenticalLevel(std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationKeyByteSink> sink)
{
	
	int cVar0;
	int nfdQCYesLimit;
	std::shared_ptr<java::lang::StringBuilder> nfd;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "sink"    # Landroid/icu/text/RuleBasedCollator$CollationKeyByteSink;
	cVar0 = 0x0;
	nfdQCYesLimit = this->data->nfcImpl->decompose(s, cVar0, s->length(), 0x0);
	//    .local v2, "nfdQCYesLimit":I
	sink->Append(0x1);
	android::icu::text::RuleBasedCollator_S_CollationKeyByteSink::-get0(sink)->size = sink->NumberOfBytesAppended();
	//    .local v6, "prev":I
	if ( !(nfdQCYesLimit) )  
		goto label_cond_27;
label_cond_27:
	if ( nfdQCYesLimit >= s->length() )
		goto label_cond_4f;
	//    .local v5, "destLengthEstimate":I
	nfd = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "nfd":Ljava/lang/StringBuilder;
	this->data->nfcImpl->decompose(s, nfdQCYesLimit, s->length(), nfd, (s->length() - nfdQCYesLimit));
	android::icu::impl::coll::BOCSU::writeIdenticalLevelRun(android::icu::impl::coll::BOCSU::writeIdenticalLevelRun(0x0, s, cVar0, nfdQCYesLimit, android::icu::text::RuleBasedCollator_S_CollationKeyByteSink::-get0(sink)), nfd, cVar0, nfd->length(), android::icu::text::RuleBasedCollator_S_CollationKeyByteSink::-get0(sink));
	//    .end local v4    # "nfd":Ljava/lang/StringBuilder;
	//    .end local v5    # "destLengthEstimate":I
label_cond_4f:
	sink->setBufferAndAppended(android::icu::text::RuleBasedCollator_S_CollationKeyByteSink::-get0(sink)->bytes, android::icu::text::RuleBasedCollator_S_CollationKeyByteSink::-get0(sink)->size);
	return;

}
// .method private writeSortKey(Ljava/lang/CharSequence;Landroid/icu/text/RuleBasedCollator$CollationKeyByteSink;Landroid/icu/text/RuleBasedCollator$CollationBuffer;)V
void android::icu::text::RuleBasedCollator::writeSortKey(std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationKeyByteSink> sink,std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> buffer)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar2;
	bool numeric;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar3;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar4;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar5;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar6;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "sink"    # Landroid/icu/text/RuleBasedCollator$CollationKeyByteSink;
	//    .param p3, "buffer"    # Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	cVar0 = 0x0;
	cVar1 = 0x1;
	cVar2 = this->settings->readOnly();
	cVar2->checkCast("android::icu::impl::coll::CollationSettings");
	numeric = cVar2->isNumeric();
	//    .local v7, "numeric":Z
	cVar3 = this->settings->readOnly();
	cVar3->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !(cVar3->dontCheckFCD()) )  
		goto label_cond_4d;
	buffer->leftUTF16CollIter->setText(numeric, s, cVar0);
	cVar4 = this->settings->readOnly();
	cVar4->checkCast("android::icu::impl::coll::CollationSettings");
	android::icu::impl::coll::CollationKeys::writeSortKeyUpToQuaternary(buffer->leftUTF16CollIter, this->data->compressibleBytes, cVar4, sink, cVar1, android::icu::impl::coll::CollationKeys::SIMPLE_LEVEL_FALLBACK, cVar1);
label_goto_36:
	cVar5 = this->settings->readOnly();
	cVar5->checkCast("android::icu::impl::coll::CollationSettings");
	if ( cVar5->getStrength() != 0xf )
		goto label_cond_49;
	this->writeIdenticalLevel(s, sink);
label_cond_49:
	sink->Append(cVar0);
	return;
	// 1078    .line 1137
label_cond_4d:
	buffer->leftFCDUTF16Iter->setText(numeric, s, cVar0);
	cVar6 = this->settings->readOnly();
	cVar6->checkCast("android::icu::impl::coll::CollationSettings");
	android::icu::impl::coll::CollationKeys::writeSortKeyUpToQuaternary(buffer->leftFCDUTF16Iter, this->data->compressibleBytes, cVar6, sink, cVar1, android::icu::impl::coll::CollationKeys::SIMPLE_LEVEL_FALLBACK, cVar1);
	goto label_goto_36;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::RuleBasedCollator::clone()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1117        value = {
	// 1118            Ljava/lang/CloneNotSupportedException;
	// 1119        }
	// 1120    .end annotation
	if ( !(this->isFrozen()) )  
		goto label_cond_7;
	return this;
	// 1133    .line 250
label_cond_7:
	return this->cloneAsThawed();

}
// .method public cloneAsThawed()Landroid/icu/text/RuleBasedCollator;
std::shared_ptr<android::icu::text::RuleBasedCollator> android::icu::text::RuleBasedCollator::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::text::RuleBasedCollator> result;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_1:
	result = this->clone();
	result->checkCast("android::icu::text::RuleBasedCollator");
	//    .local v1, "result":Landroid/icu/text/RuleBasedCollator;
	result->settings = this->settings->clone();
	result->collationBuffer = 0x0;
	result->frozenLock = 0x0;
	//label_try_end_15:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_1 .. :try_end_15} :catch_16
	return result;
	// 1193    .line 336
	// 1194    .end local v1    # "result":Landroid/icu/text/RuleBasedCollator;
label_catch_16:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	return 0x0;

}
// .method public compare(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::text::RuleBasedCollator::compare(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "target"    # Ljava/lang/String;
	return this->doCompare(source, target);

}
// .method protected doCompare(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I
int android::icu::text::RuleBasedCollator::doCompare(std::shared_ptr<java::lang::CharSequence> left,std::shared_ptr<java::lang::CharSequence> right)
{
	
	int cVar0;
	int cVar1;
	int equalPrefixLength;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> roSettings;
	bool numeric;
	int fastLatinOptions;
	int result;
	std::shared_ptr<android::icu::impl::coll::UTF16CollationIterator> buffer;
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_UTF16NFDIterator> buffer;
	std::shared_ptr<android::icu::impl::Normalizer2Impl> nfcImpl;
	
	//    .param p1, "left"    # Ljava/lang/CharSequence;
	//    .param p2, "right"    # Ljava/lang/CharSequence;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1222    .end annotation
	cVar0 = 0x17f;
	cVar1 = 0x0;
	if ( left != right )
		goto label_cond_6;
	return cVar1;
	// 1235    .line 1598
label_cond_6:
	equalPrefixLength = 0x0;
	//    .local v5, "equalPrefixLength":I
label_goto_7:
	if ( equalPrefixLength != left->length() )
		goto label_cond_14;
	if ( equalPrefixLength != right->length() )
		goto label_cond_24;
	return cVar1;
	// 1257    .line 1603
label_cond_14:
	if ( equalPrefixLength == right->length() )
		goto label_cond_24;
	if ( left->charAt(equalPrefixLength) == right->charAt(equalPrefixLength) )
		goto label_cond_bc;
label_cond_24:
	roSettings = this->settings->readOnly();
	roSettings->checkCast("android::icu::impl::coll::CollationSettings");
	//    .local v10, "roSettings":Landroid/icu/impl/coll/CollationSettings;
	numeric = roSettings->isNumeric();
	//    .local v8, "numeric":Z
	if ( equalPrefixLength <= 0 )
		goto label_cond_66;
	if ( equalPrefixLength == left->length() )
		goto label_cond_44;
	if ( this->data->isUnsafeBackward(left->charAt(equalPrefixLength), numeric) )     
		goto label_cond_56;
label_cond_44:
	if ( equalPrefixLength == right->length() )
		goto label_cond_66;
	if ( !(this->data->isUnsafeBackward(right->charAt(equalPrefixLength), numeric)) )  
		goto label_cond_66;
label_cond_56:
	equalPrefixLength = ( equalPrefixLength + -0x1);
	if ( equalPrefixLength <= 0 )
		goto label_cond_66;
	if ( this->data->isUnsafeBackward(left->charAt(equalPrefixLength), numeric) )     
		goto label_cond_56;
label_cond_66:
	fastLatinOptions = roSettings->fastLatinOptions;
	//    .local v2, "fastLatinOptions":I
	if ( fastLatinOptions < 0 ) 
		goto label_cond_c0;
	if ( equalPrefixLength == left->length() )
		goto label_cond_76;
	if ( left->charAt(equalPrefixLength) >  cVar0 )
		goto label_cond_c0;
label_cond_76:
	if ( equalPrefixLength == right->length() )
		goto label_cond_82;
	if ( right->charAt(equalPrefixLength) >  cVar0 )
		goto label_cond_c0;
label_cond_82:
	result = android::icu::impl::coll::CollationFastLatin::compareUTF16(this->data->fastLatinTable, roSettings->fastLatinPrimaries, fastLatinOptions, left, right, equalPrefixLength);
	//    .local v9, "result":I
label_goto_8e:
	if ( result != -0x2 )
		goto label_cond_b1;
	//    .local v6, "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	try {
	//label_try_start_92:
	buffer = this->getCollationBuffer();
	//    .local v6, "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	if ( !(roSettings->dontCheckFCD()) )  
		goto label_cond_c2;
	buffer->leftUTF16CollIter->setText(numeric, left, equalPrefixLength);
	buffer->rightUTF16CollIter->setText(numeric, right, equalPrefixLength);
	//label_try_end_ad:
	}
	catch (...){
		goto label_catchall_d5;
	}
	//    .catchall {:try_start_92 .. :try_end_ad} :catchall_d5
	result = android::icu::impl::coll::CollationCompare::compareUpToQuaternary(buffer->leftUTF16CollIter, buffer->rightUTF16CollIter, roSettings);
label_goto_ae:
	this->releaseCollationBuffer(buffer);
	//    .end local v6    # "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
label_cond_b1:
	if ( result )     
		goto label_cond_bb;
	if ( roSettings->getStrength() >= 0xf )
		goto label_cond_da;
label_cond_bb:
	return result;
	// 1482    .line 1607
	// 1483    .end local v2    # "fastLatinOptions":I
	// 1484    .end local v8    # "numeric":Z
	// 1485    .end local v9    # "result":I
	// 1486    .end local v10    # "roSettings":Landroid/icu/impl/coll/CollationSettings;
label_cond_bc:
	equalPrefixLength = ( equalPrefixLength + 0x1);
	goto label_goto_7;
	// 1492    .line 1642
	// 1493    .restart local v2    # "fastLatinOptions":I
	// 1494    .restart local v8    # "numeric":Z
	// 1495    .restart local v10    # "roSettings":Landroid/icu/impl/coll/CollationSettings;
label_cond_c0:
	result = -0x2;
	//    .restart local v9    # "result":I
	goto label_goto_8e;
	// 1502    .line 1655
	// 1503    .restart local v6    # "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
label_cond_c2:
	try {
	//label_try_start_c2:
	buffer->leftFCDUTF16Iter->setText(numeric, left, equalPrefixLength);
	buffer->rightFCDUTF16Iter->setText(numeric, right, equalPrefixLength);
	//label_try_end_d3:
	}
	catch (...){
		goto label_catchall_d5;
	}
	//    .catchall {:try_start_c2 .. :try_end_d3} :catchall_d5
	result = android::icu::impl::coll::CollationCompare::compareUpToQuaternary(buffer->leftFCDUTF16Iter, buffer->rightFCDUTF16Iter, roSettings);
	goto label_goto_ae;
	// 1529    .line 1660
	// 1530    .end local v6    # "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
label_catchall_d5:
	// move-exception
	
	this->releaseCollationBuffer(0x0);
	// throw
	throw;
	// 1540    .line 1668
label_cond_da:
	//    .local v6, "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	try {
	//label_try_start_db:
	buffer = this->getCollationBuffer();
	//    .local v6, "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	nfcImpl = this->data->nfcImpl;
	//    .local v7, "nfcImpl":Landroid/icu/impl/Normalizer2Impl;
	if ( !(roSettings->dontCheckFCD()) )  
		goto label_cond_ff;
	buffer->leftUTF16NFDIter->setText(left, equalPrefixLength);
	buffer->rightUTF16NFDIter->setText(right, equalPrefixLength);
	//label_try_end_fa:
	}
	catch (...){
		goto label_catchall_115;
	}
	//    .catchall {:try_start_db .. :try_end_fa} :catchall_115
	this->releaseCollationBuffer(buffer);
	return android::icu::text::RuleBasedCollator::compareNFDIter(nfcImpl, buffer->leftUTF16NFDIter, buffer->rightUTF16NFDIter);
	// 1592    .line 1678
label_cond_ff:
	try {
	//label_try_start_ff:
	buffer->leftFCDUTF16NFDIter->setText(nfcImpl, left, equalPrefixLength);
	buffer->rightFCDUTF16NFDIter->setText(nfcImpl, right, equalPrefixLength);
	//label_try_end_110:
	}
	catch (...){
		goto label_catchall_115;
	}
	//    .catchall {:try_start_ff .. :try_end_110} :catchall_115
	this->releaseCollationBuffer(buffer);
	return android::icu::text::RuleBasedCollator::compareNFDIter(nfcImpl, buffer->leftFCDUTF16NFDIter, buffer->rightFCDUTF16NFDIter);
	// 1621    .line 1682
	// 1622    .end local v6    # "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	// 1623    .end local v7    # "nfcImpl":Landroid/icu/impl/Normalizer2Impl;
label_catchall_115:
	// move-exception
	
	this->releaseCollationBuffer(0x0);
	// throw
	throw;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::RuleBasedCollator::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::RuleBasedCollator> o;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar2;
	int thisIsRoot;
	int otherIsRoot;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::lang::String> theseRules;
	std::shared_ptr<java::lang::String> otherRules;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return cVar0;
	// 1649    .line 1370
label_cond_5:
	if ( this->equals(obj) )     
		goto label_cond_c;
	return cVar1;
label_cond_c:
	o = obj;
	o->checkCast("android::icu::text::RuleBasedCollator");
	//    .local v0, "o":Landroid/icu/text/RuleBasedCollator;
	cVar2 = this->settings->readOnly();
	cVar2->checkCast("android::icu::impl::coll::CollationSettings");
	if ( cVar2->equals(o->settings->readOnly()) )     
		goto label_cond_24;
	return cVar1;
	// 1690    .line 1375
label_cond_24:
	if ( this->data != o->data )
		goto label_cond_2b;
	return cVar0;
	// 1700    .line 1376
label_cond_2b:
	if ( this->data->base )     
		goto label_cond_47;
	thisIsRoot = 0x1;
	//    .local v5, "thisIsRoot":Z
label_goto_32:
	if ( o->data->base )     
		goto label_cond_49;
	otherIsRoot = 0x1;
	//    .local v1, "otherIsRoot":Z
label_goto_39:
	if ( android::icu::text::RuleBasedCollator::_assertionsDisabled )     
		goto label_cond_4b;
	if ( !(thisIsRoot) )  
		goto label_cond_4b;
	if ( !(otherIsRoot) )  
		goto label_cond_4b;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 1738    .line 1376
	// 1739    .end local v1    # "otherIsRoot":Z
	// 1740    .end local v5    # "thisIsRoot":Z
label_cond_47:
	thisIsRoot = 0x0;
	//    .restart local v5    # "thisIsRoot":Z
	goto label_goto_32;
	// 1747    .line 1377
label_cond_49:
	otherIsRoot = 0x0;
	//    .restart local v1    # "otherIsRoot":Z
	goto label_goto_39;
	// 1754    .line 1379
label_cond_4b:
	if ( thisIsRoot == otherIsRoot )
		goto label_cond_4e;
	return cVar1;
	// 1760    .line 1380
label_cond_4e:
	theseRules = this->tailoring->getRules();
	//    .local v4, "theseRules":Ljava/lang/String;
	otherRules = o->tailoring->getRules();
	//    .local v2, "otherRules":Ljava/lang/String;
	if ( thisIsRoot )     
		goto label_cond_62;
	if ( !(theseRules->length()) )  
		goto label_cond_71;
label_cond_62:
	if ( otherIsRoot )     
		goto label_cond_6a;
	if ( !(otherRules->length()) )  
		goto label_cond_71;
label_cond_6a:
	if ( !(theseRules->equals(otherRules)) )  
		goto label_cond_71;
	return cVar0;
	// 1806    .line 1390
label_cond_71:
	//    .local v6, "thisTailored":Landroid/icu/text/UnicodeSet;
	//    .local v3, "otherTailored":Landroid/icu/text/UnicodeSet;
	if ( this->getTailoredSet()->equals(o->getTailoredSet()) )     
		goto label_cond_80;
	return cVar1;
	// 1828    .line 1398
label_cond_80:
	return cVar0;

}
// .method public freeze()Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::text::RuleBasedCollator::freeze()
{
	
	std::shared_ptr<java::util::concurrent::locks::ReentrantLock> cVar0;
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> cVar1;
	
	if ( this->isFrozen() )     
		goto label_cond_1b;
	cVar0 = std::make_shared<java::util::concurrent::locks::ReentrantLock>();
	this->frozenLock = cVar0;
	if ( this->collationBuffer )     
		goto label_cond_1b;
	cVar1 = std::make_shared<android::icu::text::RuleBasedCollator_S_CollationBuffer>(this->data, 0x0);
	this->collationBuffer = cVar1;
label_cond_1b:
	return this;

}
// .method public getCollationElementIterator(Landroid/icu/text/UCharacterIterator;)Landroid/icu/text/CollationElementIterator;
std::shared_ptr<android::icu::text::CollationElementIterator> android::icu::text::RuleBasedCollator::getCollationElementIterator(std::shared_ptr<android::icu::text::UCharacterIterator> source)
{
	
	std::shared_ptr<android::icu::text::CollationElementIterator> cVar0;
	
	//    .param p1, "source"    # Landroid/icu/text/UCharacterIterator;
	this->initMaxExpansions();
	cVar0 = std::make_shared<android::icu::text::CollationElementIterator>(source, this);
	return cVar0;

}
// .method public getCollationElementIterator(Ljava/lang/String;)Landroid/icu/text/CollationElementIterator;
std::shared_ptr<android::icu::text::CollationElementIterator> android::icu::text::RuleBasedCollator::getCollationElementIterator(std::shared_ptr<java::lang::String> source)
{
	
	std::shared_ptr<android::icu::text::CollationElementIterator> cVar0;
	
	//    .param p1, "source"    # Ljava/lang/String;
	this->initMaxExpansions();
	cVar0 = std::make_shared<android::icu::text::CollationElementIterator>(source, this);
	return cVar0;

}
// .method public getCollationElementIterator(Ljava/text/CharacterIterator;)Landroid/icu/text/CollationElementIterator;
std::shared_ptr<android::icu::text::CollationElementIterator> android::icu::text::RuleBasedCollator::getCollationElementIterator(std::shared_ptr<java::text::CharacterIterator> source)
{
	
	std::shared_ptr<java::text::CharacterIterator> newsource;
	std::shared_ptr<android::icu::text::CollationElementIterator> cVar0;
	
	//    .param p1, "source"    # Ljava/text/CharacterIterator;
	this->initMaxExpansions();
	newsource = source->clone();
	newsource->checkCast("java::text::CharacterIterator");
	//    .local v0, "newsource":Ljava/text/CharacterIterator;
	cVar0 = std::make_shared<android::icu::text::CollationElementIterator>(newsource, this);
	return cVar0;

}
// .method public getCollationKey(Ljava/lang/String;)Landroid/icu/text/CollationKey;
std::shared_ptr<android::icu::text::CollationKey> android::icu::text::RuleBasedCollator::getCollationKey(std::shared_ptr<java::lang::String> source)
{
	
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> buffer;
	
	//    .param p1, "source"    # Ljava/lang/String;
	if ( source )     
		goto label_cond_4;
	return 0x0;
	// 1941    .line 1034
label_cond_4:
	//    .local v0, "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	try {
	//label_try_start_5:
	buffer = this->getCollationBuffer();
	//    .local v0, "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_5 .. :try_end_c} :catchall_11
	this->releaseCollationBuffer(buffer);
	return this->getCollationKey(source, buffer);
	// 1966    .line 1038
	// 1967    .end local v0    # "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
label_catchall_11:
	// move-exception
	
	this->releaseCollationBuffer(0x0);
	// throw
	throw;

}
// .method public getContractionsAndExpansions(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Z)V
void android::icu::text::RuleBasedCollator::getContractionsAndExpansions(std::shared_ptr<android::icu::text::UnicodeSet> contractions,std::shared_ptr<android::icu::text::UnicodeSet> expansions,bool addPrefixes)
{
	
	std::shared_ptr<android::icu::impl::coll::ContractionsAndExpansions> cVar0;
	
	//    .param p1, "contractions"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "expansions"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "addPrefixes"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1984        value = {
	// 1985            Ljava/lang/Exception;
	// 1986        }
	// 1987    .end annotation
	if ( !(contractions) )  
		goto label_cond_6;
	contractions->clear();
label_cond_6:
	if ( !(expansions) )  
		goto label_cond_b;
	expansions->clear();
label_cond_b:
	cVar0 = std::make_shared<android::icu::impl::coll::ContractionsAndExpansions>(contractions, expansions, 0x0, addPrefixes);
	cVar0->forData(this->data);
	return;

}
// .method public getDecomposition()I
int android::icu::text::RuleBasedCollator::getDecomposition()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	int cVar1;
	
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !(( cVar0->options & 0x1)) )  
		goto label_cond_11;
	cVar1 = 0x11;
label_goto_10:
	return cVar1;
	// 2045    .line 1237
label_cond_11:
	cVar1 = 0x10;
	goto label_goto_10;

}
// .method public getLocale(Landroid/icu/util/ULocale$Type;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::RuleBasedCollator::getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "type"    # Landroid/icu/util/ULocale$Type;
	if ( type != android::icu::util::ULocale::ACTUAL_LOCALE )
		goto label_cond_10;
	if ( !(this->actualLocaleIsSameAsValid) )  
		goto label_cond_b;
	cVar0 = this->validLocale;
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = this->tailoring->actualLocale;
	goto label_goto_a;
	// 2079    .line 1806
label_cond_10:
	if ( type != android::icu::util::ULocale::VALID_LOCALE )
		goto label_cond_17;
	return this->validLocale;
	// 2090    .line 1809
label_cond_17:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unknown ULocale.Type ")))->append(type)->toString());
	// throw
	throw cVar2;

}
// .method public getMaxVariable()I
int android::icu::text::RuleBasedCollator::getMaxVariable()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	return ( cVar0->getMaxVariable() + 0x1000);

}
// .method public getNumericCollation()Z
bool android::icu::text::RuleBasedCollator::getNumericCollation()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	bool cVar1;
	
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !(( cVar0->options & 0x2)) )  
		goto label_cond_11;
	cVar1 = 0x1;
label_goto_10:
	return cVar1;
label_cond_11:
	cVar1 = 0x0;
	goto label_goto_10;

}
// .method public getRawCollationKey(Ljava/lang/String;Landroid/icu/text/RawCollationKey;)Landroid/icu/text/RawCollationKey;
std::shared_ptr<android::icu::text::RawCollationKey> android::icu::text::RuleBasedCollator::getRawCollationKey(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::RawCollationKey> key)
{
	
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> buffer;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "key"    # Landroid/icu/text/RawCollationKey;
	if ( source )     
		goto label_cond_4;
	return 0x0;
	// 2185    .line 1067
label_cond_4:
	//    .local v0, "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	try {
	//label_try_start_5:
	buffer = this->getCollationBuffer();
	//    .local v0, "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_5 .. :try_end_c} :catchall_11
	this->releaseCollationBuffer(buffer);
	return this->getRawCollationKey(source, key, buffer);
	// 2210    .line 1071
	// 2211    .end local v0    # "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
label_catchall_11:
	// move-exception
	
	this->releaseCollationBuffer(0x0);
	// throw
	throw;

}
// .method public getReorderCodes()[I
int android::icu::text::RuleBasedCollator::getReorderCodes()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	std::shared_ptr<int[]> cVar1;
	
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	cVar1 = cVar0->reorderCodes->clone();
	cVar1->checkCast("int[]");
	return cVar1;

}
// .method public getRules()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedCollator::getRules()
{
	
	return this->tailoring->getRules();

}
// .method public getRules(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedCollator::getRules(bool fullrules)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "fullrules"    # Z
	if ( fullrules )     
		goto label_cond_9;
	return this->tailoring->getRules();
	// 2277    .line 959
label_cond_9:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(android::icu::impl::coll::CollationLoader::getRootRules({const[class].FS-Param}))->append(this->tailoring->getRules())->toString();

}
// .method public getStrength()I
int android::icu::text::RuleBasedCollator::getStrength()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	return cVar0->getStrength();

}
// .method public getTailoredSet()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::RuleBasedCollator::getTailoredSet()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> tailored;
	std::shared_ptr<android::icu::impl::coll::TailoredSet> cVar0;
	
	tailored = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v0, "tailored":Landroid/icu/text/UnicodeSet;
	if ( !(this->data->base) )  
		goto label_cond_15;
	cVar0 = std::make_shared<android::icu::impl::coll::TailoredSet>(tailored);
	cVar0->forData(this->data);
label_cond_15:
	return tailored;

}
// .method public getUCAVersion()Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::text::RuleBasedCollator::getUCAVersion()
{
	
	std::shared_ptr<android::icu::util::VersionInfo> v;
	
	v = this->getVersion();
	//    .local v0, "v":Landroid/icu/util/VersionInfo;
	return android::icu::util::VersionInfo::getInstance(_shri(v->getMinor(),0x3), ( v->getMinor() & 0x7), _shri(v->getMilli(),0x6), 0x0);

}
// .method public getVariableTop()I
int android::icu::text::RuleBasedCollator::getVariableTop()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	return (int)(cVar0->variableTop);

}
// .method public getVersion()Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::text::RuleBasedCollator::getVersion()
{
	
	int version;
	int rtVersion;
	
	version = this->tailoring->version;
	//    .local v1, "version":I
	rtVersion = android::icu::util::VersionInfo::UCOL_RUNTIME_VERSION->getMajor();
	//    .local v0, "rtVersion":I
	return android::icu::util::VersionInfo::getInstance(((_ushri(version,0x18) +  ( rtVersion << 0x4)) +  _shri(rtVersion,0x4)), ( _shri(version,0x10) & 0xff), ( _shri(version,0x8) & 0xff), ( version & 0xff));

}
// .method public hashCode()I
int android::icu::text::RuleBasedCollator::hashCode()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	int h;
	std::shared_ptr<android::icu::text::UnicodeSetIterator> iter;
	
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	h = cVar0->hashCode();
	//    .local v0, "h":I
	if ( this->data->base )     
		goto label_cond_13;
	return h;
	// 2492    .line 1411
label_cond_13:
	//    .local v2, "set":Landroid/icu/text/UnicodeSet;
	iter = std::make_shared<android::icu::text::UnicodeSetIterator>(this->getTailoredSet());
	//    .local v1, "iter":Landroid/icu/text/UnicodeSetIterator;
label_goto_1c:
	if ( !(iter->next()) )  
		goto label_cond_32;
	if ( iter->codepoint == android::icu::text::UnicodeSetIterator::IS_STRING )
		goto label_cond_32;
	h = (h ^  this->data->getCE32(iter->codepoint));
	goto label_goto_1c;
	// 2532    .line 1416
label_cond_32:
	return h;

}
// .method internalAddContractions(ILandroid/icu/text/UnicodeSet;)V
void android::icu::text::RuleBasedCollator::internalAddContractions(int c,std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<android::icu::impl::coll::ContractionsAndExpansions> cVar1;
	
	//    .param p1, "c"    # I
	//    .param p2, "set"    # Landroid/icu/text/UnicodeSet;
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::impl::coll::ContractionsAndExpansions>(set, cVar0, cVar0, 0x0);
	cVar1->forCodePoint(this->data, c);
	return;

}
// .method public internalGetCEs(Ljava/lang/CharSequence;)[J
long long android::icu::text::RuleBasedCollator::internalGetCEs(std::shared_ptr<java::lang::CharSequence> str)
{
	
	std::shared_ptr<android::icu::impl::coll::UTF16CollationIterator> buffer;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	bool numeric;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar1;
	std::shared_ptr<android::icu::impl::coll::UTF16CollationIterator> iter;
	int length;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared<std::vector<long long[]>> ces;
	std::shared_ptr<android::icu::impl::coll::FCDUTF16CollationIterator> iter;
	
	//    .param p1, "str"    # Ljava/lang/CharSequence;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2564    .end annotation
	//    .local v0, "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	try {
	//label_try_start_1:
	buffer = this->getCollationBuffer();
	//    .local v0, "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	numeric = cVar0->isNumeric();
	//    .local v4, "numeric":Z
	cVar1 = this->settings->readOnly();
	cVar1->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !(cVar1->dontCheckFCD()) )  
		goto label_cond_4b;
	buffer->leftUTF16CollIter->setText(numeric, str, 0x0);
	iter = buffer->leftUTF16CollIter;
	//    .local v2, "iter":Landroid/icu/impl/coll/CollationIterator;
label_goto_27:
	length = ( iter->fetchCEs() + -0x1);
	//    .local v3, "length":I
	if ( android::icu::text::RuleBasedCollator::_assertionsDisabled )     
		goto label_cond_54;
	if ( length < 0 ) 
		goto label_cond_40;
	if ( !((iter->getCE(length) > 0x101000100L)) )  
		goto label_cond_54;
label_cond_40:
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 2650    :try_end_46
	// 2651    .catchall {:try_start_1 .. :try_end_46} :catchall_46
	// 2653    .line 1196
	// 2654    .end local v0    # "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	// 2655    .end local v2    # "iter":Landroid/icu/impl/coll/CollationIterator;
	// 2656    .end local v3    # "length":I
	// 2657    .end local v4    # "numeric":Z
label_catchall_46:
	// move-exception
	
	this->releaseCollationBuffer(0x0);
	// throw
	throw;
	// 2667    .line 1188
	// 2668    .restart local v0    # "buffer":Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	// 2669    .restart local v4    # "numeric":Z
label_cond_4b:
	try {
	//label_try_start_4b:
	buffer->leftFCDUTF16Iter->setText(numeric, str, 0x0);
	iter = buffer->leftFCDUTF16Iter;
	//    .restart local v2    # "iter":Landroid/icu/impl/coll/CollationIterator;
	goto label_goto_27;
	// 2684    .line 1193
	// 2685    .restart local v3    # "length":I
label_cond_54:
	ces = std::make_shared<std::vector<long long[]>>(length);
	//    .local v1, "ces":[J
	java::lang::System::arraycopy(iter->getCEs(), 0x0, ces, 0x0, length);
	//label_try_end_5f:
	}
	catch (...){
		goto label_catchall_46;
	}
	//    .catchall {:try_start_4b .. :try_end_5f} :catchall_46
	this->releaseCollationBuffer(buffer);
	return ces;

}
// .method public isAlternateHandlingShifted()Z
bool android::icu::text::RuleBasedCollator::isAlternateHandlingShifted()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	return cVar0->getAlternateHandling();

}
// .method public isCaseLevel()Z
bool android::icu::text::RuleBasedCollator::isCaseLevel()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	bool cVar1;
	
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !(( cVar0->options & 0x400)) )  
		goto label_cond_11;
	cVar1 = 0x1;
label_goto_10:
	return cVar1;
label_cond_11:
	cVar1 = 0x0;
	goto label_goto_10;

}
// .method public isFrenchCollation()Z
bool android::icu::text::RuleBasedCollator::isFrenchCollation()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	bool cVar1;
	
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !(( cVar0->options & 0x800)) )  
		goto label_cond_11;
	cVar1 = 0x1;
label_goto_10:
	return cVar1;
label_cond_11:
	cVar1 = 0x0;
	goto label_goto_10;

}
// .method public isFrozen()Z
bool android::icu::text::RuleBasedCollator::isFrozen()
{
	
	bool cVar0;
	
	if ( !(this->frozenLock) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public isHiraganaQuaternary()Z
bool android::icu::text::RuleBasedCollator::isHiraganaQuaternary()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2817    .end annotation
	return 0x0;

}
// .method public isLowerCaseFirst()Z
bool android::icu::text::RuleBasedCollator::isLowerCaseFirst()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	bool cVar1;
	
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	if ( cVar0->getCaseFirst() != 0x200 )
		goto label_cond_12;
	cVar1 = 0x1;
label_goto_11:
	return cVar1;
label_cond_12:
	cVar1 = 0x0;
	goto label_goto_11;

}
// .method final isUnsafe(I)Z
bool android::icu::text::RuleBasedCollator::isUnsafe(int c)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	
	//    .param p1, "c"    # I
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	return this->data->isUnsafeBackward(c, cVar0->isNumeric());

}
// .method public isUpperCaseFirst()Z
bool android::icu::text::RuleBasedCollator::isUpperCaseFirst()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	bool cVar1;
	
	cVar0 = this->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	if ( cVar0->getCaseFirst() != 0x300 )
		goto label_cond_12;
	cVar1 = 0x1;
label_goto_11:
	return cVar1;
label_cond_12:
	cVar1 = 0x0;
	goto label_goto_11;

}
// .method public setAlternateHandlingDefault()V
void android::icu::text::RuleBasedCollator::setAlternateHandlingDefault()
{
	
	int defaultSettings;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	this->checkNotFrozen();
	defaultSettings = this->getDefaultSettings();
	//    .local v0, "defaultSettings":Landroid/icu/impl/coll/CollationSettings;
	if ( this->settings->readOnly() != defaultSettings )
		goto label_cond_10;
	return;
	// 2941    .line 470
label_cond_10:
	ownedSettings = this->getOwnedSettings();
	//    .local v1, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setAlternateHandlingDefault(defaultSettings->options);
	this->setFastLatinOptions(ownedSettings);
	return;

}
// .method public setAlternateHandlingShifted(Z)V
void android::icu::text::RuleBasedCollator::setAlternateHandlingShifted(bool shifted)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	//    .param p1, "shifted"    # Z
	this->checkNotFrozen();
	if ( shifted != this->isAlternateHandlingShifted() )
		goto label_cond_a;
	return;
	// 2977    .line 590
label_cond_a:
	ownedSettings = this->getOwnedSettings();
	//    .local v0, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setAlternateHandlingShifted(shifted);
	this->setFastLatinOptions(ownedSettings);
	return;

}
// .method public final setCaseFirstDefault()V
void android::icu::text::RuleBasedCollator::setCaseFirstDefault()
{
	
	int defaultSettings;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	this->checkNotFrozen();
	defaultSettings = this->getDefaultSettings();
	//    .local v0, "defaultSettings":Landroid/icu/impl/coll/CollationSettings;
	if ( this->settings->readOnly() != defaultSettings )
		goto label_cond_10;
	return;
	// 3018    .line 454
label_cond_10:
	ownedSettings = this->getOwnedSettings();
	//    .local v1, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setCaseFirstDefault(defaultSettings->options);
	this->setFastLatinOptions(ownedSettings);
	return;

}
// .method public setCaseLevel(Z)V
void android::icu::text::RuleBasedCollator::setCaseLevel(bool flag)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	//    .param p1, "flag"    # Z
	this->checkNotFrozen();
	if ( flag != this->isCaseLevel() )
		goto label_cond_a;
	return;
	// 3054    .line 615
label_cond_a:
	ownedSettings = this->getOwnedSettings();
	//    .local v0, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setFlag(0x400, flag);
	this->setFastLatinOptions(ownedSettings);
	return;

}
// .method public setCaseLevelDefault()V
void android::icu::text::RuleBasedCollator::setCaseLevelDefault()
{
	
	int defaultSettings;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	this->checkNotFrozen();
	defaultSettings = this->getDefaultSettings();
	//    .local v0, "defaultSettings":Landroid/icu/impl/coll/CollationSettings;
	if ( this->settings->readOnly() != defaultSettings )
		goto label_cond_10;
	return;
	// 3097    .line 486
label_cond_10:
	ownedSettings = this->getOwnedSettings();
	//    .local v1, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setFlagDefault(0x400, defaultSettings->options);
	this->setFastLatinOptions(ownedSettings);
	return;

}
// .method public setDecomposition(I)V
void android::icu::text::RuleBasedCollator::setDecomposition(int decomposition)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	bool flag;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar2;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	//    .param p1, "decomposition"    # I
	cVar0 = 0x1;
	this->checkNotFrozen();
	// switch
	{
	auto item = ( decomposition );
	if (item == 16) goto label_pswitch_10;
	if (item == 17) goto label_pswitch_20;
	}
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Wrong decomposition mode.")));
	// throw
	throw cVar1;
	// 3140    .line 656
label_pswitch_10:
	flag = 0x0;
	//    .local v0, "flag":Z
label_goto_11:
	cVar2 = this->settings->readOnly();
	cVar2->checkCast("android::icu::impl::coll::CollationSettings");
	if ( flag != cVar2->getFlag(cVar0) )
		goto label_cond_22;
	return;
	// 3163    .line 659
	// 3164    .end local v0    # "flag":Z
label_pswitch_20:
	flag = 0x1;
	//    .restart local v0    # "flag":Z
	goto label_goto_11;
	// 3172    .line 665
label_cond_22:
	ownedSettings = this->getOwnedSettings();
	//    .local v1, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setFlag(cVar0, flag);
	this->setFastLatinOptions(ownedSettings);
	return;
	// 3188    .line 654
	// 3189    nop
	// 3191    :pswitch_data_2e
	// 3192    .packed-switch 0x10
	// 3193        :pswitch_10
	// 3194        :pswitch_20
	// 3195    .end packed-switch

}
// .method public setDecompositionDefault()V
void android::icu::text::RuleBasedCollator::setDecompositionDefault()
{
	
	int defaultSettings;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	this->checkNotFrozen();
	defaultSettings = this->getDefaultSettings();
	//    .local v0, "defaultSettings":Landroid/icu/impl/coll/CollationSettings;
	if ( this->settings->readOnly() != defaultSettings )
		goto label_cond_10;
	return;
	// 3222    .line 502
label_cond_10:
	ownedSettings = this->getOwnedSettings();
	//    .local v1, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setFlagDefault(0x1, defaultSettings->options);
	this->setFastLatinOptions(ownedSettings);
	return;

}
// .method public setFrenchCollation(Z)V
void android::icu::text::RuleBasedCollator::setFrenchCollation(bool flag)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	//    .param p1, "flag"    # Z
	this->checkNotFrozen();
	if ( flag != this->isFrenchCollation() )
		goto label_cond_a;
	return;
	// 3260    .line 568
label_cond_a:
	ownedSettings = this->getOwnedSettings();
	//    .local v0, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setFlag(0x800, flag);
	this->setFastLatinOptions(ownedSettings);
	return;

}
// .method public setFrenchCollationDefault()V
void android::icu::text::RuleBasedCollator::setFrenchCollationDefault()
{
	
	int defaultSettings;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	this->checkNotFrozen();
	defaultSettings = this->getDefaultSettings();
	//    .local v0, "defaultSettings":Landroid/icu/impl/coll/CollationSettings;
	if ( this->settings->readOnly() != defaultSettings )
		goto label_cond_10;
	return;
	// 3303    .line 518
label_cond_10:
	ownedSettings = this->getOwnedSettings();
	//    .local v1, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setFlagDefault(0x800, defaultSettings->options);
	this->setFastLatinOptions(ownedSettings);
	return;

}
// .method public setHiraganaQuaternary(Z)V
void android::icu::text::RuleBasedCollator::setHiraganaQuaternary(bool flag)
{
	
	//    .param p1, "flag"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3328    .end annotation
	this->checkNotFrozen();
	return;

}
// .method public setHiraganaQuaternaryDefault()V
void android::icu::text::RuleBasedCollator::setHiraganaQuaternaryDefault()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3341    .end annotation
	this->checkNotFrozen();
	return;

}
// .method setLocale(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)V
void android::icu::text::RuleBasedCollator::setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual)
{
	
	bool cVar0;
	bool cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar7;
	
	//    .param p1, "valid"    # Landroid/icu/util/ULocale;
	//    .param p2, "actual"    # Landroid/icu/util/ULocale;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( android::icu::text::RuleBasedCollator::_assertionsDisabled )     
		goto label_cond_18;
	if ( valid )     
		goto label_cond_14;
	cVar2 = cVar0;
label_goto_9:
	if ( actual )     
		goto label_cond_16;
	cVar3 = cVar0;
label_goto_c:
	if ( cVar2 == cVar3 )
		goto label_cond_18;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
label_cond_14:
	cVar2 = cVar1;
	goto label_goto_9;
label_cond_16:
	cVar3 = cVar1;
	goto label_goto_c;
	// 3394    .line 1825
label_cond_18:
	if ( !(android::icu::impl::Utility::objectEquals(actual, this->tailoring->actualLocale)) )  
		goto label_cond_27;
	this->actualLocaleIsSameAsValid = cVar1;
label_goto_24:
	this->validLocale = valid;
	return;
	// 3416    .line 1828
label_cond_27:
	if ( android::icu::text::RuleBasedCollator::_assertionsDisabled )     
		goto label_cond_37;
	if ( android::icu::impl::Utility::objectEquals(actual, valid) )     
		goto label_cond_37;
	cVar7 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar7;
	// 3434    .line 1829
label_cond_37:
	this->actualLocaleIsSameAsValid = cVar0;
	goto label_goto_24;

}
// .method public setLowerCaseFirst(Z)V
void android::icu::text::RuleBasedCollator::setLowerCaseFirst(bool lowerfirst)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	int cVar0;
	
	//    .param p1, "lowerfirst"    # Z
	this->checkNotFrozen();
	if ( lowerfirst != this->isLowerCaseFirst() )
		goto label_cond_a;
	return;
	// 3458    .line 436
label_cond_a:
	ownedSettings = this->getOwnedSettings();
	//    .local v0, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	if ( !(lowerfirst) )  
		goto label_cond_19;
	cVar0 = 0x200;
label_goto_12:
	ownedSettings->setCaseFirst(cVar0);
	this->setFastLatinOptions(ownedSettings);
	return;
	// 3479    .line 437
label_cond_19:
	cVar0 = 0x0;
	goto label_goto_12;

}
// .method public setMaxVariable(I)Landroid/icu/text/RuleBasedCollator;
std::shared_ptr<android::icu::text::RuleBasedCollator> android::icu::text::RuleBasedCollator::setMaxVariable(int cVar4)
{
	
	int cVar0;
	int value;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar1;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> defaultSettings;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	int cVar4;
	long long varTop;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "group"    # I
	cVar0 = -0x1;
	if ( cVar4 != cVar0 )
		goto label_cond_15;
	value = -0x1;
	//    .local v3, "value":I
label_goto_6:
	cVar1 = this->settings->readOnly();
	cVar1->checkCast("android::icu::impl::coll::CollationSettings");
	//    .local v1, "oldValue":I
	if ( value != cVar1->getMaxVariable() )
		goto label_cond_38;
	return this;
	// 3535    .line 714
	// 3536    .end local v1    # "oldValue":I
	// 3537    .end local v3    # "value":I
label_cond_15:
	if ( 0x1000 >  cVar4 )
		goto label_cond_1e;
	if ( cVar4 >  0x1003 )
		goto label_cond_1e;
	value = ( cVar4 + -0x1000);
	//    .restart local v3    # "value":I
	goto label_goto_6;
	// 3552    .line 717
	// 3553    .end local v3    # "value":I
label_cond_1e:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("illegal max variable group ")))->append(cVar4)->toString());
	// throw
	throw cVar2;
	// 3579    .line 723
	// 3580    .restart local v1    # "oldValue":I
	// 3581    .restart local v3    # "value":I
label_cond_38:
	defaultSettings = this->getDefaultSettings();
	//    .local v0, "defaultSettings":Landroid/icu/impl/coll/CollationSettings;
	if ( this->settings->readOnly() != defaultSettings )
		goto label_cond_47;
	if ( value >= 0 )
		goto label_cond_47;
	return this;
	// 3603    .line 729
label_cond_47:
	ownedSettings = this->getOwnedSettings();
	//    .local v2, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	if ( cVar4 != cVar0 )
		goto label_cond_53;
	cVar4 = ( defaultSettings->getMaxVariable() + 0x1000);
label_cond_53:
	varTop = this->data->getLastPrimaryForGroup(cVar4);
	//    .local v4, "varTop":J
	if ( android::icu::text::RuleBasedCollator::_assertionsDisabled )     
		goto label_cond_69;
	if ( (varTop > 0x0) )     
		goto label_cond_69;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 3646    .line 736
label_cond_69:
	ownedSettings->setMaxVariable(value, defaultSettings->options);
	ownedSettings->variableTop = varTop;
	this->setFastLatinOptions(ownedSettings);
	return this;

}
// .method public setNumericCollation(Z)V
void android::icu::text::RuleBasedCollator::setNumericCollation(bool flag)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	//    .param p1, "flag"    # Z
	this->checkNotFrozen();
	if ( flag != this->getNumericCollation() )
		goto label_cond_a;
	return;
	// 3679    .line 871
label_cond_a:
	ownedSettings = this->getOwnedSettings();
	//    .local v0, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setFlag(0x2, flag);
	this->setFastLatinOptions(ownedSettings);
	return;

}
// .method public setNumericCollationDefault()V
void android::icu::text::RuleBasedCollator::setNumericCollationDefault()
{
	
	int defaultSettings;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	this->checkNotFrozen();
	defaultSettings = this->getDefaultSettings();
	//    .local v0, "defaultSettings":Landroid/icu/impl/coll/CollationSettings;
	if ( this->settings->readOnly() != defaultSettings )
		goto label_cond_10;
	return;
	// 3722    .line 549
label_cond_10:
	ownedSettings = this->getOwnedSettings();
	//    .local v1, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setFlagDefault(0x2, defaultSettings->options);
	this->setFastLatinOptions(ownedSettings);
	return;

}
// .method public varargs setReorderCodes([I)V
void android::icu::text::RuleBasedCollator::setReorderCodes(std::shared_ptr<int[]> order)
{
	
	int cVar0;
	int cVar1;
	int length;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar2;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> defaultSettings;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	std::shared_ptr<int[]> cVar4;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar3;
	
	//    .param p1, "order"    # [I
	cVar0 = 0x1;
	cVar1 = 0x0;
	this->checkNotFrozen();
	if ( !(order) )  
		goto label_cond_21;
	length = order->size();
	//    .local v1, "length":I
label_goto_8:
	if ( length != cVar0 )
		goto label_cond_11;
	if ( order[cVar1] != 0x67 )
		goto label_cond_11;
	length = 0x0;
label_cond_11:
	if ( length )     
		goto label_cond_23;
	cVar2 = this->settings->readOnly();
	cVar2->checkCast("android::icu::impl::coll::CollationSettings");
	if ( cVar2->reorderCodes->size() )     
		goto label_cond_33;
label_cond_20:
	return;
	// 3797    .line 890
	// 3798    .end local v1    # "length":I
label_cond_21:
	length = 0x0;
	//    .restart local v1    # "length":I
	goto label_goto_8;
	// 3805    .line 896
label_cond_23:
	cVar3 = this->settings->readOnly();
	cVar3->checkCast("android::icu::impl::coll::CollationSettings");
	if ( java::util::Arrays::equals(order, cVar3->reorderCodes) )     
		goto label_cond_20;
label_cond_33:
	defaultSettings = this->getDefaultSettings();
	//    .local v0, "defaultSettings":Landroid/icu/impl/coll/CollationSettings;
	if ( length != cVar0 )
		goto label_cond_51;
	if ( order[cVar1] != -0x1 )
		goto label_cond_51;
	if ( this->settings->readOnly() == defaultSettings )
		goto label_cond_50;
	ownedSettings = this->getOwnedSettings();
	//    .local v2, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->copyReorderingFrom(defaultSettings);
	this->setFastLatinOptions(ownedSettings);
	//    .end local v2    # "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
label_cond_50:
	return;
	// 3866    .line 908
label_cond_51:
	ownedSettings = this->getOwnedSettings();
	//    .restart local v2    # "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	if ( length )     
		goto label_cond_5e;
	ownedSettings->resetReordering();
label_goto_5a:
	this->setFastLatinOptions(ownedSettings);
	return;
	// 3886    .line 912
label_cond_5e:
	cVar4 = order->clone();
	cVar4->checkCast("int[]");
	ownedSettings->setReordering(this->data, cVar4);
	goto label_goto_5a;

}
// .method public setStrength(I)V
void android::icu::text::RuleBasedCollator::setStrength(int newStrength)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	//    .param p1, "newStrength"    # I
	this->checkNotFrozen();
	if ( newStrength != this->getStrength() )
		goto label_cond_a;
	return;
	// 3918    .line 692
label_cond_a:
	ownedSettings = this->getOwnedSettings();
	//    .local v0, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setStrength(newStrength);
	this->setFastLatinOptions(ownedSettings);
	return;

}
// .method public setStrengthDefault()V
void android::icu::text::RuleBasedCollator::setStrengthDefault()
{
	
	int defaultSettings;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	this->checkNotFrozen();
	defaultSettings = this->getDefaultSettings();
	//    .local v0, "defaultSettings":Landroid/icu/impl/coll/CollationSettings;
	if ( this->settings->readOnly() != defaultSettings )
		goto label_cond_10;
	return;
	// 3959    .line 534
label_cond_10:
	ownedSettings = this->getOwnedSettings();
	//    .local v1, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	ownedSettings->setStrengthDefault(defaultSettings->options);
	this->setFastLatinOptions(ownedSettings);
	return;

}
// .method public setUpperCaseFirst(Z)V
void android::icu::text::RuleBasedCollator::setUpperCaseFirst(bool upperfirst)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	int cVar0;
	
	//    .param p1, "upperfirst"    # Z
	this->checkNotFrozen();
	if ( upperfirst != this->isUpperCaseFirst() )
		goto label_cond_a;
	return;
	// 3995    .line 415
label_cond_a:
	ownedSettings = this->getOwnedSettings();
	//    .local v0, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	if ( !(upperfirst) )  
		goto label_cond_19;
	cVar0 = 0x300;
label_goto_12:
	ownedSettings->setCaseFirst(cVar0);
	this->setFastLatinOptions(ownedSettings);
	return;
	// 4016    .line 416
label_cond_19:
	cVar0 = 0x0;
	goto label_goto_12;

}
// .method public setVariableTop(Ljava/lang/String;)I
int android::icu::text::RuleBasedCollator::setVariableTop(std::shared_ptr<java::lang::String> varTop)
{
	
	long long cVar0;
	int cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar3;
	bool numeric;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar4;
	std::shared_ptr<android::icu::impl::coll::UTF16CollationIterator> ci;
	auto ce1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar6;
	std::shared_ptr<android::icu::impl::coll::FCDUTF16CollationIterator> ci;
	
	//    .param p1, "varTop"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4027    .end annotation
	cVar0 = 0x101000100L;
	cVar1 = 0x0;
	this->checkNotFrozen();
	if ( !(varTop) )  
		goto label_cond_11;
	if ( varTop->length() )     
		goto label_cond_1a;
label_cond_11:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Variable top argument string can not be null or zero in length.")));
	// throw
	throw cVar2;
	// 4056    .line 785
label_cond_1a:
	cVar3 = this->settings->readOnly();
	cVar3->checkCast("android::icu::impl::coll::CollationSettings");
	numeric = cVar3->isNumeric();
	//    .local v6, "numeric":Z
	cVar4 = this->settings->readOnly();
	cVar4->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !(cVar4->dontCheckFCD()) )  
		goto label_cond_54;
	ci = std::make_shared<android::icu::impl::coll::UTF16CollationIterator>(this->data, numeric, varTop, cVar1);
	//    .local v5, "ci":Landroid/icu/impl/coll/UTF16CollationIterator;
	ce1 = ci->nextCE();
	//    .local v0, "ce1":J
	//    .end local v5    # "ci":Landroid/icu/impl/coll/UTF16CollationIterator;
	//    .local v2, "ce2":J
label_goto_43:
	if ( !((ce1 > cVar0)) )  
		goto label_cond_4b;
	if ( !((ci->nextCE() > cVar0)) )  
		goto label_cond_64;
label_cond_4b:
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Variable top argument string must map to exactly one collation element")));
	// throw
	throw cVar5;
	// 4127    .line 792
	// 4128    .end local v0    # "ce1":J
	// 4129    .end local v2    # "ce2":J
label_cond_54:
	ci = std::make_shared<android::icu::impl::coll::FCDUTF16CollationIterator>(this->data, numeric, varTop, cVar1);
	//    .local v4, "ci":Landroid/icu/impl/coll/FCDUTF16CollationIterator;
	//    .restart local v0    # "ce1":J
	ci->nextCE();
	//    .restart local v2    # "ce2":J
	goto label_goto_43;
	// 4152    .line 799
	// 4153    .end local v4    # "ci":Landroid/icu/impl/coll/FCDUTF16CollationIterator;
label_cond_64:
	this->internalSetVariableTop(_ushrll(ce1,0x20));
	cVar6 = this->settings->readOnly();
	cVar6->checkCast("android::icu::impl::coll::CollationSettings");
	return (int)(cVar6->variableTop);

}
// .method public setVariableTop(I)V
void android::icu::text::RuleBasedCollator::setVariableTop(int varTop)
{
	
	//    .param p1, "varTop"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4181    .end annotation
	this->checkNotFrozen();
	this->internalSetVariableTop(((long long)(varTop) &  0xffffffffL));
	return;

}


