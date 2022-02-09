// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_2022$CharsetRecog_2022KR.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_2022_S_CharsetRecog_2022KR.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::CharsetRecog_2022_S_CharsetRecog_2022KR::CharsetRecog_2022_S_CharsetRecog_2022KR()
{
	
	std::shared<std::vector<unsigned char[][]>> cVar0;
	std::shared<std::vector<unsigned char[]>> cVar1;
	
	// 027    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_2022;-><init>()V
	cVar0 = std::make_shared<std::vector<unsigned char[][]>>(0x1);
	cVar1 = std::make_shared<std::vector<unsigned char[]>>(0x4);
	?;
	cVar0[0x0] = cVar1;
	this->escapeSequences = cVar0;
	return;
	// 051    .line 131
	// 052    :array_12
	// 053    .array-data 1
	// 054        0x1bt
	// 055        0x24t
	// 056        0x29t
	// 057        0x43t
	// 058    .end array-data

}
// .method getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_2022_S_CharsetRecog_2022KR::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO-2022-KR"));

}
// .method match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_2022_S_CharsetRecog_2022KR::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det->fInputBytes, det->fInputLen, this->escapeSequences);
	//    .local v0, "confidence":I
	if ( confidence )     
		goto label_cond_e;
	cVar0 = 0x0;
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = std::make_shared<android::icu::text::CharsetMatch>(det, this, confidence);
	goto label_goto_d;

}


