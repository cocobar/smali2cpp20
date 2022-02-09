// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_WholeBundle.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceArray.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceBinary.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceInt.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceIntVector.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceString.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceTable.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"

// .method constructor <init>(Landroid/icu/impl/ICUResourceBundle$WholeBundle;)V
android::icu::impl::ICUResourceBundleImpl::ICUResourceBundleImpl(std::shared_ptr<android::icu::impl::ICUResourceBundle_S_WholeBundle> wholeBundle)
{
	
	//    .param p1, "wholeBundle"    # Landroid/icu/impl/ICUResourceBundle$WholeBundle;
	android::icu::impl::ICUResourceBundle::(wholeBundle);
	this->resource = wholeBundle->reader->getRootResource();
	return;

}
// .method protected constructor <init>(Landroid/icu/impl/ICUResourceBundleImpl;Ljava/lang/String;I)V
android::icu::impl::ICUResourceBundleImpl::ICUResourceBundleImpl(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource)
{
	
	//    .param p1, "container"    # Landroid/icu/impl/ICUResourceBundleImpl;
	//    .param p2, "key"    # Ljava/lang/String;
	//    .param p3, "resource"    # I
	android::icu::impl::ICUResourceBundle::(container, key);
	this->resource = resource;
	return;

}
// .method protected final createBundleObject(Ljava/lang/String;ILjava/util/HashMap;Landroid/icu/util/UResourceBundle;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundleImpl::createBundleObject(std::shared_ptr<java::lang::String> _key,int _resource,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundleImpl_S_ResourceString> cVar1;
	std::shared_ptr<android::icu::impl::ICUResourceBundleImpl_S_ResourceBinary> cVar2;
	std::shared_ptr<android::icu::impl::ICUResourceBundleImpl_S_ResourceTable> cVar6;
	std::shared_ptr<android::icu::impl::ICUResourceBundleImpl_S_ResourceInt> cVar3;
	std::shared_ptr<android::icu::impl::ICUResourceBundleImpl_S_ResourceArray> cVar5;
	std::shared_ptr<android::icu::impl::ICUResourceBundleImpl_S_ResourceIntVector> cVar4;
	
	//    .param p1, "_key"    # Ljava/lang/String;
	//    .param p2, "_resource"    # I
	//    .param p4, "requested"    # Landroid/icu/util/UResourceBundle;
	//    .annotation system Ldalvik/annotation/Signature;
	// 071        value = {
	// 072            "(",
	// 073            "Ljava/lang/String;",
	// 074            "I",
	// 075            "Ljava/util/HashMap",
	// 076            "<",
	// 077            "Ljava/lang/String;",
	// 078            "Ljava/lang/String;",
	// 079            ">;",
	// 080            "Landroid/icu/util/UResourceBundle;",
	// 081            ")",
	// 082            "Landroid/icu/impl/ICUResourceBundle;"
	// 083        }
	// 084    .end annotation
	//    .local p3, "aliasesVisited":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;"
	// switch
	{
	auto item = ( android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(_resource) );
	if (item == 0) goto label_pswitch_10;
	if (item == 1) goto label_pswitch_16;
	if (item == 2) goto label_pswitch_3a;
	if (item == 3) goto label_pswitch_1c;
	if (item == 4) goto label_pswitch_3a;
	if (item == 5) goto label_pswitch_3a;
	if (item == 6) goto label_pswitch_10;
	if (item == 7) goto label_pswitch_28;
	if (item == 8) goto label_pswitch_34;
	if (item == 9) goto label_pswitch_34;
	if (item == 10) goto label_pswitch_7;
	if (item == 11) goto label_pswitch_7;
	if (item == 12) goto label_pswitch_7;
	if (item == 13) goto label_pswitch_7;
	if (item == 14) goto label_pswitch_2e;
	}
label_pswitch_7:
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The resource type is unknown")));
	// throw
	throw cVar0;
	// 105    .line 41
label_pswitch_10:
	cVar1 = std::make_shared<android::icu::impl::ICUResourceBundleImpl_S_ResourceString>(this, _key, _resource);
	return cVar1;
	// 113    .line 43
label_pswitch_16:
	cVar2 = std::make_shared<android::icu::impl::ICUResourceBundleImpl_S_ResourceBinary>(this, _key, _resource);
	return cVar2;
	// 121    .line 45
label_pswitch_1c:
	return android::icu::impl::ICUResourceBundleImpl::getAliasedResource(this, 0x0, 0x0, _key, _resource, aliasesVisited, requested);
	// 143    .line 47
label_pswitch_28:
	cVar3 = std::make_shared<android::icu::impl::ICUResourceBundleImpl_S_ResourceInt>(this, _key, _resource);
	return cVar3;
	// 151    .line 49
label_pswitch_2e:
	cVar4 = std::make_shared<android::icu::impl::ICUResourceBundleImpl_S_ResourceIntVector>(this, _key, _resource);
	return cVar4;
	// 159    .line 52
label_pswitch_34:
	cVar5 = std::make_shared<android::icu::impl::ICUResourceBundleImpl_S_ResourceArray>(this, _key, _resource);
	return cVar5;
	// 167    .line 56
label_pswitch_3a:
	cVar6 = std::make_shared<android::icu::impl::ICUResourceBundleImpl_S_ResourceTable>(this, _key, _resource);
	return cVar6;
	// 175    .line 38
	// 176    :pswitch_data_40
	// 177    .packed-switch 0x0
	// 178        :pswitch_10
	// 179        :pswitch_16
	// 180        :pswitch_3a
	// 181        :pswitch_1c
	// 182        :pswitch_3a
	// 183        :pswitch_3a
	// 184        :pswitch_10
	// 185        :pswitch_28
	// 186        :pswitch_34
	// 187        :pswitch_34
	// 188        :pswitch_7
	// 189        :pswitch_7
	// 190        :pswitch_7
	// 191        :pswitch_7
	// 192        :pswitch_2e
	// 193    .end packed-switch

}
// .method public getResource()I
int android::icu::impl::ICUResourceBundleImpl::getResource()
{
	
	return this->resource;

}


