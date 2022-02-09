// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.Normalizer2Impl_S_Hangul.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.coll.Collation.h"
#include "android.icu.impl.coll.CollationBuilder_S_BundleImporter.h"
#include "android.icu.impl.coll.CollationBuilder_S_CEFinalizer.h"
#include "android.icu.impl.coll.CollationBuilder.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationDataBuilder.h"
#include "android.icu.impl.coll.CollationFastLatin.h"
#include "android.icu.impl.coll.CollationRootElements.h"
#include "android.icu.impl.coll.CollationRuleParser_S_Position.h"
#include "android.icu.impl.coll.CollationRuleParser.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "android.icu.impl.coll.CollationTailoring.h"
#include "android.icu.impl.coll.CollationWeights.h"
#include "android.icu.impl.coll.SharedObject_S_Reference.h"
#include "android.icu.impl.coll.SharedObject.h"
#include "android.icu.impl.coll.UTF16CollationIterator.h"
#include "android.icu.impl.coll.UVector32.h"
#include "android.icu.impl.coll.UVector64.h"
#include "android.icu.text.CanonicalIterator.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.text.UnicodeSetIterator.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"

static android::icu::impl::coll::CollationBuilder::_android_icu_impl_coll_CollationRuleParser_S_PositionSwitchesValues = nullptr;
static android::icu::impl::coll::CollationBuilder::_assertionsDisabled;
static android::icu::impl::coll::CollationBuilder::COMPOSITES;
static android::icu::impl::coll::CollationBuilder::DEBUG = false;
static android::icu::impl::coll::CollationBuilder::HAS_BEFORE2 = 0x40;
static android::icu::impl::coll::CollationBuilder::HAS_BEFORE3 = 0x20;
static android::icu::impl::coll::CollationBuilder::IS_TAILORED = 0x8;
static android::icu::impl::coll::CollationBuilder::MAX_INDEX = 0xfffff;
// .method private static synthetic -getandroid-icu-impl-coll-CollationRuleParser$PositionSwitchesValues()[I
int android::icu::impl::coll::CollationBuilder::_getandroid_icu_impl_coll_CollationRuleParser_S_PositionSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::coll::CollationBuilder::_android_icu_impl_coll_CollationRuleParser_S_PositionSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::coll::CollationBuilder::_android_icu_impl_coll_CollationRuleParser_S_PositionSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::impl::coll::CollationRuleParser_S_Position::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_IMPLICIT->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b2;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_b2
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_PRIMARY_IGNORABLE->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_af;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_af
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_REGULAR->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ac;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_ac
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_SECONDARY_IGNORABLE->ordinal()] = 0x4;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_aa;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_aa
label_goto_32:
	try {
	//label_try_start_32:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_TERTIARY_IGNORABLE->ordinal()] = 0x5;
	//label_try_end_3b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a8;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_32 .. :try_end_3b} :catch_a8
label_goto_3b:
	try {
	//label_try_start_3b:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_TRAILING->ordinal()] = 0x6;
	//label_try_end_44:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a6;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3b .. :try_end_44} :catch_a6
label_goto_44:
	try {
	//label_try_start_44:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::FIRST_VARIABLE->ordinal()] = 0x7;
	//label_try_end_4d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a4;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_44 .. :try_end_4d} :catch_a4
label_goto_4d:
	try {
	//label_try_start_4d:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::LAST_IMPLICIT->ordinal()] = 0x8;
	//label_try_end_57:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a2;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_4d .. :try_end_57} :catch_a2
label_goto_57:
	try {
	//label_try_start_57:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::LAST_PRIMARY_IGNORABLE->ordinal()] = 0x9;
	//label_try_end_61:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a0;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_57 .. :try_end_61} :catch_a0
label_goto_61:
	try {
	//label_try_start_61:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::LAST_REGULAR->ordinal()] = 0xa;
	//label_try_end_6b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9e;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_61 .. :try_end_6b} :catch_9e
label_goto_6b:
	try {
	//label_try_start_6b:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::LAST_SECONDARY_IGNORABLE->ordinal()] = 0xb;
	//label_try_end_75:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_6b .. :try_end_75} :catch_9c
label_goto_75:
	try {
	//label_try_start_75:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::LAST_TERTIARY_IGNORABLE->ordinal()] = 0xc;
	//label_try_end_7f:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_75 .. :try_end_7f} :catch_9a
label_goto_7f:
	try {
	//label_try_start_7f:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::LAST_TRAILING->ordinal()] = 0xd;
	//label_try_end_89:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_98;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_7f .. :try_end_89} :catch_98
label_goto_89:
	try {
	//label_try_start_89:
	cVar0[android::icu::impl::coll::CollationRuleParser_S_Position::LAST_VARIABLE->ordinal()] = 0xe;
	//label_try_end_93:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_96;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_89 .. :try_end_93} :catch_96
label_goto_93:
	android::icu::impl::coll::CollationBuilder::_android_icu_impl_coll_CollationRuleParser_S_PositionSwitchesValues = cVar0;
	return cVar0;
label_catch_96:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_93;
label_catch_98:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_89;
label_catch_9a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_7f;
label_catch_9c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_75;
label_catch_9e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_6b;
label_catch_a0:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_61;
label_catch_a2:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_57;
label_catch_a4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_4d;
label_catch_a6:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_44;
label_catch_a8:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3b;
label_catch_aa:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_ac:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_af:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_b2:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static synthetic -wrap0(I)Z
bool android::icu::impl::coll::CollationBuilder::_wrap0(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return android::icu::impl::coll::CollationBuilder::isTempCE32(ce32);

}
// .method static synthetic -wrap1(J)Z
bool android::icu::impl::coll::CollationBuilder::_wrap1(long long ce)
{
	
	//    .param p0, "ce"    # J
	return android::icu::impl::coll::CollationBuilder::isTempCE(ce);

}
// .method static synthetic -wrap2(I)I
int android::icu::impl::coll::CollationBuilder::_wrap2(int tempCE32)
{
	
	//    .param p0, "tempCE32"    # I
	return android::icu::impl::coll::CollationBuilder::indexFromTempCE32(tempCE32);

}
// .method static synthetic -wrap3(J)I
int android::icu::impl::coll::CollationBuilder::_wrap3(long long tempCE)
{
	
	//    .param p0, "tempCE"    # J
	return android::icu::impl::coll::CollationBuilder::indexFromTempCE(tempCE);

}
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationBuilder::static_cinit()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	android::icu::impl::coll::CollationBuilder::_assertionsDisabled = ( android::icu::impl::coll::CollationBuilder()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[:NFD_QC=N:]")));
	android::icu::impl::coll::CollationBuilder::COMPOSITES = cVar0;
	android::icu::impl::coll::CollationBuilder::COMPOSITES->remove(0xac00, 0xd7a3);
	return;

}
// .method public constructor <init>(Landroid/icu/impl/coll/CollationTailoring;)V
android::icu::impl::coll::CollationBuilder::CollationBuilder(std::shared_ptr<android::icu::impl::coll::CollationTailoring> b)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<android::icu::impl::coll::CollationRootElements> cVar1;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> cVar2;
	std::shared_ptr<android::icu::impl::coll::UVector32> cVar3;
	std::shared_ptr<android::icu::impl::coll::UVector64> cVar4;
	
	//    .param p1, "b"    # Landroid/icu/impl/coll/CollationTailoring;
	// 445    invoke-direct {p0}, Landroid/icu/impl/coll/CollationRuleParser$Sink;-><init>()V
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>();
	this->optimizeSet = cVar0;
	this->ces = std::make_shared<std::vector<long long[]>>(0x1f);
	this->nfd = android::icu::text::Normalizer2::getNFDInstance({const[class].FS-Param});
	this->fcd = android::icu::impl::Norm2AllModes::getFCDNormalizer2({const[class].FS-Param});
	this->nfcImpl = android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->impl;
	this->base = b;
	this->baseData = b->data;
	cVar1 = std::make_shared<android::icu::impl::coll::CollationRootElements>(b->data->rootElements);
	this->rootElements = cVar1;
	this->variableTop = 0x0;
	cVar2 = std::make_shared<android::icu::impl::coll::CollationDataBuilder>();
	this->dataBuilder = cVar2;
	this->fastLatinEnabled = 0x1;
	this->cesLength = 0x0;
	cVar3 = std::make_shared<android::icu::impl::coll::UVector32>();
	this->rootPrimaryIndexes = cVar3;
	cVar4 = std::make_shared<android::icu::impl::coll::UVector64>();
	this->nodes = cVar4;
	this->nfcImpl->ensureCanonIterData();
	this->dataBuilder->initForTailoring(this->baseData);
	return;

}
// .method private addIfDifferent(Ljava/lang/CharSequence;Ljava/lang/CharSequence;[JII)I
int android::icu::impl::coll::CollationBuilder::addIfDifferent(std::shared_ptr<java::lang::CharSequence> prefix,std::shared_ptr<java::lang::CharSequence> str,std::shared_ptr<long long[]> newCEs,int newCEsLength,int cVar0)
{
	
	std::shared<std::vector<long long[]>> oldCEs;
	int cVar0;
	
	//    .param p1, "prefix"    # Ljava/lang/CharSequence;
	//    .param p2, "str"    # Ljava/lang/CharSequence;
	//    .param p3, "newCEs"    # [J
	//    .param p4, "newCEsLength"    # I
	//    .param p5, "ce32"    # I
	oldCEs = std::make_shared<std::vector<long long[]>>(0x1f);
	//    .local v0, "oldCEs":[J
	//    .local v1, "oldCEsLength":I
	if ( android::icu::impl::coll::CollationBuilder::sameCEs(newCEs, newCEsLength, oldCEs, this->dataBuilder->getCEs(prefix, str, oldCEs, 0x0)) )     
		goto label_cond_1f;
	if ( cVar0 != -0x1 )
		goto label_cond_1a;
	cVar0 = this->dataBuilder->encodeCEs(newCEs, newCEsLength);
label_cond_1a:
	this->dataBuilder->addCE32(prefix, str, cVar0);
label_cond_1f:
	return cVar0;

}
// .method private addOnlyClosure(Ljava/lang/CharSequence;Ljava/lang/CharSequence;[JII)I
int android::icu::impl::coll::CollationBuilder::addOnlyClosure(std::shared_ptr<java::lang::CharSequence> nfdPrefix,std::shared_ptr<java::lang::CharSequence> nfdString,std::shared_ptr<long long[]> newCEs,int newCEsLength,int ce32)
{
	
	std::shared_ptr<android::icu::text::CanonicalIterator> stringIter;
	std::shared_ptr<java::lang::CharSequence> str;
	int ce32;
	std::shared_ptr<android::icu::text::CanonicalIterator> prefixIter;
	std::shared_ptr<java::lang::CharSequence> prefix;
	
	//    .param p1, "nfdPrefix"    # Ljava/lang/CharSequence;
	//    .param p2, "nfdString"    # Ljava/lang/CharSequence;
	//    .param p3, "newCEs"    # [J
	//    .param p4, "newCEsLength"    # I
	//    .param p5, "ce32"    # I
	if ( nfdPrefix->length() )     
		goto label_cond_2e;
	stringIter = std::make_shared<android::icu::text::CanonicalIterator>(nfdString->toString());
	//    .local v8, "stringIter":Landroid/icu/text/CanonicalIterator;
	//    .local v1, "prefix":Ljava/lang/String;
label_cond_12:
label_goto_12:
	str = stringIter->next();
	//    .local v2, "str":Ljava/lang/String;
	if ( str )     
		goto label_cond_19;
	//    .end local v2    # "str":Ljava/lang/String;
label_cond_18:
	return ce32;
	// 656    .line 879
	// 657    .restart local v2    # "str":Ljava/lang/String;
label_cond_19:
	if ( this->ignoreString(str) )     
		goto label_cond_12;
	if ( str->contentEquals(nfdString) )     
		goto label_cond_12;
	ce32 = this->addIfDifferent(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), str, newCEs, newCEsLength, ce32);
	goto label_goto_12;
	// 686    .line 883
	// 687    .end local v1    # "prefix":Ljava/lang/String;
	// 688    .end local v2    # "str":Ljava/lang/String;
	// 689    .end local v8    # "stringIter":Landroid/icu/text/CanonicalIterator;
label_cond_2e:
	prefixIter = std::make_shared<android::icu::text::CanonicalIterator>(nfdPrefix->toString());
	//    .local v6, "prefixIter":Landroid/icu/text/CanonicalIterator;
	stringIter = std::make_shared<android::icu::text::CanonicalIterator>(nfdString->toString());
	//    .restart local v8    # "stringIter":Landroid/icu/text/CanonicalIterator;
label_cond_40:
label_goto_40:
	prefix = prefixIter->next();
	//    .restart local v1    # "prefix":Ljava/lang/String;
	if ( !(prefix) )  
		goto label_cond_18;
	if ( this->ignorePrefix(prefix) )     
		goto label_cond_40;
	//    .local v7, "samePrefix":Z
label_cond_50:
label_goto_50:
	str = stringIter->next();
	//    .restart local v2    # "str":Ljava/lang/String;
	if ( str )     
		goto label_cond_5a;
	stringIter->reset();
	goto label_goto_40;
	// 750    .line 893
label_cond_5a:
	if ( this->ignoreString(str) )     
		goto label_cond_50;
	if ( !(prefix->contentEquals(nfdPrefix)) )  
		goto label_cond_68;
	if ( str->contentEquals(nfdString) )     
		goto label_cond_50;
label_cond_68:
	ce32 = this->addIfDifferent(prefix, str, newCEs, newCEsLength, ce32);
	goto label_goto_50;

}
// .method private addTailComposites(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V
void android::icu::impl::coll::CollationBuilder::addTailComposites(std::shared_ptr<java::lang::CharSequence> nfdPrefix,std::shared_ptr<java::lang::CharSequence> nfdString)
{
	
	int indexAfterLastStarter;
	int lastStarter;
	std::shared_ptr<android::icu::text::UnicodeSet> composites;
	std::shared_ptr<java::lang::StringBuilder> newNFDString;
	std::shared_ptr<java::lang::StringBuilder> newString;
	std::shared<std::vector<long long[]>> newCEs;
	std::shared_ptr<android::icu::text::UnicodeSetIterator> iter;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int composite;
	int newCEsLength;
	int ce32;
	
	//    .param p1, "nfdPrefix"    # Ljava/lang/CharSequence;
	//    .param p2, "nfdString"    # Ljava/lang/CharSequence;
	indexAfterLastStarter = nfdString->length();
	//    .local v3, "indexAfterLastStarter":I
label_goto_4:
	if ( indexAfterLastStarter )     
		goto label_cond_7;
	return;
	// 801    .line 908
label_cond_7:
	lastStarter = java::lang::Character::codePointBefore(nfdString, indexAfterLastStarter);
	//    .local v16, "lastStarter":I
	if ( this->nfd->getCombiningClass(lastStarter) )     
		goto label_cond_20;
	if ( !(android::icu::impl::Normalizer2Impl_S_Hangul::isJamoL(lastStarter)) )  
		goto label_cond_26;
	return;
	// 832    .line 910
label_cond_20:
	indexAfterLastStarter = (indexAfterLastStarter -  java::lang::Character::charCount(lastStarter));
	goto label_goto_4;
	// 842    .line 918
label_cond_26:
	composites = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v14, "composites":Landroid/icu/text/UnicodeSet;
	if ( this->nfcImpl->getCanonStartSet(lastStarter, composites) )     
		goto label_cond_38;
	return;
	// 864    .line 921
label_cond_38:
	newNFDString = std::make_shared<java::lang::StringBuilder>();
	//    .local v6, "newNFDString":Ljava/lang/StringBuilder;
	newString = std::make_shared<java::lang::StringBuilder>();
	//    .local v7, "newString":Ljava/lang/StringBuilder;
	newCEs = std::make_shared<std::vector<long long[]>>(0x1f);
	//    .local v11, "newCEs":[J
	iter = std::make_shared<android::icu::text::UnicodeSetIterator>(composites);
	//    .local v15, "iter":Landroid/icu/text/UnicodeSetIterator;
label_cond_4b:
label_goto_4b:
	if ( !(iter->next()) )  
		goto label_cond_9a;
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_61;
	if ( iter->codepoint != android::icu::text::UnicodeSetIterator::IS_STRING )
		goto label_cond_61;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 914    .line 926
label_cond_61:
	composite = iter->codepoint;
	//    .local v4, "composite":I
	//    .local v5, "decomp":Ljava/lang/String;
	if ( !(this->mergeCompositeIntoString(nfdString, indexAfterLastStarter, composite, this->nfd->getDecomposition(composite), newNFDString, newString)) )  
		goto label_cond_4b;
	newCEsLength = this->dataBuilder->getCEs(nfdPrefix, newNFDString, newCEs, 0x0);
	//    .local v12, "newCEsLength":I
	if ( newCEsLength >  0x1f )
		goto label_cond_4b;
	ce32 = this->addIfDifferent(nfdPrefix, newString, newCEs, newCEsLength, -0x1);
	//    .local v13, "ce32":I
	if ( ce32 == -0x1 )
		goto label_cond_4b;
	this->addOnlyClosure(nfdPrefix, newNFDString, newCEs, newCEsLength, ce32);
	goto label_goto_4b;
	// 990    .line 959
	// 991    .end local v4    # "composite":I
	// 992    .end local v5    # "decomp":Ljava/lang/String;
	// 993    .end local v12    # "newCEsLength":I
	// 994    .end local v13    # "ce32":I
label_cond_9a:
	return;

}
// .method private addWithClosure(Ljava/lang/CharSequence;Ljava/lang/CharSequence;[JII)I
int android::icu::impl::coll::CollationBuilder::addWithClosure(std::shared_ptr<java::lang::CharSequence> nfdPrefix,std::shared_ptr<java::lang::CharSequence> nfdString,std::shared_ptr<long long[]> newCEs,int newCEsLength,int ce32)
{
	
	//    .param p1, "nfdPrefix"    # Ljava/lang/CharSequence;
	//    .param p2, "nfdString"    # Ljava/lang/CharSequence;
	//    .param p3, "newCEs"    # [J
	//    .param p4, "newCEsLength"    # I
	//    .param p5, "ce32"    # I
	this->addTailComposites(nfdPrefix, nfdString);
	return this->addOnlyClosure(nfdPrefix, nfdString, newCEs, newCEsLength, this->addIfDifferent(nfdPrefix, nfdString, newCEs, newCEsLength, ce32));

}
// .method private static final alignWeightRight(I)I
int android::icu::impl::coll::CollationBuilder::alignWeightRight(int w)
{
	
	int w;
	
	//    .param p0, "w"    # I
	if ( !(w) )  
		goto label_cond_9;
label_goto_2:
	if ( ( w & 0xff) )     
		goto label_cond_9;
	w = _ushri(w,0x8);
	goto label_goto_2;
	// 1043    .line 1125
label_cond_9:
	return w;

}
// .method private static final binarySearchForRootPrimaryNode([II[JJ)I
int android::icu::impl::coll::CollationBuilder::binarySearchForRootPrimaryNode(std::shared_ptr<int[]> rootPrimaryIndexes,int length,std::shared_ptr<long long[]> nodes,long long p)
{
	
	int start;
	int limit;
	int i;
	long long nodePrimary;
	
	//    .param p0, "rootPrimaryIndexes"    # [I
	//    .param p1, "length"    # I
	//    .param p2, "nodes"    # [J
	//    .param p3, "p"    # J
	if ( length )     
		goto label_cond_4;
	return -0x1;
	// 1063    .line 592
label_cond_4:
	start = 0x0;
	//    .local v6, "start":I
	limit = length;
	//    .local v1, "limit":I
label_goto_6:
	i = (int)((((long long)(start) +  (long long)(limit)) /  0x2));
	//    .local v0, "i":I
	//    .local v2, "node":J
	nodePrimary = _ushrll(nodes[rootPrimaryIndexes[i]],0x20);
	//    .local v4, "nodePrimary":J
	if ( (p > nodePrimary) )     
		goto label_cond_1a;
	return i;
	// 1107    .line 600
label_cond_1a:
	if ( (p > nodePrimary) >= 0 )
		goto label_cond_24;
	if ( i != start )
		goto label_cond_22;
	return (~start);
	// 1121    .line 604
label_cond_22:
	limit = i;
	goto label_goto_6;
	// 1127    .line 606
label_cond_24:
	if ( i != start )
		goto label_cond_2a;
	return (~( start + 0x1));
	// 1138    .line 609
label_cond_2a:
	start = i;
	goto label_goto_6;

}
// .method private static ceStrength(J)I
int android::icu::impl::coll::CollationBuilder::ceStrength(long long ce)
{
	
	long long cVar0;
	int cVar2;
	
	//    .param p0, "ce"    # J
	cVar0 = 0x0;
	cVar2 = 0x0;
	if ( !(android::icu::impl::coll::CollationBuilder::isTempCE(ce)) )  
		goto label_cond_e;
	cVar2 = android::icu::impl::coll::CollationBuilder::strengthFromTempCE(ce);
label_cond_d:
label_goto_d:
	return cVar2;
	// 1170    .line 1419
label_cond_e:
	if ( ((-0x100000000000000L &  ce) > cVar0) )     
		goto label_cond_d;
	if ( !(((int)(ce) &  -0x1000000)) )  
		goto label_cond_1d;
	cVar2 = 0x1;
	goto label_goto_d;
	// 1193    .line 1421
label_cond_1d:
	if ( !((ce > cVar0)) )  
		goto label_cond_23;
	cVar2 = 0x2;
	goto label_goto_d;
	// 1203    .line 1422
label_cond_23:
	cVar2 = 0xf;
	goto label_goto_d;

}
// .method private static changeNodeNextIndex(JI)J
long long android::icu::impl::coll::CollationBuilder::changeNodeNextIndex(long long node,int next)
{
	
	//    .param p0, "node"    # J
	//    .param p2, "next"    # I
	return ((-0xfffff01 &  node) |  android::icu::impl::coll::CollationBuilder::nodeFromNextIndex(next));

}
// .method private static changeNodePreviousIndex(JI)J
long long android::icu::impl::coll::CollationBuilder::changeNodePreviousIndex(long long node,int previous)
{
	
	//    .param p0, "node"    # J
	//    .param p2, "previous"    # I
	return ((-0xfffff0000001L &  node) |  android::icu::impl::coll::CollationBuilder::nodeFromPreviousIndex(previous));

}
// .method private closeOverComposites()V
void android::icu::impl::coll::CollationBuilder::closeOverComposites()
{
	
	std::shared_ptr<android::icu::text::UnicodeSetIterator> iter;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .local v1, "prefix":Ljava/lang/String;
	iter = std::make_shared<android::icu::text::UnicodeSetIterator>(android::icu::impl::coll::CollationBuilder::COMPOSITES);
	//    .local v6, "iter":Landroid/icu/text/UnicodeSetIterator;
label_cond_a:
label_goto_a:
	if ( !(iter->next()) )  
		goto label_cond_47;
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_20;
	if ( iter->codepoint != android::icu::text::UnicodeSetIterator::IS_STRING )
		goto label_cond_20;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1292    .line 1083
label_cond_20:
	//    .local v7, "nfdString":Ljava/lang/String;
	this->cesLength = this->dataBuilder->getCEs(this->nfd->getDecomposition(iter->codepoint), this->ces, 0x0);
	if ( this->cesLength >  0x1f )
		goto label_cond_a;
	//    .local v2, "composite":Ljava/lang/String;
	this->addIfDifferent(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), iter->getString(), this->ces, this->cesLength, -0x1);
	goto label_goto_a;
	// 1342    .line 1094
	// 1343    .end local v2    # "composite":Ljava/lang/String;
	// 1344    .end local v7    # "nfdString":Ljava/lang/String;
label_cond_47:
	return;

}
// .method private static countTailoredNodes([JII)I
int android::icu::impl::coll::CollationBuilder::countTailoredNodes(std::shared_ptr<long long[]> nodesArray,int i,int strength)
{
	
	int count;
	long long node;
	int i;
	
	//    .param p0, "nodesArray"    # [J
	//    .param p1, "i"    # I
	//    .param p2, "strength"    # I
	count = 0x0;
	//    .local v0, "count":I
label_goto_1:
	if ( i )     
		goto label_cond_4;
label_cond_3:
	return count;
	// 1368    .line 1312
label_cond_4:
	node = nodesArray[i];
	//    .local v2, "node":J
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) <  strength )
		goto label_cond_3;
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) != strength )
		goto label_cond_1a;
	if ( !(android::icu::impl::coll::CollationBuilder::isTailoredNode(node)) )  
		goto label_cond_3;
	count = ( count + 0x1);
label_cond_1a:
	i = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node);
	goto label_goto_1;

}
// .method private equalSubSequences(Ljava/lang/CharSequence;ILjava/lang/CharSequence;I)Z
bool android::icu::impl::coll::CollationBuilder::equalSubSequences(std::shared_ptr<java::lang::CharSequence> left,int leftStart,std::shared_ptr<java::lang::CharSequence> right,int rightStart)
{
	
	bool cVar0;
	int leftLength;
	int rightStart;
	int leftStart;
	
	//    .param p1, "left"    # Ljava/lang/CharSequence;
	//    .param p2, "leftStart"    # I
	//    .param p3, "right"    # Ljava/lang/CharSequence;
	//    .param p4, "rightStart"    # I
	cVar0 = 0x0;
	leftLength = left->length();
	//    .local v0, "leftLength":I
	if ( (leftLength - leftStart) == (right->length() -  rightStart) )
		goto label_cond_f;
	return cVar0;
label_cond_f:
	rightStart = rightStart;
	//    .end local p4    # "rightStart":I
	//    .local v2, "rightStart":I
	leftStart = leftStart;
	//    .end local p2    # "leftStart":I
	//    .local v1, "leftStart":I
	if ( leftStart >= leftLength )
		goto label_cond_22;
	//    .end local v1    # "leftStart":I
	//    .restart local p2    # "leftStart":I
	//    .end local v2    # "rightStart":I
	//    .restart local p4    # "rightStart":I
	if ( left->charAt(leftStart) == right->charAt(rightStart) )
		goto label_cond_f;
	return cVar0;
	// 1469    .line 1057
	// 1470    .end local p2    # "leftStart":I
	// 1471    .end local p4    # "rightStart":I
	// 1472    .restart local v1    # "leftStart":I
	// 1473    .restart local v2    # "rightStart":I
label_cond_22:
	return 0x1;

}
// .method private finalizeCEs()V
void android::icu::impl::coll::CollationBuilder::finalizeCEs()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> newBuilder;
	std::shared_ptr<android::icu::impl::coll::CollationBuilder_S_CEFinalizer> finalizer;
	
	newBuilder = std::make_shared<android::icu::impl::coll::CollationDataBuilder>();
	//    .local v1, "newBuilder":Landroid/icu/impl/coll/CollationDataBuilder;
	newBuilder->initForTailoring(this->baseData);
	finalizer = std::make_shared<android::icu::impl::coll::CollationBuilder_S_CEFinalizer>(this->nodes->getBuffer());
	//    .local v0, "finalizer":Landroid/icu/impl/coll/CollationBuilder$CEFinalizer;
	newBuilder->copyFrom(this->dataBuilder, finalizer);
	this->dataBuilder = newBuilder;
	return;

}
// .method private findCommonNode(II)I
int android::icu::impl::coll::CollationBuilder::findCommonNode(int index,int strength)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	long long node;
	int cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	int cVar6;
	std::shared_ptr<java::lang::AssertionError> cVar7;
	std::shared_ptr<java::lang::AssertionError> cVar8;
	
	//    .param p1, "index"    # I
	//    .param p2, "strength"    # I
	cVar0 = 0x1;
	cVar1 = 0x500;
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_12;
	if ( cVar0 >  strength )
		goto label_cond_c;
	if ( strength <= 0x2 )
		goto label_cond_12;
label_cond_c:
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 1547    .line 756
label_cond_12:
	node = this->nodes->elementAti(index);
	//    .local v0, "node":J
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) <  strength )
		goto label_cond_1f;
	return index;
	// 1566    .line 761
