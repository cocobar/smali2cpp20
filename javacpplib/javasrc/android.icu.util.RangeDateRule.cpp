// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\RangeDateRule.smali
#include "java2ctype.h"
#include "android.icu.util.DateRule.h"
#include "android.icu.util.Range.h"
#include "android.icu.util.RangeDateRule.h"
#include "java.lang.Object.h"
#include "java.util.ArrayList.h"
#include "java.util.Date.h"
#include "java.util.List.h"

// .method public constructor <init>()V
android::icu::util::RangeDateRule::RangeDateRule()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	// 028    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>(0x2);
	this->ranges = cVar0;
	return;

}
// .method private rangeAt(I)Landroid/icu/util/Range;
std::shared_ptr<android::icu::util::Range> android::icu::util::RangeDateRule::rangeAt(int index)
{
	
	std::shared_ptr<android::icu::util::Range> cVar0;
	
	//    .param p1, "index"    # I
	if ( index >= this->ranges->size() )
		goto label_cond_11;
	cVar0 = this->ranges->get(index);
	cVar0->checkCast("android::icu::util::Range");
label_goto_10:
	return cVar0;
	// 068    .line 147
label_cond_11:
	cVar0 = 0x0;
	goto label_goto_10;

}
// .method private startIndex(Ljava/util/Date;)I
int android::icu::util::RangeDateRule::startIndex(std::shared_ptr<java::util::Date> start)
{
	
	int i;
	std::shared_ptr<android::icu::util::Range> r;
	
	//    .param p1, "start"    # Ljava/util/Date;
	//    .local v1, "lastIndex":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( i >= this->ranges->size() )
		goto label_cond_1f;
	r = this->ranges->get(i);
	r->checkCast("android::icu::util::Range");
	//    .local v2, "r":Landroid/icu/util/Range;
	if ( !(start->before(r->start)) )  
		goto label_cond_20;
	//    .end local v2    # "r":Landroid/icu/util/Range;
label_cond_1f:
	return this->ranges->size();
	// 125    .line 140
	// 126    .restart local v2    # "r":Landroid/icu/util/Range;
label_cond_20:
	i;
	i = ( i + 0x1);
	goto label_goto_7;

}
// .method public add(Landroid/icu/util/DateRule;)V
void android::icu::util::RangeDateRule::add(std::shared_ptr<android::icu::util::DateRule> rule)
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	//    .param p1, "rule"    # Landroid/icu/util/DateRule;
	cVar0 = std::make_shared<java::util::Date>(-0x8000000000000000L);
	this->add(cVar0, rule);
	return;

}
// .method public add(Ljava/util/Date;Landroid/icu/util/DateRule;)V
void android::icu::util::RangeDateRule::add(std::shared_ptr<java::util::Date> start,std::shared_ptr<android::icu::util::DateRule> rule)
{
	
	std::shared_ptr<android::icu::util::Range> cVar0;
	
	//    .param p1, "start"    # Ljava/util/Date;
	//    .param p2, "rule"    # Landroid/icu/util/DateRule;
	cVar0 = std::make_shared<android::icu::util::Range>(start, rule);
	this->ranges->add(cVar0);
	return;

}
// .method public firstAfter(Ljava/util/Date;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::RangeDateRule::firstAfter(std::shared_ptr<java::util::Date> start)
{
	
	int index;
	std::shared_ptr<android::icu::util::DateRule> r;
	std::shared_ptr<java::util::Date> e;
	
	//    .param p1, "start"    # Ljava/util/Date;
	index = this->startIndex(start);
	//    .local v1, "index":I
	if ( index != this->ranges->size() )
		goto label_cond_d;
	index = 0x0;
label_cond_d:
	//    .local v3, "result":Ljava/util/Date;
	r = this->rangeAt(index);
	//    .local v2, "r":Landroid/icu/util/Range;
	e = this->rangeAt(( index + 0x1));
	//    .local v0, "e":Landroid/icu/util/Range;
	if ( !(r) )  
		goto label_cond_28;
	if ( !(r->rule) )  
		goto label_cond_28;
	if ( !(e) )  
		goto label_cond_29;
	//    .end local v3    # "result":Ljava/util/Date;
label_cond_28:
label_goto_28:
	return 0x0;
	// 242    .line 77
	// 243    .restart local v3    # "result":Ljava/util/Date;
label_cond_29:
	//    .local v3, "result":Ljava/util/Date;
	goto label_goto_28;

}
// .method public firstBetween(Ljava/util/Date;Ljava/util/Date;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::RangeDateRule::firstBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end)
{
	
	int index;
	std::shared_ptr<java::util::Date> result;
	std::shared_ptr<java::util::Date> next;
	std::shared_ptr<android::icu::util::DateRule> r;
	
	//    .param p1, "start"    # Ljava/util/Date;
	//    .param p2, "end"    # Ljava/util/Date;
	if ( end )     
		goto label_cond_7;
	return this->firstAfter(start);
	// 271    .line 92
label_cond_7:
	index = this->startIndex(start);
	//    .local v1, "index":I
	result = 0x0;
	//    .local v4, "result":Ljava/util/Date;
	next = this->rangeAt(index);
	//    .end local v4    # "result":Ljava/util/Date;
	//    .local v2, "next":Landroid/icu/util/Range;
label_cond_10:
label_goto_10:
	if ( result )     
		goto label_cond_40;
	if ( !(next) )  
		goto label_cond_40;
	if ( !(( next->start->after(end) ^ 0x1)) )  
		goto label_cond_40;
	r = next;
	//    .local v3, "r":Landroid/icu/util/Range;
	next = this->rangeAt(( index + 0x1));
	if ( !(r->rule) )  
		goto label_cond_10;
	if ( !(next) )  
		goto label_cond_3e;
	if ( !(( next->start->after(end) ^ 0x1)) )  
		goto label_cond_3e;
	//    .local v0, "e":Ljava/util/Date;
label_goto_37:
	//    .local v4, "result":Ljava/util/Date;
	goto label_goto_10;
	// 349    .line 104
	// 350    .end local v0    # "e":Ljava/util/Date;
	// 351    .end local v4    # "result":Ljava/util/Date;
label_cond_3e:
	//    .restart local v0    # "e":Ljava/util/Date;
	goto label_goto_37;
	// 358    .line 108
	// 359    .end local v0    # "e":Ljava/util/Date;
	// 360    .end local v3    # "r":Landroid/icu/util/Range;
label_cond_40:
	return result;

}
// .method public isBetween(Ljava/util/Date;Ljava/util/Date;)Z
bool android::icu::util::RangeDateRule::isBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end)
{
	
	bool cVar0;
	
	//    .param p1, "start"    # Ljava/util/Date;
	//    .param p2, "end"    # Ljava/util/Date;
	if ( this->firstBetween(start, end) )     
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method public isOn(Ljava/util/Date;)Z
bool android::icu::util::RangeDateRule::isOn(std::shared_ptr<java::util::Date> date)
{
	
	std::shared_ptr<android::icu::util::DateRule> r;
	bool cVar0;
	
	//    .param p1, "date"    # Ljava/util/Date;
	r = this->rangeAt(this->startIndex(date));
	//    .local v0, "r":Landroid/icu/util/Range;
	if ( !(r) )  
		goto label_cond_15;
	if ( !(r->rule) )  
		goto label_cond_15;
	cVar0 = r->rule->isOn(date);
label_goto_14:
	return cVar0;
label_cond_15:
	cVar0 = 0x0;
	goto label_goto_14;

}


