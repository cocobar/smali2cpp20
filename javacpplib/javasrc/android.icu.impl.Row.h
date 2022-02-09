#ifndef __android_icu_impl_Row__
#define __android_icu_impl_Row__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Row.smali
#include "java2ctype.h"
#include "android.icu.impl.Row_S_R2.h"
#include "android.icu.impl.Row_S_R3.h"
#include "android.icu.impl.Row_S_R4.h"
#include "android.icu.impl.Row_S_R5.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.util.Freezable.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Comparable.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"

namespace android::icu::impl{
template <typename C0,typename C1,typename C2,typename C3,typename C4>
class Row : public java::lang::Comparable, public java::lang::Cloneable, public android::icu::util::Freezable<android::icu::impl::Row<C0,C1,C2,C3,C4>> {
protected:
	bool frozen;
	std::shared_ptr<std::vector<java::lang::Object>> items;
	std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> set(int i,std::shared_ptr<java::lang::Object> item);
private:
public:
	Row();
	static std::shared_ptr<android::icu::impl::Row_S_R2<C0,C1>> of(std::shared_ptr<C0> p0,std::shared_ptr<C1> p1);
	static std::shared_ptr<android::icu::impl::Row_S_R3<C0,C1,C2>> of(std::shared_ptr<C0> p0,std::shared_ptr<C1> p1,std::shared_ptr<C2> p2);
	static std::shared_ptr<android::icu::impl::Row_S_R4<C0,C1,C2,C3>> of(std::shared_ptr<C0> p0,std::shared_ptr<C1> p1,std::shared_ptr<C2> p2,std::shared_ptr<C3> p3);
	static std::shared_ptr<android::icu::impl::Row_S_R5<C0,C1,C2,C3,C4>> of(std::shared_ptr<C0> p0,std::shared_ptr<C1> p1,std::shared_ptr<C2> p2,std::shared_ptr<C3> p3,std::shared_ptr<C4> p4);
	std::shared_ptr<java::lang::Object> clone();
	std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> cloneAsThawed();
	int compareTo(std::shared_ptr<java::lang::Object> other);
	bool equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> freeze();
	std::shared_ptr<C0> get0();
	std::shared_ptr<C1> get1();
	std::shared_ptr<C2> get2();
	std::shared_ptr<C3> get3();
	std::shared_ptr<C4> get4();
	int hashCode();
	bool isFrozen();
	std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> set0(std::shared_ptr<C0> item);
	std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> set1(std::shared_ptr<C1> item);
	std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> set2(std::shared_ptr<C2> item);
	std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> set3(std::shared_ptr<C3> item);
	std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> set4(std::shared_ptr<C4> item);
	std::shared_ptr<java::lang::String> toString();
public:
	virtual ~Row(){
	}

}; // class Row
}; // namespace android::icu::impl
// .method public constructor <init>()V
template <typename C0,typename C1,typename C2,typename C3,typename C4>
android::icu::impl::Row<C0,C1,C2,C3,C4>::Row()
{
	
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	// 058    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static of(Ljava/lang/Object;Ljava/lang/Object;)Landroid/icu/impl/Row$R2;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<android::icu::impl::Row_S_R2<C0,C1>> android::icu::impl::Row<C0,C1,C2,C3,C4>::of(std::shared_ptr<C0> p0,std::shared_ptr<C1> p1)
{
	
	std::shared_ptr<android::icu::impl::Row_S_R2> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 066        value = {
	// 067            "<C0:",
	// 068            "Ljava/lang/Object;",
	// 069            "C1:",
	// 070            "Ljava/lang/Object;",
	// 071            ">(TC0;TC1;)",
	// 072            "Landroid/icu/impl/Row$R2",
	// 073            "<TC0;TC1;>;"
	// 074        }
	// 075    .end annotation
	//    .local p0, "p0":Ljava/lang/Object;, "TC0;"
	//    .local p1, "p1":Ljava/lang/Object;, "TC1;"
	cVar0 = std::make_shared<android::icu::impl::Row_S_R2>(p0, p1);
	return cVar0;

}
// .method public static of(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Landroid/icu/impl/Row$R3;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<android::icu::impl::Row_S_R3<C0,C1,C2>> android::icu::impl::Row<C0,C1,C2,C3,C4>::of(std::shared_ptr<C0> p0,std::shared_ptr<C1> p1,std::shared_ptr<C2> p2)
{
	
	std::shared_ptr<android::icu::impl::Row_S_R3> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 091        value = {
	// 092            "<C0:",
	// 093            "Ljava/lang/Object;",
	// 094            "C1:",
	// 095            "Ljava/lang/Object;",
	// 096            "C2:",
	// 097            "Ljava/lang/Object;",
	// 098            ">(TC0;TC1;TC2;)",
	// 099            "Landroid/icu/impl/Row$R3",
	// 100            "<TC0;TC1;TC2;>;"
	// 101        }
	// 102    .end annotation
	//    .local p0, "p0":Ljava/lang/Object;, "TC0;"
	//    .local p1, "p1":Ljava/lang/Object;, "TC1;"
	//    .local p2, "p2":Ljava/lang/Object;, "TC2;"
	cVar0 = std::make_shared<android::icu::impl::Row_S_R3>(p0, p1, p2);
	return cVar0;

}
// .method public static of(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Landroid/icu/impl/Row$R4;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<android::icu::impl::Row_S_R4<C0,C1,C2,C3>> android::icu::impl::Row<C0,C1,C2,C3,C4>::of(std::shared_ptr<C0> p0,std::shared_ptr<C1> p1,std::shared_ptr<C2> p2,std::shared_ptr<C3> p3)
{
	
	std::shared_ptr<android::icu::impl::Row_S_R4> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 119        value = {
	// 120            "<C0:",
	// 121            "Ljava/lang/Object;",
	// 122            "C1:",
	// 123            "Ljava/lang/Object;",
	// 124            "C2:",
	// 125            "Ljava/lang/Object;",
	// 126            "C3:",
	// 127            "Ljava/lang/Object;",
	// 128            ">(TC0;TC1;TC2;TC3;)",
	// 129            "Landroid/icu/impl/Row$R4",
	// 130            "<TC0;TC1;TC2;TC3;>;"
	// 131        }
	// 132    .end annotation
	//    .local p0, "p0":Ljava/lang/Object;, "TC0;"
	//    .local p1, "p1":Ljava/lang/Object;, "TC1;"
	//    .local p2, "p2":Ljava/lang/Object;, "TC2;"
	//    .local p3, "p3":Ljava/lang/Object;, "TC3;"
	cVar0 = std::make_shared<android::icu::impl::Row_S_R4>(p0, p1, p2, p3);
	return cVar0;

}
// .method public static of(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Landroid/icu/impl/Row$R5;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<android::icu::impl::Row_S_R5<C0,C1,C2,C3,C4>> android::icu::impl::Row<C0,C1,C2,C3,C4>::of(std::shared_ptr<C0> p0,std::shared_ptr<C1> p1,std::shared_ptr<C2> p2,std::shared_ptr<C3> p3,std::shared_ptr<C4> p4)
{
	
	std::shared_ptr<android::icu::impl::Row_S_R5> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 150        value = {
	// 151            "<C0:",
	// 152            "Ljava/lang/Object;",
	// 153            "C1:",
	// 154            "Ljava/lang/Object;",
	// 155            "C2:",
	// 156            "Ljava/lang/Object;",
	// 157            "C3:",
	// 158            "Ljava/lang/Object;",
	// 159            "C4:",
	// 160            "Ljava/lang/Object;",
	// 161            ">(TC0;TC1;TC2;TC3;TC4;)",
	// 162            "Landroid/icu/impl/Row$R5",
	// 163            "<TC0;TC1;TC2;TC3;TC4;>;"
	// 164        }
	// 165    .end annotation
	//    .local p0, "p0":Ljava/lang/Object;, "TC0;"
	//    .local p1, "p1":Ljava/lang/Object;, "TC1;"
	//    .local p2, "p2":Ljava/lang/Object;, "TC2;"
	//    .local p3, "p3":Ljava/lang/Object;, "TC3;"
	//    .local p4, "p4":Ljava/lang/Object;, "TC4;"
	cVar0 = std::make_shared<android::icu::impl::Row_S_R5>(p0, p1, p2, p3, p4);
	return cVar0;

}
// .method public clone()Ljava/lang/Object;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<java::lang::Object> android::icu::impl::Row<C0,C1,C2,C3,C4>::clone()
{
	
	std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> result;
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	if ( !(this->frozen) )  
		goto label_cond_5;
	return this;
	// 205    .line 184
	label_cond_5:
	try {
	//label_try_start_5:
	result = this->clone();
	result->checkCast("android::icu::impl::Row<C0,C1,C2,C3,C4>");
	//    .local v1, "result":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	cVar0 = this->items->clone();
	cVar0->checkCast("std::vector<java::lang::Object>");
	this->items = cVar0;
	//label_try_end_15:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_5 .. :try_end_15} :catch_16
	return result;
	// 231    .line 187
	// 232    .end local v1    # "result":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	label_catch_16:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	return 0x0;

}
// .method public cloneAsThawed()Landroid/icu/impl/Row;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> android::icu::impl::Row<C0,C1,C2,C3,C4>::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> result;
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 246        value = {
	// 247            "()",
	// 248            "Landroid/icu/impl/Row",
	// 249            "<TC0;TC1;TC2;TC3;TC4;>;"
	// 250        }
	// 251    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	try {
	//label_try_start_0:
	result = this->clone();
	result->checkCast("android::icu::impl::Row<C0,C1,C2,C3,C4>");
	//    .local v1, "result":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	cVar0 = this->items->clone();
	cVar0->checkCast("std::vector<java::lang::Object>");
	this->items = cVar0;
	result->frozen = 0x0;
	//label_try_end_13:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_14;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_13} :catch_14
	return result;
	// 285    .line 199
	// 286    .end local v1    # "result":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	label_catch_14:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	return 0x0;

}
// .method public bridge synthetic cloneAsThawed()Ljava/lang/Object;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<java::lang::Object> android::icu::impl::Row<C0,C1,C2,C3,C4>::cloneAsThawed()
{
	
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	return this->cloneAsThawed();

}
// .method public compareTo(Ljava/lang/Object;)I
template <typename C0,typename C1,typename C2,typename C3,typename C4>
int android::icu::impl::Row<C0,C1,C2,C3,C4>::compareTo(std::shared_ptr<java::lang::Object> other)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> that;
	int result;
	std::shared_ptr<std::vector<java::lang::Object>> cVar1;
	int cVar2;
	int i;
	std::shared_ptr<java::lang::Comparable> item;
	std::shared_ptr<java::lang::Comparable> cVar3;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	cVar0 = 0x0;
	that = other;
	that->checkCast("android::icu::impl::Row<C0,C1,C2,C3,C4>");
	//    .local v4, "that":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	result = (this->items->size() - that->items->size());
	//    .local v3, "result":I
	if ( !(result) )  
		goto label_cond_f;
	return result;
	// 342    .line 144
	label_cond_f:
	//    .local v0, "i":I
	cVar1 = this->items;
	cVar2 = cVar0;
	i = 0x0;
	//    .end local v0    # "i":I
	//    .local v1, "i":I
	label_goto_15:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_2f;
	item = cVar1[cVar2];
	//    .local v2, "item":Ljava/lang/Object;
	item->checkCast("java::lang::Comparable");
	//    .end local v2    # "item":Ljava/lang/Object;
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	cVar3 = that->items[i];
	cVar3->checkCast("java::lang::Comparable");
	result = android::icu::impl::Utility::checkCompare(item, cVar3);
	if ( !(result) )  
		goto label_cond_2a;
	return result;
	// 388    .line 145
	label_cond_2a:
	cVar2 = ( cVar2 + 0x1);
	i = ( i + 0x1);
	//    .end local v0    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_15;
	// 400    .line 151
	label_cond_2f:
	return cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
template <typename C0,typename C1,typename C2,typename C3,typename C4>
bool android::icu::impl::Row<C0,C1,C2,C3,C4>::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> cVar2;
	std::shared_ptr<std::vector<java::lang::Object>> that;
	std::shared_ptr<std::vector<java::lang::Object>> cVar3;
	int cVar4;
	int i;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( other )     
		goto label_cond_5;
	return cVar1;
	// 421    .line 116
	label_cond_5:
	if ( this != other )
		goto label_cond_8;
	return cVar0;
	// 428    .line 120
	label_cond_8:
	try {
	//label_try_start_8:
	cVar2 = other;
	cVar2->checkCast("android::icu::impl::Row<C0,C1,C2,C3,C4>");
	that = cVar2;
	//    .local v5, "that":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	if ( this->items->size() == that->items->size() )
		goto label_cond_15;
	return cVar1;
	// 452    .line 124
	label_cond_15:
	//    .local v2, "i":I
	cVar3 = this->items;
	cVar4 = cVar1;
	i = 0x0;
	//    .end local v2    # "i":I
	//    .local v3, "i":I
	label_goto_1b:
	if ( cVar4 >= cVar3->size() )
		goto label_cond_30;
	//    .local v4, "item":Ljava/lang/Object;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	//label_try_end_28:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_31;
	}
	//    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_28} :catch_31
	if ( android::icu::impl::Utility::objectEquals(cVar3[cVar4], that->items[i]) )     
		goto label_cond_2c;
	return cVar1;
	// 494    .line 125
	label_cond_2c:
	cVar4 = ( cVar4 + 0x1);
	i = ( i + 0x1);
	//    .end local v2    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_1b;
	// 504    .line 130
	// 505    .end local v4    # "item":Ljava/lang/Object;
	label_cond_30:
	return cVar0;
	// 509    .line 131
	// 510    .end local v3    # "i":I
	// 511    .end local v5    # "that":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	label_catch_31:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	return cVar1;

}
// .method public freeze()Landroid/icu/impl/Row;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> android::icu::impl::Row<C0,C1,C2,C3,C4>::freeze()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 523        value = {
	// 524            "()",
	// 525            "Landroid/icu/impl/Row",
	// 526            "<TC0;TC1;TC2;TC3;TC4;>;"
	// 527        }
	// 528    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	this->frozen = 0x1;
	return this;

}
// .method public bridge synthetic freeze()Ljava/lang/Object;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<java::lang::Object> android::icu::impl::Row<C0,C1,C2,C3,C4>::freeze()
{
	
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	return this->freeze();

}
// .method public get0()Ljava/lang/Object;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<C0> android::icu::impl::Row<C0,C1,C2,C3,C4>::get0()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 557        value = {
	// 558            "()TC0;"
	// 559        }
	// 560    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	return this->items[0x0];

}
// .method public get1()Ljava/lang/Object;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<C1> android::icu::impl::Row<C0,C1,C2,C3,C4>::get1()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 577        value = {
	// 578            "()TC1;"
	// 579        }
	// 580    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	return this->items[0x1];

}
// .method public get2()Ljava/lang/Object;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<C2> android::icu::impl::Row<C0,C1,C2,C3,C4>::get2()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 597        value = {
	// 598            "()TC2;"
	// 599        }
	// 600    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	return this->items[0x2];

}
// .method public get3()Ljava/lang/Object;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<C3> android::icu::impl::Row<C0,C1,C2,C3,C4>::get3()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 617        value = {
	// 618            "()TC3;"
	// 619        }
	// 620    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	return this->items[0x3];

}
// .method public get4()Ljava/lang/Object;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<C4> android::icu::impl::Row<C0,C1,C2,C3,C4>::get4()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 637        value = {
	// 638            "()TC4;"
	// 639        }
	// 640    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	return this->items[0x4];

}
// .method public hashCode()I
template <typename C0,typename C1,typename C2,typename C3,typename C4>
int android::icu::impl::Row<C0,C1,C2,C3,C4>::hashCode()
{
	
	int sum;
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	int cVar1;
	
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	sum = this->items->size();
	//    .local v1, "sum":I
	cVar0 = this->items;
	cVar1 = 0x0;
	label_goto_7:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_16;
	//    .local v0, "item":Ljava/lang/Object;
	sum = (( sum * 0x25) + android::icu::impl::Utility::checkHash(cVar0[cVar1]));
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_7;
	// 692    .line 108
	// 693    .end local v0    # "item":Ljava/lang/Object;
	label_cond_16:
	return sum;

}
// .method public isFrozen()Z
template <typename C0,typename C1,typename C2,typename C3,typename C4>
bool android::icu::impl::Row<C0,C1,C2,C3,C4>::isFrozen()
{
	
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	return this->frozen;

}
// .method protected set(ILjava/lang/Object;)Landroid/icu/impl/Row;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> android::icu::impl::Row<C0,C1,C2,C3,C4>::set(int i,std::shared_ptr<java::lang::Object> item)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "i"    # I
	//    .param p2, "item"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Signature;
	// 714        value = {
	// 715            "(I",
	// 716            "Ljava/lang/Object;",
	// 717            ")",
	// 718            "Landroid/icu/impl/Row",
	// 719            "<TC0;TC1;TC2;TC3;TC4;>;"
	// 720        }
	// 721    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	if ( !(this->frozen) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify frozen object")));
	// throw
	throw cVar0;
	// 739    .line 98
	label_cond_d:
	this->items[i] = item;
	return this;

}
// .method public set0(Ljava/lang/Object;)Landroid/icu/impl/Row;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> android::icu::impl::Row<C0,C1,C2,C3,C4>::set0(std::shared_ptr<C0> item)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 752        value = {
	// 753            "(TC0;)",
	// 754            "Landroid/icu/impl/Row",
	// 755            "<TC0;TC1;TC2;TC3;TC4;>;"
	// 756        }
	// 757    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	//    .local p1, "item":Ljava/lang/Object;, "TC0;"
	return this->set(0x0, item);

}
// .method public set1(Ljava/lang/Object;)Landroid/icu/impl/Row;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> android::icu::impl::Row<C0,C1,C2,C3,C4>::set1(std::shared_ptr<C1> item)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 775        value = {
	// 776            "(TC1;)",
	// 777            "Landroid/icu/impl/Row",
	// 778            "<TC0;TC1;TC2;TC3;TC4;>;"
	// 779        }
	// 780    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	//    .local p1, "item":Ljava/lang/Object;, "TC1;"
	return this->set(0x1, item);

}
// .method public set2(Ljava/lang/Object;)Landroid/icu/impl/Row;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> android::icu::impl::Row<C0,C1,C2,C3,C4>::set2(std::shared_ptr<C2> item)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 798        value = {
	// 799            "(TC2;)",
	// 800            "Landroid/icu/impl/Row",
	// 801            "<TC0;TC1;TC2;TC3;TC4;>;"
	// 802        }
	// 803    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	//    .local p1, "item":Ljava/lang/Object;, "TC2;"
	return this->set(0x2, item);

}
// .method public set3(Ljava/lang/Object;)Landroid/icu/impl/Row;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> android::icu::impl::Row<C0,C1,C2,C3,C4>::set3(std::shared_ptr<C3> item)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 821        value = {
	// 822            "(TC3;)",
	// 823            "Landroid/icu/impl/Row",
	// 824            "<TC0;TC1;TC2;TC3;TC4;>;"
	// 825        }
	// 826    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	//    .local p1, "item":Ljava/lang/Object;, "TC3;"
	return this->set(0x3, item);

}
// .method public set4(Ljava/lang/Object;)Landroid/icu/impl/Row;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<android::icu::impl::Row<C0,C1,C2,C3,C4>> android::icu::impl::Row<C0,C1,C2,C3,C4>::set4(std::shared_ptr<C4> item)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 844        value = {
	// 845            "(TC4;)",
	// 846            "Landroid/icu/impl/Row",
	// 847            "<TC0;TC1;TC2;TC3;TC4;>;"
	// 848        }
	// 849    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	//    .local p1, "item":Ljava/lang/Object;, "TC4;"
	return this->set(0x4, item);

}
// .method public toString()Ljava/lang/String;
template <typename C0,typename C1,typename C2,typename C3,typename C4>
std::shared_ptr<java::lang::String> android::icu::impl::Row<C0,C1,C2,C3,C4>::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	int first;
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	int cVar1;
	
	//    .local p0, "this":Landroid/icu/impl/Row;, "Landroid/icu/impl/Row<TC0;TC1;TC2;TC3;TC4;>;"
	result = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[")));
	//    .local v2, "result":Ljava/lang/StringBuilder;
	first = 0x1;
	//    .local v0, "first":Z
	cVar0 = this->items;
	cVar1 = 0x0;
	label_goto_d:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_21;
	//    .local v1, "item":Ljava/lang/Object;
	if ( !(first) )  
		goto label_cond_1a;
	first = 0x0;
	label_goto_14:
	result->append(cVar0[cVar1]);
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_d;
	// 909    .line 162
	label_cond_1a:
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
	goto label_goto_14;
	// 917    .line 166
	// 918    .end local v1    # "item":Ljava/lang/Object;
	label_cond_21:
	return result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString();

}

#endif //__android_icu_impl_Row__

