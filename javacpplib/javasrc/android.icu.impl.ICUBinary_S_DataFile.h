#ifndef __android_icu_impl_ICUBinary_S_DataFile__
#define __android_icu_impl_ICUBinary_S_DataFile__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUBinary$DataFile.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ICUBinary_S_DataFile : public java::lang::Object {
protected:
	std::shared_ptr<java::lang::String> itemPath;
private:
public:
	ICUBinary_S_DataFile(std::shared_ptr<java::lang::String> item);
	void addBaseNamesInFolder(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::util::Set<java::lang::String>> var2);
	std::shared_ptr<java::nio::ByteBuffer> getData(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~ICUBinary_S_DataFile(){
	}

}; // class ICUBinary_S_DataFile
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUBinary_S_DataFile__

