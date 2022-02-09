// CPP L:\smali2cpp20\x64\Release\out\java\beans\PropertyChangeSupport$PropertyChangeListenerMap.smali
#include "java2ctype.h"
#include "java.beans.PropertyChangeListener.h"
#include "java.beans.PropertyChangeListenerProxy.h"
#include "java.beans.PropertyChangeSupport_S_PropertyChangeListenerMap.h"
#include "java.lang.String.h"
#include "java.util.EventListener.h"

static java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap::EMPTY;
// .method static constructor <clinit>()V
void java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap::static_cinit()
{
	
	java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap::EMPTY = std::make_shared<std::vector<std::vector<java::beans::PropertyChangeListener>>>(0x0);
	return;

}
// .method private constructor <init>()V
java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap::PropertyChangeSupport_S_PropertyChangeListenerMap()
{
	
	// 051    invoke-direct {p0}, Ljava/beans/ChangeListenerMap;-><init>()V
	return;

}
// .method synthetic constructor <init>(Ljava/beans/PropertyChangeSupport$PropertyChangeListenerMap;)V
java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap::PropertyChangeSupport_S_PropertyChangeListenerMap(std::shared_ptr<java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap> _this0)
{
	
	//    .param p1, "-this0"    # Ljava/beans/PropertyChangeSupport$PropertyChangeListenerMap;
	// 061    invoke-direct {p0}, Ljava/beans/PropertyChangeSupport$PropertyChangeListenerMap;-><init>()V
	return;

}
// .method public final extract(Ljava/beans/PropertyChangeListener;)Ljava/beans/PropertyChangeListener;
std::shared_ptr<java::beans::PropertyChangeListener> java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap::extract(std::shared_ptr<java::beans::PropertyChangeListener> listener)
{
	
	std::shared_ptr<java::beans::PropertyChangeListenerProxy> listener;
	
	//    .param p1, "listener"    # Ljava/beans/PropertyChangeListener;
label_goto_0:
	if ( !(listener->instanceOf("java::beans::PropertyChangeListenerProxy")) )  
		goto label_cond_d;
	listener->checkCast("java::beans::PropertyChangeListenerProxy");
	//    .end local p1    # "listener":Ljava/beans/PropertyChangeListener;
	listener = listener->getListener();
	listener->checkCast("java::beans::PropertyChangeListener");
	//    .restart local p1    # "listener":Ljava/beans/PropertyChangeListener;
	goto label_goto_0;
	// 092    .line 544
label_cond_d:
	return listener;

}
// .method protected newArray(I)[Ljava/beans/PropertyChangeListener;
std::shared_ptr<java::beans::PropertyChangeListener> java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap::newArray(int length)
{
	
	std::shared<std::vector<std::vector<java::beans::PropertyChangeListener>>> cVar0;
	std::shared_ptr<std::vector<java::beans::PropertyChangeListener>> cVar0;
	
	//    .param p1, "length"    # I
	if ( length <= 0 )
		goto label_cond_5;
	cVar0 = std::make_shared<std::vector<std::vector<java::beans::PropertyChangeListener>>>(length);
label_goto_4:
	return cVar0;
	// 126    .line 521
label_cond_5:
	cVar0 = java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap::EMPTY;
	goto label_goto_4;

}
// .method protected newProxy(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)Ljava/beans/PropertyChangeListener;
std::shared_ptr<java::beans::PropertyChangeListener> java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap::newProxy(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::beans::PropertyChangeListener> listener)
{
	
	std::shared_ptr<java::beans::PropertyChangeListenerProxy> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "listener"    # Ljava/beans/PropertyChangeListener;
	cVar0 = std::make_shared<java::beans::PropertyChangeListenerProxy>(name, listener);
	return cVar0;

}


