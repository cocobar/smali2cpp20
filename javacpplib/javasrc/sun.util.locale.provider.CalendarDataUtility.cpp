// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\provider\CalendarDataUtility.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.LinkedHashMap.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "sun.util.locale.provider.CalendarDataUtility.h"

static sun::util::locale::provider::CalendarDataUtility::BUDDHIST_CALENDAR = std::make_shared<java::lang::String>("buddhist");
static sun::util::locale::provider::CalendarDataUtility::GREGORIAN_CALENDAR = std::make_shared<java::lang::String>("gregorian");
static sun::util::locale::provider::CalendarDataUtility::ISLAMIC_CALENDAR = std::make_shared<java::lang::String>("islamic");
static sun::util::locale::provider::CalendarDataUtility::JAPANESE_CALENDAR = std::make_shared<java::lang::String>("japanese");
static sun::util::locale::provider::CalendarDataUtility::REST_OF_STYLES;
// .method static constructor <clinit>()V
void sun::util::locale::provider::CalendarDataUtility::static_cinit()
{
	
	?;
	sun::util::locale::provider::CalendarDataUtility::REST_OF_STYLES = ?;
	return;

}
// .method private constructor <init>()V
sun::util::locale::provider::CalendarDataUtility::CalendarDataUtility()
{
	
	// 051    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static getDateFormatSymbols(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormatSymbols;
std::shared_ptr<android::icu::text::DateFormatSymbols> sun::util::locale::provider::CalendarDataUtility::getDateFormatSymbols(std::shared_ptr<java::lang::String> id,std::shared_ptr<java::util::Locale> locale)
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .local v0, "calendarType":Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::text::DateFormatSymbols>(android::icu::util::ULocale::forLocale(locale), sun::util::locale::provider::CalendarDataUtility::normalizeCalendarType(id));
	return cVar0;

}
// .method private static getNames(Ljava/lang/String;IILjava/util/Locale;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::provider::CalendarDataUtility::getNames(std::shared_ptr<java::lang::String> id,int field,int style,std::shared_ptr<java::util::Locale> locale)
{
	
	int context;
	int width;
	std::shared_ptr<android::icu::text::DateFormatSymbols> symbols;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "field"    # I
	//    .param p2, "style"    # I
	//    .param p3, "locale"    # Ljava/util/Locale;
	context = sun::util::locale::provider::CalendarDataUtility::toContext(style);
	//    .local v0, "context":I
	width = sun::util::locale::provider::CalendarDataUtility::toWidth(style);
	//    .local v2, "width":I
	symbols = sun::util::locale::provider::CalendarDataUtility::getDateFormatSymbols(id, locale);
	//    .local v1, "symbols":Landroid/icu/text/DateFormatSymbols;
	// switch
	{
	auto item = ( field );
	if (item == 0x0) goto label_sswitch_2e;
	if (item == 0x2) goto label_sswitch_29;
	if (item == 0x7) goto label_sswitch_5a;
	if (item == 0x9) goto label_sswitch_5f;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown field: ")))->append(field)->toString());
	// throw
	throw cVar0;
	// 135    .line 166
label_sswitch_29:
	return symbols->getMonths(context, width);
	// 143    .line 168
label_sswitch_2e:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_50;
	if (item == 1) goto label_pswitch_55;
	if (item == 2) goto label_pswitch_4b;
	}
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::UnsupportedOperationException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown width: ")))->append(width)->toString());
	// throw
	throw cVar2;
	// 172    .line 170
label_pswitch_4b:
	return symbols->getNarrowEras();
	// 180    .line 172
label_pswitch_50:
	return symbols->getEras();
	// 188    .line 174
label_pswitch_55:
	return symbols->getEraNames();
	// 196    .line 179
label_sswitch_5a:
	return symbols->getWeekdays(context, width);
	// 204    .line 181
label_sswitch_5f:
	return symbols->getAmPmStrings();
	// 212    .line 164
	// 213    :sswitch_data_64
	// 214    .sparse-switch
	// 215        0x0 -> :sswitch_2e
	// 216        0x2 -> :sswitch_29
	// 217        0x7 -> :sswitch_5a
	// 218        0x9 -> :sswitch_5f
	// 219    .end sparse-switch
	// 221    .line 168
	// 222    :pswitch_data_76
	// 223    .packed-switch 0x0
	// 224        :pswitch_50
	// 225        :pswitch_55
	// 226        :pswitch_4b
	// 227    .end packed-switch

}
// .method private static normalizeCalendarType(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::provider::CalendarDataUtility::normalizeCalendarType(std::shared_ptr<java::lang::String> requestID)
{
	
	//    .param p0, "requestID"    # Ljava/lang/String;
	if ( requestID->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("gregory"))) )     
		goto label_cond_12;
	if ( !(requestID->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("iso8601")))) )  
		goto label_cond_16;
