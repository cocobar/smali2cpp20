// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\SimpleDateRule.smali
#include "java2ctype.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.GregorianCalendar.h"
#include "android.icu.util.SimpleDateRule.h"
#include "java.util.Date.h"

// .method public constructor <init>(II)V
android::icu::util::SimpleDateRule::SimpleDateRule(int month,int dayOfMonth)
{
	
	std::shared_ptr<android::icu::util::GregorianCalendar> cVar0;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	// 027    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::util::GregorianCalendar>();
	this->calendar = cVar0;
	this->month = month;
	this->dayOfMonth = dayOfMonth;
	this->dayOfWeek = 0x0;
	return;

}
// .method public constructor <init>(IIIZ)V
android::icu::util::SimpleDateRule::SimpleDateRule(int month,int dayOfMonth,int dayOfWeek,bool after)
{
	
	std::shared_ptr<android::icu::util::GregorianCalendar> cVar0;
	int dayOfWeek;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "after"    # Z
	// 060    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::util::GregorianCalendar>();
	this->calendar = cVar0;
	this->month = month;
	this->dayOfMonth = dayOfMonth;
	if ( !(after) )  
		goto label_cond_13;
	//    .end local p3    # "dayOfWeek":I
label_goto_10:
	this->dayOfWeek = dayOfWeek;
	return;
	// 085    .line 63
	// 086    .restart local p3    # "dayOfWeek":I
label_cond_13:
	dayOfWeek = (0 - dayOfWeek);
	goto label_goto_10;

}
// .method constructor <init>(IILandroid/icu/util/Calendar;)V
android::icu::util::SimpleDateRule::SimpleDateRule(int month,int dayOfMonth,std::shared_ptr<android::icu::util::Calendar> cal)
{
	
	std::shared_ptr<android::icu::util::GregorianCalendar> cVar0;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "cal"    # Landroid/icu/util/Calendar;
	// 101    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::util::GregorianCalendar>();
	this->calendar = cVar0;
	this->month = month;
	this->dayOfMonth = dayOfMonth;
	this->dayOfWeek = 0x0;
	this->calendar = cal;
	return;

}
// .method private computeInYear(ILandroid/icu/util/Calendar;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::SimpleDateRule::computeInYear(int year,std::shared_ptr<android::icu::util::Calendar> c)
{
	
	int weekday;
	int delta;
	
	//    .param p1, "year"    # I
	//    .param p2, "c"    # Landroid/icu/util/Calendar;
	c->monitor_enter();
	try {
	//label_try_start_1:
	c->clear();
	c->set(0x0, c->getMaximum(0x0));
	c->set(0x1, year);
	c->set(0x2, this->month);
	c->set(0x5, this->dayOfMonth);
	if ( !(this->dayOfWeek) )  
		goto label_cond_3d;
	c->setTime(c->getTime());
	weekday = c->get(0x7);
	//    .local v1, "weekday":I
	delta = 0x0;
	//    .local v0, "delta":I
	if ( this->dayOfWeek <= 0 )
		goto label_cond_43;
	delta = ( ( (this->dayOfWeek -  weekday) + 0x7) % 0x7);
label_goto_39:
	c->add(0x5, delta);
	//    .end local v0    # "delta":I
	//    .end local v1    # "weekday":I
label_cond_3d:
	//label_try_end_40:
	}
	catch (...){
		goto label_catchall_4c;
	}
	//    .catchall {:try_start_1 .. :try_end_40} :catchall_4c
	c->monitor_exit();
	return c->getTime();
	// 229    .line 201
	// 230    .restart local v0    # "delta":I
	// 231    .restart local v1    # "weekday":I
label_cond_43:
	try {
	//label_try_start_43:
	//label_try_end_4a:
	}
	catch (...){
		goto label_catchall_4c;
	}
	//    .catchall {:try_start_43 .. :try_end_4a} :catchall_4c
	delta = (0 - ( ( (this->dayOfWeek +  weekday) + 0x7) % 0x7));
	goto label_goto_39;
	// 248    .line 176
	// 249    .end local v0    # "delta":I
	// 250    .end local v1    # "weekday":I
label_catchall_4c:
	// move-exception
	
	c->monitor_exit();
	// throw
	throw;

}
// .method private doFirstBetween(Ljava/util/Date;Ljava/util/Date;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::SimpleDateRule::doFirstBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end)
{
	
	std::shared_ptr<android::icu::util::Calendar> c;
	int year;
	int mon;
	std::shared_ptr<java::util::Date> result;
	
	//    .param p1, "start"    # Ljava/util/Date;
	//    .param p2, "end"    # Ljava/util/Date;
	c = this->calendar;
	//    .local v0, "c":Landroid/icu/util/Calendar;
	c->monitor_enter();
	try {
	//label_try_start_4:
	c->setTime(start);
	year = c->get(0x1);
	//    .local v3, "year":I
	mon = c->get(0x2);
	//    .local v1, "mon":I
	if ( mon <= this->month )
		goto label_cond_17;
	year = ( year + 0x1);
label_cond_17:
	result = this->computeInYear(year, c);
	//    .local v2, "result":Ljava/util/Date;
	if ( mon != this->month )
		goto label_cond_2b;
	if ( !(result->before(start)) )  
		goto label_cond_2b;
	result = this->computeInYear(( year + 0x1), c);
label_cond_2b:
	if ( !(end) )  
		goto label_cond_35;
	//label_try_end_30:
	}
	catch (...){
		goto label_catchall_37;
	}
	//    .catchall {:try_start_4 .. :try_end_30} :catchall_37
	if ( !(result->after(end)) )  
		goto label_cond_35;
	c->monitor_exit();
	return 0x0;
label_cond_35:
	c->monitor_exit();
	return result;
	// 350    .line 146
	// 351    .end local v1    # "mon":I
	// 352    .end local v2    # "result":Ljava/util/Date;
	// 353    .end local v3    # "year":I
label_catchall_37:
	// move-exception
	
	c->monitor_exit();
	// throw
	throw;

}
// .method public firstAfter(Ljava/util/Date;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::SimpleDateRule::firstAfter(std::shared_ptr<java::util::Date> start)
{
	
	//    .param p1, "start"    # Ljava/util/Date;
	return this->doFirstBetween(start, 0x0);

}
// .method public firstBetween(Ljava/util/Date;Ljava/util/Date;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::SimpleDateRule::firstBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end)
{
	
	//    .param p1, "start"    # Ljava/util/Date;
	//    .param p2, "end"    # Ljava/util/Date;
	return this->doFirstBetween(start, end);

}
// .method public isBetween(Ljava/util/Date;Ljava/util/Date;)Z
bool android::icu::util::SimpleDateRule::isBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end)
{
	
	bool cVar0;
	
	//    .param p1, "start"    # Ljava/util/Date;
	//    .param p2, "end"    # Ljava/util/Date;
	if ( !(this->firstBetween(start, end)) )  
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method public isOn(Ljava/util/Date;)Z
bool android::icu::util::SimpleDateRule::isOn(std::shared_ptr<java::util::Date> date)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::util::Calendar> c;
	
	//    .param p1, "date"    # Ljava/util/Date;
	cVar0 = 0x1;
	c = this->calendar;
	//    .local v0, "c":Landroid/icu/util/Calendar;
	c->monitor_enter();
	try {
	//label_try_start_4:
	c->setTime(date);
	//    .local v1, "dayOfYear":I
	c->setTime(this->computeInYear(c->get(0x1), c));
	//label_try_end_1c:
	}
	catch (...){
		goto label_catchall_23;
	}
	//    .catchall {:try_start_4 .. :try_end_1c} :catchall_23
	if ( c->get(0x6) != c->get(0x6) )
		goto label_cond_21;
label_goto_1f:
	c->monitor_exit();
	return cVar0;
label_cond_21:
	cVar0 = 0x0;
	goto label_goto_1f;
	// 477    .line 118
	// 478    .end local v1    # "dayOfYear":I
label_catchall_23:
	// move-exception
	
	c->monitor_exit();
	// throw
	throw;

}


