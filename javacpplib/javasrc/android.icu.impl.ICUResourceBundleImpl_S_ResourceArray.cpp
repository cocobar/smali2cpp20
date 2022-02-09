// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceArray.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_WholeBundle.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceArray.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceContainer.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Array.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Container.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.UResourceTypeMismatchException.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"

// .method constructor <init>(Landroid/icu/impl/ICUResourceBundleImpl;Ljava/lang/String;I)V
android::icu::impl::ICUResourceBundleImpl_S_ResourceArray::ICUResourceBundleImpl_S_ResourceArray(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource)
{
	
	//    .param p1, "container"    # Landroid/icu/impl/ICUResourceBundleImpl;
	//    .param p2, "key"    # Ljava/lang/String;
	//    .param p3, "resource"    # I
	android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer::(container, key, resource);
	this->value = this->wholeBundle->reader->getArray(resource);
	return;

}
// .method public getStringArray()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleImpl_S_ResourceArray::getStringArray()
{
	
	return this->handleGetStringArray();

}
// .method public getType()I
int android::icu::impl::ICUResourceBundleImpl_S_ResourceArray::getType()
{
	
	return 0x8;

}
// .method protected handleGet(ILjava/util/HashMap;Landroid/icu/util/UResourceBundle;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::impl::ICUResourceBundleImpl_S_ResourceArray::handleGet(int index,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	//    .param p1, "index"    # I
	//    .param p3, "requested"    # Landroid/icu/util/UResourceBundle;
	//    .annotation system Ldalvik/annotation/Signature;
	// 072        value = {
	// 073            "(I",
	// 074            "Ljava/util/HashMap",
	// 075            "<",
	// 076            "Ljava/lang/String;",
	// 077            "Ljava/lang/String;",
	// 078            ">;",
	// 079            "Landroid/icu/util/UResourceBundle;",
	// 080            ")",
	// 081            "Landroid/icu/util/UResourceBundle;"
	// 082        }
	// 083    .end annotation
	//    .local p2, "aliasesVisited":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;"
	return this->createBundleObject(index, java::lang::Integer::toString(index), aliasesVisited, requested);

}
// .method protected handleGet(Ljava/lang/String;Ljava/util/HashMap;Landroid/icu/util/UResourceBundle;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::impl::ICUResourceBundleImpl_S_ResourceArray::handleGet(std::shared_ptr<java::lang::String> indexStr,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	//    .param p1, "indexStr"    # Ljava/lang/String;
	//    .param p3, "requested"    # Landroid/icu/util/UResourceBundle;
	//    .annotation system Ldalvik/annotation/Signature;
	// 104        value = {
	// 105            "(",
	// 106            "Ljava/lang/String;",
	// 107            "Ljava/util/HashMap",
	// 108            "<",
	// 109            "Ljava/lang/String;",
	// 110            "Ljava/lang/String;",
	// 111            ">;",
	// 112            "Landroid/icu/util/UResourceBundle;",
	// 113            ")",
	// 114            "Landroid/icu/util/UResourceBundle;"
	// 115        }
	// 116    .end annotation
	//    .local p2, "aliasesVisited":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;"
	//    .local v0, "i":I
	return this->createBundleObject(java::lang::Integer::parseInt(indexStr), indexStr, aliasesVisited, requested);

}
// .method protected handleGetStringArray()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleImpl_S_ResourceArray::handleGetStringArray()
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader;
	int length;
	std::shared<std::vector<std::vector<java::lang::String>>> strings;
	int i;
	auto s;
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	reader = this->wholeBundle->reader;
	//    .local v2, "reader":Landroid/icu/impl/ICUResourceBundleReader;
	length = this->value->getSize();
	//    .local v1, "length":I
	strings = std::make_shared<std::vector<std::vector<java::lang::String>>>(length);
	//    .local v4, "strings":[Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
label_goto_d:
	if ( i >= length )
		goto label_cond_29;
	s = reader->getString(this->value->getContainerResource(reader, i));
	//    .local v3, "s":Ljava/lang/String;
	if ( s )     
		goto label_cond_24;
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;
	// 187    .line 190
label_cond_24:
	strings[i] = s;
	i = ( i + 0x1);
	goto label_goto_d;
	// 196    .line 192
	// 197    .end local v3    # "s":Ljava/lang/String;
label_cond_29:
	return strings;

}


