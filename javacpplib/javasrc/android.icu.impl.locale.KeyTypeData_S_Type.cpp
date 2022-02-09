// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$Type.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_Type.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::impl::locale::KeyTypeData_S_Type::KeyTypeData_S_Type(std::shared_ptr<java::lang::String> legacyId,std::shared_ptr<java::lang::String> bcpId)
{
	
	//    .param p1, "legacyId"    # Ljava/lang/String;
	//    .param p2, "bcpId"    # Ljava/lang/String;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->legacyId = legacyId;
	this->bcpId = bcpId;
	return;

}


