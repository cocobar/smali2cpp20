// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\FCDIterCollationIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationFCD.h"
#include "android.icu.impl.coll.FCDIterCollationIterator_S_State.h"
#include "android.icu.impl.coll.FCDIterCollationIterator.h"
#include "android.icu.impl.coll.IterCollationIterator.h"
#include "android.icu.text.UCharacterIterator.h"
#include "java.lang.Appendable.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.StringBuilder.h"

static android::icu::impl::coll::FCDIterCollationIterator::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::coll::FCDIterCollationIterator::static_cinit()
{
	
	android::icu::impl::coll::FCDIterCollationIterator::_assertionsDisabled = ( android::icu::impl::coll::FCDIterCollationIterator()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(Landroid/icu/impl/coll/CollationData;ZLandroid/icu/text/UCharacterIterator;I)V
android::icu::impl::coll::FCDIterCollationIterator::FCDIterCollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> data,bool numeric,std::shared_ptr<android::icu::text::UCharacterIterator> ui,int startIndex)
{
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "numeric"    # Z
	//    .param p3, "ui"    # Landroid/icu/text/UCharacterIterator;
	//    .param p4, "startIndex"    # I
	android::icu::impl::coll::IterCollationIterator::(data, numeric, ui);
	this->state = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_FWD;
	this->start = startIndex;
	this->nfcImpl = data->nfcImpl;
	return;

}
// .method private nextSegment()Z
bool android::icu::impl::coll::FCDIterCollationIterator::nextSegment()
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int c;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	int fcd16;
	int leadCC;
	int prevCC;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( android::icu::impl::coll::FCDIterCollationIterator::_assertionsDisabled )     
		goto label_cond_12;
	if ( this->state == android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_FWD )
		goto label_cond_12;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 106    .line 261
label_cond_12:
	this->pos = this->iter->getIndex();
	if ( this->s )     
		goto label_cond_49;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	this->s = cVar3;
label_goto_25:
	//    .local v3, "prevCC":I
label_cond_26:
	c = this->iter->nextCodePoint();
	//    .local v0, "c":I
	if ( c >= 0 )
		goto label_cond_4f;
label_goto_2e:
	this->limit = (this->pos +  this->s->length());
	if ( android::icu::impl::coll::FCDIterCollationIterator::_assertionsDisabled )     
		goto label_cond_b5;
	if ( this->pos != this->limit )
		goto label_cond_b5;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 176    .line 266
	// 177    .end local v0    # "c":I
	// 178    .end local v3    # "prevCC":I
label_cond_49:
	this->s->setLength(cVar1);
	goto label_goto_25;
	// 186    .line 273
	// 187    .restart local v0    # "c":I
	// 188    .restart local v3    # "prevCC":I
label_cond_4f:
	fcd16 = this->nfcImpl->getFCD16(c);
	//    .local v1, "fcd16":I
	leadCC = _shri(fcd16,0x8);
	//    .local v2, "leadCC":I
	if ( leadCC )     
		goto label_cond_67;
	if ( !(this->s->length()) )  
		goto label_cond_67;
	this->iter->previousCodePoint();
	goto label_goto_2e;
	// 219    .line 280
label_cond_67:
	this->s->appendCodePoint(c);
	if ( !(leadCC) )  
		goto label_cond_af;
	if ( prevCC >  leadCC )
		goto label_cond_76;
	if ( !(android::icu::impl::coll::CollationFCD::isFCD16OfTibetanCompositeVowel(fcd16)) )  
		goto label_cond_af;
label_cond_76:
label_goto_76:
	c = this->iter->nextCodePoint();
	if ( c >= 0 )
		goto label_cond_99;
label_goto_7e:
	this->normalize(this->s);
	this->start = this->pos;
	this->limit = (this->pos +  this->s->length());
	this->state = android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_LIMIT;
	this->pos = cVar1;
	return cVar0;
	// 283    .line 286
label_cond_99:
	if ( this->nfcImpl->getFCD16(c) >  0xff )
		goto label_cond_a9;
	this->iter->previousCodePoint();
	goto label_goto_7e;
	// 302    .line 290
label_cond_a9:
	this->s->appendCodePoint(c);
	goto label_goto_76;
	// 310    .line 299
label_cond_af:
	prevCC = ( fcd16 & 0xff);
	if ( prevCC )     
		goto label_cond_26;
	goto label_goto_2e;
	// 319    .line 307
	// 320    .end local v1    # "fcd16":I
	// 321    .end local v2    # "leadCC":I
label_cond_b5:
	this->iter->moveIndex((0 - this->s->length()));
	this->state = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT;
	return cVar0;

}
// .method private normalize(Ljava/lang/CharSequence;)V
void android::icu::impl::coll::FCDIterCollationIterator::normalize(std::shared_ptr<java::lang::CharSequence> s)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	if ( this->normalized )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->normalized = cVar0;
label_cond_b:
	this->nfcImpl->decompose(s, this->normalized);
	return;

}
// .method private previousSegment()Z
bool android::icu::impl::coll::FCDIterCollationIterator::previousSegment()
{
	
	bool cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	int nextCC;
	int c;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	int fcd16;
	int trailCC;
	
	cVar0 = 0x1;
	if ( android::icu::impl::coll::FCDIterCollationIterator::_assertionsDisabled )     
		goto label_cond_12;
	if ( this->state == android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_BWD )
		goto label_cond_12;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 398    .line 350
label_cond_12:
	this->pos = this->iter->getIndex();
	if ( this->s )     
		goto label_cond_49;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	this->s = cVar2;
label_goto_25:
	nextCC = 0x0;
	//    .local v2, "nextCC":I
label_cond_26:
	c = this->iter->previousCodePoint();
	//    .local v0, "c":I
	if ( c >= 0 )
		goto label_cond_4f;
label_goto_2e:
	this->start = (this->pos -  this->s->length());
	if ( android::icu::impl::coll::FCDIterCollationIterator::_assertionsDisabled )     
		goto label_cond_c3;
	if ( this->pos != this->start )
		goto label_cond_c3;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 468    .line 355
	// 469    .end local v0    # "c":I
	// 470    .end local v2    # "nextCC":I
label_cond_49:
	this->s->setLength(0x0);
	goto label_goto_25;
	// 478    .line 362
	// 479    .restart local v0    # "c":I
	// 480    .restart local v2    # "nextCC":I
label_cond_4f:
	fcd16 = this->nfcImpl->getFCD16(c);
	//    .local v1, "fcd16":I
	trailCC = ( fcd16 & 0xff);
	//    .local v3, "trailCC":I
	if ( trailCC )     
		goto label_cond_67;
	if ( !(this->s->length()) )  
		goto label_cond_67;
	this->iter->nextCodePoint();
	goto label_goto_2e;
	// 511    .line 369
label_cond_67:
	this->s->appendCodePoint(c);
	if ( !(trailCC) )  
		goto label_cond_aa;
	if ( !(nextCC) )  
		goto label_cond_a4;
	if ( trailCC <= nextCC )
		goto label_cond_a4;
label_cond_72:
label_goto_72:
	if ( fcd16 <= 0xff )
		goto label_cond_7e;
	c = this->iter->previousCodePoint();
	if ( c >= 0 )
		goto label_cond_af;
label_cond_7e:
label_goto_7e:
	this->s->reverse();
	this->normalize(this->s);
	this->limit = this->pos;
	this->start = (this->pos -  this->s->length());
	this->state = android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_START;
	this->pos = this->normalized->length();
	return cVar0;
	// 588    .line 371
label_cond_a4:
	if ( android::icu::impl::coll::CollationFCD::isFCD16OfTibetanCompositeVowel(fcd16) )     
		goto label_cond_72;
label_cond_aa:
	nextCC = _shri(fcd16,0x8);
	if ( nextCC )     
		goto label_cond_26;
	goto label_goto_2e;
	// 606    .line 376
label_cond_af:
	fcd16 = this->nfcImpl->getFCD16(c);
	if ( fcd16 )     
		goto label_cond_bd;
	this->iter->nextCodePoint();
	goto label_goto_7e;
	// 624    .line 381
label_cond_bd:
	this->s->appendCodePoint(c);
	goto label_goto_72;
	// 632    .line 399
	// 633    .end local v1    # "fcd16":I
	// 634    .end local v3    # "trailCC":I
label_cond_c3:
	this->iter->moveIndex(this->s->length());
	this->state = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT;
	return cVar0;

}
// .method private switchToBackward()V
void android::icu::impl::coll::FCDIterCollationIterator::switchToBackward()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int cVar1;
	
	if ( android::icu::impl::coll::FCDIterCollationIterator::_assertionsDisabled )     
		goto label_cond_2a;
	if ( this->state == android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_FWD )
		goto label_cond_2a;
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT )
		goto label_cond_16;
	if ( this->pos == this->start )
		goto label_cond_2a;
