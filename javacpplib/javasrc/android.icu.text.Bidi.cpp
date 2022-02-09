// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Bidi.smali
#include "java2ctype.h"
#include "android.icu.impl.UBiDiProps.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.Bidi_S_BracketData.h"
#include "android.icu.text.Bidi_S_ImpTabPair.h"
#include "android.icu.text.Bidi_S_InsertPoints.h"
#include "android.icu.text.Bidi_S_IsoRun.h"
#include "android.icu.text.Bidi_S_Isolate.h"
#include "android.icu.text.Bidi_S_LevState.h"
#include "android.icu.text.Bidi_S_Opening.h"
#include "android.icu.text.Bidi_S_Point.h"
#include "android.icu.text.Bidi.h"
#include "android.icu.text.BidiClassifier.h"
#include "android.icu.text.BidiLine.h"
#include "android.icu.text.BidiRun.h"
#include "android.icu.text.BidiWriter.h"
#include "android.icu.text.UTF16.h"
#include "java.awt.font.NumericShaper.h"
#include "java.awt.font.TextAttribute.h"
#include "java.lang.Boolean.h"
#include "java.lang.Byte.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Integer.h"
#include "java.lang.InternalError.h"
#include "java.lang.Object.h"
#include "java.lang.OutOfMemoryError.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.reflect.Array.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.util.Arrays.h"

