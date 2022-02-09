#ifndef __java_beans_PropertyChangeSupport_S_PropertyChangeListenerMap__
#define __java_beans_PropertyChangeSupport_S_PropertyChangeListenerMap__
// H L:\smali2cpp20\x64\Release\out\java\beans\PropertyChangeSupport$PropertyChangeListenerMap.smali
#include "java2ctype.h"
#include "java.beans.ChangeListenerMap.h"
#include "java.beans.PropertyChangeListener.h"
#include "java.lang.String.h"

namespace java::beans{
class PropertyChangeSupport_S_PropertyChangeListenerMap : public java::beans::ChangeListenerMap<java::beans::PropertyChangeListener> {
protected:
	std::shared_ptr<java::beans::PropertyChangeListener> virtual newArray(int length);
	std::shared_ptr<java::beans::PropertyChangeListener> virtual newProxy(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::beans::PropertyChangeListener> listener);
private:
	static std::shared_ptr<std::vector<java::beans::PropertyChangeListener>> EMPTY;
	PropertyChangeSupport_S_PropertyChangeListenerMap();
public:
	static void static_cinit();
	PropertyChangeSupport_S_PropertyChangeListenerMap(std::shared_ptr<java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap> _this0);
	std::shared_ptr<java::beans::PropertyChangeListener> virtual extract(std::shared_ptr<java::beans::PropertyChangeListener> listener);
private:
	class static_init_class {
	public:
		static_init_class(){
			java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PropertyChangeSupport_S_PropertyChangeListenerMap(){
	}

}; // class PropertyChangeSupport_S_PropertyChangeListenerMap
}; // namespace java::beans

#endif //__java_beans_PropertyChangeSupport_S_PropertyChangeListenerMap__

