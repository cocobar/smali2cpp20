// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceBinary.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_WholeBundle.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceBinary.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

// .method constructor <init>(Landroid/icu/impl/ICUResourceBundleImpl;Ljava/lang/String;I)V
android::icu::impl::ICUResourceBundleImpl_S_ResourceBinary::ICUResourceBundleImpl_S_ResourceBinary(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource)
{
	
	//    .param p1, "container"    # Landroid/icu/impl/ICUResourceBundleImpl;
	//    .param p2, "key"    # Ljava/lang/String;
	//    .param p3, "resource"    # I
	android::icu::impl::ICUResourceBundleImpl::(container, key, resource);
	return;

}
// .method public getBinary()Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUResourceBundleImpl_S_ResourceBinary::getBinary()
{
	
	return this->wholeBundle->reader->getBinary(this->resource);

}
// .method public getBinary([B)[B
unsigned char android::icu::impl::ICUResourceBundleImpl_S_ResourceBinary::getBinary(std::shared_ptr<unsigned char[]> ba)
{
	
	//    .param p1, "ba"    # [B
	return this->wholeBundle->reader->getBinary(this->resource, ba);

}
// .method public getType()I
int android::icu::impl::ICUResourceBundleImpl_S_ResourceBinary::getType()
{
	
	return 0x1;

}


