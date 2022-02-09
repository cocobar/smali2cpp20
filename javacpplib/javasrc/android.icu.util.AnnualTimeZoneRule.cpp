// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\AnnualTimeZoneRule.smali
#include "java2ctype.h"
#include "android.icu.impl.Grego.h"
#include "android.icu.util.AnnualTimeZoneRule.h"
#include "android.icu.util.DateTimeRule.h"
#include "android.icu.util.TimeZoneRule.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Date.h"

static android::icu::util::AnnualTimeZoneRule::MAX_YEAR = 0x7fffffff;
static android::icu::util::AnnualTimeZoneRule::serialVersionUID = -0x7b1af05f36c7b6e0L;
// .method public constructor <init>(Ljava/lang/String;IILandroid/icu/util/DateTimeRule;II)V
android::icu::util::AnnualTimeZoneRule::AnnualTimeZoneRule(std::shared_ptr<java::lang::String> name,int rawOffset,int dstSavings,std::shared_ptr<android::icu::util::DateTimeRule> dateTimeRule,int startYear,int endYear)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "rawOffset"    # I
	//    .param p3, "dstSavings"    # I
	//    .param p4, "dateTimeRule"    # Landroid/icu/util/DateTimeRule;
	//    .param p5, "startYear"    # I
	//    .param p6, "endYear"    # I
	android::icu::util::TimeZoneRule::(name, rawOffset, dstSavings);
	this->dateTimeRule = dateTimeRule;
	this->startYear = startYear;
	this->endYear = endYear;
	return;

}
// .method public getEndYear()I
int android::icu::util::AnnualTimeZoneRule::getEndYear()
{
	
	return this->endYear;

}
// .method public getFinalStart(II)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::AnnualTimeZoneRule::getFinalStart(int prevRawOffset,int prevDSTSavings)
{
	
	//    .param p1, "prevRawOffset"    # I
	//    .param p2, "prevDSTSavings"    # I
	if ( this->endYear != 0x7fffffff )
		goto label_cond_9;
	return 0x0;
	// 077    .line 173
label_cond_9:
	return this->getStartInYear(this->endYear, prevRawOffset, prevDSTSavings);

}
// .method public getFirstStart(II)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::AnnualTimeZoneRule::getFirstStart(int prevRawOffset,int prevDSTSavings)
{
	
	//    .param p1, "prevRawOffset"    # I
	//    .param p2, "prevDSTSavings"    # I
	return this->getStartInYear(this->startYear, prevRawOffset, prevDSTSavings);

}
// .method public getNextStart(JIIZ)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::AnnualTimeZoneRule::getNextStart(long long base,int prevRawOffset,int prevDSTSavings,bool inclusive)
{
	
	int year;
	std::shared_ptr<java::util::Date> d;
	
	//    .param p1, "base"    # J
	//    .param p3, "prevRawOffset"    # I
	//    .param p4, "prevDSTSavings"    # I
	//    .param p5, "inclusive"    # Z
	//    .local v1, "fields":[I
	year = android::icu::impl::Grego::timeToFields(base, 0x0)[0x0];
	//    .local v2, "year":I
	if ( year >= this->startYear )
		goto label_cond_11;
	return this->getFirstStart(prevRawOffset, prevDSTSavings);
	// 138    .line 186
label_cond_11:
	d = this->getStartInYear(year, prevRawOffset, prevDSTSavings);
	//    .local v0, "d":Ljava/util/Date;
	if ( !(d) )  
		goto label_cond_2f;
	if ( (d->getTime() > base) < 0 ) 
		goto label_cond_29;
	if ( inclusive )     
		goto label_cond_2f;
	if ( (d->getTime() > base) )     
		goto label_cond_2f;
label_cond_29:
label_cond_2f:
	return d;

}
// .method public getPreviousStart(JIIZ)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::AnnualTimeZoneRule::getPreviousStart(long long base,int prevRawOffset,int prevDSTSavings,bool inclusive)
{
	
	int year;
	std::shared_ptr<java::util::Date> d;
	
	//    .param p1, "base"    # J
	//    .param p3, "prevRawOffset"    # I
	//    .param p4, "prevDSTSavings"    # I
	//    .param p5, "inclusive"    # Z
	//    .local v1, "fields":[I
	year = android::icu::impl::Grego::timeToFields(base, 0x0)[0x0];
	//    .local v2, "year":I
	if ( year <= this->endYear )
		goto label_cond_11;
	return this->getFinalStart(prevRawOffset, prevDSTSavings);
	// 213    .line 203
label_cond_11:
	d = this->getStartInYear(year, prevRawOffset, prevDSTSavings);
	//    .local v0, "d":Ljava/util/Date;
	if ( !(d) )  
		goto label_cond_2f;
	if ( (d->getTime() > base) > 0 ) 
		goto label_cond_29;
	if ( inclusive )     
		goto label_cond_2f;
	if ( (d->getTime() > base) )     
		goto label_cond_2f;
label_cond_29:
label_cond_2f:
	return d;

}
// .method public getRule()Landroid/icu/util/DateTimeRule;
std::shared_ptr<android::icu::util::DateTimeRule> android::icu::util::AnnualTimeZoneRule::getRule()
{
	
	return this->dateTimeRule;

}
// .method public getStartInYear(III)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::AnnualTimeZoneRule::getStartInYear(int year,int prevRawOffset,int prevDSTSavings)
{
	
	int type;
	auto ruleDay;
	long long ruleTime;
	std::shared_ptr<java::util::Date> cVar0;
	int after;
	int weeks;
	long long ruleDay;
	int delta;
	int month;
	int dom;
	
	//    .param p1, "year"    # I
	//    .param p2, "prevRawOffset"    # I
	//    .param p3, "prevDSTSavings"    # I
	if ( year <  this->startYear )
		goto label_cond_10;
	if ( year <= this->endYear )
		goto label_cond_12;
label_cond_10:
	return 0x0;
	// 294    .line 107
label_cond_12:
	type = this->dateTimeRule->getDateRuleType();
	//    .local v7, "type":I
	if ( type )     
		goto label_cond_66;
	ruleDay = android::icu::impl::Grego::fieldsToDay(year, this->dateTimeRule->getRuleMonth(), this->dateTimeRule->getRuleDayOfMonth());
	//    .local v8, "ruleDay":J
label_goto_32:
	ruleTime = ((0x5265c00 *  ruleDay) + (long long)(this->dateTimeRule->getRuleMillisInDay()));
	//    .local v10, "ruleTime":J
	if ( this->dateTimeRule->getTimeRuleType() == 0x2 )
		goto label_cond_52;
	ruleTime = (ruleTime -  (long long)(prevRawOffset));
label_cond_52:
	if ( this->dateTimeRule->getTimeRuleType() )     
		goto label_cond_60;
label_cond_60:
	cVar0 = std::make_shared<java::util::Date>(ruleTime);
	return cVar0;
	// 400    .line 112
	// 401    .end local v8    # "ruleDay":J
	// 402    .end local v10    # "ruleTime":J
label_cond_66:
	after = 0x1;
	//    .local v2, "after":Z
	if ( type != 0x1 )
		goto label_cond_c4;
	weeks = this->dateTimeRule->getRuleWeekInMonth();
	//    .local v12, "weeks":I
	if ( weeks <= 0 )
		goto label_cond_a0;
	ruleDay = android::icu::impl::Grego::fieldsToDay(year, this->dateTimeRule->getRuleMonth(), 0x1);
	//    .restart local v8    # "ruleDay":J
	ruleDay = (ruleDay +  (long long)(( ( weeks + -0x1) * 0x7)));
	//    .end local v12    # "weeks":I
label_goto_89:
	//    .local v5, "dow":I
	delta = (this->dateTimeRule->getRuleDayOfWeek() - android::icu::impl::Grego::dayOfWeek(ruleDay));
	//    .local v3, "delta":I
	if ( !(after) )  
		goto label_cond_f0;
	if ( delta >= 0 )
		goto label_cond_9d;
	delta = ( delta + 0x7);
label_cond_9d:
label_goto_9d:
	ruleDay = (ruleDay +  (long long)(delta));
	goto label_goto_32;
	// 489    .line 119
	// 490    .end local v3    # "delta":I
	// 491    .end local v5    # "dow":I
	// 492    .end local v8    # "ruleDay":J
	// 493    .restart local v12    # "weeks":I
label_cond_a0:
	after = 0x0;
	ruleDay = android::icu::impl::Grego::fieldsToDay(year, this->dateTimeRule->getRuleMonth(), android::icu::impl::Grego::monthLength(year, this->dateTimeRule->getRuleMonth()));
	//    .restart local v8    # "ruleDay":J
	ruleDay = (ruleDay +  (long long)(( ( weeks + 0x1) * 0x7)));
	goto label_goto_89;
	// 540    .line 125
	// 541    .end local v8    # "ruleDay":J
	// 542    .end local v12    # "weeks":I
label_cond_c4:
	month = this->dateTimeRule->getRuleMonth();
	//    .local v6, "month":I
	dom = this->dateTimeRule->getRuleDayOfMonth();
	//    .local v4, "dom":I
	if ( type != 0x3 )
		goto label_cond_e9;
	after = 0x0;
	if ( month != 0x1 )
		goto label_cond_e9;
	if ( dom != 0x1d )
		goto label_cond_e9;
	if ( !(( android::icu::impl::Grego::isLeapYear(year) ^ 0x1)) )  
		goto label_cond_e9;
label_cond_e9:
	ruleDay = android::icu::impl::Grego::fieldsToDay(year, month, dom);
	//    .restart local v8    # "ruleDay":J
	goto label_goto_89;
	// 602    .line 142
	// 603    .end local v4    # "dom":I
	// 604    .end local v6    # "month":I
	// 605    .restart local v3    # "delta":I
	// 606    .restart local v5    # "dow":I
label_cond_f0:
	if ( delta <= 0 )
		goto label_cond_9d;
	delta = ( delta + -0x7);
	goto label_goto_9d;

}
// .method public getStartYear()I
int android::icu::util::AnnualTimeZoneRule::getStartYear()
{
	
	return this->startYear;

}
// .method public isEquivalentTo(Landroid/icu/util/TimeZoneRule;)Z
bool android::icu::util::AnnualTimeZoneRule::isEquivalentTo(std::shared_ptr<android::icu::util::TimeZoneRule> other)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> otherRule;
	
	//    .param p1, "other"    # Landroid/icu/util/TimeZoneRule;
	cVar0 = 0x0;
	if ( other->instanceOf("android::icu::util::AnnualTimeZoneRule") )     
		goto label_cond_6;
	return cVar0;
label_cond_6:
	otherRule = other;
	otherRule->checkCast("android::icu::util::AnnualTimeZoneRule");
	//    .local v0, "otherRule":Landroid/icu/util/AnnualTimeZoneRule;
	if ( this->startYear != otherRule->startYear )
		goto label_cond_24;
	if ( this->endYear != otherRule->endYear )
		goto label_cond_24;
	if ( !(this->dateTimeRule->equals(otherRule->dateTimeRule)) )  
		goto label_cond_24;
	return this->isEquivalentTo(other);
	// 680    .line 224
label_cond_24:
	return cVar0;

}
// .method public isTransitionRule()Z
bool android::icu::util::AnnualTimeZoneRule::isTransitionRule()
{
	
	return 0x1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::AnnualTimeZoneRule::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(this->toString());
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", rule={")))->append(this->dateTimeRule)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")));
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", startYear=")))->append(this->startYear);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", endYear=")));
	if ( this->endYear != 0x7fffffff )
		goto label_cond_43;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("max")));
label_goto_3e:
	return buf->toString();
	// 765    .line 251
label_cond_43:
	buf->append(this->endYear);
	goto label_goto_3e;

}


