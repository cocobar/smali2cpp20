// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2_16.h"
#include "android.icu.impl.UCharacterProperty_S_10.h"
#include "android.icu.impl.UCharacterProperty_S_11.h"
#include "android.icu.impl.UCharacterProperty_S_12.h"
#include "android.icu.impl.UCharacterProperty_S_13.h"
#include "android.icu.impl.UCharacterProperty_S_14.h"
#include "android.icu.impl.UCharacterProperty_S_15.h"
#include "android.icu.impl.UCharacterProperty_S_16.h"
#include "android.icu.impl.UCharacterProperty_S_17.h"
#include "android.icu.impl.UCharacterProperty_S_18.h"
#include "android.icu.impl.UCharacterProperty_S_19.h"
#include "android.icu.impl.UCharacterProperty_S_1.h"
#include "android.icu.impl.UCharacterProperty_S_20.h"
#include "android.icu.impl.UCharacterProperty_S_21.h"
#include "android.icu.impl.UCharacterProperty_S_22.h"
#include "android.icu.impl.UCharacterProperty_S_23.h"
#include "android.icu.impl.UCharacterProperty_S_2.h"
#include "android.icu.impl.UCharacterProperty_S_3.h"
#include "android.icu.impl.UCharacterProperty_S_4.h"
#include "android.icu.impl.UCharacterProperty_S_5.h"
#include "android.icu.impl.UCharacterProperty_S_6.h"
#include "android.icu.impl.UCharacterProperty_S_7.h"
#include "android.icu.impl.UCharacterProperty_S_8.h"
#include "android.icu.impl.UCharacterProperty_S_9.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty_S_CaseBinaryProperty.h"
#include "android.icu.impl.UCharacterProperty_S_IntProperty.h"
#include "android.icu.impl.UCharacterProperty_S_IsAcceptable.h"
#include "android.icu.impl.UCharacterProperty_S_NormInertBinaryProperty.h"
#include "android.icu.impl.UCharacterProperty_S_NormQuickCheckIntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ICUException.h"
#include "android.icu.util.VersionInfo.h"
#include "java.io.IOException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Iterator.h"
#include "java.util.MissingResourceException.h"

