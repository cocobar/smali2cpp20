#ifndef __android_icu_impl_Row_S_R3__
#define __android_icu_impl_Row_S_R3__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Row$R3.smali
#include "java2ctype.h"
#include "android.icu.impl.Row.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
template <typename C0,typename C1,typename C2>
class Row_S_R3 : public android::icu::impl::Row<C0,C1,C2,C2,C2> {
protected:
private:
public:
	Row_S_R3(std::shared_ptr<C0> a,std::shared_ptr<C1> b,std::shared_ptr<C2> c);
public:
	virtual ~Row_S_R3(){
	}

}; // class Row_S_R3
}; // namespace android::icu::impl
// .method public constructor <init>(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V
template <typename C0,typename C1,typename C2>
android::icu::impl::Row_S_R3<C0,C1,C2>::Row_S_R3(std::shared_ptr<C0> a,std::shared_ptr<C1> b,std::shared_ptr<C2> c)
{
	
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 035        value = {
	// 036            "(TC0;TC1;TC2;)V"
	// 037        }
	// 038    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<TC0;TC1;TC2;>;"
	//    .local p1, "a":Ljava/lang/Object;, "TC0;"
	//    .local p2, "b":Ljava/lang/Object;, "TC1;"
	//    .local p3, "c":Ljava/lang/Object;, "TC2;"
	// 046    invoke-direct {p0}, Landroid/icu/impl/Row;-><init>()V
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x3);
	cVar0[0x0] = a;
	cVar0[0x1] = b;
	cVar0[0x2] = c;
	this->items = cVar0;
	return;

}

#endif //__android_icu_impl_Row_S_R3__

