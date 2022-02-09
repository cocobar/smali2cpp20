// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_2022$CharsetRecog_2022CN.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_2022_S_CharsetRecog_2022CN.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::CharsetRecog_2022_S_CharsetRecog_2022CN::CharsetRecog_2022_S_CharsetRecog_2022CN()
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<unsigned char[][]>> cVar2;
	std::shared<std::vector<unsigned char[]>> cVar3;
	std::shared<std::vector<unsigned char[]>> cVar4;
	std::shared<std::vector<unsigned char[]>> cVar5;
	std::shared<std::vector<unsigned char[]>> cVar6;
	std::shared<std::vector<unsigned char[]>> cVar7;
	std::shared<std::vector<unsigned char[]>> cVar8;
	std::shared<std::vector<unsigned char[]>> cVar9;
	std::shared<std::vector<unsigned char[]>> cVar10;
	std::shared<std::vector<unsigned char[]>> cVar11;
	std::shared<std::vector<unsigned char[]>> cVar12;
	std::shared<std::vector<unsigned char[]>> cVar13;
	
	cVar0 = 0x2;
	cVar1 = 0x4;
	// 031    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_2022;-><init>()V
	cVar2 = std::make_shared<std::vector<unsigned char[][]>>(0xb);
	cVar3 = std::make_shared<std::vector<unsigned char[]>>(cVar1);
	?;
	cVar2[0x0] = cVar3;
	cVar4 = std::make_shared<std::vector<unsigned char[]>>(cVar1);
	?;
	cVar2[0x1] = cVar4;
	cVar5 = std::make_shared<std::vector<unsigned char[]>>(cVar1);
	?;
	cVar2[cVar0] = cVar5;
	cVar6 = std::make_shared<std::vector<unsigned char[]>>(cVar1);
	?;
	cVar2[0x3] = cVar6;
	cVar7 = std::make_shared<std::vector<unsigned char[]>>(cVar1);
	?;
	cVar2[cVar1] = cVar7;
	cVar8 = std::make_shared<std::vector<unsigned char[]>>(cVar1);
	?;
	cVar2[0x5] = cVar8;
	cVar9 = std::make_shared<std::vector<unsigned char[]>>(cVar1);
	?;
	cVar2[0x6] = cVar9;
	cVar10 = std::make_shared<std::vector<unsigned char[]>>(cVar1);
	?;
	cVar2[0x7] = cVar10;
	cVar11 = std::make_shared<std::vector<unsigned char[]>>(cVar1);
	?;
	cVar2[0x8] = cVar11;
	cVar12 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar2[0x9] = cVar12;
	cVar13 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar2[0xa] = cVar13;
	this->escapeSequences = cVar2;
	return;
	// 139    .line 148
	// 140    nop
	// 142    :array_66
	// 143    .array-data 1
	// 144        0x1bt
	// 145        0x24t
	// 146        0x29t
	// 147        0x41t
	// 148    .end array-data
	// 150    .line 149
	// 151    :array_6c
	// 152    .array-data 1
	// 153        0x1bt
	// 154        0x24t
	// 155        0x29t
	// 156        0x47t
	// 157    .end array-data
	// 159    .line 150
	// 160    :array_72
	// 161    .array-data 1
	// 162        0x1bt
	// 163        0x24t
	// 164        0x2at
	// 165        0x48t
	// 166    .end array-data
	// 168    .line 151
	// 169    :array_78
	// 170    .array-data 1
	// 171        0x1bt
	// 172        0x24t
	// 173        0x29t
	// 174        0x45t
	// 175    .end array-data
	// 177    .line 152
	// 178    :array_7e
	// 179    .array-data 1
	// 180        0x1bt
	// 181        0x24t
	// 182        0x2bt
	// 183        0x49t
	// 184    .end array-data
	// 186    .line 153
	// 187    :array_84
	// 188    .array-data 1
	// 189        0x1bt
	// 190        0x24t
	// 191        0x2bt
	// 192        0x4at
	// 193    .end array-data
	// 195    .line 154
	// 196    :array_8a
	// 197    .array-data 1
	// 198        0x1bt
	// 199        0x24t
	// 200        0x2bt
	// 201        0x4bt
	// 202    .end array-data
	// 204    .line 155
	// 205    :array_90
	// 206    .array-data 1
	// 207        0x1bt
	// 208        0x24t
	// 209        0x2bt
	// 210        0x4ct
	// 211    .end array-data
	// 213    .line 156
	// 214    :array_96
	// 215    .array-data 1
	// 216        0x1bt
	// 217        0x24t
	// 218        0x2bt
	// 219        0x4dt
	// 220    .end array-data
	// 222    .line 157
	// 223    :array_9c
	// 224    .array-data 1
	// 225        0x1bt
	// 226        0x4et
	// 227    .end array-data
	// 229    .line 158
	// 230    nop
	// 232    :array_a2
	// 233    .array-data 1
	// 234        0x1bt
	// 235        0x4ft
	// 236    .end array-data

}
// .method getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_2022_S_CharsetRecog_2022CN::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO-2022-CN"));

}
// .method match(Landroid/icu/text/CharsetDetector;)Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetRecog_2022_S_CharsetRecog_2022CN::match(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int confidence;
	std::shared_ptr<android::icu::text::CharsetMatch> cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	confidence = this->match(det->fInputBytes, det->fInputLen, this->escapeSequences);
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


