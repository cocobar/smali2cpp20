// CPP L:\smali2cpp20\x64\Release\out\java\io\RandomAccessFile.smali
#include "java2ctype.h"
#include "android.system.ErrnoException.h"
#include "android.system.OsConstants.h"
#include "android.system.StructStat.h"
#include "dalvik.system.CloseGuard.h"
#include "java.io.DataInputStream.h"
#include "java.io.DataOutputStream.h"
#include "java.io.EOFException.h"
#include "java.io.File.h"
#include "java.io.FileDescriptor.h"
#include "java.io.FileNotFoundException.h"
#include "java.io.IOException.h"
#include "java.io.RandomAccessFile.h"
#include "java.lang.Double.h"
#include "java.lang.Float.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.channels.FileChannel.h"
#include "libcore.io.IoBridge.h"
#include "libcore.io.IoTracker_S_Mode.h"
#include "libcore.io.IoTracker.h"
#include "libcore.io.Libcore.h"
#include "libcore.io.Os.h"
#include "sun.nio.ch.FileChannelImpl.h"

// .method public constructor <init>(Ljava/io/File;Ljava/lang/String;)V
java::io::RandomAccessFile::RandomAccessFile(std::shared_ptr<java::io::File> file,std::shared_ptr<java::lang::String> mode)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::Object> cVar2;
	std::shared_ptr<libcore::io::IoTracker> cVar3;
	std::shared_ptr<java::lang::String> cVar4;
	int imode;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::lang::NullPointerException> cVar7;
	std::shared_ptr<java::io::FileNotFoundException> cVar8;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "file"    # Ljava/io/File;
	//    .param p2, "mode"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 041        value = {
	// 042            Ljava/io/FileNotFoundException;
	// 043        }
	// 044    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	// 054    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->guard = dalvik::system::CloseGuard::get({const[class].FS-Param});
	this->scratch = std::make_shared<std::vector<unsigned char[]>>(0x8);
	this->syncMetadata = cVar1;
	this->channel = 0x0;
	cVar2 = std::make_shared<java::lang::Object>();
	this->closeLock = cVar2;
	this->closed = cVar1;
	cVar3 = std::make_shared<libcore::io::IoTracker>();
	this->ioTracker = cVar3;
	if ( !(file) )  
		goto label_cond_69;
	cVar4 = file->getPath();
label_goto_2c:
	imode = -0x1;
	//    .local v1, "imode":I
	if ( !(mode->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("r")))) )  
		goto label_cond_6b;
	imode = android::system::OsConstants::O_RDONLY;
label_cond_38:
label_goto_38:
	if ( imode >= 0 )
		goto label_cond_9e;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal mode \")))->append(mode)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" or \")))->toString());
	// throw
	throw cVar5;
	// 171    .line 223
	// 172    .end local v1    # "imode":I
label_cond_69:
	cVar4 = 0x0;
	//    .local v2, "name":Ljava/lang/String;
	goto label_goto_2c;
	// 179    .line 227
	// 180    .end local v2    # "name":Ljava/lang/String;
	// 181    .restart local v1    # "imode":I
label_cond_6b:
	if ( !(mode->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("rw")))) )  
		goto label_cond_38;
	imode = (android::system::OsConstants::O_RDWR | android::system::OsConstants::O_CREAT);
	this->rw = cVar0;
	if ( mode->length() <= 0x2 )
		goto label_cond_38;
	if ( !(mode->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("rws")))) )  
		goto label_cond_8f;
	this->syncMetadata = cVar0;
	goto label_goto_38;
	// 224    .line 237
label_cond_8f:
	if ( !(mode->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("rwd")))) )  
		goto label_cond_9c;
	imode = (imode |  android::system::OsConstants::O_SYNC);
	goto label_goto_38;
	// 241    .line 242
label_cond_9c:
	imode = -0x1;
	goto label_goto_38;
	// 247    .line 262
label_cond_9e:
	if ( cVar4 )     
		goto label_cond_a9;
	cVar7 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("file == null")));
	// throw
	throw cVar7;
	// 260    .line 267
label_cond_a9:
	if ( !(file->isInvalid()) )  
		goto label_cond_b8;
	cVar8 = std::make_shared<java::io::FileNotFoundException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid file path")));
	// throw
	throw cVar8;
	// 277    .line 270
