// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\LocaleDisplayNames$UiListItem$UiListItemComparator.smali
#include "java2ctype.h"
#include "android.icu.text.LocaleDisplayNames_S_UiListItem_S_UiListItemComparator.h"
#include "android.icu.text.LocaleDisplayNames_S_UiListItem.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Comparator.h"

// .method constructor <init>(Ljava/util/Comparator;Z)V
android::icu::text::LocaleDisplayNames_S_UiListItem_S_UiListItemComparator::LocaleDisplayNames_S_UiListItem_S_UiListItemComparator(std::shared_ptr<java::util::Comparator<java::lang::Object>> collator,bool useSelf)
{
	
	//    .param p2, "useSelf"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 050        value = {
	// 051            "(",
	// 052            "Ljava/util/Comparator",
	// 053            "<",
	// 054            "Ljava/lang/Object;",
	// 055            ">;Z)V"
	// 056        }
	// 057    .end annotation
	//    .local p1, "collator":Ljava/util/Comparator;, "Ljava/util/Comparator<Ljava/lang/Object;>;"
	// 062    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->collator = collator;
	this->useSelf = useSelf;
	return;

}
// .method public compare(Landroid/icu/text/LocaleDisplayNames$UiListItem;Landroid/icu/text/LocaleDisplayNames$UiListItem;)I
int android::icu::text::LocaleDisplayNames_S_UiListItem_S_UiListItemComparator::compare(std::shared_ptr<android::icu::text::LocaleDisplayNames_S_UiListItem> o1,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_UiListItem> o2)
{
	
	int result;
	
	//    .param p1, "o1"    # Landroid/icu/text/LocaleDisplayNames$UiListItem;
	//    .param p2, "o2"    # Landroid/icu/text/LocaleDisplayNames$UiListItem;
	if ( !(this->useSelf) )  
		goto label_cond_11;
	result = this->collator->compare(o1->nameInSelf, o2->nameInSelf);
	//    .local v0, "result":I
label_goto_e:
	if ( !(result) )  
		goto label_cond_1c;
	//    .end local v0    # "result":I
label_goto_10:
	return result;
	// 106    .line 368
label_cond_11:
	result = this->collator->compare(o1->nameInDisplayLocale, o2->nameInDisplayLocale);
	//    .restart local v0    # "result":I
	goto label_goto_e;
	// 121    .line 369
label_cond_1c:
	result = o1->modified->compareTo(o2->modified);
	goto label_goto_10;

}


