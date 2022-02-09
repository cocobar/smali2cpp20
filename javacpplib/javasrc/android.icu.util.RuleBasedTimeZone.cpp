// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\RuleBasedTimeZone.smali
#include "java2ctype.h"
#include "android.icu.impl.Grego.h"
#include "android.icu.util.AnnualTimeZoneRule.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.InitialTimeZoneRule.h"
#include "android.icu.util.RuleBasedTimeZone.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.TimeZoneRule.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.ArrayList.h"
#include "java.util.BitSet.h"
#include "java.util.Date.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

static android::icu::util::RuleBasedTimeZone::serialVersionUID = 0x693487808c366c3fL;
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/util/InitialTimeZoneRule;)V
android::icu::util::RuleBasedTimeZone::RuleBasedTimeZone(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::util::InitialTimeZoneRule> initialRule)
{
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .param p2, "initialRule"    # Landroid/icu/util/InitialTimeZoneRule;
	android::icu::util::BasicTimeZone::(id);
	this->isFrozen = 0x0;
	this->initialRule = initialRule;
	return;

}
// .method private complete()V
void android::icu::util::RuleBasedTimeZone::complete()
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<android::icu::util::TimeZoneRule> curRule;
	long long lastTransitionTime;
	std::shared_ptr<java::util::BitSet> done;
	int curStdOffset;
	int curDstSavings;
	auto nextTransitionTime;
	int nextRule;
	int i;
	std::shared_ptr<android::icu::util::TimeZoneRule> r;
	std::shared_ptr<java::util::Date> d;
	auto tt;
	int j;
	std::shared_ptr<java::util::ArrayList> cVar1;
	std::shared_ptr<java::util::Date> d0;
	std::shared_ptr<java::util::Date> d1;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar2;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar3;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar6;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar7;
	std::shared_ptr<java::util::ArrayList> cVar4;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar5;
	
	if ( !(this->upToDate) )  
		goto label_cond_7;
	return;
	// 078    .line 477
label_cond_7:
	if ( !(this->finalRules) )  
		goto label_cond_1f;
	if ( this->finalRules[0x1] )     
		goto label_cond_1f;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Incomplete final rules")));
	// throw
	throw cVar0;
	// 105    .line 482
label_cond_1f:
	if ( this->historicRules )     
		goto label_cond_2b;
	if ( !(this->finalRules) )  
		goto label_cond_183;
label_cond_2b:
	curRule = this->initialRule;
	//    .local v17, "curRule":Landroid/icu/util/TimeZoneRule;
	lastTransitionTime = -0x28ec76c40e65000L;
	//    .local v6, "lastTransitionTime":J
	if ( !(this->historicRules) )  
		goto label_cond_d9;
	var26 = done(this->historicRules->size());
	//    .local v21, "done":Ljava/util/BitSet;
label_goto_4b:
	curStdOffset = curRule->getRawOffset();
	//    .local v8, "curStdOffset":I
	curDstSavings = curRule->getDSTSavings();
	//    .local v9, "curDstSavings":I
	nextTransitionTime = 0x28d47dbbf19b000L;
	//    .local v26, "nextTransitionTime":J
	nextRule = 0x0;
	//    .local v24, "nextRule":Landroid/icu/util/TimeZoneRule;
	i = 0x0;
	//    .end local v24    # "nextRule":Landroid/icu/util/TimeZoneRule;
	//    .local v22, "i":I
label_goto_5c:
	if ( i >= this->historicRules->size() )
		goto label_cond_bb;
	if ( !(done->get(i)) )  
		goto label_cond_71;
label_cond_6e:
label_goto_6e:
	i = ( i + 0x1);
	goto label_goto_5c;
	// 208    .line 503
label_cond_71:
	r = this->historicRules->get(i);
	r->checkCast("android::icu::util::TimeZoneRule");
	//    .local v5, "r":Landroid/icu/util/TimeZoneRule;
	d = r->getNextStart(lastTransitionTime, curStdOffset, curDstSavings, 0x0);
	//    .local v18, "d":Ljava/util/Date;
	if ( d )     
		goto label_cond_88;
	done->set(i);
	goto label_goto_6e;
	// 239    .line 509
label_cond_88:
	if ( r == curRule )
		goto label_cond_6e;
	if ( !(r->getName()->equals(curRule->getName())) )  
		goto label_cond_ae;
	if ( r->getRawOffset() != curRule->getRawOffset() )
		goto label_cond_ae;
	if ( r->getDSTSavings() == curRule->getDSTSavings() )
		goto label_cond_6e;
label_cond_ae:
	tt = d->getTime();
	//    .local v28, "tt":J
	if ( (tt > nextTransitionTime) >= 0 )
		goto label_cond_6e;
	nextTransitionTime = tt;
	r;
	//    .local v24, "nextRule":Landroid/icu/util/TimeZoneRule;
	goto label_goto_6e;
	// 303    .line 523
	// 304    .end local v5    # "r":Landroid/icu/util/TimeZoneRule;
	// 305    .end local v18    # "d":Ljava/util/Date;
	// 306    .end local v24    # "nextRule":Landroid/icu/util/TimeZoneRule;
	// 307    .end local v28    # "tt":J
label_cond_bb:
	if ( nextRule )     
		goto label_cond_18d;
	//    .local v4, "bDoneAll":Z
	j = 0x0;
	//    .local v23, "j":I
label_goto_c0:
	if ( j >= this->historicRules->size() )
		goto label_cond_d7;
	if ( done->get(j) )     
		goto label_cond_189;
label_cond_d7:
	if ( !(0x1) )  
		goto label_cond_18d;
	//    .end local v4    # "bDoneAll":Z
	//    .end local v8    # "curStdOffset":I
	//    .end local v9    # "curDstSavings":I
	//    .end local v21    # "done":Ljava/util/BitSet;
	//    .end local v22    # "i":I
	//    .end local v23    # "j":I
	//    .end local v26    # "nextTransitionTime":J
label_cond_d9:
	if ( !(this->finalRules) )  
		goto label_cond_183;
	if ( this->historicTransitions )     
		goto label_cond_ee;
	cVar1 = std::make_shared<java::util::ArrayList>();
	this->historicTransitions = cVar1;
label_cond_ee:
	d0 = this->finalRules[0x0]->getNextStart(lastTransitionTime, curRule->getRawOffset(), curRule->getDSTSavings(), 0x0);
	//    .local v19, "d0":Ljava/util/Date;
	d1 = this->finalRules[0x1]->getNextStart(lastTransitionTime, curRule->getRawOffset(), curRule->getDSTSavings(), 0x0);
	//    .local v20, "d1":Ljava/util/Date;
	if ( !(d1->after(d0)) )  
		goto label_cond_1f2;
	cVar2 = std::make_shared<android::icu::util::TimeZoneTransition>(d0->getTime(), curRule, this->finalRules[0x0]);
	this->historicTransitions->add(cVar2);
	cVar3 = std::make_shared<android::icu::util::TimeZoneTransition>(this->finalRules[0x1]->getNextStart(d0->getTime(), this->finalRules[0x0]->getRawOffset(), this->finalRules[0x0]->getDSTSavings(), 0x0)->getTime(), this->finalRules[0x0], this->finalRules[0x1]);
	this->historicTransitions->add(cVar3);
	//    .end local v6    # "lastTransitionTime":J
	//    .end local v17    # "curRule":Landroid/icu/util/TimeZoneRule;
	//    .end local v19    # "d0":Ljava/util/Date;
	//    .end local v20    # "d1":Ljava/util/Date;
