// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\FCDUTF16CollationIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationFCD.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "android.icu.impl.coll.FCDUTF16CollationIterator.h"
#include "android.icu.impl.coll.UTF16CollationIterator.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::impl::coll::FCDUTF16CollationIterator::_assertionsDisabled;
static android::icu::impl::coll::FCDUTF16CollationIterator::rawStart;
// .method static constructor <clinit>()V
void android::icu::impl::coll::FCDUTF16CollationIterator::static_cinit()
{
	
	android::icu::impl::coll::FCDUTF16CollationIterator::_assertionsDisabled = ( android::icu::impl::coll::FCDUTF16CollationIterator()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(Landroid/icu/impl/coll/CollationData;)V
android::icu::impl::coll::FCDUTF16CollationIterator::FCDUTF16CollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> d)
{
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	android::icu::impl::coll::UTF16CollationIterator::(d);
	this->nfcImpl = d->nfcImpl;
	return;

}
// .method public constructor <init>(Landroid/icu/impl/coll/CollationData;ZLjava/lang/CharSequence;I)V
android::icu::impl::coll::FCDUTF16CollationIterator::FCDUTF16CollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> data,bool numeric,std::shared_ptr<java::lang::CharSequence> s,int p)
{
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "numeric"    # Z
	//    .param p3, "s"    # Ljava/lang/CharSequence;
	//    .param p4, "p"    # I
	android::icu::impl::coll::UTF16CollationIterator::(data, numeric, s, p);
	this->rawSeq = s;
	this->segmentStart = p;
	this->rawLimit = s->length();
	this->nfcImpl = data->nfcImpl;
	this->checkDir = 0x1;
	return;

}
// .method private nextSegment()V
void android::icu::impl::coll::FCDUTF16CollationIterator::nextSegment()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int p;
	int q;
	int c;
	int fcd16;
	int leadCC;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int prevCC;
	
	if ( android::icu::impl::coll::FCDUTF16CollationIterator::_assertionsDisabled )     
		goto label_cond_1b;
	if ( this->checkDir <= 0 )
		goto label_cond_f;
	if ( this->seq == this->rawSeq )
		goto label_cond_15;
label_cond_f:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
label_cond_15:
	if ( this->pos == this->limit )
		goto label_cond_f;
label_cond_1b:
	p = this->pos;
	//    .local v3, "p":I
	//    .local v4, "prevCC":I
label_cond_1e:
	q = p;
	//    .local v5, "q":I
	c = java::lang::Character::codePointAt(this->seq, p);
	//    .local v0, "c":I
	p = (p +  java::lang::Character::charCount(c));
	fcd16 = this->nfcImpl->getFCD16(c);
	//    .local v1, "fcd16":I
	leadCC = _shri(fcd16,0x8);
	//    .local v2, "leadCC":I
	if ( leadCC )     
		goto label_cond_4c;
	if ( q == this->pos )
		goto label_cond_4c;
	this->segmentLimit = q;
	this->limit = q;
label_goto_3c:
	if ( android::icu::impl::coll::FCDUTF16CollationIterator::_assertionsDisabled )     
		goto label_cond_88;
	if ( this->pos != this->limit )
		goto label_cond_88;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 208    .line 277
label_cond_4c:
	if ( !(leadCC) )  
		goto label_cond_7b;
	if ( prevCC >  leadCC )
		goto label_cond_56;
	if ( !(android::icu::impl::coll::CollationFCD::isFCD16OfTibetanCompositeVowel(fcd16)) )  
		goto label_cond_7b;
label_cond_56:
label_goto_56:
	if ( p != this->rawLimit )
		goto label_cond_65;
label_cond_5b:
	this->normalize(this->pos, p);
	this->pos = this->start;
	goto label_goto_3c;
	// 243    .line 282
label_cond_65:
	c = java::lang::Character::codePointAt(this->seq, p);
	p = (p +  java::lang::Character::charCount(c));
	if ( this->nfcImpl->getFCD16(c) <= 0xff )
		goto label_cond_5b;
	goto label_goto_56;
	// 271    .line 289
label_cond_7b:
	prevCC = ( fcd16 & 0xff);
	if ( p == this->rawLimit )
		goto label_cond_83;
	if ( prevCC )     
		goto label_cond_1e;
label_cond_83:
	this->segmentLimit = p;
	this->limit = p;
	goto label_goto_3c;
	// 290    .line 297
label_cond_88:
	this->checkDir = 0x0;
	return;

}
// .method private normalize(II)V
void android::icu::impl::coll::FCDUTF16CollationIterator::normalize(int from,int to)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "from"    # I
	//    .param p2, "to"    # I
	if ( this->normalized )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->normalized = cVar0;
