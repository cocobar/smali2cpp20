// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry$ResourceEntry.smali
#include "java2ctype.h"
#include "android.icu.text.TransliteratorRegistry_S_ResourceEntry.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;I)V
android::icu::text::TransliteratorRegistry_S_ResourceEntry::TransliteratorRegistry_S_ResourceEntry(std::shared_ptr<java::lang::String> n,int d)
{
	
	//    .param p1, "n"    # Ljava/lang/String;
	//    .param p2, "d"    # I
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->resource = n;
	this->direction = d;
	return;

}


