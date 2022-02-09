// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\StringSearch$Pattern.smali
#include "java2ctype.h"
#include "android.icu.text.StringSearch_S_Pattern.h"
#include "java.lang.String.h"

// .method protected constructor <init>(Ljava/lang/String;)V
android::icu::text::StringSearch_S_Pattern::StringSearch_S_Pattern(std::shared_ptr<java::lang::String> pattern)
{
	
	int cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 038    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->PCELength_ = cVar0;
	this->CELength_ = cVar0;
	this->text_ = pattern;
	return;

}