static android::icu::text::Bidi::AL = 0xdt;
static android::icu::text::Bidi::AN = 0x5t;
static android::icu::text::Bidi::B = 0x7t;
static android::icu::text::Bidi::BN = 0x12t;
static android::icu::text::Bidi::CLASS_DEFAULT = 0x17;
static android::icu::text::Bidi::CR = '\r';
static android::icu::text::Bidi::CS = 0x6t;
static android::icu::text::Bidi::DIRECTION_DEFAULT_LEFT_TO_RIGHT = 0x7e;
static android::icu::text::Bidi::DIRECTION_DEFAULT_RIGHT_TO_LEFT = 0x7f;
static android::icu::text::Bidi::DIRECTION_LEFT_TO_RIGHT = 0x0;
static android::icu::text::Bidi::DIRECTION_RIGHT_TO_LEFT = 0x1;
static android::icu::text::Bidi::DO_MIRRORING = 0x2s;
static android::icu::text::Bidi::DirPropFlagE;
static android::icu::text::Bidi::DirPropFlagLR;
static android::icu::text::Bidi::DirPropFlagMultiRuns;
static android::icu::text::Bidi::DirPropFlagO;
static android::icu::text::Bidi::EN = 0x2t;
static android::icu::text::Bidi::ENL = 0x17t;
static android::icu::text::Bidi::ENR = 0x18t;
static android::icu::text::Bidi::ES = 0x3t;
static android::icu::text::Bidi::ET = 0x4t;
static android::icu::text::Bidi::FIRSTALLOC = 0xa;
static android::icu::text::Bidi::FOUND_L;
static android::icu::text::Bidi::FOUND_R;
static android::icu::text::Bidi::FSI = 0x13t;
static android::icu::text::Bidi::IMPTABLEVELS_COLUMNS = 0x8;
static android::icu::text::Bidi::IMPTABLEVELS_RES = 0x7;
static android::icu::text::Bidi::IMPTABPROPS_COLUMNS = 0x10;
static android::icu::text::Bidi::IMPTABPROPS_RES = 0xf;
static android::icu::text::Bidi::INSERT_LRM_FOR_NUMERIC = 0x4s;
static android::icu::text::Bidi::ISOLATE = 0x100;
static android::icu::text::Bidi::KEEP_BASE_COMBINING = 0x1s;
static android::icu::text::Bidi::L = 0x0t;
static android::icu::text::Bidi::LEVEL_DEFAULT_LTR = 0x7et;
static android::icu::text::Bidi::LEVEL_DEFAULT_RTL = 0x7ft;
static android::icu::text::Bidi::LEVEL_OVERRIDE = -0x80t;
static android::icu::text::Bidi::LF = '\n';
static android::icu::text::Bidi::LOOKING_FOR_PDI = 0x3;
static android::icu::text::Bidi::LRE = 0xbt;
static android::icu::text::Bidi::LRI = 0x14t;
static android::icu::text::Bidi::LRM_AFTER = 0x2;
static android::icu::text::Bidi::LRM_BEFORE = 0x1;
static android::icu::text::Bidi::LRO = 0xct;
static android::icu::text::Bidi::LTR = 0x0t;
static android::icu::text::Bidi::MAP_NOWHERE = -0x1;
static android::icu::text::Bidi::MASK_BN_EXPLICIT;
static android::icu::text::Bidi::MASK_B_S;
static android::icu::text::Bidi::MASK_EMBEDDING;
static android::icu::text::Bidi::MASK_EXPLICIT;
static android::icu::text::Bidi::MASK_ISO;
static android::icu::text::Bidi::MASK_LTR;
static android::icu::text::Bidi::MASK_POSSIBLE_N;
static android::icu::text::Bidi::MASK_RTL;
static android::icu::text::Bidi::MASK_R_AL;
static android::icu::text::Bidi::MASK_STRONG_EN_AN;
static android::icu::text::Bidi::MASK_WS;
static android::icu::text::Bidi::MAX_EXPLICIT_LEVEL = 0x7dt;
static android::icu::text::Bidi::MIXED = 0x2t;
static android::icu::text::Bidi::NEUTRAL = 0x3t;
static android::icu::text::Bidi::NOT_SEEKING_STRONG = 0x0;
static android::icu::text::Bidi::NSM = 0x11t;
static android::icu::text::Bidi::ON = 0xat;
static android::icu::text::Bidi::OPTION_DEFAULT = 0x0;
static android::icu::text::Bidi::OPTION_INSERT_MARKS = 0x1;
static android::icu::text::Bidi::OPTION_REMOVE_CONTROLS = 0x2;
static android::icu::text::Bidi::OPTION_STREAMING = 0x4;
static android::icu::text::Bidi::OUTPUT_REVERSE = 0x10s;
static android::icu::text::Bidi::PDF = 0x10t;
static android::icu::text::Bidi::PDI = 0x16t;
static android::icu::text::Bidi::R = 0x1t;
static android::icu::text::Bidi::REMOVE_BIDI_CONTROLS = 0x8s;
static android::icu::text::Bidi::REORDER_COUNT = 0x7s;
static android::icu::text::Bidi::REORDER_DEFAULT = 0x0s;
static android::icu::text::Bidi::REORDER_GROUP_NUMBERS_WITH_R = 0x2s;
static android::icu::text::Bidi::REORDER_INVERSE_FOR_NUMBERS_SPECIAL = 0x6s;
static android::icu::text::Bidi::REORDER_INVERSE_LIKE_DIRECT = 0x5s;
static android::icu::text::Bidi::REORDER_INVERSE_NUMBERS_AS_L = 0x4s;
static android::icu::text::Bidi::REORDER_LAST_LOGICAL_TO_VISUAL = 0x1s;
static android::icu::text::Bidi::REORDER_NUMBERS_SPECIAL = 0x1s;
static android::icu::text::Bidi::REORDER_RUNS_ONLY = 0x3s;
static android::icu::text::Bidi::RLE = 0xet;
static android::icu::text::Bidi::RLI = 0x15t;
static android::icu::text::Bidi::RLM_AFTER = 0x8;
static android::icu::text::Bidi::RLM_BEFORE = 0x4;
static android::icu::text::Bidi::RLO = 0xft;
static android::icu::text::Bidi::RTL = 0x1t;
static android::icu::text::Bidi::S = 0x8t;
static android::icu::text::Bidi::SEEKING_STRONG_FOR_FSI = 0x2;
static android::icu::text::Bidi::SEEKING_STRONG_FOR_PARA = 0x1;
static android::icu::text::Bidi::SIMPLE_OPENINGS_COUNT = 0x14;
static android::icu::text::Bidi::SIMPLE_PARAS_COUNT = 0xa;
static android::icu::text::Bidi::WS = 0x9t;
static android::icu::text::Bidi::_AN = 0x3s;
static android::icu::text::Bidi::_B = 0x6s;
static android::icu::text::Bidi::_EN = 0x2s;
static android::icu::text::Bidi::_L = 0x0s;
static android::icu::text::Bidi::_ON = 0x4s;
static android::icu::text::Bidi::_R = 0x1s;
static android::icu::text::Bidi::_S = 0x5s;
static android::icu::text::Bidi::groupProp;
static android::icu::text::Bidi::impAct0;
static android::icu::text::Bidi::impAct1;
static android::icu::text::Bidi::impAct2;
static android::icu::text::Bidi::impAct3;
static android::icu::text::Bidi::impTabL_DEFAULT;
static android::icu::text::Bidi::impTabL_GROUP_NUMBERS_WITH_R;
static android::icu::text::Bidi::impTabL_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS;
static android::icu::text::Bidi::impTabL_INVERSE_LIKE_DIRECT_WITH_MARKS;
static android::icu::text::Bidi::impTabL_INVERSE_NUMBERS_AS_L;
static android::icu::text::Bidi::impTabL_NUMBERS_SPECIAL;
static android::icu::text::Bidi::impTabProps;
static android::icu::text::Bidi::impTabR_DEFAULT;
static android::icu::text::Bidi::impTabR_GROUP_NUMBERS_WITH_R;
static android::icu::text::Bidi::impTabR_INVERSE_LIKE_DIRECT;
static android::icu::text::Bidi::impTabR_INVERSE_LIKE_DIRECT_WITH_MARKS;
static android::icu::text::Bidi::impTabR_INVERSE_NUMBERS_AS_L;
static android::icu::text::Bidi::impTab_DEFAULT;
static android::icu::text::Bidi::impTab_GROUP_NUMBERS_WITH_R;
static android::icu::text::Bidi::impTab_INVERSE_FOR_NUMBERS_SPECIAL;
static android::icu::text::Bidi::impTab_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS;
static android::icu::text::Bidi::impTab_INVERSE_LIKE_DIRECT;
static android::icu::text::Bidi::impTab_INVERSE_LIKE_DIRECT_WITH_MARKS;
static android::icu::text::Bidi::impTab_INVERSE_NUMBERS_AS_L;
static android::icu::text::Bidi::impTab_NUMBERS_SPECIAL;
// .method static constructor <clinit>()V
void android::icu::text::Bidi::static_cinit()
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	unsigned char cVar2;
	unsigned char cVar3;
	unsigned char cVar4;
	std::shared<std::vector<int[]>> cVar5;
	std::shared<std::vector<int[]>> cVar6;
	std::shared<std::vector<int[]>> cVar7;
	std::shared<std::vector<short[]>> cVar8;
	std::shared<std::vector<short[][]>> cVar9;
	std::shared<std::vector<short[]>> cVar10;
	std::shared<std::vector<short[]>> cVar11;
	std::shared<std::vector<short[]>> cVar12;
	std::shared<std::vector<short[]>> cVar13;
	std::shared<std::vector<short[]>> cVar14;
	std::shared<std::vector<short[]>> cVar15;
	std::shared<std::vector<short[]>> cVar16;
	std::shared<std::vector<short[]>> cVar17;
	std::shared<std::vector<short[]>> cVar18;
	std::shared<std::vector<short[]>> cVar19;
	std::shared<std::vector<short[]>> cVar20;
	std::shared<std::vector<short[]>> cVar21;
	std::shared<std::vector<short[]>> cVar22;
	std::shared<std::vector<short[]>> cVar23;
	std::shared<std::vector<short[]>> cVar24;
	std::shared<std::vector<short[]>> cVar25;
	std::shared<std::vector<short[]>> cVar26;
	std::shared<std::vector<short[]>> cVar27;
	std::shared<std::vector<short[]>> cVar28;
	std::shared<std::vector<short[]>> cVar29;
	std::shared<std::vector<short[]>> cVar30;
	std::shared<std::vector<short[]>> cVar31;
	std::shared<std::vector<short[]>> cVar32;
	std::shared<std::vector<short[]>> cVar33;
	std::shared<std::vector<unsigned char[][]>> cVar34;
	std::shared<std::vector<unsigned char[]>> cVar35;
	std::shared<std::vector<unsigned char[]>> cVar36;
	std::shared<std::vector<unsigned char[]>> cVar37;
	std::shared<std::vector<unsigned char[]>> cVar38;
	std::shared<std::vector<unsigned char[]>> cVar39;
	std::shared<std::vector<unsigned char[]>> cVar40;
	std::shared<std::vector<unsigned char[][]>> cVar41;
	std::shared<std::vector<unsigned char[]>> cVar42;
	std::shared<std::vector<unsigned char[]>> cVar43;
	std::shared<std::vector<unsigned char[]>> cVar44;
	std::shared<std::vector<unsigned char[]>> cVar45;
	std::shared<std::vector<unsigned char[]>> cVar46;
	std::shared<std::vector<unsigned char[]>> cVar47;
	std::shared<std::vector<short[]>> cVar48;
	std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> cVar49;
	std::shared<std::vector<unsigned char[][]>> cVar50;
	std::shared<std::vector<unsigned char[]>> cVar51;
	std::shared<std::vector<unsigned char[]>> cVar52;
	std::shared<std::vector<unsigned char[]>> cVar53;
	std::shared<std::vector<unsigned char[]>> cVar54;
	std::shared<std::vector<unsigned char[]>> cVar55;
	std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> cVar56;
	std::shared<std::vector<unsigned char[][]>> cVar57;
	std::shared<std::vector<unsigned char[]>> cVar58;
	std::shared<std::vector<unsigned char[]>> cVar59;
	std::shared<std::vector<unsigned char[]>> cVar60;
	std::shared<std::vector<unsigned char[]>> cVar61;
	std::shared<std::vector<unsigned char[]>> cVar62;
	std::shared<std::vector<unsigned char[]>> cVar63;
	std::shared<std::vector<unsigned char[][]>> cVar64;
	std::shared<std::vector<unsigned char[]>> cVar65;
	std::shared<std::vector<unsigned char[]>> cVar66;
	std::shared<std::vector<unsigned char[]>> cVar67;
	std::shared<std::vector<unsigned char[]>> cVar68;
	std::shared<std::vector<unsigned char[]>> cVar69;
	std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> cVar70;
	std::shared<std::vector<unsigned char[][]>> cVar71;
	std::shared<std::vector<unsigned char[]>> cVar72;
	std::shared<std::vector<unsigned char[]>> cVar73;
	std::shared<std::vector<unsigned char[]>> cVar74;
	std::shared<std::vector<unsigned char[]>> cVar75;
	std::shared<std::vector<unsigned char[]>> cVar76;
	std::shared<std::vector<unsigned char[]>> cVar77;
	std::shared<std::vector<unsigned char[][]>> cVar78;
	std::shared<std::vector<unsigned char[]>> cVar79;
	std::shared<std::vector<unsigned char[]>> cVar80;
	std::shared<std::vector<unsigned char[]>> cVar81;
	std::shared<std::vector<unsigned char[]>> cVar82;
	std::shared<std::vector<unsigned char[]>> cVar83;
	std::shared<std::vector<unsigned char[]>> cVar84;
	std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> cVar85;
	std::shared<std::vector<unsigned char[][]>> cVar86;
	std::shared<std::vector<unsigned char[]>> cVar87;
	std::shared<std::vector<unsigned char[]>> cVar88;
	std::shared<std::vector<unsigned char[]>> cVar89;
	std::shared<std::vector<unsigned char[]>> cVar90;
	std::shared<std::vector<unsigned char[]>> cVar91;
	std::shared<std::vector<unsigned char[]>> cVar92;
	std::shared<std::vector<unsigned char[]>> cVar93;
	std::shared<std::vector<short[]>> cVar94;
	std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> cVar95;
	std::shared<std::vector<unsigned char[][]>> cVar96;
	std::shared<std::vector<unsigned char[]>> cVar97;
	std::shared<std::vector<unsigned char[]>> cVar98;
	std::shared<std::vector<unsigned char[]>> cVar99;
	std::shared<std::vector<unsigned char[]>> cVar100;
	std::shared<std::vector<unsigned char[]>> cVar101;
	std::shared<std::vector<unsigned char[]>> cVar102;
	std::shared<std::vector<unsigned char[]>> cVar103;
	std::shared<std::vector<unsigned char[][]>> cVar104;
	std::shared<std::vector<unsigned char[]>> cVar105;
	std::shared<std::vector<unsigned char[]>> cVar106;
	std::shared<std::vector<unsigned char[]>> cVar107;
	std::shared<std::vector<unsigned char[]>> cVar108;
	std::shared<std::vector<unsigned char[]>> cVar109;
	std::shared<std::vector<unsigned char[]>> cVar110;
	std::shared<std::vector<unsigned char[]>> cVar111;
	std::shared<std::vector<short[]>> cVar112;
	std::shared<std::vector<short[]>> cVar113;
	std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> cVar114;
	std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> cVar115;
	std::shared<std::vector<unsigned char[][]>> cVar116;
	std::shared<std::vector<unsigned char[]>> cVar117;
	std::shared<std::vector<unsigned char[]>> cVar118;
	std::shared<std::vector<unsigned char[]>> cVar119;
	std::shared<std::vector<unsigned char[]>> cVar120;
	std::shared<std::vector<unsigned char[]>> cVar121;
	std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> cVar122;
	
	cVar0 = 0x2;
	cVar1 = 0x0;
	cVar2 = 0x1;
	cVar3 = 0x10;
	cVar4 = 0x8;
	android::icu::text::Bidi::FOUND_L = (unsigned char)(android::icu::text::Bidi::DirPropFlag(cVar1));
	android::icu::text::Bidi::FOUND_R = (unsigned char)(android::icu::text::Bidi::DirPropFlag(cVar2));
	android::icu::text::Bidi::DirPropFlagMultiRuns = android::icu::text::Bidi::DirPropFlag(0x1f);
	cVar5 = std::make_shared<std::vector<int[]>>(cVar0);
	cVar5[cVar1] = android::icu::text::Bidi::DirPropFlag(cVar1);
	cVar5[cVar2] = android::icu::text::Bidi::DirPropFlag(cVar2);
	android::icu::text::Bidi::DirPropFlagLR = cVar5;
	cVar6 = std::make_shared<std::vector<int[]>>(cVar0);
	cVar6[cVar1] = android::icu::text::Bidi::DirPropFlag(0xb);
	cVar6[cVar2] = android::icu::text::Bidi::DirPropFlag(0xe);
	android::icu::text::Bidi::DirPropFlagE = cVar6;
	cVar7 = std::make_shared<std::vector<int[]>>(cVar0);
	cVar7[cVar1] = android::icu::text::Bidi::DirPropFlag(0xc);
	cVar7[cVar2] = android::icu::text::Bidi::DirPropFlag(0xf);
	android::icu::text::Bidi::DirPropFlagO = cVar7;
	android::icu::text::Bidi::MASK_LTR = (((((((android::icu::text::Bidi::DirPropFlag(cVar1) |  android::icu::text::Bidi::DirPropFlag(cVar0)) |  android::icu::text::Bidi::DirPropFlag(0x17)) |  android::icu::text::Bidi::DirPropFlag(0x18)) |  android::icu::text::Bidi::DirPropFlag(0x5)) |  android::icu::text::Bidi::DirPropFlag(0xb)) |  android::icu::text::Bidi::DirPropFlag(0xc)) |  android::icu::text::Bidi::DirPropFlag(0x14));
	android::icu::text::Bidi::MASK_RTL = ((((android::icu::text::Bidi::DirPropFlag(cVar2) |  android::icu::text::Bidi::DirPropFlag(0xd)) |  android::icu::text::Bidi::DirPropFlag(0xe)) |  android::icu::text::Bidi::DirPropFlag(0xf)) |  android::icu::text::Bidi::DirPropFlag(0x15));
	android::icu::text::Bidi::MASK_R_AL = (android::icu::text::Bidi::DirPropFlag(cVar2) |  android::icu::text::Bidi::DirPropFlag(0xd));
	android::icu::text::Bidi::MASK_STRONG_EN_AN = ((((android::icu::text::Bidi::DirPropFlag(cVar1) |  android::icu::text::Bidi::DirPropFlag(cVar2)) |  android::icu::text::Bidi::DirPropFlag(0xd)) |  android::icu::text::Bidi::DirPropFlag(cVar0)) |  android::icu::text::Bidi::DirPropFlag(0x5));
	android::icu::text::Bidi::MASK_EXPLICIT = ((((android::icu::text::Bidi::DirPropFlag(0xb) |  android::icu::text::Bidi::DirPropFlag(0xc)) |  android::icu::text::Bidi::DirPropFlag(0xe)) |  android::icu::text::Bidi::DirPropFlag(0xf)) |  android::icu::text::Bidi::DirPropFlag(cVar3));
	android::icu::text::Bidi::MASK_BN_EXPLICIT = (android::icu::text::Bidi::DirPropFlag(0x12) |  android::icu::text::Bidi::MASK_EXPLICIT);
	android::icu::text::Bidi::MASK_ISO = (((android::icu::text::Bidi::DirPropFlag(0x14) |  android::icu::text::Bidi::DirPropFlag(0x15)) |  android::icu::text::Bidi::DirPropFlag(0x13)) |  android::icu::text::Bidi::DirPropFlag(0x16));
	android::icu::text::Bidi::MASK_B_S = (android::icu::text::Bidi::DirPropFlag(0x7) |  android::icu::text::Bidi::DirPropFlag(cVar4));
	android::icu::text::Bidi::MASK_WS = (((android::icu::text::Bidi::MASK_B_S |  android::icu::text::Bidi::DirPropFlag(0x9)) |  android::icu::text::Bidi::MASK_BN_EXPLICIT) |  android::icu::text::Bidi::MASK_ISO);
	android::icu::text::Bidi::MASK_POSSIBLE_N = ((((android::icu::text::Bidi::DirPropFlag(0xa) |  android::icu::text::Bidi::DirPropFlag(0x6)) |  android::icu::text::Bidi::DirPropFlag(0x3)) |  android::icu::text::Bidi::DirPropFlag(0x4)) |  android::icu::text::Bidi::MASK_WS);
	android::icu::text::Bidi::MASK_EMBEDDING = (android::icu::text::Bidi::DirPropFlag(0x11) |  android::icu::text::Bidi::MASK_POSSIBLE_N);
	cVar8 = std::make_shared<std::vector<short[]>>(0x19);
	?;
	android::icu::text::Bidi::groupProp = cVar8;
	cVar9 = std::make_shared<std::vector<short[][]>>(0x18);
	cVar10 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[cVar1] = cVar10;
	cVar11 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[cVar2] = cVar11;
	cVar12 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[cVar0] = cVar12;
	cVar13 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0x3] = cVar13;
	cVar14 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0x4] = cVar14;
	cVar15 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0x5] = cVar15;
	cVar16 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0x6] = cVar16;
	cVar17 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0x7] = cVar17;
	cVar18 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[cVar4] = cVar18;
	cVar19 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0x9] = cVar19;
	cVar20 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0xa] = cVar20;
	cVar21 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0xb] = cVar21;
	cVar22 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0xc] = cVar22;
	cVar23 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0xd] = cVar23;
	cVar24 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0xe] = cVar24;
	cVar25 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0xf] = cVar25;
	cVar26 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[cVar3] = cVar26;
	cVar27 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0x11] = cVar27;
	cVar28 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0x12] = cVar28;
	cVar29 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0x13] = cVar29;
	cVar30 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0x14] = cVar30;
	cVar31 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0x15] = cVar31;
	cVar32 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0x16] = cVar32;
	cVar33 = std::make_shared<std::vector<short[]>>(cVar3);
	?;
	cVar9[0x17] = cVar33;
	android::icu::text::Bidi::impTabProps = cVar9;
	cVar34 = std::make_shared<std::vector<unsigned char[][]>>(0x6);
	cVar35 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar34[cVar1] = cVar35;
	cVar36 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar34[cVar2] = cVar36;
	cVar37 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar34[cVar0] = cVar37;
	cVar38 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar34[0x3] = cVar38;
	cVar39 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar34[0x4] = cVar39;
	cVar40 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar34[0x5] = cVar40;
	android::icu::text::Bidi::impTabL_DEFAULT = cVar34;
	cVar41 = std::make_shared<std::vector<unsigned char[][]>>(0x6);
	cVar42 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar41[cVar1] = cVar42;
	cVar43 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar41[cVar2] = cVar43;
	cVar44 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar41[cVar0] = cVar44;
	cVar45 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar41[0x3] = cVar45;
	cVar46 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar41[0x4] = cVar46;
	cVar47 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar41[0x5] = cVar47;
	android::icu::text::Bidi::impTabR_DEFAULT = cVar41;
	cVar48 = std::make_shared<std::vector<short[]>>(0x5);
	?;
	android::icu::text::Bidi::impAct0 = cVar48;
	cVar49 = std::make_shared<android::icu::text::Bidi_S_ImpTabPair>(android::icu::text::Bidi::impTabL_DEFAULT, android::icu::text::Bidi::impTabR_DEFAULT, android::icu::text::Bidi::impAct0, android::icu::text::Bidi::impAct0);
	android::icu::text::Bidi::impTab_DEFAULT = cVar49;
	cVar50 = std::make_shared<std::vector<unsigned char[][]>>(0x5);
	cVar51 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar50[cVar1] = cVar51;
	cVar52 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar50[cVar2] = cVar52;
	cVar53 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar50[cVar0] = cVar53;
	cVar54 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar50[0x3] = cVar54;
	cVar55 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar50[0x4] = cVar55;
	android::icu::text::Bidi::impTabL_NUMBERS_SPECIAL = cVar50;
	cVar56 = std::make_shared<android::icu::text::Bidi_S_ImpTabPair>(android::icu::text::Bidi::impTabL_NUMBERS_SPECIAL, android::icu::text::Bidi::impTabR_DEFAULT, android::icu::text::Bidi::impAct0, android::icu::text::Bidi::impAct0);
	android::icu::text::Bidi::impTab_NUMBERS_SPECIAL = cVar56;
	cVar57 = std::make_shared<std::vector<unsigned char[][]>>(0x6);
	cVar58 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar57[cVar1] = cVar58;
	cVar59 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar57[cVar2] = cVar59;
	cVar60 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar57[cVar0] = cVar60;
	cVar61 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar57[0x3] = cVar61;
	cVar62 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar57[0x4] = cVar62;
	cVar63 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar57[0x5] = cVar63;
	android::icu::text::Bidi::impTabL_GROUP_NUMBERS_WITH_R = cVar57;
	cVar64 = std::make_shared<std::vector<unsigned char[][]>>(0x5);
	cVar65 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar64[cVar1] = cVar65;
	cVar66 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar64[cVar2] = cVar66;
	cVar67 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar64[cVar0] = cVar67;
	cVar68 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar64[0x3] = cVar68;
	cVar69 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar64[0x4] = cVar69;
	android::icu::text::Bidi::impTabR_GROUP_NUMBERS_WITH_R = cVar64;
	cVar70 = std::make_shared<android::icu::text::Bidi_S_ImpTabPair>(android::icu::text::Bidi::impTabL_GROUP_NUMBERS_WITH_R, android::icu::text::Bidi::impTabR_GROUP_NUMBERS_WITH_R, android::icu::text::Bidi::impAct0, android::icu::text::Bidi::impAct0);
	android::icu::text::Bidi::impTab_GROUP_NUMBERS_WITH_R = cVar70;
	cVar71 = std::make_shared<std::vector<unsigned char[][]>>(0x6);
	cVar72 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar71[cVar1] = cVar72;
	cVar73 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar71[cVar2] = cVar73;
	cVar74 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar71[cVar0] = cVar74;
	cVar75 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar71[0x3] = cVar75;
	cVar76 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar71[0x4] = cVar76;
	cVar77 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar71[0x5] = cVar77;
	android::icu::text::Bidi::impTabL_INVERSE_NUMBERS_AS_L = cVar71;
	cVar78 = std::make_shared<std::vector<unsigned char[][]>>(0x6);
	cVar79 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar78[cVar1] = cVar79;
	cVar80 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar78[cVar2] = cVar80;
	cVar81 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar78[cVar0] = cVar81;
	cVar82 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar78[0x3] = cVar82;
	cVar83 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar78[0x4] = cVar83;
	cVar84 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar78[0x5] = cVar84;
	android::icu::text::Bidi::impTabR_INVERSE_NUMBERS_AS_L = cVar78;
	cVar85 = std::make_shared<android::icu::text::Bidi_S_ImpTabPair>(android::icu::text::Bidi::impTabL_INVERSE_NUMBERS_AS_L, android::icu::text::Bidi::impTabR_INVERSE_NUMBERS_AS_L, android::icu::text::Bidi::impAct0, android::icu::text::Bidi::impAct0);
	android::icu::text::Bidi::impTab_INVERSE_NUMBERS_AS_L = cVar85;
	cVar86 = std::make_shared<std::vector<unsigned char[][]>>(0x7);
	cVar87 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar86[cVar1] = cVar87;
	cVar88 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar86[cVar2] = cVar88;
	cVar89 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar86[cVar0] = cVar89;
	cVar90 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar86[0x3] = cVar90;
	cVar91 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar86[0x4] = cVar91;
	cVar92 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar86[0x5] = cVar92;
	cVar93 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar86[0x6] = cVar93;
	android::icu::text::Bidi::impTabR_INVERSE_LIKE_DIRECT = cVar86;
	cVar94 = std::make_shared<std::vector<short[]>>(0x4);
	?;
	android::icu::text::Bidi::impAct1 = cVar94;
	cVar95 = std::make_shared<android::icu::text::Bidi_S_ImpTabPair>(android::icu::text::Bidi::impTabL_DEFAULT, android::icu::text::Bidi::impTabR_INVERSE_LIKE_DIRECT, android::icu::text::Bidi::impAct0, android::icu::text::Bidi::impAct1);
	android::icu::text::Bidi::impTab_INVERSE_LIKE_DIRECT = cVar95;
	cVar96 = std::make_shared<std::vector<unsigned char[][]>>(0x7);
	cVar97 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar96[cVar1] = cVar97;
	cVar98 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar96[cVar2] = cVar98;
	cVar99 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar96[cVar0] = cVar99;
	cVar100 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar96[0x3] = cVar100;
	cVar101 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar96[0x4] = cVar101;
	cVar102 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar96[0x5] = cVar102;
	cVar103 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar96[0x6] = cVar103;
	android::icu::text::Bidi::impTabL_INVERSE_LIKE_DIRECT_WITH_MARKS = cVar96;
	cVar104 = std::make_shared<std::vector<unsigned char[][]>>(0x7);
	cVar105 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar104[cVar1] = cVar105;
	cVar106 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar104[cVar2] = cVar106;
	cVar107 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar104[cVar0] = cVar107;
	cVar108 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar104[0x3] = cVar108;
	cVar109 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar104[0x4] = cVar109;
	cVar110 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar104[0x5] = cVar110;
	cVar111 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar104[0x6] = cVar111;
	android::icu::text::Bidi::impTabR_INVERSE_LIKE_DIRECT_WITH_MARKS = cVar104;
	cVar112 = std::make_shared<std::vector<short[]>>(0x7);
	?;
	android::icu::text::Bidi::impAct2 = cVar112;
	cVar113 = std::make_shared<std::vector<short[]>>(0x6);
	?;
	android::icu::text::Bidi::impAct3 = cVar113;
	cVar114 = std::make_shared<android::icu::text::Bidi_S_ImpTabPair>(android::icu::text::Bidi::impTabL_INVERSE_LIKE_DIRECT_WITH_MARKS, android::icu::text::Bidi::impTabR_INVERSE_LIKE_DIRECT_WITH_MARKS, android::icu::text::Bidi::impAct2, android::icu::text::Bidi::impAct3);
	android::icu::text::Bidi::impTab_INVERSE_LIKE_DIRECT_WITH_MARKS = cVar114;
	cVar115 = std::make_shared<android::icu::text::Bidi_S_ImpTabPair>(android::icu::text::Bidi::impTabL_NUMBERS_SPECIAL, android::icu::text::Bidi::impTabR_INVERSE_LIKE_DIRECT, android::icu::text::Bidi::impAct0, android::icu::text::Bidi::impAct1);
	android::icu::text::Bidi::impTab_INVERSE_FOR_NUMBERS_SPECIAL = cVar115;
	cVar116 = std::make_shared<std::vector<unsigned char[][]>>(0x5);
	cVar117 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar116[cVar1] = cVar117;
	cVar118 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar116[cVar2] = cVar118;
	cVar119 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar116[cVar0] = cVar119;
	cVar120 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar116[0x3] = cVar120;
	cVar121 = std::make_shared<std::vector<unsigned char[]>>(cVar4);
	?;
	cVar116[0x4] = cVar121;
	android::icu::text::Bidi::impTabL_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS = cVar116;
	cVar122 = std::make_shared<android::icu::text::Bidi_S_ImpTabPair>(android::icu::text::Bidi::impTabL_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS, android::icu::text::Bidi::impTabR_INVERSE_LIKE_DIRECT_WITH_MARKS, android::icu::text::Bidi::impAct2, android::icu::text::Bidi::impAct3);
	android::icu::text::Bidi::impTab_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS = cVar122;
	return;
	// 1796    .line 2741
	// 1797    nop
	// 1799    :array_4fc
	// 1800    .array-data 2
	// 1801        0x0s
	// 1802        0x1s
	// 1803        0x2s
	// 1804        0x7s
	// 1805        0x8s
	// 1806        0x3s
	// 1807        0x9s
	// 1808        0x6s
	// 1809        0x5s
	// 1810        0x4s
	// 1811        0x4s
	// 1812        0xas
	// 1813        0xas
	// 1814        0xcs
	// 1815        0xas
	// 1816        0xas
	// 1817        0xas
	// 1818        0xbs
	// 1819        0xas
	// 1820        0x4s
	// 1821        0x4s
	// 1822        0x4s
	// 1823        0x4s
	// 1824        0xds
	// 1825        0xes
	// 1826    .end array-data
	// 1828    .line 2790
	// 1829    nop
	// 1831    :array_51a
	// 1832    .array-data 2
	// 1833        0x1s
	// 1834        0x2s
	// 1835        0x4s
	// 1836        0x5s
	// 1837        0x7s
	// 1838        0xfs
	// 1839        0x11s
	// 1840        0x7s
	// 1841        0x9s
	// 1842        0x7s
	// 1843        0x0s
	// 1844        0x7s
	// 1845        0x3s
	// 1846        0x12s
	// 1847        0x15s
	// 1848        0x4s
	// 1849    .end array-data
	// 1851    .line 2791
	// 1852    :array_52e
	// 1853    .array-data 2
	// 1854        0x1s
	// 1855        0x22s
	// 1856        0x24s
	// 1857        0x25s
	// 1858        0x27s
	// 1859        0x2fs
	// 1860        0x31s
	// 1861        0x27s
	// 1862        0x29s
	// 1863        0x27s
	// 1864        0x1s
	// 1865        0x1s
	// 1866        0x23s
	// 1867        0x32s
	// 1868        0x35s
	// 1869        0x0s
	// 1870    .end array-data
	// 1872    .line 2792
	// 1873    :array_542
	// 1874    .array-data 2
	// 1875        0x21s
	// 1876        0x2s
	// 1877        0x24s
	// 1878        0x25s
	// 1879        0x27s
	// 1880        0x2fs
	// 1881        0x31s
	// 1882        0x27s
	// 1883        0x29s
	// 1884        0x27s
	// 1885        0x2s
	// 1886        0x2s
	// 1887        0x23s
	// 1888        0x32s
	// 1889        0x35s
	// 1890        0x1s
	// 1891    .end array-data
	// 1893    .line 2793
	// 1894    :array_556
	// 1895    .array-data 2
	// 1896        0x21s
	// 1897        0x22s
	// 1898        0x26s
	// 1899        0x26s
	// 1900        0x28s
	// 1901        0x30s
	// 1902        0x31s
	// 1903        0x28s
	// 1904        0x28s
	// 1905        0x28s
	// 1906        0x3s
	// 1907        0x3s
	// 1908        0x3s
	// 1909        0x32s
	// 1910        0x35s
	// 1911        0x1s
	// 1912    .end array-data
	// 1914    .line 2794
	// 1915    :array_56a
	// 1916    .array-data 2
	// 1917        0x21s
	// 1918        0x22s
	// 1919        0x4s
	// 1920        0x25s
	// 1921        0x27s
	// 1922        0x2fs
	// 1923        0x31s
	// 1924        0x4as
	// 1925        0xbs
	// 1926        0x4as
	// 1927        0x4s
	// 1928        0x4s
	// 1929        0x23s
	// 1930        0x12s
	// 1931        0x15s
	// 1932        0x2s
	// 1933    .end array-data
	// 1935    .line 2795
	// 1936    :array_57e
	// 1937    .array-data 2
	// 1938        0x21s
	// 1939        0x22s
	// 1940        0x24s
	// 1941        0x5s
	// 1942        0x27s
	// 1943        0x2fs
	// 1944        0x31s
	// 1945        0x27s
	// 1946        0x29s
	// 1947        0x4cs
	// 1948        0x5s
	// 1949        0x5s
	// 1950        0x23s
	// 1951        0x32s
	// 1952        0x35s
	// 1953        0x3s
	// 1954    .end array-data
	// 1956    .line 2796
	// 1957    :array_592
	// 1958    .array-data 2
	// 1959        0x21s
	// 1960        0x22s
	// 1961        0x6s
	// 1962        0x6s
	// 1963        0x28s
	// 1964        0x30s
	// 1965        0x31s
	// 1966        0x28s
	// 1967        0x28s
	// 1968        0x4ds
	// 1969        0x6s
	// 1970        0x6s
	// 1971        0x23s
	// 1972        0x12s
	// 1973        0x15s
	// 1974        0x3s
	// 1975    .end array-data
	// 1977    .line 2797
	// 1978    :array_5a6
	// 1979    .array-data 2
	// 1980        0x21s
	// 1981        0x22s
	// 1982        0x24s
	// 1983        0x25s
	// 1984        0x7s
	// 1985        0x2fs
	// 1986        0x31s
	// 1987        0x7s
	// 1988        0x4es
	// 1989        0x7s
	// 1990        0x7s
	// 1991        0x7s
	// 1992        0x23s
	// 1993        0x32s
	// 1994        0x35s
	// 1995        0x4s
	// 1996    .end array-data
	// 1998    .line 2798
	// 1999    :array_5ba
	// 2000    .array-data 2
	// 2001        0x21s
	// 2002        0x22s
	// 2003        0x26s
	// 2004        0x26s
	// 2005        0x8s
	// 2006        0x30s
	// 2007        0x31s
	// 2008        0x8s
	// 2009        0x8s
	// 2010        0x8s
	// 2011        0x8s
	// 2012        0x8s
	// 2013        0x23s
	// 2014        0x32s
	// 2015        0x35s
	// 2016        0x4s
	// 2017    .end array-data
	// 2019    .line 2799
	// 2020    :array_5ce
	// 2021    .array-data 2
	// 2022        0x21s
	// 2023        0x22s
	// 2024        0x4s
	// 2025        0x25s
	// 2026        0x7s
	// 2027        0x2fs
	// 2028        0x31s
	// 2029        0x7s
	// 2030        0x9s
	// 2031        0x7s
	// 2032        0x9s
	// 2033        0x9s
	// 2034        0x23s
	// 2035        0x12s
	// 2036        0x15s
	// 2037        0x4s
	// 2038    .end array-data
	// 2040    .line 2800
	// 2041    :array_5e2
	// 2042    .array-data 2
	// 2043        0x61s
	// 2044        0x62s
	// 2045        0x4s
	// 2046        0x65s
	// 2047        0x87s
	// 2048        0x6fs
	// 2049        0x71s
	// 2050        0x87s
	// 2051        0x8es
	// 2052        0x87s
	// 2053        0xas
	// 2054        0x87s
	// 2055        0x63s
	// 2056        0x12s
	// 2057        0x15s
	// 2058        0x2s
	// 2059    .end array-data
	// 2061    .line 2801
	// 2062    :array_5f6
	// 2063    .array-data 2
	// 2064        0x21s
	// 2065        0x22s
	// 2066        0x4s
	// 2067        0x25s
	// 2068        0x27s
	// 2069        0x2fs
	// 2070        0x31s
	// 2071        0x27s
	// 2072        0xbs
	// 2073        0x27s
	// 2074        0xbs
	// 2075        0xbs
	// 2076        0x23s
	// 2077        0x12s
	// 2078        0x15s
	// 2079        0x2s
	// 2080    .end array-data
	// 2082    .line 2802
	// 2083    :array_60a
	// 2084    .array-data 2
	// 2085        0x61s
	// 2086        0x62s
	// 2087        0x64s
	// 2088        0x5s
	// 2089        0x87s
	// 2090        0x6fs
	// 2091        0x71s
	// 2092        0x87s
	// 2093        0x8es
	// 2094        0x87s
	// 2095        0xcs
	// 2096        0x87s
	// 2097        0x63s
	// 2098        0x72s
	// 2099        0x75s
	// 2100        0x3s
	// 2101    .end array-data
	// 2103    .line 2803
	// 2104    :array_61e
	// 2105    .array-data 2
	// 2106        0x61s
	// 2107        0x62s
	// 2108        0x6s
	// 2109        0x6s
	// 2110        0x88s
	// 2111        0x70s
	// 2112        0x71s
	// 2113        0x88s
	// 2114        0x88s
	// 2115        0x88s
	// 2116        0xds
	// 2117        0x88s
	// 2118        0x63s
	// 2119        0x12s
	// 2120        0x15s
	// 2121        0x3s
	// 2122    .end array-data
	// 2124    .line 2804
	// 2125    :array_632
	// 2126    .array-data 2
	// 2127        0x21s
	// 2128        0x22s
	// 2129        0x84s
	// 2130        0x25s
	// 2131        0x7s
	// 2132        0x2fs
	// 2133        0x31s
	// 2134        0x7s
	// 2135        0xes
	// 2136        0x7s
	// 2137        0xes
	// 2138        0xes
	// 2139        0x23s
	// 2140        0x92s
	// 2141        0x95s
	// 2142        0x4s
	// 2143    .end array-data
	// 2145    .line 2805
	// 2146    :array_646
	// 2147    .array-data 2
	// 2148        0x21s
	// 2149        0x22s
	// 2150        0x24s
	// 2151        0x25s
	// 2152        0x27s
	// 2153        0xfs
	// 2154        0x31s
	// 2155        0x27s
	// 2156        0x29s
	// 2157        0x27s
	// 2158        0xfs
	// 2159        0x27s
	// 2160        0x23s
	// 2161        0x32s
	// 2162        0x35s
	// 2163        0x5s
	// 2164    .end array-data
	// 2166    .line 2806
	// 2167    :array_65a
	// 2168    .array-data 2
	// 2169        0x21s
	// 2170        0x22s
	// 2171        0x26s
	// 2172        0x26s
	// 2173        0x28s
	// 2174        0x10s
	// 2175        0x31s
	// 2176        0x28s
	// 2177        0x28s
	// 2178        0x28s
	// 2179        0x10s
	// 2180        0x28s
	// 2181        0x23s
	// 2182        0x32s
	// 2183        0x35s
	// 2184        0x5s
	// 2185    .end array-data
	// 2187    .line 2807
	// 2188    :array_66e
	// 2189    .array-data 2
	// 2190        0x21s
	// 2191        0x22s
	// 2192        0x24s
	// 2193        0x25s
	// 2194        0x27s
	// 2195        0x2fs
	// 2196        0x11s
	// 2197        0x27s
	// 2198        0x29s
	// 2199        0x27s
	// 2200        0x11s
	// 2201        0x27s
	// 2202        0x23s
	// 2203        0x32s
	// 2204        0x35s
	// 2205        0x6s
	// 2206    .end array-data
	// 2208    .line 2808
	// 2209    :array_682
	// 2210    .array-data 2
	// 2211        0x21s
	// 2212        0x22s
	// 2213        0x12s
	// 2214        0x25s
	// 2215        0x27s
	// 2216        0x2fs
	// 2217        0x31s
	// 2218        0x53s
	// 2219        0x14s
	// 2220        0x53s
	// 2221        0x12s
	// 2222        0x12s
	// 2223        0x23s
	// 2224        0x12s
	// 2225        0x15s
	// 2226        0x0s
	// 2227    .end array-data
	// 2229    .line 2809
	// 2230    :array_696
	// 2231    .array-data 2
	// 2232        0x61s
	// 2233        0x62s
	// 2234        0x12s
	// 2235        0x65s
	// 2236        0x87s
	// 2237        0x6fs
	// 2238        0x71s
	// 2239        0x87s
	// 2240        0x8es
	// 2241        0x87s
	// 2242        0x13s
	// 2243        0x87s
	// 2244        0x63s
	// 2245        0x12s
	// 2246        0x15s
	// 2247        0x0s
	// 2248    .end array-data
	// 2250    .line 2810
	// 2251    :array_6aa
	// 2252    .array-data 2
	// 2253        0x21s
	// 2254        0x22s
	// 2255        0x12s
	// 2256        0x25s
	// 2257        0x27s
	// 2258        0x2fs
	// 2259        0x31s
	// 2260        0x27s
	// 2261        0x14s
	// 2262        0x27s
	// 2263        0x14s
	// 2264        0x14s
	// 2265        0x23s
	// 2266        0x12s
	// 2267        0x15s
	// 2268        0x0s
	// 2269    .end array-data
	// 2271    .line 2811
	// 2272    :array_6be
	// 2273    .array-data 2
	// 2274        0x21s
	// 2275        0x22s
	// 2276        0x15s
	// 2277        0x25s
	// 2278        0x27s
	// 2279        0x2fs
	// 2280        0x31s
	// 2281        0x56s
	// 2282        0x17s
	// 2283        0x56s
	// 2284        0x15s
	// 2285        0x15s
	// 2286        0x23s
	// 2287        0x12s
	// 2288        0x15s
	// 2289        0x3s
	// 2290    .end array-data
	// 2292    .line 2812
	// 2293    :array_6d2
	// 2294    .array-data 2
	// 2295        0x61s
	// 2296        0x62s
	// 2297        0x15s
	// 2298        0x65s
	// 2299        0x87s
	// 2300        0x6fs
	// 2301        0x71s
	// 2302        0x87s
	// 2303        0x8es
	// 2304        0x87s
	// 2305        0x16s
	// 2306        0x87s
	// 2307        0x63s
	// 2308        0x12s
	// 2309        0x15s
	// 2310        0x3s
	// 2311    .end array-data
	// 2313    .line 2813
	// 2314    :array_6e6
	// 2315    .array-data 2
	// 2316        0x21s
	// 2317        0x22s
	// 2318        0x15s
	// 2319        0x25s
	// 2320        0x27s
	// 2321        0x2fs
	// 2322        0x31s
	// 2323        0x27s
	// 2324        0x17s
	// 2325        0x27s
	// 2326        0x17s
	// 2327        0x17s
	// 2328        0x23s
	// 2329        0x12s
	// 2330        0x15s
	// 2331        0x3s
	// 2332    .end array-data
	// 2334    .line 2892
	// 2335    :array_6fa
	// 2336    .array-data 1
	// 2337        0x0t
	// 2338        0x1t
	// 2339        0x0t
	// 2340        0x2t
	// 2341        0x0t
	// 2342        0x0t
	// 2343        0x0t
	// 2344        0x0t
	// 2345    .end array-data
	// 2347    .line 2893
	// 2348    :array_702
	// 2349    .array-data 1
	// 2350        0x0t
	// 2351        0x1t
	// 2352        0x3t
	// 2353        0x3t
	// 2354        0x14t
	// 2355        0x14t
	// 2356        0x0t
	// 2357        0x1t
	// 2358    .end array-data
	// 2360    .line 2894
	// 2361    :array_70a
	// 2362    .array-data 1
	// 2363        0x0t
	// 2364        0x1t
	// 2365        0x0t
	// 2366        0x2t
	// 2367        0x15t
	// 2368        0x15t
	// 2369        0x0t
	// 2370        0x2t
	// 2371    .end array-data
	// 2373    .line 2895
	// 2374    :array_712
	// 2375    .array-data 1
	// 2376        0x0t
	// 2377        0x1t
	// 2378        0x3t
	// 2379        0x3t
	// 2380        0x14t
	// 2381        0x14t
	// 2382        0x0t
	// 2383        0x2t
	// 2384    .end array-data
	// 2386    .line 2896
	// 2387    :array_71a
	// 2388    .array-data 1
	// 2389        0x0t
	// 2390        0x21t
	// 2391        0x33t
	// 2392        0x33t
	// 2393        0x4t
	// 2394        0x4t
	// 2395        0x0t
	// 2396        0x0t
	// 2397    .end array-data
	// 2399    .line 2897
	// 2400    :array_722
	// 2401    .array-data 1
	// 2402        0x0t
	// 2403        0x21t
	// 2404        0x0t
	// 2405        0x32t
	// 2406        0x5t
	// 2407        0x5t
	// 2408        0x0t
	// 2409        0x0t
	// 2410    .end array-data
	// 2412    .line 2906
	// 2413    :array_72a
	// 2414    .array-data 1
	// 2415        0x1t
	// 2416        0x0t
	// 2417        0x2t
	// 2418        0x2t
	// 2419        0x0t
	// 2420        0x0t
	// 2421        0x0t
	// 2422        0x0t
	// 2423    .end array-data
	// 2425    .line 2907
	// 2426    :array_732
	// 2427    .array-data 1
	// 2428        0x1t
	// 2429        0x0t
	// 2430        0x1t
	// 2431        0x3t
	// 2432        0x14t
	// 2433        0x14t
	// 2434        0x0t
	// 2435        0x1t
	// 2436    .end array-data
	// 2438    .line 2908
	// 2439    :array_73a
	// 2440    .array-data 1
	// 2441        0x1t
	// 2442        0x0t
	// 2443        0x2t
	// 2444        0x2t
	// 2445        0x0t
	// 2446        0x0t
	// 2447        0x0t
	// 2448        0x1t
	// 2449    .end array-data
	// 2451    .line 2909
	// 2452    :array_742
	// 2453    .array-data 1
	// 2454        0x1t
	// 2455        0x0t
	// 2456        0x1t
	// 2457        0x3t
	// 2458        0x5t
	// 2459        0x5t
	// 2460        0x0t
	// 2461        0x1t
	// 2462    .end array-data
	// 2464    .line 2910
	// 2465    :array_74a
	// 2466    .array-data 1
	// 2467        0x21t
	// 2468        0x0t
	// 2469        0x21t
	// 2470        0x3t
	// 2471        0x4t
	// 2472        0x4t
	// 2473        0x0t
	// 2474        0x0t
	// 2475    .end array-data
	// 2477    .line 2911
	// 2478    :array_752
	// 2479    .array-data 1
	// 2480        0x1t
	// 2481        0x0t
	// 2482        0x1t
	// 2483        0x3t
	// 2484        0x5t
	// 2485        0x5t
	// 2486        0x0t
	// 2487        0x0t
	// 2488    .end array-data
	// 2490    .line 2914
	// 2491    :array_75a
	// 2492    .array-data 2
	// 2493        0x0s
	// 2494        0x1s
	// 2495        0x2s
	// 2496        0x3s
	// 2497        0x4s
	// 2498    .end array-data
	// 2500    .line 2924
	// 2501    nop
	// 2503    :array_764
	// 2504    .array-data 1
	// 2505        0x0t
	// 2506        0x2t
	// 2507        0x11t
	// 2508        0x11t
	// 2509        0x0t
	// 2510        0x0t
	// 2511        0x0t
	// 2512        0x0t
	// 2513    .end array-data
	// 2515    .line 2925
	// 2516    :array_76c
	// 2517    .array-data 1
	// 2518        0x0t
	// 2519        0x42t
	// 2520        0x1t
	// 2521        0x1t
	// 2522        0x0t
	// 2523        0x0t
	// 2524        0x0t
	// 2525        0x0t
	// 2526    .end array-data
	// 2528    .line 2926
	// 2529    :array_774
	// 2530    .array-data 1
	// 2531        0x0t
	// 2532        0x2t
	// 2533        0x4t
	// 2534        0x4t
	// 2535        0x13t
	// 2536        0x13t
	// 2537        0x0t
	// 2538        0x1t
	// 2539    .end array-data
	// 2541    .line 2927
	// 2542    :array_77c
	// 2543    .array-data 1
	// 2544        0x0t
	// 2545        0x22t
	// 2546        0x34t
	// 2547        0x34t
	// 2548        0x3t
	// 2549        0x3t
	// 2550        0x0t
	// 2551        0x0t
	// 2552    .end array-data
	// 2554    .line 2928
	// 2555    :array_784
	// 2556    .array-data 1
	// 2557        0x0t
	// 2558        0x2t
	// 2559        0x4t
	// 2560        0x4t
	// 2561        0x13t
	// 2562        0x13t
	// 2563        0x0t
	// 2564        0x2t
	// 2565    .end array-data
	// 2567    .line 2938
	// 2568    :array_78c
	// 2569    .array-data 1
	// 2570        0x0t
	// 2571        0x3t
	// 2572        0x11t
	// 2573        0x11t
	// 2574        0x0t
	// 2575        0x0t
	// 2576        0x0t
	// 2577        0x0t
	// 2578    .end array-data
	// 2580    .line 2939
	// 2581    :array_794
	// 2582    .array-data 1
	// 2583        0x20t
	// 2584        0x3t
	// 2585        0x1t
	// 2586        0x1t
	// 2587        0x2t
	// 2588        0x20t
	// 2589        0x20t
	// 2590        0x2t
	// 2591    .end array-data
	// 2593    .line 2940
	// 2594    :array_79c
	// 2595    .array-data 1
	// 2596        0x20t
	// 2597        0x3t
	// 2598        0x1t
	// 2599        0x1t
	// 2600        0x2t
	// 2601        0x20t
	// 2602        0x20t
	// 2603        0x1t
	// 2604    .end array-data
	// 2606    .line 2941
	// 2607    :array_7a4
	// 2608    .array-data 1
	// 2609        0x0t
	// 2610        0x3t
	// 2611        0x5t
	// 2612        0x5t
	// 2613        0x14t
	// 2614        0x0t
	// 2615        0x0t
	// 2616        0x1t
	// 2617    .end array-data
	// 2619    .line 2942
	// 2620    :array_7ac
	// 2621    .array-data 1
	// 2622        0x20t
	// 2623        0x3t
	// 2624        0x5t
	// 2625        0x5t
	// 2626        0x4t
	// 2627        0x20t
	// 2628        0x20t
	// 2629        0x1t
	// 2630    .end array-data
	// 2632    .line 2943
	// 2633    :array_7b4
	// 2634    .array-data 1
	// 2635        0x0t
	// 2636        0x3t
	// 2637        0x5t
	// 2638        0x5t
	// 2639        0x14t
	// 2640        0x0t
	// 2641        0x0t
	// 2642        0x2t
	// 2643    .end array-data
	// 2645    .line 2950
	// 2646    :array_7bc
	// 2647    .array-data 1
	// 2648        0x2t
	// 2649        0x0t
	// 2650        0x1t
	// 2651        0x1t
	// 2652        0x0t
	// 2653        0x0t
	// 2654        0x0t
	// 2655        0x0t
	// 2656    .end array-data
	// 2658    .line 2951
	// 2659    :array_7c4
	// 2660    .array-data 1
	// 2661        0x2t
	// 2662        0x0t
	// 2663        0x1t
	// 2664        0x1t
	// 2665        0x0t
	// 2666        0x0t
	// 2667        0x0t
	// 2668        0x1t
	// 2669    .end array-data
	// 2671    .line 2952
	// 2672    :array_7cc
	// 2673    .array-data 1
	// 2674        0x2t
	// 2675        0x0t
	// 2676        0x14t
	// 2677        0x14t
	// 2678        0x13t
	// 2679        0x0t
	// 2680        0x0t
	// 2681        0x1t
	// 2682    .end array-data
	// 2684    .line 2953
	// 2685    :array_7d4
	// 2686    .array-data 1
	// 2687        0x22t
	// 2688        0x0t
	// 2689        0x4t
	// 2690        0x4t
	// 2691        0x3t
	// 2692        0x0t
	// 2693        0x0t
	// 2694        0x0t
	// 2695    .end array-data
	// 2697    .line 2954
	// 2698    :array_7dc
	// 2699    .array-data 1
	// 2700        0x22t
	// 2701        0x0t
	// 2702        0x4t
	// 2703        0x4t
	// 2704        0x3t
	// 2705        0x0t
	// 2706        0x0t
	// 2707        0x1t
	// 2708    .end array-data
	// 2710    .line 2965
	// 2711    :array_7e4
	// 2712    .array-data 1
	// 2713        0x0t
	// 2714        0x1t
	// 2715        0x0t
	// 2716        0x0t
	// 2717        0x0t
	// 2718        0x0t
	// 2719        0x0t
	// 2720        0x0t
	// 2721    .end array-data
	// 2723    .line 2966
	// 2724    :array_7ec
	// 2725    .array-data 1
	// 2726        0x0t
	// 2727        0x1t
	// 2728        0x0t
	// 2729        0x0t
	// 2730        0x14t
	// 2731        0x14t
	// 2732        0x0t
	// 2733        0x1t
	// 2734    .end array-data
	// 2736    .line 2967
	// 2737    :array_7f4
	// 2738    .array-data 1
	// 2739        0x0t
	// 2740        0x1t
	// 2741        0x0t
	// 2742        0x0t
	// 2743        0x15t
	// 2744        0x15t
	// 2745        0x0t
	// 2746        0x2t
	// 2747    .end array-data
	// 2749    .line 2968
	// 2750    :array_7fc
	// 2751    .array-data 1
	// 2752        0x0t
	// 2753        0x1t
	// 2754        0x0t
	// 2755        0x0t
	// 2756        0x14t
	// 2757        0x14t
	// 2758        0x0t
	// 2759        0x2t
	// 2760    .end array-data
	// 2762    .line 2969
	// 2763    :array_804
	// 2764    .array-data 1
	// 2765        0x20t
	// 2766        0x1t
	// 2767        0x20t
	// 2768        0x20t
	// 2769        0x4t
	// 2770        0x4t
	// 2771        0x20t
	// 2772        0x1t
	// 2773    .end array-data
	// 2775    .line 2970
	// 2776    :array_80c
	// 2777    .array-data 1
	// 2778        0x20t
	// 2779        0x1t
	// 2780        0x20t
	// 2781        0x20t
	// 2782        0x5t
	// 2783        0x5t
	// 2784        0x20t
	// 2785        0x1t
	// 2786    .end array-data
	// 2788    .line 2977
	// 2789    :array_814
	// 2790    .array-data 1
	// 2791        0x1t
	// 2792        0x0t
	// 2793        0x1t
	// 2794        0x1t
	// 2795        0x0t
	// 2796        0x0t
	// 2797        0x0t
	// 2798        0x0t
	// 2799    .end array-data
	// 2801    .line 2978
	// 2802    :array_81c
	// 2803    .array-data 1
	// 2804        0x1t
	// 2805        0x0t
	// 2806        0x1t
	// 2807        0x1t
	// 2808        0x14t
	// 2809        0x14t
	// 2810        0x0t
	// 2811        0x1t
	// 2812    .end array-data
	// 2814    .line 2979
	// 2815    :array_824
	// 2816    .array-data 1
	// 2817        0x1t
	// 2818        0x0t
	// 2819        0x1t
	// 2820        0x1t
	// 2821        0x0t
	// 2822        0x0t
	// 2823        0x0t
	// 2824        0x1t
	// 2825    .end array-data
	// 2827    .line 2980
	// 2828    :array_82c
	// 2829    .array-data 1
	// 2830        0x1t
	// 2831        0x0t
	// 2832        0x1t
	// 2833        0x1t
	// 2834        0x5t
	// 2835        0x5t
	// 2836        0x0t
	// 2837        0x1t
	// 2838    .end array-data
	// 2840    .line 2981
	// 2841    :array_834
	// 2842    .array-data 1
	// 2843        0x21t
	// 2844        0x0t
	// 2845        0x21t
	// 2846        0x21t
	// 2847        0x4t
	// 2848        0x4t
	// 2849        0x0t
	// 2850        0x0t
	// 2851    .end array-data
	// 2853    .line 2982
	// 2854    :array_83c
	// 2855    .array-data 1
	// 2856        0x1t
	// 2857        0x0t
	// 2858        0x1t
	// 2859        0x1t
	// 2860        0x5t
	// 2861        0x5t
	// 2862        0x0t
	// 2863        0x0t
	// 2864    .end array-data
	// 2866    .line 2993
	// 2867    :array_844
	// 2868    .array-data 1
	// 2869        0x1t
	// 2870        0x0t
	// 2871        0x2t
	// 2872        0x2t
	// 2873        0x0t
	// 2874        0x0t
	// 2875        0x0t
	// 2876        0x0t
	// 2877    .end array-data
	// 2879    .line 2994
	// 2880    :array_84c
	// 2881    .array-data 1
	// 2882        0x1t
	// 2883        0x0t
	// 2884        0x1t
	// 2885        0x2t
	// 2886        0x13t
	// 2887        0x13t
	// 2888        0x0t
	// 2889        0x1t
	// 2890    .end array-data
	// 2892    .line 2995
	// 2893    :array_854
	// 2894    .array-data 1
	// 2895        0x1t
	// 2896        0x0t
	// 2897        0x2t
	// 2898        0x2t
	// 2899        0x0t
	// 2900        0x0t
	// 2901        0x0t
	// 2902        0x1t
	// 2903    .end array-data
	// 2905    .line 2996
	// 2906    :array_85c
	// 2907    .array-data 1
	// 2908        0x21t
	// 2909        0x30t
	// 2910        0x6t
	// 2911        0x4t
	// 2912        0x3t
	// 2913        0x3t
	// 2914        0x30t
	// 2915        0x0t
	// 2916    .end array-data
	// 2918    .line 2997
	// 2919    :array_864
	// 2920    .array-data 1
	// 2921        0x21t
	// 2922        0x30t
	// 2923        0x6t
	// 2924        0x4t
	// 2925        0x5t
	// 2926        0x5t
	// 2927        0x30t
	// 2928        0x3t
	// 2929    .end array-data
	// 2931    .line 2998
	// 2932    :array_86c
	// 2933    .array-data 1
	// 2934        0x21t
	// 2935        0x30t
	// 2936        0x6t
	// 2937        0x4t
	// 2938        0x5t
	// 2939        0x5t
	// 2940        0x30t
	// 2941        0x2t
	// 2942    .end array-data
	// 2944    .line 2999
	// 2945    :array_874
	// 2946    .array-data 1
	// 2947        0x21t
	// 2948        0x30t
	// 2949        0x6t
	// 2950        0x4t
	// 2951        0x3t
	// 2952        0x3t
	// 2953        0x30t
	// 2954        0x1t
	// 2955    .end array-data
	// 2957    .line 3001
	// 2958    :array_87c
	// 2959    .array-data 2
	// 2960        0x0s
	// 2961        0x1s
	// 2962        0xds
	// 2963        0xes
	// 2964    .end array-data
	// 2966    .line 3009
	// 2967    :array_884
	// 2968    .array-data 1
	// 2969        0x0t
	// 2970        0x63t
	// 2971        0x0t
	// 2972        0x1t
	// 2973        0x0t
	// 2974        0x0t
	// 2975        0x0t
	// 2976        0x0t
	// 2977    .end array-data
	// 2979    .line 3010
	// 2980    :array_88c
	// 2981    .array-data 1
	// 2982        0x0t
	// 2983        0x63t
	// 2984        0x0t
	// 2985        0x1t
	// 2986        0x12t
	// 2987        0x30t
	// 2988        0x0t
	// 2989        0x4t
	// 2990    .end array-data
	// 2992    .line 3011
	// 2993    :array_894
	// 2994    .array-data 1
	// 2995        0x20t
	// 2996        0x63t
	// 2997        0x20t
	// 2998        0x1t
	// 2999        0x2t
	// 3000        0x30t
	// 3001        0x20t
	// 3002        0x3t
	// 3003    .end array-data
	// 3005    .line 3012
	// 3006    :array_89c
	// 3007    .array-data 1
	// 3008        0x0t
	// 3009        0x63t
	// 3010        0x55t
	// 3011        0x56t
	// 3012        0x14t
	// 3013        0x30t
	// 3014        0x0t
	// 3015        0x3t
	// 3016    .end array-data
	// 3018    .line 3013
	// 3019    :array_8a4
	// 3020    .array-data 1
	// 3021        0x30t
	// 3022        0x43t
	// 3023        0x55t
	// 3024        0x56t
	// 3025        0x4t
	// 3026        0x30t
	// 3027        0x30t
	// 3028        0x3t
	// 3029    .end array-data
	// 3031    .line 3014
	// 3032    :array_8ac
	// 3033    .array-data 1
	// 3034        0x30t
	// 3035        0x43t
	// 3036        0x5t
	// 3037        0x56t
	// 3038        0x14t
	// 3039        0x30t
	// 3040        0x30t
	// 3041        0x4t
	// 3042    .end array-data
	// 3044    .line 3015
	// 3045    :array_8b4
	// 3046    .array-data 1
	// 3047        0x30t
	// 3048        0x43t
	// 3049        0x55t
	// 3050        0x6t
	// 3051        0x14t
	// 3052        0x30t
	// 3053        0x30t
	// 3054        0x4t
	// 3055    .end array-data
	// 3057    .line 3022
	// 3058    :array_8bc
	// 3059    .array-data 1
	// 3060        0x13t
	// 3061        0x0t
	// 3062        0x1t
	// 3063        0x1t
	// 3064        0x0t
	// 3065        0x0t
	// 3066        0x0t
	// 3067        0x0t
	// 3068    .end array-data
	// 3070    .line 3023
	// 3071    :array_8c4
	// 3072    .array-data 1
	// 3073        0x23t
	// 3074        0x0t
	// 3075        0x1t
	// 3076        0x1t
	// 3077        0x2t
	// 3078        0x40t
	// 3079        0x0t
	// 3080        0x1t
	// 3081    .end array-data
	// 3083    .line 3024
	// 3084    :array_8cc
	// 3085    .array-data 1
	// 3086        0x23t
	// 3087        0x0t
	// 3088        0x1t
	// 3089        0x1t
	// 3090        0x2t
	// 3091        0x40t
	// 3092        0x0t
	// 3093        0x0t
	// 3094    .end array-data
	// 3096    .line 3025
	// 3097    :array_8d4
	// 3098    .array-data 1
	// 3099        0x3t
	// 3100        0x0t
	// 3101        0x3t
	// 3102        0x36t
	// 3103        0x14t
	// 3104        0x40t
	// 3105        0x0t
	// 3106        0x1t
	// 3107    .end array-data
	// 3109    .line 3026
	// 3110    :array_8dc
	// 3111    .array-data 1
	// 3112        0x53t
	// 3113        0x40t
	// 3114        0x5t
	// 3115        0x36t
	// 3116        0x4t
	// 3117        0x40t
	// 3118        0x40t
	// 3119        0x0t
	// 3120    .end array-data
	// 3122    .line 3027
	// 3123    :array_8e4
	// 3124    .array-data 1
	// 3125        0x53t
	// 3126        0x40t
	// 3127        0x5t
	// 3128        0x36t
	// 3129        0x4t
	// 3130        0x40t
	// 3131        0x40t
	// 3132        0x1t
	// 3133    .end array-data
	// 3135    .line 3028
	// 3136    :array_8ec
	// 3137    .array-data 1
	// 3138        0x53t
	// 3139        0x40t
	// 3140        0x6t
	// 3141        0x6t
	// 3142        0x4t
	// 3143        0x40t
	// 3144        0x40t
	// 3145        0x3t
	// 3146    .end array-data
	// 3148    .line 3030
	// 3149    :array_8f4
	// 3150    .array-data 2
	// 3151        0x0s
	// 3152        0x1s
	// 3153        0x2s
	// 3154        0x5s
	// 3155        0x6s
	// 3156        0x7s
	// 3157        0x8s
	// 3158    .end array-data
	// 3160    .line 3031
	// 3161    nop
	// 3163    :array_900
	// 3164    .array-data 2
	// 3165        0x0s
	// 3166        0x1s
	// 3167        0x9s
	// 3168        0xas
	// 3169        0xbs
	// 3170        0xcs
	// 3171    .end array-data
	// 3173    .line 3043
	// 3174    :array_90a
	// 3175    .array-data 1
	// 3176        0x0t
	// 3177        0x62t
	// 3178        0x1t
	// 3179        0x1t
	// 3180        0x0t
	// 3181        0x0t
	// 3182        0x0t
	// 3183        0x0t
	// 3184    .end array-data
	// 3186    .line 3044
	// 3187    :array_912
	// 3188    .array-data 1
	// 3189        0x0t
	// 3190        0x62t
	// 3191        0x1t
	// 3192        0x1t
	// 3193        0x0t
	// 3194        0x30t
	// 3195        0x0t
	// 3196        0x4t
	// 3197    .end array-data
	// 3199    .line 3045
	// 3200    :array_91a
	// 3201    .array-data 1
	// 3202        0x0t
	// 3203        0x62t
	// 3204        0x54t
	// 3205        0x54t
	// 3206        0x13t
	// 3207        0x30t
	// 3208        0x0t
	// 3209        0x3t
	// 3210    .end array-data
	// 3212    .line 3046
	// 3213    :array_922
	// 3214    .array-data 1
	// 3215        0x30t
	// 3216        0x42t
	// 3217        0x54t
	// 3218        0x54t
	// 3219        0x3t
	// 3220        0x30t
	// 3221        0x30t
	// 3222        0x3t
	// 3223    .end array-data
	// 3225    .line 3047
	// 3226    :array_92a
	// 3227    .array-data 1
	// 3228        0x30t
	// 3229        0x42t
	// 3230        0x4t
	// 3231        0x4t
	// 3232        0x13t
	// 3233        0x30t
	// 3234        0x30t
	// 3235        0x4t
	// 3236    .end array-data

}
// .method public constructor <init>()V
android::icu::text::Bidi::Bidi()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	android::icu::text::Bidi::(cVar0, cVar0);
	return;

}
// .method public constructor <init>(II)V
android::icu::text::Bidi::Bidi(int maxLength,int maxRunCount)
{
	
	int cVar0;
	bool cVar1;
	int cVar2;
	std::shared<std::vector<std::vector<android::icu::text::BidiRun>>> cVar3;
	std::shared_ptr<android::icu::text::BidiRun> cVar4;
	std::shared_ptr<android::icu::text::Bidi_S_InsertPoints> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	
	//    .param p1, "maxLength"    # I
	//    .param p2, "maxRunCount"    # I
	cVar0 = 0xa;
	cVar1 = 0x1;
	cVar2 = 0x0;
	// 3265    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->dirPropsMemory = std::make_shared<std::vector<unsigned char[]>>(cVar1);
	this->levelsMemory = std::make_shared<std::vector<unsigned char[]>>(cVar1);
	this->paras_limit = std::make_shared<std::vector<int[]>>(cVar0);
	this->paras_level = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	this->runsMemory = std::make_shared<std::vector<std::vector<android::icu::text::BidiRun>>>(cVar2);
	cVar3 = std::make_shared<std::vector<std::vector<android::icu::text::BidiRun>>>(cVar1);
	cVar4 = std::make_shared<android::icu::text::BidiRun>();
	cVar3[cVar2] = cVar4;
	this->simpleRuns = cVar3;
	this->customClassifier = 0x0;
	cVar5 = std::make_shared<android::icu::text::Bidi_S_InsertPoints>();
	this->insertPoints = cVar5;
	if ( maxLength < 0 ) 
		goto label_cond_34;
	if ( maxRunCount >= 0 )
		goto label_cond_3a;
label_cond_34:
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar6;
	// 3328    .line 1277
label_cond_3a:
	this->bdp = android::icu::impl::UBiDiProps::INSTANCE;
	if ( maxLength <= 0 )
		goto label_cond_4e;
	this->getInitialDirPropsMemory(maxLength);
	this->getInitialLevelsMemory(maxLength);
label_goto_46:
	if ( maxRunCount <= 0 )
		goto label_cond_51;
	if ( maxRunCount <= cVar1 )
		goto label_cond_4d;
	this->getInitialRunsMemory(maxRunCount);
label_cond_4d:
label_goto_4d:
	return;
	// 3358    .line 1284
label_cond_4e:
	this->mayAllocateText = cVar1;
	goto label_goto_46;
	// 3364    .line 1293
label_cond_51:
	this->mayAllocateRuns = cVar1;
	goto label_goto_4d;

}
// .method public constructor <init>(Ljava/lang/String;I)V
android::icu::text::Bidi::Bidi(std::shared_ptr<java::lang::String> paragraph,int flags)
{
	
	int cVar0;
	
	//    .param p1, "paragraph"    # Ljava/lang/String;
	//    .param p2, "flags"    # I
	cVar0 = 0x0;
	android::icu::text::Bidi::(paragraph->toCharArray(), cVar0, 0x0, cVar0, paragraph->length(), flags);
	return;

}
// .method public constructor <init>(Ljava/text/AttributedCharacterIterator;)V
android::icu::text::Bidi::Bidi(std::shared_ptr<java::text::AttributedCharacterIterator> paragraph)
{
	
	//    .param p1, "paragraph"    # Ljava/text/AttributedCharacterIterator;
	// 3408    invoke-direct {p0}, Landroid/icu/text/Bidi;-><init>()V
	this->setPara(paragraph);
	return;

}
// .method public constructor <init>([CI[BIII)V
android::icu::text::Bidi::Bidi(std::shared_ptr<char[]> text,int textStart,std::shared_ptr<unsigned char[]> embeddings,int embStart,int paragraphLength,int flags)
{
	
	unsigned char paraLvl;
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared<std::vector<char[]>> paraText;
	std::shared<std::vector<unsigned char[]>> cVar0;
	int i;
	unsigned char lev;
	
	//    .param p1, "text"    # [C
	//    .param p2, "textStart"    # I
	//    .param p3, "embeddings"    # [B
	//    .param p4, "embStart"    # I
	//    .param p5, "paragraphLength"    # I
	//    .param p6, "flags"    # I
	// 3430    invoke-direct {p0}, Landroid/icu/text/Bidi;-><init>()V
	// switch
	{
	auto item = ( flags );
	if (item == 0x1) goto label_sswitch_14;
	if (item == 0x7e) goto label_sswitch_16;
	if (item == 0x7f) goto label_sswitch_19;
	}
	paraLvl = 0x0;
	//    .local v3, "paraLvl":B
label_goto_8:
	if ( embeddings )     
		goto label_cond_1c;
	cVar0 = 0x0;
label_cond_b:
	if ( textStart )     
		goto label_cond_30;
	if ( paragraphLength != text->size() )
		goto label_cond_30;
	this->setPara(text, paraLvl, cVar0);
label_goto_13:
	return;
	// 3461    .line 5293
	// 3462    .end local v3    # "paraLvl":B
label_sswitch_14:
	//    .restart local v3    # "paraLvl":B
	goto label_goto_8;
	// 3470    .line 5296
	// 3471    .end local v3    # "paraLvl":B
label_sswitch_16:
	//    .restart local v3    # "paraLvl":B
	goto label_goto_8;
	// 3479    .line 5299
	// 3480    .end local v3    # "paraLvl":B
label_sswitch_19:
	//    .restart local v3    # "paraLvl":B
	goto label_goto_8;
	// 3488    .line 5311
label_cond_1c:
	cVar0 = std::make_shared<std::vector<unsigned char[]>>(paragraphLength);
	//    .local v2, "paraEmbeddings":[B
	i = 0x0;
	//    .local v0, "i":I
label_goto_1f:
	if ( i >= paragraphLength )
		goto label_cond_b;
	lev = embeddings[(i + embStart)];
	//    .local v1, "lev":B
	if ( lev >= 0 )
		goto label_cond_2b;
label_cond_2b:
	cVar0[i] = lev;
	i = ( i + 0x1);
	goto label_goto_1f;
	// 3525    .line 5325
	// 3526    .end local v0    # "i":I
	// 3527    .end local v1    # "lev":B
	// 3528    .end local v2    # "paraEmbeddings":[B
label_cond_30:
	paraText = std::make_shared<std::vector<char[]>>(paragraphLength);
	//    .local v4, "paraText":[C
	java::lang::System::arraycopy(text, textStart, paraText, 0x0, paragraphLength);
	this->setPara(paraText, paraLvl, cVar0);
	goto label_goto_13;
	// 3541    .line 5287
	// 3542    nop
	// 3544    :sswitch_data_3a
	// 3545    .sparse-switch
	// 3546        0x1 -> :sswitch_14
	// 3547        0x7e -> :sswitch_16
	// 3548        0x7f -> :sswitch_19
	// 3549    .end sparse-switch

}
// .method static final DirFromStrong(B)B
unsigned char android::icu::text::Bidi::DirFromStrong(unsigned char strong)
{
	
	unsigned char cVar0;
	
	//    .param p0, "strong"    # B
	cVar0 = 0x0;
	if ( strong )     
		goto label_cond_4;
label_goto_3:
	return cVar0;
label_cond_4:
	cVar0 = 0x1;
	goto label_goto_3;

}
// .method static DirPropFlag(B)I
int android::icu::text::Bidi::DirPropFlag(unsigned char dir)
{
	
	//    .param p0, "dir"    # B
	return (0x1 << dir);

}
// .method static final DirPropFlagE(B)I
int android::icu::text::Bidi::DirPropFlagE(unsigned char level)
{
	
	//    .param p0, "level"    # B
	return android::icu::text::Bidi::DirPropFlagE[( level & 0x1)];

}
// .method static final DirPropFlagLR(B)I
int android::icu::text::Bidi::DirPropFlagLR(unsigned char level)
{
	
	//    .param p0, "level"    # B
	return android::icu::text::Bidi::DirPropFlagLR[( level & 0x1)];

}
// .method static final DirPropFlagO(B)I
int android::icu::text::Bidi::DirPropFlagO(unsigned char level)
{
	
	//    .param p0, "level"    # B
	return android::icu::text::Bidi::DirPropFlagO[( level & 0x1)];

}
// .method private static GetAction(B)S
short android::icu::text::Bidi::GetAction(unsigned char cell)
{
	
	//    .param p0, "cell"    # B
	return (short)(_shri(cell,0x4));

}
// .method private static GetActionProps(S)S
short android::icu::text::Bidi::GetActionProps(short cell)
{
	
	//    .param p0, "cell"    # S
	return (short)(_shri(cell,0x5));

}
// .method static GetLRFromLevel(B)B
unsigned char android::icu::text::Bidi::GetLRFromLevel(unsigned char level)
{
	
	//    .param p0, "level"    # B
	return (unsigned char)(( level & 0x1));

}
// .method private static GetState(B)S
short android::icu::text::Bidi::GetState(unsigned char cell)
{
	
	//    .param p0, "cell"    # B
	return (short)(( cell & 0xf));

}
// .method private static GetStateProps(S)S
short android::icu::text::Bidi::GetStateProps(short cell)
{
	
	//    .param p0, "cell"    # S
	return (short)(( cell & 0x1f));

}
// .method static IsBidiControlChar(I)Z
bool android::icu::text::Bidi::IsBidiControlChar(int c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # I
	cVar0 = 0x1;
	if ( ( c & -0x4) == 0x200c )
		goto label_cond_10;
	if ( c <  0x202a )
		goto label_cond_11;
	if ( c >  0x202e )
		goto label_cond_11;
label_cond_10:
label_goto_10:
	return cVar0;
	// 3722    .line 1176
label_cond_11:
	if ( c <  0x2066 )
		goto label_cond_19;
	if ( c <= 0x2069 )
		goto label_cond_10;
label_cond_19:
	cVar0 = 0x0;
	goto label_goto_10;

}
// .method static IsDefaultLevel(B)Z
bool android::icu::text::Bidi::IsDefaultLevel(unsigned char level)
{
	
	bool cVar0;
	
	//    .param p0, "level"    # B
	if ( ( level & 0x7e) != 0x7e )
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method static final NoOverride(B)B
unsigned char android::icu::text::Bidi::NoOverride(unsigned char level)
{
	
	//    .param p0, "level"    # B
	return (unsigned char)(( level & 0x7f));

}
// .method private addPoint(II)V
void android::icu::text::Bidi::addPoint(int pos,int flag)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::Bidi_S_Point> point;
	int len;
	std::shared_ptr<android::icu::text::Bidi_S_InsertPoints> cVar1;
	
	//    .param p1, "pos"    # I
	//    .param p2, "flag"    # I
	cVar0 = 0x0;
	point = std::make_shared<android::icu::text::Bidi_S_Point>();
	//    .local v1, "point":Landroid/icu/text/Bidi$Point;
	len = this->insertPoints->points->size();
	//    .local v0, "len":I
	if ( len )     
		goto label_cond_17;
	this->insertPoints->points = std::make_shared<std::vector<std::vector<android::icu::text::Bidi_S_Point>>>(0xa);
	len = 0xa;
label_cond_17:
	if ( this->insertPoints->size <  len )
		goto label_cond_30;
	//    .local v2, "savePoints":[Landroid/icu/text/Bidi$Point;
	this->insertPoints->points = std::make_shared<std::vector<std::vector<android::icu::text::Bidi_S_Point>>>(( len * 0x2));
	java::lang::System::arraycopy(this->insertPoints->points, cVar0, this->insertPoints->points, cVar0, len);
	//    .end local v2    # "savePoints":[Landroid/icu/text/Bidi$Point;
label_cond_30:
	point->pos = pos;
	point->flag = flag;
	this->insertPoints->points[this->insertPoints->size] = point;
	cVar1 = this->insertPoints;
	cVar1->size = ( cVar1->size + 0x1);
	return;

}
// .method private adjustWSLevels()V
void android::icu::text::Bidi::adjustWSLevels()
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	int i;
	int flag;
	
	cVar0 = 0x7;
	cVar1 = 0x0;
	if ( !((this->flags &  android::icu::text::Bidi::MASK_WS)) )  
		goto label_cond_71;
	i = this->trailingWSStart;
	//    .local v1, "i":I
