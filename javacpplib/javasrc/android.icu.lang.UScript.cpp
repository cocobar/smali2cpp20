// CPP L:\smali2cpp20\x64\Release\out\android\icu\lang\UScript.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.lang.UScript_S_ScriptMetadata.h"
#include "android.icu.lang.UScript_S_ScriptUsage.h"
#include "android.icu.lang.UScript.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.BitSet.h"
#include "java.util.Locale.h"

static android::icu::lang::UScript::ADLAM = 0xa7;
static android::icu::lang::UScript::AFAKA = 0x93;
static android::icu::lang::UScript::AHOM = 0xa1;
static android::icu::lang::UScript::ANATOLIAN_HIEROGLYPHS = 0x9c;
static android::icu::lang::UScript::ARABIC = 0x2;
static android::icu::lang::UScript::ARMENIAN = 0x3;
static android::icu::lang::UScript::AVESTAN = 0x75;
static android::icu::lang::UScript::BALINESE = 0x3e;
static android::icu::lang::UScript::BAMUM = 0x82;
static android::icu::lang::UScript::BASSA_VAH = 0x86;
static android::icu::lang::UScript::BATAK = 0x3f;
static android::icu::lang::UScript::BENGALI = 0x4;
static android::icu::lang::UScript::BHAIKSUKI = 0xa8;
static android::icu::lang::UScript::BLISSYMBOLS = 0x40;
static android::icu::lang::UScript::BOOK_PAHLAVI = 0x7c;
static android::icu::lang::UScript::BOPOMOFO = 0x5;
static android::icu::lang::UScript::BRAHMI = 0x41;
static android::icu::lang::UScript::BRAILLE = 0x2e;
static android::icu::lang::UScript::BUGINESE = 0x37;
static android::icu::lang::UScript::BUHID = 0x2c;
static android::icu::lang::UScript::CANADIAN_ABORIGINAL = 0x28;
static android::icu::lang::UScript::CARIAN = 0x68;
static android::icu::lang::UScript::CAUCASIAN_ALBANIAN = 0x9f;
static android::icu::lang::UScript::CHAKMA = 0x76;
static android::icu::lang::UScript::CHAM = 0x42;
static android::icu::lang::UScript::CHEROKEE = 0x6;
static android::icu::lang::UScript::CIRTH = 0x43;
static android::icu::lang::UScript::CODE_LIMIT = 0xaf;
static android::icu::lang::UScript::COMMON = 0x0;
static android::icu::lang::UScript::COPTIC = 0x7;
static android::icu::lang::UScript::CUNEIFORM = 0x65;
static android::icu::lang::UScript::CYPRIOT = 0x2f;
static android::icu::lang::UScript::CYRILLIC = 0x8;
static android::icu::lang::UScript::DEMOTIC_EGYPTIAN = 0x45;
static android::icu::lang::UScript::DESERET = 0x9;
static android::icu::lang::UScript::DEVANAGARI = 0xa;
static android::icu::lang::UScript::DUPLOYAN = 0x87;
static android::icu::lang::UScript::DUPLOYAN_SHORTAND = 0x87;
static android::icu::lang::UScript::EASTERN_SYRIAC = 0x61;
static android::icu::lang::UScript::EGYPTIAN_HIEROGLYPHS = 0x47;
static android::icu::lang::UScript::ELBASAN = 0x88;
static android::icu::lang::UScript::ESTRANGELO_SYRIAC = 0x5f;
static android::icu::lang::UScript::ETHIOPIC = 0xb;
static android::icu::lang::UScript::GEORGIAN = 0xc;
static android::icu::lang::UScript::GLAGOLITIC = 0x38;
static android::icu::lang::UScript::GOTHIC = 0xd;
static android::icu::lang::UScript::GRANTHA = 0x89;
static android::icu::lang::UScript::GREEK = 0xe;
static android::icu::lang::UScript::GUJARATI = 0xf;
static android::icu::lang::UScript::GURMUKHI = 0x10;
static android::icu::lang::UScript::HAN = 0x11;
static android::icu::lang::UScript::HANGUL = 0x12;
static android::icu::lang::UScript::HANUNOO = 0x2b;
static android::icu::lang::UScript::HAN_WITH_BOPOMOFO = 0xac;
static android::icu::lang::UScript::HARAPPAN_INDUS = 0x4d;
static android::icu::lang::UScript::HATRAN = 0xa2;
static android::icu::lang::UScript::HEBREW = 0x13;
static android::icu::lang::UScript::HIERATIC_EGYPTIAN = 0x46;
static android::icu::lang::UScript::HIRAGANA = 0x14;
static android::icu::lang::UScript::IMPERIAL_ARAMAIC = 0x74;
static android::icu::lang::UScript::INHERITED = 0x1;
static android::icu::lang::UScript::INSCRIPTIONAL_PAHLAVI = 0x7a;
static android::icu::lang::UScript::INSCRIPTIONAL_PARTHIAN = 0x7d;
static android::icu::lang::UScript::INVALID_CODE = -0x1;
static android::icu::lang::UScript::JAMO = 0xad;
static android::icu::lang::UScript::JAPANESE = 0x69;
static android::icu::lang::UScript::JAVANESE = 0x4e;
static android::icu::lang::UScript::JURCHEN = 0x94;
static android::icu::lang::UScript::KAITHI = 0x78;
static android::icu::lang::UScript::KANNADA = 0x15;
static android::icu::lang::UScript::KATAKANA = 0x16;
static android::icu::lang::UScript::KATAKANA_OR_HIRAGANA = 0x36;
static android::icu::lang::UScript::KAYAH_LI = 0x4f;
static android::icu::lang::UScript::KHAROSHTHI = 0x39;
static android::icu::lang::UScript::KHMER = 0x17;
static android::icu::lang::UScript::KHOJKI = 0x9d;
static android::icu::lang::UScript::KHUDAWADI = 0x91;
static android::icu::lang::UScript::KHUTSURI = 0x48;
static android::icu::lang::UScript::KOREAN = 0x77;
static android::icu::lang::UScript::KPELLE = 0x8a;
static android::icu::lang::UScript::LANNA = 0x6a;
static android::icu::lang::UScript::LAO = 0x18;
static android::icu::lang::UScript::LATIN = 0x19;
static android::icu::lang::UScript::LATIN_FRAKTUR = 0x50;
static android::icu::lang::UScript::LATIN_GAELIC = 0x51;
static android::icu::lang::UScript::LEPCHA = 0x52;
static android::icu::lang::UScript::LIMBU = 0x30;
static android::icu::lang::UScript::LINEAR_A = 0x53;
static android::icu::lang::UScript::LINEAR_B = 0x31;
static android::icu::lang::UScript::LISU = 0x83;
static android::icu::lang::UScript::LOMA = 0x8b;
static android::icu::lang::UScript::LYCIAN = 0x6b;
static android::icu::lang::UScript::LYDIAN = 0x6c;
static android::icu::lang::UScript::MAHAJANI = 0xa0;
static android::icu::lang::UScript::MALAYALAM = 0x1a;
static android::icu::lang::UScript::MANDAEAN = 0x54;
static android::icu::lang::UScript::MANDAIC = 0x54;
static android::icu::lang::UScript::MANICHAEAN = 0x79;
static android::icu::lang::UScript::MARCHEN = 0xa9;
static android::icu::lang::UScript::MATHEMATICAL_NOTATION = 0x80;
static android::icu::lang::UScript::MAYAN_HIEROGLYPHS = 0x55;
static android::icu::lang::UScript::MEITEI_MAYEK = 0x73;
static android::icu::lang::UScript::MENDE = 0x8c;
static android::icu::lang::UScript::MEROITIC = 0x56;
static android::icu::lang::UScript::MEROITIC_CURSIVE = 0x8d;
static android::icu::lang::UScript::MEROITIC_HIEROGLYPHS = 0x56;
static android::icu::lang::UScript::MIAO = 0x5c;
static android::icu::lang::UScript::MODI = 0xa3;
static android::icu::lang::UScript::MONGOLIAN = 0x1b;
static android::icu::lang::UScript::MOON = 0x72;
static android::icu::lang::UScript::MRO = 0x95;
static android::icu::lang::UScript::MULTANI = 0xa4;
static android::icu::lang::UScript::MYANMAR = 0x1c;
static android::icu::lang::UScript::NABATAEAN = 0x8f;
static android::icu::lang::UScript::NAKHI_GEBA = 0x84;
static android::icu::lang::UScript::NEWA = 0xaa;
static android::icu::lang::UScript::NEW_TAI_LUE = 0x3b;
static android::icu::lang::UScript::NKO = 0x57;
static android::icu::lang::UScript::NUSHU = 0x96;
static android::icu::lang::UScript::OGHAM = 0x1d;
static android::icu::lang::UScript::OLD_CHURCH_SLAVONIC_CYRILLIC = 0x44;
static android::icu::lang::UScript::OLD_HUNGARIAN = 0x4c;
static android::icu::lang::UScript::OLD_ITALIC = 0x1e;
static android::icu::lang::UScript::OLD_NORTH_ARABIAN = 0x8e;
static android::icu::lang::UScript::OLD_PERMIC = 0x59;
static android::icu::lang::UScript::OLD_PERSIAN = 0x3d;
static android::icu::lang::UScript::OLD_SOUTH_ARABIAN = 0x85;
static android::icu::lang::UScript::OL_CHIKI = 0x6d;
static android::icu::lang::UScript::ORIYA = 0x1f;
static android::icu::lang::UScript::ORKHON = 0x58;
static android::icu::lang::UScript::OSAGE = 0xab;
static android::icu::lang::UScript::OSMANYA = 0x32;
static android::icu::lang::UScript::PAHAWH_HMONG = 0x4b;
static android::icu::lang::UScript::PALMYRENE = 0x90;
static android::icu::lang::UScript::PAU_CIN_HAU = 0xa5;
static android::icu::lang::UScript::PHAGS_PA = 0x5a;
static android::icu::lang::UScript::PHOENICIAN = 0x5b;
static android::icu::lang::UScript::PHONETIC_POLLARD = 0x5c;
static android::icu::lang::UScript::PSALTER_PAHLAVI = 0x7b;
static android::icu::lang::UScript::REJANG = 0x6e;
static android::icu::lang::UScript::RONGORONGO = 0x5d;
static android::icu::lang::UScript::RUNIC = 0x20;
static android::icu::lang::UScript::SAMARITAN = 0x7e;
static android::icu::lang::UScript::SARATI = 0x5e;
static android::icu::lang::UScript::SAURASHTRA = 0x6f;
static android::icu::lang::UScript::SHARADA = 0x97;
static android::icu::lang::UScript::SHAVIAN = 0x33;
static android::icu::lang::UScript::SIDDHAM = 0xa6;
static android::icu::lang::UScript::SIGN_WRITING = 0x70;
static android::icu::lang::UScript::SIMPLIFIED_HAN = 0x49;
static android::icu::lang::UScript::SINDHI = 0x91;
static android::icu::lang::UScript::SINHALA = 0x21;
static android::icu::lang::UScript::SORA_SOMPENG = 0x98;
static android::icu::lang::UScript::SUNDANESE = 0x71;
static android::icu::lang::UScript::SYLOTI_NAGRI = 0x3a;
static android::icu::lang::UScript::SYMBOLS = 0x81;
static android::icu::lang::UScript::SYMBOLS_EMOJI = 0xae;
static android::icu::lang::UScript::SYRIAC = 0x22;
static android::icu::lang::UScript::TAGALOG = 0x2a;
static android::icu::lang::UScript::TAGBANWA = 0x2d;
static android::icu::lang::UScript::TAI_LE = 0x34;
static android::icu::lang::UScript::TAI_VIET = 0x7f;
static android::icu::lang::UScript::TAKRI = 0x99;
static android::icu::lang::UScript::TAMIL = 0x23;
static android::icu::lang::UScript::TANGUT = 0x9a;
static android::icu::lang::UScript::TELUGU = 0x24;
static android::icu::lang::UScript::TENGWAR = 0x62;
static android::icu::lang::UScript::THAANA = 0x25;
static android::icu::lang::UScript::THAI = 0x26;
static android::icu::lang::UScript::TIBETAN = 0x27;
static android::icu::lang::UScript::TIFINAGH = 0x3c;
static android::icu::lang::UScript::TIRHUTA = 0x9e;
static android::icu::lang::UScript::TRADITIONAL_HAN = 0x4a;
static android::icu::lang::UScript::UCAS = 0x28;
static android::icu::lang::UScript::UGARITIC = 0x35;
static android::icu::lang::UScript::UNKNOWN = 0x67;
static android::icu::lang::UScript::UNWRITTEN_LANGUAGES = 0x66;
static android::icu::lang::UScript::VAI = 0x63;
static android::icu::lang::UScript::VISIBLE_SPEECH = 0x64;
static android::icu::lang::UScript::WARANG_CITI = 0x92;
static android::icu::lang::UScript::WESTERN_SYRIAC = 0x60;
static android::icu::lang::UScript::WOLEAI = 0x9b;
static android::icu::lang::UScript::YI = 0x29;
static android::icu::lang::UScript::usageValues;
// .method static constructor <clinit>()V
void android::icu::lang::UScript::static_cinit()
{
	
	android::icu::lang::UScript::usageValues = android::icu::lang::UScript_S_ScriptUsage::values({const[class].FS-Param});
	return;

}
// .method private constructor <init>()V
android::icu::lang::UScript::UScript()
{
	
	// 412    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static final breaksBetweenLetters(I)Z
bool android::icu::lang::UScript::breaksBetweenLetters(int script)
{
	
	bool cVar1;
	
	//    .param p0, "script"    # I
	cVar1 = 0x0;
	if ( !((android::icu::lang::UScript_S_ScriptMetadata::-wrap0(script) &  0x2000000)) )  
		goto label_cond_b;
	cVar1 = 0x1;
label_cond_b:
	return cVar1;

}
// .method private static findCodeFromLocale(Landroid/icu/util/ULocale;)[I
int android::icu::lang::UScript::findCodeFromLocale(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<int[]> result;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	result = android::icu::lang::UScript::getCodesFromLocale(locale);
	//    .local v1, "result":[I
	if ( !(result) )  
		goto label_cond_7;
	return result;
	// 458    .line 865
label_cond_7:
	//    .local v0, "likely":Landroid/icu/util/ULocale;
	return android::icu::lang::UScript::getCodesFromLocale(android::icu::util::ULocale::addLikelySubtags(locale));

}
// .method public static final getCode(Landroid/icu/util/ULocale;)[I
int android::icu::lang::UScript::getCode(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::lang::UScript::findCodeFromLocale(locale);

}
// .method public static final getCode(Ljava/lang/String;)[I
int android::icu::lang::UScript::getCode(std::shared_ptr<java::lang::String> nameOrAbbrOrLocale)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int propNum;
	std::shared<std::vector<int[]>> cVar4;
	std::shared_ptr<android::icu::util::ULocale> cVar5;
	std::shared_ptr<int[]> scripts;
	std::shared<std::vector<int[]>> cVar6;
	
	//    .param p0, "nameOrAbbrOrLocale"    # Ljava/lang/String;
	cVar0 = 0x100a;
	cVar1 = 0x1;
	cVar2 = -0x1;
	cVar3 = 0x0;
	//    .local v2, "triedCode":Z
	if ( nameOrAbbrOrLocale->indexOf(0x5f) >= 0 )
		goto label_cond_23;
	if ( nameOrAbbrOrLocale->indexOf(0x2d) >= 0 )
		goto label_cond_23;
	propNum = android::icu::lang::UCharacter::getPropertyValueEnumNoThrow(cVar0, nameOrAbbrOrLocale);
	//    .local v0, "propNum":I
	if ( propNum == cVar2 )
		goto label_cond_22;
	cVar4 = std::make_shared<std::vector<int[]>>(cVar1);
	cVar4[cVar3] = propNum;
	return cVar4;
	// 538    .line 908
label_cond_22:
	//    .end local v0    # "propNum":I
label_cond_23:
	cVar5 = std::make_shared<android::icu::util::ULocale>(nameOrAbbrOrLocale);
	scripts = android::icu::lang::UScript::findCodeFromLocale(cVar5);
	//    .local v1, "scripts":[I
	if ( !(scripts) )  
		goto label_cond_2f;
	return scripts;
	// 560    .line 914
label_cond_2f:
	if ( 0x0 )     
		goto label_cond_3c;
	propNum = android::icu::lang::UCharacter::getPropertyValueEnumNoThrow(cVar0, nameOrAbbrOrLocale);
	//    .restart local v0    # "propNum":I
	if ( propNum == cVar2 )
		goto label_cond_3c;
	cVar6 = std::make_shared<std::vector<int[]>>(cVar1);
	cVar6[cVar3] = propNum;
	return cVar6;
	// 580    .line 920
	// 581    .end local v0    # "propNum":I
label_cond_3c:
	return 0x0;

}
// .method public static final getCode(Ljava/util/Locale;)[I
int android::icu::lang::UScript::getCode(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::lang::UScript::findCodeFromLocale(android::icu::util::ULocale::forLocale(locale));

}
// .method public static final getCodeFromName(Ljava/lang/String;)I
int android::icu::lang::UScript::getCodeFromName(std::shared_ptr<java::lang::String> nameOrAbbr)
{
	
	int cVar0;
	int propNum;
	
	//    .param p0, "nameOrAbbr"    # Ljava/lang/String;
	cVar0 = -0x1;
	propNum = android::icu::lang::UCharacter::getPropertyValueEnumNoThrow(0x100a, nameOrAbbr);
	//    .local v0, "propNum":I
	if ( propNum != cVar0 )
		goto label_cond_a;
	//    .end local v0    # "propNum":I
label_cond_a:
	return propNum;

}
// .method private static getCodesFromLocale(Landroid/icu/util/ULocale;)[I
int android::icu::lang::UScript::getCodesFromLocale(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> lang;
	std::shared_ptr<java::lang::String> script;
	int scriptCode;
	std::shared<std::vector<int[]>> cVar1;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x11;
	lang = locale->getLanguage();
	//    .local v0, "lang":Ljava/lang/String;
	if ( !(lang->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("ja")))) )  
		goto label_cond_19;
	?;
	return ?;
	// 663    .line 836
