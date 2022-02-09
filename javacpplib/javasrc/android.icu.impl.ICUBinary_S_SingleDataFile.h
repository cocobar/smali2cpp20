#ifndef __android_icu_impl_ICUBinary_S_SingleDataFile__
#define __android_icu_impl_ICUBinary_S_SingleDataFile__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUBinary$SingleDataFile.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_DataFile.h"
#include "java.io.File.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ICUBinary_S_SingleDataFile : public android::icu::impl::ICUBinary_S_DataFile {
protected:
private:
	std::shared_ptr<java::io::File> path;
public:
	ICUBinary_S_SingleDataFile(std::shared_ptr<java::lang::String> item,std::shared_ptr<java::io::File> path);
	void virtual addBaseNamesInFolder(std::shared_ptr<java::lang::String> folder,std::shared_ptr<java::lang::String> suffix,std::shared_ptr<java::util::Set<java::lang::String>> names);
	std::shared_ptr<java::nio::ByteBuffer> virtual getData(std::shared_ptr<java::lang::String> requestedPath);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~ICUBinary_S_SingleDataFile(){
	}

}; // class ICUBinary_S_SingleDataFile
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUBinary_S_SingleDataFile__