label_cond_b:
label_goto_b:
	if ( i <= 0 )
		goto label_cond_71;
label_goto_d:
	if ( i <= 0 )
		goto label_cond_37;
	i = ( i + -0x1);
	flag = android::icu::text::Bidi::DirPropFlag(this->dirProps[i]);
	//    .local v0, "flag":I
	if ( !((android::icu::text::Bidi::MASK_WS &  flag)) )  
		goto label_cond_37;
	if ( !(this->orderParagraphsLTR) )  
		goto label_cond_2e;
	if ( !((android::icu::text::Bidi::DirPropFlag(cVar0) &  flag)) )  
		goto label_cond_2e;
	this->levels[i] = cVar1;
	goto label_goto_d;
	// 3940    .line 3540
label_cond_2e:
	this->levels[i] = this->GetParaLevelAt(i);
	goto label_goto_d;
	// 3952    .line 3546
	// 3953    .end local v0    # "flag":I
label_cond_37:
label_goto_37:
	if ( i <= 0 )
		goto label_cond_b;
	i = ( i + -0x1);
	flag = android::icu::text::Bidi::DirPropFlag(this->dirProps[i]);
	//    .restart local v0    # "flag":I
	if ( !((android::icu::text::Bidi::MASK_BN_EXPLICIT &  flag)) )  
		goto label_cond_53;
	this->levels[i] = this->levels[( i + 0x1)];
	goto label_goto_37;
	// 3990    .line 3550
label_cond_53:
	if ( !(this->orderParagraphsLTR) )  
		goto label_cond_63;
	if ( !((android::icu::text::Bidi::DirPropFlag(cVar0) &  flag)) )  
		goto label_cond_63;
	this->levels[i] = cVar1;
	goto label_goto_b;
	// 4011    .line 3553
label_cond_63:
	if ( !((android::icu::text::Bidi::MASK_B_S &  flag)) )  
		goto label_cond_37;
	this->levels[i] = this->GetParaLevelAt(i);
	goto label_goto_b;
	// 4030    .line 3560
	// 4031    .end local v0    # "flag":I
	// 4032    .end local v1    # "i":I
label_cond_71:
	return;

}
// .method private bracketAddOpening(Landroid/icu/text/Bidi$BracketData;CI)V
void android::icu::text::Bidi::bracketAddOpening(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,char match,int position)
{
	
	int cVar0;
	short pLastIsoRun;
	std::shared_ptr<java::lang::OutOfMemoryError> cVar1;
	int count;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::text::Bidi_S_Opening> pOpening;
	
	//    .param p1, "bd"    # Landroid/icu/text/Bidi$BracketData;
	//    .param p2, "match"    # C
	//    .param p3, "position"    # I
	cVar0 = 0x0;
	pLastIsoRun = bd->isoRuns[bd->isoRunLast];
	//    .local v2, "pLastIsoRun":Landroid/icu/text/Bidi$IsoRun;
	if ( pLastIsoRun->limit <  bd->openings->size() )
		goto label_cond_1e;
	//    .local v4, "saveOpenings":[Landroid/icu/text/Bidi$Opening;
	try {
	//label_try_start_10:
	count = bd->openings->size();
	//    .local v0, "count":I
	bd->openings = std::make_shared<std::vector<std::vector<android::icu::text::Bidi_S_Opening>>>(( count * 0x2));
	//label_try_end_19:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_47;
	}
	//    .catch Ljava/lang/Exception; {:try_start_10 .. :try_end_19} :catch_47
	java::lang::System::arraycopy(bd->openings, cVar0, bd->openings, cVar0, count);
	//    .end local v0    # "count":I
	//    .end local v4    # "saveOpenings":[Landroid/icu/text/Bidi$Opening;
label_cond_1e:
	pOpening = bd->openings[pLastIsoRun->limit];
	//    .local v3, "pOpening":Landroid/icu/text/Bidi$Opening;
	if ( pOpening )     
		goto label_cond_31;
	//    .end local v3    # "pOpening":Landroid/icu/text/Bidi$Opening;
	pOpening = std::make_shared<android::icu::text::Bidi_S_Opening>();
	bd->openings[pLastIsoRun->limit] = pOpening;
	//    .restart local v3    # "pOpening":Landroid/icu/text/Bidi$Opening;
label_cond_31:
	pOpening->position = position;
	pOpening->match = match;
	pOpening->contextDir = pLastIsoRun->contextDir;
	pOpening->contextPos = pLastIsoRun->contextPos;
	pOpening->flags = cVar0;
	pLastIsoRun->limit = (short)(( pLastIsoRun->limit + 0x1));
	return;
	// 4147    .line 2080
	// 4148    .end local v3    # "pOpening":Landroid/icu/text/Bidi$Opening;
	// 4149    .restart local v4    # "saveOpenings":[Landroid/icu/text/Bidi$Opening;
label_catch_47:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	cVar1 = std::make_shared<java::lang::OutOfMemoryError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Failed to allocate memory for openings")));
	// throw
	throw cVar1;

}
// .method private bracketInit(Landroid/icu/text/Bidi$BracketData;)V
void android::icu::text::Bidi::bracketInit(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd)
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::Bidi_S_IsoRun> cVar2;
	unsigned char cVar3;
	
	//    .param p1, "bd"    # Landroid/icu/text/Bidi$BracketData;
	cVar0 = 0x1;
	cVar1 = 0x0;
	bd->isoRunLast = cVar1;
	cVar2 = std::make_shared<android::icu::text::Bidi_S_IsoRun>();
	bd->isoRuns[cVar1] = cVar2;
	bd->isoRuns[cVar1]->start = cVar1;
	bd->isoRuns[cVar1]->limit = cVar1;
	bd->isoRuns[cVar1]->level = this->GetParaLevelAt(cVar1);
	cVar3 = (unsigned char)(( this->GetParaLevelAt(cVar1) & 0x1));
	bd->isoRuns[cVar1]->contextDir = cVar3;
	bd->isoRuns[cVar1]->lastBase = cVar3;
	bd->isoRuns[cVar1]->lastStrong = cVar3;
	bd->isoRuns[cVar1]->contextPos = cVar1;
	bd->openings = std::make_shared<std::vector<std::vector<android::icu::text::Bidi_S_Opening>>>(0x14);
	if ( this->reorderingMode == cVar0 )
		goto label_cond_51;
	if ( this->reorderingMode != 0x6 )
		goto label_cond_54;
label_cond_51:
label_goto_51:
	bd->isNumbersSpecial = cVar0;
	return;
