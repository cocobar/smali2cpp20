// CPP L:\smali2cpp20\x64\Release\out\java\io\FileInputStream.smali
#include "java2ctype.h"
#include "dalvik.system.BlockGuard_S_Policy.h"
#include "dalvik.system.BlockGuard.h"
#include "dalvik.system.CloseGuard.h"
#include "java.io.File.h"
#include "java.io.FileDescriptor.h"
#include "java.io.FileInputStream_S_UseManualSkipException.h"
#include "java.io.FileInputStream.h"
#include "java.io.FileNotFoundException.h"
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
java::io::FileInputStream::FileInputStream(std::shared_ptr<java::io::File> file)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<libcore::io::IoTracker> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::SecurityManager> security;
	std::shared_ptr<java::lang::NullPointerException> cVar3;
	std::shared_ptr<java::io::FileNotFoundException> cVar4;
	std::shared_ptr<java::io::FileDescriptor> cVar5;
	
	//    .param p1, "file"    # Ljava/io/File;
	//    .annotation system Ldalvik/annotation/Throws;
	// 037        value = {
	// 038            Ljava/io/FileNotFoundException;
	// 039        }
	// 040    .end annotation
	// 046    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->channel = 0x0;
	cVar0 = std::make_shared<java::lang::Object>();
	this->closeLock = cVar0;
	this->closed = 0x0;
	this->guard = dalvik::system::CloseGuard::get({const[class].FS-Param});
	cVar1 = std::make_shared<libcore::io::IoTracker>();
	this->tracker = cVar1;
	if ( !(file) )  
		goto label_cond_34;
	cVar2 = file->getPath();
label_goto_23:
	security = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v1, "security":Ljava/lang/SecurityManager;
	if ( !(security) )  
		goto label_cond_2c;
	security->checkRead(cVar2);
label_cond_2c:
	if ( cVar2 )     
		goto label_cond_36;
	cVar3 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar3;
	// 108    .line 134
	// 109    .end local v1    # "security":Ljava/lang/SecurityManager;
label_cond_34:
	cVar2 = 0x0;
	//    .local v0, "name":Ljava/lang/String;
	goto label_goto_23;
	// 116    .line 142
	// 117    .end local v0    # "name":Ljava/lang/String;
	// 118    .restart local v1    # "security":Ljava/lang/SecurityManager;
label_cond_36:
	if ( !(file->isInvalid()) )  
		goto label_cond_45;
	cVar4 = std::make_shared<java::io::FileNotFoundException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid file path")));
	// throw
	throw cVar4;
	// 135    .line 145
label_cond_45:
	cVar5 = std::make_shared<java::io::FileDescriptor>();
	this->fd = cVar5;
	this->isFdOwner = 0x1;
	this->path = cVar2;
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onReadFromDisk();
	this->open(cVar2);
	this->guard->open(std::make_shared<java::lang::String>(std::make_shared<char[]>("close")));
	return;

}
// .method public constructor <init>(Ljava/io/FileDescriptor;)V
java::io::FileInputStream::FileInputStream(std::shared_ptr<java::io::FileDescriptor> fdObj)
{
	
	//    .param p1, "fdObj"    # Ljava/io/FileDescriptor;
	java::io::FileInputStream::(fdObj, 0x0);
	return;

}
// .method public constructor <init>(Ljava/io/FileDescriptor;Z)V
java::io::FileInputStream::FileInputStream(std::shared_ptr<java::io::FileDescriptor> fdObj,bool isFdOwner)
{
	
	std::shared_ptr<java::nio::channels::FileChannel> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<libcore::io::IoTracker> cVar2;
	std::shared_ptr<java::lang::NullPointerException> cVar3;
	
	//    .param p1, "fdObj"    # Ljava/io/FileDescriptor;
	//    .param p2, "isFdOwner"    # Z
	cVar0 = 0x0;
	// 195    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->channel = cVar0;
	cVar1 = std::make_shared<java::lang::Object>();
	this->closeLock = cVar1;
	this->closed = 0x0;
	this->guard = dalvik::system::CloseGuard::get({const[class].FS-Param});
	cVar2 = std::make_shared<libcore::io::IoTracker>();
	this->tracker = cVar2;
	if ( fdObj )     
		goto label_cond_28;
	cVar3 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("fdObj == null")));
	// throw
	throw cVar3;
	// 238    .line 183
