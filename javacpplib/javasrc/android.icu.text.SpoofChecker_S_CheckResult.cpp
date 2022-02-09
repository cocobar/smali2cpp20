// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$CheckResult.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_CheckResult.h"
#include "android.icu.text.SpoofChecker_S_RestrictionLevel.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>()V
android::icu::text::SpoofChecker_S_CheckResult::SpoofChecker_S_CheckResult()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	// 038    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->checks = cVar0;
	this->position = cVar0;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SpoofChecker_S_CheckResult::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("checks:")));
	if ( this->checks )     
		goto label_cond_43;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" none")));
label_cond_16:
label_goto_16:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", numerics: ")))->append(this->numerics->toPattern(0x0));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", position: ")))->append(this->position);
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", restrictionLevel: ")))->append(this->restrictionLevel);
	return sb->toString();
	// 125    .line 1178
label_cond_43:
	if ( this->checks != -0x1 )
		goto label_cond_4f;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" all")));
	goto label_goto_16;
	// 140    .line 1181
label_cond_4f:
	if ( !(( this->checks & 0x1)) )  
		goto label_cond_5b;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" SINGLE_SCRIPT_CONFUSABLE")));
label_cond_5b:
	if ( !(( this->checks & 0x2)) )  
		goto label_cond_67;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" MIXED_SCRIPT_CONFUSABLE")));
label_cond_67:
	if ( !(( this->checks & 0x4)) )  
		goto label_cond_73;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" WHOLE_SCRIPT_CONFUSABLE")));
label_cond_73:
	if ( !(( this->checks & 0x8)) )  
		goto label_cond_7f;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ANY_CASE")));
label_cond_7f:
	if ( !(( this->checks & 0x10)) )  
		goto label_cond_8b;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" RESTRICTION_LEVEL")));
label_cond_8b:
	if ( !(( this->checks & 0x20)) )  
		goto label_cond_97;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" INVISIBLE")));
label_cond_97:
	if ( !(( this->checks & 0x40)) )  
		goto label_cond_a3;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" CHAR_LIMIT")));
label_cond_a3:
	if ( !(( this->checks & 0x80)) )  
		goto label_cond_16;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" MIXED_NUMBERS")));
	goto label_goto_16;

}


