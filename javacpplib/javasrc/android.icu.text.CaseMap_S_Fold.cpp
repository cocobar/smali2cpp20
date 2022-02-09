// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CaseMap$Fold.smali
#include "java2ctype.h"
#include "android.icu.impl.CaseMapImpl.h"
#include "android.icu.text.CaseMap_S_Fold.h"
#include "android.icu.text.CaseMap.h"
#include "android.icu.text.Edits.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"

static android::icu::text::CaseMap_S_Fold::DEFAULT;
static android::icu::text::CaseMap_S_Fold::OMIT_UNCHANGED;
static android::icu::text::CaseMap_S_Fold::TURKIC;
static android::icu::text::CaseMap_S_Fold::TURKIC_OMIT_UNCHANGED;
// .method static synthetic -get0()Landroid/icu/text/CaseMap$Fold;
std::shared_ptr<android::icu::text::CaseMap_S_Fold> android::icu::text::CaseMap_S_Fold::_get0()
{
	
	return android::icu::text::CaseMap_S_Fold::DEFAULT;

}
// .method static constructor <clinit>()V
void android::icu::text::CaseMap_S_Fold::static_cinit()
{
	
	std::shared_ptr<android::icu::text::CaseMap_S_Fold> cVar0;
	std::shared_ptr<android::icu::text::CaseMap_S_Fold> cVar1;
	std::shared_ptr<android::icu::text::CaseMap_S_Fold> cVar2;
	std::shared_ptr<android::icu::text::CaseMap_S_Fold> cVar3;
	
	cVar0 = std::make_shared<android::icu::text::CaseMap_S_Fold>(0x0);
	android::icu::text::CaseMap_S_Fold::DEFAULT = cVar0;
	cVar1 = std::make_shared<android::icu::text::CaseMap_S_Fold>(0x1);
	android::icu::text::CaseMap_S_Fold::TURKIC = cVar1;
	cVar2 = std::make_shared<android::icu::text::CaseMap_S_Fold>(0x4000);
	android::icu::text::CaseMap_S_Fold::OMIT_UNCHANGED = cVar2;
	cVar3 = std::make_shared<android::icu::text::CaseMap_S_Fold>(0x4001);
	android::icu::text::CaseMap_S_Fold::TURKIC_OMIT_UNCHANGED = cVar3;
	return;

}
// .method private constructor <init>(I)V
android::icu::text::CaseMap_S_Fold::CaseMap_S_Fold(int opt)
{
	
	//    .param p1, "opt"    # I
	android::icu::text::CaseMap::(opt, 0x0);
	return;

}
// .method public apply(Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::text::CaseMap_S_Fold::apply(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p3, "edits"    # Landroid/icu/text/Edits;
	//    .annotation system Ldalvik/annotation/Signature;
	// 102        value = {
	// 103            "<A::",
	// 104            "Ljava/lang/Appendable;",
	// 105            ">(",
	// 106            "Ljava/lang/CharSequence;",
	// 107            "TA;",
	// 108            "Landroid/icu/text/Edits;",
	// 109            ")TA;"
	// 110        }
	// 111    .end annotation
	//    .local p2, "dest":Ljava/lang/Appendable;, "TA;"
	return android::icu::impl::CaseMapImpl::fold(this->internalOptions, src, dest, edits);

}
// .method public omitUnchangedText()Landroid/icu/text/CaseMap$Fold;
std::shared_ptr<android::icu::text::CaseMap_S_Fold> android::icu::text::CaseMap_S_Fold::omitUnchangedText()
{
	
	std::shared_ptr<android::icu::text::CaseMap_S_Fold> cVar0;
	
	if ( ( this->internalOptions & 0x1) )     
		goto label_cond_9;
	cVar0 = android::icu::text::CaseMap_S_Fold::OMIT_UNCHANGED;
label_goto_8:
	return cVar0;
	// 143    .line 277
label_cond_9:
	cVar0 = android::icu::text::CaseMap_S_Fold::TURKIC_OMIT_UNCHANGED;
	goto label_goto_8;

}
// .method public turkic()Landroid/icu/text/CaseMap$Fold;
std::shared_ptr<android::icu::text::CaseMap_S_Fold> android::icu::text::CaseMap_S_Fold::turkic()
{
	
	std::shared_ptr<android::icu::text::CaseMap_S_Fold> cVar0;
	
	if ( ( this->internalOptions & 0x4000) )     
		goto label_cond_9;
	cVar0 = android::icu::text::CaseMap_S_Fold::TURKIC;
label_goto_8:
	return cVar0;
	// 180    .line 294
label_cond_9:
	cVar0 = android::icu::text::CaseMap_S_Fold::TURKIC_OMIT_UNCHANGED;
	goto label_goto_8;

}


