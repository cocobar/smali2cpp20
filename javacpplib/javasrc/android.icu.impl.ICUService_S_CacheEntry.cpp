// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUService$CacheEntry.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUService_S_CacheEntry.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/Object;)V
android::icu::impl::ICUService_S_CacheEntry::ICUService_S_CacheEntry(std::shared_ptr<java::lang::String> actualDescriptor,std::shared_ptr<java::lang::Object> service)
{
	
	//    .param p1, "actualDescriptor"    # Ljava/lang/String;
	//    .param p2, "service"    # Ljava/lang/Object;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->actualDescriptor = actualDescriptor;
	this->service = service;
	return;

}


