// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CaseMap.smali
#include "java2ctype.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.text.CaseMap_S_Fold.h"
#include "android.icu.text.CaseMap_S_Lower.h"
#include "android.icu.text.CaseMap_S_Title.h"
#include "android.icu.text.CaseMap_S_Upper.h"
#include "android.icu.text.CaseMap.h"
#include "java.util.Locale.h"

// .method static synthetic -wrap0(Ljava/util/Locale;)I
int android::icu::text::CaseMap::_wrap0(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::text::CaseMap::getCaseLocale(locale);

}
// .method private constructor <init>(I)V
android::icu::text::CaseMap::CaseMap(int opt)
{
	
	//    .param p1, "opt"    # I
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->internalOptions = opt;
	return;

}
// .method synthetic constructor <init>(ILandroid/icu/text/CaseMap;)V
android::icu::text::CaseMap::CaseMap(int opt,std::shared_ptr<android::icu::text::CaseMap> _this1)
{
	
	//    .param p1, "opt"    # I
	//    .param p2, "-this1"    # Landroid/icu/text/CaseMap;
	android::icu::text::CaseMap::(opt);
	return;

}
// .method public static fold()Landroid/icu/text/CaseMap$Fold;
std::shared_ptr<android::icu::text::CaseMap_S_Fold> android::icu::text::CaseMap::fold()
{
	
	return android::icu::text::CaseMap_S_Fold::-get0({const[class].FS-Param});

}
// .method private static getCaseLocale(Ljava/util/Locale;)I
int android::icu::text::CaseMap::getCaseLocale(std::shared_ptr<java::util::Locale> cVar0)
{
	
	std::shared_ptr<java::util::Locale> cVar0;
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	if ( cVar0 )     
		goto label_cond_6;
	cVar0 = java::util::Locale::getDefault({const[class].FS-Param});
label_cond_6:
	return android::icu::impl::UCaseProps::getCaseLocale(cVar0);

}
// .method public static toLower()Landroid/icu/text/CaseMap$Lower;
std::shared_ptr<android::icu::text::CaseMap_S_Lower> android::icu::text::CaseMap::toLower()
{
	
	return android::icu::text::CaseMap_S_Lower::-get0({const[class].FS-Param});

}
// .method public static toTitle()Landroid/icu/text/CaseMap$Title;
std::shared_ptr<android::icu::text::CaseMap_S_Title> android::icu::text::CaseMap::toTitle()
{
	
	return android::icu::text::CaseMap_S_Title::-get0({const[class].FS-Param});

}
// .method public static toUpper()Landroid/icu/text/CaseMap$Upper;
std::shared_ptr<android::icu::text::CaseMap_S_Upper> android::icu::text::CaseMap::toUpper()
{
	
	return android::icu::text::CaseMap_S_Upper::-get0({const[class].FS-Param});

}


