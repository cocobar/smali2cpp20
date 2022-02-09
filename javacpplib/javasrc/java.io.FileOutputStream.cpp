// CPP L:\smali2cpp20\x64\Release\out\java\io\FileOutputStream.smali
#include "java2ctype.h"
#include "dalvik.system.BlockGuard_S_Policy.h"
#include "dalvik.system.BlockGuard.h"
#include "dalvik.system.CloseGuard.h"
#include "java.io.File.h"
#include "java.io.FileDescriptor.h"
#include "java.io.FileNotFoundException.h"
#include "java.io.FileOutputStream.h"
#include "java.io.IOException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.nio.channels.FileChannel.h"
#include "libcore.io.IoBridge.h"
#include "libcore.io.IoTracker.h"
#include "sun.nio.ch.FileChannelImpl.h"

// .method public constructor <init>(Ljava/io/File;)V
java::io::FileOutputStream::FileOutputStream(std::shared_ptr<java::io::File> file)
{
	
	//    .param p1, "file"    # Ljava/io/File;
	//    .annotation system Ldalvik/annotation/Throws;
	// 031        value = {
	// 032            Ljava/io/FileNotFoundException;
	// 033        }
	// 034    .end annotation
	java::io::FileOutputStream::(file, 0x0);
	return;

}
// .method public constructor <init>(Ljava/io/File;Z)V
java::io::FileOutputStream::FileOutputStream(std::shared_ptr<java::io::File> file,bool append)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<libcore::io::IoTracker> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::SecurityManager> security;
	std::shared_ptr<java::lang::NullPointerException> cVar3;
	std::shared_ptr<java::io::FileNotFoundException> cVar4;
	std::shared_ptr<java::io::FileDescriptor> cVar5;
	
	//    .param p1, "file"    # Ljava/io/File;
	//    .param p2, "append"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 051        value = {
	// 052            Ljava/io/FileNotFoundException;
	// 053        }
	// 054    .end annotation
	// 058    invoke-direct {p0}, Ljava/io/OutputStream;-><init>()V
	cVar0 = std::make_shared<java::lang::Object>();
	this->closeLock = cVar0;
	this->closed = 0x0;
	this->guard = dalvik::system::CloseGuard::get({const[class].FS-Param});
	cVar1 = std::make_shared<libcore::io::IoTracker>();
	this->tracker = cVar1;
	if ( !(file) )  
		goto label_cond_31;
	cVar2 = file->getPath();
label_goto_20:
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v1, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_29;
	security->checkWrite(cVar2);
label_cond_29:
	if ( cVar2 )     
		goto label_cond_33;
	cVar3 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar3;
	// 117    .line 206
	// 118    .end local v1    # "security":Ljava/lang/SecurityManager;
label_cond_31:
	cVar2 = 0x0;
	//    .local v0, "name":Ljava/lang/String;
	goto label_goto_20;
	// 125    .line 214
	// 126    .end local v0    # "name":Ljava/lang/String;
	// 127    .restart local v1    # "security":Ljava/lang/SecurityManager;
label_cond_33:
	if ( !(file->isInvalid()) )  
		goto label_cond_42;
	cVar4 = std::make_shared<java::io::FileNotFoundException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid file path")));
	// throw
	throw cVar4;
	// 144    .line 217
label_cond_42:
	cVar5 = std::make_shared<java::io::FileDescriptor>();
	this->fd = cVar5;
	this->append = append;
	this->path = cVar2;
	this->isFdOwner = 0x1;
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onWriteToDisk();
	this->open(cVar2, append);
	this->guard->open(std::make_shared<java::lang::String>(std::make_shared<char[]>("close")));
	return;

}
// .method public constructor <init>(Ljava/io/FileDescriptor;)V
java::io::FileOutputStream::FileOutputStream(std::shared_ptr<java::io::FileDescriptor> fdObj)
{
	
	//    .param p1, "fdObj"    # Ljava/io/FileDescriptor;
	java::io::FileOutputStream::(fdObj, 0x0);
	return;

}
// .method public constructor <init>(Ljava/io/FileDescriptor;Z)V
java::io::FileOutputStream::FileOutputStream(std::shared_ptr<java::io::FileDescriptor> fdObj,bool isFdOwner)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<libcore::io::IoTracker> cVar2;
	std::shared_ptr<java::lang::NullPointerException> cVar3;
	
	//    .param p1, "fdObj"    # Ljava/io/FileDescriptor;
	//    .param p2, "isFdOwner"    # Z
	cVar0 = 0x0;
	// 209    invoke-direct {p0}, Ljava/io/OutputStream;-><init>()V
	cVar1 = std::make_shared<java::lang::Object>();
	this->closeLock = cVar1;
	this->closed = cVar0;
	this->guard = dalvik::system::CloseGuard::get({const[class].FS-Param});
	cVar2 = std::make_shared<libcore::io::IoTracker>();
	this->tracker = cVar2;
	if ( fdObj )     
		goto label_cond_26;
	cVar3 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("fdObj == null")));
	// throw
	throw cVar3;
	// 247    .line 265
