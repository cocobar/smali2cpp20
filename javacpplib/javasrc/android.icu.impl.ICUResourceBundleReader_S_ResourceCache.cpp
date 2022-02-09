// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$ResourceCache.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheValue.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ResourceCache_S_Level.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ResourceCache.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.System.h"
#include "java.lang.ref.SoftReference.h"

static android::icu::impl::ICUResourceBundleReader_S_ResourceCache::_assertionsDisabled;
static android::icu::impl::ICUResourceBundleReader_S_ResourceCache::NEXT_BITS = 0x6;
static android::icu::impl::ICUResourceBundleReader_S_ResourceCache::ROOT_BITS = 0x7;
static android::icu::impl::ICUResourceBundleReader_S_ResourceCache::SIMPLE_LENGTH = 0x20;
// .method static synthetic -wrap0(I)Z
bool android::icu::impl::ICUResourceBundleReader_S_ResourceCache::_wrap0(int size)
{
	
	//    .param p0, "size"    # I
	return android::icu::impl::ICUResourceBundleReader_S_ResourceCache::storeDirectly(size);

}
// .method static synthetic -wrap1([Ljava/lang/Object;ILjava/lang/Object;I)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUResourceBundleReader_S_ResourceCache::_wrap1(std::shared_ptr<std::vector<java::lang::Object>> values,int index,std::shared_ptr<java::lang::Object> item,int size)
{
	
	//    .param p0, "values"    # [Ljava/lang/Object;
	//    .param p1, "index"    # I
	//    .param p2, "item"    # Ljava/lang/Object;
	//    .param p3, "size"    # I
	return android::icu::impl::ICUResourceBundleReader_S_ResourceCache::putIfCleared(values, index, item, size);

}
// .method static constructor <clinit>()V
void android::icu::impl::ICUResourceBundleReader_S_ResourceCache::static_cinit()
{
	
	android::icu::impl::ICUResourceBundleReader_S_ResourceCache::_assertionsDisabled = ( android::icu::impl::ICUResourceBundleReader_S_ResourceCache()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>(I)V
android::icu::impl::ICUResourceBundleReader_S_ResourceCache::ICUResourceBundleReader_S_ResourceCache(int maxOffset)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	int maxOffset;
	int keyBits;
	int shift;
	
	//    .param p1, "maxOffset"    # I
	cVar0 = 0x20;
	cVar1 = 0x7;
	cVar2 = 0x6;
	// 105    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->keys = std::make_shared<std::vector<int[]>>(cVar0);
	this->values = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	if ( android::icu::impl::ICUResourceBundleReader_S_ResourceCache::_assertionsDisabled )     
		goto label_cond_1b;
	if ( maxOffset )     
		goto label_cond_1b;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 130    .line 1238
label_cond_1b:
	this->maxOffsetBits = 0x1c;
label_goto_1f:
	if ( maxOffset >  0x7ffffff )
		goto label_cond_2d;
	maxOffset = ( maxOffset << 0x1);
	this->maxOffsetBits = ( this->maxOffsetBits + -0x1);
	goto label_goto_1f;
	// 154    .line 1243
label_cond_2d:
	keyBits = ( this->maxOffsetBits + 0x2);
	//    .local v0, "keyBits":I
	if ( keyBits >  cVar1 )
		goto label_cond_36;
	this->levelBitsList = keyBits;
label_goto_35:
	return;
	// 171    .line 1247
label_cond_36:
	if ( keyBits >= 0xa )
		goto label_cond_41;
	this->levelBitsList = ( ( keyBits + -0x3) | 0x30);
	goto label_goto_35;
	// 186    .line 1250
label_cond_41:
	this->levelBitsList = cVar1;
	keyBits = ( keyBits + -0x7);
	shift = 0x4;
	//    .local v1, "shift":I
label_goto_46:
	if ( keyBits >  cVar2 )
		goto label_cond_50;
	this->levelBitsList = (this->levelBitsList |  (keyBits << shift));
	goto label_goto_35;
	// 212    .line 1257
label_cond_50:
	if ( keyBits >= 0x9 )
		goto label_cond_5f;
	this->levelBitsList = (this->levelBitsList |  (( ( keyBits + -0x3) | 0x30) << shift));
	goto label_goto_35;
	// 233    .line 1261
label_cond_5f:
	this->levelBitsList = (this->levelBitsList |  (cVar2 << shift));
	keyBits = ( keyBits + -0x6);
	shift = ( shift + 0x4);
	goto label_goto_46;

}
// .method private findSimple(I)I
int android::icu::impl::ICUResourceBundleReader_S_ResourceCache::findSimple(int key)
{
	
	int start;
	int limit;
	int mid;
	int k;
	
	//    .param p1, "key"    # I
	start = 0x0;
	//    .local v3, "start":I
	limit = this->length;
	//    .local v1, "limit":I
label_goto_3:
	if ( (limit - start) <= 0x8 )
		goto label_cond_19;
	mid = ( (start + limit) / 0x2);
	//    .local v2, "mid":I
	if ( key >= this->keys[mid] )
		goto label_cond_15;
	limit = mid;
	goto label_goto_3;
	// 291    .line 1298
label_cond_15:
	start = mid;
	goto label_goto_3;
	// 297    .line 1310
	// 298    .end local v2    # "mid":I
	// 299    .local v0, "k":I
label_cond_17:
	start = ( start + 0x1);
	//    .end local v0    # "k":I
label_cond_19:
	if ( start >= limit )
		goto label_cond_26;
	k = this->keys[start];
	//    .restart local v0    # "k":I
	if ( key >= k )
		goto label_cond_23;
	return (~start);
	// 322    .line 1307
label_cond_23:
	if ( key != k )
		goto label_cond_17;
	return start;
	// 329    .line 1312
	// 330    .end local v0    # "k":I
label_cond_26:
	return (~start);

}
// .method private makeKey(I)I
int android::icu::impl::ICUResourceBundleReader_S_ResourceCache::makeKey(int res)
{
	
	int type;
	
	//    .param p1, "res"    # I
	type = android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(res);
	//    .local v1, "type":I
	if ( type != 0x6 )
		goto label_cond_12;
	//    .local v0, "miniType":I
label_goto_8:
	return (android::icu::impl::ICUResourceBundleReader::-wrap3(res) |  (miniType << this->maxOffsetBits));
	// 370    .line 1284
	// 371    .end local v0    # "miniType":I
label_cond_12:
	if ( type != 0x5 )
		goto label_cond_17;
	//    .restart local v0    # "miniType":I
	goto label_goto_8;
	// 382    .line 1285
	// 383    .end local v0    # "miniType":I
label_cond_17:
	if ( type != 0x9 )
		goto label_cond_1d;
	//    .restart local v0    # "miniType":I
	goto label_goto_8;
	// 394    .end local v0    # "miniType":I
label_cond_1d:
	//    .restart local v0    # "miniType":I
	goto label_goto_8;

}
// .method private static final putIfCleared([Ljava/lang/Object;ILjava/lang/Object;I)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUResourceBundleReader_S_ResourceCache::putIfCleared(std::shared_ptr<std::vector<java::lang::Object>> values,int index,std::shared_ptr<java::lang::Object> item,int size)
{
	
	std::shared_ptr<java::lang::ref::SoftReference> value;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::Object> value;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::lang::ref::SoftReference> cVar1;
	
	//    .param p0, "values"    # [Ljava/lang/Object;
	//    .param p1, "index"    # I
	//    .param p2, "item"    # Ljava/lang/Object;
	//    .param p3, "size"    # I
	value = values[index];
	//    .local v0, "value":Ljava/lang/Object;
	if ( value->instanceOf("java::lang::ref::SoftReference") )     
		goto label_cond_7;
	return value;
	// 422    .line 1166
label_cond_7:
	if ( android::icu::impl::ICUResourceBundleReader_S_ResourceCache::_assertionsDisabled )     
		goto label_cond_15;
	if ( size >= 0x18 )
		goto label_cond_15;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 438    .line 1167
label_cond_15:
	value->checkCast("java::lang::ref::SoftReference");
	//    .end local v0    # "value":Ljava/lang/Object;
	value = value->get();
	//    .restart local v0    # "value":Ljava/lang/Object;
	if ( !(value) )  
		goto label_cond_1e;
	return value;
	// 454    .line 1171
label_cond_1e:
	if ( !(android::icu::impl::CacheValue::futureInstancesWillBeStrong({const[class].FS-Param})) )  
		goto label_cond_28;
	cVar1 = item;
label_goto_25:
	values[index] = cVar1;
	return item;
	// 470    .line 1172
label_cond_28:
	cVar1 = std::make_shared<java::lang::ref::SoftReference>(item);
	goto label_goto_25;

}
// .method private static storeDirectly(I)Z
bool android::icu::impl::ICUResourceBundleReader_S_ResourceCache::storeDirectly(int size)
{
	
	bool cVar0;
	
	//    .param p0, "size"    # I
	if ( size <  0x18 )
		goto label_cond_9;
	cVar0 = android::icu::impl::CacheValue::futureInstancesWillBeStrong({const[class].FS-Param});
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x1;
	goto label_goto_8;

}
// .method declared-synchronized get(I)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUResourceBundleReader_S_ResourceCache::get(int res)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int index;
	std::shared_ptr<java::lang::ref::SoftReference> value;
	
	//    .param p1, "res"    # I
	cVar0 = 0x0;
	this->monitor_enter();
	try {
	//label_try_start_2:
	if ( android::icu::impl::ICUResourceBundleReader_S_ResourceCache::_assertionsDisabled )     
		goto label_cond_15;
	if ( android::icu::impl::ICUResourceBundleReader::-wrap3(res) )     
		goto label_cond_15;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 530    :try_end_12
	// 531    .catchall {:try_start_2 .. :try_end_12} :catchall_12
label_catchall_12:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 540    .line 1321
label_cond_15:
	try {
	//label_try_start_15:
	if ( this->length < 0 ) 
		goto label_cond_31;
	index = this->findSimple(res);
	//    .local v0, "index":I
	if ( index < 0 ) 
		goto label_cond_2f;
	value = this->values[index];
	//    .end local v0    # "index":I
	//    .local v1, "value":Ljava/lang/Object;
label_cond_23:
	if ( !(value->instanceOf("java::lang::ref::SoftReference")) )  
		goto label_cond_2d;
	value->checkCast("java::lang::ref::SoftReference");
	//    .end local v1    # "value":Ljava/lang/Object;
	//label_try_end_2c:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_15 .. :try_end_2c} :catchall_12
	//    .restart local v1    # "value":Ljava/lang/Object;
label_cond_2d:
	this->monitor_exit();
	return value;
	// 586    .end local v1    # "value":Ljava/lang/Object;
	// 587    .restart local v0    # "index":I
label_cond_2f:
	this->monitor_exit();
	return cVar0;
	// 594    .line 1329
	// 595    .end local v0    # "index":I
label_cond_31:
	try {
	//label_try_start_31:
	//label_try_end_3a:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_31 .. :try_end_3a} :catchall_12
	value = this->rootLevel->get(this->makeKey(res));
	//    .restart local v1    # "value":Ljava/lang/Object;
	if ( value )     
		goto label_cond_23;
	this->monitor_exit();
	return cVar0;

}
// .method declared-synchronized putIfAbsent(ILjava/lang/Object;I)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUResourceBundleReader_S_ResourceCache::putIfAbsent(int res,std::shared_ptr<java::lang::Object> item,int size)
{
	
	int cVar0;
	int index;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::lang::ref::SoftReference> cVar1;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level> cVar3;
	int i;
	
	//    .param p1, "res"    # I
	//    .param p2, "item"    # Ljava/lang/Object;
	//    .param p3, "size"    # I
	cVar0 = 0x20;
	this->monitor_enter();
	try {
	//label_try_start_3:
	if ( this->length < 0 ) 
		goto label_cond_81;
	index = this->findSimple(res);
	//    .local v1, "index":I
	if ( index < 0 ) 
		goto label_cond_15;
	//label_try_end_12:
	}
	catch (...){
		goto label_catchall_53;
	}
	//    .catchall {:try_start_3 .. :try_end_12} :catchall_53
	this->monitor_exit();
	return android::icu::impl::ICUResourceBundleReader_S_ResourceCache::putIfCleared(this->values, index, item, size);
	// 659    .line 1345
label_cond_15:
	try {
	//label_try_start_15:
	if ( this->length >= cVar0 )
		goto label_cond_56;
	index = (~index);
	if ( index >= this->length )
		goto label_cond_36;
	java::lang::System::arraycopy(this->keys, index, this->keys, ( index + 0x1), (this->length -  index));
	java::lang::System::arraycopy(this->values, index, this->values, ( index + 0x1), (this->length -  index));
label_cond_36:
	this->length = ( this->length + 0x1);
	this->keys[index] = res;
	if ( !(android::icu::impl::ICUResourceBundleReader_S_ResourceCache::storeDirectly(size)) )  
		goto label_cond_4d;
	cVar1 = item;
label_goto_49:
	this->values[index] = cVar1;
	//label_try_end_4b:
	}
	catch (...){
		goto label_catchall_53;
	}
	//    .catchall {:try_start_15 .. :try_end_4b} :catchall_53
	this->monitor_exit();
	return item;
	// 734    .line 1353
label_cond_4d:
	try {
	//label_try_start_4d:
	cVar1 = std::make_shared<java::lang::ref::SoftReference>(item);
	//label_try_end_52:
	}
	catch (...){
		goto label_catchall_53;
	}
	//    .catchall {:try_start_4d .. :try_end_52} :catchall_53
	goto label_goto_49;
	// 745    .end local v1    # "index":I
label_catchall_53:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 753    .line 1357
	// 754    .restart local v1    # "index":I
label_cond_56:
	try {
	//label_try_start_56:
	cVar3 = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level>(this->levelBitsList, 0x0);
	this->rootLevel = cVar3;
	i = 0x0;
	//    .local v0, "i":I
label_goto_61:
	if ( i >= cVar0 )
		goto label_cond_78;
	this->rootLevel->putIfAbsent(this->makeKey(this->keys[i]), this->values[i], 0x0);
	i = ( i + 0x1);
	goto label_goto_61;
	// 798    .line 1361
label_cond_78:
	this->keys = 0x0;
	this->values = 0x0;
	this->length = -0x1;
	//    .end local v0    # "i":I
	//    .end local v1    # "index":I
label_cond_81:
	//label_try_end_8a:
	}
	catch (...){
		goto label_catchall_53;
	}
	//    .catchall {:try_start_56 .. :try_end_8a} :catchall_53
	this->monitor_exit();
	return this->rootLevel->putIfAbsent(this->makeKey(res), item, size);

}