static android::icu::impl::UCharacterProperty::_assertionsDisabled;
static android::icu::impl::UCharacterProperty::AGE_SHIFT_ = 0x18;
static android::icu::impl::UCharacterProperty::ALPHABETIC_PROPERTY_ = 0x8;
static android::icu::impl::UCharacterProperty::ASCII_HEX_DIGIT_PROPERTY_ = 0x7;
static android::icu::impl::UCharacterProperty::BLOCK_MASK_ = 0x1ff00;
static android::icu::impl::UCharacterProperty::BLOCK_SHIFT_ = 0x8;
static android::icu::impl::UCharacterProperty::CGJ = 0x34f;
static android::icu::impl::UCharacterProperty::CR = 0xd;
static android::icu::impl::UCharacterProperty::DASH_PROPERTY_ = 0x1;
static android::icu::impl::UCharacterProperty::DATA_FILE_NAME_ = std::make_shared<java::lang::String>("uprops.icu");
static android::icu::impl::UCharacterProperty::DATA_FORMAT = 0x5550726f;
static android::icu::impl::UCharacterProperty::DECOMPOSITION_TYPE_MASK_ = 0x1f;
static android::icu::impl::UCharacterProperty::DEFAULT_IGNORABLE_CODE_POINT_PROPERTY_ = 0x13;
static android::icu::impl::UCharacterProperty::DEL = 0x7f;
static android::icu::impl::UCharacterProperty::DEPRECATED_PROPERTY_ = 0x14;
static android::icu::impl::UCharacterProperty::DIACRITIC_PROPERTY_ = 0xa;
static android::icu::impl::UCharacterProperty::EAST_ASIAN_MASK_ = 0xe0000;
static android::icu::impl::UCharacterProperty::EAST_ASIAN_SHIFT_ = 0x11;
static android::icu::impl::UCharacterProperty::EXTENDER_PROPERTY_ = 0xb;
static android::icu::impl::UCharacterProperty::FIGURESP = 0x2007;
static android::icu::impl::UCharacterProperty::FIRST_NIBBLE_SHIFT_ = 0x4;
static android::icu::impl::UCharacterProperty::GCB_MASK = 0x3e0;
static android::icu::impl::UCharacterProperty::GCB_SHIFT = 0x5;
static android::icu::impl::UCharacterProperty::GC_CC_MASK;
static android::icu::impl::UCharacterProperty::GC_CN_MASK;
static android::icu::impl::UCharacterProperty::GC_CS_MASK;
static android::icu::impl::UCharacterProperty::GC_ZL_MASK;
static android::icu::impl::UCharacterProperty::GC_ZP_MASK;
static android::icu::impl::UCharacterProperty::GC_ZS_MASK;
static android::icu::impl::UCharacterProperty::GC_Z_MASK;
static android::icu::impl::UCharacterProperty::GRAPHEME_BASE_PROPERTY_ = 0x1a;
static android::icu::impl::UCharacterProperty::GRAPHEME_EXTEND_PROPERTY_ = 0xd;
static android::icu::impl::UCharacterProperty::GRAPHEME_LINK_PROPERTY_ = 0xe;
static android::icu::impl::UCharacterProperty::HAIRSP = 0x200a;
static android::icu::impl::UCharacterProperty::HEX_DIGIT_PROPERTY_ = 0x6;
static android::icu::impl::UCharacterProperty::HYPHEN_PROPERTY_ = 0x2;
static android::icu::impl::UCharacterProperty::IDEOGRAPHIC_PROPERTY_ = 0x9;
static android::icu::impl::UCharacterProperty::IDS_BINARY_OPERATOR_PROPERTY_ = 0xf;
static android::icu::impl::UCharacterProperty::IDS_TRINARY_OPERATOR_PROPERTY_ = 0x10;
static android::icu::impl::UCharacterProperty::ID_CONTINUE_PROPERTY_ = 0x19;
static android::icu::impl::UCharacterProperty::ID_START_PROPERTY_ = 0x18;
static android::icu::impl::UCharacterProperty::INHSWAP = 0x206a;
static android::icu::impl::UCharacterProperty::INSTANCE;
static android::icu::impl::UCharacterProperty::LAST_NIBBLE_MASK_ = 0xf;
static android::icu::impl::UCharacterProperty::LATIN_CAPITAL_LETTER_I_WITH_DOT_ABOVE_ = '\u0130';
static android::icu::impl::UCharacterProperty::LATIN_SMALL_LETTER_DOTLESS_I_ = '\u0131';
static android::icu::impl::UCharacterProperty::LATIN_SMALL_LETTER_I_ = 'i';
static android::icu::impl::UCharacterProperty::LB_MASK = 0x3f00000;
static android::icu::impl::UCharacterProperty::LB_SHIFT = 0x14;
static android::icu::impl::UCharacterProperty::LOGICAL_ORDER_EXCEPTION_PROPERTY_ = 0x15;
static android::icu::impl::UCharacterProperty::MATH_PROPERTY_ = 0x5;
static android::icu::impl::UCharacterProperty::MY_MASK = 0x1e;
static android::icu::impl::UCharacterProperty::NBSP = 0xa0;
static android::icu::impl::UCharacterProperty::NL = 0x85;
static android::icu::impl::UCharacterProperty::NNBSP = 0x202f;
static android::icu::impl::UCharacterProperty::NOMDIG = 0x206f;
static android::icu::impl::UCharacterProperty::NONCHARACTER_CODE_POINT_PROPERTY_ = 0xc;
static android::icu::impl::UCharacterProperty::NTV_BASE60_START_ = 0x300;
static android::icu::impl::UCharacterProperty::NTV_DECIMAL_START_ = 0x1;
static android::icu::impl::UCharacterProperty::NTV_DIGIT_START_ = 0xb;
static android::icu::impl::UCharacterProperty::NTV_FRACTION20_START_ = 0x324;
static android::icu::impl::UCharacterProperty::NTV_FRACTION_START_ = 0xb0;
static android::icu::impl::UCharacterProperty::NTV_LARGE_START_ = 0x1e0;
static android::icu::impl::UCharacterProperty::NTV_NONE_ = 0x0;
static android::icu::impl::UCharacterProperty::NTV_NUMERIC_START_ = 0x15;
static android::icu::impl::UCharacterProperty::NTV_RESERVED_START_ = 0x33c;
static android::icu::impl::UCharacterProperty::NUMERIC_TYPE_VALUE_SHIFT_ = 0x6;
static android::icu::impl::UCharacterProperty::PATTERN_SYNTAX = 0x1d;
static android::icu::impl::UCharacterProperty::PATTERN_WHITE_SPACE = 0x1e;
static android::icu::impl::UCharacterProperty::PROPS_2_EMOJI = 0x1c;
static android::icu::impl::UCharacterProperty::PROPS_2_EMOJI_MODIFIER = 0x1e;
static android::icu::impl::UCharacterProperty::PROPS_2_EMOJI_MODIFIER_BASE = 0x1f;
static android::icu::impl::UCharacterProperty::PROPS_2_EMOJI_PRESENTATION = 0x1d;
static android::icu::impl::UCharacterProperty::QUOTATION_MARK_PROPERTY_ = 0x3;
static android::icu::impl::UCharacterProperty::RADICAL_PROPERTY_ = 0x11;
static android::icu::impl::UCharacterProperty::RLM = 0x200f;
static android::icu::impl::UCharacterProperty::SB_MASK = 0xf8000;
static android::icu::impl::UCharacterProperty::SB_SHIFT = 0xf;
static android::icu::impl::UCharacterProperty::SCRIPT_MASK_ = 0xff;
static android::icu::impl::UCharacterProperty::SCRIPT_X_MASK = 0xc000ff;
static android::icu::impl::UCharacterProperty::SCRIPT_X_WITH_COMMON = 0x400000;
static android::icu::impl::UCharacterProperty::SCRIPT_X_WITH_INHERITED = 0x800000;
static android::icu::impl::UCharacterProperty::SCRIPT_X_WITH_OTHER = 0xc00000;
static android::icu::impl::UCharacterProperty::SRC_BIDI = 0x5;
static android::icu::impl::UCharacterProperty::SRC_CASE = 0x4;
static android::icu::impl::UCharacterProperty::SRC_CASE_AND_NORM = 0x7;
static android::icu::impl::UCharacterProperty::SRC_CHAR = 0x1;
static android::icu::impl::UCharacterProperty::SRC_CHAR_AND_PROPSVEC = 0x6;
static android::icu::impl::UCharacterProperty::SRC_COUNT = 0xc;
static android::icu::impl::UCharacterProperty::SRC_NAMES = 0x3;
static android::icu::impl::UCharacterProperty::SRC_NFC = 0x8;
static android::icu::impl::UCharacterProperty::SRC_NFC_CANON_ITER = 0xb;
static android::icu::impl::UCharacterProperty::SRC_NFKC = 0x9;
static android::icu::impl::UCharacterProperty::SRC_NFKC_CF = 0xa;
static android::icu::impl::UCharacterProperty::SRC_NONE = 0x0;
static android::icu::impl::UCharacterProperty::SRC_PROPSVEC = 0x2;
static android::icu::impl::UCharacterProperty::S_TERM_PROPERTY_ = 0x1b;
static android::icu::impl::UCharacterProperty::TAB = 0x9;
static android::icu::impl::UCharacterProperty::TERMINAL_PUNCTUATION_PROPERTY_ = 0x4;
static android::icu::impl::UCharacterProperty::TYPE_MASK = 0x1f;
static android::icu::impl::UCharacterProperty::UNIFIED_IDEOGRAPH_PROPERTY_ = 0x12;
static android::icu::impl::UCharacterProperty::U_A = 0x41;
static android::icu::impl::UCharacterProperty::U_F = 0x46;
static android::icu::impl::UCharacterProperty::U_FW_A = 0xff21;
static android::icu::impl::UCharacterProperty::U_FW_F = 0xff26;
static android::icu::impl::UCharacterProperty::U_FW_Z = 0xff3a;
static android::icu::impl::UCharacterProperty::U_FW_a = 0xff41;
static android::icu::impl::UCharacterProperty::U_FW_f = 0xff46;
static android::icu::impl::UCharacterProperty::U_FW_z = 0xff5a;
static android::icu::impl::UCharacterProperty::U_Z = 0x5a;
static android::icu::impl::UCharacterProperty::U_a = 0x61;
static android::icu::impl::UCharacterProperty::U_f = 0x66;
static android::icu::impl::UCharacterProperty::U_z = 0x7a;
static android::icu::impl::UCharacterProperty::VARIATION_SELECTOR_PROPERTY_ = 0x1c;
static android::icu::impl::UCharacterProperty::WB_MASK = 0x7c00;
static android::icu::impl::UCharacterProperty::WB_SHIFT = 0xa;
static android::icu::impl::UCharacterProperty::WHITE_SPACE_PROPERTY_ = 0x0;
static android::icu::impl::UCharacterProperty::WJ = 0x2060;
static android::icu::impl::UCharacterProperty::XID_CONTINUE_PROPERTY_ = 0x17;
static android::icu::impl::UCharacterProperty::XID_START_PROPERTY_ = 0x16;
static android::icu::impl::UCharacterProperty::ZWNBSP = 0xfeff;
static android::icu::impl::UCharacterProperty::gcbToHst;
// .method static synthetic -get0()[I
int android::icu::impl::UCharacterProperty::_get0()
{
	
	return android::icu::impl::UCharacterProperty::gcbToHst;

}
// .method static synthetic -wrap0(I)Z
bool android::icu::impl::UCharacterProperty::_wrap0(int c)
{
	
	//    .param p0, "c"    # I
	return android::icu::impl::UCharacterProperty::isgraphPOSIX(c);

}
// .method static synthetic -wrap1(I)I
int android::icu::impl::UCharacterProperty::_wrap1(int props)
{
	
	//    .param p0, "props"    # I
	return android::icu::impl::UCharacterProperty::getNumericTypeValue(props);

}
// .method static synthetic -wrap2(I)I
int android::icu::impl::UCharacterProperty::_wrap2(int ntv)
{
	
	//    .param p0, "ntv"    # I
	return android::icu::impl::UCharacterProperty::ntvGetType(ntv);

}
// .method static constructor <clinit>()V
void android::icu::impl::UCharacterProperty::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::shared_ptr<java::util::MissingResourceException> cVar2;
	std::shared_ptr<android::icu::impl::UCharacterProperty> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	android::icu::impl::UCharacterProperty::_assertionsDisabled = ( android::icu::impl::UCharacterProperty()->desiredAssertionStatus() ^ 0x1);
	android::icu::impl::UCharacterProperty::GC_CN_MASK = android::icu::impl::UCharacterProperty::getMask(0x0);
	android::icu::impl::UCharacterProperty::GC_CC_MASK = android::icu::impl::UCharacterProperty::getMask(0xf);
	android::icu::impl::UCharacterProperty::GC_CS_MASK = android::icu::impl::UCharacterProperty::getMask(0x12);
	android::icu::impl::UCharacterProperty::GC_ZS_MASK = android::icu::impl::UCharacterProperty::getMask(0xc);
	android::icu::impl::UCharacterProperty::GC_ZL_MASK = android::icu::impl::UCharacterProperty::getMask(0xd);
	android::icu::impl::UCharacterProperty::GC_ZP_MASK = android::icu::impl::UCharacterProperty::getMask(0xe);
	android::icu::impl::UCharacterProperty::GC_Z_MASK = ((android::icu::impl::UCharacterProperty::GC_ZS_MASK |  android::icu::impl::UCharacterProperty::GC_ZL_MASK) |  android::icu::impl::UCharacterProperty::GC_ZP_MASK);
	cVar0 = std::make_shared<std::vector<int[]>>(0xa);
	?;
	android::icu::impl::UCharacterProperty::gcbToHst = cVar0;
	try {
	//label_try_start_4c:
	cVar1 = std::make_shared<android::icu::impl::UCharacterProperty>();
	android::icu::impl::UCharacterProperty::INSTANCE = cVar1;
	//label_try_end_53:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_54;
	}
	//    .catch Ljava/io/IOException; {:try_start_4c .. :try_end_53} :catch_54
	return;
	// 460    .line 1439
