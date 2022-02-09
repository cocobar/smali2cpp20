// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.MessagePattern_S_Part_S_Type.h"
#include "android.icu.text.MessagePattern_S_Part.h"
#include "android.icu.text.MessagePattern.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralFormat_S_PluralSelector.h"
#include "android.icu.text.PluralFormat_S_PluralSelectorAdapter.h"
#include "android.icu.text.PluralFormat.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.text.RbnfLenientScanner.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"

static android::icu::text::PluralFormat::_assertionsDisabled;
static android::icu::text::PluralFormat::serialVersionUID = 0x1L;
// .method static synthetic -get0(Landroid/icu/text/PluralFormat;)Landroid/icu/text/PluralRules;
std::shared_ptr<android::icu::text::PluralRules> android::icu::text::PluralFormat::_get0(std::shared_ptr<android::icu::text::PluralFormat> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/PluralFormat;
	return _this->pluralRules;

}
// .method static constructor <clinit>()V
void android::icu::text::PluralFormat::static_cinit()
{
	
	android::icu::text::PluralFormat::_assertionsDisabled = ( android::icu::text::PluralFormat()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
android::icu::text::PluralFormat::PluralFormat()
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> cVar1;
	
	cVar0 = 0x0;
	// 085    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->ulocale = cVar0;
	this->pluralRules = cVar0;
	this->pattern = cVar0;
	this->parsedValues = cVar0;
	this->numberFormat = cVar0;
	this->offset = 0x0;
	cVar1 = std::make_shared<android::icu::text::PluralFormat_S_PluralSelectorAdapter>(this, cVar0);
	this->pluralRulesWrapper = cVar1;
	this->init(cVar0, android::icu::text::PluralRules_S_PluralType::CARDINAL, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), cVar0);
	return;

}
// .method public constructor <init>(Landroid/icu/text/PluralRules;)V
android::icu::text::PluralFormat::PluralFormat(std::shared_ptr<android::icu::text::PluralRules> rules)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> cVar1;
	
	//    .param p1, "rules"    # Landroid/icu/text/PluralRules;
	cVar0 = 0x0;
	// 137    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->ulocale = cVar0;
	this->pluralRules = cVar0;
	this->pattern = cVar0;
	this->parsedValues = cVar0;
	this->numberFormat = cVar0;
	this->offset = 0x0;
	cVar1 = std::make_shared<android::icu::text::PluralFormat_S_PluralSelectorAdapter>(this, cVar0);
	this->pluralRulesWrapper = cVar1;
	this->init(rules, android::icu::text::PluralRules_S_PluralType::CARDINAL, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), cVar0);
	return;

}
// .method public constructor <init>(Landroid/icu/text/PluralRules;Ljava/lang/String;)V
android::icu::text::PluralFormat::PluralFormat(std::shared_ptr<android::icu::text::PluralRules> rules,std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> cVar1;
	
	//    .param p1, "rules"    # Landroid/icu/text/PluralRules;
	//    .param p2, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 190    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->ulocale = cVar0;
	this->pluralRules = cVar0;
	this->pattern = cVar0;
	this->parsedValues = cVar0;
	this->numberFormat = cVar0;
	this->offset = 0x0;
	cVar1 = std::make_shared<android::icu::text::PluralFormat_S_PluralSelectorAdapter>(this, cVar0);
	this->pluralRulesWrapper = cVar1;
	this->init(rules, android::icu::text::PluralRules_S_PluralType::CARDINAL, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), cVar0);
	this->applyPattern(pattern);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::PluralFormat::PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> cVar1;
	
	//    .param p1, "ulocale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	// 245    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->ulocale = cVar0;
	this->pluralRules = cVar0;
	this->pattern = cVar0;
	this->parsedValues = cVar0;
	this->numberFormat = cVar0;
	this->offset = 0x0;
	cVar1 = std::make_shared<android::icu::text::PluralFormat_S_PluralSelectorAdapter>(this, cVar0);
	this->pluralRulesWrapper = cVar1;
	this->init(cVar0, android::icu::text::PluralRules_S_PluralType::CARDINAL, ulocale, cVar0);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)V
