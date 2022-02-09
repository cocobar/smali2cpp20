#ifndef __android_icu_text_UnicodeCompressor__
#define __android_icu_text_UnicodeCompressor__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeCompressor.smali
#include "java2ctype.h"
#include "android.icu.text.SCSU.h"
#include "java.lang.String.h"

namespace android::icu::text{
class UnicodeCompressor : public android::icu::text::SCSU {
protected:
private:
	static std::shared_ptr<bool[]> sSingleTagTable;
	static std::shared_ptr<bool[]> sUnicodeTagTable;
	int fCurrentWindow;
	std::shared_ptr<int[]> fIndexCount;
	int fMode;
	std::shared_ptr<int[]> fOffsets;
	int fTimeStamp;
	std::shared_ptr<int[]> fTimeStamps;
	int virtual findDynamicWindow(int c);
	static int findStaticWindow(int c);
	int virtual getLRDefinedWindow();
	bool virtual inDynamicWindow(int c,int whichWindow);
	static bool inStaticWindow(int c,int whichWindow);
	static bool isCompressible(int c);
	static int makeIndex(int c);
public:
	static void static_cinit();
	UnicodeCompressor();
	static unsigned char compress(std::shared_ptr<java::lang::String> buffer);
	static unsigned char compress(std::shared_ptr<char[]> buffer,int start,int limit);
	int virtual compress(std::shared_ptr<char[]> charBuffer,int charBufferStart,int charBufferLimit,std::shared_ptr<int[]> charsRead,std::shared_ptr<unsigned char[]> byteBuffer,int byteBufferStart,int byteBufferLimit);
	void virtual reset();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::UnicodeCompressor::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UnicodeCompressor(){
	}

}; // class UnicodeCompressor
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeCompressor__

