#ifndef __java_beans_PropertyChangeListenerProxy__
#define __java_beans_PropertyChangeListenerProxy__
// H L:\smali2cpp20\x64\Release\out\java\beans\PropertyChangeListenerProxy.smali
#include "java2ctype.h"
#include "java.beans.PropertyChangeListener.hh"
#include "java.util.EventListenerProxy.hh"

namespace java::beans{
class PropertyChangeListenerProxy : public java::util::EventListenerProxy<java::beans::PropertyChangeListener>, public java::beans::PropertyChangeListener {
public:
	PropertyChangeListenerProxy();
	virtual ~PropertyChangeListenerProxy();

}; // class PropertyChangeListenerProxy
}; // namespace java::beans

#endif //__java_beans_PropertyChangeListenerProxy__

