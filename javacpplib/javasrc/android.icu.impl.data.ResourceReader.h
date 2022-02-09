#ifndef __android_icu_impl_data_ResourceReader__
#define __android_icu_impl_data_ResourceReader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\data\ResourceReader.smali
#include "java2ctype.h"
#include "java.io.BufferedReader.h"
#include "java.io.Closeable.h"
#include "java.io.InputStream.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::data{
class ResourceReader : public java::io::Closeable {
protected:
private:
	std::shared_ptr<java::lang::String> encoding;
	int lineNo;
	std::shared_ptr<java::io::BufferedReader> reader;
	std::shared_ptr<java::lang::String> resourceName;
	std::shared_ptr<java::lang::Class<java::lang::Object>> root;
	void virtual _reset();
public:
	ResourceReader(std::shared_ptr<java::io::InputStream> is,std::shared_ptr<java::lang::String> resourceName);
	ResourceReader(std::shared_ptr<java::io::InputStream> is,std::shared_ptr<java::lang::String> resourceName,std::shared_ptr<java::lang::String> encoding);
	ResourceReader(std::shared_ptr<java::lang::Class<java::lang::Object>> rootClass,std::shared_ptr<java::lang::String> resourceName);
	ResourceReader(std::shared_ptr<java::lang::Class<java::lang::Object>> rootClass,std::shared_ptr<java::lang::String> resourceName,std::shared_ptr<java::lang::String> encoding);
	ResourceReader(std::shared_ptr<java::lang::String> resourceName);
	ResourceReader(std::shared_ptr<java::lang::String> resourceName,std::shared_ptr<java::lang::String> encoding);
	void virtual close();
	std::shared_ptr<java::lang::String> virtual describePosition();
	int virtual getLineNumber();
	std::shared_ptr<java::lang::String> virtual readLine();
	std::shared_ptr<java::lang::String> virtual readLineSkippingComments();
	std::shared_ptr<java::lang::String> virtual readLineSkippingComments(bool trim);
	void virtual reset();
public:
	virtual ~ResourceReader(){
	}

}; // class ResourceReader
}; // namespace android::icu::impl::data

#endif //__android_icu_impl_data_ResourceReader__

