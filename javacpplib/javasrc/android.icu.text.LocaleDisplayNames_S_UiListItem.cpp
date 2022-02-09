// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\LocaleDisplayNames$UiListItem.smali
#include "java2ctype.h"
#include "android.icu.text.LocaleDisplayNames_S_UiListItem_S_UiListItemComparator.h"
#include "android.icu.text.LocaleDisplayNames_S_UiListItem.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Comparator.h"

// .method public constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)V
android::icu::text::LocaleDisplayNames_S_UiListItem::LocaleDisplayNames_S_UiListItem(std::shared_ptr<android::icu::util::ULocale> minimized,std::shared_ptr<android::icu::util::ULocale> modified,std::shared_ptr<java::lang::String> nameInDisplayLocale,std::shared_ptr<java::lang::String> nameInSelf)
{
	
	//    .param p1, "minimized"    # Landroid/icu/util/ULocale;
	//    .param p2, "modified"    # Landroid/icu/util/ULocale;
	//    .param p3, "nameInDisplayLocale"    # Ljava/lang/String;
	//    .param p4, "nameInSelf"    # Ljava/lang/String;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->minimized = minimized;
	this->modified = modified;
	this->nameInDisplayLocale = nameInDisplayLocale;
	this->nameInSelf = nameInSelf;
	return;

}
// .method public static getComparator(Ljava/util/Comparator;Z)Ljava/util/Comparator;
std::shared_ptr<java::util::Comparator<android::icu::text::LocaleDisplayNames_S_UiListItem>> android::icu::text::LocaleDisplayNames_S_UiListItem::getComparator(std::shared_ptr<java::util::Comparator<java::lang::Object>> comparator,bool inSelf)
{
	
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_UiListItem_S_UiListItemComparator> cVar0;
	
	//    .param p1, "inSelf"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 065        value = {
	// 066            "(",
	// 067            "Ljava/util/Comparator",
	// 068            "<",
	// 069            "Ljava/lang/Object;",
	// 070            ">;Z)",
	// 071            "Ljava/util/Comparator",
	// 072            "<",
	// 073            "Landroid/icu/text/LocaleDisplayNames$UiListItem;",
	// 074            ">;"
	// 075        }
	// 076    .end annotation
	//    .local p0, "comparator":Ljava/util/Comparator;, "Ljava/util/Comparator<Ljava/lang/Object;>;"
	cVar0 = std::make_shared<android::icu::text::LocaleDisplayNames_S_UiListItem_S_UiListItemComparator>(comparator, inSelf);
	return cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::LocaleDisplayNames_S_UiListItem::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_UiListItem> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return 0x1;
	// 105    .line 321
label_cond_5:
	if ( !(obj) )  
		goto label_cond_d;
	if ( !(( obj->instanceOf("android::icu::text::LocaleDisplayNames_S_UiListItem") ^ 0x1)) )  
		goto label_cond_e;
label_cond_d:
	return cVar1;
label_cond_e:
	other = obj;
	other->checkCast("android::icu::text::LocaleDisplayNames_S_UiListItem");
	//    .local v0, "other":Landroid/icu/text/LocaleDisplayNames$UiListItem;
	if ( !(this->nameInDisplayLocale->equals(other->nameInDisplayLocale)) )  
		goto label_cond_37;
	if ( !(this->nameInSelf->equals(other->nameInSelf)) )  
		goto label_cond_37;
	if ( !(this->minimized->equals(other->minimized)) )  
		goto label_cond_37;
	cVar1 = this->modified->equals(other->modified);
label_cond_37:
	return cVar1;

}
// .method public hashCode()I
int android::icu::text::LocaleDisplayNames_S_UiListItem::hashCode()
{
	
	return (this->modified->hashCode() ^  this->nameInDisplayLocale->hashCode());

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::LocaleDisplayNames_S_UiListItem::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("{")))->append(this->minimized)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(this->modified)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(this->nameInDisplayLocale)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(this->nameInSelf)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")))->toString();

}


