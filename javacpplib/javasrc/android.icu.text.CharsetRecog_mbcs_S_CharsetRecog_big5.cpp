// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_mbcs$CharsetRecog_big5.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_mbcs_S_CharsetRecog_big5.h"
#include "android.icu.text.CharsetRecog_mbcs_S_iteratedChar.h"
#include "java.lang.String.h"

static android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_big5::commonChars;
// .method static constructor <clinit>()V
void android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_big5::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x60);
	?;
	android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_big5::commonChars = cVar0;
	return;
	// 039    .line 256
	// 040    :array_a
	// 041    .array-data 4
	// 042        0xa140
	// 043        0xa141
	// 044        0xa142
	// 045        0xa143
	// 046        0xa147
	// 047        0xa149
	// 048        0xa175
	// 049        0xa176
	// 050        0xa440
	// 051        0xa446
	// 052        0xa447
	// 053        0xa448
	// 054        0xa451
	// 055        0xa454
	// 056        0xa457
	// 057        0xa464
	// 058        0xa46a
	// 059        0xa46c
	// 060        0xa477
	// 061        0xa4a3
	// 062        0xa4a4
	// 063        0xa4a7
	// 064        0xa4c1
	// 065        0xa4ce
	// 066        0xa4d1
	// 067        0xa4df
	// 068        0xa4e8
	// 069        0xa4fd
	// 070        0xa540
	// 071        0xa548
	// 072        0xa558
	// 073        0xa569
	// 074        0xa5cd
	// 075        0xa5e7
	// 076        0xa657
	// 077        0xa661
	// 078        0xa662
	// 079        0xa668
	// 080        0xa670
	// 081        0xa6a8
	// 082        0xa6b3
	// 083        0xa6b9
	// 084        0xa6d3
	// 085        0xa6db
	// 086        0xa6e6
	// 087        0xa6f2
	// 088        0xa740    # 5.9998E-41f
	// 089        0xa751
	// 090        0xa759
	// 091        0xa7da
	// 092        0xa8a3
	// 093        0xa8a5
	// 094        0xa8ad
	// 095        0xa8d1
	// 096        0xa8d3
	// 097        0xa8e4
	// 098        0xa8fc
	// 099        0xa9c0
	// 100        0xa9d2
	// 101        0xa9f3
	// 102        0xaa6b
	// 103        0xaaba
	// 104        0xaabe
	// 105        0xaacc
	// 106        0xaafc
	// 107        0xac47
	// 108        0xac4f
	// 109        0xacb0
	// 110        0xacd2
	// 111        0xad59
	// 112        0xaec9
	// 113        0xafe0
	// 114        0xb0ea
	// 115        0xb16f
	// 116        0xb2b3
	// 117        0xb2c4
	// 118        0xb36f
	// 119        0xb44c
	// 120        0xb44e
	// 121        0xb54c
	// 122        0xb5a5
	// 123        0xb5bd
	// 124        0xb5d0
	// 125        0xb5d8
	// 126        0xb671
	// 127        0xb7ed
	// 128        0xb867
	// 129        0xb944
	// 130        0xbad8
	// 131        0xbb44
	// 132        0xbba1
	// 133        0xbdd1
	// 134        0xc2c4
	// 135        0xc3b9
	// 136        0xc440
	// 137        0xc45f
	// 138    .end array-data

}
// .method constructor <init>()V
android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_big5::CharsetRecog_mbcs_S_CharsetRecog_big5()
{
	
	// 146    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_mbcs;-><init>()V
	return;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_big5::getLanguage()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("zh"));

}
// .method getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_big5::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Big5"));

}
// .method match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_big5::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det, android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_big5::commonChars);
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
bool android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_big5::nextChar(std::shared_ptr<android::icu::text::CharsetRecog_mbcs_S_iteratedChar> it,std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	bool cVar3;
	int firstByte;
	int secondByte;
	
	//    .param p1, "it"    # Landroid/icu/text/CharsetRecog_mbcs$iteratedChar;
	//    .param p2, "det"    # Landroid/icu/text/CharsetDetector;
	cVar0 = 0xff;
	cVar1 = 0x7f;
	cVar2 = 0x1;
	cVar3 = 0x0;
	it->error = cVar3;
	firstByte = it->nextByte(det);
	it->charValue = firstByte;
	//    .local v0, "firstByte":I
	if ( firstByte >= 0 )
		goto label_cond_11;
	return cVar3;
	// 233    .line 276
label_cond_11:
	if ( firstByte <= cVar1 )
		goto label_cond_15;
	if ( firstByte != cVar0 )
		goto label_cond_16;
label_cond_15:
	return cVar2;
	// 243    .line 281
label_cond_16:
	secondByte = it->nextByte(det);
	//    .local v1, "secondByte":I
	if ( secondByte >= 0 )
		goto label_cond_1d;
	return cVar3;
	// 256    .line 285
label_cond_1d:
	it->charValue = (( it->charValue << 0x8) |  secondByte);
	if ( secondByte <  0x40 )
		goto label_cond_2a;
	if ( secondByte != cVar1 )
		goto label_cond_2d;
label_cond_2a:
label_goto_2a:
	it->error = cVar2;
label_cond_2c:
	return cVar2;
	// 283    .line 289
label_cond_2d:
	if ( secondByte != cVar0 )
		goto label_cond_2c;
	goto label_goto_2a;

}