android::icu::text::PluralFormat::PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> cVar1;
	
	//    .param p1, "ulocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "type"    # Landroid/icu/text/PluralRules$PluralType;
	cVar0 = 0x0;
	// 292    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->ulocale = cVar0;
	this->pluralRules = cVar0;
	this->pattern = cVar0;
	this->parsedValues = cVar0;
	this->numberFormat = cVar0;
	this->offset = 0x0;
	cVar1 = std::make_shared<android::icu::text::PluralFormat_S_PluralSelectorAdapter>(this, cVar0);
	this->pluralRulesWrapper = cVar1;
	this->init(cVar0, type, ulocale, cVar0);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;Ljava/lang/String;)V
android::icu::text::PluralFormat::PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type,std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> cVar1;
	
	//    .param p1, "ulocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "type"    # Landroid/icu/text/PluralRules$PluralType;
	//    .param p3, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 338    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->ulocale = cVar0;
	this->pluralRules = cVar0;
	this->pattern = cVar0;
	this->parsedValues = cVar0;
	this->numberFormat = cVar0;
	this->offset = 0x0;
	cVar1 = std::make_shared<android::icu::text::PluralFormat_S_PluralSelectorAdapter>(this, cVar0);
	this->pluralRulesWrapper = cVar1;
	this->init(cVar0, type, ulocale, cVar0);
	this->applyPattern(pattern);
	return;

}
// .method constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;Ljava/lang/String;Landroid/icu/text/NumberFormat;)V
android::icu::text::PluralFormat::PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type,std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::NumberFormat> numberFormat)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> cVar1;
	
	//    .param p1, "ulocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "type"    # Landroid/icu/text/PluralRules$PluralType;
	//    .param p3, "pattern"    # Ljava/lang/String;
	//    .param p4, "numberFormat"    # Landroid/icu/text/NumberFormat;
	cVar0 = 0x0;
	// 388    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->ulocale = cVar0;
	this->pluralRules = cVar0;
	this->pattern = cVar0;
	this->parsedValues = cVar0;
	this->numberFormat = cVar0;
	this->offset = 0x0;
	cVar1 = std::make_shared<android::icu::text::PluralFormat_S_PluralSelectorAdapter>(this, cVar0);
	this->pluralRulesWrapper = cVar1;
	this->init(cVar0, type, ulocale, numberFormat);
	this->applyPattern(pattern);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules;)V
android::icu::text::PluralFormat::PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<android::icu::text::PluralRules> rules)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> cVar1;
	
	//    .param p1, "ulocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "rules"    # Landroid/icu/text/PluralRules;
	cVar0 = 0x0;
	// 436    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->ulocale = cVar0;
	this->pluralRules = cVar0;
	this->pattern = cVar0;
	this->parsedValues = cVar0;
	this->numberFormat = cVar0;
	this->offset = 0x0;
	cVar1 = std::make_shared<android::icu::text::PluralFormat_S_PluralSelectorAdapter>(this, cVar0);
	this->pluralRulesWrapper = cVar1;
	this->init(rules, android::icu::text::PluralRules_S_PluralType::CARDINAL, ulocale, cVar0);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules;Ljava/lang/String;)V
android::icu::text::PluralFormat::PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<android::icu::text::PluralRules> rules,std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> cVar1;
	
	//    .param p1, "ulocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "rules"    # Landroid/icu/text/PluralRules;
	//    .param p3, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 484    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->ulocale = cVar0;
	this->pluralRules = cVar0;
	this->pattern = cVar0;
	this->parsedValues = cVar0;
	this->numberFormat = cVar0;
	this->offset = 0x0;
	cVar1 = std::make_shared<android::icu::text::PluralFormat_S_PluralSelectorAdapter>(this, cVar0);
	this->pluralRulesWrapper = cVar1;
	this->init(rules, android::icu::text::PluralRules_S_PluralType::CARDINAL, ulocale, cVar0);
	this->applyPattern(pattern);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;Ljava/lang/String;)V
