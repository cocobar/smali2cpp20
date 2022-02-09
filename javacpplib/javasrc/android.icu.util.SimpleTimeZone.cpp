// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\SimpleTimeZone.smali
#include "java2ctype.h"
#include "android.icu.impl.Grego.h"
#include "android.icu.util.AnnualTimeZoneRule.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.DateTimeRule.h"
#include "android.icu.util.GregorianCalendar.h"
#include "android.icu.util.InitialTimeZoneRule.h"
#include "android.icu.util.STZInfo.h"
#include "android.icu.util.SimpleTimeZone.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.TimeZoneRule.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.Date.h"

static android::icu::util::SimpleTimeZone::_assertionsDisabled;
static android::icu::util::SimpleTimeZone::DOM_MODE = 0x1;
static android::icu::util::SimpleTimeZone::DOW_GE_DOM_MODE = 0x3;
static android::icu::util::SimpleTimeZone::DOW_IN_MONTH_MODE = 0x2;
static android::icu::util::SimpleTimeZone::DOW_LE_DOM_MODE = 0x4;
static android::icu::util::SimpleTimeZone::STANDARD_TIME = 0x1;
static android::icu::util::SimpleTimeZone::UTC_TIME = 0x2;
static android::icu::util::SimpleTimeZone::WALL_TIME = 0x0;
static android::icu::util::SimpleTimeZone::serialVersionUID = -0x61a030c4b2083e91L;
static android::icu::util::SimpleTimeZone::staticMonthLength;
// .method static constructor <clinit>()V
void android::icu::util::SimpleTimeZone::static_cinit()
{
	
	std::shared<std::vector<unsigned char[]>> cVar0;
	
	android::icu::util::SimpleTimeZone::_assertionsDisabled = ( android::icu::util::SimpleTimeZone()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<std::vector<unsigned char[]>>(0xc);
	?;
	android::icu::util::SimpleTimeZone::staticMonthLength = cVar0;
	return;
	// 103    .line 617
	// 104    :array_14
	// 105    .array-data 1
	// 106        0x1ft
	// 107        0x1dt
	// 108        0x1ft
	// 109        0x1et
	// 110        0x1ft
	// 111        0x1et
	// 112        0x1ft
	// 113        0x1ft
	// 114        0x1et
	// 115        0x1ft
	// 116        0x1et
	// 117        0x1ft
	// 118    .end array-data

}
// .method public constructor <init>(ILjava/lang/String;)V
android::icu::util::SimpleTimeZone::SimpleTimeZone(int rawOffset,std::shared_ptr<java::lang::String> ID)
{
	
	int cVar0;
	bool cVar1;
	
	//    .param p1, "rawOffset"    # I
	//    .param p2, "ID"    # Ljava/lang/String;
	cVar0 = 0x36ee80;
	cVar1 = 0x0;
	android::icu::util::BasicTimeZone::(ID);
	this->dst = cVar0;
	this->xinfo = 0x0;
	this->isFrozen = cVar1;
	this->construct(rawOffset, cVar1, cVar1, cVar1, cVar1, cVar1, cVar1, cVar1, cVar1, cVar1, cVar1, cVar0);
	return;

}
// .method public constructor <init>(ILjava/lang/String;IIIIIIII)V
android::icu::util::SimpleTimeZone::SimpleTimeZone(int rawOffset,std::shared_ptr<java::lang::String> ID,int startMonth,int startDay,int startDayOfWeek,int startTime,int endMonth,int endDay,int endDayOfWeek,int endTime)
{
	
	//    .param p1, "rawOffset"    # I
	//    .param p2, "ID"    # Ljava/lang/String;
	//    .param p3, "startMonth"    # I
	//    .param p4, "startDay"    # I
	//    .param p5, "startDayOfWeek"    # I
	//    .param p6, "startTime"    # I
	//    .param p7, "endMonth"    # I
	//    .param p8, "endDay"    # I
	//    .param p9, "endDayOfWeek"    # I
	//    .param p10, "endTime"    # I
	android::icu::util::BasicTimeZone::(ID);
	this->dst = 0x36ee80;
	this->xinfo = 0x0;
	this->isFrozen = 0x0;
	this->construct(rawOffset, startMonth, startDay, startDayOfWeek, startTime, 0x0, endMonth, endDay, endDayOfWeek, endTime, 0x0, 0x36ee80);
	return;

}
// .method public constructor <init>(ILjava/lang/String;IIIIIIIII)V
android::icu::util::SimpleTimeZone::SimpleTimeZone(int rawOffset,std::shared_ptr<java::lang::String> ID,int startMonth,int startDay,int startDayOfWeek,int startTime,int endMonth,int endDay,int endDayOfWeek,int endTime,int dstSavings)
{
	
	//    .param p1, "rawOffset"    # I
	//    .param p2, "ID"    # Ljava/lang/String;
	//    .param p3, "startMonth"    # I
	//    .param p4, "startDay"    # I
	//    .param p5, "startDayOfWeek"    # I
	//    .param p6, "startTime"    # I
	//    .param p7, "endMonth"    # I
	//    .param p8, "endDay"    # I
	//    .param p9, "endDayOfWeek"    # I
	//    .param p10, "endTime"    # I
	//    .param p11, "dstSavings"    # I
	android::icu::util::BasicTimeZone::(ID);
	this->dst = 0x36ee80;
	this->xinfo = 0x0;
	this->isFrozen = 0x0;
	this->construct(rawOffset, startMonth, startDay, startDayOfWeek, startTime, 0x0, endMonth, endDay, endDayOfWeek, endTime, 0x0, dstSavings);
	return;

}
// .method public constructor <init>(ILjava/lang/String;IIIIIIIIIII)V
android::icu::util::SimpleTimeZone::SimpleTimeZone(int rawOffset,std::shared_ptr<java::lang::String> ID,int startMonth,int startDay,int startDayOfWeek,int startTime,int startTimeMode,int endMonth,int endDay,int endDayOfWeek,int endTime,int endTimeMode,int dstSavings)
{
	
	//    .param p1, "rawOffset"    # I
	//    .param p2, "ID"    # Ljava/lang/String;
	//    .param p3, "startMonth"    # I
	//    .param p4, "startDay"    # I
	//    .param p5, "startDayOfWeek"    # I
	//    .param p6, "startTime"    # I
	//    .param p7, "startTimeMode"    # I
	//    .param p8, "endMonth"    # I
	//    .param p9, "endDay"    # I
	//    .param p10, "endDayOfWeek"    # I
	//    .param p11, "endTime"    # I
	//    .param p12, "endTimeMode"    # I
	//    .param p13, "dstSavings"    # I
	android::icu::util::BasicTimeZone::(ID);
	this->dst = 0x36ee80;
	this->xinfo = 0x0;
	this->isFrozen = 0x0;
	this->construct(rawOffset, startMonth, startDay, startDayOfWeek, startTime, startTimeMode, endMonth, endDay, endDayOfWeek, endTime, endTimeMode, dstSavings);
	return;

}
// .method private compareToRule(IIIIIIIIIIII)I
int android::icu::util::SimpleTimeZone::compareToRule(int month,int monthLen,int prevMonthLen,int dayOfMonth,int dayOfWeek,int millis,int millisDelta,int ruleMode,int ruleMonth,int ruleDayOfWeek,int ruleDay,int ruleMillis)
{
	
	int cVar0;
	int dayOfMonth;
	int dayOfWeek;
	int month;
	int ruleDayOfMonth;
	int cVar11;
	
	//    .param p1, "month"    # I
	//    .param p2, "monthLen"    # I
	//    .param p3, "prevMonthLen"    # I
	//    .param p4, "dayOfMonth"    # I
	//    .param p5, "dayOfWeek"    # I
	//    .param p6, "millis"    # I
	//    .param p7, "millisDelta"    # I
	//    .param p8, "ruleMode"    # I
	//    .param p9, "ruleMonth"    # I
	//    .param p10, "ruleDayOfWeek"    # I
	//    .param p11, "ruleDay"    # I
	//    .param p12, "ruleMillis"    # I
	cVar0 = (millis +  millisDelta);
label_cond_1:
label_goto_1:
	if ( cVar0 <  0x5265c00 )
		goto label_cond_16;
	cVar0 = (cVar0 -  0x5265c00);
	dayOfMonth = ( dayOfMonth + 0x1);
	dayOfWeek = ( ( dayOfWeek % 0x7) + 0x1);
	if ( dayOfMonth <= monthLen )
		goto label_cond_1;
	dayOfMonth = 0x1;
	month = ( month + 0x1);
	goto label_goto_1;
	// 428    .line 859
label_cond_16:
label_goto_16:
	if ( cVar0 >= 0 )
		goto label_cond_2b;
	dayOfMonth = ( dayOfMonth + -0x1);
	dayOfWeek = ( ( ( dayOfWeek + 0x5) % 0x7) + 0x1);
	if ( dayOfMonth >= 0x1 )
		goto label_cond_26;
	dayOfMonth = prevMonthLen;
	month = ( month + -0x1);
label_cond_26:
	cVar0 = (cVar0 +  0x5265c00);
	goto label_goto_16;
	// 462    .line 870
label_cond_2b:
	if ( month >= ruleMonth )
		goto label_cond_2f;
	return -0x1;
	// 470    .line 871
label_cond_2f:
	if ( month <= ruleMonth )
		goto label_cond_33;
	return 0x1;
	// 478    .line 873
label_cond_33:
	ruleDayOfMonth = 0x0;
	//    .local v1, "ruleDayOfMonth":I
	if ( ruleDay <= monthLen )
		goto label_cond_3a;
	cVar11 = monthLen;
label_cond_3a:
	// switch
	{
	auto item = ( ruleMode );
	if (item == 1) goto label_pswitch_41;
	if (item == 2) goto label_pswitch_44;
	if (item == 3) goto label_pswitch_68;
	if (item == 4) goto label_pswitch_73;
	}
label_goto_3d:
	if ( dayOfMonth >= ruleDayOfMonth )
		goto label_cond_7e;
	return -0x1;
	// 503    .line 883
label_pswitch_41:
	ruleDayOfMonth = cVar11;
	goto label_goto_3d;
	// 510    .line 887
label_pswitch_44:
	if ( cVar11 <= 0 )
		goto label_cond_58;
	ruleDayOfMonth = (( ( ( cVar11 + -0x1) * 0x7) + 0x1) + ( (( ruleDayOfWeek + 0x7) -  ( (dayOfWeek - dayOfMonth) + 0x1)) % 0x7));
	goto label_goto_3d;
	// 537    .line 892
label_cond_58:
	ruleDayOfMonth = ((( ( cVar11 + 0x1) * 0x7) +  monthLen) - ( (( ((dayOfWeek + monthLen) -  dayOfMonth) + 0x7) -  ruleDayOfWeek) % 0x7));
	goto label_goto_3d;
	// 561    .line 898
label_pswitch_68:
	ruleDayOfMonth = (cVar11 + ( (((( ruleDayOfWeek + 0x31) - cVar11) -  dayOfWeek) +  dayOfMonth) % 0x7));
	goto label_goto_3d;
	// 579    .line 902
label_pswitch_73:
	ruleDayOfMonth = (cVar11 - ( (((( ruleDayOfWeek - 0x31) + cVar11) +  dayOfWeek) -  dayOfMonth) % 0x7));
	goto label_goto_3d;
	// 597    .line 909
label_cond_7e:
	if ( dayOfMonth <= ruleDayOfMonth )
		goto label_cond_82;
	return 0x1;
	// 605    .line 911
label_cond_82:
	if ( cVar0 >= ruleMillis )
		goto label_cond_88;
	return -0x1;
	// 616    .line 913
label_cond_88:
	if ( cVar0 <= ruleMillis )
		goto label_cond_8e;
	return 0x1;
	// 627    .line 916
label_cond_8e:
	return 0x0;
	// 633    .line 880
	// 634    :pswitch_data_90
	// 635    .packed-switch 0x1
	// 636        :pswitch_41
	// 637        :pswitch_44
	// 638        :pswitch_68
	// 639        :pswitch_73
	// 640    .end packed-switch

}
// .method private construct(IIIIIIIIIIII)V
void android::icu::util::SimpleTimeZone::construct(int _raw,int _startMonth,int _startDay,int _startDayOfWeek,int _startTime,int _startTimeMode,int _endMonth,int _endDay,int _endDayOfWeek,int _endTime,int _endTimeMode,int _dst)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "_raw"    # I
	//    .param p2, "_startMonth"    # I
	//    .param p3, "_startDay"    # I
	//    .param p4, "_startDayOfWeek"    # I
	//    .param p5, "_startTime"    # I
	//    .param p6, "_startTimeMode"    # I
	//    .param p7, "_endMonth"    # I
	//    .param p8, "_endDay"    # I
	//    .param p9, "_endDayOfWeek"    # I
	//    .param p10, "_endTime"    # I
	//    .param p11, "_endTimeMode"    # I
	//    .param p12, "_dst"    # I
	cVar0 = 0x1;
	this->raw = _raw;
	this->startMonth = _startMonth;
	this->startDay = _startDay;
	this->startDayOfWeek = _startDayOfWeek;
	this->startTime = _startTime;
	this->startTimeMode = _startTimeMode;
	this->endMonth = _endMonth;
	this->endDay = _endDay;
	this->endDayOfWeek = _endDayOfWeek;
	this->endTime = _endTime;
	this->endTimeMode = _endTimeMode;
	this->dst = _dst;
	this->startYear = 0x0;
	this->startMode = cVar0;
	this->endMode = cVar0;
	this->decodeRules();
	if ( _dst > 0 ) 
		goto label_cond_2b;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar1;
	// 721    .line 997
label_cond_2b:
	return;

}
// .method private decodeEndRule()V
void android::icu::util::SimpleTimeZone::decodeEndRule()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	bool cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar7;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar9;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar8;
	
	cVar0 = 0x5265c00;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar4 = 0x0;
	if ( !(this->startDay) )  
		goto label_cond_f;
	if ( !(this->endDay) )  
		goto label_cond_f;
	cVar4 = cVar2;
