// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicDurationFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicDurationFormat.h"
#include "android.icu.impl.duration.BasicPeriodFormatterService.h"
#include "android.icu.impl.duration.DurationFormatter.h"
#include "android.icu.impl.duration.DurationFormatterFactory.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.PeriodFormatter.h"
#include "android.icu.impl.duration.PeriodFormatterFactory.h"
#include "android.icu.impl.duration.PeriodFormatterService.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "android.icu.text.DurationFormat.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.FieldPosition.h"
#include "java.util.Date.h"
#include "javax.xml.datatype.DatatypeConstants_S_Field.h"
#include "javax.xml.datatype.DatatypeConstants.h"
#include "javax.xml.datatype.Duration.h"

static android::icu::impl::duration::BasicDurationFormat::serialVersionUID = -0x2bac5567544cfb24L;
// .method public constructor <init>()V
android::icu::impl::duration::BasicDurationFormat::BasicDurationFormat()
{
	
	// 024    invoke-direct {p0}, Landroid/icu/text/DurationFormat;-><init>()V
	this->pfs = 0x0;
	this->pfs = android::icu::impl::duration::BasicPeriodFormatterService::getInstance({const[class].FS-Param});
	this->formatter = this->pfs->newDurationFormatterFactory()->getFormatter();
	this->pformatter = this->pfs->newPeriodFormatterFactory()->setDisplayPastFuture(0x0)->getFormatter();
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::impl::duration::BasicDurationFormat::BasicDurationFormat(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::text::DurationFormat::(locale);
	this->pfs = 0x0;
	this->pfs = android::icu::impl::duration::BasicPeriodFormatterService::getInstance({const[class].FS-Param});
	this->formatter = this->pfs->newDurationFormatterFactory()->setLocale(locale->getName())->getFormatter();
	this->pformatter = this->pfs->newPeriodFormatterFactory()->setDisplayPastFuture(0x0)->setLocale(locale->getName())->getFormatter();
	return;

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/impl/duration/BasicDurationFormat;
std::shared_ptr<android::icu::impl::duration::BasicDurationFormat> android::icu::impl::duration::BasicDurationFormat::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::impl::duration::BasicDurationFormat> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::impl::duration::BasicDurationFormat>(locale);
	return cVar0;

}
// .method public format(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::duration::BasicDurationFormat::format(std::shared_ptr<java::lang::Object> object,std::shared_ptr<java::lang::StringBuffer> toAppend,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "object"    # Ljava/lang/Object;
	//    .param p2, "toAppend"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	if ( !(object->instanceOf("java::lang::Long")) )  
		goto label_cond_13;
	object->checkCast("java::lang::Long");
	//    .end local p1    # "object":Ljava/lang/Object;
	//    .local v0, "res":Ljava/lang/String;
	return toAppend->append(this->formatDurationFromNow(object->longValue()));
	// 193    .line 41
	// 194    .end local v0    # "res":Ljava/lang/String;
	// 195    .restart local p1    # "object":Ljava/lang/Object;
label_cond_13:
	if ( !(object->instanceOf("java::util::Date")) )  
		goto label_cond_22;
	object->checkCast("java::util::Date");
	//    .end local p1    # "object":Ljava/lang/Object;
	//    .restart local v0    # "res":Ljava/lang/String;
	return toAppend->append(this->formatDurationFromNowTo(object));
	// 217    .line 44
	// 218    .end local v0    # "res":Ljava/lang/String;
	// 219    .restart local p1    # "object":Ljava/lang/Object;
label_cond_22:
	if ( !(object->instanceOf("javax::xml::datatype::Duration")) )  
		goto label_cond_2f;
	//    .restart local v0    # "res":Ljava/lang/String;
	return toAppend->append(this->formatDuration(object));
	// 238    .line 48
	// 239    .end local v0    # "res":Ljava/lang/String;
label_cond_2f:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cannot format given Object as a Duration")));
	// throw
	throw cVar0;

}
// .method public formatDuration(Ljava/lang/Object;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::BasicDurationFormat::formatDuration(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared<std::vector<std::vector<javax::xml::datatype::DatatypeConstants_S_Field>>> inFields;
	auto outFields;
	std::shared_ptr<javax::xml::datatype::Duration> inDuration;
	std::shared_ptr<android::icu::impl::duration::Period> p;
	std::shared_ptr<javax::xml::datatype::Duration> duration;
	int sawNonZero;
	int i;
	std::shared_ptr<java::lang::Number> n;
	float floatVal;
	auto intSeconds;
	double millis;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> alternateUnit;
	auto p;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	inFields = std::make_shared<std::vector<std::vector<javax::xml::datatype::DatatypeConstants_S_Field>>>(0x6);
	inFields[0x0] = javax::xml::datatype::DatatypeConstants::YEARS;
	inFields[0x1] = javax::xml::datatype::DatatypeConstants::MONTHS;
	inFields[0x2] = javax::xml::datatype::DatatypeConstants::DAYS;
	inFields[0x3] = javax::xml::datatype::DatatypeConstants::HOURS;
	inFields[0x4] = javax::xml::datatype::DatatypeConstants::MINUTES;
	inFields[0x5] = javax::xml::datatype::DatatypeConstants::SECONDS;
	//    .local v12, "inFields":[Ljavax/xml/datatype/DatatypeConstants$Field;
	outFields = std::make_shared<std::vector<std::vector<android::icu::impl::duration::TimeUnit>>>(0x6);
	outFields[0x0] = android::icu::impl::duration::TimeUnit::YEAR;
	outFields[0x1] = android::icu::impl::duration::TimeUnit::MONTH;
	outFields[0x2] = android::icu::impl::duration::TimeUnit::DAY;
	outFields[0x3] = android::icu::impl::duration::TimeUnit::HOUR;
	outFields[0x4] = android::icu::impl::duration::TimeUnit::MINUTE;
	outFields[0x5] = android::icu::impl::duration::TimeUnit::SECOND;
	//    .local v19, "outFields":[Landroid/icu/impl/duration/TimeUnit;
	inDuration = obj;
	inDuration->checkCast("javax::xml::datatype::Duration");
	//    .local v11, "inDuration":Ljavax/xml/datatype/Duration;
	p = 0x0;
	//    .local v20, "p":Landroid/icu/impl/duration/Period;
	inDuration;
	//    .local v6, "duration":Ljavax/xml/datatype/Duration;
	//    .local v13, "inPast":Z
	if ( inDuration->getSign() >= 0 )
		goto label_cond_69;
	duration = inDuration->negate();