label_cond_19:
	if ( !(lang->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("ko")))) )  
		goto label_cond_29;
	?;
	return ?;
	// 682    .line 839
label_cond_29:
	script = locale->getScript();
	//    .local v1, "script":Ljava/lang/String;
	if ( !(lang->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("zh")))) )  
		goto label_cond_45;
	if ( !(script->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("Hant")))) )  
		goto label_cond_45;
	?;
	return ?;
	// 715    .line 844
label_cond_45:
	if ( !(script->length()) )  
		goto label_cond_62;
	scriptCode = android::icu::lang::UScript::getCodeFromName(script);
	//    .local v2, "scriptCode":I
	if ( scriptCode == -0x1 )
		goto label_cond_62;
	if ( scriptCode == 0x49 )
		goto label_cond_5a;
	if ( scriptCode != 0x4a )
		goto label_cond_5c;
label_cond_5a:
label_cond_5c:
	cVar1 = std::make_shared<std::vector<int[]>>(0x1);
	cVar1[0x0] = scriptCode;
	return cVar1;
	// 757    .line 853
	// 758    .end local v2    # "scriptCode":I
label_cond_62:
	return 0x0;

}
// .method public static final getName(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UScript::getName(int scriptCode)
{
	
	//    .param p0, "scriptCode"    # I
	return android::icu::lang::UCharacter::getPropertyValueName(0x100a, scriptCode, 0x1);

}
// .method public static final getSampleString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UScript::getSampleString(int script)
{
	
	int sampleChar;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "script"    # I
	sampleChar = (android::icu::lang::UScript_S_ScriptMetadata::-wrap0(script) & 0x1fffff);
	//    .local v0, "sampleChar":I
	if ( !(sampleChar) )  
		goto label_cond_19;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->appendCodePoint(sampleChar)->toString();
	// 817    .line 1330
label_cond_19:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));

}
// .method public static final getScript(I)I
int android::icu::lang::UScript::getScript(int codepoint)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int scriptX;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	
	//    .param p0, "codepoint"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( codepoint < 0 ) 
		goto label_cond_1e;
	cVar2 = cVar0;
