#ifndef __android_icu_text_RuleBasedCollator_S_CollationBuffer__
#define __android_icu_text_RuleBasedCollator_S_CollationBuffer__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedCollator$CollationBuffer.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.FCDUTF16CollationIterator.h"
#include "android.icu.impl.coll.UTF16CollationIterator.h"
#include "android.icu.text.RawCollationKey.h"
#include "android.icu.text.RuleBasedCollator_S_FCDUTF16NFDIterator.h"
#include "android.icu.text.RuleBasedCollator_S_UTF16NFDIterator.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class RuleBasedCollator_S_CollationBuffer : public java::lang::Object {
protected:
private:
	RuleBasedCollator_S_CollationBuffer(std::shared_ptr<android::icu::impl::coll::CollationData> data);
public:
	std::shared_ptr<android::icu::impl::coll::FCDUTF16CollationIterator> leftFCDUTF16Iter;
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_FCDUTF16NFDIterator> leftFCDUTF16NFDIter;
	std::shared_ptr<android::icu::impl::coll::UTF16CollationIterator> leftUTF16CollIter;
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_UTF16NFDIterator> leftUTF16NFDIter;
	std::shared_ptr<android::icu::text::RawCollationKey> rawCollationKey;
	std::shared_ptr<android::icu::impl::coll::FCDUTF16CollationIterator> rightFCDUTF16Iter;
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_FCDUTF16NFDIterator> rightFCDUTF16NFDIter;
	std::shared_ptr<android::icu::impl::coll::UTF16CollationIterator> rightUTF16CollIter;
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_UTF16NFDIterator> rightUTF16NFDIter;
	RuleBasedCollator_S_CollationBuffer(std::shared_ptr<android::icu::impl::coll::CollationData> data,std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> _this1);
public:
	virtual ~RuleBasedCollator_S_CollationBuffer(){
	}

}; // class RuleBasedCollator_S_CollationBuffer
}; // namespace android::icu::text

#endif //__android_icu_text_RuleBasedCollator_S_CollationBuffer__