label_cond_1f:
	if ( strength != cVar0 )
		goto label_cond_2a;
	cVar3 = android::icu::impl::coll::CollationBuilder::nodeHasBefore2(node);
label_goto_25:
	if ( !(( cVar3 ^ 0x1)) )  
		goto label_cond_2f;
	return index;
	// 1582    .line 761
label_cond_2a:
	cVar3 = android::icu::impl::coll::CollationBuilder::nodeHasBefore3(node);
	goto label_goto_25;
	// 1590    .line 765
label_cond_2f:
	node = this->nodes->elementAti(android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node));
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_55;
	if ( android::icu::impl::coll::CollationBuilder::isTailoredNode(node) )     
		goto label_cond_49;
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) == strength )
		goto label_cond_4f;
label_cond_49:
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 1627    .line 768
label_cond_4f:
	if ( android::icu::impl::coll::CollationBuilder::weight16FromNode(node) >= cVar1 )
		goto label_cond_49;
label_cond_55:
	cVar6 = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node);
	node = this->nodes->elementAti(cVar6);
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_6f;
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) >= strength )
		goto label_cond_6f;
	cVar7 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar7;
	// 1665    .line 774
label_cond_6f:
	if ( android::icu::impl::coll::CollationBuilder::isTailoredNode(node) )     
		goto label_cond_55;
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) >  strength )
		goto label_cond_55;
	if ( android::icu::impl::coll::CollationBuilder::weight16FromNode(node) <  cVar1 )
		goto label_cond_55;
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_91;
	if ( android::icu::impl::coll::CollationBuilder::weight16FromNode(node) == cVar1 )
		goto label_cond_91;
	cVar8 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar8;
	// 1703    .line 777