label_catch_54:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar2 = std::make_shared<java::util::MissingResourceException>(getCatchExcetionFromList->getMessage(), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar2;
	// 480    .line 429
	// 481    nop
	// 483    :array_66
	// 484    .array-data 4
	// 485        0x0
	// 486        0x0
	// 487        0x0
	// 488        0x0
	// 489        0x1
	// 490        0x0
	// 491        0x4
	// 492        0x5
	// 493        0x3
	// 494        0x2
	// 495    .end array-data

}
// .method private constructor <init>()V
android::icu::impl::UCharacterProperty::UCharacterProperty()
{
	
	std::shared<std::vector<std::vector<android::icu::impl::UCharacterProperty_S_BinaryProperty>>> cVar0;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar1;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar2;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_1> cVar3;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_2> cVar4;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar5;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar6;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar7;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar8;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar9;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_3> cVar10;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar11;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar12;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar13;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar14;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar15;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar16;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar17;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar18;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar19;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar20;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_4> cVar21;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar22;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty> cVar23;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar24;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar25;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar26;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar27;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty> cVar28;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar29;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar30;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty> cVar31;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar32;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar33;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar34;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty> cVar35;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar36;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar37;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_NormInertBinaryProperty> cVar38;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_NormInertBinaryProperty> cVar39;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_NormInertBinaryProperty> cVar40;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_NormInertBinaryProperty> cVar41;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_5> cVar42;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar43;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar44;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_6> cVar45;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_7> cVar46;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_8> cVar47;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_9> cVar48;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_10> cVar49;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty> cVar50;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty> cVar51;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty> cVar52;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty> cVar53;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty> cVar54;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_11> cVar55;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty> cVar56;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_12> cVar57;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar58;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar59;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar60;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_BinaryProperty> cVar61;
	std::shared_ptr<java::lang::Object> cVar62;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_13> cVar63;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_IntProperty> cVar64;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_14> cVar65;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_IntProperty> cVar66;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_IntProperty> cVar67;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_15> cVar68;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_16> cVar69;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_17> cVar70;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_IntProperty> cVar71;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_18> cVar72;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_19> cVar73;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_20> cVar74;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_NormQuickCheckIntProperty> cVar75;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_NormQuickCheckIntProperty> cVar76;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_NormQuickCheckIntProperty> cVar77;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_NormQuickCheckIntProperty> cVar78;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_21> cVar79;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_22> cVar80;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_IntProperty> cVar81;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_IntProperty> cVar82;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_IntProperty> cVar83;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_23> cVar84;
	std::shared_ptr<android::icu::util::ICUException> cVar85;
	std::shared_ptr<android::icu::util::ICUException> cVar86;
	std::shared_ptr<java::nio::ByteBuffer> bytes;
	std::shared_ptr<android::icu::impl::UCharacterProperty_S_IsAcceptable> cVar87;
	int propertyOffset;
	int additionalOffset;
	int additionalVectorsOffset;
	int scriptExtensionsOffset;
	int expectedTrieLength;
	int trieLength;
	std::shared_ptr<java::io::IOException> cVar88;
	std::shared_ptr<java::io::IOException> cVar89;
	int numChars;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 501        value = {
	// 502            Ljava/io/IOException;
	// 503        }
	// 504    .end annotation
	// 508    invoke-direct/range {p0 .. p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<std::vector<std::vector<android::icu::impl::UCharacterProperty_S_BinaryProperty>>>(0x3d);
	cVar1 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x100);
	cVar0[0x0] = cVar1;
	cVar2 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x80);
	cVar0[0x1] = cVar2;
	cVar3 = std::make_shared<android::icu::impl::UCharacterProperty_S_1>(this, this, 0x5);
	cVar0[0x2] = cVar3;
	cVar4 = std::make_shared<android::icu::impl::UCharacterProperty_S_2>(this, this, 0x5);
	cVar0[0x3] = cVar4;
	cVar5 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x2);
	cVar0[0x4] = cVar5;
	cVar6 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x80000);
	cVar0[0x5] = cVar6;
	cVar7 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x100000);
	cVar0[0x6] = cVar7;
	cVar8 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x400);
	cVar0[0x7] = cVar8;
	cVar9 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x800);
	cVar0[0x8] = cVar9;
	cVar10 = std::make_shared<android::icu::impl::UCharacterProperty_S_3>(this, this, 0x8);
	cVar0[0x9] = cVar10;
	cVar11 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x4000000);
	cVar0[0xa] = cVar11;
	cVar12 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x2000);
	cVar0[0xb] = cVar12;
	cVar13 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x4000);
	cVar0[0xc] = cVar13;
	cVar14 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x40);
	cVar0[0xd] = cVar14;
	cVar15 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x4);
	cVar0[0xe] = cVar15;
	cVar16 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x2000000);
	cVar0[0xf] = cVar16;
	cVar17 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x1000000);
	cVar0[0x10] = cVar17;
	cVar18 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x200);
	cVar0[0x11] = cVar18;
	cVar19 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x8000);
	cVar0[0x12] = cVar19;
	cVar20 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x10000);
	cVar0[0x13] = cVar20;
	cVar21 = std::make_shared<android::icu::impl::UCharacterProperty_S_4>(this, this, 0x5);
	cVar0[0x14] = cVar21;
	cVar22 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x200000);
	cVar0[0x15] = cVar22;
	cVar23 = std::make_shared<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty>(this, 0x16);
	cVar0[0x16] = cVar23;
	cVar24 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x20);
	cVar0[0x17] = cVar24;
	cVar25 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x1000);
	cVar0[0x18] = cVar25;
	cVar26 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x8);
	cVar0[0x19] = cVar26;
	cVar27 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x20000);
	cVar0[0x1a] = cVar27;
	cVar28 = std::make_shared<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty>(this, 0x1b);
	cVar0[0x1b] = cVar28;
	cVar29 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x10);
	cVar0[0x1c] = cVar29;
	cVar30 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x40000);
	cVar0[0x1d] = cVar30;
	cVar31 = std::make_shared<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty>(this, 0x1e);
	cVar0[0x1e] = cVar31;
	cVar32 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x1);
	cVar0[0x1f] = cVar32;
	cVar33 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x800000);
	cVar0[0x20] = cVar33;
	cVar34 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x400000);
	cVar0[0x21] = cVar34;
	cVar35 = std::make_shared<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty>(this, 0x22);
	cVar0[0x22] = cVar35;
	cVar36 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x8000000);
	cVar0[0x23] = cVar36;
	cVar37 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x10000000);
	cVar0[0x24] = cVar37;
	cVar38 = std::make_shared<android::icu::impl::UCharacterProperty_S_NormInertBinaryProperty>(this, 0x8, 0x25);
	cVar0[0x25] = cVar38;
	cVar39 = std::make_shared<android::icu::impl::UCharacterProperty_S_NormInertBinaryProperty>(this, 0x9, 0x26);
	cVar0[0x26] = cVar39;
	cVar40 = std::make_shared<android::icu::impl::UCharacterProperty_S_NormInertBinaryProperty>(this, 0x8, 0x27);
	cVar0[0x27] = cVar40;
	cVar41 = std::make_shared<android::icu::impl::UCharacterProperty_S_NormInertBinaryProperty>(this, 0x9, 0x28);
	cVar0[0x28] = cVar41;
	cVar42 = std::make_shared<android::icu::impl::UCharacterProperty_S_5>(this, this, 0xb);
	cVar0[0x29] = cVar42;
	cVar43 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x20000000);
	cVar0[0x2a] = cVar43;
	cVar44 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x1, 0x40000000);
	cVar0[0x2b] = cVar44;
	cVar45 = std::make_shared<android::icu::impl::UCharacterProperty_S_6>(this, this, 0x6);
	cVar0[0x2c] = cVar45;
	cVar46 = std::make_shared<android::icu::impl::UCharacterProperty_S_7>(this, this, 0x1);
	cVar0[0x2d] = cVar46;
	cVar47 = std::make_shared<android::icu::impl::UCharacterProperty_S_8>(this, this, 0x1);
	cVar0[0x2e] = cVar47;
	cVar48 = std::make_shared<android::icu::impl::UCharacterProperty_S_9>(this, this, 0x1);
	cVar0[0x2f] = cVar48;
	cVar49 = std::make_shared<android::icu::impl::UCharacterProperty_S_10>(this, this, 0x1);
	cVar0[0x30] = cVar49;
	cVar50 = std::make_shared<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty>(this, 0x31);
	cVar0[0x31] = cVar50;
	cVar51 = std::make_shared<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty>(this, 0x32);
	cVar0[0x32] = cVar51;
	cVar52 = std::make_shared<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty>(this, 0x33);
	cVar0[0x33] = cVar52;
	cVar53 = std::make_shared<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty>(this, 0x34);
	cVar0[0x34] = cVar53;
	cVar54 = std::make_shared<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty>(this, 0x35);
	cVar0[0x35] = cVar54;
	cVar55 = std::make_shared<android::icu::impl::UCharacterProperty_S_11>(this, this, 0x7);
	cVar0[0x36] = cVar55;
	cVar56 = std::make_shared<android::icu::impl::UCharacterProperty_S_CaseBinaryProperty>(this, 0x37);
	cVar0[0x37] = cVar56;
	cVar57 = std::make_shared<android::icu::impl::UCharacterProperty_S_12>(this, this, 0xa);
	cVar0[0x38] = cVar57;
	cVar58 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x2, 0x10000000);
	cVar0[0x39] = cVar58;
	cVar59 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x2, 0x20000000);
	cVar0[0x3a] = cVar59;
	cVar60 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x2, 0x40000000);
	cVar0[0x3b] = cVar60;
	cVar61 = std::make_shared<android::icu::impl::UCharacterProperty_S_BinaryProperty>(this, 0x2, -0x80000000);
	cVar0[0x3c] = cVar61;
	this->binProps = cVar0;
	cVar62 = std::make_shared<std::vector<std::vector<android::icu::impl::UCharacterProperty_S_IntProperty>>>(0x16);
	cVar63 = std::make_shared<android::icu::impl::UCharacterProperty_S_13>(this, this);
	cVar62[0x0] = cVar63;
	cVar64 = std::make_shared<android::icu::impl::UCharacterProperty_S_IntProperty>(this, 0x0, 0x1ff00, 0x8);
	cVar62[0x1] = cVar64;
	cVar65 = std::make_shared<android::icu::impl::UCharacterProperty_S_14>(this, this, 0x8);
	cVar62[0x2] = cVar65;
	cVar66 = std::make_shared<android::icu::impl::UCharacterProperty_S_IntProperty>(this, 0x2, 0x1f, 0x0);
	cVar62[0x3] = cVar66;
	cVar67 = std::make_shared<android::icu::impl::UCharacterProperty_S_IntProperty>(this, 0x0, 0xe0000, 0x11);
	cVar62[0x4] = cVar67;
	cVar68 = std::make_shared<android::icu::impl::UCharacterProperty_S_15>(this, this, 0x1);
	cVar62[0x5] = cVar68;
	cVar69 = std::make_shared<android::icu::impl::UCharacterProperty_S_16>(this, this);
	cVar62[0x6] = cVar69;
	cVar70 = std::make_shared<android::icu::impl::UCharacterProperty_S_17>(this, this);
	cVar62[0x7] = cVar70;
	cVar71 = std::make_shared<android::icu::impl::UCharacterProperty_S_IntProperty>(this, 0x2, 0x3f00000, 0x14);
	cVar62[0x8] = cVar71;
	cVar72 = std::make_shared<android::icu::impl::UCharacterProperty_S_18>(this, this, 0x1);
	cVar62[0x9] = cVar72;
	cVar73 = std::make_shared<android::icu::impl::UCharacterProperty_S_19>(this, this, 0x0, 0xff, 0x0);
	cVar62[0xa] = cVar73;
	cVar74 = std::make_shared<android::icu::impl::UCharacterProperty_S_20>(this, this, 0x2);
	cVar62[0xb] = cVar74;
	cVar75 = std::make_shared<android::icu::impl::UCharacterProperty_S_NormQuickCheckIntProperty>(this, 0x8, 0x100c, 0x1);
	cVar62[0xc] = cVar75;
	cVar76 = std::make_shared<android::icu::impl::UCharacterProperty_S_NormQuickCheckIntProperty>(this, 0x9, 0x100d, 0x1);
	cVar62[0xd] = cVar76;
	cVar77 = std::make_shared<android::icu::impl::UCharacterProperty_S_NormQuickCheckIntProperty>(this, 0x8, 0x100e, 0x2);
	cVar62[0xe] = cVar77;
	cVar78 = std::make_shared<android::icu::impl::UCharacterProperty_S_NormQuickCheckIntProperty>(this, 0x9, 0x100f, 0x2);
	cVar62[0xf] = cVar78;
	cVar79 = std::make_shared<android::icu::impl::UCharacterProperty_S_21>(this, this, 0x8);
	cVar62[0x10] = cVar79;
	cVar80 = std::make_shared<android::icu::impl::UCharacterProperty_S_22>(this, this, 0x8);
	cVar62[0x11] = cVar80;
	cVar81 = std::make_shared<android::icu::impl::UCharacterProperty_S_IntProperty>(this, 0x2, 0x3e0, 0x5);
	cVar62[0x12] = cVar81;
	cVar82 = std::make_shared<android::icu::impl::UCharacterProperty_S_IntProperty>(this, 0x2, 0xf8000, 0xf);
	cVar62[0x13] = cVar82;
	cVar83 = std::make_shared<android::icu::impl::UCharacterProperty_S_IntProperty>(this, 0x2, 0x7c00, 0xa);
	cVar62[0x14] = cVar83;
	cVar84 = std::make_shared<android::icu::impl::UCharacterProperty_S_23>(this, this);
	cVar62[0x15] = cVar84;
	this->intProps = cVar62;
	if ( this->binProps->size() == 0x3d )
		goto label_cond_4b6;
	cVar85 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("binProps.length!=UProperty.BINARY_LIMIT")));
	// throw
	throw cVar85;
	// 1797    .line 1216
