// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRanges.smali
#include "java2ctype.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.text.PluralRanges_S_Matrix.h"
#include "android.icu.text.PluralRanges.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.Arrays.h"

// .method public constructor <init>()V
android::icu::text::PluralRanges::PluralRanges()
{
	
	std::shared_ptr<android::icu::text::PluralRanges_S_Matrix> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 047    .end annotation
	// 051    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::text::PluralRanges_S_Matrix>();
	this->matrix = cVar0;
	this->explicit = std::make_shared<std::vector<bool[]>>(android::icu::impl::StandardPlural::COUNT);
	return;

}
// .method public add(Landroid/icu/impl/StandardPlural;Landroid/icu/impl/StandardPlural;Landroid/icu/impl/StandardPlural;)V
void android::icu::text::PluralRanges::add(std::shared_ptr<android::icu::impl::StandardPlural> rangeStart,std::shared_ptr<android::icu::impl::StandardPlural> rangeEnd,std::shared_ptr<android::icu::impl::StandardPlural> result)
{
	
	int cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar2;
	std::shared_ptr<java::lang::Object> cVar3;
	int cVar4;
	std::shared_ptr<android::icu::impl::StandardPlural> rs;
	std::shared_ptr<java::lang::Object> cVar5;
	int cVar6;
	std::shared_ptr<java::lang::Object> cVar9;
	
	//    .param p1, "rangeStart"    # Landroid/icu/impl/StandardPlural;
	//    .param p2, "rangeEnd"    # Landroid/icu/impl/StandardPlural;
	//    .param p3, "result"    # Landroid/icu/impl/StandardPlural;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 079    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x1;
	if ( !(this->isFrozen) )  
		goto label_cond_c;
	cVar2 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar2;
	// 098    .line 208
label_cond_c:
	this->explicit[result->ordinal()] = cVar1;
	if ( rangeStart )     
		goto label_cond_45;
	cVar3 = android::icu::impl::StandardPlural::values({const[class].FS-Param});
	cVar4 = cVar0;
label_goto_1c:
	if ( cVar4 >= cVar3->size() )
		goto label_cond_75;
	rs = cVar3[cVar4];
	//    .local v1, "rs":Landroid/icu/impl/StandardPlural;
	if ( rangeEnd )     
		goto label_cond_34;
	cVar5 = android::icu::impl::StandardPlural::values({const[class].FS-Param});
	cVar6 = cVar0;
label_goto_28:
	if ( cVar6 >= cVar5->size() )
		goto label_cond_41;
	//    .local v0, "re":Landroid/icu/impl/StandardPlural;
	this->matrix->setIfNew(rs, cVar5[cVar6], result);
	cVar6 = ( cVar6 + 0x1);
	goto label_goto_28;
	// 154    .line 216
	// 155    .end local v0    # "re":Landroid/icu/impl/StandardPlural;
label_cond_34:
	this->explicit[rangeEnd->ordinal()] = cVar1;
	this->matrix->setIfNew(rs, rangeEnd, result);
label_cond_41:
	cVar4 = ( cVar4 + 0x1);
	goto label_goto_1c;
	// 178    .line 220
	// 179    .end local v1    # "rs":Landroid/icu/impl/StandardPlural;
label_cond_45:
	if ( rangeEnd )     
		goto label_cond_60;
	this->explicit[rangeStart->ordinal()] = cVar1;
	cVar9 = android::icu::impl::StandardPlural::values({const[class].FS-Param});
label_goto_54:
	if ( cVar0 >= cVar9->size() )
		goto label_cond_75;
	//    .restart local v0    # "re":Landroid/icu/impl/StandardPlural;
	this->matrix->setIfNew(rangeStart, cVar9[cVar0], result);
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_54;
	// 215    .line 226
	// 216    .end local v0    # "re":Landroid/icu/impl/StandardPlural;
label_cond_60:
	this->explicit[rangeStart->ordinal()] = cVar1;
	this->explicit[rangeEnd->ordinal()] = cVar1;
	this->matrix->setIfNew(rangeStart, rangeEnd, result);
label_cond_75:
	return;

}
// .method public cloneAsThawed()Landroid/icu/text/PluralRanges;
std::shared_ptr<android::icu::text::PluralRanges> android::icu::text::PluralRanges::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::text::PluralRanges> result;
	std::shared_ptr<bool[]> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 248    .end annotation
	result = std::make_shared<android::icu::text::PluralRanges>();
	//    .local v0, "result":Landroid/icu/text/PluralRanges;
	cVar0 = this->explicit->clone();
	cVar0->checkCast("bool[]");
	result->explicit = cVar0;
	result->matrix = this->matrix->clone();
	return result;

}
// .method public compareTo(Landroid/icu/text/PluralRanges;)I
int android::icu::text::PluralRanges::compareTo(std::shared_ptr<android::icu::text::PluralRanges> that)
{
	
	//    .param p1, "that"    # Landroid/icu/text/PluralRanges;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 299    .end annotation
	return this->matrix->compareTo(that->matrix);

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::PluralRanges::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::PluralRanges> otherPR;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 334    .end annotation
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return 0x1;
	// 347    .line 292
label_cond_5:
	if ( other->instanceOf("android::icu::text::PluralRanges") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	otherPR = other;
	otherPR->checkCast("android::icu::text::PluralRanges");
	//    .local v0, "otherPR":Landroid/icu/text/PluralRanges;
	if ( !(this->matrix->equals(otherPR->matrix)) )  
		goto label_cond_1f;
	cVar1 = java::util::Arrays::equals(this->explicit, otherPR->explicit);
label_cond_1f:
	return cVar1;

}
// .method public freeze()Landroid/icu/text/PluralRanges;
std::shared_ptr<android::icu::text::PluralRanges> android::icu::text::PluralRanges::freeze()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 389    .end annotation
	this->isFrozen = 0x1;
	return this;

}
// .method public get(Landroid/icu/impl/StandardPlural;Landroid/icu/impl/StandardPlural;)Landroid/icu/impl/StandardPlural;
std::shared_ptr<android::icu::impl::StandardPlural> android::icu::text::PluralRanges::get(std::shared_ptr<android::icu::impl::StandardPlural> start,std::shared_ptr<android::icu::impl::StandardPlural> end)
{
	
	auto result;
	std::shared_ptr<android::icu::impl::StandardPlural> end;
	
	//    .param p1, "start"    # Landroid/icu/impl/StandardPlural;
	//    .param p2, "end"    # Landroid/icu/impl/StandardPlural;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 420    .end annotation
	result = this->matrix->get(start, end);
	//    .local v0, "result":Landroid/icu/impl/StandardPlural;
	if ( result )     
		goto label_cond_9;
	//    .end local p2    # "end":Landroid/icu/impl/StandardPlural;
label_goto_8:
	return end;
	// 438    .restart local p2    # "end":Landroid/icu/impl/StandardPlural;
label_cond_9:
	end = result;
	goto label_goto_8;

}
// .method public hashCode()I
int android::icu::text::PluralRanges::hashCode()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 448    .end annotation
	return this->matrix->hashCode();

}
// .method public isExplicit(Landroid/icu/impl/StandardPlural;Landroid/icu/impl/StandardPlural;)Z
bool android::icu::text::PluralRanges::isExplicit(std::shared_ptr<android::icu::impl::StandardPlural> start,std::shared_ptr<android::icu::impl::StandardPlural> end)
{
	
	bool cVar0;
	
	//    .param p1, "start"    # Landroid/icu/impl/StandardPlural;
	//    .param p2, "end"    # Landroid/icu/impl/StandardPlural;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 466    .end annotation
	if ( !(this->matrix->get(start, end)) )  
		goto label_cond_a;
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public isExplicitlySet(Landroid/icu/impl/StandardPlural;)Z
bool android::icu::text::PluralRanges::isExplicitlySet(std::shared_ptr<android::icu::impl::StandardPlural> count)
{
	
	//    .param p1, "count"    # Landroid/icu/impl/StandardPlural;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 493    .end annotation
	return this->explicit[count->ordinal()];

}
// .method public isFrozen()Z
bool android::icu::text::PluralRanges::isFrozen()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 511    .end annotation
	return this->isFrozen;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRanges::toString()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 523    .end annotation
	return this->matrix->toString();

}


