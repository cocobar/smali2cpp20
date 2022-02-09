// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$Builder$ConfusabledataBuilder$SPUString.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;)V
android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	// 030    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fStr = s;
	this->fCharOrStrTableIndex = 0x0;
	return;

}


