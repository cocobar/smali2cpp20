#ifndef __android_icu_text_AlphabeticIndex_S_Bucket__
#define __android_icu_text_AlphabeticIndex_S_Bucket__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AlphabeticIndex$Bucket.smali
#include "java2ctype.h"
#include "android.icu.text.AlphabeticIndex_S_Bucket_S_LabelType.h"
#include "android.icu.text.AlphabeticIndex_S_Record.h"
#include "java.lang.Iterable.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

namespace android::icu::text{
template <typename V>
class AlphabeticIndex_S_Bucket : public java::lang::Iterable<android::icu::text::AlphabeticIndex_S_Record<V>> {
protected:
private:
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> displayBucket;
	int displayIndex;
	std::shared_ptr<java::lang::String> label;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> labelType;
	std::shared_ptr<java::lang::String> lowerBoundary;
	std::shared_ptr<java::util::List<android::icu::text::AlphabeticIndex_S_Record<V>>> records;
	AlphabeticIndex_S_Bucket(std::shared_ptr<java::lang::String> label,std::shared_ptr<java::lang::String> lowerBoundary,std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> labelType);
public:
	static std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _get0(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this);
	static int _get1(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this);
	static std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> _get2(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this);
	static std::shared_ptr<java::lang::String> _get3(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this);
	static std::shared_ptr<java::util::List> _get4(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this);
	static std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _set0(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this,std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _value);
	static int _set1(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this,int _value);
	static std::shared_ptr<java::util::List> _set2(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this,std::shared_ptr<java::util::List> _value);
	AlphabeticIndex_S_Bucket(std::shared_ptr<java::lang::String> label,std::shared_ptr<java::lang::String> lowerBoundary,std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> labelType,std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this3);
	std::shared_ptr<java::lang::String> getLabel();
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> getLabelType();
	std::shared_ptr<java::util::Iterator<android::icu::text::AlphabeticIndex_S_Record<V>>> iterator();
	int size();
	std::shared_ptr<java::lang::String> toString();
public:
	virtual ~AlphabeticIndex_S_Bucket(){
	}

}; // class AlphabeticIndex_S_Bucket
}; // namespace android::icu::text
// .method static synthetic -get0(Landroid/icu/text/AlphabeticIndex$Bucket;)Landroid/icu/text/AlphabeticIndex$Bucket;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> android::icu::text::AlphabeticIndex_S_Bucket<V>::_get0(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex$Bucket;
	return _this->displayBucket;

}
// .method static synthetic -get1(Landroid/icu/text/AlphabeticIndex$Bucket;)I
template <typename V>
int android::icu::text::AlphabeticIndex_S_Bucket<V>::_get1(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex$Bucket;
	return _this->displayIndex;

}
// .method static synthetic -get2(Landroid/icu/text/AlphabeticIndex$Bucket;)Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> android::icu::text::AlphabeticIndex_S_Bucket<V>::_get2(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex$Bucket;
	return _this->labelType;

}
// .method static synthetic -get3(Landroid/icu/text/AlphabeticIndex$Bucket;)Ljava/lang/String;
template <typename V>
std::shared_ptr<java::lang::String> android::icu::text::AlphabeticIndex_S_Bucket<V>::_get3(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex$Bucket;
	return _this->lowerBoundary;

}
// .method static synthetic -get4(Landroid/icu/text/AlphabeticIndex$Bucket;)Ljava/util/List;
template <typename V>
std::shared_ptr<java::util::List> android::icu::text::AlphabeticIndex_S_Bucket<V>::_get4(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex$Bucket;
	return _this->records;

}
// .method static synthetic -set0(Landroid/icu/text/AlphabeticIndex$Bucket;Landroid/icu/text/AlphabeticIndex$Bucket;)Landroid/icu/text/AlphabeticIndex$Bucket;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> android::icu::text::AlphabeticIndex_S_Bucket<V>::_set0(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this,std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex$Bucket;
	//    .param p1, "-value"    # Landroid/icu/text/AlphabeticIndex$Bucket;
	_this->displayBucket = _value;
	return _value;

}
// .method static synthetic -set1(Landroid/icu/text/AlphabeticIndex$Bucket;I)I
template <typename V>
int android::icu::text::AlphabeticIndex_S_Bucket<V>::_set1(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this,int _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex$Bucket;
	//    .param p1, "-value"    # I
	_this->displayIndex = _value;
	return _value;

}
// .method static synthetic -set2(Landroid/icu/text/AlphabeticIndex$Bucket;Ljava/util/List;)Ljava/util/List;
template <typename V>
std::shared_ptr<java::util::List> android::icu::text::AlphabeticIndex_S_Bucket<V>::_set2(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this,std::shared_ptr<java::util::List> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex$Bucket;
	//    .param p1, "-value"    # Ljava/util/List;
	_this->records = _value;
	return _value;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/String;Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;)V
