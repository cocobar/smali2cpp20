#ifndef __android_icu_impl_duration_impl_XMLRecordWriter__
#define __android_icu_impl_duration_impl_XMLRecordWriter__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\XMLRecordWriter.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.RecordWriter.h"
#include "java.io.Writer.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::impl::duration::impl{
class XMLRecordWriter : public android::icu::impl::duration::impl::RecordWriter {
protected:
private:
	static std::shared_ptr<java::lang::String> INDENT;
	std::shared_ptr<java::util::List<java::lang::String>> nameStack;
	std::shared_ptr<java::io::Writer> w;
	static std::shared_ptr<java::lang::String> ctos(char value);
	void virtual internalString(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> normalizedValue);
	void virtual internalStringArray(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::String>> normalizedValues);
	void virtual newline();
	void virtual pop();
	void virtual push(std::shared_ptr<java::lang::String> name);
	void virtual writeString(std::shared_ptr<java::lang::String> str);
public:
	static std::shared_ptr<java::lang::String> NULL_NAME;
	XMLRecordWriter(std::shared_ptr<java::io::Writer> w);
	static std::shared_ptr<java::lang::String> normalize(std::shared_ptr<java::lang::String> str);
	void virtual bool(std::shared_ptr<java::lang::String> name,bool value);
	void virtual boolArray(std::shared_ptr<java::lang::String> name,std::shared_ptr<bool[]> values);
	void virtual character(std::shared_ptr<java::lang::String> name,char value);
	void virtual characterArray(std::shared_ptr<java::lang::String> name,std::shared_ptr<char[]> values);
	bool virtual close();
	void virtual flush();
	void virtual namedIndex(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::String>> names,int value);
	void virtual namedIndexArray(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::String>> names,std::shared_ptr<unsigned char[]> values);
	bool virtual open(std::shared_ptr<java::lang::String> title);
	void virtual string(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> value);
	void virtual stringArray(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::String>> values);
	void virtual stringTable(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<std::vector<java::lang::String>>> values);
public:
	virtual ~XMLRecordWriter(){
	}

}; // class XMLRecordWriter
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_XMLRecordWriter__

