// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$Loader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Loader.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelDateTimeDataSink.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Style.h"
#include "android.icu.text.RelativeDateTimeFormatter.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.EnumMap.h"

// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::RelativeDateTimeFormatter_S_Loader::RelativeDateTimeFormatter_S_Loader(std::shared_ptr<android::icu::util::ULocale> ulocale)
{
	
	//    .param p1, "ulocale"    # Landroid/icu/util/ULocale;
	// 028    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->ulocale = ulocale;
	return;

}
// .method private getDateTimePattern(Landroid/icu/impl/ICUResourceBundle;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RelativeDateTimeFormatter_S_Loader::getDateTimePattern(std::shared_ptr<android::icu::impl::ICUResourceBundle> r)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> calType;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	auto patternsRb;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> patternsRb;
	
	//    .param p1, "r"    # Landroid/icu/impl/ICUResourceBundle;
	cVar0 = 0x8;
	calType = r->getStringWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar/default")));
	//    .local v0, "calType":Ljava/lang/String;
	if ( !(calType) )  
		goto label_cond_14;
	if ( !(calType->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))) )  
		goto label_cond_17;
label_cond_14:
	calType = std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian"));
label_cond_17:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "resourcePath":Ljava/lang/String;
	patternsRb = r->findWithFallback(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar/")))->append(calType)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/DateTimePatterns")))->toString());
	//    .local v2, "patternsRb":Landroid/icu/impl/ICUResourceBundle;
	if ( patternsRb )     
		goto label_cond_48;
	if ( !(calType->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian")))) )  
		goto label_cond_48;
	patternsRb = r->findWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar/gregorian/DateTimePatterns")));
label_cond_48:
	if ( !(patternsRb) )  
		goto label_cond_52;
	if ( patternsRb->getSize() >= 0x9 )
		goto label_cond_56;
label_cond_52:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("{1} {0}"));
	// 136    .line 1174
label_cond_56:
	//    .local v1, "elementType":I
	if ( patternsRb->get(cVar0)->getType() != cVar0 )
		goto label_cond_6a;
	return patternsRb->get(cVar0)->getString(0x0);
	// 163    .line 1178
label_cond_6a:
	return patternsRb->getString(cVar0);

}
// .method public load()Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeFormatterData;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData> android::icu::text::RelativeDateTimeFormatter_S_Loader::load()
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink> sink;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> r;
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> newStyle1;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> newStyle2;
	std::shared_ptr<java::lang::IllegalStateException> cVar2;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData> cVar4;
	
	sink = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink>();
	//    .local v3, "sink":Landroid/icu/text/RelativeDateTimeFormatter$RelDateTimeDataSink;
	r = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), this->ulocale);
	r->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v2, "r":Landroid/icu/impl/ICUResourceBundle;
	r->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("fields")), sink);
	cVar0 = android::icu::text::RelativeDateTimeFormatter_S_Style::values({const[class].FS-Param});
	cVar1 = 0x0;
label_goto_1c:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_50;
	//    .local v4, "testStyle":Landroid/icu/text/RelativeDateTimeFormatter$Style;
	newStyle1 = android::icu::text::RelativeDateTimeFormatter::-get0({const[class].FS-Param})[cVar0[cVar1]->ordinal()];
	//    .local v0, "newStyle1":Landroid/icu/text/RelativeDateTimeFormatter$Style;
	if ( !(newStyle1) )  
		goto label_cond_4d;
	newStyle2 = android::icu::text::RelativeDateTimeFormatter::-get0({const[class].FS-Param})[newStyle1->ordinal()];
	//    .local v1, "newStyle2":Landroid/icu/text/RelativeDateTimeFormatter$Style;
	if ( !(newStyle2) )  
		goto label_cond_4d;
	if ( !(android::icu::text::RelativeDateTimeFormatter::-get0({const[class].FS-Param})[newStyle2->ordinal()]) )  
		goto label_cond_4d;
	cVar2 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Style fallback too deep")));
	// throw
	throw cVar2;
	// 269    .line 1192
	// 270    .end local v1    # "newStyle2":Landroid/icu/text/RelativeDateTimeFormatter$Style;
label_cond_4d:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_1c;
	// 276    .line 1206
	// 277    .end local v0    # "newStyle1":Landroid/icu/text/RelativeDateTimeFormatter$Style;
	// 278    .end local v4    # "testStyle":Landroid/icu/text/RelativeDateTimeFormatter$Style;
label_cond_50:
	cVar4 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData>(sink->qualitativeUnitMap, sink->styleRelUnitPatterns, this->getDateTimePattern(r));
	return cVar4;

}