label_cond_91:
	return cVar6;

}
// .method private findOrInsertNodeForCEs(I)I
int android::icu::impl::coll::CollationBuilder::findOrInsertNodeForCEs(int strength)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	long long ce;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	
	//    .param p1, "strength"    # I
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_16;
	if ( strength < 0 ) 
		goto label_cond_a;
	if ( strength <= 0x3 )
		goto label_cond_16;
label_cond_a:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1733    .line 538
	// 1734    .local v0, "ce":J
label_cond_10:
	this->cesLength = ( this->cesLength + -0x1);
	//    .end local v0    # "ce":J
label_cond_16:
	if ( this->cesLength )     
		goto label_cond_30;
	this->ces[0x0] = 0x0;
	ce = 0x0;
	//    .restart local v0    # "ce":J
	this->cesLength = 0x1;
label_goto_25:
	if ( !(android::icu::impl::coll::CollationBuilder::isTempCE(ce)) )  
		goto label_cond_3f;
	return android::icu::impl::coll::CollationBuilder::indexFromTempCE(ce);
	// 1779    .line 544
	// 1780    .end local v0    # "ce":J
label_cond_30:
	ce = this->ces[( this->cesLength + -0x1)];
	//    .restart local v0    # "ce":J
	if ( android::icu::impl::coll::CollationBuilder::ceStrength(ce) >  strength )
		goto label_cond_10;
	goto label_goto_25;
	// 1800    .line 556
label_cond_3f:
	if ( (int)(_ushrll(ce,0x38)) != 0xfe )
		goto label_cond_51;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("tailoring relative to an unassigned code point not supported")));
	// throw
	throw cVar1;
	// 1823    .line 560
label_cond_51:
	return this->findOrInsertNodeForRootCE(ce, strength);

}
// .method private findOrInsertNodeForPrimary(J)I
int android::icu::impl::coll::CollationBuilder::findOrInsertNodeForPrimary(long long p)
{
	
	int rootIndex;
	int index;
	
	//    .param p1, "p"    # J
	rootIndex = android::icu::impl::coll::CollationBuilder::binarySearchForRootPrimaryNode(this->rootPrimaryIndexes->getBuffer(), this->rootPrimaryIndexes->size(), this->nodes->getBuffer(), p);
	//    .local v1, "rootIndex":I
	if ( rootIndex < 0 ) 
		goto label_cond_1f;
	return this->rootPrimaryIndexes->elementAti(rootIndex);
	// 1874    .line 622
label_cond_1f:
	index = this->nodes->size();
	//    .local v0, "index":I
	this->nodes->addElement(android::icu::impl::coll::CollationBuilder::nodeFromWeight32(p));
	this->rootPrimaryIndexes->insertElementAt(index, (~rootIndex));
	return index;

}
// .method private findOrInsertNodeForRootCE(JI)I
int android::icu::impl::coll::CollationBuilder::findOrInsertNodeForRootCE(long long ce,int strength)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	int index;
	int lower32;
	
	//    .param p1, "ce"    # J
	//    .param p3, "strength"    # I
	cVar0 = 0x2;
	cVar1 = 0x1;
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_15;
	if ( (int)(_ushrll(ce,0x38)) != 0xfe )
		goto label_cond_15;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 1934    .line 569
label_cond_15:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_28;
	if ( !(((0xc0 &  ce) > 0x0)) )  
		goto label_cond_28;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 1956    .line 570
label_cond_28:
	index = this->findOrInsertNodeForPrimary(_ushrll(ce,0x20));
	//    .local v0, "index":I
	if ( strength <  cVar1 )
		goto label_cond_41;
	lower32 = (int)(ce);
	//    .local v1, "lower32":I
	index = this->findOrInsertWeakNode(index, _ushri(lower32,0x10), cVar1);
	if ( strength <  cVar0 )
		goto label_cond_41;
	//    .end local v1    # "lower32":I
label_cond_41:
	return index;

}
// .method private findOrInsertWeakNode(III)I
int android::icu::impl::coll::CollationBuilder::findOrInsertWeakNode(int index,int weight16,int level)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	long long node;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int hasThisLevelBefore;
	long long commonNode;
	int nextIndex;
	int cVar3;
	int nextStrength;
	int nextWeight16;
	
	//    .param p1, "index"    # I
	//    .param p2, "weight16"    # I
	//    .param p3, "level"    # I
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_14;
	if ( index < 0 ) 
		goto label_cond_e;
	if ( index <  this->nodes->size() )
		goto label_cond_14;
label_cond_e:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2026    .line 632
label_cond_14:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_24;
	if ( 0x1 >  level )
		goto label_cond_1e;
	if ( level <= 0x2 )
		goto label_cond_24;
label_cond_1e:
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 2047    .line 634
label_cond_24:
	if ( weight16 != 0x500 )
		goto label_cond_2d;
	return this->findCommonNode(index, level);
	// 2060    .line 640
label_cond_2d:
	node = this->nodes->elementAti(index);
	//    .local v6, "node":J
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_43;
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) <  level )
		goto label_cond_43;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 2086    .line 642
label_cond_43:
	if ( !(weight16) )  
		goto label_cond_8d;
	if ( weight16 >= 0x500 )
		goto label_cond_8d;
	if ( level != 0x1 )
		goto label_cond_89;
	hasThisLevelBefore = 0x40;
	//    .local v2, "hasThisLevelBefore":I
label_goto_4e:
	if ( (((long long)(hasThisLevelBefore) &  node) > 0x0) )     
		goto label_cond_8d;
	commonNode = (android::icu::impl::coll::CollationBuilder::nodeFromWeight16(0x500) | android::icu::impl::coll::CollationBuilder::nodeFromStrength(level));
	//    .local v0, "commonNode":J
	if ( level != 0x1 )
		goto label_cond_6c;
	node = (node &  -0x21);
label_cond_6c:
	this->nodes->setElementAt(((long long)(hasThisLevelBefore) |  node), index);
	nextIndex = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node);
	//    .local v3, "nextIndex":I
	cVar3 = this->insertNodeBetween(index, nextIndex, (android::icu::impl::coll::CollationBuilder::nodeFromWeight16(weight16) | android::icu::impl::coll::CollationBuilder::nodeFromStrength(level)));
	this->insertNodeBetween(cVar3, nextIndex, commonNode);
	return cVar3;
	// 2183    .line 643
	// 2184    .end local v0    # "commonNode":J
	// 2185    .end local v2    # "hasThisLevelBefore":I
	// 2186    .end local v3    # "nextIndex":I
label_cond_89:
	//    .restart local v2    # "hasThisLevelBefore":I
	goto label_goto_4e;
	// 2193    .line 689
	// 2194    .end local v2    # "hasThisLevelBefore":I
	// 2195    .restart local v3    # "nextIndex":I
	// 2196    .local v4, "nextStrength":I
label_cond_8c:
	nextIndex;
	//    .end local v3    # "nextIndex":I
	//    .end local v4    # "nextStrength":I
label_cond_8d:
	nextIndex = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node);
	//    .restart local v3    # "nextIndex":I
	if ( !(nextIndex) )  
		goto label_cond_a1;
	node = this->nodes->elementAti(nextIndex);
	nextStrength = android::icu::impl::coll::CollationBuilder::strengthFromNode(node);
	//    .restart local v4    # "nextStrength":I
	if ( nextStrength >  level )
		goto label_cond_8c;
	if ( nextStrength >= level )
		goto label_cond_b0;
	//    .end local v4    # "nextStrength":I
label_cond_a1:
label_goto_a1:
	return this->insertNodeBetween(index, nextIndex, (android::icu::impl::coll::CollationBuilder::nodeFromWeight16(weight16) | android::icu::impl::coll::CollationBuilder::nodeFromStrength(level)));
	// 2251    .line 678
	// 2252    .restart local v4    # "nextStrength":I
label_cond_b0:
	if ( android::icu::impl::coll::CollationBuilder::isTailoredNode(node) )     
		goto label_cond_8c;
	nextWeight16 = android::icu::impl::coll::CollationBuilder::weight16FromNode(node);
	//    .local v5, "nextWeight16":I
	if ( nextWeight16 != weight16 )
		goto label_cond_bd;
	return nextIndex;
	// 2272    .line 685
label_cond_bd:
	if ( nextWeight16 <= weight16 )
		goto label_cond_8c;
	goto label_goto_a1;

}
// .method private getSpecialResetPosition(Ljava/lang/CharSequence;)J
long long android::icu::impl::coll::CollationBuilder::getSpecialResetPosition(std::shared_ptr<java::lang::CharSequence> str)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int strength;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> pos;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	long long ce;
	int index;
	long long node;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar7;
	std::shared_ptr<java::lang::AssertionError> cVar8;
	long long p;
	int nextIndex;
	long long nextNode;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	
	//    .param p1, "str"    # Ljava/lang/CharSequence;
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_16;
	if ( str->length() == 0x2 )
		goto label_cond_16;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2307    .line 286
