#ifndef __android_icu_impl_Row_S_R4__
#define __android_icu_impl_Row_S_R4__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Row$R4.smali
#include "java2ctype.h"
#include "android.icu.impl.Row.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
template <typename C0,typename C1,typename C2,typename C3>
class Row_S_R4 : public android::icu::impl::Row<C0,C1,C2,C3,C3> {
protected:
private:
public:
	Row_S_R4(std::shared_ptr<C0> a,std::shared_ptr<C1> b,std::shared_ptr<C2> c,std::shared_ptr<C3> d);
public:
	virtual ~Row_S_R4(){
	}

}; // class Row_S_R4
}; // namespace android::icu::impl
// .method public constructor <init>(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V
template <typename C0,typename C1,typename C2,typename C3>
android::icu::impl::Row_S_R4<C0,C1,C2,C3>::Row_S_R4(std::shared_ptr<C0> a,std::shared_ptr<C1> b,std::shared_ptr<C2> c,std::shared_ptr<C3> d)
{
	
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 037        value = {
	// 038            "(TC0;TC1;TC2;TC3;)V"
	// 039        }
	// 040    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row$R4;, "Landroid/icu/impl/Row$R4<TC0;TC1;TC2;TC3;>;"
	//    .local p1, "a":Ljava/lang/Object;, "TC0;"
	//    .local p2, "b":Ljava/lang/Object;, "TC1;"
	//    .local p3, "c":Ljava/lang/Object;, "TC2;"
	//    .local p4, "d":Ljava/lang/Object;, "TC3;"
	// 049    invoke-direct {p0}, Landroid/icu/impl/Row;-><init>()V
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x4);
	cVar0[0x0] = a;
	cVar0[0x1] = b;
	cVar0[0x2] = c;
	cVar0[0x3] = d;
	this->items = cVar0;
	return;

}

#endif //__android_icu_impl_Row_S_R4__

