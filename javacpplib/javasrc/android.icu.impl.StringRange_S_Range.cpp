// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\StringRange$Range.smali
#include "java2ctype.h"
#include "android.icu.impl.StringRange_S_Range.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(II)V
android::icu::impl::StringRange_S_Range::StringRange_S_Range(int min,int max)
{
	
	//    .param p1, "min"    # I
	//    .param p2, "max"    # I
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->min = min;
	this->max = max;
	return;

}
// .method public compareTo(Landroid/icu/impl/StringRange$Range;)I
int android::icu::impl::StringRange_S_Range::compareTo(std::shared_ptr<android::icu::impl::StringRange_S_Range> that)
{
	
	int diff;
	
	//    .param p1, "that"    # Landroid/icu/impl/StringRange$Range;
	diff = (this->min - that->min);
	//    .local v0, "diff":I
	if ( !(diff) )  
		goto label_cond_9;
	return diff;
	// 077    .line 154
label_cond_9:
	return (this->max -  that->max);

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::StringRange_S_Range::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	if ( this == obj )
		goto label_cond_12;
	if ( !(obj) )  
		goto label_cond_13;
	if ( !(obj->instanceOf("android::icu::impl::StringRange_S_Range")) )  
		goto label_cond_13;
	obj->checkCast("android::icu::impl::StringRange_S_Range");
	//    .end local p1    # "obj":Ljava/lang/Object;
	if ( this->compareTo(obj) )     
		goto label_cond_13;
label_cond_12:
label_goto_12:
	return cVar0;
label_cond_13:
	cVar0 = 0x0;
	goto label_goto_12;

}
// .method public hashCode()I
int android::icu::impl::StringRange_S_Range::hashCode()
{
	
	return (( this->min * 0x25) +  this->max);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::StringRange_S_Range::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<java::lang::String> cVar1;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	result = cVar0->appendCodePoint(this->min);
	//    .local v0, "result":Ljava/lang/StringBuilder;
	if ( this->min != this->max )
		goto label_cond_16;
	cVar1 = result->toString();
label_goto_15:
	return cVar1;
label_cond_16:
	cVar1 = result->append(0x7e)->appendCodePoint(this->max)->toString();
	goto label_goto_15;

}


