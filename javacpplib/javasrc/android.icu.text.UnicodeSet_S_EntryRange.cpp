// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$EntryRange.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_EntryRange.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Appendable.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method constructor <init>()V
android::icu::text::UnicodeSet_S_EntryRange::UnicodeSet_S_EntryRange()
{
	
	// 029    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSet_S_EntryRange::toString()
{
	
	bool cVar0;
	std::shared_ptr<java::lang::StringBuilder> b;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	cVar0 = 0x0;
	b = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "b":Ljava/lang/StringBuilder;
	if ( this->codepoint != this->codepointEnd )
		goto label_cond_19;
	cVar1 = android::icu::text::UnicodeSet::-wrap0(b, this->codepoint, cVar0);
	cVar1->checkCast("java::lang::StringBuilder");
label_goto_14:
	return cVar1->toString();
	// 072    .line 4160
label_cond_19:
	cVar2 = android::icu::text::UnicodeSet::-wrap0(b, this->codepoint, cVar0);
	cVar2->checkCast("java::lang::StringBuilder");
	cVar1 = android::icu::text::UnicodeSet::-wrap0(cVar2->append(0x2d), this->codepointEnd, cVar0);
	cVar1->checkCast("java::lang::StringBuilder");
	goto label_goto_14;

}


