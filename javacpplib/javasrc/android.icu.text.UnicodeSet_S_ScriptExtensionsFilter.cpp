// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$ScriptExtensionsFilter.smali
#include "java2ctype.h"
#include "android.icu.lang.UScript.h"
#include "android.icu.text.UnicodeSet_S_ScriptExtensionsFilter.h"

// .method constructor <init>(I)V
android::icu::text::UnicodeSet_S_ScriptExtensionsFilter::UnicodeSet_S_ScriptExtensionsFilter(int script)
{
	
	//    .param p1, "script"    # I
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->script = script;
	return;

}
// .method public contains(I)Z
bool android::icu::text::UnicodeSet_S_ScriptExtensionsFilter::contains(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::lang::UScript::hasScript(c, this->script);

}


