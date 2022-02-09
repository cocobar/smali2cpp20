#ifndef __android_icu_impl_UnicodeSetStringSpan__
#define __android_icu_impl_UnicodeSetStringSpan__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UnicodeSetStringSpan.smali
#include "java2ctype.h"
#include "android.icu.impl.UnicodeSetStringSpan_S_OffsetList.h"
#include "android.icu.text.UnicodeSet_S_SpanCondition.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.OutputInt.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.ArrayList.h"

namespace android::icu::impl{
class UnicodeSetStringSpan : public java::lang::Object {
protected:
private:
	bool all;
	int maxLength16;
	std::shared_ptr<android::icu::impl::UnicodeSetStringSpan_S_OffsetList> offsets;
	bool someRelevant;
	std::shared_ptr<short[]> spanLengths;
	std::shared_ptr<android::icu::text::UnicodeSet> spanNotSet;
	std::shared_ptr<android::icu::text::UnicodeSet> spanSet;
	std::shared_ptr<java::util::ArrayList<java::lang::String>> strings;
	void virtual addToSpanNotSet(int c);
	static bool matches16(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<java::lang::String> t,int length);
	int virtual spanContainedAndCount(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<android::icu::util::OutputInt> outCount);
	int virtual spanNot(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<android::icu::util::OutputInt> outCount);
	int virtual spanNotBack(std::shared_ptr<java::lang::CharSequence> s,int length);
	int virtual spanWithStrings(std::shared_ptr<java::lang::CharSequence> s,int start,int spanLimit,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition);
public:
	static int ALL;
	static short ALL_CP_CONTAINED;
	static int BACK;
	static int BACK_UTF16_CONTAINED;
	static int BACK_UTF16_NOT_CONTAINED;
	static int CONTAINED;
	static int FWD;
	static int FWD_UTF16_CONTAINED;
	static int FWD_UTF16_NOT_CONTAINED;
	static short LONG_SPAN;
	static int NOT_CONTAINED;
	static int WITH_COUNT;
	UnicodeSetStringSpan(std::shared_ptr<android::icu::impl::UnicodeSetStringSpan> otherStringSpan,std::shared_ptr<java::util::ArrayList<java::lang::String>> newParentSetStrings);
	UnicodeSetStringSpan(std::shared_ptr<android::icu::text::UnicodeSet> set,std::shared_ptr<java::util::ArrayList<java::lang::String>> setStrings,int which);
	static short makeSpanLengthByte(int spanLength);
	static bool matches16CPB(std::shared_ptr<java::lang::CharSequence> s,int start,int limit,std::shared_ptr<java::lang::String> t,int tlength);
	static int spanOne(std::shared_ptr<android::icu::text::UnicodeSet> set,std::shared_ptr<java::lang::CharSequence> s,int start,int length);
	static int spanOneBack(std::shared_ptr<android::icu::text::UnicodeSet> set,std::shared_ptr<java::lang::CharSequence> s,int length);
	bool virtual contains(int c);
	bool virtual needsStringSpanUTF16();
	int virtual span(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition);
	int virtual spanAndCount(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition,std::shared_ptr<android::icu::util::OutputInt> outCount);
	int virtual spanBack(std::shared_ptr<java::lang::CharSequence> s,int length,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition);
public:
	virtual ~UnicodeSetStringSpan(){
	}

}; // class UnicodeSetStringSpan
}; // namespace android::icu::impl

#endif //__android_icu_impl_UnicodeSetStringSpan__

