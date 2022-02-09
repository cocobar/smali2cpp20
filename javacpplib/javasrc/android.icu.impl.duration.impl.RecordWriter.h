#ifndef __android_icu_impl_duration_impl_RecordWriter__
#define __android_icu_impl_duration_impl_RecordWriter__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\RecordWriter.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration::impl{
class RecordWriter : public java::lang::Object {
protected:
private:
public:
	void bool(std::shared_ptr<java::lang::String> var0,bool var1) = 0;
	void boolArray(std::shared_ptr<java::lang::String> var0,std::shared_ptr<bool[]> var1) = 0;
	void character(std::shared_ptr<java::lang::String> var0,char var1) = 0;
	void characterArray(std::shared_ptr<java::lang::String> var0,std::shared_ptr<char[]> var1) = 0;
	bool close() = 0;
	void namedIndex(std::shared_ptr<java::lang::String> var0,std::shared_ptr<std::vector<java::lang::String>> var1,int var2) = 0;
	void namedIndexArray(std::shared_ptr<java::lang::String> var0,std::shared_ptr<std::vector<java::lang::String>> var1,std::shared_ptr<unsigned char[]> var2) = 0;
	bool open(std::shared_ptr<java::lang::String> var0) = 0;
	void string(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1) = 0;
	void stringArray(std::shared_ptr<java::lang::String> var0,std::shared_ptr<std::vector<java::lang::String>> var1) = 0;
	void stringTable(std::shared_ptr<java::lang::String> var0,std::shared_ptr<std::vector<std::vector<java::lang::String>>> var1) = 0;
	RecordWriter(){ };
	virtual ~RecordWriter(){ };

}; // class RecordWriter
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_RecordWriter__

