#ifndef __android_icu_impl_ICUBinary_S_PackageDataFile__
#define __android_icu_impl_ICUBinary_S_PackageDataFile__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUBinary$PackageDataFile.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_DataFile.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ICUBinary_S_PackageDataFile : public android::icu::impl::ICUBinary_S_DataFile {
protected:
private:
	std::shared_ptr<java::nio::ByteBuffer> pkgBytes;
public:
	ICUBinary_S_PackageDataFile(std::shared_ptr<java::lang::String> item,std::shared_ptr<java::nio::ByteBuffer> bytes);
	void virtual addBaseNamesInFolder(std::shared_ptr<java::lang::String> folder,std::shared_ptr<java::lang::String> suffix,std::shared_ptr<java::util::Set<java::lang::String>> names);
	std::shared_ptr<java::nio::ByteBuffer> virtual getData(std::shared_ptr<java::lang::String> requestedPath);
public:
	virtual ~ICUBinary_S_PackageDataFile(){
	}

}; // class ICUBinary_S_PackageDataFile
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUBinary_S_PackageDataFile__

