#ifndef __android_icu_text_UnicodeDecompressor__
#define __android_icu_text_UnicodeDecompressor__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeDecompressor.smali
#include "java2ctype.h"
#include "android.icu.text.SCSU.h"
#include "java.lang.String.h"

namespace android::icu::text{
class UnicodeDecompressor : public android::icu::text::SCSU {
protected:
private:
	static int BUFSIZE;
	std::shared_ptr<unsigned char[]> fBuffer;
	int fBufferLength;
	int fCurrentWindow;
	int fMode;
	std::shared_ptr<int[]> fOffsets;
public:
	UnicodeDecompressor();
	static std::shared_ptr<java::lang::String> decompress(std::shared_ptr<unsigned char[]> buffer);
	static char decompress(std::shared_ptr<unsigned char[]> buffer,int start,int limit);
	int virtual decompress(std::shared_ptr<unsigned char[]> byteBuffer,int byteBufferStart,int byteBufferLimit,std::shared_ptr<int[]> bytesRead,std::shared_ptr<char[]> charBuffer,int charBufferStart,int charBufferLimit);
	void virtual reset();
public:
	virtual ~UnicodeDecompressor(){
	}

}; // class UnicodeDecompressor
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeDecompressor__

