#ifndef __android_icu_text_StringPrepParseException__
#define __android_icu_text_StringPrepParseException__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringPrepParseException.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.ParseException.h"

namespace android::icu::text{
class StringPrepParseException : public java::text::ParseException {
protected:
private:
	static int PARSE_CONTEXT_LEN;
	int error;
	int line;
	std::shared_ptr<java::lang::StringBuffer> postContext;
	std::shared_ptr<java::lang::StringBuffer> preContext;
	void virtual setContext(std::shared_ptr<java::lang::String> str,int pos);
	void virtual setPostContext(std::shared_ptr<java::lang::String> str,int pos);
	void virtual setPostContext(std::shared_ptr<char[]> str,int pos);
	void virtual setPreContext(std::shared_ptr<java::lang::String> str,int pos);
	void virtual setPreContext(std::shared_ptr<char[]> str,int pos);
public:
	static bool _assertionsDisabled;
	static int ACE_PREFIX_ERROR;
	static int BUFFER_OVERFLOW_ERROR;
	static int CHECK_BIDI_ERROR;
	static int DOMAIN_NAME_TOO_LONG_ERROR;
	static int ILLEGAL_CHAR_FOUND;
	static int INVALID_CHAR_FOUND;
	static int LABEL_TOO_LONG_ERROR;
	static int PROHIBITED_ERROR;
	static int STD3_ASCII_RULES_ERROR;
	static int UNASSIGNED_ERROR;
	static int VERIFICATION_ERROR;
	static int ZERO_LENGTH_LABEL;
	static long long serialVersionUID;
	static void static_cinit();
	StringPrepParseException(std::shared_ptr<java::lang::String> message,int error);
	StringPrepParseException(std::shared_ptr<java::lang::String> message,int error,std::shared_ptr<java::lang::String> rules,int pos);
	StringPrepParseException(std::shared_ptr<java::lang::String> message,int error,std::shared_ptr<java::lang::String> rules,int pos,int lineNumber);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual getError();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::StringPrepParseException::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~StringPrepParseException(){
	}

}; // class StringPrepParseException
}; // namespace android::icu::text

#endif //__android_icu_text_StringPrepParseException__