label_cond_b:
	this->nfcImpl->decompose(this->rawSeq, from, to, this->normalized, (to - from));
	this->segmentStart = from;
	this->segmentLimit = to;
	this->seq = this->normalized;
	this->start = 0x0;
	this->limit = (this->start +  this->normalized->length());
	return;

}
// .method private previousSegment()V
void android::icu::impl::coll::FCDUTF16CollationIterator::previousSegment()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int p;
	int nextCC;
	int q;
	int c;
	int fcd16;
	int trailCC;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	if ( android::icu::impl::coll::FCDUTF16CollationIterator::_assertionsDisabled )     
		goto label_cond_1b;
	if ( this->checkDir >= 0 )
		goto label_cond_f;
	if ( this->seq == this->rawSeq )
		goto label_cond_15;
label_cond_f:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
label_cond_15:
	if ( this->pos == this->start )
		goto label_cond_f;
label_cond_1b:
	p = this->pos;
	//    .local v3, "p":I
	nextCC = 0x0;
	//    .local v2, "nextCC":I
label_cond_1e:
	q = p;
	//    .local v4, "q":I
	c = java::lang::Character::codePointBefore(this->seq, p);
	//    .local v0, "c":I
	p = (p -  java::lang::Character::charCount(c));
	fcd16 = this->nfcImpl->getFCD16(c);
	//    .local v1, "fcd16":I
	trailCC = ( fcd16 & 0xff);
	//    .local v5, "trailCC":I
	if ( trailCC )     
		goto label_cond_4c;
	if ( q == this->pos )
		goto label_cond_4c;
	this->segmentStart = q;
	this->start = q;
label_goto_3c:
	if ( android::icu::impl::coll::FCDUTF16CollationIterator::_assertionsDisabled )     
		goto label_cond_88;
	if ( this->pos != this->start )
		goto label_cond_88;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 471    .line 353
label_cond_4c:
	if ( !(trailCC) )  
		goto label_cond_69;
	if ( !(nextCC) )  
		goto label_cond_63;
	if ( trailCC <= nextCC )
		goto label_cond_63;
label_cond_52:
label_goto_52:
	if ( fcd16 <= 0xff )
		goto label_cond_59;
	if ( p )     
		goto label_cond_74;
label_cond_59:
	this->normalize(p, this->pos);
	this->pos = this->limit;
	goto label_goto_3c;
	// 504    .line 354
label_cond_63:
	if ( android::icu::impl::coll::CollationFCD::isFCD16OfTibetanCompositeVowel(fcd16) )     
		goto label_cond_52;
label_cond_69:
	nextCC = _shri(fcd16,0x8);
	if ( !(p) )  
		goto label_cond_6f;
	if ( nextCC )     
		goto label_cond_1e;
label_cond_6f:
	this->segmentStart = p;
	this->start = p;
	goto label_goto_3c;
	// 530    .line 359
label_cond_74:
	c = java::lang::Character::codePointBefore(this->seq, p);
	p = (p -  java::lang::Character::charCount(c));
	fcd16 = this->nfcImpl->getFCD16(c);
	if ( !(fcd16) )  
		goto label_cond_59;
	goto label_goto_52;
	// 556    .line 374
label_cond_88:
	this->checkDir = 0x0;
	return;

}
// .method private switchToBackward()V
void android::icu::impl::coll::FCDUTF16CollationIterator::switchToBackward()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int cVar3;
	int cVar4;
	
	cVar0 = -0x1;
	cVar1 = 0x0;
	if ( android::icu::impl::coll::FCDUTF16CollationIterator::_assertionsDisabled )     
		goto label_cond_20;
	if ( this->checkDir <= 0 )
		goto label_cond_10;
	if ( this->seq == this->rawSeq )
		goto label_cond_20;
label_cond_10:
	if ( this->checkDir )     
		goto label_cond_1a;
	if ( this->pos == this->start )
		goto label_cond_20;
label_cond_1a:
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 605    .line 307
label_cond_20:
	if ( this->checkDir <= 0 )
		goto label_cond_38;
	cVar3 = this->pos;
	this->segmentLimit = cVar3;
	this->limit = cVar3;
	if ( this->pos != this->segmentStart )
		goto label_cond_35;
	this->start = cVar1;
	this->checkDir = cVar0;
label_goto_34:
	return;
	// 635    .line 314
label_cond_35:
	this->checkDir = cVar1;
	goto label_goto_34;
	// 641    .line 318
label_cond_38:
	if ( this->seq != this->rawSeq )
		goto label_cond_43;
