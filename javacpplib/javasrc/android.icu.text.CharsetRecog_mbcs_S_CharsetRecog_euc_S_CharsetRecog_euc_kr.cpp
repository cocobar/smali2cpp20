// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_mbcs$CharsetRecog_euc$CharsetRecog_euc_kr.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_kr.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_kr::commonChars;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_kr::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x64);
	?;
	android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_kr::commonChars = cVar0;
	return;
	// 039    .line 432
	// 040    :array_a
	// 041    .array-data 4
	// 042        0xb0a1
	// 043        0xb0b3
	// 044        0xb0c5
	// 045        0xb0cd
	// 046        0xb0d4
	// 047        0xb0e6
	// 048        0xb0ed
	// 049        0xb0f8
	// 050        0xb0fa
	// 051        0xb0fc
	// 052        0xb1b8
	// 053        0xb1b9
	// 054        0xb1c7
	// 055        0xb1d7
	// 056        0xb1e2
	// 057        0xb3aa
	// 058        0xb3bb
	// 059        0xb4c2
	// 060        0xb4cf
	// 061        0xb4d9
	// 062        0xb4eb
	// 063        0xb5a5
	// 064        0xb5b5
	// 065        0xb5bf
	// 066        0xb5c7
	// 067        0xb5e9
	// 068        0xb6f3
	// 069        0xb7af
	// 070        0xb7c2
	// 071        0xb7ce
	// 072        0xb8a6
	// 073        0xb8ae
	// 074        0xb8b6
	// 075        0xb8b8
	// 076        0xb8bb
	// 077        0xb8e9
	// 078        0xb9ab
	// 079        0xb9ae
	// 080        0xb9cc
	// 081        0xb9ce
	// 082        0xb9fd
	// 083        0xbab8
	// 084        0xbace
	// 085        0xbad0
	// 086        0xbaf1
	// 087        0xbbe7
	// 088        0xbbf3
	// 089        0xbbfd
	// 090        0xbcad
	// 091        0xbcba
	// 092        0xbcd2
	// 093        0xbcf6
	// 094        0xbdba
	// 095        0xbdc0
	// 096        0xbdc3
	// 097        0xbdc5
	// 098        0xbec6
	// 099        0xbec8
	// 100        0xbedf
	// 101        0xbeee
	// 102        0xbef8
	// 103        0xbefa
	// 104        0xbfa1
	// 105        0xbfa9
	// 106        0xbfc0
	// 107        0xbfe4
	// 108        0xbfeb
	// 109        0xbfec
	// 110        0xbff8
	// 111        0xc0a7
	// 112        0xc0af
	// 113        0xc0b8
	// 114        0xc0ba
	// 115        0xc0bb
	// 116        0xc0bd
	// 117        0xc0c7
	// 118        0xc0cc
	// 119        0xc0ce
	// 120        0xc0cf
	// 121        0xc0d6
	// 122        0xc0da
	// 123        0xc0e5
	// 124        0xc0fb
	// 125        0xc0fc
	// 126        0xc1a4
	// 127        0xc1a6
	// 128        0xc1b6
	// 129        0xc1d6
	// 130        0xc1df
	// 131        0xc1f6
	// 132        0xc1f8
	// 133        0xc4a1
	// 134        0xc5cd
	// 135        0xc6ae
	// 136        0xc7cf
	// 137        0xc7d1
	// 138        0xc7d2
	// 139        0xc7d8
	// 140        0xc7e5
	// 141        0xc8ad
	// 142    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_kr::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_kr()
{
	
	// 150    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_mbcs$CharsetRecog_euc;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_kr::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ko"));

}
// .method getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_kr::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("EUC-KR"));

}
// .method match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_kr::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det, android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_kr::commonChars);
	//    .local v0, "confidence":I
	if ( confidence )     
		goto label_cond_a;
	cVar0 = 0x0;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = std::make_shared<android::icu::text::CharsetMatch>(det, this, confidence);
	goto label_goto_9;

}


