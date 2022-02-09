// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\JavaTimeZone.smali
#include "java2ctype.h"
#include "android.icu.impl.Grego.h"
#include "android.icu.impl.JavaTimeZone.h"
#include "android.icu.util.TimeZone.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Math.h"
#include "java.lang.NoSuchMethodException.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityException.h"
#include "java.lang.String.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.lang.reflect.InvocationTargetException.h"
#include "java.lang.reflect.Method.h"
#include "java.util.Calendar.h"
#include "java.util.Date.h"
#include "java.util.GregorianCalendar.h"
#include "java.util.TimeZone.h"
#include "java.util.TreeSet.h"

static android::icu::impl::JavaTimeZone::AVAILABLESET;
static android::icu::impl::JavaTimeZone::mObservesDaylightTime = nullptr;
static android::icu::impl::JavaTimeZone::serialVersionUID = 0x60d4e0281a0a2e14L;
// .method static constructor <clinit>()V
void android::icu::impl::JavaTimeZone::static_cinit()
{
	
	std::shared_ptr<java::util::TreeSet> cVar0;
	auto availableIds;
	int i;
	std::shared_ptr<std::vector<java::lang::Class>> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = std::make_shared<java::util::TreeSet>();
	android::icu::impl::JavaTimeZone::AVAILABLESET = cVar0;
	availableIds = java::util::TimeZone::getAvailableIDs({const[class].FS-Param});
	//    .local v0, "availableIds":[Ljava/lang/String;
	i = 0x0;
	//    .local v3, "i":I
label_goto_c:
	if ( i >= availableIds->size() )
		goto label_cond_19;
	android::icu::impl::JavaTimeZone::AVAILABLESET->add(availableIds[i]);
	i = ( i + 0x1);
	goto label_goto_c;
	// 070    .line 50
label_cond_19:
	try {
	//label_try_start_19:
	cVar1 = 0x0;
	cVar1->checkCast("std::vector<java::lang::Class>");
	android::icu::impl::JavaTimeZone::mObservesDaylightTime = java::util::TimeZone()->getMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("observesDaylightTime")), cVar1);
	//label_try_end_27:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_28;
	}
	catch (java::lang::SecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_19 .. :try_end_27} :catch_28
	//    .catch Ljava/lang/SecurityException; {:try_start_19 .. :try_end_27} :catch_2a
label_goto_27:
	return;
	// 094    .line 51
label_catch_28:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/NoSuchMethodException;
	goto label_goto_27;
	// 101    .line 53
	// 102    .end local v1    # "e":Ljava/lang/NoSuchMethodException;
label_catch_2a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/SecurityException;
	goto label_goto_27;

}
// .method public constructor <init>()V
android::icu::impl::JavaTimeZone::JavaTimeZone()
{
	
	android::icu::impl::JavaTimeZone::(java::util::TimeZone::getDefault({const[class].FS-Param}), 0x0);
	return;

}
// .method public constructor <init>(Ljava/util/TimeZone;Ljava/lang/String;)V
android::icu::impl::JavaTimeZone::JavaTimeZone(std::shared_ptr<java::util::TimeZone> jtz,std::shared_ptr<java::lang::String> cVar0)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::util::GregorianCalendar> cVar1;
	
	//    .param p1, "jtz"    # Ljava/util/TimeZone;
	//    .param p2, "id"    # Ljava/lang/String;
	// 134    invoke-direct {p0}, Landroid/icu/util/TimeZone;-><init>()V
	this->isFrozen = 0x0;
	if ( cVar0 )     
		goto label_cond_c;
	cVar0 = jtz->getID();