label_cond_16:
	if ( this->state->compareTo(android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_LIMIT) < 0 ) 
		goto label_cond_24;
	if ( !(this->pos) )  
		goto label_cond_2a;
label_cond_24:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 707    .line 319
label_cond_2a:
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_FWD )
		goto label_cond_4a;
	cVar1 = this->iter->getIndex();
	this->pos = cVar1;
	this->limit = cVar1;
	if ( this->pos != this->start )
		goto label_cond_45;
	this->state = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_BWD;
label_goto_44:
	return;
	// 742    .line 325
label_cond_45:
	this->state = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT;
	goto label_goto_44;
	// 750    .line 329
label_cond_4a:
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT )
		goto label_cond_55;
label_goto_50:
	this->state = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_BWD;
	goto label_goto_44;
	// 766    .line 334
label_cond_55:
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_LIMIT )
		goto label_cond_65;
	this->iter->moveIndex((this->start -  this->limit));
label_cond_65:
	this->limit = this->start;
	goto label_goto_50;

}
// .method private switchToForward()V
void android::icu::impl::coll::FCDIterCollationIterator::switchToForward()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int cVar1;
	
	if ( android::icu::impl::coll::FCDIterCollationIterator::_assertionsDisabled )     
		goto label_cond_30;
	if ( this->state == android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_BWD )
		goto label_cond_30;
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT )
		goto label_cond_16;
	if ( this->pos == this->limit )
		goto label_cond_30;