label_cond_54:
	cVar0 = cVar1;
	goto label_goto_51;

}
// .method private bracketProcessB(Landroid/icu/text/Bidi$BracketData;B)V
void android::icu::text::Bidi::bracketProcessB(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,unsigned char level)
{
	
	int cVar0;
	unsigned char cVar1;
	
	//    .param p1, "bd"    # Landroid/icu/text/Bidi$BracketData;
	//    .param p2, "level"    # B
	cVar0 = 0x0;
	bd->isoRunLast = cVar0;
	bd->isoRuns[cVar0]->limit = cVar0;
	bd->isoRuns[cVar0]->level = level;
	cVar1 = (unsigned char)(( level & 0x1));
	bd->isoRuns[cVar0]->contextDir = cVar1;
	bd->isoRuns[cVar0]->lastBase = cVar1;
	bd->isoRuns[cVar0]->lastStrong = cVar1;
	bd->isoRuns[cVar0]->contextPos = cVar0;
	return;

}
// .method private bracketProcessBoundary(Landroid/icu/text/Bidi$BracketData;IBB)V
void android::icu::text::Bidi::bracketProcessBoundary(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,int lastCcPos,unsigned char cVar0,unsigned char embeddingLevel)
{
	
	short pLastIsoRun;
	int cVar0;
	unsigned char cVar1;
	
	//    .param p1, "bd"    # Landroid/icu/text/Bidi$BracketData;
	//    .param p2, "lastCcPos"    # I
	//    .param p3, "contextLevel"    # B
	//    .param p4, "embeddingLevel"    # B
	pLastIsoRun = bd->isoRuns[bd->isoRunLast];
	//    .local v0, "pLastIsoRun":Landroid/icu/text/Bidi$IsoRun;
	if ( !((android::icu::text::Bidi::DirPropFlag(this->dirProps[lastCcPos]) &  android::icu::text::Bidi::MASK_ISO)) )  
		goto label_cond_14;
	return;
	// 4371    .line 2038
label_cond_14:
	if ( android::icu::text::Bidi::NoOverride(embeddingLevel) <= android::icu::text::Bidi::NoOverride(cVar0) )
		goto label_cond_1f;
	cVar0 = embeddingLevel;
label_cond_1f:
	pLastIsoRun->limit = pLastIsoRun->start;
	pLastIsoRun->level = embeddingLevel;
	cVar1 = (unsigned char)(( cVar0 & 0x1));
	pLastIsoRun->contextDir = cVar1;
	pLastIsoRun->lastBase = cVar1;
	pLastIsoRun->lastStrong = cVar1;
	pLastIsoRun->contextPos = lastCcPos;
	return;

}
// .method private bracketProcessChar(Landroid/icu/text/Bidi$BracketData;I)V
void android::icu::text::Bidi::bracketProcessChar(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,int position)
{
	
	short pLastIsoRun;
	unsigned char dirProp;
	char c;
	int idx;
	unsigned char newProp;
	int c;
	char cVar0;
	unsigned char level;
	short i;
	short cVar1;
	int i;
	short cVar2;
	std::shared_ptr<unsigned char[]> cVar3;
	std::shared_ptr<unsigned char[]> cVar4;
	int cVar5;
	
	//    .param p1, "bd"    # Landroid/icu/text/Bidi$BracketData;
	//    .param p2, "position"    # I
	pLastIsoRun = bd->isoRuns[bd->isoRunLast];
	//    .local v8, "pLastIsoRun":Landroid/icu/text/Bidi$IsoRun;
	dirProp = this->dirProps[position];
	//    .local v1, "dirProp":B
	if ( dirProp != 0xa )
		goto label_cond_4c;
	c = this->text[position];
	//    .local v0, "c":C
	idx = ( pLastIsoRun->limit + -0x1);
	//    .local v4, "idx":I
label_goto_16:
	if ( idx <  pLastIsoRun->start )
		goto label_cond_2e;
	if ( bd->openings[idx]->match == c )
		goto label_cond_25;
	idx = ( idx + -0x1);
	goto label_goto_16;
	// 4469    .line 2215
label_cond_25:
	newProp = this->bracketProcessClosing(bd, idx, position);
	//    .local v7, "newProp":B
	if ( newProp != 0xa )
		goto label_cond_9a;
	c = 0x0;
	//    .end local v0    # "c":C
	//    .end local v7    # "newProp":B
label_cond_2e:
	if ( !(c) )  
		goto label_cond_de;
	cVar0 = (char)(android::icu::lang::UCharacter::getBidiPairedBracket(c));
label_goto_35:
	if ( cVar0 == c )
		goto label_cond_4c;
	if ( android::icu::lang::UCharacter::getIntPropertyValue(c, 0x1015) != 0x1 )
		goto label_cond_4c;
	if ( cVar0 != 0x232a )
		goto label_cond_e1;
	this->bracketAddOpening(bd, 0x3009, position);
label_cond_49:
label_goto_49:
	this->bracketAddOpening(bd, cVar0, position);
	//    .end local v4    # "idx":I
label_cond_4c:
	level = this->levels[position];
	//    .local v5, "level":B
	if ( !(( level & -0x80)) )  
		goto label_cond_ec;
	newProp = (unsigned char)(( level & 0x1));
	//    .restart local v7    # "newProp":B
	if ( dirProp == 0x8 )
		goto label_cond_67;
	if ( dirProp == 0x9 )
		goto label_cond_67;
	if ( dirProp == 0xa )
		goto label_cond_67;
	this->dirProps[position] = newProp;
label_cond_67:
	pLastIsoRun->lastBase = newProp;
	pLastIsoRun->lastStrong = newProp;
	pLastIsoRun->contextDir = newProp;
	pLastIsoRun->contextPos = position;
	//    .end local v7    # "newProp":B
label_cond_6f:
label_goto_6f:
	if ( newProp <= 0x1 )
		goto label_cond_76;
	if ( newProp != 0xd )
		goto label_cond_15a;
label_cond_76:
	//    .local v2, "flag":S
	i = pLastIsoRun->start;
	//    .local v3, "i":I
label_goto_81:
	if ( i >= pLastIsoRun->limit )
		goto label_cond_15a;
	if ( position <= bd->openings[i]->position )
		goto label_cond_97;
	cVar1 = bd->openings[i];
	cVar1->flags = (short)((cVar1->flags |  (short)(android::icu::text::Bidi::DirPropFlag(android::icu::text::Bidi::DirFromStrong(newProp)))));
label_cond_97:
	i = ( i + 0x1);
	goto label_goto_81;
	// 4641    .line 2220
	// 4642    .end local v2    # "flag":S
	// 4643    .end local v3    # "i":I
	// 4644    .end local v5    # "level":B
	// 4645    .restart local v0    # "c":C
	// 4646    .restart local v4    # "idx":I
	// 4647    .restart local v7    # "newProp":B
label_cond_9a:
	pLastIsoRun->lastBase = 0xa;
	pLastIsoRun->contextDir = newProp;
	pLastIsoRun->contextPos = position;
	level = this->levels[position];
	//    .restart local v5    # "level":B
	if ( !(( level & -0x80)) )  
		goto label_cond_ce;
	newProp = (unsigned char)(( level & 0x1));
	pLastIsoRun->lastStrong = newProp;
	//    .restart local v2    # "flag":S
	i = pLastIsoRun->start;
	//    .restart local v3    # "i":I
label_goto_b6:
	if ( i >= idx )
		goto label_cond_c5;
	cVar2 = bd->openings[i];
	cVar2->flags = (short)((cVar2->flags |  (short)(android::icu::text::Bidi::DirPropFlag(newProp))));
	i = ( i + 0x1);
	goto label_goto_b6;
	// 4711    .line 2233
label_cond_c5:
	cVar3 = this->levels;
	cVar3[position] = (unsigned char)(( cVar3[position] & 0x7f));
	//    .end local v2    # "flag":S
	//    .end local v3    # "i":I
label_cond_ce:
	cVar4 = this->levels;
	cVar5 = bd->openings[idx]->position;
	cVar4[cVar5] = (unsigned char)(( cVar4[cVar5] & 0x7f));
	return;
	// 4746    .line 2245
	// 4747    .end local v0    # "c":C
	// 4748    .end local v5    # "level":B
	// 4749    .end local v7    # "newProp":B
label_cond_de:
	cVar0 = 0x0;
	//    .local v6, "match":C
	goto label_goto_35;
	// 4756    .line 2254
	// 4757    .end local v6    # "match":C
label_cond_e1:
	if ( cVar0 != 0x3009 )
		goto label_cond_49;
	this->bracketAddOpening(bd, 0x232a, position);
	goto label_goto_49;
	// 4770    .line 2270
	// 4771    .end local v4    # "idx":I
	// 4772    .restart local v5    # "level":B
label_cond_ec:
	if ( dirProp <= 0x1 )
		goto label_cond_f3;
	if ( dirProp != 0xd )
		goto label_cond_101;
label_cond_f3:
	newProp = android::icu::text::Bidi::DirFromStrong(dirProp);
	//    .restart local v7    # "newProp":B
	pLastIsoRun->lastBase = dirProp;
	pLastIsoRun->lastStrong = dirProp;
	pLastIsoRun->contextDir = newProp;
	pLastIsoRun->contextPos = position;
	goto label_goto_6f;
	// 4803    .line 2277
	// 4804    .end local v7    # "newProp":B
label_cond_101:
	if ( dirProp != 0x2 )
		goto label_cond_137;
	pLastIsoRun->lastBase = 0x2;
	if ( pLastIsoRun->lastStrong )     
		goto label_cond_11d;
	newProp = 0x0;
	//    .local v7, "newProp":B
	if ( bd->isNumbersSpecial )     
		goto label_cond_116;
	this->dirProps[position] = 0x17;
label_cond_116:
	pLastIsoRun->contextDir = 0x0;
	pLastIsoRun->contextPos = position;
	goto label_goto_6f;
	// 4847    .line 2287
	// 4848    .end local v7    # "newProp":B
label_cond_11d:
	newProp = 0x1;
	//    .restart local v7    # "newProp":B
	if ( pLastIsoRun->lastStrong != 0xd )
		goto label_cond_130;
	this->dirProps[position] = 0x5;
label_goto_129:
	pLastIsoRun->contextDir = 0x1;
	pLastIsoRun->contextPos = position;
	goto label_goto_6f;
	// 4878    .line 2291
label_cond_130:
	this->dirProps[position] = 0x18;
	goto label_goto_129;
	// 4888    .line 2296
	// 4889    .end local v7    # "newProp":B
label_cond_137:
	if ( dirProp != 0x5 )
		goto label_cond_145;
	newProp = 0x1;
	//    .restart local v7    # "newProp":B
	pLastIsoRun->lastBase = 0x5;
	pLastIsoRun->contextDir = 0x1;
	pLastIsoRun->contextPos = position;
	goto label_goto_6f;
	// 4914    .line 2302
	// 4915    .end local v7    # "newProp":B
label_cond_145:
	if ( dirProp != 0x11 )
		goto label_cond_155;
	newProp = pLastIsoRun->lastBase;
	//    .local v7, "newProp":B
	if ( newProp != 0xa )
		goto label_cond_6f;
	this->dirProps[position] = newProp;
	goto label_goto_6f;
	// 4937    .line 2311
	// 4938    .end local v7    # "newProp":B
label_cond_155:
	newProp = dirProp;
	//    .restart local v7    # "newProp":B
	pLastIsoRun->lastBase = dirProp;
	goto label_goto_6f;
	// 4948    .line 2321
	// 4949    .end local v7    # "newProp":B
label_cond_15a:
	return;

}
// .method private bracketProcessClosing(Landroid/icu/text/Bidi$BracketData;II)B
unsigned char android::icu::text::Bidi::bracketProcessClosing(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,int openIdx,int position)
{
	
	int cVar0;
	unsigned char pLastIsoRun;
	short pOpening;
	unsigned char direction;
	int stable;
	unsigned char newProp;
	int k;
	int qOpening;
	
	//    .param p1, "bd"    # Landroid/icu/text/Bidi$BracketData;
	//    .param p2, "openIdx"    # I
	//    .param p3, "position"    # I
	cVar0 = 0x0;
	pLastIsoRun = bd->isoRuns[bd->isoRunLast];
	//    .local v4, "pLastIsoRun":Landroid/icu/text/Bidi$IsoRun;
	pOpening = bd->openings[openIdx];
	//    .local v5, "pOpening":Landroid/icu/text/Bidi$Opening;
	direction = (unsigned char)(( pLastIsoRun->level & 0x1));
	//    .local v0, "direction":B
	stable = 0x1;
	//    .local v7, "stable":Z
	if ( direction )     
		goto label_cond_4b;
	if ( (pOpening->flags &  android::icu::text::Bidi::FOUND_L) <= 0 )
		goto label_cond_4b;
label_cond_1a:
	newProp = direction;
	//    .local v3, "newProp":B
label_goto_1b:
	this->dirProps[pOpening->position] = newProp;
	this->dirProps[position] = newProp;
	this->fixN0c(bd, openIdx, pOpening->position, newProp);
	if ( !(stable) )  
		goto label_cond_75;
	pLastIsoRun->limit = (short)(openIdx);
label_goto_2f:
	if ( pLastIsoRun->limit <= pLastIsoRun->start )
		goto label_cond_a0;
	if ( bd->openings[( pLastIsoRun->limit + -0x1)]->position != pOpening->position )
		goto label_cond_a0;
	pLastIsoRun->limit = (short)(( pLastIsoRun->limit + -0x1));
	goto label_goto_2f;
	// 5065    .line 2152
	// 5066    .end local v3    # "newProp":B
label_cond_4b:
	if ( direction != 0x1 )
		goto label_cond_55;
	if ( (pOpening->flags &  android::icu::text::Bidi::FOUND_R) > 0 ) 
		goto label_cond_1a;
label_cond_55:
	if ( !((pOpening->flags &  (android::icu::text::Bidi::FOUND_L |  android::icu::text::Bidi::FOUND_R))) )  
		goto label_cond_6f;
	if ( openIdx != pLastIsoRun->start )
		goto label_cond_6b;
	stable = 0x1;
label_goto_64:
	if ( direction == pOpening->contextDir )
		goto label_cond_6d;
	newProp = pOpening->contextDir;
	//    .restart local v3    # "newProp":B
	goto label_goto_1b;
	// 5113    .line 2158
	// 5114    .end local v3    # "newProp":B
label_cond_6b:
	stable = 0x0;
	goto label_goto_64;
	// 5120    .line 2162
label_cond_6d:
	newProp = direction;
	//    .restart local v3    # "newProp":B
	goto label_goto_1b;
	// 5127    .line 2165
	// 5128    .end local v3    # "newProp":B
label_cond_6f:
	pLastIsoRun->limit = (short)(openIdx);
	return 0xa;
	// 5139    .line 2180
	// 5140    .restart local v3    # "newProp":B
label_cond_75:
	pOpening->match = (0 - position);
	k = ( openIdx + -0x1);
	//    .local v1, "k":I
label_goto_7a:
	if ( k <  pLastIsoRun->start )
		goto label_cond_92;
	if ( bd->openings[k]->position != pOpening->position )
		goto label_cond_92;
	k = ( k + -0x1);
	//    .end local v1    # "k":I
	//    .local v2, "k":I
	bd->openings[k]->match = cVar0;
	k = k;
	//    .end local v2    # "k":I
	//    .restart local v1    # "k":I
	goto label_goto_7a;
	// 5184    .line 2188
label_cond_92:
	k = ( openIdx + 0x1);
label_goto_94:
	if ( k >= pLastIsoRun->limit )
		goto label_cond_a0;
	qOpening = bd->openings[k];
	//    .local v6, "qOpening":Landroid/icu/text/Bidi$Opening;
	if ( qOpening->position <  position )
		goto label_cond_a1;
	//    .end local v1    # "k":I
	//    .end local v6    # "qOpening":Landroid/icu/text/Bidi$Opening;
label_cond_a0:
	return newProp;
	// 5210    .line 2192
	// 5211    .restart local v1    # "k":I
	// 5212    .restart local v6    # "qOpening":Landroid/icu/text/Bidi$Opening;
label_cond_a1:
	if ( qOpening->match <= 0 )
		goto label_cond_a7;
	qOpening->match = cVar0;
label_cond_a7:
	k = ( k + 0x1);
	goto label_goto_94;

}
// .method private bracketProcessLRI_RLI(Landroid/icu/text/Bidi$BracketData;B)V
void android::icu::text::Bidi::bracketProcessLRI_RLI(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,unsigned char level)
{
	
	std::shared_ptr<android::icu::text::Bidi_S_IsoRun> pLastIsoRun;
	short lastLimit;
	unsigned char cVar0;
	
	//    .param p1, "bd"    # Landroid/icu/text/Bidi$BracketData;
	//    .param p2, "level"    # B
	pLastIsoRun = bd->isoRuns[bd->isoRunLast];
	//    .local v1, "pLastIsoRun":Landroid/icu/text/Bidi$IsoRun;
	pLastIsoRun->lastBase = 0xa;
	lastLimit = pLastIsoRun->limit;
	//    .local v0, "lastLimit":S
	bd->isoRunLast = ( bd->isoRunLast + 0x1);
	pLastIsoRun = bd->isoRuns[bd->isoRunLast];
	if ( pLastIsoRun )     
		goto label_cond_25;
	//    .end local v1    # "pLastIsoRun":Landroid/icu/text/Bidi$IsoRun;
	pLastIsoRun = std::make_shared<android::icu::text::Bidi_S_IsoRun>();
	bd->isoRuns[bd->isoRunLast] = pLastIsoRun;
	//    .restart local v1    # "pLastIsoRun":Landroid/icu/text/Bidi$IsoRun;
label_cond_25:
	pLastIsoRun->limit = lastLimit;
	pLastIsoRun->start = lastLimit;
	pLastIsoRun->level = level;
	cVar0 = (unsigned char)(( level & 0x1));
	pLastIsoRun->contextDir = cVar0;
	pLastIsoRun->lastBase = cVar0;
	pLastIsoRun->lastStrong = cVar0;
	pLastIsoRun->contextPos = 0x0;
	return;

}
// .method private bracketProcessPDI(Landroid/icu/text/Bidi$BracketData;)V
void android::icu::text::Bidi::bracketProcessPDI(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd)
{
	
	//    .param p1, "bd"    # Landroid/icu/text/Bidi$BracketData;
	bd->isoRunLast = ( bd->isoRunLast + -0x1);
	//    .local v0, "pLastIsoRun":Landroid/icu/text/Bidi$IsoRun;
	bd->isoRuns[bd->isoRunLast]->lastBase = 0xa;
	return;

}
// .method private checkExplicitLevels()B
unsigned char android::icu::text::Bidi::checkExplicitLevels()
{
	
	int cVar0;
	int cVar1;
	int isolateCount;
	int currentParaIndex;
	int currentParaLimit;
	int i;
	unsigned char level;
	unsigned char dirProp;
	unsigned char currentParaLevel;
	int overrideFlag;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	cVar0 = 0x7;
	cVar1 = 0x0;
	isolateCount = 0x0;
	//    .local v5, "isolateCount":I
	this->flags = cVar1;
	this->isolateCount = cVar1;
	currentParaIndex = 0x0;
	//    .local v0, "currentParaIndex":I
	currentParaLimit = this->paras_limit[cVar1];
	//    .local v2, "currentParaLimit":I
	//    .local v1, "currentParaLevel":B
	i = 0x0;
	//    .local v4, "i":I
label_goto_f:
	if ( i >= this->length )
		goto label_cond_a6;
	level = this->levels[i];
	//    .local v6, "level":B
	dirProp = this->dirProps[i];
	//    .local v3, "dirProp":B
	if ( dirProp == 0x14 )
		goto label_cond_23;
	if ( dirProp != 0x15 )
		goto label_cond_5e;
label_cond_23:
	isolateCount = ( isolateCount + 0x1);
	if ( isolateCount <= this->isolateCount )
		goto label_cond_2b;
	this->isolateCount = isolateCount;
label_cond_2b:
label_goto_2b:
	if ( !(this->defaultParaLevel) )  
		goto label_cond_41;
	if ( i != currentParaLimit )
		goto label_cond_41;
	if ( ( currentParaIndex + 0x1) >= this->paraCount )
		goto label_cond_41;
	currentParaIndex = ( currentParaIndex + 0x1);
	currentParaLevel = this->paras_level[currentParaIndex];
	currentParaLimit = this->paras_limit[currentParaIndex];
label_cond_41:
	overrideFlag = ( level & -0x80);
	//    .local v7, "overrideFlag":I
	level = (unsigned char)(( level & 0x7f));
	if ( level <  this->paraLevel )
		goto label_cond_4c;
	if ( 0x7d >= level )
		goto label_cond_50;
label_cond_4c:
	if ( level )     
		goto label_cond_72;
	if ( dirProp != cVar0 )
		goto label_cond_69;
label_cond_50:
label_goto_50:
	if ( !(overrideFlag) )  
		goto label_cond_97;
	this->flags = (this->flags |  android::icu::text::Bidi::DirPropFlagO(level));
label_goto_5b:
	i = ( i + 0x1);
	goto label_goto_f;
	// 5487    .line 2670
	// 5488    .end local v7    # "overrideFlag":I
label_cond_5e:
	if ( dirProp != 0x16 )
		goto label_cond_65;
	( isolateCount + -0x1);
	goto label_goto_2b;
	// 5499    .line 2672
label_cond_65:
	if ( dirProp != cVar0 )
		goto label_cond_2b;
	0x0;
	goto label_goto_2b;
	// 5508    .line 2692
	// 5509    .restart local v7    # "overrideFlag":I
label_cond_69:
	level = currentParaLevel;
	this->levels[i] = (unsigned char)((level | overrideFlag));
	goto label_goto_50;
	// 5524    .line 2697
label_cond_72:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("level ")))->append(level)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" out of bounds at ")))->append(i)->toString());
	// throw
	throw cVar2;
	// 5562    .line 2706
label_cond_97:
	this->flags = (this->flags |  (android::icu::text::Bidi::DirPropFlagE(level) |  android::icu::text::Bidi::DirPropFlag(dirProp)));
	goto label_goto_5b;
	// 5582    .line 2709
	// 5583    .end local v3    # "dirProp":B
	// 5584    .end local v6    # "level":B
	// 5585    .end local v7    # "overrideFlag":I
label_cond_a6:
	if ( !((this->flags &  android::icu::text::Bidi::MASK_EMBEDDING)) )  
		goto label_cond_b8;
	this->flags = (this->flags |  android::icu::text::Bidi::DirPropFlagLR(this->paraLevel));
label_cond_b8:
	return this->directionFromFlags();

}
// .method private checkParaCount()V
void android::icu::text::Bidi::checkParaCount()
{
	
	int cVar0;
	int count;
	int oldLength;
	std::shared_ptr<java::lang::OutOfMemoryError> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	count = this->paraCount;
	//    .local v0, "count":I
	if ( count >  this->paras_level->size() )
		goto label_cond_9;
	return;
	// 5637    .line 1743
label_cond_9:
	oldLength = this->paras_level->size();
	//    .local v2, "oldLength":I
	//    .local v4, "saveLimits":[I
	//    .local v3, "saveLevels":[B
	try {
	//label_try_start_12:
	this->paras_limit = std::make_shared<std::vector<int[]>>(( count * 0x2));
	this->paras_level = std::make_shared<std::vector<unsigned char[]>>(( count * 0x2));
	//label_try_end_1c:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_27;
	}
	//    .catch Ljava/lang/Exception; {:try_start_12 .. :try_end_1c} :catch_27
	java::lang::System::arraycopy(this->paras_limit, cVar0, this->paras_limit, cVar0, oldLength);
	java::lang::System::arraycopy(this->paras_level, cVar0, this->paras_level, cVar0, oldLength);
	return;
	// 5682    .line 1749
label_catch_27:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	cVar1 = std::make_shared<java::lang::OutOfMemoryError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Failed to allocate memory for paras")));
	// throw
	throw cVar1;

}
// .method private directionFromFlags()B
unsigned char android::icu::text::Bidi::directionFromFlags()
{
	
	if ( (this->flags &  android::icu::text::Bidi::MASK_RTL) )     
		goto label_cond_1a;
	if ( !((this->flags &  android::icu::text::Bidi::DirPropFlag(0x5))) )  
		goto label_cond_19;
	if ( (this->flags &  android::icu::text::Bidi::MASK_POSSIBLE_N) )     
		goto label_cond_1a;
label_cond_19:
	return 0x0;
	// 5738    .line 2332
label_cond_1a:
	if ( (this->flags &  android::icu::text::Bidi::MASK_LTR) )     
		goto label_cond_23;
	return 0x1;
	// 5753    .line 2335
label_cond_23:
	return 0x2;

}
// .method private firstL_R_AL()B
unsigned char android::icu::text::Bidi::firstL_R_AL()
{
	
	unsigned char result;
	int i;
	int uchar;
	unsigned char dirProp;
	
	result = 0xa;
	//    .local v2, "result":B
	i = 0x0;
	//    .end local v2    # "result":B
	//    .local v1, "i":I
label_cond_3:
label_goto_3:
	if ( i >= this->prologue->length() )
		goto label_cond_31;
	uchar = this->prologue->codePointAt(i);
	//    .local v3, "uchar":I
	i = (i +  java::lang::Character::charCount(uchar));
	dirProp = (unsigned char)(this->getCustomizedClass(uchar));
	//    .local v0, "dirProp":B
	if ( result != 0xa )
		goto label_cond_2b;
	if ( !(dirProp) )  
		goto label_cond_24;
	if ( dirProp != 0x1 )
		goto label_cond_26;
label_cond_24:
label_goto_24:
	//    .local v2, "result":B
	goto label_goto_3;
	// 5826    .line 1722
	// 5827    .end local v2    # "result":B
label_cond_26:
	if ( dirProp != 0xd )
		goto label_cond_3;
	goto label_goto_24;
	// 5835    .line 1726
label_cond_2b:
	if ( dirProp != 0x7 )
		goto label_cond_3;
	//    .local v2, "result":B
	goto label_goto_3;
	// 5847    .line 1731
	// 5848    .end local v0    # "dirProp":B
	// 5849    .end local v2    # "result":B
	// 5850    .end local v3    # "uchar":I
label_cond_31:
	return result;

}
// .method private firstL_R_AL_EN_AN()B
unsigned char android::icu::text::Bidi::firstL_R_AL_EN_AN()
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	int i;
	int uchar;
	unsigned char dirProp;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	i = 0x0;
	//    .local v1, "i":I
label_cond_4:
	if ( i >= this->epilogue->length() )
		goto label_cond_2e;
	uchar = this->epilogue->codePointAt(i);
	//    .local v2, "uchar":I
	i = (i +  java::lang::Character::charCount(uchar));
	dirProp = (unsigned char)(this->getCustomizedClass(uchar));
	//    .local v0, "dirProp":B
	if ( dirProp )     
		goto label_cond_1f;
	return 0x0;
	// 5907    .line 3349
label_cond_1f:
	if ( dirProp == cVar1 )
		goto label_cond_25;
	if ( dirProp != 0xd )
		goto label_cond_26;
label_cond_25:
	return cVar1;
	// 5919    .line 3352
label_cond_26:
	if ( dirProp != cVar0 )
		goto label_cond_29;
	return cVar0;
	// 5926    .line 3355
label_cond_29:
	if ( dirProp != 0x5 )
		goto label_cond_4;
	return 0x3;
	// 5937    .line 3359
	// 5938    .end local v0    # "dirProp":B
	// 5939    .end local v2    # "uchar":I
label_cond_2e:
	return 0x4;

}
// .method private fixN0c(Landroid/icu/text/Bidi$BracketData;IIB)V
void android::icu::text::Bidi::fixN0c(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,int openingIndex,int newPropPosition,unsigned char newProp)
{
	
	int k;
	int qOpening;
	int openingPosition;
	int closingPosition;
	
	//    .param p1, "bd"    # Landroid/icu/text/Bidi$BracketData;
	//    .param p2, "openingIndex"    # I
	//    .param p3, "newPropPosition"    # I
	//    .param p4, "newProp"    # B
	//    .local v3, "pLastIsoRun":Landroid/icu/text/Bidi$IsoRun;
	k = ( openingIndex + 0x1);
	//    .local v1, "k":I
label_goto_9:
	if ( k >= bd->isoRuns[bd->isoRunLast]->limit )
		goto label_cond_1c;
	qOpening = bd->openings[k];
	//    .local v4, "qOpening":Landroid/icu/text/Bidi$Opening;
	if ( qOpening->match < 0 ) 
		goto label_cond_18;
label_cond_15:
label_goto_15:
	k = ( k + 0x1);
	goto label_goto_9;
	// 5991    .line 2106
label_cond_18:
	if ( newPropPosition >= qOpening->contextPos )
		goto label_cond_1d;
	//    .end local v4    # "qOpening":Landroid/icu/text/Bidi$Opening;
label_cond_1c:
	return;
	// 6002    .line 2108
	// 6003    .restart local v4    # "qOpening":Landroid/icu/text/Bidi$Opening;
label_cond_1d:
	if ( newPropPosition >= qOpening->position )
		goto label_cond_15;
	if ( newProp == qOpening->contextDir )
		goto label_cond_1c;
	openingPosition = qOpening->position;
	//    .local v2, "openingPosition":I
	this->dirProps[openingPosition] = newProp;
	closingPosition = (0 - qOpening->match);
	//    .local v0, "closingPosition":I
	this->dirProps[closingPosition] = newProp;
	qOpening->match = 0x0;
	this->fixN0c(bd, k, openingPosition, newProp);
	this->fixN0c(bd, k, closingPosition, newProp);
	goto label_goto_15;

}
// .method public static getBaseDirection(Ljava/lang/CharSequence;)B
unsigned char android::icu::text::Bidi::getBaseDirection(std::shared_ptr<java::lang::CharSequence> paragraph)
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	int i;
	int direction;
	
	//    .param p0, "paragraph"    # Ljava/lang/CharSequence;
	cVar0 = 0x3;
	cVar1 = 0x1;
	if ( !(paragraph) )  
		goto label_cond_b;
	if ( paragraph->length() )     
		goto label_cond_c;
label_cond_b:
	return cVar0;
	// 6070    .line 1688
