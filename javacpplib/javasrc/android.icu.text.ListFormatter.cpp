// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ListFormatter.smali
#include "java2ctype.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "android.icu.text.ListFormatter_S_Cache.h"
#include "android.icu.text.ListFormatter_S_FormattedListBuilder.h"
#include "android.icu.text.ListFormatter_S_Style.h"
#include "android.icu.text.ListFormatter.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.Collection.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"

static android::icu::text::ListFormatter::cache;
// .method static synthetic -wrap0(Ljava/lang/String;Ljava/lang/StringBuilder;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ListFormatter::_wrap0(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::StringBuilder> sb)
{
	
	//    .param p0, "pattern"    # Ljava/lang/String;
	//    .param p1, "sb"    # Ljava/lang/StringBuilder;
	return android::icu::text::ListFormatter::compilePattern(pattern, sb);

}
// .method static constructor <clinit>()V
void android::icu::text::ListFormatter::static_cinit()
{
	
	std::shared_ptr<android::icu::text::ListFormatter_S_Cache> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::ListFormatter_S_Cache>(0x0);
	android::icu::text::ListFormatter::cache = cVar0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
android::icu::text::ListFormatter::ListFormatter(std::shared_ptr<java::lang::String> two,std::shared_ptr<java::lang::String> start,std::shared_ptr<java::lang::String> middle,std::shared_ptr<java::lang::String> end)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "two"    # Ljava/lang/String;
	//    .param p2, "start"    # Ljava/lang/String;
	//    .param p3, "middle"    # Ljava/lang/String;
	//    .param p4, "end"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 070    .end annotation
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	android::icu::text::ListFormatter::(android::icu::text::ListFormatter::compilePattern(two, cVar0), android::icu::text::ListFormatter::compilePattern(start, cVar1), android::icu::text::ListFormatter::compilePattern(middle, cVar2), android::icu::text::ListFormatter::compilePattern(end, cVar3), 0x0);
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)V
android::icu::text::ListFormatter::ListFormatter(std::shared_ptr<java::lang::String> two,std::shared_ptr<java::lang::String> start,std::shared_ptr<java::lang::String> middle,std::shared_ptr<java::lang::String> end,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "two"    # Ljava/lang/String;
	//    .param p2, "start"    # Ljava/lang/String;
	//    .param p3, "middle"    # Ljava/lang/String;
	//    .param p4, "end"    # Ljava/lang/String;
	//    .param p5, "locale"    # Landroid/icu/util/ULocale;
	// 131    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->two = two;
	this->start = start;
	this->middle = middle;
	this->end = end;
	this->locale = locale;
	return;

}
// .method synthetic constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;Landroid/icu/text/ListFormatter;)V
android::icu::text::ListFormatter::ListFormatter(std::shared_ptr<java::lang::String> two,std::shared_ptr<java::lang::String> start,std::shared_ptr<java::lang::String> middle,std::shared_ptr<java::lang::String> end,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::ListFormatter> _this5)
{
	
	//    .param p1, "two"    # Ljava/lang/String;
	//    .param p2, "start"    # Ljava/lang/String;
	//    .param p3, "middle"    # Ljava/lang/String;
	//    .param p4, "end"    # Ljava/lang/String;
	//    .param p5, "locale"    # Landroid/icu/util/ULocale;
	//    .param p6, "-this5"    # Landroid/icu/text/ListFormatter;
	android::icu::text::ListFormatter::(two, start, middle, end, locale);
	return;

}
// .method private static compilePattern(Ljava/lang/String;Ljava/lang/StringBuilder;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ListFormatter::compilePattern(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::StringBuilder> sb)
{
	
	int cVar0;
	
	//    .param p0, "pattern"    # Ljava/lang/String;
	//    .param p1, "sb"    # Ljava/lang/StringBuilder;
	cVar0 = 0x2;
	return android::icu::impl::SimpleFormatterImpl::compileToStringMinMaxArguments(pattern, sb, cVar0, cVar0);

}
// .method public static getInstance()Landroid/icu/text/ListFormatter;
std::shared_ptr<android::icu::text::ListFormatter> android::icu::text::ListFormatter::getInstance()
{
	
	return android::icu::text::ListFormatter::getInstance(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/ListFormatter;
std::shared_ptr<android::icu::text::ListFormatter> android::icu::text::ListFormatter::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::ListFormatter::getInstance(locale, android::icu::text::ListFormatter_S_Style::STANDARD);

}
// .method public static getInstance(Landroid/icu/util/ULocale;Landroid/icu/text/ListFormatter$Style;)Landroid/icu/text/ListFormatter;
std::shared_ptr<android::icu::text::ListFormatter> android::icu::text::ListFormatter::getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::ListFormatter_S_Style> style)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "style"    # Landroid/icu/text/ListFormatter$Style;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 221    .end annotation
	return android::icu::text::ListFormatter::cache->get(locale, style->getName());

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/text/ListFormatter;
std::shared_ptr<android::icu::text::ListFormatter> android::icu::text::ListFormatter::getInstance(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::text::ListFormatter::getInstance(android::icu::util::ULocale::forLocale(locale), android::icu::text::ListFormatter_S_Style::STANDARD);

}
// .method format(Ljava/util/Collection;I)Landroid/icu/text/ListFormatter$FormattedListBuilder;
std::shared_ptr<android::icu::text::ListFormatter_S_FormattedListBuilder> android::icu::text::ListFormatter::format(std::shared_ptr<java::util::Collection<java::lang::Object>> items,int index)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<java::util::Iterator> it;
	int count;
	std::shared_ptr<android::icu::text::ListFormatter_S_FormattedListBuilder> builder;
	bool cVar2;
	bool cVar3;
	int idx;
	bool cVar4;
	std::shared_ptr<android::icu::text::ListFormatter_S_FormattedListBuilder> cVar5;
	std::shared_ptr<android::icu::text::ListFormatter_S_FormattedListBuilder> cVar6;
	std::shared_ptr<android::icu::text::ListFormatter_S_FormattedListBuilder> cVar8;
	bool cVar9;
	
	//    .param p2, "index"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 263        value = {
	// 264            "(",
	// 265            "Ljava/util/Collection",
	// 266            "<*>;I)",
	// 267            "Landroid/icu/text/ListFormatter$FormattedListBuilder;"
	// 268        }
	// 269    .end annotation
	//    .local p1, "items":Ljava/util/Collection;, "Ljava/util/Collection<*>;"
	cVar0 = 0x1;
	cVar1 = 0x0;
	it = items->iterator();
	//    .local v3, "it":Ljava/util/Iterator;, "Ljava/util/Iterator<*>;"
	count = items->size();
	//    .local v1, "count":I
	// switch
	{
	auto item = ( count );
	if (item == 0) goto label_pswitch_39;
	if (item == 1) goto label_pswitch_42;
	if (item == 2) goto label_pswitch_50;
	}
	if ( index )     
		goto label_cond_6d;
	cVar2 = cVar0;
