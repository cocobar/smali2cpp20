// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$VersionFilter.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.UnicodeSet_S_VersionFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.Object.h"

// .method constructor <init>(Landroid/icu/util/VersionInfo;)V
android::icu::text::UnicodeSet_S_VersionFilter::UnicodeSet_S_VersionFilter(std::shared_ptr<android::icu::util::VersionInfo> version)
{
	
	//    .param p1, "version"    # Landroid/icu/util/VersionInfo;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->version = version;
	return;

}
// .method public contains(I)Z
bool android::icu::text::UnicodeSet_S_VersionFilter::contains(int ch)
{
	
	bool cVar1;
	std::shared_ptr<java::lang::Object> v;
	
	//    .param p1, "ch"    # I
	cVar1 = 0x0;
	v = android::icu::lang::UCharacter::getAge(ch);
	//    .local v0, "v":Landroid/icu/util/VersionInfo;
	if ( android::icu::impl::Utility::sameObjects(v, android::icu::text::UnicodeSet::-get0(v, android::icu::text::UnicodeSet::-get0({const[class].FS-Param}))) )     
		goto label_cond_18;
	if ( v->compareTo(this->version) > 0 ) 
		goto label_cond_18;
	cVar1 = 0x1;
label_cond_18:
	return cVar1;

}


