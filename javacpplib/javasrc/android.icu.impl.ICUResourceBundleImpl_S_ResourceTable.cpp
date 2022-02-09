// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceTable.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_WholeBundle.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceContainer.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceTable.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Array.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Container.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Table.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"
#include "java.util.Set.h"
#include "java.util.TreeSet.h"

// .method constructor <init>(Landroid/icu/impl/ICUResourceBundle$WholeBundle;I)V
android::icu::impl::ICUResourceBundleImpl_S_ResourceTable::ICUResourceBundleImpl_S_ResourceTable(std::shared_ptr<android::icu::impl::ICUResourceBundle_S_WholeBundle> wholeBundle,int rootRes)
{
	
	//    .param p1, "wholeBundle"    # Landroid/icu/impl/ICUResourceBundle$WholeBundle;
	//    .param p2, "rootRes"    # I
	android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer::(wholeBundle);
	this->value = wholeBundle->reader->getTable(rootRes);
	return;

}
// .method constructor <init>(Landroid/icu/impl/ICUResourceBundleImpl;Ljava/lang/String;I)V
android::icu::impl::ICUResourceBundleImpl_S_ResourceTable::ICUResourceBundleImpl_S_ResourceTable(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource)
{
	
	//    .param p1, "container"    # Landroid/icu/impl/ICUResourceBundleImpl;
	//    .param p2, "key"    # Ljava/lang/String;
	//    .param p3, "resource"    # I
	android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer::(container, key, resource);
	this->value = this->wholeBundle->reader->getTable(resource);
	return;

}
// .method findString(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleImpl_S_ResourceTable::findString(std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Container> cVar0;
	int index;
	
	//    .param p1, "key"    # Ljava/lang/String;
	reader = this->wholeBundle->reader;
	//    .local v1, "reader":Landroid/icu/impl/ICUResourceBundleReader;
	cVar0 = this->value;
	cVar0->checkCast("android::icu::impl::ICUResourceBundleReader_S_Table");
	index = cVar0->findTableItem(reader, key);
	//    .local v0, "index":I
	if ( index >= 0 )
		goto label_cond_10;
	return 0x0;
	// 096    .line 296
label_cond_10:
	return reader->getString(this->value->getContainerResource(reader, index));

}
// .method protected getKey(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleImpl_S_ResourceTable::getKey(int index)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Container> cVar0;
	
	//    .param p1, "index"    # I
	cVar0 = this->value;
	cVar0->checkCast("android::icu::impl::ICUResourceBundleReader_S_Table");
	return cVar0->getKey(this->wholeBundle->reader, index);

}
// .method public getType()I
int android::icu::impl::ICUResourceBundleImpl_S_ResourceTable::getType()
{
	
	return 0x2;

}
// .method protected handleGet(ILjava/util/HashMap;Landroid/icu/util/UResourceBundle;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::impl::ICUResourceBundleImpl_S_ResourceTable::handleGet(int index,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Container> cVar0;
	std::shared_ptr<java::lang::String> itemKey;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	
	//    .param p1, "index"    # I
	//    .param p3, "requested"    # Landroid/icu/util/UResourceBundle;
	//    .annotation system Ldalvik/annotation/Signature;
	// 147        value = {
	// 148            "(I",
	// 149            "Ljava/util/HashMap",
	// 150            "<",
	// 151            "Ljava/lang/String;",
	// 152            "Ljava/lang/String;",
	// 153            ">;",
	// 154            "Landroid/icu/util/UResourceBundle;",
	// 155            ")",
	// 156            "Landroid/icu/util/UResourceBundle;"
	// 157        }
	// 158    .end annotation
	//    .local p2, "aliasesVisited":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;"
	cVar0 = this->value;
	cVar0->checkCast("android::icu::impl::ICUResourceBundleReader_S_Table");
	itemKey = cVar0->getKey(this->wholeBundle->reader, index);
	//    .local v0, "itemKey":Ljava/lang/String;
	if ( itemKey )     
		goto label_cond_14;
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar1;
	// 186    .line 248
