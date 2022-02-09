// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_mbcs$CharsetRecog_sjis.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_mbcs_S_CharsetRecog_sjis.h"
#include "android.icu.text.CharsetRecog_mbcs_S_iteratedChar.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_sjis::commonChars;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_sjis::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x39);
	?;
	android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_sjis::commonChars = cVar0;
	return;
	// 039    .line 194
	// 040    :array_a
	// 041    .array-data 4
	// 042        0x8140
	// 043        0x8141
	// 044        0x8142
	// 045        0x8145
	// 046        0x815b
	// 047        0x8169
	// 048        0x816a
	// 049        0x8175
	// 050        0x8176
	// 051        0x82a0
	// 052        0x82a2
	// 053        0x82a4
	// 054        0x82a9
	// 055        0x82aa
	// 056        0x82ab
	// 057        0x82ad
	// 058        0x82af
	// 059        0x82b1
	// 060        0x82b3
	// 061        0x82b5
	// 062        0x82b7
	// 063        0x82bd
	// 064        0x82be
	// 065        0x82c1
	// 066        0x82c4
	// 067        0x82c5
	// 068        0x82c6
	// 069        0x82c8
	// 070        0x82c9
	// 071        0x82cc
	// 072        0x82cd
	// 073        0x82dc
	// 074        0x82e0
	// 075        0x82e7
	// 076        0x82e8
	// 077        0x82e9
	// 078        0x82ea
	// 079        0x82f0
	// 080        0x82f1
	// 081        0x8341
	// 082        0x8343
	// 083        0x834e
	// 084        0x834f
	// 085        0x8358
	// 086        0x835e
	// 087        0x8362
	// 088        0x8367
	// 089        0x8375
	// 090        0x8376
	// 091        0x8389
	// 092        0x838a
	// 093        0x838b
	// 094        0x838d
	// 095        0x8393
	// 096        0x8e96
	// 097        0x93fa
	// 098        0x95aa
	// 099    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_sjis::CharsetRecog_mbcs_S_CharsetRecog_sjis()
{
	
	// 107    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_mbcs;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_sjis::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ja"));

}
// .method getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_sjis::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Shift_JIS"));

}
// .method match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_sjis::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det, android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_sjis::commonChars);
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
// .method nextChar(Landroid/icu/text/CharsetRecog_mbcs$iteratedChar;Landroid/icu/text/CharsetDetector;)Z
bool android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_sjis::nextChar(std::shared_ptr<android::icu::text::CharsetRecog_mbcs_S_iteratedChar> it,std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int cVar0;
	bool cVar1;
	bool cVar2;
	int firstByte;
	int secondByte;
	
	//    .param p1, "it"    # Landroid/icu/text/CharsetRecog_mbcs$iteratedChar;
	//    .param p2, "det"    # Landroid/icu/text/CharsetDetector;
	cVar0 = 0x7f;
	cVar1 = 0x1;
	cVar2 = 0x0;
	it->error = cVar2;
	firstByte = it->nextByte(det);
	it->charValue = firstByte;
	//    .local v0, "firstByte":I
	if ( firstByte >= 0 )
		goto label_cond_f;
	return cVar2;
	// 192    .line 210
label_cond_f:
	if ( firstByte <= cVar0 )
		goto label_cond_19;
	if ( firstByte <= 0xa0 )
		goto label_cond_1a;
	if ( firstByte >  0xdf )
		goto label_cond_1a;
label_cond_19:
	return cVar1;
	// 208    .line 214
label_cond_1a:
	secondByte = it->nextByte(det);
	//    .local v1, "secondByte":I
	if ( secondByte >= 0 )
		goto label_cond_21;
	return cVar2;
	// 221    .line 218
label_cond_21:
	it->charValue = (( firstByte << 0x8) |  secondByte);
	if ( secondByte <  0x40 )
		goto label_cond_2c;
	if ( secondByte <= cVar0 )
		goto label_cond_36;
label_cond_2c:
	if ( secondByte <  0x80 )
		goto label_cond_34;
	if ( secondByte <= 0xff )
		goto label_cond_36;
label_cond_34:
	it->error = cVar1;
label_cond_36:
	return cVar1;

}


