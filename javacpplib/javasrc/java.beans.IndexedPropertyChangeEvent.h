#ifndef __java_beans_IndexedPropertyChangeEvent__
#define __java_beans_IndexedPropertyChangeEvent__
// H L:\smali2cpp20\x64\Release\out\java\beans\IndexedPropertyChangeEvent.smali
#include "java2ctype.h"
#include "java.beans.PropertyChangeEvent.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace java::beans{
class IndexedPropertyChangeEvent : public java::beans::PropertyChangeEvent {
protected:
private:
	static long long serialVersionUID;
	int index;
public:
	IndexedPropertyChangeEvent(std::shared_ptr<java::lang::Object> source,std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<java::lang::Object> oldValue,std::shared_ptr<java::lang::Object> newValue,int index);
	void virtual appendTo(std::shared_ptr<java::lang::StringBuilder> sb);
	int virtual getIndex();
public:
	virtual ~IndexedPropertyChangeEvent(){
	}

}; // class IndexedPropertyChangeEvent
}; // namespace java::beans

#endif //__java_beans_IndexedPropertyChangeEvent__