label_cond_c:
	//    .local v3, "length":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_11:
	if ( i >= paragraph->length() )
		goto label_cond_2a;
	//    .local v0, "c":I
	direction = android::icu::lang::UCharacter::getDirectionality(android::icu::lang::UCharacter::codePointAt(paragraph, i));
	//    .local v1, "direction":B
	if ( direction )     
		goto label_cond_1e;
	return 0x0;
	// 6102    .line 1698
label_cond_1e:
	if ( direction == cVar1 )
		goto label_cond_24;
	if ( direction != 0xd )
		goto label_cond_25;
label_cond_24:
	return cVar1;
	// 6115    .line 1703
label_cond_25:
	i = android::icu::lang::UCharacter::offsetByCodePoints(paragraph, i, cVar1);
	goto label_goto_11;
	// 6123    .line 1705
	// 6124    .end local v0    # "c":I
	// 6125    .end local v1    # "direction":B
label_cond_2a:
	return cVar0;

}
// .method private getDirProps()V
void android::icu::text::Bidi::getDirProps()
{
	
	int i;
	int isDefaultLevel;
	int isDefaultLevelInverse;
	int controlCount;
	int lastStrong;
	std::shared<std::vector<int[]>> isolateStartStack;
	std::shared<std::vector<unsigned char[]>> previousStateStack;
	int stackLast;
	unsigned char defaultParaLevel;
	int dirProp;
	int state;
	int i0;
	int uchar;
	int i1;
	unsigned char dirProp;
	unsigned char state;
	
	i = 0x0;
	//    .local v6, "i":I
	this->flags = 0x0;
	0x0;
	//    .local v4, "defaultParaLevel":B
	isDefaultLevel = android::icu::text::Bidi::IsDefaultLevel(this->paraLevel);
	//    .local v9, "isDefaultLevel":Z
	if ( !(isDefaultLevel) )  
		goto label_cond_148;
	if ( this->reorderingMode == 0x5 )
		goto label_cond_142;
	if ( this->reorderingMode != 0x6 )
		goto label_cond_145;
	isDefaultLevelInverse = 0x1;
	//    .local v10, "isDefaultLevelInverse":Z
label_goto_33:
	this->lastArabicPos = -0x1;
	controlCount = 0x0;
	//    .local v3, "controlCount":I
	if ( !(( this->reorderingOptions & 0x2)) )  
		goto label_cond_14b;
	//    .local v14, "removeBidiControls":Z
label_goto_47:
	lastStrong = 0xa;
	//    .local v12, "lastStrong":B
	isolateStartStack = std::make_shared<std::vector<int[]>>(0x7e);
	//    .local v11, "isolateStartStack":[I
	previousStateStack = std::make_shared<std::vector<unsigned char[]>>(0x7e);
	//    .local v13, "previousStateStack":[B
	stackLast = -0x1;
	//    .local v15, "stackLast":I
	if ( !(( this->reorderingOptions & 0x4)) )  
		goto label_cond_68;
	this->length = 0x0;
label_cond_68:
	defaultParaLevel = (unsigned char)(( this->paraLevel & 0x1));
	//    .local v4, "defaultParaLevel":B
	if ( !(isDefaultLevel) )  
		goto label_cond_160;
	this->paras_level[0x0] = defaultParaLevel;
	lastStrong = defaultParaLevel;
	//    .local v12, "lastStrong":B
	if ( !(this->prologue) )  
		goto label_cond_15c;
	dirProp = this->firstL_R_AL();
	//    .local v5, "dirProp":B
	if ( dirProp == 0xa )
		goto label_cond_15c;
	if ( dirProp )     
		goto label_cond_14e;
	this->paras_level[0x0] = 0x0;
label_goto_a0:
	state = 0x0;
	//    .end local v5    # "dirProp":B
	//    .end local v12    # "lastStrong":B
	//    .local v16, "state":B
label_goto_a2:
	i = 0x0;
	//    .end local v16    # "state":B
label_cond_a3:
label_goto_a3:
	if ( i >= this->originalLength )
		goto label_cond_31d;
	i0 = i;
	//    .local v7, "i0":I
	uchar = android::icu::text::UTF16::charAt(this->text, 0x0, this->originalLength, i);
	//    .local v17, "uchar":I
	i = (i + android::icu::text::UTF16::getCharCount(uchar));
	i1 = ( i + -0x1);
	//    .local v8, "i1":I
	dirProp = (unsigned char)(this->getCustomizedClass(uchar));
	//    .restart local v5    # "dirProp":B
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(dirProp));
	this->dirProps[i1] = dirProp;
	if ( i1 <= i0 )
		goto label_cond_117;
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(0x12));
label_cond_109:
	i1 = ( i1 + -0x1);
	this->dirProps[i1] = 0x12;
	if ( i1 >  i0 )
		goto label_cond_109;
label_cond_117:
	if ( !(0x1) )  
		goto label_cond_121;
	if ( !(android::icu::text::Bidi::IsBidiControlChar(uchar)) )  
		goto label_cond_121;
	controlCount = ( controlCount + 0x1);
label_cond_121:
	if ( dirProp )     
		goto label_cond_199;
	if ( state != 0x1 )
		goto label_cond_174;
	this->paras_level[( this->paraCount + -0x1)] = 0x0;
	state = 0x0;
label_cond_13f:
label_goto_13f:
	lastStrong = 0x0;
	//    .local v12, "lastStrong":B
	goto label_goto_a3;
	// 6547    .line 1780
	// 6548    .end local v3    # "controlCount":I
	// 6549    .end local v5    # "dirProp":B
	// 6550    .end local v7    # "i0":I
	// 6551    .end local v8    # "i1":I
	// 6552    .end local v10    # "isDefaultLevelInverse":Z
	// 6553    .end local v11    # "isolateStartStack":[I
	// 6554    .end local v12    # "lastStrong":B
	// 6555    .end local v13    # "previousStateStack":[B
	// 6556    .end local v14    # "removeBidiControls":Z
	// 6557    .end local v15    # "stackLast":I
	// 6558    .end local v17    # "uchar":I
	// 6559    .local v4, "defaultParaLevel":B
label_cond_142:
	//    .restart local v10    # "isDefaultLevelInverse":Z
	goto label_goto_33;
	// 6566    .line 1781
	// 6567    .end local v10    # "isDefaultLevelInverse":Z
label_cond_145:
	//    .restart local v10    # "isDefaultLevelInverse":Z
	goto label_goto_33;
	// 6574    .line 1779
	// 6575    .end local v10    # "isDefaultLevelInverse":Z
label_cond_148:
	//    .restart local v10    # "isDefaultLevelInverse":Z
	goto label_goto_33;
	// 6582    .line 1784
	// 6583    .restart local v3    # "controlCount":I
label_cond_14b:
	0x0;
	//    .restart local v14    # "removeBidiControls":Z
	goto label_goto_47;
	// 6590    .line 1814
	// 6591    .local v4, "defaultParaLevel":B
	// 6592    .restart local v5    # "dirProp":B
	// 6593    .restart local v11    # "isolateStartStack":[I
	// 6594    .local v12, "lastStrong":B
	// 6595    .restart local v13    # "previousStateStack":[B
	// 6596    .restart local v15    # "stackLast":I
label_cond_14e:
	this->paras_level[0x0] = 0x1;
	goto label_goto_a0;
	// 6612    .line 1817
	// 6613    .end local v5    # "dirProp":B
label_cond_15c:
	state = 0x1;
	//    .restart local v16    # "state":B
	goto label_goto_a2;
	// 6620    .line 1820
	// 6621    .end local v16    # "state":B
	// 6622    .local v12, "lastStrong":B
label_cond_160:
	this->paras_level[0x0] = this->paraLevel;
	state = 0x0;
	//    .restart local v16    # "state":B
	goto label_goto_a2;
	// 6646    .line 1853
	// 6647    .end local v12    # "lastStrong":B
	// 6648    .end local v16    # "state":B
	// 6649    .restart local v5    # "dirProp":B
	// 6650    .restart local v7    # "i0":I
	// 6651    .restart local v8    # "i1":I
	// 6652    .restart local v17    # "uchar":I
label_cond_174:
	if ( state != 0x2 )
		goto label_cond_13f;
	if ( stackLast >  0x7d )
		goto label_cond_196;
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(0x14));
label_cond_196:
	state = 0x3;
	//    .restart local v16    # "state":B
	goto label_goto_13f;
	// 6697    .line 1864
	// 6698    .end local v16    # "state":B
label_cond_199:
	if ( dirProp == 0x1 )
		goto label_cond_1a5;
	if ( dirProp != 0xd )
		goto label_cond_203;
label_cond_1a5:
	if ( state != 0x1 )
		goto label_cond_1d2;
	this->paras_level[( this->paraCount + -0x1)] = 0x1;
	state = 0x0;
label_cond_1c1:
label_goto_1c1:
	lastStrong = 0x1;
	//    .restart local v12    # "lastStrong":B
	if ( dirProp != 0xd )
		goto label_cond_a3;
	this->lastArabicPos = ( i + -0x1);
	goto label_goto_a3;
	// 6768    .line 1869
	// 6769    .end local v12    # "lastStrong":B
label_cond_1d2:
	if ( state != 0x2 )
		goto label_cond_1c1;
	if ( stackLast >  0x7d )
		goto label_cond_200;
	this->dirProps[isolateStartStack[stackLast]] = 0x15;
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(0x15));
label_cond_200:
	state = 0x3;
	//    .restart local v16    # "state":B
	goto label_goto_1c1;
	// 6827    .line 1881
	// 6828    .end local v16    # "state":B
label_cond_203:
	if ( dirProp <  0x13 )
		goto label_cond_237;
	if ( dirProp >  0x15 )
		goto label_cond_237;
	stackLast = ( stackLast + 0x1);
	if ( stackLast >  0x7d )
		goto label_cond_21d;
	isolateStartStack[stackLast] = ( i + -0x1);
	previousStateStack[stackLast] = state;
label_cond_21d:
	if ( dirProp != 0x13 )
		goto label_cond_233;
	this->dirProps[( i + -0x1)] = 0x14;
	state = 0x2;
	//    .restart local v16    # "state":B
	goto label_goto_a3;
	// 6887    .line 1892
	// 6888    .end local v16    # "state":B
label_cond_233:
	state = 0x3;
	//    .restart local v16    # "state":B
	goto label_goto_a3;
	// 6895    .line 1895
	// 6896    .end local v16    # "state":B
label_cond_237:
	if ( dirProp != 0x16 )
		goto label_cond_26d;
	if ( state != 0x2 )
		goto label_cond_25f;
	if ( stackLast >  0x7d )
		goto label_cond_25f;
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(0x14));
label_cond_25f:
	if ( stackLast < 0 ) 
		goto label_cond_a3;
	if ( stackLast >  0x7d )
		goto label_cond_269;
	state = previousStateStack[stackLast];
label_cond_269:
	stackLast = ( stackLast + -0x1);
	goto label_goto_a3;
	// 6961    .line 1910
label_cond_26d:
	if ( dirProp != 0x7 )
		goto label_cond_a3;
	if ( i >= this->originalLength )
		goto label_cond_295;
	if ( uchar != 0xd )
		goto label_cond_295;
	if ( this->text[i] == 0xa )
		goto label_cond_a3;
label_cond_295:
	this->paras_limit[( this->paraCount + -0x1)] = i;
	if ( !(isDefaultLevelInverse) )  
		goto label_cond_2bf;
	if ( lastStrong != 0x1 )
		goto label_cond_2bf;
	this->paras_level[( this->paraCount + -0x1)] = 0x1;
label_cond_2bf:
	if ( !(( this->reorderingOptions & 0x4)) )  
		goto label_cond_2d1;
	this->length = i;
	this->controlCount = controlCount;
label_cond_2d1:
	if ( i >= this->originalLength )
		goto label_cond_a3;
	this->paraCount = ( this->paraCount + 0x1);
	this->checkParaCount();
	if ( !(isDefaultLevel) )  
		goto label_cond_304;
	this->paras_level[( this->paraCount + -0x1)] = defaultParaLevel;
	state = 0x1;
	//    .restart local v16    # "state":B
	lastStrong = defaultParaLevel;
label_goto_301:
	-0x1;
	goto label_goto_a3;
	// 7135    .line 1930
	// 7136    .end local v16    # "state":B
label_cond_304:
	this->paras_level[( this->paraCount + -0x1)] = this->paraLevel;
	state = 0x0;
	//    .restart local v16    # "state":B
	goto label_goto_301;
	// 7166    .line 1939
	// 7167    .end local v5    # "dirProp":B
	// 7168    .end local v7    # "i0":I
	// 7169    .end local v8    # "i1":I
	// 7170    .end local v16    # "state":B
	// 7171    .end local v17    # "uchar":I
label_cond_31d:
	if ( stackLast <= 0x7d )
		goto label_cond_327;
	stackLast = 0x7d;
	state = 0x2;
label_cond_327:
label_goto_327:
	if ( stackLast < 0 ) 
		goto label_cond_345;
	if ( state != 0x2 )
		goto label_cond_3c3;
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(0x14));
label_cond_345:
	if ( !(( this->reorderingOptions & 0x4)) )  
		goto label_cond_3c9;
	if ( this->length >= this->originalLength )
		goto label_cond_36f;
	this->paraCount = ( this->paraCount + -0x1);
label_cond_36f:
label_goto_36f:
	if ( !(isDefaultLevelInverse) )  
		goto label_cond_389;
	if ( lastStrong != 0x1 )
		goto label_cond_389;
	this->paras_level[( this->paraCount + -0x1)] = 0x1;
label_cond_389:
	if ( !(isDefaultLevel) )  
		goto label_cond_39b;
	this->paraLevel = this->paras_level[0x0];
label_cond_39b:
	i = 0x0;
label_goto_39c:
	if ( i >= this->paraCount )
		goto label_cond_3e4;
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlagLR(this->paras_level[i]));
	i = ( i + 0x1);
	goto label_goto_39c;
	// 7364    .line 1951
label_cond_3c3:
	state = previousStateStack[stackLast];
	//    .local v16, "state":B
	stackLast = ( stackLast + -0x1);
	goto label_goto_327;
	// 7374    .line 1959
	// 7375    .end local v16    # "state":B
label_cond_3c9:
	this->paras_limit[( this->paraCount + -0x1)] = this->originalLength;
	this->controlCount = controlCount;
	goto label_goto_36f;
	// 7406    .line 1975
label_cond_3e4:
	if ( !(this->orderParagraphsLTR) )  
		goto label_cond_410;
	if ( !((this->flags & android::icu::text::Bidi::DirPropFlag(0x7))) )  
		goto label_cond_410;
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(0x0));
label_cond_410:
	return;

}
// .method private getDirPropsMemory(ZI)V
void android::icu::text::Bidi::getDirPropsMemory(bool mayAllocate,int len)
{
	
	std::shared_ptr<unsigned char[]> array;
	
	//    .param p1, "mayAllocate"    # Z
	//    .param p2, "len"    # I
	array = this->getMemory(std::make_shared<java::lang::String>(std::make_shared<char[]>("DirProps")), this->dirPropsMemory, java::lang::Byte::TYPE, mayAllocate, len);
	//    .local v6, "array":Ljava/lang/Object;
	array->checkCast("unsigned char[]");
	//    .end local v6    # "array":Ljava/lang/Object;
	this->dirPropsMemory = array;
	return;

}
// .method private getInitialDirPropsMemory(I)V
void android::icu::text::Bidi::getInitialDirPropsMemory(int len)
{
	
	//    .param p1, "len"    # I
	this->getDirPropsMemory(0x1, len);
	return;

}
// .method private getInitialLevelsMemory(I)V
void android::icu::text::Bidi::getInitialLevelsMemory(int len)
{
	
	//    .param p1, "len"    # I
	this->getLevelsMemory(0x1, len);
	return;

}
// .method private getInitialRunsMemory(I)V
void android::icu::text::Bidi::getInitialRunsMemory(int len)
{
	
	//    .param p1, "len"    # I
	this->getRunsMemory(0x1, len);
	return;

}
// .method private getLevelsMemory(ZI)V
void android::icu::text::Bidi::getLevelsMemory(bool mayAllocate,int len)
{
	
	std::shared_ptr<unsigned char[]> array;
	
	//    .param p1, "mayAllocate"    # Z
	//    .param p2, "len"    # I
	array = this->getMemory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Levels")), this->levelsMemory, java::lang::Byte::TYPE, mayAllocate, len);
	//    .local v6, "array":Ljava/lang/Object;
	array->checkCast("unsigned char[]");
	//    .end local v6    # "array":Ljava/lang/Object;
	this->levelsMemory = array;
	return;

}
// .method private getMemory(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;ZI)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::Bidi::getMemory(std::shared_ptr<java::lang::String> label,std::shared_ptr<java::lang::Object> array,std::shared_ptr<java::lang::Class<java::lang::Object>> arrayClass,bool mayAllocate,int sizeNeeded)
{
	
	int len;
	std::shared_ptr<java::lang::OutOfMemoryError> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::OutOfMemoryError> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "label"    # Ljava/lang/String;
	//    .param p2, "array"    # Ljava/lang/Object;
	//    .param p4, "mayAllocate"    # Z
	//    .param p5, "sizeNeeded"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 7575        value = {
	// 7576            "(",
	// 7577            "Ljava/lang/String;",
	// 7578            "Ljava/lang/Object;",
	// 7579            "Ljava/lang/Class",
	// 7580            "<*>;ZI)",
	// 7581            "Ljava/lang/Object;"
	// 7582        }
	// 7583    .end annotation
	//    .local p3, "arrayClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	len = java::lang::reflect::Array::getLength(array);
	//    .local v1, "len":I
	if ( sizeNeeded != len )
		goto label_cond_7;
	return array;
	// 7599    .line 1313
label_cond_7:
	if ( mayAllocate )     
		goto label_cond_26;
	if ( sizeNeeded >  len )
		goto label_cond_c;
	return array;
	// 7609    .line 1318
label_cond_c:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::OutOfMemoryError>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Failed to allocate memory for ")))->append(label)->toString());
	// throw
	throw cVar0;
	// 7635    .line 1325
label_cond_26:
	try {
	//label_try_start_26:
	//label_try_end_29:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2b;
	}
	//    .catch Ljava/lang/Exception; {:try_start_26 .. :try_end_29} :catch_2b
	return java::lang::reflect::Array::newInstance(arrayClass, sizeNeeded);
	// 7646    .line 1326
label_catch_2b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::OutOfMemoryError>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Failed to allocate memory for ")))->append(label)->toString());
	// throw
	throw cVar2;

}
// .method private getRunsMemory(ZI)V
void android::icu::text::Bidi::getRunsMemory(bool mayAllocate,int len)
{
	
	std::shared_ptr<std::vector<android::icu::text::BidiRun>> array;
	
	//    .param p1, "mayAllocate"    # Z
	//    .param p2, "len"    # I
	array = this->getMemory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Runs")), this->runsMemory, android::icu::text::BidiRun(), mayAllocate, len);
	//    .local v6, "array":Ljava/lang/Object;
	array->checkCast("std::vector<android::icu::text::BidiRun>");
	//    .end local v6    # "array":Ljava/lang/Object;
	this->runsMemory = array;
	return;

}
// .method public static invertMap([I)[I
int android::icu::text::Bidi::invertMap(std::shared_ptr<int[]> srcMap)
{
	
	//    .param p0, "srcMap"    # [I
	if ( srcMap )     
		goto label_cond_4;
	return 0x0;
	// 7724    .line 5156
label_cond_4:
	return android::icu::text::BidiLine::invertMap(srcMap);

}
// .method private lastL_R_AL()B
unsigned char android::icu::text::Bidi::lastL_R_AL()
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	int i;
	int uchar;
	unsigned char dirProp;
	
	cVar0 = 0x4;
	cVar1 = 0x1;
	i = this->prologue->length();
	//    .local v1, "i":I
label_cond_9:
	if ( i <= 0 )
		goto label_cond_29;
	uchar = this->prologue->codePointBefore(i);
	//    .local v2, "uchar":I
	i = (i -  java::lang::Character::charCount(uchar));
	dirProp = (unsigned char)(this->getCustomizedClass(uchar));
	//    .local v0, "dirProp":B
	if ( dirProp )     
		goto label_cond_1e;
	return 0x0;
	// 7783    .line 3327
label_cond_1e:
	if ( dirProp == cVar1 )
		goto label_cond_24;
	if ( dirProp != 0xd )
		goto label_cond_25;
label_cond_24:
	return cVar1;
	// 7795    .line 3330
label_cond_25:
	if ( dirProp != 0x7 )
		goto label_cond_9;
	return cVar0;
	// 7804    .line 3334
	// 7805    .end local v0    # "dirProp":B
	// 7806    .end local v2    # "uchar":I
