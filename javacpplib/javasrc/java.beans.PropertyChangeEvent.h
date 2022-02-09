#ifndef __java_beans_PropertyChangeEvent__
#define __java_beans_PropertyChangeEvent__
// H L:\smali2cpp20\x64\Release\out\java\beans\PropertyChangeEvent.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.EventObject.h"

namespace java::beans{
class PropertyChangeEvent : public java::util::EventObject {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<java::lang::Object> newValue;
	std::shared_ptr<java::lang::Object> oldValue;
	std::shared_ptr<java::lang::Object> propagationId;
	std::shared_ptr<java::lang::String> propertyName;
public:
	PropertyChangeEvent(std::shared_ptr<java::lang::Object> source,std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<java::lang::Object> oldValue,std::shared_ptr<java::lang::Object> newValue);
	void virtual appendTo(std::shared_ptr<java::lang::StringBuilder> sb);
	std::shared_ptr<java::lang::Object> virtual getNewValue();
	std::shared_ptr<java::lang::Object> virtual getOldValue();
	std::shared_ptr<java::lang::Object> virtual getPropagationId();
	std::shared_ptr<java::lang::String> virtual getPropertyName();
	void virtual setPropagationId(std::shared_ptr<java::lang::Object> propagationId);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PropertyChangeEvent(){
	}

}; // class PropertyChangeEvent
}; // namespace java::beans

#endif //__java_beans_PropertyChangeEvent__

