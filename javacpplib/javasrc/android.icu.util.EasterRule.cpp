// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\EasterRule.smali
#include "java2ctype.h"
#include "android.icu.util.EasterRule.h"
#include "android.icu.util.GregorianCalendar.h"
#include "java.util.Date.h"

static android::icu::util::EasterRule::gregorian;
static android::icu::util::EasterRule::orthodox;
// .method static constructor <clinit>()V
void android::icu::util::EasterRule::static_cinit()
{
	
	std::shared_ptr<android::icu::util::GregorianCalendar> cVar0;
	std::shared_ptr<android::icu::util::GregorianCalendar> cVar1;
	
	cVar0 = std::make_shared<android::icu::util::GregorianCalendar>();
	android::icu::util::EasterRule::gregorian = cVar0;
	cVar1 = std::make_shared<android::icu::util::GregorianCalendar>();
	android::icu::util::EasterRule::orthodox = cVar1;
	return;

}
// .method public constructor <init>(IZ)V
android::icu::util::EasterRule::EasterRule(int daysAfterEaster,bool isOrthodox)
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	//    .param p1, "daysAfterEaster"    # I
	//    .param p2, "isOrthodox"    # Z
	// 051    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->calendar = android::icu::util::EasterRule::gregorian;
	this->daysAfterEaster = daysAfterEaster;
	if ( !(isOrthodox) )  
		goto label_cond_1e;
	cVar0 = std::make_shared<java::util::Date>(0x7fffffffffffffffL);
	android::icu::util::EasterRule::orthodox->setGregorianChange(cVar0);
	this->calendar = android::icu::util::EasterRule::orthodox;
