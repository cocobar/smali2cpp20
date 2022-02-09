// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_8859_7_el.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_7_el.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_7_el::ngrams;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_7_el::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x40);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_7_el::ngrams = cVar0;
	return;
	// 038    .line 728
	// 039    :array_a
	// 040    .array-data 4
	// 041        0x20e1ed
	// 042        0x20e1f0
	// 043        0x20e3e9
	// 044        0x20e4e9
	// 045        0x20e5f0
	// 046        0x20e720
	// 047        0x20eae1
	// 048        0x20ece5
	// 049        0x20ede1
	// 050        0x20ef20
	// 051        0x20f0e1
	// 052        0x20f0ef
	// 053        0x20f0f1
	// 054        0x20f3f4
	// 055        0x20f3f5
	// 056        0x20f4e7
	// 057        0x20f4ef
	// 058        0xdfe120
	// 059        0xe120e1
	// 060        0xe120f4
	// 061        0xe1e920
	// 062        0xe1ed20
	// 063        0xe1f0fc
	// 064        0xe1f220
	// 065        0xe3e9e1
	// 066        0xe5e920
	// 067        0xe5f220
	// 068        0xe720f4
	// 069        0xe7ed20
	// 070        0xe7f220
	// 071        0xe920f4
	// 072        0xe9e120
	// 073        0xe9eade
	// 074        0xe9f220
	// 075        0xeae1e9
	// 076        0xeae1f4
	// 077        0xece520
	// 078        0xed20e1
	// 079        0xed20e5
	// 080        0xed20f0
	// 081        0xede120
	// 082        0xeff220
	// 083        0xeff520
	// 084        0xf0eff5
	// 085        0xf0f1ef
	// 086        0xf0fc20
	// 087        0xf220e1
	// 088        0xf220e5
	// 089        0xf220ea
	// 090        0xf220f0
	// 091        0xf220f4
	// 092        0xf3e520
	// 093        0xf3e720
	// 094        0xf3f4ef
	// 095        0xf4e120
	// 096        0xf4e1e9
	// 097        0xf4e7ed
	// 098        0xf4e7f2
	// 099        0xf4e9ea
	// 100        0xf4ef20
	// 101        0xf4eff5
	// 102        0xf4f9ed
	// 103        0xf9ed20
	// 104        0xfeed20
	// 105    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_7_el::CharsetRecog_sbcs_S_CharsetRecog_8859_7_el()
{
	
	// 113    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs$CharsetRecog_8859_7;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_7_el::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("el"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_7_el::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	if ( !(det->fC1Bytes) )  
		goto label_cond_13;
	//    .local v4, "name":Ljava/lang/String;
label_goto_7:
	confidence = this->match(det, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_7_el::ngrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_7_el::byteMap);
	//    .local v3, "confidence":I
	if ( confidence )     
		goto label_cond_17;
	cVar0 = 0x0;
label_goto_12:
	return cVar0;
	// 162    .line 744
	// 163    .end local v3    # "confidence":I
	// 164    .end local v4    # "name":Ljava/lang/String;
label_cond_13:
	//    .restart local v4    # "name":Ljava/lang/String;
	goto label_goto_7;
	// 171    .line 746
	// 172    .restart local v3    # "confidence":I
label_cond_17:
	cVar0 = std::make_shared<android::icu::text::CharsetMatch>(det, this, confidence, name, std::make_shared<java::lang::String>(std::make_shared<char[]>("el")));
	goto label_goto_12;

}


