#ifndef __sun_util_resources_OpenListResourceBundle__
#define __sun_util_resources_OpenListResourceBundle__
// H L:\smali2cpp20\x64\Release\out\sun\util\resources\OpenListResourceBundle.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "java.util.Map.h"
#include "java.util.ResourceBundle.h"
#include "java.util.Set.h"

namespace sun::util::resources{
class OpenListResourceBundle : public java::util::ResourceBundle {
protected:
	OpenListResourceBundle();
	std::shared_ptr<java::util::Map<K,V>> virtual createMap(int size);
	std::shared_ptr<java::util::Set<E>> virtual createSet();
	std::shared_ptr<java::lang::Object> getContents() = 0;
	std::shared_ptr<java::lang::Object> virtual handleGetObject(std::shared_ptr<java::lang::String> key);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual handleKeySet();
private:
	std::shared_ptr<java::util::Set<java::lang::String>> keyset;
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> lookup;
	void virtual loadLookup();
public:
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getKeys();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual keySet();
	void virtual loadLookupTablesIfNecessary();
public:
	virtual ~OpenListResourceBundle(){
	}

}; // class OpenListResourceBundle
}; // namespace sun::util::resources

#endif //__sun_util_resources_OpenListResourceBundle__