label_cond_16:
	if ( this->state->compareTo(android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_LIMIT) < 0 ) 
		goto label_cond_2a;
	if ( this->pos == this->normalized->length() )
		goto label_cond_30;
label_cond_2a:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 852    .line 230
label_cond_30:
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_BWD )
		goto label_cond_50;
	cVar1 = this->iter->getIndex();
	this->pos = cVar1;
	this->start = cVar1;
	if ( this->pos != this->limit )
		goto label_cond_4b;
	this->state = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_FWD;
label_goto_4a:
	return;
	// 887    .line 236
label_cond_4b:
	this->state = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT;
	goto label_goto_4a;
	// 895    .line 240
label_cond_50:
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT )
		goto label_cond_5b;
label_goto_56:
	this->state = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_FWD;
	goto label_goto_4a;
	// 911    .line 245
label_cond_5b:
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_START )
		goto label_cond_6b;
	this->iter->moveIndex((this->limit -  this->start));
label_cond_6b:
	this->start = this->limit;
	goto label_goto_56;

}
// .method protected backwardNumCodePoints(I)V
void android::icu::impl::coll::FCDIterCollationIterator::backwardNumCodePoints(int num)
{
	
	int num;
	
	//    .param p1, "num"    # I
label_goto_0:
	if ( num <= 0 )
		goto label_cond_b;
	if ( this->previousCodePoint() < 0 ) 
		goto label_cond_b;
	num = ( num + -0x1);
	goto label_goto_0;
	// 961    .line 221
label_cond_b:
	return;

}
// .method protected forwardNumCodePoints(I)V
void android::icu::impl::coll::FCDIterCollationIterator::forwardNumCodePoints(int num)
{
	
	int num;
	
	//    .param p1, "num"    # I
label_goto_0:
	if ( num <= 0 )
		goto label_cond_b;
	if ( this->nextCodePoint() < 0 ) 
		goto label_cond_b;
	num = ( num + -0x1);
	goto label_goto_0;
	// 986    .line 212
label_cond_b:
	return;

}
// .method public getOffset()I
int android::icu::impl::coll::FCDIterCollationIterator::getOffset()
{
	
	if ( this->state->compareTo(android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_BWD) > 0 ) 
		goto label_cond_11;
	return this->iter->getIndex();
	// 1015    .line 44
label_cond_11:
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT )
		goto label_cond_1a;
	return this->pos;
	// 1028    .line 46
