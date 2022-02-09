#ifndef __sun_util_ResourceBundleEnumeration__
#define __sun_util_ResourceBundleEnumeration__
// H L:\smali2cpp20\x64\Release\out\sun\util\ResourceBundleEnumeration.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"

namespace sun::util{
class ResourceBundleEnumeration : public java::util::Enumeration<java::lang::String> {
public:
	ResourceBundleEnumeration();
	virtual ~ResourceBundleEnumeration();

}; // class ResourceBundleEnumeration
}; // namespace sun::util

#endif //__sun_util_ResourceBundleEnumeration__

