// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$ResourceCache$Level.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ResourceCache_S_Level.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ResourceCache.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.ref.SoftReference.h"

static android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level::static_cinit()
{
	
	android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level::_assertionsDisabled = ( android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>(II)V
android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level::ICUResourceBundleReader_S_ResourceCache_S_Level(int levelBitsList,int shift)
{
	
	int bits;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int length;
	
	//    .param p1, "levelBitsList"    # I
	//    .param p2, "shift"    # I
	// 059    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->levelBitsList = levelBitsList;
	this->shift = shift;
	bits = ( levelBitsList & 0xf);
	//    .local v0, "bits":I
	if ( android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level::_assertionsDisabled )     
		goto label_cond_15;
	if ( bits )     
		goto label_cond_15;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 084    .line 1188
label_cond_15:
	length = (0x1 << bits);
	//    .local v1, "length":I
	this->mask = ( length + -0x1);
	this->keys = std::make_shared<std::vector<int[]>>(length);
	this->values = std::make_shared<std::vector<std::vector<java::lang::Object>>>(length);
	return;

}
// .method get(I)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level::get(int key)
{
	
	int index;
	int k;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level> level;
	
	//    .param p1, "key"    # I
	index = (_shri(key,this->shift) & this->mask);
	//    .local v0, "index":I
	k = this->keys[index];
	//    .local v1, "k":I
	if ( k != key )
		goto label_cond_14;
	return this->values[index];
	// 145    .line 1200
label_cond_14:
	if ( k )     
		goto label_cond_23;
	level = this->values[index];
	level->checkCast("android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level");
	//    .local v2, "level":Landroid/icu/impl/ICUResourceBundleReader$ResourceCache$Level;
	if ( !(level) )  
		goto label_cond_23;
	return level->get(key);
	// 167    .line 1206
	// 168    .end local v2    # "level":Landroid/icu/impl/ICUResourceBundleReader$ResourceCache$Level;
label_cond_23:
	return 0x0;

}
// .method putIfAbsent(ILjava/lang/Object;I)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level::putIfAbsent(int key,std::shared_ptr<java::lang::Object> item,int size)
{
	
	int index;
	int k;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level> level;
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::ref::SoftReference> cVar0;
	int i;
	
	//    .param p1, "key"    # I
	//    .param p2, "item"    # Ljava/lang/Object;
	//    .param p3, "size"    # I
	index = (_shri(key,this->shift) & this->mask);
	//    .local v1, "index":I
	k = this->keys[index];
	//    .local v2, "k":I
	if ( k != key )
		goto label_cond_16;
	return android::icu::impl::ICUResourceBundleReader_S_ResourceCache::-wrap1(this->values, index, item, size);
	// 210    .line 1215
label_cond_16:
	if ( k )     
		goto label_cond_3b;
	level = this->values[index];
	level->checkCast("android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level");
	//    .local v3, "level":Landroid/icu/impl/ICUResourceBundleReader$ResourceCache$Level;
	if ( !(level) )  
		goto label_cond_25;
	return level->putIfAbsent(key, item, size);
	// 232    .line 1220
label_cond_25:
	this->keys[index] = key;
	if ( !(android::icu::impl::ICUResourceBundleReader_S_ResourceCache::-wrap0(size)) )  
		goto label_cond_35;
	cVar0 = item;
label_goto_32:
	this->values[index] = cVar0;
	return item;
	// 255    .line 1221
label_cond_35:
	cVar0 = std::make_shared<java::lang::ref::SoftReference>(item);
	goto label_goto_32;
	// 263    .line 1226
	// 264    .end local v3    # "level":Landroid/icu/impl/ICUResourceBundleReader$ResourceCache$Level;
label_cond_3b:
	level = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level>(_shri(this->levelBitsList,0x4), (this->shift +  ( this->levelBitsList & 0xf)));
	//    .restart local v3    # "level":Landroid/icu/impl/ICUResourceBundleReader$ResourceCache$Level;
	i = (_shri(k,level->shift) & level->mask);
	//    .local v0, "i":I
	level->keys[i] = k;
	level->values[i] = this->values[index];
	this->keys[index] = 0x0;
	this->values[index] = level;
	return level->putIfAbsent(key, item, size);

}


