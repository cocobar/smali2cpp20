// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$PatternData.smali
#include "java2ctype.h"
#include "android.icu.text.MeasureFormat_S_PatternData.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::MeasureFormat_S_PatternData::MeasureFormat_S_PatternData(std::shared_ptr<java::lang::String> pattern)
{
	
	int pos;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	// 032    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	pos = pattern->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0}")));
	//    .local v0, "pos":I
	if ( pos >= 0 )
		goto label_cond_13;
	this->prefix = pattern;
	this->suffix = 0x0;
label_goto_12:
	return;
	// 057    .line 1142
label_cond_13:
	this->prefix = pattern->substring(0x0, pos);
	this->suffix = pattern->substring(( pos + 0x3));
	goto label_goto_12;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MeasureFormat_S_PatternData::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->prefix)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; ")))->append(this->suffix)->toString();

}


