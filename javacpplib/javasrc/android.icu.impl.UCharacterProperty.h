#ifndef __android_icu_impl_UCharacterProperty__
#define __android_icu_impl_UCharacterProperty__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_16.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty_S_IntProperty.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class UCharacterProperty : public java::lang::Object {
protected:
private:
	static int AGE_SHIFT_;
	static int ALPHABETIC_PROPERTY_;
	static int ASCII_HEX_DIGIT_PROPERTY_;
	static int BLOCK_MASK_;
	static int BLOCK_SHIFT_;
	static int CGJ;
	static int CR;
	static int DASH_PROPERTY_;
	static std::shared_ptr<java::lang::String> DATA_FILE_NAME_;
	static int DATA_FORMAT;
	static int DECOMPOSITION_TYPE_MASK_;
	static int DEFAULT_IGNORABLE_CODE_POINT_PROPERTY_;
	static int DEL;
	static int DEPRECATED_PROPERTY_;
	static int DIACRITIC_PROPERTY_;
	static int EAST_ASIAN_MASK_;
	static int EAST_ASIAN_SHIFT_;
	static int EXTENDER_PROPERTY_;
	static int FIGURESP;
	static int FIRST_NIBBLE_SHIFT_;
	static int GCB_MASK;
	static int GCB_SHIFT;
	static int GC_CC_MASK;
	static int GC_CN_MASK;
	static int GC_CS_MASK;
	static int GC_ZL_MASK;
	static int GC_ZP_MASK;
	static int GC_ZS_MASK;
	static int GC_Z_MASK;
	static int GRAPHEME_BASE_PROPERTY_;
	static int GRAPHEME_EXTEND_PROPERTY_;
	static int GRAPHEME_LINK_PROPERTY_;
	static int HAIRSP;
	static int HEX_DIGIT_PROPERTY_;
	static int HYPHEN_PROPERTY_;
	static int IDEOGRAPHIC_PROPERTY_;
	static int IDS_BINARY_OPERATOR_PROPERTY_;
	static int IDS_TRINARY_OPERATOR_PROPERTY_;
	static int ID_CONTINUE_PROPERTY_;
	static int ID_START_PROPERTY_;
	static int INHSWAP;
	static int LAST_NIBBLE_MASK_;
	static int LB_MASK;
	static int LB_SHIFT;
	static int LOGICAL_ORDER_EXCEPTION_PROPERTY_;
	static int MATH_PROPERTY_;
	static int NBSP;
	static int NL;
	static int NNBSP;
	static int NOMDIG;
	static int NONCHARACTER_CODE_POINT_PROPERTY_;
	static int NTV_BASE60_START_;
	static int NTV_DECIMAL_START_;
	static int NTV_DIGIT_START_;
	static int NTV_FRACTION20_START_;
	static int NTV_FRACTION_START_;
	static int NTV_LARGE_START_;
	static int NTV_NONE_;
	static int NTV_NUMERIC_START_;
	static int NTV_RESERVED_START_;
	static int NUMERIC_TYPE_VALUE_SHIFT_;
	static int PATTERN_SYNTAX;
	static int PATTERN_WHITE_SPACE;
	static int PROPS_2_EMOJI;
	static int PROPS_2_EMOJI_MODIFIER;
	static int PROPS_2_EMOJI_MODIFIER_BASE;
	static int PROPS_2_EMOJI_PRESENTATION;
	static int QUOTATION_MARK_PROPERTY_;
	static int RADICAL_PROPERTY_;
	static int RLM;
	static int SB_MASK;
	static int SB_SHIFT;
	static int S_TERM_PROPERTY_;
	static int TAB;
	static int TERMINAL_PUNCTUATION_PROPERTY_;
	static int UNIFIED_IDEOGRAPH_PROPERTY_;
	static int U_A;
	static int U_F;
	static int U_FW_A;
	static int U_FW_F;
	static int U_FW_Z;
	static int U_FW_a;
	static int U_FW_f;
	static int U_FW_z;
	static int U_Z;
	static int U_a;
	static int U_f;
	static int U_z;
	static int VARIATION_SELECTOR_PROPERTY_;
	static int WB_MASK;
	static int WB_SHIFT;
	static int WHITE_SPACE_PROPERTY_;
	static int WJ;
	static int XID_CONTINUE_PROPERTY_;
	static int XID_START_PROPERTY_;
	static int ZWNBSP;
	static std::shared_ptr<int[]> gcbToHst;
	UCharacterProperty();
	static int getNumericTypeValue(int props);
	static bool isgraphPOSIX(int c);
	static int ntvGetType(int ntv);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<android::icu::impl::UCharacterProperty> INSTANCE;
	static char LATIN_CAPITAL_LETTER_I_WITH_DOT_ABOVE_;
	static char LATIN_SMALL_LETTER_DOTLESS_I_;
	static char LATIN_SMALL_LETTER_I_;
	static int MY_MASK;
	static int SCRIPT_MASK_;
	static int SCRIPT_X_MASK;
	static int SCRIPT_X_WITH_COMMON;
	static int SCRIPT_X_WITH_INHERITED;
	static int SCRIPT_X_WITH_OTHER;
	static int SRC_BIDI;
	static int SRC_CASE;
	static int SRC_CASE_AND_NORM;
	static int SRC_CHAR;
	static int SRC_CHAR_AND_PROPSVEC;
	static int SRC_COUNT;
	static int SRC_NAMES;
	static int SRC_NFC;
	static int SRC_NFC_CANON_ITER;
	static int SRC_NFKC;
	static int SRC_NFKC_CF;
	static int SRC_NONE;
	static int SRC_PROPSVEC;
	static int TYPE_MASK;
	std::shared_ptr<std::vector<android::icu::impl::UCharacterProperty_S_BinaryProperty>> binProps;
	std::shared_ptr<std::vector<android::icu::impl::UCharacterProperty_S_IntProperty>> intProps;
	int m_additionalColumnsCount_;
	std::shared_ptr<android::icu::impl::Trie2_16> m_additionalTrie_;
	std::shared_ptr<int[]> m_additionalVectors_;
	int m_maxBlockScriptValue_;
	int m_maxJTGValue_;
	std::shared_ptr<char[]> m_scriptExtensions_;
	std::shared_ptr<android::icu::impl::Trie2_16> m_trie_;
	std::shared_ptr<android::icu::util::VersionInfo> m_unicodeVersion_;
	static int _get0();
	static bool _wrap0(int c);
	static int _wrap1(int props);
	static int _wrap2(int ntv);
	static void static_cinit();
	static int getEuropeanDigit(int ch);
	static int getMask(int type);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual addPropertyStarts(std::shared_ptr<android::icu::text::UnicodeSet> set);
	int virtual digit(int c);
	int virtual getAdditional(int codepoint,int column);
	std::shared_ptr<android::icu::util::VersionInfo> virtual getAge(int codepoint);
	int virtual getIntPropertyMaxValue(int which);
	int virtual getIntPropertyValue(int c,int which);
	int virtual getMaxValues(int column);
	int virtual getNumericValue(int c);
	int virtual getProperty(int ch);
	int virtual getSource(int which);
	int virtual getType(int c);
	double virtual getUnicodeNumericValue(int c);
	bool virtual hasBinaryProperty(int c,int which);
	void virtual upropsvec_addPropertyStarts(std::shared_ptr<android::icu::text::UnicodeSet> set);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::UCharacterProperty::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UCharacterProperty(){
	}

}; // class UCharacterProperty
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterProperty__