label_cond_4b6:
	if ( this->intProps->size() == 0x16 )
		goto label_cond_4c8;
	cVar86 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("intProps.length!=(UProperty.INT_LIMIT-UProperty.INT_START)")));
	// throw
	throw cVar86;
	// 1818    .line 1221
label_cond_4c8:
	bytes = android::icu::impl::ICUBinary::getRequiredData(std::make_shared<java::lang::String>(std::make_shared<char[]>("uprops.icu")));
	//    .local v10, "bytes":Ljava/nio/ByteBuffer;
	cVar87 = std::make_shared<android::icu::impl::UCharacterProperty_S_IsAcceptable>(0x0);
	this->m_unicodeVersion_ = android::icu::impl::ICUBinary::readHeaderAndDataVersion(bytes, 0x5550726f, cVar87);
	propertyOffset = bytes->getInt();
	//    .local v13, "propertyOffset":I
	bytes->getInt();
	bytes->getInt();
	additionalOffset = bytes->getInt();
	//    .local v8, "additionalOffset":I
	additionalVectorsOffset = bytes->getInt();
	//    .local v9, "additionalVectorsOffset":I
	this->m_additionalColumnsCount_ = bytes->getInt();
	scriptExtensionsOffset = bytes->getInt();
	//    .local v15, "scriptExtensionsOffset":I
	//    .local v14, "reservedOffset7":I
	bytes->getInt();
	bytes->getInt();
	this->m_maxBlockScriptValue_ = bytes->getInt();
	this->m_maxJTGValue_ = bytes->getInt();
	android::icu::impl::ICUBinary::skipBytes(bytes, 0x10);
	this->m_trie_ = android::icu::impl::Trie2_16::createFromSerialized(bytes);
	expectedTrieLength = ( ( propertyOffset + -0x10) * 0x4);
	//    .local v11, "expectedTrieLength":I
	trieLength = this->m_trie_->getSerializedLength();
	//    .local v17, "trieLength":I
	if ( trieLength <= expectedTrieLength )
		goto label_cond_53e;
	cVar88 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("uprops.icu: not enough bytes for main trie")));
	// throw
	throw cVar88;
	// 1957    .line 1246
