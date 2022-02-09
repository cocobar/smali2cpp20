// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationRootElements.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.Collation.h"
#include "android.icu.impl.coll.CollationRootElements.h"
#include "java.lang.AssertionError.h"

static android::icu::impl::coll::CollationRootElements::_assertionsDisabled;
static android::icu::impl::coll::CollationRootElements::IX_COMMON_SEC_AND_TER_CE = 0x3;
static android::icu::impl::coll::CollationRootElements::IX_COUNT = 0x5;
static android::icu::impl::coll::CollationRootElements::IX_FIRST_PRIMARY_INDEX = 0x2;
static android::icu::impl::coll::CollationRootElements::IX_FIRST_SECONDARY_INDEX = 0x1;
static android::icu::impl::coll::CollationRootElements::IX_FIRST_TERTIARY_INDEX = 0x0;
static android::icu::impl::coll::CollationRootElements::IX_SEC_TER_BOUNDARIES = 0x4;
static android::icu::impl::coll::CollationRootElements::PRIMARY_SENTINEL = 0xffffff00L;
static android::icu::impl::coll::CollationRootElements::PRIMARY_STEP_MASK = 0x7f;
static android::icu::impl::coll::CollationRootElements::SEC_TER_DELTA_FLAG = 0x80;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationRootElements::static_cinit()
{
	
	android::icu::impl::coll::CollationRootElements::_assertionsDisabled = ( android::icu::impl::coll::CollationRootElements()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>([J)V
android::icu::impl::coll::CollationRootElements::CollationRootElements(std::shared_ptr<long long[]> rootElements)
{
	
	//    .param p1, "rootElements"    # [J
	// 057    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->elements = rootElements;
	return;

}
// .method private findP(J)I
int android::icu::impl::coll::CollationRootElements::findP(long long p)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int start;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int limit;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	int i;
	auto q;
	int j;
	
	//    .param p1, "p"    # J
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_14;
	if ( (_shrll(p,0x18) > 0xfe) )     
		goto label_cond_14;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 092    .line 450
label_cond_14:
	start = (int)(this->elements[0x2]);
	//    .local v3, "start":I
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_2c;
	if ( (p > this->elements[start]) >= 0 )
		goto label_cond_2c;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 122    .line 452
label_cond_2c:
	limit = ( this->elements->size() + -0x1);
	//    .local v2, "limit":I
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_48;
	if ( (this->elements[limit] > 0xffffff00L) >= 0 )
		goto label_cond_48;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 152    .line 454
label_cond_48:
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_65;
	if ( (p > this->elements[limit]) < 0 ) 
		goto label_cond_65;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 172    .line 490
	// 173    .local v0, "i":I
	// 174    .local v4, "q":J
label_cond_5a:
	if ( (p > (0xffffff00L &  q)) >= 0 )
		goto label_cond_bc;
	limit = i;
	//    .end local v0    # "i":I
	//    .end local v4    # "q":J
label_cond_65:
label_goto_65:
	if ( ( start + 0x1) >= limit )
		goto label_cond_97;
	i = (int)((((long long)(start) +  (long long)(limit)) /  0x2));
	//    .restart local v0    # "i":I
	q = this->elements[i];
	//    .restart local v4    # "q":J
	if ( !(((0x80 &  q) > 0x0)) )  
		goto label_cond_5a;
	j = ( i + 0x1);
	//    .local v1, "j":I
label_goto_7f:
	if ( j != limit )
		goto label_cond_98;
label_goto_81:
	if ( !(((0x80 &  q) > 0x0)) )  
		goto label_cond_5a;
	j = ( i + -0x1);
label_goto_8c:
	if ( j != start )
		goto label_cond_aa;
label_goto_8e:
	if ( !(((0x80 &  q) > 0x0)) )  
		goto label_cond_5a;
	//    .end local v0    # "i":I
	//    .end local v1    # "j":I
	//    .end local v4    # "q":J
label_cond_97:
	return start;
	// 273    .line 465
	// 274    .restart local v0    # "i":I
	// 275    .restart local v1    # "j":I
	// 276    .restart local v4    # "q":J
label_cond_98:
	q = this->elements[j];
	if ( ((0x80 &  q) > 0x0) )     
		goto label_cond_a7;
	i = j;
	goto label_goto_81;
	// 299    .line 470
label_cond_a7:
	j = ( j + 0x1);
	goto label_goto_7f;
	// 305    .line 477
label_cond_aa:
	q = this->elements[j];
	if ( ((0x80 &  q) > 0x0) )     
		goto label_cond_b9;
	i = j;
	goto label_goto_8e;
	// 328    .line 482
label_cond_b9:
	j = ( j + -0x1);
	goto label_goto_8c;
	// 334    .line 493
	// 335    .end local v1    # "j":I
label_cond_bc:
	start = i;
	goto label_goto_65;

}
// .method private getFirstSecTerForPrimary(I)J
long long android::icu::impl::coll::CollationRootElements::getFirstSecTerForPrimary(int index)
{
	
	long long cVar0;
	auto secTer;
	long long secTer;
	
	//    .param p1, "index"    # I
	cVar0 = 0x5000500;
	secTer = this->elements[index];
	//    .local v0, "secTer":J
	if ( ((0x80 &  secTer) > 0x0) )     
		goto label_cond_11;
	return cVar0;
	// 369    .line 431
label_cond_11:
	secTer = (secTer &  -0x81);
	if ( (secTer > cVar0) <= 0 )
		goto label_cond_19;
	return cVar0;
	// 383    .line 437
label_cond_19:
	return secTer;

}
// .method private static isEndOfPrimaryRange(J)Z
bool android::icu::impl::coll::CollationRootElements::isEndOfPrimaryRange(long long q)
{
	
	long long cVar0;
	bool cVar2;
	
	//    .param p0, "q"    # J
	cVar0 = 0x0;
	cVar2 = 0x0;
	if ( ((0x80 &  q) > cVar0) )     
		goto label_cond_12;
	if ( !(((0x7f &  q) > cVar0)) )  
		goto label_cond_12;
	cVar2 = 0x1;
label_cond_12:
	return cVar2;

}
// .method findPrimary(J)I
int android::icu::impl::coll::CollationRootElements::findPrimary(long long p)
{
	
	int cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int index;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p1, "p"    # J
	cVar0 = 0x1;
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_14;
	if ( !(((0xff &  p) > 0x0)) )  
		goto label_cond_14;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 450    .line 311
label_cond_14:
	index = this->findP(p);
	//    .local v0, "index":I
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_40;
	if ( android::icu::impl::coll::CollationRootElements::isEndOfPrimaryRange(this->elements[( index + 0x1)]) )     
		goto label_cond_36;
	if ( (p > (this->elements[index] &  0xffffff00L)) )     
		goto label_cond_3e;
label_cond_36:
label_goto_36:
	if ( cVar0 )     
		goto label_cond_40;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
label_cond_3e:
	cVar0 = 0x0;
	goto label_goto_36;
	// 501    .line 316
label_cond_40:
	return index;

}
// .method firstCEWithPrimaryAtLeast(J)J
long long android::icu::impl::coll::CollationRootElements::firstCEWithPrimaryAtLeast(long long cVar1)
{
	
	long long cVar0;
	int index;
	long long cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p1, "p"    # J
	cVar0 = 0x0;
	if ( (cVar1 > cVar0) )     
		goto label_cond_7;
	return cVar0;
	// 520    .line 201
label_cond_7:
	index = this->findP(cVar1);
	//    .local v0, "index":I
	if ( !((cVar1 > (this->elements[index] &  0xffffff00L))) )  
		goto label_cond_37;
label_cond_19:
	index = ( index + 0x1);
	cVar1 = this->elements[index];
	if ( ((0x80 &  cVar1) > cVar0) )     
		goto label_cond_19;
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_37;
	if ( !(((0x7f &  cVar1) > cVar0)) )  
		goto label_cond_37;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 576    .line 213
label_cond_37:
	return ((cVar1 << 0x20) |  0x5000500);

}
// .method getFirstPrimary()J
long long android::icu::impl::coll::CollationRootElements::getFirstPrimary()
{
	
	return this->elements[(int)(this->elements[0x2])];

}
// .method getFirstPrimaryCE()J
long long android::icu::impl::coll::CollationRootElements::getFirstPrimaryCE()
{
	
	return android::icu::impl::coll::Collation::makeCE(this->getFirstPrimary());

}
// .method getFirstSecondaryCE()J
long long android::icu::impl::coll::CollationRootElements::getFirstSecondaryCE()
{
	
	return (this->elements[(int)(this->elements[0x1])] &  -0x81);

}
// .method getFirstTertiaryCE()J
long long android::icu::impl::coll::CollationRootElements::getFirstTertiaryCE()
{
	
	return (this->elements[(int)(this->elements[0x0])] &  -0x81);

}
// .method public getLastCommonSecondary()I
int android::icu::impl::coll::CollationRootElements::getLastCommonSecondary()
{
	
	return (_shri((int)(this->elements[0x4]),0x10) &  0xff00);

}
// .method getLastSecondaryCE()J
long long android::icu::impl::coll::CollationRootElements::getLastSecondaryCE()
{
	
	return (this->elements[( (int)(this->elements[0x2]) + -0x1)] &  -0x81);

}
// .method getLastTertiaryCE()J
long long android::icu::impl::coll::CollationRootElements::getLastTertiaryCE()
{
	
	return (this->elements[( (int)(this->elements[0x1]) + -0x1)] &  -0x81);

}
// .method getPrimaryAfter(JIZ)J
long long android::icu::impl::coll::CollationRootElements::getPrimaryAfter(long long p,int index,bool isCompressible)
{
	
	int cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int cVar3;
	long long q;
	int step;
	auto q;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	
	//    .param p1, "p"    # J
	//    .param p3, "index"    # I
	//    .param p4, "isCompressible"    # Z
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_26;
	if ( !((p > (this->elements[index] &  0xffffff00L))) )  
		goto label_cond_24;
	cVar0 = android::icu::impl::coll::CollationRootElements::isEndOfPrimaryRange(this->elements[( index + 0x1)]);
label_goto_1c:
	if ( cVar0 )     
		goto label_cond_26;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
label_cond_24:
	cVar0 = 0x1;
	goto label_goto_1c;
	// 795    .line 325
label_cond_26:
	cVar3 = ( index + 0x1);
	q = this->elements[cVar3];
	//    .local v0, "q":J
	if ( ((0x80 &  q) > 0x0) )     
		goto label_cond_4e;
	step = ( (int)(q) & 0x7f);
	//    .local v2, "step":I
	if ( !(step) )  
		goto label_cond_4e;
	if ( ((0xffff &  p) > 0x0) )     
		goto label_cond_49;
	return android::icu::impl::coll::Collation::incTwoBytePrimaryByOffset(p, isCompressible, step);
	// 840    .line 332
label_cond_49:
	return android::icu::impl::coll::Collation::incThreeBytePrimaryByOffset(p, isCompressible, step);
	// 848    .line 336
	// 849    .end local v2    # "step":I
label_cond_4e:
label_goto_4e:
	if ( !(((0x80 &  q) > 0x0)) )  
		goto label_cond_5e;
	cVar3 = ( cVar3 + 0x1);
	q = this->elements[cVar3];
	goto label_goto_4e;
	// 871    .line 339
label_cond_5e:
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_71;
	if ( !(((0x7f &  q) > 0x0)) )  
		goto label_cond_71;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 893    .line 340
label_cond_71:
	return q;

}
// .method getPrimaryBefore(JZ)J
long long android::icu::impl::coll::CollationRootElements::getPrimaryBefore(long long p,bool isCompressible)
{
	
	long long cVar0;
	long long cVar1;
	int index;
	auto q;
	int step;
	long long cVar2;
	long long nextElement;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	
	//    .param p1, "p"    # J
	//    .param p3, "isCompressible"    # Z
	cVar0 = 0xffffff00L;
	cVar1 = 0x0;
	index = this->findPrimary(p);
	//    .local v4, "index":I
	q = this->elements[index];
	//    .local v8, "q":J
	if ( (p > (q & cVar0)) )     
		goto label_cond_2f;
	step = ( (int)(q) & 0x7f);
	//    .local v5, "step":I
	if ( step )     
		goto label_cond_4a;
label_cond_1c:
	index = ( index + -0x1);
	cVar2 = this->elements[index];
	if ( ((0x80 & cVar2) > cVar1) )     
		goto label_cond_1c;
	return (cVar2 & cVar0);
	// 962    .line 237
	// 963    .end local v5    # "step":I
label_cond_2f:
	nextElement = this->elements[( index + 0x1)];
	//    .local v6, "nextElement":J
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_47;
	if ( android::icu::impl::coll::CollationRootElements::isEndOfPrimaryRange(nextElement) )     
		goto label_cond_47;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 991    .line 239
label_cond_47:
	//    .end local v6    # "nextElement":J
	//    .restart local v5    # "step":I
label_cond_4a:
	if ( ((0xffff & p) > cVar1) )     
		goto label_cond_5c;
	return android::icu::impl::coll::Collation::decTwoBytePrimaryByOneStep(p, isCompressible, step);
	// 1020    .line 245
label_cond_5c:
	return android::icu::impl::coll::Collation::decThreeBytePrimaryByOneStep(p, isCompressible, step);

}
// .method getSecondaryAfter(II)I
int android::icu::impl::coll::CollationRootElements::getSecondaryAfter(int cVar1,int s)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int cVar1;
	int sec;
	auto secTer;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p1, "index"    # I
	//    .param p2, "s"    # I
	if ( cVar1 )     
		goto label_cond_22;
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_e;
	if ( s )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1055    .line 359
label_cond_e:
	cVar1 = (int)(this->elements[0x1]);
	//    .local v2, "secTer":J
	//    .local v1, "secLimit":I
label_cond_1a:
label_goto_1a:
	sec = (int)(_shrll(secTer,0x10));
	//    .local v0, "sec":I
	if ( sec <= s )
		goto label_cond_3f;
	return sec;
	// 1090    .line 364
	// 1091    .end local v0    # "sec":I
	// 1092    .end local v1    # "secLimit":I
	// 1093    .end local v2    # "secTer":J
label_cond_22:
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_34;
	if ( cVar1 >= (int)(this->elements[0x2]) )
		goto label_cond_34;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 1115    .line 365
label_cond_34:
	//    .restart local v2    # "secTer":J
	this->getSecondaryBoundary();
	//    .restart local v1    # "secLimit":I
	goto label_goto_1a;
	// 1132    .line 373
	// 1133    .restart local v0    # "sec":I
label_cond_3f:
	cVar1 = ( cVar1 + 0x1);
	secTer = this->elements[cVar1];
	if ( ((0x80 &  secTer) > 0x0) )     
		goto label_cond_1a;
	return 0x10000;

}
// .method getSecondaryBefore(JI)I
int android::icu::impl::coll::CollationRootElements::getSecondaryBefore(long long p,int s)
{
	
	long long cVar0;
	int cVar1;
	int index;
	int sec;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	
	//    .param p1, "p"    # J
	//    .param p3, "s"    # I
	cVar0 = 0x0;
	cVar1 = 0x10;
	if ( (p > cVar0) )     
		goto label_cond_23;
	index = (int)(this->elements[0x1]);
	//    .local v2, "index":I
	//    .local v4, "previousSec":I
	sec = (int)(_shrll(this->elements[index],cVar1));
	//    .local v5, "sec":I
label_goto_15:
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_65;
	if ( s >= sec )
		goto label_cond_65;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 1210    .line 259
	// 1211    .end local v2    # "index":I
	// 1212    .end local v4    # "previousSec":I
	// 1213    .end local v5    # "sec":I
label_cond_23:
	index = ( this->findPrimary(p) + 0x1);
	//    .restart local v2    # "index":I
	//    .restart local v4    # "previousSec":I
	sec = _ushri((int)(this->getFirstSecTerForPrimary(index)),0x10);
	//    .restart local v5    # "sec":I
	goto label_goto_15;
	// 1238    .line 267
	// 1239    .end local v2    # "index":I
	// 1240    .local v3, "index":I
label_cond_33:
	//    .end local v3    # "index":I
	//    .restart local v2    # "index":I
	sec = (int)(_shrll(this->elements[index],cVar1));
	index = ( index + 0x1);
	//    .end local v2    # "index":I
	//    .restart local v3    # "index":I
label_goto_3c:
	if ( s <= sec )
		goto label_cond_56;
	sec;
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_33;
	if ( ((this->elements[index] &  0x80) > cVar0) )     
		goto label_cond_33;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 1290    .line 269
label_cond_56:
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_64;
	if ( sec == s )
		goto label_cond_64;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 1306    .line 270
label_cond_64:
	return previousSec;
	// 1310    .end local v3    # "index":I
	// 1311    .restart local v2    # "index":I
label_cond_65:
	index = index;
	//    .end local v2    # "index":I
	//    .restart local v3    # "index":I
	goto label_goto_3c;

}
// .method public getSecondaryBoundary()I
int android::icu::impl::coll::CollationRootElements::getSecondaryBoundary()
{
	
	return (_shri((int)(this->elements[0x4]),0x8) &  0xff00);

}
// .method getTertiaryAfter(III)I
int android::icu::impl::coll::CollationRootElements::getTertiaryAfter(int cVar1,int s,int t)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int cVar1;
	long long secTer;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	auto secTer;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	
	//    .param p1, "index"    # I
	//    .param p2, "s"    # I
	//    .param p3, "t"    # I
	if ( cVar1 )     
		goto label_cond_4f;
	if ( s )     
		goto label_cond_44;
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_10;
	if ( t )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1368    .line 394
label_cond_10:
	cVar1 = (int)(this->elements[0x0]);
	//    .local v4, "terLimit":I
label_goto_18:
	secTer = (this->elements[cVar1] & -0x81);
	//    .local v0, "secTer":J
label_goto_20:
	//    .local v2, "st":J
label_goto_2d:
	if ( (secTer > ((((long long)(s) &  0xffffffffL) << 0x10) | (long long)(t))) <= 0 )
		goto label_cond_72;
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_6c;
	if ( !((_shrll(secTer,0x10) > (long long)(s))) )  
		goto label_cond_6c;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 1437    .line 398
	// 1438    .end local v0    # "secTer":J
	// 1439    .end local v2    # "st":J
	// 1440    .end local v4    # "terLimit":I
label_cond_44:
	cVar1 = (int)(this->elements[0x1]);
	//    .restart local v4    # "terLimit":I
	goto label_goto_18;
	// 1458    .line 404
	// 1459    .end local v4    # "terLimit":I
label_cond_4f:
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_61;
	if ( cVar1 >= (int)(this->elements[0x2]) )
		goto label_cond_61;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 1481    .line 405
label_cond_61:
	secTer = this->getFirstSecTerForPrimary(( cVar1 + 0x1));
	//    .restart local v0    # "secTer":J
	//    .restart local v4    # "terLimit":I
	goto label_goto_20;
	// 1498    .line 413
	// 1499    .restart local v2    # "st":J
label_cond_6c:
	return ((int)(secTer) &  0xffff);
	// 1509    .line 415
label_cond_72:
	cVar1 = ( cVar1 + 0x1);
	secTer = this->elements[cVar1];
	if ( !(((0x80 &  secTer) > 0x0)) )  
		goto label_cond_8a;
	if ( (_shrll(secTer,0x10) > (long long)(s)) <= 0 )
		goto label_cond_8b;
label_cond_8a:
	return terLimit;
	// 1541    .line 418
label_cond_8b:
	secTer = (secTer &  -0x81);
	goto label_goto_2d;

}
// .method getTertiaryBefore(JII)I
int android::icu::impl::coll::CollationRootElements::getTertiaryBefore(long long p,int s,int t)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int index;
	long long secTer;
	long long st;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	auto secTer;
	
	//    .param p1, "p"    # J
	//    .param p3, "s"    # I
	//    .param p4, "t"    # I
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_10;
	if ( !(( t & -0x3f40)) )  
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1574    .line 279
label_cond_10:
	if ( (p > 0x0) )     
		goto label_cond_61;
	if ( s )     
		goto label_cond_58;
	index = (int)(this->elements[0x0]);
	//    .local v2, "index":I
	//    .local v4, "previousTer":I
