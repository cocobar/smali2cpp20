#ifndef __android_icu_impl_Row_S_R5__
#define __android_icu_impl_Row_S_R5__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Row$R5.smali
#include "java2ctype.h"
#include "android.icu.impl.Row.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
template <typename C0,typename C1,typename C2,typename C3,typename C4>
class Row_S_R5 : public android::icu::impl::Row<C0,C1,C2,C3,C4> {
protected:
private:
public:
	Row_S_R5(std::shared_ptr<C0> a,std::shared_ptr<C1> b,std::shared_ptr<C2> c,std::shared_ptr<C3> d,std::shared_ptr<C4> e);
public:
	virtual ~Row_S_R5(){
	}

}; // class Row_S_R5
}; // namespace android::icu::impl
// .method public constructor <init>(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V
template <typename C0,typename C1,typename C2,typename C3,typename C4>
android::icu::impl::Row_S_R5<C0,C1,C2,C3,C4>::Row_S_R5(std::shared_ptr<C0> a,std::shared_ptr<C1> b,std::shared_ptr<C2> c,std::shared_ptr<C3> d,std::shared_ptr<C4> e)
{
	
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 039        value = {
	// 040            "(TC0;TC1;TC2;TC3;TC4;)V"
	// 041        }
	// 042    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row$R5;, "Landroid/icu/impl/Row$R5<TC0;TC1;TC2;TC3;TC4;>;"
	//    .local p1, "a":Ljava/lang/Object;, "TC0;"
	//    .local p2, "b":Ljava/lang/Object;, "TC1;"
	//    .local p3, "c":Ljava/lang/Object;, "TC2;"
	//    .local p4, "d":Ljava/lang/Object;, "TC3;"
	//    .local p5, "e":Ljava/lang/Object;, "TC4;"
	// 052    invoke-direct {p0}, Landroid/icu/impl/Row;-><init>()V
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x5);
	cVar0[0x0] = a;
	cVar0[0x1] = b;
	cVar0[0x2] = c;
	cVar0[0x3] = d;
	cVar0[0x4] = e;
	this->items = cVar0;
	return;

}

#endif //__android_icu_impl_Row_S_R5__

