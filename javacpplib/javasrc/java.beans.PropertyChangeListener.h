#ifndef __java_beans_PropertyChangeListener__
#define __java_beans_PropertyChangeListener__
// H L:\smali2cpp20\x64\Release\out\java\beans\PropertyChangeListener.smali
#include "java2ctype.h"
#include "java.beans.PropertyChangeEvent.h"
#include "java.util.EventListener.h"

namespace java::beans{
class PropertyChangeListener : public java::util::EventListener {
protected:
private:
public:
	void propertyChange(std::shared_ptr<java::beans::PropertyChangeEvent> var0) = 0;
	PropertyChangeListener(){ };
	virtual ~PropertyChangeListener(){ };

}; // class PropertyChangeListener
}; // namespace java::beans

#endif //__java_beans_PropertyChangeListener__

