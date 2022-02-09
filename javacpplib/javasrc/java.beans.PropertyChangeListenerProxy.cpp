// CPP L:\smali2cpp20\x64\Release\out\java\beans\PropertyChangeListenerProxy.smali
#include "java2ctype.h"
#include "java.beans.PropertyChangeEvent.h"
#include "java.beans.PropertyChangeListener.h"
#include "java.beans.PropertyChangeListenerProxy.h"
#include "java.lang.String.h"
#include "java.util.EventListener.h"
#include "java.util.EventListenerProxy.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V
java::beans::PropertyChangeListenerProxy::PropertyChangeListenerProxy(std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<java::beans::PropertyChangeListener> listener)
{
	
	//    .param p1, "propertyName"    # Ljava/lang/String;
	//    .param p2, "listener"    # Ljava/beans/PropertyChangeListener;
	java::util::EventListenerProxy::(listener);
	this->propertyName = propertyName;
	return;

}
// .method public getPropertyName()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::beans::PropertyChangeListenerProxy::getPropertyName()
{
	
	return this->propertyName;

}
// .method public propertyChange(Ljava/beans/PropertyChangeEvent;)V
void java::beans::PropertyChangeListenerProxy::propertyChange(std::shared_ptr<java::beans::PropertyChangeEvent> event)
{
	
	std::shared_ptr<java::beans::PropertyChangeListener> cVar0;
	
	//    .param p1, "event"    # Ljava/beans/PropertyChangeEvent;
	cVar0 = this->getListener();
	cVar0->checkCast("java::beans::PropertyChangeListener");
	cVar0->propertyChange(event);
	return;

}