label_cond_28:
	this->fd = fdObj;
	this->isFdOwner = isFdOwner;
	this->path = cVar0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::FileInputStream::FileInputStream(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::File> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 256        value = {
	// 257            Ljava/io/FileNotFoundException;
	// 258        }
	// 259    .end annotation
	cVar1 = 0x0;
	if ( !(name) )  
		goto label_cond_8;
	cVar1 = std::make_shared<java::io::File>(name);
label_cond_8:
	java::io::FileInputStream::(cVar1);
	return;

}
// .method private native available0()I
int java::io::FileInputStream::available0()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 280        value = {
	// 281            Ljava/io/IOException;
	// 282        }
	// 283    .end annotation

}
// .method private open(Ljava/lang/String;)V
void java::io::FileInputStream::open(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 290        value = {
	// 291            Ljava/io/FileNotFoundException;
	// 292        }
	// 293    .end annotation
	this->open0(name);
	return;

}
// .method private native open0(Ljava/lang/String;)V
void java::io::FileInputStream::open0(std::shared_ptr<java::lang::String> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 305        value = {
	// 306            Ljava/io/FileNotFoundException;
	// 307        }
	// 308    .end annotation

}
// .method private native skip0(J)J
long long java::io::FileInputStream::skip0(long long var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 313        value = {
	// 314            Ljava/io/IOException;,
	// 315            Ljava/io/FileInputStream$UseManualSkipException;
	// 316        }
	// 317    .end annotation

}
// .method public available()I
int java::io::FileInputStream::available()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 325        value = {
	// 326            Ljava/io/IOException;
	// 327        }
	// 328    .end annotation
	if ( !(this->closed) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream Closed")));
	// throw
	throw cVar0;
	// 345    .line 324
label_cond_d:
	return this->available0();

}
// .method public close()V
void java::io::FileInputStream::close()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 357        value = {
	// 358            Ljava/io/IOException;
	// 359        }
	// 360    .end annotation
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
	// 381    .line 346
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
	// 422    .line 342
label_catchall_25:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method protected finalize()V
void java::io::FileInputStream::finalize()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 434        value = {
	// 435            Ljava/io/IOException;
	// 436        }
	// 437    .end annotation
	if ( !(this->guard) )  
		goto label_cond_9;
	this->guard->warnIfOpen();
label_cond_9:
	if ( !(this->fd) )  
		goto label_cond_16;
	if ( this->fd == java::io::FileDescriptor::in )
		goto label_cond_16;
	this->close();
label_cond_16:
	return;

}
// .method public getChannel()Ljava/nio/channels/FileChannel;
std::shared_ptr<java::nio::channels::FileChannel> java::io::FileInputStream::getChannel()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->channel )     
		goto label_cond_11;
	this->channel = sun::nio::ch::FileChannelImpl::open(this->fd, this->path, 0x1, 0x0, this);
label_cond_11:
	//label_try_end_13:
	}
	catch (...){
		goto label_catchall_15;
	}
	//    .catchall {:try_start_1 .. :try_end_13} :catchall_15
	this->monitor_exit();
	return this->channel;
	// 508    .line 399
label_catchall_15:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public final getFD()Ljava/io/FileDescriptor;
std::shared_ptr<java::io::FileDescriptor> java::io::FileInputStream::getFD()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 520        value = {
	// 521            Ljava/io/IOException;
	// 522        }
	// 523    .end annotation
	if ( !(this->fd) )  
		goto label_cond_7;
	return this->fd;
	// 536    .line 379
label_cond_7:
	cVar0 = std::make_shared<java::io::IOException>();
	// throw
	throw cVar0;

}
// .method public read()I
int java::io::FileInputStream::read()
{
	
	int cVar0;
	int cVar1;
	int cVar3;
	std::shared<std::vector<unsigned char[]>> b;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 548        value = {
	// 549            Ljava/io/IOException;
	// 550        }
	// 551    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar3 = -0x1;
	b = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	//    .local v0, "b":[B
	if ( this->read(b, cVar1, cVar0) == cVar3 )
		goto label_cond_f;
	cVar3 = ( b[cVar1] & 0xff);
label_cond_f:
	return cVar3;

}
// .method public read([B)I
int java::io::FileInputStream::read(std::shared_ptr<unsigned char[]> b)
{
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 583        value = {
	// 584            Ljava/io/IOException;
	// 585        }
	// 586    .end annotation
	return this->read(b, 0x0, b->size());

}
// .method public read([BII)I
int java::io::FileInputStream::read(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 607        value = {
	// 608            Ljava/io/IOException;
	// 609        }
	// 610    .end annotation
	if ( !(this->closed) )  
		goto label_cond_f;
	if ( len <= 0 )
		goto label_cond_f;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream Closed")));
	// throw
	throw cVar0;
	// 629    .line 253
label_cond_f:
	this->tracker->trackIo(len);
	return libcore::io::IoBridge::read(this->fd, b, off, len);

}
// .method public skip(J)J
long long java::io::FileInputStream::skip(long long n)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "n"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 649        value = {
	// 650            Ljava/io/IOException;
	// 651        }
	// 652    .end annotation
	if ( !(this->closed) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Stream Closed")));
	// throw
	throw cVar0;
	// 669    .line 287
label_cond_d:
	try {
	//label_try_start_d:
	dalvik::system::BlockGuard::getThreadPolicy({const[class].FS-Param})->onReadFromDisk();
	//label_try_end_17:
	}
	catch (java::io::FileInputStream_S_UseManualSkipException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/io/FileInputStream$UseManualSkipException; {:try_start_d .. :try_end_17} :catch_19
	return this->skip0(n);
	// 687    .line 289
label_catch_19:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/FileInputStream$UseManualSkipException;
	return this->skip(n);

}


