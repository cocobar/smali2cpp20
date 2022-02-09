// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICURWLock.smali
#include "java2ctype.h"
#include "android.icu.impl.ICURWLock_S_Stats.h"
#include "android.icu.impl.ICURWLock.h"
#include "java.util.concurrent.locks.ReentrantReadWriteLock_S_ReadLock.h"
#include "java.util.concurrent.locks.ReentrantReadWriteLock_S_WriteLock.h"
#include "java.util.concurrent.locks.ReentrantReadWriteLock.h"

// .method public constructor <init>()V
android::icu::impl::ICURWLock::ICURWLock()
{
	
	std::shared_ptr<java::util::concurrent::locks::ReentrantReadWriteLock> cVar0;
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::concurrent::locks::ReentrantReadWriteLock>();
	this->rwl = cVar0;
	this->stats = 0x0;
	return;

}
// .method public acquireRead()V
void android::icu::impl::ICURWLock::acquireRead()
{
	
	std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> cVar0;
	std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> cVar1;
	std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> cVar2;
	
	if ( !(this->stats) )  
		goto label_cond_2e;
	this->monitor_enter();
	try {
	//label_try_start_5:
	cVar0 = this->stats;
	cVar0->_rc = ( cVar0->_rc + 0x1);
	if ( this->rwl->getReadLockCount() <= 0 )
		goto label_cond_1d;
	cVar1 = this->stats;
	cVar1->_mrc = ( cVar1->_mrc + 0x1);
label_cond_1d:
	if ( !(this->rwl->isWriteLocked()) )  
		goto label_cond_2d;
	cVar2 = this->stats;
	cVar2->_wrc = ( cVar2->_wrc + 0x1);
	//label_try_end_2d:
	}
	catch (...){
		goto label_catchall_38;
	}
	//    .catchall {:try_start_5 .. :try_end_2d} :catchall_38
label_cond_2d:
	this->monitor_exit();
label_cond_2e:
	this->rwl->readLock()->lock();
	return;
	// 123    .line 140
label_catchall_38:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public acquireWrite()V
void android::icu::impl::ICURWLock::acquireWrite()
{
	
	std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> cVar0;
	std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> cVar1;
	
	if ( !(this->stats) )  
		goto label_cond_26;
	this->monitor_enter();
	try {
	//label_try_start_5:
	cVar0 = this->stats;
	cVar0->_wc = ( cVar0->_wc + 0x1);
	if ( this->rwl->getReadLockCount() > 0 ) 
		goto label_cond_1d;
	if ( !(this->rwl->isWriteLocked()) )  
		goto label_cond_25;
label_cond_1d:
	cVar1 = this->stats;
	cVar1->_wwc = ( cVar1->_wwc + 0x1);
	//label_try_end_25:
	}
	catch (...){
		goto label_catchall_30;
	}
	//    .catchall {:try_start_5 .. :try_end_25} :catchall_30
label_cond_25:
	this->monitor_exit();
label_cond_26:
	this->rwl->writeLock()->lock();
	return;
	// 199    .line 178
label_catchall_30:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized clearStats()Landroid/icu/impl/ICURWLock$Stats;
std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> android::icu::impl::ICURWLock::clearStats()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//    .local v0, "result":Landroid/icu/impl/ICURWLock$Stats;
	this->stats = 0x0;
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_8;
	}
	//    .catchall {:try_start_1 .. :try_end_6} :catchall_8
	this->monitor_exit();
	return this->stats;
	// 231    .end local v0    # "result":Landroid/icu/impl/ICURWLock$Stats;
label_catchall_8:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized getStats()Landroid/icu/impl/ICURWLock$Stats;
std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> android::icu::impl::ICURWLock::getStats()
{
	
	std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> cVar0;
	
	cVar0 = 0x0;
	this->monitor_enter();
	try {
	//label_try_start_2:
	//label_try_end_4:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_2 .. :try_end_4} :catchall_11
	if ( this->stats )     
		goto label_cond_8;
label_goto_6:
	this->monitor_exit();
	return cVar0;
label_cond_8:
	try {
	//label_try_start_8:
	cVar0 = std::make_shared<android::icu::impl::ICURWLock_S_Stats>(this->stats, 0x0);
	//label_try_end_10:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_8 .. :try_end_10} :catchall_11
	goto label_goto_6;
label_catchall_11:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public releaseRead()V
void android::icu::impl::ICURWLock::releaseRead()
{
	
	this->rwl->readLock()->unlock();
	return;

}
// .method public releaseWrite()V
void android::icu::impl::ICURWLock::releaseWrite()
{
	
	this->rwl->writeLock()->unlock();
	return;

}
// .method public declared-synchronized resetStats()Landroid/icu/impl/ICURWLock$Stats;
std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> android::icu::impl::ICURWLock::resetStats()
{
	
	std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> cVar0;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//    .local v0, "result":Landroid/icu/impl/ICURWLock$Stats;
	cVar0 = std::make_shared<android::icu::impl::ICURWLock_S_Stats>(0x0, 0x0, 0x0);
	this->stats = cVar0;
	//label_try_end_d:
	}
	catch (...){
		goto label_catchall_f;
	}
	//    .catchall {:try_start_1 .. :try_end_d} :catchall_f
	this->monitor_exit();
	return this->stats;
	// 348    .end local v0    # "result":Landroid/icu/impl/ICURWLock$Stats;
label_catchall_f:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


