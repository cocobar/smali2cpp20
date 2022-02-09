// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\Period.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method private constructor <init>(IZFLandroid/icu/impl/duration/TimeUnit;)V
android::icu::impl::duration::Period::Period(int limit,bool future,float count,std::shared_ptr<android::icu::impl::duration::TimeUnit> unit)
{
	
	//    .param p1, "limit"    # I
	//    .param p2, "future"    # Z
	//    .param p3, "count"    # F
	//    .param p4, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	// 024    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->timeLimit = (unsigned char)(limit);
	this->inFuture = future;
	this->counts = std::make_shared<std::vector<int[]>>(android::icu::impl::duration::TimeUnit::units->size());
	this->counts[unit->ordinal] = ( (int)(( 0x447a0000 * count)) + 0x1);
	return;

}
// .method constructor <init>(IZ[I)V
android::icu::impl::duration::Period::Period(int timeLimit,bool inFuture,std::shared_ptr<int[]> counts)
{
	
	//    .param p1, "timeLimit"    # I
	//    .param p2, "inFuture"    # Z
	//    .param p3, "counts"    # [I
	// 070    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->timeLimit = (unsigned char)(timeLimit);
	this->inFuture = inFuture;
	this->counts = counts;
	return;

}
// .method public static at(FLandroid/icu/impl/duration/TimeUnit;)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::at(float count,std::shared_ptr<android::icu::impl::duration::TimeUnit> unit)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::duration::Period> cVar1;
	
	//    .param p0, "count"    # F
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	cVar0 = 0x0;
	android::icu::impl::duration::Period::checkCount(count);
	cVar1 = std::make_shared<android::icu::impl::duration::Period>(cVar0, cVar0, count, unit);
	return cVar1;

}
// .method private static checkCount(F)V
void android::icu::impl::duration::Period::checkCount(float count)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "count"    # F
	if ( (count > 0x0) >= 0 )
		goto label_cond_26;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("count (")))->append(count)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") cannot be negative")))->toString());
	// throw
	throw cVar0;
	// 151    .line 378
label_cond_26:
	return;

}
// .method public static lessThan(FLandroid/icu/impl/duration/TimeUnit;)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::lessThan(float count,std::shared_ptr<android::icu::impl::duration::TimeUnit> unit)
{
	
	std::shared_ptr<android::icu::impl::duration::Period> cVar0;
	
	//    .param p0, "count"    # F
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	android::icu::impl::duration::Period::checkCount(count);
	cVar0 = std::make_shared<android::icu::impl::duration::Period>(0x1, 0x0, count, unit);
	return cVar0;

}
// .method public static moreThan(FLandroid/icu/impl/duration/TimeUnit;)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::moreThan(float count,std::shared_ptr<android::icu::impl::duration::TimeUnit> unit)
{
	
	std::shared_ptr<android::icu::impl::duration::Period> cVar0;
	
	//    .param p0, "count"    # F
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	android::icu::impl::duration::Period::checkCount(count);
	cVar0 = std::make_shared<android::icu::impl::duration::Period>(0x2, 0x0, count, unit);
	return cVar0;

}
// .method private setFuture(Z)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::setFuture(bool future)
{
	
	std::shared_ptr<android::icu::impl::duration::Period> cVar0;
	
	//    .param p1, "future"    # Z
	if ( this->inFuture == future )
		goto label_cond_e;
	cVar0 = std::make_shared<android::icu::impl::duration::Period>(this->timeLimit, future, this->counts);
	return cVar0;
	// 219    .line 353
label_cond_e:
	return this;

}
// .method private setTimeLimit(B)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::setTimeLimit(unsigned char limit)
{
	
	std::shared_ptr<android::icu::impl::duration::Period> cVar0;
	
	//    .param p1, "limit"    # B
	if ( this->timeLimit == limit )
		goto label_cond_e;
	cVar0 = std::make_shared<android::icu::impl::duration::Period>(limit, this->inFuture, this->counts);
	return cVar0;
	// 245    .line 367
label_cond_e:
	return this;

}
// .method private setTimeUnitInternalValue(Landroid/icu/impl/duration/TimeUnit;I)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::setTimeUnitInternalValue(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,int value)
{
	
	unsigned char ord;
	std::shared<std::vector<int[]>> newCounts;
	int i;
	std::shared_ptr<android::icu::impl::duration::Period> cVar0;
	
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	//    .param p2, "value"    # I
	ord = unit->ordinal;
	//    .local v2, "ord":I
	if ( this->counts[ord] == value )
		goto label_cond_28;
	newCounts = std::make_shared<std::vector<int[]>>(this->counts->size());
	//    .local v1, "newCounts":[I
	i = 0x0;
	//    .local v0, "i":I
label_goto_e:
	if ( i >= this->counts->size() )
		goto label_cond_1c;
	newCounts[i] = this->counts[i];
	i = ( i + 0x1);
	goto label_goto_e;
	// 298    .line 338
label_cond_1c:
	newCounts[ord] = value;
	cVar0 = std::make_shared<android::icu::impl::duration::Period>(this->timeLimit, this->inFuture, newCounts);
	return cVar0;
	// 313    .line 341
	// 314    .end local v0    # "i":I
	// 315    .end local v1    # "newCounts":[I
label_cond_28:
	return this;

}
// .method private setTimeUnitValue(Landroid/icu/impl/duration/TimeUnit;F)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::setTimeUnitValue(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,float value)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	//    .param p2, "value"    # F
	if ( (value > 0x0) >= 0 )
		goto label_cond_1f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("value: ")))->append(value)->toString());
	// throw
	throw cVar0;
	// 358    .line 320
