// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceContainer.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_WholeBundle.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceContainer.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Container.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"

// .method constructor <init>(Landroid/icu/impl/ICUResourceBundle$WholeBundle;)V
android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer::ICUResourceBundleImpl_S_ResourceContainer(std::shared_ptr<android::icu::impl::ICUResourceBundle_S_WholeBundle> wholeBundle)
{
	
	//    .param p1, "wholeBundle"    # Landroid/icu/impl/ICUResourceBundle$WholeBundle;
	android::icu::impl::ICUResourceBundleImpl::(wholeBundle);
	return;

}
// .method constructor <init>(Landroid/icu/impl/ICUResourceBundleImpl;Ljava/lang/String;I)V
android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer::ICUResourceBundleImpl_S_ResourceContainer(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource)
{
	
	//    .param p1, "container"    # Landroid/icu/impl/ICUResourceBundleImpl;
	//    .param p2, "key"    # Ljava/lang/String;
	//    .param p3, "resource"    # I
	android::icu::impl::ICUResourceBundleImpl::(container, key, resource);
	return;

}
// .method protected createBundleObject(ILjava/lang/String;Ljava/util/HashMap;Landroid/icu/util/UResourceBundle;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer::createBundleObject(int index,std::shared_ptr<java::lang::String> resKey,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	int item;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p1, "index"    # I
	//    .param p2, "resKey"    # Ljava/lang/String;
	//    .param p4, "requested"    # Landroid/icu/util/UResourceBundle;
	//    .annotation system Ldalvik/annotation/Signature;
	// 056        value = {
	// 057            "(I",
	// 058            "Ljava/lang/String;",
	// 059            "Ljava/util/HashMap",
	// 060            "<",
	// 061            "Ljava/lang/String;",
	// 062            "Ljava/lang/String;",
	// 063            ">;",
	// 064            "Landroid/icu/util/UResourceBundle;",
	// 065            ")",
	// 066            "Landroid/icu/util/UResourceBundle;"
	// 067        }
	// 068    .end annotation
	//    .local p3, "aliasesVisited":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;"
	item = this->getContainerResource(index);
	//    .local v0, "item":I
	if ( item != -0x1 )
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 090    .line 165
label_cond_d:
	return this->createBundleObject(resKey, item, aliasesVisited, requested);

}
// .method protected getContainerResource(I)I
int android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer::getContainerResource(int index)
{
	
	//    .param p1, "index"    # I
	return this->value->getContainerResource(this->wholeBundle->reader, index);

}
// .method public getSize()I
int android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer::getSize()
{
	
	return this->value->getSize();

}
// .method public getString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer::getString(int index)
{
	
	int res;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "index"    # I
	res = this->value->getContainerResource(this->wholeBundle->reader, index);
	//    .local v0, "res":I
	if ( res != -0x1 )
		goto label_cond_13;
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 161    .line 150
label_cond_13:
	s = this->wholeBundle->reader->getString(res);
	//    .local v1, "s":Ljava/lang/String;
	if ( !(s) )  
		goto label_cond_1e;
	return s;
	// 178    .line 154
label_cond_1e:
	return this->getString(index);

}