label_cond_f:
	this->useDaylight = cVar4;
	if ( !(this->useDaylight) )  
		goto label_cond_1b;
	if ( this->dst )     
		goto label_cond_1b;
	this->dst = cVar0;
label_cond_1b:
	if ( !(this->endDay) )  
		goto label_cond_9a;
	if ( this->endMonth < 0 ) 
		goto label_cond_29;
	if ( this->endMonth <= 0xb )
		goto label_cond_2f;
label_cond_29:
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar5;
	// 789    .line 1082
label_cond_2f:
	if ( this->endTime < 0 ) 
		goto label_cond_37;
	if ( this->endTime <= cVar0 )
		goto label_cond_3d;
label_cond_37:
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar6;
	// 807    .line 1083
label_cond_3d:
	if ( this->endTimeMode < 0 ) 
		goto label_cond_37;
	if ( this->endTimeMode >  cVar1 )
		goto label_cond_37;
	if ( this->endDayOfWeek )     
		goto label_cond_5f;
	this->endMode = cVar2;
label_cond_4b:
	if ( this->endMode != cVar1 )
		goto label_cond_86;
	if ( this->endDay <  -0x5 )
		goto label_cond_59;
	if ( this->endDay <= 0x5 )
		goto label_cond_9a;
label_cond_59:
	cVar7 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar7;
	// 852    .line 1089
