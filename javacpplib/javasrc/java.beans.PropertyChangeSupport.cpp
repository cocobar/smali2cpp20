// CPP L:\smali2cpp20\x64\Release\out\java\beans\PropertyChangeSupport.smali
#include "java2ctype.h"
#include "java.beans.IndexedPropertyChangeEvent.h"
#include "java.beans.PropertyChangeEvent.h"
#include "java.beans.PropertyChangeListener.h"
#include "java.beans.PropertyChangeListenerProxy.h"
#include "java.beans.PropertyChangeSupport_S_PropertyChangeListenerMap.h"
#include "java.beans.PropertyChangeSupport.h"
#include "java.io.ObjectInputStream_S_GetField.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream_S_PutField.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.ObjectStreamField.h"
#include "java.io.Serializable.h"
#include "java.lang.Boolean.h"
#include "java.lang.Class.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.EventListener.h"
#include "java.util.Hashtable.h"
#include "java.util.Iterator.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Set.h"

static java::beans::PropertyChangeSupport::serialPersistentFields;
static java::beans::PropertyChangeSupport::serialVersionUID = 0x58d5d264574860bbL;
// .method static constructor <clinit>()V
void java::beans::PropertyChangeSupport::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::io::ObjectStreamField>>> cVar0;
	std::shared_ptr<java::io::ObjectStreamField> cVar1;
	std::shared_ptr<java::io::ObjectStreamField> cVar2;
	std::shared_ptr<java::io::ObjectStreamField> cVar3;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::io::ObjectStreamField>>>(0x3);
	cVar1 = std::make_shared<java::io::ObjectStreamField>(std::make_shared<java::lang::String>(std::make_shared<char[]>("children")), java::util::Hashtable());
	cVar0[0x0] = cVar1;
	cVar2 = std::make_shared<java::io::ObjectStreamField>(std::make_shared<java::lang::String>(std::make_shared<char[]>("source")), java::lang::Object());
	cVar0[0x1] = cVar2;
	cVar3 = std::make_shared<java::io::ObjectStreamField>(std::make_shared<java::lang::String>(std::make_shared<char[]>("propertyChangeSupportSerializedDataVersion")), java::lang::Integer::TYPE);
	cVar0[0x2] = cVar3;
	java::beans::PropertyChangeSupport::serialPersistentFields = cVar0;
	return;

}
// .method public constructor <init>(Ljava/lang/Object;)V
java::beans::PropertyChangeSupport::PropertyChangeSupport(std::shared_ptr<java::lang::Object> sourceBean)
{
	
	std::shared_ptr<java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	
	//    .param p1, "sourceBean"    # Ljava/lang/Object;
	// 093    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap>(0x0);
	this->map = cVar0;
	if ( sourceBean )     
		goto label_cond_13;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 112    .line 93
label_cond_13:
	this->source = sourceBean;
	return;

}
// .method private static fire([Ljava/beans/PropertyChangeListener;Ljava/beans/PropertyChangeEvent;)V
void java::beans::PropertyChangeSupport::fire(std::shared_ptr<std::vector<java::beans::PropertyChangeListener>> listeners,std::shared_ptr<java::beans::PropertyChangeEvent> event)
{
	
	int cVar0;
	
	//    .param p0, "listeners"    # [Ljava/beans/PropertyChangeListener;
	//    .param p1, "event"    # Ljava/beans/PropertyChangeEvent;
	if ( !(listeners) )  
		goto label_cond_e;
	cVar0 = 0x0;
label_goto_4:
	if ( cVar0 >= listeners->size() )
		goto label_cond_e;
	//    .local v0, "listener":Ljava/beans/PropertyChangeListener;
	listeners[cVar0]->propertyChange(event);
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_4;
	// 148    .line 338
	// 149    .end local v0    # "listener":Ljava/beans/PropertyChangeListener;
label_cond_e:
	return;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void java::beans::PropertyChangeSupport::readObject(std::shared_ptr<java::io::ObjectInputStream> s)
{
	
	std::shared_ptr<java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap> cVar0;
	std::shared_ptr<java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap> cVar1;
	std::shared_ptr<java::io::ObjectInputStream_S_GetField> fields;
	std::shared_ptr<java::util::Hashtable> children;
	std::shared_ptr<java::beans::PropertyChangeListener> listenerOrNull;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<java::beans::PropertyChangeSupport> cVar2;
	std::shared_ptr<java::lang::Object> cVar3;
	int cVar4;
	std::shared_ptr<java::lang::String> cVar5;
	
	//    .param p1, "s"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 158        value = {
	// 159            Ljava/lang/ClassNotFoundException;,
	// 160            Ljava/io/IOException;
	// 161        }
	// 162    .end annotation
	cVar0 = 0x0;
	cVar1 = std::make_shared<java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap>(cVar0);
	this->map = cVar1;
	fields = s->readFields();
	//    .local v3, "fields":Ljava/io/ObjectInputStream$GetField;
	children = fields->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("children")), cVar0);
	children->checkCast("java::util::Hashtable");
	//    .local v0, "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	this->source = fields->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("source")), cVar0);
	fields->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("propertyChangeSupportSerializedDataVersion")), 0x2);