label_cond_1f:
	return this->setTimeUnitInternalValue(unit, ( (int)(( 0x447a0000 * value)) + 0x1));

}
// .method public and(FLandroid/icu/impl/duration/TimeUnit;)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::and(float count,std::shared_ptr<android::icu::impl::duration::TimeUnit> unit)
{
	
	//    .param p1, "count"    # F
	//    .param p2, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	android::icu::impl::duration::Period::checkCount(count);
	return this->setTimeUnitValue(unit, count);

}
// .method public at()Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::at()
{
	
	return this->setTimeLimit(0x0);

}
// .method public equals(Landroid/icu/impl/duration/Period;)Z
bool android::icu::impl::duration::Period::equals(std::shared_ptr<android::icu::impl::duration::Period> rhs)
{
	
	bool cVar0;
	int i;
	
	//    .param p1, "rhs"    # Landroid/icu/impl/duration/Period;
	cVar0 = 0x0;
	if ( !(rhs) )  
		goto label_cond_25;
	if ( this->timeLimit != rhs->timeLimit )
		goto label_cond_25;
	if ( this->inFuture != rhs->inFuture )
		goto label_cond_25;
	i = 0x0;
	//    .local v0, "i":I
label_goto_10:
	if ( i >= this->counts->size() )
		goto label_cond_23;
	if ( this->counts[i] == rhs->counts[i] )
		goto label_cond_20;
	return cVar0;
	// 457    .line 271
label_cond_20:
	i = ( i + 0x1);
	goto label_goto_10;
	// 463    .line 276
label_cond_23:
	return 0x1;
	// 469    .line 278
	// 470    .end local v0    # "i":I
label_cond_25:
	return cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::duration::Period::equals(std::shared_ptr<java::lang::Object> rhs)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "rhs"    # Ljava/lang/Object;
	try {
	//label_try_start_0:
	rhs->checkCast("android::icu::impl::duration::Period");
	//    .end local p1    # "rhs":Ljava/lang/Object;
	//label_try_end_5:
	}
	catch (java::lang::ClassCastException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7;
	}
	//    .catch Ljava/lang/ClassCastException; {:try_start_0 .. :try_end_5} :catch_7
	return this->equals(rhs);
	// 493    .line 252
label_catch_7:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/ClassCastException;
	return 0x0;

}
// .method public getCount(Landroid/icu/impl/duration/TimeUnit;)F
float android::icu::impl::duration::Period::getCount(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit)
{
	
	unsigned char ord;
	
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	ord = unit->ordinal;
	//    .local v0, "ord":I
	if ( this->counts[ord] )     
		goto label_cond_a;
	return 0x0;
	// 525    .line 198
label_cond_a:
	return ( (float)(( this->counts[ord] + -0x1)) / 0x447a0000);

}
// .method public hashCode()I
int android::icu::impl::duration::Period::hashCode()
{
	
	int cVar0;
	int hc;
	int i;
	
	if ( !(this->inFuture) )  
		goto label_cond_1c;
	cVar0 = 0x1;
label_goto_9:
	hc = (( this->timeLimit << 0x1) | cVar0);
	//    .local v0, "hc":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_c:
	if ( i >= this->counts->size() )
		goto label_cond_1e;
	hc = (( hc << 0x2) ^ this->counts[i]);
	i = ( i + 0x1);
	goto label_goto_c;
	// 586    .line 287
	// 587    .end local v0    # "hc":I
	// 588    .end local v1    # "i":I
label_cond_1c:
	cVar0 = 0x0;
	goto label_goto_9;
	// 594    .line 291
	// 595    .restart local v0    # "hc":I
	// 596    .restart local v1    # "i":I
label_cond_1e:
	return hc;

}
// .method public inFuture()Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::inFuture()
{
	
	return this->setFuture(0x1);

}
// .method public inFuture(Z)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::inFuture(bool future)
{
	
	//    .param p1, "future"    # Z
	return this->setFuture(future);

}
// .method public inPast()Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::inPast()
{
	
	return this->setFuture(0x0);

}
// .method public inPast(Z)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::inPast(bool past)
{
	
	//    .param p1, "past"    # Z
	return this->setFuture(( past ^ 0x1));

}
// .method public isInFuture()Z
bool android::icu::impl::duration::Period::isInFuture()
{
	
	return this->inFuture;

}
// .method public isInPast()Z
bool android::icu::impl::duration::Period::isInPast()
{
	
	return ( this->inFuture ^ 0x1);

}
// .method public isLessThan()Z
bool android::icu::impl::duration::Period::isLessThan()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	if ( this->timeLimit != cVar0 )
		goto label_cond_6;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public isMoreThan()Z
