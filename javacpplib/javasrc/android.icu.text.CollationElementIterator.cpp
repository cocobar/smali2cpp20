// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CollationElementIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.CharacterIteratorWrapper.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "android.icu.impl.coll.CollationTailoring.h"
#include "android.icu.impl.coll.ContractionsAndExpansions.h"
#include "android.icu.impl.coll.FCDIterCollationIterator.h"
#include "android.icu.impl.coll.FCDUTF16CollationIterator.h"
#include "android.icu.impl.coll.IterCollationIterator.h"
#include "android.icu.impl.coll.SharedObject_S_Reference.h"
#include "android.icu.impl.coll.SharedObject.h"
#include "android.icu.impl.coll.UTF16CollationIterator.h"
#include "android.icu.impl.coll.UVector32.h"
#include "android.icu.text.CollationElementIterator_S_MaxExpSink.h"
#include "android.icu.text.CollationElementIterator.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "android.icu.text.UCharacterIterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Character.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.CharacterIterator.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"

static android::icu::text::CollationElementIterator::_assertionsDisabled;
static android::icu::text::CollationElementIterator::IGNORABLE = 0x0;
static android::icu::text::CollationElementIterator::NULLORDER = -0x1;
// .method static synthetic -wrap0(J)Z
bool android::icu::text::CollationElementIterator::_wrap0(long long ce)
{
	
	//    .param p0, "ce"    # J
	return android::icu::text::CollationElementIterator::ceNeedsTwoParts(ce);

}
// .method static synthetic -wrap1(JI)I
int android::icu::text::CollationElementIterator::_wrap1(long long p,int lower32)
{
	
	//    .param p0, "p"    # J
	//    .param p2, "lower32"    # I
	return android::icu::text::CollationElementIterator::getFirstHalf(p, lower32);

}
// .method static synthetic -wrap2(JI)I
int android::icu::text::CollationElementIterator::_wrap2(long long p,int lower32)
{
	
	//    .param p0, "p"    # J
	//    .param p2, "lower32"    # I
	return android::icu::text::CollationElementIterator::getSecondHalf(p, lower32);

}
// .method static constructor <clinit>()V
void android::icu::text::CollationElementIterator::static_cinit()
{
	
	android::icu::text::CollationElementIterator::_assertionsDisabled = ( android::icu::text::CollationElementIterator()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method private constructor <init>(Landroid/icu/text/RuleBasedCollator;)V
android::icu::text::CollationElementIterator::CollationElementIterator(std::shared_ptr<android::icu::text::RuleBasedCollator> collator)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationIterator> cVar0;
	int cVar1;
	
	//    .param p1, "collator"    # Landroid/icu/text/RuleBasedCollator;
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 103    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->iter_ = cVar0;
	this->rbc_ = collator;
	this->otherHalf_ = cVar1;
	this->dir_ = cVar1;
	this->offsets_ = cVar0;
	return;

}
// .method constructor <init>(Landroid/icu/text/UCharacterIterator;Landroid/icu/text/RuleBasedCollator;)V
android::icu::text::CollationElementIterator::CollationElementIterator(std::shared_ptr<android::icu::text::UCharacterIterator> source,std::shared_ptr<android::icu::text::RuleBasedCollator> collator)
{
	
	//    .param p1, "source"    # Landroid/icu/text/UCharacterIterator;
	//    .param p2, "collator"    # Landroid/icu/text/RuleBasedCollator;
	android::icu::text::CollationElementIterator::(collator);
	this->setText(source);
	return;

}
// .method constructor <init>(Ljava/lang/String;Landroid/icu/text/RuleBasedCollator;)V
android::icu::text::CollationElementIterator::CollationElementIterator(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::RuleBasedCollator> collator)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "collator"    # Landroid/icu/text/RuleBasedCollator;
	android::icu::text::CollationElementIterator::(collator);
	this->setText(source);
	return;

}
// .method constructor <init>(Ljava/text/CharacterIterator;Landroid/icu/text/RuleBasedCollator;)V
android::icu::text::CollationElementIterator::CollationElementIterator(std::shared_ptr<java::text::CharacterIterator> source,std::shared_ptr<android::icu::text::RuleBasedCollator> collator)
{
	
	//    .param p1, "source"    # Ljava/text/CharacterIterator;
	//    .param p2, "collator"    # Landroid/icu/text/RuleBasedCollator;
	android::icu::text::CollationElementIterator::(collator);
	this->setText(source);
	return;

}
// .method private static final ceNeedsTwoParts(J)Z
bool android::icu::text::CollationElementIterator::ceNeedsTwoParts(long long ce)
{
	
	bool cVar0;
	
	//    .param p0, "ce"    # J
	if ( !(((0xffff00ff003fL &  ce) > 0x0)) )  
		goto label_cond_e;
	cVar0 = 0x1;
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method static final computeMaxExpansions(Landroid/icu/impl/coll/CollationData;)Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::Integer,java::lang::Integer>> android::icu::text::CollationElementIterator::computeMaxExpansions(std::shared_ptr<android::icu::impl::coll::CollationData> data)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<java::util::HashMap> maxExpansions;
	std::shared_ptr<android::icu::text::CollationElementIterator_S_MaxExpSink> sink;
	std::shared_ptr<android::icu::impl::coll::ContractionsAndExpansions> cVar1;
	
	//    .param p0, "data"    # Landroid/icu/impl/coll/CollationData;
	//    .annotation system Ldalvik/annotation/Signature;
	// 203        value = {
	// 204            "(",
	// 205            "Landroid/icu/impl/coll/CollationData;",
	// 206            ")",
	// 207            "Ljava/util/Map",
	// 208            "<",
	// 209            "Ljava/lang/Integer;",
	// 210            "Ljava/lang/Integer;",
	// 211            ">;"
	// 212        }
	// 213    .end annotation
	cVar0 = 0x0;
	maxExpansions = std::make_shared<java::util::HashMap>();
	//    .local v0, "maxExpansions":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/lang/Integer;>;"
	sink = std::make_shared<android::icu::text::CollationElementIterator_S_MaxExpSink>(maxExpansions);
	//    .local v1, "sink":Landroid/icu/text/CollationElementIterator$MaxExpSink;
	cVar1 = std::make_shared<android::icu::impl::coll::ContractionsAndExpansions>(cVar0, cVar0, sink, 0x1);
	cVar1->forData(data);
	return maxExpansions;

}
// .method private static final getFirstHalf(JI)I
int android::icu::text::CollationElementIterator::getFirstHalf(long long p,int lower32)
{
	
	//    .param p0, "p"    # J
	//    .param p2, "lower32"    # I
	return ((((int)(p) &  -0x10000) |  (_shri(lower32,0x10) &  0xff00)) |  ( _shri(lower32,0x8) & 0xff));

}
// .method static getMaxExpansion(Ljava/util/Map;I)I
int android::icu::text::CollationElementIterator::getMaxExpansion(std::shared_ptr<java::util::Map<java::lang::Integer,java::lang::Integer>> maxExpansions,int order)
{
	
	int cVar0;
	std::shared_ptr<java::lang::Integer> max;
	
	//    .param p1, "order"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 277        value = {
	// 278            "(",
	// 279            "Ljava/util/Map",
	// 280            "<",
	// 281            "Ljava/lang/Integer;",
	// 282            "Ljava/lang/Integer;",
	// 283            ">;I)I"
	// 284        }
	// 285    .end annotation
	//    .local p0, "maxExpansions":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/lang/Integer;>;"
	cVar0 = 0x1;
	if ( order )     
		goto label_cond_4;
	return cVar0;
	// 297    .line 634
label_cond_4:
	if ( !(maxExpansions) )  
		goto label_cond_17;
	max = maxExpansions->get(java::lang::Integer::valueOf(order));
	max->checkCast("java::lang::Integer");
	//    .local v0, "max":Ljava/lang/Integer;
	if ( !(max) )  
		goto label_cond_17;
	return max->intValue();
	// 321    .line 637
	// 322    .end local v0    # "max":Ljava/lang/Integer;
label_cond_17:
	if ( ( order & 0xc0) != 0xc0 )
		goto label_cond_1f;
	return 0x2;
	// 335    .line 641
label_cond_1f:
	return cVar0;

}
// .method private static final getSecondHalf(JI)I
int android::icu::text::CollationElementIterator::getSecondHalf(long long p,int lower32)
{
	
	//    .param p0, "p"    # J
	//    .param p2, "lower32"    # I
	return ((( (int)(p) << 0x10) |  (_shri(lower32,0x8) &  0xff00)) |  ( lower32 & 0x3f));

}
// .method private normalizeDir()B
unsigned char android::icu::text::CollationElementIterator::normalizeDir()
{
	
	unsigned char cVar0;
	
	if ( this->dir_ != 0x1 )
		goto label_cond_7;
	cVar0 = 0x0;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = this->dir_;
	goto label_goto_6;

}
// .method public static final primaryOrder(I)I
int android::icu::text::CollationElementIterator::primaryOrder(int ce)
{
	
	//    .param p0, "ce"    # I
	return (_ushri(ce,0x10) &  0xffff);

}
// .method public static final secondaryOrder(I)I
int android::icu::text::CollationElementIterator::secondaryOrder(int ce)
{
	
	//    .param p0, "ce"    # I
	return ( _ushri(ce,0x8) & 0xff);

}
// .method public static final tertiaryOrder(I)I
int android::icu::text::CollationElementIterator::tertiaryOrder(int ce)
{
	
	//    .param p0, "ce"    # I
	return ( ce & 0xff);

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::CollationElementIterator::equals(std::shared_ptr<java::lang::Object> that)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::CollationElementIterator> thatceiter;
	
	//    .param p1, "that"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( that != this )
		goto label_cond_5;
	return 0x1;
	// 444    .line 662
label_cond_5:
	if ( !(that->instanceOf("android::icu::text::CollationElementIterator")) )  
		goto label_cond_39;
	thatceiter = that;
	thatceiter->checkCast("android::icu::text::CollationElementIterator");
	//    .local v0, "thatceiter":Landroid/icu/text/CollationElementIterator;
	if ( !(this->rbc_->equals(thatceiter->rbc_)) )  
		goto label_cond_38;
	if ( this->otherHalf_ != thatceiter->otherHalf_ )
		goto label_cond_38;
	if ( this->normalizeDir() != thatceiter->normalizeDir() )
		goto label_cond_38;
	if ( !(this->string_->equals(thatceiter->string_)) )  
		goto label_cond_38;
	cVar1 = this->iter_->equals(thatceiter->iter_);
label_cond_38:
	return cVar1;
	// 510    .line 670
	// 511    .end local v0    # "thatceiter":Landroid/icu/text/CollationElementIterator;
label_cond_39:
	return cVar1;

}
// .method public getMaxExpansion(I)I
int android::icu::text::CollationElementIterator::getMaxExpansion(int ce)
{
	
	//    .param p1, "ce"    # I
	return android::icu::text::CollationElementIterator::getMaxExpansion(this->rbc_->tailoring->maxExpansions, ce);

}
// .method public getOffset()I
int android::icu::text::CollationElementIterator::getOffset()
{
	
	int i;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( this->dir_ >= 0 )
		goto label_cond_37;
	if ( !(this->offsets_) )  
		goto label_cond_37;
	if ( !(( this->offsets_->isEmpty() ^ 0x1)) )  
		goto label_cond_37;
	i = this->iter_->getCEsLength();
	//    .local v0, "i":I
	if ( !(this->otherHalf_) )  
		goto label_cond_1e;
	i = ( i + 0x1);
label_cond_1e:
	if ( android::icu::text::CollationElementIterator::_assertionsDisabled )     
		goto label_cond_30;
	if ( i <  this->offsets_->size() )
		goto label_cond_30;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 594    .line 289
label_cond_30:
	return this->offsets_->elementAti(i);
	// 604    .line 291
	// 605    .end local v0    # "i":I
label_cond_37:
	return this->iter_->getOffset();

}
// .method public getRuleBasedCollator()Landroid/icu/text/RuleBasedCollator;
std::shared_ptr<android::icu::text::RuleBasedCollator> android::icu::text::CollationElementIterator::getRuleBasedCollator()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 619    .end annotation
	return this->rbc_;

}
// .method public hashCode()I
int android::icu::text::CollationElementIterator::hashCode()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 631    .end annotation
	if ( android::icu::text::CollationElementIterator::_assertionsDisabled )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hashCode not designed")));
	// throw
	throw cVar0;
	// 647    .line 684
