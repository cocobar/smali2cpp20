// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileSystem$FileStoreIterator.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityException.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.Thread.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.nio.file.FileStore.h"
#include "java.util.Iterator.h"
#include "java.util.NoSuchElementException.h"
#include "sun.nio.fs.UnixFileSystem_S_FileStoreIterator.h"
#include "sun.nio.fs.UnixFileSystem.h"
#include "sun.nio.fs.UnixMountEntry.h"
#include "sun.nio.fs.Util.h"

static sun::nio::fs::UnixFileSystem_S_FileStoreIterator::_assertionsDisabled;
// .method static constructor <clinit>()V
void sun::nio::fs::UnixFileSystem_S_FileStoreIterator::static_cinit()
{
	
	sun::nio::fs::UnixFileSystem_S_FileStoreIterator::_assertionsDisabled = ( sun::nio::fs::UnixFileSystem_S_FileStoreIterator()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>(Lsun/nio/fs/UnixFileSystem;)V
sun::nio::fs::UnixFileSystem_S_FileStoreIterator::UnixFileSystem_S_FileStoreIterator(std::shared_ptr<sun::nio::fs::UnixFileSystem> this_S_0)
{
	
	//    .param p1, "this$0"    # Lsun/nio/fs/UnixFileSystem;
	this->this_S_0 = this_S_0;
	// 080    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->entries = this_S_0->getMountEntries()->iterator();
	return;

}
// .method private readNext()Ljava/nio/file/FileStore;
std::shared_ptr<java::nio::file::FileStore> sun::nio::fs::UnixFileSystem_S_FileStoreIterator::readNext()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<sun::nio::fs::UnixMountEntry> entry;
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( sun::nio::fs::UnixFileSystem_S_FileStoreIterator::_assertionsDisabled )     
		goto label_cond_1f;
	if ( java::lang::Thread::holdsLock(this) )     
		goto label_cond_1f;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 120    .line 197
label_cond_11:
	entry = this->entries->next();
	entry->checkCast("sun::nio::fs::UnixMountEntry");
	//    .local v0, "entry":Lsun/nio/fs/UnixMountEntry;
	if ( !(entry->isIgnored()) )  
		goto label_cond_28;
	//    .end local v0    # "entry":Lsun/nio/fs/UnixMountEntry;
label_cond_1f:
label_goto_1f:
	if ( this->entries->hasNext() )     
		goto label_cond_11;
	return 0x0;
	// 153    .line 204
	// 154    .restart local v0    # "entry":Lsun/nio/fs/UnixMountEntry;
label_cond_28:
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v2, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_39;
	try {
	//label_try_start_2e:
	sm->checkRead(sun::nio::fs::Util::toString(entry->dir()));
	//label_try_end_39:
	}
	catch (java::lang::SecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_42;
	}
	//    .catch Ljava/lang/SecurityException; {:try_start_2e .. :try_end_39} :catch_42
label_cond_39:
	try {
	//label_try_start_39:
	//label_try_end_3e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_40;
	}
	//    .catch Ljava/io/IOException; {:try_start_39 .. :try_end_3e} :catch_40
	return this->this_S_0->getFileStore(entry);
	// 191    .line 214
label_catch_40:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ignore":Ljava/io/IOException;
	goto label_goto_1f;
	// 198    .line 208
	// 199    .end local v1    # "ignore":Ljava/io/IOException;
label_catch_42:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "x":Ljava/lang/SecurityException;
	goto label_goto_1f;

}
// .method public declared-synchronized hasNext()Z
bool sun::nio::fs::UnixFileSystem_S_FileStoreIterator::hasNext()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	this->monitor_enter();
	try {
	//label_try_start_2:
	//label_try_end_4:
	}
	catch (...){
		goto label_catchall_16;
	}
	//    .catchall {:try_start_2 .. :try_end_4} :catchall_16
	if ( !(this->next) )  
		goto label_cond_8;
	this->monitor_exit();
	return cVar0;
	// 230    .line 224
label_cond_8:
	try {
	//label_try_start_8:
	this->next = this->readNext();
	//label_try_end_10:
	}
	catch (...){
		goto label_catchall_16;
	}
	//    .catchall {:try_start_8 .. :try_end_10} :catchall_16
	if ( !(this->next) )  
		goto label_cond_14;
label_goto_12:
	this->monitor_exit();
	return cVar0;
label_cond_14:
	cVar0 = 0x0;
	goto label_goto_12;
label_catchall_16:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized next()Ljava/nio/file/FileStore;
std::shared_ptr<java::nio::file::FileStore> sun::nio::fs::UnixFileSystem_S_FileStoreIterator::next()
{
	
	std::shared_ptr<java::util::NoSuchElementException> cVar0;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->next )     
		goto label_cond_b;
	this->next = this->readNext();
label_cond_b:
	if ( this->next )     
		goto label_cond_18;
	cVar0 = std::make_shared<java::util::NoSuchElementException>();
	// throw
	throw cVar0;
	// 307    :try_end_15
	// 308    .catchall {:try_start_1 .. :try_end_15} :catchall_15
label_catchall_15:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 317    .line 235
label_cond_18:
	try {
	//label_try_start_18:
	//    .local v0, "result":Ljava/nio/file/FileStore;
	this->next = 0x0;
	//label_try_end_1d:
	}
	catch (...){
		goto label_catchall_15;
	}
	//    .catchall {:try_start_18 .. :try_end_1d} :catchall_15
	this->monitor_exit();
	return this->next;

}
// .method public remove()V
void sun::nio::fs::UnixFileSystem_S_FileStoreIterator::remove()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}