label_cond_1a:
	if ( this->pos )     
		goto label_cond_21;
	return this->start;
	// 1039    .line 49
label_cond_21:
	return this->limit;

}
// .method protected handleGetTrailSurrogate()C
char android::icu::impl::coll::FCDIterCollationIterator::handleGetTrailSurrogate()
{
	
	int trail;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	char trail;
	
	if ( this->state->compareTo(android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT) > 0 ) 
		goto label_cond_2c;
	trail = this->iter->next();
	//    .local v1, "trail":I
	if ( !(android::icu::impl::coll::FCDIterCollationIterator::isTrailSurrogate(trail)) )  
		goto label_cond_24;
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT )
		goto label_cond_22;
	this->pos = ( this->pos + 0x1);
label_cond_22:
label_goto_22:
	return (char)(trail);
	// 1096    .line 193
label_cond_24:
	if ( trail < 0 ) 
		goto label_cond_22;
	this->iter->previous();
	goto label_goto_22;
	// 1107    .line 198
	// 1108    .end local v1    # "trail":I
label_cond_2c:
	if ( android::icu::impl::coll::FCDIterCollationIterator::_assertionsDisabled )     
		goto label_cond_40;
	if ( this->pos <  this->normalized->length() )
		goto label_cond_40;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1130    .line 200
label_cond_40:
	trail = this->normalized->charAt(this->pos);
	//    .local v0, "trail":C
	if ( !(java::lang::Character::isLowSurrogate(trail)) )  
		goto label_cond_54;
	this->pos = ( this->pos + 0x1);
label_cond_54:
	return trail;

}
// .method protected handleNextCE32()J
long long android::icu::impl::coll::FCDIterCollationIterator::handleNextCE32()
{
	
	int c;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int cVar1;
	
label_cond_0:
label_goto_0:
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_FWD )
		goto label_cond_3b;
	c = this->iter->next();
	//    .local v0, "c":I
	if ( c >= 0 )
		goto label_cond_14;
	return -0xffffff40L;
	// 1187    .line 159
label_cond_14:
	if ( !(android::icu::impl::coll::CollationFCD::hasTccc(c)) )  
		goto label_cond_7f;
	if ( android::icu::impl::coll::CollationFCD::maybeTibetanCompositeVowel(c) )     
		goto label_cond_2c;
	if ( !(android::icu::impl::coll::CollationFCD::hasLccc(this->iter->current())) )  
		goto label_cond_7f;
label_cond_2c:
	this->iter->previous();
	if ( this->nextSegment() )     
		goto label_cond_0;
	-0x1;
	return 0xc0;
	// 1237    .line 171
	// 1238    .end local v0    # "c":I