label_cond_5f:
	if ( this->endDayOfWeek <= 0 )
		goto label_cond_70;
	this->endMode = cVar1;
label_goto_65:
	if ( this->endDayOfWeek <= 0x7 )
		goto label_cond_4b;
	cVar8 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar8;
	// 876    .line 1092
label_cond_70:
	this->endDayOfWeek = (0 - this->endDayOfWeek);
	if ( this->endDay <= 0 )
		goto label_cond_7d;
	this->endMode = 0x3;
	goto label_goto_65;
	// 896    .line 1096
label_cond_7d:
	this->endDay = (0 - this->endDay);
	this->endMode = 0x4;
	goto label_goto_65;
	// 911    .line 1108
label_cond_86:
	if ( this->endDay <  cVar2 )
		goto label_cond_94;
	if ( this->endDay <= android::icu::util::SimpleTimeZone::staticMonthLength[this->endMonth] )
		goto label_cond_9a;
label_cond_94:
	cVar9 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar9;
	// 935    .line 1112
label_cond_9a:
	return;

}
// .method private decodeRules()V
void android::icu::util::SimpleTimeZone::decodeRules()
{
	
	this->decodeStartRule();
	this->decodeEndRule();
	return;

}
// .method private decodeStartRule()V
void android::icu::util::SimpleTimeZone::decodeStartRule()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	bool cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar7;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar9;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar8;
	
	cVar0 = 0x5265c00;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar4 = 0x0;
	if ( !(this->startDay) )  
		goto label_cond_f;
	if ( !(this->endDay) )  
		goto label_cond_f;
	cVar4 = cVar2;
label_cond_f:
	this->useDaylight = cVar4;
	if ( !(this->useDaylight) )  
		goto label_cond_1b;
	if ( this->dst )     
		goto label_cond_1b;
	this->dst = cVar0;
label_cond_1b:
	if ( !(this->startDay) )  
		goto label_cond_9a;
	if ( this->startMonth < 0 ) 
		goto label_cond_29;
	if ( this->startMonth <= 0xb )
		goto label_cond_2f;
label_cond_29:
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar5;
	// 1017    .line 1036
label_cond_2f:
	if ( this->startTime < 0 ) 
		goto label_cond_37;
	if ( this->startTime <= cVar0 )
		goto label_cond_3d;
label_cond_37:
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar6;
	// 1035    .line 1037
label_cond_3d:
	if ( this->startTimeMode < 0 ) 
		goto label_cond_37;
	if ( this->startTimeMode >  cVar1 )
		goto label_cond_37;
	if ( this->startDayOfWeek )     
		goto label_cond_5f;
	this->startMode = cVar2;
label_cond_4b:
	if ( this->startMode != cVar1 )
		goto label_cond_86;
	if ( this->startDay <  -0x5 )
		goto label_cond_59;
	if ( this->startDay <= 0x5 )
		goto label_cond_9a;
label_cond_59:
	cVar7 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar7;
	// 1080    .line 1043
label_cond_5f:
	if ( this->startDayOfWeek <= 0 )
		goto label_cond_70;
	this->startMode = cVar1;
label_goto_65:
	if ( this->startDayOfWeek <= 0x7 )
		goto label_cond_4b;
	cVar8 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar8;
	// 1104    .line 1046
label_cond_70:
	this->startDayOfWeek = (0 - this->startDayOfWeek);
	if ( this->startDay <= 0 )
		goto label_cond_7d;
	this->startMode = 0x3;
	goto label_goto_65;
	// 1124    .line 1050
label_cond_7d:
	this->startDay = (0 - this->startDay);
	this->startMode = 0x4;
	goto label_goto_65;
	// 1139    .line 1062
label_cond_86:
	if ( this->startDay <  cVar2 )
		goto label_cond_94;
	if ( this->startDay <= android::icu::util::SimpleTimeZone::staticMonthLength[this->startMonth] )
		goto label_cond_9a;
label_cond_94:
	cVar9 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar9;
	// 1163    .line 1066
label_cond_9a:
	return;

}
// .method private getOffset(IIIIIIII)I
int android::icu::util::SimpleTimeZone::getOffset(int era,int year,int month,int day,int dayOfWeek,int millis,int monthLength,int prevMonthLength)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int result;
	int southern;
	int cVar1;
	int startCompare;
	int cVar2;
	int cVar3;
	int endCompare;
	
	//    .param p1, "era"    # I
	//    .param p2, "year"    # I
	//    .param p3, "month"    # I
	//    .param p4, "day"    # I
	//    .param p5, "dayOfWeek"    # I
	//    .param p6, "millis"    # I
	//    .param p7, "monthLength"    # I
	//    .param p8, "prevMonthLength"    # I
	if ( era == 0x1 )
		goto label_cond_d;
	if ( !(era) )  
		goto label_cond_d;
label_cond_7:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 1197    .line 672
label_cond_d:
	if ( month < 0 ) 
		goto label_cond_7;
	if ( month >  0xb )
		goto label_cond_7;
	if ( day <  0x1 )
		goto label_cond_7;
	if ( day >  monthLength )
		goto label_cond_7;
	if ( dayOfWeek <  0x1 )
		goto label_cond_7;
	if ( dayOfWeek >  0x7 )
		goto label_cond_7;
	if ( millis < 0 ) 
		goto label_cond_7;
	if ( millis >= 0x5265c00 )
		goto label_cond_7;
	if ( monthLength <  0x1c )
		goto label_cond_7;
	if ( monthLength >  0x1f )
		goto label_cond_7;
	if ( prevMonthLength <  0x1c )
		goto label_cond_7;
	if ( prevMonthLength >  0x1f )
		goto label_cond_7;
	result = this->raw;
	//    .local v16, "result":I
	if ( !(this->useDaylight) )  
		goto label_cond_5f;
	if ( year >= this->startYear )
		goto label_cond_60;
label_cond_5f:
	return result;
label_cond_60:
	if ( era != 0x1 )
		goto label_cond_5f;
	if ( this->startMonth <= this->endMonth )
		goto label_cond_e8;
	southern = 0x1;
	//    .local v17, "southern":Z
label_goto_71:
	if ( this->startTimeMode != 0x2 )
		goto label_cond_eb;
	cVar1 = (0 - this->raw);
label_goto_7d:
	startCompare = this->compareToRule(month, monthLength, prevMonthLength, day, dayOfWeek, millis, cVar1, this->startMode, this->startMonth, this->startDayOfWeek, this->startDay, this->startTime);
	//    .local v18, "startCompare":I
	0x0;
	//    .local v15, "endCompare":I
	if ( startCompare < 0 ) 
		goto label_cond_ed;
	cVar2 = 0x1;
label_goto_a7:
	if ( southern == cVar2 )
		goto label_cond_db;
	if ( this->endTimeMode )     
		goto label_cond_ef;
	cVar3 = this->dst;
