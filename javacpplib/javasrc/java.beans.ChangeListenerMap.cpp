// CPP L:\smali2cpp20\x64\Release\out\java\beans\ChangeListenerMap.smali
#include "java2ctype.h"
#include "java.beans.ChangeListenerMap.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.EventListener.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

// .method constructor <init>()V
java::beans::ChangeListenerMap::ChangeListenerMap()
{
	
	//    .local p0, "this":Ljava/beans/ChangeListenerMap;, "Ljava/beans/ChangeListenerMap<TL;>;"
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public final declared-synchronized add(Ljava/lang/String;Ljava/util/EventListener;)V
void java::beans::ChangeListenerMap::add(std::shared_ptr<java::lang::String> name,std::shared_ptr<L> listener)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<std::vector<java::util::EventListener>> array;
	int size;
	std::shared_ptr<java::lang::Object> clone;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 050        value = {
	// 051            "(",
	// 052            "Ljava/lang/String;",
	// 053            "T",
	// 054            "L;",
	// 055            ")V"
	// 056        }
	// 057    .end annotation
	//    .local p0, "this":Ljava/beans/ChangeListenerMap;, "Ljava/beans/ChangeListenerMap<TL;>;"
	//    .local p2, "listener":Ljava/util/EventListener;, "TL;"
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->map )     
		goto label_cond_c;
	cVar0 = std::make_shared<java::util::HashMap>();
	this->map = cVar0;
label_cond_c:
	array = this->map->get(name);
	array->checkCast("std::vector<java::util::EventListener>");
	//    .local v0, "array":[Ljava/util/EventListener;, "[TL;"
	if ( !(array) )  
		goto label_cond_2d;
	size = array->size();
	//    .local v2, "size":I
label_goto_17:
	clone = this->newArray(( size + 0x1));
	//    .local v1, "clone":[Ljava/util/EventListener;, "[TL;"
	clone[size] = listener;
	if ( !(array) )  
		goto label_cond_26;
	java::lang::System::arraycopy(array, 0x0, clone, 0x0, size);
label_cond_26:
	this->map->put(name, clone);
	//label_try_end_2b:
	}
	catch (...){
		goto label_catchall_2f;
	}
	//    .catchall {:try_start_1 .. :try_end_2b} :catchall_2f
	this->monitor_exit();
	return;
	// 130    .line 84
	// 131    .end local v1    # "clone":[Ljava/util/EventListener;, "[TL;"
	// 132    .end local v2    # "size":I
label_cond_2d:
	size = 0x0;
	//    .restart local v2    # "size":I
	goto label_goto_17;
	// 139    .end local v0    # "array":[Ljava/util/EventListener;, "[TL;"
	// 140    .end local v2    # "size":I
