#ifndef __android_icu_impl_StringPrepDataReader__
#define __android_icu_impl_StringPrepDataReader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\StringPrepDataReader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_Authenticate.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl{
class StringPrepDataReader : public android::icu::impl::ICUBinary_S_Authenticate {
protected:
private:
	static int DATA_FORMAT_ID;
	static std::shared_ptr<unsigned char[]> DATA_FORMAT_VERSION;
	static bool debug;
	std::shared_ptr<java::nio::ByteBuffer> byteBuffer;
	int unicodeVersion;
public:
	static void static_cinit();
	StringPrepDataReader(std::shared_ptr<java::nio::ByteBuffer> bytes);
	unsigned char virtual getUnicodeVersion();
	bool virtual isDataVersionAcceptable(std::shared_ptr<unsigned char[]> version);
	char virtual read(int length);
	int virtual readIndexes(int length);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::StringPrepDataReader::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~StringPrepDataReader(){
	}

}; // class StringPrepDataReader
}; // namespace android::icu::impl

#endif //__android_icu_impl_StringPrepDataReader__