label_cond_b8:
	this->path = cVar4;
	this->mode = imode;
	this->fd = libcore::io::IoBridge::open(cVar4, imode);
	if ( !(this->syncMetadata) )  
		goto label_cond_cb;
	try {
	//label_try_start_c6:
	this->fd->sync();
	//label_try_end_cb:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d4;
	}
	//    .catch Ljava/io/IOException; {:try_start_c6 .. :try_end_cb} :catch_d4
label_cond_cb:
label_goto_cb:
	this->guard->open(std::make_shared<java::lang::String>(std::make_shared<char[]>("close")));
	return;
	// 316    .line 278
label_catch_d4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	goto label_goto_cb;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
java::io::RandomAccessFile::RandomAccessFile(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> mode)
{
	
	std::shared_ptr<java::io::File> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "mode"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 329        value = {
	// 330            Ljava/io/FileNotFoundException;
	// 331        }
	// 332    .end annotation
	cVar1 = 0x0;
	if ( !(name) )  
		goto label_cond_8;
	cVar1 = std::make_shared<java::io::File>(name);
label_cond_8:
	java::io::RandomAccessFile::(cVar1, mode);
	return;

}
// .method private readBytes([BII)I
int java::io::RandomAccessFile::readBytes(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 357        value = {
	// 358            Ljava/io/IOException;
	// 359        }
	// 360    .end annotation
	this->ioTracker->trackIo(len, libcore::io::IoTracker_S_Mode::READ);
	return libcore::io::IoBridge::read(this->fd, b, off, len);

}
// .method private writeBytes([BII)V
void java::io::RandomAccessFile::writeBytes(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 386        value = {
	// 387            Ljava/io/IOException;
	// 388        }
	// 389    .end annotation
	this->ioTracker->trackIo(len, libcore::io::IoTracker_S_Mode::WRITE);
	libcore::io::IoBridge::write(this->fd, b, off, len);
	if ( !(this->syncMetadata) )  
		goto label_cond_15;
	this->fd->sync();
label_cond_15:
	return;

}
// .method public close()V
void java::io::RandomAccessFile::close()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 424        value = {
	// 425            Ljava/io/IOException;
	// 426        }
	// 427    .end annotation
	this->guard->close();
	cVar0 = this->closeLock;
	cVar0->monitor_enter();
	try {
	//label_try_start_8:
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_8 .. :try_end_a} :catchall_29
	if ( !(this->closed) )  
		goto label_cond_e;
	cVar0->monitor_exit();
	return;
	// 453    .line 674
label_cond_e:
	try {
	//label_try_start_f:
	this->closed = 0x1;
	//label_try_end_11:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_f .. :try_end_11} :catchall_29
	cVar0->monitor_exit();
	if ( !(this->channel) )  
		goto label_cond_23;
	if ( !(this->channel->isOpen()) )  
		goto label_cond_23;
	this->channel->close();
label_cond_23:
	libcore::io::IoBridge::closeAndSignalBlockedThreads(this->fd);
	return;
	// 491    .line 670
label_catchall_29:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method protected finalize()V
void java::io::RandomAccessFile::finalize()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 503        value = {
	// 504            Ljava/lang/Throwable;
	// 505        }
	// 506    .end annotation
	try {
	//label_try_start_0:
	if ( !(this->guard) )  
		goto label_cond_9;
	this->guard->warnIfOpen();
label_cond_9:
	this->close();
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_0 .. :try_end_c} :catchall_10
	this->finalize();
	return;
	// 532    .line 1214
label_catchall_10:
	// move-exception
	
	this->finalize();
	// throw
	throw;

}
// .method public final getChannel()Ljava/nio/channels/FileChannel;
std::shared_ptr<java::nio::channels::FileChannel> java::io::RandomAccessFile::getChannel()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->channel )     
		goto label_cond_12;
	this->channel = sun::nio::ch::FileChannelImpl::open(this->fd, this->path, 0x1, this->rw, this);
label_cond_12:
	//label_try_end_14:
	}
	catch (...){
		goto label_catchall_16;
	}
	//    .catchall {:try_start_1 .. :try_end_14} :catchall_16
	this->monitor_exit();
	return this->channel;
	// 581    .line 320
label_catchall_16:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public final getFD()Ljava/io/FileDescriptor;
std::shared_ptr<java::io::FileDescriptor> java::io::RandomAccessFile::getFD()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 593        value = {
	// 594            Ljava/io/IOException;
	// 595        }
	// 596    .end annotation
	if ( !(this->fd) )  
		goto label_cond_7;
	return this->fd;
	// 609    .line 298
label_cond_7:
	cVar0 = std::make_shared<java::io::IOException>();
	// throw
	throw cVar0;

}
// .method public getFilePointer()J
long long java::io::RandomAccessFile::getFilePointer()
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 621        value = {
	// 622            Ljava/io/IOException;
	// 623        }
	// 624    .end annotation
	try {
	//label_try_start_0:
	//label_try_end_b:
	}
	catch (android::system::ErrnoException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	//    .catch Landroid/system/ErrnoException; {:try_start_0 .. :try_end_b} :catch_d
	return libcore::io::Libcore::os->lseek(this->fd, 0x0, android::system::OsConstants::SEEK_CUR);
	// 645    .line 561
label_catch_d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "errnoException":Landroid/system/ErrnoException;
	// throw
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	// throw
	throw getCatchExcetionFromList->rethrowAsIOException();

}
// .method public length()J
long long java::io::RandomAccessFile::length()
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 661        value = {
	// 662            Ljava/io/IOException;
	// 663        }
	// 664    .end annotation
	try {
	//label_try_start_0:
	//label_try_end_a:
	}
	catch (android::system::ErrnoException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b;
	}
	//    .catch Landroid/system/ErrnoException; {:try_start_0 .. :try_end_a} :catch_b
	return libcore::io::Libcore::os->fstat(this->fd)->st_size;
	// 683    .line 607
label_catch_b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "errnoException":Landroid/system/ErrnoException;
	// throw
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	// throw
	throw getCatchExcetionFromList->rethrowAsIOException();

}
// .method public read()I
int java::io::RandomAccessFile::read()
{
	
	int cVar0;
	int cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 699        value = {
	// 700            Ljava/io/IOException;
	// 701        }
	// 702    .end annotation
	cVar0 = 0x0;
	cVar2 = -0x1;
	if ( this->read(this->scratch, cVar0, 0x1) == cVar2 )
		goto label_cond_11;
	cVar2 = ( this->scratch[cVar0] & 0xff);
label_cond_11:
	return cVar2;

}
// .method public read([B)I
int java::io::RandomAccessFile::read(std::shared_ptr<unsigned char[]> b)
{
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 734        value = {
	// 735            Ljava/io/IOException;
	// 736        }
	// 737    .end annotation
	return this->readBytes(b, 0x0, b->size());

}
// .method public read([BII)I
int java::io::RandomAccessFile::read(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 758        value = {
	// 759            Ljava/io/IOException;
	// 760        }
	// 761    .end annotation
	return this->readBytes(b, off, len);

}
// .method public final readBoolean()Z
bool java::io::RandomAccessFile::readBoolean()
{
	
	bool cVar2;
	int ch;
	std::shared_ptr<java::io::EOFException> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 775        value = {
	// 776            Ljava/io/IOException;
	// 777        }
	// 778    .end annotation
	cVar2 = 0x0;
	ch = this->read();
	//    .local v0, "ch":I
	if ( ch >= 0 )
		goto label_cond_d;
	cVar1 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar1;
	// 799    .line 706
label_cond_d:
	if ( !(ch) )  
		goto label_cond_10;
	cVar2 = 0x1;
label_cond_10:
	return cVar2;

}
// .method public final readByte()B
unsigned char java::io::RandomAccessFile::readByte()
{
	
	int ch;
	std::shared_ptr<java::io::EOFException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 812        value = {
	// 813            Ljava/io/IOException;
	// 814        }
	// 815    .end annotation
	ch = this->read();
	//    .local v0, "ch":I
	if ( ch >= 0 )
		goto label_cond_c;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 834    .line 731
label_cond_c:
	return (unsigned char)(ch);

}
// .method public final readChar()C
char java::io::RandomAccessFile::readChar()
{
	
	int ch1;
	int ch2;
	std::shared_ptr<java::io::EOFException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 844        value = {
	// 845            Ljava/io/IOException;
	// 846        }
	// 847    .end annotation
	ch1 = this->read();
	//    .local v0, "ch1":I
	ch2 = this->read();
	//    .local v1, "ch2":I
	if ( (ch1 | ch2) >= 0 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 874    .line 835
label_cond_12:
	return (char)((( ch1 << 0x8) +  ( ch2 << 0x0)));

}
// .method public final readDouble()D
double java::io::RandomAccessFile::readDouble()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 890        value = {
	// 891            Ljava/io/IOException;
	// 892        }
	// 893    .end annotation
	return java::lang::Double::longBitsToDouble(this->readLong());

}
// .method public final readFloat()F
float java::io::RandomAccessFile::readFloat()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 911        value = {
	// 912            Ljava/io/IOException;
	// 913        }
	// 914    .end annotation
	return java::lang::Float::intBitsToFloat(this->readInt());

}
// .method public final readFully([B)V
void java::io::RandomAccessFile::readFully(std::shared_ptr<unsigned char[]> b)
{
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 933        value = {
	// 934            Ljava/io/IOException;
	// 935        }
	// 936    .end annotation
	this->readFully(b, 0x0, b->size());
	return;

}
// .method public final readFully([BII)V
void java::io::RandomAccessFile::readFully(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	int n;
	int count;
	std::shared_ptr<java::io::EOFException> cVar0;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 956        value = {
	// 957            Ljava/io/IOException;
	// 958        }
	// 959    .end annotation
	n = 0x0;
	//    .local v1, "n":I
label_cond_1:
	count = this->read(b, (off + n), (len - n));
	//    .local v0, "count":I
	if ( count >= 0 )
		goto label_cond_11;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 987    .line 450
label_cond_11:
	n = (n +  count);
	if ( n <  len )
		goto label_cond_1;
	return;

}
// .method public final readInt()I
int java::io::RandomAccessFile::readInt()
{
	
	int ch1;
	int ch2;
	int ch3;
	int ch4;
	std::shared_ptr<java::io::EOFException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1001        value = {
	// 1002            Ljava/io/IOException;
	// 1003        }
	// 1004    .end annotation
	ch1 = this->read();
	//    .local v0, "ch1":I
	ch2 = this->read();
	//    .local v1, "ch2":I
	ch3 = this->read();
	//    .local v2, "ch3":I
	ch4 = this->read();
	//    .local v3, "ch4":I
	if ( (((ch1 | ch2) |  ch3) |  ch4) >= 0 )
		goto label_cond_1c;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 1047    .line 865
label_cond_1c:
	return (((( ch1 << 0x18) +  ( ch2 << 0x10)) +  ( ch3 << 0x8)) +  ( ch4 << 0x0));

}
// .method public final readLine()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::RandomAccessFile::readLine()
{
	
	std::shared_ptr<java::lang::StringBuffer> input;
	int eol;
	int c;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1069        value = {
	// 1070            Ljava/io/IOException;
	// 1071        }
	// 1072    .end annotation
	input = std::make_shared<java::lang::StringBuffer>();
	//    .local v4, "input":Ljava/lang/StringBuffer;
	//    .local v0, "c":I
	eol = 0x0;
	//    .local v1, "eol":Z
label_cond_7:
label_goto_7:
	if ( eol )     
		goto label_cond_28;
	c = this->read();
	// switch
	{
	auto item = ( c );
	if (item == -0x1) goto label_sswitch_15;
	if (item == 0xa) goto label_sswitch_15;
	if (item == 0xd) goto label_sswitch_17;
	}
	input->append((char)(c));
	goto label_goto_7;
	// 1108    .line 979
label_sswitch_15:
	eol = 0x1;
	goto label_goto_7;
	// 1115    .line 982
label_sswitch_17:
	eol = 0x1;
	//    .local v2, "cur":J
	if ( this->read() == 0xa )
		goto label_cond_7;
	this->seek(this->getFilePointer());
	goto label_goto_7;
	// 1139    .line 994
	// 1140    .end local v2    # "cur":J
label_cond_28:
	if ( -0x1 != -0x1 )
		goto label_cond_33;
	if ( input->length() )     
		goto label_cond_33;
	return 0x0;
	// 1157    .line 997
label_cond_33:
	return input->toString();
	// 1165    .line 976
	// 1166    :sswitch_data_38
	// 1167    .sparse-switch
	// 1168        -0x1 -> :sswitch_15
	// 1169        0xa -> :sswitch_15
	// 1170        0xd -> :sswitch_17
	// 1171    .end sparse-switch

}
// .method public final readLong()J
long long java::io::RandomAccessFile::readLong()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1177        value = {
	// 1178            Ljava/io/IOException;
	// 1179        }
	// 1180    .end annotation
	return (((long long)(this->readInt()) << 0x20) +  ((long long)(this->readInt()) &  0xffffffffL));

}
// .method public final readShort()S
short java::io::RandomAccessFile::readShort()
{
	
	int ch1;
	int ch2;
	std::shared_ptr<java::io::EOFException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1212        value = {
	// 1213            Ljava/io/IOException;
	// 1214        }
	// 1215    .end annotation
	ch1 = this->read();
	//    .local v0, "ch1":I
	ch2 = this->read();
	//    .local v1, "ch2":I
	if ( (ch1 | ch2) >= 0 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 1242    .line 779
label_cond_12:
	return (short)((( ch1 << 0x8) +  ( ch2 << 0x0)));

}
// .method public final readUTF()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::RandomAccessFile::readUTF()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1258        value = {
	// 1259            Ljava/io/IOException;
	// 1260        }
	// 1261    .end annotation
	return java::io::DataInputStream::readUTF(this);

}
// .method public final readUnsignedByte()I
int java::io::RandomAccessFile::readUnsignedByte()
{
	
	int ch;
	std::shared_ptr<java::io::EOFException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1275        value = {
	// 1276            Ljava/io/IOException;
	// 1277        }
	// 1278    .end annotation
	ch = this->read();
	//    .local v0, "ch":I
	if ( ch >= 0 )
		goto label_cond_c;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 1297    .line 751
label_cond_c:
	return ch;

}
// .method public final readUnsignedShort()I
int java::io::RandomAccessFile::readUnsignedShort()
{
	
	int ch1;
	int ch2;
	std::shared_ptr<java::io::EOFException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1305        value = {
	// 1306            Ljava/io/IOException;
	// 1307        }
	// 1308    .end annotation
	ch1 = this->read();
	//    .local v0, "ch1":I
	ch2 = this->read();
	//    .local v1, "ch2":I
	if ( (ch1 | ch2) >= 0 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 1335    .line 807
label_cond_12:
	return (( ch1 << 0x8) +  ( ch2 << 0x0));

}
// .method public seek(J)V
void java::io::RandomAccessFile::seek(long long pos)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "pos"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1350        value = {
	// 1351            Ljava/io/IOException;
	// 1352        }
	// 1353    .end annotation
	if ( (pos > 0x0) >= 0 )
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("offset < 0: ")))->append(pos)->toString());
	// throw
	throw cVar0;
	// 1388    .line 589
label_cond_20:
	try {
	//label_try_start_20:
	libcore::io::Libcore::os->lseek(this->fd, pos, android::system::OsConstants::SEEK_SET);
	this->ioTracker->reset();
	//label_try_end_2e:
	}
	catch (android::system::ErrnoException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2f;
	}
	//    .catch Landroid/system/ErrnoException; {:try_start_20 .. :try_end_2e} :catch_2f
	return;
	// 1409    .line 591
label_catch_2f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "errnoException":Landroid/system/ErrnoException;
	// throw
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	// throw
	throw getCatchExcetionFromList->rethrowAsIOException();

}
// .method public setLength(J)V
void java::io::RandomAccessFile::setLength(long long newLength)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "newLength"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1426        value = {
	// 1427            Ljava/io/IOException;
	// 1428        }
	// 1429    .end annotation
	if ( (newLength > 0x0) >= 0 )
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("newLength < 0")));
	// throw
	throw cVar0;
	// 1448    .line 637
label_cond_f:
	try {
	//label_try_start_f:
	libcore::io::Libcore::os->ftruncate(this->fd, newLength);
	//label_try_end_16:
	}
	catch (android::system::ErrnoException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2b;
	}
	//    .catch Landroid/system/ErrnoException; {:try_start_f .. :try_end_16} :catch_2b
	//    .local v2, "filePointer":J
	if ( (this->getFilePointer() > newLength) <= 0 )
		goto label_cond_21;
	this->seek(newLength);
label_cond_21:
	if ( !(this->syncMetadata) )  
		goto label_cond_2a;
	this->fd->sync();
label_cond_2a:
	return;
	// 1488    .line 638
	// 1489    .end local v2    # "filePointer":J
label_catch_2b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "errnoException":Landroid/system/ErrnoException;
	// throw
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	// throw
	throw getCatchExcetionFromList->rethrowAsIOException();

}
// .method public skipBytes(I)I
int java::io::RandomAccessFile::skipBytes(int n)
{
	
	auto pos;
	auto len;
	long long newpos;
	
	//    .param p1, "n"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1506        value = {
	// 1507            Ljava/io/IOException;
	// 1508        }
	// 1509    .end annotation
	if ( n > 0 ) 
		goto label_cond_4;
	return 0x0;
	// 1520    .line 478
label_cond_4:
	pos = this->getFilePointer();
	//    .local v4, "pos":J
	len = this->length();
	//    .local v0, "len":J
	newpos = (pos + (long long)(n));
	//    .local v2, "newpos":J
	if ( (newpos > len) <= 0 )
		goto label_cond_14;
	newpos = len;
label_cond_14:
	this->seek(newpos);
	return (int)((newpos - pos));

}
// .method public write(I)V
void java::io::RandomAccessFile::write(int b)
{
	
	int cVar0;
	
	//    .param p1, "b"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1563        value = {
	// 1564            Ljava/io/IOException;
	// 1565        }
	// 1566    .end annotation
	cVar0 = 0x0;
	this->scratch[cVar0] = (unsigned char)(( b & 0xff));
	this->write(this->scratch, cVar0, 0x1);
	return;

}
// .method public write([B)V
void java::io::RandomAccessFile::write(std::shared_ptr<unsigned char[]> b)
{
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 1595        value = {
	// 1596            Ljava/io/IOException;
	// 1597        }
	// 1598    .end annotation
	this->writeBytes(b, 0x0, b->size());
	return;

}
// .method public write([BII)V
void java::io::RandomAccessFile::write(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1618        value = {
	// 1619            Ljava/io/IOException;
	// 1620        }
	// 1621    .end annotation
	this->writeBytes(b, off, len);
	return;

}
// .method public final writeBoolean(Z)V
void java::io::RandomAccessFile::writeBoolean(bool v)
{
	
	int cVar0;
	
	//    .param p1, "v"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1635        value = {
	// 1636            Ljava/io/IOException;
	// 1637        }
	// 1638    .end annotation
	if ( !(v) )  
		goto label_cond_7;
	cVar0 = 0x1;
label_goto_3:
	this->write(cVar0);
	return;
	// 1652    .line 1040
label_cond_7:
	cVar0 = 0x0;
	goto label_goto_3;

}
// .method public final writeByte(I)V
void java::io::RandomAccessFile::writeByte(int v)
{
	
	//    .param p1, "v"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1663        value = {
	// 1664            Ljava/io/IOException;
	// 1665        }
	// 1666    .end annotation
	this->write(v);
	return;

}
// .method public final writeBytes(Ljava/lang/String;)V
void java::io::RandomAccessFile::writeBytes(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	int len;
	std::shared<std::vector<unsigned char[]>> b;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1680        value = {
	// 1681            Ljava/io/IOException;
	// 1682        }
	// 1683    .end annotation
	cVar0 = 0x0;
	len = s->length();
	//    .local v1, "len":I
	b = std::make_shared<std::vector<unsigned char[]>>(len);
	//    .local v0, "b":[B
	s->getBytes(cVar0, len, b, cVar0);
	this->writeBytes(b, cVar0, len);
	return;

}
// .method public final writeChar(I)V
void java::io::RandomAccessFile::writeChar(int v)
{
	
	//    .param p1, "v"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1712        value = {
	// 1713            Ljava/io/IOException;
	// 1714        }
	// 1715    .end annotation
	this->write(( _ushri(v,0x8) & 0xff));
	this->write(( _ushri(v,0x0) & 0xff));
	return;

}
// .method public final writeChars(Ljava/lang/String;)V
void java::io::RandomAccessFile::writeChars(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	int clen;
	int blen;
	std::shared<std::vector<unsigned char[]>> b;
	std::shared<std::vector<char[]>> c;
	int i;
	int j;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1740        value = {
	// 1741            Ljava/io/IOException;
	// 1742        }
	// 1743    .end annotation
	cVar0 = 0x0;
	clen = s->length();
	//    .local v3, "clen":I
	blen = ( clen * 0x2);
	//    .local v1, "blen":I
	b = std::make_shared<std::vector<unsigned char[]>>(blen);
	//    .local v0, "b":[B
	c = std::make_shared<std::vector<char[]>>(clen);
	//    .local v2, "c":[C
	s->getChars(cVar0, clen, c, cVar0);
	i = 0x0;
	//    .local v4, "i":I
	//    .local v5, "j":I
	j = 0x0;
	//    .end local v5    # "j":I
	//    .local v6, "j":I
label_goto_11:
	if ( i >= clen )
		goto label_cond_28;
	j = ( j + 0x1);
	//    .end local v6    # "j":I
	//    .restart local v5    # "j":I
	b[j] = (unsigned char)(_ushri(c[i],0x8));
	j = ( j + 0x1);
	//    .end local v5    # "j":I
	//    .restart local v6    # "j":I
	b[j] = (unsigned char)(_ushri(c[i],0x0));
	i = ( i + 0x1);
	goto label_goto_11;
	// 1814    .line 1184
label_cond_28:
	this->writeBytes(b, cVar0, blen);
	return;

}
// .method public final writeDouble(D)V
void java::io::RandomAccessFile::writeDouble(double v)
{
	
	//    .param p1, "v"    # D
	//    .annotation system Ldalvik/annotation/Throws;
	// 1826        value = {
	// 1827            Ljava/io/IOException;
	// 1828        }
	// 1829    .end annotation
	this->writeLong(java::lang::Double::doubleToLongBits(v));
	return;

}
// .method public final writeFloat(F)V
void java::io::RandomAccessFile::writeFloat(float v)
{
	
	//    .param p1, "v"    # F
	//    .annotation system Ldalvik/annotation/Throws;
	// 1847        value = {
	// 1848            Ljava/io/IOException;
	// 1849        }
	// 1850    .end annotation
	this->writeInt(java::lang::Float::floatToIntBits(v));
	return;

}
// .method public final writeInt(I)V
void java::io::RandomAccessFile::writeInt(int v)
{
	
	//    .param p1, "v"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1868        value = {
	// 1869            Ljava/io/IOException;
	// 1870        }
	// 1871    .end annotation
	this->write(( _ushri(v,0x18) & 0xff));
	this->write(( _ushri(v,0x10) & 0xff));
	this->write(( _ushri(v,0x8) & 0xff));
	this->write(( _ushri(v,0x0) & 0xff));
	return;

}
// .method public final writeLong(J)V
void java::io::RandomAccessFile::writeLong(long long v)
{
	
	//    .param p1, "v"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1910        value = {
	// 1911            Ljava/io/IOException;
	// 1912        }
	// 1913    .end annotation
	this->write(( (int)(_ushrll(v,0x38)) & 0xff));
	this->write(( (int)(_ushrll(v,0x30)) & 0xff));
	this->write(( (int)(_ushrll(v,0x28)) & 0xff));
	this->write(( (int)(_ushrll(v,0x20)) & 0xff));
	this->write(( (int)(_ushrll(v,0x18)) & 0xff));
	this->write(( (int)(_ushrll(v,0x10)) & 0xff));
	this->write(( (int)(_ushrll(v,0x8)) & 0xff));
	this->write(( (int)(_ushrll(v,0x0)) & 0xff));
	return;

}
// .method public final writeShort(I)V
void java::io::RandomAccessFile::writeShort(int v)
{
	
	//    .param p1, "v"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2012        value = {
	// 2013            Ljava/io/IOException;
	// 2014        }
	// 2015    .end annotation
	this->write(( _ushri(v,0x8) & 0xff));
	this->write(( _ushri(v,0x0) & 0xff));
	return;

}
// .method public final writeUTF(Ljava/lang/String;)V
void java::io::RandomAccessFile::writeUTF(std::shared_ptr<java::lang::String> str)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2040        value = {
	// 2041            Ljava/io/IOException;
	// 2042        }
	// 2043    .end annotation
	java::io::DataOutputStream::writeUTF(str, this);
	return;

}


