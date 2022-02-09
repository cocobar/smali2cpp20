// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_8859_5_ru.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_5_ru.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_5_ru::ngrams;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_5_ru::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x40);
	?;
	android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_5_ru::ngrams = cVar0;
	return;
	// 038    .line 594
	// 039    :array_a
	// 040    .array-data 4
	// 041        0x20d220
	// 042        0x20d2de
	// 043        0x20d4de
	// 044        0x20d7d0
	// 045        0x20d820
	// 046        0x20dad0
	// 047        0x20dade
	// 048        0x20ddd0
	// 049        0x20ddd5
	// 050        0x20ded1
	// 051        0x20dfde
	// 052        0x20dfe0
	// 053        0x20e0d0
	// 054        0x20e1de
	// 055        0x20e1e2
	// 056        0x20e2de
	// 057        0x20e7e2
	// 058        0x20ede2
	// 059        0xd0ddd8
	// 060        0xd0e2ec
	// 061        0xd3de20
	// 062        0xd5dbec
	// 063        0xd5ddd8
	// 064        0xd5e1e2
	// 065        0xd5e220
	// 066        0xd820df
	// 067        0xd8d520
	// 068        0xd8d820
	// 069        0xd8ef20
	// 070        0xdbd5dd
	// 071        0xdbd820
	// 072        0xdbecdd
	// 073        0xddd020
	// 074        0xddd520
	// 075        0xddd8d5
	// 076        0xddd8ef
	// 077        0xddde20
	// 078        0xddded2
	// 079        0xde20d2
	// 080        0xde20df
	// 081        0xde20e1
	// 082        0xded220
	// 083        0xded2d0
	// 084        0xded3de
	// 085        0xded920
	// 086        0xdedbec
	// 087        0xdedc20
	// 088        0xdee1e2
	// 089        0xdfdedb
	// 090        0xdfe0d5
	// 091        0xdfe0d8
	// 092        0xdfe0de
	// 093        0xe0d0d2
	// 094        0xe0d5d4
	// 095        0xe1e2d0
	// 096        0xe1e2d2
	// 097        0xe1e2d8
	// 098        0xe1ef20
	// 099        0xe2d5db
	// 100        0xe2de20
	// 101        0xe2dee0
	// 102        0xe2ec20
	// 103        0xe7e2de
	// 104        0xebe520
	// 105    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_5_ru::CharsetRecog_sbcs_S_CharsetRecog_8859_5_ru()
{
	
	// 113    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_sbcs$CharsetRecog_8859_5;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_5_ru::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ru"));

}
// .method public match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_5_ru::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_5_ru::ngrams, android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_5_ru::byteMap);
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