label_goto_b5:
	endCompare = this->compareToRule(month, monthLength, prevMonthLength, day, dayOfWeek, millis, cVar3, this->endMode, this->endMonth, this->endDayOfWeek, this->endDay, this->endTime);
label_cond_db:
	if ( southern )     
		goto label_cond_fe;
	if ( startCompare < 0 ) 
		goto label_cond_fe;
	if ( endCompare >= 0 )
		goto label_cond_fe;
label_cond_e1:
label_goto_e1:
label_cond_e7:
	return result;
	// 1468    .line 728
	// 1469    .end local v15    # "endCompare":I
	// 1470    .end local v17    # "southern":Z
	// 1471    .end local v18    # "startCompare":I
label_cond_e8:
	southern = 0x0;
	//    .restart local v17    # "southern":Z
	goto label_goto_71;
	// 1478    .line 734
label_cond_eb:
	cVar1 = 0x0;
	goto label_goto_7d;
	// 1484    .line 745
	// 1485    .restart local v15    # "endCompare":I
	// 1486    .restart local v18    # "startCompare":I
label_cond_ed:
	cVar2 = 0x0;
	goto label_goto_a7;
	// 1492    .line 752
label_cond_ef:
	if ( this->endTimeMode != 0x2 )
		goto label_cond_fc;
	cVar3 = (0 - this->raw);
	goto label_goto_b5;
label_cond_fc:
	cVar3 = 0x0;
	goto label_goto_b5;
	// 1515    .line 762
label_cond_fe:
	if ( !(southern) )  
		goto label_cond_e7;
	if ( startCompare >= 0 )
		goto label_cond_e1;
	if ( endCompare >= 0 )
		goto label_cond_e7;
	goto label_goto_e1;

}
// .method private getSTZInfo()Landroid/icu/util/STZInfo;
std::shared_ptr<android::icu::util::STZInfo> android::icu::util::SimpleTimeZone::getSTZInfo()
{
	
	std::shared_ptr<android::icu::util::STZInfo> cVar0;
	
	if ( this->xinfo )     
		goto label_cond_b;
	cVar0 = std::make_shared<android::icu::util::STZInfo>();
	this->xinfo = cVar0;
label_cond_b:
	return this->xinfo;

}
// .method private idEquals(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::util::SimpleTimeZone::idEquals(std::shared_ptr<java::lang::String> id1,std::shared_ptr<java::lang::String> id2)
{
	
	//    .param p1, "id1"    # Ljava/lang/String;
	//    .param p2, "id2"    # Ljava/lang/String;
	if ( id1 )     
		goto label_cond_6;
	if ( id2 )     
		goto label_cond_6;
	return 0x1;
	// 1565    .line 1148
label_cond_6:
	if ( !(id1) )  
		goto label_cond_f;
	if ( !(id2) )  
		goto label_cond_f;
	return id1->equals(id2);
	// 1578    .line 1151
label_cond_f:
	return 0x0;

}
// .method private declared-synchronized initTransitionRules()V
void android::icu::util::SimpleTimeZone::initTransitionRules()
{
	
	int dtRule;
	int timeRuleType;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	auto firstDstStart;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	auto firstStdStart;
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar6;
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar9;
	std::shared_ptr<android::icu::util::DateTimeRule> dtRule;
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> cVar10;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_5:
	}
	catch (...){
		goto label_catchall_212;
	}
	//    .catchall {:try_start_1 .. :try_end_5} :catchall_212
	if ( !(this->transitionRulesInitialized) )  
		goto label_cond_9;
	this->monitor_exit();
	return;
	// 1606    .line 1310
