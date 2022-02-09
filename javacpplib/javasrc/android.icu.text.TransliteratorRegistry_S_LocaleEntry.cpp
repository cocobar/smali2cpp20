// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry$LocaleEntry.smali
#include "java2ctype.h"
#include "android.icu.text.TransliteratorRegistry_S_LocaleEntry.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;I)V
android::icu::text::TransliteratorRegistry_S_LocaleEntry::TransliteratorRegistry_S_LocaleEntry(std::shared_ptr<java::lang::String> r,int d)
{
	
	//    .param p1, "r"    # Ljava/lang/String;
	//    .param p2, "d"    # I
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->rule = r;
	this->direction = d;
	return;

}


