// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileStore.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.Reader.h"
#include "java.lang.Class.h"
#include "java.lang.Long.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.nio.channels.Channels.h"
#include "java.nio.channels.ReadableByteChannel.h"
#include "java.nio.channels.SeekableByteChannel.h"
#include "java.nio.file.Files.h"
#include "java.nio.file.OpenOption.h"
#include "java.nio.file.Path.h"
#include "java.nio.file.Paths.h"
#include "java.nio.file.attribute.BasicFileAttributeView.h"
#include "java.nio.file.attribute.FileAttributeView.h"
#include "java.nio.file.attribute.FileOwnerAttributeView.h"
#include "java.nio.file.attribute.FileStoreAttributeView.h"
#include "java.nio.file.attribute.PosixFileAttributeView.h"
#include "java.security.AccessController.h"
#include "java.util.Arrays.h"
#include "java.util.Properties.h"
#include "sun.nio.fs.UnixException.h"
#include "sun.nio.fs.UnixFileAttributes.h"
#include "sun.nio.fs.UnixFileStore_S_1.h"
#include "sun.nio.fs.UnixFileStore_S_FeatureStatus.h"
#include "sun.nio.fs.UnixFileStore.h"
#include "sun.nio.fs.UnixFileStoreAttributes.h"
#include "sun.nio.fs.UnixFileSystem.h"
#include "sun.nio.fs.UnixMountEntry.h"
#include "sun.nio.fs.UnixPath.h"
#include "sun.nio.fs.Util.h"