label_goto_25:
	listenerOrNull = s->readObject();
	//    .local v5, "listenerOrNull":Ljava/lang/Object;
	if ( !(listenerOrNull) )  
		goto label_cond_33;
	listenerOrNull->checkCast("java::beans::PropertyChangeListener");
	//    .end local v5    # "listenerOrNull":Ljava/lang/Object;
	this->map->add(cVar0, listenerOrNull);
	goto label_goto_25;
	// 225    .line 472
	// 226    .restart local v5    # "listenerOrNull":Ljava/lang/Object;
label_cond_33:
	if ( !(children) )  
		goto label_cond_69;
	entry_S_iterator = children->entrySet()->iterator();
	//    .local v2, "entry$iterator":Ljava/util/Iterator;
label_cond_3d:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_69;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v1, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	cVar2 = entry->getValue();
	cVar2->checkCast("java::beans::PropertyChangeSupport");
	cVar3 = cVar2->getPropertyChangeListeners();
	cVar4 = 0x0;
label_goto_56:
	if ( cVar4 >= cVar3->size() )
		goto label_cond_3d;
	//    .local v4, "listener":Ljava/beans/PropertyChangeListener;
	cVar5 = entry->getKey();
	cVar5->checkCast("java::lang::String");
	this->map->add(cVar5, cVar3[cVar4]);
	cVar4 = ( cVar4 + 0x1);
	goto label_goto_56;
	// 295    .line 479
	// 296    .end local v1    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	// 297    .end local v2    # "entry$iterator":Ljava/util/Iterator;
	// 298    .end local v4    # "listener":Ljava/beans/PropertyChangeListener;
