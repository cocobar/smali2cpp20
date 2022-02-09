#ifndef __android_icu_impl_duration_impl_RecordReader__
#define __android_icu_impl_duration_impl_RecordReader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\RecordReader.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration::impl{
class RecordReader : public java::lang::Object {
protected:
private:
public:
	bool bool(std::shared_ptr<java::lang::String> var0) = 0;
	bool boolArray(std::shared_ptr<java::lang::String> var0) = 0;
	char character(std::shared_ptr<java::lang::String> var0) = 0;
	char characterArray(std::shared_ptr<java::lang::String> var0) = 0;
	bool close() = 0;
	unsigned char namedIndex(std::shared_ptr<java::lang::String> var0,std::shared_ptr<std::vector<java::lang::String>> var1) = 0;
	unsigned char namedIndexArray(std::shared_ptr<java::lang::String> var0,std::shared_ptr<std::vector<java::lang::String>> var1) = 0;
	bool open(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::lang::String> string(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::lang::String> stringArray(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::lang::String> stringTable(std::shared_ptr<java::lang::String> var0) = 0;
	RecordReader(){ };
	virtual ~RecordReader(){ };

}; // class RecordReader
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_RecordReader__