label_cond_9:
	try {
	//label_try_start_9:
	if ( !(this->useDaylight) )  
		goto label_cond_215;
	dtRule = 0x0;
	//    .local v2, "dtRule":Landroid/icu/util/DateTimeRule;
	if ( this->startTimeMode != 0x1 )
		goto label_cond_101;
	timeRuleType = 0x1;
	//    .local v7, "timeRuleType":I
label_goto_18:
	// switch
	{
	auto item = ( this->startMode );
	if (item == 1) goto label_pswitch_10e;
	if (item == 2) goto label_pswitch_121;
	if (item == 3) goto label_pswitch_138;
	if (item == 4) goto label_pswitch_152;
	}
	//    .end local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
label_goto_1f:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::util::AnnualTimeZoneRule>(cVar1->append(this->getID())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(DST)")))->toString(), this->getRawOffset(), this->getDSTSavings(), dtRule, this->startYear, 0x7fffffff);
	this->dstRule = cVar0;
	firstDstStart = this->dstRule->getFirstStart(this->getRawOffset(), 0x0)->getTime();
	//    .local v16, "firstDstStart":J
	if ( this->endTimeMode != 0x1 )
		goto label_cond_16c;
	timeRuleType = 0x1;
label_goto_69:
	// switch
	{
	auto item = ( this->endMode );
	if (item == 1) goto label_pswitch_179;
	if (item == 2) goto label_pswitch_18c;
	if (item == 3) goto label_pswitch_1a3;
	if (item == 4) goto label_pswitch_1bd;
	}
label_goto_70:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<android::icu::util::AnnualTimeZoneRule>(cVar3->append(this->getID())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(STD)")))->toString(), this->getRawOffset(), 0x0, dtRule, this->startYear, 0x7fffffff);
	this->stdRule = cVar2;
	firstStdStart = this->stdRule->getFirstStart(this->getRawOffset(), this->dstRule->getDSTSavings())->getTime();
	//    .local v18, "firstStdStart":J
	if ( (firstStdStart > firstDstStart) >= 0 )
		goto label_cond_1d7;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<android::icu::util::InitialTimeZoneRule>(cVar5->append(this->getID())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(DST)")))->toString(), this->getRawOffset(), this->dstRule->getDSTSavings());
	this->initialRule = cVar4;
	cVar6 = std::make_shared<android::icu::util::TimeZoneTransition>(firstStdStart, this->initialRule, this->stdRule);
	this->firstTransition = cVar6;
	//    .end local v7    # "timeRuleType":I
	//    .end local v16    # "firstDstStart":J
	//    .end local v18    # "firstStdStart":J
label_goto_fa:
	this->transitionRulesInitialized = 0x1;
	//label_try_end_ff:
	}
	catch (...){
		goto label_catchall_212;
	}
	//    .catchall {:try_start_9 .. :try_end_ff} :catchall_212
	this->monitor_exit();
	return;
	// 1892    .line 1317
	// 1893    .restart local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
label_cond_101:
	try {
	//label_try_start_101:
	if ( this->startTimeMode != 0x2 )
		goto label_cond_10b;
	0x2;
	//    .restart local v7    # "timeRuleType":I
	goto label_goto_18;
	// 1909    .end local v7    # "timeRuleType":I
label_cond_10b:
	0x0;
	//    .restart local v7    # "timeRuleType":I
	goto label_goto_18;
	// 1916    .line 1320
label_pswitch_10e:
	//    .end local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
	dtRule = std::make_shared<android::icu::util::DateTimeRule>(this->startMonth, this->startDay, this->startTime, timeRuleType);
	//    .local v2, "dtRule":Landroid/icu/util/DateTimeRule;
	goto label_goto_1f;
	// 1939    .line 1323
	// 1940    .local v2, "dtRule":Landroid/icu/util/DateTimeRule;
label_pswitch_121:
	//    .end local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
	dtRule = std::make_shared<android::icu::util::DateTimeRule>(this->startMonth, this->startDay, this->startDayOfWeek, this->startTime, timeRuleType);
	//    .local v2, "dtRule":Landroid/icu/util/DateTimeRule;
	goto label_goto_1f;
	// 1967    .line 1327
	// 1968    .local v2, "dtRule":Landroid/icu/util/DateTimeRule;
label_pswitch_138:
	//    .end local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
	var145 = dtRule(this->startMonth, this->startDay, this->startDayOfWeek, 0x1, this->startTime, timeRuleType);
	//    .local v2, "dtRule":Landroid/icu/util/DateTimeRule;
	goto label_goto_1f;
	// 2001    .line 1331
	// 2002    .local v2, "dtRule":Landroid/icu/util/DateTimeRule;
label_pswitch_152:
	//    .end local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
	var158 = dtRule(this->startMonth, this->startDay, this->startDayOfWeek, 0x0, this->startTime, timeRuleType);
	//    .local v2, "dtRule":Landroid/icu/util/DateTimeRule;
	goto label_goto_1f;
	// 2035    .line 1344
	// 2036    .end local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
	// 2037    .restart local v16    # "firstDstStart":J
label_cond_16c:
	if ( this->endTimeMode != 0x2 )
		goto label_cond_176;
	0x2;
	goto label_goto_69;
label_cond_176:
	0x0;
	goto label_goto_69;
	// 2056    .line 1347
label_pswitch_179:
	dtRule = std::make_shared<android::icu::util::DateTimeRule>(this->endMonth, this->endDay, this->endTime, timeRuleType);
	//    .restart local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
	goto label_goto_70;
	// 2078    .line 1350
	// 2079    .end local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
label_pswitch_18c:
	dtRule = std::make_shared<android::icu::util::DateTimeRule>(this->endMonth, this->endDay, this->endDayOfWeek, this->endTime, timeRuleType);
	//    .restart local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
	goto label_goto_70;
	// 2105    .line 1353
	// 2106    .end local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
label_pswitch_1a3:
	var194 = dtRule(this->endMonth, this->endDay, this->endDayOfWeek, 0x1, this->endTime, timeRuleType);
	//    .restart local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
	goto label_goto_70;
	// 2138    .line 1357
	// 2139    .end local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
label_pswitch_1bd:
	var207 = dtRule(this->endMonth, this->endDay, this->endDayOfWeek, 0x0, this->endTime, timeRuleType);
	//    .restart local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
	goto label_goto_70;
	// 2171    .line 1374
	// 2172    .end local v2    # "dtRule":Landroid/icu/util/DateTimeRule;
	// 2173    .restart local v18    # "firstStdStart":J
label_cond_1d7:
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	cVar7 = std::make_shared<android::icu::util::InitialTimeZoneRule>(cVar8->append(this->getID())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(STD)")))->toString(), this->getRawOffset(), 0x0);
	this->initialRule = cVar7;
	cVar9 = std::make_shared<android::icu::util::TimeZoneTransition>(firstDstStart, this->initialRule, this->dstRule);
	this->firstTransition = cVar9;
	//label_try_end_210:
	}
	catch (...){
		goto label_catchall_212;
	}
	//    .catchall {:try_start_101 .. :try_end_210} :catchall_212
	goto label_goto_fa;
	// 2234    .end local v7    # "timeRuleType":I
	// 2235    .end local v16    # "firstDstStart":J
	// 2236    .end local v18    # "firstStdStart":J
label_catchall_212:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 2244    .line 1380
label_cond_215:
	try {
	//label_try_start_215:
	cVar10 = std::make_shared<android::icu::util::InitialTimeZoneRule>(this->getID(), this->getRawOffset(), 0x0);
	this->initialRule = cVar10;
	//label_try_end_227:
	}
	catch (...){
		goto label_catchall_212;
	}
	//    .catchall {:try_start_215 .. :try_end_227} :catchall_212
	goto label_goto_fa;
	// 2269    .line 1318
	// 2270    nop
	// 2272    :pswitch_data_22a
	// 2273    .packed-switch 0x1
	// 2274        :pswitch_10e
	// 2275        :pswitch_121
	// 2276        :pswitch_138
	// 2277        :pswitch_152
	// 2278    .end packed-switch
	// 2280    .line 1345
	// 2281    :pswitch_data_236
	// 2282    .packed-switch 0x1
	// 2283        :pswitch_179
	// 2284        :pswitch_18c
	// 2285        :pswitch_1a3
	// 2286        :pswitch_1bd
	// 2287    .end packed-switch

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::util::SimpleTimeZone::readObject(std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	//    .param p1, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2294        value = {
	// 2295            Ljava/io/IOException;,
	// 2296            Ljava/lang/ClassNotFoundException;
	// 2297        }
	// 2298    .end annotation
	in->defaultReadObject();
	if ( !(this->xinfo) )  
		goto label_cond_c;
	this->xinfo->applyTo(this);
label_cond_c:
	return;

}
// .method private setEndRule(IIIII)V
void android::icu::util::SimpleTimeZone::setEndRule(int month,int dayOfWeekInMonth,int dayOfWeek,int time,int mode)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfWeekInMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "time"    # I
	//    .param p5, "mode"    # I
	if ( android::icu::util::SimpleTimeZone::_assertionsDisabled )     
		goto label_cond_10;
	if ( !(this->isFrozen()) )  
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2345    .line 512
label_cond_10:
	this->endMonth = month;
	this->endDay = dayOfWeekInMonth;
	this->endDayOfWeek = dayOfWeek;
	this->endTime = time;
	this->endTimeMode = mode;
	this->decodeEndRule();
	this->transitionRulesInitialized = 0x0;
	return;

}
// .method private setEndRule(IIIIIZ)V
void android::icu::util::SimpleTimeZone::setEndRule(int month,int dayOfMonth,int dayOfWeek,int time,int mode,bool after)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int cVar1;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "time"    # I
	//    .param p5, "mode"    # I
	//    .param p6, "after"    # Z
	if ( android::icu::util::SimpleTimeZone::_assertionsDisabled )     
		goto label_cond_10;
	if ( !(this->isFrozen()) )  
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2400    .line 489
label_cond_10:
	if ( !(after) )  
		goto label_cond_1c;
	cVar1 = dayOfMonth;
label_goto_13:
	this->setEndRule(month, cVar1, (0 - dayOfWeek), time, mode);
	return;
	// 2422    .line 489
label_cond_1c:
	cVar1 = (0 - dayOfMonth);
	goto label_goto_13;

}
// .method private setStartRule(IIIII)V
void android::icu::util::SimpleTimeZone::setStartRule(int month,int dayOfWeekInMonth,int dayOfWeek,int time,int mode)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfWeekInMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "time"    # I
	//    .param p5, "mode"    # I
	if ( android::icu::util::SimpleTimeZone::_assertionsDisabled )     
		goto label_cond_10;
	if ( !(this->isFrozen()) )  
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2455    .line 357
label_cond_10:
	this->startMonth = month;
	this->startDay = dayOfWeekInMonth;
	this->startDayOfWeek = dayOfWeek;
	this->startTime = time;
	this->startTimeMode = mode;
	this->decodeStartRule();
	this->transitionRulesInitialized = 0x0;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::SimpleTimeZone::clone()
{
	
	if ( !(this->isFrozen()) )  
		goto label_cond_7;
	return this;
	// 2499    .line 1189
label_cond_7:
	return this->cloneAsThawed();

}
// .method public cloneAsThawed()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::SimpleTimeZone::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::util::SimpleTimeZone> tz;
	
	tz = this->cloneAsThawed();
	tz->checkCast("android::icu::util::SimpleTimeZone");
	//    .local v0, "tz":Landroid/icu/util/SimpleTimeZone;
	tz->isFrozen = 0x0;
	return tz;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::SimpleTimeZone::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::SimpleTimeZone> that;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return cVar0;
	// 2543    .line 1121
label_cond_5:
	if ( !(obj) )  
		goto label_cond_11;
	if ( this->getClass() == obj->getClass() )
		goto label_cond_12;
label_cond_11:
	return cVar1;
label_cond_12:
	that = obj;
	that->checkCast("android::icu::util::SimpleTimeZone");
	//    .local v0, "that":Landroid/icu/util/SimpleTimeZone;
	if ( this->raw != that->raw )
		goto label_cond_8c;
	if ( this->useDaylight != that->useDaylight )
		goto label_cond_8c;
	if ( !(this->idEquals(this->getID(), that->getID())) )  
		goto label_cond_8c;
	if ( !(this->useDaylight) )  
		goto label_cond_87;
	if ( this->dst != that->dst )
		goto label_cond_8a;
	if ( this->startMode != that->startMode )
		goto label_cond_8a;
	if ( this->startMonth != that->startMonth )
		goto label_cond_8a;
	if ( this->startDay != that->startDay )
		goto label_cond_8a;
	if ( this->startDayOfWeek != that->startDayOfWeek )
		goto label_cond_8a;
	if ( this->startTime != that->startTime )
		goto label_cond_8a;
	if ( this->startTimeMode != that->startTimeMode )
		goto label_cond_8a;
	if ( this->endMode != that->endMode )
		goto label_cond_8a;
	if ( this->endMonth != that->endMonth )
		goto label_cond_8a;
	if ( this->endDay != that->endDay )
		goto label_cond_8a;
	if ( this->endDayOfWeek != that->endDayOfWeek )
		goto label_cond_8a;
	if ( this->endTime != that->endTime )
		goto label_cond_8a;
	if ( this->endTimeMode != that->endTimeMode )
		goto label_cond_8a;
	if ( this->startYear != that->startYear )
		goto label_cond_88;
label_cond_87:
label_goto_87:
	return cVar0;
label_cond_88:
	cVar0 = cVar1;
	goto label_goto_87;
label_cond_8a:
	cVar0 = cVar1;
	goto label_goto_87;
label_cond_8c:
	cVar0 = cVar1;
	goto label_goto_87;

}
// .method public freeze()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::SimpleTimeZone::freeze()
{
	
	this->isFrozen = 0x1;
	return this;

}
// .method public getDSTSavings()I
int android::icu::util::SimpleTimeZone::getDSTSavings()
{
	
	return this->dst;

}
// .method public getNextTransition(JZ)Landroid/icu/util/TimeZoneTransition;
std::shared_ptr<android::icu::util::TimeZoneTransition> android::icu::util::SimpleTimeZone::getNextTransition(long long base,bool inclusive)
{
	
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar0;
	auto firstTransitionTime;
	std::shared_ptr<java::util::Date> stdDate;
	std::shared_ptr<java::util::Date> dstDate;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar1;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar2;
	
	//    .param p1, "base"    # J
	//    .param p3, "inclusive"    # Z
	cVar0 = 0x0;
	if ( this->useDaylight )     
		goto label_cond_6;
	return cVar0;
	// 2763    .line 1238
label_cond_6:
	this->initTransitionRules();
	firstTransitionTime = this->firstTransition->getTime();
	//    .local v8, "firstTransitionTime":J
	if ( (base > firstTransitionTime) < 0 ) 
		goto label_cond_19;
	if ( !(inclusive) )  
		goto label_cond_1c;
	if ( (base > firstTransitionTime) )     
		goto label_cond_1c;
label_cond_19:
	return this->firstTransition;
	// 2792    .line 1243
label_cond_1c:
	stdDate = this->stdRule->getNextStart(base, this->dstRule->getRawOffset(), this->dstRule->getDSTSavings(), inclusive);
	//    .local v7, "stdDate":Ljava/util/Date;
	dstDate = this->dstRule->getNextStart(base, this->stdRule->getRawOffset(), this->stdRule->getDSTSavings(), inclusive);
	//    .local v0, "dstDate":Ljava/util/Date;
	if ( !(stdDate) )  
		goto label_cond_5c;
	if ( !(dstDate) )  
		goto label_cond_4e;
	if ( !(stdDate->before(dstDate)) )  
		goto label_cond_5c;
label_cond_4e:
	cVar1 = std::make_shared<android::icu::util::TimeZoneTransition>(stdDate->getTime(), this->dstRule, this->stdRule);
	return cVar1;
	// 2868    .line 1250
label_cond_5c:
	if ( !(dstDate) )  
		goto label_cond_74;
	if ( !(stdDate) )  
		goto label_cond_66;
	if ( !(dstDate->before(stdDate)) )  
		goto label_cond_74;
label_cond_66:
	cVar2 = std::make_shared<android::icu::util::TimeZoneTransition>(dstDate->getTime(), this->stdRule, this->dstRule);
	return cVar2;
	// 2896    .line 1253
label_cond_74:
	return cVar0;

}
// .method public getOffset(IIIIII)I
int android::icu::util::SimpleTimeZone::getOffset(int era,int year,int month,int day,int dayOfWeek,int millis)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "era"    # I
	//    .param p2, "year"    # I
	//    .param p3, "month"    # I
	//    .param p4, "day"    # I
	//    .param p5, "dayOfWeek"    # I
	//    .param p6, "millis"    # I
	if ( month < 0 ) 
		goto label_cond_6;
	if ( month <= 0xb )
		goto label_cond_c;
label_cond_6:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 2926    .line 637
label_cond_c:
	return this->getOffset(era, year, month, day, dayOfWeek, millis, android::icu::impl::Grego::monthLength(year, month));

}
// .method public getOffset(IIIIIII)I
int android::icu::util::SimpleTimeZone::getOffset(int era,int year,int month,int day,int dayOfWeek,int millis,int monthLength)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "era"    # I
	//    .param p2, "year"    # I
	//    .param p3, "month"    # I
	//    .param p4, "day"    # I
	//    .param p5, "dayOfWeek"    # I
	//    .param p6, "millis"    # I
	//    .param p7, "monthLength"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2963    .end annotation
	if ( month < 0 ) 
		goto label_cond_6;
	if ( month <= 0xb )
		goto label_cond_c;