label_cond_16:
	strength = 0x0;
	//    .local v18, "strength":I
	//    .local v7, "isBoundary":Z
	pos = android::icu::impl::coll::CollationRuleParser::POSITION_VALUES[( str->charAt(0x1) + -0x2800)];
	//    .local v17, "pos":Landroid/icu/impl/coll/CollationRuleParser$Position;
	// switch
	{
	auto item = ( android::icu::impl::coll::CollationBuilder::-getandroid-icu-impl-coll-CollationRuleParser$PositionSwitchesValues({const[class].FS-Param})[pos->ordinal()] );
	if (item == 1) goto label_pswitch_1f5;
	if (item == 2) goto label_pswitch_104;
	if (item == 3) goto label_pswitch_1c6;
	if (item == 4) goto label_pswitch_4a;
	if (item == 5) goto label_pswitch_44;
	if (item == 6) goto label_pswitch_20c;
	if (item == 7) goto label_pswitch_1a3;
	if (item == 8) goto label_pswitch_203;
	if (item == 9) goto label_pswitch_195;
	if (item == 10) goto label_pswitch_1dd;
	if (item == 11) goto label_pswitch_b2;
	if (item == 12) goto label_pswitch_47;
	if (item == 13) goto label_pswitch_218;
	if (item == 14) goto label_pswitch_1b0;
	}
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_221;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 2363    .line 294
label_pswitch_44:
	return 0x0;
	// 2369    .line 296
label_pswitch_47:
	return 0x0;
	// 2375    .line 299
label_pswitch_4a:
	//    .local v6, "index":I
	node = this->nodes->elementAti(this->findOrInsertNodeForRootCE(0x0, 0x2));
	//    .local v12, "node":J
	index = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node);
	if ( !(index) )  
		goto label_cond_a7;
	node = this->nodes->elementAti(index);
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_8c;
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) <= 0x2 )
		goto label_cond_8c;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 2449    .line 304
label_cond_8c:
	if ( !(android::icu::impl::coll::CollationBuilder::isTailoredNode(node)) )  
		goto label_cond_a7;
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) != 0x2 )
		goto label_cond_a7;
	return android::icu::impl::coll::CollationBuilder::tempCEFromIndexAndStrength(index, 0x2);
	// 2480    .line 308
label_cond_a7:
	return this->rootElements->getFirstTertiaryCE();
	// 2494    .line 312
	// 2495    .end local v6    # "index":I
	// 2496    .end local v12    # "node":J
label_pswitch_b2:
	ce = this->rootElements->getLastTertiaryCE();
	//    .local v4, "ce":J
	strength = 0x2;
label_goto_be:
	index = this->findOrInsertNodeForRootCE(ce, strength);
	//    .restart local v6    # "index":I
	node = this->nodes->elementAti(index);
	//    .restart local v12    # "node":J
	if ( ( pos->ordinal() & 0x1) )     
		goto label_cond_2e3;
	if ( android::icu::impl::coll::CollationBuilder::nodeHasAnyBefore(node) )     
		goto label_cond_22a;
	if ( !(0x0) )  
		goto label_cond_22a;
	index = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node);
	if ( !(index) )  
		goto label_cond_288;
	node = this->nodes->elementAti(index);
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_224;
	if ( android::icu::impl::coll::CollationBuilder::isTailoredNode(node) )     
		goto label_cond_224;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 2592    .line 317
	// 2593    .end local v4    # "ce":J
	// 2594    .end local v6    # "index":I
	// 2595    .end local v12    # "node":J
label_pswitch_104:
	//    .restart local v6    # "index":I
	node = this->nodes->elementAti(this->findOrInsertNodeForRootCE(0x0, 0x1));
	//    .restart local v12    # "node":J
label_cond_11e:
	index = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node);
	if ( !(index) )  
		goto label_cond_13c;
	node = this->nodes->elementAti(index);
	strength = android::icu::impl::coll::CollationBuilder::strengthFromNode(node);
	if ( strength >= 0x1 )
		goto label_cond_14a;
label_cond_13c:
	ce = this->rootElements->getFirstSecondaryCE();
	//    .restart local v4    # "ce":J
	strength = 0x1;
	goto label_goto_be;
	// 2680    .line 323
	// 2681    .end local v4    # "ce":J
label_cond_14a:
	if ( strength != 0x1 )
		goto label_cond_11e;
	if ( !(android::icu::impl::coll::CollationBuilder::isTailoredNode(node)) )  
		goto label_cond_13c;
	if ( !(android::icu::impl::coll::CollationBuilder::nodeHasBefore3(node)) )  
		goto label_cond_18c;
	index = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(this->nodes->elementAti(android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node)));
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_18c;
	if ( android::icu::impl::coll::CollationBuilder::isTailoredNode(this->nodes->elementAti(index)) )     
		goto label_cond_18c;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 2753    .line 329
label_cond_18c:
	return android::icu::impl::coll::CollationBuilder::tempCEFromIndexAndStrength(index, 0x1);
	// 2765    .line 340
	// 2766    .end local v6    # "index":I
	// 2767    .end local v12    # "node":J
label_pswitch_195:
	ce = this->rootElements->getLastSecondaryCE();
	//    .restart local v4    # "ce":J
	strength = 0x1;
	goto label_goto_be;
	// 2786    .line 344
	// 2787    .end local v4    # "ce":J
label_pswitch_1a3:
	ce = this->rootElements->getFirstPrimaryCE();
	//    .restart local v4    # "ce":J
	0x1;
	goto label_goto_be;
	// 2806    .line 348
	// 2807    .end local v4    # "ce":J
label_pswitch_1b0:
	ce = this->rootElements->lastCEWithPrimaryBefore((this->variableTop + 0x1));
	//    .restart local v4    # "ce":J
	goto label_goto_be;
	// 2832    .line 351
	// 2833    .end local v4    # "ce":J
label_pswitch_1c6:
	ce = this->rootElements->firstCEWithPrimaryAtLeast((this->variableTop + 0x1));
	//    .restart local v4    # "ce":J
	0x1;
	goto label_goto_be;
	// 2862    .line 358
	// 2863    .end local v4    # "ce":J
label_pswitch_1dd:
	ce = this->rootElements->firstCEWithPrimaryAtLeast(this->baseData->getFirstPrimaryForGroup(0x11));
	//    .restart local v4    # "ce":J
	goto label_goto_be;
	// 2892    .line 362
	// 2893    .end local v4    # "ce":J
label_pswitch_1f5:
	ce = this->baseData->getSingleCE(0x4e00);
	//    .restart local v4    # "ce":J
	goto label_goto_be;
	// 2910    .line 366
	// 2911    .end local v4    # "ce":J
label_pswitch_203:
	cVar5 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("reset to [last implicit] not supported")));
	// throw
	throw cVar5;
	// 2923    .line 369
label_pswitch_20c:
	ce = android::icu::impl::coll::Collation::makeCE(0xff020200L);
	//    .restart local v4    # "ce":J
	0x1;
	goto label_goto_be;
	// 2938    .line 373
	// 2939    .end local v4    # "ce":J
label_pswitch_218:
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LDML forbids tailoring to U+FFFF")));
	// throw
	throw cVar6;
	// 2949    .line 376
label_cond_221:
	return 0x0;
	// 2955    .line 394
	// 2956    .restart local v4    # "ce":J
	// 2957    .restart local v6    # "index":I
	// 2958    .restart local v12    # "node":J
label_cond_224:
	ce = android::icu::impl::coll::CollationBuilder::tempCEFromIndexAndStrength(index, strength);
label_cond_22a:
label_goto_22a:
	if ( !(android::icu::impl::coll::CollationBuilder::nodeHasAnyBefore(node)) )  
		goto label_cond_2e0;
	if ( !(android::icu::impl::coll::CollationBuilder::nodeHasBefore2(node)) )  
		goto label_cond_254;
	index = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(this->nodes->elementAti(android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node)));
	node = this->nodes->elementAti(index);
label_cond_254:
	if ( !(android::icu::impl::coll::CollationBuilder::nodeHasBefore3(node)) )  
		goto label_cond_26c;
	index = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(this->nodes->elementAti(android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node)));
label_cond_26c:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_2da;
	if ( android::icu::impl::coll::CollationBuilder::isTailoredNode(this->nodes->elementAti(index)) )     
		goto label_cond_2da;
	cVar7 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar7;
	// 3071    .line 396
label_cond_288:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_294;
	if ( !(strength) )  
		goto label_cond_294;
	cVar8 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar8;
	// 3085    .line 397
label_cond_294:
	p = _ushrll(ce,0x20);
	//    .local v14, "p":J
	//    .local v16, "pIndex":I
	//    .local v8, "isCompressible":Z
	ce = android::icu::impl::coll::Collation::makeCE(this->rootElements->getPrimaryAfter(p, this->rootElements->findPrimary(p), this->baseData->isCompressiblePrimary(p)));
	node = this->nodes->elementAti(this->findOrInsertNodeForRootCE(ce, 0x0));
	goto label_goto_22a;
	// 3166    .line 416
	// 3167    .end local v8    # "isCompressible":Z
	// 3168    .end local v14    # "p":J
	// 3169    .end local v16    # "pIndex":I
label_cond_2da:
	ce = android::icu::impl::coll::CollationBuilder::tempCEFromIndexAndStrength(index, strength);
label_cond_2e0:
label_goto_2e0:
	return ce;
	// 3182    .line 427
	// 3183    .local v9, "nextIndex":I
	// 3184    .local v10, "nextNode":J
label_cond_2e1:
	nextIndex;
	node = nextNode;
	//    .end local v9    # "nextIndex":I
	//    .end local v10    # "nextNode":J
label_cond_2e3:
	nextIndex = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node);
	//    .restart local v9    # "nextIndex":I
	if ( nextIndex )     
		goto label_cond_2f6;
label_goto_2e9:
	if ( !(android::icu::impl::coll::CollationBuilder::isTailoredNode(node)) )  
		goto label_cond_2e0;
	ce = android::icu::impl::coll::CollationBuilder::tempCEFromIndexAndStrength(index, strength);
	goto label_goto_2e0;
	// 3220    .line 425
label_cond_2f6:
	nextNode = this->nodes->elementAti(nextIndex);
	//    .restart local v10    # "nextNode":J
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(nextNode) >= strength )
		goto label_cond_2e1;
	goto label_goto_2e9;
	// 3248    .line 290
	// 3249    nop
	// 3251    :pswitch_data_30e
	// 3252    .packed-switch 0x1
	// 3253        :pswitch_1f5
	// 3254        :pswitch_104
	// 3255        :pswitch_1c6
	// 3256        :pswitch_4a
	// 3257        :pswitch_44
	// 3258        :pswitch_20c
	// 3259        :pswitch_1a3
	// 3260        :pswitch_203
	// 3261        :pswitch_195
	// 3262        :pswitch_1dd
	// 3263        :pswitch_b2
	// 3264        :pswitch_47
	// 3265        :pswitch_218
	// 3266        :pswitch_1b0
	// 3267    .end packed-switch

}
// .method private getWeight16Before(IJI)I
int android::icu::impl::coll::CollationBuilder::getWeight16Before(int index,long long node,int level)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	long long node;
	int s;
	long long p;
	int weight16;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	
	//    .param p1, "index"    # I
	//    .param p2, "node"    # J
	//    .param p4, "level"    # I
	cVar0 = 0x100;
	cVar1 = 0x1;
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_19;
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) <  level )
		goto label_cond_19;
	if ( !(android::icu::impl::coll::CollationBuilder::isTailoredNode(node)) )  
		goto label_cond_19;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 3304    .line 246
label_cond_19:
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) != 0x2 )
		goto label_cond_35;
	//    .local v3, "t":I
label_goto_24:
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) <= cVar1 )
		goto label_cond_38;
	node = this->nodes->elementAti(android::icu::impl::coll::CollationBuilder::previousIndexFromNode(node));
	goto label_goto_24;
	// 3342    .line 249
	// 3343    .end local v3    # "t":I
label_cond_35:
	//    .restart local v3    # "t":I
	goto label_goto_24;
	// 3350    .line 255
label_cond_38:
	if ( !(android::icu::impl::coll::CollationBuilder::isTailoredNode(node)) )  
		goto label_cond_3f;
	return cVar0;
	// 3361    .line 259
label_cond_3f:
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) != cVar1 )
		goto label_cond_5a;
	s = android::icu::impl::coll::CollationBuilder::weight16FromNode(node);
	//    .local v2, "s":I
label_goto_49:
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) <= 0 )
		goto label_cond_5d;
	node = this->nodes->elementAti(android::icu::impl::coll::CollationBuilder::previousIndexFromNode(node));
	goto label_goto_49;
	// 3397    .line 262
	// 3398    .end local v2    # "s":I
label_cond_5a:
	//    .restart local v2    # "s":I
	goto label_goto_49;
	// 3405    .line 268
label_cond_5d:
	if ( !(android::icu::impl::coll::CollationBuilder::isTailoredNode(node)) )  
		goto label_cond_64;
	return cVar0;
	// 3416    .line 272
label_cond_64:
	p = android::icu::impl::coll::CollationBuilder::weight32FromNode(node);
	//    .local v0, "p":J
	if ( level != cVar1 )
		goto label_cond_71;
	//    .local v4, "weight16":I
label_cond_70:
	return weight16;
	// 3438    .line 277
	// 3439    .end local v4    # "weight16":I
