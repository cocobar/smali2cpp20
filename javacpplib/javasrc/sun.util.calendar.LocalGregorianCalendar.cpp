// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\LocalGregorianCalendar.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.InternalError.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.util.ArrayList.h"
#include "java.util.Properties.h"
#include "java.util.StringTokenizer.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.CalendarSystem.h"
#include "sun.util.calendar.CalendarUtils.h"
#include "sun.util.calendar.Era.h"
#include "sun.util.calendar.LocalGregorianCalendar_S_Date.h"
#include "sun.util.calendar.LocalGregorianCalendar.h"

// .method private constructor <init>(Ljava/lang/String;[Lsun/util/calendar/Era;)V
sun::util::calendar::LocalGregorianCalendar::LocalGregorianCalendar(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<sun::util::calendar::Era>> eras)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "eras"    # [Lsun/util/calendar/Era;
	// 028    invoke-direct {p0}, Lsun/util/calendar/BaseCalendar;-><init>()V
	this->name = name;
	this->eras = eras;
	this->setEras(eras);
	return;

}
// .method private adjustYear(Lsun/util/calendar/LocalGregorianCalendar$Date;JI)Lsun/util/calendar/LocalGregorianCalendar$Date;
std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> sun::util::calendar::LocalGregorianCalendar::adjustYear(std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> ldate,long long millis,int zoneOffset)
{
	
	std::shared_ptr<java::util::TimeZone> cVar0;
	int i;
	std::shared_ptr<sun::util::calendar::Era> era;
	auto since;
	
	//    .param p1, "ldate"    # Lsun/util/calendar/LocalGregorianCalendar$Date;
	//    .param p2, "millis"    # J
	//    .param p4, "zoneOffset"    # I
	cVar0 = 0x0;
	i = ( this->eras->size() + -0x1);
	//    .local v1, "i":I
label_goto_6:
	if ( i < 0 ) 
		goto label_cond_31;
	era = this->eras[i];
	//    .local v0, "era":Lsun/util/calendar/Era;
	since = era->getSince(cVar0);
	//    .local v2, "since":J
	if ( !(era->isLocalTime()) )  
		goto label_cond_18;
label_cond_18:
	if ( (millis > since) < 0 ) 
		goto label_cond_42;
	ldate->setLocalEra(era);
	//    .local v4, "y":I
	ldate->setLocalYear(( (ldate->getNormalizedYear() -  era->getSinceDate()->getYear()) + 0x1));
	//    .end local v0    # "era":Lsun/util/calendar/Era;
	//    .end local v2    # "since":J
	//    .end local v4    # "y":I
label_cond_31:
	if ( i >= 0 )
		goto label_cond_3d;
	ldate->setLocalEra(cVar0);
	ldate->setLocalYear(ldate->getNormalizedYear());
label_cond_3d:
	ldate->setNormalized(0x1);
	return ldate;
	// 143    .line 215
	// 144    .restart local v0    # "era":Lsun/util/calendar/Era;
	// 145    .restart local v2    # "since":J
label_cond_42:
	i = ( i + -0x1);
	goto label_goto_6;

}
// .method static getLocalGregorianCalendar(Ljava/lang/String;)Lsun/util/calendar/LocalGregorianCalendar;
std::shared_ptr<sun::util::calendar::LocalGregorianCalendar> sun::util::calendar::LocalGregorianCalendar::getLocalGregorianCalendar(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::InternalError> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	auto props;
	std::shared_ptr<java::util::ArrayList> eras;
	std::shared_ptr<java::util::StringTokenizer> eraTokens;
	std::shared_ptr<java::util::StringTokenizer> itemTokens;
	auto item;
	int index;
	auto key;
	std::shared_ptr<java::lang::String> value;
	std::shared_ptr<java::lang::RuntimeException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<sun::util::calendar::Era> era;
	std::shared_ptr<java::lang::RuntimeException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared<std::vector<std::vector<sun::util::calendar::Era>>> eraArray;
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar> cVar6;
	
	//    .param p0, "name"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	//label_try_end_3:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_3} :catch_2e
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_3} :catch_2e
	//    .local v4, "calendarProps":Ljava/util/Properties;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	props = sun::util::calendar::CalendarSystem::getCalendarProperties({const[class].FS-Param})->getProperty(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar.")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".eras")))->toString());
	//    .local v20, "props":Ljava/lang/String;
	if ( props )     
		goto label_cond_37;
	return 0x0;
	// 211    .line 124
	// 212    .end local v4    # "calendarProps":Ljava/util/Properties;
	// 213    .end local v20    # "props":Ljava/lang/String;