static sun::nio::fs::UnixFileStore::loadLock;
static sun::nio::fs::UnixFileStore::props;
// .method static synthetic -wrap0()Ljava/util/Properties;
std::shared_ptr<java::util::Properties> sun::nio::fs::UnixFileStore::_wrap0()
{
	
	return sun::nio::fs::UnixFileStore::loadProperties({const[class].FS-Param});

}
// .method static constructor <clinit>()V
void sun::nio::fs::UnixFileStore::static_cinit()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	cVar0 = std::make_shared<java::lang::Object>();
	sun::nio::fs::UnixFileStore::loadLock = cVar0;
	return;

}
// .method constructor <init>(Lsun/nio/fs/UnixFileSystem;Lsun/nio/fs/UnixMountEntry;)V
sun::nio::fs::UnixFileStore::UnixFileStore(std::shared_ptr<sun::nio::fs::UnixFileSystem> fs,std::shared_ptr<sun::nio::fs::UnixMountEntry> entry)
{
	
	std::shared_ptr<sun::nio::fs::UnixPath> cVar0;
	long long cVar1;
	
	//    .param p1, "fs"    # Lsun/nio/fs/UnixFileSystem;
	//    .param p2, "entry"    # Lsun/nio/fs/UnixMountEntry;
	//    .annotation system Ldalvik/annotation/Throws;
	// 059        value = {
	// 060            Ljava/io/IOException;
	// 061        }
	// 062    .end annotation
	// 066    invoke-direct {p0}, Ljava/nio/file/FileStore;-><init>()V
	cVar0 = std::make_shared<sun::nio::fs::UnixPath>(fs, entry->dir());
	this->file = cVar0;
	if ( (entry->dev() > 0x0) )     
		goto label_cond_23;
	cVar1 = sun::nio::fs::UnixFileStore::devFor(this->file);
label_goto_1e:
	this->dev = cVar1;
	this->entry = entry;
	return;
	// 105    .line 70
label_cond_23:
	cVar1 = entry->dev();
	goto label_goto_1e;

}
// .method constructor <init>(Lsun/nio/fs/UnixPath;)V
sun::nio::fs::UnixFileStore::UnixFileStore(std::shared_ptr<sun::nio::fs::UnixPath> file)
{
	
	//    .param p1, "file"    # Lsun/nio/fs/UnixPath;
	//    .annotation system Ldalvik/annotation/Throws;
	// 118        value = {
	// 119            Ljava/io/IOException;
	// 120        }
	// 121    .end annotation
	// 125    invoke-direct {p0}, Ljava/nio/file/FileStore;-><init>()V
	this->file = file;
	this->dev = sun::nio::fs::UnixFileStore::devFor(file);
	this->entry = this->findMountEntry();
	return;

}
// .method private static devFor(Lsun/nio/fs/UnixPath;)J
long long sun::nio::fs::UnixFileStore::devFor(std::shared_ptr<sun::nio::fs::UnixPath> file)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "file"    # Lsun/nio/fs/UnixPath;
	//    .annotation system Ldalvik/annotation/Throws;
	// 152        value = {
	// 153            Ljava/io/IOException;
	// 154        }
	// 155    .end annotation
	try {
	//label_try_start_1:
	//label_try_end_8:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_1 .. :try_end_8} :catch_a
	return sun::nio::fs::UnixFileAttributes::get(file, 0x1)->dev();
	// 174    .line 56
label_catch_a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	return 0x0;

}
// .method private static loadProperties()Ljava/util/Properties;
std::shared_ptr<java::util::Properties> sun::nio::fs::UnixFileStore::loadProperties()
{
	
	int cVar7;
	std::shared_ptr<java::util::Properties> result;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::nio::channels::ReadableByteChannel> rbc;
	std::shared_ptr<java::lang::Object> cVar3;
	std::shared_ptr<java::lang::Object> cVar5;
	std::shared_ptr<java::lang::Throwable> cVar6;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Object> catchall;
	
	cVar7 = 0x0;
	result = std::make_shared<java::util::Properties>();
	//    .local v3, "result":Ljava/util/Properties;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "fstypes":Ljava/lang/String;
	//    .local v0, "file":Ljava/nio/file/Path;
	rbc = 0x0;
	//    .local v2, "rbc":Ljava/nio/channels/ReadableByteChannel;
	try {
	//label_try_start_2a:
	rbc = java::nio::file::Files::newByteChannel(java::nio::file::Paths::get(cVar1->append(java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.home"))))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/lib/fstypes.properties")))->toString(), std::make_shared<std::vector<std::vector<java::lang::String>>>(0x0)), std::make_shared<std::vector<std::vector<java::nio::file::OpenOption>>>(0x0));
	//    .local v2, "rbc":Ljava/nio/channels/ReadableByteChannel;
	result->load(java::nio::channels::Channels::newReader(rbc, std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF-8"))));
	//label_try_end_3a:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_46;
	}
	catch (...){
		goto label_catchall_60;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_2a .. :try_end_3a} :catch_46
	//    .catchall {:try_start_2a .. :try_end_3a} :catchall_60
	if ( !(rbc) )  
		goto label_cond_3f;
	try {
	//label_try_start_3c:
	rbc->close();
	//label_try_end_3f:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_44;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_42;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_3c .. :try_end_3f} :catch_44
	//    .catch Ljava/io/IOException; {:try_start_3c .. :try_end_3f} :catch_42
label_cond_3f:
label_goto_3f:
	if ( !(cVar7) )  
		goto label_cond_43;
	try {
	//label_try_start_41:
	// throw
	throw cVar7;
	// 277    :try_end_42
	// 278    .catch Ljava/io/IOException; {:try_start_41 .. :try_end_42} :catch_42
	// 280    .line 261
	// 281    .end local v2    # "rbc":Ljava/nio/channels/ReadableByteChannel;
label_catch_42:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_43:
	return result;
	// 289    .line 260
	// 290    .restart local v2    # "rbc":Ljava/nio/channels/ReadableByteChannel;
label_catch_44:
	// move-exception
	cVar7 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3f;
	// 296    .end local v2    # "rbc":Ljava/nio/channels/ReadableByteChannel;
label_catch_46:
	// move-exception
	cVar3 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	try {
	//label_try_start_47:
	// throw
	throw cVar3;
	// 302    :try_end_48
	// 303    .catchall {:try_start_47 .. :try_end_48} :catchall_48
label_catchall_48:
	// move-exception
	
	tryCatchExcetionList.pop_back();
	cVar7 = cVar3;
	cVar5 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_goto_4c:
	if ( !(rbc) )  
		goto label_cond_51;
	try {
	//label_try_start_4e:
	rbc->close();
	//label_try_end_51:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_54;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_42;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_4e .. :try_end_51} :catch_54
	//    .catch Ljava/io/IOException; {:try_start_4e .. :try_end_51} :catch_42
label_cond_51:
label_goto_51:
	if ( !(cVar7) )  
		goto label_cond_5f;
	try {
	//label_try_start_53:
	// throw
	throw cVar7;
label_catch_54:
	// move-exception
	cVar6 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	if ( cVar7 )     
		goto label_cond_59;
	cVar7 = cVar6;
	goto label_goto_51;
label_cond_59:
	if ( cVar7 == cVar6 )
		goto label_cond_51;
	cVar7->addSuppressed(cVar6);
	goto label_goto_51;
label_cond_5f:
	// throw
	throw cVar5;
	// 348    :try_end_60
	// 349    .catch Ljava/io/IOException; {:try_start_53 .. :try_end_60} :catch_42
label_catchall_60:
	// move-exception
	catchall = tryCatchExcetionList.back();
	goto label_goto_4c;

}
// .method private readAttributes()Lsun/nio/fs/UnixFileStoreAttributes;
std::shared_ptr<sun::nio::fs::UnixFileStoreAttributes> sun::nio::fs::UnixFileStore::readAttributes()
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 360        value = {
	// 361            Ljava/io/IOException;
	// 362        }
	// 363    .end annotation
	try {
	//label_try_start_0:
	//label_try_end_5:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_0 .. :try_end_5} :catch_7
	return sun::nio::fs::UnixFileStoreAttributes::get(this->file);
	// 378    .line 110
label_catch_7:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "x":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	return 0x0;

}
// .method checkIfFeaturePresent(Ljava/lang/String;)Lsun/nio/fs/UnixFileStore$FeatureStatus;
std::shared_ptr<sun::nio::fs::UnixFileStore_S_FeatureStatus> sun::nio::fs::UnixFileStore::checkIfFeaturePresent(std::shared_ptr<java::lang::String> feature)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<sun::nio::fs::UnixFileStore_S_1> cVar1;
	std::shared_ptr<java::util::Properties> cVar2;
	std::shared_ptr<java::lang::String> value;
	auto values;
	int cVar3;
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "feature"    # Ljava/lang/String;
	if ( sun::nio::fs::UnixFileStore::props )     
		goto label_cond_19;
	cVar0 = sun::nio::fs::UnixFileStore::loadLock;
	cVar0->monitor_enter();
	try {
	//label_try_start_7:
	if ( sun::nio::fs::UnixFileStore::props )     
		goto label_cond_18;
	cVar1 = std::make_shared<sun::nio::fs::UnixFileStore_S_1>(this);
	cVar2 = java::security::AccessController::doPrivileged(cVar1);
	cVar2->checkCast("java::util::Properties");
	sun::nio::fs::UnixFileStore::props = cVar2;
	//label_try_end_18:
	}
	catch (...){
		goto label_catchall_43;
	}
	//    .catchall {:try_start_7 .. :try_end_18} :catchall_43
label_cond_18:
	cVar0->monitor_exit();
label_cond_19:
	value = sun::nio::fs::UnixFileStore::props->getProperty(this->type());
	//    .local v1, "value":Ljava/lang/String;
	if ( !(value) )  
		goto label_cond_60;
	values = value->split(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\s")));
	//    .local v2, "values":[Ljava/lang/String;
	cVar3 = 0x0;
label_goto_2e:
	if ( cVar3 >= values->size() )
		goto label_cond_60;
	//    .local v0, "s":Ljava/lang/String;
	s = values[cVar3]->trim()->toLowerCase();
	if ( !(s->equals(feature)) )  
		goto label_cond_46;
	return sun::nio::fs::UnixFileStore_S_FeatureStatus::PRESENT;
	// 492    .line 222
	// 493    .end local v0    # "s":Ljava/lang/String;
	// 494    .end local v1    # "value":Ljava/lang/String;
	// 495    .end local v2    # "values":[Ljava/lang/String;
label_catchall_43:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 503    .line 242
	// 504    .restart local v0    # "s":Ljava/lang/String;
	// 505    .restart local v1    # "value":Ljava/lang/String;
	// 506    .restart local v2    # "values":[Ljava/lang/String;
label_cond_46:
	if ( !(s->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("no")))) )  
		goto label_cond_5d;
	if ( !(s->substring(0x2)->equals(feature)) )  
		goto label_cond_5d;
	return sun::nio::fs::UnixFileStore_S_FeatureStatus::NOT_PRESENT;
	// 535    .line 237
label_cond_5d:
	cVar3 = ( cVar3 + 0x1);
	goto label_goto_2e;
	// 541    .line 250
	// 542    .end local v0    # "s":Ljava/lang/String;
	// 543    .end local v2    # "values":[Ljava/lang/String;
label_cond_60:
	return sun::nio::fs::UnixFileStore_S_FeatureStatus::UNKNOWN;

}
// .method dev()J
long long sun::nio::fs::UnixFileStore::dev()
{
	
	return this->dev;

}
// .method entry()Lsun/nio/fs/UnixMountEntry;
std::shared_ptr<sun::nio::fs::UnixMountEntry> sun::nio::fs::UnixFileStore::entry()
{
	
	return this->entry;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::nio::fs::UnixFileStore::equals(std::shared_ptr<java::lang::Object> ob)
{
	
	bool cVar1;
	std::shared_ptr<sun::nio::fs::UnixFileStore> other;
	
	//    .param p1, "ob"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( ob != this )
		goto label_cond_5;
	return 0x1;
	// 585    .line 185
label_cond_5:
	if ( ob->instanceOf("sun::nio::fs::UnixFileStore") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	other = ob;
	other->checkCast("sun::nio::fs::UnixFileStore");
	//    .local v0, "other":Lsun/nio/fs/UnixFileStore;
	if ( (this->dev > other->dev) )     
		goto label_cond_25;
	cVar1 = java::util::Arrays::equals(this->entry->dir(), other->entry->dir());
label_cond_25:
	return cVar1;

}
// .method file()Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixFileStore::file()
{
	
	return this->file;

}
// .method abstract findMountEntry()Lsun/nio/fs/UnixMountEntry;
std::shared_ptr<sun::nio::fs::UnixMountEntry> sun::nio::fs::UnixFileStore::findMountEntry()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 644        value = {
	// 645            Ljava/io/IOException;
	// 646        }
	// 647    .end annotation

}
// .method public getAttribute(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::nio::fs::UnixFileStore::getAttribute(std::shared_ptr<java::lang::String> attribute)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "attribute"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 654        value = {
	// 655            Ljava/io/IOException;
	// 656        }
	// 657    .end annotation
	if ( !(attribute->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("totalSpace")))) )  
		goto label_cond_12;
	return java::lang::Long::valueOf(this->getTotalSpace());
	// 680    .line 146
label_cond_12:
	if ( !(attribute->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("usableSpace")))) )  
		goto label_cond_24;
	return java::lang::Long::valueOf(this->getUsableSpace());
	// 701    .line 148
label_cond_24:
	if ( !(attribute->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("unallocatedSpace")))) )  
		goto label_cond_36;
	return java::lang::Long::valueOf(this->getUnallocatedSpace());
	// 722    .line 150