label_cond_71:
	weight16 = this->rootElements->getTertiaryBefore(p, s, t);
	//    .restart local v4    # "weight16":I
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_70;
	if ( !(( weight16 & -0x3f40)) )  
		goto label_cond_70;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;

}
// .method private ignorePrefix(Ljava/lang/CharSequence;)Z
bool android::icu::impl::coll::CollationBuilder::ignorePrefix(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	return ( this->isFCD(s) ^ 0x1);

}
// .method private ignoreString(Ljava/lang/CharSequence;)Z
bool android::icu::impl::coll::CollationBuilder::ignoreString(std::shared_ptr<java::lang::CharSequence> s)
{
	
	bool cVar0;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	if ( !(this->isFCD(s)) )  
		goto label_cond_10;
	cVar0 = android::icu::impl::Normalizer2Impl_S_Hangul::isHangul(s->charAt(0x0));
label_goto_f:
	return cVar0;
label_cond_10:
	cVar0 = 0x1;
	goto label_goto_f;

}
// .method private static indexFromTempCE(J)I
int android::icu::impl::coll::CollationBuilder::indexFromTempCE(long long tempCE)
{
	
	long long cVar0;
	
	//    .param p0, "tempCE"    # J
	cVar0 = (tempCE -  0x4040000006002000L);
	return ((((int)(_shrll(cVar0,0x2b)) &  0xfe000) |  ( (int)(_shrll(cVar0,0x2a)) & 0x1fc0)) |  ( (int)(_shrll(cVar0,0x18)) & 0x3f));

}
// .method private static indexFromTempCE32(I)I
int android::icu::impl::coll::CollationBuilder::indexFromTempCE32(int tempCE32)
{
	
	int cVar0;
	
	//    .param p0, "tempCE32"    # I
	cVar0 = (tempCE32 -  0x40400620);
	return (((_shri(cVar0,0xb) &  0xfe000) |  ( _shri(cVar0,0xa) & 0x1fc0)) |  ( _shri(cVar0,0x8) & 0x3f));

}
// .method private insertNodeBetween(IIJ)I
int android::icu::impl::coll::CollationBuilder::insertNodeBetween(int index,int nextIndex,long long node)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int newIndex;
	
	//    .param p1, "index"    # I
	//    .param p2, "nextIndex"    # I
	//    .param p3, "node"    # J
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_10;
	if ( !(android::icu::impl::coll::CollationBuilder::previousIndexFromNode(node)) )  
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 3620    .line 730
label_cond_10:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_20;
	if ( !(android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node)) )  
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 3638    .line 731
label_cond_20:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_36;
	if ( android::icu::impl::coll::CollationBuilder::nextIndexFromNode(this->nodes->elementAti(index)) == nextIndex )
		goto label_cond_36;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 3662    .line 733
label_cond_36:
	newIndex = this->nodes->size();
	//    .local v0, "newIndex":I
	this->nodes->addElement((node |  (android::icu::impl::coll::CollationBuilder::nodeFromPreviousIndex(index) |  android::icu::impl::coll::CollationBuilder::nodeFromNextIndex(nextIndex))));
	this->nodes->setElementAt(android::icu::impl::coll::CollationBuilder::changeNodeNextIndex(this->nodes->elementAti(index), newIndex), index);
	if ( !(nextIndex) )  
		goto label_cond_6b;
	this->nodes->setElementAt(android::icu::impl::coll::CollationBuilder::changeNodePreviousIndex(this->nodes->elementAti(nextIndex), newIndex), nextIndex);
label_cond_6b:
	return newIndex;

}
// .method private insertTailoredNodeAfter(II)I
int android::icu::impl::coll::CollationBuilder::insertTailoredNodeAfter(int cVar4,int strength)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int cVar4;
	int nextIndex;
	long long node;
	
	//    .param p1, "index"    # I
	//    .param p2, "strength"    # I
	cVar0 = 0x2;
	cVar1 = 0x1;
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_16;
	if ( cVar4 < 0 ) 
		goto label_cond_10;
	if ( cVar4 <  this->nodes->size() )
		goto label_cond_16;
label_cond_10:
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 3761    .line 703
label_cond_16:
	if ( strength <  cVar1 )
		goto label_cond_22;
	cVar4 = this->findCommonNode(cVar4, cVar1);
	if ( strength <  cVar0 )
		goto label_cond_22;
	cVar4 = this->findCommonNode(cVar4, cVar0);
label_cond_22:
	//    .local v2, "node":J
label_goto_28:
	nextIndex = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node);
	//    .local v0, "nextIndex":I
	if ( !(nextIndex) )  
		goto label_cond_3a;
	node = this->nodes->elementAti(nextIndex);
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) >  strength )
		goto label_cond_47;
label_cond_3a:
	return this->insertNodeBetween(cVar4, nextIndex, (0x8 | android::icu::impl::coll::CollationBuilder::nodeFromStrength(strength)));
	// 3827    .line 717
label_cond_47:
	nextIndex;
	goto label_goto_28;

}
// .method private isFCD(Ljava/lang/CharSequence;)Z
bool android::icu::impl::coll::CollationBuilder::isFCD(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	return this->fcd->isNormalized(s);

}
// .method private static isTailoredNode(J)Z
bool android::icu::impl::coll::CollationBuilder::isTailoredNode(long long node)
{
	
	bool cVar0;
	
	//    .param p0, "node"    # J
	if ( !(((0x8 &  node) > 0x0)) )  
		goto label_cond_b;
	cVar0 = 0x1;
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method private static isTempCE(J)Z
bool android::icu::impl::coll::CollationBuilder::isTempCE(long long ce)
{
	
	bool cVar1;
	int sec;
	
	//    .param p0, "ce"    # J
	cVar1 = 0x0;
	sec = _ushri((int)(ce),0x18);
	//    .local v0, "sec":I
	if ( 0x6 >  sec )
		goto label_cond_c;
	if ( sec >  0x45 )
		goto label_cond_c;
	cVar1 = 0x1;
label_cond_c:
	return cVar1;

}
// .method private static isTempCE32(I)Z
bool android::icu::impl::coll::CollationBuilder::isTempCE32(int ce32)
{
	
	bool cVar1;
	
	//    .param p0, "ce32"    # I
	cVar1 = 0x0;
	if ( ( ce32 & 0xff) <  0x2 )
		goto label_cond_16;
	if ( 0x6 >  ( _shri(ce32,0x8) & 0xff) )
		goto label_cond_16;
	if ( ( _shri(ce32,0x8) & 0xff) >  0x45 )
		goto label_cond_16;
	cVar1 = 0x1;
label_cond_16:
	return cVar1;

}
// .method private makeTailoredCEs()V
void android::icu::impl::coll::CollationBuilder::makeTailoredCEs()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationWeights> primaries;
	std::shared_ptr<android::icu::impl::coll::CollationWeights> secondaries;
	std::shared_ptr<android::icu::impl::coll::CollationWeights> tertiaries;
	auto nodesArray;
	int rpi;
	long long node;
	long long p;
	int s;
	int t;
	int q;
	int pIsTailored;
	int sIsTailored;
	int tIsTailored;
	int pIndex;
	int nextIndex;
	int strength;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	int tLimit;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar6;
	std::shared_ptr<java::lang::AssertionError> cVar8;
	std::shared_ptr<java::lang::AssertionError> cVar7;
	std::shared_ptr<java::lang::AssertionError> cVar9;
	int isCompressible;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar10;
	std::shared_ptr<java::lang::AssertionError> cVar11;
	
	primaries = std::make_shared<android::icu::impl::coll::CollationWeights>();
	//    .local v19, "primaries":Landroid/icu/impl/coll/CollationWeights;
	secondaries = std::make_shared<android::icu::impl::coll::CollationWeights>();
	//    .local v13, "secondaries":Landroid/icu/impl/coll/CollationWeights;
	tertiaries = std::make_shared<android::icu::impl::coll::CollationWeights>();
	//    .local v7, "tertiaries":Landroid/icu/impl/coll/CollationWeights;
	nodesArray = this->nodes->getBuffer();
	//    .local v27, "nodesArray":[J
	rpi = 0x0;
	//    .local v33, "rpi":I
label_goto_19:
	if ( rpi >= this->rootPrimaryIndexes->size() )
		goto label_cond_286;
	//    .local v6, "i":I
	node = nodesArray[this->rootPrimaryIndexes->elementAti(rpi)];
	//    .local v28, "node":J
	p = android::icu::impl::coll::CollationBuilder::weight32FromNode(node);
	//    .local v20, "p":J
	if ( (p > 0x0) )     
		goto label_cond_76;
	s = 0x0;
	//    .local v34, "s":I
label_goto_3d:
	t = s;
	//    .local v38, "t":I
	q = 0x0;
	//    .local v32, "q":I
	pIsTailored = 0x0;
	//    .local v31, "pIsTailored":Z
	sIsTailored = 0x0;
	//    .local v35, "sIsTailored":Z
	tIsTailored = 0x0;
	//    .local v39, "tIsTailored":Z
	if ( (p > 0x0) )     
		goto label_cond_79;
	pIndex = 0x0;
	//    .local v30, "pIndex":I
label_goto_4f:
	nextIndex = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node);
	//    .local v26, "nextIndex":I
label_cond_53:
label_goto_53:
	if ( !(nextIndex) )  
		goto label_cond_282;
	node = nodesArray[nextIndex];
	nextIndex = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node);
	strength = android::icu::impl::coll::CollationBuilder::strengthFromNode(node);
	//    .local v37, "strength":I
	if ( strength != 0x3 )
		goto label_cond_a9;
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_84;
	if ( android::icu::impl::coll::CollationBuilder::isTailoredNode(node) )     
		goto label_cond_84;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 4107    .line 1146
	// 4108    .end local v26    # "nextIndex":I
	// 4109    .end local v30    # "pIndex":I
	// 4110    .end local v31    # "pIsTailored":Z
	// 4111    .end local v32    # "q":I
	// 4112    .end local v34    # "s":I
	// 4113    .end local v35    # "sIsTailored":Z
	// 4114    .end local v37    # "strength":I
	// 4115    .end local v38    # "t":I
	// 4116    .end local v39    # "tIsTailored":Z
label_cond_76:
	s = 0x500;
	//    .restart local v34    # "s":I
	goto label_goto_3d;
	// 4123    .line 1155
	// 4124    .restart local v31    # "pIsTailored":Z
	// 4125    .restart local v32    # "q":I
	// 4126    .restart local v35    # "sIsTailored":Z
	// 4127    .restart local v38    # "t":I
	// 4128    .restart local v39    # "tIsTailored":Z
label_cond_79:
	this->rootElements->findPrimary(p);
	//    .restart local v30    # "pIndex":I
	goto label_goto_4f;
	// 4143    .line 1167
	// 4144    .restart local v26    # "nextIndex":I
	// 4145    .restart local v37    # "strength":I
label_cond_84:
	if ( q != 0x3 )
		goto label_cond_92;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("quaternary tailoring gap too small")));
	// throw
	throw cVar1;
	// 4162    .line 1171
label_cond_92:
	q = ( q + 0x1);
label_goto_94:
	if ( !(android::icu::impl::coll::CollationBuilder::isTailoredNode(node)) )  
		goto label_cond_53;
	nodesArray[nextIndex] = android::icu::impl::coll::Collation::makeCE(p, s, t, q);
	goto label_goto_53;
	// 4191    .line 1173
label_cond_a9:
	if ( strength != 0x2 )
		goto label_cond_163;
	if ( !(android::icu::impl::coll::CollationBuilder::isTailoredNode(node)) )  
		goto label_cond_159;
	if ( tIsTailored )     
		goto label_cond_143;
	//    .local v12, "tCount":I
	if ( t )     
		goto label_cond_f2;
	tLimit = ( (int)(this->rootElements->getFirstTertiaryCE()) & 0x3f3f);
	//    .local v40, "tLimit":I
label_goto_dc:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_129;
	if ( tLimit == 0x4000 )
		goto label_cond_129;
	if ( !(( tLimit & -0x3f40)) )  
		goto label_cond_129;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 4280    .line 1187
	// 4281    .end local v40    # "tLimit":I
label_cond_f2:
	if ( pIsTailored )     
		goto label_cond_107;
	if ( !(( sIsTailored ^ 0x1)) )  
		goto label_cond_107;
	//    .restart local v40    # "tLimit":I
	goto label_goto_dc;
	// 4307    .line 1190
	// 4308    .end local v40    # "tLimit":I
label_cond_107:
	if ( t != 0x100 )
		goto label_cond_110;
	//    .restart local v40    # "tLimit":I
	goto label_goto_dc;
	// 4322    .line 1194
	// 4323    .end local v40    # "tLimit":I
label_cond_110:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_120;
	if ( t == 0x500 )
		goto label_cond_120;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 4341    .line 1195
label_cond_120:
	//    .restart local v40    # "tLimit":I
	goto label_goto_dc;
	// 4354    .line 1198
label_cond_129:
	tertiaries->initForTertiary();
	if ( tertiaries->allocWeights((long long)(t), (long long)(tLimit), ( android::icu::impl::coll::CollationBuilder::countTailoredNodes(nodesArray, nextIndex, 0x2) + 0x1)) )     
		goto label_cond_141;
	cVar4 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("tertiary tailoring gap too small")));
	// throw
	throw cVar4;
	// 4382    .line 1203