label_goto_16:
	builder = std::make_shared<android::icu::text::ListFormatter_S_FormattedListBuilder>(it->next(), cVar2);
	//    .local v0, "builder":Landroid/icu/text/ListFormatter$FormattedListBuilder;
	if ( index != cVar0 )
		goto label_cond_6f;
	cVar3 = cVar0;
label_goto_22:
	builder->append(this->start, it->next(), cVar3);
	idx = 0x2;
	//    .local v2, "idx":I
label_goto_26:
	if ( idx >= ( count + -0x1) )
		goto label_cond_73;
	if ( index != idx )
		goto label_cond_71;
	cVar4 = cVar0;
label_goto_33:
	builder->append(this->middle, it->next(), cVar4);
	idx = ( idx + 0x1);
	goto label_goto_26;
	// 349    .line 209
	// 350    .end local v0    # "builder":Landroid/icu/text/ListFormatter$FormattedListBuilder;
	// 351    .end local v2    # "idx":I
label_pswitch_39:
	cVar5 = std::make_shared<android::icu::text::ListFormatter_S_FormattedListBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), cVar1);
	return cVar5;
	// 361    .line 211
label_pswitch_42:
	if ( index )     
		goto label_cond_4e;
label_goto_4a:
	cVar6 = std::make_shared<android::icu::text::ListFormatter_S_FormattedListBuilder>(it->next(), cVar0);
	return cVar6;
