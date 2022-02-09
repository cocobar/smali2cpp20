#ifndef __java_beans_PropertyChangeSupport__
#define __java_beans_PropertyChangeSupport__
// H L:\smali2cpp20\x64\Release\out\java\beans\PropertyChangeSupport.smali
#include "java2ctype.h"
#include "java.beans.PropertyChangeEvent.h"
#include "java.beans.PropertyChangeListener.h"
#include "java.beans.PropertyChangeSupport_S_PropertyChangeListenerMap.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.ObjectStreamField.h"
#include "java.io.Serializable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::beans{
class PropertyChangeSupport : public java::io::Serializable {
protected:
private:
	static std::shared_ptr<std::vector<java::io::ObjectStreamField>> serialPersistentFields;
	std::shared_ptr<java::beans::PropertyChangeSupport_S_PropertyChangeListenerMap> map;
	std::shared_ptr<java::lang::Object> source;
	static void fire(std::shared_ptr<std::vector<java::beans::PropertyChangeListener>> listeners,std::shared_ptr<java::beans::PropertyChangeEvent> event);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> s);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> s);
public:
	static long long serialVersionUID;
	static void static_cinit();
	PropertyChangeSupport(std::shared_ptr<java::lang::Object> sourceBean);
	void virtual addPropertyChangeListener(std::shared_ptr<java::beans::PropertyChangeListener> listener);
	void virtual addPropertyChangeListener(std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<java::beans::PropertyChangeListener> listener);
	void virtual fireIndexedPropertyChange(std::shared_ptr<java::lang::String> propertyName,int index,int oldValue,int newValue);
	void virtual fireIndexedPropertyChange(std::shared_ptr<java::lang::String> propertyName,int index,std::shared_ptr<java::lang::Object> oldValue,std::shared_ptr<java::lang::Object> newValue);
	void virtual fireIndexedPropertyChange(std::shared_ptr<java::lang::String> propertyName,int index,bool oldValue,bool newValue);
	void virtual firePropertyChange(std::shared_ptr<java::beans::PropertyChangeEvent> event);
	void virtual firePropertyChange(std::shared_ptr<java::lang::String> propertyName,int oldValue,int newValue);
	void virtual firePropertyChange(std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<java::lang::Object> oldValue,std::shared_ptr<java::lang::Object> newValue);
	void virtual firePropertyChange(std::shared_ptr<java::lang::String> propertyName,bool oldValue,bool newValue);
	std::shared_ptr<java::beans::PropertyChangeListener> virtual getPropertyChangeListeners();
	std::shared_ptr<java::beans::PropertyChangeListener> virtual getPropertyChangeListeners(std::shared_ptr<java::lang::String> propertyName);
	bool virtual hasListeners(std::shared_ptr<java::lang::String> propertyName);
	void virtual removePropertyChangeListener(std::shared_ptr<java::beans::PropertyChangeListener> listener);
	void virtual removePropertyChangeListener(std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<java::beans::PropertyChangeListener> listener);
private:
	class static_init_class {
	public:
		static_init_class(){
			java::beans::PropertyChangeSupport::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PropertyChangeSupport(){
	}

}; // class PropertyChangeSupport
}; // namespace java::beans

#endif //__java_beans_PropertyChangeSupport__

