#ifndef __android_icu_impl_duration_impl_XMLRecordReader__
#define __android_icu_impl_duration_impl_XMLRecordReader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\XMLRecordReader.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.RecordReader.h"
#include "java.io.Reader.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::impl::duration::impl{
class XMLRecordReader : public android::icu::impl::duration::impl::RecordReader {
protected:
private:
	bool atTag;
	std::shared_ptr<java::util::List<java::lang::String>> nameStack;
	std::shared_ptr<java::io::Reader> r;
	std::shared_ptr<java::lang::String> tag;
	void virtual advance();
	std::shared_ptr<java::lang::String> virtual getTag();
	bool virtual match(std::shared_ptr<java::lang::String> target);
	std::shared_ptr<java::lang::String> virtual readData();
	std::shared_ptr<java::lang::String> virtual readNextTag();
public:
	XMLRecordReader(std::shared_ptr<java::io::Reader> r);
	bool virtual bool(std::shared_ptr<java::lang::String> name);
	bool virtual boolArray(std::shared_ptr<java::lang::String> name);
	char virtual character(std::shared_ptr<java::lang::String> name);
	char virtual characterArray(std::shared_ptr<java::lang::String> name);
	bool virtual close();
	unsigned char virtual namedIndex(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::String>> names);
	unsigned char virtual namedIndexArray(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::String>> names);
	bool virtual open(std::shared_ptr<java::lang::String> title);
	int virtual readChar();
	std::shared_ptr<java::lang::String> virtual string(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::String> virtual stringArray(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::String> virtual stringTable(std::shared_ptr<java::lang::String> name);
public:
	virtual ~XMLRecordReader(){
	}

}; // class XMLRecordReader
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_XMLRecordReader__

