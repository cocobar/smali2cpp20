// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateIntervalInfo$PatternInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.DateIntervalInfo_S_PatternInfo.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::DateIntervalInfo_S_PatternInfo::currentSerialVersion = 0x1;
static android::icu::text::DateIntervalInfo_S_PatternInfo::serialVersionUID = 0x1L;
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Z)V
android::icu::text::DateIntervalInfo_S_PatternInfo::DateIntervalInfo_S_PatternInfo(std::shared_ptr<java::lang::String> firstPart,std::shared_ptr<java::lang::String> secondPart,bool firstDateInPtnIsLaterDate)
{
	
	//    .param p1, "firstPart"    # Ljava/lang/String;
	//    .param p2, "secondPart"    # Ljava/lang/String;
	//    .param p3, "firstDateInPtnIsLaterDate"    # Z
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fIntervalPatternFirstPart = firstPart;
	this->fIntervalPatternSecondPart = secondPart;
	this->fFirstDateInPtnIsLaterDate = firstDateInPtnIsLaterDate;
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::DateIntervalInfo_S_PatternInfo::equals(std::shared_ptr<java::lang::Object> a)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> patternInfo;
	
	//    .param p1, "a"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(a->instanceOf("android::icu::text::DateIntervalInfo_S_PatternInfo")) )  
		goto label_cond_24;
	patternInfo = a;
	patternInfo->checkCast("android::icu::text::DateIntervalInfo_S_PatternInfo");
	//    .local v0, "patternInfo":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	if ( !(android::icu::impl::Utility::objectEquals(this->fIntervalPatternFirstPart, patternInfo->fIntervalPatternFirstPart)) )  
		goto label_cond_23;
	if ( !(android::icu::impl::Utility::objectEquals(this->fIntervalPatternSecondPart, patternInfo->fIntervalPatternSecondPart)) )  
		goto label_cond_23;
	if ( this->fFirstDateInPtnIsLaterDate != patternInfo->fFirstDateInPtnIsLaterDate )
		goto label_cond_23;
	cVar1 = 0x1;
label_cond_23:
	return cVar1;
	// 115    .line 247
	// 116    .end local v0    # "patternInfo":Landroid/icu/text/DateIntervalInfo$PatternInfo;
label_cond_24:
	return cVar1;

}
// .method public firstDateInPtnIsLaterDate()Z
bool android::icu::text::DateIntervalInfo_S_PatternInfo::firstDateInPtnIsLaterDate()
{
	
	return this->fFirstDateInPtnIsLaterDate;

}
// .method public getFirstPart()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateIntervalInfo_S_PatternInfo::getFirstPart()
{
	
	return this->fIntervalPatternFirstPart;

}
// .method public getSecondPart()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateIntervalInfo_S_PatternInfo::getSecondPart()
{
	
	return this->fIntervalPatternSecondPart;

}
// .method public hashCode()I
int android::icu::text::DateIntervalInfo_S_PatternInfo::hashCode()
{
	
	int hash;
	
	if ( !(this->fIntervalPatternFirstPart) )  
		goto label_cond_1c;
	hash = this->fIntervalPatternFirstPart->hashCode();
	//    .local v0, "hash":I
label_goto_a:
	if ( !(this->fIntervalPatternSecondPart) )  
		goto label_cond_15;
	hash = (hash ^  this->fIntervalPatternSecondPart->hashCode());
label_cond_15:
	if ( !(this->fFirstDateInPtnIsLaterDate) )  
		goto label_cond_1b;
label_cond_1b:
	return hash;
	// 195    .line 256
	// 196    .end local v0    # "hash":I
label_cond_1c:
	//    .restart local v0    # "hash":I
	goto label_goto_a;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateIntervalInfo_S_PatternInfo::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 207    .end annotation
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("{first=\u00ab")))->append(this->fIntervalPatternFirstPart)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00bb, second=\u00ab")))->append(this->fIntervalPatternSecondPart)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00bb, reversed:")))->append(this->fFirstDateInPtnIsLaterDate)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")))->toString();

}