label_goto_1f:
	secTer = (this->elements[index] & -0x81);
	//    .local v6, "secTer":J
label_goto_27:
	st = (((long long)(s) << 0x10) | (long long)(t));
	//    .local v8, "st":J
	index = index;
	//    .end local v2    # "index":I
	//    .local v3, "index":I
label_goto_33:
	if ( (st > secTer) <= 0 )
		goto label_cond_7a;
	if ( (int)(_shrll(secTer,0x10)) != s )
		goto label_cond_41;
	(int)(secTer);
label_cond_41:
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_6e;
	if ( ((this->elements[index] &  0x80) > 0x0) )     
		goto label_cond_6e;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 1676    .line 285
	// 1677    .end local v3    # "index":I
	// 1678    .end local v4    # "previousTer":I
	// 1679    .end local v6    # "secTer":J
	// 1680    .end local v8    # "st":J
label_cond_58:
	index = (int)(this->elements[0x1]);
	//    .restart local v2    # "index":I
	//    .restart local v4    # "previousTer":I
	goto label_goto_1f;
	// 1697    .line 290
	// 1698    .end local v2    # "index":I
	// 1699    .end local v4    # "previousTer":I
label_cond_61:
	index = ( this->findPrimary(p) + 0x1);
	//    .restart local v2    # "index":I
	//    .restart local v4    # "previousTer":I
	secTer = this->getFirstSecTerForPrimary(index);
	//    .restart local v6    # "secTer":J
	goto label_goto_27;
	// 1720    .line 298
	// 1721    .end local v2    # "index":I
	// 1722    .restart local v3    # "index":I
	// 1723    .restart local v8    # "st":J