label_cond_12:
	//    .local v0, "type":Ljava/lang/String;
label_goto_15:
	return type;
	// 261    .line 235
	// 262    .end local v0    # "type":Ljava/lang/String;
label_cond_16:
	if ( !(requestID->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic")))) )  
		goto label_cond_23;
	//    .restart local v0    # "type":Ljava/lang/String;
	goto label_goto_15;
	// 278    .line 238
	// 279    .end local v0    # "type":Ljava/lang/String;
label_cond_23:
	//    .restart local v0    # "type":Ljava/lang/String;
	goto label_goto_15;

}
// .method public static retrieveFieldValueName(Ljava/lang/String;IIILjava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::provider::CalendarDataUtility::retrieveFieldValueName(std::shared_ptr<java::lang::String> id,int field,int cVar2,int style,std::shared_ptr<java::util::Locale> locale)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	int cVar2;
	auto names;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "field"    # I
	//    .param p2, "value"    # I
	//    .param p3, "style"    # I
	//    .param p4, "locale"    # Ljava/util/Locale;
	cVar0 = 0x0;
	if ( field )     
		goto label_cond_12;
	cVar1 = sun::util::locale::provider::CalendarDataUtility::normalizeCalendarType(id);
	if ( !(cVar1->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("buddhist")))) )  
		goto label_cond_15;
label_cond_10:
	cVar2 = ( cVar2 + -0x1);
label_cond_12:
label_goto_12:
	if ( cVar2 >= 0 )
		goto label_cond_2a;
	return cVar0;
	// 326    .line 63
label_cond_15:
	if ( cVar1->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic"))) )     
		goto label_cond_10;
	if ( !(cVar1->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("japanese")))) )  
		goto label_cond_12;
	cVar2 = ( cVar2 + 0xe7);
	goto label_goto_12;
	// 350    .line 83
label_cond_2a:
	names = sun::util::locale::provider::CalendarDataUtility::getNames(id, field, style, locale);
	//    .local v0, "names":[Ljava/lang/String;
	if ( cVar2 <  names->size() )
		goto label_cond_32;
	return cVar0;
	// 365    .line 87