label_cond_d:
	return 0x2a;

}
// .method public next()I
int android::icu::text::CollationElementIterator::next()
{
	
	unsigned char cVar0;
	int cVar1;
	auto ce;
	long long p;
	int lower32;
	int secondHalf;
	std::shared_ptr<java::lang::IllegalStateException> cVar2;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	if ( this->dir_ <= cVar1 )
		goto label_cond_10;
	if ( !(this->otherHalf_) )  
		goto label_cond_16;
	//    .local v4, "oh":I
	this->otherHalf_ = 0x0;
	return this->otherHalf_;
	// 684    .line 319
	// 685    .end local v4    # "oh":I
label_cond_10:
	if ( this->dir_ != cVar1 )
		goto label_cond_2c;
	this->dir_ = cVar0;
label_cond_16:
label_goto_16:
	this->iter_->clearCEsIfNoneRemaining();
	ce = this->iter_->nextCE();
	//    .local v0, "ce":J
	if ( (ce > 0x101000100L) )     
		goto label_cond_3c;
	return -0x1;
	// 721    .line 322
	// 722    .end local v0    # "ce":J
label_cond_2c:
	if ( this->dir_ )     
		goto label_cond_33;
	this->dir_ = cVar0;
	goto label_goto_16;
	// 733    .line 327
label_cond_33:
	cVar2 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal change of direction")));
	// throw
	throw cVar2;
	// 743    .line 337
	// 744    .restart local v0    # "ce":J
label_cond_3c:
	p = _ushrll(ce,0x20);
	//    .local v6, "p":J
	lower32 = (int)(ce);
	//    .local v3, "lower32":I
	//    .local v2, "firstHalf":I
	secondHalf = android::icu::text::CollationElementIterator::getSecondHalf(p, lower32);
	//    .local v5, "secondHalf":I
	if ( !(secondHalf) )  
		goto label_cond_4f;
	this->otherHalf_ = ( secondHalf | 0xc0);
label_cond_4f:
	return android::icu::text::CollationElementIterator::getFirstHalf(p, lower32);

}
// .method public previous()I
int android::icu::text::CollationElementIterator::previous()
{
	
	unsigned char cVar0;
	std::shared_ptr<android::icu::impl::coll::UVector32> cVar1;
	auto ce;
	long long p;
	int lower32;
	int firstHalf;
	int secondHalf;
	std::shared_ptr<java::lang::IllegalStateException> cVar2;
	
	cVar0 = -0x1;
	if ( this->dir_ >= 0 )
		goto label_cond_f;
	if ( !(this->otherHalf_) )  
		goto label_cond_20;
	//    .local v5, "oh":I
	this->otherHalf_ = 0x0;
	return this->otherHalf_;
	// 808    .line 373
	// 809    .end local v5    # "oh":I
label_cond_f:
	if ( this->dir_ )     
		goto label_cond_4b;
	this->iter_->resetToOffset(this->string_->length());
	this->dir_ = cVar0;
label_cond_20:
label_goto_20:
	if ( this->offsets_ )     
		goto label_cond_2b;
	cVar1 = std::make_shared<android::icu::impl::coll::UVector32>();
	this->offsets_ = cVar1;
label_cond_2b:
	if ( this->iter_->getCEsLength() )     
		goto label_cond_5c;
	//    .local v3, "limitOffset":I
label_goto_39:
	ce = this->iter_->previousCE(this->offsets_);
	//    .local v0, "ce":J
	if ( (ce > 0x101000100L) )     
		goto label_cond_5e;
	return cVar0;
	// 881    .line 376
	// 882    .end local v0    # "ce":J
	// 883    .end local v3    # "limitOffset":I
label_cond_4b:
	if ( this->dir_ != 0x1 )
		goto label_cond_53;
	this->dir_ = cVar0;
	goto label_goto_20;
	// 896    .line 381
label_cond_53:
	cVar2 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal change of direction")));
	// throw
	throw cVar2;
	// 906    .line 390
label_cond_5c:
	0x0;
	//    .restart local v3    # "limitOffset":I
	goto label_goto_39;
	// 913    .line 396
	// 914    .restart local v0    # "ce":J
label_cond_5e:
	p = _ushrll(ce,0x20);
	//    .local v6, "p":J
	lower32 = (int)(ce);
	//    .local v4, "lower32":I
	firstHalf = android::icu::text::CollationElementIterator::getFirstHalf(p, lower32);
	//    .local v2, "firstHalf":I
	secondHalf = android::icu::text::CollationElementIterator::getSecondHalf(p, lower32);
	//    .local v8, "secondHalf":I
	if ( !(secondHalf) )  
		goto label_cond_8a;
	if ( !(this->offsets_->isEmpty()) )  
		goto label_cond_85;
	this->offsets_->addElement(this->iter_->getOffset());
	this->offsets_->addElement(this->iter_->getOffset());
label_cond_85:
	this->otherHalf_ = firstHalf;
	return ( secondHalf | 0xc0);
	// 974    .line 411
label_cond_8a:
	return firstHalf;

}
// .method public reset()V
void android::icu::text::CollationElementIterator::reset()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->iter_->resetToOffset(cVar0);
	this->otherHalf_ = cVar0;
	this->dir_ = cVar0;
	return;

}
// .method public setOffset(I)V
void android::icu::text::CollationElementIterator::setOffset(int cVar0)
{
	
	int offset;
	int c;
	int lastSafeOffset;
	int cVar0;
	
	//    .param p1, "newOffset"    # I
	if ( cVar0 <= 0 )
		goto label_cond_4b;
	if ( cVar0 >= this->string_->length() )
		goto label_cond_4b;
	offset = cVar0;
	//    .local v2, "offset":I
label_goto_c:
	c = this->string_->charAt(offset);
	//    .local v0, "c":C
	if ( !(this->rbc_->isUnsafe(c)) )  
		goto label_cond_30;
	if ( !(java::lang::Character::isHighSurrogate(c)) )  
		goto label_cond_56;
	if ( !(( this->rbc_->isUnsafe(this->string_->codePointAt(offset)) ^ 0x1)) )  
		goto label_cond_56;
label_cond_30:
	if ( offset >= cVar0 )
		goto label_cond_4b;
	lastSafeOffset = offset;
	//    .local v1, "lastSafeOffset":I
label_cond_33:
	this->iter_->resetToOffset(lastSafeOffset);
label_cond_38:
	this->iter_->nextCE();
	offset = this->iter_->getOffset();
	if ( offset == lastSafeOffset )
		goto label_cond_38;
	if ( offset >  cVar0 )
		goto label_cond_48;
	lastSafeOffset = offset;
label_cond_48:
	if ( offset <  cVar0 )
		goto label_cond_33;
	cVar0 = lastSafeOffset;
	//    .end local v0    # "c":C
	//    .end local v1    # "lastSafeOffset":I
	//    .end local v2    # "offset":I
label_cond_4b:
	this->iter_->resetToOffset(cVar0);
	this->otherHalf_ = 0x0;
	this->dir_ = 0x1;
	return;
	// 1126    .line 460
	// 1127    .restart local v0    # "c":C
	// 1128    .restart local v2    # "offset":I
label_cond_56:
	offset = ( offset + -0x1);
	if ( offset <= 0 )
		goto label_cond_30;
	goto label_goto_c;

}
// .method public setText(Landroid/icu/text/UCharacterIterator;)V
void android::icu::text::CollationElementIterator::setText(std::shared_ptr<android::icu::text::UCharacterIterator> source)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::UCharacterIterator> src;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar1;
	bool numeric;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar2;
	std::shared_ptr<android::icu::impl::coll::IterCollationIterator> newIter;
	std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator> newIter;
	
	//    .param p1, "source"    # Landroid/icu/text/UCharacterIterator;
	cVar0 = 0x0;
	this->string_ = source->getText();
	try {
	//label_try_start_7:
	src = source->clone();
	src->checkCast("android::icu::text::UCharacterIterator");
	//label_try_end_d:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3e;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_7 .. :try_end_d} :catch_3e
	//    .local v3, "src":Landroid/icu/text/UCharacterIterator;
	src->setToStart();
	cVar1 = this->rbc_->settings->readOnly();
	cVar1->checkCast("android::icu::impl::coll::CollationSettings");
	numeric = cVar1->isNumeric();
	//    .local v2, "numeric":Z
	cVar2 = this->rbc_->settings->readOnly();
	cVar2->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !(cVar2->dontCheckFCD()) )  
		goto label_cond_47;
	newIter = std::make_shared<android::icu::impl::coll::IterCollationIterator>(this->rbc_->data, numeric, src);
	//    .local v1, "newIter":Landroid/icu/impl/coll/CollationIterator;
