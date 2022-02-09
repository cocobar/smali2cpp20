// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarCache.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarCache.h"

static android::icu::impl::CalendarCache::EMPTY;
static android::icu::impl::CalendarCache::primes;
// .method static constructor <clinit>()V
void android::icu::impl::CalendarCache::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0xc);
	?;
	android::icu::impl::CalendarCache::primes = cVar0;
	android::icu::impl::CalendarCache::EMPTY = -0x8000000000000000L;
	return;
	// 048    .line 113
	// 049    :array_e
	// 050    .array-data 4
	// 051        0x3d
	// 052        0x7f
	// 053        0x1fd
	// 054        0x3fd
	// 055        0x7f7
	// 056        0xffd
	// 057        0x1fff
	// 058        0x3ffd
	// 059        0x7fed
	// 060        0xfff1
	// 061        0x1ffff
	// 062        0x3fffb
	// 063    .end array-data

}
// .method public constructor <init>()V
android::icu::impl::CalendarCache::CalendarCache()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	// 073    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->pIndex = cVar0;
	this->size = cVar0;
	this->arraySize = android::icu::impl::CalendarCache::primes[this->pIndex];
	this->threshold = ( ( this->arraySize * 0x3) / 0x4);
	this->keys = std::make_shared<std::vector<long long[]>>(this->arraySize);
	this->values = std::make_shared<std::vector<long long[]>>(this->arraySize);
	this->makeArrays(this->arraySize);
	return;

}
// .method private final findIndex(J)I
int android::icu::impl::CalendarCache::findIndex(long long key)
{
	
	int index;
	int delta;
	
	//    .param p1, "key"    # J
	index = this->hash(key);
	//    .local v1, "index":I
	delta = 0x0;
	//    .local v0, "delta":I
label_goto_5:
	if ( !((this->values[index] > android::icu::impl::CalendarCache::EMPTY)) )  
		goto label_cond_24;
	if ( !((this->keys[index] > key)) )  
		goto label_cond_24;
	if ( delta )     
		goto label_cond_1d;
	delta = this->hash2(key);
label_cond_1d:
	index = ((index + delta) % this->arraySize);
	goto label_goto_5;
	// 175    .line 70
label_cond_24:
	return index;

}
// .method private final hash(J)I
int android::icu::impl::CalendarCache::hash(long long key)
{
	
	int h;
	
	//    .param p1, "key"    # J
	h = (int)((((0x3dcd *  key) +  0x1) %  (long long)(this->arraySize)));
	//    .local v0, "h":I
	if ( h >= 0 )
		goto label_cond_10;
label_cond_10:
	return h;

}
// .method private final hash2(J)I
int android::icu::impl::CalendarCache::hash2(long long key)
{
	
	//    .param p1, "key"    # J
	return (( this->arraySize + -0x2) -  (int)((key % (long long)(( this->arraySize + -0x2)))));

}
// .method private makeArrays(I)V
void android::icu::impl::CalendarCache::makeArrays(int newSize)
{
	
	int i;
	
	//    .param p1, "newSize"    # I
	this->keys = std::make_shared<std::vector<long long[]>>(newSize);
	this->values = std::make_shared<std::vector<long long[]>>(newSize);
	i = 0x0;
	//    .local v0, "i":I
label_goto_9:
	if ( i >= newSize )
		goto label_cond_14;
	this->values[i] = android::icu::impl::CalendarCache::EMPTY;
	i = ( i + 0x1);
	goto label_goto_9;
	// 275    .line 32
label_cond_14:
	this->arraySize = newSize;
	this->threshold = (int)(( (double)(this->arraySize) * 0x3fe8000000000000L));
	this->size = 0x0;
	return;

}
// .method private rehash()V
void android::icu::impl::CalendarCache::rehash()
{
	
	std::shared_ptr<long long[]> oldValues;
	int cVar0;
	int i;
	
	//    .local v2, "oldSize":I
	//    .local v1, "oldKeys":[J
	oldValues = this->values;
	//    .local v3, "oldValues":[J
	if ( this->pIndex >= ( android::icu::impl::CalendarCache::primes->size() + -0x1) )
		goto label_cond_38;
	cVar0 = ( this->pIndex + 0x1);
	this->pIndex = cVar0;
	this->arraySize = android::icu::impl::CalendarCache::primes[cVar0];
label_goto_1b:
	this->size = 0x0;
	this->makeArrays(this->arraySize);
	i = 0x0;
	//    .local v0, "i":I
label_goto_24:
	if ( i >= this->arraySize )
		goto label_cond_41;
	if ( !((oldValues[i] > android::icu::impl::CalendarCache::EMPTY)) )  
		goto label_cond_35;
	this->put(this->keys[i], oldValues[i]);
label_cond_35:
	i = ( i + 0x1);
	goto label_goto_24;
	// 381    .line 82
	// 382    .end local v0    # "i":I
label_cond_38:
	this->arraySize = ( ( this->arraySize * 0x2) + 0x1);
	goto label_goto_1b;
	// 394    .line 92
	// 395    .restart local v0    # "i":I
label_cond_41:
	return;

}
// .method public declared-synchronized get(J)J
long long android::icu::impl::CalendarCache::get(long long key)
{
	
	//    .param p1, "key"    # J
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_1 .. :try_end_9} :catchall_b
	this->monitor_exit();
	return this->values[this->findIndex(key)];
label_catchall_b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized put(JJ)V
void android::icu::impl::CalendarCache::put(long long key,long long value)
{
	
	int index;
	
	//    .param p1, "key"    # J
	//    .param p3, "value"    # J
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->size <  this->threshold )
		goto label_cond_a;
	this->rehash();
label_cond_a:
	index = this->findIndex(key);
	//    .local v0, "index":I
	this->keys[index] = key;
	this->values[index] = value;
	this->size = ( this->size + 0x1);
	//label_try_end_1c:
	}
	catch (...){
		goto label_catchall_1e;
	}
	//    .catchall {:try_start_1 .. :try_end_1c} :catchall_1e
	this->monitor_exit();
	return;
	// 483    .end local v0    # "index":I
label_catchall_1e:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


