#ifndef __android_icu_impl_ICUBinary__
#define __android_icu_impl_ICUBinary__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUBinary.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_Authenticate.h"
#include "android.icu.impl.ICUBinary_S_DataFile.h"
#include "android.icu.util.VersionInfo.h"
#include "java.io.DataOutputStream.h"
#include "java.io.File.h"
#include "java.io.InputStream.h"
#include "java.lang.CharSequence.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.List.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ICUBinary : public java::lang::Object {
protected:
private:
	static unsigned char CHAR_SET_;
	static unsigned char CHAR_SIZE_;
	static std::shared_ptr<java::lang::String> HEADER_AUTHENTICATION_FAILED_;
	static unsigned char MAGIC1;
	static unsigned char MAGIC2;
	static std::shared_ptr<java::lang::String> MAGIC_NUMBER_AUTHENTICATION_FAILED_;
	static std::shared_ptr<java::util::List<android::icu::impl::ICUBinary_S_DataFile>> icuDataFiles;
	static void addDataFilesFromFolder(std::shared_ptr<java::io::File> folder,std::shared_ptr<java::lang::StringBuilder> itemPath,std::shared_ptr<java::util::List<android::icu::impl::ICUBinary_S_DataFile>> dataFiles);
	static void addDataFilesFromPath(std::shared_ptr<java::lang::String> dataPath,std::shared_ptr<java::util::List<android::icu::impl::ICUBinary_S_DataFile>> files);
	static std::shared_ptr<java::nio::ByteBuffer> getData(std::shared_ptr<java::lang::ClassLoader> cVar0,std::shared_ptr<java::lang::String> cVar2,std::shared_ptr<java::lang::String> itemPath,bool required);
	static std::shared_ptr<java::nio::ByteBuffer> getDataFromFile(std::shared_ptr<java::lang::String> itemPath);
	static std::shared_ptr<java::nio::ByteBuffer> mapFile(std::shared_ptr<java::io::File> path);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<java::nio::ByteBuffer> _wrap0(std::shared_ptr<java::io::File> path);
	static void static_cinit();
	ICUBinary();
	static void addBaseNamesInFileFolder(std::shared_ptr<java::lang::String> folder,std::shared_ptr<java::lang::String> suffix,std::shared_ptr<java::util::Set<java::lang::String>> names);
	static int compareKeys(std::shared_ptr<java::lang::CharSequence> key,std::shared_ptr<java::nio::ByteBuffer> bytes,int offset);
	static int compareKeys(std::shared_ptr<java::lang::CharSequence> key,std::shared_ptr<unsigned char[]> bytes,int offset);
	static std::shared_ptr<java::nio::ByteBuffer> getByteBufferFromInputStreamAndCloseStream(std::shared_ptr<java::io::InputStream> is);
	static char getChars(std::shared_ptr<java::nio::ByteBuffer> bytes,int length,int additionalSkipLength);
	static std::shared_ptr<java::nio::ByteBuffer> getData(std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::lang::String> resourceName,std::shared_ptr<java::lang::String> itemPath);
	static std::shared_ptr<java::nio::ByteBuffer> getData(std::shared_ptr<java::lang::String> itemPath);
	static int getInts(std::shared_ptr<java::nio::ByteBuffer> bytes,int length,int additionalSkipLength);
	static long long getLongs(std::shared_ptr<java::nio::ByteBuffer> bytes,int length,int additionalSkipLength);
	static std::shared_ptr<java::nio::ByteBuffer> getRequiredData(std::shared_ptr<java::lang::String> itemPath);
	static short getShorts(std::shared_ptr<java::nio::ByteBuffer> bytes,int length,int additionalSkipLength);
	static std::shared_ptr<java::lang::String> getString(std::shared_ptr<java::nio::ByteBuffer> bytes,int length,int additionalSkipLength);
	static unsigned char getVersionByteArrayFromCompactInt(int version);
	static std::shared_ptr<android::icu::util::VersionInfo> getVersionInfoFromCompactInt(int version);
	static int readHeader(std::shared_ptr<java::nio::ByteBuffer> bytes,int dataFormat,std::shared_ptr<android::icu::impl::ICUBinary_S_Authenticate> authenticate);
	static std::shared_ptr<android::icu::util::VersionInfo> readHeaderAndDataVersion(std::shared_ptr<java::nio::ByteBuffer> bytes,int dataFormat,std::shared_ptr<android::icu::impl::ICUBinary_S_Authenticate> authenticate);
	static void skipBytes(std::shared_ptr<java::nio::ByteBuffer> bytes,int skipLength);
	static std::shared_ptr<java::nio::ByteBuffer> sliceWithOrder(std::shared_ptr<java::nio::ByteBuffer> bytes);
	static int writeHeader(int dataFormat,int formatVersion,int dataVersion,std::shared_ptr<java::io::DataOutputStream> dos);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ICUBinary::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ICUBinary(){
	}

}; // class ICUBinary
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUBinary__

