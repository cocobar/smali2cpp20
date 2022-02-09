// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry$AliasEntry.smali
#include "java2ctype.h"
#include "android.icu.text.TransliteratorRegistry_S_AliasEntry.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::TransliteratorRegistry_S_AliasEntry::TransliteratorRegistry_S_AliasEntry(std::shared_ptr<java::lang::String> a)
{
	
	//    .param p1, "a"    # Ljava/lang/String;
	// 028    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->alias = a;
	return;

}


