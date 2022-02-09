// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$ReaderCache.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.ICUData.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ReaderCache.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ReaderCacheKey.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.ByteBuffer.h"

// .method private constructor <init>()V
android::icu::impl::ICUResourceBundleReader_S_ReaderCache::ICUResourceBundleReader_S_ReaderCache()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/ICUResourceBundleReader$ReaderCache;)V
android::icu::impl::ICUResourceBundleReader_S_ReaderCache::ICUResourceBundleReader_S_ReaderCache(std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ReaderCache> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/ICUResourceBundleReader$ReaderCache;
	// 044    invoke-direct {p0}, Landroid/icu/impl/ICUResourceBundleReader$ReaderCache;-><init>()V
	return;

}
// .method protected createInstance(Landroid/icu/impl/ICUResourceBundleReader$ReaderCacheKey;Ljava/lang/ClassLoader;)Landroid/icu/impl/ICUResourceBundleReader;
std::shared_ptr<android::icu::impl::ICUResourceBundleReader> android::icu::impl::ICUResourceBundleReader_S_ReaderCache::createInstance(std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ReaderCacheKey> key,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	std::shared_ptr<java::lang::String> fullName;
	std::shared_ptr<java::io::IOException> ex;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::nio::ByteBuffer> inBytes;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::InputStream> stream;
	
	//    .param p1, "key"    # Landroid/icu/impl/ICUResourceBundleReader$ReaderCacheKey;
	//    .param p2, "loader"    # Ljava/lang/ClassLoader;
	fullName = android::icu::impl::ICUResourceBundleReader::getFullName(key->baseName, key->localeID);
	//    .local v7, "fullName":Ljava/lang/String;
	try {
	//label_try_start_8:
	if ( !(key->baseName) )  
		goto label_cond_2f;
	if ( !(key->baseName->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")))) )  
		goto label_cond_2f;
	//    .local v8, "itemPath":Ljava/lang/String;
	inBytes = android::icu::impl::ICUBinary::getData(loader, fullName, fullName->substring(( std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b"))->length() + 0x1)));
	//    .local v1, "inBytes":Ljava/nio/ByteBuffer;
	if ( inBytes )     
		goto label_cond_3e;
	return android::icu::impl::ICUResourceBundleReader::-get0({const[class].FS-Param});
	// 113    .line 196
	// 114    .end local v1    # "inBytes":Ljava/nio/ByteBuffer;
	// 115    .end local v8    # "itemPath":Ljava/lang/String;
label_cond_2f:
	stream = android::icu::impl::ICUData::getStream(loader, fullName);
	//    .local v9, "stream":Ljava/io/InputStream;
	if ( stream )     
		goto label_cond_3a;
	return android::icu::impl::ICUResourceBundleReader::-get0({const[class].FS-Param});
	// 132    .line 200
label_cond_3a:
	//    .end local v9    # "stream":Ljava/io/InputStream;
	//    .restart local v1    # "inBytes":Ljava/nio/ByteBuffer;
label_cond_3e:
	cVar0 = std::make_shared<android::icu::impl::ICUResourceBundleReader>(inBytes, key->baseName, key->localeID, loader, 0x0);
	//label_try_end_49:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4a;
	}
	//    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_49} :catch_4a
	return cVar0;
	// 158    .line 203
	// 159    .end local v1    # "inBytes":Ljava/nio/ByteBuffer;
label_catch_4a:
	// move-exception
	ex = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v6, "ex":Ljava/io/IOException;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<android::icu::util::ICUUncheckedIOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Data file ")))->append(fullName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is corrupt - ")))->append(ex->getMessage())->toString(), ex);
	// throw
	throw cVar1;

}