label_catch_2e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v11, "e":Ljava/lang/Exception;
	var23 = cVar1(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 227    .line 132
	// 228    .end local v11    # "e":Ljava/lang/Exception;
	// 229    .restart local v4    # "calendarProps":Ljava/util/Properties;
	// 230    .restart local v20    # "props":Ljava/lang/String;
label_cond_37:
	eras = std::make_shared<java::util::ArrayList>();
	//    .local v14, "eras":Ljava/util/List;, "Ljava/util/List<Lsun/util/calendar/Era;>;"
	eraTokens = std::make_shared<java::util::StringTokenizer>(props, std::make_shared<java::lang::String>(std::make_shared<char[]>(";")));
	//    .local v13, "eraTokens":Ljava/util/StringTokenizer;
label_goto_48:
	if ( !(eraTokens->hasMoreTokens()) )  
		goto label_cond_116;
	//    .local v18, "items":Ljava/lang/String;
	var40 = itemTokens(eraTokens->nextToken()->trim(), std::make_shared<java::lang::String>(std::make_shared<char[]>(",")));
	//    .local v17, "itemTokens":Ljava/util/StringTokenizer;
	//    .local v6, "eraName":Ljava/lang/String;
	//    .local v10, "localTime":Z
	//    .local v8, "since":J
	//    .end local v6    # "eraName":Ljava/lang/String;
label_goto_69:
	if ( !(itemTokens->hasMoreTokens()) )  
		goto label_cond_10c;
	item = itemTokens->nextToken();
	//    .local v16, "item":Ljava/lang/String;
	index = item->indexOf(0x3d);
	//    .local v15, "index":I
	if ( index != -0x1 )
		goto label_cond_86;
	return 0x0;
	// 335    .line 149
label_cond_86:
	key = item->substring(0x0, index);
	//    .local v19, "key":Ljava/lang/String;
	value = item->substring(( index + 0x1));
	//    .local v21, "value":Ljava/lang/String;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("name"))->equals(key)) )  
		goto label_cond_aa;
	value;
	//    .local v6, "eraName":Ljava/lang/String;
	goto label_goto_69;
	// 379    .line 153
	// 380    .end local v6    # "eraName":Ljava/lang/String;
label_cond_aa:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("since"))->equals(key)) )  
		goto label_cond_dd;
	if ( !(value->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("u")))) )  
		goto label_cond_d8;
	0x0;
	java::lang::Long::parseLong(value->substring(0x0, ( value->length() + -0x1)));
	goto label_goto_69;
	// 431    .line 158
label_cond_d8:
	java::lang::Long::parseLong(value);
	goto label_goto_69;
	// 439    .line 160
label_cond_dd:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("abbr"))->equals(key)) )  
		goto label_cond_ee;
	value;
	//    .local v7, "abbr":Ljava/lang/String;
	goto label_goto_69;
	// 459    .line 163
	// 460    .end local v7    # "abbr":Ljava/lang/String;
label_cond_ee:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::RuntimeException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown key word: ")))->append(key)->toString());
	// throw
	throw cVar2;
	// 490    .line 166
	// 491    .end local v15    # "index":I
	// 492    .end local v16    # "item":Ljava/lang/String;
	// 493    .end local v19    # "key":Ljava/lang/String;
	// 494    .end local v21    # "value":Ljava/lang/String;
label_cond_10c:
	era = std::make_shared<sun::util::calendar::Era>(0x0, 0x0, 0x0, 0x1);
	//    .local v5, "era":Lsun/util/calendar/Era;
	eras->add(era);
	goto label_goto_48;
	// 506    .line 171
	// 507    .end local v5    # "era":Lsun/util/calendar/Era;
	// 508    .end local v8    # "since":J
	// 509    .end local v10    # "localTime":Z
	// 510    .end local v17    # "itemTokens":Ljava/util/StringTokenizer;
	// 511    .end local v18    # "items":Ljava/lang/String;
label_cond_116:
	if ( !(eras->isEmpty()) )  
		goto label_cond_13a;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::RuntimeException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No eras for ")))->append(name)->toString());
	// throw
	throw cVar4;
	// 548    .line 175
