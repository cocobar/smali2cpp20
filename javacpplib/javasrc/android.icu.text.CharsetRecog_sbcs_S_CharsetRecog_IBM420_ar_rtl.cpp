// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_IBM420_ar_rtl.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_rtl.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_rtl::ngrams;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_rtl::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x40);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_rtl::ngrams = cVar0;
	return;
	// 038    .line 1212
	// 039    :array_a
	// 040    .array-data 4
	// 041        0x4056b1
	// 042        0x4056bd
	// 043        0x405856
	// 044        0x409ab1
	// 045        0x40abdc
	// 046        0x40b1b1
	// 047        0x40bbbd
	// 048        0x40cf56
	// 049        0x564056
	// 050        0x564640
	// 051        0x566340
	// 052        0x567540
	// 053        0x56b140
	// 054        0x56b149
	// 055        0x56b156
	// 056        0x56b158
	// 057        0x56b163
	// 058        0x56b167
	// 059        0x56b169
	// 060        0x56b173
	// 061        0x56b178
	// 062        0x56b19a
	// 063        0x56b1ad
	// 064        0x56b1bb
	// 065        0x56b1cf
	// 066        0x56b1dc
	// 067        0x56bb40
	// 068        0x56bd40
	// 069        0x56bd63
	// 070        0x584056
	// 071        0x624056
	// 072        0x6240ab
	// 073        0x6240b1
	// 074        0x6240bb
	// 075        0x6240cf
	// 076        0x634056
	// 077        0x734056
	// 078        0x736240
	// 079        0x754056
	// 080        0x756240    # 1.0779999E-38f
	// 081        0x784056
	// 082        0x9a4056
	// 083        0x9ab1da
	// 084        0xabdc40
	// 085        0xb14056
	// 086        0xb16240
	// 087        0xb1da40
	// 088        0xb1dc40
	// 089        0xbb4056
	// 090        0xbb5640
	// 091        0xbb6240
	// 092        0xbbbd40
	// 093        0xbd4056
	// 094        0xbf4056
	// 095        0xbf5640
	// 096        0xcf56b1
	// 097        0xcfbd40
	// 098        0xda4056
	// 099        0xdc4056
	// 100        0xdc40bb
	// 101        0xdc40cf
	// 102        0xdc6240
	// 103        0xdc7540
	// 104        0xdcbd40
	// 105    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_rtl::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_rtl()
{
	
	// 113    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs$CharsetRecog_IBM420_ar;-><init>()V
	return;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_rtl::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("IBM420_rtl"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_rtl::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->matchIBM420(det, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_rtl::ngrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_rtl::byteMap, 0x40);
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


