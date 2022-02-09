// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\AlphabeticIndex$1.smali
#include "java2ctype.h"
#include "android.icu.text.AlphabeticIndex_S_1.h"
#include "android.icu.text.AlphabeticIndex_S_Record.h"
#include "android.icu.text.AlphabeticIndex.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

// .method constructor <init>(Landroid/icu/text/AlphabeticIndex;)V
android::icu::text::AlphabeticIndex_S_1::AlphabeticIndex_S_1(std::shared_ptr<android::icu::text::AlphabeticIndex> this_S_0)
{
	
	//    .local p1, "this$0":Landroid/icu/text/AlphabeticIndex;, "Landroid/icu/text/AlphabeticIndex<TV;>;"
	this->this_S_0 = this_S_0;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public compare(Landroid/icu/text/AlphabeticIndex$Record;Landroid/icu/text/AlphabeticIndex$Record;)I
int android::icu::text::AlphabeticIndex_S_1::compare(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Record<V>> o1,std::shared_ptr<android::icu::text::AlphabeticIndex_S_Record<V>> o2)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 055        value = {
	// 056            "(",
	// 057            "Landroid/icu/text/AlphabeticIndex$Record",
	// 058            "<TV;>;",
	// 059            "Landroid/icu/text/AlphabeticIndex$Record",
	// 060            "<TV;>;)I"
	// 061        }
	// 062    .end annotation
	//    .local p1, "o1":Landroid/icu/text/AlphabeticIndex$Record;, "Landroid/icu/text/AlphabeticIndex$Record<TV;>;"
	//    .local p2, "o2":Landroid/icu/text/AlphabeticIndex$Record;, "Landroid/icu/text/AlphabeticIndex$Record<TV;>;"
	return android::icu::text::AlphabeticIndex::-get0(this->this_S_0)->compare(android::icu::text::AlphabeticIndex_S_Record::-get0(o1), android::icu::text::AlphabeticIndex_S_Record::-get0(o2));

}


