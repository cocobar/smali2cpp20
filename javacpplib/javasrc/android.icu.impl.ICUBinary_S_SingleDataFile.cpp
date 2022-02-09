// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUBinary$SingleDataFile.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_DataFile.h"
#include "android.icu.impl.ICUBinary_S_SingleDataFile.h"
#include "android.icu.impl.ICUBinary.h"
#include "java.io.File.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Set.h"

// .method constructor <init>(Ljava/lang/String;Ljava/io/File;)V
android::icu::impl::ICUBinary_S_SingleDataFile::ICUBinary_S_SingleDataFile(std::shared_ptr<java::lang::String> item,std::shared_ptr<java::io::File> path)
{
	
	//    .param p1, "item"    # Ljava/lang/String;
	//    .param p2, "path"    # Ljava/io/File;
	android::icu::impl::ICUBinary_S_DataFile::(item);
	this->path = path;
	return;

}
// .method addBaseNamesInFolder(Ljava/lang/String;Ljava/lang/String;Ljava/util/Set;)V
void android::icu::impl::ICUBinary_S_SingleDataFile::addBaseNamesInFolder(std::shared_ptr<java::lang::String> folder,std::shared_ptr<java::lang::String> suffix,std::shared_ptr<java::util::Set<java::lang::String>> names)
{
	
	int cVar0;
	
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
	cVar0 = 0x2f;
	if ( this->itemPath->length() <= (folder->length() +  suffix->length()) )
		goto label_cond_57;
	if ( !(this->itemPath->startsWith(folder)) )  
		goto label_cond_57;
	if ( !(this->itemPath->endsWith(suffix)) )  
		goto label_cond_57;
	if ( this->itemPath->charAt(folder->length()) != cVar0 )
		goto label_cond_57;
	if ( this->itemPath->indexOf(cVar0, ( folder->length() + 0x1)) >= 0 )
		goto label_cond_57;
	names->add(this->itemPath->substring(( folder->length() + 0x1), (this->itemPath->length() -  suffix->length())));
label_cond_57:
	return;

}
// .method getData(Ljava/lang/String;)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUBinary_S_SingleDataFile::getData(std::shared_ptr<java::lang::String> requestedPath)
{
	
	//    .param p1, "requestedPath"    # Ljava/lang/String;
	if ( !(requestedPath->equals(this->itemPath)) )  
		goto label_cond_f;
	return android::icu::impl::ICUBinary::-wrap0(this->path);
	// 184    .line 243
label_cond_f:
	return 0x0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUBinary_S_SingleDataFile::toString()
{
	
	return this->path->toString();

}