android::icu::text::PluralFormat::PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> cVar1;
	
	//    .param p1, "ulocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 534    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->ulocale = cVar0;
	this->pluralRules = cVar0;
	this->pattern = cVar0;
	this->parsedValues = cVar0;
	this->numberFormat = cVar0;
	this->offset = 0x0;
	cVar1 = std::make_shared<android::icu::text::PluralFormat_S_PluralSelectorAdapter>(this, cVar0);
	this->pluralRulesWrapper = cVar1;
	this->init(cVar0, android::icu::text::PluralRules_S_PluralType::CARDINAL, ulocale, cVar0);
	this->applyPattern(pattern);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::PluralFormat::PluralFormat(std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> cVar1;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 583    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->ulocale = cVar0;
	this->pluralRules = cVar0;
	this->pattern = cVar0;
	this->parsedValues = cVar0;
	this->numberFormat = cVar0;
	this->offset = 0x0;
	cVar1 = std::make_shared<android::icu::text::PluralFormat_S_PluralSelectorAdapter>(this, cVar0);
	this->pluralRulesWrapper = cVar1;
	this->init(cVar0, android::icu::text::PluralRules_S_PluralType::CARDINAL, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), cVar0);
	this->applyPattern(pattern);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::text::PluralFormat::PluralFormat(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	android::icu::text::PluralFormat::(android::icu::util::ULocale::forLocale(locale));
	return;

}
// .method public constructor <init>(Ljava/util/Locale;Landroid/icu/text/PluralRules$PluralType;)V
android::icu::text::PluralFormat::PluralFormat(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .param p2, "type"    # Landroid/icu/text/PluralRules$PluralType;
	android::icu::text::PluralFormat::(android::icu::util::ULocale::forLocale(locale), type);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;Landroid/icu/text/PluralRules;)V
android::icu::text::PluralFormat::PluralFormat(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::PluralRules> rules)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .param p2, "rules"    # Landroid/icu/text/PluralRules;
	android::icu::text::PluralFormat::(android::icu::util::ULocale::forLocale(locale), rules);
	return;

}
// .method static findSubMessage(Landroid/icu/text/MessagePattern;ILandroid/icu/text/PluralFormat$PluralSelector;Ljava/lang/Object;D)I
int android::icu::text::PluralFormat::findSubMessage(std::shared_ptr<android::icu::text::MessagePattern> pattern,int cVar0,std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelector> selector,std::shared_ptr<java::lang::Object> context,double number)
{
	
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	int cVar0;
	std::shared_ptr<java::lang::String> keyword;
	int haveKeywordMatch;
	int msgStart;
	auto type;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	//    .param p0, "pattern"    # Landroid/icu/text/MessagePattern;
	//    .param p1, "partIndex"    # I
	//    .param p2, "selector"    # Landroid/icu/text/PluralFormat$PluralSelector;
	//    .param p3, "context"    # Ljava/lang/Object;
	//    .param p4, "number"    # D
	//    .local v0, "count":I
	part = pattern->getPart(cVar0);
	//    .local v6, "part":Landroid/icu/text/MessagePattern$Part;
	if ( !(part->getType()->hasNumericValue()) )  
		goto label_cond_2b;
	//    .local v4, "offset":D
	cVar0 = ( cVar0 + 0x1);
label_goto_18:
	keyword = 0x0;
	//    .local v2, "keyword":Ljava/lang/String;
	haveKeywordMatch = 0x0;
	//    .local v1, "haveKeywordMatch":Z
	msgStart = 0x0;
	//    .end local v2    # "keyword":Ljava/lang/String;
	//    .local v3, "msgStart":I
label_goto_1b:
	cVar0 = ( cVar0 + 0x1);
	//    .end local p1    # "partIndex":I
	//    .local v7, "partIndex":I
	part = pattern->getPart(cVar0);
	type = part->getType();
	//    .local v8, "type":Landroid/icu/text/MessagePattern$Part$Type;
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_LIMIT )
		goto label_cond_2e;
	cVar0 = cVar0;
	//    .end local v7    # "partIndex":I
	//    .restart local p1    # "partIndex":I
label_cond_2a:
	return msgStart;
	// 764    .line 441
	// 765    .end local v1    # "haveKeywordMatch":Z
	// 766    .end local v3    # "msgStart":I
	// 767    .end local v4    # "offset":D
	// 768    .end local v8    # "type":Landroid/icu/text/MessagePattern$Part$Type;
label_cond_2b:
	0x0;
	//    .restart local v4    # "offset":D
	goto label_goto_18;
	// 775    .line 471
	// 776    .end local p1    # "partIndex":I
	// 777    .restart local v1    # "haveKeywordMatch":Z
	// 778    .restart local v3    # "msgStart":I
	// 779    .restart local v7    # "partIndex":I
	// 780    .restart local v8    # "type":Landroid/icu/text/MessagePattern$Part$Type;
