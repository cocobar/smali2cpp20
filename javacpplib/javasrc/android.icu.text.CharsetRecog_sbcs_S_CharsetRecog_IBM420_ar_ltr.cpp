// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_IBM420_ar_ltr.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_ltr.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_ltr::ngrams;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_ltr::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x40);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_ltr::ngrams = cVar0;
	return;
	// 038    .line 1234
	// 039    :array_a
	// 040    .array-data 4
	// 041        0x404656
	// 042        0x4056bb
	// 043        0x4056bf
	// 044        0x406273
	// 045        0x406275
	// 046        0x4062b1
	// 047        0x4062bb
	// 048        0x4062dc
	// 049        0x406356
	// 050        0x407556
	// 051        0x4075dc
	// 052        0x40b156
	// 053        0x40bb56
	// 054        0x40bd56
	// 055        0x40bdbb
	// 056        0x40bdcf
	// 057        0x40bddc
	// 058        0x40dab1
	// 059        0x40dcab
	// 060        0x40dcb1
	// 061        0x49b156
	// 062        0x564056
	// 063        0x564058
	// 064        0x564062
	// 065        0x564063
	// 066        0x564073
	// 067        0x564075
	// 068        0x564078
	// 069        0x56409a
	// 070        0x5640b1
	// 071        0x5640bb
	// 072        0x5640bd
	// 073        0x5640bf
	// 074        0x5640da
	// 075        0x5640dc
	// 076        0x565840
	// 077        0x56b156
	// 078        0x56cf40
	// 079        0x58b156
	// 080        0x63b156
	// 081        0x63bd56
	// 082        0x67b156
	// 083        0x69b156
	// 084        0x73b156
	// 085        0x78b156
	// 086        0x9ab156
	// 087        0xab4062
	// 088        0xadb156
	// 089        0xb14062
	// 090        0xb15640
	// 091        0xb156cf
	// 092        0xb19a40
	// 093        0xb1b140
	// 094        0xbb4062
	// 095        0xbb40dc
	// 096        0xbbb156
	// 097        0xbd5640
	// 098        0xbdbb40
	// 099        0xcf4062
	// 100        0xcf40dc
	// 101        0xcfb156
	// 102        0xdab19a
	// 103        0xdcab40
	// 104        0xdcb156
	// 105    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_ltr::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_ltr()
{
	
	// 113    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs$CharsetRecog_IBM420_ar;-><init>()V
	return;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_ltr::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("IBM420_ltr"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_ltr::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->matchIBM420(det, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_ltr::ngrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_ltr::byteMap, 0x40);
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


