#ifndef __android_icu_text_StringSearch_S_CollationPCE_S_PCEBuffer__
#define __android_icu_text_StringSearch_S_CollationPCE_S_PCEBuffer__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringSearch$CollationPCE$PCEBuffer.smali
#include "java2ctype.h"
#include "android.icu.text.StringSearch_S_CollationPCE_S_PCEI.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class StringSearch_S_CollationPCE_S_PCEBuffer : public java::lang::Object {
protected:
private:
	int bufferIndex_;
	std::shared_ptr<std::vector<android::icu::text::StringSearch_S_CollationPCE_S_PCEI>> buffer_;
	StringSearch_S_CollationPCE_S_PCEBuffer();
public:
	StringSearch_S_CollationPCE_S_PCEBuffer(std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_PCEBuffer> _this0);
	bool virtual empty();
	std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_PCEI> virtual get();
	void virtual put(long long ce,int ixLow,int ixHigh);
	void virtual reset();
public:
	virtual ~StringSearch_S_CollationPCE_S_PCEBuffer(){
	}

}; // class StringSearch_S_CollationPCE_S_PCEBuffer
}; // namespace android::icu::text

#endif //__android_icu_text_StringSearch_S_CollationPCE_S_PCEBuffer__

