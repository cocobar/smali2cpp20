// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileSystem$LookupService$1.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.nio.file.attribute.GroupPrincipal.h"
#include "java.nio.file.attribute.UserPrincipal.h"
#include "sun.nio.fs.UnixFileSystem_S_LookupService_S_1.h"
#include "sun.nio.fs.UnixUserPrincipals.h"

// .method constructor <init>()V
sun::nio::fs::UnixFileSystem_S_LookupService_S_1::UnixFileSystem_S_LookupService_S_1()
{
	
	// 023    invoke-direct {p0}, Ljava/nio/file/attribute/UserPrincipalLookupService;-><init>()V
	return;

}
// .method public lookupPrincipalByGroupName(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;
std::shared_ptr<java::nio::file::attribute::GroupPrincipal> sun::nio::fs::UnixFileSystem_S_LookupService_S_1::lookupPrincipalByGroupName(std::shared_ptr<java::lang::String> group)
{
	
	//    .param p1, "group"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 035        value = {
	// 036            Ljava/io/IOException;
	// 037        }
	// 038    .end annotation
	return sun::nio::fs::UnixUserPrincipals::lookupGroup(group);

}
// .method public lookupPrincipalByName(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;
std::shared_ptr<java::nio::file::attribute::UserPrincipal> sun::nio::fs::UnixFileSystem_S_LookupService_S_1::lookupPrincipalByName(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 053        value = {
	// 054            Ljava/io/IOException;
	// 055        }
	// 056    .end annotation
	return sun::nio::fs::UnixUserPrincipals::lookupUser(name);

}


