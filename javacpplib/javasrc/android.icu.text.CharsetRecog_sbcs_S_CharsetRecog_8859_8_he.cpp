// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_8859_8_he.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_8_he.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_he::ngrams;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_he::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x40);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_he::ngrams = cVar0;
	return;
	// 038    .line 826
	// 039    :array_a
	// 040    .array-data 4
	// 041        0x20e0e5
	// 042        0x20e0ec
	// 043        0x20e4e9
	// 044        0x20e4ec
	// 045        0x20e4ee
	// 046        0x20e4f0
	// 047        0x20e9f0
	// 048        0x20ecf2
	// 049        0x20ecf9
	// 050        0x20ede5
	// 051        0x20ede9
	// 052        0x20efe5
	// 053        0x20efe9
	// 054        0x20f8e5
	// 055        0x20f8e9
	// 056        0x20fae0
	// 057        0x20fae5
	// 058        0x20fae9
	// 059        0xe020e4
	// 060        0xe020ec
	// 061        0xe020ed
	// 062        0xe020fa
	// 063        0xe0e420
	// 064        0xe0e5e4
	// 065        0xe0ec20
	// 066        0xe0ee20
	// 067        0xe120e4
	// 068        0xe120ed
	// 069        0xe120fa
	// 070        0xe420e4
	// 071        0xe420e9
	// 072        0xe420ec
	// 073        0xe420ed
	// 074        0xe420ef
	// 075        0xe420f8
	// 076        0xe420fa
	// 077        0xe4ec20
	// 078        0xe5e020
	// 079        0xe5e420
	// 080        0xe7e020
	// 081        0xe9e020
	// 082        0xe9e120
	// 083        0xe9e420
	// 084        0xec20e4
	// 085        0xec20ed
	// 086        0xec20fa
	// 087        0xecf220
	// 088        0xecf920
	// 089        0xede9e9
	// 090        0xede9f0
	// 091        0xede9f8
	// 092        0xee20e4
	// 093        0xee20ed
	// 094        0xee20fa
	// 095        0xeee120
	// 096        0xeee420
	// 097        0xf2e420
	// 098        0xf920e4
	// 099        0xf920ed
	// 100        0xf920fa
	// 101        0xf9e420
	// 102        0xfae020
	// 103        0xfae420
	// 104        0xfae5e9
	// 105    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_he::CharsetRecog_sbcs_S_CharsetRecog_8859_8_he()
{
	
	// 113    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs$CharsetRecog_8859_8;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_he::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("he"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_he::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	if ( !(det->fC1Bytes) )  
		goto label_cond_13;
	//    .local v4, "name":Ljava/lang/String;
label_goto_7:
	confidence = this->match(det, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_he::ngrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_he::byteMap);
	//    .local v3, "confidence":I
	if ( confidence )     
		goto label_cond_17;
	cVar0 = 0x0;
label_goto_12:
	return cVar0;
	// 162    .line 842
	// 163    .end local v3    # "confidence":I
	// 164    .end local v4    # "name":Ljava/lang/String;
label_cond_13:
	//    .restart local v4    # "name":Ljava/lang/String;
	goto label_goto_7;
	// 171    .line 844
	// 172    .restart local v3    # "confidence":I
label_cond_17:
	cVar0 = std::make_shared<android::icu::text::CharsetMatch>(det, this, confidence, name, std::make_shared<java::lang::String>(std::make_shared<char[]>("he")));
	goto label_goto_12;

}


