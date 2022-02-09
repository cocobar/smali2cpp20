#ifndef __android_icu_impl_SimpleFormatterImpl__
#define __android_icu_impl_SimpleFormatterImpl__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\SimpleFormatterImpl.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::impl{
class SimpleFormatterImpl : public java::lang::Object {
protected:
private:
	static int ARG_NUM_LIMIT;
	static std::shared_ptr<std::vector<std::vector<java::lang::String>>> COMMON_PATTERNS;
	static char LEN1_CHAR;
	static char LEN2_CHAR;
	static char LEN3_CHAR;
	static int MAX_SEGMENT_LENGTH;
	static char SEGMENT_LENGTH_ARGUMENT_CHAR;
	SimpleFormatterImpl();
	static std::shared_ptr<java::lang::StringBuilder> format(std::shared_ptr<java::lang::String> compiledPattern,std::shared_ptr<std::vector<java::lang::CharSequence>> values,std::shared_ptr<java::lang::StringBuilder> result,std::shared_ptr<java::lang::String> resultCopy,bool forbidResultAsValue,std::shared_ptr<int[]> offsets);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	static std::shared_ptr<java::lang::String> compileToStringMinMaxArguments(std::shared_ptr<java::lang::CharSequence> pattern,std::shared_ptr<java::lang::StringBuilder> sb,int min,int max);
	static std::shared_ptr<java::lang::StringBuilder> formatAndAppend(std::shared_ptr<java::lang::String> compiledPattern,std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<int[]> offsets,std::shared_ptr<std::vector<java::lang::CharSequence>> values);
	static std::shared_ptr<java::lang::StringBuilder> formatAndReplace(std::shared_ptr<java::lang::String> compiledPattern,std::shared_ptr<java::lang::StringBuilder> result,std::shared_ptr<int[]> offsets,std::shared_ptr<std::vector<java::lang::CharSequence>> values);
	static std::shared_ptr<java::lang::String> formatCompiledPattern(std::shared_ptr<java::lang::String> compiledPattern,std::shared_ptr<std::vector<java::lang::CharSequence>> values);
	static std::shared_ptr<java::lang::String> formatRawPattern(std::shared_ptr<java::lang::String> pattern,int min,int max,std::shared_ptr<std::vector<java::lang::CharSequence>> values);
	static int getArgumentLimit(std::shared_ptr<java::lang::String> compiledPattern);
	static std::shared_ptr<java::lang::String> getTextWithNoArguments(std::shared_ptr<java::lang::String> compiledPattern);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::SimpleFormatterImpl::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SimpleFormatterImpl(){
	}

}; // class SimpleFormatterImpl
}; // namespace android::icu::impl

#endif //__android_icu_impl_SimpleFormatterImpl__