label_cond_29:
	return cVar0;

}
// .method private processPropertySeq(Landroid/icu/text/Bidi$LevState;SII)V
void android::icu::text::Bidi::processPropertySeq(std::shared_ptr<android::icu::text::Bidi_S_LevState> levState,short _prop,int start,int limit)
{
	
	std::shared_ptr<unsigned char[][]> impTab;
	int start0;
	short oldStateSeq;
	unsigned char cell;
	short actionSeq;
	unsigned char addLevel;
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	unsigned char level;
	int k;
	int start;
	std::shared_ptr<unsigned char[]> cVar3;
	std::shared_ptr<unsigned char[]> cVar4;
	
	//    .param p1, "levState"    # Landroid/icu/text/Bidi$LevState;
	//    .param p2, "_prop"    # S
	//    .param p3, "start"    # I
	//    .param p4, "limit"    # I
	impTab = levState->impTab;
	//    .local v6, "impTab":[[B
	//    .local v5, "impAct":[S
	start0 = start;
	//    .local v11, "start0":I
	oldStateSeq = levState->state;
	//    .local v10, "oldStateSeq":S
	cell = impTab[oldStateSeq][_prop];
	//    .local v4, "cell":B
	levState->state = android::icu::text::Bidi::GetState(cell);
	actionSeq = levState->impAct[android::icu::text::Bidi::GetAction(cell)];
	//    .local v2, "actionSeq":S
	addLevel = impTab[levState->state][0x7];
	//    .local v3, "addLevel":B
	if ( !(actionSeq) )  
		goto label_cond_31;
	// switch
	{
	auto item = ( actionSeq );
	if (item == 1) goto label_pswitch_2d;
	if (item == 2) goto label_pswitch_4e;
	if (item == 3) goto label_pswitch_53;
	if (item == 4) goto label_pswitch_60;
	if (item == 5) goto label_pswitch_6d;
	if (item == 6) goto label_pswitch_e9;
	if (item == 7) goto label_pswitch_104;
	if (item == 8) goto label_pswitch_140;
	if (item == 9) goto label_pswitch_149;
	if (item == 10) goto label_pswitch_16c;
	if (item == 11) goto label_pswitch_17a;
	if (item == 12) goto label_pswitch_197;
	if (item == 13) goto label_pswitch_1bc;
	if (item == 14) goto label_pswitch_201;
	}
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal ICU error in processPropertySeq")));
	// throw
	throw cVar0;
	// 7881    .line 3140
label_pswitch_2d:
	levState->startON = start;
label_cond_31:
label_goto_31:
	if ( addLevel )     
		goto label_cond_37;
	if ( start >= start0 )
		goto label_cond_225;
label_cond_37:
	level = (unsigned char)((levState->runLevel +  addLevel));
	//    .local v9, "level":B
	if ( start <  levState->runStart )
		goto label_cond_21e;
	k = start;
	//    .local v7, "k":I
label_goto_43:
	if ( k >= limit )
		goto label_cond_225;
	this->levels[k] = level;
	k = ( k + 0x1);
	goto label_goto_43;
	// 7931    .line 3144
	// 7932    .end local v7    # "k":I
	// 7933    .end local v9    # "level":B
label_pswitch_4e:
	start = levState->startON;
	goto label_goto_31;
	// 7941    .line 3148
label_pswitch_53:
	//    .restart local v9    # "level":B
	this->setLevelsOutsideIsolates(levState->startON, start, (unsigned char)(( levState->runLevel + 0x1)));
	goto label_goto_31;
	// 7959    .line 3153
	// 7960    .end local v9    # "level":B
label_pswitch_60:
	//    .restart local v9    # "level":B
	this->setLevelsOutsideIsolates(levState->startON, start, (unsigned char)(( levState->runLevel + 0x2)));
	goto label_goto_31;
	// 7978    .line 3159
	// 7979    .end local v9    # "level":B
label_pswitch_6d:
	if ( levState->startL2EN < 0 ) 
		goto label_cond_77;
	this->addPoint(levState->startL2EN, 0x1);
label_cond_77:
	levState->startL2EN = -0x1;
	if ( !(this->insertPoints->points->size()) )  
		goto label_cond_8b;
	if ( this->insertPoints->size >  this->insertPoints->confirmed )
		goto label_cond_b1;
label_cond_8b:
	levState->lastStrongRTL = -0x1;
	//    .restart local v9    # "level":B
	if ( !(( impTab[oldStateSeq][0x7] & 0x1)) )  
		goto label_cond_9f;
	if ( levState->startON <= 0 )
		goto label_cond_9f;
	start = levState->startON;
label_cond_9f:
	if ( _prop != 0x5 )
		goto label_cond_31;
	this->addPoint(start0, 0x1);
	this->insertPoints->confirmed = this->insertPoints->size;
	goto label_goto_31;
	// 8070    .line 3180
	// 8071    .end local v9    # "level":B
label_cond_b1:
	k = ( levState->lastStrongRTL + 0x1);
	//    .restart local v7    # "k":I
label_goto_b5:
	if ( k >= start )
		goto label_cond_c9;
	this->levels[k] = (unsigned char)(( ( this->levels[k] + -0x2) & -0x2));
	k = ( k + 0x1);
	goto label_goto_b5;
	// 8103    .line 3185
label_cond_c9:
	this->insertPoints->confirmed = this->insertPoints->size;
	levState->lastStrongRTL = -0x1;
	if ( _prop != 0x5 )
		goto label_cond_31;
	this->addPoint(start, 0x1);
	this->insertPoints->confirmed = this->insertPoints->size;
	goto label_goto_31;
	// 8143    .line 3195
	// 8144    .end local v7    # "k":I
label_pswitch_e9:
	if ( this->insertPoints->points->size() <= 0 )
		goto label_cond_f8;
	this->insertPoints->size = this->insertPoints->confirmed;
label_cond_f8:
	levState->startON = -0x1;
	levState->startL2EN = -0x1;
	levState->lastStrongRTL = ( limit + -0x1);
	goto label_goto_31;
	// 8181    .line 3205
label_pswitch_104:
	if ( _prop != 0x3 )
		goto label_cond_135;
	if ( this->dirProps[start] != 0x5 )
		goto label_cond_135;
	if ( this->reorderingMode == 0x6 )
		goto label_cond_135;
	if ( levState->startL2EN != -0x1 )
		goto label_cond_120;
	levState->lastStrongRTL = ( limit + -0x1);
	goto label_goto_31;
	// 8218    .line 3214
label_cond_120:
	if ( levState->startL2EN < 0 ) 
		goto label_cond_12d;
	this->addPoint(levState->startL2EN, 0x1);
	levState->startL2EN = -0x2;
label_cond_12d:
	this->addPoint(start, 0x1);
	goto label_goto_31;
	// 8246    .line 3223
label_cond_135:
	if ( levState->startL2EN != -0x1 )
		goto label_cond_31;
	levState->startL2EN = start;
	goto label_goto_31;
	// 8261    .line 3229
label_pswitch_140:
	levState->lastStrongRTL = ( limit + -0x1);
	levState->startON = -0x1;
	goto label_goto_31;
	// 8274    .line 3235
label_pswitch_149:
	k = ( start + -0x1);
	//    .restart local v7    # "k":I
label_goto_14b:
	if ( k < 0 ) 
		goto label_cond_158;
	if ( ( this->levels[k] & 0x1) )     
		goto label_cond_158;
	k = ( k + -0x1);
	goto label_goto_14b;
	// 8294    .line 3237
label_cond_158:
	if ( k < 0 ) 
		goto label_cond_166;
	this->addPoint(k, 0x4);
	this->insertPoints->confirmed = this->insertPoints->size;
label_cond_166:
	levState->startON = start;
	goto label_goto_31;
	// 8320    .line 3247
	// 8321    .end local v7    # "k":I
label_pswitch_16c:
	this->addPoint(start, 0x1);
	this->addPoint(start, 0x2);
	goto label_goto_31;
	// 8338    .line 3253
label_pswitch_17a:
	this->insertPoints->size = this->insertPoints->confirmed;
	if ( _prop != 0x5 )
		goto label_cond_31;
	this->addPoint(start, 0x4);
	this->insertPoints->confirmed = this->insertPoints->size;
	goto label_goto_31;
	// 8373    .line 3261
label_pswitch_197:
	level = (unsigned char)((levState->runLevel +  addLevel));
	//    .restart local v9    # "level":B
	k = levState->startON;
	//    .restart local v7    # "k":I
label_goto_19d:
	if ( k >= start )
		goto label_cond_1ae;
	if ( this->levels[k] >= level )
		goto label_cond_1ab;
	this->levels[k] = level;
label_cond_1ab:
	k = ( k + 0x1);
	goto label_goto_19d;
	// 8409    .line 3267
label_cond_1ae:
	this->insertPoints->confirmed = this->insertPoints->size;
	levState->startON = start;
	goto label_goto_31;
	// 8426    .line 3272
	// 8427    .end local v7    # "k":I
	// 8428    .end local v9    # "level":B
label_pswitch_1bc:
	level = levState->runLevel;
	//    .restart local v9    # "level":B
	k = ( start + -0x1);
	//    .restart local v7    # "k":I
label_goto_1c0:
	if ( k <  levState->startON )
		goto label_cond_31;
	if ( this->levels[k] != ( level + 0x3) )
		goto label_cond_1ea;
label_goto_1cc:
	if ( this->levels[k] != ( level + 0x3) )
		goto label_cond_1e1;
	cVar3 = this->levels;
	k = ( k + -0x1);
	//    .end local v7    # "k":I
	//    .local v8, "k":I
	cVar3[k] = (unsigned char)(( cVar3[k] + -0x2));
	k = k;
	//    .end local v8    # "k":I
	//    .restart local v7    # "k":I
	goto label_goto_1cc;
	// 8482    .line 3278
label_cond_1e1:
label_goto_1e1:
	if ( this->levels[k] != level )
		goto label_cond_1ea;
	k = ( k + -0x1);
	goto label_goto_1e1;
	// 8496    .line 3282
label_cond_1ea:
	if ( this->levels[k] != ( level + 0x2) )
		goto label_cond_1f9;
	this->levels[k] = level;
label_goto_1f6:
	k = ( k + -0x1);
	goto label_goto_1c0;
	// 8517    .line 3286
label_cond_1f9:
	this->levels[k] = (unsigned char)(( level + 0x1));
	goto label_goto_1f6;
	// 8529    .line 3291
	// 8530    .end local v7    # "k":I
	// 8531    .end local v9    # "level":B
label_pswitch_201:
	//    .restart local v9    # "level":B
	k = ( start + -0x1);
	//    .restart local v7    # "k":I
label_goto_208:
	if ( k <  levState->startON )
		goto label_cond_31;
	if ( this->levels[k] <= (unsigned char)(( levState->runLevel + 0x1)) )
		goto label_cond_21b;
	cVar4 = this->levels;
	cVar4[k] = (unsigned char)(( cVar4[k] + -0x2));
label_cond_21b:
	k = ( k + -0x1);
	goto label_goto_208;
	// 8573    .line 3310
	// 8574    .end local v7    # "k":I
label_cond_21e:
	this->setLevelsOutsideIsolates(start, limit, level);
	//    .end local v9    # "level":B
label_cond_225:
	return;
	// 8587    .line 3138
	// 8588    :pswitch_data_226
	// 8589    .packed-switch 0x1
	// 8590        :pswitch_2d
	// 8591        :pswitch_4e
	// 8592        :pswitch_53
	// 8593        :pswitch_60
	// 8594        :pswitch_6d
	// 8595        :pswitch_e9
	// 8596        :pswitch_104
	// 8597        :pswitch_140
	// 8598        :pswitch_149
	// 8599        :pswitch_16c
	// 8600        :pswitch_17a
	// 8601        :pswitch_197
	// 8602        :pswitch_1bc
	// 8603        :pswitch_201
	// 8604    .end packed-switch

}
// .method public static reorderLogical([B)[I
int android::icu::text::Bidi::reorderLogical(std::shared_ptr<unsigned char[]> levels)
{
	
	//    .param p0, "levels"    # [B
	return android::icu::text::BidiLine::reorderLogical(levels);

}
// .method public static reorderVisual([B)[I
int android::icu::text::Bidi::reorderVisual(std::shared_ptr<unsigned char[]> levels)
{
	
	//    .param p0, "levels"    # [B
	return android::icu::text::BidiLine::reorderVisual(levels);

}
// .method public static reorderVisually([BI[Ljava/lang/Object;II)V
void android::icu::text::Bidi::reorderVisually(std::shared_ptr<unsigned char[]> levels,int levelStart,std::shared_ptr<std::vector<java::lang::Object>> objects,int objectStart,int count)
{
	
	int cVar0;
	std::shared<std::vector<unsigned char[]>> reorderLevels;
	std::shared<std::vector<std::vector<java::lang::Object>>> temp;
	int i;
	
	//    .param p0, "levels"    # [B
	//    .param p1, "levelStart"    # I
	//    .param p2, "objects"    # [Ljava/lang/Object;
	//    .param p3, "objectStart"    # I
	//    .param p4, "count"    # I
	cVar0 = 0x0;
	reorderLevels = std::make_shared<std::vector<unsigned char[]>>(count);
	//    .local v2, "reorderLevels":[B
	java::lang::System::arraycopy(levels, levelStart, reorderLevels, cVar0, count);
	//    .local v1, "indexMap":[I
	temp = std::make_shared<std::vector<std::vector<java::lang::Object>>>(count);
	//    .local v3, "temp":[Ljava/lang/Object;
	java::lang::System::arraycopy(objects, objectStart, temp, cVar0, count);
	i = 0x0;
	//    .local v0, "i":I
label_goto_10:
	if ( i >= count )
		goto label_cond_1d;
	objects[(objectStart + i)] = temp[android::icu::text::Bidi::reorderVisual(reorderLevels)[i]];
	i = ( i + 0x1);
	goto label_goto_10;
	// 8685    .line 5591
label_cond_1d:
	return;

}
// .method public static requiresBidi([CII)Z
bool android::icu::text::Bidi::requiresBidi(std::shared_ptr<char[]> text,int start,int limit)
{
	
	bool cVar0;
	int i;
	
	//    .param p0, "text"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	cVar0 = 0x1;
	0xe022;
	//    .local v0, "RTLMask":I
	i = start;
	//    .local v1, "i":I
label_goto_6:
	if ( i >= limit )
		goto label_cond_1a;
	if ( !(((cVar0 << android::icu::lang::UCharacter::getDirection(text[i])) &  0xe022)) )  
		goto label_cond_17;
	return cVar0;
	// 8730    .line 5553
label_cond_17:
	i = ( i + 0x1);
	goto label_goto_6;
	// 8736    .line 5558
label_cond_1a:
	return 0x0;

}
// .method private resolveExplicitLevels()B
unsigned char android::icu::text::Bidi::resolveExplicitLevels()
{
	
	int i;
	int level;
	unsigned char dirct;
	int paraIndex;
	std::shared_ptr<android::icu::text::Bidi_S_BracketData> bracketData;
	unsigned char level;
	unsigned char dirProp;
	unsigned char embeddingLevel;
	unsigned char previousLevel;
	int lastCcPos;
	std::shared<std::vector<short[]>> stack;
	int stackLast;
	int overflowIsolateCount;
	int overflowEmbeddingCount;
	int validIsolateCount;
	unsigned char newLevel;
	int embeddingLevel;
	
	i = 0x0;
	//    .local v6, "i":I
	level = this->GetParaLevelAt(0x0);
	//    .local v8, "level":B
	this->isolateCount = 0x0;
	dirct = this->directionFromFlags();
	//    .local v4, "dirct":B
	if ( dirct == 0x2 )
		goto label_cond_1e;
	return dirct;
	// 8786    .line 2405
label_cond_1e:
	if ( this->reorderingMode <= 0x1 )
		goto label_cond_69;
	paraIndex = 0x0;
	//    .local v13, "paraIndex":I
label_goto_2d:
	if ( paraIndex >= this->paraCount )
		goto label_cond_68;
	if ( paraIndex )     
		goto label_cond_5a;
	//    .local v17, "start":I
label_goto_3b:
	//    .local v9, "limit":I
	i = start;
label_goto_4d:
	if ( i >= this->paras_limit[paraIndex] )
		goto label_cond_65;
	this->levels[i] = this->paras_level[paraIndex];
	i = ( i + 0x1);
	goto label_goto_4d;
	// 8864    .line 2413
	// 8865    .end local v9    # "limit":I
	// 8866    .end local v17    # "start":I
label_cond_5a:
	//    .restart local v17    # "start":I
	goto label_goto_3b;
	// 8881    .line 2409
	// 8882    .restart local v9    # "limit":I
label_cond_65:
	paraIndex = ( paraIndex + 0x1);
	goto label_goto_2d;
	// 8888    .line 2419
	// 8889    .end local v9    # "limit":I
	// 8890    .end local v17    # "start":I
label_cond_68:
	return dirct;
	// 8894    .line 2421
	// 8895    .end local v13    # "paraIndex":I
label_cond_69:
	if ( (this->flags & (android::icu::text::Bidi::MASK_EXPLICIT | android::icu::text::Bidi::MASK_ISO)) )     
		goto label_cond_111;
	bracketData = std::make_shared<android::icu::text::Bidi_S_BracketData>();
	//    .local v2, "bracketData":Landroid/icu/text/Bidi$BracketData;
	this->bracketInit(bracketData);
	paraIndex = 0x0;
	//    .restart local v13    # "paraIndex":I
label_goto_84:
	if ( paraIndex >= this->paraCount )
		goto label_cond_110;
	if ( paraIndex )     
		goto label_cond_bf;
	//    .restart local v17    # "start":I
label_goto_92:
	//    .restart local v9    # "limit":I
	level = this->paras_level[paraIndex];
	i = start;
label_goto_a4:
	if ( i >= this->paras_limit[paraIndex] )
		goto label_cond_10c;
	this->levels[i] = level;
	dirProp = this->dirProps[i];
	//    .local v3, "dirProp":B
	if ( dirProp != 0x12 )
		goto label_cond_ca;
label_cond_bc:
label_goto_bc:
	i = ( i + 0x1);
	goto label_goto_a4;
	// 9005    .line 2431
	// 9006    .end local v3    # "dirProp":B
	// 9007    .end local v9    # "limit":I
	// 9008    .end local v17    # "start":I
label_cond_bf:
	//    .restart local v17    # "start":I
	goto label_goto_92;
	// 9023    .line 2439
	// 9024    .restart local v3    # "dirProp":B
	// 9025    .restart local v9    # "limit":I
label_cond_ca:
	if ( dirProp != 0x7 )
		goto label_cond_106;
	if ( ( i + 0x1) >= this->length )
		goto label_cond_bc;
	if ( this->text[i] != 0xd )
		goto label_cond_100;
	if ( this->text[( i + 0x1)] == 0xa )
		goto label_cond_bc;
label_cond_100:
	this->bracketProcessB(bracketData, level);
	goto label_goto_bc;
	// 9091    .line 2447
label_cond_106:
	this->bracketProcessChar(bracketData, i);
	goto label_goto_bc;
	// 9099    .line 2427
	// 9100    .end local v3    # "dirProp":B
label_cond_10c:
	paraIndex = ( paraIndex + 0x1);
	goto label_goto_84;
	// 9106    .line 2450
	// 9107    .end local v9    # "limit":I
	// 9108    .end local v17    # "start":I
label_cond_110:
	return dirct;
	// 9112    .line 2456
	// 9113    .end local v2    # "bracketData":Landroid/icu/text/Bidi$BracketData;
	// 9114    .end local v13    # "paraIndex":I
label_cond_111:
	embeddingLevel = level;
	//    .local v5, "embeddingLevel":B
	previousLevel = level;
	//    .local v14, "previousLevel":B
	lastCcPos = 0x0;
	//    .local v7, "lastCcPos":I
	stack = std::make_shared<std::vector<short[]>>(0x7f);
	//    .local v15, "stack":[S
	stackLast = 0x0;
	//    .local v16, "stackLast":I
	overflowIsolateCount = 0x0;
	//    .local v12, "overflowIsolateCount":I
	overflowEmbeddingCount = 0x0;
	//    .local v11, "overflowEmbeddingCount":I
	validIsolateCount = 0x0;
	//    .local v18, "validIsolateCount":I
	bracketData = std::make_shared<android::icu::text::Bidi_S_BracketData>();
	//    .restart local v2    # "bracketData":Landroid/icu/text/Bidi$BracketData;
	this->bracketInit(bracketData);
	stack[0x0] = (short)(level);
	this->flags = 0x0;
	i = 0x0;
label_goto_13a:
	if ( i >= this->length )
		goto label_cond_44b;
	dirProp = this->dirProps[i];
	//    .restart local v3    # "dirProp":B
	// switch
	{
	auto item = ( dirProp );
	if (item == 7) goto label_pswitch_3a8;
	if (item == 8) goto label_pswitch_14f;
	if (item == 9) goto label_pswitch_14f;
	if (item == 10) goto label_pswitch_14f;
	if (item == 11) goto label_pswitch_1b3;
	if (item == 12) goto label_pswitch_1b3;
	if (item == 13) goto label_pswitch_14f;
	if (item == 14) goto label_pswitch_1b3;
	if (item == 15) goto label_pswitch_1b3;
	if (item == 16) goto label_pswitch_218;
	if (item == 17) goto label_pswitch_14f;
	if (item == 18) goto label_pswitch_419;
	if (item == 19) goto label_pswitch_14f;
	if (item == 20) goto label_pswitch_252;
	if (item == 21) goto label_pswitch_252;
	if (item == 22) goto label_pswitch_309;
	}
label_pswitch_14f:
	if ( android::icu::text::Bidi::NoOverride(embeddingLevel) == android::icu::text::Bidi::NoOverride(previousLevel) )
		goto label_cond_188;
	this->bracketProcessBoundary(bracketData, lastCcPos, previousLevel, embeddingLevel);
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlagMultiRuns);
	if ( !(( embeddingLevel & -0x80)) )  
		goto label_cond_437;
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlagO(embeddingLevel));
label_cond_188:
label_goto_188:
	previousLevel = embeddingLevel;
	this->levels[i] = embeddingLevel;
	this->bracketProcessChar(bracketData, i);
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(this->dirProps[i]));
label_cond_1b0:
label_goto_1b0:
	i = ( i + 0x1);
	goto label_goto_13a;
	// 9322    .line 2483
label_pswitch_1b3:
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(0x12));
	this->levels[i] = previousLevel;
	if ( dirProp == 0xb )
		goto label_cond_1db;
	if ( dirProp != 0xc )
		goto label_cond_207;
label_cond_1db:
	newLevel = (unsigned char)(( ( embeddingLevel + 0x2) & 0x7e));
	//    .local v10, "newLevel":B
label_goto_1e2:
	if ( newLevel >  0x7d )
		goto label_cond_213;
	if ( overflowIsolateCount )     
		goto label_cond_213;
	if ( overflowEmbeddingCount )     
		goto label_cond_213;
	i;
	embeddingLevel = newLevel;
	if ( dirProp == 0xc )
		goto label_cond_1fa;
	if ( dirProp != 0xf )
		goto label_cond_1ff;
label_cond_1fa:
	embeddingLevel = (unsigned char)(( embeddingLevel | -0x80));
label_cond_1ff:
	stackLast = ( stackLast + 0x1);
	stack[stackLast] = (short)(embeddingLevel);
	goto label_goto_1b0;
	// 9430    .line 2490
	// 9431    .end local v10    # "newLevel":B
label_cond_207:
	//    .restart local v10    # "newLevel":B
	goto label_goto_1e2;
	// 9448    .line 2504
label_cond_213:
	if ( overflowIsolateCount )     
		goto label_cond_1b0;
	overflowEmbeddingCount = ( overflowEmbeddingCount + 0x1);
	goto label_goto_1b0;
	// 9457    .line 2510
	// 9458    .end local v10    # "newLevel":B
label_pswitch_218:
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(0x12));
	this->levels[i] = previousLevel;
	if ( overflowIsolateCount > 0 ) 
		goto label_cond_1b0;
	if ( overflowEmbeddingCount <= 0 )
		goto label_cond_23c;
	overflowEmbeddingCount = ( overflowEmbeddingCount + -0x1);
	goto label_goto_1b0;
	// 9501    .line 2520
label_cond_23c:
	if ( stackLast <= 0 )
		goto label_cond_1b0;
	if ( stack[stackLast] >= 0x100 )
		goto label_cond_1b0;
	i;
	stackLast = ( stackLast + -0x1);
	(unsigned char)(stack[stackLast]);
	goto label_goto_1b0;
	// 9530    .line 2528
label_pswitch_252:
	this->flags = (this->flags | (android::icu::text::Bidi::DirPropFlag(0xa) | android::icu::text::Bidi::DirPropFlagLR(embeddingLevel)));
	this->levels[i] = android::icu::text::Bidi::NoOverride(embeddingLevel);
	if ( android::icu::text::Bidi::NoOverride(embeddingLevel) == android::icu::text::Bidi::NoOverride(previousLevel) )
		goto label_cond_29b;
	this->bracketProcessBoundary(bracketData, lastCcPos, previousLevel, embeddingLevel);
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlagMultiRuns);
label_cond_29b:
	previousLevel = embeddingLevel;
	if ( dirProp != 0x14 )
		goto label_cond_2ef;
	newLevel = (unsigned char)(( ( embeddingLevel + 0x2) & 0x7e));
	//    .restart local v10    # "newLevel":B
label_goto_2a9:
	if ( newLevel >  0x7d )
		goto label_cond_2fb;
	if ( overflowIsolateCount )     
		goto label_cond_2fb;
	if ( overflowEmbeddingCount )     
		goto label_cond_2fb;
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(dirProp));
	lastCcPos = i;
	validIsolateCount = ( validIsolateCount + 0x1);
	if ( validIsolateCount <= this->isolateCount )
		goto label_cond_2da;
	this->isolateCount = validIsolateCount;
label_cond_2da:
	embeddingLevel = newLevel;
	stackLast = ( stackLast + 0x1);
	stack[stackLast] = (short)(( newLevel + 0x100));
	this->bracketProcessLRI_RLI(bracketData, embeddingLevel);
	goto label_goto_1b0;
	// 9714    .line 2542
	// 9715    .end local v10    # "newLevel":B
label_cond_2ef:
	//    .restart local v10    # "newLevel":B
	goto label_goto_2a9;
	// 9732    .line 2558
label_cond_2fb:
	this->dirProps[i] = 0x9;
	overflowIsolateCount = ( overflowIsolateCount + 0x1);
	goto label_goto_1b0;
	// 9749    .line 2563
	// 9750    .end local v10    # "newLevel":B
label_pswitch_309:
	if ( android::icu::text::Bidi::NoOverride(embeddingLevel) == android::icu::text::Bidi::NoOverride(previousLevel) )
		goto label_cond_32c;
	this->bracketProcessBoundary(bracketData, lastCcPos, previousLevel, embeddingLevel);
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlagMultiRuns);
label_cond_32c:
	if ( overflowIsolateCount <= 0 )
		goto label_cond_36e;
	overflowIsolateCount = ( overflowIsolateCount + -0x1);
	this->dirProps[i] = 0x9;
label_goto_33a:
	embeddingLevel = (unsigned char)(( stack[stackLast] & -0x101));
	this->flags = (this->flags | (android::icu::text::Bidi::DirPropFlag(0xa) | android::icu::text::Bidi::DirPropFlagLR(embeddingLevel)));
	previousLevel = embeddingLevel;
	this->levels[i] = android::icu::text::Bidi::NoOverride(embeddingLevel);
	goto label_goto_1b0;
	// 9865    .line 2574
label_cond_36e:
	if ( validIsolateCount <= 0 )
		goto label_cond_39d;
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(0x16));
	lastCcPos = i;
	0x0;
label_goto_386:
	if ( stack[stackLast] >= 0x100 )
		goto label_cond_393;
	stackLast = ( stackLast + -0x1);
	goto label_goto_386;
	// 9913    .line 2580
label_cond_393:
	stackLast = ( stackLast + -0x1);
	validIsolateCount = ( validIsolateCount + -0x1);
	this->bracketProcessPDI(bracketData);
	goto label_goto_33a;
	// 9927    .line 2585
label_cond_39d:
	this->dirProps[i] = 0x9;
	goto label_goto_33a;
	// 9941    .line 2592
label_pswitch_3a8:
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(0x7));
	this->levels[i] = this->GetParaLevelAt(i);
	if ( ( i + 0x1) >= this->length )
		goto label_cond_1b0;
	if ( this->text[i] != 0xd )
		goto label_cond_3fa;
	if ( this->text[( i + 0x1)] == 0xa )
		goto label_cond_1b0;
label_cond_3fa:
	0x0;
	0x0;
	0x0;
	0x0;
	embeddingLevel = this->GetParaLevelAt(( i + 0x1));
	embeddingLevel;
	stack[0x0] = (short)(embeddingLevel);
	this->bracketProcessB(bracketData, embeddingLevel);
	goto label_goto_1b0;
	// 10069    .line 2608
label_pswitch_419:
	this->levels[i] = previousLevel;
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(0x12));
	goto label_goto_1b0;
	// 10102    .line 2620
label_cond_437:
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlagE(embeddingLevel));
	goto label_goto_188;
	// 10124    .line 2630
	// 10125    .end local v3    # "dirProp":B
label_cond_44b:
	if ( !((this->flags & android::icu::text::Bidi::MASK_EMBEDDING)) )  
		goto label_cond_46f;
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlagLR(this->paraLevel));
label_cond_46f:
	if ( !(this->orderParagraphsLTR) )  
		goto label_cond_49b;
	if ( !((this->flags & android::icu::text::Bidi::DirPropFlag(0x7))) )  
		goto label_cond_49b;
	this->flags = (this->flags | android::icu::text::Bidi::DirPropFlag(0x0));
label_cond_49b:
	return this->directionFromFlags();
	// 10220    .line 2477
	// 10221    :pswitch_data_4a0
	// 10222    .packed-switch 0x7
	// 10223        :pswitch_3a8
	// 10224        :pswitch_14f
	// 10225        :pswitch_14f
	// 10226        :pswitch_14f
	// 10227        :pswitch_1b3
	// 10228        :pswitch_1b3
	// 10229        :pswitch_14f
	// 10230        :pswitch_1b3
	// 10231        :pswitch_1b3
	// 10232        :pswitch_218
	// 10233        :pswitch_14f
	// 10234        :pswitch_419
	// 10235        :pswitch_14f
	// 10236        :pswitch_252
	// 10237        :pswitch_252
	// 10238        :pswitch_309
	// 10239    .end packed-switch

}
// .method private resolveImplicitLevels(IISS)V
void android::icu::text::Bidi::resolveImplicitLevels(int start,int limit,short cVar0,short cVar1)
{
	
	std::shared_ptr<android::icu::text::Bidi_S_LevState> levState;
	int nextStrongPos;
	int lastStrong;
	int cVar0;
	int start1;
	int stateImp;
	int start2;
	int i;
	int k;
	unsigned char dirProp;
	int firstStrong;
	int cVar1;
	std::shared_ptr<android::icu::text::Bidi_S_Isolate> cVar3;
	int oldStateImp;
	short cell;
	int actionImp;
	short resProp;
	std::shared_ptr<java::lang::IllegalStateException> cVar2;
	unsigned char prop;
	int j;
	unsigned char prop1;
	
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "sor"    # S
	//    .param p4, "eor"    # S
	levState = std::make_shared<android::icu::text::Bidi_S_LevState>(0x0);
	//    .local v14, "levState":Landroid/icu/text/Bidi$LevState;
	//    .local v16, "nextStrongProp":S
	nextStrongPos = -0x1;
	//    .local v15, "nextStrongPos":I
	if ( start >= this->lastArabicPos )
		goto label_cond_143;
	if ( ( this->GetParaLevelAt(start) & 0x1) <= 0 )
		goto label_cond_143;
	if ( this->reorderingMode == 0x5 )
		goto label_cond_13d;
	if ( this->reorderingMode != 0x6 )
		goto label_cond_140;
	//    .local v10, "inverseRTL":Z
label_goto_3d:
	levState->startL2EN = -0x1;
	levState->lastStrongRTL = -0x1;
	levState->runStart = start;
	levState->runLevel = this->levels[start];
	levState->impTab = this->impTabPair->imptab[( levState->runLevel & 0x1)];
	levState->impAct = this->impTabPair->impact[( levState->runLevel & 0x1)];
	if ( start )     
		goto label_cond_a0;
	if ( !(this->prologue) )  
		goto label_cond_a0;
	lastStrong = this->lastL_R_AL();
	//    .local v13, "lastStrong":B
	if ( lastStrong == 0x4 )
		goto label_cond_a0;
	cVar0 = (short)(lastStrong);
	//    .end local v13    # "lastStrong":B
label_cond_a0:
	if ( this->dirProps[start] != 0x16 )
		goto label_cond_146;
	levState->startON = this->isolates[this->isolateCount]->startON;
	start1 = this->isolates[this->isolateCount]->start1;
	//    .local v21, "start1":I
	stateImp = this->isolates[this->isolateCount]->stateImp;
	//    .local v23, "stateImp":S
	levState->state = this->isolates[this->isolateCount]->state;
	this->isolateCount = ( this->isolateCount + -0x1);
	//    .end local v23    # "stateImp":S
label_goto_116:
	start2 = start;
	//    .local v22, "start2":I
	i = start;
	//    .end local v16    # "nextStrongProp":S
	//    .local v9, "i":I
label_goto_11a:
	if ( i >  limit )
		goto label_cond_18e;
	if ( i <  limit )
		goto label_cond_1f9;
	k = ( limit + -0x1);
	//    .local v12, "k":I
label_goto_124:
	if ( k <= start )
		goto label_cond_17a;
	if ( !((android::icu::text::Bidi::DirPropFlag(this->dirProps[k]) & android::icu::text::Bidi::MASK_BN_EXPLICIT)) )  
		goto label_cond_17a;
	k = ( k + -0x1);
	goto label_goto_124;
	// 10617    .line 3381
	// 10618    .end local v9    # "i":I
	// 10619    .end local v10    # "inverseRTL":Z
	// 10620    .end local v12    # "k":I
	// 10621    .end local v21    # "start1":I
	// 10622    .end local v22    # "start2":I
	// 10623    .restart local v16    # "nextStrongProp":S
label_cond_13d:
	0x1;
	//    .restart local v10    # "inverseRTL":Z
	goto label_goto_3d;
	// 10630    .line 3382
	// 10631    .end local v10    # "inverseRTL":Z
label_cond_140:
	0x0;
	//    .restart local v10    # "inverseRTL":Z
	goto label_goto_3d;
	// 10638    .line 3380
	// 10639    .end local v10    # "inverseRTL":Z
label_cond_143:
	0x0;
	//    .restart local v10    # "inverseRTL":Z
	goto label_goto_3d;
	// 10646    .line 3406
label_cond_146:
	levState->startON = -0x1;
	start1 = start;
	//    .restart local v21    # "start1":I
	if ( this->dirProps[start] != 0x11 )
		goto label_cond_177;
	(short)(( cVar0 + 0x1));
label_goto_165:
	levState->state = 0x0;
	this->processPropertySeq(levState, cVar0, start, start);
	goto label_goto_116;
	// 10705    .line 3411
label_cond_177:
	0x0;
	//    .local v23, "stateImp":S
	goto label_goto_165;
	// 10712    .line 3424
	// 10713    .end local v16    # "nextStrongProp":S
	// 10714    .end local v23    # "stateImp":S
	// 10715    .restart local v9    # "i":I
	// 10716    .restart local v12    # "k":I
	// 10717    .restart local v22    # "start2":I
label_cond_17a:
	dirProp = this->dirProps[k];
	//    .local v6, "dirProp":B
	if ( dirProp == 0x14 )
		goto label_cond_18e;
	if ( dirProp != 0x15 )
		goto label_cond_1ca;
	//    .end local v6    # "dirProp":B
	//    .end local v12    # "k":I
label_cond_18e:
	if ( limit != this->length )
		goto label_cond_1af;
	if ( !(this->epilogue) )  
		goto label_cond_1af;
	firstStrong = this->firstL_R_AL_EN_AN();
	//    .local v7, "firstStrong":B
	if ( firstStrong == 0x4 )
		goto label_cond_1af;
	cVar1 = (short)(firstStrong);
	//    .end local v7    # "firstStrong":B
label_cond_1af:
	i = ( limit + -0x1);
label_goto_1b1:
	if ( i <= start )
		goto label_cond_29f;
	if ( !((android::icu::text::Bidi::DirPropFlag(this->dirProps[i]) & android::icu::text::Bidi::MASK_BN_EXPLICIT)) )  
		goto label_cond_29f;
	i = ( i + -0x1);
	goto label_goto_1b1;
	// 10818    .line 3427
	// 10819    .restart local v6    # "dirProp":B
	// 10820    .restart local v12    # "k":I
label_cond_1ca:
	//    .end local v6    # "dirProp":B
	//    .end local v12    # "k":I
	//    .local v8, "gprop":S
label_goto_1cc:
	oldStateImp = stateImp;
	//    .local v17, "oldStateImp":S
	cell = android::icu::text::Bidi::impTabProps[oldStateImp][gprop];
	//    .local v5, "cell":S
	//    .local v23, "stateImp":S
	actionImp = android::icu::text::Bidi::GetActionProps(cell);
	//    .local v4, "actionImp":S
	if ( i != limit )
		goto label_cond_1e3;
	if ( actionImp )     
		goto label_cond_1e3;
	actionImp = 0x1;
	//    .end local v4    # "actionImp":S
label_cond_1e3:
	if ( !(actionImp) )  
		goto label_cond_26f;
	resProp = android::icu::text::Bidi::impTabProps[oldStateImp][0xf];
	//    .local v20, "resProp":S
	// switch
	{
	auto item = ( actionImp );
	if (item == 1) goto label_pswitch_264;
	if (item == 2) goto label_pswitch_273;
	if (item == 3) goto label_pswitch_276;
	if (item == 4) goto label_pswitch_28f;
	}
	cVar2 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal ICU error in resolveImplicitLevels")));
	// throw
	throw cVar2;
	// 10889    .line 3430
	// 10890    .end local v5    # "cell":S
	// 10891    .end local v8    # "gprop":S
	// 10892    .end local v17    # "oldStateImp":S
	// 10893    .end local v20    # "resProp":S
	// 10894    .end local v23    # "stateImp":S
label_cond_1f9:
	prop = this->dirProps[i];
	//    .local v18, "prop":B
	if ( prop != 0x7 )
		goto label_cond_211;
	this->isolateCount = -0x1;
label_cond_211:
	if ( !(0x1) )  
		goto label_cond_21d;
	if ( prop != 0xd )
		goto label_cond_222;
	//    .end local v18    # "prop":B
label_cond_21d:
label_goto_21d:
	//    .restart local v8    # "gprop":S
	goto label_goto_1cc;
	// 10950    .line 3437
	// 10951    .end local v8    # "gprop":S
	// 10952    .restart local v18    # "prop":B
label_cond_222:
	if ( prop != 0x2 )
		goto label_cond_21d;
	if ( nextStrongPos >  i )
		goto label_cond_24e;
	//    .restart local v16    # "nextStrongProp":S
	nextStrongPos = limit;
	j = ( i + 0x1);
	//    .local v11, "j":I
label_goto_232:
	if ( j >= limit )
		goto label_cond_24e;
	prop1 = this->dirProps[j];
	//    .local v19, "prop1":B
	if ( !(prop1) )  
		goto label_cond_248;
	if ( prop1 != 0x1 )
		goto label_cond_259;
label_cond_248:
	//    .local v16, "nextStrongProp":S
	nextStrongPos = j;
	//    .end local v11    # "j":I
	//    .end local v16    # "nextStrongProp":S
	//    .end local v19    # "prop1":B
label_cond_24e:
	if ( 0x1 != 0xd )
		goto label_cond_21d;
	//    .local v18, "prop":B
	goto label_goto_21d;
	// 11033    .line 3445
	// 11034    .restart local v11    # "j":I
	// 11035    .local v16, "nextStrongProp":S
	// 11036    .local v18, "prop":B
	// 11037    .restart local v19    # "prop1":B
label_cond_259:
	if ( prop1 == 0xd )
		goto label_cond_248;
	j = ( j + 0x1);
	goto label_goto_232;
	// 11052    .line 3471
	// 11053    .end local v11    # "j":I
	// 11054    .end local v16    # "nextStrongProp":S
	// 11055    .end local v18    # "prop":B
	// 11056    .end local v19    # "prop1":B
	// 11057    .restart local v5    # "cell":S
	// 11058    .restart local v8    # "gprop":S
	// 11059    .restart local v17    # "oldStateImp":S
	// 11060    .restart local v20    # "resProp":S
	// 11061    .restart local v23    # "stateImp":S
label_pswitch_264:
	this->processPropertySeq(levState, resProp, start1, i);
	start1 = i;
	//    .end local v20    # "resProp":S
label_cond_26f:
label_goto_26f:
	i = ( i + 0x1);
	goto label_goto_11a;
	// 11082    .line 3475
	// 11083    .restart local v20    # "resProp":S
label_pswitch_273:
	i;
	goto label_goto_26f;
	// 11090    .line 3478
label_pswitch_276:
	this->processPropertySeq(levState, resProp, start1, start2);
	this->processPropertySeq(levState, 0x4, start2, i);
	start1 = i;
	goto label_goto_26f;
	// 11119    .line 3483
label_pswitch_28f:
	this->processPropertySeq(levState, resProp, start1, start2);
	start1 = start2;
	start2 = i;
	goto label_goto_26f;
	// 11140    .line 3506
	// 11141    .end local v5    # "cell":S
	// 11142    .end local v8    # "gprop":S
	// 11143    .end local v17    # "oldStateImp":S
	// 11144    .end local v20    # "resProp":S
	// 11145    .end local v23    # "stateImp":S
label_cond_29f:
	dirProp = this->dirProps[i];
	//    .restart local v6    # "dirProp":B
	if ( dirProp == 0x14 )
		goto label_cond_2b3;
	if ( dirProp != 0x15 )
		goto label_cond_349;
label_cond_2b3:
	if ( limit >= this->length )
		goto label_cond_349;
	this->isolateCount = ( this->isolateCount + 0x1);
	if ( this->isolates[this->isolateCount] )     
		goto label_cond_2f0;
	cVar3 = std::make_shared<android::icu::text::Bidi_S_Isolate>();
	this->isolates[this->isolateCount] = cVar3;
label_cond_2f0:
	this->isolates[this->isolateCount]->stateImp = stateImp;
	this->isolates[this->isolateCount]->state = levState->state;
	this->isolates[this->isolateCount]->start1 = start1;
	this->isolates[this->isolateCount]->startON = levState->startON;
label_goto_348:
	return;
	// 11330    .line 3517
label_cond_349:
	this->processPropertySeq(levState, cVar1, limit, limit);
	goto label_goto_348;
	// 11344    .line 3469
	// 11345    nop
	// 11347    :pswitch_data_356
	// 11348    .packed-switch 0x1
	// 11349        :pswitch_264
	// 11350        :pswitch_273
	// 11351        :pswitch_276
	// 11352        :pswitch_28f
	// 11353    .end packed-switch

}
// .method private setLevelsOutsideIsolates(IIB)V
void android::icu::text::Bidi::setLevelsOutsideIsolates(int start,int limit,unsigned char level)
{
	
	int isolateCount;
	int k;
	unsigned char dirProp;
	
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "level"    # B
	isolateCount = 0x0;
	//    .local v1, "isolateCount":I
	k = start;
	//    .local v2, "k":I
label_goto_2:
	if ( k >= limit )
		goto label_cond_21;
	dirProp = this->dirProps[k];
	//    .local v0, "dirProp":B
	if ( dirProp != 0x16 )
		goto label_cond_e;
	isolateCount = ( isolateCount + -0x1);
label_cond_e:
	if ( isolateCount )     
		goto label_cond_14;
	this->levels[k] = level;
label_cond_14:
	if ( dirProp == 0x14 )
		goto label_cond_1c;
	if ( dirProp != 0x15 )
		goto label_cond_1e;
label_cond_1c:
	isolateCount = ( isolateCount + 0x1);
label_cond_1e:
	k = ( k + 0x1);
	goto label_goto_2;
	// 11417    .line 3104
	// 11418    .end local v0    # "dirProp":B
label_cond_21:
	return;

}
// .method private setParaSuccess()V
void android::icu::text::Bidi::setParaSuccess()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	cVar0 = 0x0;
	this->prologue = cVar0;
	this->epilogue = cVar0;
	this->paraBidi = this;
	return;

}
// .method public static writeReverse(Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Bidi::writeReverse(std::shared_ptr<java::lang::String> src,int options)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "src"    # Ljava/lang/String;
	//    .param p1, "options"    # I
	if ( src )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 11458    .line 5703