label_cond_53e:
	android::icu::impl::ICUBinary::skipBytes(bytes, (expectedTrieLength - trieLength));
	android::icu::impl::ICUBinary::skipBytes(bytes, ( (additionalOffset - propertyOffset) * 0x4));
	if ( this->m_additionalColumnsCount_ <= 0 )
		goto label_cond_583;
	this->m_additionalTrie_ = android::icu::impl::Trie2_16::createFromSerialized(bytes);
	expectedTrieLength = ( (additionalVectorsOffset - additionalOffset) * 0x4);
	trieLength = this->m_additionalTrie_->getSerializedLength();
	if ( trieLength <= expectedTrieLength )
		goto label_cond_571;
	cVar89 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("uprops.icu: not enough bytes for additional-properties trie")));
	// throw
	throw cVar89;
	// 2014    .line 1260
label_cond_571:
	android::icu::impl::ICUBinary::skipBytes(bytes, (expectedTrieLength - trieLength));
	//    .local v16, "size":I
	this->m_additionalVectors_ = android::icu::impl::ICUBinary::getInts(bytes, (scriptExtensionsOffset - additionalVectorsOffset), 0x0);
	//    .end local v16    # "size":I
label_cond_583:
	numChars = ( (bytes->getInt() - scriptExtensionsOffset) * 0x2);
	//    .local v12, "numChars":I
	if ( numChars <= 0 )
		goto label_cond_592;
	this->m_scriptExtensions_ = android::icu::impl::ICUBinary::getChars(bytes, numChars, 0x0);
label_cond_592:
	return;

}
// .method public static getEuropeanDigit(I)I
int android::icu::impl::UCharacterProperty::getEuropeanDigit(int ch)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	
	//    .param p0, "ch"    # I
	cVar0 = 0xff21;
	cVar1 = 0x7a;
	cVar2 = 0x61;
	cVar3 = 0x5a;
	cVar4 = 0x41;
	if ( ch <= cVar1 )
		goto label_cond_11;
	if ( ch >= cVar0 )
		goto label_cond_11;
label_cond_f:
	return -0x1;
	// 2090    .line 799
label_cond_11:
	if ( ch <  cVar4 )
		goto label_cond_f;
	if ( ch <= cVar3 )
		goto label_cond_17;
	if ( ch <  cVar2 )
		goto label_cond_f;
label_cond_17:
	if ( ch >  0xff5a )
		goto label_cond_f;
	if ( ch <= 0xff3a )
		goto label_cond_26;
	if ( ch <  0xff41 )
		goto label_cond_f;
label_cond_26:
	if ( ch >  cVar1 )
		goto label_cond_31;
	if ( ch >  cVar3 )
		goto label_cond_2f;
label_goto_2c:
	return (( ch + 0xa) - cVar4);
label_cond_2f:
	cVar4 = cVar2;
	goto label_goto_2c;
	// 2131    .line 808
label_cond_31:
	if ( ch >  0xff3a )
		goto label_cond_3a;
	return (( ch + 0xa) -  cVar0);
	// 2144    .line 812
