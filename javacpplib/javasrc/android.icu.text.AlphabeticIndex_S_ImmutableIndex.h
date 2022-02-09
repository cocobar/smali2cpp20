#ifndef __android_icu_text_AlphabeticIndex_S_ImmutableIndex__
#define __android_icu_text_AlphabeticIndex_S_ImmutableIndex__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AlphabeticIndex$ImmutableIndex.smali
#include "java2ctype.h"
#include "android.icu.text.AlphabeticIndex_S_Bucket.h"
#include "android.icu.text.AlphabeticIndex_S_BucketList.h"
#include "android.icu.text.Collator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

namespace android::icu::text{
template <typename V>
class AlphabeticIndex_S_ImmutableIndex : public java::lang::Iterable<android::icu::text::AlphabeticIndex_S_Bucket<V>> {
protected:
private:
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> buckets;
	std::shared_ptr<android::icu::text::Collator> collatorPrimaryOnly;
	AlphabeticIndex_S_ImmutableIndex(std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> bucketList,std::shared_ptr<android::icu::text::Collator> collatorPrimaryOnly);
public:
	AlphabeticIndex_S_ImmutableIndex(std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList> bucketList,std::shared_ptr<android::icu::text::Collator> collatorPrimaryOnly,std::shared_ptr<android::icu::text::AlphabeticIndex_S_ImmutableIndex<V>> _this2);
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> getBucket(int index);
	int getBucketCount();
	int getBucketIndex(std::shared_ptr<java::lang::CharSequence> name);
	std::shared_ptr<java::util::Iterator<android::icu::text::AlphabeticIndex_S_Bucket<V>>> iterator();
public:
	virtual ~AlphabeticIndex_S_ImmutableIndex(){
	}

}; // class AlphabeticIndex_S_ImmutableIndex
}; // namespace android::icu::text
// .method private constructor <init>(Landroid/icu/text/AlphabeticIndex$BucketList;Landroid/icu/text/Collator;)V
template <typename V>
android::icu::text::AlphabeticIndex_S_ImmutableIndex<V>::AlphabeticIndex_S_ImmutableIndex(std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> bucketList,std::shared_ptr<android::icu::text::Collator> collatorPrimaryOnly)
{
	
	//    .param p2, "collatorPrimaryOnly"    # Landroid/icu/text/Collator;
	//    .annotation system Ldalvik/annotation/Signature;
	// 051        value = {
	// 052            "(",
	// 053            "Landroid/icu/text/AlphabeticIndex$BucketList",
	// 054            "<TV;>;",
	// 055            "Landroid/icu/text/Collator;",
	// 056            ")V"
	// 057        }
	// 058    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$ImmutableIndex;, "Landroid/icu/text/AlphabeticIndex$ImmutableIndex<TV;>;"
	//    .local p1, "bucketList":Landroid/icu/text/AlphabeticIndex$BucketList;, "Landroid/icu/text/AlphabeticIndex$BucketList<TV;>;"
	// 064    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->buckets = bucketList;
	this->collatorPrimaryOnly = collatorPrimaryOnly;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/AlphabeticIndex$BucketList;Landroid/icu/text/Collator;Landroid/icu/text/AlphabeticIndex$ImmutableIndex;)V
template <typename V>
android::icu::text::AlphabeticIndex_S_ImmutableIndex<V>::AlphabeticIndex_S_ImmutableIndex(std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList> bucketList,std::shared_ptr<android::icu::text::Collator> collatorPrimaryOnly,std::shared_ptr<android::icu::text::AlphabeticIndex_S_ImmutableIndex<V>> _this2)
{
	
	//    .param p1, "bucketList"    # Landroid/icu/text/AlphabeticIndex$BucketList;
	//    .param p2, "collatorPrimaryOnly"    # Landroid/icu/text/Collator;
	//    .param p3, "-this2"    # Landroid/icu/text/AlphabeticIndex$ImmutableIndex;
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$ImmutableIndex;, "Landroid/icu/text/AlphabeticIndex$ImmutableIndex<TV;>;"
	android::icu::text::AlphabeticIndex_S_ImmutableIndex<V>::(bucketList, collatorPrimaryOnly);
	return;

}
// .method public getBucket(I)Landroid/icu/text/AlphabeticIndex$Bucket;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> android::icu::text::AlphabeticIndex_S_ImmutableIndex<V>::getBucket(int index)
{
	
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> cVar0;
	
	//    .param p1, "index"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 095        value = {
	// 096            "(I)",
	// 097            "Landroid/icu/text/AlphabeticIndex$Bucket",
	// 098            "<TV;>;"
	// 099        }
	// 100    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$ImmutableIndex;, "Landroid/icu/text/AlphabeticIndex$ImmutableIndex<TV;>;"
	if ( index < 0 ) 
		goto label_cond_17;
	if ( index >= android::icu::text::AlphabeticIndex_S_BucketList::-wrap0(this->buckets) )
		goto label_cond_17;
	cVar0 = android::icu::text::AlphabeticIndex_S_BucketList::-get0(this->buckets)->get(index);
	cVar0->checkCast("android::icu::text::AlphabeticIndex_S_Bucket");
	return cVar0;
	// 130    .line 210
	label_cond_17:
	return 0x0;

}
// .method public getBucketCount()I
template <typename V>
int android::icu::text::AlphabeticIndex_S_ImmutableIndex<V>::getBucketCount()
{
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$ImmutableIndex;, "Landroid/icu/text/AlphabeticIndex$ImmutableIndex<TV;>;"
	return android::icu::text::AlphabeticIndex_S_BucketList::-wrap0(this->buckets);

}
// .method public getBucketIndex(Ljava/lang/CharSequence;)I
template <typename V>
int android::icu::text::AlphabeticIndex_S_ImmutableIndex<V>::getBucketIndex(std::shared_ptr<java::lang::CharSequence> name)
{
	
	//    .param p1, "name"    # Ljava/lang/CharSequence;
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$ImmutableIndex;, "Landroid/icu/text/AlphabeticIndex$ImmutableIndex<TV;>;"
	return android::icu::text::AlphabeticIndex_S_BucketList::-wrap1(this->buckets, name, this->collatorPrimaryOnly);

}
// .method public iterator()Ljava/util/Iterator;
template <typename V>
std::shared_ptr<java::util::Iterator<android::icu::text::AlphabeticIndex_S_Bucket<V>>> android::icu::text::AlphabeticIndex_S_ImmutableIndex<V>::iterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 173        value = {
	// 174            "()",
	// 175            "Ljava/util/Iterator",
	// 176            "<",
	// 177            "Landroid/icu/text/AlphabeticIndex$Bucket",
	// 178            "<TV;>;>;"
	// 179        }
	// 180    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$ImmutableIndex;, "Landroid/icu/text/AlphabeticIndex$ImmutableIndex<TV;>;"
	return this->buckets->iterator();

}

#endif //__android_icu_text_AlphabeticIndex_S_ImmutableIndex__

