// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUBinary$PackageDataFile.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_DatPackageReader.h"
#include "android.icu.impl.ICUBinary_S_DataFile.h"
#include "android.icu.impl.ICUBinary_S_PackageDataFile.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Set.h"

// .method constructor <init>(Ljava/lang/String;Ljava/nio/ByteBuffer;)V
android::icu::impl::ICUBinary_S_PackageDataFile::ICUBinary_S_PackageDataFile(std::shared_ptr<java::lang::String> item,std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	//    .param p1, "item"    # Ljava/lang/String;
	//    .param p2, "bytes"    # Ljava/nio/ByteBuffer;
	android::icu::impl::ICUBinary_S_DataFile::(item);
	this->pkgBytes = bytes;
	return;

}
// .method addBaseNamesInFolder(Ljava/lang/String;Ljava/lang/String;Ljava/util/Set;)V
void android::icu::impl::ICUBinary_S_PackageDataFile::addBaseNamesInFolder(std::shared_ptr<java::lang::String> folder,std::shared_ptr<java::lang::String> suffix,std::shared_ptr<java::util::Set<java::lang::String>> names)
{
	
	//    .param p1, "folder"    # Ljava/lang/String;
	//    .param p2, "suffix"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 045        value = {
	// 046            "(",
	// 047            "Ljava/lang/String;",
	// 048            "Ljava/lang/String;",
	// 049            "Ljava/util/Set",
	// 050            "<",
	// 051            "Ljava/lang/String;",
	// 052            ">;)V"
	// 053        }
	// 054    .end annotation
	//    .local p3, "names":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	android::icu::impl::ICUBinary_S_DatPackageReader::addBaseNamesInFolder(this->pkgBytes, folder, suffix, names);
	return;

}
// .method getData(Ljava/lang/String;)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUBinary_S_PackageDataFile::getData(std::shared_ptr<java::lang::String> requestedPath)
{
	
	//    .param p1, "requestedPath"    # Ljava/lang/String;
	return android::icu::impl::ICUBinary_S_DatPackageReader::getData(this->pkgBytes, requestedPath);

}