label_cond_3b:
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT )
		goto label_cond_5f;
	if ( this->pos == this->limit )
		goto label_cond_5f;
	c = this->iter->next();
	//    .restart local v0    # "c":I
	this->pos = ( this->pos + 0x1);
	if ( android::icu::impl::coll::FCDIterCollationIterator::_assertionsDisabled )     
		goto label_cond_7f;
	if ( c >= 0 )
		goto label_cond_7f;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1280    .line 176
	// 1281    .end local v0    # "c":I
label_cond_5f:
	if ( this->state->compareTo(android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_LIMIT) < 0 ) 
		goto label_cond_8b;
	if ( this->pos == this->normalized->length() )
		goto label_cond_8b;
	cVar1 = this->pos;
	this->pos = ( cVar1 + 0x1);
	c = this->normalized->charAt(cVar1);
	//    .restart local v0    # "c":I
label_cond_7f:
	return this->makeCodePointAndCE32Pair(c, this->trie->getFromU16SingleLead((char)(c)));
	// 1334    .line 181
	// 1335    .end local v0    # "c":I
label_cond_8b:
	this->switchToForward();
	goto label_goto_0;

}
// .method public nextCodePoint()I
int android::icu::impl::coll::FCDIterCollationIterator::nextCodePoint()
{
	
	int c;
	int trail;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
label_cond_0:
label_goto_0:
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_FWD )
		goto label_cond_55;
	c = this->iter->next();
	//    .local v0, "c":I
	if ( c >= 0 )
		goto label_cond_f;
	return c;
	// 1369    .line 62
label_cond_f:
	if ( !(android::icu::impl::coll::CollationFCD::hasTccc(c)) )  
		goto label_cond_34;
	if ( android::icu::impl::coll::CollationFCD::maybeTibetanCompositeVowel(c) )     
		goto label_cond_27;
	if ( !(android::icu::impl::coll::CollationFCD::hasLccc(this->iter->current())) )  
		goto label_cond_34;
label_cond_27:
	this->iter->previous();
	if ( this->nextSegment() )     
		goto label_cond_0;
	return -0x1;
	// 1416    .line 72
label_cond_34:
	if ( !(android::icu::impl::coll::FCDIterCollationIterator::isLeadSurrogate(c)) )  
		goto label_cond_54;
	trail = this->iter->next();
	//    .local v1, "trail":I
	if ( !(android::icu::impl::coll::FCDIterCollationIterator::isTrailSurrogate(trail)) )  
		goto label_cond_4d;
	return java::lang::Character::toCodePoint((char)(c), (char)(trail));
	// 1450    .line 76
label_cond_4d:
	if ( trail < 0 ) 
		goto label_cond_54;
	this->iter->previous();
	//    .end local v1    # "trail":I
label_cond_54:
	return c;
	// 1464    .line 81
	// 1465    .end local v0    # "c":I
label_cond_55:
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT )
		goto label_cond_7d;
	if ( this->pos == this->limit )
		goto label_cond_7d;
	c = this->iter->nextCodePoint();
	//    .restart local v0    # "c":I
	this->pos = (this->pos +  java::lang::Character::charCount(c));
	if ( android::icu::impl::coll::FCDIterCollationIterator::_assertionsDisabled )     
		goto label_cond_7c;
	if ( c >= 0 )
		goto label_cond_7c;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1511    .line 85
label_cond_7c:
	return c;
	// 1515    .line 86
	// 1516    .end local v0    # "c":I
label_cond_7d:
	if ( this->state->compareTo(android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_LIMIT) < 0 ) 
		goto label_cond_a3;
	if ( this->pos == this->normalized->length() )
		goto label_cond_a3;
	c = this->normalized->codePointAt(this->pos);
	//    .restart local v0    # "c":I
	this->pos = (this->pos +  java::lang::Character::charCount(c));
	return c;
	// 1563    .line 92
	// 1564    .end local v0    # "c":I