label_cond_1e:
	return;

}
// .method private computeInYear(Ljava/util/Date;Landroid/icu/util/GregorianCalendar;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::EasterRule::computeInYear(std::shared_ptr<java::util::Date> date,std::shared_ptr<android::icu::util::GregorianCalendar> cVar0)
{
	
	std::shared_ptr<android::icu::util::GregorianCalendar> cVar0;
	int year;
	int g;
	int j;
	int c;
	int h;
	int i;
	int l;
	int m;
	
	//    .param p1, "date"    # Ljava/util/Date;
	//    .param p2, "cal"    # Landroid/icu/util/GregorianCalendar;
	if ( cVar0 )     
		goto label_cond_4;
	cVar0 = this->calendar;
label_cond_4:
	cVar0->monitor_enter();
	try {
	//label_try_start_5:
	cVar0->setTime(date);
	year = cVar0->get(0x1);
	//    .local v8, "year":I
	g = ( year % 0x13);
	//    .local v2, "g":I
	0x0;
	//    .local v4, "i":I
	j = 0x0;
	//    .local v5, "j":I
	if ( !(cVar0->getTime()->after(cVar0->getGregorianChange())) )  
		goto label_cond_89;
	c = ( year / 0x64);
	//    .local v0, "c":I
	h = ( ( (((c - ( c / 0x4)) -  ( ( ( c * 0x8) + 0xd) / 0x19)) +  ( g * 0x13)) + 0xf) % 0x1e);
	//    .local v3, "h":I
	i = (h - (( h / 0x1c) *  ( ((( h / 0x1c) *  (0x1d / ( h + 0x1))) *  ( ( g - 0x15) / 0xb)) - 0x1)));
	j = ( ((( ((( year / 0x4) +  year) +  i) + 0x2) -  c) +  ( c / 0x4)) % 0x7);
	//    .end local v0    # "c":I
	//    .end local v3    # "h":I
label_goto_54:
	l = (i - j);
	//    .local v6, "l":I
	m = ( ( ( l + 0x28) / 0x2c) + 0x3);
	//    .local v7, "m":I
	//    .local v1, "d":I
	cVar0->clear();
	cVar0->set(0x0, 0x1);
	cVar0->set(0x1, year);
	cVar0->set(0x2, ( m + -0x1));
	cVar0->set(0x5, (( l + 0x1c) - ( ( m / 0x4) * 0x1f)));
	cVar0->getTime();
	cVar0->add(0x5, this->daysAfterEaster);
	//label_try_end_86:
	}
	catch (...){
		goto label_catchall_96;
	}
	//    .catchall {:try_start_5 .. :try_end_86} :catchall_96
	cVar0->monitor_exit();
	return cVar0->getTime();
	// 280    .line 258
	// 281    .end local v1    # "d":I
	// 282    .end local v6    # "l":I
	// 283    .end local v7    # "m":I
label_cond_89:
	try {
	//label_try_start_8d:
	i = ( ( ( g * 0x13) + 0xf) % 0x1e);
	j = ( ((( year / 0x4) +  year) +  i) % 0x7);
	//label_try_end_95:
	}
	catch (...){
		goto label_catchall_96;
	}
	//    .catchall {:try_start_8d .. :try_end_95} :catchall_96
	goto label_goto_54;
	// 305    .line 239
	// 306    .end local v2    # "g":I
	// 307    .end local v4    # "i":I
	// 308    .end local v5    # "j":I
	// 309    .end local v8    # "year":I
label_catchall_96:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method private doFirstBetween(Ljava/util/Date;Ljava/util/Date;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::EasterRule::doFirstBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end)
{
	
	std::shared_ptr<android::icu::util::GregorianCalendar> cVar0;
	std::shared_ptr<java::util::Date> result;
	
	//    .param p1, "start"    # Ljava/util/Date;
	//    .param p2, "end"    # Ljava/util/Date;
	cVar0 = this->calendar;
	cVar0->monitor_enter();
	try {
	//label_try_start_4:
	result = this->computeInYear(start, this->calendar);
	//    .local v0, "result":Ljava/util/Date;
	if ( !(result->before(start)) )  
		goto label_cond_2e;
	this->calendar->setTime(start);
	this->calendar->get(0x1);
	this->calendar->add(0x1, 0x1);
	result = this->computeInYear(this->calendar->getTime(), this->calendar);
label_cond_2e:
	if ( !(end) )  
		goto label_cond_3a;
	//label_try_end_33:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_4 .. :try_end_33} :catchall_3c
	if ( !(( result->before(end) ^ 0x1)) )  
		goto label_cond_3a;
	cVar0->monitor_exit();
	return 0x0;
label_cond_3a:
	cVar0->monitor_exit();
	return result;
	// 406    .line 197
	// 407    .end local v0    # "result":Ljava/util/Date;
label_catchall_3c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public firstAfter(Ljava/util/Date;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::EasterRule::firstAfter(std::shared_ptr<java::util::Date> start)
{
	
	//    .param p1, "start"    # Ljava/util/Date;
	return this->doFirstBetween(start, 0x0);

}
// .method public firstBetween(Ljava/util/Date;Ljava/util/Date;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::EasterRule::firstBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end)
{
	
	//    .param p1, "start"    # Ljava/util/Date;
	//    .param p2, "end"    # Ljava/util/Date;
	return this->doFirstBetween(start, end);

}
// .method public isBetween(Ljava/util/Date;Ljava/util/Date;)Z
bool android::icu::util::EasterRule::isBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end)
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
bool android::icu::util::EasterRule::isOn(std::shared_ptr<java::util::Date> date)
{
	
	std::shared_ptr<android::icu::util::GregorianCalendar> cVar0;
	bool cVar1;
	
	//    .param p1, "date"    # Ljava/util/Date;
	cVar0 = this->calendar;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	this->calendar->setTime(date);
	//    .local v0, "dayOfYear":I
	this->calendar->setTime(this->computeInYear(this->calendar->getTime(), this->calendar));
	//label_try_end_26:
	}
	catch (...){
		goto label_catchall_2e;
	}
	//    .catchall {:try_start_3 .. :try_end_26} :catchall_2e
	if ( this->calendar->get(0x6) != this->calendar->get(0x6) )
		goto label_cond_2c;
	cVar1 = 0x1;
label_goto_2a:
	cVar0->monitor_exit();
	return cVar1;
label_cond_2c:
	cVar1 = 0x0;
	goto label_goto_2a;
	// 539    .line 173
	// 540    .end local v0    # "dayOfYear":I
label_catchall_2e:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}


