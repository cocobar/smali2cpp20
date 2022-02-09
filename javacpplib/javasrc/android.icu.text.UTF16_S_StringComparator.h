#ifndef __android_icu_text_UTF16_S_StringComparator__
#define __android_icu_text_UTF16_S_StringComparator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UTF16$StringComparator.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.Comparator.h"

namespace android::icu::text{
class UTF16_S_StringComparator : public java::util::Comparator<java::lang::String> {
protected:
private:
	static int CODE_POINT_COMPARE_SURROGATE_OFFSET_;
	int m_codePointCompare_;
	int m_foldCase_;
	bool m_ignoreCase_;
	int virtual compareCaseInsensitive(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2);
	int virtual compareCaseSensitive(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2);
public:
	static int FOLD_CASE_DEFAULT;
	static int FOLD_CASE_EXCLUDE_SPECIAL_I;
	UTF16_S_StringComparator();
	UTF16_S_StringComparator(bool codepointcompare,bool ignorecase,int foldcaseoption);
	int virtual compare(std::shared_ptr<java::lang::String> a,std::shared_ptr<java::lang::String> b);
	bool virtual getCodePointCompare();
	bool virtual getIgnoreCase();
	int virtual getIgnoreCaseOption();
	void virtual setCodePointCompare(bool flag);
	void virtual setIgnoreCase(bool ignorecase,int foldcaseoption);
public:
	virtual ~UTF16_S_StringComparator(){
	}

}; // class UTF16_S_StringComparator
}; // namespace android::icu::text

#endif //__android_icu_text_UTF16_S_StringComparator__

