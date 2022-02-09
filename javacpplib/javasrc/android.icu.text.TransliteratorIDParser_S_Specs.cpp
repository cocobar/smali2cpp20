// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorIDParser$Specs.smali
#include "java2ctype.h"
#include "android.icu.text.TransliteratorIDParser_S_Specs.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)V
android::icu::text::TransliteratorIDParser_S_Specs::TransliteratorIDParser_S_Specs(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::String> t,std::shared_ptr<java::lang::String> v,bool sawS,std::shared_ptr<java::lang::String> f)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "t"    # Ljava/lang/String;
	//    .param p3, "v"    # Ljava/lang/String;
	//    .param p4, "sawS"    # Z
	//    .param p5, "f"    # Ljava/lang/String;
	// 040    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->source = s;
	this->target = t;
	this->variant = v;
	this->sawSource = sawS;
	this->filter = f;
	return;

}


