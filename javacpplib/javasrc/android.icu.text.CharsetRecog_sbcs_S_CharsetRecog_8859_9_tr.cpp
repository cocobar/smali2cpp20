// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_8859_9_tr.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_9_tr.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_9_tr::ngrams;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_9_tr::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x40);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_9_tr::ngrams = cVar0;
	return;
	// 038    .line 895
	// 039    :array_a
	// 040    .array-data 4
	// 041        0x206261
	// 042        0x206269
	// 043        0x206275
	// 044        0x206461
	// 045        0x206465
	// 046        0x206765
	// 047        0x206861
	// 048        0x20696c
	// 049        0x206b61
	// 050        0x206b6f
	// 051        0x206d61
	// 052        0x206f6c
	// 053        0x207361
	// 054        0x207461
	// 055        0x207665
	// 056        0x207961
	// 057        0x612062
	// 058        0x616b20
	// 059        0x616c61
	// 060        0x616d61
	// 061        0x616e20
	// 062        0x616efd
	// 063        0x617220
	// 064        0x617261
	// 065        0x6172fd
	// 066        0x6173fd
	// 067        0x617961
	// 068        0x626972
	// 069        0x646120
	// 070        0x646520
	// 071        0x646920
	// 072        0x652062
	// 073        0x65206b
	// 074        0x656469
	// 075        0x656e20
	// 076        0x657220
	// 077        0x657269
	// 078        0x657369
	// 079        0x696c65
	// 080        0x696e20
	// 081        0x696e69
	// 082        0x697220
	// 083        0x6c616e
	// 084        0x6c6172
	// 085        0x6c6520
	// 086        0x6c6572
	// 087        0x6e2061
	// 088        0x6e2062
	// 089        0x6e206b
	// 090        0x6e6461
	// 091        0x6e6465
	// 092        0x6e6520
	// 093        0x6e6920
	// 094        0x6e696e
	// 095        0x6efd20
	// 096        0x72696e
	// 097        0x72fd6e
	// 098        0x766520
	// 099        0x796120
	// 100        0x796f72
	// 101        0xfd6e20
	// 102        0xfd6e64
	// 103        0xfd6efd
	// 104        0xfdf0fd
	// 105    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_9_tr::CharsetRecog_sbcs_S_CharsetRecog_8859_9_tr()
{
	
	// 113    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs$CharsetRecog_8859_9;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_9_tr::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("tr"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_9_tr::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	if ( !(det->fC1Bytes) )  
		goto label_cond_13;
	//    .local v4, "name":Ljava/lang/String;
label_goto_7:
	confidence = this->match(det, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_9_tr::ngrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_9_tr::byteMap);
	//    .local v3, "confidence":I
	if ( confidence )     
		goto label_cond_17;
	cVar0 = 0x0;
label_goto_12:
	return cVar0;
	// 162    .line 911
	// 163    .end local v3    # "confidence":I
	// 164    .end local v4    # "name":Ljava/lang/String;
label_cond_13:
	//    .restart local v4    # "name":Ljava/lang/String;
	goto label_goto_7;
	// 171    .line 913
	// 172    .restart local v3    # "confidence":I
label_cond_17:
	cVar0 = std::make_shared<android::icu::text::CharsetMatch>(det, this, confidence, name, std::make_shared<java::lang::String>(std::make_shared<char[]>("tr")));
	goto label_goto_12;

}


