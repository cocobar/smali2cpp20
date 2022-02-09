// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetDetector.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector_S_CSRecognizerInfo.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_2022_S_CharsetRecog_2022CN.h"
#include "android.icu.text.CharsetRecog_2022_S_CharsetRecog_2022JP.h"
#include "android.icu.text.CharsetRecog_2022_S_CharsetRecog_2022KR.h"
#include "android.icu.text.CharsetRecog_UTF8.h"
#include "android.icu.text.CharsetRecog_Unicode_S_CharsetRecog_UTF_16_BE.h"
#include "android.icu.text.CharsetRecog_Unicode_S_CharsetRecog_UTF_16_LE.h"
#include "android.icu.text.CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE.h"
#include "android.icu.text.CharsetRecog_Unicode_S_CharsetRecog_UTF_32_LE.h"
#include "android.icu.text.CharsetRecog_mbcs_S_CharsetRecog_big5.h"
#include "android.icu.text.CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp.h"
#include "android.icu.text.CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_kr.h"
#include "android.icu.text.CharsetRecog_mbcs_S_CharsetRecog_gb_18030.h"
#include "android.icu.text.CharsetRecog_mbcs_S_CharsetRecog_sjis.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_1.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_2.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_5_ru.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_6_ar.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_7_el.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_8_he.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_8859_9_tr.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_ltr.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_rtl.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_ltr.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_KOI8_R.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_windows_1251.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_windows_1256.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.Reader.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.Collections.h"
#include "java.util.List.h"