bool android::icu::impl::duration::Period::isMoreThan()
{
	
	bool cVar0;
	
	if ( this->timeLimit != 0x2 )
		goto label_cond_7;
	cVar0 = 0x1;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = 0x0;
	goto label_goto_6;

}
// .method public isSet()Z
bool android::icu::impl::duration::Period::isSet()
{
	
	int i;
	
	i = 0x0;
	//    .local v0, "i":I
label_goto_2:
	if ( i >= this->counts->size() )
		goto label_cond_12;
	if ( !(this->counts[i]) )  
		goto label_cond_f;
	return 0x1;
	// 750    .line 170
label_cond_f:
	i = ( i + 0x1);
	goto label_goto_2;
	// 756    .line 175
label_cond_12:
	return 0x0;

}
// .method public isSet(Landroid/icu/impl/duration/TimeUnit;)Z
bool android::icu::impl::duration::Period::isSet(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit)
{
	
	bool cVar1;
	
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	cVar1 = 0x0;
	if ( this->counts[unit->ordinal] <= 0 )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method public lessThan()Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::lessThan()
{
	
	return this->setTimeLimit(0x1);

}
// .method public moreThan()Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::moreThan()
{
	
	return this->setTimeLimit(0x2);

}
// .method public omit(Landroid/icu/impl/duration/TimeUnit;)Landroid/icu/impl/duration/Period;
std::shared_ptr<android::icu::impl::duration::Period> android::icu::impl::duration::Period::omit(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit)
{
	
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	return this->setTimeUnitInternalValue(unit, 0x0);

}


