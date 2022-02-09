// CPP L:\smali2cpp20\x64\Release\out\android\system\UnixSocketAddress.smali
#include "java2ctype.h"
#include "android.system.OsConstants.h"
#include "android.system.UnixSocketAddress.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.nio.charset.Charset.h"
#include "java.nio.charset.StandardCharsets.h"
#include "java.util.Arrays.h"

static android::system::UnixSocketAddress::NAMED_PATH_LENGTH;
static android::system::UnixSocketAddress::UNNAMED_PATH;
// .method static constructor <clinit>()V
void android::system::UnixSocketAddress::static_cinit()
{
	
	android::system::UnixSocketAddress::NAMED_PATH_LENGTH = android::system::OsConstants::UNIX_PATH_MAX;
	android::system::UnixSocketAddress::UNNAMED_PATH = std::make_shared<std::vector<unsigned char[]>>(0x0);
	return;

}
// .method private constructor <init>([B)V
android::system::UnixSocketAddress::UnixSocketAddress(std::shared_ptr<unsigned char[]> sun_path)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "sun_path"    # [B
	cVar0 = 0x0;
	// 045    invoke-direct {p0}, Ljava/net/SocketAddress;-><init>()V
	if ( sun_path )     
		goto label_cond_f;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("sun_path must not be null")));
	// throw
	throw cVar1;
	// 059    .line 44
label_cond_f:
	if ( sun_path->size() <= android::system::UnixSocketAddress::NAMED_PATH_LENGTH )
		goto label_cond_1d;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("sun_path exceeds the maximum length")));
	// throw
	throw cVar2;
	// 076    .line 48
label_cond_1d:
	if ( sun_path->size() )     
		goto label_cond_25;
	this->sun_path = android::system::UnixSocketAddress::UNNAMED_PATH;
label_goto_24:
	return;
	// 091    .line 51
label_cond_25:
	this->sun_path = std::make_shared<std::vector<unsigned char[]>>(sun_path->size());
	java::lang::System::arraycopy(sun_path, cVar0, this->sun_path, cVar0, sun_path->size());
	goto label_goto_24;

}
// .method public static createAbstract(Ljava/lang/String;)Landroid/system/UnixSocketAddress;
std::shared_ptr<android::system::UnixSocketAddress> android::system::UnixSocketAddress::createAbstract(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<unsigned char[]> nameBytes;
	std::shared<std::vector<unsigned char[]>> path;
	std::shared_ptr<android::system::UnixSocketAddress> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	nameBytes = name->getBytes(java::nio::charset::StandardCharsets::UTF_8);
	//    .local v0, "nameBytes":[B
	path = std::make_shared<std::vector<unsigned char[]>>(( nameBytes->size() + 0x1));
	//    .local v1, "path":[B
	java::lang::System::arraycopy(nameBytes, 0x0, path, 0x1, nameBytes->size());
	cVar0 = std::make_shared<android::system::UnixSocketAddress>(path);
	return cVar0;

}
// .method public static createFileSystem(Ljava/lang/String;)Landroid/system/UnixSocketAddress;
std::shared_ptr<android::system::UnixSocketAddress> android::system::UnixSocketAddress::createFileSystem(std::shared_ptr<java::lang::String> pathName)
{
	
	int cVar0;
	std::shared_ptr<unsigned char[]> pathNameBytes;
	std::shared<std::vector<unsigned char[]>> path;
	std::shared_ptr<android::system::UnixSocketAddress> cVar1;
	
	//    .param p0, "pathName"    # Ljava/lang/String;
	cVar0 = 0x0;
	pathNameBytes = pathName->getBytes(java::nio::charset::StandardCharsets::UTF_8);
	//    .local v1, "pathNameBytes":[B
	path = std::make_shared<std::vector<unsigned char[]>>(( pathNameBytes->size() + 0x1));
	//    .local v0, "path":[B
	java::lang::System::arraycopy(pathNameBytes, cVar0, path, cVar0, pathNameBytes->size());
	cVar1 = std::make_shared<android::system::UnixSocketAddress>(path);
	return cVar1;

}
// .method public static createUnnamed()Landroid/system/UnixSocketAddress;
std::shared_ptr<android::system::UnixSocketAddress> android::system::UnixSocketAddress::createUnnamed()
{
	
	std::shared_ptr<android::system::UnixSocketAddress> cVar0;
	
	cVar0 = std::make_shared<android::system::UnixSocketAddress>(android::system::UnixSocketAddress::UNNAMED_PATH);
	return cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::system::UnixSocketAddress::equals(std::shared_ptr<java::lang::Object> o)
{
	
	std::shared_ptr<android::system::UnixSocketAddress> that;
	
	//    .param p1, "o"    # Ljava/lang/Object;
	if ( this != o )
		goto label_cond_4;
	return 0x1;
	// 212    .line 100
label_cond_4:
	if ( !(o) )  
		goto label_cond_10;
	if ( this->getClass() == o->getClass() )
		goto label_cond_12;
label_cond_10:
	return 0x0;
label_cond_12:
	that = o;
	that->checkCast("android::system::UnixSocketAddress");
	//    .local v0, "that":Landroid/system/UnixSocketAddress;
	return java::util::Arrays::equals(this->sun_path, that->sun_path);

}
// .method public getSunPath()[B
unsigned char android::system::UnixSocketAddress::getSunPath()
{
	
	int cVar0;
	std::shared<std::vector<unsigned char[]>> sunPathCopy;
	
	cVar0 = 0x0;
	if ( this->sun_path->size() )     
		goto label_cond_9;
	return this->sun_path;
	// 269    .line 90
label_cond_9:
	sunPathCopy = std::make_shared<std::vector<unsigned char[]>>(this->sun_path->size());
	//    .local v0, "sunPathCopy":[B
	java::lang::System::arraycopy(this->sun_path, cVar0, sunPathCopy, cVar0, this->sun_path->size());
	return sunPathCopy;

}
// .method public hashCode()I
int android::system::UnixSocketAddress::hashCode()
{
	
	return java::util::Arrays::hashCode(this->sun_path);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::UnixSocketAddress::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("UnixSocketAddress[sun_path=")))->append(java::util::Arrays::toString(this->sun_path))->append(0x5d)->toString();

}


