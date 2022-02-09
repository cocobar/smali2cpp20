// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DurationFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicDurationFormat.h"
#include "android.icu.text.DurationFormat.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Date.h"

static android::icu::text::DurationFormat::serialVersionUID = -0x1cd2d9e4c38cc84aL;
// .method protected constructor <init>()V
android::icu::text::DurationFormat::DurationFormat()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 019    .end annotation
	// 023    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	return;

}
// .method protected constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::DurationFormat::DurationFormat(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 033    .end annotation
	// 037    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->setLocale(locale, locale);
	return;

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/DurationFormat;
std::shared_ptr<android::icu::text::DurationFormat> android::icu::text::DurationFormat::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 050    .end annotation
	return android::icu::impl::duration::BasicDurationFormat::getInstance(locale);

}
// .method public abstract format(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DurationFormat::format(std::shared_ptr<java::lang::Object> var0,std::shared_ptr<java::lang::StringBuffer> var1,std::shared_ptr<java::text::FieldPosition> var2)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 065    .end annotation

}
// .method public abstract formatDurationFrom(JJ)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DurationFormat::formatDurationFrom(long long var0,long long var1)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 070    .end annotation

}
// .method public abstract formatDurationFromNow(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DurationFormat::formatDurationFromNow(long long var0)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 075    .end annotation

}
// .method public abstract formatDurationFromNowTo(Ljava/util/Date;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DurationFormat::formatDurationFromNowTo(std::shared_ptr<java::util::Date> var0)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 080    .end annotation

}
// .method public parseObject(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DurationFormat::parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 088    .end annotation
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}


