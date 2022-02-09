#ifndef __android_icu_text_AlphabeticIndex_S_Record__
#define __android_icu_text_AlphabeticIndex_S_Record__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AlphabeticIndex$Record.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::text{
template <typename V>
class AlphabeticIndex_S_Record : public java::lang::Object {
protected:
private:
	std::shared_ptr<V> data;
	std::shared_ptr<java::lang::CharSequence> name;
	AlphabeticIndex_S_Record(std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<V> data);
public:
	static std::shared_ptr<java::lang::CharSequence> _get0(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Record<V>> _this);
	AlphabeticIndex_S_Record(std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<java::lang::Object> data,std::shared_ptr<android::icu::text::AlphabeticIndex_S_Record<V>> _this2);
	std::shared_ptr<V> getData();
	std::shared_ptr<java::lang::CharSequence> getName();
	std::shared_ptr<java::lang::String> toString();
public:
	virtual ~AlphabeticIndex_S_Record(){
	}

}; // class AlphabeticIndex_S_Record
}; // namespace android::icu::text
// .method static synthetic -get0(Landroid/icu/text/AlphabeticIndex$Record;)Ljava/lang/CharSequence;
template <typename V>
std::shared_ptr<java::lang::CharSequence> android::icu::text::AlphabeticIndex_S_Record<V>::_get0(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Record<V>> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/AlphabeticIndex$Record;
	return _this->name;

}
// .method private constructor <init>(Ljava/lang/CharSequence;Ljava/lang/Object;)V
template <typename V>
android::icu::text::AlphabeticIndex_S_Record<V>::AlphabeticIndex_S_Record(std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<V> data)
{
	
	//    .param p1, "name"    # Ljava/lang/CharSequence;
	//    .annotation system Ldalvik/annotation/Signature;
	// 053        value = {
	// 054            "(",
	// 055            "Ljava/lang/CharSequence;",
	// 056            "TV;)V"
	// 057        }
	// 058    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$Record;, "Landroid/icu/text/AlphabeticIndex$Record<TV;>;"
	//    .local p2, "data":Ljava/lang/Object;, "TV;"
	// 064    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->name = name;
	this->data = data;
	return;

}
// .method synthetic constructor <init>(Ljava/lang/CharSequence;Ljava/lang/Object;Landroid/icu/text/AlphabeticIndex$Record;)V
template <typename V>
android::icu::text::AlphabeticIndex_S_Record<V>::AlphabeticIndex_S_Record(std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<java::lang::Object> data,std::shared_ptr<android::icu::text::AlphabeticIndex_S_Record<V>> _this2)
{
	
	//    .param p1, "name"    # Ljava/lang/CharSequence;
	//    .param p2, "data"    # Ljava/lang/Object;
	//    .param p3, "-this2"    # Landroid/icu/text/AlphabeticIndex$Record;
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$Record;, "Landroid/icu/text/AlphabeticIndex$Record<TV;>;"
	android::icu::text::AlphabeticIndex_S_Record<V>::(name, data);
	return;

}
// .method public getData()Ljava/lang/Object;
template <typename V>
std::shared_ptr<V> android::icu::text::AlphabeticIndex_S_Record<V>::getData()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 094        value = {
	// 095            "()TV;"
	// 096        }
	// 097    .end annotation
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$Record;, "Landroid/icu/text/AlphabeticIndex$Record<TV;>;"
	return this->data;

}
// .method public getName()Ljava/lang/CharSequence;
template <typename V>
std::shared_ptr<java::lang::CharSequence> android::icu::text::AlphabeticIndex_S_Record<V>::getName()
{
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$Record;, "Landroid/icu/text/AlphabeticIndex$Record<TV;>;"
	return this->name;

}
// .method public toString()Ljava/lang/String;
template <typename V>
std::shared_ptr<java::lang::String> android::icu::text::AlphabeticIndex_S_Record<V>::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .local p0, "this":Landroid/icu/text/AlphabeticIndex$Record;, "Landroid/icu/text/AlphabeticIndex$Record<TV;>;"
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")))->append(this->data)->toString();

}

#endif //__android_icu_text_AlphabeticIndex_S_Record__