label_goto_37:
	this->iter_ = newIter;
	this->otherHalf_ = cVar0;
	this->dir_ = cVar0;
	return;
	// 1222    .line 524
	// 1223    .end local v1    # "newIter":Landroid/icu/impl/coll/CollationIterator;
	// 1224    .end local v2    # "numeric":Z
	// 1225    .end local v3    # "src":Landroid/icu/text/UCharacterIterator;
label_catch_3e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	this->setText(source->getText());
	return;
	// 1240    .line 536
	// 1241    .end local v0    # "e":Ljava/lang/CloneNotSupportedException;
	// 1242    .restart local v2    # "numeric":Z
	// 1243    .restart local v3    # "src":Landroid/icu/text/UCharacterIterator;
label_cond_47:
	newIter = std::make_shared<android::icu::impl::coll::FCDIterCollationIterator>(this->rbc_->data, numeric, src, cVar0);
	//    .restart local v1    # "newIter":Landroid/icu/impl/coll/CollationIterator;
	goto label_goto_37;

}
// .method public setText(Ljava/lang/String;)V
void android::icu::text::CollationElementIterator::setText(std::shared_ptr<java::lang::String> source)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar1;
	bool numeric;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar2;
	std::shared_ptr<android::icu::impl::coll::UTF16CollationIterator> newIter;
	std::shared_ptr<android::icu::impl::coll::FCDUTF16CollationIterator> newIter;
	
	//    .param p1, "source"    # Ljava/lang/String;
	cVar0 = 0x0;
	this->string_ = source;
	cVar1 = this->rbc_->settings->readOnly();
	cVar1->checkCast("android::icu::impl::coll::CollationSettings");
	numeric = cVar1->isNumeric();
	//    .local v1, "numeric":Z
	cVar2 = this->rbc_->settings->readOnly();
	cVar2->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !(cVar2->dontCheckFCD()) )  
		goto label_cond_33;
	newIter = std::make_shared<android::icu::impl::coll::UTF16CollationIterator>(this->rbc_->data, numeric, this->string_, cVar0);
	//    .local v0, "newIter":Landroid/icu/impl/coll/CollationIterator;