label_cond_3a:
	return (( ch + 0xa) -  0xff41);

}
// .method public static final getMask(I)I
int android::icu::impl::UCharacterProperty::getMask(int type)
{
	
	//    .param p0, "type"    # I
	return (0x1 << type);

}
// .method private static final getNumericTypeValue(I)I
int android::icu::impl::UCharacterProperty::getNumericTypeValue(int props)
{
	
	//    .param p0, "props"    # I
	return _shri(props,0x6);

}
// .method private static final isgraphPOSIX(I)Z
bool android::icu::impl::UCharacterProperty::isgraphPOSIX(int c)
{
	
	bool cVar1;
	
	//    .param p0, "c"    # I
	cVar1 = 0x0;
	if ( (android::icu::impl::UCharacterProperty::getMask(android::icu::lang::UCharacter::getType(c)) &  (((android::icu::impl::UCharacterProperty::GC_CC_MASK |  android::icu::impl::UCharacterProperty::GC_CS_MASK) |  android::icu::impl::UCharacterProperty::GC_CN_MASK) |  android::icu::impl::UCharacterProperty::GC_Z_MASK)) )     
		goto label_cond_18;
	cVar1 = 0x1;
label_cond_18:
	return cVar1;

}
// .method private static final ntvGetType(I)I
int android::icu::impl::UCharacterProperty::ntvGetType(int ntv)
{
	
	int cVar0;
	
	//    .param p0, "ntv"    # I
	cVar0 = 0x0;
	if ( ntv )     
		goto label_cond_4;
label_goto_3:
	return cVar0;
	// 2235    .line 1054
label_cond_4:
	if ( ntv >= 0xb )
		goto label_cond_a;
	cVar0 = 0x1;
	goto label_goto_3;
	// 2245    .line 1055
label_cond_a:
	if ( ntv >= 0x15 )
		goto label_cond_10;
	cVar0 = 0x2;
	goto label_goto_3;
	// 2255    .line 1056
label_cond_10:
	cVar0 = 0x3;
	goto label_goto_3;

}
// .method public addPropertyStarts(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::impl::UCharacterProperty::addPropertyStarts(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	std::shared_ptr<java::util::Iterator> trieIterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> range;
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	trieIterator = this->m_trie_->iterator();
	//    .local v1, "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_goto_6:
	if ( !(trieIterator->hasNext()) )  
		goto label_cond_1e;
	range = trieIterator->next();
	range->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v0, "range":Landroid/icu/impl/Trie2$Range;
	if ( !(( range->leadSurrogate ^ 0x1)) )  
		goto label_cond_1e;
	set->add(range->startCodePoint);
	goto label_goto_6;
	// 2305    .line 1340
	// 2306    .end local v0    # "range":Landroid/icu/impl/Trie2$Range;
label_cond_1e:
	set->add(0x9);
	set->add(0xa);
	set->add(0xe);
	set->add(0x1c);
	set->add(0x20);
	set->add(0x85);
	set->add(0x86);
	set->add(0x7f);
	set->add(0x200a);
	set->add(0x2010);
	set->add(0x206a);
	set->add(0x2070);
	set->add(0xfeff);
	set->add(0xff00);
	set->add(0xa0);
	set->add(0xa1);
	set->add(0x2007);
	set->add(0x2008);
	set->add(0x202f);
	set->add(0x2030);
	set->add(0x3007);
	set->add(0x3008);
	set->add(0x4e00);
	set->add(0x4e01);
	set->add(0x4e8c);
	set->add(0x4e8d);
	set->add(0x4e09);
	set->add(0x4e0a);
	set->add(0x56db);
	set->add(0x56dc);
	set->add(0x4e94);
	set->add(0x4e95);
	set->add(0x516d);
	set->add(0x516e);
	set->add(0x4e03);
	set->add(0x4e04);
	set->add(0x516b);
	set->add(0x516c);
	set->add(0x4e5d);
	set->add(0x4e5e);
	set->add(0x61);
	set->add(0x7b);
	set->add(0x41);
	set->add(0x5b);
	set->add(0xff41);
	set->add(0xff5b);
	set->add(0xff21);
	set->add(0xff3b);
	set->add(0x67);
	set->add(0x47);
	set->add(0xff47);
	set->add(0xff27);
	set->add(0x2060);
	set->add(0xfff0);
	set->add(0xfffc);
	set->add(0xe0000);
	set->add(0xe1000);
	set->add(0x34f);
	set->add(0x350);
	return set;

}
// .method public digit(I)I
int android::icu::impl::UCharacterProperty::digit(int c)
{
	
	int value;
	
	//    .param p1, "c"    # I
	value = ( android::icu::impl::UCharacterProperty::getNumericTypeValue(this->getProperty(c)) + -0x1);
	//    .local v0, "value":I
	if ( value >  0x9 )
		goto label_cond_f;
	return value;
	// 2631    .line 820
label_cond_f:
	return -0x1;

}
// .method public getAdditional(II)I
int android::icu::impl::UCharacterProperty::getAdditional(int codepoint,int column)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "codepoint"    # I
	//    .param p2, "column"    # I
	if ( android::icu::impl::UCharacterProperty::_assertionsDisabled )     
		goto label_cond_d;
	if ( column >= 0 )
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2659    .line 130
label_cond_d:
	if ( column <  this->m_additionalColumnsCount_ )
		goto label_cond_12;
	return 0x0;
	// 2668    .line 133
