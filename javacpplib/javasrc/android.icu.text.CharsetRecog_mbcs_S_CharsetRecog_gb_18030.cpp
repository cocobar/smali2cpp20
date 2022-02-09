// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_mbcs$CharsetRecog_gb_18030.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_mbcs_S_CharsetRecog_gb_18030.h"
#include "android.icu.text.CharsetRecog_mbcs_S_iteratedChar.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_gb_18030::commonChars;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_gb_18030::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x64);
	?;
	android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_gb_18030::commonChars = cVar0;
	return;
	// 039    .line 532
	// 040    :array_a
	// 041    .array-data 4
	// 042        0xa1a1
	// 043        0xa1a2
	// 044        0xa1a3
	// 045        0xa1a4
	// 046        0xa1b0
	// 047        0xa1b1
	// 048        0xa1f1
	// 049        0xa1f3
	// 050        0xa3a1
	// 051        0xa3ac
	// 052        0xa3ba
	// 053        0xb1a8
	// 054        0xb1b8
	// 055        0xb1be
	// 056        0xb2bb
	// 057        0xb3c9
	// 058        0xb3f6
	// 059        0xb4f3
	// 060        0xb5bd
	// 061        0xb5c4
	// 062        0xb5e3
	// 063        0xb6af
	// 064        0xb6d4
	// 065        0xb6e0
	// 066        0xb7a2
	// 067        0xb7a8
	// 068        0xb7bd
	// 069        0xb7d6
	// 070        0xb7dd
	// 071        0xb8b4
	// 072        0xb8df
	// 073        0xb8f6
	// 074        0xb9ab
	// 075        0xb9c9
	// 076        0xb9d8
	// 077        0xb9fa
	// 078        0xb9fd
	// 079        0xbacd
	// 080        0xbba7
	// 081        0xbbd6
	// 082        0xbbe1
	// 083        0xbbfa
	// 084        0xbcbc
	// 085        0xbcdb
	// 086        0xbcfe
	// 087        0xbdcc
	// 088        0xbecd
	// 089        0xbedd
	// 090        0xbfb4
	// 091        0xbfc6
	// 092        0xbfc9
	// 093        0xc0b4
	// 094        0xc0ed
	// 095        0xc1cb
	// 096        0xc2db
	// 097        0xc3c7
	// 098        0xc4dc
	// 099        0xc4ea
	// 100        0xc5cc
	// 101        0xc6f7
	// 102        0xc7f8
	// 103        0xc8ab
	// 104        0xc8cb
	// 105        0xc8d5
	// 106        0xc8e7
	// 107        0xc9cf
	// 108        0xc9fa
	// 109        0xcab1
	// 110        0xcab5
	// 111        0xcac7
	// 112        0xcad0
	// 113        0xcad6
	// 114        0xcaf5
	// 115        0xcafd
	// 116        0xccec
	// 117        0xcdf8
	// 118        0xceaa
	// 119        0xcec4
	// 120        0xced2
	// 121        0xcee5
	// 122        0xcfb5
	// 123        0xcfc2
	// 124        0xcfd6
	// 125        0xd0c2
	// 126        0xd0c5
	// 127        0xd0d0
	// 128        0xd0d4
	// 129        0xd1a7
	// 130        0xd2aa
	// 131        0xd2b2
	// 132        0xd2b5
	// 133        0xd2bb
	// 134        0xd2d4
	// 135        0xd3c3
	// 136        0xd3d0
	// 137        0xd3fd
	// 138        0xd4c2
	// 139        0xd4da
	// 140        0xd5e2
	// 141        0xd6d0
	// 142    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_gb_18030::CharsetRecog_mbcs_S_CharsetRecog_gb_18030()
{
	
	// 150    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_mbcs;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_gb_18030::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("zh"));

}
// .method getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_gb_18030::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("GB18030"));

}
// .method match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_gb_18030::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det, android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_gb_18030::commonChars);
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
bool android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_gb_18030::nextChar(std::shared_ptr<android::icu::text::CharsetRecog_mbcs_S_iteratedChar> it,std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	bool cVar3;
	bool cVar4;
	int firstByte;
	int secondByte;
	int thirdByte;
	int fourthByte;
	
	//    .param p1, "it"    # Landroid/icu/text/CharsetRecog_mbcs$iteratedChar;
	//    .param p2, "det"    # Landroid/icu/text/CharsetDetector;
	cVar0 = 0x39;
	cVar1 = 0x30;
	cVar2 = 0xfe;
	cVar3 = 0x1;
	cVar4 = 0x0;
	it->error = cVar4;
	0x0;
	//    .local v0, "firstByte":I
	0x0;
	//    .local v2, "secondByte":I
	0x0;
	//    .local v3, "thirdByte":I
	0x0;
	//    .local v1, "fourthByte":I
	firstByte = it->nextByte(det);
	//    .end local v0    # "firstByte":I
	it->charValue = firstByte;
	//    .restart local v0    # "firstByte":I
	if ( firstByte >= 0 )
		goto label_cond_1d;
	it->done = cVar3;
label_cond_18:
label_goto_18:
	if ( it->done )     
		goto label_cond_64;
label_goto_1c:
	return cVar3;
	// 266    .line 492
label_cond_1d:
	if ( firstByte <= 0x80 )
		goto label_cond_18;
	secondByte = it->nextByte(det);
	it->charValue = (( it->charValue << 0x8) |  secondByte);
	if ( firstByte <  0x81 )
		goto label_cond_18;
	if ( firstByte >  cVar2 )
		goto label_cond_18;
	if ( secondByte <  0x40 )
		goto label_cond_3a;
	if ( secondByte <= 0x7e )
		goto label_cond_18;
label_cond_3a:
	if ( secondByte <  0x50 )
		goto label_cond_40;
	if ( secondByte <= cVar2 )
		goto label_cond_18;
label_cond_40:
	if ( secondByte <  cVar1 )
		goto label_cond_61;
	if ( secondByte >  cVar0 )
		goto label_cond_61;
	thirdByte = it->nextByte(det);
	if ( thirdByte <  0x81 )
		goto label_cond_61;
	if ( thirdByte >  cVar2 )
		goto label_cond_61;
	fourthByte = it->nextByte(det);
	if ( fourthByte <  cVar1 )
		goto label_cond_61;
	if ( fourthByte >  cVar0 )
		goto label_cond_61;
	it->charValue = ((( it->charValue << 0x10) |  ( thirdByte << 0x8)) |  fourthByte);
	goto label_goto_18;
	// 352    .line 520
label_cond_61:
	it->error = cVar3;
	goto label_goto_18;
label_cond_64:
	cVar3 = cVar4;
	goto label_goto_1c;

}


