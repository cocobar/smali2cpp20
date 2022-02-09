#ifndef __android_icu_impl_Row_S_R2__
#define __android_icu_impl_Row_S_R2__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Row$R2.smali
#include "java2ctype.h"
#include "android.icu.impl.Row.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
template <typename C0,typename C1>
class Row_S_R2 : public android::icu::impl::Row<C0,C1,C1,C1,C1> {
protected:
private:
public:
	Row_S_R2(std::shared_ptr<C0> a,std::shared_ptr<C1> b);
public:
	virtual ~Row_S_R2(){
	}

}; // class Row_S_R2
}; // namespace android::icu::impl
// .method public constructor <init>(Ljava/lang/Object;Ljava/lang/Object;)V
template <typename C0,typename C1>
android::icu::impl::Row_S_R2<C0,C1>::Row_S_R2(std::shared_ptr<C0> a,std::shared_ptr<C1> b)
{
	
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 033        value = {
	// 034            "(TC0;TC1;)V"
	// 035        }
	// 036    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row$R2;, "Landroid/icu/impl/Row$R2<TC0;TC1;>;"
	//    .local p1, "a":Ljava/lang/Object;, "TC0;"
	//    .local p2, "b":Ljava/lang/Object;, "TC1;"
	// 043    invoke-direct {p0}, Landroid/icu/impl/Row;-><init>()V
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar0[0x0] = a;
	cVar0[0x1] = b;
	this->items = cVar0;
	return;

}

#endif //__android_icu_impl_Row_S_R2__

