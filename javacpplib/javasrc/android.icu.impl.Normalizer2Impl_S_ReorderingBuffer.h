#ifndef __android_icu_impl_Normalizer2Impl_S_ReorderingBuffer__
#define __android_icu_impl_Normalizer2Impl_S_ReorderingBuffer__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Normalizer2Impl$ReorderingBuffer.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::impl{
class Normalizer2Impl_S_ReorderingBuffer : public java::lang::Appendable {
protected:
private:
	std::shared_ptr<java::lang::Appendable> app;
	bool appIsStringBuilder;
	int codePointLimit;
	int codePointStart;
	std::shared_ptr<android::icu::impl::Normalizer2Impl> impl;
	int lastCC;
	int reorderStart;
	std::shared_ptr<java::lang::StringBuilder> str;
	void virtual insert(int c,int cc);
	int virtual previousCC();
	void virtual setIterator();
	void virtual skipPrevious();
public:
	Normalizer2Impl_S_ReorderingBuffer(std::shared_ptr<android::icu::impl::Normalizer2Impl> ni,std::shared_ptr<java::lang::Appendable> dest,int destCapacity);
	std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> virtual append(char c);
	std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> virtual append(std::shared_ptr<java::lang::CharSequence> s);
	std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> virtual append(std::shared_ptr<java::lang::CharSequence> s,int start,int limit);
	void virtual append(int c,int cc);
	void virtual append(std::shared_ptr<java::lang::CharSequence> s,int start,int limit,int leadCC,int trailCC);
	void virtual appendZeroCC(int c);
	bool virtual equals(std::shared_ptr<java::lang::CharSequence> s,int start,int limit);
	void virtual flush();
	std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> virtual flushAndAppendZeroCC(std::shared_ptr<java::lang::CharSequence> s,int start,int limit);
	int virtual getLastCC();
	std::shared_ptr<java::lang::StringBuilder> virtual getStringBuilder();
	bool virtual isEmpty();
	int virtual length();
	void virtual remove();
	void virtual removeSuffix(int suffixLength);
	void virtual setLastChar(char c);
public:
	virtual ~Normalizer2Impl_S_ReorderingBuffer(){
	}

}; // class Normalizer2Impl_S_ReorderingBuffer
}; // namespace android::icu::impl

#endif //__android_icu_impl_Normalizer2Impl_S_ReorderingBuffer__

