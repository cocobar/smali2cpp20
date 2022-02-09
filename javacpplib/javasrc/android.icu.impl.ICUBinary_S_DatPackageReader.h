#ifndef __android_icu_impl_ICUBinary_S_DatPackageReader__
#define __android_icu_impl_ICUBinary_S_DatPackageReader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUBinary$DatPackageReader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_DatPackageReader_S_IsAcceptable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ICUBinary_S_DatPackageReader : public java::lang::Object {
protected:
private:
	static int DATA_FORMAT;
	static std::shared_ptr<android::icu::impl::ICUBinary_S_DatPackageReader_S_IsAcceptable> IS_ACCEPTABLE;
	ICUBinary_S_DatPackageReader();
	static int binarySearch(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<java::lang::CharSequence> key);
	static int getDataOffset(std::shared_ptr<java::nio::ByteBuffer> bytes,int index);
	static int getNameOffset(std::shared_ptr<java::nio::ByteBuffer> bytes,int index);
	static bool startsWithPackageName(std::shared_ptr<java::nio::ByteBuffer> bytes,int start);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	static bool addBaseName(std::shared_ptr<java::nio::ByteBuffer> bytes,int index,std::shared_ptr<java::lang::String> folder,std::shared_ptr<java::lang::String> suffix,std::shared_ptr<java::lang::StringBuilder> sb,std::shared_ptr<java::util::Set<java::lang::String>> names);
	static void addBaseNamesInFolder(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<java::lang::String> folder,std::shared_ptr<java::lang::String> suffix,std::shared_ptr<java::util::Set<java::lang::String>> names);
	static std::shared_ptr<java::nio::ByteBuffer> getData(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<java::lang::CharSequence> key);
	static bool validate(std::shared_ptr<java::nio::ByteBuffer> bytes);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ICUBinary_S_DatPackageReader::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ICUBinary_S_DatPackageReader(){
	}

}; // class ICUBinary_S_DatPackageReader
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUBinary_S_DatPackageReader__

