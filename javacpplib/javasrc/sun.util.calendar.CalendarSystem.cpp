// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\CalendarSystem.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Exception.h"
#include "java.lang.InternalError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"
#include "java.util.Properties.h"
#include "java.util.concurrent.ConcurrentHashMap.h"
#include "java.util.concurrent.ConcurrentMap.h"
#include "sun.util.calendar.CalendarSystem.h"
#include "sun.util.calendar.Gregorian.h"
#include "sun.util.calendar.JulianCalendar.h"
#include "sun.util.calendar.LocalGregorianCalendar.h"

static sun::util::calendar::CalendarSystem::GREGORIAN_INSTANCE;
static sun::util::calendar::CalendarSystem::calendars;
static sun::util::calendar::CalendarSystem::names;
// .method static constructor <clinit>()V
void sun::util::calendar::CalendarSystem::static_cinit()
{
	
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	std::shared_ptr<sun::util::calendar::Gregorian> cVar2;
	
	cVar0 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	sun::util::calendar::CalendarSystem::calendars = cVar0;
	cVar1 = std::make_shared<java::util::HashMap>();
	sun::util::calendar::CalendarSystem::names = cVar1;
	sun::util::calendar::CalendarSystem::names->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian")), sun::util::calendar::Gregorian());
	sun::util::calendar::CalendarSystem::names->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("japanese")), sun::util::calendar::LocalGregorianCalendar());
	sun::util::calendar::CalendarSystem::names->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("julian")), sun::util::calendar::JulianCalendar());
	cVar2 = std::make_shared<sun::util::calendar::Gregorian>();
	sun::util::calendar::CalendarSystem::GREGORIAN_INSTANCE = cVar2;
	return;

}
// .method public constructor <init>()V
sun::util::calendar::CalendarSystem::CalendarSystem()
{
	
	// 097    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static forName(Ljava/lang/String;)Lsun/util/calendar/CalendarSystem;
std::shared_ptr<sun::util::calendar::CalendarSystem> sun::util::calendar::CalendarSystem::forName(std::shared_ptr<java::lang::String> calendarName)
{
	
	std::shared_ptr<sun::util::calendar::CalendarSystem> cVar0;
	std::shared_ptr<sun::util::calendar::CalendarSystem> cal;
	std::shared_ptr<java::lang::Class> calendarClass;
	std::shared_ptr<java::lang::Object> cal;
	std::shared_ptr<sun::util::calendar::CalendarSystem> cs;
	std::shared_ptr<java::lang::InternalError> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "calendarName"    # Ljava/lang/String;
	cVar0 = 0x0;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian"))->equals(calendarName)) )  
		goto label_cond_d;
	return sun::util::calendar::CalendarSystem::GREGORIAN_INSTANCE;
	// 123    .line 155
label_cond_d:
	cal = sun::util::calendar::CalendarSystem::calendars->get(calendarName);
	cal->checkCast("sun::util::calendar::CalendarSystem");
	//    .local v0, "cal":Lsun/util/calendar/CalendarSystem;
	if ( !(cal) )  
		goto label_cond_18;
	return cal;
	// 140    .line 160
label_cond_18:
	calendarClass = sun::util::calendar::CalendarSystem::names->get(calendarName);
	calendarClass->checkCast("java::lang::Class");
	//    .local v1, "calendarClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( calendarClass )     
		goto label_cond_23;
	return cVar0;
	// 157    .line 165
label_cond_23:
	if ( !(calendarClass->isAssignableFrom(sun::util::calendar::LocalGregorianCalendar())) )  
		goto label_cond_32;
	cal = sun::util::calendar::LocalGregorianCalendar::getLocalGregorianCalendar(calendarName);
label_goto_2f:
	if ( cal )     
		goto label_cond_40;
	return cVar0;
	// 179    .line 170
label_cond_32:
	try {
	//label_try_start_32:
	cal = calendarClass->newInstance();
	//    .end local v0    # "cal":Lsun/util/calendar/CalendarSystem;
	cal->checkCast("sun::util::calendar::CalendarSystem");
	//label_try_end_38:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_39;
	}
	//    .catch Ljava/lang/Exception; {:try_start_32 .. :try_end_38} :catch_39
	//    .restart local v0    # "cal":Lsun/util/calendar/CalendarSystem;
	goto label_goto_2f;
	// 194    .line 171
	// 195    .end local v0    # "cal":Lsun/util/calendar/CalendarSystem;
label_catch_39:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/lang/Exception;
	cVar1 = std::make_shared<java::lang::InternalError>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 207    .line 178
	// 208    .end local v3    # "e":Ljava/lang/Exception;
	// 209    .restart local v0    # "cal":Lsun/util/calendar/CalendarSystem;
label_cond_40:
	cs = sun::util::calendar::CalendarSystem::calendars->putIfAbsent(calendarName, cal);
	cs->checkCast("sun::util::calendar::CalendarSystem");
	//    .local v2, "cs":Lsun/util/calendar/CalendarSystem;
	if ( cs )     
		goto label_cond_4b;
	//    .end local v0    # "cal":Lsun/util/calendar/CalendarSystem;
label_goto_4a:
	return cal;
	// 227    .restart local v0    # "cal":Lsun/util/calendar/CalendarSystem;
label_cond_4b:
	cal = cs;
	goto label_goto_4a;

}
// .method public static getCalendarProperties()Ljava/util/Properties;
std::shared_ptr<java::util::Properties> sun::util::calendar::CalendarSystem::getCalendarProperties()
{
	
	int cVar6;
	std::shared_ptr<java::util::Properties> calendarProps;
	std::shared_ptr<java::io::InputStream> is;
	std::shared_ptr<java::lang::Object> cVar2;
	std::shared_ptr<java::lang::Object> cVar4;
	std::shared_ptr<java::lang::Throwable> cVar5;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Object> catchall;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 237        value = {
	// 238            Ljava/io/IOException;
	// 239        }
	// 240    .end annotation
	cVar6 = 0x0;
	calendarProps = std::make_shared<java::util::Properties>();
	//    .local v0, "calendarProps":Ljava/util/Properties;
	is = 0x0;
	//    .local v1, "is":Ljava/io/InputStream;
	try {
	//label_try_start_7:
	is = java::lang::ClassLoader::getSystemResourceAsStream(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendars.properties")));
	//    .local v1, "is":Ljava/io/InputStream;
	calendarProps->load(is);
	//label_try_end_11:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1b;
	}
	catch (...){
		goto label_catchall_36;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_7 .. :try_end_11} :catch_1b
	//    .catchall {:try_start_7 .. :try_end_11} :catchall_36
	if ( !(is) )  
		goto label_cond_16;
	try {
	//label_try_start_13:
	is->close();
	//label_try_end_16:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_13 .. :try_end_16} :catch_19
label_cond_16:
label_goto_16:
	if ( !(cVar6) )  
		goto label_cond_35;
	// throw
	throw cVar6;
label_catch_19:
	// move-exception
	cVar6 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_16;
	// 288    .end local v1    # "is":Ljava/io/InputStream;
label_catch_1b:
	// move-exception
	cVar2 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	try {
	//label_try_start_1c:
	// throw
	throw cVar2;
	// 294    :try_end_1d
	// 295    .catchall {:try_start_1c .. :try_end_1d} :catchall_1d
label_catchall_1d:
	// move-exception
	
	tryCatchExcetionList.pop_back();
	cVar6 = cVar2;
	cVar4 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_goto_21:
	if ( !(is) )  
		goto label_cond_26;
	try {
	//label_try_start_23:
	is->close();
	//label_try_end_26:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_29;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_23 .. :try_end_26} :catch_29
label_cond_26:
label_goto_26:
	if ( !(cVar6) )  
		goto label_cond_34;
	// throw
	throw cVar6;
label_catch_29:
	// move-exception
	cVar5 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	if ( cVar6 )     
		goto label_cond_2e;
	cVar6 = cVar5;
	goto label_goto_26;
label_cond_2e:
	if ( cVar6 == cVar5 )
		goto label_cond_26;
	cVar6->addSuppressed(cVar5);
	goto label_goto_26;
label_cond_34:
	// throw
	throw cVar4;
	// 339    .line 196
	// 340    .restart local v1    # "is":Ljava/io/InputStream;
label_cond_35:
	return calendarProps;
	// 344    .line 195
	// 345    .end local v1    # "is":Ljava/io/InputStream;
label_catchall_36:
	// move-exception
	catchall = tryCatchExcetionList.back();
	goto label_goto_21;

}
// .method public static getGregorianCalendar()Lsun/util/calendar/Gregorian;
std::shared_ptr<sun::util::calendar::Gregorian> sun::util::calendar::CalendarSystem::getGregorianCalendar()
{
	
	return sun::util::calendar::CalendarSystem::GREGORIAN_INSTANCE;

}


