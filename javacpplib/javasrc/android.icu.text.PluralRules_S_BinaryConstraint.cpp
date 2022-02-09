// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$BinaryConstraint.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_BinaryConstraint.h"
#include "android.icu.text.PluralRules_S_Constraint.h"

static android::icu::text::PluralRules_S_BinaryConstraint::serialVersionUID = 0x1L;
// .method protected constructor <init>(Landroid/icu/text/PluralRules$Constraint;Landroid/icu/text/PluralRules$Constraint;)V
android::icu::text::PluralRules_S_BinaryConstraint::PluralRules_S_BinaryConstraint(std::shared_ptr<android::icu::text::PluralRules_S_Constraint> a,std::shared_ptr<android::icu::text::PluralRules_S_Constraint> b)
{
	
	//    .param p1, "a"    # Landroid/icu/text/PluralRules$Constraint;
	//    .param p2, "b"    # Landroid/icu/text/PluralRules$Constraint;
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->a = a;
	this->b = b;
	return;

}