label_cond_6:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 2981    .line 660
label_cond_c:
	return this->getOffset(era, year, month, day, dayOfWeek, millis, android::icu::impl::Grego::monthLength(year, month), android::icu::impl::Grego::previousMonthLength(year, month));

}
// .method public getOffsetFromLocal(JII[I)V
void android::icu::util::SimpleTimeZone::getOffsetFromLocal(long long date,int nonExistingTimeOpt,int duplicatedTimeOpt,std::shared_ptr<int[]> offsets)
{
	
	std::shared<std::vector<int[]>> fields;
	int recalc;
	
	//    .param p1, "date"    # J
	//    .param p3, "nonExistingTimeOpt"    # I
	//    .param p4, "duplicatedTimeOpt"    # I
	//    .param p5, "offsets"    # [I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3020    .end annotation
	offsets[0x0] = this->getRawOffset();
	fields = std::make_shared<std::vector<int[]>>(0x6);
	//    .local v7, "fields":[I
	android::icu::impl::Grego::timeToFields(date, fields);
	offsets[0x1] = (this->getOffset(0x1, fields[0x0], fields[0x1], fields[0x2], fields[0x3], fields[0x5]) -  offsets[0x0]);
	recalc = 0x0;
	//    .local v8, "recalc":Z
	if ( offsets[0x1] <= 0 )
		goto label_cond_68;
	if ( ( nonExistingTimeOpt & 0x3) == 0x1 )
		goto label_cond_3f;
	if ( ( nonExistingTimeOpt & 0x3) == 0x3 )
		goto label_cond_46;
	if ( ( nonExistingTimeOpt & 0xc) == 0xc )
		goto label_cond_46;
label_cond_3f:
	recalc = 0x1;
label_cond_46:
label_goto_46:
	if ( !(recalc) )  
		goto label_cond_67;
	android::icu::impl::Grego::timeToFields((date -  (long long)(this->getDSTSavings())), fields);
	offsets[0x1] = (this->getOffset(0x1, fields[0x0], fields[0x1], fields[0x2], fields[0x3], fields[0x5]) -  offsets[0x0]);
label_cond_67:
	return;
	// 3184    .line 795
label_cond_68:
	if ( ( duplicatedTimeOpt & 0x3) == 0x3 )
		goto label_cond_77;
	if ( ( duplicatedTimeOpt & 0x3) == 0x1 )
		goto label_cond_46;
	if ( ( duplicatedTimeOpt & 0xc) != 0x4 )
		goto label_cond_46;
label_cond_77:
	(date -  (long long)(this->getDSTSavings()));
	recalc = 0x1;
	goto label_goto_46;

}
// .method public getPreviousTransition(JZ)Landroid/icu/util/TimeZoneTransition;
std::shared_ptr<android::icu::util::TimeZoneTransition> android::icu::util::SimpleTimeZone::getPreviousTransition(long long base,bool inclusive)
{
	
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar0;
	auto firstTransitionTime;
	std::shared_ptr<java::util::Date> stdDate;
	std::shared_ptr<java::util::Date> dstDate;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar1;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar2;
	
	//    .param p1, "base"    # J
	//    .param p3, "inclusive"    # Z
	cVar0 = 0x0;
	if ( this->useDaylight )     
		goto label_cond_6;
	return cVar0;
	// 3238    .line 1265
label_cond_6:
	this->initTransitionRules();
	firstTransitionTime = this->firstTransition->getTime();
	//    .local v8, "firstTransitionTime":J
	if ( (base > firstTransitionTime) < 0 ) 
		goto label_cond_19;
	if ( inclusive )     
		goto label_cond_1a;
	if ( (base > firstTransitionTime) )     
		goto label_cond_1a;
label_cond_19:
	return cVar0;
	// 3265    .line 1270
label_cond_1a:
	stdDate = this->stdRule->getPreviousStart(base, this->dstRule->getRawOffset(), this->dstRule->getDSTSavings(), inclusive);
	//    .local v7, "stdDate":Ljava/util/Date;
	dstDate = this->dstRule->getPreviousStart(base, this->stdRule->getRawOffset(), this->stdRule->getDSTSavings(), inclusive);
	//    .local v0, "dstDate":Ljava/util/Date;
	if ( !(stdDate) )  
		goto label_cond_5a;
	if ( !(dstDate) )  
		goto label_cond_4c;
	if ( !(stdDate->after(dstDate)) )  
		goto label_cond_5a;
label_cond_4c:
	cVar1 = std::make_shared<android::icu::util::TimeZoneTransition>(stdDate->getTime(), this->dstRule, this->stdRule);
	return cVar1;
	// 3345    .line 1277
label_cond_5a:
	if ( !(dstDate) )  
		goto label_cond_72;
	if ( !(stdDate) )  
		goto label_cond_64;
	if ( !(dstDate->after(stdDate)) )  
		goto label_cond_72;
label_cond_64:
	cVar2 = std::make_shared<android::icu::util::TimeZoneTransition>(dstDate->getTime(), this->stdRule, this->dstRule);
	return cVar2;
	// 3373    .line 1280
label_cond_72:
	return cVar0;

}
// .method public getRawOffset()I
int android::icu::util::SimpleTimeZone::getRawOffset()
{
	
	return this->raw;

}
// .method public getTimeZoneRules()[Landroid/icu/util/TimeZoneRule;
std::shared_ptr<android::icu::util::TimeZoneRule> android::icu::util::SimpleTimeZone::getTimeZoneRules()
{
	
	std::shared<std::vector<std::vector<android::icu::util::TimeZoneRule>>> rules;
	
	this->initTransitionRules();
	if ( !(this->useDaylight) )  
		goto label_cond_1e;
	//    .local v1, "size":I
label_goto_8:
	rules = std::make_shared<std::vector<std::vector<android::icu::util::TimeZoneRule>>>(size);
	//    .local v0, "rules":[Landroid/icu/util/TimeZoneRule;
	rules[0x0] = this->initialRule;
	if ( !(this->useDaylight) )  
		goto label_cond_1d;
	rules[0x1] = this->stdRule;
	rules[0x2] = this->dstRule;
label_cond_1d:
	return rules;
	// 3438    .line 1290
	// 3439    .end local v0    # "rules":[Landroid/icu/util/TimeZoneRule;
	// 3440    .end local v1    # "size":I
label_cond_1e:
	//    .restart local v1    # "size":I
	goto label_goto_8;

}
// .method public hasSameRules(Landroid/icu/util/TimeZone;)Z
bool android::icu::util::SimpleTimeZone::hasSameRules(std::shared_ptr<android::icu::util::TimeZone> othr)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::SimpleTimeZone> other;
	
	//    .param p1, "othr"    # Landroid/icu/util/TimeZone;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != othr )
		goto label_cond_5;
	return cVar0;
	// 3463    .line 1202