label_goto_2c:
	this->iter_ = newIter;
	this->otherHalf_ = cVar0;
	this->dir_ = cVar0;
	return;
	// 1325    .line 499
	// 1326    .end local v0    # "newIter":Landroid/icu/impl/coll/CollationIterator;
label_cond_33:
	newIter = std::make_shared<android::icu::impl::coll::FCDUTF16CollationIterator>(this->rbc_->data, numeric, this->string_, cVar0);
	//    .restart local v0    # "newIter":Landroid/icu/impl/coll/CollationIterator;
	goto label_goto_2c;

}
// .method public setText(Ljava/text/CharacterIterator;)V
void android::icu::text::CollationElementIterator::setText(std::shared_ptr<java::text::CharacterIterator> source)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::CharacterIteratorWrapper> src;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar1;
	bool numeric;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar2;
	std::shared_ptr<android::icu::impl::coll::IterCollationIterator> newIter;
	std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator> newIter;
	
	//    .param p1, "source"    # Ljava/text/CharacterIterator;
	cVar0 = 0x0;
	src = std::make_shared<android::icu::impl::CharacterIteratorWrapper>(source);
	//    .local v2, "src":Landroid/icu/text/UCharacterIterator;
	src->setToStart();
	this->string_ = src->getText();
	cVar1 = this->rbc_->settings->readOnly();
	cVar1->checkCast("android::icu::impl::coll::CollationSettings");
	numeric = cVar1->isNumeric();
	//    .local v1, "numeric":Z
	cVar2 = this->rbc_->settings->readOnly();
	cVar2->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !(cVar2->dontCheckFCD()) )  
		goto label_cond_3d;
	newIter = std::make_shared<android::icu::impl::coll::IterCollationIterator>(this->rbc_->data, numeric, src);
	//    .local v0, "newIter":Landroid/icu/impl/coll/CollationIterator;
label_goto_36:
	this->iter_ = newIter;
	this->otherHalf_ = cVar0;
	this->dir_ = cVar0;
	return;
	// 1421    .line 563
	// 1422    .end local v0    # "newIter":Landroid/icu/impl/coll/CollationIterator;
label_cond_3d:
	newIter = std::make_shared<android::icu::impl::coll::FCDIterCollationIterator>(this->rbc_->data, numeric, src, cVar0);
	//    .restart local v0    # "newIter":Landroid/icu/impl/coll/CollationIterator;
	goto label_goto_36;

}