label_cond_183:
label_goto_183:
	this->upToDate = 0x1;
	return;
	// 560    .line 526
	// 561    .restart local v4    # "bDoneAll":Z
	// 562    .restart local v6    # "lastTransitionTime":J
	// 563    .restart local v8    # "curStdOffset":I
	// 564    .restart local v9    # "curDstSavings":I
	// 565    .restart local v17    # "curRule":Landroid/icu/util/TimeZoneRule;
	// 566    .restart local v21    # "done":Ljava/util/BitSet;
	// 567    .restart local v22    # "i":I
	// 568    .restart local v23    # "j":I
	// 569    .restart local v26    # "nextTransitionTime":J
label_cond_189:
	j = ( j + 0x1);
	goto label_goto_c0;
	// 575    .line 537
	// 576    .end local v4    # "bDoneAll":Z
	// 577    .end local v23    # "j":I
label_cond_18d:
	if ( !(this->finalRules) )  
		goto label_cond_1c9;
	i = 0x0;
label_goto_195:
	if ( i >= 0x2 )
		goto label_cond_1c9;
	if ( this->finalRules[i] != curRule )
		goto label_cond_1a7;
label_cond_1a4:
label_goto_1a4:
	i = ( i + 0x1);
	goto label_goto_195;
	// 613    .line 543
label_cond_1a7:
	d = this->finalRules[i]->getNextStart(lastTransitionTime, curStdOffset, curDstSavings, 0x0);
	//    .restart local v18    # "d":Ljava/util/Date;
	if ( !(d) )  
		goto label_cond_1a4;
	tt = d->getTime();
	//    .restart local v28    # "tt":J
	if ( (tt > nextTransitionTime) >= 0 )
		goto label_cond_1a4;
	nextTransitionTime = tt;
	this->finalRules[i];
	//    .restart local v24    # "nextRule":Landroid/icu/util/TimeZoneRule;
	goto label_goto_1a4;
	// 661    .line 554
	// 662    .end local v18    # "d":Ljava/util/Date;
	// 663    .end local v24    # "nextRule":Landroid/icu/util/TimeZoneRule;
	// 664    .end local v28    # "tt":J
label_cond_1c9:
	if ( !(nextRule) )  
		goto label_cond_d9;
	if ( this->historicTransitions )     
		goto label_cond_1da;
	cVar4 = std::make_shared<java::util::ArrayList>();
	this->historicTransitions = cVar4;
label_cond_1da:
	cVar5 = std::make_shared<android::icu::util::TimeZoneTransition>(nextTransitionTime, curRule, nextRule);
	this->historicTransitions->add(cVar5);
	nextTransitionTime;
	curRule = nextRule;
	goto label_goto_4b;
	// 710    .line 579
	// 711    .end local v8    # "curStdOffset":I
	// 712    .end local v9    # "curDstSavings":I
	// 713    .end local v21    # "done":Ljava/util/BitSet;
	// 714    .end local v22    # "i":I
	// 715    .end local v26    # "nextTransitionTime":J
	// 716    .restart local v19    # "d0":Ljava/util/Date;
	// 717    .restart local v20    # "d1":Ljava/util/Date;
