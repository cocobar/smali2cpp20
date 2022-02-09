#ifndef __java_beans_ChangeListenerMap__
#define __java_beans_ChangeListenerMap__
// H L:\smali2cpp20\x64\Release\out\java\beans\ChangeListenerMap.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace java::beans{
class ChangeListenerMap : public java::lang::Object {
protected:
	std::shared_ptr<L> newArray(int var0);
	std::shared_ptr<L> newProxy(std::shared_ptr<java::lang::String> var0,std::shared_ptr<L> var1);
private:
	std::shared_ptr<java::util::Map<java::lang::String,std::vector<L>>> map;
public:
	ChangeListenerMap();
	void virtual add(std::shared_ptr<java::lang::String> name,std::shared_ptr<L> listener);
	std::shared_ptr<L> extract(std::shared_ptr<L> var0);
	std::shared_ptr<L> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Set<java::util::Map_S_Entry<java::lang::String,std::vector<L>>>> virtual getEntries();
	std::shared_ptr<L> virtual getListeners();
	std::shared_ptr<L> virtual getListeners(std::shared_ptr<java::lang::String> name);
	bool virtual hasListeners(std::shared_ptr<java::lang::String> name);
	void virtual remove(std::shared_ptr<java::lang::String> name,std::shared_ptr<L> listener);
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<L>> listeners);
public:
	virtual ~ChangeListenerMap(){
	}

}; // class ChangeListenerMap
}; // namespace java::beans

#endif //__java_beans_ChangeListenerMap__