label_goto_3e:
	this->start = cVar1;
	this->checkDir = cVar0;
	goto label_goto_34;
	// 658    .line 323
label_cond_43:
	this->seq = this->rawSeq;
	cVar4 = this->segmentStart;
	this->segmentLimit = cVar4;
	this->limit = cVar4;
	this->pos = cVar4;
	goto label_goto_3e;

}
// .method private switchToForward()V
void android::icu::impl::coll::FCDUTF16CollationIterator::switchToForward()
{
	
	int cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int cVar2;
	int cVar3;
	
	cVar0 = 0x1;
	if ( android::icu::impl::coll::FCDUTF16CollationIterator::_assertionsDisabled )     
		goto label_cond_20;
	if ( this->checkDir >= 0 )
		goto label_cond_10;
	if ( this->seq == this->rawSeq )
		goto label_cond_20;
label_cond_10:
	if ( this->checkDir )     
		goto label_cond_1a;
	if ( this->pos == this->limit )
		goto label_cond_20;
label_cond_1a:
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 717    .line 227
label_cond_20:
	if ( this->checkDir >= 0 )
		goto label_cond_3a;
	cVar2 = this->pos;
	this->segmentStart = cVar2;
	this->start = cVar2;
	if ( this->pos != this->segmentLimit )
		goto label_cond_37;
	this->limit = this->rawLimit;
	this->checkDir = cVar0;
label_goto_36:
	return;
	// 749    .line 234
label_cond_37:
	this->checkDir = 0x0;
	goto label_goto_36;
	// 755    .line 238
label_cond_3a:
	if ( this->seq != this->rawSeq )
		goto label_cond_47;
label_goto_40:
	this->limit = this->rawLimit;
	this->checkDir = cVar0;
	goto label_goto_36;
	// 774    .line 243
label_cond_47:
	this->seq = this->rawSeq;
	cVar3 = this->segmentLimit;
	this->segmentStart = cVar3;
	this->start = cVar3;
	this->pos = cVar3;
	goto label_goto_40;

}
// .method protected backwardNumCodePoints(I)V
void android::icu::impl::coll::FCDUTF16CollationIterator::backwardNumCodePoints(int num)
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
	// 814    .line 218
label_cond_b:
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::coll::FCDUTF16CollationIterator::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar7;
	std::shared_ptr<android::icu::impl::coll::FCDUTF16CollationIterator> o;
	int cVar2;
	int cVar3;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar7 = 0x0;
	if ( !(other->instanceOf("android::icu::impl::coll::CollationIterator")) )  
		goto label_cond_14;
	if ( ( this->equals(other) ^ 0x1) )     
		goto label_cond_14;
	if ( !(( other->instanceOf("android::icu::impl::coll::FCDUTF16CollationIterator") ^ 0x1)) )  
		goto label_cond_15;
label_cond_14:
	return cVar7;
label_cond_15:
	o = other;
	o->checkCast("android::icu::impl::coll::FCDUTF16CollationIterator");
	//    .local v0, "o":Landroid/icu/impl/coll/FCDUTF16CollationIterator;
	if ( this->checkDir == o->checkDir )
		goto label_cond_1f;
	return cVar7;
	// 872    .line 55
label_cond_1f:
	if ( this->checkDir )     
		goto label_cond_38;
	if ( this->seq != this->rawSeq )
		goto label_cond_34;
	cVar2 = cVar0;
label_goto_2a:
	if ( o->seq != o->rawSeq )
		goto label_cond_36;
	cVar3 = cVar0;
label_goto_31:
	if ( cVar2 == cVar3 )
		goto label_cond_38;
	return cVar7;
label_cond_34:
	cVar2 = cVar7;
	goto label_goto_2a;
label_cond_36:
	cVar3 = cVar7;
	goto label_goto_31;
	// 912    .line 58
label_cond_38:
	if ( this->checkDir )     
		goto label_cond_42;
	if ( this->seq != this->rawSeq )
		goto label_cond_4f;
label_cond_42:
	if ( ( this->pos + 0x0) != ( o->pos + 0x0) )
		goto label_cond_4d;
label_goto_4c:
	return cVar0;
label_cond_4d:
	cVar0 = cVar7;
	goto label_goto_4c;
	// 944    .line 62
label_cond_4f:
	if ( ( this->segmentStart + 0x0) != ( o->segmentStart + 0x0) )
		goto label_cond_66;
	if ( (this->pos -  this->start) != (o->pos -  o->start) )
		goto label_cond_66;
	cVar7 = cVar0;