label_cond_69:
	sawNonZero = 0x0;
	//    .local v21, "sawNonZero":Z
	i = 0x0;
	//    .end local v20    # "p":Landroid/icu/impl/duration/Period;
	//    .local v10, "i":I
label_goto_6c:
	if ( i >= inFields->size() )
		goto label_cond_df;
	if ( !(duration->isSet(inFields[i])) )  
		goto label_cond_8f;
	n = duration->getField(inFields[i]);
	//    .local v18, "n":Ljava/lang/Number;
	if ( n->intValue() )     
		goto label_cond_92;
	if ( !(( sawNonZero ^ 0x1)) )  
		goto label_cond_92;
	//    .end local v18    # "n":Ljava/lang/Number;
label_cond_8f:
label_goto_8f:
	i = ( i + 0x1);
	goto label_goto_6c;
	// 449    .line 128
	// 450    .restart local v18    # "n":Ljava/lang/Number;
label_cond_92:
	sawNonZero = 0x1;
	floatVal = n->floatValue();
	//    .local v7, "floatVal":F
	//    .local v4, "alternateUnit":Landroid/icu/impl/duration/TimeUnit;
	0x0;
	//    .local v5, "alternateVal":F
	if ( outFields[i] != android::icu::impl::duration::TimeUnit::SECOND )
		goto label_cond_c1;
	//    .local v8, "fullSeconds":D
	intSeconds = java::lang::Math::floor((double)(floatVal));
	//    .local v14, "intSeconds":D
	millis = (((double)(floatVal) -  intSeconds) *  0x408f400000000000L);
	//    .local v16, "millis":D
	if ( (millis < 0x0) <= 0 )
		goto label_cond_c1;
	alternateUnit = android::icu::impl::duration::TimeUnit::MILLISECOND;
	//    .local v4, "alternateUnit":Landroid/icu/impl/duration/TimeUnit;
	floatVal = (float)(intSeconds);
	//    .end local v4    # "alternateUnit":Landroid/icu/impl/duration/TimeUnit;
	//    .end local v8    # "fullSeconds":D
	//    .end local v14    # "intSeconds":D
	//    .end local v16    # "millis":D
label_cond_c1:
	if ( p )     
		goto label_cond_d4;
	p = android::icu::impl::duration::Period::at(floatVal, outFields[i]);
	//    .local v20, "p":Landroid/icu/impl/duration/Period;
label_goto_cb:
	if ( !(0x0) )  
		goto label_cond_8f;
	p = p->and((float)(millis), alternateUnit);
	goto label_goto_8f;
	// 551    .line 150
	// 552    .end local v20    # "p":Landroid/icu/impl/duration/Period;
label_cond_d4:
	p = p->and(floatVal, outFields[i]);
	//    .restart local v20    # "p":Landroid/icu/impl/duration/Period;
	goto label_goto_cb;
	// 567    .line 159
	// 568    .end local v5    # "alternateVal":F
	// 569    .end local v7    # "floatVal":F
	// 570    .end local v18    # "n":Ljava/lang/Number;
	// 571    .end local v20    # "p":Landroid/icu/impl/duration/Period;
label_cond_df:
	if ( p )     
		goto label_cond_ec;
	return this->formatDurationFromNow(0x0);
	// 588    .line 163
label_cond_ec:
	if ( !(0x0) )  
		goto label_cond_101;
	p = p->inPast();
	//    .restart local v20    # "p":Landroid/icu/impl/duration/Period;
label_goto_f2:
	return this->pformatter->format(p);
	// 616    .line 166
	// 617    .end local v20    # "p":Landroid/icu/impl/duration/Period;
label_cond_101:
	p = p->inFuture();
	//    .restart local v20    # "p":Landroid/icu/impl/duration/Period;
	goto label_goto_f2;

}
// .method public formatDurationFrom(JJ)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::BasicDurationFormat::formatDurationFrom(long long duration,long long referenceDate)
{
	
	//    .param p1, "duration"    # J
	//    .param p3, "referenceDate"    # J
	return this->formatter->formatDurationFrom(duration, referenceDate);

}
// .method public formatDurationFromNow(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::BasicDurationFormat::formatDurationFromNow(long long duration)
{
	
	//    .param p1, "duration"    # J
	return this->formatter->formatDurationFromNow(duration);

}
// .method public formatDurationFromNowTo(Ljava/util/Date;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::BasicDurationFormat::formatDurationFromNowTo(std::shared_ptr<java::util::Date> targetDate)
{
	
	//    .param p1, "targetDate"    # Ljava/util/Date;
	return this->formatter->formatDurationFromNowTo(targetDate);

}


