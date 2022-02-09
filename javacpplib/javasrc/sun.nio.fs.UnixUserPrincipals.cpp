// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixUserPrincipals.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Integer.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimePermission.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.nio.file.attribute.GroupPrincipal.h"
#include "java.nio.file.attribute.UserPrincipal.h"
#include "java.nio.file.attribute.UserPrincipalNotFoundException.h"
#include "sun.nio.fs.UnixException.h"
#include "sun.nio.fs.UnixNativeDispatcher.h"
#include "sun.nio.fs.UnixUserPrincipals_S_Group.h"
#include "sun.nio.fs.UnixUserPrincipals_S_User.h"
#include "sun.nio.fs.UnixUserPrincipals.h"
#include "sun.nio.fs.Util.h"

static sun::nio::fs::UnixUserPrincipals::SPECIAL_EVERYONE;
static sun::nio::fs::UnixUserPrincipals::SPECIAL_GROUP;
static sun::nio::fs::UnixUserPrincipals::SPECIAL_OWNER;
// .method static constructor <clinit>()V
void sun::nio::fs::UnixUserPrincipals::static_cinit()
{
	
	sun::nio::fs::UnixUserPrincipals::SPECIAL_OWNER = sun::nio::fs::UnixUserPrincipals::createSpecial(std::make_shared<java::lang::String>(std::make_shared<char[]>("OWNER@")));
	sun::nio::fs::UnixUserPrincipals::SPECIAL_GROUP = sun::nio::fs::UnixUserPrincipals::createSpecial(std::make_shared<java::lang::String>(std::make_shared<char[]>("GROUP@")));
	sun::nio::fs::UnixUserPrincipals::SPECIAL_EVERYONE = sun::nio::fs::UnixUserPrincipals::createSpecial(std::make_shared<java::lang::String>(std::make_shared<char[]>("EVERYONE@")));
	return;

}
// .method constructor <init>()V
sun::nio::fs::UnixUserPrincipals::UnixUserPrincipals()
{
	
	// 064    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static createSpecial(Ljava/lang/String;)Lsun/nio/fs/UnixUserPrincipals$User;
std::shared_ptr<sun::nio::fs::UnixUserPrincipals_S_User> sun::nio::fs::UnixUserPrincipals::createSpecial(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::nio::fs::UnixUserPrincipals_S_User> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = std::make_shared<sun::nio::fs::UnixUserPrincipals_S_User>(-0x1, name);
	return cVar0;

}
// .method static fromGid(I)Lsun/nio/fs/UnixUserPrincipals$Group;
std::shared_ptr<sun::nio::fs::UnixUserPrincipals_S_Group> sun::nio::fs::UnixUserPrincipals::fromGid(int gid)
{
	
	std::shared_ptr<sun::nio::fs::UnixUserPrincipals_S_Group> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "gid"    # I
	0x0;
	//    .local v0, "name":Ljava/lang/String;
	try {
	//label_try_start_1:
	//label_try_end_8:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_1 .. :try_end_8} :catch_f
	//    .local v0, "name":Ljava/lang/String;
label_goto_9:
	cVar0 = std::make_shared<sun::nio::fs::UnixUserPrincipals_S_Group>(gid, name);
	return cVar0;
	// 114    .line 130
	// 115    .local v0, "name":Ljava/lang/String;
label_catch_f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Lsun/nio/fs/UnixException;
	//    .local v0, "name":Ljava/lang/String;
	goto label_goto_9;

}
// .method static fromUid(I)Lsun/nio/fs/UnixUserPrincipals$User;
std::shared_ptr<sun::nio::fs::UnixUserPrincipals_S_User> sun::nio::fs::UnixUserPrincipals::fromUid(int uid)
{
	
	std::shared_ptr<sun::nio::fs::UnixUserPrincipals_S_User> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "uid"    # I
	0x0;
	//    .local v0, "name":Ljava/lang/String;
	try {
	//label_try_start_1:
	//label_try_end_8:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_1 .. :try_end_8} :catch_f
	//    .local v0, "name":Ljava/lang/String;
label_goto_9:
	cVar0 = std::make_shared<sun::nio::fs::UnixUserPrincipals_S_User>(uid, name);
	return cVar0;
	// 159    .line 119
	// 160    .local v0, "name":Ljava/lang/String;
label_catch_f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Lsun/nio/fs/UnixException;
	//    .local v0, "name":Ljava/lang/String;
	goto label_goto_9;

}
// .method static lookupGroup(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;
std::shared_ptr<java::nio::file::attribute::GroupPrincipal> sun::nio::fs::UnixUserPrincipals::lookupGroup(std::shared_ptr<java::lang::String> group)
{
	
	std::shared_ptr<sun::nio::fs::UnixUserPrincipals_S_Group> cVar0;
	
	//    .param p0, "group"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 178        value = {
	// 179            Ljava/io/IOException;
	// 180        }
	// 181    .end annotation
	//    .local v0, "gid":I
	cVar0 = std::make_shared<sun::nio::fs::UnixUserPrincipals_S_Group>(sun::nio::fs::UnixUserPrincipals::lookupName(group, 0x1), group);
	return cVar0;

}
// .method private static lookupName(Ljava/lang/String;Z)I
int sun::nio::fs::UnixUserPrincipals::lookupName(std::shared_ptr<java::lang::String> name,bool isGroup)
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::shared_ptr<java::lang::RuntimePermission> cVar0;
	int id;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::nio::file::attribute::UserPrincipalNotFoundException> cVar3;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .param p1, "isGroup"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 205        value = {
	// 206            Ljava/io/IOException;
	// 207        }
	// 208    .end annotation
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v2, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_11;
	cVar0 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("lookupUserInformation")));
	sm->checkPermission(cVar0);
label_cond_11:
	id = -0x1;
	//    .local v0, "id":I
	if ( !(isGroup) )  
		goto label_cond_20;
	try {
	//label_try_start_14:
	//label_try_end_17:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_14 .. :try_end_17} :catch_25
	id = sun::nio::fs::UnixNativeDispatcher::getgrnam(name);
label_goto_18:
	if ( id != -0x1 )
		goto label_cond_1f;
	try {
	//label_try_start_1b:
	//label_try_end_1e:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_48;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_1b .. :try_end_1e} :catch_48
	id = java::lang::Integer::parseInt(name);
label_cond_1f:
	return id;
	// 262    .line 146
label_cond_20:
	try {
	//label_try_start_20:
	//label_try_end_23:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_20 .. :try_end_23} :catch_25
	id = sun::nio::fs::UnixNativeDispatcher::getpwnam(name);
	goto label_goto_18;
	// 273    .line 147
label_catch_25:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "x":Lsun/nio/fs/UnixException;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": ")))->append(getCatchExcetionFromList->errorString())->toString());
	// throw
	throw cVar1;
	// 311    .line 154
	// 312    .end local v3    # "x":Lsun/nio/fs/UnixException;
label_catch_48:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ignore":Ljava/lang/NumberFormatException;
	cVar3 = std::make_shared<java::nio::file::attribute::UserPrincipalNotFoundException>(name);
	// throw
	throw cVar3;

}
// .method static lookupUser(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;
std::shared_ptr<java::nio::file::attribute::UserPrincipal> sun::nio::fs::UnixUserPrincipals::lookupUser(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::nio::fs::UnixUserPrincipals_S_User> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 329        value = {
	// 330            Ljava/io/IOException;
	// 331        }
	// 332    .end annotation
	if ( !(name->equals(sun::nio::fs::UnixUserPrincipals::SPECIAL_OWNER->getName())) )  
		goto label_cond_f;
	return sun::nio::fs::UnixUserPrincipals::SPECIAL_OWNER;
	// 353    .line 166
label_cond_f:
	if ( !(name->equals(sun::nio::fs::UnixUserPrincipals::SPECIAL_GROUP->getName())) )  
		goto label_cond_1e;
	return sun::nio::fs::UnixUserPrincipals::SPECIAL_GROUP;
	// 372    .line 168
label_cond_1e:
	if ( !(name->equals(sun::nio::fs::UnixUserPrincipals::SPECIAL_EVERYONE->getName())) )  
		goto label_cond_2d;
	return sun::nio::fs::UnixUserPrincipals::SPECIAL_EVERYONE;
	// 391    .line 170
label_cond_2d:
	//    .local v0, "uid":I
	cVar0 = std::make_shared<sun::nio::fs::UnixUserPrincipals_S_User>(sun::nio::fs::UnixUserPrincipals::lookupName(name, 0x0), name);
	return cVar0;

}