label_cond_14:
	return this->createBundleObject(itemKey, this->getContainerResource(index), aliasesVisited, requested);

}
// .method protected handleGet(Ljava/lang/String;Ljava/util/HashMap;Landroid/icu/util/UResourceBundle;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::impl::ICUResourceBundleImpl_S_ResourceTable::handleGet(std::shared_ptr<java::lang::String> resKey,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Container> cVar0;
	int i;
	
	//    .param p1, "resKey"    # Ljava/lang/String;
	//    .param p3, "requested"    # Landroid/icu/util/UResourceBundle;
	//    .annotation system Ldalvik/annotation/Signature;
	// 204        value = {
	// 205            "(",
	// 206            "Ljava/lang/String;",
	// 207            "Ljava/util/HashMap",
	// 208            "<",
	// 209            "Ljava/lang/String;",
	// 210            "Ljava/lang/String;",
	// 211            ">;",
	// 212            "Landroid/icu/util/UResourceBundle;",
	// 213            ")",
	// 214            "Landroid/icu/util/UResourceBundle;"
	// 215        }
	// 216    .end annotation
	//    .local p2, "aliasesVisited":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;"
	cVar0 = this->value;
	cVar0->checkCast("android::icu::impl::ICUResourceBundleReader_S_Table");
	i = cVar0->findTableItem(this->wholeBundle->reader, resKey);
	//    .local v0, "i":I
	if ( i >= 0 )
		goto label_cond_10;
	return 0x0;
	// 242    .line 239
label_cond_10:
	return this->createBundleObject(resKey, this->getContainerResource(i), aliasesVisited, requested);

}
// .method protected handleGetObject(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUResourceBundleImpl_S_ResourceTable::handleGetObject(std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Container> cVar0;
	int index;
	int res;
	std::shared_ptr<java::lang::Object> s;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Container> array;
	int length;
	std::shared<std::vector<std::vector<java::lang::String>>> strings;
	int j;
	auto s;
	
	//    .param p1, "key"    # Ljava/lang/String;
	reader = this->wholeBundle->reader;
	//    .local v4, "reader":Landroid/icu/impl/ICUResourceBundleReader;
	cVar0 = this->value;
	cVar0->checkCast("android::icu::impl::ICUResourceBundleReader_S_Table");
	index = cVar0->findTableItem(reader, key);
	//    .local v1, "index":I
	if ( index < 0 ) 
		goto label_cond_35;
	res = this->value->getContainerResource(reader, index);
	//    .local v5, "res":I
	s = reader->getString(res);
	//    .local v6, "s":Ljava/lang/String;
	if ( !(s) )  
		goto label_cond_1b;
	return s;
	// 299    .line 266
label_cond_1b:
	array = reader->getArray(res);
	//    .local v0, "array":Landroid/icu/impl/ICUResourceBundleReader$Container;
	if ( !(array) )  
		goto label_cond_35;
	length = array->getSize();
	//    .local v3, "length":I
	strings = std::make_shared<std::vector<std::vector<java::lang::String>>>(length);
	//    .local v7, "strings":[Ljava/lang/String;
	j = 0x0;
	//    .local v2, "j":I
label_goto_28:
	if ( j != length )
		goto label_cond_2b;
	return strings;
	// 330    .line 274
label_cond_2b:
	s = reader->getString(array->getContainerResource(reader, j));
	if ( s )     
		goto label_cond_3a;
	//    .end local v0    # "array":Landroid/icu/impl/ICUResourceBundleReader$Container;
	//    .end local v2    # "j":I
	//    .end local v3    # "length":I
	//    .end local v5    # "res":I
	//    .end local v6    # "s":Ljava/lang/String;
	//    .end local v7    # "strings":[Ljava/lang/String;
label_cond_35:
	return this->handleGetObject(key);
	// 357    .line 281
	// 358    .restart local v0    # "array":Landroid/icu/impl/ICUResourceBundleReader$Container;
	// 359    .restart local v2    # "j":I
	// 360    .restart local v3    # "length":I
	// 361    .restart local v5    # "res":I
	// 362    .restart local v6    # "s":Ljava/lang/String;
	// 363    .restart local v7    # "strings":[Ljava/lang/String;
label_cond_3a:
	strings[j] = s;
	j = ( j + 0x1);
	goto label_goto_28;

}
// .method protected handleKeySet()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICUResourceBundleImpl_S_ResourceTable::handleKeySet()
{
	
	std::shared_ptr<java::util::TreeSet> keySet;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Container> table;
	int i;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 376        value = {
	// 377            "()",
	// 378            "Ljava/util/Set",
	// 379            "<",
	// 380            "Ljava/lang/String;",
	// 381            ">;"
	// 382        }
	// 383    .end annotation
	//    .local v2, "reader":Landroid/icu/impl/ICUResourceBundleReader;
	keySet = std::make_shared<java::util::TreeSet>();
	//    .local v1, "keySet":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
	table = this->value;
	table->checkCast("android::icu::impl::ICUResourceBundleReader_S_Table");
	//    .local v3, "table":Landroid/icu/impl/ICUResourceBundleReader$Table;
	i = 0x0;
	//    .local v0, "i":I
label_goto_e:
	if ( i >= table->getSize() )
		goto label_cond_1e;
	keySet->add(table->getKey(this->wholeBundle->reader, i));
	i = ( i + 0x1);
	goto label_goto_e;
	// 427    .line 230
label_cond_1e:
	return keySet;

}


