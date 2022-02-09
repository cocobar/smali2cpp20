// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileSystemProvider$2.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.nio.file.Path.h"
#include "sun.nio.fs.AbstractFileTypeDetector.h"
#include "sun.nio.fs.UnixFileSystemProvider_S_2.h"
#include "sun.nio.fs.UnixFileSystemProvider.h"

// .method constructor <init>(Lsun/nio/fs/UnixFileSystemProvider;[Lsun/nio/fs/AbstractFileTypeDetector;)V
sun::nio::fs::UnixFileSystemProvider_S_2::UnixFileSystemProvider_S_2(std::shared_ptr<sun::nio::fs::UnixFileSystemProvider> this_S_0,std::shared_ptr<std::vector<sun::nio::fs::AbstractFileTypeDetector>> var1)
{
	
	//    .param p1, "this$0"    # Lsun/nio/fs/UnixFileSystemProvider;
	this->this_S_0 = this_S_0;
	this->val_S_detectors = var1;
	// 035    invoke-direct {p0}, Lsun/nio/fs/AbstractFileTypeDetector;-><init>()V
	return;

}
// .method protected implProbeContentType(Ljava/nio/file/Path;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixFileSystemProvider_S_2::implProbeContentType(std::shared_ptr<java::nio::file::Path> file)
{
	
	std::shared_ptr<std::vector<sun::nio::fs::AbstractFileTypeDetector>> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> result;
	
	//    .param p1, "file"    # Ljava/nio/file/Path;
	//    .annotation system Ldalvik/annotation/Throws;
	// 047        value = {
	// 048            Ljava/io/IOException;
	// 049        }
	// 050    .end annotation
	cVar0 = this->val_S_detectors;
	cVar1 = 0x0;
label_goto_5:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_1b;
	//    .local v0, "detector":Lsun/nio/fs/AbstractFileTypeDetector;
	result = cVar0[cVar1]->implProbeContentType(file);
	//    .local v1, "result":Ljava/lang/String;
	if ( !(result) )  
		goto label_cond_18;
	if ( !(( result->isEmpty() ^ 0x1)) )  
		goto label_cond_18;
	return result;
	// 088    .line 527
label_cond_18:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_5;
	// 094    .line 533
	// 095    .end local v0    # "detector":Lsun/nio/fs/AbstractFileTypeDetector;
	// 096    .end local v1    # "result":Ljava/lang/String;
label_cond_1b:
	return 0x0;

}