label_cond_a3:
	this->switchToForward();
	goto label_goto_0;

}
// .method public previousCodePoint()I
int android::icu::impl::coll::FCDIterCollationIterator::previousCodePoint()
{
	
	int cVar0;
	int cVar1;
	int c;
	int prev;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	cVar0 = -0x1;
	cVar1 = 0x0;
label_cond_2:
label_goto_2:
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_BWD )
		goto label_cond_68;
	c = this->iter->previous();
	//    .local v0, "c":I
	if ( c >= 0 )
		goto label_cond_19;
	this->pos = cVar1;
	this->start = cVar1;
	this->state = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT;
	return cVar0;
	// 1612    .line 108
label_cond_19:
	if ( !(android::icu::impl::coll::CollationFCD::hasLccc(c)) )  
		goto label_cond_67;
	//    .local v1, "prev":I
	if ( android::icu::impl::coll::CollationFCD::maybeTibetanCompositeVowel(c) )     
		goto label_cond_32;
	prev = this->iter->previous();
	if ( !(android::icu::impl::coll::CollationFCD::hasTccc(prev)) )  
		goto label_cond_45;
label_cond_32:
	this->iter->next();
	if ( -0x1 < 0 ) 
		goto label_cond_3e;
	this->iter->next();
label_cond_3e:
	if ( this->previousSegment() )     
		goto label_cond_2;
	return cVar0;
	// 1670    .line 122
label_cond_45:
	if ( !(android::icu::impl::coll::FCDIterCollationIterator::isTrailSurrogate(c)) )  
		goto label_cond_60;
	if ( prev >= 0 )
		goto label_cond_53;
	prev = this->iter->previous();
label_cond_53:
	if ( !(android::icu::impl::coll::FCDIterCollationIterator::isLeadSurrogate(prev)) )  
		goto label_cond_60;
	return java::lang::Character::toCodePoint((char)(prev), (char)(c));
	// 1707    .line 130
label_cond_60:
	if ( prev < 0 ) 
		goto label_cond_67;
	this->iter->next();
	//    .end local v1    # "prev":I
label_cond_67:
	return c;
	// 1721    .line 135
	// 1722    .end local v0    # "c":I
label_cond_68:
	if ( this->state != android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_IN_FCD_SEGMENT )
		goto label_cond_90;
	if ( this->pos == this->start )
		goto label_cond_90;
	c = this->iter->previousCodePoint();
	//    .restart local v0    # "c":I
	this->pos = (this->pos -  java::lang::Character::charCount(c));
	if ( android::icu::impl::coll::FCDIterCollationIterator::_assertionsDisabled )     
		goto label_cond_8f;
	if ( c >= 0 )
		goto label_cond_8f;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 1768    .line 139
label_cond_8f:
	return c;
	// 1772    .line 140
	// 1773    .end local v0    # "c":I
label_cond_90:
	if ( this->state->compareTo(android::icu::impl::coll::FCDIterCollationIterator_S_State::IN_NORM_ITER_AT_LIMIT) < 0 ) 
		goto label_cond_b0;
	if ( !(this->pos) )  
		goto label_cond_b0;
	c = this->normalized->codePointBefore(this->pos);
	//    .restart local v0    # "c":I
	this->pos = (this->pos -  java::lang::Character::charCount(c));
	return c;
	// 1813    .line 145
	// 1814    .end local v0    # "c":I
label_cond_b0:
	this->switchToBackward();
	goto label_goto_2;

}
// .method public resetToOffset(I)V
void android::icu::impl::coll::FCDIterCollationIterator::resetToOffset(int newOffset)
{
	
	//    .param p1, "newOffset"    # I
	this->resetToOffset(newOffset);
	this->start = newOffset;
	this->state = android::icu::impl::coll::FCDIterCollationIterator_S_State::ITER_CHECK_FWD;
	return;

}