label_cond_12:
	return this->m_additionalVectors_[(this->m_additionalTrie_->get(codepoint) +  column)];

}
// .method public getAge(I)Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::impl::UCharacterProperty::getAge(int codepoint)
{
	
	int cVar0;
	int version;
	
	//    .param p1, "codepoint"    # I
	cVar0 = 0x0;
	version = _shri(this->getAdditional(codepoint, cVar0),0x18);
	//    .local v0, "version":I
	return android::icu::util::VersionInfo::getInstance(( _shri(version,0x4) & 0xf), ( version & 0xf), cVar0, cVar0);

}
// .method public getIntPropertyMaxValue(I)I
int android::icu::impl::UCharacterProperty::getIntPropertyMaxValue(int which)
{
	
	//    .param p1, "which"    # I
	if ( which >= 0x1000 )
		goto label_cond_c;
	if ( which < 0 ) 
		goto label_cond_1b;
	if ( which >= 0x3d )
		goto label_cond_1b;
	return 0x1;
	// 2738    .line 627
label_cond_c:
	if ( which >= 0x1016 )
		goto label_cond_1b;
	return this->intProps[( which + -0x1000)]->getMaxValue(which);
	// 2757    .line 630
label_cond_1b:
	return -0x1;

}
// .method public getIntPropertyValue(II)I
int android::icu::impl::UCharacterProperty::getIntPropertyValue(int c,int which)
{
	
	int cVar1;
	
	//    .param p1, "c"    # I
	//    .param p2, "which"    # I
	cVar1 = 0x0;
	if ( which >= 0x1000 )
		goto label_cond_17;
	if ( which < 0 ) 
		goto label_cond_33;
	if ( which >= 0x3d )
		goto label_cond_33;
	if ( !(this->binProps[which]->contains(c)) )  
		goto label_cond_16;
	cVar1 = 0x1;
label_cond_16:
	return cVar1;
	// 2800    .line 614
label_cond_17:
	if ( which >= 0x1016 )
		goto label_cond_26;
	return this->intProps[( which + -0x1000)]->getValue(c);
	// 2819    .line 616
label_cond_26:
	if ( which != 0x2000 )
		goto label_cond_33;
	return android::icu::impl::UCharacterProperty::getMask(this->getType(c));
	// 2836    .line 619
label_cond_33:
	return cVar1;

}
// .method public getMaxValues(I)I
int android::icu::impl::UCharacterProperty::getMaxValues(int column)
{
	
	//    .param p1, "column"    # I
	// switch
	{
	auto item = ( column );
	if (item == 0) goto label_pswitch_5;
	if (item == 1) goto label_pswitch_3;
	if (item == 2) goto label_pswitch_8;
	}
label_pswitch_3:
	return 0x0;
	// 2855    .line 770
label_pswitch_5:
	return this->m_maxBlockScriptValue_;
	// 2861    .line 772
label_pswitch_8:
	return this->m_maxJTGValue_;
	// 2867    .line 768
	// 2868    nop
	// 2870    :pswitch_data_c
	// 2871    .packed-switch 0x0
	// 2872        :pswitch_5
	// 2873        :pswitch_3
	// 2874        :pswitch_8
	// 2875    .end packed-switch

}
// .method public getNumericValue(I)I
int android::icu::impl::UCharacterProperty::getNumericValue(int c)
{
	
	int cVar0;
	int cVar1;
	int ntv;
	int mant;
	int exp;
	int numValue;
	
	//    .param p1, "c"    # I
	cVar0 = 0x9;
	cVar1 = -0x2;
	ntv = android::icu::impl::UCharacterProperty::getNumericTypeValue(this->getProperty(c));
	//    .local v2, "ntv":I
	if ( ntv )     
		goto label_cond_12;
	return android::icu::impl::UCharacterProperty::getEuropeanDigit(c);
	// 2907    .line 830
label_cond_12:
	if ( ntv >= 0xb )
		goto label_cond_19;
	return ( ntv + -0x1);
	// 2918    .line 833
label_cond_19:
	if ( ntv >= 0x15 )
		goto label_cond_20;
	return ( ntv + -0xb);
	// 2929    .line 836
label_cond_20:
	if ( ntv >= 0xb0 )
		goto label_cond_27;
	return ( ntv + -0x15);
	// 2940    .line 839
label_cond_27:
	if ( ntv >= 0x1e0 )
		goto label_cond_2c;
	return cVar1;
	// 2949    .line 842
label_cond_2c:
	if ( ntv >= 0x300 )
		goto label_cond_48;
	mant = ( _shri(ntv,0x5) + -0xe);
	//    .local v1, "mant":I
	exp = ( ( ntv & 0x1f) + 0x2);
	//    .local v0, "exp":I
	if ( exp <  cVar0 )
		goto label_cond_3f;
	if ( exp != cVar0 )
		goto label_cond_47;
	if ( mant >  0x2 )
		goto label_cond_47;
label_cond_3f:
	numValue = mant;
	//    .local v3, "numValue":I
label_cond_40:
	numValue = ( numValue * 0xa);
	exp = ( exp + -0x1);
	if ( exp > 0 ) 
		goto label_cond_40;
	return numValue;
	// 2993    .line 853
	// 2994    .end local v3    # "numValue":I
label_cond_47:
	return cVar1;
	// 2998    .line 855
	// 2999    .end local v0    # "exp":I
	// 3000    .end local v1    # "mant":I
label_cond_48:
	if ( ntv >= 0x324 )
		goto label_cond_68;
	numValue = ( _shri(ntv,0x2) + -0xbf);
	//    .restart local v3    # "numValue":I
	//    .restart local v0    # "exp":I
	// switch
	{
	auto item = ( ( ( ntv & 0x3) + 0x1) );
	if (item == 1) goto label_pswitch_65;
	if (item == 2) goto label_pswitch_62;
	if (item == 3) goto label_pswitch_5d;
	if (item == 4) goto label_pswitch_58;
	}
label_goto_57:
	return numValue;
	// 3025    .line 862
label_pswitch_58:
	numValue = (numValue *  0xc5c100);
	goto label_goto_57;
	// 3034    .line 865
label_pswitch_5d:
	numValue = (numValue *  0x34bc0);
	goto label_goto_57;
	// 3043    .line 868
label_pswitch_62:
	numValue = ( numValue * 0xe10);
	goto label_goto_57;
	// 3050    .line 871
label_pswitch_65:
	numValue = ( numValue * 0x3c);
	goto label_goto_57;
	// 3057    .line 879
	// 3058    .end local v0    # "exp":I
	// 3059    .end local v3    # "numValue":I
label_cond_68:
	if ( ntv >= 0x33c )
		goto label_cond_6d;
	return cVar1;
	// 3068    .line 884
label_cond_6d:
	return cVar1;
	// 3072    .line 860
	// 3073    :pswitch_data_6e
	// 3074    .packed-switch 0x1
	// 3075        :pswitch_65
	// 3076        :pswitch_62
	// 3077        :pswitch_5d
	// 3078        :pswitch_58
	// 3079    .end packed-switch

}
// .method public final getProperty(I)I
int android::icu::impl::UCharacterProperty::getProperty(int ch)
{
	
	//    .param p1, "ch"    # I
	return this->m_trie_->get(ch);

}
// .method public final getSource(I)I
int android::icu::impl::UCharacterProperty::getSource(int which)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "which"    # I
	cVar0 = 0x2;
	cVar1 = 0x0;
	if ( which >= 0 )
		goto label_cond_5;
	return cVar1;
	// 3112    .line 636
label_cond_5:
	if ( which >= 0x3d )
		goto label_cond_12;
	return this->binProps[which]->getSource();
	// 3129    .line 638
label_cond_12:
	if ( which >= 0x1000 )
		goto label_cond_17;
	return cVar1;
	// 3138    .line 640
label_cond_17:
	if ( which >= 0x1016 )
		goto label_cond_26;
	return this->intProps[( which + -0x1000)]->getSource();
	// 3157    .line 642
label_cond_26:
	if ( which >= 0x4000 )
		goto label_cond_30;
	// switch
	{
	auto item = ( which );
	if (item == 0x2000) goto label_sswitch_2e;
	if (item == 0x3000) goto label_sswitch_2e;
	}
	return cVar1;
	// 3169    .line 646
label_sswitch_2e:
	return 0x1;
	// 3175    .line 651
label_cond_30:
	if ( which >= 0x400e )
		goto label_cond_3f;
	// switch
	{
	auto item = ( which );
	if (item == 16384) goto label_pswitch_38;
	if (item == 16385) goto label_pswitch_39;
	if (item == 16386) goto label_pswitch_3b;
	if (item == 16387) goto label_pswitch_3d;
	if (item == 16388) goto label_pswitch_3b;
	if (item == 16389) goto label_pswitch_3d;
	if (item == 16390) goto label_pswitch_3b;
	if (item == 16391) goto label_pswitch_3b;
	if (item == 16392) goto label_pswitch_3b;
	if (item == 16393) goto label_pswitch_3b;
	if (item == 16394) goto label_pswitch_3b;
	if (item == 16395) goto label_pswitch_3d;
	if (item == 16396) goto label_pswitch_3b;
	}
	return cVar1;
	// 3187    .line 654
label_pswitch_38:
	return cVar0;
	// 3191    .line 657
label_pswitch_39:
	return 0x5;
	// 3197    .line 667
label_pswitch_3b:
	return 0x4;
	// 3203    .line 672
label_pswitch_3d:
	return 0x3;
	// 3209    .line 678
label_cond_3f:
	// switch
	{
	auto item = ( which );
	if (item == 28672) goto label_pswitch_43;
	}
	return cVar1;
	// 3216    .line 680
