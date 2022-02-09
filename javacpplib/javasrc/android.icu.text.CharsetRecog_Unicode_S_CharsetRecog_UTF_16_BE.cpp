// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_Unicode$CharsetRecog_UTF_16_BE.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_Unicode_S_CharsetRecog_UTF_16_BE.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_16_BE::CharsetRecog_Unicode_S_CharsetRecog_UTF_16_BE()
{
	
	// 023    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_Unicode;-><init>()V
	return;

}
// .method getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_16_BE::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF-16BE"));

}
// .method match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_16_BE::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int cVar0;
	std::shared_ptr<unsigned char[]> input;
	int confidence;
	int bytesToCheck;
	int charIndex;
	int codeUnit;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar1;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	cVar0 = 0x64;
	input = det->fRawInput;
	//    .local v4, "input":[B
	confidence = 0xa;
	//    .local v3, "confidence":I
	bytesToCheck = java::lang::Math::min(input->size(), 0x1e);
	//    .local v0, "bytesToCheck":I
	charIndex = 0x0;
	//    .local v1, "charIndex":I
label_goto_e:
	if ( charIndex >= ( bytesToCheck + -0x1) )
		goto label_cond_25;
	codeUnit = android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_16_BE::codeUnit16FromBytes(input[charIndex], input[( charIndex + 0x1)]);
	//    .local v2, "codeUnit":I
	if ( charIndex )     
		goto label_cond_33;
	if ( codeUnit != 0xfeff )
		goto label_cond_33;
	confidence = 0x64;
	//    .end local v2    # "codeUnit":I
label_cond_25:
	if ( bytesToCheck >= 0x4 )
		goto label_cond_2b;
	if ( confidence >= cVar0 )
		goto label_cond_2b;
	confidence = 0x0;
label_cond_2b:
	if ( confidence <= 0 )
		goto label_cond_3e;
	cVar1 = std::make_shared<android::icu::text::CharsetMatch>(det, this, confidence);
	return cVar1;
	// 119    .line 76
	// 120    .restart local v2    # "codeUnit":I
label_cond_33:
	confidence = android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_16_BE::adjustConfidence(codeUnit, confidence);
	if ( !(confidence) )  
		goto label_cond_25;
	if ( confidence == cVar0 )
		goto label_cond_25;
	charIndex = ( charIndex + 0x2);
	goto label_goto_e;
	// 136    .line 87
	// 137    .end local v2    # "codeUnit":I
label_cond_3e:
	return 0x0;

}