label_cond_66:
	return cVar7;

}
// .method protected forwardNumCodePoints(I)V
void android::icu::impl::coll::FCDUTF16CollationIterator::forwardNumCodePoints(int num)
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
	// 998    .line 209
label_cond_b:
	return;

}
// .method public getOffset()I
int android::icu::impl::coll::FCDUTF16CollationIterator::getOffset()
{
	
	if ( this->checkDir )     
		goto label_cond_a;
	if ( this->seq != this->rawSeq )
		goto label_cond_f;
label_cond_a:
	return ( this->pos + 0x0);
	// 1026    .line 86
label_cond_f:
	if ( this->pos != this->start )
		goto label_cond_1a;
	return ( this->segmentStart + 0x0);
	// 1041    .line 89
label_cond_1a:
	return ( this->segmentLimit + 0x0);

}
// .method protected handleNextCE32()J
long long android::icu::impl::coll::FCDUTF16CollationIterator::handleNextCE32()
{
	
	int cVar0;
	int c;
	int cVar1;
	char c;
	int cVar2;
	
label_goto_0:
	if ( this->checkDir <= 0 )
		goto label_cond_5c;
	if ( this->pos != this->limit )
		goto label_cond_10;
	return -0xffffff40L;
	// 1072    .line 180
label_cond_10:
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	c = this->seq->charAt(cVar0);
	//    .local v0, "c":C
	if ( !(android::icu::impl::coll::CollationFCD::hasTccc(c)) )  
		goto label_cond_51;
	if ( android::icu::impl::coll::CollationFCD::maybeTibetanCompositeVowel(c) )     
		goto label_cond_3c;
	if ( this->pos == this->limit )
		goto label_cond_51;
	if ( !(android::icu::impl::coll::CollationFCD::hasLccc(this->seq->charAt(this->pos))) )  
		goto label_cond_51;
label_cond_3c:
	this->pos = ( this->pos + -0x1);
	this->nextSegment();
	cVar1 = this->pos;
	this->pos = ( cVar1 + 0x1);
	c = this->seq->charAt(cVar1);
label_cond_51:
label_goto_51:
	return this->makeCodePointAndCE32Pair(c, this->trie->getFromU16SingleLead(c));
	// 1162    .line 190
	// 1163    .end local v0    # "c":C
label_cond_5c:
	if ( this->checkDir )     
		goto label_cond_73;
	if ( this->pos == this->limit )
		goto label_cond_73;
	cVar2 = this->pos;
	this->pos = ( cVar2 + 0x1);
	c = this->seq->charAt(cVar2);
	//    .restart local v0    # "c":C
	goto label_goto_51;
	// 1191    .line 194
	// 1192    .end local v0    # "c":C
label_cond_73:
	this->switchToForward();
	goto label_goto_0;

}
// .method public hashCode()I
int android::icu::impl::coll::FCDUTF16CollationIterator::hashCode()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( android::icu::impl::coll::FCDUTF16CollationIterator::_assertionsDisabled )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hashCode not designed")));
	// throw
	throw cVar0;
	// 1216    .line 70