label_cond_2e:
	if ( android::icu::text::PluralFormat::_assertionsDisabled )     
		goto label_cond_3c;
	if ( type == android::icu::text::MessagePattern_S_Part_S_Type::ARG_SELECTOR )
		goto label_cond_3c;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 796    .line 473
label_cond_3c:
	if ( !(pattern->getPartType(cVar0)->hasNumericValue()) )  
		goto label_cond_55;
	cVar0 = ( cVar0 + 0x1);
	//    .end local v7    # "partIndex":I
	//    .restart local p1    # "partIndex":I
	if ( (number < pattern->getNumericValue(pattern->getPart(cVar0))) )     
		goto label_cond_70;
	return cVar0;
	// 829    .line 480
	// 830    .end local p1    # "partIndex":I
	// 831    .restart local v7    # "partIndex":I
label_cond_55:
	if ( haveKeywordMatch )     
		goto label_cond_9d;
	if ( !(pattern->partSubstringMatches(part, std::make_shared<java::lang::String>(std::make_shared<char[]>("other")))) )  
		goto label_cond_7b;
	if ( msgStart )     
		goto label_cond_9d;
	msgStart = cVar0;
	if ( !(keyword) )  
		goto label_cond_79;
	if ( !(keyword->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")))) )  
		goto label_cond_9d;
	0x1;
	cVar0 = cVar0;
	//    .end local v7    # "partIndex":I
	//    .restart local p1    # "partIndex":I
label_cond_70:
label_goto_70:
	cVar0 = pattern->getLimitPartIndex(cVar0);
	cVar0 = ( cVar0 + 0x1);
	if ( cVar0 >= pattern->countParts() )
		goto label_cond_2a;
	goto label_goto_1b;
	// 882    .end local p1    # "partIndex":I
	// 883    .restart local v7    # "partIndex":I
label_cond_79:
	cVar0 = cVar0;
	//    .end local v7    # "partIndex":I
	//    .restart local p1    # "partIndex":I
	goto label_goto_70;
	// 892    .line 494
	// 893    .end local p1    # "partIndex":I
	// 894    .restart local v7    # "partIndex":I
label_cond_7b:
	if ( keyword )     
		goto label_cond_8f;
	keyword = selector->select(context, (number -  pattern->getNumericValue(part)));
	//    .local v2, "keyword":Ljava/lang/String;
	if ( !(msgStart) )  
		goto label_cond_8f;
	if ( !(keyword->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")))) )  
		goto label_cond_8f;
	//    .end local v2    # "keyword":Ljava/lang/String;
label_cond_8f:
	if ( haveKeywordMatch )     
		goto label_cond_9b;
	if ( !(pattern->partSubstringMatches(part, keyword)) )  
		goto label_cond_9d;
	msgStart = cVar0;
	0x1;
	cVar0 = cVar0;
	//    .end local v7    # "partIndex":I
	//    .restart local p1    # "partIndex":I
	goto label_goto_70;
	// 943    .end local p1    # "partIndex":I
	// 944    .restart local v7    # "partIndex":I
label_cond_9b:
	cVar0 = cVar0;
	//    .end local v7    # "partIndex":I
	//    .restart local p1    # "partIndex":I
	goto label_goto_70;
	// 953    .end local p1    # "partIndex":I
	// 954    .restart local v7    # "partIndex":I
label_cond_9d:
	cVar0 = cVar0;
	//    .end local v7    # "partIndex":I
	//    .restart local p1    # "partIndex":I
	goto label_goto_70;

}
// .method private format(Ljava/lang/Number;D)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralFormat::format(std::shared_ptr<java::lang::Number> numberObject,double number)
{
	
	double numberMinusOffset;
	std::shared_ptr<android::icu::text::NumberFormat> cVar0;
	int partIndex;
	std::shared_ptr<java::lang::StringBuilder> result;
	int prevIndex;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> part;
	auto type;
	int index;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> dec;
	
	//    .param p1, "numberObject"    # Ljava/lang/Number;
	//    .param p2, "number"    # D
	if ( !(this->msgPattern) )  
		goto label_cond_10;
	if ( this->msgPattern->countParts() )     
		goto label_cond_1b;
label_cond_10:
	return this->numberFormat->format(numberObject);
	// 1000    .line 597
label_cond_1b:
	numberMinusOffset = (number -  this->offset);
	//    .local v10, "numberMinusOffset":D
	if ( (this->offset < 0x0) )     
		goto label_cond_86;
	//    .local v9, "numberString":Ljava/lang/String;
label_goto_35:
	if ( !(this->numberFormat->instanceOf("android::icu::text::DecimalFormat")) )  
		goto label_cond_8f;
	cVar0 = this->numberFormat;
	cVar0->checkCast("android::icu::text::DecimalFormat");
	//    .local v5, "dec":Landroid/icu/text/PluralRules$FixedDecimal;
label_goto_47:
	partIndex = android::icu::text::PluralFormat::findSubMessage(this->msgPattern, 0x0, this->pluralRulesWrapper, dec, number);
	//    .local v13, "partIndex":I
	result = 0x0;
	//    .local v15, "result":Ljava/lang/StringBuilder;
	prevIndex = this->msgPattern->getPart(partIndex)->getLimit();
	//    .end local v15    # "result":Ljava/lang/StringBuilder;
	//    .local v14, "prevIndex":I
label_cond_63:
label_goto_63:
	partIndex = ( partIndex + 0x1);
	part = this->msgPattern->getPart(partIndex);
	//    .local v12, "part":Landroid/icu/text/MessagePattern$Part;
	type = part->getType();
	//    .local v16, "type":Landroid/icu/text/MessagePattern$Part$Type;
	index = part->getIndex();
	//    .local v8, "index":I
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT )
		goto label_cond_a2;
	if ( result )     
		goto label_cond_95;
	return this->pattern->substring(prevIndex, index);
	// 1139    .line 602
	// 1140    .end local v5    # "dec":Landroid/icu/text/PluralRules$FixedDecimal;
	// 1141    .end local v8    # "index":I
	// 1142    .end local v9    # "numberString":Ljava/lang/String;
	// 1143    .end local v12    # "part":Landroid/icu/text/MessagePattern$Part;
	// 1144    .end local v13    # "partIndex":I
	// 1145    .end local v14    # "prevIndex":I
	// 1146    .end local v16    # "type":Landroid/icu/text/MessagePattern$Part$Type;
label_cond_86:
	this->numberFormat->format(numberMinusOffset);
	//    .restart local v9    # "numberString":Ljava/lang/String;
	goto label_goto_35;
	// 1159    .line 608
label_cond_8f:
	dec = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(numberMinusOffset);
	//    .restart local v5    # "dec":Landroid/icu/text/PluralRules$FixedDecimal;
	goto label_goto_47;
	// 1168    .line 623
	// 1169    .restart local v8    # "index":I
	// 1170    .restart local v12    # "part":Landroid/icu/text/MessagePattern$Part;
	// 1171    .restart local v13    # "partIndex":I
	// 1172    .restart local v14    # "prevIndex":I
	// 1173    .restart local v16    # "type":Landroid/icu/text/MessagePattern$Part$Type;
label_cond_95:
	return result->append(this->pattern, prevIndex, index)->toString();
	// 1189    .line 625
label_cond_a2:
	if ( type == android::icu::text::MessagePattern_S_Part_S_Type::REPLACE_NUMBER )
		goto label_cond_b8;
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::SKIP_SYNTAX )
		goto label_cond_d4;
	if ( !(this->msgPattern->jdkAposMode()) )  
		goto label_cond_d4;
label_cond_b8:
	if ( result )     
		goto label_cond_bf;
	result = std::make_shared<java::lang::StringBuilder>();
label_cond_bf:
	result->append(this->pattern, prevIndex, index);
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::REPLACE_NUMBER )
		goto label_cond_cf;
	result->append(this->numberFormat->format(numberObject));
label_cond_cf:
	prevIndex = part->getLimit();
	goto label_goto_63;
	// 1250    .line 636
label_cond_d4:
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_START )
		goto label_cond_63;
	if ( result )     
		goto label_cond_e1;
	result = std::make_shared<java::lang::StringBuilder>();
