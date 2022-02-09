#ifndef __android_icu_impl_Pair__
#define __android_icu_impl_Pair__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Pair.smali
#include "java2ctype.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
template <typename F,typename S>
class Pair : public java::lang::Object {
protected:
	Pair(std::shared_ptr<F> first,std::shared_ptr<S> second);
private:
public:
	std::shared_ptr<F> first;
	std::shared_ptr<S> second;
	static std::shared_ptr<android::icu::impl::Pair<F,S>> of(std::shared_ptr<F> first,std::shared_ptr<S> second);
	bool equals(std::shared_ptr<java::lang::Object> other);
	int hashCode();
public:
	virtual ~Pair(){
	}

}; // class Pair
}; // namespace android::icu::impl
// .method protected constructor <init>(Ljava/lang/Object;Ljava/lang/Object;)V
template <typename F,typename S>
android::icu::impl::Pair<F,S>::Pair(std::shared_ptr<F> first,std::shared_ptr<S> second)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 041        value = {
	// 042            "(TF;TS;)V"
	// 043        }
	// 044    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Pair;, "Landroid/icu/impl/Pair<TF;TS;>;"
	//    .local p1, "first":Ljava/lang/Object;, "TF;"
	//    .local p2, "second":Ljava/lang/Object;, "TS;"
	// 051    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->first = first;
	this->second = second;
	return;

}
// .method public static of(Ljava/lang/Object;Ljava/lang/Object;)Landroid/icu/impl/Pair;
template <typename F,typename S>
std::shared_ptr<android::icu::impl::Pair<F,S>> android::icu::impl::Pair<F,S>::of(std::shared_ptr<F> first,std::shared_ptr<S> second)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::impl::Pair<F,S>> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 066        value = {
	// 067            "<F:",
	// 068            "Ljava/lang/Object;",
	// 069            "S:",
	// 070            "Ljava/lang/Object;",
	// 071            ">(TF;TS;)",
	// 072            "Landroid/icu/impl/Pair",
	// 073            "<TF;TS;>;"
	// 074        }
	// 075    .end annotation
	//    .local p0, "first":Ljava/lang/Object;, "TF;"
	//    .local p1, "second":Ljava/lang/Object;, "TS;"
	if ( !(first) )  
		goto label_cond_4;
	if ( second )     
		goto label_cond_d;
	label_cond_4:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pair.of requires non null values.")));
	// throw
	throw cVar0;
	// 095    .line 38
	label_cond_d:
	cVar1 = std::make_shared<android::icu::impl::Pair<F,S>>(first, second);
	return cVar1;

}
// .method public equals(Ljava/lang/Object;)Z
template <typename F,typename S>
bool android::icu::impl::Pair<F,S>::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::impl::Pair<F,S>> rhs;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	//    .local p0, "this":Landroid/icu/impl/Pair;, "Landroid/icu/impl/Pair<TF;TS;>;"
	cVar1 = 0x0;
	if ( other != this )
		goto label_cond_5;
	return 0x1;
	// 122    .line 46
	label_cond_5:
	if ( other->instanceOf("android::icu::impl::Pair<F,S>") )     
		goto label_cond_a;
	return cVar1;
	label_cond_a:
	rhs = other;
	rhs->checkCast("android::icu::impl::Pair<F,S>");
	//    .local v0, "rhs":Landroid/icu/impl/Pair;, "Landroid/icu/impl/Pair<**>;"
	if ( !(this->first->equals(rhs->first)) )  
		goto label_cond_1f;
	cVar1 = this->second->equals(rhs->second);
	label_cond_1f:
	return cVar1;

}
// .method public hashCode()I
template <typename F,typename S>
int android::icu::impl::Pair<F,S>::hashCode()
{
	
	//    .local p0, "this":Landroid/icu/impl/Pair;, "Landroid/icu/impl/Pair<TF;TS;>;"
	return (( this->first->hashCode() * 0x25) +  this->second->hashCode());

}

#endif //__android_icu_impl_Pair__

