#ifndef __android_icu_text_ListFormatter_S_FormattedListBuilder__
#define __android_icu_text_ListFormatter_S_FormattedListBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ListFormatter$FormattedListBuilder.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::text{
class ListFormatter_S_FormattedListBuilder : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::StringBuilder> current;
	int offset;
	bool virtual offsetRecorded();
public:
	ListFormatter_S_FormattedListBuilder(std::shared_ptr<java::lang::Object> start,bool recordOffset);
	std::shared_ptr<android::icu::text::ListFormatter_S_FormattedListBuilder> virtual append(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::Object> next,bool recordOffset);
	int virtual getOffset();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~ListFormatter_S_FormattedListBuilder(){
	}

}; // class ListFormatter_S_FormattedListBuilder
}; // namespace android::icu::text

#endif //__android_icu_text_ListFormatter_S_FormattedListBuilder__