label_cond_e1:
	result->append(this->pattern, prevIndex, index);
	prevIndex = index;
	partIndex = this->msgPattern->getLimitPartIndex(partIndex);
	index = this->msgPattern->getPart(partIndex)->getLimit();
	android::icu::text::MessagePattern::appendReducedApostrophes(this->pattern, prevIndex, index, result);
	prevIndex = index;
	goto label_goto_63;

}
// .method private init(Landroid/icu/text/PluralRules;Landroid/icu/text/PluralRules$PluralType;Landroid/icu/util/ULocale;Landroid/icu/text/NumberFormat;)V
void android::icu::text::PluralFormat::init(std::shared_ptr<android::icu::text::PluralRules> cVar0,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::NumberFormat> cVar1)
{
	
	std::shared_ptr<android::icu::text::PluralRules> cVar0;
	std::shared_ptr<android::icu::text::NumberFormat> cVar1;
	
	//    .param p1, "rules"    # Landroid/icu/text/PluralRules;
	//    .param p2, "type"    # Landroid/icu/text/PluralRules$PluralType;
	//    .param p3, "locale"    # Landroid/icu/util/ULocale;
	//    .param p4, "numberFormat"    # Landroid/icu/text/NumberFormat;
	this->ulocale = locale;
	if ( cVar0 )     
		goto label_cond_a;
	cVar0 = android::icu::text::PluralRules::forLocale(this->ulocale, type);
	//    .end local p1    # "rules":Landroid/icu/text/PluralRules;
label_cond_a:
	this->pluralRules = cVar0;
	this->resetPattern();
	if ( cVar1 )     
		goto label_cond_17;
	cVar1 = android::icu::text::NumberFormat::getInstance(this->ulocale);
	//    .end local p4    # "numberFormat":Landroid/icu/text/NumberFormat;
label_cond_17:
	this->numberFormat = cVar1;
	return;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::PluralFormat::readObject(std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> cVar0;
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> cVar1;
	
	//    .param p1, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1360        value = {
	// 1361            Ljava/io/IOException;,
	// 1362            Ljava/lang/ClassNotFoundException;
	// 1363        }
	// 1364    .end annotation
	cVar0 = 0x0;
	in->defaultReadObject();
	cVar1 = std::make_shared<android::icu::text::PluralFormat_S_PluralSelectorAdapter>(this, cVar0);
	this->pluralRulesWrapper = cVar1;
	this->parsedValues = cVar0;
	if ( !(this->pattern) )  
		goto label_cond_16;
	this->applyPattern(this->pattern);
label_cond_16:
	return;

}
// .method private resetPattern()V
void android::icu::text::PluralFormat::resetPattern()
{
	
	this->pattern = 0x0;
	if ( !(this->msgPattern) )  
		goto label_cond_c;
	this->msgPattern->clear();
label_cond_c:
	this->offset = 0x0;
	return;

}
// .method public applyPattern(Ljava/lang/String;)V
void android::icu::text::PluralFormat::applyPattern(std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<android::icu::text::MessagePattern> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	this->pattern = pattern;
	if ( this->msgPattern )     
		goto label_cond_d;
	cVar0 = std::make_shared<android::icu::text::MessagePattern>();
	this->msgPattern = cVar0;
label_cond_d:
	try {
	//label_try_start_d:
	this->msgPattern->parsePluralStyle(pattern);
	this->offset = this->msgPattern->getPluralOffset(0x0);
	//label_try_end_1b:
	}
	catch (java::lang::RuntimeException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c;
	}
	//    .catch Ljava/lang/RuntimeException; {:try_start_d .. :try_end_1b} :catch_1c
	return;
	// 1471    .line 406
label_catch_1c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/RuntimeException;
	this->resetPattern();
	// throw
	throw;

}
// .method public equals(Landroid/icu/text/PluralFormat;)Z
bool android::icu::text::PluralFormat::equals(std::shared_ptr<android::icu::text::PluralFormat> rhs)
{
	
	//    .param p1, "rhs"    # Landroid/icu/text/PluralFormat;
	return this->equals(rhs);

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::PluralFormat::equals(std::shared_ptr<java::lang::Object> rhs)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::PluralFormat> pf;
	
	//    .param p1, "rhs"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( this != rhs )
		goto label_cond_5;
	return 0x1;
	// 1511    .line 799
label_cond_5:
	if ( !(rhs) )  
		goto label_cond_11;
	if ( this->getClass() == rhs->getClass() )
		goto label_cond_12;
label_cond_11:
	return cVar1;
label_cond_12:
	pf = rhs;
	pf->checkCast("android::icu::text::PluralFormat");
	//    .local v0, "pf":Landroid/icu/text/PluralFormat;
	if ( !(android::icu::impl::Utility::objectEquals(this->ulocale, pf->ulocale)) )  
		goto label_cond_3b;
	if ( !(android::icu::impl::Utility::objectEquals(this->pluralRules, pf->pluralRules)) )  
		goto label_cond_3b;
	if ( !(android::icu::impl::Utility::objectEquals(this->msgPattern, pf->msgPattern)) )  
		goto label_cond_3b;
	cVar1 = android::icu::impl::Utility::objectEquals(this->numberFormat, pf->numberFormat);
label_cond_3b:
	return cVar1;

}
// .method public final format(D)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralFormat::format(double number)
{
	
	//    .param p1, "number"    # D
	return this->format(java::lang::Double::valueOf(number), number);

}
// .method public format(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::PluralFormat::format(std::shared_ptr<java::lang::Object> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::Number> numberObject;
	
	//    .param p1, "number"    # Ljava/lang/Object;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	if ( number->instanceOf("java::lang::Number") )     
		goto label_cond_25;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->append(number)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' is not a Number")))->toString());
	// throw
	throw cVar0;
label_cond_25:
	numberObject = number;
	numberObject->checkCast("java::lang::Number");
	//    .local v0, "numberObject":Ljava/lang/Number;
	toAppendTo->append(this->format(numberObject, numberObject->doubleValue()));
	return toAppendTo;

}
// .method public hashCode()I
int android::icu::text::PluralFormat::hashCode()
{
	
	return (this->pluralRules->hashCode() ^  this->parsedValues->hashCode());

}
// .method public parse(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::PluralFormat::parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}
// .method public parseObject(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::PluralFormat::parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}
// .method parseType(Ljava/lang/String;Landroid/icu/text/RbnfLenientScanner;Ljava/text/FieldPosition;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralFormat::parseType(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::RbnfLenientScanner> scanner,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	int startingAt;
	std::shared_ptr<java::lang::String> keyword;
	std::shared_ptr<java::lang::String> matchedWord;
	int matchedIndex;
	int partIndex;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> partStart;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> partLimit;
	std::shared_ptr<java::lang::String> currArg;
	int currMatchIndex;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "scanner"    # Landroid/icu/text/RbnfLenientScanner;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	if ( !(this->msgPattern) )  
		goto label_cond_10;
	if ( this->msgPattern->countParts() )     
		goto label_cond_1e;
