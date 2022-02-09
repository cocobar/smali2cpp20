// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$ReaderCacheKey.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ReaderCacheKey.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::impl::ICUResourceBundleReader_S_ReaderCacheKey::ICUResourceBundleReader_S_ReaderCacheKey(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<java::lang::String> cVar1)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .param p1, "baseName"    # Ljava/lang/String;
	//    .param p2, "localeID"    # Ljava/lang/String;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( cVar0 )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .end local p1    # "baseName":Ljava/lang/String;
label_cond_8:
	this->baseName = cVar0;
	if ( cVar1 )     
		goto label_cond_f;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .end local p2    # "localeID":Ljava/lang/String;
label_cond_f:
	this->localeID = cVar1;
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::ICUResourceBundleReader_S_ReaderCacheKey::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ReaderCacheKey> info;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return 0x1;
	// 072    .line 165
label_cond_5:
	if ( obj->instanceOf("android::icu::impl::ICUResourceBundleReader_S_ReaderCacheKey") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	info = obj;
	info->checkCast("android::icu::impl::ICUResourceBundleReader_S_ReaderCacheKey");
	//    .local v0, "info":Landroid/icu/impl/ICUResourceBundleReader$ReaderCacheKey;
	if ( !(this->baseName->equals(info->baseName)) )  
		goto label_cond_1f;
	cVar1 = this->localeID->equals(info->localeID);
label_cond_1f:
	return cVar1;

}
// .method public hashCode()I
int android::icu::impl::ICUResourceBundleReader_S_ReaderCacheKey::hashCode()
{
	
	return (this->baseName->hashCode() ^  this->localeID->hashCode());

}


