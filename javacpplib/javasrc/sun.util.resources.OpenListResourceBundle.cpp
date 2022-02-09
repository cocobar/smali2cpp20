// CPP L:\smali2cpp20\x64\Release\out\sun\util\resources\OpenListResourceBundle.smali
#include "java2ctype.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.Enumeration.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Map.h"
#include "java.util.ResourceBundle.h"
#include "java.util.Set.h"
#include "sun.util.ResourceBundleEnumeration.h"
#include "sun.util.resources.OpenListResourceBundle.h"

// .method protected constructor <init>()V
sun::util::resources::OpenListResourceBundle::OpenListResourceBundle()
{
	
	// 037    invoke-direct {p0}, Ljava/util/ResourceBundle;-><init>()V
	this->lookup = 0x0;
	return;

}
// .method private loadLookup()V
void sun::util::resources::OpenListResourceBundle::loadLookup()
{
	
	auto contents;
	std::shared_ptr<java::util::Map> temp;
	int i;
	std::shared_ptr<java::lang::String> key;
	std::shared_ptr<java::lang::Object> value;
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	contents = this->getContents();
	//    .local v0, "contents":[[Ljava/lang/Object;
	temp = this->createMap(contents->size());
	//    .local v3, "temp":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
	i = 0x0;
	//    .local v1, "i":I
label_goto_a:
	if ( i >= contents->size() )
		goto label_cond_29;
	key = contents[i][0x0];
	key->checkCast("java::lang::String");
	//    .local v2, "key":Ljava/lang/String;
	value = contents[i][0x1];
	//    .local v4, "value":Ljava/lang/Object;
	if ( !(key) )  
		goto label_cond_1d;
	if ( value )     
		goto label_cond_23;
label_cond_1d:
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 106    .line 146
label_cond_23:
	temp->put(key, value);
	i = ( i + 0x1);
	goto label_goto_a;
	// 115    .line 148
	// 116    .end local v2    # "key":Ljava/lang/String;
	// 117    .end local v4    # "value":Ljava/lang/Object;
label_cond_29:
	this->monitor_enter();
	try {
	//label_try_start_2a:
	if ( this->lookup )     
		goto label_cond_30;
	this->lookup = temp;
	//label_try_end_30:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_2a .. :try_end_30} :catchall_32
label_cond_30:
	this->monitor_exit();
	return;
	// 138    .line 148
label_catchall_32:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method protected createMap(I)Ljava/util/Map;
template <typename K,typename V>
std::shared_ptr<java::util::Map<K,V>> sun::util::resources::OpenListResourceBundle::createMap(int size)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	//    .param p1, "size"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 153        value = {
	// 154            "<K:",
	// 155            "Ljava/lang/Object;",
	// 156            "V:",
	// 157            "Ljava/lang/Object;",
	// 158            ">(I)",
	// 159            "Ljava/util/Map",
	// 160            "<TK;TV;>;"
	// 161        }
	// 162    .end annotation
	cVar0 = std::make_shared<java::util::HashMap>(size);
	return cVar0;

}
// .method protected createSet()Ljava/util/Set;
template <typename E>
std::shared_ptr<java::util::Set<E>> sun::util::resources::OpenListResourceBundle::createSet()
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 176        value = {
	// 177            "<E:",
	// 178            "Ljava/lang/Object;",
	// 179            ">()",
	// 180            "Ljava/util/Set",
	// 181            "<TE;>;"
	// 182        }
	// 183    .end annotation
	cVar0 = std::make_shared<java::util::HashSet>();
	return cVar0;

}
// .method public getKeys()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::util::resources::OpenListResourceBundle::getKeys()
{
	
	std::shared_ptr<java::util::Enumeration> cVar2;
	std::shared_ptr<java::util::ResourceBundle> parentBundle;
	std::shared_ptr<sun::util::ResourceBundleEnumeration> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 200        value = {
	// 201            "()",
	// 202            "Ljava/util/Enumeration",
	// 203            "<",
	// 204            "Ljava/lang/String;",
	// 205            ">;"
	// 206        }
	// 207    .end annotation
	cVar2 = 0x0;
	parentBundle = this->parent;
	//    .local v0, "parentBundle":Ljava/util/ResourceBundle;
	if ( !(parentBundle) )  
		goto label_cond_f;
	cVar2 = parentBundle->getKeys();
label_cond_f:
	cVar1 = std::make_shared<sun::util::ResourceBundleEnumeration>(this->handleKeySet(), cVar2);
	return cVar1;

}
// .method protected handleGetObject(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::util::resources::OpenListResourceBundle::handleGetObject(std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "key"    # Ljava/lang/String;
	if ( key )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 252    .line 76
label_cond_8:
	this->loadLookupTablesIfNecessary();
	return this->lookup->get(key);

}
// .method protected handleKeySet()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::util::resources::OpenListResourceBundle::handleKeySet()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 269        value = {
	// 270            "()",
	// 271            "Ljava/util/Set",
	// 272            "<",
	// 273            "Ljava/lang/String;",
	// 274            ">;"
	// 275        }
	// 276    .end annotation
	this->loadLookupTablesIfNecessary();
	return this->lookup->keySet();

}
// .method public keySet()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::util::resources::OpenListResourceBundle::keySet()
{
	
	std::shared_ptr<java::util::Set> ks;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 295        value = {
	// 296            "()",
	// 297            "Ljava/util/Set",
	// 298            "<",
	// 299            "Ljava/lang/String;",
	// 300            ">;"
	// 301        }
	// 302    .end annotation
	if ( !(this->keyset) )  
		goto label_cond_7;
	return this->keyset;
	// 315    .line 105
label_cond_7:
	ks = this->createSet();
	//    .local v0, "ks":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	ks->addAll(this->handleKeySet());
	if ( !(this->parent) )  
		goto label_cond_1f;
	ks->addAll(this->parent->keySet());
label_cond_1f:
	this->monitor_enter();
	try {
	//label_try_start_20:
	if ( this->keyset )     
		goto label_cond_26;
	this->keyset = ks;
	//label_try_end_26:
	}
	catch (...){
		goto label_catchall_2a;
	}
	//    .catchall {:try_start_20 .. :try_end_26} :catchall_2a
label_cond_26:
	this->monitor_exit();
	return this->keyset;
	// 366    .line 110
label_catchall_2a:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method loadLookupTablesIfNecessary()V
void sun::util::resources::OpenListResourceBundle::loadLookupTablesIfNecessary()
{
	
	if ( this->lookup )     
		goto label_cond_7;
	this->loadLookup();
label_cond_7:
	return;

}