label_cond_d:
	return 0x2a;

}
// .method public nextCodePoint()I
int android::icu::impl::coll::FCDUTF16CollationIterator::nextCodePoint()
{
	
	int cVar0;
	int c;
	int cVar1;
	char c;
	char trail;
	int cVar2;
	
label_goto_0:
	if ( this->checkDir <= 0 )
		goto label_cond_72;
	if ( this->pos != this->limit )
		goto label_cond_c;
	return -0x1;
	// 1245    .line 110
label_cond_c:
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	c = this->seq->charAt(cVar0);
	//    .local v0, "c":C
	if ( !(android::icu::impl::coll::CollationFCD::hasTccc(c)) )  
		goto label_cond_4d;
	if ( android::icu::impl::coll::CollationFCD::maybeTibetanCompositeVowel(c) )     
		goto label_cond_38;
	if ( this->pos == this->limit )
		goto label_cond_4d;
	if ( !(android::icu::impl::coll::CollationFCD::hasLccc(this->seq->charAt(this->pos))) )  
		goto label_cond_4d;
label_cond_38:
	this->pos = ( this->pos + -0x1);
	this->nextSegment();
	cVar1 = this->pos;
	this->pos = ( cVar1 + 0x1);
	c = this->seq->charAt(cVar1);
label_cond_4d:
label_goto_4d:
	if ( !(java::lang::Character::isHighSurrogate(c)) )  
		goto label_cond_8e;
	if ( this->pos == this->limit )
		goto label_cond_8e;
	trail = this->seq->charAt(this->pos);
	//    .local v1, "trail":C
	if ( !(java::lang::Character::isLowSurrogate(trail)) )  
		goto label_cond_8e;
	this->pos = ( this->pos + 0x1);
	return java::lang::Character::toCodePoint(c, trail);
	// 1366    .line 120
	// 1367    .end local v0    # "c":C
	// 1368    .end local v1    # "trail":C
label_cond_72:
	if ( this->checkDir )     
		goto label_cond_89;
	if ( this->pos == this->limit )
		goto label_cond_89;
	cVar2 = this->pos;
	this->pos = ( cVar2 + 0x1);
	c = this->seq->charAt(cVar2);
	//    .restart local v0    # "c":C
	goto label_goto_4d;
	// 1396    .line 124
	// 1397    .end local v0    # "c":C
label_cond_89:
	this->switchToForward();
	goto label_goto_0;
	// 1403    .line 133
	// 1404    .restart local v0    # "c":C
label_cond_8e:
	return c;

}
// .method public previousCodePoint()I
int android::icu::impl::coll::FCDUTF16CollationIterator::previousCodePoint()
{
	
	int cVar0;
	int c;
	int cVar1;
	char c;
	char lead;
	int cVar2;
	
label_goto_0:
	if ( this->checkDir >= 0 )
		goto label_cond_76;
	if ( this->pos != this->start )
		goto label_cond_c;
	return -0x1;
	// 1431    .line 145
label_cond_c:
	cVar0 = ( this->pos + -0x1);
	this->pos = cVar0;
	c = this->seq->charAt(cVar0);
	//    .local v0, "c":C
	if ( !(android::icu::impl::coll::CollationFCD::hasLccc(c)) )  
		goto label_cond_4f;
	if ( android::icu::impl::coll::CollationFCD::maybeTibetanCompositeVowel(c) )     
		goto label_cond_3a;
	if ( this->pos == this->start )
		goto label_cond_4f;
	if ( !(android::icu::impl::coll::CollationFCD::hasTccc(this->seq->charAt(( this->pos + -0x1)))) )  
		goto label_cond_4f;
label_cond_3a:
	this->pos = ( this->pos + 0x1);
	this->previousSegment();
	cVar1 = ( this->pos + -0x1);
	this->pos = cVar1;
	c = this->seq->charAt(cVar1);
label_cond_4f:
label_goto_4f:
	if ( !(java::lang::Character::isLowSurrogate(c)) )  
		goto label_cond_92;
	if ( this->pos == this->start )
		goto label_cond_92;
	lead = this->seq->charAt(( this->pos + -0x1));
	//    .local v1, "lead":C
	if ( !(java::lang::Character::isHighSurrogate(lead)) )  
		goto label_cond_92;
	this->pos = ( this->pos + -0x1);
	return java::lang::Character::toCodePoint(lead, c);
	// 1556    .line 155
	// 1557    .end local v0    # "c":C
	// 1558    .end local v1    # "lead":C
label_cond_76:
	if ( this->checkDir )     
		goto label_cond_8d;
	if ( this->pos == this->start )
		goto label_cond_8d;
	cVar2 = ( this->pos + -0x1);
	this->pos = cVar2;
	c = this->seq->charAt(cVar2);
	//    .restart local v0    # "c":C
	goto label_goto_4f;
	// 1586    .line 159
	// 1587    .end local v0    # "c":C
label_cond_8d:
	this->switchToBackward();
	goto label_goto_0;
	// 1593    .line 168
	// 1594    .restart local v0    # "c":C
label_cond_92:
	return c;

}
// .method public resetToOffset(I)V
void android::icu::impl::coll::FCDUTF16CollationIterator::resetToOffset(int newOffset)
{
	
	int cVar0;
	
	//    .param p1, "newOffset"    # I
	this->reset();
	this->seq = this->rawSeq;
	cVar0 = ( newOffset + 0x0);
	this->pos = cVar0;
	this->segmentStart = cVar0;
	this->start = cVar0;
	this->limit = this->rawLimit;
	this->checkDir = 0x1;
	return;

}
// .method public setText(ZLjava/lang/CharSequence;I)V
void android::icu::impl::coll::FCDUTF16CollationIterator::setText(bool numeric,std::shared_ptr<java::lang::CharSequence> s,int p)
{
	
	int cVar0;
	
	//    .param p1, "numeric"    # Z
	//    .param p2, "s"    # Ljava/lang/CharSequence;
	//    .param p3, "p"    # I
	this->setText(numeric, s, p);
	this->rawSeq = s;
	this->segmentStart = p;
	cVar0 = s->length();
	this->limit = cVar0;
	this->rawLimit = cVar0;
	this->checkDir = 0x1;
	return;

}


