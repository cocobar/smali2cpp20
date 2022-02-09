#ifndef __java_beans_PropertyChangeListenerProxy__
#define __java_beans_PropertyChangeListenerProxy__
// H L:\smali2cpp20\x64\Release\out\java\beans\PropertyChangeListenerProxy.smali
#include "java2ctype.h"
#include "java.beans.PropertyChangeEvent.h"
#include "java.beans.PropertyChangeListener.h"
#include "java.lang.String.h"
#include "java.util.EventListenerProxy.h"

namespace java::beans{
class PropertyChangeListenerProxy : public java::util::EventListenerProxy<java::beans::PropertyChangeListener>, public java::beans::PropertyChangeListener {
protected:
private:
	std::shared_ptr<java::lang::String> propertyName;
public:
	PropertyChangeListenerProxy(std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<java::beans::PropertyChangeListener> listener);
	std::shared_ptr<java::lang::String> virtual getPropertyName();
	void virtual propertyChange(std::shared_ptr<java::beans::PropertyChangeEvent> event);
public:
	virtual ~PropertyChangeListenerProxy(){
	}

}; // class PropertyChangeListenerProxy
}; // namespace java::beans

#endif //__java_beans_PropertyChangeListenerProxy__