label_cond_c:
	this->javatz = jtz;
	this->setID(cVar0);
	cVar1 = std::make_shared<java::util::GregorianCalendar>(this->javatz);
	this->javacal = cVar1;
	return;

}
// .method public static createTimeZone(Ljava/lang/String;)Landroid/icu/impl/JavaTimeZone;
std::shared_ptr<android::icu::impl::JavaTimeZone> android::icu::impl::JavaTimeZone::createTimeZone(std::shared_ptr<java::lang::String> id)
{
	
	std::shared_ptr<java::util::TimeZone> jtz;
	std::shared<std::vector<bool[]>> isSystemID;
	std::shared_ptr<java::lang::Object> canonicalID;
	std::shared_ptr<android::icu::impl::JavaTimeZone> cVar0;
	
	//    .param p0, "id"    # Ljava/lang/String;
	jtz = 0x0;
	//    .local v2, "jtz":Ljava/util/TimeZone;
	if ( !(android::icu::impl::JavaTimeZone::AVAILABLESET->contains(id)) )  
		goto label_cond_e;
	jtz = java::util::TimeZone::getTimeZone(id);
	//    .end local v2    # "jtz":Ljava/util/TimeZone;
label_cond_e:
	if ( jtz )     
		goto label_cond_28;
	isSystemID = std::make_shared<std::vector<bool[]>>(0x1);
	//    .local v1, "isSystemID":[Z
	canonicalID = android::icu::util::TimeZone::getCanonicalID(id, isSystemID);
	//    .local v0, "canonicalID":Ljava/lang/String;
	if ( !(isSystemID[0x0]) )  
		goto label_cond_28;
	if ( !(android::icu::impl::JavaTimeZone::AVAILABLESET->contains(canonicalID)) )  
		goto label_cond_28;
	jtz = java::util::TimeZone::getTimeZone(canonicalID);
	//    .end local v0    # "canonicalID":Ljava/lang/String;
	//    .end local v1    # "isSystemID":[Z
label_cond_28:
	if ( jtz )     
		goto label_cond_2b;
	return 0x0;
	// 240    .line 106
label_cond_2b:
	cVar0 = std::make_shared<android::icu::impl::JavaTimeZone>(jtz, id);
	return cVar0;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::impl::JavaTimeZone::readObject(std::shared_ptr<java::io::ObjectInputStream> s)
{
	
	std::shared_ptr<java::util::GregorianCalendar> cVar0;
	
	//    .param p1, "s"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 253        value = {
	// 254            Ljava/io/IOException;,
	// 255            Ljava/lang/ClassNotFoundException;
	// 256        }
	// 257    .end annotation
	s->defaultReadObject();
	cVar0 = std::make_shared<java::util::GregorianCalendar>(this->javatz);
	this->javacal = cVar0;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::JavaTimeZone::clone()
{
	
	if ( !(this->isFrozen()) )  
		goto label_cond_7;
	return this;
	// 292    .line 235
label_cond_7:
	return this->cloneAsThawed();

}
// .method public cloneAsThawed()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::impl::JavaTimeZone::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::impl::JavaTimeZone> tz;
	std::shared_ptr<java::util::TimeZone> cVar0;
	std::shared_ptr<java::util::GregorianCalendar> cVar1;
	
	tz = this->cloneAsThawed();
	tz->checkCast("android::icu::impl::JavaTimeZone");
	//    .local v0, "tz":Landroid/icu/impl/JavaTimeZone;
	cVar0 = this->javatz->clone();
	cVar0->checkCast("java::util::TimeZone");
	tz->javatz = cVar0;
	cVar1 = std::make_shared<java::util::GregorianCalendar>(this->javatz);
	tz->javacal = cVar1;
	tz->isFrozen = 0x0;
	return tz;

}
// .method public freeze()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::impl::JavaTimeZone::freeze()
{
	
	this->isFrozen = 0x1;
	return this;

}
// .method public getDSTSavings()I
int android::icu::impl::JavaTimeZone::getDSTSavings()
{
	
	return this->javatz->getDSTSavings();

}
// .method public getOffset(IIIIII)I
int android::icu::impl::JavaTimeZone::getOffset(int era,int year,int month,int day,int dayOfWeek,int milliseconds)
{
	
	//    .param p1, "era"    # I
	//    .param p2, "year"    # I
	//    .param p3, "month"    # I
	//    .param p4, "day"    # I
	//    .param p5, "dayOfWeek"    # I
	//    .param p6, "milliseconds"    # I
	return this->javatz->getOffset(era, year, month, day, dayOfWeek, milliseconds);

}
// .method public getOffset(JZ[I)V
void android::icu::impl::JavaTimeZone::getOffset(long long date,bool local,std::shared_ptr<int[]> offsets)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared<std::vector<int[]>> fields;
	int tmp;
	int mil;
	int sec;
	int min;
	int hour;
	int doy1;
	int hour1;
	int min1;
	int sec1;
	int mil1;
	
	//    .param p1, "date"    # J
	//    .param p3, "local"    # Z
	//    .param p4, "offsets"    # [I
	cVar0 = this->javacal;
	cVar0->monitor_enter();
	if ( !(local) )  
		goto label_cond_e3;
	try {
	//label_try_start_a:
	fields = std::make_shared<std::vector<int[]>>(0x6);
	//    .local v12, "fields":[I
	android::icu::impl::Grego::timeToFields(date, fields);
	tmp = fields[0x5];
	//    .local v18, "tmp":I
	mil = ( tmp % 0x3e8);
	//    .local v14, "mil":I
	tmp = ( tmp / 0x3e8);
	sec = ( tmp % 0x3c);
	//    .local v8, "sec":I
	tmp = ( tmp / 0x3c);
	min = ( tmp % 0x3c);
	//    .local v7, "min":I
	hour = ( tmp / 0x3c);
	//    .local v6, "hour":I
	this->javacal->clear();
	this->javacal->set(fields[0x0], fields[0x1], fields[0x2], hour, min, sec);
	this->javacal->set(0xe, mil);
	doy1 = this->javacal->get(0x6);
	//    .local v11, "doy1":I
	hour1 = this->javacal->get(0xb);
	//    .local v13, "hour1":I
	min1 = this->javacal->get(0xc);
	//    .local v16, "min1":I
	sec1 = this->javacal->get(0xd);
	//    .local v17, "sec1":I
	mil1 = this->javacal->get(0xe);
	//    .local v15, "mil1":I
	if ( fields[0x4] != doy1 )
		goto label_cond_7e;
	if ( hour == hour1 )
		goto label_cond_d2;
label_cond_7e:
label_goto_7e:
	if ( java::lang::Math::abs((doy1 - fields[0x4])) <= 0x1 )
		goto label_cond_dd;
	//    .local v9, "dayDelta":I
label_goto_8b:
	//    .local v10, "delta":I
	this->javacal->setTimeInMillis(((this->javacal->getTimeInMillis() - (long long)(((( ((( ((( ((( dayDelta * 0x18) +  hour1) -  hour) * 0x3c) + min1) -  min) * 0x3c) + sec1) -  sec) * 0x3e8) +  mil1) - mil))) - 0x1));
	//    .end local v6    # "hour":I
	//    .end local v7    # "min":I
	//    .end local v8    # "sec":I
	//    .end local v9    # "dayDelta":I
	//    .end local v10    # "delta":I
	//    .end local v11    # "doy1":I
	//    .end local v12    # "fields":[I
	//    .end local v13    # "hour1":I
	//    .end local v14    # "mil":I
	//    .end local v15    # "mil1":I
	//    .end local v16    # "min1":I
	//    .end local v17    # "sec1":I
	//    .end local v18    # "tmp":I
label_cond_b6:
label_goto_b6:
	offsets[0x0] = this->javacal->get(0xf);
	offsets[0x1] = this->javacal->get(0x10);
	//label_try_end_d0:
	}
	catch (...){
		goto label_catchall_ed;
	}
	//    .catchall {:try_start_a .. :try_end_d0} :catchall_ed
	cVar0->monitor_exit();
	return;
	// 694    .line 145
	// 695    .restart local v6    # "hour":I
	// 696    .restart local v7    # "min":I
	// 697    .restart local v8    # "sec":I
	// 698    .restart local v11    # "doy1":I
	// 699    .restart local v12    # "fields":[I
	// 700    .restart local v13    # "hour1":I
	// 701    .restart local v14    # "mil":I
	// 702    .restart local v15    # "mil1":I
	// 703    .restart local v16    # "min1":I
	// 704    .restart local v17    # "sec1":I
	// 705    .restart local v18    # "tmp":I
label_cond_d2:
	if ( min != min1 )
		goto label_cond_7e;
	if ( sec != sec1 )
		goto label_cond_7e;
	if ( mil == mil1 )
		goto label_cond_b6;
	goto label_goto_7e;
	// 719    .line 149
label_cond_dd:
	try {
	//label_try_start_de:
	//    .restart local v9    # "dayDelta":I
	goto label_goto_8b;
	// 731    .line 156
	// 732    .end local v6    # "hour":I
	// 733    .end local v7    # "min":I
	// 734    .end local v8    # "sec":I
	// 735    .end local v9    # "dayDelta":I
	// 736    .end local v11    # "doy1":I
	// 737    .end local v12    # "fields":[I
	// 738    .end local v13    # "hour1":I
	// 739    .end local v14    # "mil":I
	// 740    .end local v15    # "mil1":I
	// 741    .end local v16    # "min1":I
	// 742    .end local v17    # "sec1":I
	// 743    .end local v18    # "tmp":I
label_cond_e3:
	this->javacal->setTimeInMillis(date);
	//label_try_end_ec:
	}
	catch (...){
		goto label_catchall_ed;
	}
	//    .catchall {:try_start_de .. :try_end_ec} :catchall_ed
	goto label_goto_b6;
	// 757    .line 122
label_catchall_ed:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public getRawOffset()I
int android::icu::impl::JavaTimeZone::getRawOffset()
{
	
	return this->javatz->getRawOffset();

}
// .method public hashCode()I
int android::icu::impl::JavaTimeZone::hashCode()
{
	
	return (this->hashCode() +  this->javatz->hashCode());

}
// .method public inDaylightTime(Ljava/util/Date;)Z
bool android::icu::impl::JavaTimeZone::inDaylightTime(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	return this->javatz->inDaylightTime(date);

}
// .method public isFrozen()Z
bool android::icu::impl::JavaTimeZone::isFrozen()
{
	
	return this->isFrozen;

}
// .method public observesDaylightTime()Z
bool android::icu::impl::JavaTimeZone::observesDaylightTime()
{
	
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	std::shared_ptr<java::lang::Boolean> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::JavaTimeZone::mObservesDaylightTime) )  
		goto label_cond_17;
	try {
	//label_try_start_4:
	cVar0 = 0x0;
	cVar0->checkCast("std::vector<java::lang::Object>");
	cVar1 = android::icu::impl::JavaTimeZone::mObservesDaylightTime->invoke(this->javatz, cVar0);
	cVar1->checkCast("java::lang::Boolean");
	//label_try_end_14:
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c;
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1e;
	}
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_4 .. :try_end_14} :catch_16
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_4 .. :try_end_14} :catch_1c
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_4 .. :try_end_14} :catch_1e
	return cVar1->booleanValue();
	// 860    .line 207
label_catch_16:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_17:
label_goto_17:
	return this->observesDaylightTime();
	// 873    .line 208
label_catch_1c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/IllegalArgumentException;
	goto label_goto_17;
	// 880    .line 209
	// 881    .end local v1    # "e":Ljava/lang/IllegalArgumentException;
label_catch_1e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/reflect/InvocationTargetException;
	goto label_goto_17;

}
// .method public setRawOffset(I)V
void android::icu::impl::JavaTimeZone::setRawOffset(int offsetMillis)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "offsetMillis"    # I
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen JavaTimeZone instance.")));
	// throw
	throw cVar0;
	// 910    .line 187
label_cond_f:
	this->javatz->setRawOffset(offsetMillis);
	return;

}
// .method public unwrap()Ljava/util/TimeZone;
std::shared_ptr<java::util::TimeZone> android::icu::impl::JavaTimeZone::unwrap()
{
	
	return this->javatz;

}
// .method public useDaylightTime()Z
bool android::icu::impl::JavaTimeZone::useDaylightTime()
{
	
	return this->javatz->useDaylightTime();

}


