// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_mbcs.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetRecog_mbcs_S_iteratedChar.h"
#include "android.icu.text.CharsetRecog_mbcs.h"
#include "java.lang.Math.h"
#include "java.util.Arrays.h"

// .method constructor <init>()V
android::icu::text::CharsetRecog_mbcs::CharsetRecog_mbcs()
{
	
	// 024    invoke-direct {p0}, Landroid/icu/text/CharsetRecognizer;-><init>()V
	return;

}
// .method match(Landroid/icu/text/CharsetDetector;[I)I
int android::icu::text::CharsetRecog_mbcs::match(std::shared_ptr<android::icu::text::CharsetDetector> det,std::shared_ptr<int[]> commonChars)
{
	
	int singleByteCharCount;
	int doubleByteCharCount;
	int commonCharCount;
	int badCharCount;
	int totalCharCount;
	int confidence;
	std::shared_ptr<android::icu::text::CharsetRecog_mbcs_S_iteratedChar> iter;
	long long cv;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	//    .param p2, "commonChars"    # [I
	singleByteCharCount = 0x0;
	//    .local v9, "singleByteCharCount":I
	doubleByteCharCount = 0x0;
	//    .local v5, "doubleByteCharCount":I
	commonCharCount = 0x0;
	//    .local v3, "commonCharCount":I
	badCharCount = 0x0;
	//    .local v2, "badCharCount":I
	totalCharCount = 0x0;
	//    .local v14, "totalCharCount":I
	confidence = 0x0;
	//    .local v4, "confidence":I
	iter = std::make_shared<android::icu::text::CharsetRecog_mbcs_S_iteratedChar>();
	//    .local v8, "iter":Landroid/icu/text/CharsetRecog_mbcs$iteratedChar;
	iter->reset();
label_cond_e:
	if ( !(this->nextChar(iter, det)) )  
		goto label_cond_4d;
	totalCharCount = ( totalCharCount + 0x1);
	if ( !(iter->error) )  
		goto label_cond_28;
	badCharCount = ( badCharCount + 0x1);
label_cond_20:
label_goto_20:
	if ( badCharCount <  0x2 )
		goto label_cond_e;
	if ( ( badCharCount * 0x5) <  doubleByteCharCount )
		goto label_cond_e;
label_cond_27:
label_goto_27:
	return confidence;
	// 111    .line 65
label_cond_28:
	cv = ((long long)(iter->charValue) & 0xffffffffL);
	//    .local v6, "cv":J
	if ( (cv > 0xff) > 0 ) 
		goto label_cond_3d;
	singleByteCharCount = ( singleByteCharCount + 0x1);
	goto label_goto_20;
	// 136    .line 70
label_cond_3d:
	doubleByteCharCount = ( doubleByteCharCount + 0x1);
	if ( !(commonChars) )  
		goto label_cond_20;
	if ( java::util::Arrays::binarySearch(commonChars, (int)(cv)) < 0 ) 
		goto label_cond_20;
	commonCharCount = ( commonCharCount + 0x1);
	goto label_goto_20;
	// 159    .line 85
	// 160    .end local v6    # "cv":J
label_cond_4d:
	if ( doubleByteCharCount >  0xa )
		goto label_cond_5e;
	if ( badCharCount )     
		goto label_cond_5e;
	if ( doubleByteCharCount )     
		goto label_cond_5b;
	if ( totalCharCount >= 0xa )
		goto label_cond_5b;
	confidence = 0x0;
	goto label_goto_27;
	// 181    .line 96
label_cond_5b:
	confidence = 0xa;
	goto label_goto_27;
	// 187    .line 106
label_cond_5e:
	if ( doubleByteCharCount >= ( badCharCount * 0x14) )
		goto label_cond_64;
	confidence = 0x0;
	goto label_goto_27;
	// 199    .line 111
label_cond_64:
	if ( commonChars )     
		goto label_cond_73;
	confidence = (( doubleByteCharCount + 0x1e) - ( badCharCount * 0x14));
	if ( confidence <= 0x64 )
		goto label_cond_27;
	confidence = 0x64;
	goto label_goto_27;
	// 220    .line 123
label_cond_73:
	//    .local v10, "maxVal":D
	//    .local v12, "scaleFactor":D
	confidence = (int)(((java::lang::Math::log((double)(( commonCharCount + 0x1))) *  (0x4056800000000000L /  java::lang::Math::log((double)(((float)(doubleByteCharCount) /  0x40800000))))) +  0x4024000000000000L));
	confidence = java::lang::Math::min(confidence, 0x64);
	goto label_goto_27;

}