static android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS;
static android::icu::text::CharsetDetector::kBufSize = 0x1f40;
// .method static constructor <clinit>()V
void android::icu::text::CharsetDetector::static_cinit()
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<java::util::ArrayList> list;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar2;
	std::shared_ptr<android::icu::text::CharsetRecog_UTF8> cVar3;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar4;
	std::shared_ptr<android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_16_BE> cVar5;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar6;
	std::shared_ptr<android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_16_LE> cVar7;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar8;
	std::shared_ptr<android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE> cVar9;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar10;
	std::shared_ptr<android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_32_LE> cVar11;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar12;
	std::shared_ptr<android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_sjis> cVar13;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar14;
	std::shared_ptr<android::icu::text::CharsetRecog_2022_S_CharsetRecog_2022JP> cVar15;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar16;
	std::shared_ptr<android::icu::text::CharsetRecog_2022_S_CharsetRecog_2022CN> cVar17;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar18;
	std::shared_ptr<android::icu::text::CharsetRecog_2022_S_CharsetRecog_2022KR> cVar19;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar20;
	std::shared_ptr<android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_gb_18030> cVar21;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar22;
	std::shared_ptr<android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp> cVar23;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar24;
	std::shared_ptr<android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_kr> cVar25;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar26;
	std::shared_ptr<android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_big5> cVar27;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar28;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_1> cVar29;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar30;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_2> cVar31;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar32;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_5_ru> cVar33;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar34;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_6_ar> cVar35;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar36;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_7_el> cVar37;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar38;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he> cVar39;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar40;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_he> cVar41;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar42;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1251> cVar43;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar44;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1256> cVar45;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar46;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R> cVar47;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar48;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_9_tr> cVar49;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar50;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl> cVar51;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar52;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_ltr> cVar53;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar54;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_rtl> cVar55;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar56;
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_ltr> cVar57;
	
	cVar0 = 0x0;
	cVar1 = 0x1;
	list = std::make_shared<java::util::ArrayList>();
	//    .local v0, "list":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/CharsetDetector$CSRecognizerInfo;>;"
	cVar3 = std::make_shared<android::icu::text::CharsetRecog_UTF8>();
	cVar2 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar3, cVar1);
	list->add(cVar2);
	cVar5 = std::make_shared<android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_16_BE>();
	cVar4 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar5, cVar1);
	list->add(cVar4);
	cVar7 = std::make_shared<android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_16_LE>();
	cVar6 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar7, cVar1);
	list->add(cVar6);
	cVar9 = std::make_shared<android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE>();
	cVar8 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar9, cVar1);
	list->add(cVar8);
	cVar11 = std::make_shared<android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_32_LE>();
	cVar10 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar11, cVar1);
	list->add(cVar10);
	cVar13 = std::make_shared<android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_sjis>();
	cVar12 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar13, cVar1);
	list->add(cVar12);
	cVar15 = std::make_shared<android::icu::text::CharsetRecog_2022_S_CharsetRecog_2022JP>();
	cVar14 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar15, cVar1);
	list->add(cVar14);
	cVar17 = std::make_shared<android::icu::text::CharsetRecog_2022_S_CharsetRecog_2022CN>();
	cVar16 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar17, cVar1);
	list->add(cVar16);
	cVar19 = std::make_shared<android::icu::text::CharsetRecog_2022_S_CharsetRecog_2022KR>();
	cVar18 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar19, cVar1);
	list->add(cVar18);
	cVar21 = std::make_shared<android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_gb_18030>();
	cVar20 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar21, cVar1);
	list->add(cVar20);
	cVar23 = std::make_shared<android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp>();
	cVar22 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar23, cVar1);
	list->add(cVar22);
	cVar25 = std::make_shared<android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_kr>();
	cVar24 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar25, cVar1);
	list->add(cVar24);
	cVar27 = std::make_shared<android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_big5>();
	cVar26 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar27, cVar1);
	list->add(cVar26);
	cVar29 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_1>();
	cVar28 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar29, cVar1);
	list->add(cVar28);
	cVar31 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_2>();
	cVar30 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar31, cVar1);
	list->add(cVar30);
	cVar33 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_5_ru>();
	cVar32 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar33, cVar1);
	list->add(cVar32);
	cVar35 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_6_ar>();
	cVar34 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar35, cVar1);
	list->add(cVar34);
	cVar37 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_7_el>();
	cVar36 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar37, cVar1);
	list->add(cVar36);
	cVar39 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_I_he>();
	cVar38 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar39, cVar1);
	list->add(cVar38);
	cVar41 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_8_he>();
	cVar40 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar41, cVar1);
	list->add(cVar40);
	cVar43 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1251>();
	cVar42 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar43, cVar1);
	list->add(cVar42);
	cVar45 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_windows_1256>();
	cVar44 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar45, cVar1);
	list->add(cVar44);
	cVar47 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_KOI8_R>();
	cVar46 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar47, cVar1);
	list->add(cVar46);
	cVar49 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_9_tr>();
	cVar48 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar49, cVar1);
	list->add(cVar48);
	cVar51 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl>();
	cVar50 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar51, cVar0);
	list->add(cVar50);
	cVar53 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_ltr>();
	cVar52 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar53, cVar0);
	list->add(cVar52);
	cVar55 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_rtl>();
	cVar54 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar55, cVar0);
	list->add(cVar54);
	cVar57 = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM420_ar_ltr>();
	cVar56 = std::make_shared<android::icu::text::CharsetDetector_S_CSRecognizerInfo>(cVar57, cVar0);
	list->add(cVar56);
	android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS = java::util::Collections::unmodifiableList(list);
	return;

}
// .method public constructor <init>()V
android::icu::text::CharsetDetector::CharsetDetector()
{
	
	bool cVar0;
	
	cVar0 = 0x0;
	// 392    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fInputBytes = std::make_shared<std::vector<unsigned char[]>>(0x1f40);
	this->fByteStats = std::make_shared<std::vector<short[]>>(0x100);
	this->fC1Bytes = cVar0;
	this->fStripTags = cVar0;
	return;

}
// .method private MungeInput()V
void android::icu::text::CharsetDetector::MungeInput()
{
	
	short cVar0;
	int srci;
	int dsti;
	int inMarkup;
	int openTags;
	int badTags;
	unsigned char b;
	int limit;
	int val;
	std::shared_ptr<short[]> cVar1;
	int i;
	
	cVar0 = 0x0;
	srci = 0x0;
	//    .local v8, "srci":I
	dsti = 0x0;
	//    .local v2, "dsti":I
	inMarkup = 0x0;
	//    .local v5, "inMarkup":Z
	openTags = 0x0;
	//    .local v7, "openTags":I
	badTags = 0x0;
	//    .local v1, "badTags":I
	if ( !(this->fStripTags) )  
		goto label_cond_36;
	srci = 0x0;
label_goto_b:
	if ( srci >= this->fRawLength )
		goto label_cond_34;
	if ( dsti >= this->fInputBytes->size() )
		goto label_cond_34;
	b = this->fRawInput[srci];
	//    .local v0, "b":B
	if ( b != 0x3c )
		goto label_cond_23;
	if ( !(inMarkup) )  
		goto label_cond_20;
	badTags = ( badTags + 0x1);
label_cond_20:
	inMarkup = 0x1;
	openTags = ( openTags + 0x1);
label_cond_23:
	if ( inMarkup )     
		goto label_cond_2c;
	//    .end local v2    # "dsti":I
	//    .local v3, "dsti":I
	this->fInputBytes[dsti] = b;
	dsti = ( dsti + 0x1);
	//    .end local v3    # "dsti":I
	//    .restart local v2    # "dsti":I
label_cond_2c:
	if ( b != 0x3e )
		goto label_cond_31;
	inMarkup = 0x0;
label_cond_31:
	srci = ( srci + 0x1);
	goto label_goto_b;
	// 521    .line 361
	// 522    .end local v0    # "b":B
label_cond_34:
	this->fInputLen = dsti;
label_cond_36:
	if ( openTags <  0x5 )
		goto label_cond_3d;
	if ( ( openTags / 0x5) >= badTags )
		goto label_cond_53;
label_cond_3d:
	limit = this->fRawLength;
	//    .local v6, "limit":I
	if ( limit <= 0x1f40 )
		goto label_cond_45;
label_cond_45:
	srci = 0x0;
label_goto_46:
	if ( srci >= limit )
		goto label_cond_7b;
	this->fInputBytes[srci] = this->fRawInput[srci];
	srci = ( srci + 0x1);
	goto label_goto_46;
	// 570    .line 370
	// 571    .end local v6    # "limit":I
label_cond_53:
	if ( this->fInputLen >= 0x64 )
		goto label_cond_5f;
	if ( this->fRawLength >  0x258 )
		goto label_cond_3d;
label_cond_5f:
label_goto_5f:
	java::util::Arrays::fill(this->fByteStats, cVar0);
	srci = 0x0;
label_goto_65:
	if ( srci >= this->fInputLen )
		goto label_cond_7e;
	val = ( this->fInputBytes[srci] & 0xff);
	//    .local v9, "val":I
	cVar1 = this->fByteStats;
	cVar1[val] = (short)(( cVar1[val] + 0x1));
	srci = ( srci + 0x1);
	goto label_goto_65;
	// 624    .line 380
	// 625    .end local v9    # "val":I
	// 626    .restart local v6    # "limit":I
label_cond_7b:
	this->fInputLen = srci;
	goto label_goto_5f;
	// 632    .line 393
	// 633    .end local v6    # "limit":I
label_cond_7e:
	this->fC1Bytes = cVar0;
	i = 0x80;
	//    .local v4, "i":I
label_goto_82:
	if ( i >  0x9f )
		goto label_cond_8f;
	if ( !(this->fByteStats[i]) )  
		goto label_cond_90;
	this->fC1Bytes = 0x1;
label_cond_8f:
	return;
	// 662    .line 394
label_cond_90:
	i = ( i + 0x1);
	goto label_goto_82;

}
// .method public static getAllDetectableCharsets()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetDetector::getAllDetectableCharsets()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> allCharsetNames;
	int i;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar0;
	
	allCharsetNames = std::make_shared<std::vector<std::vector<java::lang::String>>>(android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS->size());
	//    .local v0, "allCharsetNames":[Ljava/lang/String;
	i = 0x0;
	//    .local v1, "i":I
