// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CaseMap$Upper.smali
#include "java2ctype.h"
#include "android.icu.impl.CaseMapImpl.h"
#include "android.icu.text.CaseMap_S_Upper.h"
#include "android.icu.text.CaseMap.h"
#include "android.icu.text.Edits.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.util.Locale.h"

static android::icu::text::CaseMap_S_Upper::DEFAULT;
static android::icu::text::CaseMap_S_Upper::OMIT_UNCHANGED;
// .method static synthetic -get0()Landroid/icu/text/CaseMap$Upper;
std::shared_ptr<android::icu::text::CaseMap_S_Upper> android::icu::text::CaseMap_S_Upper::_get0()
{
	
	return android::icu::text::CaseMap_S_Upper::DEFAULT;

}
// .method static constructor <clinit>()V
void android::icu::text::CaseMap_S_Upper::static_cinit()
{
	
	std::shared_ptr<android::icu::text::CaseMap_S_Upper> cVar0;
	std::shared_ptr<android::icu::text::CaseMap_S_Upper> cVar1;
	
	cVar0 = std::make_shared<android::icu::text::CaseMap_S_Upper>(0x0);
	android::icu::text::CaseMap_S_Upper::DEFAULT = cVar0;
	cVar1 = std::make_shared<android::icu::text::CaseMap_S_Upper>(0x4000);
	android::icu::text::CaseMap_S_Upper::OMIT_UNCHANGED = cVar1;
	return;

}
// .method private constructor <init>(I)V
android::icu::text::CaseMap_S_Upper::CaseMap_S_Upper(int opt)
{
	
	//    .param p1, "opt"    # I
	android::icu::text::CaseMap::(opt, 0x0);
	return;

}
// .method public apply(Ljava/util/Locale;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::text::CaseMap_S_Upper::apply(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .param p2, "src"    # Ljava/lang/CharSequence;
	//    .param p4, "edits"    # Landroid/icu/text/Edits;
	//    .annotation system Ldalvik/annotation/Signature;
	// 079        value = {
	// 080            "<A::",
	// 081            "Ljava/lang/Appendable;",
	// 082            ">(",
	// 083            "Ljava/util/Locale;",
	// 084            "Ljava/lang/CharSequence;",
	// 085            "TA;",
	// 086            "Landroid/icu/text/Edits;",
	// 087            ")TA;"
	// 088        }
	// 089    .end annotation
	//    .local p3, "dest":Ljava/lang/Appendable;, "TA;"
	return android::icu::impl::CaseMapImpl::toUpper(android::icu::text::CaseMap::-wrap0(locale), this->internalOptions, src, dest, edits);

}
// .method public omitUnchangedText()Landroid/icu/text/CaseMap$Upper;
std::shared_ptr<android::icu::text::CaseMap_S_Upper> android::icu::text::CaseMap_S_Upper::omitUnchangedText()
{
	
	return android::icu::text::CaseMap_S_Upper::OMIT_UNCHANGED;

}


