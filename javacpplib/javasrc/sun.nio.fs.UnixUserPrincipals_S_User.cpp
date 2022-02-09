// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixUserPrincipals$User.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.nio.fs.UnixUserPrincipals_S_User.h"

// .method constructor <init>(ILjava/lang/String;)V
sun::nio::fs::UnixUserPrincipals_S_User::UnixUserPrincipals_S_User(int id,std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "id"    # I
	//    .param p2, "name"    # Ljava/lang/String;
	sun::nio::fs::UnixUserPrincipals_S_User::(id, 0x0, name);
	return;

}
// .method private constructor <init>(IZLjava/lang/String;)V
sun::nio::fs::UnixUserPrincipals_S_User::UnixUserPrincipals_S_User(int id,bool isGroup,std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "id"    # I
	//    .param p2, "isGroup"    # Z
	//    .param p3, "name"    # Ljava/lang/String;
	// 052    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->id = id;
	this->isGroup = isGroup;
	this->name = name;
	return;

}
// .method synthetic constructor <init>(IZLjava/lang/String;Lsun/nio/fs/UnixUserPrincipals$User;)V
sun::nio::fs::UnixUserPrincipals_S_User::UnixUserPrincipals_S_User(int id,bool isGroup,std::shared_ptr<java::lang::String> name,std::shared_ptr<sun::nio::fs::UnixUserPrincipals_S_User> _this3)
{
	
	//    .param p1, "id"    # I
	//    .param p2, "isGroup"    # Z
	//    .param p3, "name"    # Ljava/lang/String;
	//    .param p4, "-this3"    # Lsun/nio/fs/UnixUserPrincipals$User;
	sun::nio::fs::UnixUserPrincipals_S_User::(id, isGroup, name);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::nio::fs::UnixUserPrincipals_S_User::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	int cVar2;
	std::shared_ptr<sun::nio::fs::UnixUserPrincipals_S_User> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = -0x1;
	if ( obj != this )
		goto label_cond_6;
	return cVar0;
	// 099    .line 88
label_cond_6:
	if ( obj->instanceOf("sun::nio::fs::UnixUserPrincipals_S_User") )     
		goto label_cond_b;
	return cVar1;
label_cond_b:
	other = obj;
	other->checkCast("sun::nio::fs::UnixUserPrincipals_S_User");
	//    .local v0, "other":Lsun/nio/fs/UnixUserPrincipals$User;
	if ( this->id != other->id )
		goto label_cond_1a;
	if ( this->isGroup == other->isGroup )
		goto label_cond_1b;
label_cond_1a:
	return cVar1;
	// 133    .line 96
label_cond_1b:
	if ( this->id != cVar2 )
		goto label_cond_2c;
	if ( other->id != cVar2 )
		goto label_cond_2c;
	return this->name->equals(other->name);
	// 154    .line 99
label_cond_2c:
	return cVar0;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixUserPrincipals_S_User::getName()
{
	
	return this->name;

}
// .method gid()I
int sun::nio::fs::UnixUserPrincipals_S_User::gid()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( !(this->isGroup) )  
		goto label_cond_7;
	return this->id;
	// 183    .line 67
label_cond_7:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;

}
// .method public hashCode()I
int sun::nio::fs::UnixUserPrincipals_S_User::hashCode()
{
	
	int cVar0;
	
	if ( this->id == -0x1 )
		goto label_cond_8;
	cVar0 = this->id;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = this->name->hashCode();
	goto label_goto_7;

}
// .method isSpecial()Z
bool sun::nio::fs::UnixUserPrincipals_S_User::isSpecial()
{
	
	bool cVar0;
	
	if ( this->id != -0x1 )
		goto label_cond_7;
	cVar0 = 0x1;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = 0x0;
	goto label_goto_6;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixUserPrincipals_S_User::toString()
{
	
	return this->name;

}
// .method uid()I
int sun::nio::fs::UnixUserPrincipals_S_User::uid()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( !(this->isGroup) )  
		goto label_cond_a;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 266    .line 61
label_cond_a:
	return this->id;

}


