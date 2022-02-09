// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_Unicode$CharsetRecog_UTF_32.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_Unicode_S_CharsetRecog_UTF_32.h"

// .method constructor <init>()V
android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_32::CharsetRecog_Unicode_S_CharsetRecog_UTF_32()
{
	
	// 023    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_Unicode;-><init>()V
	return;

}
// .method match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_32::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	std::shared_ptr<unsigned char[]> input;
	int limit;
	int numValid;
	int numInvalid;
	int hasBOM;
	int confidence;
	int i;
	int ch;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	cVar0 = 0x0;
	input = det->fRawInput;
	//    .local v4, "input":[B
	limit = ( ( det->fRawLength / 0x4) * 0x4);
	//    .local v5, "limit":I
	numValid = 0x0;
	//    .local v7, "numValid":I
	numInvalid = 0x0;
	//    .local v6, "numInvalid":I
	hasBOM = 0x0;
	//    .local v2, "hasBOM":Z
	confidence = 0x0;
	//    .local v1, "confidence":I
	if ( limit )     
		goto label_cond_11;
	return cVar0;
	// 079    .line 147
label_cond_11:
	if ( this->getChar(input, 0x0) != 0xfeff )
		goto label_cond_1b;
	hasBOM = 0x1;
label_cond_1b:
	i = 0x0;
	//    .local v3, "i":I
label_goto_1c:
	if ( i >= limit )
		goto label_cond_3b;
	ch = this->getChar(input, i);
	//    .local v0, "ch":I
	if ( ch < 0 ) 
		goto label_cond_29;
	if ( ch <  0x10ffff )
		goto label_cond_2e;
label_cond_29:
	numInvalid = ( numInvalid + 0x1);
label_goto_2b:
	i = ( i + 0x4);
	goto label_goto_1c;
	// 123    .line 154
label_cond_2e:
	if ( ch <  0xd800 )
		goto label_cond_38;
	if ( ch <= 0xdfff )
		goto label_cond_29;
label_cond_38:
	numValid = ( numValid + 0x1);
	goto label_goto_2b;
	// 139    .line 164
	// 140    .end local v0    # "ch":I
label_cond_3b:
	if ( !(hasBOM) )  
		goto label_cond_44;
	if ( numInvalid )     
		goto label_cond_44;
	confidence = 0x64;
label_cond_41:
label_goto_41:
	if ( confidence )     
		goto label_cond_63;
label_goto_43:
	return cVar0;
	// 157    .line 166
label_cond_44:
	if ( !(hasBOM) )  
		goto label_cond_4d;
	if ( numValid <= ( numInvalid * 0xa) )
		goto label_cond_4d;
	confidence = 0x50;
	goto label_goto_41;
	// 171    .line 168
label_cond_4d:
	if ( numValid <= 0x3 )
		goto label_cond_55;
	if ( numInvalid )     
		goto label_cond_55;
	confidence = 0x64;
	goto label_goto_41;
	// 185    .line 170
label_cond_55:
	if ( numValid <= 0 )
		goto label_cond_5c;
	if ( numInvalid )     
		goto label_cond_5c;
	confidence = 0x50;
	goto label_goto_41;
	// 197    .line 172
label_cond_5c:
	if ( numValid <= ( numInvalid * 0xa) )
		goto label_cond_41;
	confidence = 0x19;
	goto label_goto_41;
	// 208    .line 177
label_cond_63:
	cVar0 = std::make_shared<android::icu::text::CharsetMatch>(det, this, confidence);
	goto label_goto_43;

}