label_cond_8:
	if ( src->length() <= 0 )
		goto label_cond_13;
	return android::icu::text::BidiWriter::writeReverse(src, options);
	// 11473    .line 5707
label_cond_13:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));

}
// .method Bidi_Abs(I)I
int android::icu::text::Bidi::Bidi_Abs(int x)
{
	
	int x;
	
	//    .param p1, "x"    # I
	if ( x < 0 ) 
		goto label_cond_3;
	//    .end local p1    # "x":I
label_goto_2:
	return x;
	// 11494    .restart local p1    # "x":I
label_cond_3:
	x = (0 - x);
	goto label_goto_2;

}
// .method Bidi_Min(II)I
int android::icu::text::Bidi::Bidi_Min(int x,int y)
{
	
	int x;
	
	//    .param p1, "x"    # I
	//    .param p2, "y"    # I
	if ( x >= y )
		goto label_cond_3;
	//    .end local p1    # "x":I
label_goto_2:
	return x;
	// 11514    .restart local p1    # "x":I
label_cond_3:
	x = y;
	goto label_goto_2;

}
// .method GetParaLevelAt(I)B
unsigned char android::icu::text::Bidi::GetParaLevelAt(int pindex)
{
	
	int i;
	
	//    .param p1, "pindex"    # I
	if ( !(this->defaultParaLevel) )  
		goto label_cond_b;
	if ( pindex >= this->paras_limit[0x0] )
		goto label_cond_e;
label_cond_b:
	return this->paraLevel;
	// 11545    .line 1986
label_cond_e:
	i = 0x1;
	//    .local v0, "i":I
label_goto_f:
	if ( i >= this->paraCount )
		goto label_cond_19;
	if ( pindex >= this->paras_limit[i] )
		goto label_cond_26;
label_cond_19:
	if ( i <  this->paraCount )
		goto label_cond_21;
	i = ( this->paraCount + -0x1);
label_cond_21:
	return this->paras_level[i];
	// 11581    .line 1986
label_cond_26:
	i = ( i + 0x1);
	goto label_goto_f;

}
// .method public baseIsLeftToRight()Z
bool android::icu::text::Bidi::baseIsLeftToRight()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->getParaLevel() )     
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method public countParagraphs()I
int android::icu::text::Bidi::countParagraphs()
{
	
	this->verifyValidParaOrLine();
	return this->paraCount;

}
// .method public countRuns()I
int android::icu::text::Bidi::countRuns()
{
	
	this->verifyValidParaOrLine();
	android::icu::text::BidiLine::getRuns(this);
	return this->runCount;

}
// .method public createLineBidi(II)Landroid/icu/text/Bidi;
std::shared_ptr<android::icu::text::Bidi> android::icu::text::Bidi::createLineBidi(int lineStart,int lineLimit)
{
	
	//    .param p1, "lineStart"    # I
	//    .param p2, "lineLimit"    # I
	return this->setLine(lineStart, lineLimit);

}
// .method public getBaseLevel()I
int android::icu::text::Bidi::getBaseLevel()
{
	
	return this->getParaLevel();

}
// .method public getCustomClassifier()Landroid/icu/text/BidiClassifier;
std::shared_ptr<android::icu::text::BidiClassifier> android::icu::text::Bidi::getCustomClassifier()
{
	
	return this->customClassifier;

}
// .method public getCustomizedClass(I)I
int android::icu::text::Bidi::getCustomizedClass(int c)
{
	
	int cVar0;
	int dir;
	
	//    .param p1, "c"    # I
	cVar0 = 0x17;
	if ( !(this->customClassifier) )  
		goto label_cond_e;
	dir = this->customClassifier->classify(c);
	//    .local v0, "dir":I
	if ( dir != cVar0 )
		goto label_cond_14;
	//    .end local v0    # "dir":I
label_cond_e:
	dir = this->bdp->getClass(c);
	//    .restart local v0    # "dir":I
label_cond_14:
	if ( dir <  cVar0 )
		goto label_cond_18;
label_cond_18:
	return dir;

}
// .method getDirPropsMemory(I)V
void android::icu::text::Bidi::getDirPropsMemory(int len)
{
	
	//    .param p1, "len"    # I
	this->getDirPropsMemory(this->mayAllocateText, len);
	return;

}
// .method public getDirection()B
unsigned char android::icu::text::Bidi::getDirection()
{
	
	this->verifyValidParaOrLine();
	return this->direction;

}
// .method public getLength()I
int android::icu::text::Bidi::getLength()
{
	
	this->verifyValidParaOrLine();
	return this->originalLength;

}
// .method public getLevelAt(I)B
unsigned char android::icu::text::Bidi::getLevelAt(int charIndex)
{
	
	//    .param p1, "charIndex"    # I
	this->verifyValidParaOrLine();
	this->verifyRange(charIndex, 0x0, this->length);
	return android::icu::text::BidiLine::getLevelAt(this, charIndex);

}
// .method public getLevels()[B
unsigned char android::icu::text::Bidi::getLevels()
{
	
	this->verifyValidParaOrLine();
	if ( this->length > 0 ) 
		goto label_cond_b;
	return std::make_shared<std::vector<unsigned char[]>>(0x0);
	// 11798    .line 4761
label_cond_b:
	return android::icu::text::BidiLine::getLevels(this);

}
// .method getLevelsMemory(I)V
void android::icu::text::Bidi::getLevelsMemory(int len)
{
	
	//    .param p1, "len"    # I
	this->getLevelsMemory(this->mayAllocateText, len);
	return;

}
// .method public getLogicalIndex(I)I
int android::icu::text::Bidi::getLogicalIndex(int visualIndex)
{
	
	//    .param p1, "visualIndex"    # I
	this->verifyValidParaOrLine();
	this->verifyRange(visualIndex, 0x0, this->resultLength);
	if ( this->insertPoints->size )     
		goto label_cond_23;
	if ( this->controlCount )     
		goto label_cond_23;
	if ( this->direction )     
		goto label_cond_18;
	return visualIndex;
	// 11855    .line 4979
label_cond_18:
	if ( this->direction != 0x1 )
		goto label_cond_23;
	return ( (this->length -  visualIndex) + -0x1);
	// 11872    .line 4983
label_cond_23:
	android::icu::text::BidiLine::getRuns(this);
	return android::icu::text::BidiLine::getLogicalIndex(this, visualIndex);

}
// .method public getLogicalMap()[I
int android::icu::text::Bidi::getLogicalMap()
{
	
	this->countRuns();
	if ( this->length > 0 ) 
		goto label_cond_b;
	return std::make_shared<std::vector<int[]>>(0x0);
	// 11903    .line 5032
label_cond_b:
	return android::icu::text::BidiLine::getLogicalMap(this);

}
// .method public getLogicalRun(I)Landroid/icu/text/BidiRun;
std::shared_ptr<android::icu::text::BidiRun> android::icu::text::Bidi::getLogicalRun(int logicalPosition)
{
	
	//    .param p1, "logicalPosition"    # I
	this->verifyValidParaOrLine();
	this->verifyRange(logicalPosition, 0x0, this->length);
	return android::icu::text::BidiLine::getLogicalRun(this, logicalPosition);

}
// .method getLogicalToVisualRunsMap()V
void android::icu::text::Bidi::getLogicalToVisualRunsMap()
{
	
	int count;
	std::shared<std::vector<long long[]>> keys;
	int i;
	
	if ( !(this->isGoodLogicalToVisualRunsMap) )  
		goto label_cond_5;
	return;
	// 11947    .line 5444
label_cond_5:
	count = this->countRuns();
	//    .local v0, "count":I
	if ( !(this->logicalToVisualRunsMap) )  
		goto label_cond_12;
	if ( this->logicalToVisualRunsMap->size() >= count )
		goto label_cond_16;
label_cond_12:
	this->logicalToVisualRunsMap = std::make_shared<std::vector<int[]>>(count);
label_cond_16:
	keys = std::make_shared<std::vector<long long[]>>(count);
	//    .local v2, "keys":[J
	i = 0x0;
	//    .local v1, "i":I
label_goto_19:
	if ( i >= count )
		goto label_cond_2c;
	keys[i] = (((long long)(this->runs[i]->start) << 0x20) +  (long long)(i));
	i = ( i + 0x1);
	goto label_goto_19;
	// 12008    .line 5454
label_cond_2c:
	java::util::Arrays::sort(keys);
	i = 0x0;
label_goto_30:
	if ( i >= count )
		goto label_cond_3f;
	this->logicalToVisualRunsMap[i] = (int)((keys[i] &  -0x1));
	i = ( i + 0x1);
	goto label_goto_30;
	// 12036    .line 5458
label_cond_3f:
	this->isGoodLogicalToVisualRunsMap = 0x1;
	return;

}
// .method public getParaLevel()B
unsigned char android::icu::text::Bidi::getParaLevel()
{
	
	this->verifyValidParaOrLine();
	return this->paraLevel;

}
// .method public getParagraph(I)Landroid/icu/text/BidiRun;
std::shared_ptr<android::icu::text::BidiRun> android::icu::text::Bidi::getParagraph(int charIndex)
{
	
	std::shared_ptr<android::icu::text::Bidi> bidi;
	int paraIndex;
	
	//    .param p1, "charIndex"    # I
	this->verifyValidParaOrLine();
	bidi = this->paraBidi;
	//    .local v0, "bidi":Landroid/icu/text/Bidi;
	this->verifyRange(charIndex, 0x0, bidi->length);
	paraIndex = 0x0;
	//    .local v1, "paraIndex":I
label_goto_c:
	if ( charIndex <  bidi->paras_limit[paraIndex] )
		goto label_cond_15;
	paraIndex = ( paraIndex + 0x1);
	goto label_goto_c;
	// 12093    .line 4593
label_cond_15:
	return this->getParagraphByIndex(paraIndex);

}
// .method public getParagraphByIndex(I)Landroid/icu/text/BidiRun;
std::shared_ptr<android::icu::text::BidiRun> android::icu::text::Bidi::getParagraphByIndex(int paraIndex)
{
	
	std::shared_ptr<android::icu::text::Bidi> bidi;
	int paraStart;
	std::shared_ptr<android::icu::text::BidiRun> bidiRun;
	
	//    .param p1, "paraIndex"    # I
	this->verifyValidParaOrLine();
	this->verifyRange(paraIndex, 0x0, this->paraCount);
	bidi = this->paraBidi;
	//    .local v0, "bidi":Landroid/icu/text/Bidi;
	if ( paraIndex )     
		goto label_cond_22;
	paraStart = 0x0;
	//    .local v2, "paraStart":I
label_goto_e:
	bidiRun = std::make_shared<android::icu::text::BidiRun>();
	//    .local v1, "bidiRun":Landroid/icu/text/BidiRun;
	bidiRun->start = paraStart;
	bidiRun->limit = bidi->paras_limit[paraIndex];
	bidiRun->level = this->GetParaLevelAt(paraStart);
	return bidiRun;
	// 12155    .line 4553
	// 12156    .end local v1    # "bidiRun":Landroid/icu/text/BidiRun;
	// 12157    .end local v2    # "paraStart":I
label_cond_22:
	paraStart = bidi->paras_limit[( paraIndex + -0x1)];
	//    .restart local v2    # "paraStart":I
	goto label_goto_e;

}
// .method public getParagraphIndex(I)I
int android::icu::text::Bidi::getParagraphIndex(int charIndex)
{
	
	std::shared_ptr<android::icu::text::Bidi> bidi;
	int paraIndex;
	
	//    .param p1, "charIndex"    # I
	this->verifyValidParaOrLine();
	bidi = this->paraBidi;
	//    .local v0, "bidi":Landroid/icu/text/Bidi;
	this->verifyRange(charIndex, 0x0, bidi->length);
	paraIndex = 0x0;
	//    .local v1, "paraIndex":I
label_goto_c:
	if ( charIndex <  bidi->paras_limit[paraIndex] )
		goto label_cond_15;
	paraIndex = ( paraIndex + 0x1);
	goto label_goto_c;
	// 12203    .line 4620
label_cond_15:
	return paraIndex;

}
// .method public getProcessedLength()I
int android::icu::text::Bidi::getProcessedLength()
{
	
	this->verifyValidParaOrLine();
	return this->length;

}
// .method public getReorderingMode()I
int android::icu::text::Bidi::getReorderingMode()
{
	
	return this->reorderingMode;

}
// .method public getReorderingOptions()I
int android::icu::text::Bidi::getReorderingOptions()
{
	
	return this->reorderingOptions;

}
// .method public getResultLength()I
int android::icu::text::Bidi::getResultLength()
{
	
	this->verifyValidParaOrLine();
	return this->resultLength;

}
// .method public getRunCount()I
int android::icu::text::Bidi::getRunCount()
{
	
	return this->countRuns();

}
// .method public getRunLevel(I)I
int android::icu::text::Bidi::getRunLevel(int run)
{
	
	//    .param p1, "run"    # I
	this->verifyValidParaOrLine();
	android::icu::text::BidiLine::getRuns(this);
	this->verifyRange(run, 0x0, this->runCount);
	this->getLogicalToVisualRunsMap();
	return this->runs[this->logicalToVisualRunsMap[run]]->level;

}
// .method public getRunLimit(I)I
int android::icu::text::Bidi::getRunLimit(int run)
{
	
	int idx;
	
	//    .param p1, "run"    # I
	this->verifyValidParaOrLine();
	android::icu::text::BidiLine::getRuns(this);
	this->verifyRange(run, 0x0, this->runCount);
	this->getLogicalToVisualRunsMap();
	idx = this->logicalToVisualRunsMap[run];
	//    .local v0, "idx":I
	if ( idx )     
		goto label_cond_23;
	//    .local v1, "len":I
label_goto_1b:
	return (this->runs[idx]->start +  len);
	// 12350    .line 5526
	// 12351    .end local v1    # "len":I
label_cond_23:
	//    .restart local v1    # "len":I
	goto label_goto_1b;

}
// .method public getRunStart(I)I
int android::icu::text::Bidi::getRunStart(int run)
{
	
	//    .param p1, "run"    # I
	this->verifyValidParaOrLine();
	android::icu::text::BidiLine::getRuns(this);
	this->verifyRange(run, 0x0, this->runCount);
	this->getLogicalToVisualRunsMap();
	return this->runs[this->logicalToVisualRunsMap[run]]->start;

}
// .method getRunsMemory(I)V
void android::icu::text::Bidi::getRunsMemory(int len)
{
	
	//    .param p1, "len"    # I
	this->getRunsMemory(this->mayAllocateRuns, len);
	return;

}
// .method public getText()[C
char android::icu::text::Bidi::getText()
{
	
	this->verifyValidParaOrLine();
	return this->text;

}
// .method public getTextAsString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Bidi::getTextAsString()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	this->verifyValidParaOrLine();
	cVar0 = std::make_shared<java::lang::String>(this->text);
	return cVar0;

}
// .method public getVisualIndex(I)I
int android::icu::text::Bidi::getVisualIndex(int logicalIndex)
{
	
	//    .param p1, "logicalIndex"    # I
	this->verifyValidParaOrLine();
	this->verifyRange(logicalIndex, 0x0, this->length);
	return android::icu::text::BidiLine::getVisualIndex(this, logicalIndex);

}
// .method public getVisualMap()[I
int android::icu::text::Bidi::getVisualMap()
{
	
	this->countRuns();
	if ( this->resultLength > 0 ) 
		goto label_cond_b;
	return std::make_shared<std::vector<int[]>>(0x0);
	// 12494    .line 5073
label_cond_b:
	return android::icu::text::BidiLine::getVisualMap(this);

}
// .method public getVisualRun(I)Landroid/icu/text/BidiRun;
std::shared_ptr<android::icu::text::BidiRun> android::icu::text::Bidi::getVisualRun(int runIndex)
{
	
	//    .param p1, "runIndex"    # I
	this->verifyValidParaOrLine();
	android::icu::text::BidiLine::getRuns(this);
	this->verifyRange(runIndex, 0x0, this->runCount);
	return android::icu::text::BidiLine::getVisualRun(this, runIndex);

}
// .method public isInverse()Z
bool android::icu::text::Bidi::isInverse()
{
	
	return this->isInverse;

}
// .method public isLeftToRight()Z
bool android::icu::text::Bidi::isLeftToRight()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->getDirection() )     
		goto label_cond_e;
	if ( ( this->paraLevel & 0x1) )     
		goto label_cond_e;
	cVar1 = 0x1;
label_cond_e:
	return cVar1;

}
// .method public isMixed()Z
bool android::icu::text::Bidi::isMixed()
{
	
	bool cVar0;
	
	if ( this->isLeftToRight() )     
		goto label_cond_d;
	cVar0 = ( this->isRightToLeft() ^ 0x1);
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x0;
	goto label_goto_c;

}
// .method public isOrderParagraphsLTR()Z
bool android::icu::text::Bidi::isOrderParagraphsLTR()
{
	
	return this->orderParagraphsLTR;

}
// .method public isRightToLeft()Z
bool android::icu::text::Bidi::isRightToLeft()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	if ( this->getDirection() != cVar0 )
		goto label_cond_f;
	if ( ( this->paraLevel & 0x1) != cVar0 )
		goto label_cond_f;
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public orderParagraphsLTR(Z)V
void android::icu::text::Bidi::orderParagraphsLTR(bool ordarParaLTR)
{
	
	//    .param p1, "ordarParaLTR"    # Z
	this->orderParagraphsLTR = ordarParaLTR;
	return;

}
// .method public setContext(Ljava/lang/String;Ljava/lang/String;)V
void android::icu::text::Bidi::setContext(std::shared_ptr<java::lang::String> prologue,std::shared_ptr<java::lang::String> epilogue)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> epilogue;
	std::shared_ptr<java::lang::String> prologue;
	
	//    .param p1, "prologue"    # Ljava/lang/String;
	//    .param p2, "epilogue"    # Ljava/lang/String;
	cVar0 = 0x0;
	if ( !(prologue) )  
		goto label_cond_16;
	if ( prologue->length() <= 0 )
		goto label_cond_16;
	//    .end local p1    # "prologue":Ljava/lang/String;
label_goto_9:
	this->prologue = prologue;
	if ( !(epilogue) )  
		goto label_cond_18;
	if ( epilogue->length() <= 0 )
		goto label_cond_18;
	//    .end local p2    # "epilogue":Ljava/lang/String;
label_goto_13:
	this->epilogue = epilogue;
	return;
	// 12679    .restart local p1    # "prologue":Ljava/lang/String;
	// 12680    .restart local p2    # "epilogue":Ljava/lang/String;
label_cond_16:
	prologue = cVar0;
	goto label_goto_9;
	// 12687    .end local p1    # "prologue":Ljava/lang/String;
label_cond_18:
	epilogue = cVar0;
	goto label_goto_13;

}
// .method public setCustomClassifier(Landroid/icu/text/BidiClassifier;)V
void android::icu::text::Bidi::setCustomClassifier(std::shared_ptr<android::icu::text::BidiClassifier> classifier)
{
	
	//    .param p1, "classifier"    # Landroid/icu/text/BidiClassifier;
	this->customClassifier = classifier;
	return;

}
// .method public setInverse(Z)V
void android::icu::text::Bidi::setInverse(bool isInverse)
{
	
	int cVar0;
	
	//    .param p1, "isInverse"    # Z
	this->isInverse = isInverse;
	if ( !(isInverse) )  
		goto label_cond_8;
	cVar0 = 0x4;
label_goto_5:
	this->reorderingMode = cVar0;
	return;
	// 12726    .line 1430
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public setLine(II)Landroid/icu/text/Bidi;
std::shared_ptr<android::icu::text::Bidi> android::icu::text::Bidi::setLine(int start,int limit)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	cVar0 = 0x0;
	this->verifyValidPara();
	this->verifyRange(start, cVar0, limit);
	this->verifyRange(limit, cVar0, ( this->length + 0x1));
	if ( this->getParagraphIndex(start) == this->getParagraphIndex(( limit + -0x1)) )
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar1;
	// 12774    .line 4719
label_cond_20:
	return android::icu::text::BidiLine::setLine(this, start, limit);

}
// .method public setPara(Ljava/lang/String;B[B)V
void android::icu::text::Bidi::setPara(std::shared_ptr<java::lang::String> text,unsigned char paraLevel,std::shared_ptr<unsigned char[]> embeddingLevels)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "paraLevel"    # B
	//    .param p3, "embeddingLevels"    # [B
	if ( text )     
		goto label_cond_9;
	this->setPara(std::make_shared<std::vector<char[]>>(0x0), paraLevel, embeddingLevels);
label_goto_8:
	return;
	// 12804    .line 3882
