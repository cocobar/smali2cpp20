#ifndef __android_icu_lang_UScript__
#define __android_icu_lang_UScript__
// H L:\smali2cpp20\x64\Release\out\android\icu\lang\UScript.smali
#include "java2ctype.h"
#include "android.icu.lang.UScript_S_ScriptUsage.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.BitSet.h"
#include "java.util.Locale.h"

namespace android::icu::lang{
class UScript : public java::lang::Object {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::lang::UScript_S_ScriptUsage>> usageValues;
	UScript();
	static int findCodeFromLocale(std::shared_ptr<android::icu::util::ULocale> locale);
	static int getCodesFromLocale(std::shared_ptr<android::icu::util::ULocale> locale);
public:
	static int ADLAM;
	static int AFAKA;
	static int AHOM;
	static int ANATOLIAN_HIEROGLYPHS;
	static int ARABIC;
	static int ARMENIAN;
	static int AVESTAN;
	static int BALINESE;
	static int BAMUM;
	static int BASSA_VAH;
	static int BATAK;
	static int BENGALI;
	static int BHAIKSUKI;
	static int BLISSYMBOLS;
	static int BOOK_PAHLAVI;
	static int BOPOMOFO;
	static int BRAHMI;
	static int BRAILLE;
	static int BUGINESE;
	static int BUHID;
	static int CANADIAN_ABORIGINAL;
	static int CARIAN;
	static int CAUCASIAN_ALBANIAN;
	static int CHAKMA;
	static int CHAM;
	static int CHEROKEE;
	static int CIRTH;
	static int CODE_LIMIT;
	static int COMMON;
	static int COPTIC;
	static int CUNEIFORM;
	static int CYPRIOT;
	static int CYRILLIC;
	static int DEMOTIC_EGYPTIAN;
	static int DESERET;
	static int DEVANAGARI;
	static int DUPLOYAN;
	static int DUPLOYAN_SHORTAND;
	static int EASTERN_SYRIAC;
	static int EGYPTIAN_HIEROGLYPHS;
	static int ELBASAN;
	static int ESTRANGELO_SYRIAC;
	static int ETHIOPIC;
	static int GEORGIAN;
	static int GLAGOLITIC;
	static int GOTHIC;
	static int GRANTHA;
	static int GREEK;
	static int GUJARATI;
	static int GURMUKHI;
	static int HAN;
	static int HANGUL;
	static int HANUNOO;
	static int HAN_WITH_BOPOMOFO;
	static int HARAPPAN_INDUS;
	static int HATRAN;
	static int HEBREW;
	static int HIERATIC_EGYPTIAN;
	static int HIRAGANA;
	static int IMPERIAL_ARAMAIC;
	static int INHERITED;
	static int INSCRIPTIONAL_PAHLAVI;
	static int INSCRIPTIONAL_PARTHIAN;
	static int INVALID_CODE;
	static int JAMO;
	static int JAPANESE;
	static int JAVANESE;
	static int JURCHEN;
	static int KAITHI;
	static int KANNADA;
	static int KATAKANA;
	static int KATAKANA_OR_HIRAGANA;
	static int KAYAH_LI;
	static int KHAROSHTHI;
	static int KHMER;
	static int KHOJKI;
	static int KHUDAWADI;
	static int KHUTSURI;
	static int KOREAN;
	static int KPELLE;
	static int LANNA;
	static int LAO;
	static int LATIN;
	static int LATIN_FRAKTUR;
	static int LATIN_GAELIC;
	static int LEPCHA;
	static int LIMBU;
	static int LINEAR_A;
	static int LINEAR_B;
	static int LISU;
	static int LOMA;
	static int LYCIAN;
	static int LYDIAN;
	static int MAHAJANI;
	static int MALAYALAM;
	static int MANDAEAN;
	static int MANDAIC;
	static int MANICHAEAN;
	static int MARCHEN;
	static int MATHEMATICAL_NOTATION;
	static int MAYAN_HIEROGLYPHS;
	static int MEITEI_MAYEK;
	static int MENDE;
	static int MEROITIC;
	static int MEROITIC_CURSIVE;
	static int MEROITIC_HIEROGLYPHS;
	static int MIAO;
	static int MODI;
	static int MONGOLIAN;
	static int MOON;
	static int MRO;
	static int MULTANI;
	static int MYANMAR;
	static int NABATAEAN;
	static int NAKHI_GEBA;
	static int NEWA;
	static int NEW_TAI_LUE;
	static int NKO;
	static int NUSHU;
	static int OGHAM;
	static int OLD_CHURCH_SLAVONIC_CYRILLIC;
	static int OLD_HUNGARIAN;
	static int OLD_ITALIC;
	static int OLD_NORTH_ARABIAN;
	static int OLD_PERMIC;
	static int OLD_PERSIAN;
	static int OLD_SOUTH_ARABIAN;
	static int OL_CHIKI;
	static int ORIYA;
	static int ORKHON;
	static int OSAGE;
	static int OSMANYA;
	static int PAHAWH_HMONG;
	static int PALMYRENE;
	static int PAU_CIN_HAU;
	static int PHAGS_PA;
	static int PHOENICIAN;
	static int PHONETIC_POLLARD;
	static int PSALTER_PAHLAVI;
	static int REJANG;
	static int RONGORONGO;
	static int RUNIC;
	static int SAMARITAN;
	static int SARATI;
	static int SAURASHTRA;
	static int SHARADA;
	static int SHAVIAN;
	static int SIDDHAM;
	static int SIGN_WRITING;
	static int SIMPLIFIED_HAN;
	static int SINDHI;
	static int SINHALA;
	static int SORA_SOMPENG;
	static int SUNDANESE;
	static int SYLOTI_NAGRI;
	static int SYMBOLS;
	static int SYMBOLS_EMOJI;
	static int SYRIAC;
	static int TAGALOG;
	static int TAGBANWA;
	static int TAI_LE;
	static int TAI_VIET;
	static int TAKRI;
	static int TAMIL;
	static int TANGUT;
	static int TELUGU;
	static int TENGWAR;
	static int THAANA;
	static int THAI;
	static int TIBETAN;
	static int TIFINAGH;
	static int TIRHUTA;
	static int TRADITIONAL_HAN;
	static int UCAS;
	static int UGARITIC;
	static int UNKNOWN;
	static int UNWRITTEN_LANGUAGES;
	static int VAI;
	static int VISIBLE_SPEECH;
	static int WARANG_CITI;
	static int WESTERN_SYRIAC;
	static int WOLEAI;
	static int YI;
	static void static_cinit();
	static bool breaksBetweenLetters(int script);
	static int getCode(std::shared_ptr<android::icu::util::ULocale> locale);
	static int getCode(std::shared_ptr<java::lang::String> nameOrAbbrOrLocale);
	static int getCode(std::shared_ptr<java::util::Locale> locale);
	static int getCodeFromName(std::shared_ptr<java::lang::String> nameOrAbbr);
	static std::shared_ptr<java::lang::String> getName(int scriptCode);
	static std::shared_ptr<java::lang::String> getSampleString(int script);
	static int getScript(int codepoint);
	static int getScriptExtensions(int c,std::shared_ptr<java::util::BitSet> set);
	static std::shared_ptr<java::lang::String> getShortName(int scriptCode);
	static std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> getUsage(int script);
	static bool hasScript(int c,int sc);
	static bool isCased(int script);
	static bool isRightToLeft(int script);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::lang::UScript::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UScript(){
	}

}; // class UScript
}; // namespace android::icu::lang

#endif //__android_icu_lang_UScript__

