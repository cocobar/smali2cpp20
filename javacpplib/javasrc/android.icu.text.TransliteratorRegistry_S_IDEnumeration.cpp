// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry$IDEnumeration.smali
#include "java2ctype.h"
#include "android.icu.text.TransliteratorRegistry_S_IDEnumeration.h"
#include "android.icu.util.CaseInsensitiveString.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"

// .method public constructor <init>(Ljava/util/Enumeration;)V
android::icu::text::TransliteratorRegistry_S_IDEnumeration::TransliteratorRegistry_S_IDEnumeration(std::shared_ptr<java::util::Enumeration<android::icu::util::CaseInsensitiveString>> e)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 047        value = {
	// 048            "(",
	// 049            "Ljava/util/Enumeration",
	// 050            "<",
	// 051            "Landroid/icu/util/CaseInsensitiveString;",
	// 052            ">;)V"
	// 053        }
	// 054    .end annotation
	//    .local p1, "e":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Landroid/icu/util/CaseInsensitiveString;>;"
	// 059    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->en = e;
	return;

}
// .method public hasMoreElements()Z
bool android::icu::text::TransliteratorRegistry_S_IDEnumeration::hasMoreElements()
{
	
	bool cVar0;
	
	if ( !(this->en) )  
		goto label_cond_b;
	cVar0 = this->en->hasMoreElements();
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method public nextElement()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TransliteratorRegistry_S_IDEnumeration::nextElement()
{
	
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cVar0;
	
	cVar0 = this->en->nextElement();
	cVar0->checkCast("android::icu::util::CaseInsensitiveString");
	return cVar0->getString();

}


