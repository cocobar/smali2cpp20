// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUBinary$DataFile.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_DataFile.h"
#include "java.lang.String.h"
#include "java.util.Set.h"

// .method constructor <init>(Ljava/lang/String;)V
android::icu::impl::ICUBinary_S_DataFile::ICUBinary_S_DataFile(std::shared_ptr<java::lang::String> item)
{
	
	//    .param p1, "item"    # Ljava/lang/String;
	// 028    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->itemPath = item;
	return;

}
// .method abstract addBaseNamesInFolder(Ljava/lang/String;Ljava/lang/String;Ljava/util/Set;)V
void android::icu::impl::ICUBinary_S_DataFile::addBaseNamesInFolder(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::util::Set<java::lang::String>> var2)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 041        value = {
	// 042            "(",
	// 043            "Ljava/lang/String;",
	// 044            "Ljava/lang/String;",
	// 045            "Ljava/util/Set",
	// 046            "<",
	// 047            "Ljava/lang/String;",
	// 048            ">;)V"
	// 049        }
	// 050    .end annotation

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUBinary_S_DataFile::toString()
{
	
	return this->itemPath;

}


