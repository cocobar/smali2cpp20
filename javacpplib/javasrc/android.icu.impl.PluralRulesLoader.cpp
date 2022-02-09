// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\PluralRulesLoader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.PluralRulesLoader.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.text.PluralRanges.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.CharSequence.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParseException.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"

static android::icu::impl::PluralRulesLoader::UNKNOWN_RANGE;
static android::icu::impl::PluralRulesLoader::loader;
static android::icu::impl::PluralRulesLoader::localeIdToPluralRanges;
// .method static constructor <clinit>()V
void android::icu::impl::PluralRulesLoader::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::impl::PluralRulesLoader> cVar4;
	std::shared_ptr<android::icu::text::PluralRanges> cVar5;
	std::shared<std::vector<std::vector<std::vector<java::lang::String>>>> pluralRangeData;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar7;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar8;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar9;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar10;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar11;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar12;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar13;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar14;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar15;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar16;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar17;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar18;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar19;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar20;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar21;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar22;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar23;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar24;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar25;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar26;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar27;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar28;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar29;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar30;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar31;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar32;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar33;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar34;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar35;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar36;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar37;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar38;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar39;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar40;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar41;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar42;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar43;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar44;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar45;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar46;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar47;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar48;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar49;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar50;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar51;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar52;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar53;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar54;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar55;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar56;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar57;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar58;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar59;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar60;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar61;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar62;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar63;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar64;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar65;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar66;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar67;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar68;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar69;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar70;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar71;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar72;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar73;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar74;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar75;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar76;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar77;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar78;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar79;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar80;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar81;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar82;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar83;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar84;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar85;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar86;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar87;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar88;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar89;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar90;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar91;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar92;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar93;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar94;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar95;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar96;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar97;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar98;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar99;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar100;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar101;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar102;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar103;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar104;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar105;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar106;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar107;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar108;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar109;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar110;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar111;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar112;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar113;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar114;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar115;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar116;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar117;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar118;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar119;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar120;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar121;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar122;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar123;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar124;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar125;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar126;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar127;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar128;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar129;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar130;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar131;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar132;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar133;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar134;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar135;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar136;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar137;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar138;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar139;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar140;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar141;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar142;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar143;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar144;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar145;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar146;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar147;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar148;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar149;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar150;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar151;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar152;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar153;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar154;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar155;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar156;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar157;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar158;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar159;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar160;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar161;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar162;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar163;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar164;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar165;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar166;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar167;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar168;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar169;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar170;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar171;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar172;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar173;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar174;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar175;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar176;
	std::shared_ptr<android::icu::text::PluralRanges> pr;
	int locales;
	std::shared_ptr<java::util::HashMap> tempLocaleIdToPluralRanges;
	int cVar177;
	auto row;
	int cVar178;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::impl::PluralRulesLoader>();
	android::icu::impl::PluralRulesLoader::loader = cVar4;
	cVar5 = std::make_shared<android::icu::text::PluralRanges>();
	android::icu::impl::PluralRulesLoader::UNKNOWN_RANGE = cVar5->freeze();
	pluralRangeData = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(0xab);
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar6[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("id ja km ko lo ms my th vi zh"));
	pluralRangeData[cVar3] = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar7[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar7[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar7[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[cVar2] = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar8[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar8[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("am bn fr gu hi hy kn mr pa zu"));
	pluralRangeData[cVar1] = cVar8;
	cVar9 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar9[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar9[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar9[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[cVar0] = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar10[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar10[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar10[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x4] = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar11[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar11[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar11[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x5] = cVar11;
	cVar12 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar12[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar12[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fa"));
	pluralRangeData[0x6] = cVar12;
	cVar13 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar13[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar13[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar13[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x7] = cVar13;
	cVar14 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar14[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar14[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar14[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x8] = cVar14;
	cVar15 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar15[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar15[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar15[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x9] = cVar15;
	cVar16 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar16[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar16[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ka"));
	pluralRangeData[0xa] = cVar16;
	cVar17 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar17[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar17[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar17[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0xb] = cVar17;
	cVar18 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar18[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar18[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar18[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0xc] = cVar18;
	cVar19 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar19[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar19[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar19[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0xd] = cVar19;
	cVar20 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar20[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar20[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("az de el gl hu it kk ky ml mn ne nl pt sq sw ta te tr ug uz"));
	pluralRangeData[0xe] = cVar20;
	cVar21 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar21[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar21[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar21[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0xf] = cVar21;
	cVar22 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar22[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar22[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar22[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x10] = cVar22;
	cVar23 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar23[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar23[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar23[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x11] = cVar23;
	cVar24 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar24[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar24[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("af bg ca en es et eu fi nb sv ur"));
	pluralRangeData[0x12] = cVar24;
	cVar25 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar25[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar25[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar25[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x13] = cVar25;
	cVar26 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar26[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar26[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar26[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x14] = cVar26;
	cVar27 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar27[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar27[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar27[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x15] = cVar27;
	cVar28 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar28[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar28[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("da fil is"));
	pluralRangeData[0x16] = cVar28;
	cVar29 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar29[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar29[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar29[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x17] = cVar29;
	cVar30 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar30[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar30[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar30[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x18] = cVar30;
	cVar31 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar31[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar31[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar31[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x19] = cVar31;
	cVar32 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar32[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar32[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar32[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x1a] = cVar32;
	cVar33 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar33[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar33[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("si"));
	pluralRangeData[0x1b] = cVar33;
	cVar34 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar34[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar34[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar34[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x1c] = cVar34;
	cVar35 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar35[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar35[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar35[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x1d] = cVar35;
	cVar36 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar36[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar36[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar36[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x1e] = cVar36;
	cVar37 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar37[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar37[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar37[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x1f] = cVar37;
	cVar38 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar38[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar38[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("mk"));
	pluralRangeData[0x20] = cVar38;
	cVar39 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar39[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar39[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar39[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x21] = cVar39;
	cVar40 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar40[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar40[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar40[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x22] = cVar40;
	cVar41 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar41[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar41[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar41[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x23] = cVar41;
	cVar42 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar42[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar42[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar42[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x24] = cVar42;
	cVar43 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar43[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar43[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("lv"));
	pluralRangeData[0x25] = cVar43;
	cVar44 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar44[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar44[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar44[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x26] = cVar44;
	cVar45 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar45[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar45[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar45[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x27] = cVar45;
	cVar46 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar46[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar46[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar46[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x28] = cVar46;
	cVar47 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar47[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar47[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar47[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x29] = cVar47;
	cVar48 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar48[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar48[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar48[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x2a] = cVar48;
	cVar49 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar49[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar49[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar49[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x2b] = cVar49;
	cVar50 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar50[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar50[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar50[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x2c] = cVar50;
	cVar51 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar51[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar51[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar51[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x2d] = cVar51;
	cVar52 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar52[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar52[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar52[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x2e] = cVar52;
	cVar53 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar53[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar53[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ro"));
	pluralRangeData[0x2f] = cVar53;
	cVar54 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar54[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar54[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar54[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x30] = cVar54;
	cVar55 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar55[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar55[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar55[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x31] = cVar55;
	cVar56 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar56[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar56[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar56[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x32] = cVar56;
	cVar57 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar57[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar57[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar57[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x33] = cVar57;
	cVar58 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar58[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar58[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar58[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x34] = cVar58;
	cVar59 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar59[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar59[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar59[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x35] = cVar59;
	cVar60 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar60[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar60[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar60[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x36] = cVar60;
	cVar61 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar61[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar61[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("hr sr bs"));
	pluralRangeData[0x37] = cVar61;
	cVar62 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar62[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar62[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar62[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x38] = cVar62;
	cVar63 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar63[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar63[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar63[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x39] = cVar63;
	cVar64 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar64[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar64[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar64[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x3a] = cVar64;
	cVar65 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar65[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar65[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar65[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x3b] = cVar65;
	cVar66 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar66[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar66[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar66[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x3c] = cVar66;
	cVar67 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar67[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar67[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar67[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x3d] = cVar67;
	cVar68 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar68[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar68[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar68[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x3e] = cVar68;
	cVar69 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar69[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar69[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar69[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x3f] = cVar69;
	cVar70 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar70[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar70[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar70[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x40] = cVar70;
	cVar71 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar71[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar71[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sl"));
	pluralRangeData[0x41] = cVar71;
	cVar72 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar72[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar72[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar72[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x42] = cVar72;
	cVar73 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar73[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar73[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar73[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	pluralRangeData[0x43] = cVar73;
	cVar74 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar74[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar74[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar74[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x44] = cVar74;
	cVar75 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar75[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar75[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar75[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x45] = cVar75;
	cVar76 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar76[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar76[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar76[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x46] = cVar76;
	cVar77 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar77[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar77[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar77[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	pluralRangeData[0x47] = cVar77;
	cVar78 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar78[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar78[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar78[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x48] = cVar78;
	cVar79 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar79[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar79[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar79[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x49] = cVar79;
	cVar80 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar80[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar80[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar80[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x4a] = cVar80;
	cVar81 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar81[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar81[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar81[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	pluralRangeData[0x4b] = cVar81;
	cVar82 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar82[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar82[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar82[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x4c] = cVar82;
	cVar83 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar83[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar83[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar83[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x4d] = cVar83;
	cVar84 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar84[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar84[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar84[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x4e] = cVar84;
	cVar85 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar85[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar85[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar85[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	pluralRangeData[0x4f] = cVar85;
	cVar86 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar86[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar86[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar86[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x50] = cVar86;
	cVar87 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar87[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar87[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar87[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x51] = cVar87;
	cVar88 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar88[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar88[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("he"));
	pluralRangeData[0x52] = cVar88;
	cVar89 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar89[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar89[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar89[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x53] = cVar89;
	cVar90 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar90[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar90[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar90[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x54] = cVar90;
	cVar91 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar91[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar91[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar91[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x55] = cVar91;
	cVar92 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar92[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar92[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar92[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x56] = cVar92;
	cVar93 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar93[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar93[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar93[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x57] = cVar93;
	cVar94 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar94[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar94[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar94[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x58] = cVar94;
	cVar95 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar95[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar95[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar95[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x59] = cVar95;
	cVar96 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar96[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar96[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar96[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x5a] = cVar96;
	cVar97 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar97[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar97[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar97[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x5b] = cVar97;
	cVar98 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar98[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar98[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar98[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x5c] = cVar98;
	cVar99 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar99[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar99[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar99[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x5d] = cVar99;
	cVar100 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar100[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar100[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("cs pl sk"));
	pluralRangeData[0x5e] = cVar100;
	cVar101 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar101[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar101[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar101[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x5f] = cVar101;
	cVar102 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar102[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar102[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar102[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x60] = cVar102;
	cVar103 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar103[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar103[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar103[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x61] = cVar103;
	cVar104 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar104[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar104[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar104[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x62] = cVar104;
	cVar105 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar105[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar105[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar105[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x63] = cVar105;
	cVar106 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar106[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar106[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar106[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x64] = cVar106;
	cVar107 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar107[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar107[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar107[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x65] = cVar107;
	cVar108 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar108[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar108[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar108[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x66] = cVar108;
	cVar109 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar109[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar109[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar109[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x67] = cVar109;
	cVar110 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar110[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar110[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar110[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x68] = cVar110;
	cVar111 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar111[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar111[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar111[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x69] = cVar111;
	cVar112 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar112[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar112[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar112[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x6a] = cVar112;
	cVar113 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar113[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar113[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar113[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x6b] = cVar113;
	cVar114 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar114[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar114[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar114[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x6c] = cVar114;
	cVar115 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar115[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar115[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("lt ru uk"));
	pluralRangeData[0x6d] = cVar115;
	cVar116 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar116[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar116[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar116[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x6e] = cVar116;
	cVar117 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar117[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar117[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar117[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x6f] = cVar117;
	cVar118 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar118[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar118[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar118[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x70] = cVar118;
	cVar119 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar119[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar119[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar119[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x71] = cVar119;
	cVar120 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar120[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar120[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar120[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x72] = cVar120;
	cVar121 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar121[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar121[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar121[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x73] = cVar121;
	cVar122 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar122[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar122[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar122[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x74] = cVar122;
	cVar123 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar123[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar123[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar123[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x75] = cVar123;
	cVar124 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar124[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar124[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar124[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x76] = cVar124;
	cVar125 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar125[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar125[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar125[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x77] = cVar125;
	cVar126 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar126[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar126[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar126[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x78] = cVar126;
	cVar127 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar127[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar127[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar127[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x79] = cVar127;
	cVar128 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar128[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar128[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar128[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x7a] = cVar128;
	cVar129 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar129[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar129[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar129[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x7b] = cVar129;
	cVar130 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar130[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar130[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar130[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x7c] = cVar130;
	cVar131 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar131[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar131[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar131[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x7d] = cVar131;
	cVar132 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar132[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar132[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("cy"));
	pluralRangeData[0x7e] = cVar132;
	cVar133 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar133[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar133[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar133[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x7f] = cVar133;
	cVar134 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar134[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar134[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar134[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	pluralRangeData[0x80] = cVar134;
	cVar135 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar135[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar135[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar135[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x81] = cVar135;
	cVar136 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar136[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar136[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar136[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x82] = cVar136;
	cVar137 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar137[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar137[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar137[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x83] = cVar137;
	cVar138 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar138[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar138[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar138[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	pluralRangeData[0x84] = cVar138;
	cVar139 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar139[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar139[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar139[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x85] = cVar139;
	cVar140 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar140[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar140[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar140[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x86] = cVar140;
	cVar141 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar141[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar141[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar141[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x87] = cVar141;
	cVar142 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar142[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar142[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar142[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x88] = cVar142;
	cVar143 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar143[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar143[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar143[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x89] = cVar143;
	cVar144 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar144[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar144[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar144[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x8a] = cVar144;
	cVar145 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar145[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar145[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar145[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x8b] = cVar145;
	cVar146 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar146[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar146[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar146[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x8c] = cVar146;
	cVar147 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar147[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar147[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar147[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x8d] = cVar147;
	cVar148 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar148[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar148[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar148[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	pluralRangeData[0x8e] = cVar148;
	cVar149 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar149[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar149[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar149[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	pluralRangeData[0x8f] = cVar149;
	cVar150 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar150[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar150[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar150[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x90] = cVar150;
	cVar151 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar151[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar151[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar151[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x91] = cVar151;
	cVar152 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar152[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar152[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar152[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x92] = cVar152;
	cVar153 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar153[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("locales"));
	cVar153[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ar"));
	pluralRangeData[0x93] = cVar153;
	cVar154 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar154[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar154[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar154[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	pluralRangeData[0x94] = cVar154;
	cVar155 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar155[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar155[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar155[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	pluralRangeData[0x95] = cVar155;
	cVar156 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar156[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar156[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar156[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x96] = cVar156;
	cVar157 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar157[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar157[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar157[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x97] = cVar157;
	cVar158 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar158[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zero"));
	cVar158[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar158[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x98] = cVar158;
	cVar159 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar159[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar159[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar159[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x99] = cVar159;
	cVar160 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar160[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar160[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar160[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x9a] = cVar160;
	cVar161 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar161[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar161[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar161[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x9b] = cVar161;
	cVar162 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar162[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar162[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar162[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x9c] = cVar162;
	cVar163 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar163[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar163[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar163[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0x9d] = cVar163;
	cVar164 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar164[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar164[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar164[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0x9e] = cVar164;
	cVar165 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar165[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar165[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar165[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0x9f] = cVar165;
	cVar166 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar166[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar166[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar166[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0xa0] = cVar166;
	cVar167 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar167[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar167[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar167[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0xa1] = cVar167;
	cVar168 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar168[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar168[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar168[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0xa2] = cVar168;
	cVar169 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar169[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar169[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar169[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0xa3] = cVar169;
	cVar170 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar170[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar170[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar170[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0xa4] = cVar170;
	cVar171 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar171[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar171[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar171[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0xa5] = cVar171;
	cVar172 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar172[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar172[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("one"));
	cVar172[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0xa6] = cVar172;
	cVar173 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar173[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar173[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("two"));
	cVar173[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0xa7] = cVar173;
	cVar174 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar174[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar174[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	cVar174[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("few"));
	pluralRangeData[0xa8] = cVar174;
	cVar175 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar175[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar175[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	cVar175[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("many"));
	pluralRangeData[0xa9] = cVar175;
	cVar176 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar176[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar176[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	cVar176[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other"));
	pluralRangeData[0xaa] = cVar176;
	//    .local v2, "pluralRangeData":[[Ljava/lang/String;
	pr = 0x0;
	//    .local v3, "pr":Landroid/icu/text/PluralRanges;
	locales = 0x0;
	//    .local v1, "locales":[Ljava/lang/String;
	tempLocaleIdToPluralRanges = std::make_shared<java::util::HashMap>();
	//    .local v5, "tempLocaleIdToPluralRanges":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Landroid/icu/text/PluralRanges;>;"
	cVar177 = cVar3;
	//    .end local v1    # "locales":[Ljava/lang/String;
	//    .end local v3    # "pr":Landroid/icu/text/PluralRanges;
label_goto_dc4:
	if ( cVar177 >= pluralRangeData->size() )
		goto label_cond_e0c;
	row = pluralRangeData[cVar177];
	//    .local v4, "row":[Ljava/lang/String;
	if ( !(row[cVar3]->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("locales")))) )  
		goto label_cond_df6;
	if ( !(pr) )  
		goto label_cond_de4;
	pr->freeze();
	cVar178 = cVar3;
label_goto_dda:
	if ( cVar178 >= locales->size() )
		goto label_cond_de4;
	//    .local v0, "locale":Ljava/lang/String;
	tempLocaleIdToPluralRanges->put(locales[cVar178], pr);
	cVar178 = ( cVar178 + 0x1);
	goto label_goto_dda;
	// 3343    .line 488
	// 3344    .end local v0    # "locale":Ljava/lang/String;
label_cond_de4:
	//    .local v1, "locales":[Ljava/lang/String;
	pr = std::make_shared<android::icu::text::PluralRanges>();
	//    .end local v1    # "locales":[Ljava/lang/String;
label_goto_df2:
	cVar177 = ( cVar177 + 0x1);
	goto label_goto_dc4;
	// 3369    .line 492
label_cond_df6:
	pr->add(android::icu::impl::StandardPlural::fromString(row[cVar3]), android::icu::impl::StandardPlural::fromString(row[cVar2]), android::icu::impl::StandardPlural::fromString(row[cVar1]));
	goto label_goto_df2;
	// 3396    .line 498
	// 3397    .end local v4    # "row":[Ljava/lang/String;
label_cond_e0c:
label_goto_e0d:
	if ( cVar3 >= locales->size() )
		goto label_cond_e17;
	//    .restart local v0    # "locale":Ljava/lang/String;
	tempLocaleIdToPluralRanges->put(locales[cVar3], pr);
	cVar3 = ( cVar3 + 0x1);
	goto label_goto_e0d;
	// 3415    .line 502
	// 3416    .end local v0    # "locale":Ljava/lang/String;
label_cond_e17:
	android::icu::impl::PluralRulesLoader::localeIdToPluralRanges = java::util::Collections::unmodifiableMap(tempLocaleIdToPluralRanges);
	return;

}
// .method private constructor <init>()V
android::icu::impl::PluralRulesLoader::PluralRulesLoader()
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	// 3433    invoke-direct {p0}, Landroid/icu/text/PluralRules$Factory;-><init>()V
	cVar0 = std::make_shared<java::util::HashMap>();
	this->rulesIdToRules = cVar0;
	return;

}
// .method private checkBuildRulesIdMaps()V
void android::icu::impl::PluralRulesLoader::checkBuildRulesIdMaps()
{
	
	std::shared_ptr<android::icu::util::UResourceBundle> pluralb;
	std::shared_ptr<android::icu::util::UResourceBundle> localeb;
	std::shared_ptr<java::util::TreeMap> tempLocaleIdToCardinalRulesId;
	std::shared_ptr<java::util::HashMap> tempRulesIdToEquivalentULocale;
	int i;
	std::shared_ptr<android::icu::util::UResourceBundle> b;
	std::shared_ptr<java::lang::Object> id;
	std::shared_ptr<java::lang::Object> value;
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::TreeMap> tempLocaleIdToOrdinalRulesId;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_3:
	}
	catch (...){
		goto label_catchall_4b;
	}
	//    .catchall {:try_start_1 .. :try_end_3} :catchall_4b
	if ( !(this->localeIdToCardinalRulesId) )  
		goto label_cond_49;
	//    .local v2, "haveMap":Z
label_goto_6:
	this->monitor_exit();
	if ( haveMap )     
		goto label_cond_90;
	try {
	//label_try_start_9:
	pluralb = this->getPluralBundle();
	//    .local v6, "pluralb":Landroid/icu/util/UResourceBundle;
	localeb = pluralb->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("locales")));
	//    .local v5, "localeb":Landroid/icu/util/UResourceBundle;
	tempLocaleIdToCardinalRulesId = std::make_shared<java::util::TreeMap>();
	//    .local v7, "tempLocaleIdToCardinalRulesId":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	tempRulesIdToEquivalentULocale = std::make_shared<java::util::HashMap>();
	//    .local v9, "tempRulesIdToEquivalentULocale":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/util/ULocale;>;"
	i = 0x0;
	//    .local v3, "i":I
label_goto_1f:
	if ( i >= localeb->getSize() )
		goto label_cond_4e;
	b = localeb->get(i);
	//    .local v0, "b":Landroid/icu/util/UResourceBundle;
	id = b->getKey();
	//    .local v4, "id":Ljava/lang/String;
	value = b->getString()->intern();
	//    .local v10, "value":Ljava/lang/String;
	tempLocaleIdToCardinalRulesId->put(id, value);
	if ( tempRulesIdToEquivalentULocale->containsKey(value) )     
		goto label_cond_46;
	cVar0 = std::make_shared<android::icu::util::ULocale>(id);
	tempRulesIdToEquivalentULocale->put(value, cVar0);
	//label_try_end_46:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_77;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_9 .. :try_end_46} :catch_77
label_cond_46:
	i = ( i + 0x1);
	goto label_goto_1f;
	// 3555    .line 108
	// 3556    .end local v0    # "b":Landroid/icu/util/UResourceBundle;
	// 3557    .end local v2    # "haveMap":Z
	// 3558    .end local v3    # "i":I
	// 3559    .end local v4    # "id":Ljava/lang/String;
	// 3560    .end local v5    # "localeb":Landroid/icu/util/UResourceBundle;
	// 3561    .end local v6    # "pluralb":Landroid/icu/util/UResourceBundle;
	// 3562    .end local v7    # "tempLocaleIdToCardinalRulesId":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 3563    .end local v9    # "tempRulesIdToEquivalentULocale":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/util/ULocale;>;"
	// 3564    .end local v10    # "value":Ljava/lang/String;
label_cond_49:
	//    .restart local v2    # "haveMap":Z
	goto label_goto_6;
	// 3571    .line 107
	// 3572    .end local v2    # "haveMap":Z
label_catchall_4b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 3580    .line 136
	// 3581    .restart local v2    # "haveMap":Z
	// 3582    .restart local v3    # "i":I
	// 3583    .restart local v5    # "localeb":Landroid/icu/util/UResourceBundle;
	// 3584    .restart local v6    # "pluralb":Landroid/icu/util/UResourceBundle;
	// 3585    .restart local v7    # "tempLocaleIdToCardinalRulesId":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 3586    .restart local v9    # "tempRulesIdToEquivalentULocale":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/util/ULocale;>;"
label_cond_4e:
	try {
	//label_try_start_4e:
	localeb = pluralb->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("locales_ordinals")));
	tempLocaleIdToOrdinalRulesId = std::make_shared<java::util::TreeMap>();
	//    .local v8, "tempLocaleIdToOrdinalRulesId":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	i = 0x0;
label_goto_5b:
	if ( i >= localeb->getSize() )
		goto label_cond_84;
	b = localeb->get(i);
	//    .restart local v0    # "b":Landroid/icu/util/UResourceBundle;
	//    .restart local v4    # "id":Ljava/lang/String;
	//    .restart local v10    # "value":Ljava/lang/String;
	tempLocaleIdToOrdinalRulesId->put(b->getKey(), b->getString()->intern());
	//label_try_end_74:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_77;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_4e .. :try_end_74} :catch_77
	i = ( i + 0x1);
	goto label_goto_5b;
	// 3643    .line 144
	// 3644    .end local v0    # "b":Landroid/icu/util/UResourceBundle;
	// 3645    .end local v3    # "i":I
	// 3646    .end local v4    # "id":Ljava/lang/String;
	// 3647    .end local v5    # "localeb":Landroid/icu/util/UResourceBundle;
	// 3648    .end local v6    # "pluralb":Landroid/icu/util/UResourceBundle;
	// 3649    .end local v7    # "tempLocaleIdToCardinalRulesId":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 3650    .end local v8    # "tempLocaleIdToOrdinalRulesId":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 3651    .end local v9    # "tempRulesIdToEquivalentULocale":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/util/ULocale;>;"
	// 3652    .end local v10    # "value":Ljava/lang/String;
label_catch_77:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/util/MissingResourceException;
	//    .restart local v7    # "tempLocaleIdToCardinalRulesId":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v8    # "tempLocaleIdToOrdinalRulesId":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .end local v1    # "e":Ljava/util/MissingResourceException;
	//    .restart local v9    # "tempRulesIdToEquivalentULocale":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/util/ULocale;>;"
label_cond_84:
	this->monitor_enter();
	try {
	//label_try_start_85:
	if ( this->localeIdToCardinalRulesId )     
		goto label_cond_8f;
	this->localeIdToCardinalRulesId = java::util::Collections::emptyMap({const[class].FS-Param});
	this->localeIdToOrdinalRulesId = java::util::Collections::emptyMap({const[class].FS-Param});
	this->rulesIdToEquivalentULocale = java::util::Collections::emptyMap({const[class].FS-Param});
	//label_try_end_8f:
	}
	catch (...){
		goto label_catchall_91;
	}
	//    .catchall {:try_start_85 .. :try_end_8f} :catchall_91
label_cond_8f:
	this->monitor_exit();
	//    .end local v7    # "tempLocaleIdToCardinalRulesId":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .end local v8    # "tempLocaleIdToOrdinalRulesId":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .end local v9    # "tempRulesIdToEquivalentULocale":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/util/ULocale;>;"
label_cond_90:
	return;
	// 3707    .line 151
	// 3708    .restart local v7    # "tempLocaleIdToCardinalRulesId":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 3709    .restart local v8    # "tempLocaleIdToOrdinalRulesId":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 3710    .restart local v9    # "tempRulesIdToEquivalentULocale":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/util/ULocale;>;"
label_catchall_91:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private getLocaleIdToRulesIdMap(Landroid/icu/text/PluralRules$PluralType;)Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::impl::PluralRulesLoader::getLocaleIdToRulesIdMap(std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type)
{
	
	std::shared_ptr<java::util::Map> cVar0;
	
	//    .param p1, "type"    # Landroid/icu/text/PluralRules$PluralType;
	//    .annotation system Ldalvik/annotation/Signature;
	// 3723        value = {
	// 3724            "(",
	// 3725            "Landroid/icu/text/PluralRules$PluralType;",
	// 3726            ")",
	// 3727            "Ljava/util/Map",
	// 3728            "<",
	// 3729            "Ljava/lang/String;",
	// 3730            "Ljava/lang/String;",
	// 3731            ">;"
	// 3732        }
	// 3733    .end annotation
	this->checkBuildRulesIdMaps();
	if ( type != android::icu::text::PluralRules_S_PluralType::CARDINAL )
		goto label_cond_a;
	cVar0 = this->localeIdToCardinalRulesId;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = this->localeIdToOrdinalRulesId;
	goto label_goto_9;

}
// .method private getRulesIdToEquivalentULocaleMap()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,android::icu::util::ULocale>> android::icu::impl::PluralRulesLoader::getRulesIdToEquivalentULocaleMap()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3758        value = {
	// 3759            "()",
	// 3760            "Ljava/util/Map",
	// 3761            "<",
	// 3762            "Ljava/lang/String;",
	// 3763            "Landroid/icu/util/ULocale;",
	// 3764            ">;"
	// 3765        }
	// 3766    .end annotation
	this->checkBuildRulesIdMaps();
	return this->rulesIdToEquivalentULocale;

}
// .method public forLocale(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;
std::shared_ptr<android::icu::text::PluralRules> android::icu::impl::PluralRulesLoader::forLocale(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type)
{
	
	std::shared_ptr<java::lang::String> rulesId;
	std::shared_ptr<android::icu::text::PluralRules> rules;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "type"    # Landroid/icu/text/PluralRules$PluralType;
	rulesId = this->getRulesIdForLocale(locale, type);
	//    .local v1, "rulesId":Ljava/lang/String;
	if ( !(rulesId) )  
		goto label_cond_10;
	if ( rulesId->trim()->length() )     
		goto label_cond_13;
label_cond_10:
	return android::icu::text::PluralRules::DEFAULT;
	// 3811    .line 244
label_cond_13:
	rules = this->getRulesForRulesId(rulesId);
	//    .local v0, "rules":Landroid/icu/text/PluralRules;
	if ( rules )     
		goto label_cond_1b;
label_cond_1b:
	return rules;

}
// .method public getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::PluralRulesLoader::getAvailableULocales()
{
	
	std::shared_ptr<java::util::Set> keys;
	std::shared<std::vector<std::vector<android::icu::util::ULocale>>> locales;
	int n;
	std::shared_ptr<java::util::Iterator> iter;
	std::shared_ptr<java::lang::String> cVar0;
	
	keys = this->getLocaleIdToRulesIdMap(android::icu::text::PluralRules_S_PluralType::CARDINAL)->keySet();
	//    .local v1, "keys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	locales = std::make_shared<std::vector<std::vector<android::icu::util::ULocale>>>(keys->size());
	//    .local v2, "locales":[Landroid/icu/util/ULocale;
	n = 0x0;
	//    .local v3, "n":I
	iter = keys->iterator();
	//    .local v0, "iter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
label_goto_15:
	if ( !(iter->hasNext()) )  
		goto label_cond_2b;
	//    .end local v3    # "n":I
	//    .local v4, "n":I
	cVar0 = iter->next();
	cVar0->checkCast("java::lang::String");
	locales[n] = android::icu::util::ULocale::createCanonical(cVar0);
	n = ( n + 0x1);
	//    .end local v4    # "n":I
	//    .restart local v3    # "n":I
	goto label_goto_15;
	// 3893    .line 57
label_cond_2b:
	return locales;

}
// .method public getFunctionalEquivalent(Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::PluralRulesLoader::getFunctionalEquivalent(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<bool[]> isAvailable)
{
	
	std::shared_ptr<java::lang::String> rulesId;
	std::shared_ptr<android::icu::util::ULocale> result;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "isAvailable"    # [Z
	if ( !(isAvailable) )  
		goto label_cond_1a;
	if ( isAvailable->size() <= 0 )
		goto label_cond_1a;
	//    .local v1, "localeId":Ljava/lang/String;
	//    .local v0, "idMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	isAvailable[0x0] = this->getLocaleIdToRulesIdMap(android::icu::text::PluralRules_S_PluralType::CARDINAL)->containsKey(android::icu::util::ULocale::canonicalize(locale->getBaseName()));
	//    .end local v0    # "idMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .end local v1    # "localeId":Ljava/lang/String;
label_cond_1a:
	rulesId = this->getRulesIdForLocale(locale, android::icu::text::PluralRules_S_PluralType::CARDINAL);
	//    .local v3, "rulesId":Ljava/lang/String;
	if ( !(rulesId) )  
		goto label_cond_2c;
	if ( rulesId->trim()->length() )     
		goto label_cond_2f;
label_cond_2c:
	return android::icu::util::ULocale::ROOT;
	// 3968    .line 75
label_cond_2f:
	result = this->getRulesIdToEquivalentULocaleMap()->get(rulesId);
	result->checkCast("android::icu::util::ULocale");
	//    .local v2, "result":Landroid/icu/util/ULocale;
	if ( result )     
		goto label_cond_3e;
	return android::icu::util::ULocale::ROOT;
	// 3989    .line 81
label_cond_3e:
	return result;

}
// .method public getPluralBundle()Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::impl::PluralRulesLoader::getPluralBundle()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3997        value = {
	// 3998            Ljava/util/MissingResourceException;
	// 3999        }
	// 4000    .end annotation
	return android::icu::impl::ICUResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("plurals")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER, 0x1);

}
// .method public getPluralRanges(Landroid/icu/util/ULocale;)Landroid/icu/text/PluralRanges;
std::shared_ptr<android::icu::text::PluralRanges> android::icu::impl::PluralRulesLoader::getPluralRanges(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::lang::Object> localeId;
	std::shared_ptr<android::icu::text::PluralRanges> result;
	int ix;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	localeId = android::icu::util::ULocale::canonicalize(locale->getBaseName());
	//    .local v1, "localeId":Ljava/lang/String;
label_goto_8:
	result = android::icu::impl::PluralRulesLoader::localeIdToPluralRanges->get(localeId);
	result->checkCast("android::icu::text::PluralRanges");
	//    .local v2, "result":Landroid/icu/text/PluralRanges;
	if ( result )     
		goto label_cond_1e;
	ix = localeId->lastIndexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	//    .local v0, "ix":I
	if ( ix != -0x1 )
		goto label_cond_1f;
	//    .end local v0    # "ix":I
label_cond_1e:
	return result;
	// 4070    .line 276
	// 4071    .restart local v0    # "ix":I
label_cond_1f:
	localeId = localeId->substring(0x0, ix);
	goto label_goto_8;

}
// .method public getRulesForRulesId(Ljava/lang/String;)Landroid/icu/text/PluralRules;
std::shared_ptr<android::icu::text::PluralRules> android::icu::impl::PluralRulesLoader::getRulesForRulesId(std::shared_ptr<java::lang::String> rulesId)
{
	
	std::shared_ptr<android::icu::text::PluralRules> rules;
	std::shared_ptr<java::util::Map> cVar0;
	int hasRules;
	std::shared_ptr<java::util::Map> cVar1;
	std::shared_ptr<android::icu::util::UResourceBundle> setb;
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	std::shared_ptr<android::icu::util::UResourceBundle> b;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "rulesId"    # Ljava/lang/String;
	rules = 0x0;
	//    .local v6, "rules":Landroid/icu/text/PluralRules;
	cVar0 = this->rulesIdToRules;
	cVar0->monitor_enter();
	try {
	//label_try_start_4:
	hasRules = this->rulesIdToRules->containsKey(rulesId);
	//    .local v3, "hasRules":Z
	if ( !(hasRules) )  
		goto label_cond_14;
	rules = this->rulesIdToRules->get(rulesId);
	//    .end local v6    # "rules":Landroid/icu/text/PluralRules;
	rules->checkCast("android::icu::text::PluralRules");
	//label_try_end_14:
	}
	catch (...){
		goto label_catchall_55;
	}
	//    .catchall {:try_start_4 .. :try_end_14} :catchall_55
label_cond_14:
	cVar0->monitor_exit();
	if ( hasRules )     
		goto label_cond_74;
	try {
	//label_try_start_17:
	//    .local v5, "pluralb":Landroid/icu/util/UResourceBundle;
	//    .local v7, "rulesb":Landroid/icu/util/UResourceBundle;
	setb = this->getPluralBundle()->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("rules")))->get(rulesId);
	//    .local v9, "setb":Landroid/icu/util/UResourceBundle;
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v8, "sb":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v4, "i":I
label_goto_2c:
	if ( i >= setb->getSize() )
		goto label_cond_58;
	b = setb->get(i);
	//    .local v0, "b":Landroid/icu/util/UResourceBundle;
	if ( i <= 0 )
		goto label_cond_3e;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; ")));
label_cond_3e:
	sb->append(b->getKey());
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": ")));
	sb->append(b->getString());
	//label_try_end_52:
	}
	catch (java::text::ParseException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7e;
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_80;
	}
	//    .catch Ljava/text/ParseException; {:try_start_17 .. :try_end_52} :catch_7e
	//    .catch Ljava/util/MissingResourceException; {:try_start_17 .. :try_end_52} :catch_80
	i = ( i + 0x1);
	goto label_goto_2c;
	// 4206    .line 188
	// 4207    .end local v0    # "b":Landroid/icu/util/UResourceBundle;
	// 4208    .end local v3    # "hasRules":Z
	// 4209    .end local v4    # "i":I
	// 4210    .end local v5    # "pluralb":Landroid/icu/util/UResourceBundle;
	// 4211    .end local v7    # "rulesb":Landroid/icu/util/UResourceBundle;
	// 4212    .end local v8    # "sb":Ljava/lang/StringBuilder;
	// 4213    .end local v9    # "setb":Landroid/icu/util/UResourceBundle;
label_catchall_55:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 4221    .line 210
	// 4222    .restart local v3    # "hasRules":Z
	// 4223    .restart local v4    # "i":I
	// 4224    .restart local v5    # "pluralb":Landroid/icu/util/UResourceBundle;
	// 4225    .restart local v7    # "rulesb":Landroid/icu/util/UResourceBundle;
	// 4226    .restart local v8    # "sb":Ljava/lang/StringBuilder;
	// 4227    .restart local v9    # "setb":Landroid/icu/util/UResourceBundle;
label_cond_58:
	try {
	//label_try_start_58:
	//label_try_end_5f:
	}
	catch (java::text::ParseException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7e;
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_80;
	}
	//    .catch Ljava/text/ParseException; {:try_start_58 .. :try_end_5f} :catch_7e
	//    .catch Ljava/util/MissingResourceException; {:try_start_58 .. :try_end_5f} :catch_80
	rules = android::icu::text::PluralRules::parseDescription(sb->toString());
	//    .end local v4    # "i":I
	//    .end local v5    # "pluralb":Landroid/icu/util/UResourceBundle;
	//    .end local v7    # "rulesb":Landroid/icu/util/UResourceBundle;
	//    .end local v8    # "sb":Ljava/lang/StringBuilder;
	//    .end local v9    # "setb":Landroid/icu/util/UResourceBundle;
label_goto_60:
	cVar1 = this->rulesIdToRules;
	cVar1->monitor_enter();
	try {
	//label_try_start_63:
	if ( !(this->rulesIdToRules->containsKey(rulesId)) )  
		goto label_cond_75;
	rules = this->rulesIdToRules->get(rulesId);
	rules->checkCast("android::icu::text::PluralRules");
	//label_try_end_73:
	}
	catch (...){
		goto label_catchall_7b;
	}
	//    .catchall {:try_start_63 .. :try_end_73} :catchall_7b
label_goto_73:
	cVar1->monitor_exit();
label_cond_74:
	return rules;
	// 4280    .line 218
label_cond_75:
	try {
	//label_try_start_75:
	this->rulesIdToRules->put(rulesId, rules);
	//label_try_end_7a:
	}
	catch (...){
		goto label_catchall_7b;
	}
	//    .catchall {:try_start_75 .. :try_end_7a} :catchall_7b
	goto label_goto_73;
	// 4291    .line 214
label_catchall_7b:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;
	// 4299    .line 211
label_catch_7e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/text/ParseException;
	goto label_goto_60;
	// 4306    .line 212
	// 4307    .end local v1    # "e":Ljava/text/ParseException;
label_catch_80:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/util/MissingResourceException;
	goto label_goto_60;

}
// .method public getRulesIdForLocale(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::PluralRulesLoader::getRulesIdForLocale(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type)
{
	
	std::shared_ptr<java::lang::Object> localeId;
	std::shared_ptr<java::lang::String> rulesId;
	int ix;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "type"    # Landroid/icu/text/PluralRules$PluralType;
	//    .local v0, "idMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	localeId = android::icu::util::ULocale::canonicalize(locale->getBaseName());
	//    .local v2, "localeId":Ljava/lang/String;
	0x0;
label_goto_d:
	rulesId = this->getLocaleIdToRulesIdMap(type)->get(localeId);
	rulesId->checkCast("java::lang::String");
	//    .local v3, "rulesId":Ljava/lang/String;
	if ( rulesId )     
		goto label_cond_1f;
	ix = localeId->lastIndexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	//    .local v1, "ix":I
	if ( ix != -0x1 )
		goto label_cond_20;
	//    .end local v1    # "ix":I
label_cond_1f:
	return rulesId;
	// 4369    .line 175
	// 4370    .restart local v1    # "ix":I
label_cond_20:
	localeId = localeId->substring(0x0, ix);
	goto label_goto_d;

}
// .method public hasOverride(Landroid/icu/util/ULocale;)Z
bool android::icu::impl::PluralRulesLoader::hasOverride(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	return 0x0;

}
// .method public isPluralRangesAvailable(Landroid/icu/util/ULocale;)Z
bool android::icu::impl::PluralRulesLoader::isPluralRangesAvailable(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	bool cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	if ( this->getPluralRanges(locale) != android::icu::impl::PluralRulesLoader::UNKNOWN_RANGE )
		goto label_cond_a;
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}