label_goto_5:
	if ( codepoint >  0x10ffff )
		goto label_cond_20;
	cVar3 = cVar0;
label_goto_b:
	if ( !((cVar3 &  cVar2)) )  
		goto label_cond_35;
	scriptX = (android::icu::impl::UCharacterProperty::INSTANCE->getAdditional(codepoint, cVar1) & 0xc000ff);
	//    .local v0, "scriptX":I
	if ( scriptX >= 0x400000 )
		goto label_cond_22;
	return scriptX;
	// 870    .end local v0    # "scriptX":I
label_cond_1e:
	cVar2 = cVar1;
	goto label_goto_5;
label_cond_20:
	cVar3 = cVar1;
	goto label_goto_b;
	// 882    .line 948
	// 883    .restart local v0    # "scriptX":I
label_cond_22:
	if ( scriptX >= 0x800000 )
		goto label_cond_27;
	return cVar1;
	// 892    .line 950
label_cond_27:
	if ( scriptX >= 0xc00000 )
		goto label_cond_2c;
	return cVar0;
	// 901    .line 953
label_cond_2c:
	return android::icu::impl::UCharacterProperty::INSTANCE->m_scriptExtensions_[( scriptX & 0xff)];
	// 913    .line 956
	// 914    .end local v0    # "scriptX":I