label_cond_32:
	return names[cVar2];

}
// .method public static retrieveFieldValueNames(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::Integer>> sun::util::locale::provider::CalendarDataUtility::retrieveFieldValueNames(std::shared_ptr<java::lang::String> id,int field,int style,std::shared_ptr<java::util::Locale> locale)
{
	
	int cVar0;
	std::shared_ptr<java::util::Map> names;
	std::shared_ptr<int[]> cVar1;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "field"    # I
	//    .param p2, "style"    # I
	//    .param p3, "locale"    # Ljava/util/Locale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 379        value = {
	// 380            "(",
	// 381            "Ljava/lang/String;",
	// 382            "II",
	// 383            "Ljava/util/Locale;",
	// 384            ")",
	// 385            "Ljava/util/Map",
	// 386            "<",
	// 387            "Ljava/lang/String;",
	// 388            "Ljava/lang/Integer;",
	// 389            ">;"
	// 390        }
	// 391    .end annotation
	cVar0 = 0x0;
	if ( style )     
		goto label_cond_19;
	names = sun::util::locale::provider::CalendarDataUtility::retrieveFieldValueNamesImpl(id, field, 0x1, locale);
	//    .local v0, "names":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;"
	cVar1 = sun::util::locale::provider::CalendarDataUtility::REST_OF_STYLES;
label_goto_b:
	if ( cVar0 >= cVar1->size() )
		goto label_cond_1d;
	//    .local v1, "st":I
	names->putAll(sun::util::locale::provider::CalendarDataUtility::retrieveFieldValueNamesImpl(id, field, cVar1[cVar0], locale));
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_b;
	// 430    .line 113
	// 431    .end local v0    # "names":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;"
	// 432    .end local v1    # "st":I
label_cond_19:
	names = sun::util::locale::provider::CalendarDataUtility::retrieveFieldValueNamesImpl(id, field, style, locale);
	//    .restart local v0    # "names":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;"
label_cond_1d:
	if ( !(names->isEmpty()) )  
		goto label_cond_24;
	//    .end local v0    # "names":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;"
label_cond_24:
	return names;

}
// .method private static retrieveFieldValueNamesImpl(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::Integer>> sun::util::locale::provider::CalendarDataUtility::retrieveFieldValueNamesImpl(std::shared_ptr<java::lang::String> id,int field,int style,std::shared_ptr<java::util::Locale> locale)
{
	
	auto names;
	int skipped;
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::util::LinkedHashMap> result;
	int i;
	std::shared_ptr<java::util::LinkedHashMap> cVar1;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "field"    # I
	//    .param p2, "style"    # I
	//    .param p3, "locale"    # Ljava/util/Locale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 461        value = {
	// 462            "(",
	// 463            "Ljava/lang/String;",
	// 464            "II",
	// 465            "Ljava/util/Locale;",
	// 466            ")",
	// 467            "Ljava/util/Map",
	// 468            "<",
	// 469            "Ljava/lang/String;",
	// 470            "Ljava/lang/Integer;",
	// 471            ">;"
	// 472        }
	// 473    .end annotation
	names = sun::util::locale::provider::CalendarDataUtility::getNames(id, field, style, locale);
	//    .local v1, "names":[Ljava/lang/String;
	skipped = 0x0;
	//    .local v4, "skipped":I
	0x0;
	//    .local v2, "offset":I
	if ( field )     
		goto label_cond_16;
	cVar0 = sun::util::locale::provider::CalendarDataUtility::normalizeCalendarType(id);
	if ( !(cVar0->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("buddhist")))) )  
		goto label_cond_2a;
label_cond_15:
label_cond_16:
label_goto_16:
	result = std::make_shared<java::util::LinkedHashMap>();
	//    .local v3, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;"
	i = skipped;
	//    .local v0, "i":I
label_goto_1c:
	if ( i >= names->size() )
		goto label_cond_55;
	if ( !(names[i]->isEmpty()) )  
		goto label_cond_41;
label_cond_27:
	i = ( i + 0x1);
	goto label_goto_1c;
	// 542    .line 125
	// 543    .end local v0    # "i":I
	// 544    .end local v3    # "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;"
label_cond_2a:
	if ( cVar0->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic"))) )     
		goto label_cond_15;
	if ( !(cVar0->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("japanese")))) )  
		goto label_cond_16;
	skipped = 0xe8;
	-0xe7;
	goto label_goto_16;
	// 571    .line 144
	// 572    .restart local v0    # "i":I
	// 573    .restart local v3    # "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;"
label_cond_41:
	if ( !(result->put(names[i], java::lang::Integer::valueOf((i + 0x1)))) )  
		goto label_cond_27;
	cVar1 = std::make_shared<java::util::LinkedHashMap>();
	return cVar1;
	// 596    .line 151
