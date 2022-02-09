#ifndef __android_icu_text_AlphabeticIndex_S_BucketList__
#define __android_icu_text_AlphabeticIndex_S_BucketList__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AlphabeticIndex$BucketList.smali
#include "java2ctype.h"
#include "android.icu.text.AlphabeticIndex_S_Bucket.h"
#include "android.icu.text.Collator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

namespace android::icu::text{
template <typename V>
class AlphabeticIndex_S_BucketList : public java::lang::Iterable<android::icu::text::AlphabeticIndex_S_Bucket<V>> {
protected:
private:
	std::shared_ptr<java::util::ArrayList<android::icu::text::AlphabeticIndex_S_Bucket<V>>> bucketList;
	std::shared_ptr<java::util::List<android::icu::text::AlphabeticIndex_S_Bucket<V>>> immutableVisibleList;
	AlphabeticIndex_S_BucketList(std::shared_ptr<java::util::ArrayList<android::icu::text::AlphabeticIndex_S_Bucket<V>>> bucketList,std::shared_ptr<java::util::ArrayList<android::icu::text::AlphabeticIndex_S_Bucket<V>>> publicBucketList);
	std::shared_ptr<java::util::Iterator<android::icu::text::AlphabeticIndex_S_Bucket<V>>> fullIterator();
	int getBucketCount();
	int getBucketIndex(std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<android::icu::text::Collator> collatorPrimaryOnly);
public:
	static std::shared_ptr<java::util::List> _get0(std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> _this);
	static int _wrap0(std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> _this);
	static int _wrap1(std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> _this,std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<android::icu::text::Collator> collatorPrimaryOnly);
	static std::shared_ptr<java::util::Iterator> _wrap2(std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> _this);
	AlphabeticIndex_S_BucketList(std::shared_ptr<java::util::ArrayList> bucketList,std::shared_ptr<java::util::ArrayList> publicBucketList,std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> _this2);
	std::shared_ptr<java::util::Iterator<android::icu::text::AlphabeticIndex_S_Bucket<V>>> iterator();
public:
	virtual ~AlphabeticIndex_S_BucketList(){
	}

}; // class AlphabeticIndex_S_BucketList
}; // namespace android::icu::text
// .method static synthetic -get0(Landroid/icu/text/AlphabeticIndex$BucketList;)Ljava/util/List;
template <typename V>
std::shared_ptr<java::util::List> android::icu::text::AlphabeticIndex_S_BucketList<V>::_get0(std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex$BucketList;
	return _this->immutableVisibleList;

}
// .method static synthetic -wrap0(Landroid/icu/text/AlphabeticIndex$BucketList;)I
template <typename V>
int android::icu::text::AlphabeticIndex_S_BucketList<V>::_wrap0(std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex$BucketList;
	return _this->getBucketCount();

}
// .method static synthetic -wrap1(Landroid/icu/text/AlphabeticIndex$BucketList;Ljava/lang/CharSequence;Landroid/icu/text/Collator;)I
template <typename V>
int android::icu::text::AlphabeticIndex_S_BucketList<V>::_wrap1(std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> _this,std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<android::icu::text::Collator> collatorPrimaryOnly)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex$BucketList;
	//    .param p1, "name"    # Ljava/lang/CharSequence;
	//    .param p2, "collatorPrimaryOnly"    # Landroid/icu/text/Collator;
	return _this->getBucketIndex(name, collatorPrimaryOnly);

}
// .method static synthetic -wrap2(Landroid/icu/text/AlphabeticIndex$BucketList;)Ljava/util/Iterator;
template <typename V>
std::shared_ptr<java::util::Iterator> android::icu::text::AlphabeticIndex_S_BucketList<V>::_wrap2(std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex$BucketList;
	return _this->fullIterator();

}
// .method private constructor <init>(Ljava/util/ArrayList;Ljava/util/ArrayList;)V
template <typename V>
android::icu::text::AlphabeticIndex_S_BucketList<V>::AlphabeticIndex_S_BucketList(std::shared_ptr<java::util::ArrayList<android::icu::text::AlphabeticIndex_S_Bucket<V>>> bucketList,std::shared_ptr<java::util::ArrayList<android::icu::text::AlphabeticIndex_S_Bucket<V>>> publicBucketList)
{
	
	int displayIndex;
	std::shared_ptr<java::util::Iterator> bucket_S_iterator;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> bucket;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 109        value = {
	// 110            "(",
	// 111            "Ljava/util/ArrayList",
	// 112            "<",
	// 113            "Landroid/icu/text/AlphabeticIndex$Bucket",
	// 114            "<TV;>;>;",
	// 115            "Ljava/util/ArrayList",
	// 116            "<",
	// 117            "Landroid/icu/text/AlphabeticIndex$Bucket",
	// 118            "<TV;>;>;)V"
	// 119        }
	// 120    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$BucketList;, "Landroid/icu/text/AlphabeticIndex$BucketList<TV;>;"
	//    .local p1, "bucketList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;>;"
	//    .local p2, "publicBucketList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;>;"
	// 127    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->bucketList = bucketList;
	displayIndex = 0x0;
	//    .local v2, "displayIndex":I
	bucket_S_iterator = publicBucketList->iterator();
	//    .local v1, "bucket$iterator":Ljava/util/Iterator;
	label_goto_a:
	if ( !(bucket_S_iterator->hasNext()) )  
		goto label_cond_1d;
	bucket = bucket_S_iterator->next();
	bucket->checkCast("android::icu::text::AlphabeticIndex_S_Bucket");
	//    .local v0, "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	//    .end local v2    # "displayIndex":I
	//    .local v3, "displayIndex":I
	android::icu::text::AlphabeticIndex_S_Bucket::-set1(bucket, displayIndex);
	displayIndex = ( displayIndex + 0x1);
	//    .end local v3    # "displayIndex":I
	//    .restart local v2    # "displayIndex":I
	goto label_goto_a;
	// 169    .line 1112
	// 170    .end local v0    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	label_cond_1d:
	this->immutableVisibleList = java::util::Collections::unmodifiableList(publicBucketList);
	return;

}
// .method synthetic constructor <init>(Ljava/util/ArrayList;Ljava/util/ArrayList;Landroid/icu/text/AlphabeticIndex$BucketList;)V
template <typename V>
android::icu::text::AlphabeticIndex_S_BucketList<V>::AlphabeticIndex_S_BucketList(std::shared_ptr<java::util::ArrayList> bucketList,std::shared_ptr<java::util::ArrayList> publicBucketList,std::shared_ptr<android::icu::text::AlphabeticIndex_S_BucketList<V>> _this2)
{
	
	//    .param p1, "bucketList"    # Ljava/util/ArrayList;
	//    .param p2, "publicBucketList"    # Ljava/util/ArrayList;
	//    .param p3, "-this2"    # Landroid/icu/text/AlphabeticIndex$BucketList;
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$BucketList;, "Landroid/icu/text/AlphabeticIndex$BucketList<TV;>;"
	android::icu::text::AlphabeticIndex_S_BucketList<V>::(bucketList, publicBucketList);
	return;

}
// .method private fullIterator()Ljava/util/Iterator;
template <typename V>
std::shared_ptr<java::util::Iterator<android::icu::text::AlphabeticIndex_S_Bucket<V>>> android::icu::text::AlphabeticIndex_S_BucketList<V>::fullIterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 198        value = {
	// 199            "()",
	// 200            "Ljava/util/Iterator",
	// 201            "<",
	// 202            "Landroid/icu/text/AlphabeticIndex$Bucket",
	// 203            "<TV;>;>;"
	// 204        }
	// 205    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$BucketList;, "Landroid/icu/text/AlphabeticIndex$BucketList<TV;>;"
	return this->bucketList->iterator();

}
// .method private getBucketCount()I
template <typename V>
int android::icu::text::AlphabeticIndex_S_BucketList<V>::getBucketCount()
{
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$BucketList;, "Landroid/icu/text/AlphabeticIndex$BucketList<TV;>;"
	return this->immutableVisibleList->size();

}
// .method private getBucketIndex(Ljava/lang/CharSequence;Landroid/icu/text/Collator;)I
template <typename V>
int android::icu::text::AlphabeticIndex_S_BucketList<V>::getBucketIndex(std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<android::icu::text::Collator> collatorPrimaryOnly)
{
	
	int start;
	int limit;
	int i;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket> bucket;
	
	//    .param p1, "name"    # Ljava/lang/CharSequence;
	//    .param p2, "collatorPrimaryOnly"    # Landroid/icu/text/Collator;
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$BucketList;, "Landroid/icu/text/AlphabeticIndex$BucketList<TV;>;"
	start = 0x0;
	//    .local v4, "start":I
	limit = this->bucketList->size();
	//    .local v2, "limit":I
	label_goto_7:
	if ( ( start + 0x1) >= limit )
		goto label_cond_25;
	i = ( (start + limit) / 0x2);
	//    .local v1, "i":I
	bucket = this->bucketList->get(i);
	bucket->checkCast("android::icu::text::AlphabeticIndex_S_Bucket");
	//    .local v0, "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	//    .local v3, "nameVsBucket":I
	if ( collatorPrimaryOnly->compare(name, android::icu::text::AlphabeticIndex_S_Bucket::-get3(bucket)) >= 0 )
		goto label_cond_23;
	limit = i;
	goto label_goto_7;
	// 293    .line 1130
	label_cond_23:
	start = i;
	goto label_goto_7;
	// 299    .line 1133
	// 300    .end local v0    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	// 301    .end local v1    # "i":I
	// 302    .end local v3    # "nameVsBucket":I
	label_cond_25:
	bucket = this->bucketList->get(start);
	bucket->checkCast("android::icu::text::AlphabeticIndex_S_Bucket");
	//    .restart local v0    # "bucket":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	if ( !(android::icu::text::AlphabeticIndex_S_Bucket::-get0(bucket)) )  
		goto label_cond_37;
	label_cond_37:
	return android::icu::text::AlphabeticIndex_S_Bucket::-get1(bucket);

}
// .method public iterator()Ljava/util/Iterator;
template <typename V>
std::shared_ptr<java::util::Iterator<android::icu::text::AlphabeticIndex_S_Bucket<V>>> android::icu::text::AlphabeticIndex_S_BucketList<V>::iterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 339        value = {
	// 340            "()",
	// 341            "Ljava/util/Iterator",
	// 342            "<",
	// 343            "Landroid/icu/text/AlphabeticIndex$Bucket",
	// 344            "<TV;>;>;"
	// 345        }
	// 346    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$BucketList;, "Landroid/icu/text/AlphabeticIndex$BucketList<TV;>;"
	return this->immutableVisibleList->iterator();

}

#endif //__android_icu_text_AlphabeticIndex_S_BucketList__