template <typename V>
android::icu::text::AlphabeticIndex_S_Bucket<V>::AlphabeticIndex_S_Bucket(std::shared_ptr<java::lang::String> label,std::shared_ptr<java::lang::String> lowerBoundary,std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> labelType)
{
	
	//    .param p1, "label"    # Ljava/lang/String;
	//    .param p2, "lowerBoundary"    # Ljava/lang/String;
	//    .param p3, "labelType"    # Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;
	//    .annotation system Ldalvik/annotation/Signature;
	// 165        value = {
	// 166            "(",
	// 167            "Ljava/lang/String;",
	// 168            "Ljava/lang/String;",
	// 169            "Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;",
	// 170            ")V"
	// 171        }
	// 172    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	// 177    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->label = label;
	this->lowerBoundary = lowerBoundary;
	this->labelType = labelType;
	return;

}
// .method synthetic constructor <init>(Ljava/lang/String;Ljava/lang/String;Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;Landroid/icu/text/AlphabeticIndex$Bucket;)V
template <typename V>
android::icu::text::AlphabeticIndex_S_Bucket<V>::AlphabeticIndex_S_Bucket(std::shared_ptr<java::lang::String> label,std::shared_ptr<java::lang::String> lowerBoundary,std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> labelType,std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket<V>> _this3)
{
	
	//    .param p1, "label"    # Ljava/lang/String;
	//    .param p2, "lowerBoundary"    # Ljava/lang/String;
	//    .param p3, "labelType"    # Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;
	//    .param p4, "-this3"    # Landroid/icu/text/AlphabeticIndex$Bucket;
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	android::icu::text::AlphabeticIndex_S_Bucket<V>::(label, lowerBoundary, labelType);
	return;

}
// .method public getLabel()Ljava/lang/String;
template <typename V>
std::shared_ptr<java::lang::String> android::icu::text::AlphabeticIndex_S_Bucket<V>::getLabel()
{
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	return this->label;

}
// .method public getLabelType()Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;
template <typename V>
std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> android::icu::text::AlphabeticIndex_S_Bucket<V>::getLabelType()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 222        value = {
	// 223            "()",
	// 224            "Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
	// 225        }
	// 226    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	return this->labelType;

}
// .method public iterator()Ljava/util/Iterator;
template <typename V>
std::shared_ptr<java::util::Iterator<android::icu::text::AlphabeticIndex_S_Record<V>>> android::icu::text::AlphabeticIndex_S_Bucket<V>::iterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 239        value = {
	// 240            "()",
	// 241            "Ljava/util/Iterator",
	// 242            "<",
	// 243            "Landroid/icu/text/AlphabeticIndex$Record",
	// 244            "<TV;>;>;"
	// 245        }
	// 246    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	if ( this->records )     
		goto label_cond_d;
	return java::util::Collections::emptyList({const[class].FS-Param})->iterator();
	// 266    .line 944
	label_cond_d:
	return this->records->iterator();

}
// .method public size()I
template <typename V>
int android::icu::text::AlphabeticIndex_S_Bucket<V>::size()
{
	
	int cVar0;
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	if ( this->records )     
		goto label_cond_6;
	cVar0 = 0x0;
	label_goto_5:
	return cVar0;
	label_cond_6:
	cVar0 = this->records->size();
	goto label_goto_5;

}
// .method public toString()Ljava/lang/String;
template <typename V>
std::shared_ptr<java::lang::String> android::icu::text::AlphabeticIndex_S_Bucket<V>::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$Bucket;, "Landroid/icu/text/AlphabeticIndex$Bucket<TV;>;"
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("{labelType=")))->append(this->labelType)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("lowerBoundary=")))->append(this->lowerBoundary)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("label=")))->append(this->label)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")))->toString();

}

#endif //__android_icu_text_AlphabeticIndex_S_Bucket__