label_cond_141:
	tIsTailored = 0x1;
	//    .end local v12    # "tCount":I
	//    .end local v40    # "tLimit":I
label_cond_143:
	t = (int)(tertiaries->nextWeight());
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_15f;
	if ( t != -0x1 )
		goto label_cond_15f;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 4415    .line 1208
label_cond_159:
	android::icu::impl::coll::CollationBuilder::weight16FromNode(node);
	0x0;
label_cond_15f:
label_goto_15f:
	0x0;
	goto label_goto_94;
	// 4431    .line 1215
label_cond_163:
	if ( strength != 0x1 )
		goto label_cond_216;
	if ( !(android::icu::impl::coll::CollationBuilder::isTailoredNode(node)) )  
		goto label_cond_208;
	if ( sIsTailored )     
		goto label_cond_1f2;
	//    .local v18, "sCount":I
	if ( s )     
		goto label_cond_1bf;
	s = ( this->rootElements->getSecondaryBoundary() + -0x100);
	//    .local v36, "sLimit":I
label_goto_197:
	if ( s != 0x500 )
		goto label_cond_1a5;
	s = this->rootElements->getLastCommonSecondary();
label_cond_1a5:
	secondaries->initForSecondary();
	if ( secondaries->allocWeights((long long)(s), (long long)(sLimit), ( android::icu::impl::coll::CollationBuilder::countTailoredNodes(nodesArray, nextIndex, 0x1) + 0x1)) )     
		goto label_cond_1f0;
	cVar6 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("secondary tailoring gap too small")));
	// throw
	throw cVar6;
	// 4545    .line 1229
	// 4546    .end local v36    # "sLimit":I
label_cond_1bf:
	if ( pIsTailored )     
		goto label_cond_1ce;
	//    .restart local v36    # "sLimit":I
	goto label_goto_197;
	// 4566    .line 1232
	// 4567    .end local v36    # "sLimit":I
label_cond_1ce:
	if ( s != 0x100 )
		goto label_cond_1d7;
	//    .restart local v36    # "sLimit":I
	goto label_goto_197;
	// 4581    .line 1236
	// 4582    .end local v36    # "sLimit":I
label_cond_1d7:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_1e7;
	if ( s == 0x500 )
		goto label_cond_1e7;
	cVar7 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar7;
	// 4600    .line 1237
label_cond_1e7:
	//    .restart local v36    # "sLimit":I
	goto label_goto_197;
	// 4613    .line 1254
label_cond_1f0:
	sIsTailored = 0x1;
	//    .end local v18    # "sCount":I
	//    .end local v36    # "sLimit":I
label_cond_1f2:
	s = (int)(secondaries->nextWeight());
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_20e;
	if ( s != -0x1 )
		goto label_cond_20e;
	cVar8 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar8;
	// 4646    .line 1259
label_cond_208:
	s = android::icu::impl::coll::CollationBuilder::weight16FromNode(node);
	0x0;
label_cond_20e:
label_goto_20e:
	if ( s )     
		goto label_cond_27f;
	0x0;
label_goto_212:
	0x0;
	goto label_goto_15f;
	// 4668    .line 1266
label_cond_216:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_226;
	if ( android::icu::impl::coll::CollationBuilder::isTailoredNode(node) )     
		goto label_cond_226;
	cVar9 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar9;
	// 4686    .line 1270
label_cond_226:
	if ( pIsTailored )     
		goto label_cond_263;
	//    .local v24, "pCount":I
	isCompressible = this->baseData->isCompressiblePrimary(p);
	//    .local v25, "isCompressible":Z
	//    .local v22, "pLimit":J
	primaries->initForPrimary(isCompressible);
	if ( primaries->allocWeights(p, this->rootElements->getPrimaryAfter(p, pIndex, isCompressible), ( android::icu::impl::coll::CollationBuilder::countTailoredNodes(nodesArray, nextIndex, 0x0) + 0x1)) )     
		goto label_cond_261;
	cVar10 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("primary tailoring gap too small")));
	// throw
	throw cVar10;
	// 4756    .line 1282
label_cond_261:
	pIsTailored = 0x1;
	//    .end local v22    # "pLimit":J
	//    .end local v24    # "pCount":I
	//    .end local v25    # "isCompressible":Z
label_cond_263:
	p = primaries->nextWeight();
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_27a;
	if ( (p > 0xffffffffL) )     
		goto label_cond_27a;
	cVar11 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar11;
	// 4786    .line 1286
label_cond_27a:
	s = 0x500;
	0x0;
	goto label_goto_20e;
	// 4795    .line 1289
label_cond_27f:
	0x500;
	goto label_goto_212;
	// 4801    .line 1142
	// 4802    .end local v37    # "strength":I
label_cond_282:
	rpi = ( rpi + 0x1);
	goto label_goto_19;
	// 4808    .line 1302
	// 4809    .end local v6    # "i":I
	// 4810    .end local v20    # "p":J
	// 4811    .end local v26    # "nextIndex":I
	// 4812    .end local v28    # "node":J
	// 4813    .end local v30    # "pIndex":I
	// 4814    .end local v31    # "pIsTailored":Z
	// 4815    .end local v32    # "q":I
	// 4816    .end local v34    # "s":I
	// 4817    .end local v35    # "sIsTailored":Z
	// 4818    .end local v38    # "t":I
	// 4819    .end local v39    # "tIsTailored":Z
label_cond_286:
	return;

}
// .method private mergeCompositeIntoString(Ljava/lang/CharSequence;IILjava/lang/CharSequence;Ljava/lang/StringBuilder;Ljava/lang/StringBuilder;)Z
bool android::icu::impl::coll::CollationBuilder::mergeCompositeIntoString(std::shared_ptr<java::lang::CharSequence> nfdString,int indexAfterLastStarter,int composite,std::shared_ptr<java::lang::CharSequence> decomp,std::shared_ptr<java::lang::StringBuilder> newNFDString,std::shared_ptr<java::lang::StringBuilder> newString)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int lastStarterLength;
	int sourceIndex;
	int decompIndex;
	int sourceChar;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	int sourceCC;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int decompChar;
	int decompCC;
	
	//    .param p1, "nfdString"    # Ljava/lang/CharSequence;
	//    .param p2, "indexAfterLastStarter"    # I
	//    .param p3, "composite"    # I
	//    .param p4, "decomp"    # Ljava/lang/CharSequence;
	//    .param p5, "newNFDString"    # Ljava/lang/StringBuilder;
	//    .param p6, "newString"    # Ljava/lang/StringBuilder;
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_15;
	if ( java::lang::Character::codePointBefore(nfdString, indexAfterLastStarter) == java::lang::Character::codePointAt(decomp, 0x0) )
		goto label_cond_15;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 4859    .line 966
label_cond_15:
	lastStarterLength = java::lang::Character::offsetByCodePoints(decomp, 0x0, 0x1);
	//    .local v3, "lastStarterLength":I
	if ( lastStarterLength != decomp->length() )
		goto label_cond_23;
	return 0x0;
	// 4882    .line 972
label_cond_23:
	if ( !(this->equalSubSequences(nfdString, indexAfterLastStarter, decomp, lastStarterLength)) )  
		goto label_cond_2b;
	return 0x0;
	// 4895    .line 980
label_cond_2b:
	newNFDString->setLength(0x0);
	newNFDString->append(nfdString, 0x0, indexAfterLastStarter);
	newString->setLength(0x0);
	newString->append(nfdString, 0x0, (indexAfterLastStarter - lastStarterLength))->appendCodePoint(composite);
	sourceIndex = indexAfterLastStarter;
	//    .local v6, "sourceIndex":I
	decompIndex = lastStarterLength;
	//    .local v2, "decompIndex":I
	sourceChar = -0x1;
	//    .local v5, "sourceChar":I
	//    .local v4, "sourceCC":I
	//    .local v0, "decompCC":I
label_goto_46:
	if ( sourceChar >= 0 )
		goto label_cond_6a;
	if ( sourceIndex <  nfdString->length() )
		goto label_cond_54;
label_cond_4e:
	if ( sourceChar < 0 ) 
		goto label_cond_c0;
	if ( 0x0 >= 0x0 )
		goto label_cond_a0;
	return 0x0;
	// 4965    .line 1001
label_cond_54:
	sourceChar = java::lang::Character::codePointAt(nfdString, sourceIndex);
	sourceCC = this->nfd->getCombiningClass(sourceChar);
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_6a;
	if ( sourceCC )     
		goto label_cond_6a;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 4991    .line 1006
label_cond_6a:
	if ( decompIndex >= decomp->length() )
		goto label_cond_4e;
	decompChar = java::lang::Character::codePointAt(decomp, decompIndex);
	//    .local v1, "decompChar":I
	decompCC = this->nfd->getCombiningClass(decompChar);
	if ( decompCC )     
		goto label_cond_7e;
	return 0x0;
	// 5020    .line 1015
label_cond_7e:
	if ( sourceCC >= decompCC )
		goto label_cond_82;
	return 0x0;
	// 5029    .line 1018
label_cond_82:
	if ( decompCC >= sourceCC )
		goto label_cond_8d;
	newNFDString->appendCodePoint(decompChar);
	decompIndex = (decompIndex +  java::lang::Character::charCount(decompChar));
	goto label_goto_46;
	// 5045    .line 1021
label_cond_8d:
	if ( decompChar == sourceChar )
		goto label_cond_91;
	return 0x0;
	// 5054    .line 1025
label_cond_91:
	newNFDString->appendCodePoint(decompChar);
	decompIndex = (decompIndex +  java::lang::Character::charCount(decompChar));
	sourceIndex = (sourceIndex +  java::lang::Character::charCount(decompChar));
	sourceChar = -0x1;
	goto label_goto_46;
	// 5077    .line 1037
	// 5078    .end local v1    # "decompChar":I
label_cond_a0:
	newNFDString->append(nfdString, sourceIndex, nfdString->length());
	newString->append(nfdString, sourceIndex, nfdString->length());
label_cond_ae:
label_goto_ae:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_ce;
	if ( this->nfd->isNormalized(newNFDString) )     
		goto label_cond_ce;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 5114    .line 1039
label_cond_c0:
	if ( decompIndex >= decomp->length() )
		goto label_cond_ae;
	newNFDString->append(decomp, decompIndex, decomp->length());
	goto label_goto_ae;
	// 5131    .line 1043
label_cond_ce:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_e0;
	if ( this->fcd->isNormalized(newString) )     
		goto label_cond_e0;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 5151    .line 1044
label_cond_e0:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_fa;
	if ( this->nfd->normalize(newString)->equals(newNFDString->toString()) )     
		goto label_cond_fa;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 5179    .line 1045
