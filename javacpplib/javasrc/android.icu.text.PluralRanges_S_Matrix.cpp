// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRanges$Matrix.smali
#include "java2ctype.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.text.PluralRanges_S_Matrix.h"
#include "android.icu.util.Output.h"
#include "java.lang.Boolean.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.EnumSet.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

// .method constructor <init>()V
android::icu::text::PluralRanges_S_Matrix::PluralRanges_S_Matrix()
{
	
	int i;
	
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->data = std::make_shared<std::vector<unsigned char[]>>((android::icu::impl::StandardPlural::COUNT *  android::icu::impl::StandardPlural::COUNT));
	i = 0x0;
	//    .local v0, "i":I
label_goto_d:
	if ( i >= this->data->size() )
		goto label_cond_1a;
	this->data[i] = -0x1;
	i = ( i + 0x1);
	goto label_goto_d;
	// 078    .line 57
label_cond_1a:
	return;

}
// .method public clone()Landroid/icu/text/PluralRanges$Matrix;
std::shared_ptr<android::icu::text::PluralRanges_S_Matrix> android::icu::text::PluralRanges_S_Matrix::clone()
{
	
	std::shared_ptr<android::icu::text::PluralRanges_S_Matrix> result;
	std::shared_ptr<unsigned char[]> cVar0;
	
	result = std::make_shared<android::icu::text::PluralRanges_S_Matrix>();
	//    .local v0, "result":Landroid/icu/text/PluralRanges$Matrix;
	cVar0 = this->data->clone();
	cVar0->checkCast("unsigned char[]");
	result->data = cVar0;
	return result;

}
// .method public compareTo(Landroid/icu/text/PluralRanges$Matrix;)I
int android::icu::text::PluralRanges_S_Matrix::compareTo(std::shared_ptr<android::icu::text::PluralRanges_S_Matrix> o)
{
	
	int i;
	int diff;
	
	//    .param p1, "o"    # Landroid/icu/text/PluralRanges$Matrix;
	i = 0x0;
	//    .local v1, "i":I
label_goto_2:
	if ( i >= this->data->size() )
		goto label_cond_17;
	diff = (this->data[i] - o->data[i]);
	//    .local v0, "diff":I
	if ( !(diff) )  
		goto label_cond_14;
	return diff;
	// 163    .line 159
label_cond_14:
	i = ( i + 0x1);
	goto label_goto_2;
	// 169    .line 165
	// 170    .end local v0    # "diff":I
label_cond_17:
	return 0x0;

}
// .method endSame(Landroid/icu/impl/StandardPlural;)Landroid/icu/impl/StandardPlural;
std::shared_ptr<android::icu::impl::StandardPlural> android::icu::text::PluralRanges_S_Matrix::endSame(std::shared_ptr<android::icu::impl::StandardPlural> end)
{
	
	std::shared_ptr<android::icu::impl::StandardPlural> first;
	std::shared_ptr<java::util::Iterator> start_S_iterator;
	std::shared_ptr<android::icu::impl::StandardPlural> start;
	auto item;
	
	//    .param p1, "end"    # Landroid/icu/impl/StandardPlural;
	first = 0x0;
	//    .local v0, "first":Landroid/icu/impl/StandardPlural;
	start_S_iterator = android::icu::impl::StandardPlural::VALUES->iterator();
	//    .end local v0    # "first":Landroid/icu/impl/StandardPlural;
	//    .local v3, "start$iterator":Ljava/util/Iterator;
label_cond_8:
label_goto_8:
	if ( !(start_S_iterator->hasNext()) )  
		goto label_cond_21;
	start = start_S_iterator->next();
	start->checkCast("android::icu::impl::StandardPlural");
	//    .local v2, "start":Landroid/icu/impl/StandardPlural;
	item = this->get(start, end);
	//    .local v1, "item":Landroid/icu/impl/StandardPlural;
	if ( !(item) )  
		goto label_cond_8;
	if ( first )     
		goto label_cond_1e;
	//    .local v0, "first":Landroid/icu/impl/StandardPlural;
	goto label_goto_8;
	// 243    .line 105
	// 244    .end local v0    # "first":Landroid/icu/impl/StandardPlural;
label_cond_1e:
	if ( first == item )
		goto label_cond_8;
	return 0x0;
	// 251    .line 109
	// 252    .end local v1    # "item":Landroid/icu/impl/StandardPlural;
	// 253    .end local v2    # "start":Landroid/icu/impl/StandardPlural;
label_cond_21:
	return first;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::PluralRanges_S_Matrix::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar1;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( other->instanceOf("android::icu::text::PluralRanges_S_Matrix") )     
		goto label_cond_6;
	return cVar1;
	// 273    .line 154
label_cond_6:
	other->checkCast("android::icu::text::PluralRanges_S_Matrix");
	//    .end local p1    # "other":Ljava/lang/Object;
	if ( this->compareTo(other) )     
		goto label_cond_f;
	cVar1 = 0x1;
label_cond_f:
	return cVar1;

}
// .method get(Landroid/icu/impl/StandardPlural;Landroid/icu/impl/StandardPlural;)Landroid/icu/impl/StandardPlural;
std::shared_ptr<android::icu::impl::StandardPlural> android::icu::text::PluralRanges_S_Matrix::get(std::shared_ptr<android::icu::impl::StandardPlural> start,std::shared_ptr<android::icu::impl::StandardPlural> end)
{
	
	int result;
	std::shared_ptr<android::icu::impl::StandardPlural> cVar0;
	
	//    .param p1, "start"    # Landroid/icu/impl/StandardPlural;
	//    .param p2, "end"    # Landroid/icu/impl/StandardPlural;
	result = this->data[((start->ordinal() *  android::icu::impl::StandardPlural::COUNT) +  end->ordinal())];
	//    .local v0, "result":B
	if ( result >= 0 )
		goto label_cond_14;
	cVar0 = 0x0;
label_goto_13:
	return cVar0;
label_cond_14:
	cVar0 = android::icu::impl::StandardPlural::VALUES->get(result);
	cVar0->checkCast("android::icu::impl::StandardPlural");
	goto label_goto_13;

}
// .method public hashCode()I
int android::icu::text::PluralRanges_S_Matrix::hashCode()
{
	
	int result;
	int i;
	
	result = 0x0;
	//    .local v1, "result":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_2:
	if ( i >= this->data->size() )
		goto label_cond_12;
	result = (( result * 0x25) + this->data[i]);
	i = ( i + 0x1);
	goto label_goto_2;
	// 369    .line 146
label_cond_12:
	return result;

}
// .method set(Landroid/icu/impl/StandardPlural;Landroid/icu/impl/StandardPlural;Landroid/icu/impl/StandardPlural;)V
void android::icu::text::PluralRanges_S_Matrix::set(std::shared_ptr<android::icu::impl::StandardPlural> start,std::shared_ptr<android::icu::impl::StandardPlural> end,std::shared_ptr<android::icu::impl::StandardPlural> result)
{
	
	unsigned char cVar0;
	
	//    .param p1, "start"    # Landroid/icu/impl/StandardPlural;
	//    .param p2, "end"    # Landroid/icu/impl/StandardPlural;
	//    .param p3, "result"    # Landroid/icu/impl/StandardPlural;
	if ( result )     
		goto label_cond_14;
	cVar0 = -0x1;
label_goto_11:
	this->data[(end->ordinal() +  (start->ordinal() *  android::icu::impl::StandardPlural::COUNT))] = cVar0;
	return;
	// 408    .line 65
label_cond_14:
	cVar0 = (unsigned char)(result->ordinal());
	goto label_goto_11;

}
// .method setIfNew(Landroid/icu/impl/StandardPlural;Landroid/icu/impl/StandardPlural;Landroid/icu/impl/StandardPlural;)V
void android::icu::text::PluralRanges_S_Matrix::setIfNew(std::shared_ptr<android::icu::impl::StandardPlural> start,std::shared_ptr<android::icu::impl::StandardPlural> end,std::shared_ptr<android::icu::impl::StandardPlural> result)
{
	
	int old;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	unsigned char cVar2;
	
	//    .param p1, "start"    # Landroid/icu/impl/StandardPlural;
	//    .param p2, "end"    # Landroid/icu/impl/StandardPlural;
	//    .param p3, "result"    # Landroid/icu/impl/StandardPlural;
	old = this->data[((start->ordinal() *  android::icu::impl::StandardPlural::COUNT) +  end->ordinal())];
	//    .local v0, "old":B
	if ( old < 0 ) 
		goto label_cond_4f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Previously set value for <")))->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(end)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(android::icu::impl::StandardPlural::VALUES->get(old))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(">")))->toString());
	// throw
	throw cVar0;
	// 510    .line 78
label_cond_4f:
	if ( result )     
		goto label_cond_63;
	cVar2 = -0x1;
label_goto_60:
	this->data[(end->ordinal() +  (start->ordinal() *  android::icu::impl::StandardPlural::COUNT))] = cVar2;
	return;
	// 538    .line 79
label_cond_63:
	cVar2 = (unsigned char)(result->ordinal());
	goto label_goto_60;

}
// .method startSame(Landroid/icu/impl/StandardPlural;Ljava/util/EnumSet;Landroid/icu/util/Output;)Landroid/icu/impl/StandardPlural;
std::shared_ptr<android::icu::impl::StandardPlural> android::icu::text::PluralRanges_S_Matrix::startSame(std::shared_ptr<android::icu::impl::StandardPlural> start,std::shared_ptr<java::util::EnumSet<android::icu::impl::StandardPlural>> endDone,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> emit)
{
	
	std::shared_ptr<android::icu::impl::StandardPlural> first;
	std::shared_ptr<java::util::Iterator> end_S_iterator;
	std::shared_ptr<android::icu::impl::StandardPlural> end;
	auto item;
	
	//    .param p1, "start"    # Landroid/icu/impl/StandardPlural;
	//    .annotation system Ldalvik/annotation/Signature;
	// 553        value = {
	// 554            "(",
	// 555            "Landroid/icu/impl/StandardPlural;",
	// 556            "Ljava/util/EnumSet",
	// 557            "<",
	// 558            "Landroid/icu/impl/StandardPlural;",
	// 559            ">;",
	// 560            "Landroid/icu/util/Output",
	// 561            "<",
	// 562            "Ljava/lang/Boolean;",
	// 563            ">;)",
	// 564            "Landroid/icu/impl/StandardPlural;"
	// 565        }
	// 566    .end annotation
	//    .local p2, "endDone":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/StandardPlural;>;"
	//    .local p3, "emit":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	emit->value = java::lang::Boolean::valueOf(0x0);
	first = 0x0;
	//    .local v2, "first":Landroid/icu/impl/StandardPlural;
	end_S_iterator = android::icu::impl::StandardPlural::VALUES->iterator();
	//    .end local v2    # "first":Landroid/icu/impl/StandardPlural;
	//    .local v1, "end$iterator":Ljava/util/Iterator;
label_cond_f:
label_goto_f:
	if ( !(end_S_iterator->hasNext()) )  
		goto label_cond_36;
	end = end_S_iterator->next();
	end->checkCast("android::icu::impl::StandardPlural");
	//    .local v0, "end":Landroid/icu/impl/StandardPlural;
	item = this->get(start, end);
	//    .local v3, "item":Landroid/icu/impl/StandardPlural;
	if ( !(item) )  
		goto label_cond_f;
	if ( first )     
		goto label_cond_25;
	//    .local v2, "first":Landroid/icu/impl/StandardPlural;
	goto label_goto_f;
	// 629    .line 129
	// 630    .end local v2    # "first":Landroid/icu/impl/StandardPlural;
label_cond_25:
	if ( first == item )
		goto label_cond_28;
	return 0x0;
	// 637    .line 133
label_cond_28:
	if ( endDone->contains(end) )     
		goto label_cond_f;
	emit->value = java::lang::Boolean::valueOf(0x1);
	goto label_goto_f;
	// 656    .line 137
	// 657    .end local v0    # "end":Landroid/icu/impl/StandardPlural;
	// 658    .end local v3    # "item":Landroid/icu/impl/StandardPlural;
label_cond_36:
	return first;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRanges_S_Matrix::toString()
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<java::lang::Object> cVar1;
	int cVar2;
	std::shared_ptr<android::icu::impl::StandardPlural> i;
	std::shared_ptr<java::lang::Object> cVar3;
	int cVar4;
	std::shared_ptr<android::icu::impl::StandardPlural> j;
	std::shared_ptr<java::lang::Object> x;
	
	cVar0 = 0x0;
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "result":Ljava/lang/StringBuilder;
	cVar1 = android::icu::impl::StandardPlural::values({const[class].FS-Param});
	cVar2 = cVar0;
label_goto_c:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_47;
	i = cVar1[cVar2];
	//    .local v0, "i":Landroid/icu/impl/StandardPlural;
	cVar3 = android::icu::impl::StandardPlural::values({const[class].FS-Param});
	cVar4 = cVar0;
label_goto_16:
	if ( cVar4 >= cVar3->size() )
		goto label_cond_43;
	j = cVar3[cVar4];
	//    .local v1, "j":Landroid/icu/impl/StandardPlural;
	x = this->get(i, j);
	//    .local v3, "x":Landroid/icu/impl/StandardPlural;
	if ( !(x) )  
		goto label_cond_40;
	result->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" & ")))->append(j)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" \u2192 ")))->append(x)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(";\n")));
label_cond_40:
	cVar4 = ( cVar4 + 0x1);
	goto label_goto_16;
	// 749    .line 178
	// 750    .end local v1    # "j":Landroid/icu/impl/StandardPlural;
	// 751    .end local v3    # "x":Landroid/icu/impl/StandardPlural;
label_cond_43:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_c;
	// 759    .line 186
	// 760    .end local v0    # "i":Landroid/icu/impl/StandardPlural;
label_cond_47:
	return result->toString();

}