label_cond_6e:
	//    .end local v3    # "index":I
	//    .restart local v2    # "index":I
	secTer = (this->elements[index] & -0x81);
	index = ( index + 0x1);
	//    .end local v2    # "index":I
	//    .restart local v3    # "index":I
	goto label_goto_33;
	// 1743    .line 300
label_cond_7a:
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_88;
	if ( !((secTer > st)) )  
		goto label_cond_88;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 1759    .line 301
label_cond_88:
	return (0xffff &  previousTer);

}
// .method public getTertiaryBoundary()I
int android::icu::impl::coll::CollationRootElements::getTertiaryBoundary()
{
	
	return (( (int)(this->elements[0x4]) << 0x8) &  0xff00);

}
// .method lastCEWithPrimaryBefore(J)J
long long android::icu::impl::coll::CollationRootElements::lastCEWithPrimaryBefore(long long p)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int index;
	auto q;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	auto secTer;
	long long cVar2;
	long long cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	
	//    .param p1, "p"    # J
	if ( (p > 0x0) )     
		goto label_cond_9;
	return 0x0;
	// 1806    .line 152
label_cond_9:
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_21;
	if ( (p > this->elements[(int)(this->elements[0x2])]) > 0 ) 
		goto label_cond_21;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1834    .line 153