label_cond_fa:
	return 0x1;

}
// .method private static nextIndexFromNode(J)I
int android::icu::impl::coll::CollationBuilder::nextIndexFromNode(long long node)
{
	
	//    .param p0, "node"    # J
	return (_shri((int)(node),0x8) &  0xfffff);

}
// .method private static nodeFromNextIndex(I)J
long long android::icu::impl::coll::CollationBuilder::nodeFromNextIndex(int next)
{
	
	//    .param p0, "next"    # I
	return (long long)(( next << 0x8));

}
// .method private static nodeFromPreviousIndex(I)J
long long android::icu::impl::coll::CollationBuilder::nodeFromPreviousIndex(int previous)
{
	
	//    .param p0, "previous"    # I
	return ((long long)(previous) << 0x1c);

}
// .method private static nodeFromStrength(I)J
long long android::icu::impl::coll::CollationBuilder::nodeFromStrength(int strength)
{
	
	//    .param p0, "strength"    # I
	return (long long)(strength);

}
// .method private static nodeFromWeight16(I)J
long long android::icu::impl::coll::CollationBuilder::nodeFromWeight16(int weight16)
{
	
	//    .param p0, "weight16"    # I
	return ((long long)(weight16) << 0x30);

}
// .method private static nodeFromWeight32(J)J
long long android::icu::impl::coll::CollationBuilder::nodeFromWeight32(long long weight32)
{
	
	//    .param p0, "weight32"    # J
	return (weight32 << 0x20);

}
// .method private static nodeHasAnyBefore(J)Z
bool android::icu::impl::coll::CollationBuilder::nodeHasAnyBefore(long long node)
{
	
	bool cVar0;
	
	//    .param p0, "node"    # J
	if ( !(((0x60 &  node) > 0x0)) )  
		goto label_cond_b;
	cVar0 = 0x1;
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method private static nodeHasBefore2(J)Z
bool android::icu::impl::coll::CollationBuilder::nodeHasBefore2(long long node)
{
	
	bool cVar0;
	
	//    .param p0, "node"    # J
	if ( !(((0x40 &  node) > 0x0)) )  
		goto label_cond_b;
	cVar0 = 0x1;
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method private static nodeHasBefore3(J)Z
bool android::icu::impl::coll::CollationBuilder::nodeHasBefore3(long long node)
{
	
	bool cVar0;
	
	//    .param p0, "node"    # J
	if ( !(((0x20 &  node) > 0x0)) )  
		goto label_cond_b;
	cVar0 = 0x1;
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method private static previousIndexFromNode(J)I
int android::icu::impl::coll::CollationBuilder::previousIndexFromNode(long long node)
{
	
	//    .param p0, "node"    # J
	return ((int)(_shrll(node,0x1c)) &  0xfffff);

}
// .method private static sameCEs([JI[JI)Z
bool android::icu::impl::coll::CollationBuilder::sameCEs(std::shared_ptr<long long[]> ces1,int ces1Length,std::shared_ptr<long long[]> ces2,int ces2Length)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int i;
	
	//    .param p0, "ces1"    # [J
	//    .param p1, "ces1Length"    # I
	//    .param p2, "ces2"    # [J
	//    .param p3, "ces2Length"    # I
	cVar0 = 0x0;
	if ( ces1Length == ces2Length )
		goto label_cond_4;
	return cVar0;
	// 5386    .line 1114
label_cond_4:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_12;
	if ( ces1Length <= 0x1f )
		goto label_cond_12;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 5402    .line 1115
label_cond_12:
	i = 0x0;
	//    .local v0, "i":I
label_goto_13:
	if ( i >= ces1Length )
		goto label_cond_21;
	if ( !((ces1[i] > ces2[i])) )  
		goto label_cond_1e;
	return cVar0;
	// 5421    .line 1115
label_cond_1e:
	i = ( i + 0x1);
	goto label_goto_13;
	// 5427    .line 1118
label_cond_21:
	return 0x1;

}
// .method private setCaseBits(Ljava/lang/CharSequence;)V
void android::icu::impl::coll::CollationBuilder::setCaseBits(std::shared_ptr<java::lang::CharSequence> nfdString)
{
	
	int numTailoredPrimaries;
	int i;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	auto cases;
	std::shared_ptr<android::icu::impl::coll::UTF16CollationIterator> baseCEs;
	int baseCEsLength;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int numBasePrimaries;
	auto ce;
	int c;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	long long cases;
	long long ce;
	int strength;
	
	//    .param p1, "nfdString"    # Ljava/lang/CharSequence;
	numTailoredPrimaries = 0x0;
	//    .local v14, "numTailoredPrimaries":I
	i = 0x0;
	//    .local v7, "i":I
label_goto_2:
	if ( i >= this->cesLength )
		goto label_cond_1f;
	if ( android::icu::impl::coll::CollationBuilder::ceStrength(this->ces[i]) )     
		goto label_cond_1c;
	numTailoredPrimaries = ( numTailoredPrimaries + 0x1);
label_cond_1c:
	i = ( i + 0x1);
	goto label_goto_2;
	// 5481    .line 788
label_cond_1f:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_2f;
	if ( numTailoredPrimaries <= 0x1f )
		goto label_cond_2f;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 5499    .line 790
label_cond_2f:
	cases = 0x0;
	//    .local v8, "cases":J
	if ( numTailoredPrimaries <= 0 )
		goto label_cond_bd;
	nfdString;
	//    .local v15, "s":Ljava/lang/CharSequence;
	baseCEs = std::make_shared<android::icu::impl::coll::UTF16CollationIterator>(this->baseData, 0x0, nfdString, 0x0);
	//    .local v4, "baseCEs":Landroid/icu/impl/coll/UTF16CollationIterator;
	baseCEsLength = ( baseCEs->fetchCEs() + -0x1);
	//    .local v5, "baseCEsLength":I
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_6b;
	if ( baseCEsLength < 0 ) 
		goto label_cond_65;
	if ( !((baseCEs->getCE(baseCEsLength) > 0x101000100L)) )  
		goto label_cond_6b;
label_cond_65:
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 5567    .line 797
label_cond_6b:
	//    .local v12, "lastCase":I
	numBasePrimaries = 0x0;
	//    .local v13, "numBasePrimaries":I
	i = 0x0;
label_goto_6e:
	if ( i >= baseCEsLength )
		goto label_cond_b0;
	ce = baseCEs->getCE(i);
	//    .local v10, "ce":J
	if ( !((_ushrll(ce,0x20) > 0x0)) )  
		goto label_cond_a6;
	numBasePrimaries = ( numBasePrimaries + 0x1);
	c = ( _shri((int)(ce),0xe) & 0x3);
	//    .local v6, "c":I
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_99;
	if ( !(c) )  
		goto label_cond_99;
	if ( c == 0x2 )
		goto label_cond_99;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 5631    .line 805
label_cond_99:
	if ( numBasePrimaries >= numTailoredPrimaries )
		goto label_cond_a9;
	cases = (cases | ((long long)(c) << ( ( numBasePrimaries + -0x1) * 0x2)));
	//    .end local v6    # "c":I
label_cond_a6:
label_goto_a6:
	i = ( i + 0x1);
	goto label_goto_6e;
	// 5656    .line 807
	// 5657    .restart local v6    # "c":I
label_cond_a9:
	if ( numBasePrimaries != numTailoredPrimaries )
		goto label_cond_ad;
	c;
	goto label_goto_a6;
	// 5666    .line 809
label_cond_ad:
	if ( c == 0x0 )
		goto label_cond_a6;
	//    .end local v6    # "c":I
	//    .end local v10    # "ce":J
label_cond_b0:
	if ( numBasePrimaries <  numTailoredPrimaries )
		goto label_cond_bd;
	cases = (cases | ((long long)(0x1) << ( ( numTailoredPrimaries + -0x1) * 0x2)));
	//    .end local v4    # "baseCEs":Landroid/icu/impl/coll/UTF16CollationIterator;
	//    .end local v5    # "baseCEsLength":I
	//    .end local v12    # "lastCase":I
	//    .end local v13    # "numBasePrimaries":I
	//    .end local v15    # "s":Ljava/lang/CharSequence;
label_cond_bd:
	i = 0x0;
label_goto_be:
	if ( i >= this->cesLength )
		goto label_cond_102;
	ce = (this->ces[i] & -0xc001);
	//    .restart local v10    # "ce":J
	strength = android::icu::impl::coll::CollationBuilder::ceStrength(ce);
	//    .local v16, "strength":I
	if ( strength )     
		goto label_cond_f4;
	ce = (ce | ((0x3 & cases) << 0xe));
	cases = _ushrll(cases,0x2);
label_cond_e9:
label_goto_e9:
	this->ces[i] = ce;
	i = ( i + 0x1);
	goto label_goto_be;
	// 5767    .line 829
label_cond_f4:
	if ( strength != 0x2 )
		goto label_cond_e9;
	ce = (ce | 0x8000);
	goto label_goto_e9;
	// 5784    .line 841
	// 5785    .end local v10    # "ce":J
	// 5786    .end local v16    # "strength":I
label_cond_102:
	return;

}
// .method private static strengthFromNode(J)I
int android::icu::impl::coll::CollationBuilder::strengthFromNode(long long node)
{
	
	//    .param p0, "node"    # J
	return ( (int)(node) & 0x3);

}
// .method private static strengthFromTempCE(J)I
int android::icu::impl::coll::CollationBuilder::strengthFromTempCE(long long tempCE)
{
	
	//    .param p0, "tempCE"    # J
	return ( _shri((int)(tempCE),0x8) & 0x3);

}
// .method private static tempCEFromIndexAndStrength(II)J
long long android::icu::impl::coll::CollationBuilder::tempCEFromIndexAndStrength(int index,int strength)
{
	
	//    .param p0, "index"    # I
	//    .param p1, "strength"    # I
	return ((((((long long)((0xfe000 &  index)) << 0x2b) +  0x4040000006002000L) +  ((long long)(( index & 0x1fc0)) << 0x2a)) +  (long long)(( ( index & 0x3f) << 0x18))) +  (long long)(( strength << 0x8)));

}
// .method private static weight16FromNode(J)I
int android::icu::impl::coll::CollationBuilder::weight16FromNode(long long node)
{
	
	//    .param p0, "node"    # J
	return ((int)(_shrll(node,0x30)) &  0xffff);

}
// .method private static weight32FromNode(J)J
long long android::icu::impl::coll::CollationBuilder::weight32FromNode(long long node)
{
	
	//    .param p0, "node"    # J
	return _ushrll(node,0x20);

}
// .method addRelation(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V
void android::icu::impl::coll::CollationBuilder::addRelation(int strength,std::shared_ptr<java::lang::CharSequence> prefix,std::shared_ptr<java::lang::CharSequence> str,std::shared_ptr<java::lang::CharSequence> extension)
{
	
	std::shared_ptr<java::lang::String> nfdPrefix;
	std::shared_ptr<java::lang::String> nfdString;
	int nfdLength;
	int c;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	long long ce;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar3;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar4;
	int tempStrength;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	int ce32;
	
	//    .param p1, "strength"    # I
	//    .param p2, "prefix"    # Ljava/lang/CharSequence;
	//    .param p3, "str"    # Ljava/lang/CharSequence;
	//    .param p4, "extension"    # Ljava/lang/CharSequence;
	if ( prefix->length() )     
		goto label_cond_36;
	nfdPrefix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v15, "nfdPrefix":Ljava/lang/String;
label_goto_9:
	nfdString = this->nfd->normalize(str);
	//    .local v16, "nfdString":Ljava/lang/String;
	nfdLength = nfdString->length();
	//    .local v14, "nfdLength":I
	if ( nfdLength <  0x2 )
		goto label_cond_6c;
	c = nfdString->charAt(0x0);
	//    .local v8, "c":C
	if ( android::icu::impl::Normalizer2Impl_S_Hangul::isJamoL(c) )     
		goto label_cond_2d;
	if ( !(android::icu::impl::Normalizer2Impl_S_Hangul::isJamoV(c)) )  
		goto label_cond_41;
label_cond_2d:
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("contractions starting with conjoining Jamo L or V not supported")));
	// throw
	throw cVar0;
	// 5987    .line 447
	// 5988    .end local v8    # "c":C
	// 5989    .end local v14    # "nfdLength":I
	// 5990    .end local v15    # "nfdPrefix":Ljava/lang/String;
	// 5991    .end local v16    # "nfdString":Ljava/lang/String;
label_cond_36:
	nfdPrefix = this->nfd->normalize(prefix);
	//    .restart local v15    # "nfdPrefix":Ljava/lang/String;
	goto label_goto_9;
	// 6006    .line 463
	// 6007    .restart local v8    # "c":C
	// 6008    .restart local v14    # "nfdLength":I
	// 6009    .restart local v16    # "nfdString":Ljava/lang/String;
label_cond_41:
	c = nfdString->charAt(( nfdLength + -0x1));
	if ( android::icu::impl::Normalizer2Impl_S_Hangul::isJamoL(c) )     
		goto label_cond_63;
	if ( !(android::icu::impl::Normalizer2Impl_S_Hangul::isJamoV(c)) )  
		goto label_cond_6c;
	if ( !(android::icu::impl::Normalizer2Impl_S_Hangul::isJamoL(nfdString->charAt(( nfdLength + -0x2)))) )  
		goto label_cond_6c;
label_cond_63:
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("contractions ending with conjoining Jamo L or L+V not supported")));
	// throw
	throw cVar1;
	// 6060    .line 480
	// 6061    .end local v8    # "c":C
label_cond_6c:
	if ( strength == 0xf )
		goto label_cond_e9;
	//    .local v12, "index":I
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_86;
	if ( this->cesLength > 0 ) 
		goto label_cond_86;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 6092    .line 484
label_cond_86:
	ce = this->ces[( this->cesLength + -0x1)];
	//    .local v10, "ce":J
	if ( strength )     
		goto label_cond_af;
	if ( !(( android::icu::impl::coll::CollationBuilder::isTempCE(ce) ^ 0x1)) )  
		goto label_cond_af;
	if ( (_ushrll(ce,0x20) > 0x0) )     
		goto label_cond_af;
	cVar3 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("tailoring primary after ignorables not supported")));
	// throw
	throw cVar3;
	// 6139    .line 490
label_cond_af:
	if ( strength != 0x3 )
		goto label_cond_c3;
	if ( (ce > 0x0) )     
		goto label_cond_c3;
	cVar4 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("tailoring quaternary after tertiary ignorables not supported")));
	// throw
	throw cVar4;
	// 6164    .line 497
label_cond_c3:
	tempStrength = android::icu::impl::coll::CollationBuilder::ceStrength(ce);
	//    .local v17, "tempStrength":I
	if ( strength >= tempStrength )
		goto label_cond_d7;
label_cond_d7:
	this->ces[( this->cesLength + -0x1)] = android::icu::impl::coll::CollationBuilder::tempCEFromIndexAndStrength(this->insertTailoredNodeAfter(this->findOrInsertNodeForCEs(strength), strength), tempStrength);
	//    .end local v10    # "ce":J
	//    .end local v12    # "index":I
	//    .end local v17    # "tempStrength":I
