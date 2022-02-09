// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$Builder.smali
#include "java2ctype.h"
#include "android.icu.lang.UScript.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder.h"
#include "android.icu.text.SpoofChecker_S_Builder.h"
#include "android.icu.text.SpoofChecker_S_RestrictionLevel.h"
#include "android.icu.text.SpoofChecker_S_SpoofData.h"
#include "android.icu.text.SpoofChecker.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ULocale.h"
#include "java.io.Reader.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashSet.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

// .method public constructor <init>()V
android::icu::text::SpoofChecker_S_Builder::SpoofChecker_S_Builder()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<java::util::LinkedHashSet> cVar1;
	
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(0x0, 0x10ffff);
	this->fAllowedCharsSet = cVar0;
	cVar1 = std::make_shared<java::util::LinkedHashSet>();
	this->fAllowedLocales = cVar1;
	this->fChecks = -0x1;
	this->fSpoofData = 0x0;
	this->fRestrictionLevel = android::icu::text::SpoofChecker_S_RestrictionLevel::HIGHLY_RESTRICTIVE;
	return;

}
// .method public constructor <init>(Landroid/icu/text/SpoofChecker;)V
android::icu::text::SpoofChecker_S_Builder::SpoofChecker_S_Builder(std::shared_ptr<android::icu::text::SpoofChecker> src)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<java::util::LinkedHashSet> cVar1;
	
	//    .param p1, "src"    # Landroid/icu/text/SpoofChecker;
	// 095    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(0x0, 0x10ffff);
	this->fAllowedCharsSet = cVar0;
	cVar1 = std::make_shared<java::util::LinkedHashSet>();
	this->fAllowedLocales = cVar1;
	this->fChecks = android::icu::text::SpoofChecker::-get2(src);
	this->fSpoofData = android::icu::text::SpoofChecker::-get4(src);
	this->fAllowedCharsSet->set(android::icu::text::SpoofChecker::-get0(src));
	this->fAllowedLocales->addAll(android::icu::text::SpoofChecker::-get1(src));
	this->fRestrictionLevel = android::icu::text::SpoofChecker::-get3(src);
	return;

}
// .method private addScriptChars(Landroid/icu/util/ULocale;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::SpoofChecker_S_Builder::addScriptChars(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::UnicodeSet> allowedChars)
{
	
	auto scripts;
	std::shared_ptr<android::icu::text::UnicodeSet> tmpSet;
	int i;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "allowedChars"    # Landroid/icu/text/UnicodeSet;
	scripts = android::icu::lang::UScript::getCode(locale);
	//    .local v1, "scripts":[I
	if ( !(scripts) )  
		goto label_cond_1c;
	tmpSet = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v2, "tmpSet":Landroid/icu/text/UnicodeSet;
	i = 0x0;
	//    .local v0, "i":I
label_goto_c:
	if ( i >= scripts->size() )
		goto label_cond_1c;
	tmpSet->applyIntPropertyValue(0x100a, scripts[i]);
	allowedChars->addAll(tmpSet);
	i = ( i + 0x1);
	goto label_goto_c;
	// 203    .line 689
	// 204    .end local v0    # "i":I
	// 205    .end local v2    # "tmpSet":Landroid/icu/text/UnicodeSet;
label_cond_1c:
	return;

}
// .method public build()Landroid/icu/text/SpoofChecker;
std::shared_ptr<android::icu::text::SpoofChecker> android::icu::text::SpoofChecker_S_Builder::build()
{
	
	std::shared_ptr<android::icu::text::SpoofChecker> result;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<java::util::HashSet> cVar1;
	
	if ( this->fSpoofData )     
		goto label_cond_b;
	this->fSpoofData = android::icu::text::SpoofChecker_S_SpoofData::getDefault({const[class].FS-Param});
label_cond_b:
	result = std::make_shared<android::icu::text::SpoofChecker>(0x0);
	//    .local v0, "result":Landroid/icu/text/SpoofChecker;
	android::icu::text::SpoofChecker::-set2(result, this->fChecks);
	android::icu::text::SpoofChecker::-set4(result, this->fSpoofData);
	cVar0 = this->fAllowedCharsSet->clone();
	cVar0->checkCast("android::icu::text::UnicodeSet");
	android::icu::text::SpoofChecker::-set0(result, cVar0);
	android::icu::text::SpoofChecker::-get0(result)->freeze();
	cVar1 = std::make_shared<java::util::HashSet>(this->fAllowedLocales);
	android::icu::text::SpoofChecker::-set1(result, cVar1);
	android::icu::text::SpoofChecker::-set3(result, this->fRestrictionLevel);
	return result;

}
// .method public setAllowedChars(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/SpoofChecker$Builder;
std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> android::icu::text::SpoofChecker_S_Builder::setAllowedChars(std::shared_ptr<android::icu::text::UnicodeSet> chars)
{
	
	//    .param p1, "chars"    # Landroid/icu/text/UnicodeSet;
	this->fAllowedCharsSet->set(chars);
	this->fAllowedLocales->clear();
	this->fChecks = ( this->fChecks | 0x40);
	return this;

}
// .method public setAllowedJavaLocales(Ljava/util/Set;)Landroid/icu/text/SpoofChecker$Builder;
std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> android::icu::text::SpoofChecker_S_Builder::setAllowedJavaLocales(std::shared_ptr<java::util::Set<java::util::Locale>> locales)
{
	
	std::shared_ptr<java::util::HashSet> ulocales;
	std::shared_ptr<java::util::Iterator> locale_S_iterator;
	std::shared_ptr<java::util::Locale> locale;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 312        value = {
	// 313            "(",
	// 314            "Ljava/util/Set",
	// 315            "<",
	// 316            "Ljava/util/Locale;",
	// 317            ">;)",
	// 318            "Landroid/icu/text/SpoofChecker$Builder;"
	// 319        }
	// 320    .end annotation
	//    .local p1, "locales":Ljava/util/Set;, "Ljava/util/Set<Ljava/util/Locale;>;"
	ulocales = std::make_shared<java::util::HashSet>(locales->size());
	//    .local v2, "ulocales":Ljava/util/HashSet;, "Ljava/util/HashSet<Landroid/icu/util/ULocale;>;"
	locale_S_iterator = locales->iterator();
	//    .local v1, "locale$iterator":Ljava/util/Iterator;
label_goto_d:
	if ( !(locale_S_iterator->hasNext()) )  
		goto label_cond_21;
	locale = locale_S_iterator->next();
	locale->checkCast("java::util::Locale");
	//    .local v0, "locale":Ljava/util/Locale;
	ulocales->add(android::icu::util::ULocale::forLocale(locale));
	goto label_goto_d;
	// 363    .line 671
	// 364    .end local v0    # "locale":Ljava/util/Locale;
label_cond_21:
	return this->setAllowedLocales(ulocales);

}
// .method public setAllowedLocales(Ljava/util/Set;)Landroid/icu/text/SpoofChecker$Builder;
std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> android::icu::text::SpoofChecker_S_Builder::setAllowedLocales(std::shared_ptr<java::util::Set<android::icu::util::ULocale>> locales)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::util::Iterator> locale_S_iterator;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<android::icu::text::UnicodeSet> tempSet;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 376        value = {
	// 377            "(",
	// 378            "Ljava/util/Set",
	// 379            "<",
	// 380            "Landroid/icu/util/ULocale;",
	// 381            ">;)",
	// 382            "Landroid/icu/text/SpoofChecker$Builder;"
	// 383        }
	// 384    .end annotation
	//    .local p1, "locales":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
	cVar0 = 0x100a;
	cVar1 = 0x0;
	this->fAllowedCharsSet->clear();
	locale_S_iterator = locales->iterator();
	//    .local v1, "locale$iterator":Ljava/util/Iterator;
label_goto_c:
	if ( !(locale_S_iterator->hasNext()) )  
		goto label_cond_1e;
	locale = locale_S_iterator->next();
	locale->checkCast("android::icu::util::ULocale");
	//    .local v0, "locale":Landroid/icu/util/ULocale;
	this->addScriptChars(locale, this->fAllowedCharsSet);
	goto label_goto_c;
	// 424    .line 633
	// 425    .end local v0    # "locale":Landroid/icu/util/ULocale;
label_cond_1e:
	this->fAllowedLocales->clear();
	if ( locales->size() )     
		goto label_cond_38;
	this->fAllowedCharsSet->add(cVar1, 0x10ffff);
	this->fChecks = ( this->fChecks & -0x41);
	return this;
	// 455    .line 642
label_cond_38:
	tempSet = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v2, "tempSet":Landroid/icu/text/UnicodeSet;
	tempSet->applyIntPropertyValue(cVar0, cVar1);
	this->fAllowedCharsSet->addAll(tempSet);
	tempSet->applyIntPropertyValue(cVar0, 0x1);
	this->fAllowedCharsSet->addAll(tempSet);
	this->fAllowedLocales->clear();
	this->fAllowedLocales->addAll(locales);
	this->fChecks = ( this->fChecks | 0x40);
	return this;

}
// .method public setChecks(I)Landroid/icu/text/SpoofChecker$Builder;
std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> android::icu::text::SpoofChecker_S_Builder::setChecks(int checks)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "checks"    # I
	if ( !(( checks & 0x0)) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad Spoof Checks value.")));
	// throw
	throw cVar0;
	// 520    .line 591
label_cond_d:
	this->fChecks = ( checks & -0x1);
	return this;

}
// .method public setData(Ljava/io/Reader;)Landroid/icu/text/SpoofChecker$Builder;
std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> android::icu::text::SpoofChecker_S_Builder::setData(std::shared_ptr<java::io::Reader> confusables)
{
	
	std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> cVar0;
	
	//    .param p1, "confusables"    # Ljava/io/Reader;
	//    .annotation system Ldalvik/annotation/Throws;
	// 534        value = {
	// 535            Ljava/text/ParseException;,
	// 536            Ljava/io/IOException;
	// 537        }
	// 538    .end annotation
	cVar0 = std::make_shared<android::icu::text::SpoofChecker_S_SpoofData>(0x0);
	this->fSpoofData = cVar0;
	android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder::buildConfusableData(confusables, this->fSpoofData);
	return this;

}
// .method public setData(Ljava/io/Reader;Ljava/io/Reader;)Landroid/icu/text/SpoofChecker$Builder;
std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> android::icu::text::SpoofChecker_S_Builder::setData(std::shared_ptr<java::io::Reader> confusables,std::shared_ptr<java::io::Reader> confusablesWholeScript)
{
	
	//    .param p1, "confusables"    # Ljava/io/Reader;
	//    .param p2, "confusablesWholeScript"    # Ljava/io/Reader;
	//    .annotation system Ldalvik/annotation/Throws;
	// 564        value = {
	// 565            Ljava/text/ParseException;,
	// 566            Ljava/io/IOException;
	// 567        }
	// 568    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 571    .end annotation
	this->setData(confusables);
	return this;

}
// .method public setRestrictionLevel(Landroid/icu/text/SpoofChecker$RestrictionLevel;)Landroid/icu/text/SpoofChecker$Builder;
std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> android::icu::text::SpoofChecker_S_Builder::setRestrictionLevel(std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> restrictionLevel)
{
	
	//    .param p1, "restrictionLevel"    # Landroid/icu/text/SpoofChecker$RestrictionLevel;
	this->fRestrictionLevel = restrictionLevel;
	this->fChecks = ( this->fChecks | 0x90);
	return this;

}


