#ifndef __android_icu_util_StringTokenizer__
#define __android_icu_util_StringTokenizer__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\StringTokenizer.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"

namespace android::icu::util{
class StringTokenizer : public java::util::Enumeration<java::lang::Object> {
protected:
private:
	static std::shared_ptr<android::icu::text::UnicodeSet> DEFAULT_DELIMITERS_;
	static std::shared_ptr<android::icu::text::UnicodeSet> EMPTY_DELIMITER_;
	static int TOKEN_SIZE_;
	std::shared_ptr<bool[]> delims;
	bool m_coalesceDelimiters_;
	std::shared_ptr<android::icu::text::UnicodeSet> m_delimiters_;
	int m_length_;
	int m_nextOffset_;
	bool m_returnDelimiters_;
	std::shared_ptr<java::lang::String> m_source_;
	std::shared_ptr<int[]> m_tokenLimit_;
	int m_tokenOffset_;
	int m_tokenSize_;
	std::shared_ptr<int[]> m_tokenStart_;
	int virtual getNextDelimiter(int offset);
	int virtual getNextNonDelimiter(int offset);
public:
	static void static_cinit();
	StringTokenizer(std::shared_ptr<java::lang::String> str);
	StringTokenizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::UnicodeSet> delim);
	StringTokenizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::UnicodeSet> delim,bool returndelims);
	StringTokenizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::UnicodeSet> delim,bool returndelims,bool coalescedelims);
	StringTokenizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> delim);
	StringTokenizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> delim,bool returndelims);
	StringTokenizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> delim,bool returndelims,bool coalescedelims);
	void virtual checkDelimiters();
	int virtual countTokens();
	bool virtual hasMoreElements();
	bool virtual hasMoreTokens();
	std::shared_ptr<java::lang::Object> virtual nextElement();
	std::shared_ptr<java::lang::String> virtual nextToken();
	std::shared_ptr<java::lang::String> virtual nextToken(std::shared_ptr<android::icu::text::UnicodeSet> delim);
	std::shared_ptr<java::lang::String> virtual nextToken(std::shared_ptr<java::lang::String> delim);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::StringTokenizer::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~StringTokenizer(){
	}

}; // class StringTokenizer
}; // namespace android::icu::util

#endif //__android_icu_util_StringTokenizer__

