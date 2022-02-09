#ifndef __android_icu_impl_data_ResourceReader__
#define __android_icu_impl_data_ResourceReader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\data\ResourceReader.smali
#include "java2ctype.h"
#include "java.io.Closeable.hh"

namespace android::icu::impl::data{
class ResourceReader : public java::io::Closeable {
public:
	ResourceReader();
	virtual ~ResourceReader();

}; // class ResourceReader
}; // namespace android::icu::impl::data

#endif //__android_icu_impl_data_ResourceReader__

