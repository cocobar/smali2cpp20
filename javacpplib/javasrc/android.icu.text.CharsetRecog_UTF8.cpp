// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_UTF8.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_UTF8.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::CharsetRecog_UTF8::CharsetRecog_UTF8()
{
	
	// 012    invoke-direct {p0}, Landroid/icu/text/CharsetRecognizer;-><init>()V
	return;

}
// .method getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_UTF8::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF-8"));

}
// .method match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_UTF8::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int cVar0;
	int hasBOM;
	int numValid;
	int numInvalid;
	std::shared_ptr<unsigned char[]> input;
	int i;
	unsigned char b;
	int trailBytes;
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar1;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	cVar0 = 0x3;
	hasBOM = 0x0;
	//    .local v2, "hasBOM":Z
	numValid = 0x0;
	//    .local v6, "numValid":I
	numInvalid = 0x0;
	//    .local v5, "numInvalid":I
	input = det->fRawInput;
	//    .local v4, "input":[B
	0x0;
	//    .local v7, "trailBytes":I
	if ( det->fRawLength <  cVar0 )
		goto label_cond_27;
	if ( ( input[0x0] & 0xff) != 0xef )
		goto label_cond_27;
	if ( ( input[0x1] & 0xff) != 0xbb )
		goto label_cond_27;
	if ( ( input[0x2] & 0xff) != 0xbf )
		goto label_cond_27;
	hasBOM = 0x1;
label_cond_27:
	i = 0x0;
	//    .local v3, "i":I
label_goto_28:
	if ( i >= det->fRawLength )
		goto label_cond_67;
	b = input[i];
	//    .local v0, "b":I
	if ( ( b & 0x80) )     
		goto label_cond_35;
label_cond_32:
label_goto_32:
	i = ( i + 0x1);
	goto label_goto_28;
	// 121    .line 48
label_cond_35:
	if ( ( b & 0xe0) != 0xc0 )
		goto label_cond_4d;
label_cond_3c:
label_goto_3c:
	i = ( i + 0x1);
	if ( i >= det->fRawLength )
		goto label_cond_32;
	if ( ( input[i] & 0xc0) == 0x80 )
		goto label_cond_60;
	numInvalid = ( numInvalid + 0x1);
	goto label_goto_32;
	// 158    .line 50
label_cond_4d:
	if ( ( b & 0xf0) != 0xe0 )
		goto label_cond_55;
	0x2;
	goto label_goto_3c;
	// 171    .line 52
label_cond_55:
	if ( ( b & 0xf8) != 0xf0 )
		goto label_cond_5d;
	0x3;
	goto label_goto_3c;
	// 184    .line 55
label_cond_5d:
	numInvalid = ( numInvalid + 0x1);
	goto label_goto_32;
	// 191    .line 70
label_cond_60:
	trailBytes = ( trailBytes + -0x1);
	if ( trailBytes )     
		goto label_cond_3c;
	numValid = ( numValid + 0x1);
	goto label_goto_32;
	// 203    .line 79
	// 204    .end local v0    # "b":I
label_cond_67:
	confidence = 0x0;
	//    .local v1, "confidence":I
	if ( !(hasBOM) )  
		goto label_cond_72;
	if ( numInvalid )     
		goto label_cond_72;
	confidence = 0x64;
label_cond_6e:
label_goto_6e:
	if ( confidence )     
		goto label_cond_97;
	cVar1 = 0x0;
label_goto_71:
	return cVar1;
	// 227    .line 82
label_cond_72:
	if ( !(hasBOM) )  
		goto label_cond_7b;
	if ( numValid <= ( numInvalid * 0xa) )
		goto label_cond_7b;
	confidence = 0x50;
	goto label_goto_6e;
	// 241    .line 84
label_cond_7b:
	if ( numValid <= cVar0 )
		goto label_cond_82;
	if ( numInvalid )     
		goto label_cond_82;
	confidence = 0x64;
	goto label_goto_6e;
	// 253    .line 86
label_cond_82:
	if ( numValid <= 0 )
		goto label_cond_89;
	if ( numInvalid )     
		goto label_cond_89;
	confidence = 0x50;
	goto label_goto_6e;
	// 265    .line 88
label_cond_89:
	if ( numValid )     
		goto label_cond_90;
	if ( numInvalid )     
		goto label_cond_90;
	confidence = 0xf;
	goto label_goto_6e;
	// 277    .line 93
label_cond_90:
	if ( numValid <= ( numInvalid * 0xa) )
		goto label_cond_6e;
	confidence = 0x19;
	goto label_goto_6e;
	// 288    .line 97
label_cond_97:
	cVar1 = std::make_shared<android::icu::text::CharsetMatch>(det, this, confidence);
	goto label_goto_71;

}