label_cond_13a:
	eraArray = std::make_shared<std::vector<std::vector<sun::util::calendar::Era>>>(eras->size());
	//    .local v12, "eraArray":[Lsun/util/calendar/Era;
	eras->toArray(eraArray);
	var141 = cVar6(name, eraArray);
	return cVar6;

}
// .method private validateEra(Lsun/util/calendar/Era;)Z
bool sun::util::calendar::LocalGregorianCalendar::validateEra(std::shared_ptr<sun::util::calendar::Era> era)
{
	
	int i;
	
	//    .param p1, "era"    # Lsun/util/calendar/Era;
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= this->eras->size() )
		goto label_cond_11;
	if ( era != this->eras[i] )
		goto label_cond_e;
	return 0x1;
	// 602    .line 272
label_cond_e:
	i = ( i + 0x1);
	goto label_goto_1;
	// 608    .line 277
label_cond_11:
	return 0x0;

}
// .method public getCalendarDate()Lsun/util/calendar/LocalGregorianCalendar$Date;
std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> sun::util::calendar::LocalGregorianCalendar::getCalendarDate()
{
	
	return this->getCalendarDate(java::lang::System::currentTimeMillis({const[class].FS-Param}), this->newCalendarDate());

}
// .method public getCalendarDate(J)Lsun/util/calendar/LocalGregorianCalendar$Date;
std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> sun::util::calendar::LocalGregorianCalendar::getCalendarDate(long long millis)
{
	
	//    .param p1, "millis"    # J
	return this->getCalendarDate(millis, this->newCalendarDate());

}
// .method public getCalendarDate(JLjava/util/TimeZone;)Lsun/util/calendar/LocalGregorianCalendar$Date;
std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> sun::util::calendar::LocalGregorianCalendar::getCalendarDate(long long millis,std::shared_ptr<java::util::TimeZone> zone)
{
	
	//    .param p1, "millis"    # J
	//    .param p3, "zone"    # Ljava/util/TimeZone;
	return this->getCalendarDate(millis, this->newCalendarDate(zone));

}
// .method public getCalendarDate(JLsun/util/calendar/CalendarDate;)Lsun/util/calendar/LocalGregorianCalendar$Date;
std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> sun::util::calendar::LocalGregorianCalendar::getCalendarDate(long long millis,std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> ldate;
	
	//    .param p1, "millis"    # J
	//    .param p3, "date"    # Lsun/util/calendar/CalendarDate;
	ldate = this->getCalendarDate(millis, date);
	ldate->checkCast("sun::util::calendar::LocalGregorianCalendar_S_Date");
	//    .local v0, "ldate":Lsun/util/calendar/LocalGregorianCalendar$Date;
	return this->adjustYear(ldate, millis, ldate->getZoneOffset());

}
// .method public getCalendarDateFromFixedDate(Lsun/util/calendar/CalendarDate;J)V
void sun::util::calendar::LocalGregorianCalendar::getCalendarDateFromFixedDate(std::shared_ptr<sun::util::calendar::CalendarDate> date,long long fixedDate)
{
	
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> ldate;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	//    .param p2, "fixedDate"    # J
	ldate = date;
	ldate->checkCast("sun::util::calendar::LocalGregorianCalendar_S_Date");
	//    .local v0, "ldate":Lsun/util/calendar/LocalGregorianCalendar$Date;
	this->getCalendarDateFromFixedDate(ldate, fixedDate);
	this->adjustYear(ldate, ((fixedDate - 0xaf93b) *  0x5265c00), 0x0);
	return;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::calendar::LocalGregorianCalendar::getName()
{
	
	return this->name;

}
// .method public isLeapYear(I)Z
bool sun::util::calendar::LocalGregorianCalendar::isLeapYear(int gregorianYear)
{
	
	//    .param p1, "gregorianYear"    # I
	return sun::util::calendar::CalendarUtils::isGregorianLeapYear(gregorianYear);

}
// .method public isLeapYear(Lsun/util/calendar/Era;I)Z
bool sun::util::calendar::LocalGregorianCalendar::isLeapYear(std::shared_ptr<sun::util::calendar::Era> era,int year)
{
	
	//    .param p1, "era"    # Lsun/util/calendar/Era;
	//    .param p2, "year"    # I
	if ( era )     
		goto label_cond_7;
	return this->isLeapYear(year);
	// 817    .line 385
label_cond_7:
	//    .local v0, "gyear":I
	return this->isLeapYear(( (era->getSinceDate()->getYear() +  year) + -0x1));

}
// .method public newCalendarDate()Lsun/util/calendar/LocalGregorianCalendar$Date;
std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> sun::util::calendar::LocalGregorianCalendar::newCalendarDate()
{
	
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> cVar0;
	
	cVar0 = std::make_shared<sun::util::calendar::LocalGregorianCalendar_S_Date>();
	return cVar0;

}
// .method public newCalendarDate(Ljava/util/TimeZone;)Lsun/util/calendar/LocalGregorianCalendar$Date;
std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> sun::util::calendar::LocalGregorianCalendar::newCalendarDate(std::shared_ptr<java::util::TimeZone> zone)
{
	
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> cVar0;
	
	//    .param p1, "zone"    # Ljava/util/TimeZone;
	cVar0 = std::make_shared<sun::util::calendar::LocalGregorianCalendar_S_Date>(zone);
	return cVar0;

}
// .method public normalize(Lsun/util/calendar/CalendarDate;)Z
bool sun::util::calendar::LocalGregorianCalendar::normalize(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> ldate;
	int hasMillis;
	int year;
	int i;
	std::shared_ptr<sun::util::calendar::Era> era;
	std::shared_ptr<sun::util::calendar::CalendarDate> sinceDate;
	int sinceYear;
	int month;
	int sinceMonth;
	int day;
	int sinceDay;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	if ( !(date->isNormalized()) )  
		goto label_cond_9;
	return 0x1;
	// 906    .line 286
label_cond_9:
	this->normalizeYear(date);
	ldate = date;
	ldate->checkCast("sun::util::calendar::LocalGregorianCalendar_S_Date");
	//    .local v6, "ldate":Lsun/util/calendar/LocalGregorianCalendar$Date;
	this->normalize(ldate);
	hasMillis = 0x0;
	//    .local v4, "hasMillis":Z
	//    .local v8, "millis":J
	year = ldate->getNormalizedYear();
	//    .local v21, "year":I
	0x0;
	//    .local v3, "era":Lsun/util/calendar/Era;
	i = ( this->eras->size() + -0x1);
	//    .end local v3    # "era":Lsun/util/calendar/Era;
	//    .local v5, "i":I
label_goto_2a:
	if ( i < 0 ) 
		goto label_cond_46;
	era = this->eras[i];
	//    .local v3, "era":Lsun/util/calendar/Era;
	if ( !(era->isLocalTime()) )  
		goto label_cond_95;
	sinceDate = era->getSinceDate();
	//    .local v12, "sinceDate":Lsun/util/calendar/CalendarDate;
	sinceYear = sinceDate->getYear();
	//    .local v15, "sinceYear":I
	if ( year <= sinceYear )
		goto label_cond_6a;
	//    .end local v3    # "era":Lsun/util/calendar/Era;
	//    .end local v12    # "sinceDate":Lsun/util/calendar/CalendarDate;
	//    .end local v15    # "sinceYear":I
label_cond_46:
label_goto_46:
	if ( i < 0 ) 
		goto label_cond_ae;
	ldate->setLocalEra(era);
	//    .local v20, "y":I
	ldate->setLocalYear(( (ldate->getNormalizedYear() - era->getSinceDate()->getYear()) + 0x1));
	//    .end local v20    # "y":I
label_goto_60:
	ldate->setNormalized(0x1);
	return 0x1;
	// 1041    .line 305
	// 1042    .restart local v3    # "era":Lsun/util/calendar/Era;
	// 1043    .restart local v12    # "sinceDate":Lsun/util/calendar/CalendarDate;
	// 1044    .restart local v15    # "sinceYear":I
label_cond_6a:
	if ( year != sinceYear )
		goto label_cond_aa;
	month = ldate->getMonth();
	//    .local v7, "month":I
	sinceMonth = sinceDate->getMonth();
	//    .local v14, "sinceMonth":I
	if ( month >  sinceMonth )
		goto label_cond_46;
	if ( month != sinceMonth )
		goto label_cond_aa;
	day = ldate->getDayOfMonth();
	//    .local v2, "day":I
	sinceDay = sinceDate->getDayOfMonth();
	//    .local v13, "sinceDay":I
	if ( day >  sinceDay )
		goto label_cond_46;
	if ( day != sinceDay )
		goto label_cond_aa;
	//    .local v18, "timeOfDay":J
	//    .local v16, "sinceTimeOfDay":J
	if ( (ldate->getTimeOfDay() > sinceDate->getTimeOfDay()) >= 0 )
		goto label_cond_46;
	i = ( i + -0x1);
	goto label_goto_46;
	// 1109    .line 329
	// 1110    .end local v2    # "day":I
	// 1111    .end local v7    # "month":I
	// 1112    .end local v12    # "sinceDate":Lsun/util/calendar/CalendarDate;
	// 1113    .end local v13    # "sinceDay":I
	// 1114    .end local v14    # "sinceMonth":I
	// 1115    .end local v15    # "sinceYear":I
	// 1116    .end local v16    # "sinceTimeOfDay":J
	// 1117    .end local v18    # "timeOfDay":J
label_cond_95:
	if ( hasMillis )     
		goto label_cond_9c;
	hasMillis = 0x1;
label_cond_9c:
	//    .local v10, "since":J
	if ( (0x0 > era->getSince(date->getZone())) >= 0 )
		goto label_cond_46;
	//    .end local v10    # "since":J
label_cond_aa:
	i = ( i + -0x1);
	goto label_goto_2a;
	// 1154    .line 346
	// 1155    .end local v3    # "era":Lsun/util/calendar/Era;
label_cond_ae:
	ldate->setEra(0x0);
	ldate->setLocalYear(year);
	ldate->setNormalizedYear(year);
	goto label_goto_60;

}
// .method normalizeMonth(Lsun/util/calendar/CalendarDate;)V
void sun::util::calendar::LocalGregorianCalendar::normalizeMonth(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	this->normalizeYear(date);
	this->normalizeMonth(date);
	return;

}
// .method normalizeYear(Lsun/util/calendar/CalendarDate;)V
void sun::util::calendar::LocalGregorianCalendar::normalizeYear(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> ldate;
	std::shared_ptr<sun::util::calendar::Era> era;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	ldate = date;
	ldate->checkCast("sun::util::calendar::LocalGregorianCalendar_S_Date");
	//    .local v1, "ldate":Lsun/util/calendar/LocalGregorianCalendar$Date;
	era = ldate->getEra();
	//    .local v0, "era":Lsun/util/calendar/Era;
	if ( !(era) )  
		goto label_cond_11;
	if ( !(( this->validateEra(era) ^ 0x1)) )  
		goto label_cond_19;
label_cond_11:
	ldate->setNormalizedYear(ldate->getYear());
label_goto_18:
	return;
	// 1231    .line 368
label_cond_19:
	ldate->setNormalizedYear(( (era->getSinceDate()->getYear() +  ldate->getYear()) + -0x1));
	goto label_goto_18;

}
// .method public validate(Lsun/util/calendar/CalendarDate;)Z
bool sun::util::calendar::LocalGregorianCalendar::validate(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	bool cVar0;
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> ldate;
	std::shared_ptr<sun::util::calendar::Era> era;
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> tmp;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	cVar0 = 0x0;
	ldate = date;
	ldate->checkCast("sun::util::calendar::LocalGregorianCalendar_S_Date");
	//    .local v1, "ldate":Lsun/util/calendar/LocalGregorianCalendar$Date;
	era = ldate->getEra();
	//    .local v0, "era":Lsun/util/calendar/Era;
	if ( !(era) )  
		goto label_cond_48;
	if ( this->validateEra(era) )     
		goto label_cond_11;
	return cVar0;
	// 1286    .line 254
label_cond_11:
	ldate->setNormalizedYear(( (era->getSinceDate()->getYear() +  ldate->getYear()) + -0x1));
	tmp = this->newCalendarDate(date->getZone());
	//    .local v2, "tmp":Lsun/util/calendar/LocalGregorianCalendar$Date;
	tmp->setEra(era)->setDate(date->getYear(), date->getMonth(), date->getDayOfMonth());
	this->normalize(tmp);
	if ( tmp->getEra() == era )
		goto label_cond_62;
	return cVar0;
	// 1348    .line 262
	// 1349    .end local v2    # "tmp":Lsun/util/calendar/LocalGregorianCalendar$Date;
label_cond_48:
	if ( date->getYear() <  this->eras[cVar0]->getSinceDate()->getYear() )
		goto label_cond_5b;
	return cVar0;
	// 1372    .line 265
label_cond_5b:
	ldate->setNormalizedYear(ldate->getYear());
label_cond_62:
	return this->validate(ldate);

}


