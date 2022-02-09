// CPP L:\smali2cpp20\x64\Release\out\android\icu\lang\UProperty.smali
#include "java2ctype.h"
#include "android.icu.lang.UProperty.h"

static android::icu::lang::UProperty::AGE = 0x4000;
static android::icu::lang::UProperty::ALPHABETIC = 0x0;
static android::icu::lang::UProperty::ASCII_HEX_DIGIT = 0x1;
static android::icu::lang::UProperty::BIDI_CLASS = 0x1000;
static android::icu::lang::UProperty::BIDI_CONTROL = 0x2;
static android::icu::lang::UProperty::BIDI_MIRRORED = 0x3;
static android::icu::lang::UProperty::BIDI_MIRRORING_GLYPH = 0x4001;
static android::icu::lang::UProperty::BIDI_PAIRED_BRACKET = 0x400d;
static android::icu::lang::UProperty::BIDI_PAIRED_BRACKET_TYPE = 0x1015;
static android::icu::lang::UProperty::BINARY_LIMIT = 0x3d;
static android::icu::lang::UProperty::BINARY_START = 0x0;
static android::icu::lang::UProperty::BLOCK = 0x1001;
static android::icu::lang::UProperty::CANONICAL_COMBINING_CLASS = 0x1002;
static android::icu::lang::UProperty::CASED = 0x31;
static android::icu::lang::UProperty::CASE_FOLDING = 0x4002;
static android::icu::lang::UProperty::CASE_IGNORABLE = 0x32;
static android::icu::lang::UProperty::CASE_SENSITIVE = 0x22;
static android::icu::lang::UProperty::CHANGES_WHEN_CASEFOLDED = 0x36;
static android::icu::lang::UProperty::CHANGES_WHEN_CASEMAPPED = 0x37;
static android::icu::lang::UProperty::CHANGES_WHEN_LOWERCASED = 0x33;
static android::icu::lang::UProperty::CHANGES_WHEN_NFKC_CASEFOLDED = 0x38;
static android::icu::lang::UProperty::CHANGES_WHEN_TITLECASED = 0x35;
static android::icu::lang::UProperty::CHANGES_WHEN_UPPERCASED = 0x34;
static android::icu::lang::UProperty::DASH = 0x4;
static android::icu::lang::UProperty::DECOMPOSITION_TYPE = 0x1003;
static android::icu::lang::UProperty::DEFAULT_IGNORABLE_CODE_POINT = 0x5;
static android::icu::lang::UProperty::DEPRECATED = 0x6;
static android::icu::lang::UProperty::DIACRITIC = 0x7;
static android::icu::lang::UProperty::DOUBLE_LIMIT = 0x3001;
static android::icu::lang::UProperty::DOUBLE_START = 0x3000;
static android::icu::lang::UProperty::EAST_ASIAN_WIDTH = 0x1004;
static android::icu::lang::UProperty::EMOJI = 0x39;
static android::icu::lang::UProperty::EMOJI_MODIFIER = 0x3b;
static android::icu::lang::UProperty::EMOJI_MODIFIER_BASE = 0x3c;
static android::icu::lang::UProperty::EMOJI_PRESENTATION = 0x3a;
static android::icu::lang::UProperty::EXTENDER = 0x8;
static android::icu::lang::UProperty::FULL_COMPOSITION_EXCLUSION = 0x9;
static android::icu::lang::UProperty::GENERAL_CATEGORY = 0x1005;
static android::icu::lang::UProperty::GENERAL_CATEGORY_MASK = 0x2000;
static android::icu::lang::UProperty::GRAPHEME_BASE = 0xa;
static android::icu::lang::UProperty::GRAPHEME_CLUSTER_BREAK = 0x1012;
static android::icu::lang::UProperty::GRAPHEME_EXTEND = 0xb;
static android::icu::lang::UProperty::GRAPHEME_LINK = 0xc;
static android::icu::lang::UProperty::HANGUL_SYLLABLE_TYPE = 0x100b;
static android::icu::lang::UProperty::HEX_DIGIT = 0xd;
static android::icu::lang::UProperty::HYPHEN = 0xe;
static android::icu::lang::UProperty::IDEOGRAPHIC = 0x11;
static android::icu::lang::UProperty::IDS_BINARY_OPERATOR = 0x12;
static android::icu::lang::UProperty::IDS_TRINARY_OPERATOR = 0x13;
static android::icu::lang::UProperty::ID_CONTINUE = 0xf;
static android::icu::lang::UProperty::ID_START = 0x10;
static android::icu::lang::UProperty::INT_LIMIT = 0x1016;
static android::icu::lang::UProperty::INT_START = 0x1000;
static android::icu::lang::UProperty::ISO_COMMENT = 0x4003;
static android::icu::lang::UProperty::JOINING_GROUP = 0x1006;
static android::icu::lang::UProperty::JOINING_TYPE = 0x1007;
static android::icu::lang::UProperty::JOIN_CONTROL = 0x14;
static android::icu::lang::UProperty::LEAD_CANONICAL_COMBINING_CLASS = 0x1010;
static android::icu::lang::UProperty::LINE_BREAK = 0x1008;
static android::icu::lang::UProperty::LOGICAL_ORDER_EXCEPTION = 0x15;
static android::icu::lang::UProperty::LOWERCASE = 0x16;
static android::icu::lang::UProperty::LOWERCASE_MAPPING = 0x4004;
static android::icu::lang::UProperty::MASK_LIMIT = 0x2001;
static android::icu::lang::UProperty::MASK_START = 0x2000;
static android::icu::lang::UProperty::MATH = 0x17;
static android::icu::lang::UProperty::NAME = 0x4005;
static android::icu::lang::UProperty::NFC_INERT = 0x27;
static android::icu::lang::UProperty::NFC_QUICK_CHECK = 0x100e;
static android::icu::lang::UProperty::NFD_INERT = 0x25;
static android::icu::lang::UProperty::NFD_QUICK_CHECK = 0x100c;
static android::icu::lang::UProperty::NFKC_INERT = 0x28;
static android::icu::lang::UProperty::NFKC_QUICK_CHECK = 0x100f;
static android::icu::lang::UProperty::NFKD_INERT = 0x26;
static android::icu::lang::UProperty::NFKD_QUICK_CHECK = 0x100d;
static android::icu::lang::UProperty::NONCHARACTER_CODE_POINT = 0x18;
static android::icu::lang::UProperty::NUMERIC_TYPE = 0x1009;
static android::icu::lang::UProperty::NUMERIC_VALUE = 0x3000;
static android::icu::lang::UProperty::OTHER_PROPERTY_LIMIT = 0x7001;
static android::icu::lang::UProperty::OTHER_PROPERTY_START = 0x7000;
static android::icu::lang::UProperty::PATTERN_SYNTAX = 0x2a;
static android::icu::lang::UProperty::PATTERN_WHITE_SPACE = 0x2b;
static android::icu::lang::UProperty::POSIX_ALNUM = 0x2c;
static android::icu::lang::UProperty::POSIX_BLANK = 0x2d;
static android::icu::lang::UProperty::POSIX_GRAPH = 0x2e;
static android::icu::lang::UProperty::POSIX_PRINT = 0x2f;
static android::icu::lang::UProperty::POSIX_XDIGIT = 0x30;
static android::icu::lang::UProperty::QUOTATION_MARK = 0x19;
static android::icu::lang::UProperty::RADICAL = 0x1a;
static android::icu::lang::UProperty::SCRIPT = 0x100a;
static android::icu::lang::UProperty::SCRIPT_EXTENSIONS = 0x7000;
static android::icu::lang::UProperty::SEGMENT_STARTER = 0x29;
static android::icu::lang::UProperty::SENTENCE_BREAK = 0x1013;
static android::icu::lang::UProperty::SIMPLE_CASE_FOLDING = 0x4006;
static android::icu::lang::UProperty::SIMPLE_LOWERCASE_MAPPING = 0x4007;
static android::icu::lang::UProperty::SIMPLE_TITLECASE_MAPPING = 0x4008;
static android::icu::lang::UProperty::SIMPLE_UPPERCASE_MAPPING = 0x4009;
static android::icu::lang::UProperty::SOFT_DOTTED = 0x1b;
static android::icu::lang::UProperty::STRING_LIMIT = 0x400e;
static android::icu::lang::UProperty::STRING_START = 0x4000;
static android::icu::lang::UProperty::S_TERM = 0x23;
static android::icu::lang::UProperty::TERMINAL_PUNCTUATION = 0x1c;
static android::icu::lang::UProperty::TITLECASE_MAPPING = 0x400a;
static android::icu::lang::UProperty::TRAIL_CANONICAL_COMBINING_CLASS = 0x1011;
static android::icu::lang::UProperty::UNDEFINED = -0x1;
static android::icu::lang::UProperty::UNICODE_1_NAME = 0x400b;
static android::icu::lang::UProperty::UNIFIED_IDEOGRAPH = 0x1d;
static android::icu::lang::UProperty::UPPERCASE = 0x1e;
static android::icu::lang::UProperty::UPPERCASE_MAPPING = 0x400c;
static android::icu::lang::UProperty::VARIATION_SELECTOR = 0x24;
static android::icu::lang::UProperty::WHITE_SPACE = 0x1f;
static android::icu::lang::UProperty::WORD_BREAK = 0x1014;
static android::icu::lang::UProperty::XID_CONTINUE = 0x20;
static android::icu::lang::UProperty::XID_START = 0x21;