label_catchall_2f:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public abstract extract(Ljava/util/EventListener;)Ljava/util/EventListener;
std::shared_ptr<L> java::beans::ChangeListenerMap::extract(std::shared_ptr<L> var0)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 151        value = {
	// 152            "(T",
	// 153            "L;",
	// 154            ")T",
	// 155            "L;"
	// 156        }
	// 157    .end annotation

}
// .method public final declared-synchronized get(Ljava/lang/String;)[Ljava/util/EventListener;
std::shared_ptr<L> java::beans::ChangeListenerMap::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<std::vector<java::util::EventListener>> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 164        value = {
	// 165            "(",
	// 166            "Ljava/lang/String;",
	// 167            ")[T",
	// 168            "L;"
	// 169        }
	// 170    .end annotation
	//    .local p0, "this":Ljava/beans/ChangeListenerMap;, "Ljava/beans/ChangeListenerMap<TL;>;"
	cVar1 = 0x0;
	this->monitor_enter();
	try {
	//label_try_start_2:
	if ( !(this->map) )  
		goto label_cond_e;
	cVar1 = this->map->get(name);
	cVar1->checkCast("std::vector<java::util::EventListener>");
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_2 .. :try_end_e} :catchall_10
label_cond_e:
	this->monitor_exit();
	return cVar1;
label_catchall_10:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public final getEntries()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::util::Map_S_Entry<java::lang::String,std::vector<L>>>> java::beans::ChangeListenerMap::getEntries()
{
	
	std::shared_ptr<java::util::Set> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 212        value = {
	// 213            "()",
	// 214            "Ljava/util/Set",
	// 215            "<",
	// 216            "Ljava/util/Map$Entry",
	// 217            "<",
	// 218            "Ljava/lang/String;",
	// 219            "[T",
	// 220            "L;",
	// 221            ">;>;"
	// 222        }
	// 223    .end annotation
	//    .local p0, "this":Ljava/beans/ChangeListenerMap;, "Ljava/beans/ChangeListenerMap<TL;>;"
	if ( !(this->map) )  
		goto label_cond_b;
	cVar0 = this->map->entrySet();
label_goto_a:
	return cVar0;
	// 243    .line 231
label_cond_b:
	cVar0 = java::util::Collections::emptySet({const[class].FS-Param});
	goto label_goto_a;

}
// .method public final declared-synchronized getListeners()[Ljava/util/EventListener;
std::shared_ptr<L> java::beans::ChangeListenerMap::getListeners()
{
	
	int cVar0;
	std::shared_ptr<java::util::ArrayList> list;
	std::shared_ptr<std::vector<java::util::EventListener>> listeners;
	int cVar1;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<std::vector<java::util::EventListener>> cVar3;
	int cVar4;
	std::shared_ptr<std::vector<java::util::EventListener>> cVar6;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 255        value = {
	// 256            "()[T",
	// 257            "L;"
	// 258        }
	// 259    .end annotation
	//    .local p0, "this":Ljava/beans/ChangeListenerMap;, "Ljava/beans/ChangeListenerMap<TL;>;"
	cVar0 = 0x0;
	this->monitor_enter();
	try {
	//label_try_start_2:
	if ( this->map )     
		goto label_cond_d;
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_6d;
	}
	//    .catchall {:try_start_2 .. :try_end_a} :catchall_6d
	this->monitor_exit();
	return this->newArray(0x0);
	// 286    .line 170
label_cond_d:
	try {
	//label_try_start_d:
	list = std::make_shared<java::util::ArrayList>();
	//    .local v2, "list":Ljava/util/List;, "Ljava/util/List<TL;>;"
	listeners = this->map->get(0x0);
	listeners->checkCast("std::vector<java::util::EventListener>");
	//    .local v4, "listeners":[Ljava/util/EventListener;, "[TL;"
	if ( !(listeners) )  
		goto label_cond_29;
	cVar1 = cVar0;
label_goto_1f:
	if ( cVar1 >= listeners->size() )
		goto label_cond_29;
	//    .local v3, "listener":Ljava/util/EventListener;, "TL;"
	list->add(listeners[cVar1]);
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_1f;
	// 328    .line 178
	// 329    .end local v3    # "listener":Ljava/util/EventListener;, "TL;"
label_cond_29:
	entry_S_iterator = this->map->entrySet()->iterator();
	//    .local v1, "entry$iterator":Ljava/util/Iterator;
label_cond_33:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_5d;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[TL;>;"
	name = entry->getKey();
	name->checkCast("java::lang::String");
	//    .local v5, "name":Ljava/lang/String;
	if ( !(name) )  
		goto label_cond_33;
	cVar3 = entry->getValue();
	cVar3->checkCast("std::vector<java::util::EventListener>");
	cVar4 = cVar0;
label_goto_4f:
	if ( cVar4 >= cVar3->size() )
		goto label_cond_33;
	//    .restart local v3    # "listener":Ljava/util/EventListener;, "TL;"
	list->add(this->newProxy(name, cVar3[cVar4]));
	cVar4 = ( cVar4 + 0x1);
	goto label_goto_4f;
	// 396    .line 186
	// 397    .end local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[TL;>;"
	// 398    .end local v3    # "listener":Ljava/util/EventListener;, "TL;"
	// 399    .end local v5    # "name":Ljava/lang/String;
label_cond_5d:
	cVar6 = list->toArray(this->newArray(list->size()));
	cVar6->checkCast("std::vector<java::util::EventListener>");
	//label_try_end_6b:
	}
	catch (...){
		goto label_catchall_6d;
	}
	//    .catchall {:try_start_d .. :try_end_6b} :catchall_6d
	this->monitor_exit();
	return cVar6;
	// 421    .end local v1    # "entry$iterator":Ljava/util/Iterator;
	// 422    .end local v2    # "list":Ljava/util/List;, "Ljava/util/List<TL;>;"
	// 423    .end local v4    # "listeners":[Ljava/util/EventListener;, "[TL;"
label_catchall_6d:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public final getListeners(Ljava/lang/String;)[Ljava/util/EventListener;
std::shared_ptr<L> java::beans::ChangeListenerMap::getListeners(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::Object> listeners;
	std::shared_ptr<std::vector<java::util::EventListener>> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 436        value = {
	// 437            "(",
	// 438            "Ljava/lang/String;",
	// 439            ")[T",
	// 440            "L;"
	// 441        }
	// 442    .end annotation
	//    .local p0, "this":Ljava/beans/ChangeListenerMap;, "Ljava/beans/ChangeListenerMap<TL;>;"
	if ( !(name) )  
		goto label_cond_f;
	listeners = this->get(name);
	//    .local v0, "listeners":[Ljava/util/EventListener;, "[TL;"
	if ( !(listeners) )  
		goto label_cond_f;
	cVar0 = listeners->clone();
	cVar0->checkCast("std::vector<java::util::EventListener>");
	return cVar0;
	// 467    .line 202
	// 468    .end local v0    # "listeners":[Ljava/util/EventListener;, "[TL;"
label_cond_f:
	return this->newArray(0x0);

}
// .method public final declared-synchronized hasListeners(Ljava/lang/String;)Z
bool java::beans::ChangeListenerMap::hasListeners(std::shared_ptr<java::lang::String> name)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<std::vector<java::util::EventListener>> array;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .local p0, "this":Ljava/beans/ChangeListenerMap;, "Ljava/beans/ChangeListenerMap<TL;>;"
	cVar0 = 0x1;
	cVar1 = 0x0;
	this->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_5:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_3 .. :try_end_5} :catchall_22
	if ( this->map )     
		goto label_cond_9;
	this->monitor_exit();
	return cVar1;
	// 504    .line 217
label_cond_9:
	try {
	//label_try_start_9:
	array = this->map->get(0x0);
	array->checkCast("std::vector<java::util::EventListener>");
	//    .local v0, "array":[Ljava/util/EventListener;, "[TL;"
	if ( array )     
		goto label_cond_1e;
	if ( !(name) )  
		goto label_cond_20;
	//label_try_end_1b:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_9 .. :try_end_1b} :catchall_22
	if ( !(this->map->get(name)) )  
		goto label_cond_20;
label_cond_1e:
label_goto_1e:
	this->monitor_exit();
	return cVar0;
label_cond_20:
	cVar0 = cVar1;
	goto label_goto_1e;
	// 544    .end local v0    # "array":[Ljava/util/EventListener;, "[TL;"
label_catchall_22:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method protected abstract newArray(I)[Ljava/util/EventListener;
std::shared_ptr<L> java::beans::ChangeListenerMap::newArray(int var0)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 555        value = {
	// 556            "(I)[T",
	// 557            "L;"
	// 558        }
	// 559    .end annotation

}
// .method protected abstract newProxy(Ljava/lang/String;Ljava/util/EventListener;)Ljava/util/EventListener;
std::shared_ptr<L> java::beans::ChangeListenerMap::newProxy(std::shared_ptr<java::lang::String> var0,std::shared_ptr<L> var1)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 564        value = {
	// 565            "(",
	// 566            "Ljava/lang/String;",
	// 567            "T",
	// 568            "L;",
	// 569            ")T",
	// 570            "L;"
	// 571        }
	// 572    .end annotation

}
// .method public final declared-synchronized remove(Ljava/lang/String;Ljava/util/EventListener;)V
void java::beans::ChangeListenerMap::remove(std::shared_ptr<java::lang::String> name,std::shared_ptr<L> listener)
{
	
	std::shared_ptr<std::vector<java::util::EventListener>> array;
	int i;
	int size;
	std::shared_ptr<java::lang::Object> clone;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 579        value = {
	// 580            "(",
	// 581            "Ljava/lang/String;",
	// 582            "T",
	// 583            "L;",
	// 584            ")V"
	// 585        }
	// 586    .end annotation
	//    .local p0, "this":Ljava/beans/ChangeListenerMap;, "Ljava/beans/ChangeListenerMap<TL;>;"
	//    .local p2, "listener":Ljava/util/EventListener;, "TL;"
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( !(this->map) )  
		goto label_cond_35;
	array = this->map->get(name);
	array->checkCast("std::vector<java::util::EventListener>");
	//    .local v0, "array":[Ljava/util/EventListener;, "[TL;"
	if ( !(array) )  
		goto label_cond_35;
	i = 0x0;
	//    .local v2, "i":I
label_goto_10:
	if ( i >= array->size() )
		goto label_cond_35;
	if ( !(listener->equals(array[i])) )  
		goto label_cond_4b;
	size = ( array->size() + -0x1);
	//    .local v3, "size":I
	if ( size <= 0 )
		goto label_cond_37;
	clone = this->newArray(size);
	//    .local v1, "clone":[Ljava/util/EventListener;, "[TL;"
	java::lang::System::arraycopy(array, 0x0, clone, 0x0, i);
	java::lang::System::arraycopy(array, ( i + 0x1), clone, i, (size - i));
	this->map->put(name, clone);
	//label_try_end_35:
	}
	catch (...){
		goto label_catchall_48;
	}
	//    .catchall {:try_start_1 .. :try_end_35} :catchall_48
	//    .end local v0    # "array":[Ljava/util/EventListener;, "[TL;"
	//    .end local v1    # "clone":[Ljava/util/EventListener;, "[TL;"
	//    .end local v2    # "i":I
	//    .end local v3    # "size":I
label_cond_35:
label_goto_35:
	this->monitor_exit();
	return;
	// 677    .line 116
	// 678    .restart local v0    # "array":[Ljava/util/EventListener;, "[TL;"
	// 679    .restart local v2    # "i":I
	// 680    .restart local v3    # "size":I
label_cond_37:
	try {
	//label_try_start_37:
	this->map->remove(name);
	if ( !(this->map->isEmpty()) )  
		goto label_cond_35;
	this->map = 0x0;
	//label_try_end_47:
	}
	catch (...){
		goto label_catchall_48;
	}
	//    .catchall {:try_start_37 .. :try_end_47} :catchall_48
	goto label_goto_35;
	// 705    .end local v0    # "array":[Ljava/util/EventListener;, "[TL;"
	// 706    .end local v2    # "i":I
	// 707    .end local v3    # "size":I
label_catchall_48:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 715    .line 106
	// 716    .restart local v0    # "array":[Ljava/util/EventListener;, "[TL;"
	// 717    .restart local v2    # "i":I
label_cond_4b:
	i = ( i + 0x1);
	goto label_goto_10;

}
// .method public final set(Ljava/lang/String;[Ljava/util/EventListener;)V
void java::beans::ChangeListenerMap::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<L>> listeners)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 728        value = {
	// 729            "(",
	// 730            "Ljava/lang/String;",
	// 731            "[T",
	// 732            "L;",
	// 733            ")V"
	// 734        }
	// 735    .end annotation
	//    .local p0, "this":Ljava/beans/ChangeListenerMap;, "Ljava/beans/ChangeListenerMap<TL;>;"
	//    .local p2, "listeners":[Ljava/util/EventListener;, "[TL;"
	if ( !(listeners) )  
		goto label_cond_14;
	if ( this->map )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::util::HashMap>();
	this->map = cVar0;
label_cond_e:
	this->map->put(name, listeners);
label_cond_13:
label_goto_13:
	return;
	// 768    .line 153
label_cond_14:
	if ( !(this->map) )  
		goto label_cond_13;
	this->map->remove(name);
	if ( !(this->map->isEmpty()) )  
		goto label_cond_13;
	this->map = 0x0;
	goto label_goto_13;

}


