#ifndef __android_icu_text_StringSearch_S_CollationPCE_S_RCEBuffer__
#define __android_icu_text_StringSearch_S_CollationPCE_S_RCEBuffer__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringSearch$CollationPCE$RCEBuffer.smali
#include "java2ctype.h"
#include "android.icu.text.StringSearch_S_CollationPCE_S_RCEI.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class StringSearch_S_CollationPCE_S_RCEBuffer : public java::lang::Object {
protected:
private:
	int bufferIndex_;
	std::shared_ptr<std::vector<android::icu::text::StringSearch_S_CollationPCE_S_RCEI>> buffer_;
	StringSearch_S_CollationPCE_S_RCEBuffer();
public:
	StringSearch_S_CollationPCE_S_RCEBuffer(std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_RCEBuffer> _this0);
	bool virtual empty();
	std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_RCEI> virtual get();
	void virtual put(int ce,int ixLow,int ixHigh);
public:
	virtual ~StringSearch_S_CollationPCE_S_RCEBuffer(){
	}

}; // class StringSearch_S_CollationPCE_S_RCEBuffer
}; // namespace android::icu::text

#endif //__android_icu_text_StringSearch_S_CollationPCE_S_RCEBuffer__

