#ifndef __android_icu_impl_ICUResourceBundleReader__
#define __android_icu_impl_ICUResourceBundleReader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Array.h"
#include "android.icu.impl.ICUResourceBundleReader_S_IsAcceptable.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ReaderCache.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ResourceCache.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Table.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.CharSequence.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"
#include "java.nio.CharBuffer.h"

namespace android::icu::impl{
class ICUResourceBundleReader : public java::lang::Object {
protected:
private:
	static std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ReaderCache> CACHE;
	static int DATA_FORMAT;
	static bool DEBUG;
	static std::shared_ptr<java::nio::CharBuffer> EMPTY_16_BIT_UNITS;
	static std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Array> EMPTY_ARRAY;
	static std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Table> EMPTY_TABLE;
	static std::shared_ptr<java::lang::String> ICU_RESOURCE_SUFFIX;
	static std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_IsAcceptable> IS_ACCEPTABLE;
	static std::shared_ptr<android::icu::impl::ICUResourceBundleReader> NULL_READER;
	static std::shared_ptr<int[]> PUBLIC_TYPES;
	static int URES_ATT_IS_POOL_BUNDLE;
	static int URES_ATT_NO_FALLBACK;
	static int URES_ATT_USES_POOL_BUNDLE;
	static int URES_INDEX_16BIT_TOP;
	static int URES_INDEX_ATTRIBUTES;
	static int URES_INDEX_BUNDLE_TOP;
	static int URES_INDEX_KEYS_TOP;
	static int URES_INDEX_LENGTH;
	static int URES_INDEX_MAX_TABLE_LENGTH;
	static int URES_INDEX_POOL_CHECKSUM;
	static std::shared_ptr<java::nio::ByteBuffer> emptyByteBuffer;
	static std::shared_ptr<unsigned char[]> emptyBytes;
	static std::shared_ptr<char[]> emptyChars;
	static std::shared_ptr<int[]> emptyInts;
	static std::shared_ptr<java::lang::String> emptyString;
	std::shared_ptr<java::nio::CharBuffer> b16BitUnits;
	std::shared_ptr<java::nio::ByteBuffer> bytes;
	int dataVersion;
	bool isPoolBundle;
	std::shared_ptr<unsigned char[]> keyBytes;
	int localKeyLimit;
	bool noFallback;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader> poolBundleReader;
	int poolCheckSum;
	int poolStringIndex16Limit;
	int poolStringIndexLimit;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ResourceCache> resourceCache;
	int rootRes;
	bool usesPoolBundle;
	ICUResourceBundleReader();
	ICUResourceBundleReader(std::shared_ptr<java::nio::ByteBuffer> inBytes,std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> loader);
	static int RES_GET_OFFSET(int res);
	int virtual compareKeys(std::shared_ptr<java::lang::CharSequence> key,char keyOffset);
	int virtual compareKeys32(std::shared_ptr<java::lang::CharSequence> key,int keyOffset);
	char virtual getChars(int offset,int count);
	int virtual getIndexesInt(int i);
	int virtual getInt(int offset);
	int virtual getInts(int offset,int count);
	std::shared_ptr<java::lang::String> virtual getKey16String(int keyOffset);
	std::shared_ptr<java::lang::String> virtual getKey32String(int keyOffset);
	int virtual getResourceByteOffset(int offset);
	char virtual getTable16KeyOffsets(int offset);
	int virtual getTable32KeyOffsets(int offset);
	char virtual getTableKeyOffsets(int offset);
	void virtual init(std::shared_ptr<java::nio::ByteBuffer> inBytes);
	bool virtual isNoInheritanceMarker(int res);
	bool virtual isStringV2NoInheritanceMarker(int offset);
	static std::shared_ptr<java::lang::String> makeKeyStringFromBytes(std::shared_ptr<unsigned char[]> keyBytes,int keyOffset);
	std::shared_ptr<java::lang::String> virtual makeStringFromBytes(int offset,int length);
	void virtual setKeyFromKey16(int keyOffset,std::shared_ptr<android::icu::impl::UResource_S_Key> key);
	void virtual setKeyFromKey32(int keyOffset,std::shared_ptr<android::icu::impl::UResource_S_Key> key);
public:
	static bool _assertionsDisabled;
	static int LARGE_SIZE;
	static std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _get0();
	static int _get1();
	static std::shared_ptr<java::nio::CharBuffer> _get2(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this);
	static int _get3(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this);
	static int _get4(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this);
	static bool _wrap0(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int res);
	static char _wrap1(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int offset);
	static std::shared_ptr<java::lang::String> _wrap10(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int keyOffset);
	static void _wrap11(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int keyOffset,std::shared_ptr<android::icu::impl::UResource_S_Key> key);
	static void _wrap12(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int keyOffset,std::shared_ptr<android::icu::impl::UResource_S_Key> key);
	static char _wrap2(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int offset);
	static int _wrap3(int res);
	static int _wrap4(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int offset);
	static int _wrap5(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,std::shared_ptr<java::lang::CharSequence> key,int keyOffset);
	static int _wrap6(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,std::shared_ptr<java::lang::CharSequence> key,char keyOffset);
	static int _wrap7(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int offset);
	static int _wrap8(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int offset);
	static std::shared_ptr<java::lang::String> _wrap9(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int keyOffset);
	static void static_cinit();
	ICUResourceBundleReader(std::shared_ptr<java::nio::ByteBuffer> inBytes,std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this4);
	static int RES_GET_INT(int res);
	static int RES_GET_TYPE(int res);
	static int RES_GET_UINT(int res);
	static bool URES_IS_ARRAY(int type);
	static bool URES_IS_TABLE(int type);
	static std::shared_ptr<java::lang::String> getFullName(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeName);
	static std::shared_ptr<android::icu::impl::ICUResourceBundleReader> getReader(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> root);
	std::shared_ptr<java::lang::String> virtual getAlias(int res);
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Array> virtual getArray(int res);
	std::shared_ptr<java::nio::ByteBuffer> virtual getBinary(int res);
	unsigned char virtual getBinary(int res,std::shared_ptr<unsigned char[]> cVar0);
	int virtual getIntVector(int res);
	bool virtual getNoFallback();
	int virtual getRootResource();
	std::shared_ptr<java::lang::String> virtual getString(int res);
	std::shared_ptr<java::lang::String> virtual getStringV2(int res);
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Table> virtual getTable(int res);
	bool virtual getUsesPoolBundle();
	std::shared_ptr<android::icu::util::VersionInfo> virtual getVersion();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ICUResourceBundleReader::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ICUResourceBundleReader(){
	}

}; // class ICUResourceBundleReader
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleReader__

