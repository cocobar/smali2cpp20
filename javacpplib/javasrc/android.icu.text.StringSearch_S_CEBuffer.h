#ifndef __android_icu_text_StringSearch_S_CEBuffer__
#define __android_icu_text_StringSearch_S_CEBuffer__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringSearch$CEBuffer.smali
#include "java2ctype.h"
#include "android.icu.text.StringSearch_S_CEI.h"
#include "android.icu.text.StringSearch.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class StringSearch_S_CEBuffer : public java::lang::Object {
protected:
private:
public:
	static bool _assertionsDisabled;
	static int CEBUFFER_EXTRA;
	static int MAX_TARGET_IGNORABLES_PER_PAT_JAMO_L;
	static int MAX_TARGET_IGNORABLES_PER_PAT_OTHER;
	int bufSize_;
	std::shared_ptr<std::vector<android::icu::text::StringSearch_S_CEI>> buf_;
	int firstIx_;
	int limitIx_;
	std::shared_ptr<android::icu::text::StringSearch> strSearch_;
	static void static_cinit();
	StringSearch_S_CEBuffer(std::shared_ptr<android::icu::text::StringSearch> ss);
	static bool MIGHT_BE_JAMO_L(char c);
	std::shared_ptr<android::icu::text::StringSearch_S_CEI> virtual get(int index);
	std::shared_ptr<android::icu::text::StringSearch_S_CEI> virtual getPrevious(int index);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::StringSearch_S_CEBuffer::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~StringSearch_S_CEBuffer(){
	}

}; // class StringSearch_S_CEBuffer
}; // namespace android::icu::text

#endif //__android_icu_text_StringSearch_S_CEBuffer__