label_cond_4e:
	cVar0 = cVar1;
	goto label_goto_4a;
	// 381    .line 213
label_pswitch_50:
	if ( index )     
		goto label_cond_69;
	cVar9 = cVar0;
label_goto_59:
	cVar8 = std::make_shared<android::icu::text::ListFormatter_S_FormattedListBuilder>(it->next(), cVar9);
	if ( index != cVar0 )
		goto label_cond_6b;
label_goto_64:
	return cVar8->append(this->two, it->next(), cVar0);
label_cond_69:
	cVar9 = cVar1;
	goto label_goto_59;
label_cond_6b:
	cVar0 = cVar1;
	goto label_goto_64;
label_cond_6d:
	cVar2 = cVar1;
	goto label_goto_16;
	// 427    .restart local v0    # "builder":Landroid/icu/text/ListFormatter$FormattedListBuilder;
label_cond_6f:
	cVar3 = cVar1;
	goto label_goto_22;
	// 434    .restart local v2    # "idx":I
label_cond_71:
	cVar4 = cVar1;
	goto label_goto_33;
	// 441    .line 220
label_cond_73:
	if ( index != ( count + -0x1) )
		goto label_cond_82;
label_goto_7d:
	return builder->append(this->end, it->next(), cVar0);
label_cond_82:
	cVar0 = cVar1;
	goto label_goto_7d;
	// 465    .line 207
	// 466    :pswitch_data_84
	// 467    .packed-switch 0x0
	// 468        :pswitch_39
	// 469        :pswitch_42
	// 470        :pswitch_50
	// 471    .end packed-switch

}
// .method public format(Ljava/util/Collection;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ListFormatter::format(std::shared_ptr<java::util::Collection<java::lang::Object>> items)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 477        value = {
	// 478            "(",
	// 479            "Ljava/util/Collection",
	// 480            "<*>;)",
	// 481            "Ljava/lang/String;"
	// 482        }
	// 483    .end annotation
	//    .local p1, "items":Ljava/util/Collection;, "Ljava/util/Collection<*>;"
	return this->format(items, -0x1)->toString();

}
// .method public varargs format([Ljava/lang/Object;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ListFormatter::format(std::shared_ptr<std::vector<java::lang::Object>> items)
{
	
	//    .param p1, "items"    # [Ljava/lang/Object;
	return this->format(java::util::Arrays::asList(items));

}
// .method public getLocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::ListFormatter::getLocale()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 521    .end annotation
	return this->locale;

}
// .method public getPatternForNumItems(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ListFormatter::getPatternForNumItems(int count)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::util::ArrayList> list;
	int i;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar1;
	
	//    .param p1, "count"    # I
	if ( count > 0 ) 
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("count must be > 0")));
	// throw
	throw cVar0;
	// 549    .line 234
label_cond_c:
	list = std::make_shared<java::util::ArrayList>();
	//    .local v1, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	i = 0x0;
	//    .local v0, "i":I
label_goto_12:
	if ( i >= count )
		goto label_cond_2a;
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar1[0x0] = java::lang::Integer::valueOf(i);
	list->add(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("{%d}")), cVar1));
	i = ( i + 0x1);
	goto label_goto_12;
	// 587    .line 238
label_cond_2a:
	return this->format(list);

}