label_cond_69:
	return;

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void java::beans::PropertyChangeSupport::writeObject(std::shared_ptr<java::io::ObjectOutputStream> s)
{
	
	int listeners;
	std::shared_ptr<java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap> cVar0;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::lang::Object> children;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<java::lang::String> property;
	std::shared_ptr<std::vector<java::beans::PropertyChangeListener>> cVar1;
	auto children;
	std::shared_ptr<java::util::Hashtable> children;
	std::shared_ptr<java::beans::PropertyChangeSupport> pcs;
	std::shared_ptr<std::vector<java::beans::PropertyChangeListener>> cVar2;
	std::shared_ptr<java::io::ObjectOutputStream_S_PutField> fields;
	int cVar4;
	std::shared_ptr<java::io::Serializable> l;
	
	//    .param p1, "s"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 307        value = {
	// 308            Ljava/io/IOException;
	// 309        }
	// 310    .end annotation
	//    .local v1, "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	listeners = 0x0;
	//    .local v7, "listeners":[Ljava/beans/PropertyChangeListener;
	cVar0 = this->map;
	cVar0->monitor_enter();
	try {
	//label_try_start_6:
	//label_try_end_f:
	}
	catch (...){
		goto label_catchall_4e;
	}
	//    .catchall {:try_start_6 .. :try_end_f} :catchall_4e
	entry_S_iterator = this->map->getEntries()->iterator();
	//    .local v4, "entry$iterator":Ljava/util/Iterator;
	children = 0x0;
	//    .end local v1    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	//    .end local v7    # "listeners":[Ljava/beans/PropertyChangeListener;
	//    .local v2, "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
label_goto_11:
	try {
	//label_try_start_11:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_51;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v3, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[Ljava/beans/PropertyChangeListener;>;"
	property = entry->getKey();
	property->checkCast("java::lang::String");
	//    .local v9, "property":Ljava/lang/String;
	if ( property )     
		goto label_cond_30;
	cVar1 = entry->getValue();
	cVar1->checkCast("std::vector<java::beans::PropertyChangeListener>");
	cVar1;
	//    .local v7, "listeners":[Ljava/beans/PropertyChangeListener;
	//    .end local v2    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	//    .end local v7    # "listeners":[Ljava/beans/PropertyChangeListener;
	//    .local v1, "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
label_goto_2e:
	children = children;
	//    .end local v1    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	//    .restart local v2    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	goto label_goto_11;
	// 398    .line 433
label_cond_30:
	if ( children )     
		goto label_cond_8b;
	children = std::make_shared<java::util::Hashtable>();
	//label_try_end_37:
	}
	catch (...){
		goto label_catchall_88;
	}
	//    .catchall {:try_start_11 .. :try_end_37} :catchall_88
	//    .end local v2    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	//    .restart local v1    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
label_goto_37:
	try {
	//label_try_start_37:
	pcs = std::make_shared<java::beans::PropertyChangeSupport>(this->source);
	//    .local v8, "pcs":Ljava/beans/PropertyChangeSupport;
	cVar2 = entry->getValue();
	cVar2->checkCast("std::vector<java::beans::PropertyChangeListener>");
	pcs->map->set(0x0, cVar2);
	children->put(property, pcs);
	//label_try_end_4d:
	}
	catch (...){
		goto label_catchall_4e;
	}
	//    .catchall {:try_start_37 .. :try_end_4d} :catchall_4e
	goto label_goto_2e;
	// 441    .line 427
	// 442    .end local v1    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	// 443    .end local v3    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[Ljava/beans/PropertyChangeListener;>;"
	// 444    .end local v4    # "entry$iterator":Ljava/util/Iterator;
	// 445    .end local v8    # "pcs":Ljava/beans/PropertyChangeSupport;
	// 446    .end local v9    # "property":Ljava/lang/String;
label_catchall_4e:
	// move-exception
	catchall = tryCatchExcetionList.back();
label_goto_4f:
	cVar0->monitor_exit();
	// throw
	throw;
	// 455    .restart local v2    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	// 456    .restart local v4    # "entry$iterator":Ljava/util/Iterator;
label_cond_51:
	cVar0->monitor_exit();
	fields = s->putFields();
	//    .local v5, "fields":Ljava/io/ObjectOutputStream$PutField;
	fields->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("children")), children);
	fields->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("source")), this->source);
	fields->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("propertyChangeSupportSerializedDataVersion")), 0x2);
	s->writeFields();
	if ( !(listeners) )  
		goto label_cond_82;
	cVar4 = 0x0;
label_goto_72:
	if ( cVar4 >= listeners->size() )
		goto label_cond_82;
	l = listeners[cVar4];
	//    .local v6, "l":Ljava/beans/PropertyChangeListener;
	if ( !(l->instanceOf("java::io::Serializable")) )  
		goto label_cond_7f;
	s->writeObject(l);
label_cond_7f:
	cVar4 = ( cVar4 + 0x1);
	goto label_goto_72;
	// 518    .line 455
	// 519    .end local v6    # "l":Ljava/beans/PropertyChangeListener;
label_cond_82:
	s->writeObject(0x0);
	return;
	// 528    .line 427
	// 529    .end local v5    # "fields":Ljava/io/ObjectOutputStream$PutField;
label_catchall_88:
	// move-exception
	catchall = tryCatchExcetionList.back();
	children;
	//    .end local v2    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	//    .restart local v1    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	goto label_goto_4f;
	// 539    .end local v1    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	// 540    .restart local v2    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	// 541    .restart local v3    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;[Ljava/beans/PropertyChangeListener;>;"
	// 542    .restart local v9    # "property":Ljava/lang/String;
