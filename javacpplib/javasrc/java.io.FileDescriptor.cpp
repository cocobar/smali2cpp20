// CPP L:\smali2cpp20\x64\Release\out\java\io\FileDescriptor.smali
#include "java2ctype.h"
#include "android.system.ErrnoException.h"
#include "android.system.Os.h"
#include "android.system.OsConstants.h"
#include "java.io.FileDescriptor_S_1.h"
#include "java.io.FileDescriptor.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.Throwable.h"
#include "sun.misc.SharedSecrets.h"

static java::io::FileDescriptor::err;
static java::io::FileDescriptor::in;
static java::io::FileDescriptor::out;
// .method static synthetic -get0(Ljava/io/FileDescriptor;)I
int java::io::FileDescriptor::_get0(std::shared_ptr<java::io::FileDescriptor> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/FileDescriptor;
	return _this->descriptor;

}
// .method static synthetic -set0(Ljava/io/FileDescriptor;I)I
int java::io::FileDescriptor::_set0(std::shared_ptr<java::io::FileDescriptor> _this,int _value)
{
	
	//    .param p0, "-this"    # Ljava/io/FileDescriptor;
	//    .param p1, "-value"    # I
	_this->descriptor = _value;
	return _value;

}
// .method static constructor <clinit>()V
void java::io::FileDescriptor::static_cinit()
{
	
	std::shared_ptr<java::io::FileDescriptor_S_1> cVar0;
	
	java::io::FileDescriptor::in = java::io::FileDescriptor::dupFd(0x0);
	java::io::FileDescriptor::out = java::io::FileDescriptor::dupFd(0x1);
	java::io::FileDescriptor::err = java::io::FileDescriptor::dupFd(0x2);
	cVar0 = std::make_shared<java::io::FileDescriptor_S_1>();
	sun::misc::SharedSecrets::setJavaIOFileDescriptorAccess(cVar0);
	return;

}
// .method public constructor <init>()V
java::io::FileDescriptor::FileDescriptor()
{
	
	// 096    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->descriptor = -0x1;
	return;

}
// .method private constructor <init>(I)V
java::io::FileDescriptor::FileDescriptor(int descriptor)
{
	
	//    .param p1, "descriptor"    # I
	// 113    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->descriptor = descriptor;
	return;

}
// .method private static dupFd(I)Ljava/io/FileDescriptor;
std::shared_ptr<java::io::FileDescriptor> java::io::FileDescriptor::dupFd(int fd)
{
	
	std::shared_ptr<java::lang::RuntimeException> cVar2;
	std::shared_ptr<java::io::FileDescriptor> cVar0;
	std::shared_ptr<java::io::FileDescriptor> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "fd"    # I
	try {
	//label_try_start_0:
	cVar1 = std::make_shared<java::io::FileDescriptor>(fd);
	cVar0 = std::make_shared<java::io::FileDescriptor>(android::system::Os::fcntlInt(cVar1, android::system::OsConstants::F_DUPFD_CLOEXEC, 0x0));
	//label_try_end_11:
	}
	catch (android::system::ErrnoException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Landroid/system/ErrnoException; {:try_start_0 .. :try_end_11} :catch_12
	return cVar0;
	// 149    .line 175
label_catch_12:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Landroid/system/ErrnoException;
	cVar2 = std::make_shared<java::lang::RuntimeException>(getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method public final getInt$()I
int java::io::FileDescriptor::getInt_S_()
{
	
	return this->descriptor;

}
// .method public isSocket$()Z
bool java::io::FileDescriptor::isSocket_S_()
{
	
	return java::io::FileDescriptor::isSocket(this->descriptor);

}
// .method public final setInt$(I)V
void java::io::FileDescriptor::setInt_S_(int fd)
{
	
	//    .param p1, "fd"    # I
	this->descriptor = fd;
	return;

}
// .method public native sync()V
void java::io::FileDescriptor::sync()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 205        value = {
	// 206            Ljava/io/SyncFailedException;
	// 207        }
	// 208    .end annotation

}
// .method public valid()Z
bool java::io::FileDescriptor::valid()
{
	
	bool cVar0;
	
	if ( this->descriptor == -0x1 )
		goto label_cond_7;
	cVar0 = 0x1;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = 0x0;
	goto label_goto_6;

}


