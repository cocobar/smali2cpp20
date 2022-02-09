// CPP L:\smali2cpp20\x64\Release\out\android\icu\lang\UScriptRun$ParenStackEntry.smali
#include "java2ctype.h"
#include "android.icu.lang.UScriptRun_S_ParenStackEntry.h"

// .method public constructor <init>(II)V
android::icu::lang::UScriptRun_S_ParenStackEntry::UScriptRun_S_ParenStackEntry(int thePairIndex,int theScriptCode)
{
	
	//    .param p1, "thePairIndex"    # I
	//    .param p2, "theScriptCode"    # I
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->pairIndex = thePairIndex;
	this->scriptCode = theScriptCode;
	return;

}


