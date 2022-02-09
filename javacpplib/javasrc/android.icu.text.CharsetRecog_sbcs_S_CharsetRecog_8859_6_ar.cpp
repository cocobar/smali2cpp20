// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_8859_6_ar.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_6_ar.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_6_ar::ngrams;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_6_ar::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x40);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_6_ar::ngrams = cVar0;
	return;
	// 038    .line 661
	// 039    :array_a
	// 040    .array-data 4
	// 041        0x20c7e4
	// 042        0x20c7e6
	// 043        0x20c8c7
	// 044        0x20d9e4
	// 045        0x20e1ea
	// 046        0x20e4e4
	// 047        0x20e5e6
	// 048        0x20e8c7
	// 049        0xc720c7
	// 050        0xc7c120
	// 051        0xc7ca20
	// 052        0xc7d120
	// 053        0xc7e420
	// 054        0xc7e4c3
	// 055        0xc7e4c7
	// 056        0xc7e4c8
	// 057        0xc7e4ca
	// 058        0xc7e4cc
	// 059        0xc7e4cd
	// 060        0xc7e4cf
	// 061        0xc7e4d3
	// 062        0xc7e4d9
	// 063        0xc7e4e2
	// 064        0xc7e4e5
	// 065        0xc7e4e8
	// 066        0xc7e4ea
	// 067        0xc7e520
	// 068        0xc7e620
	// 069        0xc7e6ca
	// 070        0xc820c7
	// 071        0xc920c7
	// 072        0xc920e1
	// 073        0xc920e4
	// 074        0xc920e5
	// 075        0xc920e8
	// 076        0xca20c7
	// 077        0xcf20c7
	// 078        0xcfc920
	// 079        0xd120c7
	// 080        0xd1c920
	// 081        0xd320c7
	// 082        0xd920c7
	// 083        0xd9e4e9
	// 084        0xe1ea20
	// 085        0xe420c7
	// 086        0xe4c920
	// 087        0xe4e920
	// 088        0xe4ea20
	// 089        0xe520c7
	// 090        0xe5c720
	// 091        0xe5c920
	// 092        0xe5e620
	// 093        0xe620c7
	// 094        0xe720c7
	// 095        0xe7c720
	// 096        0xe8c7e4
	// 097        0xe8e620
	// 098        0xe920c7
	// 099        0xea20c7
	// 100        0xea20e5
	// 101        0xea20e8
	// 102        0xeac920
	// 103        0xead120
	// 104        0xeae620
	// 105    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_6_ar::CharsetRecog_sbcs_S_CharsetRecog_8859_6_ar()
{
	
	// 113    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs$CharsetRecog_8859_6;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_6_ar::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ar"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_6_ar::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_6_ar::ngrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_6_ar::byteMap);
	//    .local v0, "confidence":I
	if ( confidence )     
		goto label_cond_c;
	cVar0 = 0x0;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = std::make_shared<android::icu::text::CharsetMatch>(det, this, confidence);
	goto label_goto_b;

}