label_cond_36:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->append(attribute)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' not recognized")))->toString());
	// throw
	throw cVar0;

}
// .method public getFileStoreAttributeView(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;
std::shared_ptr<java::nio::file::attribute::FileStoreAttributeView> sun::nio::fs::UnixFileStore::getFileStoreAttributeView(std::shared_ptr<java::lang::Class<java::nio::file::attribute::FileStoreAttributeView>> view)
{
	
	std::shared_ptr<java::nio::file::attribute::FileStoreAttributeView> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 758        value = {
	// 759            "<V::",
	// 760            "Ljava/nio/file/attribute/FileStoreAttributeView;",
	// 761            ">(",
	// 762            "Ljava/lang/Class",
	// 763            "<TV;>;)TV;"
	// 764        }
	// 765    .end annotation
	//    .local p1, "view":Ljava/lang/Class;, "Ljava/lang/Class<TV;>;"
	cVar0 = 0x0;
	if ( view )     
		goto label_cond_9;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 781    .line 139
label_cond_9:
	cVar0->checkCast("java::nio::file::attribute::FileStoreAttributeView");
	return cVar0;

}
// .method public getTotalSpace()J
long long sun::nio::fs::UnixFileStore::getTotalSpace()
{
	
	std::shared_ptr<sun::nio::fs::UnixFileStoreAttributes> attrs;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 791        value = {
	// 792            Ljava/io/IOException;
	// 793        }
	// 794    .end annotation
	attrs = this->readAttributes();
	//    .local v0, "attrs":Lsun/nio/fs/UnixFileStoreAttributes;
	return (attrs->blockSize() *  attrs->totalBlocks());

}
// .method public getUnallocatedSpace()J
long long sun::nio::fs::UnixFileStore::getUnallocatedSpace()
{
	
	std::shared_ptr<sun::nio::fs::UnixFileStoreAttributes> attrs;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 820        value = {
	// 821            Ljava/io/IOException;
	// 822        }
	// 823    .end annotation
	attrs = this->readAttributes();
	//    .local v0, "attrs":Lsun/nio/fs/UnixFileStoreAttributes;
	return (attrs->blockSize() *  attrs->freeBlocks());

}
// .method public getUsableSpace()J
long long sun::nio::fs::UnixFileStore::getUsableSpace()
{
	
	std::shared_ptr<sun::nio::fs::UnixFileStoreAttributes> attrs;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 849        value = {
	// 850            Ljava/io/IOException;
	// 851        }
	// 852    .end annotation
	attrs = this->readAttributes();
	//    .local v0, "attrs":Lsun/nio/fs/UnixFileStoreAttributes;
	return (attrs->blockSize() *  attrs->availableBlocks());

}
// .method public hashCode()I
int sun::nio::fs::UnixFileStore::hashCode()
{
	
	return ((int)((this->dev ^  _ushrll(this->dev,0x20))) ^  java::util::Arrays::hashCode(this->entry->dir()));

}
// .method public isReadOnly()Z
bool sun::nio::fs::UnixFileStore::isReadOnly()
{
	
	return this->entry->isReadOnly();

}
// .method public name()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixFileStore::name()
{
	
	return this->entry->name();

}
// .method public supportsFileAttributeView(Ljava/lang/Class;)Z
bool sun::nio::fs::UnixFileStore::supportsFileAttributeView(std::shared_ptr<java::lang::Class<java::nio::file::attribute::FileAttributeView>> type)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::NullPointerException> cVar2;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 938        value = {
	// 939            "(",
	// 940            "Ljava/lang/Class",
	// 941            "<+",
	// 942            "Ljava/nio/file/attribute/FileAttributeView;",
	// 943            ">;)Z"
	// 944        }
	// 945    .end annotation
	//    .local p1, "type":Ljava/lang/Class;, "Ljava/lang/Class<+Ljava/nio/file/attribute/FileAttributeView;>;"
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( type )     
		goto label_cond_a;
	cVar2 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar2;
	// 963    .line 157
label_cond_a:
	if ( type != java::nio::file::attribute::BasicFileAttributeView() )
		goto label_cond_f;
	return cVar0;
	// 972    .line 159
label_cond_f:
	if ( type == java::nio::file::attribute::PosixFileAttributeView() )
		goto label_cond_17;
	if ( type != java::nio::file::attribute::FileOwnerAttributeView() )
		goto label_cond_25;
label_cond_17:
	//    .local v0, "status":Lsun/nio/fs/UnixFileStore$FeatureStatus;
	if ( this->checkIfFeaturePresent(std::make_shared<java::lang::String>(std::make_shared<char[]>("posix"))) == sun::nio::fs::UnixFileStore_S_FeatureStatus::NOT_PRESENT )
		goto label_cond_23;
label_goto_22:
	return cVar0;
label_cond_23:
	cVar0 = cVar1;
	goto label_goto_22;
	// 1005    .line 167
	// 1006    .end local v0    # "status":Lsun/nio/fs/UnixFileStore$FeatureStatus;
label_cond_25:
	return cVar1;

}
// .method public supportsFileAttributeView(Ljava/lang/String;)Z
bool sun::nio::fs::UnixFileStore::supportsFileAttributeView(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	if ( name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("basic"))) )     
		goto label_cond_12;
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("unix")))) )  
		goto label_cond_14;
label_cond_12:
	return 0x1;
	// 1039    .line 174
label_cond_14:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("posix")))) )  
		goto label_cond_24;
	return this->supportsFileAttributeView(java::nio::file::attribute::PosixFileAttributeView());
	// 1058    .line 176
label_cond_24:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("owner")))) )  
		goto label_cond_34;
	return this->supportsFileAttributeView(java::nio::file::attribute::FileOwnerAttributeView());
	// 1077    .line 178
label_cond_34:
	return 0x0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixFileStore::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>(sun::nio::fs::Util::toString(this->entry->dir()));
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (")));
	sb->append(this->entry->name());
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")));
	return sb->toString();

}
// .method public type()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixFileStore::type()
{
	
	return this->entry->fstype();

}


