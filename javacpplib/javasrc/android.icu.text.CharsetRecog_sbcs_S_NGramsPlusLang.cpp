// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$NGramsPlusLang.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetRecog_sbcs_S_NGramsPlusLang.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;[I)V
android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang::CharsetRecog_sbcs_S_NGramsPlusLang(std::shared_ptr<java::lang::String> la,std::shared_ptr<int[]> ng)
{
	
	//    .param p1, "la"    # Ljava/lang/String;
	//    .param p2, "ng"    # [I
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fLang = la;
	this->fNGrams = ng;
	return;

}