label_cond_9:
	this->setPara(text->toCharArray(), paraLevel, embeddingLevels);
	goto label_goto_8;

}
// .method public setPara(Ljava/text/AttributedCharacterIterator;)V
void android::icu::text::Bidi::setPara(std::shared_ptr<java::text::AttributedCharacterIterator> paragraph)
{
	
	std::shared_ptr<java::lang::Boolean> runDirection;
	int len;
	std::shared<std::vector<unsigned char[]>> embeddingLevels;
	std::shared<std::vector<char[]>> txt;
	int i;
	int ch;
	std::shared_ptr<java::lang::Integer> embedding;
	int level;
	std::shared_ptr<java::awt::font::NumericShaper> shaper;
	
	//    .param p1, "paragraph"    # Ljava/text/AttributedCharacterIterator;
	runDirection = paragraph->getAttribute(java::awt::font::TextAttribute::RUN_DIRECTION);
	runDirection->checkCast("java::lang::Boolean");
	//    .local v8, "runDirection":Ljava/lang/Boolean;
	if ( runDirection )     
		goto label_cond_3f;
	//    .local v7, "paraLvl":B
label_goto_d:
	//    .local v6, "lvls":[B
	len = (paragraph->getEndIndex() - paragraph->getBeginIndex());
	//    .local v4, "len":I
	embeddingLevels = std::make_shared<std::vector<unsigned char[]>>(len);
	//    .local v2, "embeddingLevels":[B
	txt = std::make_shared<std::vector<char[]>>(len);
	//    .local v10, "txt":[C
	i = 0x0;
	//    .local v3, "i":I
	ch = paragraph->first();
	//    .end local v6    # "lvls":[B
	//    .local v0, "ch":C
label_goto_21:
	if ( ch == 0xffff )
		goto label_cond_5a;
	txt[i] = ch;
	embedding = paragraph->getAttribute(java::awt::font::TextAttribute::BIDI_EMBEDDING);
	embedding->checkCast("java::lang::Integer");
	//    .local v1, "embedding":Ljava/lang/Integer;
	if ( !(embedding) )  
		goto label_cond_38;
	level = embedding->byteValue();
	//    .local v5, "level":B
	if ( level )     
		goto label_cond_4b;
	//    .end local v5    # "level":B
label_cond_38:
label_goto_38:
	ch = paragraph->next();
	i = ( i + 0x1);
	goto label_goto_21;
	// 12919    .line 4267
	// 12920    .end local v0    # "ch":C
	// 12921    .end local v1    # "embedding":Ljava/lang/Integer;
	// 12922    .end local v2    # "embeddingLevels":[B
	// 12923    .end local v3    # "i":I
	// 12924    .end local v4    # "len":I
	// 12925    .end local v7    # "paraLvl":B
	// 12926    .end local v10    # "txt":[C
label_cond_3f:
	if ( !(runDirection->equals(java::awt::font::TextAttribute::RUN_DIRECTION_LTR)) )  
		goto label_cond_49;
	//    .restart local v7    # "paraLvl":B
	goto label_goto_d;
	// 12942    .end local v7    # "paraLvl":B
label_cond_49:
	//    .restart local v7    # "paraLvl":B
	goto label_goto_d;
	// 12949    .line 4284
	// 12950    .restart local v0    # "ch":C
	// 12951    .restart local v1    # "embedding":Ljava/lang/Integer;
	// 12952    .restart local v2    # "embeddingLevels":[B
	// 12953    .restart local v3    # "i":I
	// 12954    .restart local v4    # "len":I
	// 12955    .restart local v5    # "level":B
	// 12956    .restart local v10    # "txt":[C
label_cond_4b:
	if ( level >= 0 )
		goto label_cond_56;
	embeddingLevels;
	//    .local v6, "lvls":[B
	embeddingLevels[i] = (unsigned char)(( ( level - 0x0) | -0x80));
	goto label_goto_38;
	// 12975    .line 4288
	// 12976    .end local v6    # "lvls":[B
label_cond_56:
	embeddingLevels;
	//    .restart local v6    # "lvls":[B
	embeddingLevels[i] = level;
	goto label_goto_38;
	// 12986    .line 4296
	// 12987    .end local v1    # "embedding":Ljava/lang/Integer;
	// 12988    .end local v5    # "level":B
	// 12989    .end local v6    # "lvls":[B
label_cond_5a:
	shaper = paragraph->getAttribute(java::awt::font::TextAttribute::NUMERIC_SHAPING);
	shaper->checkCast("java::awt::font::NumericShaper");
	//    .local v9, "shaper":Ljava/awt/font/NumericShaper;
	if ( !(shaper) )  
		goto label_cond_67;
	shaper->shape(txt, 0x0, len);
label_cond_67:
	this->setPara(txt, paraLvl, 0x0);
	return;

}
// .method public setPara([CB[B)V
void android::icu::text::Bidi::setPara(std::shared_ptr<char[]> cVar0,unsigned char paraLevel,std::shared_ptr<unsigned char[]> embeddingLevels)
{
	
	std::shared_ptr<char[]> cVar0;
	int cVar1;
	unsigned char cVar2;
	int i;
	int last;
	int j;
	unsigned char dirProp;
	int limit;
	unsigned char level;
	unsigned char nextLevel;
	int start;
	std::shared_ptr<unsigned char[]> cVar5;
	std::shared_ptr<java::lang::InternalError> cVar4;
	
	//    .param p1, "chars"    # [C
	//    .param p2, "paraLevel"    # B
	//    .param p3, "embeddingLevels"    # [B
	if ( paraLevel >= 0x7e )
		goto label_cond_10;
	this->verifyRange(paraLevel, 0x0, 0x7e);
label_cond_10:
	if ( cVar0 )     
		goto label_cond_17;
	cVar0 = std::make_shared<std::vector<char[]>>(0x0);
label_cond_17:
	if ( this->reorderingMode != 0x3 )
		goto label_cond_22;
	this->setParaRunsOnly(cVar0, paraLevel);
	return;
	// 13066    .line 3978
label_cond_22:
	this->paraBidi = 0x0;
	this->text = cVar0;
	cVar1 = this->text->size();
	this->resultLength = cVar1;
	this->originalLength = cVar1;
	this->length = cVar1;
	this->paraLevel = paraLevel;
	this->direction = (unsigned char)(( paraLevel & 0x1));
	this->paraCount = 0x1;
	this->dirProps = std::make_shared<std::vector<unsigned char[]>>(0x0);
	this->levels = std::make_shared<std::vector<unsigned char[]>>(0x0);
	this->runs = std::make_shared<std::vector<std::vector<android::icu::text::BidiRun>>>(0x0);
	this->isGoodLogicalToVisualRunsMap = 0x0;
	this->insertPoints->size = 0x0;
	this->insertPoints->confirmed = 0x0;
	if ( !(android::icu::text::Bidi::IsDefaultLevel(paraLevel)) )  
		goto label_cond_b6;
	cVar2 = paraLevel;
label_goto_80:
	this->defaultParaLevel = cVar2;
	if ( this->length )     
		goto label_cond_b8;
	if ( !(android::icu::text::Bidi::IsDefaultLevel(paraLevel)) )  
		goto label_cond_a0;
	this->paraLevel = (unsigned char)(( this->paraLevel & 0x1));
	this->defaultParaLevel = 0x0;
label_cond_a0:
	this->flags = android::icu::text::Bidi::DirPropFlagLR(paraLevel);
	this->runCount = 0x0;
	this->paraCount = 0x0;
	this->setParaSuccess();
	return;
	// 13253    .line 3998
label_cond_b6:
	cVar2 = 0x0;
	goto label_goto_80;
	// 13259    .line 4017
label_cond_b8:
	this->runCount = -0x1;
	this->getDirPropsMemory(this->length);
	this->dirProps = this->dirPropsMemory;
	this->getDirProps();
	this->trailingWSStart = this->length;
	if ( embeddingLevels )     
		goto label_cond_19f;
	this->getLevelsMemory(this->length);
	this->levels = this->levelsMemory;
	this->direction = this->resolveExplicitLevels();
label_goto_f4:
	if ( this->isolateCount <= 0 )
		goto label_cond_117;
	if ( !(this->isolates) )  
		goto label_cond_10b;
	if ( this->isolates->size() >= this->isolateCount )
		goto label_cond_117;
label_cond_10b:
	this->isolates = std::make_shared<std::vector<std::vector<android::icu::text::Bidi_S_Isolate>>>(( this->isolateCount + 0x3));
label_cond_117:
	this->isolateCount = -0x1;
	// switch
	{
	auto item = ( this->direction );
	if (item == 0) goto label_pswitch_1af;
	if (item == 1) goto label_pswitch_1b5;
	}
	// switch
	{
	auto item = ( this->reorderingMode );
	if (item == 0) goto label_pswitch_1bb;
	if (item == 1) goto label_pswitch_1c3;
	if (item == 2) goto label_pswitch_1cb;
	if (item == 3) goto label_pswitch_1d3;
	if (item == 4) goto label_pswitch_1dc;
	if (item == 5) goto label_pswitch_1e4;
	if (item == 6) goto label_pswitch_1fc;
	}
label_goto_12a:
	if ( embeddingLevels )     
		goto label_cond_214;
	if ( this->paraCount >  0x1 )
		goto label_cond_214;
	if ( (this->flags &  android::icu::text::Bidi::DirPropFlagMultiRuns) )     
		goto label_cond_214;
	this->resolveImplicitLevels(0x0, this->length, (short)(android::icu::text::Bidi::GetLRFromLevel(this->GetParaLevelAt(0x0))), (short)(android::icu::text::Bidi::GetLRFromLevel(this->GetParaLevelAt(( this->length + -0x1)))));
label_cond_166:
	this->adjustWSLevels();
label_goto_169:
	if ( this->defaultParaLevel <= 0 )
		goto label_cond_2f3;
	if ( !(( this->reorderingOptions & 0x1)) )  
		goto label_cond_2f3;
	if ( this->reorderingMode == 0x5 )
		goto label_cond_185;
	if ( this->reorderingMode != 0x6 )
		goto label_cond_2f3;
label_cond_185:
	i = 0x0;
	//    .local v4, "i":I
label_goto_186:
	if ( i >= this->paraCount )
		goto label_cond_2f3;
	last = ( this->paras_limit[i] + -0x1);
	//    .local v6, "last":I
	//    .local v7, "level":B
	if ( this->paras_level[i] )     
		goto label_cond_2ba;
label_cond_19c:
label_goto_19c:
	i = ( i + 0x1);
	goto label_goto_186;
	// 13540    .line 4038
	// 13541    .end local v4    # "i":I
	// 13542    .end local v6    # "last":I
	// 13543    .end local v7    # "level":B
label_cond_19f:
	this->levels = embeddingLevels;
	this->direction = this->checkExplicitLevels();
	goto label_goto_f4;
	// 13562    .line 4056
label_pswitch_1af:
	this->trailingWSStart = 0x0;
	goto label_goto_169;
	// 13572    .line 4060
label_pswitch_1b5:
	this->trailingWSStart = 0x0;
	goto label_goto_169;
	// 13582    .line 4068
label_pswitch_1bb:
	this->impTabPair = android::icu::text::Bidi::impTab_DEFAULT;
	goto label_goto_12a;
	// 13592    .line 4071
label_pswitch_1c3:
	this->impTabPair = android::icu::text::Bidi::impTab_NUMBERS_SPECIAL;
	goto label_goto_12a;
	// 13602    .line 4074
label_pswitch_1cb:
	this->impTabPair = android::icu::text::Bidi::impTab_GROUP_NUMBERS_WITH_R;
	goto label_goto_12a;
	// 13612    .line 4078
label_pswitch_1d3:
	cVar4 = std::make_shared<java::lang::InternalError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal ICU error in setPara")));
	// throw
	throw cVar4;
	// 13622    .line 4081
label_pswitch_1dc:
	this->impTabPair = android::icu::text::Bidi::impTab_INVERSE_NUMBERS_AS_L;
	goto label_goto_12a;
	// 13632    .line 4084
label_pswitch_1e4:
	if ( !(( this->reorderingOptions & 0x1)) )  
		goto label_cond_1f4;
	this->impTabPair = android::icu::text::Bidi::impTab_INVERSE_LIKE_DIRECT_WITH_MARKS;
	goto label_goto_12a;
	// 13651    .line 4087
label_cond_1f4:
	this->impTabPair = android::icu::text::Bidi::impTab_INVERSE_LIKE_DIRECT;
	goto label_goto_12a;
	// 13661    .line 4091
label_pswitch_1fc:
	if ( !(( this->reorderingOptions & 0x1)) )  
		goto label_cond_20c;
	this->impTabPair = android::icu::text::Bidi::impTab_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS;
	goto label_goto_12a;
	// 13680    .line 4094
label_cond_20c:
	this->impTabPair = android::icu::text::Bidi::impTab_INVERSE_FOR_NUMBERS_SPECIAL;
	goto label_goto_12a;
	// 13690    .line 4116
label_cond_214:
	limit = 0x0;
	//    .local v8, "limit":I
	level = this->GetParaLevelAt(0x0);
	//    .restart local v7    # "level":B
	nextLevel = this->levels[0x0];
	//    .local v9, "nextLevel":B
	if ( level >= nextLevel )
		goto label_cond_28e;
	//    .local v3, "eor":S
label_goto_22a:
	start = limit;
	//    .local v11, "start":I
	level = nextLevel;
	if ( limit <= 0 )
		goto label_cond_294;
	if ( this->dirProps[( start + -0x1)] != 0x7 )
		goto label_cond_294;
	//    .local v10, "sor":S
label_cond_244:
label_goto_244:
	limit = ( limit + 0x1);
	if ( limit >= this->length )
		goto label_cond_263;
	if ( this->levels[limit] == level )
		goto label_cond_244;
	if ( (android::icu::text::Bidi::DirPropFlag(this->dirProps[limit]) &  android::icu::text::Bidi::MASK_BN_EXPLICIT) )     
		goto label_cond_244;
label_cond_263:
	if ( limit >= this->length )
		goto label_cond_296;
	nextLevel = this->levels[limit];
label_goto_26f:
	if ( android::icu::text::Bidi::NoOverride(level) >= android::icu::text::Bidi::NoOverride(nextLevel) )
		goto label_cond_2a3;
label_goto_27e:
	if ( ( level & -0x80) )     
		goto label_cond_2a9;
	this->resolveImplicitLevels(start, limit, (short)(android::icu::text::Bidi::GetLRFromLevel(this->GetParaLevelAt(start))), (short)(android::icu::text::Bidi::GetLRFromLevel(nextLevel)));
label_goto_287:
	if ( limit >= this->length )
		goto label_cond_166;
	goto label_goto_22a;
	// 13855    .line 4126
	// 13856    .end local v3    # "eor":S
	// 13857    .end local v10    # "sor":S
	// 13858    .end local v11    # "start":I
label_cond_28e:
	//    .restart local v3    # "eor":S
	goto label_goto_22a;
	// 13869    .line 4139
	// 13870    .restart local v11    # "start":I
label_cond_294:
	eor;
	//    .restart local v10    # "sor":S
	goto label_goto_244;
	// 13877    .line 4151
label_cond_296:
	nextLevel = this->GetParaLevelAt(( this->length + -0x1));
	goto label_goto_26f;
	// 13893    .line 4158
label_cond_2a3:
	(short)(android::icu::text::Bidi::GetLRFromLevel(level));
	goto label_goto_27e;
	// 13903    .line 4168
label_cond_2a9:
label_goto_2a9:
	cVar5 = this->levels;
	start = ( start + 0x1);
	//    .end local v11    # "start":I
	//    .local v12, "start":I
	cVar5[start] = (unsigned char)(( cVar5[start] & 0x7f));
	if ( start >= limit )
		goto label_cond_31c;
	start = start;
	//    .end local v12    # "start":I
	//    .restart local v11    # "start":I
	goto label_goto_2a9;
	// 13931    .line 4194
	// 13932    .end local v3    # "eor":S
	// 13933    .end local v8    # "limit":I
	// 13934    .end local v9    # "nextLevel":B
	// 13935    .end local v10    # "sor":S
	// 13936    .end local v11    # "start":I
	// 13937    .restart local v4    # "i":I
	// 13938    .restart local v6    # "last":I
label_cond_2ba:
	if ( i )     
		goto label_cond_2d6;
	//    .restart local v11    # "start":I
label_goto_2bd:
	j = last;
	//    .local v5, "j":I
label_goto_2be:
	if ( j <  start )
		goto label_cond_19c;
	dirProp = this->dirProps[j];
	//    .local v2, "dirProp":B
	if ( dirProp )     
		goto label_cond_2e7;
	if ( j >= last )
		goto label_cond_2df;
label_goto_2ca:
	if ( this->dirProps[last] != 0x7 )
		goto label_cond_2df;
	last = ( last + -0x1);
	goto label_goto_2ca;
	// 13984    .line 4194
	// 13985    .end local v2    # "dirProp":B
	// 13986    .end local v5    # "j":I
	// 13987    .end local v11    # "start":I
label_cond_2d6:
	//    .restart local v11    # "start":I
	goto label_goto_2bd;
	// 14000    .line 4203
	// 14001    .restart local v2    # "dirProp":B
	// 14002    .restart local v5    # "j":I
label_cond_2df:
	this->addPoint(last, 0x4);
	goto label_goto_19c;
	// 14012    .line 4206
label_cond_2e7:
	if ( (android::icu::text::Bidi::DirPropFlag(dirProp) &  android::icu::text::Bidi::MASK_R_AL) )     
		goto label_cond_19c;
	j = ( j + -0x1);
	goto label_goto_2be;
	// 14029    .line 4213
	// 14030    .end local v2    # "dirProp":B
	// 14031    .end local v4    # "i":I
	// 14032    .end local v5    # "j":I
	// 14033    .end local v6    # "last":I
	// 14034    .end local v7    # "level":B
	// 14035    .end local v11    # "start":I
label_cond_2f3:
	if ( !(( this->reorderingOptions & 0x2)) )  
		goto label_cond_30c;
	this->resultLength = (this->resultLength -  this->controlCount);
label_goto_308:
	this->setParaSuccess();
	return;
	// 14067    .line 4216
label_cond_30c:
	this->resultLength = (this->resultLength +  this->insertPoints->size);
	goto label_goto_308;
	// 14087    .restart local v3    # "eor":S
	// 14088    .restart local v7    # "level":B
	// 14089    .restart local v8    # "limit":I
	// 14090    .restart local v9    # "nextLevel":B
	// 14091    .restart local v10    # "sor":S
	// 14092    .restart local v12    # "start":I
label_cond_31c:
	start;
	//    .end local v12    # "start":I
	//    .restart local v11    # "start":I
	goto label_goto_287;
	// 14100    .line 4053
	// 14101    nop
	// 14103    :pswitch_data_320
	// 14104    .packed-switch 0x0
	// 14105        :pswitch_1af
	// 14106        :pswitch_1b5
	// 14107    .end packed-switch
	// 14109    .line 4066
	// 14110    :pswitch_data_328
	// 14111    .packed-switch 0x0
	// 14112        :pswitch_1bb
	// 14113        :pswitch_1c3
	// 14114        :pswitch_1cb
	// 14115        :pswitch_1d3
	// 14116        :pswitch_1dc
	// 14117        :pswitch_1e4
	// 14118        :pswitch_1fc
	// 14119    .end packed-switch

}
// .method setParaRunsOnly([CB)V
void android::icu::text::Bidi::setParaRunsOnly(std::shared_ptr<char[]> parmText,unsigned char parmParaLevel)
{
	
	int parmLength;
	int saveOptions;
	int cVar0;
	auto saveLevels;
	auto visualMap;
	int addedRuns;
	int oldRunCount;
	int visualStart;
	int i;
	int runLength;
	int logicalStart;
	int j;
	int index;
	int index1;
	std::shared_ptr<android::icu::text::BidiRun> cVar1;
	int newI;
	int indexOddBit;
	int logicalPos;
	int start;
	int limit;
	int step;
	std::shared_ptr<java::lang::Object> cVar2;
	int insertRemove;
	std::shared_ptr<java::lang::Object> cVar3;
	
	//    .param p1, "parmText"    # [C
	//    .param p2, "parmParaLevel"    # B
	this->reorderingMode = 0x0;
	parmLength = parmText->size();
	//    .local v17, "parmLength":I
	if ( parmLength )     
		goto label_cond_25;
	this->setPara(parmText, parmParaLevel, 0x0);
	this->reorderingMode = 0x3;
	return;
	// 14173    .line 3668
label_cond_25:
	saveOptions = this->reorderingOptions;
	//    .local v22, "saveOptions":I
	if ( ( saveOptions & 0x1) <= 0 )
		goto label_cond_4b;
	this->reorderingOptions = ( this->reorderingOptions & -0x2);
	this->reorderingOptions = ( this->reorderingOptions | 0x2);
label_cond_4b:
	cVar0 = (unsigned char)(( parmParaLevel & 0x1));
	this->setPara(parmText, cVar0, 0x0);
	saveLevels = std::make_shared<std::vector<unsigned char[]>>(this->length);
	//    .local v21, "saveLevels":[B
	java::lang::System::arraycopy(this->getLevels(), 0x0, saveLevels, 0x0, this->length);
	//    .local v23, "saveTrailingWSStart":I
	//    .local v28, "visualText":Ljava/lang/String;
	visualMap = this->getVisualMap();
	//    .local v26, "visualMap":[I
	this->reorderingOptions = saveOptions;
	//    .local v20, "saveLength":I
	//    .local v19, "saveDirection":B
	this->reorderingMode = 0x5;
	this->setPara(this->writeReordered(0x2), (unsigned char)(( cVar0 ^ 0x1)), 0x0);
	android::icu::text::BidiLine::getRuns(this);
	addedRuns = 0x0;
	//    .local v5, "addedRuns":I
	oldRunCount = this->runCount;
	//    .local v16, "oldRunCount":I
	visualStart = 0x0;
	//    .local v27, "visualStart":I
	i = 0x0;
	//    .local v6, "i":I
label_goto_d5:
	if ( i >= oldRunCount )
		goto label_cond_131;
	runLength = (this->runs[i]->limit - visualStart);
	//    .local v18, "runLength":I
	if ( runLength >= 0x2 )
		goto label_cond_f6;
label_cond_f1:
	i = ( i + 0x1);
	visualStart = (visualStart + runLength);
	goto label_goto_d5;
	// 14424    .line 3707
label_cond_f6:
	logicalStart = this->runs[i]->start;
	//    .local v14, "logicalStart":I
	j = ( logicalStart + 0x1);
	//    .local v11, "j":I
label_goto_104:
	if ( j >= (logicalStart + runLength) )
		goto label_cond_f1;
	index = visualMap[j];
	//    .local v7, "index":I
	index1 = visualMap[( j + -0x1)];
	//    .local v8, "index1":I
	if ( this->Bidi_Abs((index - index1)) != 0x1 )
		goto label_cond_12c;
	if ( saveLevels[index] == saveLevels[index1] )
		goto label_cond_12e;
label_cond_12c:
	addedRuns = ( addedRuns + 0x1);
label_cond_12e:
	j = ( j + 0x1);
	goto label_goto_104;
	// 14499    .line 3716
	// 14500    .end local v7    # "index":I
	// 14501    .end local v8    # "index1":I
	// 14502    .end local v11    # "j":I
	// 14503    .end local v14    # "logicalStart":I
	// 14504    .end local v18    # "runLength":I
label_cond_131:
	if ( addedRuns <= 0 )
		goto label_cond_1c8;
	this->getRunsMemory((oldRunCount + addedRuns));
	if ( this->runCount != 0x1 )
		goto label_cond_1a4;
	this->runsMemory[0x0] = this->runs[0x0];
label_goto_15e:
	this->runs = this->runsMemory;
	this->runCount = (this->runCount + addedRuns);
	i = oldRunCount;
label_goto_17a:
	if ( i >= this->runCount )
		goto label_cond_1c8;
	if ( this->runs[i] )     
		goto label_cond_1a1;
	cVar1 = std::make_shared<android::icu::text::BidiRun>(0x0, 0x0, 0x0);
	this->runs[i] = cVar1;
label_cond_1a1:
	i = ( i + 0x1);
	goto label_goto_17a;
	// 14632    .line 3722
label_cond_1a4:
	java::lang::System::arraycopy(this->runs, 0x0, this->runsMemory, 0x0, this->runCount);
	goto label_goto_15e;
	// 14670    .line 3734
label_cond_1c8:
	i = ( oldRunCount + -0x1);
label_goto_1ca:
	if ( i < 0 ) 
		goto label_cond_38e;
	newI = (i + addedRuns);
	//    .local v15, "newI":I
	if ( i )     
		goto label_cond_241;
	runLength = this->runs[0x0]->limit;
	//    .restart local v18    # "runLength":I
label_goto_1e0:
	logicalStart = this->runs[i]->start;
	//    .restart local v14    # "logicalStart":I
	indexOddBit = ( this->runs[i]->level & 0x1);
	//    .local v9, "indexOddBit":I
	if ( runLength >= 0x2 )
		goto label_cond_263;
	if ( addedRuns <= 0 )
		goto label_cond_219;
	this->runs[newI]->copyFrom(this->runs[i]);
label_cond_219:
	logicalPos = visualMap[logicalStart];
	//    .local v13, "logicalPos":I
	this->runs[newI]->start = logicalPos;
	this->runs[newI]->level = (unsigned char)((saveLevels[logicalPos] ^ indexOddBit));
label_goto_23e:
	i = ( i + -0x1);
	goto label_goto_1ca;
	// 14814    .line 3737
	// 14815    .end local v9    # "indexOddBit":I
	// 14816    .end local v13    # "logicalPos":I
	// 14817    .end local v14    # "logicalStart":I
	// 14818    .end local v18    # "runLength":I
label_cond_241:
	runLength = (this->runs[i]->limit - this->runs[( i + -0x1)]->limit);
	//    .restart local v18    # "runLength":I
	goto label_goto_1e0;
	// 14855    .line 3749
	// 14856    .restart local v9    # "indexOddBit":I
	// 14857    .restart local v14    # "logicalStart":I
label_cond_263:
	if ( indexOddBit <= 0 )
		goto label_cond_33d;
	start = logicalStart;
	//    .local v24, "start":I
	limit = ( (logicalStart + runLength) + -0x1);
	//    .local v12, "limit":I
	step = 0x1;
	//    .local v25, "step":I
label_goto_26d:
	j = start;
	//    .restart local v11    # "j":I
label_goto_26f:
	if ( j == limit )
		goto label_cond_346;
	index = visualMap[j];
	//    .restart local v7    # "index":I
	index1 = visualMap[(j + step)];
	//    .restart local v8    # "index1":I
	if ( this->Bidi_Abs((index - index1)) != 0x1 )
		goto label_cond_293;
	if ( saveLevels[index] == saveLevels[index1] )
		goto label_cond_339;
label_cond_293:
	logicalPos = this->Bidi_Min(visualMap[start], index);
	//    .restart local v13    # "logicalPos":I
	this->runs[newI]->start = logicalPos;
	this->runs[newI]->level = (unsigned char)((saveLevels[logicalPos] ^ indexOddBit));
	this->runs[newI]->limit = this->runs[i]->limit;
	cVar2 = this->runs[i];
	cVar2->limit = (cVar2->limit - ( this->Bidi_Abs((j - start)) + 0x1));
	insertRemove = ( this->runs[i]->insertRemove & 0xa);
	//    .local v10, "insertRemove":I
	this->runs[newI]->insertRemove = insertRemove;
	cVar3 = this->runs[i];
	cVar3->insertRemove = (cVar3->insertRemove & (~insertRemove));
	start = (j + step);
	addedRuns = ( addedRuns + -0x1);
	newI = ( newI + -0x1);
	//    .end local v10    # "insertRemove":I
	//    .end local v13    # "logicalPos":I
label_cond_339:
	j = (j + step);
	goto label_goto_26f;
	// 15112    .line 3754
	// 15113    .end local v7    # "index":I
	// 15114    .end local v8    # "index1":I
	// 15115    .end local v11    # "j":I
	// 15116    .end local v12    # "limit":I
	// 15117    .end local v24    # "start":I
	// 15118    .end local v25    # "step":I
label_cond_33d:
	start = ( (logicalStart + runLength) + -0x1);
	//    .restart local v24    # "start":I
	limit = logicalStart;
	//    .restart local v12    # "limit":I
	-0x1;
	//    .restart local v25    # "step":I
	goto label_goto_26d;
	// 15135    .line 3775
	// 15136    .restart local v11    # "j":I
label_cond_346:
	if ( addedRuns <= 0 )
		goto label_cond_35b;
	this->runs[newI]->copyFrom(this->runs[i]);
label_cond_35b:
	logicalPos = this->Bidi_Min(visualMap[start], visualMap[limit]);
	//    .restart local v13    # "logicalPos":I
	this->runs[newI]->start = logicalPos;
	this->runs[newI]->level = (unsigned char)((saveLevels[logicalPos] ^ indexOddBit));
	goto label_goto_23e;
	// 15216    .line 3785
	// 15217    .end local v9    # "indexOddBit":I
	// 15218    .end local v11    # "j":I
	// 15219    .end local v12    # "limit":I
	// 15220    .end local v13    # "logicalPos":I
	// 15221    .end local v14    # "logicalStart":I
	// 15222    .end local v15    # "newI":I
	// 15223    .end local v18    # "runLength":I
	// 15224    .end local v24    # "start":I
	// 15225    .end local v25    # "step":I
label_cond_38e:
	this->paraLevel = (unsigned char)(( this->paraLevel ^ 0x1));
	this->text = parmText;
	this->length = this->length;
	this->originalLength = parmLength;
	this->direction = this->direction;
	this->levels = saveLevels;
	this->trailingWSStart = this->trailingWSStart;
	if ( this->runCount <= 0x1 )
		goto label_cond_3db;
	this->direction = 0x2;
label_cond_3db:
	this->reorderingMode = 0x3;
	return;

}
// .method public setReorderingMode(I)V
void android::icu::text::Bidi::setReorderingMode(int reorderingMode)
{
	
	bool cVar1;
	
	//    .param p1, "reorderingMode"    # I
	cVar1 = 0x0;
	if ( reorderingMode < 0 ) 
		goto label_cond_6;
	if ( reorderingMode <  0x7 )
		goto label_cond_7;
label_cond_6:
	return;
	// 15346    .line 1618
label_cond_7:
	this->reorderingMode = reorderingMode;
	if ( reorderingMode != 0x4 )
		goto label_cond_d;
	cVar1 = 0x1;
label_cond_d:
	this->isInverse = cVar1;
	return;

}
// .method public setReorderingOptions(I)V
void android::icu::text::Bidi::setReorderingOptions(int options)
{
	
	//    .param p1, "options"    # I
	if ( !(( options & 0x2)) )  
		goto label_cond_9;
	this->reorderingOptions = ( options & -0x2);
label_goto_8:
	return;
	// 15384    .line 1653
label_cond_9:
	this->reorderingOptions = options;
	goto label_goto_8;

}
// .method testDirPropFlagAt(II)Z
bool android::icu::text::Bidi::testDirPropFlagAt(int flag,int index)
{
	
	bool cVar1;
	
	//    .param p1, "flag"    # I
	//    .param p2, "index"    # I
	cVar1 = 0x0;
	if ( !((android::icu::text::Bidi::DirPropFlag(this->dirProps[index]) &  flag)) )  
		goto label_cond_d;
	cVar1 = 0x1;
label_cond_d:
	return cVar1;

}
// .method verifyRange(III)V
void android::icu::text::Bidi::verifyRange(int index,int start,int limit)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "index"    # I
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	if ( index <  start )
		goto label_cond_4;
	if ( index <  limit )
		goto label_cond_34;
label_cond_4:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Value ")))->append(index)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is out of range ")))->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" to ")))->append(limit)->toString());
	// throw
	throw cVar0;
	// 15480    .line 1205
label_cond_34:
	return;

}
// .method verifyValidPara()V
void android::icu::text::Bidi::verifyValidPara()
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	if ( this == this->paraBidi )
		goto label_cond_a;
	cVar0 = std::make_shared<java::lang::IllegalStateException>();
	// throw
	throw cVar0;
	// 15501    .line 1184
label_cond_a:
	return;

}
// .method verifyValidParaOrLine()V
void android::icu::text::Bidi::verifyValidParaOrLine()
{
	
	std::shared_ptr<android::icu::text::Bidi> para;
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	para = this->paraBidi;
	//    .local v0, "para":Landroid/icu/text/Bidi;
	if ( this != para )
		goto label_cond_5;
	return;
	// 15520    .line 1194
label_cond_5:
	if ( !(para) )  
		goto label_cond_b;
	if ( para == para->paraBidi )
		goto label_cond_11;
label_cond_b:
	cVar0 = std::make_shared<java::lang::IllegalStateException>();
	// throw
	throw cVar0;
	// 15536    .line 1197
label_cond_11:
	return;

}
// .method public writeReordered(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Bidi::writeReordered(int options)
{
	
	//    .param p1, "options"    # I
	this->verifyValidParaOrLine();
	if ( this->length )     
		goto label_cond_b;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 15559    .line 5657
label_cond_b:
	return android::icu::text::BidiWriter::writeReordered(this, options);

}