label_cond_10:
	pos->setBeginIndex(-0x1);
	pos->setEndIndex(-0x1);
	return 0x0;
	// 1761    .line 693
label_cond_1e:
	//    .local v8, "partIndex":I
	//    .local v2, "count":I
	//    .local v14, "startingAt":I
	if ( pos->getBeginIndex() >= 0 )
		goto label_cond_2e;
	startingAt = 0x0;
label_cond_2e:
	keyword = 0x0;
	//    .local v5, "keyword":Ljava/lang/String;
	matchedWord = 0x0;
	//    .local v7, "matchedWord":Ljava/lang/String;
	matchedIndex = -0x1;
	//    .local v6, "matchedIndex":I
	partIndex = 0x0;
	//    .end local v5    # "keyword":Ljava/lang/String;
	//    .end local v7    # "matchedWord":Ljava/lang/String;
	//    .end local v8    # "partIndex":I
	//    .local v9, "partIndex":I
label_cond_32:
label_goto_32:
	if ( partIndex >= this->msgPattern->countParts() )
		goto label_cond_bf;
	partIndex = ( partIndex + 0x1);
	//    .end local v9    # "partIndex":I
	//    .restart local v8    # "partIndex":I
	//    .local v11, "partSelector":Landroid/icu/text/MessagePattern$Part;
	if ( this->msgPattern->getPart(partIndex)->getType() == android::icu::text::MessagePattern_S_Part_S_Type::ARG_SELECTOR )
		goto label_cond_4a;
	partIndex = partIndex;
	//    .end local v8    # "partIndex":I
	//    .restart local v9    # "partIndex":I
	goto label_goto_32;
	// 1844    .line 717
	// 1845    .end local v9    # "partIndex":I
	// 1846    .restart local v8    # "partIndex":I
