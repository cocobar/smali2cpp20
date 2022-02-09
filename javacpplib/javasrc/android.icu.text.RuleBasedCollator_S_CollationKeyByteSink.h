#ifndef __android_icu_text_RuleBasedCollator_S_CollationKeyByteSink__
#define __android_icu_text_RuleBasedCollator_S_CollationKeyByteSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedCollator$CollationKeyByteSink.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationKeys_S_SortKeyByteSink.h"
#include "android.icu.text.RawCollationKey.h"

namespace android::icu::text{
class RuleBasedCollator_S_CollationKeyByteSink : public android::icu::impl::coll::CollationKeys_S_SortKeyByteSink {
protected:
	void virtual AppendBeyondCapacity(std::shared_ptr<unsigned char[]> bytes,int start,int n,int length);
	bool virtual Resize(int appendCapacity,int length);
private:
	std::shared_ptr<android::icu::text::RawCollationKey> key_;
public:
	static std::shared_ptr<android::icu::text::RawCollationKey> _get0(std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationKeyByteSink> _this);
	RuleBasedCollator_S_CollationKeyByteSink(std::shared_ptr<android::icu::text::RawCollationKey> key);
public:
	virtual ~RuleBasedCollator_S_CollationKeyByteSink(){
	}

}; // class RuleBasedCollator_S_CollationKeyByteSink
}; // namespace android::icu::text

#endif //__android_icu_text_RuleBasedCollator_S_CollationKeyByteSink__

