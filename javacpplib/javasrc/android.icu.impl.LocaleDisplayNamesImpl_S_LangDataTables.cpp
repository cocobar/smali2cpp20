// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$LangDataTables.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTables.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_LangDataTables.h"
#include "java.lang.String.h"

static android::icu::impl::LocaleDisplayNamesImpl_S_LangDataTables::impl;
// .method static constructor <clinit>()V
void android::icu::impl::LocaleDisplayNamesImpl_S_LangDataTables::static_cinit()
{
	
	android::icu::impl::LocaleDisplayNamesImpl_S_LangDataTables::impl = android::icu::impl::LocaleDisplayNamesImpl_S_DataTables::load(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.impl.ICULangDataTables")));
	return;

}
// .method constructor <init>()V
android::icu::impl::LocaleDisplayNamesImpl_S_LangDataTables::LocaleDisplayNamesImpl_S_LangDataTables()
{
	
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


