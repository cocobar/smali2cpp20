// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\StringRange$Ranges.smali
#include "java2ctype.h"
#include "android.icu.impl.StringRange_S_Range.h"
#include "android.icu.impl.StringRange_S_Ranges.h"
#include "android.icu.lang.CharSequences.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Ljava/lang/String;)V
android::icu::impl::StringRange_S_Ranges::StringRange_S_Ranges(std::shared_ptr<java::lang::String> s)
{
	
	auto array;
	int i;
	std::shared_ptr<android::icu::impl::StringRange_S_Range> cVar0;
	
	//    .param p1, "s"    # Ljava/lang/String;
	// 041    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	array = android::icu::lang::CharSequences::codePoints(s);
	//    .local v0, "array":[I
	this->ranges = std::make_shared<std::vector<std::vector<android::icu::impl::StringRange_S_Range>>>(array->size());
	i = 0x0;
	//    .local v1, "i":I
label_goto_d:
	if ( i >= array->size() )
		goto label_cond_20;
	cVar0 = std::make_shared<android::icu::impl::StringRange_S_Range>(array[i], array[i]);
	this->ranges[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_d;
	// 083    .line 175
label_cond_20:
	return;

}
// .method public compareTo(Landroid/icu/impl/StringRange$Ranges;)I
int android::icu::impl::StringRange_S_Ranges::compareTo(std::shared_ptr<android::icu::impl::StringRange_S_Ranges> other)
{
	
	int diff;
	int i;
	
	//    .param p1, "other"    # Landroid/icu/impl/StringRange$Ranges;
	diff = (this->ranges->size() - other->ranges->size());
	//    .local v0, "diff":I
	if ( !(diff) )  
		goto label_cond_c;
	return diff;
	// 115    .line 230
label_cond_c:
	i = 0x0;
	//    .local v1, "i":I
label_goto_d:
	if ( i >= this->ranges->size() )
		goto label_cond_24;
	diff = this->ranges[i]->compareTo(other->ranges[i]);
	if ( !(diff) )  
		goto label_cond_21;
	return diff;
	// 146    .line 230
label_cond_21:
	i = ( i + 0x1);
	goto label_goto_d;
	// 152    .line 236
label_cond_24:
	return 0x0;

}
// .method public end(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::StringRange_S_Ranges::end(bool mostCompact)
{
	
	int firstDiff;
	std::shared_ptr<java::lang::StringBuilder> result;
	int i;
	
	//    .param p1, "mostCompact"    # Z
	firstDiff = this->firstDifference();
	//    .local v0, "firstDiff":I
	if ( firstDiff != this->ranges->size() )
		goto label_cond_b;
	return 0x0;
	// 194    .line 207
label_cond_b:
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "result":Ljava/lang/StringBuilder;
	if ( !(mostCompact) )  
		goto label_cond_24;
	i = firstDiff;
	//    .local v1, "i":I
label_goto_13:
	if ( i >= this->ranges->size() )
		goto label_cond_26;
	result->appendCodePoint(this->ranges[i]->max);
	i = ( i + 0x1);
	goto label_goto_13;
	// 228    .end local v1    # "i":I
label_cond_24:
	i = 0x0;
	//    .restart local v1    # "i":I
	goto label_goto_13;
	// 235    .line 211
label_cond_26:
	return result->toString();

}
// .method public firstDifference()I
int android::icu::impl::StringRange_S_Ranges::firstDifference()
{
	
	int i;
	
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= this->ranges->size() )
		goto label_cond_18;
	if ( this->ranges[i]->min == this->ranges[i]->max )
		goto label_cond_15;
	return i;
	// 277    .line 214
label_cond_15:
	i = ( i + 0x1);
	goto label_goto_1;
	// 283    .line 219
label_cond_18:
	return this->ranges->size();

}
// .method public merge(ILandroid/icu/impl/StringRange$Ranges;)Z
bool android::icu::impl::StringRange_S_Ranges::merge(int pivot,std::shared_ptr<android::icu::impl::StringRange_S_Ranges> other)
{
	
	bool cVar0;
	int i;
	
	//    .param p1, "pivot"    # I
	//    .param p2, "other"    # Landroid/icu/impl/StringRange$Ranges;
	cVar0 = 0x0;
	i = ( this->ranges->size() + -0x1);
	//    .local v0, "i":I
label_goto_6:
	if ( i < 0 ) 
		goto label_cond_2d;
	if ( i != pivot )
		goto label_cond_1b;
	if ( this->ranges[i]->max == ( other->ranges[i]->min + -0x1) )
		goto label_cond_2a;
	return cVar0;
	// 334    .line 184
label_cond_1b:
	if ( this->ranges[i]->equals(other->ranges[i]) )     
		goto label_cond_2a;
	return cVar0;
	// 353    .line 178
label_cond_2a:
	i = ( i + -0x1);
	goto label_goto_6;
	// 359    .line 190
label_cond_2d:
	this->ranges[pivot]->max = other->ranges[pivot]->max;
	return 0x1;

}
// .method public size()Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> android::icu::impl::StringRange_S_Ranges::size()
{
	
	return java::lang::Integer::valueOf(this->ranges->size());

}
// .method public start()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::StringRange_S_Ranges::start()
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	int i;
	
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "result":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= this->ranges->size() )
		goto label_cond_17;
	result->appendCodePoint(this->ranges[i]->min);
	i = ( i + 0x1);
	goto label_goto_6;
	// 430    .line 200
label_cond_17:
	return result->toString();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::StringRange_S_Ranges::toString()
{
	
	std::shared_ptr<java::lang::String> start;
	std::shared_ptr<java::lang::String> end;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	start = this->start();
	//    .local v1, "start":Ljava/lang/String;
	end = this->end(0x0);
	//    .local v0, "end":Ljava/lang/String;
	if ( end )     
		goto label_cond_c;
	//    .end local v1    # "start":Ljava/lang/String;
label_goto_b:
	return start;
	// 464    .restart local v1    # "start":Ljava/lang/String;
label_cond_c:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	start = cVar0->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("~")))->append(end)->toString();
	goto label_goto_b;

}


