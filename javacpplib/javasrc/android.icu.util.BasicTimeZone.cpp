// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\BasicTimeZone.smali
#include "java2ctype.h"
#include "android.icu.impl.Grego.h"
#include "android.icu.util.AnnualTimeZoneRule.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.DateTimeRule.h"
#include "android.icu.util.InitialTimeZoneRule.h"
#include "android.icu.util.TimeArrayTimeZoneRule.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.TimeZoneRule.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.BitSet.h"
#include "java.util.Date.h"
#include "java.util.LinkedList.h"
#include "java.util.List.h"

static android::icu::util::BasicTimeZone::FORMER_LATTER_MASK = 0xc;
static android::icu::util::BasicTimeZone::LOCAL_DST = 0x3;
static android::icu::util::BasicTimeZone::LOCAL_FORMER = 0x4;
static android::icu::util::BasicTimeZone::LOCAL_LATTER = 0xc;
static android::icu::util::BasicTimeZone::LOCAL_STD = 0x1;
static android::icu::util::BasicTimeZone::MILLIS_PER_YEAR = 0x757b12c00L;
static android::icu::util::BasicTimeZone::STD_DST_MASK = 0x3;
static android::icu::util::BasicTimeZone::serialVersionUID = -0x2c77e2591bf19444L;
// .method protected constructor <init>()V
android::icu::util::BasicTimeZone::BasicTimeZone()
{
	
	// 048    invoke-direct {p0}, Landroid/icu/util/TimeZone;-><init>()V
	return;

}
// .method protected constructor <init>(Ljava/lang/String;)V
android::icu::util::BasicTimeZone::BasicTimeZone(std::shared_ptr<java::lang::String> ID)
{
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 058    .end annotation
	android::icu::util::TimeZone::(ID);
	return;

}
// .method public getOffsetFromLocal(JII[I)V
void android::icu::util::BasicTimeZone::getOffsetFromLocal(long long date,int nonExistingTimeOpt,int duplicatedTimeOpt,std::shared_ptr<int[]> offsets)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p1, "date"    # J
	//    .param p3, "nonExistingTimeOpt"    # I
	//    .param p4, "duplicatedTimeOpt"    # I
	//    .param p5, "offsets"    # [I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 080    .end annotation
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Not implemented")));
	// throw
	throw cVar0;

}
// .method public getSimpleTimeZoneRulesNear(J)[Landroid/icu/util/TimeZoneRule;
std::shared_ptr<android::icu::util::TimeZoneRule> android::icu::util::BasicTimeZone::getSimpleTimeZoneRulesNear(long long date)
{
	
	int annualRules;
	std::shared_ptr<android::icu::util::TimeZoneTransition> tr;
	auto initialName;
	int initialRaw;
	int initialDst;
	auto nextTransitionTime;
	std::shared<std::vector<std::vector<android::icu::util::AnnualTimeZoneRule>>> annualRules;
	auto dtfields;
	std::shared_ptr<android::icu::util::DateTimeRule> dtr;
	int secondRule;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> cVar0;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> secondRule;
	std::shared_ptr<java::util::Date> d;
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> initialRule;
	std::shared_ptr<std::vector<android::icu::util::TimeZoneRule>> result;
	auto offsets;
	
	//    .param p1, "date"    # J
	annualRules = 0x0;
	//    .local v14, "annualRules":[Landroid/icu/util/AnnualTimeZoneRule;
	0x0;
	//    .local v20, "initialRule":Landroid/icu/util/TimeZoneRule;
	tr = this->getNextTransition(date, 0x0);
	//    .local v26, "tr":Landroid/icu/util/TimeZoneTransition;
	if ( !(tr) )  
		goto label_cond_295;
	initialName = tr->getFrom()->getName();
	//    .local v18, "initialName":Ljava/lang/String;
	initialRaw = tr->getFrom()->getRawOffset();
	//    .local v19, "initialRaw":I
	initialDst = tr->getFrom()->getDSTSavings();
	//    .local v17, "initialDst":I
	nextTransitionTime = tr->getTime();
	//    .local v22, "nextTransitionTime":J
	if ( tr->getFrom()->getDSTSavings() )     
		goto label_cond_23b;
	if ( !(tr->getTo()->getDSTSavings()) )  
		goto label_cond_23b;
label_goto_3e:
	if ( ((0x757b12c00L + date) > nextTransitionTime) <= 0 )
		goto label_cond_221;
	annualRules = std::make_shared<std::vector<std::vector<android::icu::util::AnnualTimeZoneRule>>>(0x2);
	//    .local v14, "annualRules":[Landroid/icu/util/AnnualTimeZoneRule;
	dtfields = android::icu::impl::Grego::timeToFields((((long long)(tr->getFrom()->getRawOffset()) + nextTransitionTime) +  (long long)(tr->getFrom()->getDSTSavings())), 0x0);
	//    .local v16, "dtfields":[I
	//    .local v6, "weekInMonth":I
	dtr = std::make_shared<android::icu::util::DateTimeRule>(dtfields[0x1], android::icu::impl::Grego::getDayOfWeekInMonth(dtfields[0x0], dtfields[0x1], dtfields[0x2]), dtfields[0x3], dtfields[0x5], 0x0);
	//    .local v4, "dtr":Landroid/icu/util/DateTimeRule;
	secondRule = 0x0;
	//    .local v25, "secondRule":Landroid/icu/util/AnnualTimeZoneRule;
	cVar0 = std::make_shared<android::icu::util::AnnualTimeZoneRule>(tr->getTo()->getName(), initialRaw, tr->getTo()->getDSTSavings(), dtr, dtfields[0x0], 0x7fffffff);
	annualRules[0x0] = cVar0;
	if ( tr->getTo()->getRawOffset() != initialRaw )
		goto label_cond_2f9;
	tr = this->getNextTransition(nextTransitionTime, 0x0);
	if ( !(tr) )  
		goto label_cond_2f9;
	if ( tr->getFrom()->getDSTSavings() )     
		goto label_cond_251;
	if ( !(tr->getTo()->getDSTSavings()) )  
		goto label_cond_251;
label_cond_d0:
	if ( ((0x757b12c00L + nextTransitionTime) > tr->getTime()) <= 0 )
		goto label_cond_265;
	dtfields = android::icu::impl::Grego::timeToFields(((tr->getTime() +  (long long)(tr->getFrom()->getRawOffset())) +  (long long)(tr->getFrom()->getDSTSavings())), dtfields);
	//    .end local v4    # "dtr":Landroid/icu/util/DateTimeRule;
	dtr = std::make_shared<android::icu::util::DateTimeRule>(dtfields[0x1], android::icu::impl::Grego::getDayOfWeekInMonth(dtfields[0x0], dtfields[0x1], dtfields[0x2]), dtfields[0x3], dtfields[0x5], 0x0);
	//    .restart local v4    # "dtr":Landroid/icu/util/DateTimeRule;
	secondRule = std::make_shared<android::icu::util::AnnualTimeZoneRule>(tr->getTo()->getName(), tr->getTo()->getRawOffset(), tr->getTo()->getDSTSavings(), dtr, ( dtfields[0x0] + -0x1), 0x7fffffff);
	//    .local v7, "secondRule":Landroid/icu/util/AnnualTimeZoneRule;
	//    .end local v25    # "secondRule":Landroid/icu/util/AnnualTimeZoneRule;
	d = secondRule->getPreviousStart(date, tr->getFrom()->getRawOffset(), tr->getFrom()->getDSTSavings(), 0x1);
	//    .local v15, "d":Ljava/util/Date;
	if ( !(d) )  
		goto label_cond_17b;
	if ( (d->getTime() > date) > 0 ) 
		goto label_cond_17b;
	if ( initialRaw != tr->getTo()->getRawOffset() )
		goto label_cond_17b;
	if ( initialDst != tr->getTo()->getDSTSavings() )
		goto label_cond_17b;
	annualRules[0x1] = secondRule;
	//    .end local v15    # "d":Ljava/util/Date;
label_cond_17b:
label_goto_17b:
	if ( annualRules[0x1] )     
		goto label_cond_21b;
	tr = this->getPreviousTransition(date, 0x1);
	if ( !(tr) )  
		goto label_cond_21b;
	if ( tr->getFrom()->getDSTSavings() )     
		goto label_cond_269;
	if ( !(tr->getTo()->getDSTSavings()) )  
		goto label_cond_269;
label_goto_19f:
	dtfields = android::icu::impl::Grego::timeToFields(((tr->getTime() +  (long long)(tr->getFrom()->getRawOffset())) +  (long long)(tr->getFrom()->getDSTSavings())), dtfields);
	//    .end local v4    # "dtr":Landroid/icu/util/DateTimeRule;
	var234 = dtr(dtfields[0x1], android::icu::impl::Grego::getDayOfWeekInMonth(dtfields[0x0], dtfields[0x1], dtfields[0x2]), dtfields[0x3], dtfields[0x5], 0x0);
	//    .restart local v4    # "dtr":Landroid/icu/util/DateTimeRule;
	//    .end local v7    # "secondRule":Landroid/icu/util/AnnualTimeZoneRule;
	secondRule = std::make_shared<android::icu::util::AnnualTimeZoneRule>(tr->getTo()->getName(), initialRaw, initialDst, dtr, ( annualRules[0x0]->getStartYear() + -0x1), 0x7fffffff);
	//    .restart local v7    # "secondRule":Landroid/icu/util/AnnualTimeZoneRule;
	//    .restart local v15    # "d":Ljava/util/Date;
	if ( (secondRule->getNextStart(date, tr->getFrom()->getRawOffset(), tr->getFrom()->getDSTSavings(), 0x0)->getTime() > nextTransitionTime) <= 0 )
		goto label_cond_21b;
	annualRules[0x1] = secondRule;
	//    .end local v15    # "d":Ljava/util/Date;
label_cond_21b:
	if ( annualRules[0x1] )     
		goto label_cond_27f;
	annualRules = 0x0;
	//    .end local v4    # "dtr":Landroid/icu/util/DateTimeRule;
	//    .end local v6    # "weekInMonth":I
	//    .end local v7    # "secondRule":Landroid/icu/util/AnnualTimeZoneRule;
	//    .end local v14    # "annualRules":[Landroid/icu/util/AnnualTimeZoneRule;
	//    .end local v16    # "dtfields":[I
label_cond_221:
label_goto_221:
	//    .end local v20    # "initialRule":Landroid/icu/util/TimeZoneRule;
	var272 = initialRule(initialName, initialRaw, initialDst);
	//    .end local v17    # "initialDst":I
	//    .end local v18    # "initialName":Ljava/lang/String;
	//    .end local v19    # "initialRaw":I
	//    .end local v22    # "nextTransitionTime":J
	//    .local v20, "initialRule":Landroid/icu/util/TimeZoneRule;
label_goto_22e:
	0x0;
	//    .local v24, "result":[Landroid/icu/util/TimeZoneRule;
	if ( annualRules )     
		goto label_cond_2e3;
	result = std::make_shared<std::vector<std::vector<android::icu::util::TimeZoneRule>>>(0x1);
	//    .local v24, "result":[Landroid/icu/util/TimeZoneRule;
	result[0x0] = initialRule;
label_goto_23a:
	return result;
	// 845    .line 393
	// 846    .end local v24    # "result":[Landroid/icu/util/TimeZoneRule;
	// 847    .local v14, "annualRules":[Landroid/icu/util/AnnualTimeZoneRule;
	// 848    .restart local v17    # "initialDst":I
	// 849    .restart local v18    # "initialName":Ljava/lang/String;
	// 850    .restart local v19    # "initialRaw":I
	// 851    .local v20, "initialRule":Landroid/icu/util/TimeZoneRule;
	// 852    .restart local v22    # "nextTransitionTime":J
label_cond_23b:
	if ( !(tr->getFrom()->getDSTSavings()) )  
		goto label_cond_221;
	if ( tr->getTo()->getDSTSavings() )     
		goto label_cond_221;
	goto label_goto_3e;
	// 876    .line 424
	// 877    .restart local v4    # "dtr":Landroid/icu/util/DateTimeRule;
	// 878    .restart local v6    # "weekInMonth":I
	// 879    .local v14, "annualRules":[Landroid/icu/util/AnnualTimeZoneRule;
	// 880    .restart local v16    # "dtfields":[I
	// 881    .restart local v25    # "secondRule":Landroid/icu/util/AnnualTimeZoneRule;
label_cond_251:
	if ( !(tr->getFrom()->getDSTSavings()) )  
		goto label_cond_265;
	if ( !(tr->getTo()->getDSTSavings()) )  
		goto label_cond_d0;
label_cond_265:
	secondRule;
	//    .restart local v7    # "secondRule":Landroid/icu/util/AnnualTimeZoneRule;
	goto label_goto_17b;
	// 911    .line 458
	// 912    .end local v25    # "secondRule":Landroid/icu/util/AnnualTimeZoneRule;
label_cond_269:
	if ( !(tr->getFrom()->getDSTSavings()) )  
		goto label_cond_21b;
	if ( tr->getTo()->getDSTSavings() )     
		goto label_cond_21b;
	goto label_goto_19f;
	// 937    .line 491
label_cond_27f:
	initialName = annualRules[0x0]->getName();
	initialRaw = annualRules[0x0]->getRawOffset();
	initialDst = annualRules[0x0]->getDSTSavings();
	goto label_goto_221;
	// 967    .line 499
	// 968    .end local v4    # "dtr":Landroid/icu/util/DateTimeRule;
	// 969    .end local v6    # "weekInMonth":I
	// 970    .end local v7    # "secondRule":Landroid/icu/util/AnnualTimeZoneRule;
	// 971    .end local v16    # "dtfields":[I
	// 972    .end local v17    # "initialDst":I
	// 973    .end local v18    # "initialName":Ljava/lang/String;
	// 974    .end local v19    # "initialRaw":I
	// 975    .end local v22    # "nextTransitionTime":J
	// 976    .local v14, "annualRules":[Landroid/icu/util/AnnualTimeZoneRule;
label_cond_295:
	tr = this->getPreviousTransition(date, 0x1);
	if ( !(tr) )  
		goto label_cond_2c1;
	//    .end local v20    # "initialRule":Landroid/icu/util/TimeZoneRule;
	var337 = initialRule(tr->getTo()->getName(), tr->getTo()->getRawOffset(), tr->getTo()->getDSTSavings());
	//    .local v20, "initialRule":Landroid/icu/util/TimeZoneRule;
	goto label_goto_22e;
	// 1028    .line 505
	// 1029    .local v20, "initialRule":Landroid/icu/util/TimeZoneRule;
label_cond_2c1:
	offsets = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v21, "offsets":[I
	this->getOffset(date, 0x0, offsets);
	//    .end local v20    # "initialRule":Landroid/icu/util/TimeZoneRule;
	var354 = initialRule(this->getID(), offsets[0x0], offsets[0x1]);
	//    .local v20, "initialRule":Landroid/icu/util/TimeZoneRule;
	goto label_goto_22e;
	// 1072    .line 516
	// 1073    .end local v14    # "annualRules":[Landroid/icu/util/AnnualTimeZoneRule;
	// 1074    .end local v21    # "offsets":[I
	// 1075    .local v24, "result":[Landroid/icu/util/TimeZoneRule;
label_cond_2e3:
	result = std::make_shared<std::vector<std::vector<android::icu::util::TimeZoneRule>>>(0x3);
	//    .local v24, "result":[Landroid/icu/util/TimeZoneRule;
	result[0x0] = initialRule;
	result[0x1] = annualRules[0x0];
	result[0x2] = annualRules[0x1];
	goto label_goto_23a;
	// 1109    .end local v24    # "result":[Landroid/icu/util/TimeZoneRule;
	// 1110    .restart local v4    # "dtr":Landroid/icu/util/DateTimeRule;
	// 1111    .restart local v6    # "weekInMonth":I
	// 1112    .local v14, "annualRules":[Landroid/icu/util/AnnualTimeZoneRule;
	// 1113    .restart local v16    # "dtfields":[I
	// 1114    .restart local v17    # "initialDst":I
	// 1115    .restart local v18    # "initialName":Ljava/lang/String;
	// 1116    .restart local v19    # "initialRaw":I
	// 1117    .local v20, "initialRule":Landroid/icu/util/TimeZoneRule;
	// 1118    .restart local v22    # "nextTransitionTime":J
	// 1119    .restart local v25    # "secondRule":Landroid/icu/util/AnnualTimeZoneRule;
label_cond_2f9:
	secondRule;
	//    .restart local v7    # "secondRule":Landroid/icu/util/AnnualTimeZoneRule;
	goto label_goto_17b;

}
// .method public getTimeZoneRules(J)[Landroid/icu/util/TimeZoneRule;
std::shared_ptr<android::icu::util::TimeZoneRule> android::icu::util::BasicTimeZone::getTimeZoneRules(long long start)
{
	
	std::shared_ptr<std::vector<android::icu::util::TimeZoneRule>> all;
	std::shared_ptr<android::icu::util::TimeZoneTransition> tzt;
	std::shared_ptr<java::util::BitSet> isProcessed;
	std::shared_ptr<java::util::LinkedList> filteredRules;
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> initial;
	int i;
	auto time;
	int bFinalStd;
	int bFinalDst;
	std::shared_ptr<std::vector<android::icu::util::TimeZoneRule>> rules;
	auto toRule;
	int ruleIdx;
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<android::icu::util::TimeArrayTimeZoneRule> tar;
	auto t;
	auto times;
	int timeType;
	int idx;
	long long t;
	int asize;
	std::shared<std::vector<long long[]>> newtimes;
	std::shared_ptr<android::icu::util::TimeArrayTimeZoneRule> newtar;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> ar;
	auto dfields;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> newar;
	
	//    .param p1, "start"    # J
	all = this->getTimeZoneRules();
	//    .local v16, "all":[Landroid/icu/util/TimeZoneRule;
	tzt = this->getPreviousTransition(start, 0x1);
	//    .local v39, "tzt":Landroid/icu/util/TimeZoneTransition;
	if ( tzt )     
		goto label_cond_10;
	return all;
	// 1159    .line 235
label_cond_10:
	var11 = isProcessed(all->size());
	//    .local v28, "isProcessed":Ljava/util/BitSet;
	filteredRules = std::make_shared<java::util::LinkedList>();
	//    .local v23, "filteredRules":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/TimeZoneRule;>;"
	var28 = initial(tzt->getTo()->getName(), tzt->getTo()->getRawOffset(), tzt->getTo()->getDSTSavings());
	//    .local v27, "initial":Landroid/icu/util/TimeZoneRule;
	filteredRules->add(initial);
	isProcessed->set(0x0);
	i = 0x1;
	//    .local v25, "i":I
label_goto_4d:
	if ( i >= all->size() )
		goto label_cond_71;
	//    .local v21, "d":Ljava/util/Date;
	if ( all[i]->getNextStart(start, initial->getRawOffset(), initial->getDSTSavings(), 0x0) )     
		goto label_cond_6e;
	isProcessed->set(i);
label_cond_6e:
	i = ( i + 0x1);
	goto label_goto_4d;
	// 1277    .line 253
	// 1278    .end local v21    # "d":Ljava/util/Date;
label_cond_71:
	time = start;
	//    .local v34, "time":J
	bFinalStd = 0x0;
	//    .local v20, "bFinalStd":Z
	bFinalDst = 0x0;
	//    .local v19, "bFinalDst":Z
label_cond_77:
label_goto_77:
	if ( !(bFinalStd) )  
		goto label_cond_7d;
	if ( !(( bFinalDst ^ 0x1)) )  
		goto label_cond_88;
label_cond_7d:
	tzt = this->getNextTransition(time, 0x0);
	if ( tzt )     
		goto label_cond_97;
label_cond_88:
	rules = filteredRules->toArray(std::make_shared<std::vector<std::vector<android::icu::util::TimeZoneRule>>>(filteredRules->size()));
	rules->checkCast("std::vector<android::icu::util::TimeZoneRule>");
	//    .local v30, "rules":[Landroid/icu/util/TimeZoneRule;
	return rules;
	// 1334    .line 260
	// 1335    .end local v30    # "rules":[Landroid/icu/util/TimeZoneRule;
label_cond_97:
	time = tzt->getTime();
	toRule = tzt->getTo();
	//    .local v38, "toRule":Landroid/icu/util/TimeZoneRule;
	ruleIdx = 0x1;
	//    .local v29, "ruleIdx":I
label_goto_a1:
	if ( ruleIdx >= all->size() )
		goto label_cond_b2;
	if ( !(all[ruleIdx]->equals(toRule)) )  
		goto label_cond_c2;
label_cond_b2:
	if ( ruleIdx <  all->size() )
		goto label_cond_c5;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The rule was not found")));
	// throw
	throw cVar0;
	// 1391    .line 264
label_cond_c2:
	ruleIdx = ( ruleIdx + 0x1);
	goto label_goto_a1;
	// 1397    .line 272
label_cond_c5:
	if ( isProcessed->get(ruleIdx) )     
		goto label_cond_77;
	if ( !(toRule->instanceOf("android::icu::util::TimeArrayTimeZoneRule")) )  
		goto label_cond_186;
	tar = toRule;
	tar->checkCast("android::icu::util::TimeArrayTimeZoneRule");
	//    .local v31, "tar":Landroid/icu/util/TimeArrayTimeZoneRule;
	t = start;
	//    .local v32, "t":J
label_goto_d7:
	tzt = this->getNextTransition(t, 0x0);
	if ( tzt )     
		goto label_cond_10e;
label_cond_e2:
	if ( !(tzt) )  
		goto label_cond_109;
	//    .local v24, "firstStart":Ljava/util/Date;
	if ( (tar->getFirstStart(tzt->getFrom()->getRawOffset(), tzt->getFrom()->getDSTSavings())->getTime() > start) <= 0 )
		goto label_cond_11f;
	filteredRules->add(tar);
	//    .end local v24    # "firstStart":Ljava/util/Date;
	//    .end local v31    # "tar":Landroid/icu/util/TimeArrayTimeZoneRule;
	//    .end local v32    # "t":J
label_cond_109:
label_goto_109:
	isProcessed->set(ruleIdx);
	goto label_goto_77;
	// 1493    .line 285
	// 1494    .restart local v31    # "tar":Landroid/icu/util/TimeArrayTimeZoneRule;
	// 1495    .restart local v32    # "t":J
label_cond_10e:
	if ( tzt->getTo()->equals(tar) )     
		goto label_cond_e2;
	t = tzt->getTime();
	goto label_goto_d7;
	// 1516    .line 299
	// 1517    .restart local v24    # "firstStart":Ljava/util/Date;
label_cond_11f:
	times = tar->getStartTimes();
	//    .local v37, "times":[J
	timeType = tar->getTimeType();
	//    .local v36, "timeType":I
	idx = 0x0;
	//    .local v26, "idx":I
label_goto_129:
	if ( idx >= times->size() )
		goto label_cond_153;
	t = times[idx];
	if ( timeType != 0x1 )
		goto label_cond_142;
	t = (t - (long long)(tzt->getFrom()->getRawOffset()));
label_cond_142:
	if ( timeType )     
		goto label_cond_14f;
	t = (t - (long long)(tzt->getFrom()->getDSTSavings()));
label_cond_14f:
	if ( (t > start) <= 0 )
		goto label_cond_183;
label_cond_153:
	asize = (times->size() - idx);
	//    .local v18, "asize":I
	if ( asize <= 0 )
		goto label_cond_109;
	newtimes = std::make_shared<std::vector<long long[]>>(asize);
	//    .local v8, "newtimes":[J
	java::lang::System::arraycopy(times, idx, newtimes, 0x0, asize);
	newtar = std::make_shared<android::icu::util::TimeArrayTimeZoneRule>(tar->getName(), tar->getRawOffset(), tar->getDSTSavings(), newtimes, tar->getTimeType());
	//    .local v4, "newtar":Landroid/icu/util/TimeArrayTimeZoneRule;
	filteredRules->add(newtar);
	goto label_goto_109;
	// 1650    .line 302
	// 1651    .end local v4    # "newtar":Landroid/icu/util/TimeArrayTimeZoneRule;
	// 1652    .end local v8    # "newtimes":[J
	// 1653    .end local v18    # "asize":I
label_cond_183:
	idx = ( idx + 0x1);
	goto label_goto_129;
	// 1659    .line 325
	// 1660    .end local v24    # "firstStart":Ljava/util/Date;
	// 1661    .end local v26    # "idx":I
	// 1662    .end local v31    # "tar":Landroid/icu/util/TimeArrayTimeZoneRule;
	// 1663    .end local v32    # "t":J
	// 1664    .end local v36    # "timeType":I
	// 1665    .end local v37    # "times":[J
label_cond_186:
	if ( !(toRule->instanceOf("android::icu::util::AnnualTimeZoneRule")) )  
		goto label_cond_109;
	ar = toRule;
	ar->checkCast("android::icu::util::AnnualTimeZoneRule");
	//    .local v17, "ar":Landroid/icu/util/AnnualTimeZoneRule;
	//    .restart local v24    # "firstStart":Ljava/util/Date;
	if ( (ar->getFirstStart(tzt->getFrom()->getRawOffset(), tzt->getFrom()->getDSTSavings())->getTime() > tzt->getTime()) )     
		goto label_cond_1cc;
	filteredRules->add(ar);
label_goto_1b9:
	if ( ar->getEndYear() != 0x7fffffff )
		goto label_cond_109;
	if ( ar->getDSTSavings() )     
		goto label_cond_1fc;
	bFinalStd = 0x1;
	goto label_goto_109;
	// 1747    .line 334
label_cond_1cc:
	dfields = std::make_shared<std::vector<int[]>>(0x6);
	//    .local v22, "dfields":[I
	android::icu::impl::Grego::timeToFields(tzt->getTime(), dfields);
	newar = std::make_shared<android::icu::util::AnnualTimeZoneRule>(ar->getName(), ar->getRawOffset(), ar->getDSTSavings(), ar->getRule(), dfields[0x0], ar->getEndYear());
	//    .local v9, "newar":Landroid/icu/util/AnnualTimeZoneRule;
	filteredRules->add(newar);
	goto label_goto_1b9;
	// 1805    .line 349
	// 1806    .end local v9    # "newar":Landroid/icu/util/AnnualTimeZoneRule;
	// 1807    .end local v22    # "dfields":[I
label_cond_1fc:
	bFinalDst = 0x1;
	goto label_goto_109;

}
// .method public hasEquivalentTransitions(Landroid/icu/util/TimeZone;JJ)Z
bool android::icu::util::BasicTimeZone::hasEquivalentTransitions(std::shared_ptr<android::icu::util::TimeZone> tz,long long start,long long end)
{
	
	//    .param p1, "tz"    # Landroid/icu/util/TimeZone;
	//    .param p2, "start"    # J
	//    .param p4, "end"    # J
	return this->hasEquivalentTransitions(tz, start, end, 0x0);

}
// .method public hasEquivalentTransitions(Landroid/icu/util/TimeZone;JJZ)Z
bool android::icu::util::BasicTimeZone::hasEquivalentTransitions(std::shared_ptr<android::icu::util::TimeZone> tz,long long start,long long end,bool ignoreDstAmount)
{
	
	std::shared<std::vector<int[]>> offsets1;
	std::shared<std::vector<int[]>> offsets2;
	long long time;
	std::shared_ptr<android::icu::util::TimeZoneTransition> tr1;
	std::shared_ptr<android::icu::util::BasicTimeZone> cVar0;
	std::shared_ptr<android::icu::util::TimeZoneTransition> tr2;
	std::shared_ptr<android::icu::util::BasicTimeZone> cVar1;
	int inRange1;
	int inRange2;
	
	//    .param p1, "tz"    # Landroid/icu/util/TimeZone;
	//    .param p2, "start"    # J
	//    .param p4, "end"    # J
	//    .param p6, "ignoreDstAmount"    # Z
	if ( this != tz )
		goto label_cond_4;
	return 0x1;
	// 1855    .line 107
label_cond_4:
	if ( tz->instanceOf("android::icu::util::BasicTimeZone") )     
		goto label_cond_a;
	return 0x0;
	// 1866    .line 112
label_cond_a:
	offsets1 = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v2, "offsets1":[I
	offsets2 = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v3, "offsets2":[I
	this->getOffset(start, 0x0, offsets1);
	tz->getOffset(start, 0x0, offsets2);
	if ( !(ignoreDstAmount) )  
		goto label_cond_9c;
	if ( (offsets1[0x0] +  offsets1[0x1]) != (offsets2[0x0] +  offsets2[0x1]) )
		goto label_cond_34;
	if ( !(offsets1[0x1]) )  
		goto label_cond_36;
	if ( offsets2[0x1] )     
		goto label_cond_36;
label_cond_34:
	return 0x0;
	// 1934    .line 121
label_cond_36:
	if ( offsets1[0x1] )     
		goto label_cond_40;
	if ( offsets2[0x1] )     
		goto label_cond_34;
label_cond_40:
	time = start;
	//    .local v4, "time":J
label_goto_41:
	tr1 = this->getNextTransition(time, 0x0);
	//    .local v6, "tr1":Landroid/icu/util/TimeZoneTransition;
	cVar0 = tz;
	cVar0->checkCast("android::icu::util::BasicTimeZone");
	tr2 = cVar0->getNextTransition(time, 0x0);
	//    .local v7, "tr2":Landroid/icu/util/TimeZoneTransition;
	if ( !(ignoreDstAmount) )  
		goto label_cond_fd;
label_goto_50:
	if ( !(tr1) )  
		goto label_cond_ae;
	if ( (tr1->getTime() > end) > 0 ) 
		goto label_cond_ae;
	if ( (tr1->getFrom()->getRawOffset() +  tr1->getFrom()->getDSTSavings()) != (tr1->getTo()->getRawOffset() +  tr1->getTo()->getDSTSavings()) )
		goto label_cond_ae;
	if ( !(tr1->getFrom()->getDSTSavings()) )  
		goto label_cond_ae;
	if ( !(tr1->getTo()->getDSTSavings()) )  
		goto label_cond_ae;
	tr1 = this->getNextTransition(tr1->getTime(), 0x0);
	goto label_goto_50;
	// 2065    .line 125
	// 2066    .end local v4    # "time":J
	// 2067    .end local v6    # "tr1":Landroid/icu/util/TimeZoneTransition;
	// 2068    .end local v7    # "tr2":Landroid/icu/util/TimeZoneTransition;
label_cond_9c:
	if ( offsets1[0x0] != offsets2[0x0] )
		goto label_cond_ac;
	if ( offsets1[0x1] == offsets2[0x1] )
		goto label_cond_40;
label_cond_ac:
	return 0x0;
	// 2096    .line 150
	// 2097    .restart local v4    # "time":J
	// 2098    .restart local v6    # "tr1":Landroid/icu/util/TimeZoneTransition;
	// 2099    .restart local v7    # "tr2":Landroid/icu/util/TimeZoneTransition;
label_cond_ae:
label_goto_ae:
	if ( !(tr2) )  
		goto label_cond_fd;
	if ( (tr2->getTime() > end) > 0 ) 
		goto label_cond_fd;
	if ( (tr2->getFrom()->getRawOffset() +  tr2->getFrom()->getDSTSavings()) != (tr2->getTo()->getRawOffset() +  tr2->getTo()->getDSTSavings()) )
		goto label_cond_fd;
	if ( !(tr2->getFrom()->getDSTSavings()) )  
		goto label_cond_fd;
	if ( !(tr2->getTo()->getDSTSavings()) )  
		goto label_cond_fd;
	cVar1 = tz;
	cVar1->checkCast("android::icu::util::BasicTimeZone");
	tr2 = cVar1->getNextTransition(tr2->getTime(), 0x0);
	goto label_goto_ae;
	// 2192    .line 162
label_cond_fd:
	inRange1 = 0x0;
	//    .local v0, "inRange1":Z
	0x0;
	//    .local v1, "inRange2":Z
	if ( !(tr1) )  
		goto label_cond_10a;
	if ( (tr1->getTime() > end) > 0 ) 
		goto label_cond_10a;
	inRange1 = 0x1;
label_cond_10a:
	if ( !(tr2) )  
		goto label_cond_115;
	if ( (tr2->getTime() > end) > 0 ) 
		goto label_cond_115;
	inRange2 = 0x1;
label_cond_115:
	if ( inRange1 )     
		goto label_cond_11d;
	if ( !(( inRange2 ^ 0x1)) )  
		goto label_cond_11d;
	return 0x1;
	// 2245    .line 178
label_cond_11d:
	if ( !(inRange1) )  
		goto label_cond_123;
	if ( !(( inRange2 ^ 0x1)) )  
		goto label_cond_125;
label_cond_123:
	return 0x0;
	// 2259    .line 181
label_cond_125:
	if ( !((tr1->getTime() > tr2->getTime())) )  
		goto label_cond_133;
	return 0x0;
	// 2278    .line 184
label_cond_133:
	if ( !(ignoreDstAmount) )  
		goto label_cond_189;
	if ( (tr1->getTo()->getRawOffset() +  tr1->getTo()->getDSTSavings()) != (tr2->getTo()->getRawOffset() +  tr2->getTo()->getDSTSavings()) )
		goto label_cond_16d;
	if ( !(tr1->getTo()->getDSTSavings()) )  
		goto label_cond_16f;
	if ( tr2->getTo()->getDSTSavings() )     
		goto label_cond_16f;
label_cond_16d:
	return 0x0;
	// 2350    .line 188
label_cond_16f:
	if ( tr1->getTo()->getDSTSavings() )     
		goto label_cond_183;
	if ( tr2->getTo()->getDSTSavings() )     
		goto label_cond_16d;
label_cond_183:
	time = tr1->getTime();
	goto label_goto_41;
	// 2380    .line 192
label_cond_189:
	if ( tr1->getTo()->getRawOffset() != tr2->getTo()->getRawOffset() )
		goto label_cond_1ad;
	if ( tr1->getTo()->getDSTSavings() == tr2->getTo()->getDSTSavings() )
		goto label_cond_183;
label_cond_1ad:
	return 0x0;

}