label_cond_55:
	return result;

}
// .method public static retrieveJavaTimeFieldValueName(Ljava/lang/String;IIILjava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::provider::CalendarDataUtility::retrieveJavaTimeFieldValueName(std::shared_ptr<java::lang::String> id,int field,int value,int style,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "field"    # I
	//    .param p2, "value"    # I
	//    .param p3, "style"    # I
	//    .param p4, "locale"    # Ljava/util/Locale;
	return sun::util::locale::provider::CalendarDataUtility::retrieveFieldValueName(id, field, value, style, locale);

}
// .method public static retrieveJavaTimeFieldValueNames(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::Integer>> sun::util::locale::provider::CalendarDataUtility::retrieveJavaTimeFieldValueNames(std::shared_ptr<java::lang::String> id,int field,int style,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "field"    # I
	//    .param p2, "style"    # I
	//    .param p3, "locale"    # Ljava/util/Locale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 625        value = {
	// 626            "(",
	// 627            "Ljava/lang/String;",
	// 628            "II",
	// 629            "Ljava/util/Locale;",
	// 630            ")",
	// 631            "Ljava/util/Map",
	// 632            "<",
	// 633            "Ljava/lang/String;",
	// 634            "Ljava/lang/Integer;",
	// 635            ">;"
	// 636        }
	// 637    .end annotation
	return sun::util::locale::provider::CalendarDataUtility::retrieveFieldValueNames(id, field, style, locale);

}
// .method private static toContext(I)I
int sun::util::locale::provider::CalendarDataUtility::toContext(int style)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "style"    # I
	// switch
	{
	auto item = ( style );
	if (item == 0x1) goto label_sswitch_1d;
	if (item == 0x2) goto label_sswitch_1d;
	if (item == 0x4) goto label_sswitch_1d;
	if (item == 0x8001) goto label_sswitch_1f;
	if (item == 0x8002) goto label_sswitch_1f;
	if (item == 0x8004) goto label_sswitch_1f;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid style: ")))->append(style)->toString());
	// throw
	throw cVar0;
	// 681    .line 219
label_sswitch_1d:
	return 0x0;
	// 687    .line 223
label_sswitch_1f:
	return 0x1;
	// 693    .line 215
	// 694    nop
	// 696    :sswitch_data_22
	// 697    .sparse-switch
	// 698        0x1 -> :sswitch_1d
	// 699        0x2 -> :sswitch_1d
	// 700        0x4 -> :sswitch_1d
	// 701        0x8001 -> :sswitch_1f
	// 702        0x8002 -> :sswitch_1f
	// 703        0x8004 -> :sswitch_1f
	// 704    .end sparse-switch

}
// .method private static toWidth(I)I
int sun::util::locale::provider::CalendarDataUtility::toWidth(int style)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "style"    # I
	// switch
	{
	auto item = ( style );
	if (item == 0x1) goto label_sswitch_1d;
	if (item == 0x2) goto label_sswitch_21;
	if (item == 0x4) goto label_sswitch_1f;
	if (item == 0x8001) goto label_sswitch_1d;
	if (item == 0x8002) goto label_sswitch_21;
	if (item == 0x8004) goto label_sswitch_1f;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid style: ")))->append(style)->toString());
	// throw
	throw cVar0;
	// 740    .line 199
label_sswitch_1d:
	return 0x0;
	// 746    .line 202
label_sswitch_1f:
	return 0x2;
	// 752    .line 205
label_sswitch_21:
	return 0x1;
	// 758    .line 196
	// 759    nop
	// 761    :sswitch_data_24
	// 762    .sparse-switch
	// 763        0x1 -> :sswitch_1d
	// 764        0x2 -> :sswitch_21
	// 765        0x4 -> :sswitch_1f
	// 766        0x8001 -> :sswitch_1d
	// 767        0x8002 -> :sswitch_21
	// 768        0x8004 -> :sswitch_1f
	// 769    .end sparse-switch

}