label_goto_9:
	if ( i >= allCharsetNames->size() )
		goto label_cond_1f;
	cVar0 = android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS->get(i);
	cVar0->checkCast("android::icu::text::CharsetDetector_S_CSRecognizerInfo");
	allCharsetNames[i] = cVar0->recognizer->getName();
	i = ( i + 0x1);
	goto label_goto_9;
	// 714    .line 290
label_cond_1f:
	return allCharsetNames;

}
// .method public detect()Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetDetector::detect()
{
	
	auto matches;
	
	matches = this->detectAll();
	//    .local v0, "matches":[Landroid/icu/text/CharsetMatch;
	if ( !(matches) )  
		goto label_cond_b;
	if ( matches->size() )     
		goto label_cond_c;
label_cond_b:
	return 0x0;
	// 746    .line 159
label_cond_c:
	return matches[0x0];

}
// .method public detectAll()[Landroid/icu/text/CharsetMatch;
std::shared_ptr<android::icu::text::CharsetMatch> android::icu::text::CharsetDetector::detectAll()
{
	
	std::shared_ptr<java::util::ArrayList> matches;
	int i;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> rcinfo;
	std::shared_ptr<java::lang::Object> m;
	std::shared_ptr<std::vector<android::icu::text::CharsetMatch>> resultArray;
	
	matches = std::make_shared<java::util::ArrayList>();
	//    .local v3, "matches":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Landroid/icu/text/CharsetMatch;>;"
	this->MungeInput();
	i = 0x0;
	//    .local v1, "i":I
label_goto_9:
	if ( i >= android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS->size() )
		goto label_cond_34;
	rcinfo = android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS->get(i);
	rcinfo->checkCast("android::icu::text::CharsetDetector_S_CSRecognizerInfo");
	//    .local v4, "rcinfo":Landroid/icu/text/CharsetDetector$CSRecognizerInfo;
	if ( !(this->fEnabledRecognizers) )  
		goto label_cond_31;
	//    .local v0, "active":Z
label_goto_21:
	if ( !(active) )  
		goto label_cond_2e;
	m = rcinfo->recognizer->match(this);
	//    .local v2, "m":Landroid/icu/text/CharsetMatch;
	if ( !(m) )  
		goto label_cond_2e;
	matches->add(m);
	//    .end local v2    # "m":Landroid/icu/text/CharsetMatch;
label_cond_2e:
	i = ( i + 0x1);
	goto label_goto_9;
	// 824    .line 184
	// 825    .end local v0    # "active":Z
label_cond_31:
	//    .restart local v0    # "active":Z
	goto label_goto_21;
	// 832    .line 192
	// 833    .end local v0    # "active":Z
	// 834    .end local v4    # "rcinfo":Landroid/icu/text/CharsetDetector$CSRecognizerInfo;
label_cond_34:
	java::util::Collections::sort(matches);
	java::util::Collections::reverse(matches);
	//    .local v5, "resultArray":[Landroid/icu/text/CharsetMatch;
	resultArray = matches->toArray(std::make_shared<std::vector<std::vector<android::icu::text::CharsetMatch>>>(matches->size()));
	//    .end local v5    # "resultArray":[Landroid/icu/text/CharsetMatch;
	resultArray->checkCast("std::vector<android::icu::text::CharsetMatch>");
	//    .restart local v5    # "resultArray":[Landroid/icu/text/CharsetMatch;
	return resultArray;

}
// .method public enableInputFilter(Z)Z
bool android::icu::text::CharsetDetector::enableInputFilter(bool filter)
{
	
	//    .param p1, "filter"    # Z
	//    .local v0, "previous":Z
	this->fStripTags = filter;
	return this->fStripTags;

}
// .method public getDetectableCharsets()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetDetector::getDetectableCharsets()
{
	
	std::shared_ptr<java::util::ArrayList> csnames;
	int i;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> rcinfo;
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 881    .end annotation
	csnames = std::make_shared<java::util::ArrayList>(android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS->size());
	//    .local v1, "csnames":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	i = 0x0;
	//    .local v2, "i":I
label_goto_c:
	if ( i >= android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS->size() )
		goto label_cond_35;
	rcinfo = android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS->get(i);
	rcinfo->checkCast("android::icu::text::CharsetDetector_S_CSRecognizerInfo");
	//    .local v3, "rcinfo":Landroid/icu/text/CharsetDetector$CSRecognizerInfo;
	if ( this->fEnabledRecognizers )     
		goto label_cond_30;
	//    .local v0, "active":Z
label_goto_22:
	if ( !(active) )  
		goto label_cond_2d;
	csnames->add(rcinfo->recognizer->getName());
label_cond_2d:
	i = ( i + 0x1);
	goto label_goto_c;
	// 946    .line 509
	// 947    .end local v0    # "active":Z
label_cond_30:
	//    .restart local v0    # "active":Z
	goto label_goto_22;
	// 956    .line 514
	// 957    .end local v0    # "active":Z
	// 958    .end local v3    # "rcinfo":Landroid/icu/text/CharsetDetector$CSRecognizerInfo;
label_cond_35:
	cVar0 = csnames->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(csnames->size()));
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method public getReader(Ljava/io/InputStream;Ljava/lang/String;)Ljava/io/Reader;
std::shared_ptr<java::io::Reader> android::icu::text::CharsetDetector::getReader(std::shared_ptr<java::io::InputStream> in,std::shared_ptr<java::lang::String> declaredEncoding)
{
	
	std::shared_ptr<java::io::Reader> cVar0;
	std::shared_ptr<android::icu::text::CharsetMatch> match;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .param p2, "declaredEncoding"    # Ljava/lang/String;
	cVar0 = 0x0;
	this->fDeclaredEncoding = declaredEncoding;
	try {
	//label_try_start_3:
	this->setText(in);
	match = this->detect();
	//    .local v1, "match":Landroid/icu/text/CharsetMatch;
	if ( match )     
		goto label_cond_d;
	return cVar0;
	// 1002    .line 232
label_cond_d:
	//label_try_end_10:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_10} :catch_12
	return match->getReader();
	// 1012    .line 233
	// 1013    .end local v1    # "match":Landroid/icu/text/CharsetMatch;
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	return cVar0;

}
// .method public getString([BLjava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetDetector::getString(std::shared_ptr<unsigned char[]> in,std::shared_ptr<java::lang::String> declaredEncoding)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::text::CharsetMatch> match;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "in"    # [B
	//    .param p2, "declaredEncoding"    # Ljava/lang/String;
	cVar0 = 0x0;
	this->fDeclaredEncoding = declaredEncoding;
	try {
	//label_try_start_3:
	this->setText(in);
	match = this->detect();
	//    .local v1, "match":Landroid/icu/text/CharsetMatch;
	if ( match )     
		goto label_cond_d;
	return cVar0;
	// 1049    .line 265
label_cond_d:
	//label_try_end_11:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_13;
	}
	//    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_11} :catch_13
	return match->getString(-0x1);
	// 1061    .line 266
	// 1062    .end local v1    # "match":Landroid/icu/text/CharsetMatch;
label_catch_13:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	return cVar0;

}
// .method public inputFilterEnabled()Z
bool android::icu::text::CharsetDetector::inputFilterEnabled()
{
	
	return this->fStripTags;

}
// .method public setDeclaredEncoding(Ljava/lang/String;)Landroid/icu/text/CharsetDetector;
std::shared_ptr<android::icu::text::CharsetDetector> android::icu::text::CharsetDetector::setDeclaredEncoding(std::shared_ptr<java::lang::String> encoding)
{
	
	//    .param p1, "encoding"    # Ljava/lang/String;
	this->fDeclaredEncoding = encoding;
	return this;

}
// .method public setDetectableCharset(Ljava/lang/String;Z)Landroid/icu/text/CharsetDetector;
std::shared_ptr<android::icu::text::CharsetDetector> android::icu::text::CharsetDetector::setDetectableCharset(std::shared_ptr<java::lang::String> encoding,bool enabled)
{
	
	int i;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> csrinfo;
	int modIdx;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::text::CharsetDetector_S_CSRecognizerInfo> cVar2;
	
	//    .param p1, "encoding"    # Ljava/lang/String;
	//    .param p2, "enabled"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1098    .end annotation
	//    .local v3, "modIdx":I
	0x0;
	//    .local v2, "isDefaultVal":Z
	i = 0x0;
	//    .local v1, "i":I
label_goto_3:
	if ( i >= android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS->size() )
		goto label_cond_25;
	csrinfo = android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS->get(i);
	csrinfo->checkCast("android::icu::text::CharsetDetector_S_CSRecognizerInfo");
	//    .local v0, "csrinfo":Landroid/icu/text/CharsetDetector$CSRecognizerInfo;
	if ( !(csrinfo->recognizer->getName()->equals(encoding)) )  
		goto label_cond_4a;
	modIdx = i;
	if ( csrinfo->isDefaultEnabled != enabled )
		goto label_cond_48;
	//    .end local v0    # "csrinfo":Landroid/icu/text/CharsetDetector$CSRecognizerInfo;
label_cond_25:
label_goto_25:
	if ( -0x1 >= 0 )
		goto label_cond_4d;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding: \")))->append(encoding)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar0;
	// 1192    .line 540
	// 1193    .restart local v0    # "csrinfo":Landroid/icu/text/CharsetDetector$CSRecognizerInfo;
label_cond_48:
	0x0;
	goto label_goto_25;
	// 1199    .line 536
label_cond_4a:
	i = ( i + 0x1);
	goto label_goto_3;
	// 1205    .line 549
	// 1206    .end local v0    # "csrinfo":Landroid/icu/text/CharsetDetector$CSRecognizerInfo;
label_cond_4d:
	if ( this->fEnabledRecognizers )     
		goto label_cond_79;
	if ( !(( 0x1 ^ 0x1)) )  
		goto label_cond_79;
	this->fEnabledRecognizers = std::make_shared<std::vector<bool[]>>(android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS->size());
	i = 0x0;
label_goto_60:
	if ( i >= android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS->size() )
		goto label_cond_79;
	cVar2 = android::icu::text::CharsetDetector::ALL_CS_RECOGNIZERS->get(i);
	cVar2->checkCast("android::icu::text::CharsetDetector_S_CSRecognizerInfo");
	this->fEnabledRecognizers[i] = cVar2->isDefaultEnabled;
	i = ( i + 0x1);
	goto label_goto_60;
	// 1259    .line 559
label_cond_79:
	if ( !(this->fEnabledRecognizers) )  
		goto label_cond_81;
	this->fEnabledRecognizers[modIdx] = enabled;
label_cond_81:
	return this;

}
// .method public setText(Ljava/io/InputStream;)Landroid/icu/text/CharsetDetector;
std::shared_ptr<android::icu::text::CharsetDetector> android::icu::text::CharsetDetector::setText(std::shared_ptr<java::io::InputStream> in)
{
	
	int cVar0;
	int remainingLength;
	int bytesRead;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1279        value = {
	// 1280            Ljava/io/IOException;
	// 1281        }
	// 1282    .end annotation
	cVar0 = 0x1f40;
	this->fInputStream = in;
	this->fInputStream->mark(cVar0);
	this->fRawInput = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	this->fRawLength = 0x0;
	remainingLength = 0x1f40;
	//    .local v1, "remainingLength":I
label_goto_12:
	if ( remainingLength <= 0 )
		goto label_cond_20;
	bytesRead = this->fInputStream->read(this->fRawInput, this->fRawLength, remainingLength);
	//    .local v0, "bytesRead":I
	if ( bytesRead > 0 ) 
		goto label_cond_26;
	//    .end local v0    # "bytesRead":I
label_cond_20:
	this->fInputStream->reset();
	return this;
	// 1338    .line 122
	// 1339    .restart local v0    # "bytesRead":I
label_cond_26:
	this->fRawLength = (this->fRawLength +  bytesRead);
	remainingLength = (remainingLength -  bytesRead);
	goto label_goto_12;

}
// .method public setText([B)Landroid/icu/text/CharsetDetector;
std::shared_ptr<android::icu::text::CharsetDetector> android::icu::text::CharsetDetector::setText(std::shared_ptr<unsigned char[]> in)
{
	
	//    .param p1, "in"    # [B
	this->fRawInput = in;
	this->fRawLength = in->size();
	return this;

}