label_cond_1f2:
	cVar6 = std::make_shared<android::icu::util::TimeZoneTransition>(d1->getTime(), curRule, this->finalRules[0x1]);
	this->historicTransitions->add(cVar6);
	cVar7 = std::make_shared<android::icu::util::TimeZoneTransition>(this->finalRules[0x0]->getNextStart(d1->getTime(), this->finalRules[0x1]->getRawOffset(), this->finalRules[0x1]->getDSTSavings(), 0x0)->getTime(), this->finalRules[0x1], this->finalRules[0x0]);
	this->historicTransitions->add(cVar7);
	goto label_goto_183;

}
// .method private findRuleInFinal(JZII)Landroid/icu/util/TimeZoneRule;
std::shared_ptr<android::icu::util::TimeZoneRule> android::icu::util::RuleBasedTimeZone::findRuleInFinal(long long time,bool local,int NonExistingTimeOpt,int DuplicatedTimeOpt)
{
	
	long long base;
	int base;
	std::shared_ptr<java::util::Date> start0;
	std::shared_ptr<java::util::Date> start1;
	std::shared_ptr<android::icu::util::TimeZoneRule> cVar0;
	
	//    .param p1, "time"    # J
	//    .param p3, "local"    # Z
	//    .param p4, "NonExistingTimeOpt"    # I
	//    .param p5, "DuplicatedTimeOpt"    # I
	if ( !(this->finalRules) )  
		goto label_cond_a;
	if ( this->finalRules->size() == 0x2 )
		goto label_cond_c;
label_cond_a:
	return 0x0;
	// 847    .line 635
label_cond_c:
	if ( !(this->finalRules[0x0]) )  
		goto label_cond_a;
	if ( !(this->finalRules[0x1]) )  
		goto label_cond_a;
	base = time;
	//    .local v2, "base":J
	if ( !(local) )  
		goto label_cond_4c;
	base = this->finalRules[0x0]->getRawOffset();
	//    .end local v2    # "base":J
	//    .local v10, "localDelta":I
	base = (time - (long long)(android::icu::util::RuleBasedTimeZone::getLocalDelta(this->finalRules[0x1]->getRawOffset(), this->finalRules[0x1]->getDSTSavings(), base, this->finalRules[0x0]->getDSTSavings(), NonExistingTimeOpt, DuplicatedTimeOpt)));
	//    .end local v10    # "localDelta":I
	//    .restart local v2    # "base":J
label_cond_4c:
	start0 = this->finalRules[0x0]->getPreviousStart(base, this->finalRules[0x1]->getRawOffset(), this->finalRules[0x1]->getDSTSavings(), 0x1);
	//    .local v11, "start0":Ljava/util/Date;
	base = time;
	if ( !(local) )  
		goto label_cond_9a;
	//    .restart local v10    # "localDelta":I
	base = (time - (long long)(android::icu::util::RuleBasedTimeZone::getLocalDelta(this->finalRules[0x0]->getRawOffset(), this->finalRules[0x0]->getDSTSavings(), this->finalRules[0x1]->getRawOffset(), this->finalRules[0x1]->getDSTSavings(), NonExistingTimeOpt, DuplicatedTimeOpt)));
	//    .end local v10    # "localDelta":I
label_cond_9a:
	start1 = this->finalRules[0x1]->getPreviousStart(base, this->finalRules[0x0]->getRawOffset(), this->finalRules[0x0]->getDSTSavings(), 0x1);
	//    .local v12, "start1":Ljava/util/Date;
	if ( !(start0) )  
		goto label_cond_ba;
	if ( start1 )     
		goto label_cond_cc;
label_cond_ba:
	if ( !(start0) )  
		goto label_cond_c2;
	return this->finalRules[0x0];
	// 1084    .line 664
label_cond_c2:
	if ( !(start1) )  
		goto label_cond_ca;
	return this->finalRules[0x1];
	// 1097    .line 668
label_cond_ca:
	return 0x0;
	// 1103    .line 671
label_cond_cc:
	if ( !(start0->after(start1)) )  
		goto label_cond_d8;
	cVar0 = this->finalRules[0x0];
label_goto_d7:
	return cVar0;
label_cond_d8:
	cVar0 = this->finalRules[0x1];
	goto label_goto_d7;

}
// .method private static getLocalDelta(IIIIII)I
int android::icu::util::RuleBasedTimeZone::getLocalDelta(int rawBefore,int dstBefore,int rawAfter,int dstAfter,int NonExistingTimeOpt,int DuplicatedTimeOpt)
{
	
	int cVar0;
	int cVar1;
	int delta;
	int offsetBefore;
	int offsetAfter;
	int dstToStd;
	int stdToDst;
	
	//    .param p0, "rawBefore"    # I
	//    .param p1, "dstBefore"    # I
	//    .param p2, "rawAfter"    # I
	//    .param p3, "dstAfter"    # I
	//    .param p4, "NonExistingTimeOpt"    # I
	//    .param p5, "DuplicatedTimeOpt"    # I
	cVar0 = 0x3;
	cVar1 = 0x1;
	delta = 0x0;
	//    .local v0, "delta":I
	offsetBefore = (rawBefore + dstBefore);
	//    .local v3, "offsetBefore":I
	offsetAfter = (rawAfter + dstAfter);
	//    .local v2, "offsetAfter":I
	if ( !(dstBefore) )  
		goto label_cond_23;
	if ( dstAfter )     
		goto label_cond_23;
	dstToStd = 0x1;
	//    .local v1, "dstToStd":Z
label_goto_c:
	if ( dstBefore )     
		goto label_cond_25;
	if ( !(dstAfter) )  
		goto label_cond_25;
	stdToDst = 0x1;
	//    .local v4, "stdToDst":Z
label_goto_11:
	if ( (offsetAfter - offsetBefore) < 0 ) 
		goto label_cond_3f;
	if ( ( NonExistingTimeOpt & 0x3) != cVar1 )
		goto label_cond_1b;
	if ( dstToStd )     
		goto label_cond_21;
label_cond_1b:
	if ( ( NonExistingTimeOpt & 0x3) != cVar0 )
		goto label_cond_27;
	if ( !(stdToDst) )  
		goto label_cond_27;
label_cond_21:
	delta = offsetBefore;
label_goto_22:
	return delta;
	// 1203    .line 698
	// 1204    .end local v1    # "dstToStd":Z
	// 1205    .end local v4    # "stdToDst":Z
label_cond_23:
	0x0;
	//    .restart local v1    # "dstToStd":Z
	goto label_goto_c;
	// 1212    .line 699
label_cond_25:
	0x0;
	//    .restart local v4    # "stdToDst":Z
	goto label_goto_11;
	// 1219    .line 706
label_cond_27:
	if ( ( NonExistingTimeOpt & 0x3) != cVar1 )
		goto label_cond_2d;
	if ( stdToDst )     
		goto label_cond_33;
label_cond_2d:
	if ( ( NonExistingTimeOpt & 0x3) != cVar0 )
		goto label_cond_35;
	if ( !(dstToStd) )  
		goto label_cond_35;
label_cond_33:
	delta = offsetAfter;
	goto label_goto_22;
	// 1242    .line 709
label_cond_35:
	if ( ( NonExistingTimeOpt & 0xc) != 0xc )
		goto label_cond_3d;
	delta = offsetBefore;
	goto label_goto_22;
	// 1255    .line 714
label_cond_3d:
	delta = offsetAfter;
	goto label_goto_22;
	// 1261    .line 718
label_cond_3f:
	if ( ( DuplicatedTimeOpt & 0x3) != cVar1 )
		goto label_cond_45;
	if ( dstToStd )     
		goto label_cond_4b;
label_cond_45:
	if ( ( DuplicatedTimeOpt & 0x3) != cVar0 )
		goto label_cond_4d;
	if ( !(stdToDst) )  
		goto label_cond_4d;
label_cond_4b:
	delta = offsetAfter;
	goto label_goto_22;
	// 1284    .line 721
label_cond_4d:
	if ( ( DuplicatedTimeOpt & 0x3) != cVar1 )
		goto label_cond_53;
	if ( stdToDst )     
		goto label_cond_59;
label_cond_53:
	if ( ( DuplicatedTimeOpt & 0x3) != cVar0 )
		goto label_cond_5b;
	if ( !(dstToStd) )  
		goto label_cond_5b;
label_cond_59:
	delta = offsetBefore;
	goto label_goto_22;
	// 1307    .line 724
label_cond_5b:
	if ( ( DuplicatedTimeOpt & 0xc) != 0x4 )
		goto label_cond_62;
	delta = offsetBefore;
	goto label_goto_22;
	// 1320    .line 729
label_cond_62:
	delta = offsetAfter;
	goto label_goto_22;

}
// .method private getOffset(JZII[I)V
void android::icu::util::RuleBasedTimeZone::getOffset(long long time,bool local,int NonExistingTimeOpt,int DuplicatedTimeOpt,std::shared_ptr<int[]> offsets)
{
	
	int cVar0;
	std::shared_ptr<android::icu::util::TimeZoneRule> rule;
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> rule;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar1;
	int idx;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar2;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar3;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar4;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar5;
	
	//    .param p1, "time"    # J
	//    .param p3, "local"    # Z
	//    .param p4, "NonExistingTimeOpt"    # I
	//    .param p5, "DuplicatedTimeOpt"    # I
	//    .param p6, "offsets"    # [I
	cVar0 = 0x0;
	this->complete();
	rule = 0x0;
	//    .local v1, "rule":Landroid/icu/util/TimeZoneRule;
	if ( this->historicTransitions )     
		goto label_cond_19;
	rule = this->initialRule;
	//    .end local v1    # "rule":Landroid/icu/util/TimeZoneRule;
label_cond_b:
label_goto_b:
	offsets[cVar0] = rule->getRawOffset();
	offsets[0x1] = rule->getDSTSavings();
	return;
	// 1375    .line 597
	// 1376    .restart local v1    # "rule":Landroid/icu/util/TimeZoneRule;
label_cond_19:
	cVar1 = this->historicTransitions->get(cVar0);
	cVar1->checkCast("android::icu::util::TimeZoneTransition");
	//    .local v4, "tstart":J
	if ( (time > android::icu::util::RuleBasedTimeZone::getTransitionTime(cVar1, local, NonExistingTimeOpt, DuplicatedTimeOpt)) >= 0 )
		goto label_cond_2c;
	rule = this->initialRule;
	//    .local v1, "rule":Landroid/icu/util/TimeZoneRule;
	goto label_goto_b;
	// 1402    .line 602
	// 1403    .local v1, "rule":Landroid/icu/util/TimeZoneRule;
label_cond_2c:
	idx = ( this->historicTransitions->size() + -0x1);
	//    .local v0, "idx":I
	cVar2 = this->historicTransitions->get(idx);
	cVar2->checkCast("android::icu::util::TimeZoneTransition");
	//    .local v2, "tend":J
	if ( (time > android::icu::util::RuleBasedTimeZone::getTransitionTime(cVar2, local, NonExistingTimeOpt, DuplicatedTimeOpt)) <= 0 )
		goto label_cond_5d;
	if ( !(this->finalRules) )  
		goto label_cond_4c;
	rule = this->findRuleInFinal(time, local, NonExistingTimeOpt, DuplicatedTimeOpt);
	//    .end local v1    # "rule":Landroid/icu/util/TimeZoneRule;
label_cond_4c:
	if ( rule )     
		goto label_cond_b;
	cVar3 = this->historicTransitions->get(idx);
	cVar3->checkCast("android::icu::util::TimeZoneTransition");
	rule = cVar3->getTo();
	//    .local v1, "rule":Landroid/icu/util/TimeZoneRule;
	goto label_goto_b;
	// 1464    .line 621
	// 1465    .local v1, "rule":Landroid/icu/util/TimeZoneRule;
label_cond_5b:
	idx = ( idx + -0x1);
label_cond_5d:
	if ( idx < 0 ) 
		goto label_cond_6f;
	cVar4 = this->historicTransitions->get(idx);
	cVar4->checkCast("android::icu::util::TimeZoneTransition");
	if ( (time > android::icu::util::RuleBasedTimeZone::getTransitionTime(cVar4, local, NonExistingTimeOpt, DuplicatedTimeOpt)) < 0 ) 
		goto label_cond_5b;
label_cond_6f:
	cVar5 = this->historicTransitions->get(idx);
	cVar5->checkCast("android::icu::util::TimeZoneTransition");
	rule = cVar5->getTo();
	//    .local v1, "rule":Landroid/icu/util/TimeZoneRule;
	goto label_goto_b;

}
// .method private static getTransitionTime(Landroid/icu/util/TimeZoneTransition;ZII)J
long long android::icu::util::RuleBasedTimeZone::getTransitionTime(std::shared_ptr<android::icu::util::TimeZoneTransition> tzt,bool local,int NonExistingTimeOpt,int DuplicatedTimeOpt)
{
	
	long long time;
	
	//    .param p0, "tzt"    # Landroid/icu/util/TimeZoneTransition;
	//    .param p1, "local"    # Z
	//    .param p2, "NonExistingTimeOpt"    # I
	//    .param p3, "DuplicatedTimeOpt"    # I
	time = tzt->getTime();
	//    .local v6, "time":J
	if ( !(local) )  
		goto label_cond_2e;
label_cond_2e:
	return time;

}
// .method public addTransitionRule(Landroid/icu/util/TimeZoneRule;)V
void android::icu::util::RuleBasedTimeZone::addTransitionRule(std::shared_ptr<android::icu::util::TimeZoneRule> rule)
{
	
	int cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> cVar4;
	std::shared_ptr<java::lang::IllegalStateException> cVar5;
	std::shared_ptr<java::util::ArrayList> cVar6;
	
	//    .param p1, "rule"    # Landroid/icu/util/TimeZoneRule;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( !(this->isFrozen()) )  
		goto label_cond_11;
	cVar2 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen RuleBasedTimeZone instance.")));
	// throw
	throw cVar2;
	// 1604    .line 61
label_cond_11:
	if ( rule->isTransitionRule() )     
		goto label_cond_20;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rule must be a transition rule")));
	// throw
	throw cVar3;
	// 1621    .line 64
label_cond_20:
	if ( !(rule->instanceOf("android::icu::util::AnnualTimeZoneRule")) )  
		goto label_cond_58;
	cVar4 = rule;
	cVar4->checkCast("android::icu::util::AnnualTimeZoneRule");
	if ( cVar4->getEndYear() != 0x7fffffff )
		goto label_cond_58;
	if ( this->finalRules )     
		goto label_cond_42;
	this->finalRules = std::make_shared<std::vector<std::vector<android::icu::util::AnnualTimeZoneRule>>>(0x2);
	rule->checkCast("android::icu::util::AnnualTimeZoneRule");
	//    .end local p1    # "rule":Landroid/icu/util/TimeZoneRule;
	this->finalRules[cVar1] = rule;
label_goto_3f:
	this->upToDate = cVar1;
	return;
	// 1667    .line 70
	// 1668    .restart local p1    # "rule":Landroid/icu/util/TimeZoneRule;
label_cond_42:
	if ( this->finalRules[cVar0] )     
		goto label_cond_4f;
	rule->checkCast("android::icu::util::AnnualTimeZoneRule");
	//    .end local p1    # "rule":Landroid/icu/util/TimeZoneRule;
	this->finalRules[cVar0] = rule;
	goto label_goto_3f;
	// 1686    .line 74
	// 1687    .restart local p1    # "rule":Landroid/icu/util/TimeZoneRule;
label_cond_4f:
	cVar5 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Too many final rules")));
	// throw
	throw cVar5;
	// 1697    .line 78
label_cond_58:
	if ( this->historicRules )     
		goto label_cond_63;
	cVar6 = std::make_shared<java::util::ArrayList>();
	this->historicRules = cVar6;
label_cond_63:
	this->historicRules->add(rule);
	goto label_goto_3f;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::RuleBasedTimeZone::clone()
{
	
	if ( !(this->isFrozen()) )  
		goto label_cond_7;
	return this;
	// 1733    .line 460
label_cond_7:
	return this->cloneAsThawed();

}
// .method public cloneAsThawed()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::RuleBasedTimeZone::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::util::RuleBasedTimeZone> tz;
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<std::vector<android::icu::util::AnnualTimeZoneRule>> cVar1;
	
	tz = this->cloneAsThawed();
	tz->checkCast("android::icu::util::RuleBasedTimeZone");
	//    .local v0, "tz":Landroid/icu/util/RuleBasedTimeZone;
	if ( !(this->historicRules) )  
		goto label_cond_13;
	cVar0 = std::make_shared<java::util::ArrayList>(this->historicRules);
	tz->historicRules = cVar0;
label_cond_13:
	if ( !(this->finalRules) )  
		goto label_cond_21;
	cVar1 = this->finalRules->clone();
	cVar1->checkCast("std::vector<android::icu::util::AnnualTimeZoneRule>");
	tz->finalRules = cVar1;
label_cond_21:
	tz->isFrozen = 0x0;
	return tz;

}
// .method public freeze()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::RuleBasedTimeZone::freeze()
{
	
	this->complete();
	this->isFrozen = 0x1;
	return this;

}
// .method public getNextTransition(JZ)Landroid/icu/util/TimeZoneTransition;
std::shared_ptr<android::icu::util::TimeZoneTransition> android::icu::util::RuleBasedTimeZone::getNextTransition(long long base,bool inclusive)
{
	
	std::shared_ptr<android::icu::util::TimeZoneTransition> tzt;
	auto tt;
	std::shared_ptr<android::icu::util::TimeZoneTransition> result;
	std::shared_ptr<android::icu::util::TimeZoneRule> from;
	std::shared_ptr<android::icu::util::TimeZoneRule> to;
	int idx;
	std::shared_ptr<java::util::Date> start0;
	std::shared_ptr<java::util::Date> start1;
	
	//    .param p1, "base"    # J
	//    .param p3, "inclusive"    # Z
	this->complete();
	if ( this->historicTransitions )     
		goto label_cond_b;
	return 0x0;
	// 1832    .line 329
label_cond_b:
	//    .local v10, "isFinal":Z
	tzt = this->historicTransitions->get(0x0);
	tzt->checkCast("android::icu::util::TimeZoneTransition");
	//    .local v18, "tzt":Landroid/icu/util/TimeZoneTransition;
	tt = tzt->getTime();
	//    .local v16, "tt":J
	if ( (tt > base) > 0 ) 
		goto label_cond_25;
	if ( !(inclusive) )  
		goto label_cond_47;
	if ( (tt > base) )     
		goto label_cond_47;
label_cond_25:
	result = tzt;
	//    .local v12, "result":Landroid/icu/util/TimeZoneTransition;
label_goto_27:
	from = result->getFrom();
	//    .local v2, "from":Landroid/icu/util/TimeZoneRule;
	to = result->getTo();
	//    .local v15, "to":Landroid/icu/util/TimeZoneRule;
	if ( from->getRawOffset() != to->getRawOffset() )
		goto label_cond_12d;
	if ( from->getDSTSavings() != to->getDSTSavings() )
		goto label_cond_12d;
	if ( !(0x0) )  
		goto label_cond_122;
	return 0x0;
	// 1916    .line 336
	// 1917    .end local v2    # "from":Landroid/icu/util/TimeZoneRule;
	// 1918    .end local v12    # "result":Landroid/icu/util/TimeZoneTransition;
	// 1919    .end local v15    # "to":Landroid/icu/util/TimeZoneRule;
label_cond_47:
	idx = ( this->historicTransitions->size() + -0x1);
	//    .local v9, "idx":I
	tzt = this->historicTransitions->get(idx);
	//    .end local v18    # "tzt":Landroid/icu/util/TimeZoneTransition;
	tzt->checkCast("android::icu::util::TimeZoneTransition");
	//    .restart local v18    # "tzt":Landroid/icu/util/TimeZoneTransition;
	tt = tzt->getTime();
	if ( !(inclusive) )  
		goto label_cond_68;
	if ( (tt > base) )     
		goto label_cond_68;
	result = tzt;
	//    .restart local v12    # "result":Landroid/icu/util/TimeZoneTransition;
	goto label_goto_27;
	// 1964    .line 341
	// 1965    .end local v12    # "result":Landroid/icu/util/TimeZoneTransition;
label_cond_68:
	if ( (tt > base) > 0 ) 
		goto label_cond_fc;
	if ( !(this->finalRules) )  
		goto label_cond_fa;
	start0 = this->finalRules[0x0]->getNextStart(base, this->finalRules[0x1]->getRawOffset(), this->finalRules[0x1]->getDSTSavings(), inclusive);
	//    .local v13, "start0":Ljava/util/Date;
	start1 = this->finalRules[0x1]->getNextStart(base, this->finalRules[0x0]->getRawOffset(), this->finalRules[0x0]->getDSTSavings(), inclusive);
	//    .local v14, "start1":Ljava/util/Date;
	if ( !(start1->after(start0)) )  
		goto label_cond_e0;
	//    .end local v18    # "tzt":Landroid/icu/util/TimeZoneTransition;
	var99 = tzt(start0->getTime(), this->finalRules[0x1], this->finalRules[0x0]);
	//    .restart local v18    # "tzt":Landroid/icu/util/TimeZoneTransition;
label_goto_db:
	result = tzt;
	//    .restart local v12    # "result":Landroid/icu/util/TimeZoneTransition;
	0x1;
	goto label_goto_27;
	// 2112    .line 352
	// 2113    .end local v12    # "result":Landroid/icu/util/TimeZoneTransition;
label_cond_e0:
	//    .end local v18    # "tzt":Landroid/icu/util/TimeZoneTransition;
	var114 = tzt(start1->getTime(), this->finalRules[0x0], this->finalRules[0x1]);
	//    .restart local v18    # "tzt":Landroid/icu/util/TimeZoneTransition;
	goto label_goto_db;
	// 2145    .line 357
	// 2146    .end local v13    # "start0":Ljava/util/Date;
	// 2147    .end local v14    # "start1":Ljava/util/Date;
label_cond_fa:
	return 0x0;
	// 2153    .line 361
label_cond_fc:
	idx = ( idx + -0x1);
	//    .local v11, "prev":Landroid/icu/util/TimeZoneTransition;
label_goto_100:
	if ( idx <= 0 )
		goto label_cond_11a;
	tzt = this->historicTransitions->get(idx);
	//    .end local v18    # "tzt":Landroid/icu/util/TimeZoneTransition;
	tzt->checkCast("android::icu::util::TimeZoneTransition");
	//    .restart local v18    # "tzt":Landroid/icu/util/TimeZoneTransition;
	tt = tzt->getTime();
	if ( (tt > base) < 0 ) 
		goto label_cond_11a;
	if ( inclusive )     
		goto label_cond_11d;
	if ( (tt > base) )     
		goto label_cond_11d;
label_cond_11a:
	result = tzt;
	//    .restart local v12    # "result":Landroid/icu/util/TimeZoneTransition;
	goto label_goto_27;
	// 2201    .line 369
	// 2202    .end local v12    # "result":Landroid/icu/util/TimeZoneTransition;
label_cond_11d:
	idx = ( idx + -0x1);
	tzt;
	goto label_goto_100;
	// 2211    .line 384
	// 2212    .end local v9    # "idx":I
	// 2213    .end local v11    # "prev":Landroid/icu/util/TimeZoneTransition;
	// 2214    .restart local v2    # "from":Landroid/icu/util/TimeZoneRule;
	// 2215    .restart local v12    # "result":Landroid/icu/util/TimeZoneTransition;
	// 2216    .restart local v15    # "to":Landroid/icu/util/TimeZoneRule;
label_cond_122:
label_cond_12d:
	return result;

}
// .method public getOffset(IIIIII)I
int android::icu::util::RuleBasedTimeZone::getOffset(int era,int cVar0,int month,int day,int dayOfWeek,int milliseconds)
{
	
	int cVar0;
	std::shared<std::vector<int[]>> offsets;
	
	//    .param p1, "era"    # I
	//    .param p2, "year"    # I
	//    .param p3, "month"    # I
	//    .param p4, "day"    # I
	//    .param p5, "dayOfWeek"    # I
	//    .param p6, "milliseconds"    # I
	if ( era )     
		goto label_cond_4;
	cVar0 = ( cVar0 - 0x1);
label_cond_4:
	//    .local v2, "time":J
	offsets = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v7, "offsets":[I
	this->getOffset(((android::icu::impl::Grego::fieldsToDay(cVar0, month, day) *  0x5265c00) + (long long)(milliseconds)), 0x1, 0x3, 0x1, offsets);
	return (offsets[0x0] +  offsets[0x1]);

}
// .method public getOffset(JZ[I)V
void android::icu::util::RuleBasedTimeZone::getOffset(long long time,bool local,std::shared_ptr<int[]> offsets)
{
	
	//    .param p1, "time"    # J
	//    .param p3, "local"    # Z
	//    .param p4, "offsets"    # [I
	this->getOffset(time, local, 0x4, 0xc, offsets);
	return;

}
// .method public getOffsetFromLocal(JII[I)V
void android::icu::util::RuleBasedTimeZone::getOffsetFromLocal(long long date,int nonExistingTimeOpt,int duplicatedTimeOpt,std::shared_ptr<int[]> offsets)
{
	
	//    .param p1, "date"    # J
	//    .param p3, "nonExistingTimeOpt"    # I
	//    .param p4, "duplicatedTimeOpt"    # I
	//    .param p5, "offsets"    # [I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2330    .end annotation
	this->getOffset(date, 0x1, nonExistingTimeOpt, duplicatedTimeOpt, offsets);
	return;

}
// .method public getPreviousTransition(JZ)Landroid/icu/util/TimeZoneTransition;
std::shared_ptr<android::icu::util::TimeZoneTransition> android::icu::util::RuleBasedTimeZone::getPreviousTransition(long long base,bool inclusive)
{
	
	std::shared_ptr<android::icu::util::TimeZoneTransition> tzt;
	auto tt;
	std::shared_ptr<android::icu::util::TimeZoneTransition> result;
	std::shared_ptr<android::icu::util::TimeZoneRule> from;
	std::shared_ptr<android::icu::util::TimeZoneRule> to;
	int idx;
	std::shared_ptr<java::util::Date> start0;
	std::shared_ptr<java::util::Date> start1;
	
	//    .param p1, "base"    # J
	//    .param p3, "inclusive"    # Z
	this->complete();
	if ( this->historicTransitions )     
		goto label_cond_9;
	return 0x0;
	// 2371    .line 400
label_cond_9:
	tzt = this->historicTransitions->get(0x0);
	tzt->checkCast("android::icu::util::TimeZoneTransition");
	//    .local v14, "tzt":Landroid/icu/util/TimeZoneTransition;
	tt = tzt->getTime();
	//    .local v12, "tt":J
	if ( !(inclusive) )  
		goto label_cond_43;
	if ( (tt > base) )     
		goto label_cond_43;
	result = tzt;
	//    .local v8, "result":Landroid/icu/util/TimeZoneTransition;
label_goto_1d:
	from = result->getFrom();
	//    .local v0, "from":Landroid/icu/util/TimeZoneRule;
	to = result->getTo();
	//    .local v11, "to":Landroid/icu/util/TimeZoneRule;
	if ( from->getRawOffset() != to->getRawOffset() )
		goto label_cond_42;
	if ( from->getDSTSavings() != to->getDSTSavings() )
		goto label_cond_42;
label_cond_42:
	return result;
	// 2451    .line 404
	// 2452    .end local v0    # "from":Landroid/icu/util/TimeZoneRule;
	// 2453    .end local v8    # "result":Landroid/icu/util/TimeZoneTransition;
	// 2454    .end local v11    # "to":Landroid/icu/util/TimeZoneRule;
label_cond_43:
	if ( (tt > base) < 0 ) 
		goto label_cond_49;
	return 0x0;
	// 2465    .line 407
label_cond_49:
	idx = ( this->historicTransitions->size() + -0x1);
	//    .local v7, "idx":I
	tzt = this->historicTransitions->get(idx);
	//    .end local v14    # "tzt":Landroid/icu/util/TimeZoneTransition;
	tzt->checkCast("android::icu::util::TimeZoneTransition");
	//    .restart local v14    # "tzt":Landroid/icu/util/TimeZoneTransition;
	tt = tzt->getTime();
	if ( !(inclusive) )  
		goto label_cond_65;
	if ( (tt > base) )     
		goto label_cond_65;
	result = tzt;
	//    .restart local v8    # "result":Landroid/icu/util/TimeZoneTransition;
	goto label_goto_1d;
	// 2506    .line 412
	// 2507    .end local v8    # "result":Landroid/icu/util/TimeZoneTransition;
label_cond_65:
	if ( (tt > base) >= 0 )
		goto label_cond_db;
	if ( !(this->finalRules) )  
		goto label_cond_c4;
	start0 = this->finalRules[0x0]->getPreviousStart(base, this->finalRules[0x1]->getRawOffset(), this->finalRules[0x1]->getDSTSavings(), inclusive);
	//    .local v9, "start0":Ljava/util/Date;
	start1 = this->finalRules[0x1]->getPreviousStart(base, this->finalRules[0x0]->getRawOffset(), this->finalRules[0x0]->getDSTSavings(), inclusive);
	//    .local v10, "start1":Ljava/util/Date;
	if ( !(start1->before(start0)) )  
		goto label_cond_c7;
	//    .end local v14    # "tzt":Landroid/icu/util/TimeZoneTransition;
	tzt = std::make_shared<android::icu::util::TimeZoneTransition>(start0->getTime(), this->finalRules[0x1], this->finalRules[0x0]);
	//    .end local v9    # "start0":Ljava/util/Date;
	//    .end local v10    # "start1":Ljava/util/Date;
	//    .restart local v14    # "tzt":Landroid/icu/util/TimeZoneTransition;
label_cond_c4:
label_goto_c4:
	result = tzt;
	//    .restart local v8    # "result":Landroid/icu/util/TimeZoneTransition;
	goto label_goto_1d;
	// 2634    .line 423
	// 2635    .end local v8    # "result":Landroid/icu/util/TimeZoneTransition;
	// 2636    .restart local v9    # "start0":Ljava/util/Date;
	// 2637    .restart local v10    # "start1":Ljava/util/Date;
label_cond_c7:
	//    .end local v14    # "tzt":Landroid/icu/util/TimeZoneTransition;
	tzt = std::make_shared<android::icu::util::TimeZoneTransition>(start1->getTime(), this->finalRules[0x0], this->finalRules[0x1]);
	//    .restart local v14    # "tzt":Landroid/icu/util/TimeZoneTransition;
	goto label_goto_c4;
	// 2663    .line 429
	// 2664    .end local v9    # "start0":Ljava/util/Date;
	// 2665    .end local v10    # "start1":Ljava/util/Date;
label_cond_db:
	idx = ( idx + -0x1);
label_goto_dd:
	if ( idx < 0 ) 
		goto label_cond_f5;
	tzt = this->historicTransitions->get(idx);
	//    .end local v14    # "tzt":Landroid/icu/util/TimeZoneTransition;
	tzt->checkCast("android::icu::util::TimeZoneTransition");
	//    .restart local v14    # "tzt":Landroid/icu/util/TimeZoneTransition;
	tt = tzt->getTime();
	if ( (tt > base) < 0 ) 
		goto label_cond_f5;
	if ( !(inclusive) )  
		goto label_cond_f8;
	if ( (tt > base) )     
		goto label_cond_f8;
label_cond_f5:
	result = tzt;
	//    .restart local v8    # "result":Landroid/icu/util/TimeZoneTransition;
	goto label_goto_1d;
	// 2707    .line 436
	// 2708    .end local v8    # "result":Landroid/icu/util/TimeZoneTransition;
label_cond_f8:
	idx = ( idx + -0x1);
	goto label_goto_dd;

}
// .method public getRawOffset()I
int android::icu::util::RuleBasedTimeZone::getRawOffset()
{
	
	bool cVar0;
	std::shared<std::vector<int[]>> offsets;
	
	cVar0 = 0x0;
	//    .local v0, "now":J
	offsets = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v2, "offsets":[I
	this->getOffset(java::lang::System::currentTimeMillis({const[class].FS-Param}), cVar0, offsets);
	return offsets[cVar0];

}
// .method public getTimeZoneRules()[Landroid/icu/util/TimeZoneRule;
std::shared_ptr<android::icu::util::TimeZoneRule> android::icu::util::RuleBasedTimeZone::getTimeZoneRules()
{
	
	int cVar0;
	int cVar1;
	int size;
	std::shared<std::vector<std::vector<android::icu::util::TimeZoneRule>>> rules;
	int idx;
	std::shared_ptr<android::icu::util::TimeZoneRule> cVar2;
	
	cVar0 = 0x0;
	cVar1 = 0x1;
	size = 0x1;
	//    .local v3, "size":I
	if ( !(this->historicRules) )  
		goto label_cond_f;
	size = ( this->historicRules->size() + 0x1);
label_cond_f:
	if ( !(this->finalRules) )  
		goto label_cond_1b;
	if ( !(this->finalRules[cVar1]) )  
		goto label_cond_3f;
	size = ( size + 0x2);
label_cond_1b:
label_goto_1b:
	rules = std::make_shared<std::vector<std::vector<android::icu::util::TimeZoneRule>>>(size);
	//    .local v2, "rules":[Landroid/icu/util/TimeZoneRule;
	rules[cVar0] = this->initialRule;
	idx = 0x1;
	//    .local v0, "idx":I
	if ( !(this->historicRules) )  
		goto label_cond_42;
label_goto_26:
	if ( idx >= ( this->historicRules->size() + 0x1) )
		goto label_cond_42;
	cVar2 = this->historicRules->get(( idx + -0x1));
	cVar2->checkCast("android::icu::util::TimeZoneRule");
	rules[idx] = cVar2;
	idx = ( idx + 0x1);
	goto label_goto_26;
	// 2834    .line 299
	// 2835    .end local v0    # "idx":I
	// 2836    .end local v2    # "rules":[Landroid/icu/util/TimeZoneRule;
label_cond_3f:
	size = ( size + 0x1);
	goto label_goto_1b;
	// 2842    .line 311
	// 2843    .restart local v0    # "idx":I
	// 2844    .restart local v2    # "rules":[Landroid/icu/util/TimeZoneRule;
label_cond_42:
	if ( !(this->finalRules) )  
		goto label_cond_5b;
	idx = ( idx + 0x1);
	//    .end local v0    # "idx":I
	//    .local v1, "idx":I
	rules[idx] = this->finalRules[cVar0];
	if ( !(this->finalRules[cVar1]) )  
		goto label_cond_5c;
	rules[idx] = this->finalRules[cVar1];
	idx = idx;
	//    .end local v1    # "idx":I
	//    .restart local v0    # "idx":I
label_cond_5b:
label_goto_5b:
	return rules;
	// 2884    .end local v0    # "idx":I
	// 2885    .restart local v1    # "idx":I
label_cond_5c:
	idx = idx;
	//    .end local v1    # "idx":I
	//    .restart local v0    # "idx":I
	goto label_goto_5b;

}
// .method public hasSameRules(Landroid/icu/util/TimeZone;)Z
bool android::icu::util::RuleBasedTimeZone::hasSameRules(std::shared_ptr<android::icu::util::TimeZone> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::RuleBasedTimeZone> otherRBTZ;
	int i;
	std::shared_ptr<java::util::Iterator> rule_S_iterator;
	std::shared_ptr<android::icu::util::TimeZoneRule> rule;
	std::shared_ptr<java::util::Iterator> orule_S_iterator;
	std::shared_ptr<android::icu::util::TimeZoneRule> orule;
	
	//    .param p1, "other"    # Landroid/icu/util/TimeZone;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 2909    .line 232
label_cond_5:
	if ( other->instanceOf("android::icu::util::RuleBasedTimeZone") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	otherRBTZ = other;
	otherRBTZ->checkCast("android::icu::util::RuleBasedTimeZone");
	//    .local v4, "otherRBTZ":Landroid/icu/util/RuleBasedTimeZone;
	if ( this->initialRule->isEquivalentTo(otherRBTZ->initialRule) )     
		goto label_cond_18;
	return cVar1;
	// 2939    .line 244
label_cond_18:
	if ( !(this->finalRules) )  
		goto label_cond_50;
	if ( !(otherRBTZ->finalRules) )  
		goto label_cond_50;
	i = 0x0;
	//    .local v1, "i":I
label_goto_21:
	if ( i >= this->finalRules->size() )
		goto label_cond_59;
	if ( this->finalRules[i] )     
		goto label_cond_35;
	if ( otherRBTZ->finalRules[i] )     
		goto label_cond_35;
label_cond_32:
	i = ( i + 0x1);
	goto label_goto_21;
	// 2979    .line 249
label_cond_35:
	if ( !(this->finalRules[i]) )  
		goto label_cond_4f;
	if ( !(otherRBTZ->finalRules[i]) )  
		goto label_cond_4f;
	if ( this->finalRules[i]->isEquivalentTo(otherRBTZ->finalRules[i]) )     
		goto label_cond_32;
label_cond_4f:
	return cVar1;
	// 3013    .line 256
	// 3014    .end local v1    # "i":I
label_cond_50:
	if ( this->finalRules )     
		goto label_cond_58;
	if ( !(otherRBTZ->finalRules) )  
		goto label_cond_59;
label_cond_58:
	return cVar1;
	// 3028    .line 261
label_cond_59:
	if ( !(this->historicRules) )  
		goto label_cond_9f;
	if ( !(otherRBTZ->historicRules) )  
		goto label_cond_9f;
	if ( this->historicRules->size() == otherRBTZ->historicRules->size() )
		goto label_cond_70;
	return cVar1;
	// 3056    .line 265
label_cond_70:
	rule_S_iterator = this->historicRules->iterator();
	//    .local v6, "rule$iterator":Ljava/util/Iterator;
label_cond_76:
	if ( !(rule_S_iterator->hasNext()) )  
		goto label_cond_a8;
	rule = rule_S_iterator->next();
	rule->checkCast("android::icu::util::TimeZoneRule");
	//    .local v5, "rule":Landroid/icu/util/TimeZoneRule;
	//    .local v0, "foundSameRule":Z
	orule_S_iterator = otherRBTZ->historicRules->iterator();
	//    .local v3, "orule$iterator":Ljava/util/Iterator;
label_cond_89:
	if ( !(orule_S_iterator->hasNext()) )  
		goto label_cond_9c;
	orule = orule_S_iterator->next();
	orule->checkCast("android::icu::util::TimeZoneRule");
	//    .local v2, "orule":Landroid/icu/util/TimeZoneRule;
	if ( !(rule->isEquivalentTo(orule)) )  
		goto label_cond_89;
	//    .end local v2    # "orule":Landroid/icu/util/TimeZoneRule;
label_cond_9c:
	if ( 0x0 )     
		goto label_cond_76;
	return cVar1;
	// 3123    .line 277
	// 3124    .end local v0    # "foundSameRule":Z
	// 3125    .end local v3    # "orule$iterator":Ljava/util/Iterator;
	// 3126    .end local v5    # "rule":Landroid/icu/util/TimeZoneRule;
	// 3127    .end local v6    # "rule$iterator":Ljava/util/Iterator;
label_cond_9f:
	if ( this->historicRules )     
		goto label_cond_a7;
	if ( !(otherRBTZ->historicRules) )  
		goto label_cond_a8;
label_cond_a7:
	return cVar1;
	// 3141    .line 280
label_cond_a8:
	return cVar0;

}
// .method public inDaylightTime(Ljava/util/Date;)Z
bool android::icu::util::RuleBasedTimeZone::inDaylightTime(std::shared_ptr<java::util::Date> date)
{
	
	bool cVar0;
	bool cVar1;
	std::shared<std::vector<int[]>> offsets;
	
	//    .param p1, "date"    # Ljava/util/Date;
	cVar0 = 0x1;
	cVar1 = 0x0;
	offsets = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v0, "offsets":[I
	this->getOffset(date->getTime(), cVar1, offsets);
	if ( !(offsets[cVar0]) )  
		goto label_cond_11;
label_goto_10:
	return cVar0;
label_cond_11:
	cVar0 = cVar1;
	goto label_goto_10;

}
// .method public isFrozen()Z
bool android::icu::util::RuleBasedTimeZone::isFrozen()
{
	
	return this->isFrozen;

}
// .method public observesDaylightTime()Z
bool android::icu::util::RuleBasedTimeZone::observesDaylightTime()
{
	
	bool cVar0;
	bool cVar1;
	long long time;
	std::shared<std::vector<int[]>> offsets;
	std::shared_ptr<java::util::BitSet> cVar2;
	std::shared_ptr<android::icu::util::TimeZoneTransition> tt;
	std::shared_ptr<android::icu::util::TimeZoneRule> toRule;
	int i;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	time = java::lang::System::currentTimeMillis({const[class].FS-Param});
	//    .local v4, "time":J
	offsets = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v2, "offsets":[I
	this->getOffset(time, cVar1, offsets);
	if ( !(offsets[cVar0]) )  
		goto label_cond_11;
	return cVar0;
	// 3223    .line 195
label_cond_11:
	if ( this->finalRules )     
		goto label_cond_1d;
	cVar2 = 0x0;
label_goto_16:
	tt = this->getNextTransition(time, cVar1);
	//    .local v6, "tt":Landroid/icu/util/TimeZoneTransition;
	if ( tt )     
		goto label_cond_26;
label_cond_1c:
	return cVar1;
	// 3245    .line 195
	// 3246    .end local v6    # "tt":Landroid/icu/util/TimeZoneTransition;
label_cond_1d:
	cVar2 = std::make_shared<java::util::BitSet>(this->finalRules->size());
	//    .local v0, "checkFinals":Ljava/util/BitSet;
	goto label_goto_16;
	// 3259    .line 202
	// 3260    .end local v0    # "checkFinals":Ljava/util/BitSet;
	// 3261    .restart local v6    # "tt":Landroid/icu/util/TimeZoneTransition;
label_cond_26:
	toRule = tt->getTo();
	//    .local v3, "toRule":Landroid/icu/util/TimeZoneRule;
	if ( !(toRule->getDSTSavings()) )  
		goto label_cond_31;
	return cVar0;
	// 3278    .line 206
label_cond_31:
	if ( !(cVar2) )  
		goto label_cond_52;
	i = 0x0;
	//    .local v1, "i":I
label_goto_34:
	if ( i >= this->finalRules->size() )
		goto label_cond_49;
	if ( !(this->finalRules[i]->equals(toRule)) )  
		goto label_cond_46;
	cVar2->set(i);
label_cond_46:
	i = ( i + 0x1);
	goto label_goto_34;
	// 3313    .line 213
label_cond_49:
	if ( cVar2->cardinality() == this->finalRules->size() )
		goto label_cond_1c;
	//    .end local v1    # "i":I
label_cond_52:
	time = tt->getTime();
	goto label_goto_16;

}
// .method public setRawOffset(I)V
void android::icu::util::RuleBasedTimeZone::setRawOffset(int offsetMillis)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "offsetMillis"    # I
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("setRawOffset in RuleBasedTimeZone is not supported.")));
	// throw
	throw cVar0;

}
// .method public useDaylightTime()Z
bool android::icu::util::RuleBasedTimeZone::useDaylightTime()
{
	
	bool cVar0;
	bool cVar1;
	long long now;
	std::shared<std::vector<int[]>> offsets;
	std::shared_ptr<android::icu::util::TimeZoneTransition> tt;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	now = java::lang::System::currentTimeMillis({const[class].FS-Param});
	//    .local v0, "now":J
	offsets = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v2, "offsets":[I
	this->getOffset(now, cVar1, offsets);
	if ( !(offsets[cVar0]) )  
		goto label_cond_11;
	return cVar0;
	// 3381    .line 173
label_cond_11:
	tt = this->getNextTransition(now, cVar1);
	//    .local v3, "tt":Landroid/icu/util/TimeZoneTransition;
	if ( !(tt) )  
		goto label_cond_22;
	if ( !(tt->getTo()->getDSTSavings()) )  
		goto label_cond_22;
	return cVar0;
	// 3404    .line 177
label_cond_22:
	return cVar1;

}