label_cond_4a:
	partIndex = ( partIndex + 0x1);
	//    .end local v8    # "partIndex":I
	//    .restart local v9    # "partIndex":I
	partStart = this->msgPattern->getPart(partIndex);
	//    .local v12, "partStart":Landroid/icu/text/MessagePattern$Part;
	if ( partStart->getType() != android::icu::text::MessagePattern_S_Part_S_Type::MSG_START )
		goto label_cond_32;
	partIndex = ( partIndex + 0x1);
	//    .end local v9    # "partIndex":I
	//    .restart local v8    # "partIndex":I
	partLimit = this->msgPattern->getPart(partIndex);
	//    .local v10, "partLimit":Landroid/icu/text/MessagePattern$Part;
	if ( partLimit->getType() == android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT )
		goto label_cond_74;
	partIndex = partIndex;
	//    .end local v8    # "partIndex":I
	//    .restart local v9    # "partIndex":I
	goto label_goto_32;
	// 1904    .line 729
	// 1905    .end local v9    # "partIndex":I
	// 1906    .restart local v8    # "partIndex":I
label_cond_74:
	currArg = this->pattern->substring(partStart->getLimit(), partLimit->getIndex());
	//    .local v3, "currArg":Ljava/lang/String;
	if ( !(scanner) )  
		goto label_cond_b8;
	//    .local v13, "scannerMatchResult":[I
	currMatchIndex = scanner->findText(source, currArg, startingAt)[0x0];
	//    .end local v13    # "scannerMatchResult":[I
	//    .local v4, "currMatchIndex":I
