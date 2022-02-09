// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleMatcher$LocalePatternMatcher.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.util.LocaleMatcher_S_Level.h"
#include "android.icu.util.LocaleMatcher_S_LocalePatternMatcher.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.regex.Matcher.h"
#include "java.util.regex.Pattern.h"

static android::icu::util::LocaleMatcher_S_LocalePatternMatcher::pattern;
// .method static synthetic -get0(Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::LocaleMatcher_S_LocalePatternMatcher::_get0(std::shared_ptr<android::icu::util::LocaleMatcher_S_LocalePatternMatcher> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;
	return _this->lang;

}
// .method static constructor <clinit>()V
void android::icu::util::LocaleMatcher_S_LocalePatternMatcher::static_cinit()
{
	
	android::icu::util::LocaleMatcher_S_LocalePatternMatcher::pattern = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("([a-z]{1,8}|\\*)(?:[_-]([A-Z][a-z]{3}|\\*))?(?:[_-]([A-Z]{2}|[0-9]{3}|\\*))?")));
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::util::LocaleMatcher_S_LocalePatternMatcher::LocaleMatcher_S_LocalePatternMatcher(std::shared_ptr<java::lang::String> toMatch)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::util::regex::Matcher> matcher;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> cVar3;
	
	//    .param p1, "toMatch"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 068    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	matcher = android::icu::util::LocaleMatcher_S_LocalePatternMatcher::pattern->matcher(toMatch);
	//    .local v0, "matcher":Ljava/util/regex/Matcher;
	if ( matcher->matches() )     
		goto label_cond_2a;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad pattern: ")))->append(toMatch)->toString());
	// throw
	throw cVar1;
	// 110    .line 395
label_cond_2a:
	this->lang = matcher->group(0x1);
	this->script = matcher->group(0x2);
	this->region = matcher->group(0x3);
	if ( !(this->region) )  
		goto label_cond_77;
	cVar3 = android::icu::util::LocaleMatcher_S_Level::region;
label_goto_45:
	this->level = cVar3;
	if ( !(this->lang->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("*")))) )  
		goto label_cond_54;
	this->lang = cVar0;
label_cond_54:
	if ( !(this->script) )  
		goto label_cond_65;
	if ( !(this->script->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("*")))) )  
		goto label_cond_65;
	this->script = cVar0;
label_cond_65:
	if ( !(this->region) )  
		goto label_cond_76;
	if ( !(this->region->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("*")))) )  
		goto label_cond_76;
	this->region = cVar0;
label_cond_76:
	return;
	// 204    .line 398
label_cond_77:
	if ( !(this->script) )  
		goto label_cond_7e;
	cVar3 = android::icu::util::LocaleMatcher_S_Level::script;
	goto label_goto_45;
label_cond_7e:
	cVar3 = android::icu::util::LocaleMatcher_S_Level::language;
	goto label_goto_45;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::LocaleMatcher_S_LocalePatternMatcher::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LocalePatternMatcher> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( obj != this )
		goto label_cond_5;
	return 0x1;
	// 237    .line 459
label_cond_5:
	if ( !(obj) )  
		goto label_cond_d;
	if ( !(( obj->instanceOf("android::icu::util::LocaleMatcher_S_LocalePatternMatcher") ^ 0x1)) )  
		goto label_cond_e;
label_cond_d:
	return cVar1;
label_cond_e:
	other = obj;
	other->checkCast("android::icu::util::LocaleMatcher_S_LocalePatternMatcher");
	//    .local v0, "other":Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;
	if ( !(android::icu::impl::Utility::objectEquals(this->level, other->level)) )  
		goto label_cond_37;
	if ( !(android::icu::impl::Utility::objectEquals(this->lang, other->lang)) )  
		goto label_cond_37;
	if ( !(android::icu::impl::Utility::objectEquals(this->script, other->script)) )  
		goto label_cond_37;
	cVar1 = android::icu::impl::Utility::objectEquals(this->region, other->region);
label_cond_37:
	return cVar1;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::LocaleMatcher_S_LocalePatternMatcher::getLanguage()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	if ( this->lang )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = this->lang;
	goto label_goto_7;

}
// .method public getLevel()Landroid/icu/util/LocaleMatcher$Level;
std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> android::icu::util::LocaleMatcher_S_LocalePatternMatcher::getLevel()
{
	
	return this->level;

}
// .method public getRegion()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::LocaleMatcher_S_LocalePatternMatcher::getRegion()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	if ( this->region )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = this->region;
	goto label_goto_7;

}
// .method public getScript()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::LocaleMatcher_S_LocalePatternMatcher::getScript()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	if ( this->script )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = this->script;
	goto label_goto_7;

}
// .method public hashCode()I
int android::icu::util::LocaleMatcher_S_LocalePatternMatcher::hashCode()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	
	cVar0 = 0x0;
	if ( this->lang )     
		goto label_cond_19;
	cVar1 = cVar0;
label_goto_c:
	if ( this->script )     
		goto label_cond_20;
	cVar2 = cVar0;
label_goto_12:
	if ( this->region )     
		goto label_cond_27;
label_goto_17:
	return ((cVar2 ^  (this->level->ordinal() ^  cVar1)) ^  cVar0);
	// 423    .line 475
label_cond_19:
	cVar1 = this->lang->hashCode();
	goto label_goto_c;
	// 433    .line 476
label_cond_20:
	cVar2 = this->script->hashCode();
	goto label_goto_12;
	// 443    .line 477
label_cond_27:
	cVar0 = this->region->hashCode();
	goto label_goto_17;

}
// .method matches(Landroid/icu/util/ULocale;)Z
bool android::icu::util::LocaleMatcher_S_LocalePatternMatcher::matches(std::shared_ptr<android::icu::util::ULocale> ulocale)
{
	
	bool cVar0;
	
	//    .param p1, "ulocale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	if ( !(this->lang) )  
		goto label_cond_14;
	if ( !(( this->lang->equals(ulocale->getLanguage()) ^ 0x1)) )  
		goto label_cond_14;
	return cVar0;
	// 483    .line 415
label_cond_14:
	if ( !(this->script) )  
		goto label_cond_27;
	if ( !(( this->script->equals(ulocale->getScript()) ^ 0x1)) )  
		goto label_cond_27;
	return cVar0;
	// 506    .line 418
label_cond_27:
	if ( !(this->region) )  
		goto label_cond_3a;
	if ( !(( this->region->equals(ulocale->getCountry()) ^ 0x1)) )  
		goto label_cond_3a;
	return cVar0;
	// 529    .line 421
label_cond_3a:
	return 0x1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::LocaleMatcher_S_LocalePatternMatcher::toString()
{
	
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	result = this->getLanguage();
	//    .local v0, "result":Ljava/lang/String;
	if ( this->level == android::icu::util::LocaleMatcher_S_Level::language )
		goto label_cond_48;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	result = cVar0->append(result)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(this->getScript())->toString();
	if ( this->level == android::icu::util::LocaleMatcher_S_Level::script )
		goto label_cond_48;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
label_cond_48:
	return result;

}


