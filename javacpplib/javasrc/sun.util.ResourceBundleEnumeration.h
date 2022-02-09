#ifndef __sun_util_ResourceBundleEnumeration__
#define __sun_util_ResourceBundleEnumeration__
// H L:\smali2cpp20\x64\Release\out\sun\util\ResourceBundleEnumeration.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.Set.h"

namespace sun::util{
class ResourceBundleEnumeration : public java::util::Enumeration<java::lang::String> {
protected:
private:
public:
	std::shared_ptr<java::util::Enumeration<java::lang::String>> enumeration;
	std::shared_ptr<java::util::Iterator<java::lang::String>> iterator;
	std::shared_ptr<java::lang::String> next;
	std::shared_ptr<java::util::Set<java::lang::String>> set;
	ResourceBundleEnumeration(std::shared_ptr<java::util::Set<java::lang::String>> set,std::shared_ptr<java::util::Enumeration<java::lang::String>> enumeration);
	bool virtual hasMoreElements();
	std::shared_ptr<java::lang::String> virtual nextElement();
public:
	virtual ~ResourceBundleEnumeration(){
	}

}; // class ResourceBundleEnumeration
}; // namespace sun::util

#endif //__sun_util_ResourceBundleEnumeration__

