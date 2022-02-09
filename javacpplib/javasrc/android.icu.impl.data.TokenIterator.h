#ifndef __android_icu_impl_data_TokenIterator__
#define __android_icu_impl_data_TokenIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\data\TokenIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.data.ResourceReader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace android::icu::impl::data{
class TokenIterator : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::StringBuffer> buf;
	bool done;
	int lastpos;
	std::shared_ptr<java::lang::String> line;
	int pos;
	std::shared_ptr<android::icu::impl::data::ResourceReader> reader;
	int virtual nextToken(int position);
public:
	TokenIterator(std::shared_ptr<android::icu::impl::data::ResourceReader> r);
	std::shared_ptr<java::lang::String> virtual describePosition();
	int virtual getLineNumber();
	std::shared_ptr<java::lang::String> virtual next();
public:
	virtual ~TokenIterator(){
	}

}; // class TokenIterator
}; // namespace android::icu::impl::data

#endif //__android_icu_impl_data_TokenIterator__

