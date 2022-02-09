// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CaseMap$Title.smali
#include "java2ctype.h"
#include "android.icu.impl.CaseMapImpl.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.CaseMap_S_Title.h"
#include "android.icu.text.CaseMap.h"
#include "android.icu.text.Edits.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"

static android::icu::text::CaseMap_S_Title::DEFAULT;
static android::icu::text::CaseMap_S_Title::OMIT_UNCHANGED;
// .method static synthetic -get0()Landroid/icu/text/CaseMap$Title;
std::shared_ptr<android::icu::text::CaseMap_S_Title> android::icu::text::CaseMap_S_Title::_get0()
{
	
	return android::icu::text::CaseMap_S_Title::DEFAULT;

}
// .method static constructor <clinit>()V
void android::icu::text::CaseMap_S_Title::static_cinit()
{
	
	std::shared_ptr<android::icu::text::CaseMap_S_Title> cVar0;
	std::shared_ptr<android::icu::text::CaseMap_S_Title> cVar1;
	
	cVar0 = std::make_shared<android::icu::text::CaseMap_S_Title>(0x0);
	android::icu::text::CaseMap_S_Title::DEFAULT = cVar0;
	cVar1 = std::make_shared<android::icu::text::CaseMap_S_Title>(0x4000);
	android::icu::text::CaseMap_S_Title::OMIT_UNCHANGED = cVar1;
	return;

}
// .method private constructor <init>(I)V
android::icu::text::CaseMap_S_Title::CaseMap_S_Title(int opt)
{
	
	//    .param p1, "opt"    # I
	android::icu::text::CaseMap::(opt, 0x0);
	return;

}
// .method public apply(Ljava/util/Locale;Landroid/icu/text/BreakIterator;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::text::CaseMap_S_Title::apply(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::BreakIterator> cVar0,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	std::shared_ptr<android::icu::text::BreakIterator> cVar0;
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .param p2, "iter"    # Landroid/icu/text/BreakIterator;
	//    .param p3, "src"    # Ljava/lang/CharSequence;
	//    .param p5, "edits"    # Landroid/icu/text/Edits;
	//    .annotation system Ldalvik/annotation/Signature;
	// 080        value = {
	// 081            "<A::",
	// 082            "Ljava/lang/Appendable;",
	// 083            ">(",
	// 084            "Ljava/util/Locale;",
	// 085            "Landroid/icu/text/BreakIterator;",
	// 086            "Ljava/lang/CharSequence;",
	// 087            "TA;",
	// 088            "Landroid/icu/text/Edits;",
	// 089            ")TA;"
	// 090        }
	// 091    .end annotation
	//    .local p4, "dest":Ljava/lang/Appendable;, "TA;"
	if ( cVar0 )     
		goto label_cond_6;
	cVar0 = android::icu::text::BreakIterator::getWordInstance(locale);
label_cond_6:
	cVar0->setText(src->toString());
	return android::icu::impl::CaseMapImpl::toTitle(android::icu::text::CaseMap::-wrap0(locale), this->internalOptions, cVar0, src, dest, edits);

}
// .method public noBreakAdjustment()Landroid/icu/text/CaseMap$Title;
std::shared_ptr<android::icu::text::CaseMap_S_Title> android::icu::text::CaseMap_S_Title::noBreakAdjustment()
{
	
	std::shared_ptr<android::icu::text::CaseMap_S_Title> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::CaseMap_S_Title>(( this->internalOptions | 0x200));
	return cVar0;

}
// .method public noLowercase()Landroid/icu/text/CaseMap$Title;
std::shared_ptr<android::icu::text::CaseMap_S_Title> android::icu::text::CaseMap_S_Title::noLowercase()
{
	
	std::shared_ptr<android::icu::text::CaseMap_S_Title> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::CaseMap_S_Title>(( this->internalOptions | 0x100));
	return cVar0;

}
// .method public omitUnchangedText()Landroid/icu/text/CaseMap$Title;
std::shared_ptr<android::icu::text::CaseMap_S_Title> android::icu::text::CaseMap_S_Title::omitUnchangedText()
{
	
	std::shared_ptr<android::icu::text::CaseMap_S_Title> cVar0;
	
	if ( !(this->internalOptions) )  
		goto label_cond_a;
	if ( this->internalOptions != 0x4000 )
		goto label_cond_d;
label_cond_a:
	return android::icu::text::CaseMap_S_Title::OMIT_UNCHANGED;
	// 187    .line 175
label_cond_d:
	cVar0 = std::make_shared<android::icu::text::CaseMap_S_Title>(( this->internalOptions | 0x4000));
	return cVar0;

}