label_pswitch_43:
	return cVar0;
	// 3220    .line 643
	// 3221    :sswitch_data_44
	// 3222    .sparse-switch
	// 3223        0x2000 -> :sswitch_2e
	// 3224        0x3000 -> :sswitch_2e
	// 3225    .end sparse-switch
	// 3227    .line 652
	// 3228    :pswitch_data_4e
	// 3229    .packed-switch 0x4000
	// 3230        :pswitch_38
	// 3231        :pswitch_39
	// 3232        :pswitch_3b
	// 3233        :pswitch_3d
	// 3234        :pswitch_3b
	// 3235        :pswitch_3d
	// 3236        :pswitch_3b
	// 3237        :pswitch_3b
	// 3238        :pswitch_3b
	// 3239        :pswitch_3b
	// 3240        :pswitch_3b
	// 3241        :pswitch_3d
	// 3242        :pswitch_3b
	// 3243    .end packed-switch
	// 3245    .line 678
	// 3246    :pswitch_data_6c
	// 3247    .packed-switch 0x7000
	// 3248        :pswitch_43
	// 3249    .end packed-switch

}
// .method public getType(I)I
int android::icu::impl::UCharacterProperty::getType(int c)
{
	
	//    .param p1, "c"    # I
	return ( this->getProperty(c) & 0x1f);

}
// .method public getUnicodeNumericValue(I)D
double android::icu::impl::UCharacterProperty::getUnicodeNumericValue(int c)
{
	
	double cVar0;
	int ntv;
	int exp;
	double numValue;
	int numValue;
	int frac20;
	
	//    .param p1, "c"    # I
	cVar0 = -0x3e6290cbac000000L;
	ntv = android::icu::impl::UCharacterProperty::getNumericTypeValue(this->getProperty(c));
	//    .local v4, "ntv":I
	if ( ntv )     
		goto label_cond_10;
	return cVar0;
	// 3290    .line 894
label_cond_10:
	if ( ntv >= 0xb )
		goto label_cond_18;
	return (double)(( ntv + -0x1));
	// 3303    .line 897
label_cond_18:
	if ( ntv >= 0x15 )
		goto label_cond_20;
	return (double)(( ntv + -0xb));
	// 3316    .line 900
label_cond_20:
	if ( ntv >= 0xb0 )
		goto label_cond_28;
	return (double)(( ntv + -0x15));
	// 3329    .line 903
label_cond_28:
	if ( ntv >= 0x1e0 )
		goto label_cond_38;
	//    .local v8, "numerator":I
	//    .local v0, "denominator":I
	return ( (double)(( _shri(ntv,0x4) + -0xc)) / (double)(( ( ntv & 0xf) + 0x1)));
	// 3356    .line 908
	// 3357    .end local v0    # "denominator":I
	// 3358    .end local v8    # "numerator":I
label_cond_38:
	if ( ntv >= 0x300 )
		goto label_cond_64;
	//    .local v3, "mant":I
	exp = ( ( ntv & 0x1f) + 0x2);
	//    .local v1, "exp":I
	numValue = (double)(( _shri(ntv,0x5) + -0xe));
	//    .local v6, "numValue":D
label_goto_45:
	if ( exp <  0x4 )
		goto label_cond_51;
	numValue = ( numValue * 0x40c3880000000000L);
	exp = ( exp + -0x4);
	goto label_goto_45;
	// 3396    .line 920
label_cond_51:
	// switch
	{
	auto item = ( exp );
	if (item == 1) goto label_pswitch_60;
	if (item == 2) goto label_pswitch_5c;
	if (item == 3) goto label_pswitch_55;
	}
label_goto_54:
	return numValue;
	// 3404    .line 922
label_pswitch_55:
	numValue = ( numValue * 0x408f400000000000L);
	goto label_goto_54;
	// 3413    .line 925
label_pswitch_5c:
	numValue = ( numValue * 0x4059000000000000L);
	goto label_goto_54;
	// 3422    .line 928
label_pswitch_60:
	numValue = ( numValue * 0x4024000000000000L);
	goto label_goto_54;
	// 3431    .line 936
	// 3432    .end local v1    # "exp":I
	// 3433    .end local v3    # "mant":I
	// 3434    .end local v6    # "numValue":D
label_cond_64:
	if ( ntv >= 0x324 )
		goto label_cond_85;
	numValue = ( _shri(ntv,0x2) + -0xbf);
	//    .local v5, "numValue":I
	exp = ( ( ntv & 0x3) + 0x1);
	//    .restart local v1    # "exp":I
	// switch
	{
	auto item = ( exp );
	if (item == 1) goto label_pswitch_82;
	if (item == 2) goto label_pswitch_7f;
	if (item == 3) goto label_pswitch_7a;
	if (item == 4) goto label_pswitch_75;
	}
label_goto_73:
	return (double)(numValue);
	// 3461    .line 943
label_pswitch_75:
	numValue = (numValue *  0xc5c100);
	goto label_goto_73;
	// 3470    .line 946
label_pswitch_7a:
	numValue = (numValue *  0x34bc0);
	goto label_goto_73;
	// 3479    .line 949
label_pswitch_7f:
	numValue = ( numValue * 0xe10);
	goto label_goto_73;
	// 3486    .line 952
label_pswitch_82:
	numValue = ( numValue * 0x3c);
	goto label_goto_73;
	// 3493    .line 960
	// 3494    .end local v1    # "exp":I
	// 3495    .end local v5    # "numValue":I
label_cond_85:
	if ( ntv >= 0x33c )
		goto label_cond_9b;
	frac20 = ( ntv + -0x324);
	//    .local v2, "frac20":I
	//    .restart local v8    # "numerator":I
	//    .restart local v0    # "denominator":I
	return ( (double)(( ( ( frac20 & 0x3) * 0x2) + 0x1)) / (double)((0x14 << _shri(frac20,0x2))));
	// 3530    .line 968
	// 3531    .end local v0    # "denominator":I
	// 3532    .end local v2    # "frac20":I
	// 3533    .end local v8    # "numerator":I
label_cond_9b:
	return cVar0;
	// 3537    .line 920
	// 3538    :pswitch_data_9c
	// 3539    .packed-switch 0x1
	// 3540        :pswitch_60
	// 3541        :pswitch_5c
	// 3542        :pswitch_55
	// 3543    .end packed-switch
	// 3545    .line 941
	// 3546    :pswitch_data_a6
	// 3547    .packed-switch 0x1
	// 3548        :pswitch_82
	// 3549        :pswitch_7f
	// 3550        :pswitch_7a
	// 3551        :pswitch_75
	// 3552    .end packed-switch

}
// .method public hasBinaryProperty(II)Z
bool android::icu::impl::UCharacterProperty::hasBinaryProperty(int c,int which)
{
	
	//    .param p1, "c"    # I
	//    .param p2, "which"    # I
	if ( which < 0 ) 
		goto label_cond_7;
	if ( 0x3d >  which )
		goto label_cond_8;
label_cond_7:
	return 0x0;
	// 3574    .line 415
label_cond_8:
	return this->binProps[which]->contains(c);

}
// .method public upropsvec_addPropertyStarts(Landroid/icu/text/UnicodeSet;)V
void android::icu::impl::UCharacterProperty::upropsvec_addPropertyStarts(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	std::shared_ptr<java::util::Iterator> trieIterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> range;
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	if ( this->m_additionalColumnsCount_ <= 0 )
		goto label_cond_22;
	trieIterator = this->m_additionalTrie_->iterator();
	//    .local v1, "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_goto_a:
	if ( !(trieIterator->hasNext()) )  
		goto label_cond_22;
	range = trieIterator->next();
	range->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v0, "range":Landroid/icu/impl/Trie2$Range;
	if ( !(( range->leadSurrogate ^ 0x1)) )  
		goto label_cond_22;
	set->add(range->startCodePoint);
	goto label_goto_a;
	// 3633    .line 1431
	// 3634    .end local v0    # "range":Landroid/icu/impl/Trie2$Range;
	// 3635    .end local v1    # "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_cond_22:
	return;

}


