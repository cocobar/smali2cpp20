// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileSystem$3.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.nio.file.Path.h"
#include "java.util.regex.Matcher.h"
#include "java.util.regex.Pattern.h"
#include "sun.nio.fs.UnixFileSystem_S_3.h"
#include "sun.nio.fs.UnixFileSystem.h"

// .method constructor <init>(Lsun/nio/fs/UnixFileSystem;Ljava/util/regex/Pattern;)V
sun::nio::fs::UnixFileSystem_S_3::UnixFileSystem_S_3(std::shared_ptr<sun::nio::fs::UnixFileSystem> this_S_0,std::shared_ptr<java::util::regex::Pattern> var1)
{
	
	//    .param p1, "this$0"    # Lsun/nio/fs/UnixFileSystem;
	this->this_S_0 = this_S_0;
	this->val_S_pattern = var1;
	// 038    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public matches(Ljava/nio/file/Path;)Z
bool sun::nio::fs::UnixFileSystem_S_3::matches(std::shared_ptr<java::nio::file::Path> path)
{
	
	//    .param p1, "path"    # Ljava/nio/file/Path;
	return this->val_S_pattern->matcher(path->toString())->matches();

}


