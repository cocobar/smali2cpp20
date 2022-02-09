#ifndef __android_icu_text_SpoofChecker_S_ConfusableDataUtils__
#define __android_icu_text_SpoofChecker_S_ConfusableDataUtils__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$ConfusableDataUtils.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class SpoofChecker_S_ConfusableDataUtils : public java::lang::Object {
protected:
private:
	SpoofChecker_S_ConfusableDataUtils();
public:
	static bool _assertionsDisabled;
	static int FORMAT_VERSION;
	static void static_cinit();
	static int codePointAndLengthToKey(int codePoint,int length);
	static int keyToCodePoint(int key);
	static int keyToLength(int key);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::SpoofChecker_S_ConfusableDataUtils::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SpoofChecker_S_ConfusableDataUtils(){
	}

}; // class SpoofChecker_S_ConfusableDataUtils
}; // namespace android::icu::text

#endif //__android_icu_text_SpoofChecker_S_ConfusableDataUtils__

