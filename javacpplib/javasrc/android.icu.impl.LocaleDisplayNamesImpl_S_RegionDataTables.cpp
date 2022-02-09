// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$RegionDataTables.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTables.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_RegionDataTables.h"
#include "java.lang.String.h"

static android::icu::impl::LocaleDisplayNamesImpl_S_RegionDataTables::impl;
// .method static constructor <clinit>()V
void android::icu::impl::LocaleDisplayNamesImpl_S_RegionDataTables::static_cinit()
{
	
	android::icu::impl::LocaleDisplayNamesImpl_S_RegionDataTables::impl = android::icu::impl::LocaleDisplayNamesImpl_S_DataTables::load(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.impl.ICURegionDataTables")));
	return;

}
// .method constructor <init>()V
android::icu::impl::LocaleDisplayNamesImpl_S_RegionDataTables::LocaleDisplayNamesImpl_S_RegionDataTables()
{
	
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


