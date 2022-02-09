// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_IBM424_he_rtl.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl::ngrams;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x40);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl::ngrams = cVar0;
	return;
	// 038    .line 1144
	// 039    :array_a
	// 040    .array-data 4
	// 041        0x404146
	// 042        0x404148
	// 043        0x404151
	// 044        0x404171
	// 045        0x404251
	// 046        0x404256
	// 047        0x404541
	// 048        0x404546
	// 049        0x404551
	// 050        0x404556
	// 051        0x404562
	// 052        0x404569
	// 053        0x404571
	// 054        0x405441
	// 055        0x405445
	// 056        0x405641
	// 057        0x406254
	// 058        0x406954
	// 059        0x417140
	// 060        0x454041
	// 061        0x454042
	// 062        0x454045
	// 063        0x454054
	// 064        0x454056
	// 065        0x454069
	// 066        0x454641
	// 067        0x464140
	// 068        0x465540
	// 069        0x465740
	// 070        0x466840
	// 071        0x467140
	// 072        0x514045
	// 073        0x514540
	// 074        0x514671
	// 075        0x515155
	// 076        0x515540
	// 077        0x515740
	// 078        0x516840
	// 079        0x517140
	// 080        0x544041
	// 081        0x544045
	// 082        0x544140
	// 083        0x544540
	// 084        0x554041
	// 085        0x554042
	// 086        0x554045
	// 087        0x554054
	// 088        0x554056
	// 089        0x554069
	// 090        0x564540
	// 091        0x574045
	// 092        0x584540
	// 093        0x585140
	// 094        0x585155
	// 095        0x625440
	// 096        0x684045
	// 097        0x685155
	// 098        0x695440
	// 099        0x714041
	// 100        0x714042
	// 101        0x714045
	// 102        0x714054
	// 103        0x714056
	// 104        0x714069
	// 105    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl()
{
	
	// 113    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs$CharsetRecog_IBM424_he;-><init>()V
	return;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("IBM424_rtl"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl::ngrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl::byteMap, 0x40);
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