label_cond_21:
	index = this->findP(p);
	//    .local v0, "index":I
	q = this->elements[index];
	//    .local v2, "q":J
	if ( (p > (0xffffff00L &  q)) )     
		goto label_cond_81;
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_46;
	if ( !(((0x7f &  q) > 0x0)) )  
		goto label_cond_46;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 1877    .line 160
label_cond_46:
	secTer = this->elements[( index + -0x1)];
	//    .local v4, "secTer":J
	if ( ((0x80 &  secTer) > 0x0) )     
		goto label_cond_68;
	cVar2 = (secTer & 0xffffff00L);
label_cond_5f:
label_goto_5f:
	return ((cVar2 << 0x20) |  (-0x81 &  secTer));
	// 1920    .line 167
label_cond_68:
	index = ( index + -0x2);
label_goto_6a:
	cVar3 = this->elements[index];
	if ( ((0x80 &  cVar3) > 0x0) )     
		goto label_cond_7e;
	cVar2 = (cVar3 &  0xffffff00L);
	goto label_goto_5f;
	// 1949    .line 174
label_cond_7e:
	index = ( index + -0x1);
	goto label_goto_6a;
	// 1955    .line 180
	// 1956    .end local v4    # "secTer":J
label_cond_81:
	cVar2 = (q & 0xffffff00L);
	//    .restart local v4    # "secTer":J
label_goto_8b:
	index = ( index + 0x1);
	q = this->elements[index];
	if ( ((0x80 &  q) > 0x0) )     
		goto label_cond_ad;
	if ( android::icu::impl::coll::CollationRootElements::_assertionsDisabled )     
		goto label_cond_5f;
	if ( !(((0x7f &  q) > 0x0)) )  
		goto label_cond_5f;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 2006    .line 189
label_cond_ad:
	q;
	goto label_goto_8b;

}


