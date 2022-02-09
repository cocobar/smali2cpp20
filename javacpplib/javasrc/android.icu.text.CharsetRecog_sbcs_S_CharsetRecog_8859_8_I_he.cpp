// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_8859_8_I_he.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he::ngrams;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x40);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he::ngrams = cVar0;
	return;
	// 038    .line 796
	// 039    :array_a
	// 040    .array-data 4
	// 041        0x20e0e5
	// 042        0x20e0e7
	// 043        0x20e0e9
	// 044        0x20e0fa
	// 045        0x20e1e9
	// 046        0x20e1ee
	// 047        0x20e4e0
	// 048        0x20e4e5
	// 049        0x20e4e9
	// 050        0x20e4ee
	// 051        0x20e4f2
	// 052        0x20e4f9
	// 053        0x20e4fa
	// 054        0x20ece0
	// 055        0x20ece4
	// 056        0x20eee0
	// 057        0x20f2ec
	// 058        0x20f9ec
	// 059        0xe0fa20
	// 060        0xe420e0
	// 061        0xe420e1
	// 062        0xe420e4
	// 063        0xe420ec
	// 064        0xe420ee
	// 065        0xe420f9
	// 066        0xe4e5e0
	// 067        0xe5e020
	// 068        0xe5ed20
	// 069        0xe5ef20
	// 070        0xe5f820
	// 071        0xe5fa20
	// 072        0xe920e4
	// 073        0xe9e420
	// 074        0xe9e5fa
	// 075        0xe9e9ed
	// 076        0xe9ed20
	// 077        0xe9ef20
	// 078        0xe9f820
	// 079        0xe9fa20
	// 080        0xec20e0
	// 081        0xec20e4
	// 082        0xece020
	// 083        0xece420
	// 084        0xed20e0
	// 085        0xed20e1
	// 086        0xed20e4
	// 087        0xed20ec
	// 088        0xed20ee
	// 089        0xed20f9
	// 090        0xeee420
	// 091        0xef20e4
	// 092        0xf0e420
	// 093        0xf0e920
	// 094        0xf0e9ed
	// 095        0xf2ec20
	// 096        0xf820e4
	// 097        0xf8e9ed
	// 098        0xf9ec20
	// 099        0xfa20e0
	// 100        0xfa20e1
	// 101        0xfa20e4
	// 102        0xfa20ec
	// 103        0xfa20ee
	// 104        0xfa20f9
	// 105    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he::CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he()
{
	
	// 113    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs$CharsetRecog_8859_8;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("he"));

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO-8859-8-I"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	if ( !(det->fC1Bytes) )  
		goto label_cond_13;
	//    .local v4, "name":Ljava/lang/String;
label_goto_7:
	confidence = this->match(det, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he::ngrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he::byteMap);
	//    .local v3, "confidence":I
	if ( confidence )     
		goto label_cond_17;
	cVar0 = 0x0;
label_goto_12:
	return cVar0;
	// 172    .line 818
	// 173    .end local v3    # "confidence":I
	// 174    .end local v4    # "name":Ljava/lang/String;
label_cond_13:
	//    .restart local v4    # "name":Ljava/lang/String;
	goto label_goto_7;
	// 181    .line 820
	// 182    .restart local v3    # "confidence":I
label_cond_17:
	cVar0 = std::make_shared<android::icu::text::CharsetMatch>(det, this, confidence, name, std::make_shared<java::lang::String>(std::make_shared<char[]>("he")));
	goto label_goto_12;

}


