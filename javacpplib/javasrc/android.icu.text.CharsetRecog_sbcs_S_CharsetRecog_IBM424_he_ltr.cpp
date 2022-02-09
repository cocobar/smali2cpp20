// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_IBM424_he_ltr.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_ltr.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_ltr::ngrams;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_ltr::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x40);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_ltr::ngrams = cVar0;
	return;
	// 038    .line 1164
	// 039    :array_a
	// 040    .array-data 4
	// 041        0x404146
	// 042        0x404154
	// 043        0x404551
	// 044        0x404554
	// 045        0x404556
	// 046        0x404558
	// 047        0x405158
	// 048        0x405462
	// 049        0x405469
	// 050        0x405546
	// 051        0x405551
	// 052        0x405746
	// 053        0x405751
	// 054        0x406846
	// 055        0x406851
	// 056        0x407141
	// 057        0x407146
	// 058        0x407151
	// 059        0x414045
	// 060        0x414054
	// 061        0x414055
	// 062        0x414071
	// 063        0x414540
	// 064        0x414645
	// 065        0x415440    # 5.99953E-39f
	// 066        0x415640    # 6.000248E-39f
	// 067        0x424045
	// 068        0x424055
	// 069        0x424071
	// 070        0x454045
	// 071        0x454051
	// 072        0x454054
	// 073        0x454055
	// 074        0x454057
	// 075        0x454068
	// 076        0x454071
	// 077        0x455440
	// 078        0x464140
	// 079        0x464540
	// 080        0x484140
	// 081        0x514140
	// 082        0x514240
	// 083        0x514540
	// 084        0x544045
	// 085        0x544055
	// 086        0x544071
	// 087        0x546240
	// 088        0x546940
	// 089        0x555151
	// 090        0x555158
	// 091        0x555168
	// 092        0x564045
	// 093        0x564055
	// 094        0x564071
	// 095        0x564240
	// 096        0x564540
	// 097        0x624540
	// 098        0x694045
	// 099        0x694055
	// 100        0x694071
	// 101        0x694540
	// 102        0x714140
	// 103        0x714540
	// 104        0x714651
	// 105    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_ltr::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_ltr()
{
	
	// 113    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs$CharsetRecog_IBM424_he;-><init>()V
	return;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_ltr::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("IBM424_ltr"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_ltr::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_ltr::ngrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_ltr::byteMap, 0x40);
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