label_cond_26:
	this->fd = fdObj;
	this->path = 0x0;
	this->append = cVar0;
	this->isFdOwner = isFdOwner;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::FileOutputStream::FileOutputStream(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::File> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 268        value = {
	// 269            Ljava/io/FileNotFoundException;
	// 270        }
	// 271    .end annotation
	cVar1 = 0x0;
	if ( !(name) )  
		goto label_cond_8;
	cVar1 = std::make_shared<java::io::File>(name);
label_cond_8:
	java::io::FileOutputStream::(cVar1, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Z)V
java::io::FileOutputStream::FileOutputStream(std::shared_ptr<java::lang::String> name,bool append)
{
	
	std::shared_ptr<java::io::File> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "append"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 297        value = {
	// 298            Ljava/io/FileNotFoundException;
	// 299        }
	// 300    .end annotation
	cVar1 = 0x0;
	if ( !(name) )  
		goto label_cond_8;
	cVar1 = std::make_shared<java::io::File>(name);
label_cond_8:
	java::io::FileOutputStream::(cVar1, append);
	return;

}
// .method private open(Ljava/lang/String;Z)V
void java::io::FileOutputStream::open(std::shared_ptr<java::lang::String> name,bool append)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "append"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 324        value = {
	// 325            Ljava/io/FileNotFoundException;
	// 326        }
	// 327    .end annotation
	this->open0(name, append);
	return;

}
// .method private native open0(Ljava/lang/String;Z)V
void java::io::FileOutputStream::open0(std::shared_ptr<java::lang::String> var0,bool var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 339        value = {
	// 340            Ljava/io/FileNotFoundException;
	// 341        }
	// 342    .end annotation

}
// .method public close()V
void java::io::FileOutputStream::close()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 350        value = {
	// 351            Ljava/io/IOException;
	// 352        }
	// 353    .end annotation
	cVar0 = this->closeLock;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_5:
	}
	catch (...){
		goto label_catchall_25;
	}
	//    .catchall {:try_start_3 .. :try_end_5} :catchall_25
	if ( !(this->closed) )  
		goto label_cond_9;
	cVar0->monitor_exit();
	return;
	// 374    .line 347
label_cond_9:
	try {
	//label_try_start_a:
	this->closed = 0x1;
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_25;
	}
	//    .catchall {:try_start_a .. :try_end_c} :catchall_25
	cVar0->monitor_exit();
	this->guard->close();
	if ( !(this->channel) )  
		goto label_cond_1b;
	this->channel->close();
label_cond_1b:
	if ( !(this->isFdOwner) )  
		goto label_cond_24;
	libcore::io::IoBridge::closeAndSignalBlockedThreads(this->fd);
label_cond_24:
	return;
	// 415    .line 343
label_catchall_25:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method protected finalize()V
void java::io::FileOutputStream::finalize()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 427        value = {
	// 428            Ljava/io/IOException;
	// 429        }
	// 430    .end annotation
	if ( !(this->guard) )  
		goto label_cond_9;
	this->guard->warnIfOpen();
label_cond_9:
	if ( !(this->fd) )  
		goto label_cond_1c;
	if ( this->fd == java::io::FileDescriptor::out )
		goto label_cond_19;
	if ( this->fd != java::io::FileDescriptor::err )
		goto label_cond_1d;
label_cond_19:
	this->flush();
label_cond_1c:
label_goto_1c:
	return;
	// 471    .line 427
label_cond_1d:
	this->close();
	goto label_goto_1c;

}
// .method public getChannel()Ljava/nio/channels/FileChannel;
std::shared_ptr<java::nio::channels::FileChannel> java::io::FileOutputStream::getChannel()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->channel )     
		goto label_cond_14;
	this->channel = sun::nio::ch::FileChannelImpl::open(this->fd, this->path, 0x0, 0x1, this->append, this);
label_cond_14:
	//label_try_end_16:
	}
	catch (...){
		goto label_catchall_18;
	}
	//    .catchall {:try_start_1 .. :try_end_16} :catchall_18
	this->monitor_exit();
	return this->channel;
	// 520    .line 402
label_catchall_18:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public final getFD()Ljava/io/FileDescriptor;
std::shared_ptr<java::io::FileDescriptor> java::io::FileOutputStream::getFD()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 532        value = {
	// 533            Ljava/io/IOException;
	// 534        }
	// 535    .end annotation
	if ( !(this->fd) )  
		goto label_cond_7;
	return this->fd;
	// 548    .line 381
label_cond_7:
	cVar0 = std::make_shared<java::io::IOException>();
	// throw
	throw cVar0;

}
// .method public write(I)V
void java::io::FileOutputStream::write(int b)
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<unsigned char[]>> cVar2;
	
	//    .param p1, "b"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 561        value = {
	// 562            Ljava/io/IOException;
	// 563        }
	// 564    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	cVar2[cVar1] = (unsigned char)(b);
	this->write(cVar2, cVar1, cVar0);
	return;

}
// .method public write([B)V
void java::io::FileOutputStream::write(std::shared_ptr<unsigned char[]> b)
{
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 588        value = {
	// 589            Ljava/io/IOException;
	// 590        }
	// 591    .end annotation
	this->write(b, 0x0, b->size());
	return;

}
// .method public write([BII)V
void java::io::FileOutputStream::write(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 611        value = {
	// 612            Ljava/io/IOException;
	// 613        }
	// 614    .end annotation
	if ( !(this->closed) )  
		goto label_cond_f;
	if ( len <= 0 )
		goto label_cond_f;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream Closed")));
	// throw
	throw cVar0;
	// 633    .line 325
label_cond_f:
	this->tracker->trackIo(len);
	libcore::io::IoBridge::write(this->fd, b, off, len);
	return;

}