label_cond_35:
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(java::lang::Integer::toString(codepoint));
	// throw
	throw cVar6;

}
// .method public static final getScriptExtensions(ILjava/util/BitSet;)I
int android::icu::lang::UScript::getScriptExtensions(int c,std::shared_ptr<java::util::BitSet> set)
{
	
	int scriptX;
	std::shared_ptr<char[]> scriptExtensions;
	int scx;
	char scx;
	int length;
	char sx;
	
	//    .param p0, "c"    # I
	//    .param p1, "set"    # Ljava/util/BitSet;
	set->clear();
	scriptX = (android::icu::impl::UCharacterProperty::INSTANCE->getAdditional(c, 0x0) & 0xc000ff);
	//    .local v2, "scriptX":I
	if ( scriptX >= 0x400000 )
		goto label_cond_17;
	set->set(scriptX);
	return scriptX;
	// 961    .line 1027
label_cond_17:
	scriptExtensions = android::icu::impl::UCharacterProperty::INSTANCE->m_scriptExtensions_;
	//    .local v1, "scriptExtensions":[C
	scx = ( scriptX & 0xff);
	//    .local v3, "scx":I
	if ( scriptX <  0xc00000 )
		goto label_cond_25;
	scx = scriptExtensions[( scx + 0x1)];
label_cond_25:
	length = 0x0;
	//    .local v0, "length":I
label_goto_26:
	//    .end local v3    # "scx":I
	//    .local v4, "scx":I
	sx = scriptExtensions[scx];
	//    .local v5, "sx":I
	set->set(( sx & 0x7fff));
	length = ( length + 0x1);
	if ( sx >= 0x8000 )
		goto label_cond_38;
	scx = ( scx + 0x1);
	//    .end local v4    # "scx":I
	//    .restart local v3    # "scx":I
	goto label_goto_26;
	// 1015    .line 1040
	// 1016    .end local v3    # "scx":I
	// 1017    .restart local v4    # "scx":I
label_cond_38:
	return (0 - length);

}
// .method public static final getShortName(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UScript::getShortName(int scriptCode)
{
	
	//    .param p0, "scriptCode"    # I
	return android::icu::lang::UCharacter::getPropertyValueName(0x100a, scriptCode, 0x0);

}
// .method public static final getUsage(I)Landroid/icu/lang/UScript$ScriptUsage;
std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> android::icu::lang::UScript::getUsage(int script)
{
	
	//    .param p0, "script"    # I
	return android::icu::lang::UScript::usageValues[( _shri(android::icu::lang::UScript_S_ScriptMetadata::-wrap0(script),0x15) & 0x7)];

}
// .method public static final hasScript(II)Z
bool android::icu::lang::UScript::hasScript(int c,int sc)
{
	
	bool cVar0;
	int cVar1;
	int scriptX;
	std::shared_ptr<char[]> scriptExtensions;
	int scx;
	char scx;
	
	//    .param p0, "c"    # I
	//    .param p1, "sc"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	scriptX = (android::icu::impl::UCharacterProperty::INSTANCE->getAdditional(c, cVar1) & 0xc000ff);
	//    .local v1, "scriptX":I
	if ( scriptX >= 0x400000 )
		goto label_cond_16;
	if ( sc != scriptX )
		goto label_cond_14;
label_goto_13:
	return cVar0;
label_cond_14:
	cVar0 = cVar1;
	goto label_goto_13;
	// 1102    .line 978
label_cond_16:
	scriptExtensions = android::icu::impl::UCharacterProperty::INSTANCE->m_scriptExtensions_;
	//    .local v0, "scriptExtensions":[C
	scx = ( scriptX & 0xff);
	//    .local v2, "scx":I
	if ( scriptX <  0xc00000 )
		goto label_cond_24;
	scx = scriptExtensions[( scx + 0x1)];
label_cond_24:
	if ( sc <= 0x7fff )
		goto label_cond_29;
	return cVar1;
	// 1132    .line 988
label_cond_29:
label_goto_29:
	if ( sc <= scriptExtensions[scx] )
		goto label_cond_30;
	scx = ( scx + 0x1);
	goto label_goto_29;
	// 1144    .line 991
label_cond_30:
	if ( sc != ( scriptExtensions[scx] & 0x7fff) )
		goto label_cond_37;
label_goto_36:
	return cVar0;
label_cond_37:
	cVar0 = cVar1;
	goto label_goto_36;

}
// .method public static final isCased(I)Z
bool android::icu::lang::UScript::isCased(int script)
{
	
	bool cVar1;
	
	//    .param p0, "script"    # I
	cVar1 = 0x0;
	if ( !((android::icu::lang::UScript_S_ScriptMetadata::-wrap0(script) &  0x4000000)) )  
		goto label_cond_b;
	cVar1 = 0x1;
label_cond_b:
	return cVar1;

}
// .method public static final isRightToLeft(I)Z
bool android::icu::lang::UScript::isRightToLeft(int script)
{
	
	bool cVar1;
	
	//    .param p0, "script"    # I
	cVar1 = 0x0;
	if ( !((android::icu::lang::UScript_S_ScriptMetadata::-wrap0(script) &  0x1000000)) )  
		goto label_cond_b;
	cVar1 = 0x1;
label_cond_b:
	return cVar1;

}