label_cond_e9:
	this->setCaseBits(nfdString);
	//    .local v9, "cesLengthBeforeExtension":I
	if ( !(extension->length()) )  
		goto label_cond_129;
	//    .local v13, "nfdExtension":Ljava/lang/String;
	this->cesLength = this->dataBuilder->getCEs(this->nfd->normalize(extension), this->ces, this->cesLength);
	if ( this->cesLength <= 0x1f )
		goto label_cond_129;
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("extension string adds too many collation elements (more than 31 total)")));
	// throw
	throw cVar5;
	// 6286    .line 516
	// 6287    .end local v13    # "nfdExtension":Ljava/lang/String;
label_cond_129:
	ce32 = -0x1;
	//    .local v7, "ce32":I
	if ( !(nfdPrefix->contentEquals(prefix)) )  
		goto label_cond_13e;
	if ( !(( nfdString->contentEquals(str) ^ 0x1)) )  
		goto label_cond_168;
label_cond_13e:
	if ( !(( this->ignorePrefix(prefix) ^ 0x1)) )  
		goto label_cond_168;
	if ( !(( this->ignoreString(str) ^ 0x1)) )  
		goto label_cond_168;
label_cond_168:
	this->addWithClosure(nfdPrefix, nfdString, this->ces, this->cesLength, ce32);
	this->cesLength = this->cesLength;
	return;

}
// .method addReset(ILjava/lang/CharSequence;)V
void android::icu::impl::coll::CollationBuilder::addReset(int strength,std::shared_ptr<java::lang::CharSequence> str)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	int index;
	long long node;
	long long p;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar4;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar5;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar6;
	int nextIndex;
	int weight16;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar7;
	std::shared_ptr<java::lang::String> cVar8;
	std::shared_ptr<java::lang::AssertionError> cVar10;
	int previousIndex;
	int i;
	int previousStrength;
	std::shared_ptr<java::lang::AssertionError> cVar11;
	int strength;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "strength"    # I
	//    .param p2, "str"    # Ljava/lang/CharSequence;
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_10;
	if ( str->length() )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 6411    .line 114
label_cond_10:
	if ( str->charAt(0x0) != 0xfffe )
		goto label_cond_4c;
	this->ces[0x0] = this->getSpecialResetPosition(str);
	this->cesLength = 0x1;
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_7b;
	if ( !(((this->ces[0x0] & 0xc0c0) > 0x0)) )  
		goto label_cond_7b;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 6478    .line 120
label_cond_4c:
	//    .local v5, "nfdString":Ljava/lang/String;
	this->cesLength = this->dataBuilder->getCEs(this->nfd->normalize(str), this->ces, 0x0);
	if ( this->cesLength <= 0x1f )
		goto label_cond_7b;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("reset position maps to too many collation elements (more than 31)")));
	// throw
	throw cVar2;
	// 6532    .line 127
	// 6533    .end local v5    # "nfdString":Ljava/lang/String;
label_cond_7b:
	if ( strength != 0xf )
		goto label_cond_82;
	return;
	// 6543    .line 130
label_cond_82:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_93;
	if ( strength < 0 ) 
		goto label_cond_8d;
	if ( strength <= 0x2 )
		goto label_cond_93;
label_cond_8d:
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 6564    .line 131
label_cond_93:
	index = this->findOrInsertNodeForCEs(strength);
	//    .local v3, "index":I
	node = this->nodes->elementAti(index);
	//    .local v6, "node":J
label_goto_9f:
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) <= strength )
		goto label_cond_b4;
	index = android::icu::impl::coll::CollationBuilder::previousIndexFromNode(node);
	node = this->nodes->elementAti(index);
	goto label_goto_9f;
	// 6607    .line 142
label_cond_b4:
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) != strength )
		goto label_cond_d9;
	if ( !(android::icu::impl::coll::CollationBuilder::isTailoredNode(node)) )  
		goto label_cond_d9;
	index = android::icu::impl::coll::CollationBuilder::previousIndexFromNode(node);
label_cond_c6:
label_goto_c6:
	this->ces[( this->cesLength + -0x1)] = android::icu::impl::coll::CollationBuilder::tempCEFromIndexAndStrength(index, strength);
	return;
	// 6652    .line 145
label_cond_d9:
	if ( strength )     
		goto label_cond_13b;
	p = android::icu::impl::coll::CollationBuilder::weight32FromNode(node);
	//    .local v8, "p":J
	if ( (p > 0x0) )     
		goto label_cond_ee;
	cVar4 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("reset primary-before ignorable not possible")));
	// throw
	throw cVar4;
	// 6680    .line 152
label_cond_ee:
	if ( (p > this->rootElements->getFirstPrimary()) > 0 ) 
		goto label_cond_103;
	cVar5 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("reset primary-before first non-ignorable not supported")));
	// throw
	throw cVar5;
	// 6705    .line 157
label_cond_103:
	if ( (p > 0xff020200L) )     
		goto label_cond_115;
	cVar6 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("reset primary-before [first trailing] not supported")));
	// throw
	throw cVar6;
	// 6724    .line 162
label_cond_115:
	index = this->findOrInsertNodeForPrimary(this->rootElements->getPrimaryBefore(p, this->baseData->isCompressiblePrimary(p)));
label_goto_12b:
	node = this->nodes->elementAti(index);
	nextIndex = android::icu::impl::coll::CollationBuilder::nextIndexFromNode(node);
	//    .local v4, "nextIndex":I
	if ( !(nextIndex) )  
		goto label_cond_c6;
	index = nextIndex;
	goto label_goto_12b;
	// 6773    .line 174
	// 6774    .end local v4    # "nextIndex":I
	// 6775    .end local v8    # "p":J
label_cond_13b:
	index = this->findCommonNode(index, 0x1);
	if ( strength <  0x2 )
		goto label_cond_14e;
	index = this->findCommonNode(index, 0x2);
label_cond_14e:
	node = this->nodes->elementAti(index);
	if ( android::icu::impl::coll::CollationBuilder::strengthFromNode(node) != strength )
		goto label_cond_1ef;
	weight16 = android::icu::impl::coll::CollationBuilder::weight16FromNode(node);
	//    .local v13, "weight16":I
	if ( weight16 )     
		goto label_cond_176;
	if ( strength != 0x1 )
		goto label_cond_172;
	cVar8 = std::make_shared<java::lang::String>(std::make_shared<char[]>("reset secondary-before secondary ignorable not possible"));
label_goto_16e:
	cVar7 = std::make_shared<java::lang::UnsupportedOperationException>(cVar8);
	// throw
	throw cVar7;
	// 6848    .line 188
label_cond_172:
	cVar8 = std::make_shared<java::lang::String>(std::make_shared<char[]>("reset tertiary-before completely ignorable not possible"));
	goto label_goto_16e;
	// 6854    .line 190
label_cond_176:
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_184;
	if ( weight16 >  0x100 )
		goto label_cond_184;
	cVar10 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar10;
	// 6870    .line 194
label_cond_184:
	weight16 = this->getWeight16Before(index, node, strength);
	previousIndex = android::icu::impl::coll::CollationBuilder::previousIndexFromNode(node);
	//    .local v10, "previousIndex":I
	i = previousIndex;
	//    .local v2, "i":I
label_goto_191:
	node = this->nodes->elementAti(i);
	previousStrength = android::icu::impl::coll::CollationBuilder::strengthFromNode(node);
	//    .local v11, "previousStrength":I
	if ( previousStrength >= strength )
		goto label_cond_1c8;
	if ( android::icu::impl::coll::CollationBuilder::_assertionsDisabled )     
		goto label_cond_1b1;
	if ( weight16 >= 0x500 )
		goto label_cond_1b1;
	if ( i == previousIndex )
		goto label_cond_1b1;
	cVar11 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar11;
	// 6928    .line 207
label_cond_1b1:
	//    .local v12, "previousWeight16":I
label_goto_1b3:
	if ( previousWeight16 != weight16 )
		goto label_cond_1de;
	index = previousIndex;
	//    .end local v2    # "i":I
	//    .end local v10    # "previousIndex":I
	//    .end local v11    # "previousStrength":I
	//    .end local v12    # "previousWeight16":I
label_goto_1b6:
	strength = android::icu::impl::coll::CollationBuilder::ceStrength(this->ces[( this->cesLength + -0x1)]);
	goto label_goto_c6;
	// 6964    .line 209
	// 6965    .restart local v2    # "i":I
	// 6966    .restart local v10    # "previousIndex":I
	// 6967    .restart local v11    # "previousStrength":I
label_cond_1c8:
	if ( previousStrength != strength )
		goto label_cond_1d9;
	if ( !(( android::icu::impl::coll::CollationBuilder::isTailoredNode(node) ^ 0x1)) )  
		goto label_cond_1d9;
	//    .restart local v12    # "previousWeight16":I
	goto label_goto_1b3;
	// 6989    .line 198
	// 6990    .end local v12    # "previousWeight16":I
label_cond_1d9:
	i = android::icu::impl::coll::CollationBuilder::previousIndexFromNode(node);
	goto label_goto_191;
	// 6998    .line 222
	// 6999    .restart local v12    # "previousWeight16":I
label_cond_1de:
	node = (android::icu::impl::coll::CollationBuilder::nodeFromWeight16(weight16) | android::icu::impl::coll::CollationBuilder::nodeFromStrength(strength));
	index = this->insertNodeBetween(previousIndex, index, node);
	goto label_goto_1b6;
	// 7020    .line 227
	// 7021    .end local v2    # "i":I
	// 7022    .end local v10    # "previousIndex":I
	// 7023    .end local v11    # "previousStrength":I
	// 7024    .end local v12    # "previousWeight16":I
	// 7025    .end local v13    # "weight16":I
label_cond_1ef:
	//    .restart local v13    # "weight16":I
	index = this->findOrInsertWeakNode(index, this->getWeight16Before(index, node, strength), strength);
	goto label_goto_1b6;

}
// .method optimize(Landroid/icu/text/UnicodeSet;)V
void android::icu::impl::coll::CollationBuilder::optimize(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	this->optimizeSet->addAll(set);
	return;

}
// .method public parseAndBuild(Ljava/lang/String;)Landroid/icu/impl/coll/CollationTailoring;
std::shared_ptr<android::icu::impl::coll::CollationTailoring> android::icu::impl::coll::CollationBuilder::parseAndBuild(std::shared_ptr<java::lang::String> ruleString)
{
	
	int cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	std::shared_ptr<android::icu::impl::coll::CollationTailoring> tailoring;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser> parser;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar2;
	std::shared_ptr<android::icu::impl::coll::CollationBuilder_S_BundleImporter> cVar3;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings;
	
	//    .param p1, "ruleString"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 7066        value = {
	// 7067            Ljava/text/ParseException;
	// 7068        }
	// 7069    .end annotation
	cVar0 = 0x0;
	if ( this->baseData->rootElements )     
		goto label_cond_11;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("missing root elements data, tailoring not supported")));
	// throw
	throw cVar1;
	// 7094    .line 66
label_cond_11:
	tailoring = std::make_shared<android::icu::impl::coll::CollationTailoring>(this->base->settings);
	//    .local v2, "tailoring":Landroid/icu/impl/coll/CollationTailoring;
	parser = std::make_shared<android::icu::impl::coll::CollationRuleParser>(this->baseData);
	//    .local v1, "parser":Landroid/icu/impl/coll/CollationRuleParser;
	cVar2 = this->base->settings->readOnly();
	cVar2->checkCast("android::icu::impl::coll::CollationSettings");
	this->variableTop = cVar2->variableTop;
	parser->setSink(this);
	cVar3 = std::make_shared<android::icu::impl::coll::CollationBuilder_S_BundleImporter>();
	parser->setImporter(cVar3);
	ownedSettings = tailoring->settings->copyOnWrite();
	ownedSettings->checkCast("android::icu::impl::coll::CollationSettings");
	//    .local v0, "ownedSettings":Landroid/icu/impl/coll/CollationSettings;
	parser->parse(ruleString, ownedSettings);
	if ( !(this->dataBuilder->hasMappings()) )  
		goto label_cond_a2;
	this->makeTailoredCEs();
	this->closeOverComposites();
	this->finalizeCEs();
	this->optimizeSet->add(cVar0, 0x7f);
	this->optimizeSet->add(0xc0, 0xff);
	this->optimizeSet->remove(0xac00, 0xd7a3);
	this->dataBuilder->optimize(this->optimizeSet);
	tailoring->ensureOwnedData();
	if ( !(this->fastLatinEnabled) )  
		goto label_cond_84;
	this->dataBuilder->enableFastLatin();
label_cond_84:
	this->dataBuilder->build(tailoring->ownedData);
	this->dataBuilder = 0x0;
label_goto_8d:
	ownedSettings->fastLatinOptions = android::icu::impl::coll::CollationFastLatin::getOptions(tailoring->data, ownedSettings, ownedSettings->fastLatinPrimaries);
	tailoring->setRules(ruleString);
	tailoring->setVersion(this->base->version, cVar0);
	return tailoring;
	// 7251    .line 97
label_cond_a2:
	tailoring->data = this->baseData;
	goto label_goto_8d;

}
// .method suppressContractions(Landroid/icu/text/UnicodeSet;)V
void android::icu::impl::coll::CollationBuilder::suppressContractions(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	this->dataBuilder->suppressContractions(set);
	return;

}