label_goto_91:
	if ( currMatchIndex < 0 ) 
		goto label_cond_b5;
	if ( currMatchIndex <  matchedIndex )
		goto label_cond_b5;
	if ( !(matchedWord) )  
		goto label_cond_a3;
	if ( currArg->length() <= matchedWord->length() )
		goto label_cond_b5;
label_cond_a3:
	matchedIndex = currMatchIndex;
	matchedWord = currArg;
	//    .local v7, "matchedWord":Ljava/lang/String;
	this->pattern->substring(partStart->getLimit(), partLimit->getIndex());
	//    .end local v7    # "matchedWord":Ljava/lang/String;
label_cond_b5:
	partIndex = partIndex;
	//    .end local v8    # "partIndex":I
	//    .restart local v9    # "partIndex":I
	goto label_goto_32;
	// 1998    .line 736
	// 1999    .end local v4    # "currMatchIndex":I
	// 2000    .end local v9    # "partIndex":I
	// 2001    .restart local v8    # "partIndex":I
label_cond_b8:
	//    .restart local v4    # "currMatchIndex":I
	goto label_goto_91;
	// 2012    .line 744
	// 2013    .end local v3    # "currArg":Ljava/lang/String;
	// 2014    .end local v4    # "currMatchIndex":I
	// 2015    .end local v8    # "partIndex":I
	// 2016    .end local v10    # "partLimit":Landroid/icu/text/MessagePattern$Part;
	// 2017    .end local v11    # "partSelector":Landroid/icu/text/MessagePattern$Part;
	// 2018    .end local v12    # "partStart":Landroid/icu/text/MessagePattern$Part;
	// 2019    .restart local v9    # "partIndex":I
label_cond_bf:
	if ( !(keyword) )  
		goto label_cond_d1;
	pos->setBeginIndex(matchedIndex);
	pos->setEndIndex((matchedWord->length() +  matchedIndex));
	return keyword;
	// 2042    .line 751
label_cond_d1:
	pos->setBeginIndex(-0x1);
	pos->setEndIndex(-0x1);
	return 0x0;

}
// .method public setLocale(Landroid/icu/util/ULocale;)V
void android::icu::text::PluralFormat::setLocale(std::shared_ptr<android::icu::util::ULocale> cVar1)
{
	
	std::shared_ptr<android::icu::text::PluralRules> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p1, "ulocale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2067    .end annotation
	cVar0 = 0x0;
	if ( cVar1 )     
		goto label_cond_9;
	cVar1 = android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT);
label_cond_9:
	this->init(cVar0, android::icu::text::PluralRules_S_PluralType::CARDINAL, cVar1, cVar0);
	return;

}
// .method public setNumberFormat(Landroid/icu/text/NumberFormat;)V
void android::icu::text::PluralFormat::setNumberFormat(std::shared_ptr<android::icu::text::NumberFormat> format)
{
	
	//    .param p1, "format"    # Landroid/icu/text/NumberFormat;
	this->numberFormat = format;
	return;

}
// .method public toPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralFormat::toPattern()
{
	
	return this->pattern;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralFormat::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("locale=")))->append(this->ulocale);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", rules=\'")))->append(this->pluralRules)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")));
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", pattern=\'")))->append(this->pattern)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")));
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", format=\'")))->append(this->numberFormat)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")));
	return buf->toString();

}


