// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\DateTimeRule.smali
#include "java2ctype.h"
#include "android.icu.util.DateTimeRule.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::util::DateTimeRule::DOM = 0x0;
static android::icu::util::DateTimeRule::DOW = 0x1;
static android::icu::util::DateTimeRule::DOWSTR;
static android::icu::util::DateTimeRule::DOW_GEQ_DOM = 0x2;
static android::icu::util::DateTimeRule::DOW_LEQ_DOM = 0x3;
static android::icu::util::DateTimeRule::MONSTR;
static android::icu::util::DateTimeRule::STANDARD_TIME = 0x1;
static android::icu::util::DateTimeRule::UTC_TIME = 0x2;
static android::icu::util::DateTimeRule::WALL_TIME = 0x0;
static android::icu::util::DateTimeRule::serialVersionUID = 0x1e4bc5ae0dd30373L;
// .method static constructor <clinit>()V
void android::icu::util::DateTimeRule::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x8);
	cVar5[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	cVar5[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Sun"));
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Mon"));
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Tue"));
	cVar5[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Wed"));
	cVar5[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Thu"));
	cVar5[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Fri"));
	cVar5[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Sat"));
	android::icu::util::DateTimeRule::DOWSTR = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0xc);
	cVar6[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Jan"));
	cVar6[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Feb"));
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Mar"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Apr"));
	cVar6[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("May"));
	cVar6[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Jun"));
	cVar6[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Jul"));
	cVar6[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Aug"));
	cVar6[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Sep"));
	cVar6[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Oct"));
	cVar6[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Nov"));
	cVar6[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Dec"));
	android::icu::util::DateTimeRule::MONSTR = cVar6;
	return;

}
// .method public constructor <init>(IIII)V
android::icu::util::DateTimeRule::DateTimeRule(int month,int dayOfMonth,int millisInDay,int timeType)
{
	
	int cVar0;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "millisInDay"    # I
	//    .param p4, "timeType"    # I
	cVar0 = 0x0;
	// 191    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->dateRuleType = cVar0;
	this->month = month;
	this->dayOfMonth = dayOfMonth;
	this->millisInDay = millisInDay;
	this->timeRuleType = timeType;
	this->dayOfWeek = cVar0;
	this->weekInMonth = cVar0;
	return;

}
// .method public constructor <init>(IIIII)V
android::icu::util::DateTimeRule::DateTimeRule(int month,int weekInMonth,int dayOfWeek,int millisInDay,int timeType)
{
	
	//    .param p1, "month"    # I
	//    .param p2, "weekInMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "millisInDay"    # I
	//    .param p5, "timeType"    # I
	// 228    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->dateRuleType = 0x1;
	this->month = month;
	this->weekInMonth = weekInMonth;
	this->dayOfWeek = dayOfWeek;
	this->millisInDay = millisInDay;
	this->timeRuleType = timeType;
	this->dayOfMonth = 0x0;
	return;

}
// .method public constructor <init>(IIIZII)V
android::icu::util::DateTimeRule::DateTimeRule(int month,int dayOfMonth,int dayOfWeek,bool after,int millisInDay,int timeType)
{
	
	int cVar0;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "after"    # Z
	//    .param p5, "millisInDay"    # I
	//    .param p6, "timeType"    # I
	// 270    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( !(after) )  
		goto label_cond_16;
	cVar0 = 0x2;
label_goto_6:
	this->dateRuleType = cVar0;
	this->month = month;
	this->dayOfMonth = dayOfMonth;
	this->dayOfWeek = dayOfWeek;
	this->millisInDay = millisInDay;
	this->timeRuleType = timeType;
	this->weekInMonth = 0x0;
	return;
	// 303    .line 145
label_cond_16:
	cVar0 = 0x3;
	goto label_goto_6;

}
// .method public getDateRuleType()I
int android::icu::util::DateTimeRule::getDateRuleType()
{
	
	return this->dateRuleType;

}
// .method public getRuleDayOfMonth()I
int android::icu::util::DateTimeRule::getRuleDayOfMonth()
{
	
	return this->dayOfMonth;

}
// .method public getRuleDayOfWeek()I
int android::icu::util::DateTimeRule::getRuleDayOfWeek()
{
	
	return this->dayOfWeek;

}
// .method public getRuleMillisInDay()I
int android::icu::util::DateTimeRule::getRuleMillisInDay()
{
	
	return this->millisInDay;

}
// .method public getRuleMonth()I
int android::icu::util::DateTimeRule::getRuleMonth()
{
	
	return this->month;

}
// .method public getRuleWeekInMonth()I
int android::icu::util::DateTimeRule::getRuleWeekInMonth()
{
	
	return this->weekInMonth;

}
// .method public getTimeRuleType()I
int android::icu::util::DateTimeRule::getTimeRuleType()
{
	
	return this->timeRuleType;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::DateTimeRule::toString()
{
	
	int time;
	int millis;
	int secs;
	int mins;
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .local v4, "sDate":Ljava/lang/String;
	//    .local v5, "sTimeRuleType":Ljava/lang/String;
	// switch
	{
	auto item = ( this->dateRuleType );
	if (item == 0) goto label_pswitch_8b;
	if (item == 1) goto label_pswitch_93;
	if (item == 2) goto label_pswitch_b2;
	if (item == 3) goto label_pswitch_d8;
	}
	//    .end local v4    # "sDate":Ljava/lang/String;
label_goto_7:
	// switch
	{
	auto item = ( this->timeRuleType );
	if (item == 0) goto label_pswitch_fe;
	if (item == 1) goto label_pswitch_103;
	if (item == 2) goto label_pswitch_108;
	}
	//    .end local v5    # "sTimeRuleType":Ljava/lang/String;
label_goto_c:
	time = this->millisInDay;
	//    .local v7, "time":I
	millis = ( time % 0x3e8);
	//    .local v2, "millis":I
	time = ( time / 0x3e8);
	secs = ( time % 0x3c);
	//    .local v6, "secs":I
	time = ( time / 0x3c);
	mins = ( time % 0x3c);
	//    .local v3, "mins":I
	//    .local v1, "hours":I
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("month=")));
	buf->append(android::icu::util::DateTimeRule::MONSTR[this->month]);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", date=")));
	buf->append(sDate);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", time=")));
	buf->append(( time / 0x3c));
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	buf->append(( mins / 0xa));
	buf->append(( mins % 0xa));
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	buf->append(( secs / 0xa));
	buf->append(( secs % 0xa));
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")));
	buf->append(( millis / 0x64));
	buf->append(( ( millis / 0xa) % 0xa));
	buf->append(( millis % 0xa));
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(")));
	buf->append(sTimeRuleType);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")));
	return buf->toString();
	// 542    .line 240
	// 543    .end local v0    # "buf":Ljava/lang/StringBuilder;
	// 544    .end local v1    # "hours":I
	// 545    .end local v2    # "millis":I
	// 546    .end local v3    # "mins":I
	// 547    .end local v6    # "secs":I
	// 548    .end local v7    # "time":I
	// 549    .restart local v4    # "sDate":Ljava/lang/String;
	// 550    .restart local v5    # "sTimeRuleType":Ljava/lang/String;
label_pswitch_8b:
	//    .local v4, "sDate":Ljava/lang/String;
	goto label_goto_7;
	// 561    .line 243
	// 562    .local v4, "sDate":Ljava/lang/String;
label_pswitch_93:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "sDate":Ljava/lang/String;
	goto label_goto_7;
	// 595    .line 246
	// 596    .local v4, "sDate":Ljava/lang/String;
label_pswitch_b2:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "sDate":Ljava/lang/String;
	goto label_goto_7;
	// 635    .line 249
	// 636    .local v4, "sDate":Ljava/lang/String;
label_pswitch_d8:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "sDate":Ljava/lang/String;
	goto label_goto_7;
	// 675    .line 255
	// 676    .end local v4    # "sDate":Ljava/lang/String;
label_pswitch_fe:
	//    .local v5, "sTimeRuleType":Ljava/lang/String;
	goto label_goto_c;
	// 683    .line 258
	// 684    .local v5, "sTimeRuleType":Ljava/lang/String;
label_pswitch_103:
	//    .local v5, "sTimeRuleType":Ljava/lang/String;
	goto label_goto_c;
	// 691    .line 261
	// 692    .local v5, "sTimeRuleType":Ljava/lang/String;
label_pswitch_108:
	//    .local v5, "sTimeRuleType":Ljava/lang/String;
	goto label_goto_c;
	// 699    .line 238
	// 700    nop
	// 702    :pswitch_data_10e
	// 703    .packed-switch 0x0
	// 704        :pswitch_8b
	// 705        :pswitch_93
	// 706        :pswitch_b2
	// 707        :pswitch_d8
	// 708    .end packed-switch
	// 710    .line 253
	// 711    :pswitch_data_11a
	// 712    .packed-switch 0x0
	// 713        :pswitch_fe
	// 714        :pswitch_103
	// 715        :pswitch_108
	// 716    .end packed-switch

}