label_cond_8b:
	children = children;
	//    .end local v2    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	//    .restart local v1    # "children":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;Ljava/beans/PropertyChangeSupport;>;"
	goto label_goto_37;

}
// .method public addPropertyChangeListener(Ljava/beans/PropertyChangeListener;)V
void java::beans::PropertyChangeSupport::addPropertyChangeListener(std::shared_ptr<java::beans::PropertyChangeListener> listener)
{
	
	std::shared_ptr<java::beans::PropertyChangeListenerProxy> proxy;
	std::shared_ptr<java::beans::PropertyChangeListener> cVar0;
	
	//    .param p1, "listener"    # Ljava/beans/PropertyChangeListener;
	if ( listener )     
		goto label_cond_4;
	return;
	// 566    .line 110
label_cond_4:
	if ( !(listener->instanceOf("java::beans::PropertyChangeListenerProxy")) )  
		goto label_cond_19;
	proxy = listener;
	proxy->checkCast("java::beans::PropertyChangeListenerProxy");
	//    .local v0, "proxy":Ljava/beans/PropertyChangeListenerProxy;
	cVar0 = proxy->getListener();
	cVar0->checkCast("java::beans::PropertyChangeListener");
	this->addPropertyChangeListener(proxy->getPropertyName(), cVar0);
	//    .end local v0    # "proxy":Ljava/beans/PropertyChangeListenerProxy;
label_goto_18:
	return;
	// 598    .line 117
label_cond_19:
	this->map->add(0x0, listener);
	goto label_goto_18;

}
// .method public addPropertyChangeListener(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V
void java::beans::PropertyChangeSupport::addPropertyChangeListener(std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<java::beans::PropertyChangeListener> listener)
{
	
	std::shared_ptr<java::util::EventListener> cVar0;
	
	//    .param p1, "propertyName"    # Ljava/lang/String;
	//    .param p2, "listener"    # Ljava/beans/PropertyChangeListener;
	if ( !(listener) )  
		goto label_cond_4;
	if ( propertyName )     
		goto label_cond_5;
label_cond_4:
	return;
	// 622    .line 201
label_cond_5:
	cVar0 = this->map->extract(listener);
	if ( !(cVar0) )  
		goto label_cond_12;
	this->map->add(propertyName, cVar0);
label_cond_12:
	return;

}
// .method public fireIndexedPropertyChange(Ljava/lang/String;III)V
void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(std::shared_ptr<java::lang::String> propertyName,int index,int oldValue,int newValue)
{
	
	//    .param p1, "propertyName"    # Ljava/lang/String;
	//    .param p2, "index"    # I
	//    .param p3, "oldValue"    # I
	//    .param p4, "newValue"    # I
	if ( oldValue == newValue )
		goto label_cond_d;
	this->fireIndexedPropertyChange(propertyName, index, java::lang::Integer::valueOf(oldValue), java::lang::Integer::valueOf(newValue));
label_cond_d:
	return;

}
// .method public fireIndexedPropertyChange(Ljava/lang/String;ILjava/lang/Object;Ljava/lang/Object;)V
void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(std::shared_ptr<java::lang::String> propertyName,int index,std::shared_ptr<java::lang::Object> oldValue,std::shared_ptr<java::lang::Object> newValue)
{
	
	std::shared_ptr<java::beans::IndexedPropertyChangeEvent> cVar0;
	
	//    .param p1, "propertyName"    # Ljava/lang/String;
	//    .param p2, "index"    # I
	//    .param p3, "oldValue"    # Ljava/lang/Object;
	//    .param p4, "newValue"    # Ljava/lang/Object;
	if ( !(oldValue) )  
		goto label_cond_4;
	if ( newValue )     
		goto label_cond_13;
label_cond_4:
label_goto_4:
	cVar0 = std::make_shared<java::beans::IndexedPropertyChangeEvent>(this->source, propertyName, oldValue, newValue, index);
	this->firePropertyChange(cVar0);
label_cond_12:
	return;
	// 706    .line 357
label_cond_13:
	if ( !(( oldValue->equals(newValue) ^ 0x1)) )  
		goto label_cond_12;
	goto label_goto_4;

}
// .method public fireIndexedPropertyChange(Ljava/lang/String;IZZ)V
void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(std::shared_ptr<java::lang::String> propertyName,int index,bool oldValue,bool newValue)
{
	
	//    .param p1, "propertyName"    # Ljava/lang/String;
	//    .param p2, "index"    # I
	//    .param p3, "oldValue"    # Z
	//    .param p4, "newValue"    # Z
	if ( oldValue == newValue )
		goto label_cond_d;
	this->fireIndexedPropertyChange(propertyName, index, java::lang::Boolean::valueOf(oldValue), java::lang::Boolean::valueOf(newValue));
label_cond_d:
	return;

}
// .method public firePropertyChange(Ljava/beans/PropertyChangeEvent;)V
void java::beans::PropertyChangeSupport::firePropertyChange(std::shared_ptr<java::beans::PropertyChangeEvent> event)
{
	
	std::shared_ptr<java::lang::Object> oldValue;
	std::shared_ptr<java::lang::Object> newValue;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<std::vector<java::beans::PropertyChangeListener>> common;
	std::shared_ptr<std::vector<java::beans::PropertyChangeListener>> cVar0;
	
	//    .param p1, "event"    # Ljava/beans/PropertyChangeEvent;
	oldValue = event->getOldValue();
	//    .local v4, "oldValue":Ljava/lang/Object;
	newValue = event->getNewValue();
	//    .local v3, "newValue":Ljava/lang/Object;
	if ( !(oldValue) )  
		goto label_cond_d;
	if ( newValue )     
		goto label_cond_2a;
label_cond_d:
label_goto_d:
	name = event->getPropertyName();
	//    .local v1, "name":Ljava/lang/String;
	common = this->map->get(0x0);
	common->checkCast("std::vector<java::beans::PropertyChangeListener>");
	//    .local v0, "common":[Ljava/beans/PropertyChangeListener;
	if ( !(name) )  
		goto label_cond_33;
	cVar0 = this->map->get(name);
	cVar0->checkCast("std::vector<java::beans::PropertyChangeListener>");
label_goto_23:
	java::beans::PropertyChangeSupport::fire(common, event);
	java::beans::PropertyChangeSupport::fire(cVar0, event);
	//    .end local v0    # "common":[Ljava/beans/PropertyChangeListener;
	//    .end local v1    # "name":Ljava/lang/String;
label_cond_29:
	return;
	// 813    .line 319
label_cond_2a:
	if ( !(( oldValue->equals(newValue) ^ 0x1)) )  
		goto label_cond_29;
	goto label_goto_d;
	// 825    .line 325
	// 826    .restart local v0    # "common":[Ljava/beans/PropertyChangeListener;
	// 827    .restart local v1    # "name":Ljava/lang/String;
label_cond_33:
	cVar0 = 0x0;
	//    .local v2, "named":[Ljava/beans/PropertyChangeListener;
	goto label_goto_23;

}
// .method public firePropertyChange(Ljava/lang/String;II)V
void java::beans::PropertyChangeSupport::firePropertyChange(std::shared_ptr<java::lang::String> propertyName,int oldValue,int newValue)
{
	
	//    .param p1, "propertyName"    # Ljava/lang/String;
	//    .param p2, "oldValue"    # I
	//    .param p3, "newValue"    # I
	if ( oldValue == newValue )
		goto label_cond_d;
	this->firePropertyChange(propertyName, java::lang::Integer::valueOf(oldValue), java::lang::Integer::valueOf(newValue));
label_cond_d:
	return;

}
// .method public firePropertyChange(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V
void java::beans::PropertyChangeSupport::firePropertyChange(std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<java::lang::Object> oldValue,std::shared_ptr<java::lang::Object> newValue)
{
	
	std::shared_ptr<java::beans::PropertyChangeEvent> cVar0;
	
	//    .param p1, "propertyName"    # Ljava/lang/String;
	//    .param p2, "oldValue"    # Ljava/lang/Object;
	//    .param p3, "newValue"    # Ljava/lang/Object;
	if ( !(oldValue) )  
		goto label_cond_4;
	if ( newValue )     
		goto label_cond_f;
label_cond_4:
label_goto_4:
	cVar0 = std::make_shared<java::beans::PropertyChangeEvent>(this->source, propertyName, oldValue, newValue);
	this->firePropertyChange(cVar0);
label_cond_e:
	return;
	// 888    .line 262
label_cond_f:
	if ( !(( oldValue->equals(newValue) ^ 0x1)) )  
		goto label_cond_e;
	goto label_goto_4;

}
// .method public firePropertyChange(Ljava/lang/String;ZZ)V
void java::beans::PropertyChangeSupport::firePropertyChange(std::shared_ptr<java::lang::String> propertyName,bool oldValue,bool newValue)
{
	
	//    .param p1, "propertyName"    # Ljava/lang/String;
	//    .param p2, "oldValue"    # Z
	//    .param p3, "newValue"    # Z
	if ( oldValue == newValue )
		goto label_cond_d;
	this->firePropertyChange(propertyName, java::lang::Boolean::valueOf(oldValue), java::lang::Boolean::valueOf(newValue));
label_cond_d:
	return;

}
// .method public getPropertyChangeListeners()[Ljava/beans/PropertyChangeListener;
std::shared_ptr<java::beans::PropertyChangeListener> java::beans::PropertyChangeSupport::getPropertyChangeListeners()
{
	
	std::shared_ptr<std::vector<java::beans::PropertyChangeListener>> cVar0;
	
	cVar0 = this->map->getListeners();
	cVar0->checkCast("std::vector<java::beans::PropertyChangeListener>");
	return cVar0;

}
// .method public getPropertyChangeListeners(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;
std::shared_ptr<java::beans::PropertyChangeListener> java::beans::PropertyChangeSupport::getPropertyChangeListeners(std::shared_ptr<java::lang::String> propertyName)
{
	
	std::shared_ptr<std::vector<java::beans::PropertyChangeListener>> cVar0;
	
	//    .param p1, "propertyName"    # Ljava/lang/String;
	cVar0 = this->map->getListeners(propertyName);
	cVar0->checkCast("std::vector<java::beans::PropertyChangeListener>");
	return cVar0;

}
// .method public hasListeners(Ljava/lang/String;)Z
bool java::beans::PropertyChangeSupport::hasListeners(std::shared_ptr<java::lang::String> propertyName)
{
	
	//    .param p1, "propertyName"    # Ljava/lang/String;
	return this->map->hasListeners(propertyName);

}
// .method public removePropertyChangeListener(Ljava/beans/PropertyChangeListener;)V
void java::beans::PropertyChangeSupport::removePropertyChangeListener(std::shared_ptr<java::beans::PropertyChangeListener> listener)
{
	
	std::shared_ptr<java::beans::PropertyChangeListenerProxy> proxy;
	std::shared_ptr<java::beans::PropertyChangeListener> cVar0;
	
	//    .param p1, "listener"    # Ljava/beans/PropertyChangeListener;
	if ( listener )     
		goto label_cond_4;
	return;
	// 988    .line 136
label_cond_4:
	if ( !(listener->instanceOf("java::beans::PropertyChangeListenerProxy")) )  
		goto label_cond_19;
	proxy = listener;
	proxy->checkCast("java::beans::PropertyChangeListenerProxy");
	//    .local v0, "proxy":Ljava/beans/PropertyChangeListenerProxy;
	cVar0 = proxy->getListener();
	cVar0->checkCast("java::beans::PropertyChangeListener");
	this->removePropertyChangeListener(proxy->getPropertyName(), cVar0);
	//    .end local v0    # "proxy":Ljava/beans/PropertyChangeListenerProxy;
label_goto_18:
	return;
	// 1020    .line 143
label_cond_19:
	this->map->remove(0x0, listener);
	goto label_goto_18;

}
// .method public removePropertyChangeListener(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V
void java::beans::PropertyChangeSupport::removePropertyChangeListener(std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<java::beans::PropertyChangeListener> listener)
{
	
	std::shared_ptr<java::util::EventListener> cVar0;
	
	//    .param p1, "propertyName"    # Ljava/lang/String;
	//    .param p2, "listener"    # Ljava/beans/PropertyChangeListener;
	if ( !(listener) )  
		goto label_cond_4;
	if ( propertyName )     
		goto label_cond_5;
label_cond_4:
	return;
	// 1044    .line 226
label_cond_5:
	cVar0 = this->map->extract(listener);
	if ( !(cVar0) )  
		goto label_cond_12;
	this->map->remove(propertyName, cVar0);
label_cond_12:
	return;

}


