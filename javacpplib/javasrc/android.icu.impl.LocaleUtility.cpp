// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleUtility.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleUtility.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"

// .method public constructor <init>()V
android::icu::impl::LocaleUtility::LocaleUtility()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static fallback(Ljava/util/Locale;)Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::impl::LocaleUtility::fallback(std::shared_ptr<java::util::Locale> loc)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared<std::vector<std::vector<java::lang::String>>> parts;
	int i;
	std::shared_ptr<java::util::Locale> cVar3;
	
	//    .param p0, "loc"    # Ljava/util/Locale;
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	parts = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x3);
	parts[cVar2] = loc->getLanguage();
	parts[cVar1] = loc->getCountry();
	parts[cVar0] = loc->getVariant();
	//    .local v1, "parts":[Ljava/lang/String;
	i = 0x2;
	//    .local v0, "i":I
label_goto_19:
	if ( i < 0 ) 
		goto label_cond_28;
	if ( !(parts[i]->length()) )  
		goto label_cond_2c;
	parts[i] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_cond_28:
	if ( i >= 0 )
		goto label_cond_2f;
	return 0x0;
	// 082    .line 125
label_cond_2c:
	i = ( i + -0x1);
	goto label_goto_19;
	// 088    .line 134
label_cond_2f:
	cVar3 = std::make_shared<java::util::Locale>(parts[cVar2], parts[cVar1], parts[cVar0]);
	return cVar3;

}
// .method public static getLocaleFromName(Ljava/lang/String;)Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::impl::LocaleUtility::getLocaleFromName(std::shared_ptr<java::lang::String> name)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> language;
	std::shared_ptr<java::lang::String> country;
	std::shared_ptr<java::lang::String> variant;
	int i1;
	std::shared_ptr<java::util::Locale> cVar1;
	int i2;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = 0x5f;
	language = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v3, "language":Ljava/lang/String;
	country = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v0, "country":Ljava/lang/String;
	variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v4, "variant":Ljava/lang/String;
	i1 = name->indexOf(cVar0);
	//    .local v1, "i1":I
	if ( i1 >= 0 )
		goto label_cond_19;
	language = name;
label_goto_13:
	cVar1 = std::make_shared<java::util::Locale>(language, country, variant);
	return cVar1;
	// 144    .line 36
label_cond_19:
	language = name->substring(0x0, i1);
	i1 = ( i1 + 0x1);
	i2 = name->indexOf(cVar0, i1);
	//    .local v2, "i2":I
	if ( i2 >= 0 )
		goto label_cond_2a;
	country = name->substring(i1);
	goto label_goto_13;
	// 169    .line 42
label_cond_2a:
	country = name->substring(i1, i2);
	variant = name->substring(( i2 + 0x1));
	goto label_goto_13;

}
// .method public static isFallbackOf(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::impl::LocaleUtility::isFallbackOf(std::shared_ptr<java::lang::String> parent,std::shared_ptr<java::lang::String> child)
{
	
	bool cVar0;
	bool cVar1;
	int i;
	
	//    .param p0, "parent"    # Ljava/lang/String;
	//    .param p1, "child"    # Ljava/lang/String;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( child->startsWith(parent) )     
		goto label_cond_9;
	return cVar1;
	// 205    .line 59
label_cond_9:
	i = parent->length();
	//    .local v0, "i":I
	if ( i == child->length() )
		goto label_cond_1b;
	if ( child->charAt(i) != 0x5f )
		goto label_cond_1c;
label_cond_1b:
label_goto_1b:
	return cVar0;
label_cond_1c:
	cVar0 = cVar1;
	goto label_goto_1b;

}
// .method public static isFallbackOf(Ljava/util/Locale;Ljava/util/Locale;)Z
bool android::icu::impl::LocaleUtility::isFallbackOf(std::shared_ptr<java::util::Locale> parent,std::shared_ptr<java::util::Locale> child)
{
	
	//    .param p0, "parent"    # Ljava/util/Locale;
	//    .param p1, "child"    # Ljava/util/Locale;
	return android::icu::impl::LocaleUtility::isFallbackOf(parent->toString(), child->toString());

}


