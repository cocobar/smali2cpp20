#ifndef __android_icu_impl_ICUCurrencyMetaInfo_S_UniqueList__
#define __android_icu_impl_ICUCurrencyMetaInfo_S_UniqueList__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyMetaInfo$UniqueList.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.HashSet.h"
#include "java.util.List.h"
#include "java.util.Set.h"

namespace android::icu::impl{
template <typename T>
class ICUCurrencyMetaInfo_S_UniqueList : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::List<T>> list;
	std::shared_ptr<java::util::Set<T>> seen;
	ICUCurrencyMetaInfo_S_UniqueList();
	static std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList<T>> create();
public:
	static std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList<T>> _wrap0();
	void add(std::shared_ptr<T> value);
	std::shared_ptr<java::util::List<T>> list();
public:
	virtual ~ICUCurrencyMetaInfo_S_UniqueList(){
	}

}; // class ICUCurrencyMetaInfo_S_UniqueList
}; // namespace android::icu::impl
// .method static synthetic -wrap0()Landroid/icu/impl/ICUCurrencyMetaInfo$UniqueList;
template <typename T>
std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList<T>> android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList<T>::_wrap0()
{
	
	return android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList<T>::create({const[class].FS-Param});

}
// .method private constructor <init>()V
template <typename T>
android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList<T>::ICUCurrencyMetaInfo_S_UniqueList()
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	
	//    .local p0, "this":Landroid/icu/impl/ICUCurrencyMetaInfo$UniqueList;, "Landroid/icu/impl/ICUCurrencyMetaInfo$UniqueList<TT;>;"
	// 063    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::HashSet>();
	this->seen = cVar0;
	cVar1 = std::make_shared<java::util::ArrayList>();
	this->list = cVar1;
	return;

}
// .method private static create()Landroid/icu/impl/ICUCurrencyMetaInfo$UniqueList;
template <typename T>
std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList<T>> android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList<T>::create()
{
	
	std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList<T>> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 086        value = {
	// 087            "<T:",
	// 088            "Ljava/lang/Object;",
	// 089            ">()",
	// 090            "Landroid/icu/impl/ICUCurrencyMetaInfo$UniqueList",
	// 091            "<TT;>;"
	// 092        }
	// 093    .end annotation
	cVar0 = std::make_shared<android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList<T>>();
	return cVar0;

}
// .method add(Ljava/lang/Object;)V
template <typename T>
void android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList<T>::add(std::shared_ptr<T> value)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 109        value = {
	// 110            "(TT;)V"
	// 111        }
	// 112    .end annotation
	//    .local p0, "this":Landroid/icu/impl/ICUCurrencyMetaInfo$UniqueList;, "Landroid/icu/impl/ICUCurrencyMetaInfo$UniqueList<TT;>;"
	//    .local p1, "value":Ljava/lang/Object;, "TT;"
	if ( this->seen->contains(value) )     
		goto label_cond_12;
	this->list->add(value);
	this->seen->add(value);
	label_cond_12:
	return;

}
// .method list()Ljava/util/List;
template <typename T>
std::shared_ptr<java::util::List<T>> android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList<T>::list()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 144        value = {
	// 145            "()",
	// 146            "Ljava/util/List",
	// 147            "<TT;>;"
	// 148        }
	// 149    .end annotation
	//    .local p0, "this":Landroid/icu/impl/ICUCurrencyMetaInfo$UniqueList;, "Landroid/icu/impl/ICUCurrencyMetaInfo$UniqueList<TT;>;"
	return java::util::Collections::unmodifiableList(this->list);

}

#endif //__android_icu_impl_ICUCurrencyMetaInfo_S_UniqueList__