label_cond_5:
	if ( othr->instanceOf("android::icu::util::SimpleTimeZone") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	other = othr;
	other->checkCast("android::icu::util::SimpleTimeZone");
	//    .local v0, "other":Landroid/icu/util/SimpleTimeZone;
	if ( !(other) )  
		goto label_cond_78;
	if ( this->raw != other->raw )
		goto label_cond_78;
	if ( this->useDaylight != other->useDaylight )
		goto label_cond_78;
	if ( !(this->useDaylight) )  
		goto label_cond_73;
	if ( this->dst != other->dst )
		goto label_cond_76;
	if ( this->startMode != other->startMode )
		goto label_cond_76;
	if ( this->startMonth != other->startMonth )
		goto label_cond_76;
	if ( this->startDay != other->startDay )
		goto label_cond_76;
	if ( this->startDayOfWeek != other->startDayOfWeek )
		goto label_cond_76;
	if ( this->startTime != other->startTime )
		goto label_cond_76;
	if ( this->startTimeMode != other->startTimeMode )
		goto label_cond_76;
	if ( this->endMode != other->endMode )
		goto label_cond_76;
	if ( this->endMonth != other->endMonth )
		goto label_cond_76;
	if ( this->endDay != other->endDay )
		goto label_cond_76;
	if ( this->endDayOfWeek != other->endDayOfWeek )
		goto label_cond_76;
	if ( this->endTime != other->endTime )
		goto label_cond_76;
	if ( this->endTimeMode != other->endTimeMode )
		goto label_cond_76;
	if ( this->startYear != other->startYear )
		goto label_cond_74;
label_cond_73:
label_goto_73:
	return cVar0;
label_cond_74:
	cVar0 = cVar1;
	goto label_goto_73;
label_cond_76:
	cVar0 = cVar1;
	goto label_goto_73;
label_cond_78:
	cVar0 = cVar1;
	goto label_goto_73;

}
// .method public hashCode()I
int android::icu::util::SimpleTimeZone::hashCode()
{
	
	int cVar0;
	int ret;
	
	if ( !(this->useDaylight) )  
		goto label_cond_88;
	cVar0 = 0x0;
label_goto_10:
	ret = ((this->raw +  this->hashCode()) ^ (cVar0 +  _ushri(this->raw,0x8)));
	//    .local v0, "ret":I
	if ( this->useDaylight )     
		goto label_cond_87;
label_cond_87:
	return ret;
	// 3860    .line 1161
	// 3861    .end local v0    # "ret":I
label_cond_88:
	cVar0 = 0x1;
	goto label_goto_10;

}
// .method public inDaylightTime(Ljava/util/Date;)Z
bool android::icu::util::SimpleTimeZone::inDaylightTime(std::shared_ptr<java::util::Date> date)
{
	
	std::shared_ptr<android::icu::util::GregorianCalendar> gc;
	
	//    .param p1, "date"    # Ljava/util/Date;
	gc = std::make_shared<android::icu::util::GregorianCalendar>(this);
	//    .local v0, "gc":Landroid/icu/util/GregorianCalendar;
	gc->setTime(date);
	return gc->inDaylightTime();

}
// .method public isFrozen()Z
bool android::icu::util::SimpleTimeZone::isFrozen()
{
	
	return this->isFrozen;

}
// .method public observesDaylightTime()Z
bool android::icu::util::SimpleTimeZone::observesDaylightTime()
{
	
	return this->useDaylight;

}
// .method public setDSTSavings(I)V
void android::icu::util::SimpleTimeZone::setDSTSavings(int millisSavedDuringDST)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "millisSavedDuringDST"    # I
	if ( !(this->isFrozen()) )  
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen SimpleTimeZone instance.")));
	// throw
	throw cVar0;
	// 3933    .line 533
