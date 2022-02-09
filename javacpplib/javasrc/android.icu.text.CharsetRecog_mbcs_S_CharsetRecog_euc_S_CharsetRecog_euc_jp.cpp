// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_mbcs$CharsetRecog_euc$CharsetRecog_euc_jp.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp::commonChars;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x64);
	?;
	android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp::commonChars = cVar0;
	return;
	// 039    .line 395
	// 040    :array_a
	// 041    .array-data 4
	// 042        0xa1a1
	// 043        0xa1a2
	// 044        0xa1a3
	// 045        0xa1a6
	// 046        0xa1bc
	// 047        0xa1ca
	// 048        0xa1cb
	// 049        0xa1d6
	// 050        0xa1d7
	// 051        0xa4a2
	// 052        0xa4a4
	// 053        0xa4a6
	// 054        0xa4a8
	// 055        0xa4aa
	// 056        0xa4ab
	// 057        0xa4ac
	// 058        0xa4ad
	// 059        0xa4af
	// 060        0xa4b1
	// 061        0xa4b3
	// 062        0xa4b5
	// 063        0xa4b7
	// 064        0xa4b9
	// 065        0xa4bb
	// 066        0xa4bd
	// 067        0xa4bf
	// 068        0xa4c0
	// 069        0xa4c1
	// 070        0xa4c3
	// 071        0xa4c4
	// 072        0xa4c6
	// 073        0xa4c7
	// 074        0xa4c8
	// 075        0xa4c9
	// 076        0xa4ca
	// 077        0xa4cb
	// 078        0xa4ce
	// 079        0xa4cf
	// 080        0xa4d0
	// 081        0xa4de
	// 082        0xa4df
	// 083        0xa4e1
	// 084        0xa4e2
	// 085        0xa4e4
	// 086        0xa4e8
	// 087        0xa4e9
	// 088        0xa4ea
	// 089        0xa4eb
	// 090        0xa4ec
	// 091        0xa4ef
	// 092        0xa4f2
	// 093        0xa4f3
	// 094        0xa5a2
	// 095        0xa5a3
	// 096        0xa5a4
	// 097        0xa5a6
	// 098        0xa5a7
	// 099        0xa5aa
	// 100        0xa5ad
	// 101        0xa5af
	// 102        0xa5b0
	// 103        0xa5b3
	// 104        0xa5b5
	// 105        0xa5b7
	// 106        0xa5b8
	// 107        0xa5b9
	// 108        0xa5bf
	// 109        0xa5c3
	// 110        0xa5c6
	// 111        0xa5c7
	// 112        0xa5c8
	// 113        0xa5c9
	// 114        0xa5cb
	// 115        0xa5d0
	// 116        0xa5d5
	// 117        0xa5d6
	// 118        0xa5d7
	// 119        0xa5de
	// 120        0xa5e0
	// 121        0xa5e1
	// 122        0xa5e5
	// 123        0xa5e9
	// 124        0xa5ea
	// 125        0xa5eb
	// 126        0xa5ec
	// 127        0xa5ed
	// 128        0xa5f3
	// 129        0xb8a9
	// 130        0xb9d4
	// 131        0xbaee
	// 132        0xbbc8
	// 133        0xbef0
	// 134        0xbfb7
	// 135        0xc4ea
	// 136        0xc6fc
	// 137        0xc7bd
	// 138        0xcab8
	// 139        0xcaf3
	// 140        0xcbdc
	// 141        0xcdd1
	// 142    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp()
{
	
	// 150    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_mbcs$CharsetRecog_euc;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ja"));

}
// .method getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("EUC-JP"));

}
// .method match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det, android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp::commonChars);
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