label_cond_10:
	if ( millisSavedDuringDST > 0 ) 
		goto label_cond_18;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar1;
	// 3944    .line 536
label_cond_18:
	this->dst = millisSavedDuringDST;
	this->transitionRulesInitialized = 0x0;
	return;

}
// .method public setEndRule(III)V
void android::icu::util::SimpleTimeZone::setEndRule(int month,int dayOfMonth,int time)
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar2;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "time"    # I
	cVar0 = 0x0;
	cVar1 = -0x1;
	if ( !(this->isFrozen()) )  
		goto label_cond_11;
	cVar2 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen SimpleTimeZone instance.")));
	// throw
	throw cVar2;
	// 3982    .line 457
label_cond_11:
	this->getSTZInfo()->setEnd(month, cVar1, cVar1, time, dayOfMonth, cVar0);
	this->setEndRule(month, dayOfMonth, cVar0, time);
	return;

}
// .method public setEndRule(IIII)V
void android::icu::util::SimpleTimeZone::setEndRule(int month,int dayOfWeekInMonth,int dayOfWeek,int time)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfWeekInMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "time"    # I
	cVar0 = 0x0;
	if ( !(this->isFrozen()) )  
		goto label_cond_10;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen SimpleTimeZone instance.")));
	// throw
	throw cVar1;
	// 4031    .line 437
label_cond_10:
	this->getSTZInfo()->setEnd(month, dayOfWeekInMonth, dayOfWeek, time, -0x1, cVar0);
	this->setEndRule(month, dayOfWeekInMonth, dayOfWeek, time, cVar0);
	return;

}
// .method public setEndRule(IIIIZ)V
void android::icu::util::SimpleTimeZone::setEndRule(int month,int dayOfMonth,int dayOfWeek,int time,bool after)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "time"    # I
	//    .param p5, "after"    # Z
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen SimpleTimeZone instance.")));
	// throw
	throw cVar0;
	// 4091    .line 482
label_cond_f:
	this->getSTZInfo()->setEnd(month, -0x1, dayOfWeek, time, dayOfMonth, after);
	this->setEndRule(month, dayOfMonth, dayOfWeek, time, 0x0, after);
	return;

}
// .method public setID(Ljava/lang/String;)V
void android::icu::util::SimpleTimeZone::setID(std::shared_ptr<java::lang::String> ID)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen SimpleTimeZone instance.")));
	// throw
	throw cVar0;
	// 4153    .line 241
label_cond_f:
	this->setID(ID);
	this->transitionRulesInitialized = 0x0;
	return;

}
// .method public setRawOffset(I)V
void android::icu::util::SimpleTimeZone::setRawOffset(int offsetMillis)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "offsetMillis"    # I
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen SimpleTimeZone instance.")));
	// throw
	throw cVar0;
	// 4187    .line 257
label_cond_f:
	this->raw = offsetMillis;
	this->transitionRulesInitialized = 0x0;
	return;

}
// .method public setStartRule(III)V
void android::icu::util::SimpleTimeZone::setStartRule(int month,int dayOfMonth,int time)
{
	
	int cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar2;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "time"    # I
	cVar0 = -0x1;
	cVar1 = 0x0;
	if ( !(this->isFrozen()) )  
		goto label_cond_11;
	cVar2 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen SimpleTimeZone instance.")));
	// throw
	throw cVar2;
	// 4227    .line 383
label_cond_11:
	this->getSTZInfo()->setStart(month, cVar0, cVar0, time, dayOfMonth, cVar1);
	this->setStartRule(month, dayOfMonth, cVar1, time, cVar1);
	return;

}
// .method public setStartRule(IIII)V
void android::icu::util::SimpleTimeZone::setStartRule(int month,int dayOfWeekInMonth,int dayOfWeek,int time)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfWeekInMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "time"    # I
	cVar0 = 0x0;
	if ( !(this->isFrozen()) )  
		goto label_cond_10;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen SimpleTimeZone instance.")));
	// throw
	throw cVar1;
	// 4286    .line 312
label_cond_10:
	this->getSTZInfo()->setStart(month, dayOfWeekInMonth, dayOfWeek, time, -0x1, cVar0);
	this->setStartRule(month, dayOfWeekInMonth, dayOfWeek, time, cVar0);
	return;

}
// .method public setStartRule(IIIIZ)V
void android::icu::util::SimpleTimeZone::setStartRule(int month,int dayOfMonth,int dayOfWeek,int time,bool after)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	int cVar1;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "time"    # I
	//    .param p5, "after"    # Z
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen SimpleTimeZone instance.")));
	// throw
	throw cVar0;
	// 4346    .line 408
label_cond_f:
	this->getSTZInfo()->setStart(month, -0x1, dayOfWeek, time, dayOfMonth, after);
	if ( !(after) )  
		goto label_cond_28;
	cVar1 = dayOfMonth;
label_goto_1f:
	this->setStartRule(month, cVar1, (0 - dayOfWeek), time, 0x0);
	return;
	// 4389    .line 409
label_cond_28:
	cVar1 = (0 - dayOfMonth);
	goto label_goto_1f;

}
// .method public setStartYear(I)V
void android::icu::util::SimpleTimeZone::setStartYear(int year)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "year"    # I
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen SimpleTimeZone instance.")));
	// throw
	throw cVar0;
	// 4417    .line 281
label_cond_f:
	this->getSTZInfo()->sy = year;
	this->startYear = year;
	this->transitionRulesInitialized = 0x0;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::SimpleTimeZone::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SimpleTimeZone: ")))->append(this->getID())->toString();

}
// .method public useDaylightTime()Z
bool android::icu::util::SimpleTimeZone::useDaylightTime()
{
	
	return this->useDaylight;

}


