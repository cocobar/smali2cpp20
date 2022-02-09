// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUConfig.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.math.MathContext.h"
#include "android.icu.text.CurrencyPluralInfo.h"
#include "android.icu.text.DecimalFormat_S_AffixForCurrency.h"
#include "android.icu.text.DecimalFormat_S_Unit.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.DigitList.h"
#include "android.icu.text.NumberFormat_S_Field.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.UFieldPosition.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.Currency_S_CurrencyUsage.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.CurrencyAmount.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.ArithmeticException.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Double.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Integer.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"
#include "java.math.MathContext.h"
#include "java.math.RoundingMode.h"
#include "java.text.AttributedCharacterIterator_S_Attribute.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.text.AttributedString.h"
#include "java.text.ChoiceFormat.h"
#include "java.text.FieldPosition.h"
#include "java.text.Format_S_Field.h"
#include "java.text.ParsePosition.h"
#include "java.util.ArrayList.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.Set.h"

static android::icu::text::DecimalFormat::CURRENCY_SIGN = '\u00a4';
static android::icu::text::DecimalFormat::CURRENCY_SIGN_COUNT_IN_ISO_FORMAT = 0x2;
static android::icu::text::DecimalFormat::CURRENCY_SIGN_COUNT_IN_PLURAL_FORMAT = 0x3;
static android::icu::text::DecimalFormat::CURRENCY_SIGN_COUNT_IN_SYMBOL_FORMAT = 0x1;
static android::icu::text::DecimalFormat::CURRENCY_SIGN_COUNT_ZERO = 0x0;
static android::icu::text::DecimalFormat::DOUBLE_FRACTION_DIGITS = 0x154;
static android::icu::text::DecimalFormat::DOUBLE_INTEGER_DIGITS = 0x135;
static android::icu::text::DecimalFormat::MAX_INTEGER_DIGITS = 0x77359400;
static android::icu::text::DecimalFormat::MAX_SCIENTIFIC_INTEGER_DIGITS = 0x8;
static android::icu::text::DecimalFormat::NULL_UNIT;
static android::icu::text::DecimalFormat::PAD_AFTER_PREFIX = 0x1;
static android::icu::text::DecimalFormat::PAD_AFTER_SUFFIX = 0x3;
static android::icu::text::DecimalFormat::PAD_BEFORE_PREFIX = 0x0;
static android::icu::text::DecimalFormat::PAD_BEFORE_SUFFIX = 0x2;
static android::icu::text::DecimalFormat::PATTERN_DECIMAL_SEPARATOR = '.';
static android::icu::text::DecimalFormat::PATTERN_DIGIT = '#';
static android::icu::text::DecimalFormat::PATTERN_EIGHT_DIGIT = '8';
static android::icu::text::DecimalFormat::PATTERN_EXPONENT = 'E';
static android::icu::text::DecimalFormat::PATTERN_FIVE_DIGIT = '5';
static android::icu::text::DecimalFormat::PATTERN_FOUR_DIGIT = '4';
static android::icu::text::DecimalFormat::PATTERN_GROUPING_SEPARATOR = ',';
static android::icu::text::DecimalFormat::PATTERN_MINUS_SIGN = '-';
static android::icu::text::DecimalFormat::PATTERN_NINE_DIGIT = '9';
static android::icu::text::DecimalFormat::PATTERN_ONE_DIGIT = '1';
static android::icu::text::DecimalFormat::PATTERN_PAD_ESCAPE = '*';
static android::icu::text::DecimalFormat::PATTERN_PERCENT = '%';
static android::icu::text::DecimalFormat::PATTERN_PER_MILLE = '\u2030';
static android::icu::text::DecimalFormat::PATTERN_PLUS_SIGN = '+';
static android::icu::text::DecimalFormat::PATTERN_SEPARATOR = ';';
static android::icu::text::DecimalFormat::PATTERN_SEVEN_DIGIT = '7';
static android::icu::text::DecimalFormat::PATTERN_SIGNIFICANT_DIGIT = '@';
static android::icu::text::DecimalFormat::PATTERN_SIX_DIGIT = '6';
static android::icu::text::DecimalFormat::PATTERN_THREE_DIGIT = '3';
static android::icu::text::DecimalFormat::PATTERN_TWO_DIGIT = '2';
static android::icu::text::DecimalFormat::PATTERN_ZERO_DIGIT = '0';
static android::icu::text::DecimalFormat::QUOTE = '\'';
static android::icu::text::DecimalFormat::STATUS_INFINITE = 0x0;
static android::icu::text::DecimalFormat::STATUS_LENGTH = 0x3;
static android::icu::text::DecimalFormat::STATUS_POSITIVE = 0x1;
static android::icu::text::DecimalFormat::STATUS_UNDERFLOW = 0x2;
static android::icu::text::DecimalFormat::commaEquivalents;
static android::icu::text::DecimalFormat::currentSerialVersion = 0x4;
static android::icu::text::DecimalFormat::defaultGroupingSeparators;
static android::icu::text::DecimalFormat::dotEquivalents;
static android::icu::text::DecimalFormat::epsilon = 0.0;
static android::icu::text::DecimalFormat::minusSigns;
static android::icu::text::DecimalFormat::plusSigns;
static android::icu::text::DecimalFormat::roundingIncrementEpsilon = 1.0E-9;
static android::icu::text::DecimalFormat::serialVersionUID = 0xbff0362d872303aL;
static android::icu::text::DecimalFormat::skipExtendedSeparatorParsing;
static android::icu::text::DecimalFormat::strictCommaEquivalents;
static android::icu::text::DecimalFormat::strictDefaultGroupingSeparators;
static android::icu::text::DecimalFormat::strictDotEquivalents;
// .method static constructor <clinit>()V
void android::icu::text::DecimalFormat::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	std::shared<std::vector<int[]>> cVar3;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar4;
	std::shared<std::vector<int[]>> cVar5;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar6;
	std::shared<std::vector<int[]>> cVar7;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar8;
	std::shared<std::vector<int[]>> cVar9;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar10;
	std::shared<std::vector<int[]>> cVar11;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar12;
	std::shared<std::vector<int[]>> cVar13;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar14;
	std::shared<std::vector<int[]>> cVar15;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar16;
	std::shared<std::vector<int[]>> cVar17;
	std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> cVar18;
	
	cVar0 = 0xa;
	cVar1 = 0xe;
	android::icu::text::DecimalFormat::epsilon = 0x3da5fd7fe1796495L;
	cVar3 = std::make_shared<std::vector<int[]>>(cVar1);
	?;
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>(cVar3);
	android::icu::text::DecimalFormat::dotEquivalents = cVar2->freeze();
	cVar5 = std::make_shared<std::vector<int[]>>(0x10);
	?;
	cVar4 = std::make_shared<android::icu::text::UnicodeSet>(cVar5);
	android::icu::text::DecimalFormat::commaEquivalents = cVar4->freeze();
	cVar7 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar6 = std::make_shared<android::icu::text::UnicodeSet>(cVar7);
	android::icu::text::DecimalFormat::strictDotEquivalents = cVar6->freeze();
	cVar9 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	cVar8 = std::make_shared<android::icu::text::UnicodeSet>(cVar9);
	android::icu::text::DecimalFormat::strictCommaEquivalents = cVar8->freeze();
	cVar11 = std::make_shared<std::vector<int[]>>(0x28);
	?;
	cVar10 = std::make_shared<android::icu::text::UnicodeSet>(cVar11);
	android::icu::text::DecimalFormat::defaultGroupingSeparators = cVar10->freeze();
	cVar13 = std::make_shared<std::vector<int[]>>(0x26);
	?;
	cVar12 = std::make_shared<android::icu::text::UnicodeSet>(cVar13);
	android::icu::text::DecimalFormat::strictDefaultGroupingSeparators = cVar12->freeze();
	cVar15 = std::make_shared<std::vector<int[]>>(cVar1);
	?;
	cVar14 = std::make_shared<android::icu::text::UnicodeSet>(cVar15);
	android::icu::text::DecimalFormat::minusSigns = cVar14->freeze();
	cVar17 = std::make_shared<std::vector<int[]>>(cVar1);
	?;
	cVar16 = std::make_shared<android::icu::text::UnicodeSet>(cVar17);
	android::icu::text::DecimalFormat::plusSigns = cVar16->freeze();
	android::icu::text::DecimalFormat::skipExtendedSeparatorParsing = android::icu::impl::ICUConfig::get(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.text.DecimalFormat.SkipExtendedSeparatorParsing")), std::make_shared<java::lang::String>(std::make_shared<char[]>("false")))->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("true")));
	cVar18 = std::make_shared<android::icu::text::DecimalFormat_S_Unit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	android::icu::text::DecimalFormat::NULL_UNIT = cVar18;
	return;
	// 409    .line 2231
	// 410    :array_b2
	// 411    .array-data 4
	// 412        0x2e
	// 413        0x2e
	// 414        0x2024
	// 415        0x2024
	// 416        0x3002
	// 417        0x3002
	// 418        0xfe12
	// 419        0xfe12
	// 420        0xfe52
	// 421        0xfe52
	// 422        0xff0e
	// 423        0xff0e
	// 424        0xff61
	// 425        0xff61
	// 426    .end array-data
	// 428    .line 2241
	// 429    :array_d2
	// 430    .array-data 4
	// 431        0x2c
	// 432        0x2c
	// 433        0x60c
	// 434        0x60c
	// 435        0x66b
	// 436        0x66b
	// 437        0x3001
	// 438        0x3001
	// 439        0xfe10
	// 440        0xfe11
	// 441        0xfe50
	// 442        0xfe51
	// 443        0xff0c
	// 444        0xff0c
	// 445        0xff64
	// 446        0xff64
	// 447    .end array-data
	// 449    .line 2265
	// 450    :array_f6
	// 451    .array-data 4
	// 452        0x2e
	// 453        0x2e
	// 454        0x2024
	// 455        0x2024
	// 456        0xfe52
	// 457        0xfe52
	// 458        0xff0e
	// 459        0xff0e
	// 460        0xff61
	// 461        0xff61
	// 462    .end array-data
	// 464    .line 2273
	// 465    :array_10e
	// 466    .array-data 4
	// 467        0x2c
	// 468        0x2c
	// 469        0x66b
	// 470        0x66b
	// 471        0xfe10
	// 472        0xfe10
	// 473        0xfe50
	// 474        0xfe50
	// 475        0xff0c
	// 476        0xff0c
	// 477    .end array-data
	// 479    .line 2297
	// 480    :array_126
	// 481    .array-data 4
	// 482        0x20
	// 483        0x20
	// 484        0x27
	// 485        0x27
	// 486        0x2c
	// 487        0x2c
	// 488        0x2e
	// 489        0x2e
	// 490        0xa0
	// 491        0xa0
	// 492        0x60c
	// 493        0x60c
	// 494        0x66b
	// 495        0x66c
	// 496        0x2000
	// 497        0x200a
	// 498        0x2018
	// 499        0x2019
	// 500        0x2024
	// 501        0x2024
	// 502        0x202f
	// 503        0x202f
	// 504        0x205f
	// 505        0x205f
	// 506        0x3000
	// 507        0x3002
	// 508        0xfe10
	// 509        0xfe12
	// 510        0xfe50
	// 511        0xfe52
	// 512        0xff07
	// 513        0xff07
	// 514        0xff0c
	// 515        0xff0c
	// 516        0xff0e
	// 517        0xff0e
	// 518        0xff61
	// 519        0xff61
	// 520        0xff64
	// 521        0xff64
	// 522    .end array-data
	// 524    .line 2322
	// 525    :array_17a
	// 526    .array-data 4
	// 527        0x20
	// 528        0x20
	// 529        0x27
	// 530        0x27
	// 531        0x2c
	// 532        0x2c
	// 533        0x2e
	// 534        0x2e
	// 535        0xa0
	// 536        0xa0
	// 537        0x66b
	// 538        0x66c
	// 539        0x2000
	// 540        0x200a
	// 541        0x2018
	// 542        0x2019
	// 543        0x2024
	// 544        0x2024
	// 545        0x202f
	// 546        0x202f
	// 547        0x205f
	// 548        0x205f
	// 549        0x3000
	// 550        0x3000
	// 551        0xfe10
	// 552        0xfe10
	// 553        0xfe50
	// 554        0xfe50
	// 555        0xfe52
	// 556        0xfe52
	// 557        0xff07
	// 558        0xff07
	// 559        0xff0c
	// 560        0xff0c
	// 561        0xff0e
	// 562        0xff0e
	// 563        0xff61
	// 564        0xff61
	// 565    .end array-data
	// 567    .line 2344
	// 568    :array_1ca
	// 569    .array-data 4
	// 570        0x2d
	// 571        0x2d
	// 572        0x207b
	// 573        0x207b
	// 574        0x208b
	// 575        0x208b
	// 576        0x2212
	// 577        0x2212
	// 578        0x2796
	// 579        0x2796
	// 580        0xfe63
	// 581        0xfe63
	// 582        0xff0d
	// 583        0xff0d
	// 584    .end array-data
	// 586    .line 2354
	// 587    :array_1ea
	// 588    .array-data 4
	// 589        0x2b
	// 590        0x2b
	// 591        0x207a
	// 592        0x207a
	// 593        0x208a
	// 594        0x208a
	// 595        0x2795
	// 596        0x2795
	// 597        0xfb29
	// 598        0xfb29
	// 599        0xfe62
	// 600        0xfe62
	// 601        0xff0b
	// 602        0xff0b
	// 603    .end array-data

}
// .method public constructor <init>()V
android::icu::text::DecimalFormat::DecimalFormat()
{
	
	unsigned char cVar0;
	int cVar1;
	double cVar2;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar3;
	bool cVar4;
	std::shared_ptr<android::icu::text::DigitList> cVar5;
	std::shared_ptr<android::icu::math::MathContext> cVar6;
	std::shared_ptr<java::util::ArrayList> cVar7;
	std::shared_ptr<android::icu::util::ULocale> def;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar8;
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> cVar9;
	
	cVar0 = 0x3;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = 0x0;
	cVar4 = 0x0;
	// 621    invoke-direct {p0}, Landroid/icu/text/NumberFormat;-><init>()V
	this->parseRequireDecimalPoint = cVar4;
	this->PARSE_MAX_EXPONENT = 0x3e8;
	cVar5 = std::make_shared<android::icu::text::DigitList>();
	this->digitList = cVar5;
	this->positivePrefix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->positiveSuffix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->negativePrefix = std::make_shared<java::lang::String>(std::make_shared<char[]>("-"));
	this->negativeSuffix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->multiplier = cVar1;
	this->groupingSize = cVar0;
	this->groupingSize2 = cVar4;
	this->decimalSeparatorAlwaysShown = cVar4;
	this->symbols = cVar3;
	this->useSignificantDigits = cVar4;
	this->minSignificantDigits = cVar1;
	this->maxSignificantDigits = 0x6;
	this->exponentSignAlwaysShown = cVar4;
	this->roundingIncrement = cVar3;
	this->roundingIncrementICU = cVar3;
	this->roundingMode = 0x6;
	cVar6 = std::make_shared<android::icu::math::MathContext>(cVar4, cVar4);
	this->mathContext = cVar6;
	this->formatWidth = cVar4;
	this->pad = 0x20;
	this->padPosition = cVar4;
	this->parseBigDecimal = cVar4;
	this->currencyUsage = android::icu::util::Currency_S_CurrencyUsage::STANDARD;
	this->serialVersionOnStream = 0x4;
	cVar7 = std::make_shared<java::util::ArrayList>();
	this->attributes = cVar7;
	this->formatPattern = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->style = cVar4;
	this->currencySignCount = cVar4;
	this->affixPatternsForCurrency = cVar3;
	this->isReadyForParsing = cVar4;
	this->currencyPluralInfo = cVar3;
	this->actualRoundingIncrementICU = cVar3;
	this->actualRoundingIncrement = cVar3;
	this->roundingDouble = cVar2;
	this->roundingDoubleReciprocal = cVar2;
	def = android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT);
	//    .local v0, "def":Landroid/icu/util/ULocale;
	//    .local v1, "pattern":Ljava/lang/String;
	cVar8 = std::make_shared<android::icu::text::DecimalFormatSymbols>(def);
	this->symbols = cVar8;
	this->setCurrency(android::icu::util::Currency::getInstance(def));
	this->applyPatternWithoutExpandAffix(android::icu::text::DecimalFormat::getPattern(def, cVar4), cVar4);
	if ( this->currencySignCount != cVar0 )
		goto label_cond_a1;
	cVar9 = std::make_shared<android::icu::text::CurrencyPluralInfo>(def);
	this->currencyPluralInfo = cVar9;
label_goto_a0:
	return;
	// 815    .line 640
label_cond_a1:
	this->expandAffixAdjustWidth(cVar3);
	goto label_goto_a0;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::DecimalFormat::DecimalFormat(std::shared_ptr<java::lang::String> pattern)
{
	
	unsigned char cVar0;
	int cVar1;
	double cVar2;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar3;
	bool cVar4;
	std::shared_ptr<android::icu::text::DigitList> cVar5;
	std::shared_ptr<android::icu::math::MathContext> cVar6;
	std::shared_ptr<java::util::ArrayList> cVar7;
	std::shared_ptr<android::icu::util::ULocale> def;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar8;
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> cVar9;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	cVar0 = 0x3;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = 0x0;
	cVar4 = 0x0;
	// 838    invoke-direct {p0}, Landroid/icu/text/NumberFormat;-><init>()V
	this->parseRequireDecimalPoint = cVar4;
	this->PARSE_MAX_EXPONENT = 0x3e8;
	cVar5 = std::make_shared<android::icu::text::DigitList>();
	this->digitList = cVar5;
	this->positivePrefix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->positiveSuffix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->negativePrefix = std::make_shared<java::lang::String>(std::make_shared<char[]>("-"));
	this->negativeSuffix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->multiplier = cVar1;
	this->groupingSize = cVar0;
	this->groupingSize2 = cVar4;
	this->decimalSeparatorAlwaysShown = cVar4;
	this->symbols = cVar3;
	this->useSignificantDigits = cVar4;
	this->minSignificantDigits = cVar1;
	this->maxSignificantDigits = 0x6;
	this->exponentSignAlwaysShown = cVar4;
	this->roundingIncrement = cVar3;
	this->roundingIncrementICU = cVar3;
	this->roundingMode = 0x6;
	cVar6 = std::make_shared<android::icu::math::MathContext>(cVar4, cVar4);
	this->mathContext = cVar6;
	this->formatWidth = cVar4;
	this->pad = 0x20;
	this->padPosition = cVar4;
	this->parseBigDecimal = cVar4;
	this->currencyUsage = android::icu::util::Currency_S_CurrencyUsage::STANDARD;
	this->serialVersionOnStream = 0x4;
	cVar7 = std::make_shared<java::util::ArrayList>();
	this->attributes = cVar7;
	this->formatPattern = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->style = cVar4;
	this->currencySignCount = cVar4;
	this->affixPatternsForCurrency = cVar3;
	this->isReadyForParsing = cVar4;
	this->currencyPluralInfo = cVar3;
	this->actualRoundingIncrementICU = cVar3;
	this->actualRoundingIncrement = cVar3;
	this->roundingDouble = cVar2;
	this->roundingDoubleReciprocal = cVar2;
	def = android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT);
	//    .local v0, "def":Landroid/icu/util/ULocale;
	cVar8 = std::make_shared<android::icu::text::DecimalFormatSymbols>(def);
	this->symbols = cVar8;
	this->setCurrency(android::icu::util::Currency::getInstance(def));
	this->applyPatternWithoutExpandAffix(pattern, cVar4);
	if ( this->currencySignCount != cVar0 )
		goto label_cond_9d;
	cVar9 = std::make_shared<android::icu::text::CurrencyPluralInfo>(def);
	this->currencyPluralInfo = cVar9;
label_goto_9c:
	return;
	// 1026    .line 670
label_cond_9d:
	this->expandAffixAdjustWidth(cVar3);
	goto label_goto_9c;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/DecimalFormatSymbols;)V
android::icu::text::DecimalFormat::DecimalFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> symbols)
{
	
	int cVar0;
	int cVar1;
	double cVar2;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar3;
	bool cVar4;
	std::shared_ptr<android::icu::text::DigitList> cVar5;
	std::shared_ptr<android::icu::math::MathContext> cVar6;
	std::shared_ptr<java::util::ArrayList> cVar7;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "symbols"    # Landroid/icu/text/DecimalFormatSymbols;
	cVar0 = 0x6;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = 0x0;
	cVar4 = 0x0;
	// 1050    invoke-direct {p0}, Landroid/icu/text/NumberFormat;-><init>()V
	this->parseRequireDecimalPoint = cVar4;
	this->PARSE_MAX_EXPONENT = 0x3e8;
	cVar5 = std::make_shared<android::icu::text::DigitList>();
	this->digitList = cVar5;
	this->positivePrefix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->positiveSuffix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->negativePrefix = std::make_shared<java::lang::String>(std::make_shared<char[]>("-"));
	this->negativeSuffix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->multiplier = cVar1;
	this->groupingSize = 0x3;
	this->groupingSize2 = cVar4;
	this->decimalSeparatorAlwaysShown = cVar4;
	this->symbols = cVar3;
	this->useSignificantDigits = cVar4;
	this->minSignificantDigits = cVar1;
	this->maxSignificantDigits = cVar0;
	this->exponentSignAlwaysShown = cVar4;
	this->roundingIncrement = cVar3;
	this->roundingIncrementICU = cVar3;
	this->roundingMode = cVar0;
	cVar6 = std::make_shared<android::icu::math::MathContext>(cVar4, cVar4);
	this->mathContext = cVar6;
	this->formatWidth = cVar4;
	this->pad = 0x20;
	this->padPosition = cVar4;
	this->parseBigDecimal = cVar4;
	this->currencyUsage = android::icu::util::Currency_S_CurrencyUsage::STANDARD;
	this->serialVersionOnStream = 0x4;
	cVar7 = std::make_shared<java::util::ArrayList>();
	this->attributes = cVar7;
	this->formatPattern = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->style = cVar4;
	this->currencySignCount = cVar4;
	this->affixPatternsForCurrency = cVar3;
	this->isReadyForParsing = cVar4;
	this->currencyPluralInfo = cVar3;
	this->actualRoundingIncrementICU = cVar3;
	this->actualRoundingIncrement = cVar3;
	this->roundingDouble = cVar2;
	this->roundingDoubleReciprocal = cVar2;
	this->createFromPatternAndSymbols(pattern, symbols);
	return;

}
// .method constructor <init>(Ljava/lang/String;Landroid/icu/text/DecimalFormatSymbols;I)V
android::icu::text::DecimalFormat::DecimalFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> inputSymbols,int style)
{
	
	int cVar0;
	double cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar3;
	bool cVar4;
	std::shared_ptr<android::icu::text::DigitList> cVar5;
	std::shared_ptr<android::icu::math::MathContext> cVar6;
	std::shared_ptr<java::util::ArrayList> cVar7;
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> info;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "inputSymbols"    # Landroid/icu/text/DecimalFormatSymbols;
	//    .param p3, "style"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = 0x6;
	cVar3 = 0x0;
	cVar4 = 0x0;
	// 1220    invoke-direct {p0}, Landroid/icu/text/NumberFormat;-><init>()V
	this->parseRequireDecimalPoint = cVar4;
	this->PARSE_MAX_EXPONENT = 0x3e8;
	cVar5 = std::make_shared<android::icu::text::DigitList>();
	this->digitList = cVar5;
	this->positivePrefix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->positiveSuffix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->negativePrefix = std::make_shared<java::lang::String>(std::make_shared<char[]>("-"));
	this->negativeSuffix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->multiplier = cVar0;
	this->groupingSize = 0x3;
	this->groupingSize2 = cVar4;
	this->decimalSeparatorAlwaysShown = cVar4;
	this->symbols = cVar3;
	this->useSignificantDigits = cVar4;
	this->minSignificantDigits = cVar0;
	this->maxSignificantDigits = cVar2;
	this->exponentSignAlwaysShown = cVar4;
	this->roundingIncrement = cVar3;
	this->roundingIncrementICU = cVar3;
	this->roundingMode = cVar2;
	cVar6 = std::make_shared<android::icu::math::MathContext>(cVar4, cVar4);
	this->mathContext = cVar6;
	this->formatWidth = cVar4;
	this->pad = 0x20;
	this->padPosition = cVar4;
	this->parseBigDecimal = cVar4;
	this->currencyUsage = android::icu::util::Currency_S_CurrencyUsage::STANDARD;
	this->serialVersionOnStream = 0x4;
	cVar7 = std::make_shared<java::util::ArrayList>();
	this->attributes = cVar7;
	this->formatPattern = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->style = cVar4;
	this->currencySignCount = cVar4;
	this->affixPatternsForCurrency = cVar3;
	this->isReadyForParsing = cVar4;
	this->currencyPluralInfo = cVar3;
	this->actualRoundingIncrementICU = cVar3;
	this->actualRoundingIncrement = cVar3;
	this->roundingDouble = cVar1;
	this->roundingDoubleReciprocal = cVar1;
	//    .local v0, "info":Landroid/icu/text/CurrencyPluralInfo;
	if ( style != cVar2 )
		goto label_cond_85;
	//    .end local v0    # "info":Landroid/icu/text/CurrencyPluralInfo;
	info = std::make_shared<android::icu::text::CurrencyPluralInfo>(inputSymbols->getULocale());
label_cond_85:
	this->create(pattern, inputSymbols, 0x0, style);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/DecimalFormatSymbols;Landroid/icu/text/CurrencyPluralInfo;I)V
android::icu::text::DecimalFormat::DecimalFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> symbols,std::shared_ptr<android::icu::text::CurrencyPluralInfo> infoInput,int style)
{
	
	int cVar0;
	double cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar3;
	bool cVar4;
	std::shared_ptr<android::icu::text::DigitList> cVar5;
	std::shared_ptr<android::icu::math::MathContext> cVar6;
	std::shared_ptr<java::util::ArrayList> cVar7;
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> info;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "symbols"    # Landroid/icu/text/DecimalFormatSymbols;
	//    .param p3, "infoInput"    # Landroid/icu/text/CurrencyPluralInfo;
	//    .param p4, "style"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = 0x6;
	cVar3 = 0x0;
	cVar4 = 0x0;
	// 1409    invoke-direct {p0}, Landroid/icu/text/NumberFormat;-><init>()V
	this->parseRequireDecimalPoint = cVar4;
	this->PARSE_MAX_EXPONENT = 0x3e8;
	cVar5 = std::make_shared<android::icu::text::DigitList>();
	this->digitList = cVar5;
	this->positivePrefix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->positiveSuffix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->negativePrefix = std::make_shared<java::lang::String>(std::make_shared<char[]>("-"));
	this->negativeSuffix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->multiplier = cVar0;
	this->groupingSize = 0x3;
	this->groupingSize2 = cVar4;
	this->decimalSeparatorAlwaysShown = cVar4;
	this->symbols = cVar3;
	this->useSignificantDigits = cVar4;
	this->minSignificantDigits = cVar0;
	this->maxSignificantDigits = cVar2;
	this->exponentSignAlwaysShown = cVar4;
	this->roundingIncrement = cVar3;
	this->roundingIncrementICU = cVar3;
	this->roundingMode = cVar2;
	cVar6 = std::make_shared<android::icu::math::MathContext>(cVar4, cVar4);
	this->mathContext = cVar6;
	this->formatWidth = cVar4;
	this->pad = 0x20;
	this->padPosition = cVar4;
	this->parseBigDecimal = cVar4;
	this->currencyUsage = android::icu::util::Currency_S_CurrencyUsage::STANDARD;
	this->serialVersionOnStream = 0x4;
	cVar7 = std::make_shared<java::util::ArrayList>();
	this->attributes = cVar7;
	this->formatPattern = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->style = cVar4;
	this->currencySignCount = cVar4;
	this->affixPatternsForCurrency = cVar3;
	this->isReadyForParsing = cVar4;
	this->currencyPluralInfo = cVar3;
	this->actualRoundingIncrementICU = cVar3;
	this->actualRoundingIncrement = cVar3;
	this->roundingDouble = cVar1;
	this->roundingDoubleReciprocal = cVar1;
	//    .local v0, "info":Landroid/icu/text/CurrencyPluralInfo;
	if ( style != cVar2 )
		goto label_cond_82;
	info = infoInput->clone();
	//    .end local v0    # "info":Landroid/icu/text/CurrencyPluralInfo;
	info->checkCast("android::icu::text::CurrencyPluralInfo");
	//    .restart local v0    # "info":Landroid/icu/text/CurrencyPluralInfo;
label_cond_82:
	this->create(pattern, symbols, infoInput, style);
	return;

}
// .method private _setMaximumFractionDigits(I)V
void android::icu::text::DecimalFormat::_setMaximumFractionDigits(int newValue)
{
	
	//    .param p1, "newValue"    # I
	this->setMaximumFractionDigits(java::lang::Math::min(newValue, 0x154));
	return;

}
// .method private addAttribute(Landroid/icu/text/NumberFormat$Field;II)V
void android::icu::text::DecimalFormat::addAttribute(std::shared_ptr<android::icu::text::NumberFormat_S_Field> field,int begin,int end)
{
	
	std::shared_ptr<java::text::FieldPosition> pos;
	
	//    .param p1, "field"    # Landroid/icu/text/NumberFormat$Field;
	//    .param p2, "begin"    # I
	//    .param p3, "end"    # I
	pos = std::make_shared<java::text::FieldPosition>(field);
	//    .local v0, "pos":Ljava/text/FieldPosition;
	pos->setBeginIndex(begin);
	pos->setEndIndex(end);
	this->attributes->add(pos);
	return;

}
// .method private final addPadding(Ljava/lang/StringBuffer;Ljava/text/FieldPosition;II)V
void android::icu::text::DecimalFormat::addPadding(std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,int prefixLen,int suffixLen)
{
	
	int len;
	std::shared<std::vector<char[]>> padding;
	int i;
	
	//    .param p1, "result"    # Ljava/lang/StringBuffer;
	//    .param p2, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p3, "prefixLen"    # I
	//    .param p4, "suffixLen"    # I
	if ( this->formatWidth <= 0 )
		goto label_cond_39;
	len = (this->formatWidth - result->length());
	//    .local v1, "len":I
	if ( len <= 0 )
		goto label_cond_39;
	padding = std::make_shared<std::vector<char[]>>(len);
	//    .local v2, "padding":[C
	i = 0x0;
	//    .local v0, "i":I
label_goto_12:
	if ( i >= len )
		goto label_cond_1b;
	padding[i] = this->pad;
	i = ( i + 0x1);
	goto label_goto_12;
	// 1673    .line 1890
label_cond_1b:
	// switch
	{
	auto item = ( this->padPosition );
	if (item == 0) goto label_pswitch_3e;
	if (item == 1) goto label_pswitch_3a;
	if (item == 2) goto label_pswitch_42;
	if (item == 3) goto label_pswitch_4b;
	}
label_goto_20:
	if ( !(this->padPosition) )  
		goto label_cond_29;
	if ( this->padPosition != 0x1 )
		goto label_cond_39;
label_cond_29:
	fieldPosition->setBeginIndex((fieldPosition->getBeginIndex() +  len));
	fieldPosition->setEndIndex((fieldPosition->getEndIndex() +  len));
	//    .end local v0    # "i":I
	//    .end local v1    # "len":I
	//    .end local v2    # "padding":[C
label_cond_39:
	return;
	// 1717    .line 1892
	// 1718    .restart local v0    # "i":I
	// 1719    .restart local v1    # "len":I
	// 1720    .restart local v2    # "padding":[C
label_pswitch_3a:
	result->insert(prefixLen, padding);
	goto label_goto_20;
	// 1726    .line 1895
label_pswitch_3e:
	result->insert(0x0, padding);
	goto label_goto_20;
	// 1732    .line 1898
label_pswitch_42:
	result->insert((result->length() -  suffixLen), padding);
	goto label_goto_20;
	// 1744    .line 1901
label_pswitch_4b:
	result->append(padding);
	goto label_goto_20;
	// 1750    .line 1890
	// 1751    nop
	// 1753    :pswitch_data_50
	// 1754    .packed-switch 0x0
	// 1755        :pswitch_3e
	// 1756        :pswitch_3a
	// 1757        :pswitch_42
	// 1758        :pswitch_4b
	// 1759    .end packed-switch

}
// .method private appendAffix(Ljava/lang/StringBuffer;ZZLjava/text/FieldPosition;Z)I
int android::icu::text::DecimalFormat::appendAffix(std::shared_ptr<java::lang::StringBuffer> buf,bool isNegative,bool isPrefix,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool parseAttr)
{
	
	std::shared_ptr<java::lang::StringBuffer> affixBuf;
	std::shared_ptr<java::lang::String> affix;
	std::shared_ptr<java::lang::String> pattern;
	int offset;
	std::shared_ptr<java::lang::String> sign;
	int firstPos;
	int startPos;
	std::shared_ptr<java::lang::String> aff;
	int start;
	
	//    .param p1, "buf"    # Ljava/lang/StringBuffer;
	//    .param p2, "isNegative"    # Z
	//    .param p3, "isPrefix"    # Z
	//    .param p4, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p5, "parseAttr"    # Z
	if ( !(this->currencyChoice) )  
		goto label_cond_35;
	0x0;
	//    .local v11, "affixPat":Ljava/lang/String;
	if ( !(isPrefix) )  
		goto label_cond_29;
	if ( !(isNegative) )  
		goto label_cond_24;
	//    .local v11, "affixPat":Ljava/lang/String;
label_goto_f:
	affixBuf = std::make_shared<java::lang::StringBuffer>();
	//    .local v10, "affixBuf":Ljava/lang/StringBuffer;
	this->expandAffix(affixPat, 0x0, affixBuf);
	buf->append(affixBuf);
	return affixBuf->length();
	// 1819    .line 4216
	// 1820    .end local v10    # "affixBuf":Ljava/lang/StringBuffer;
	// 1821    .local v11, "affixPat":Ljava/lang/String;
label_cond_24:
	//    .local v11, "affixPat":Ljava/lang/String;
	goto label_goto_f;
	// 1830    .line 4218
	// 1831    .local v11, "affixPat":Ljava/lang/String;
label_cond_29:
	if ( !(isNegative) )  
		goto label_cond_30;
	//    .local v11, "affixPat":Ljava/lang/String;
	goto label_goto_f;
	// 1842    .local v11, "affixPat":Ljava/lang/String;
label_cond_30:
	//    .local v11, "affixPat":Ljava/lang/String;
	goto label_goto_f;
	// 1851    .line 4226
	// 1852    .end local v11    # "affixPat":Ljava/lang/String;
label_cond_35:
	0x0;
	//    .local v9, "affix":Ljava/lang/String;
	if ( !(isPrefix) )  
		goto label_cond_140;
	if ( !(isNegative) )  
		goto label_cond_134;
	affix = this->negativePrefix;
	//    .local v9, "affix":Ljava/lang/String;
label_goto_3e:
	if ( !(isNegative) )  
		goto label_cond_13a;
	pattern = this->negPrefixPattern;
	//    .local v14, "pattern":Ljava/lang/String;
label_goto_44:
	if ( !(parseAttr) )  
		goto label_cond_f9;
	offset = affix->indexOf(this->symbols->getCurrencySymbol());
	//    .local v6, "offset":I
	if ( offset <= -0x1 )
		goto label_cond_6c;
	this->formatAffix2Attribute(isPrefix, android::icu::text::NumberFormat_S_Field::CURRENCY, buf, offset, this->symbols->getCurrencySymbol()->length());
label_cond_6c:
	offset = affix->indexOf(this->symbols->getMinusSignString());
	if ( offset <= -0x1 )
		goto label_cond_92;
	this->formatAffix2Attribute(isPrefix, android::icu::text::NumberFormat_S_Field::SIGN, buf, offset, this->symbols->getMinusSignString()->length());
label_cond_92:
	offset = affix->indexOf(this->symbols->getPercentString());
	if ( offset <= -0x1 )
		goto label_cond_b8;
	this->formatAffix2Attribute(isPrefix, android::icu::text::NumberFormat_S_Field::PERCENT, buf, offset, this->symbols->getPercentString()->length());
label_cond_b8:
	offset = affix->indexOf(this->symbols->getPerMillString());
	if ( offset <= -0x1 )
		goto label_cond_de;
	this->formatAffix2Attribute(isPrefix, android::icu::text::NumberFormat_S_Field::PERMILLE, buf, offset, this->symbols->getPerMillString()->length());
label_cond_de:
	offset = pattern->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00a4\u00a4\u00a4")));
	if ( offset <= -0x1 )
		goto label_cond_f9;
	this->formatAffix2Attribute(isPrefix, android::icu::text::NumberFormat_S_Field::CURRENCY, buf, offset, (affix->length() - offset));
	//    .end local v6    # "offset":I
label_cond_f9:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::SIGN )
		goto label_cond_162;
	if ( !(isNegative) )  
		goto label_cond_159;
	sign = this->symbols->getMinusSignString();
	//    .local v15, "sign":Ljava/lang/String;
label_goto_10b:
	firstPos = affix->indexOf(sign);
	//    .local v13, "firstPos":I
	if ( firstPos <= -0x1 )
		goto label_cond_12a;
	startPos = (buf->length() + firstPos);
	//    .local v17, "startPos":I
	fieldPosition->setBeginIndex(startPos);
	fieldPosition->setEndIndex((sign->length() + startPos));
	//    .end local v13    # "firstPos":I
	//    .end local v15    # "sign":Ljava/lang/String;
	//    .end local v17    # "startPos":I
label_cond_12a:
label_goto_12a:
	buf->append(affix);
	return affix->length();
	// 2167    .line 4229
	// 2168    .end local v14    # "pattern":Ljava/lang/String;
	// 2169    .local v9, "affix":Ljava/lang/String;
label_cond_134:
	affix = this->positivePrefix;
	//    .local v9, "affix":Ljava/lang/String;
	goto label_goto_3e;
	// 2178    .line 4230
label_cond_13a:
	this->posPrefixPattern;
	//    .restart local v14    # "pattern":Ljava/lang/String;
	goto label_goto_44;
	// 2187    .line 4232
	// 2188    .end local v14    # "pattern":Ljava/lang/String;
	// 2189    .local v9, "affix":Ljava/lang/String;
label_cond_140:
	if ( !(isNegative) )  
		goto label_cond_14e;
	affix = this->negativeSuffix;
	//    .local v9, "affix":Ljava/lang/String;
label_goto_146:
	if ( !(isNegative) )  
		goto label_cond_153;
	this->negSuffixPattern;
	//    .restart local v14    # "pattern":Ljava/lang/String;
	goto label_goto_44;
	// 2209    .line 4232
	// 2210    .end local v14    # "pattern":Ljava/lang/String;
	// 2211    .local v9, "affix":Ljava/lang/String;
label_cond_14e:
	affix = this->positiveSuffix;
	//    .local v9, "affix":Ljava/lang/String;
	goto label_goto_146;
	// 2220    .line 4233
label_cond_153:
	this->posSuffixPattern;
	//    .restart local v14    # "pattern":Ljava/lang/String;
	goto label_goto_44;
	// 2229    .line 4267
label_cond_159:
	//    .restart local v15    # "sign":Ljava/lang/String;
	goto label_goto_10b;
	// 2242    .line 4274
	// 2243    .end local v15    # "sign":Ljava/lang/String;
label_cond_162:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::PERCENT )
		goto label_cond_19a;
	firstPos = affix->indexOf(this->symbols->getPercentString());
	//    .restart local v13    # "firstPos":I
	if ( firstPos <= -0x1 )
		goto label_cond_12a;
	startPos = (buf->length() + firstPos);
	//    .restart local v17    # "startPos":I
	fieldPosition->setBeginIndex(startPos);
	fieldPosition->setEndIndex((this->symbols->getPercentString()->length() + startPos));
	goto label_goto_12a;
	// 2308    .line 4281
	// 2309    .end local v13    # "firstPos":I
	// 2310    .end local v17    # "startPos":I
label_cond_19a:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::PERMILLE )
		goto label_cond_1d3;
	firstPos = affix->indexOf(this->symbols->getPerMillString());
	//    .restart local v13    # "firstPos":I
	if ( firstPos <= -0x1 )
		goto label_cond_12a;
	startPos = (buf->length() + firstPos);
	//    .restart local v17    # "startPos":I
	fieldPosition->setBeginIndex(startPos);
	fieldPosition->setEndIndex((this->symbols->getPerMillString()->length() + startPos));
	goto label_goto_12a;
	// 2375    .line 4291
	// 2376    .end local v13    # "firstPos":I
	// 2377    .end local v17    # "startPos":I
label_cond_1d3:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::CURRENCY )
		goto label_cond_12a;
	if ( affix->indexOf(this->symbols->getCurrencySymbol()) <= -0x1 )
		goto label_cond_210;
	aff = this->symbols->getCurrencySymbol();
	//    .local v8, "aff":Ljava/lang/String;
	//    .restart local v13    # "firstPos":I
	start = (buf->length() + affix->indexOf(aff));
	//    .local v16, "start":I
	//    .local v12, "end":I
	fieldPosition->setBeginIndex(start);
	fieldPosition->setEndIndex((start + aff->length()));
	goto label_goto_12a;
	// 2450    .line 4299
	// 2451    .end local v8    # "aff":Ljava/lang/String;
	// 2452    .end local v12    # "end":I
	// 2453    .end local v13    # "firstPos":I
	// 2454    .end local v16    # "start":I
label_cond_210:
	if ( affix->indexOf(this->symbols->getInternationalCurrencySymbol()) <= -0x1 )
		goto label_cond_245;
	aff = this->symbols->getInternationalCurrencySymbol();
	//    .restart local v8    # "aff":Ljava/lang/String;
	//    .restart local v13    # "firstPos":I
	start = (buf->length() + affix->indexOf(aff));
	//    .restart local v16    # "start":I
	//    .restart local v12    # "end":I
	fieldPosition->setBeginIndex(start);
	fieldPosition->setEndIndex((start + aff->length()));
	goto label_goto_12a;
	// 2518    .line 4306
	// 2519    .end local v8    # "aff":Ljava/lang/String;
	// 2520    .end local v12    # "end":I
	// 2521    .end local v13    # "firstPos":I
	// 2522    .end local v16    # "start":I
label_cond_245:
	if ( pattern->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00a4\u00a4\u00a4"))) <= -0x1 )
		goto label_cond_12a;
	//    .restart local v13    # "firstPos":I
	//    .restart local v16    # "start":I
	//    .restart local v12    # "end":I
	fieldPosition->setBeginIndex((buf->length() + pattern->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00a4\u00a4\u00a4")))));
	fieldPosition->setEndIndex((buf->length() + affix->length()));
	goto label_goto_12a;

}
// .method private appendAffixPattern(Ljava/lang/StringBuffer;ZZZ)V
void android::icu::text::DecimalFormat::appendAffixPattern(std::shared_ptr<java::lang::StringBuffer> buffer,bool isNegative,bool isPrefix,bool localized)
{
	
	char cVar0;
	std::shared_ptr<java::lang::String> affixPat;
	std::shared_ptr<java::lang::String> affix;
	int i;
	char ch;
	int j;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "buffer"    # Ljava/lang/StringBuffer;
	//    .param p2, "isNegative"    # Z
	//    .param p3, "isPrefix"    # Z
	//    .param p4, "localized"    # Z
	cVar0 = 0x27;
	0x0;
	//    .local v1, "affixPat":Ljava/lang/String;
	if ( !(isPrefix) )  
		goto label_cond_2e;
	if ( !(isNegative) )  
		goto label_cond_2b;
	affixPat = this->negPrefixPattern;
	//    .local v1, "affixPat":Ljava/lang/String;
label_goto_9:
	if ( affixPat )     
		goto label_cond_45;
	0x0;
	//    .local v0, "affix":Ljava/lang/String;
	if ( !(isPrefix) )  
		goto label_cond_39;
	if ( !(isNegative) )  
		goto label_cond_36;
	affix = this->negativePrefix;
	//    .local v0, "affix":Ljava/lang/String;
label_goto_12:
	buffer->append(cVar0);
	i = 0x0;
	//    .local v3, "i":I
label_goto_16:
	if ( i >= affix->length() )
		goto label_cond_41;
	ch = affix->charAt(i);
	//    .local v2, "ch":C
	if ( ch != cVar0 )
		goto label_cond_25;
	buffer->append(ch);
label_cond_25:
	buffer->append(ch);
	i = ( i + 0x1);
	goto label_goto_16;
	// 2653    .line 4392
	// 2654    .end local v0    # "affix":Ljava/lang/String;
	// 2655    .end local v2    # "ch":C
	// 2656    .end local v3    # "i":I
	// 2657    .local v1, "affixPat":Ljava/lang/String;
label_cond_2b:
	affixPat = this->posPrefixPattern;
	//    .local v1, "affixPat":Ljava/lang/String;
	goto label_goto_9;
	// 2664    .line 4394
	// 2665    .local v1, "affixPat":Ljava/lang/String;
label_cond_2e:
	if ( !(isNegative) )  
		goto label_cond_33;
	affixPat = this->negSuffixPattern;
	//    .local v1, "affixPat":Ljava/lang/String;
	goto label_goto_9;
	// 2674    .local v1, "affixPat":Ljava/lang/String;
label_cond_33:
	affixPat = this->posSuffixPattern;
	//    .local v1, "affixPat":Ljava/lang/String;
	goto label_goto_9;
	// 2681    .line 4401
	// 2682    .local v0, "affix":Ljava/lang/String;
label_cond_36:
	//    .local v0, "affix":Ljava/lang/String;
	goto label_goto_12;
	// 2689    .line 4403
	// 2690    .local v0, "affix":Ljava/lang/String;
label_cond_39:
	if ( !(isNegative) )  
		goto label_cond_3e;
	//    .local v0, "affix":Ljava/lang/String;
	goto label_goto_12;
	// 2699    .local v0, "affix":Ljava/lang/String;
label_cond_3e:
	//    .local v0, "affix":Ljava/lang/String;
	goto label_goto_12;
	// 2706    .line 4414
	// 2707    .restart local v3    # "i":I
label_cond_41:
	buffer->append(cVar0);
	return;
	// 2714    .line 4418
	// 2715    .end local v0    # "affix":Ljava/lang/String;
	// 2716    .end local v3    # "i":I
label_cond_45:
	if ( localized )     
		goto label_cond_4b;
	buffer->append(affixPat);
label_cond_4a:
	return;
	// 2727    .line 4422
label_cond_4b:
	i = 0x0;
	//    .restart local v3    # "i":I
label_goto_4c:
	if ( i >= affixPat->length() )
		goto label_cond_4a;
	ch = affixPat->charAt(i);
	//    .restart local v2    # "ch":C
	// switch
	{
	auto item = ( ch );
	if (item == 0x25) goto label_sswitch_a9;
	if (item == 0x27) goto label_sswitch_75;
	if (item == 0x2d) goto label_sswitch_b0;
	if (item == 0x2030) goto label_sswitch_a2;
	}
label_goto_59:
	if ( ch == this->symbols->getDecimalSeparator() )
		goto label_cond_69;
	if ( ch != this->symbols->getGroupingSeparator() )
		goto label_cond_b7;
label_cond_69:
	buffer->append(cVar0);
	buffer->append(ch);
	buffer->append(cVar0);
label_goto_72:
	i = ( i + 0x1);
	goto label_goto_4c;
	// 2782    .line 4426
label_sswitch_75:
	j = affixPat->indexOf(cVar0, ( i + 0x1));
	//    .local v4, "j":I
	if ( j >= 0 )
		goto label_cond_97;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Malformed affix pattern: ")))->append(affixPat)->toString());
	// throw
	throw cVar1;
	// 2819    .line 4430
label_cond_97:
	buffer->append(affixPat->substring(i, ( j + 0x1)));
	i = j;
	goto label_goto_72;
	// 2835    .line 4434
	// 2836    .end local v4    # "j":I
label_sswitch_a2:
	ch = this->symbols->getPerMill();
	goto label_goto_59;
	// 2846    .line 4437
label_sswitch_a9:
	ch = this->symbols->getPercent();
	goto label_goto_59;
	// 2856    .line 4440
label_sswitch_b0:
	ch = this->symbols->getMinusSign();
	goto label_goto_59;
	// 2866    .line 4449
label_cond_b7:
	buffer->append(ch);
	goto label_goto_72;
	// 2872    .line 4424
	// 2873    nop
	// 2875    :sswitch_data_bc
	// 2876    .sparse-switch
	// 2877        0x25 -> :sswitch_a9
	// 2878        0x27 -> :sswitch_75
	// 2879        0x2d -> :sswitch_b0
	// 2880        0x2030 -> :sswitch_a2
	// 2881    .end sparse-switch

}
// .method private applyPattern(Ljava/lang/String;Z)V
void android::icu::text::DecimalFormat::applyPattern(std::shared_ptr<java::lang::String> pattern,bool localized)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "localized"    # Z
	this->applyPatternWithoutExpandAffix(pattern, localized);
	this->expandAffixAdjustWidth(0x0);
	return;

}
// .method private applyPatternWithoutExpandAffix(Ljava/lang/String;Z)V
void android::icu::text::DecimalFormat::applyPatternWithoutExpandAffix(std::shared_ptr<java::lang::String> pattern,bool localized)
{
	
	int zeroDigit;
	int sigDigit;
	int groupingSeparator;
	int decimalSeparator;
	int percent;
	int digit;
	std::shared_ptr<java::lang::String> exponent;
	int nineDigit;
	int pos;
	int part;
	int subpart;
	int sub0Start;
	std::shared_ptr<java::lang::StringBuilder> prefix;
	std::shared_ptr<java::lang::StringBuilder> suffix;
	int decimalPos;
	int multpl;
	int digitLeftCount;
	int zeroDigitCount;
	int digitRightCount;
	int sigDigitCount;
	int groupingCount;
	int groupingCount2;
	int padPos;
	int incrementPos;
	auto incrementVal;
	int expDigits;
	std::shared_ptr<java::lang::StringBuilder> affix;
	char ch;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	int p;
	long long incrementVal;
	int after;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	int sub0Limit;
	int n;
	std::shared_ptr<java::lang::Object> cVar3;
	std::shared_ptr<java::lang::Object> cVar4;
	int cVar5;
	int digitTotalCount;
	int effectiveDecimalPos;
	int useSigDig;
	int cVar6;
	int cVar7;
	int cVar8;
	int scale;
	int cVar9;
	std::shared_ptr<android::icu::math::BigDecimal> cVar21;
	int minInt;
	int cVar11;
	int cVar12;
	int cVar13;
	std::shared_ptr<java::lang::String> cVar22;
	std::shared_ptr<java::lang::StringBuilder> cVar23;
	auto theCurrency;
	int d;
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> cVar24;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "localized"    # Z
	//    .local v56, "zeroDigit":C
	0x40;
	//    .local v46, "sigDigit":C
	0x2c;
	//    .local v25, "groupingSeparator":C
	0x2e;
	//    .local v12, "decimalSeparator":C
	0x25;
	//    .local v40, "percent":C
	0x2030;
	//    .local v39, "perMill":C
	0x23;
	//    .local v13, "digit":C
	0x3b;
	//    .local v45, "separator":C
	java::lang::String::valueOf(0x45);
	//    .local v21, "exponent":Ljava/lang/String;
	0x2b;
	//    .local v41, "plus":C
	0x2a;
	//    .local v36, "padEscape":C
	0x2d;
	//    .local v30, "minus":C
	if ( !(localized) )  
		goto label_cond_96;
	zeroDigit = this->symbols->getZeroDigit();
	//    .local v56, "zeroDigit":C
	sigDigit = this->symbols->getSignificantDigit();
	//    .local v46, "sigDigit":C
	groupingSeparator = this->symbols->getGroupingSeparator();
	//    .local v25, "groupingSeparator":C
	decimalSeparator = this->symbols->getDecimalSeparator();
	//    .local v12, "decimalSeparator":C
	percent = this->symbols->getPercent();
	//    .local v40, "percent":C
	//    .local v39, "perMill":C
	digit = this->symbols->getDigit();
	//    .local v13, "digit":C
	//    .local v45, "separator":C
	exponent = this->symbols->getExponentSeparator();
	//    .local v41, "plus":C
	//    .local v36, "padEscape":C
	//    .end local v12    # "decimalSeparator":C
	//    .end local v13    # "digit":C
	//    .end local v25    # "groupingSeparator":C
	//    .end local v30    # "minus":C
	//    .end local v36    # "padEscape":C
	//    .end local v39    # "perMill":C
	//    .end local v40    # "percent":C
	//    .end local v41    # "plus":C
	//    .end local v45    # "separator":C
	//    .end local v46    # "sigDigit":C
	//    .end local v56    # "zeroDigit":C
label_cond_96:
	nineDigit = (char)(( 0x30 + 0x9));
	//    .local v33, "nineDigit":C
	//    .local v22, "gotNegative":Z
	pos = 0x0;
	//    .local v42, "pos":I
	part = 0x0;
	//    .local v38, "part":I
label_goto_a3:
	if ( part >= 0x2 )
		goto label_cond_6a8;
	if ( pos >= pattern->length() )
		goto label_cond_6a8;
	subpart = 0x1;
	//    .local v52, "subpart":I
	sub0Start = 0x0;
	//    .local v50, "sub0Start":I
	//    .local v49, "sub0Limit":I
	//    .local v51, "sub2Limit":I
	prefix = std::make_shared<java::lang::StringBuilder>();
	//    .local v43, "prefix":Ljava/lang/StringBuilder;
	suffix = std::make_shared<java::lang::StringBuilder>();
	//    .local v53, "suffix":Ljava/lang/StringBuilder;
	decimalPos = -0x1;
	//    .local v11, "decimalPos":I
	multpl = 0x1;
	//    .local v31, "multpl":I
	digitLeftCount = 0x0;
	//    .local v14, "digitLeftCount":I
	zeroDigitCount = 0x0;
	//    .local v57, "zeroDigitCount":I
	digitRightCount = 0x0;
	//    .local v15, "digitRightCount":I
	sigDigitCount = 0x0;
	//    .local v47, "sigDigitCount":I
	groupingCount = -0x1;
	//    .local v23, "groupingCount":B
	groupingCount2 = -0x1;
	//    .local v24, "groupingCount2":B
	padPos = -0x1;
	//    .local v37, "padPos":I
	//    .local v35, "padChar":C
	incrementPos = -0x1;
	//    .local v26, "incrementPos":I
	incrementVal = 0x0;
	//    .local v28, "incrementVal":J
	expDigits = -0x1;
	//    .local v19, "expDigits":B
	//    .local v20, "expSignAlways":Z
	//    .local v9, "currencySignCnt":I
	affix = prefix;
	//    .local v6, "affix":Ljava/lang/StringBuilder;
	//    .end local v19    # "expDigits":B
	//    .end local v23    # "groupingCount":B
	//    .end local v24    # "groupingCount2":B
	//    .end local v35    # "padChar":C
	//    .local v48, "start":I
label_goto_e5:
	if ( pos >= pattern->length() )
		goto label_cond_3e0;
	ch = pattern->charAt(pos);
	//    .local v8, "ch":C
	// switch
	{
	auto item = ( subpart );
	if (item == 0) goto label_pswitch_fd;
	if (item == 1) goto label_pswitch_299;
	if (item == 2) goto label_pswitch_299;
	if (item == 3) goto label_pswitch_59d;
	if (item == 4) goto label_pswitch_59d;
	}
	//    .end local v8    # "ch":C
label_cond_fa:
label_goto_fa:
	pos = ( pos + 0x1);
	goto label_goto_e5;
	// 3285    .line 4752
	// 3286    .restart local v8    # "ch":C
label_pswitch_fd:
	if ( ch != digit )
		goto label_cond_114;
	if ( zeroDigitCount > 0 ) 
		goto label_cond_103;
	if ( sigDigitCount <= 0 )
		goto label_cond_111;
label_cond_103:
	digitRightCount = ( digitRightCount + 0x1);
label_goto_105:
	if ( groupingCount < 0 ) 
		goto label_cond_fa;
	if ( decimalPos >= 0 )
		goto label_cond_fa;
	groupingCount = (unsigned char)(( groupingCount + 0x1));
	//    .local v23, "groupingCount":B
	goto label_goto_fa;
	// 3317    .line 4756
	// 3318    .end local v23    # "groupingCount":B
label_cond_111:
	digitLeftCount = ( digitLeftCount + 0x1);
	goto label_goto_105;
	// 3324    .line 4761
label_cond_114:
	if ( ch <  zeroDigit )
		goto label_cond_155;
	if ( ch >  nineDigit )
		goto label_cond_155;
label_cond_11c:
	if ( digitRightCount <= 0 )
		goto label_cond_143;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->patternError(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unexpected \'")))->append(ch)->append(0x27)->toString(), pattern);
label_cond_143:
	if ( ch != sigDigit )
		goto label_cond_19f;
	sigDigitCount = ( sigDigitCount + 0x1);
label_cond_149:
label_goto_149:
	if ( groupingCount < 0 ) 
		goto label_cond_fa;
	if ( decimalPos >= 0 )
		goto label_cond_fa;
	groupingCount = (unsigned char)(( groupingCount + 0x1));
	//    .restart local v23    # "groupingCount":B
	goto label_goto_fa;
	// 3401    .line 4761
	// 3402    .end local v23    # "groupingCount":B
label_cond_155:
	if ( ch == sigDigit )
		goto label_cond_11c;
	if ( ch != groupingSeparator )
		goto label_cond_1d4;
	if ( ch != 0x27 )
		goto label_cond_18b;
	if ( ( pos + 0x1) >= pattern->length() )
		goto label_cond_18b;
	after = pattern->charAt(( pos + 0x1));
	//    .local v7, "after":C
	if ( after == digit )
		goto label_cond_18b;
	if ( after <  zeroDigit )
		goto label_cond_183;
	if ( after <= nineDigit )
		goto label_cond_18b;
label_cond_183:
	if ( after != 0x27 )
		goto label_cond_1c4;
	pos = ( pos + 0x1);
	//    .end local v7    # "after":C
label_cond_18b:
	if ( decimalPos < 0 ) 
		goto label_cond_199;
	this->patternError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Grouping separator after decimal")), pattern);
label_cond_199:
	groupingCount2 = groupingCount;
	//    .local v24, "groupingCount2":B
	//    .local v23, "groupingCount":B
	goto label_goto_fa;
	// 3493    .line 4768
	// 3494    .end local v23    # "groupingCount":B
	// 3495    .end local v24    # "groupingCount2":B
label_cond_19f:
	zeroDigitCount = ( zeroDigitCount + 0x1);
	if ( ch == zeroDigit )
		goto label_cond_149;
	p = ((digitLeftCount + zeroDigitCount) + digitRightCount);
	//    .local v34, "p":I
	if ( incrementPos < 0 ) 
		goto label_cond_1b8;
label_goto_1ab:
	if ( incrementPos >= p )
		goto label_cond_1ba;
	incrementVal = (incrementVal * 0xa);
	incrementPos = ( incrementPos + 0x1);
	goto label_goto_1ab;
	// 3531    .line 4777
label_cond_1b8:
	incrementPos = p;
label_cond_1ba:
	incrementVal = (incrementVal + (long long)((ch - zeroDigit)));
	goto label_goto_149;
	// 3549    .line 4799
	// 3550    .end local v34    # "p":I
	// 3551    .restart local v7    # "after":C
label_cond_1c4:
	if ( groupingCount >= 0 )
		goto label_cond_1ca;
	subpart = 0x3;
	goto label_goto_fa;
	// 3560    .line 4803
label_cond_1ca:
	subpart = 0x2;
	suffix;
	pos;
	pos = ( pos + -0x1);
	goto label_goto_fa;
	// 3574    .line 4817
	// 3575    .end local v7    # "after":C
label_cond_1d4:
	if ( ch != decimalSeparator )
		goto label_cond_1ea;
	if ( decimalPos < 0 ) 
		goto label_cond_1e4;
	this->patternError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Multiple decimal separators")), pattern);
label_cond_1e4:
	decimalPos = ((digitLeftCount + zeroDigitCount) + digitRightCount);
	goto label_goto_fa;
	// 3601    .line 4826
label_cond_1ea:
	if ( !(pattern->regionMatches(pos, exponent, 0x0, exponent->length())) )  
		goto label_cond_282;
	if ( expDigits < 0 ) 
		goto label_cond_20e;
	this->patternError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Multiple exponential symbols")), pattern);
label_cond_20e:
	if ( groupingCount < 0 ) 
		goto label_cond_21c;
	this->patternError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Grouping separator in exponential")), pattern);
label_cond_21c:
	pos = (pos + exponent->length());
	if ( pos >= pattern->length() )
		goto label_cond_23e;
	if ( pattern->charAt(pos) != this->symbols->getPlusSign() )
		goto label_cond_23e;
	0x1;
	pos = ( pos + 0x1);
label_cond_23e:
	expDigits = 0x0;
label_goto_240:
	if ( pos >= pattern->length() )
		goto label_cond_262;
	if ( pattern->charAt(pos) != zeroDigit )
		goto label_cond_262;
	//    .local v19, "expDigits":B
	pos = ( pos + 0x1);
	goto label_goto_240;
	// 3738    .line 4850
	// 3739    .end local v19    # "expDigits":B
label_cond_262:
	if ( (digitLeftCount + zeroDigitCount) >= 0x1 )
		goto label_cond_28c;
	if ( (sigDigitCount + digitRightCount) >= 0x1 )
		goto label_cond_28c;
label_cond_276:
label_goto_276:
	this->patternError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Malformed exponential")), pattern);
label_cond_282:
	subpart = 0x2;
	suffix;
	pos;
	pos = ( pos + -0x1);
	goto label_goto_fa;
	// 3790    .line 4852
label_cond_28c:
	if ( sigDigitCount <= 0 )
		goto label_cond_290;
	if ( digitLeftCount > 0 ) 
		goto label_cond_276;
label_cond_290:
	if ( expDigits >= 0x1 )
		goto label_cond_282;
	goto label_goto_276;
	// 3807    .line 4870
label_pswitch_299:
	if ( ch == digit )
		goto label_cond_29f;
	if ( ch != groupingSeparator )
		goto label_cond_2af;
label_cond_29f:
	if ( subpart != 0x1 )
		goto label_cond_313;
	subpart = 0x0;
	pos;
	pos = ( pos + -0x1);
	goto label_goto_fa;
	// 3836    .line 4870
label_cond_2af:
	if ( ch == decimalSeparator )
		goto label_cond_29f;
	if ( ch <  zeroDigit )
		goto label_cond_2b9;
	if ( ch <= nineDigit )
		goto label_cond_29f;
label_cond_2b9:
	if ( ch == sigDigit )
		goto label_cond_29f;
	if ( ch != 0xa4 )
		goto label_cond_374;
	if ( ( pos + 0x1) >= pattern->length() )
		goto label_cond_36c;
	if ( pattern->charAt(( pos + 0x1)) != 0xa4 )
		goto label_cond_368;
	//    .local v17, "doubled":Z
label_goto_2e3:
	if ( !(doubled) )  
		goto label_cond_372;
	pos = ( pos + 0x1);
	affix->append(ch);
	if ( ( pos + 0x1) >= pattern->length() )
		goto label_cond_370;
	if ( pattern->charAt(( pos + 0x1)) != 0xa4 )
		goto label_cond_370;
	pos = ( pos + 0x1);
	affix->append(ch);
	0x3;
	//    .end local v8    # "ch":C
	//    .end local v17    # "doubled":Z
label_cond_30e:
label_goto_30e:
	affix->append(ch);
	goto label_goto_fa;
	// 3956    .line 4878
	// 3957    .restart local v8    # "ch":C
label_cond_313:
	if ( ch != 0x27 )
		goto label_cond_342;
	if ( ( pos + 0x1) >= pattern->length() )
		goto label_cond_33e;
	if ( pattern->charAt(( pos + 0x1)) != 0x27 )
		goto label_cond_33e;
	pos = ( pos + 0x1);
	affix->append(ch);
	goto label_goto_fa;
	// 4004    .line 4890
label_cond_33e:
	subpart = ( subpart + 0x2);
	goto label_goto_fa;
	// 4010    .line 4894
label_cond_342:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	this->patternError(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unquoted special character \'")))->append(ch)->append(0x27)->toString(), pattern);
	goto label_goto_30e;
	// 4048    .line 4899
label_cond_368:
	//    .restart local v17    # "doubled":Z
	goto label_goto_2e3;
	// 4055    .line 4898
	// 4056    .end local v17    # "doubled":Z
label_cond_36c:
	//    .restart local v17    # "doubled":Z
	goto label_goto_2e3;
	// 4063    .line 4912
label_cond_370:
	0x2;
	goto label_goto_30e;
	// 4069    .line 4915
label_cond_372:
	0x1;
	goto label_goto_30e;
	// 4075    .line 4918
	// 4076    .end local v17    # "doubled":Z
label_cond_374:
	if ( ch != 0x27 )
		goto label_cond_3a3;
	if ( ( pos + 0x1) >= pattern->length() )
		goto label_cond_39f;
	if ( pattern->charAt(( pos + 0x1)) != 0x27 )
		goto label_cond_39f;
	pos = ( pos + 0x1);
	affix->append(ch);
	goto label_goto_30e;
	// 4123    .line 4926
label_cond_39f:
	subpart = ( subpart + 0x2);
	goto label_goto_30e;
	// 4129    .line 4929
label_cond_3a3:
	if ( ch != this->symbols->getPatternSeparator() )
		goto label_cond_52c;
	if ( subpart == 0x1 )
		goto label_cond_3b7;
	if ( part != 0x1 )
		goto label_cond_3dc;
label_cond_3b7:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	this->patternError(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unquoted special character \'")))->append(ch)->append(0x27)->toString(), pattern);
label_cond_3dc:
	pos = ( pos + 0x1);
	//    .end local v8    # "ch":C
label_cond_3e0:
	if ( subpart == 0x3 )
		goto label_cond_3f0;
	if ( subpart != 0x4 )
		goto label_cond_3fc;
label_cond_3f0:
	this->patternError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unterminated quote")), pattern);
label_cond_3fc:
	if ( 0x0 )     
		goto label_cond_402;
	sub0Limit = pattern->length();
label_cond_402:
	if ( 0x0 )     
		goto label_cond_408;
label_cond_408:
	if ( zeroDigitCount )     
		goto label_cond_41c;
	if ( sigDigitCount )     
		goto label_cond_41c;
	if ( digitLeftCount <= 0 )
		goto label_cond_41c;
	if ( decimalPos < 0 ) 
		goto label_cond_41c;
	n = decimalPos;
	//    .local v32, "n":I
	if ( decimalPos )     
		goto label_cond_416;
	n = ( n + 0x1);
label_cond_416:
	digitRightCount = (digitLeftCount - n);
	digitLeftCount = ( n + -0x1);
	zeroDigitCount = 0x1;
	//    .end local v32    # "n":I
label_cond_41c:
	if ( decimalPos >= 0 )
		goto label_cond_5ce;
	if ( digitRightCount <= 0 )
		goto label_cond_5ce;
	if ( sigDigitCount )     
		goto label_cond_5ce;
label_cond_422:
label_goto_422:
	this->patternError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Malformed pattern")), pattern);
label_cond_42e:
	if ( padPos < 0 ) 
		goto label_cond_438;
	if ( padPos != pos )
		goto label_cond_5ec;
	padPos = 0x0;
label_cond_438:
label_goto_438:
	if ( part )     
		goto label_cond_690;
	cVar3 = prefix->toString();
	this->negPrefixPattern = cVar3;
	this->posPrefixPattern = cVar3;
	cVar4 = suffix->toString();
	this->negSuffixPattern = cVar4;
	this->posSuffixPattern = cVar4;
	if ( expDigits < 0 ) 
		goto label_cond_61c;
	cVar5 = 0x1;
label_goto_45e:
	this->useExponentialNotation = cVar5;
	if ( !(this->useExponentialNotation) )  
		goto label_cond_478;
	this->minExponentDigits = expDigits;
	this->exponentSignAlwaysShown = 0x0;
label_cond_478:
	digitTotalCount = ((digitLeftCount + zeroDigitCount) + digitRightCount);
	//    .local v16, "digitTotalCount":I
	if ( decimalPos < 0 ) 
		goto label_cond_620;
	effectiveDecimalPos = decimalPos;
	//    .local v18, "effectiveDecimalPos":I
label_goto_480:
	if ( sigDigitCount <= 0 )
		goto label_cond_624;
	useSigDig = 0x1;
	//    .local v55, "useSigDig":Z
label_goto_484:
	this->setSignificantDigitsUsed(useSigDig);
	if ( !(useSigDig) )  
		goto label_cond_628;
	this->setMinimumSignificantDigits(sigDigitCount);
	this->setMaximumSignificantDigits((sigDigitCount + digitRightCount));
label_goto_49d:
	if ( groupingCount <= 0 )
		goto label_cond_665;
	cVar6 = 0x1;
label_goto_4a1:
	this->setGroupingUsed(cVar6);
	if ( groupingCount <= 0 )
		goto label_cond_669;
	cVar7 = groupingCount;
label_goto_4ac:
	this->groupingSize = cVar7;
	if ( groupingCount2 <= 0 )
		goto label_cond_66d;
	if ( groupingCount2 == groupingCount )
		goto label_cond_66d;
label_goto_4ba:
	this->groupingSize2 = groupingCount2;
	this->multiplier = multpl;
	if ( !(decimalPos) )  
		goto label_cond_4cc;
	if ( decimalPos != digitTotalCount )
		goto label_cond_671;
label_cond_4cc:
	cVar8 = 0x1;
label_goto_4ce:
	this->setDecimalSeparatorAlwaysShown(cVar8);
	if ( padPos < 0 ) 
		goto label_cond_675;
	this->padPosition = padPos;
	this->formatWidth = (sub0Limit - sub0Start);
	this->pad = 0x0;
label_goto_4eb:
	if ( !((incrementVal > 0x0)) )  
		goto label_cond_683;
	scale = (incrementPos - effectiveDecimalPos);
	//    .local v44, "scale":I
	if ( scale <= 0 )
		goto label_cond_67f;
	cVar9 = scale;
label_goto_4f7:
	this->roundingIncrementICU = android::icu::math::BigDecimal::valueOf(incrementVal, cVar9);
	if ( scale >= 0 )
		goto label_cond_51c;
	this->roundingIncrementICU = this->roundingIncrementICU->movePointRight((0 - scale));
label_cond_51c:
	this->roundingMode = 0x6;
	//    .end local v44    # "scale":I
label_goto_524:
	this->currencySignCount = 0x0;
	//    .end local v16    # "digitTotalCount":I
	//    .end local v18    # "effectiveDecimalPos":I
	//    .end local v55    # "useSigDig":Z
label_goto_528:
	part = ( part + 0x1);
	goto label_goto_a3;
	// 4606    .line 4937
	// 4607    .restart local v8    # "ch":C
label_cond_52c:
	if ( ch == percent )
		goto label_cond_534;
	if ( ch != this->symbols->getPerMill() )
		goto label_cond_55d;
label_cond_534:
	if ( multpl == 0x1 )
		goto label_cond_548;
	this->patternError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Too many percent/permille characters")), pattern);
label_cond_548:
	if ( ch != percent )
		goto label_cond_556;
	multpl = 0x64;
label_goto_54e:
	if ( ch != percent )
		goto label_cond_559;
	//    .local v8, "ch":C
	goto label_goto_30e;
	// 4657    .line 4942
	// 4658    .local v8, "ch":C
label_cond_556:
	multpl = 0x3e8;
	goto label_goto_54e;
	// 4664    .line 4944
label_cond_559:
	//    .local v8, "ch":C
	goto label_goto_30e;
	// 4671    .line 4946
	// 4672    .local v8, "ch":C
label_cond_55d:
	if ( ch != this->symbols->getMinusSign() )
		goto label_cond_565;
	//    .local v8, "ch":C
	goto label_goto_30e;
	// 4684    .line 4950
	// 4685    .local v8, "ch":C
label_cond_565:
	if ( ch != this->symbols->getPadEscape() )
		goto label_cond_30e;
	if ( padPos < 0 ) 
		goto label_cond_577;
	this->patternError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Multiple pad specifiers")), pattern);
label_cond_577:
	if ( ( pos + 0x1) != pattern->length() )
		goto label_cond_58f;
	this->patternError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid pad specifier")), pattern);
label_cond_58f:
	padPos = pos;
	pos = ( pos + 0x1);
	pattern->charAt(pos);
	//    .local v35, "padChar":C
	goto label_goto_fa;
	// 4748    .line 4968
	// 4749    .end local v35    # "padChar":C
label_pswitch_59d:
	if ( ch != 0x27 )
		goto label_cond_5c6;
	if ( ( pos + 0x1) >= pattern->length() )
		goto label_cond_5cb;
	if ( pattern->charAt(( pos + 0x1)) != 0x27 )
		goto label_cond_5cb;
	pos = ( pos + 0x1);
	affix->append(ch);
label_cond_5c6:
label_goto_5c6:
	affix->append(ch);
	goto label_goto_fa;
	// 4801    .line 4973
label_cond_5cb:
	subpart = ( subpart + -0x2);
	goto label_goto_5c6;
	// 4807    .line 5022
	// 4808    .end local v8    # "ch":C
label_cond_5ce:
	if ( decimalPos < 0 ) 
		goto label_cond_5da;
	if ( sigDigitCount > 0 ) 
		goto label_cond_422;
	if ( decimalPos <  digitLeftCount )
		goto label_cond_422;
	if ( decimalPos >  (digitLeftCount + zeroDigitCount) )
		goto label_cond_422;
label_cond_5da:
	if ( !(groupingCount) )  
		goto label_cond_422;
	if ( !(groupingCount2) )  
		goto label_cond_422;
	if ( sigDigitCount <= 0 )
		goto label_cond_5e2;
	if ( zeroDigitCount > 0 ) 
		goto label_cond_422;
label_cond_5e2:
	if ( subpart <= 0x2 )
		goto label_cond_42e;
	goto label_goto_422;
	// 4849    .line 5037
label_cond_5ec:
	if ( ( padPos + 0x2) != sub0Start )
		goto label_cond_5f8;
	0x1;
	goto label_goto_438;
	// 4864    .line 5039
label_cond_5f8:
	if ( padPos != sub0Limit )
		goto label_cond_602;
	0x2;
	goto label_goto_438;
	// 4877    .line 5041
label_cond_602:
	if ( ( padPos + 0x2) != pattern->length() )
		goto label_cond_60e;
	0x3;
	goto label_goto_438;
	// 4892    .line 5044
label_cond_60e:
	this->patternError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal pad position")), pattern);
	goto label_goto_438;
	// 4906    .line 5057
label_cond_61c:
	cVar5 = 0x0;
	goto label_goto_45e;
	// 4912    .line 5066
	// 4913    .restart local v16    # "digitTotalCount":I
label_cond_620:
	//    .restart local v18    # "effectiveDecimalPos":I
	goto label_goto_480;
	// 4920    .line 5067
label_cond_624:
	useSigDig = 0x0;
	//    .restart local v55    # "useSigDig":Z
	goto label_goto_484;
	// 4927    .line 5073
label_cond_628:
	minInt = (effectiveDecimalPos - digitLeftCount);
	//    .local v27, "minInt":I
	this->setMinimumIntegerDigits(minInt);
	if ( !(this->useExponentialNotation) )  
		goto label_cond_65c;
	cVar11 = (digitLeftCount + minInt);
label_goto_63b:
	this->setMaximumIntegerDigits(cVar11);
	if ( decimalPos < 0 ) 
		goto label_cond_65f;
	cVar12 = (digitTotalCount - decimalPos);
label_goto_646:
	this->_setMaximumFractionDigits(cVar12);
	if ( decimalPos < 0 ) 
		goto label_cond_662;
	cVar13 = ((digitLeftCount + zeroDigitCount) - decimalPos);
label_goto_653:
	this->setMinimumFractionDigits(cVar13);
	goto label_goto_49d;
	// 4989    .line 5079
label_cond_65c:
	cVar11 = 0x135;
	goto label_goto_63b;
	// 4995    .line 5081
label_cond_65f:
	cVar12 = 0x0;
	goto label_goto_646;
	// 5001    .line 5083
label_cond_662:
	cVar13 = 0x0;
	goto label_goto_653;
	// 5007    .line 5085
	// 5008    .end local v27    # "minInt":I
label_cond_665:
	cVar6 = 0x0;
	goto label_goto_4a1;
	// 5014    .line 5086
label_cond_669:
	cVar7 = 0x0;
	goto label_goto_4ac;
	// 5020    .line 5088
label_cond_66d:
	groupingCount2 = 0x0;
	goto label_goto_4ba;
	// 5026    .line 5090
label_cond_671:
	cVar8 = 0x0;
	goto label_goto_4ce;
	// 5032    .line 5096
label_cond_675:
	this->formatWidth = 0x0;
	goto label_goto_4eb;
	// 5044    .line 5102
	// 5045    .restart local v44    # "scale":I
label_cond_67f:
	cVar9 = 0x0;
	goto label_goto_4f7;
	// 5051    .line 5108
	// 5052    .end local v44    # "scale":I
label_cond_683:
	cVar21 = 0x0;
	cVar21->checkCast("android::icu::math::BigDecimal");
	this->setRoundingIncrement(cVar21);
	goto label_goto_524;
	// 5066    .line 5116
	// 5067    .end local v16    # "digitTotalCount":I
	// 5068    .end local v18    # "effectiveDecimalPos":I
	// 5069    .end local v55    # "useSigDig":Z
label_cond_690:
	this->negPrefixPattern = prefix->toString();
	this->negSuffixPattern = suffix->toString();
	0x1;
	goto label_goto_528;
	// 5097    .line 5124
	// 5098    .end local v6    # "affix":Ljava/lang/StringBuilder;
	// 5099    .end local v9    # "currencySignCnt":I
	// 5100    .end local v11    # "decimalPos":I
	// 5101    .end local v14    # "digitLeftCount":I
	// 5102    .end local v15    # "digitRightCount":I
	// 5103    .end local v20    # "expSignAlways":Z
	// 5104    .end local v26    # "incrementPos":I
	// 5105    .end local v28    # "incrementVal":J
	// 5106    .end local v31    # "multpl":I
	// 5107    .end local v37    # "padPos":I
	// 5108    .end local v43    # "prefix":Ljava/lang/StringBuilder;
	// 5109    .end local v47    # "sigDigitCount":I
	// 5110    .end local v48    # "start":I
	// 5111    .end local v49    # "sub0Limit":I
	// 5112    .end local v50    # "sub0Start":I
	// 5113    .end local v51    # "sub2Limit":I
	// 5114    .end local v52    # "subpart":I
	// 5115    .end local v53    # "suffix":Ljava/lang/StringBuilder;
	// 5116    .end local v57    # "zeroDigitCount":I
label_cond_6a8:
	if ( pattern->length() )     
		goto label_cond_6e1;
	cVar22 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->posSuffixPattern = cVar22;
	this->posPrefixPattern = cVar22;
	this->setMinimumIntegerDigits(0x0);
	this->setMaximumIntegerDigits(0x135);
	this->setMinimumFractionDigits(0x0);
	this->_setMaximumFractionDigits(0x154);
label_cond_6e1:
	if ( !(0x0) )  
		goto label_cond_707;
	if ( !(this->negPrefixPattern->equals(this->posPrefixPattern)) )  
		goto label_cond_732;
	if ( !(this->negSuffixPattern->equals(this->posSuffixPattern)) )  
		goto label_cond_732;
label_cond_707:
	this->negSuffixPattern = this->posSuffixPattern;
	cVar23 = std::make_shared<java::lang::StringBuilder>();
	this->negPrefixPattern = cVar23->append(0x2d)->append(this->posPrefixPattern)->toString();
label_cond_732:
	this->setLocale(0x0, 0x0);
	this->formatPattern = pattern;
	if ( !(this->currencySignCount) )  
		goto label_cond_7ab;
	theCurrency = this->getCurrency();
	//    .local v54, "theCurrency":Landroid/icu/util/Currency;
	if ( !(theCurrency) )  
		goto label_cond_780;
	this->setRoundingIncrement(theCurrency->getRoundingIncrement(this->currencyUsage));
	d = theCurrency->getDefaultFractionDigits(this->currencyUsage);
	//    .local v10, "d":I
	this->setMinimumFractionDigits(d);
	this->_setMaximumFractionDigits(d);
	//    .end local v10    # "d":I
label_cond_780:
	if ( this->currencySignCount != 0x3 )
		goto label_cond_7ab;
	if ( this->currencyPluralInfo )     
		goto label_cond_7ab;
	cVar24 = std::make_shared<android::icu::text::CurrencyPluralInfo>(this->symbols->getULocale());
	this->currencyPluralInfo = cVar24;
	//    .end local v54    # "theCurrency":Landroid/icu/util/Currency;
label_cond_7ab:
	this->resetActualRounding();
	return;
	// 5404    .line 4742
	// 5405    nop
	// 5407    :pswitch_data_7b0
	// 5408    .packed-switch 0x0
	// 5409        :pswitch_fd
	// 5410        :pswitch_299
	// 5411        :pswitch_299
	// 5412        :pswitch_59d
	// 5413        :pswitch_59d
	// 5414    .end packed-switch

}
// .method private compareAffix(Ljava/lang/String;IZZLjava/lang/String;ZI[Landroid/icu/util/Currency;)I
int android::icu::text::DecimalFormat::compareAffix(std::shared_ptr<java::lang::String> text,int pos,bool isNegative,bool isPrefix,std::shared_ptr<java::lang::String> affixPat,bool complexCurrencyParsing,int type,std::shared_ptr<std::vector<android::icu::util::Currency>> currency)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "pos"    # I
	//    .param p3, "isNegative"    # Z
	//    .param p4, "isPrefix"    # Z
	//    .param p5, "affixPat"    # Ljava/lang/String;
	//    .param p6, "complexCurrencyParsing"    # Z
	//    .param p7, "type"    # I
	//    .param p8, "currency"    # [Landroid/icu/util/Currency;
	if ( currency )     
		goto label_cond_6;
	if ( !(this->currencyChoice) )  
		goto label_cond_11;
label_cond_6:
	return this->compareComplexAffix(affixPat, text, pos, type, currency);
	// 5456    .line 2873
label_cond_11:
	if ( !(this->currencySignCount) )  
		goto label_cond_17;
	if ( complexCurrencyParsing )     
		goto label_cond_6;
label_cond_17:
	if ( !(isPrefix) )  
		goto label_cond_25;
	if ( !(isNegative) )  
		goto label_cond_22;
	cVar0 = this->negativePrefix;
label_goto_1d:
	return android::icu::text::DecimalFormat::compareSimpleAffix(cVar0, text, pos);
label_cond_22:
	cVar0 = this->positivePrefix;
	goto label_goto_1d;
	// 5485    .line 2879
label_cond_25:
	if ( !(isNegative) )  
		goto label_cond_2e;
	cVar2 = this->negativeSuffix;
label_goto_29:
	return android::icu::text::DecimalFormat::compareSimpleAffix(cVar2, text, pos);
label_cond_2e:
	cVar2 = this->positiveSuffix;
	goto label_goto_29;

}
// .method private compareComplexAffix(Ljava/lang/String;Ljava/lang/String;II[Landroid/icu/util/Currency;)I
int android::icu::text::DecimalFormat::compareComplexAffix(std::shared_ptr<java::lang::String> affixPat,std::shared_ptr<java::lang::String> text,int pos,int type,std::shared_ptr<std::vector<android::icu::util::Currency>> currency)
{
	
	int i;
	int c;
	int j;
	int pos;
	std::shared_ptr<java::lang::RuntimeException> cVar3;
	std::shared_ptr<java::lang::String> affix;
	std::shared_ptr<android::icu::util::ULocale> uloc;
	std::shared_ptr<java::text::ParsePosition> ppos;
	std::shared_ptr<java::lang::String> iso;
	
	//    .param p1, "affixPat"    # Ljava/lang/String;
	//    .param p2, "text"    # Ljava/lang/String;
	//    .param p3, "pos"    # I
	//    .param p4, "type"    # I
	//    .param p5, "currency"    # [Landroid/icu/util/Currency;
	//    .local v12, "start":I
	i = 0x0;
	//    .local v5, "i":I
label_cond_3:
label_goto_3:
	if ( i >= affixPat->length() )
		goto label_cond_12b;
	if ( pos < 0 ) 
		goto label_cond_12b;
	i = ( i + 0x1);
	//    .end local v5    # "i":I
	//    .local v6, "i":I
	c = affixPat->charAt(i);
	//    .local v3, "c":C
	if ( c != 0x27 )
		goto label_cond_64;
	i = i;
	//    .end local v6    # "i":I
	//    .restart local v5    # "i":I
label_goto_18:
	j = affixPat->indexOf(0x27, i);
	//    .local v9, "j":I
	if ( j != i )
		goto label_cond_2f;
	pos = android::icu::text::DecimalFormat::match(text, pos, 0x27);
	i = ( j + 0x1);
	goto label_goto_3;
	// 5583    .line 3075
label_cond_2f:
	if ( j <= i )
		goto label_cond_5e;
	pos = android::icu::text::DecimalFormat::match(text, pos, affixPat->substring(i, j));
	i = ( j + 0x1);
	if ( i >= affixPat->length() )
		goto label_cond_3;
	if ( affixPat->charAt(i) != 0x27 )
		goto label_cond_3;
	pos = android::icu::text::DecimalFormat::match(text, pos, 0x27);
	i = ( i + 0x1);
	goto label_goto_18;
	// 5639    .line 3088
label_cond_5e:
	cVar3 = std::make_shared<java::lang::RuntimeException>();
	// throw
	throw cVar3;
	// 5647    .line 3094
	// 5648    .end local v5    # "i":I
	// 5649    .end local v9    # "j":I
	// 5650    .restart local v6    # "i":I
label_cond_64:
	affix = 0x0;
	//    .local v2, "affix":Ljava/lang/String;
	// switch
	{
	auto item = ( c );
	if (item == 0x25) goto label_sswitch_ed;
	if (item == 0x2b) goto label_sswitch_101;
	if (item == 0x2d) goto label_sswitch_10b;
	if (item == 0xa4) goto label_sswitch_74;
	if (item == 0x2030) goto label_sswitch_f7;
	}
	//    .end local v2    # "affix":Ljava/lang/String;
label_goto_68:
	if ( !(affix) )  
		goto label_cond_115;
	pos = android::icu::text::DecimalFormat::match(text, pos, affix);
	i = i;
	//    .end local v6    # "i":I
	//    .restart local v5    # "i":I
	goto label_goto_3;
	// 5679    .line 3103
	// 5680    .end local v5    # "i":I
	// 5681    .restart local v2    # "affix":Ljava/lang/String;
	// 5682    .restart local v6    # "i":I
label_sswitch_74:
	if ( i >= affixPat->length() )
		goto label_cond_d3;
	if ( affixPat->charAt(i) != 0xa4 )
		goto label_cond_d3;
	//    .local v7, "intl":Z
label_goto_85:
	if ( !(intl) )  
		goto label_cond_131;
	i = ( i + 0x1);
	//    .end local v6    # "i":I
	//    .restart local v5    # "i":I
label_goto_89:
	if ( i >= affixPat->length() )
		goto label_cond_d5;
	if ( affixPat->charAt(i) != 0xa4 )
		goto label_cond_d5;
	//    .local v10, "plural":Z
label_goto_9a:
	if ( !(plural) )  
		goto label_cond_9f;
	i = ( i + 0x1);
	0x0;
label_cond_9f:
	uloc = this->getLocale(android::icu::util::ULocale::VALID_LOCALE);
	//    .local v13, "uloc":Landroid/icu/util/ULocale;
	if ( uloc )     
		goto label_cond_b3;
label_cond_b3:
	ppos = std::make_shared<java::text::ParsePosition>(pos);
	//    .local v11, "ppos":Ljava/text/ParsePosition;
	iso = android::icu::util::Currency::parse(uloc, text, type, ppos);
	//    .local v8, "iso":Ljava/lang/String;
	if ( !(iso) )  
		goto label_cond_e9;
	if ( !(currency) )  
		goto label_cond_d7;
	currency[0x0] = android::icu::util::Currency::getInstance(iso);
label_cond_cd:
	pos = ppos->getIndex();
	goto label_goto_3;
	// 5810    .line 3103
	// 5811    .end local v5    # "i":I
	// 5812    .end local v7    # "intl":Z
	// 5813    .end local v8    # "iso":Ljava/lang/String;
	// 5814    .end local v10    # "plural":Z
	// 5815    .end local v11    # "ppos":Ljava/text/ParsePosition;
	// 5816    .end local v13    # "uloc":Landroid/icu/util/ULocale;
	// 5817    .restart local v6    # "i":I
label_cond_d3:
	//    .restart local v7    # "intl":Z
	goto label_goto_85;
	// 5824    .line 3107
	// 5825    .end local v6    # "i":I
	// 5826    .restart local v5    # "i":I
label_cond_d5:
	//    .restart local v10    # "plural":Z
	goto label_goto_9a;
	// 5833    .line 3133
	// 5834    .restart local v8    # "iso":Ljava/lang/String;
	// 5835    .restart local v11    # "ppos":Ljava/text/ParsePosition;
	// 5836    .restart local v13    # "uloc":Landroid/icu/util/ULocale;
label_cond_d7:
	//    .local v4, "effectiveCurr":Landroid/icu/util/Currency;
	if ( !(iso->compareTo(this->getEffectiveCurrency()->getCurrencyCode())) )  
		goto label_cond_cd;
	pos = -0x1;
	goto label_goto_3;
	// 5860    .line 3141
	// 5861    .end local v4    # "effectiveCurr":Landroid/icu/util/Currency;
label_cond_e9:
	pos = -0x1;
	goto label_goto_3;
	// 5867    .line 3145
	// 5868    .end local v5    # "i":I
	// 5869    .end local v7    # "intl":Z
	// 5870    .end local v8    # "iso":Ljava/lang/String;
	// 5871    .end local v10    # "plural":Z
	// 5872    .end local v11    # "ppos":Ljava/text/ParsePosition;
	// 5873    .end local v13    # "uloc":Landroid/icu/util/ULocale;
	// 5874    .restart local v6    # "i":I
label_sswitch_ed:
	//    .local v2, "affix":Ljava/lang/String;
	goto label_goto_68;
	// 5887    .line 3148
	// 5888    .local v2, "affix":Ljava/lang/String;
label_sswitch_f7:
	//    .local v2, "affix":Ljava/lang/String;
	goto label_goto_68;
	// 5901    .line 3151
	// 5902    .local v2, "affix":Ljava/lang/String;
label_sswitch_101:
	//    .local v2, "affix":Ljava/lang/String;
	goto label_goto_68;
	// 5915    .line 3154
	// 5916    .local v2, "affix":Ljava/lang/String;
label_sswitch_10b:
	//    .local v2, "affix":Ljava/lang/String;
	goto label_goto_68;
	// 5929    .line 3166
	// 5930    .end local v2    # "affix":Ljava/lang/String;
label_cond_115:
	pos = android::icu::text::DecimalFormat::match(text, pos, c);
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(c)) )  
		goto label_cond_12e;
	i = android::icu::text::DecimalFormat::skipPatternWhiteSpace(affixPat, i);
	//    .end local v6    # "i":I
	//    .restart local v5    # "i":I
	goto label_goto_3;
	// 5958    .line 3172
	// 5959    .end local v3    # "c":C
label_cond_12b:
	return (pos - pos);
	// 5965    .end local v5    # "i":I
	// 5966    .restart local v3    # "c":C
	// 5967    .restart local v6    # "i":I
label_cond_12e:
	i = i;
	//    .end local v6    # "i":I
	//    .restart local v5    # "i":I
	goto label_goto_3;
	// 5975    .end local v5    # "i":I
	// 5976    .local v2, "affix":Ljava/lang/String;
	// 5977    .restart local v6    # "i":I
	// 5978    .restart local v7    # "intl":Z
label_cond_131:
	i = i;
	//    .end local v6    # "i":I
	//    .restart local v5    # "i":I
	goto label_goto_89;
	// 5986    .line 3096
	// 5987    :sswitch_data_134
	// 5988    .sparse-switch
	// 5989        0x25 -> :sswitch_ed
	// 5990        0x2b -> :sswitch_101
	// 5991        0x2d -> :sswitch_10b
	// 5992        0xa4 -> :sswitch_74
	// 5993        0x2030 -> :sswitch_f7
	// 5994    .end sparse-switch

}
// .method private static compareSimpleAffix(Ljava/lang/String;Ljava/lang/String;I)I
int android::icu::text::DecimalFormat::compareSimpleAffix(std::shared_ptr<java::lang::String> affix,std::shared_ptr<java::lang::String> input,int pos)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> trimmedAffix;
	int i;
	int c;
	int len;
	int ic;
	int pos;
	int match;
	
	//    .param p0, "affix"    # Ljava/lang/String;
	//    .param p1, "input"    # Ljava/lang/String;
	//    .param p2, "pos"    # I
	cVar0 = -0x1;
	//    .local v7, "start":I
	if ( affix->length() <= 0x1 )
		goto label_cond_48;
	trimmedAffix = android::icu::text::DecimalFormat::trimMarksFromAffix(affix);
	//    .local v8, "trimmedAffix":Ljava/lang/String;
label_goto_d:
	i = 0x0;
	//    .local v1, "i":I
label_cond_e:
label_goto_e:
	if ( i >= trimmedAffix->length() )
		goto label_cond_8a;
	c = android::icu::text::UTF16::charAt(trimmedAffix, i);
	//    .local v0, "c":I
	len = android::icu::text::UTF16::getCharCount(c);
	//    .local v3, "len":I
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(c)) )  
		goto label_cond_67;
	0x0;
	//    .local v4, "literalMatch":Z
label_cond_23:
label_goto_23:
	if ( pos >= input->length() )
		goto label_cond_38;
	ic = android::icu::text::UTF16::charAt(input, pos);
	//    .local v2, "ic":I
	if ( ic != c )
		goto label_cond_59;
	i = (i +  len);
	pos = (pos +  len);
	if ( i != trimmedAffix->length() )
		goto label_cond_4a;
	//    .end local v2    # "ic":I
label_cond_38:
label_goto_38:
	i = android::icu::text::DecimalFormat::skipPatternWhiteSpace(trimmedAffix, i);
	//    .local v6, "s":I
	pos = android::icu::text::DecimalFormat::skipUWhiteSpace(input, pos);
	if ( pos != pos )
		goto label_cond_62;
	if ( !(( 0x1 ^ 0x1)) )  
		goto label_cond_62;
	return cVar0;
	// 6121    .line 2935
	// 6122    .end local v0    # "c":I
	// 6123    .end local v1    # "i":I
	// 6124    .end local v3    # "len":I
	// 6125    .end local v4    # "literalMatch":Z
	// 6126    .end local v6    # "s":I
	// 6127    .end local v8    # "trimmedAffix":Ljava/lang/String;
label_cond_48:
	//    .restart local v8    # "trimmedAffix":Ljava/lang/String;
	goto label_goto_d;
	// 6134    .line 2954
	// 6135    .restart local v0    # "c":I
	// 6136    .restart local v1    # "i":I
	// 6137    .restart local v2    # "ic":I
	// 6138    .restart local v3    # "len":I
	// 6139    .restart local v4    # "literalMatch":Z
label_cond_4a:
	c = android::icu::text::UTF16::charAt(trimmedAffix, i);
	len = android::icu::text::UTF16::getCharCount(c);
	if ( android::icu::impl::PatternProps::isWhiteSpace(c) )     
		goto label_cond_23;
	goto label_goto_38;
	// 6159    .line 2959
label_cond_59:
	if ( !(android::icu::text::DecimalFormat::isBidiMark(ic)) )  
		goto label_cond_38;
	pos = ( pos + 0x1);
	goto label_goto_23;
	// 6172    .line 2979
	// 6173    .end local v2    # "ic":I
	// 6174    .restart local v6    # "s":I
label_cond_62:
	i = android::icu::text::DecimalFormat::skipUWhiteSpace(trimmedAffix, i);
	goto label_goto_e;
	// 6182    .line 2981
	// 6183    .end local v4    # "literalMatch":Z
	// 6184    .end local v6    # "s":I
label_cond_67:
	match = 0x0;
	//    .local v5, "match":Z
label_goto_68:
	if ( pos >= input->length() )
		goto label_cond_87;
	ic = android::icu::text::UTF16::charAt(input, pos);
	//    .restart local v2    # "ic":I
	if ( match )     
		goto label_cond_7e;
	if ( !(android::icu::text::DecimalFormat::equalWithSignCompatibility(ic, c)) )  
		goto label_cond_7e;
	i = (i +  len);
	pos = (pos +  len);
	match = 0x1;
	goto label_goto_68;
	// 6223    .line 2988
label_cond_7e:
	if ( !(android::icu::text::DecimalFormat::isBidiMark(ic)) )  
		goto label_cond_87;
	pos = ( pos + 0x1);
	goto label_goto_68;
	// 6236    .line 2994
	// 6237    .end local v2    # "ic":I
label_cond_87:
	if ( match )     
		goto label_cond_e;
	return cVar0;
	// 6244    .line 2999
	// 6245    .end local v0    # "c":I
	// 6246    .end local v3    # "len":I
	// 6247    .end local v5    # "match":Z
label_cond_8a:
	return (pos - pos);

}
// .method private create(Ljava/lang/String;Landroid/icu/text/DecimalFormatSymbols;Landroid/icu/text/CurrencyPluralInfo;I)V
void android::icu::text::DecimalFormat::create(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> inputSymbols,std::shared_ptr<android::icu::text::CurrencyPluralInfo> info,int inputStyle)
{
	
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "inputSymbols"    # Landroid/icu/text/DecimalFormatSymbols;
	//    .param p3, "info"    # Landroid/icu/text/CurrencyPluralInfo;
	//    .param p4, "inputStyle"    # I
	if ( inputStyle == 0x6 )
		goto label_cond_9;
	this->createFromPatternAndSymbols(pattern, inputSymbols);
label_goto_6:
	this->style = inputStyle;
	return;
	// 6277    .line 752
label_cond_9:
	cVar0 = inputSymbols->clone();
	cVar0->checkCast("android::icu::text::DecimalFormatSymbols");
	this->symbols = cVar0;
	this->currencyPluralInfo = info;
	//    .local v0, "currencyPluralPatternForOther":Ljava/lang/String;
	this->applyPatternWithoutExpandAffix(this->currencyPluralInfo->getCurrencyPluralPattern(std::make_shared<java::lang::String>(std::make_shared<char[]>("other"))), 0x0);
	this->setCurrencyForSymbols();
	goto label_goto_6;

}
// .method private createFromPatternAndSymbols(Ljava/lang/String;Landroid/icu/text/DecimalFormatSymbols;)V
void android::icu::text::DecimalFormat::createFromPatternAndSymbols(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> inputSymbols)
{
	
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar0;
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> cVar1;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "inputSymbols"    # Landroid/icu/text/DecimalFormatSymbols;
	cVar0 = inputSymbols->clone();
	cVar0->checkCast("android::icu::text::DecimalFormatSymbols");
	this->symbols = cVar0;
	if ( pattern->indexOf(0xa4) < 0 ) 
		goto label_cond_14;
	this->setCurrencyForSymbols();
label_cond_14:
	this->applyPatternWithoutExpandAffix(pattern, 0x0);
	if ( this->currencySignCount != 0x3 )
		goto label_cond_2a;
	cVar1 = std::make_shared<android::icu::text::CurrencyPluralInfo>(this->symbols->getULocale());
	this->currencyPluralInfo = cVar1;
label_goto_29:
	return;
	// 6368    .line 708
label_cond_2a:
	this->expandAffixAdjustWidth(0x0);
	goto label_goto_29;

}
// .method private static equalWithSignCompatibility(II)Z
bool android::icu::text::DecimalFormat::equalWithSignCompatibility(int lhs,int rhs)
{
	
	bool cVar0;
	
	//    .param p0, "lhs"    # I
	//    .param p1, "rhs"    # I
	if ( lhs == rhs )
		goto label_cond_21;
	if ( !(android::icu::text::DecimalFormat::minusSigns->contains(lhs)) )  
		goto label_cond_12;
	if ( android::icu::text::DecimalFormat::minusSigns->contains(rhs) )     
		goto label_cond_21;
label_cond_12:
	if ( !(android::icu::text::DecimalFormat::plusSigns->contains(lhs)) )  
		goto label_cond_23;
	cVar0 = android::icu::text::DecimalFormat::plusSigns->contains(rhs);
label_goto_20:
	return cVar0;
label_cond_21:
	cVar0 = 0x1;
	goto label_goto_20;
	// 6429    .line 3005
label_cond_23:
	cVar0 = 0x0;
	goto label_goto_20;

}
// .method private equals(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::text::DecimalFormat::equals(std::shared_ptr<java::lang::String> pat1,std::shared_ptr<java::lang::String> pat2)
{
	
	bool cVar0;
	
	//    .param p1, "pat1"    # Ljava/lang/String;
	//    .param p2, "pat2"    # Ljava/lang/String;
	cVar0 = 0x1;
	if ( !(pat1) )  
		goto label_cond_6;
	if ( pat2 )     
		goto label_cond_d;
label_cond_6:
	if ( pat1 )     
		goto label_cond_b;
	if ( pat2 )     
		goto label_cond_b;
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;
	// 6465    .line 3972
label_cond_d:
	if ( !(pat1->equals(pat2)) )  
		goto label_cond_14;
	return cVar0;
	// 6476    .line 3975
label_cond_14:
	return this->unquote(pat1)->equals(this->unquote(pat2));

}
// .method private expandAffix(Ljava/lang/String;Ljava/lang/String;Ljava/lang/StringBuffer;)V
void android::icu::text::DecimalFormat::expandAffix(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> pluralCount,std::shared_ptr<java::lang::StringBuffer> buffer)
{
	
	int i;
	char c;
	int j;
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	int intl;
	std::shared_ptr<android::icu::util::Currency> currency;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "pluralCount"    # Ljava/lang/String;
	//    .param p3, "buffer"    # Ljava/lang/StringBuffer;
	buffer->setLength(0x0);
	i = 0x0;
	//    .local v2, "i":I
label_cond_5:
label_goto_5:
	if ( i >= pattern->length() )
		goto label_cond_e1;
	i = ( i + 0x1);
	//    .end local v2    # "i":I
	//    .local v3, "i":I
	c = pattern->charAt(i);
	//    .local v0, "c":C
	if ( c != 0x27 )
		goto label_cond_4d;
	i = i;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
label_goto_16:
	j = pattern->indexOf(0x27, i);
	//    .local v5, "j":I
	if ( j != i )
		goto label_cond_26;
	buffer->append(0x27);
	i = ( j + 0x1);
	goto label_goto_5;
	// 6559    .line 4129
label_cond_26:
	if ( j <= i )
		goto label_cond_47;
	buffer->append(pattern->substring(i, j));
	i = ( j + 0x1);
	if ( i >= pattern->length() )
		goto label_cond_5;
	if ( pattern->charAt(i) != 0x27 )
		goto label_cond_5;
	buffer->append(0x27);
	i = ( i + 0x1);
	goto label_goto_16;
	// 6599    .line 4142
label_cond_47:
	cVar0 = std::make_shared<java::lang::RuntimeException>();
	// throw
	throw cVar0;
	// 6607    .line 4148
	// 6608    .end local v2    # "i":I
	// 6609    .end local v5    # "j":I
	// 6610    .restart local v3    # "i":I
label_cond_4d:
	// switch
	{
	auto item = ( c );
	if (item == 0x25) goto label_sswitch_bd;
	if (item == 0x2d) goto label_sswitch_d5;
	if (item == 0xa4) goto label_sswitch_55;
	if (item == 0x2030) goto label_sswitch_c9;
	}
	buffer->append(c);
	i = i;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_5;
	// 6624    .line 4153
	// 6625    .end local v2    # "i":I
	// 6626    .restart local v3    # "i":I
label_sswitch_55:
	if ( i >= pattern->length() )
		goto label_cond_97;
	if ( pattern->charAt(i) != 0xa4 )
		goto label_cond_97;
	intl = 0x1;
	//    .local v4, "intl":Z
label_goto_64:
	0x0;
	//    .local v6, "plural":Z
	if ( !(intl) )  
		goto label_cond_e2;
	i = ( i + 0x1);
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	if ( i >= pattern->length() )
		goto label_cond_7b;
	if ( pattern->charAt(i) != 0xa4 )
		goto label_cond_7b;
	intl = 0x0;
	i = ( i + 0x1);
label_cond_7b:
label_goto_7b:
	0x0;
	//    .local v7, "s":Ljava/lang/String;
	currency = this->getCurrency();
	//    .local v1, "currency":Landroid/icu/util/Currency;
	if ( !(currency) )  
		goto label_cond_ad;
	if ( !(0x1) )  
		goto label_cond_99;
	if ( !(pluralCount) )  
		goto label_cond_99;
	//    .local v7, "s":Ljava/lang/String;
label_goto_92:
	buffer->append(s);
	goto label_goto_5;
	// 6726    .line 4153
	// 6727    .end local v1    # "currency":Landroid/icu/util/Currency;
	// 6728    .end local v2    # "i":I
	// 6729    .end local v4    # "intl":Z
	// 6730    .end local v6    # "plural":Z
	// 6731    .end local v7    # "s":Ljava/lang/String;
	// 6732    .restart local v3    # "i":I
label_cond_97:
	intl = 0x0;
	//    .restart local v4    # "intl":Z
	goto label_goto_64;
	// 6739    .line 4172
	// 6740    .end local v3    # "i":I
	// 6741    .restart local v1    # "currency":Landroid/icu/util/Currency;
	// 6742    .restart local v2    # "i":I
	// 6743    .restart local v6    # "plural":Z
	// 6744    .local v7, "s":Ljava/lang/String;
label_cond_99:
	if ( intl )     
		goto label_cond_a8;
	//    .local v7, "s":Ljava/lang/String;
	goto label_goto_92;
	// 6766    .line 4175
	// 6767    .local v7, "s":Ljava/lang/String;
label_cond_a8:
	//    .local v7, "s":Ljava/lang/String;
	goto label_goto_92;
	// 6776    .line 4178
	// 6777    .local v7, "s":Ljava/lang/String;
label_cond_ad:
	if ( !(intl) )  
		goto label_cond_b6;
	//    .local v7, "s":Ljava/lang/String;
	goto label_goto_92;
	// 6790    .line 4179
	// 6791    .local v7, "s":Ljava/lang/String;
label_cond_b6:
	//    .local v7, "s":Ljava/lang/String;
	goto label_goto_92;
	// 6802    .line 4185
	// 6803    .end local v1    # "currency":Landroid/icu/util/Currency;
	// 6804    .end local v2    # "i":I
	// 6805    .end local v4    # "intl":Z
	// 6806    .end local v6    # "plural":Z
	// 6807    .end local v7    # "s":Ljava/lang/String;
	// 6808    .restart local v3    # "i":I
label_sswitch_bd:
	buffer->append(this->symbols->getPercentString());
	i = i;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_5;
	// 6825    .line 4188
	// 6826    .end local v2    # "i":I
	// 6827    .restart local v3    # "i":I
label_sswitch_c9:
	buffer->append(this->symbols->getPerMillString());
	i = i;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_5;
	// 6844    .line 4191
	// 6845    .end local v2    # "i":I
	// 6846    .restart local v3    # "i":I
label_sswitch_d5:
	buffer->append(this->symbols->getMinusSignString());
	i = i;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_5;
	// 6863    .line 4198
	// 6864    .end local v0    # "c":C
label_cond_e1:
	return;
	// 6868    .end local v2    # "i":I
	// 6869    .restart local v0    # "c":C
	// 6870    .restart local v3    # "i":I
	// 6871    .restart local v4    # "intl":Z
	// 6872    .restart local v6    # "plural":Z
label_cond_e2:
	i = i;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_7b;
	// 6880    .line 4148
	// 6881    :sswitch_data_e4
	// 6882    .sparse-switch
	// 6883        0x25 -> :sswitch_bd
	// 6884        0x2d -> :sswitch_d5
	// 6885        0xa4 -> :sswitch_55
	// 6886        0x2030 -> :sswitch_c9
	// 6887    .end sparse-switch

}
// .method private expandAffixAdjustWidth(Ljava/lang/String;)V
void android::icu::text::DecimalFormat::expandAffixAdjustWidth(std::shared_ptr<java::lang::String> pluralCount)
{
	
	//    .param p1, "pluralCount"    # Ljava/lang/String;
	this->expandAffixes(pluralCount);
	if ( this->formatWidth <= 0 )
		goto label_cond_19;
	this->formatWidth = (this->formatWidth +  (this->positivePrefix->length() +  this->positiveSuffix->length()));
label_cond_19:
	return;

}
// .method private expandAffixes(Ljava/lang/String;)V
void android::icu::text::DecimalFormat::expandAffixes(std::shared_ptr<java::lang::String> pluralCount)
{
	
	std::shared_ptr<java::lang::StringBuffer> buffer;
	
	//    .param p1, "pluralCount"    # Ljava/lang/String;
	this->currencyChoice = 0x0;
	buffer = std::make_shared<java::lang::StringBuffer>();
	//    .local v0, "buffer":Ljava/lang/StringBuffer;
	if ( !(this->posPrefixPattern) )  
		goto label_cond_17;
	this->expandAffix(this->posPrefixPattern, pluralCount, buffer);
	this->positivePrefix = buffer->toString();
label_cond_17:
	if ( !(this->posSuffixPattern) )  
		goto label_cond_26;
	this->expandAffix(this->posSuffixPattern, pluralCount, buffer);
	this->positiveSuffix = buffer->toString();
label_cond_26:
	if ( !(this->negPrefixPattern) )  
		goto label_cond_35;
	this->expandAffix(this->negPrefixPattern, pluralCount, buffer);
	this->negativePrefix = buffer->toString();
label_cond_35:
	if ( !(this->negSuffixPattern) )  
		goto label_cond_44;
	this->expandAffix(this->negSuffixPattern, pluralCount, buffer);
	this->negativeSuffix = buffer->toString();
label_cond_44:
	return;

}
// .method private format(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;Z)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DecimalFormat::format(double number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool parseAttr)
{
	
	double cVar0;
	bool isNegative;
	double cVar2;
	int precision;
	int log10RoundingIncr;
	double roundingInc;
	std::shared_ptr<android::icu::text::DigitList> cVar3;
	bool cVar4;
	
	//    .param p1, "number"    # D
	//    .param p3, "result"    # Ljava/lang/StringBuffer;
	//    .param p4, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p5, "parseAttr"    # Z
	fieldPosition->setBeginIndex(0x0);
	fieldPosition->setEndIndex(0x0);
	if ( !(java::lang::Double::isNaN(number)) )  
		goto label_cond_8b;
	if ( fieldPosition->getField() )     
		goto label_cond_67;
	fieldPosition->setBeginIndex(result->length());
label_cond_21:
label_goto_21:
	result->append(this->symbols->getNaN());
	if ( !(parseAttr) )  
		goto label_cond_4c;
	this->addAttribute(android::icu::text::NumberFormat_S_Field::INTEGER, (result->length() -  this->symbols->getNaN()->length()), result->length());
label_cond_4c:
	if ( fieldPosition->getField() )     
		goto label_cond_79;
	fieldPosition->setEndIndex(result->length());
label_cond_5b:
label_goto_5b:
	this->addPadding(result, fieldPosition, 0x0, 0x0);
	return result;
	// 7150    .line 838
label_cond_67:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::INTEGER )
		goto label_cond_21;
	fieldPosition->setBeginIndex(result->length());
	goto label_goto_21;
	// 7171    .line 854
label_cond_79:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::INTEGER )
		goto label_cond_5b;
	fieldPosition->setEndIndex(result->length());
	goto label_goto_5b;
	// 7192    .line 864
label_cond_8b:
	cVar0 = this->multiply(number);
	isNegative = this->isNegative(cVar0);
	//    .local v8, "isNegative":Z
	cVar2 = this->round(cVar0);
	if ( !(java::lang::Double::isInfinite(cVar2)) )  
		goto label_cond_132;
	//    .local v27, "prefixLen":I
	if ( fieldPosition->getField() )     
		goto label_cond_10e;
	fieldPosition->setBeginIndex(result->length());
label_cond_b9:
label_goto_b9:
	result->append(this->symbols->getInfinity());
	if ( !(parseAttr) )  
		goto label_cond_e4;
	this->addAttribute(android::icu::text::NumberFormat_S_Field::INTEGER, (result->length() -  this->symbols->getInfinity()->length()), result->length());
label_cond_e4:
	if ( fieldPosition->getField() )     
		goto label_cond_120;
	fieldPosition->setEndIndex(result->length());
label_cond_f3:
label_goto_f3:
	//    .local v28, "suffixLen":I
	this->addPadding(result, fieldPosition, this->appendAffix(result, isNegative, 0x1, fieldPosition, parseAttr), this->appendAffix(result, isNegative, 0x0, fieldPosition, parseAttr));
	return result;
	// 7348    .line 873
	// 7349    .end local v28    # "suffixLen":I
label_cond_10e:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::INTEGER )
		goto label_cond_b9;
	fieldPosition->setBeginIndex(result->length());
	goto label_goto_b9;
	// 7370    .line 885
label_cond_120:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::INTEGER )
		goto label_cond_f3;
	fieldPosition->setEndIndex(result->length());
	goto label_goto_f3;
	// 7391    .line 895
	// 7392    .end local v27    # "prefixLen":I
label_cond_132:
	precision = this->precision(0x0);
	//    .local v26, "precision":I
	if ( !(this->useExponentialNotation) )  
		goto label_cond_180;
	if ( precision <= 0 )
		goto label_cond_180;
	if ( !((cVar2 < 0x0)) )  
		goto label_cond_180;
	if ( this->roundingMode == 0x6 )
		goto label_cond_180;
	log10RoundingIncr = (( precision - 0x1) + (int)(java::lang::Math::floor(java::lang::Math::log10(java::lang::Math::abs(cVar2)))));
	//    .local v25, "log10RoundingIncr":I
	//    .local v14, "roundingIncReciprocal":D
	roundingInc = 0x0;
	//    .local v12, "roundingInc":D
	if ( log10RoundingIncr >= 0 )
		goto label_cond_1b0;
label_goto_172:
	cVar2 = android::icu::text::DecimalFormat::round(cVar2, roundingInc, 0x0, this->roundingMode, isNegative);
	//    .end local v12    # "roundingInc":D
	//    .end local v14    # "roundingIncReciprocal":D
	//    .end local v25    # "log10RoundingIncr":I
label_cond_180:
	cVar3 = this->digitList;
	cVar3->monitor_enter();
	try {
	//label_try_start_185:
	if ( this->useExponentialNotation )     
		goto label_cond_1bd;
	cVar4 = ( this->areSignificantDigitsUsed() ^ 0x1);
label_goto_195:
	this->digitList->set(cVar2, precision, cVar4);
	//label_try_end_1ad:
	}
	catch (...){
		goto label_catchall_1bf;
	}
	//    .catchall {:try_start_185 .. :try_end_1ad} :catchall_1bf
	cVar3->monitor_exit();
	return this->subformat(cVar2, result, fieldPosition, isNegative, 0x0, parseAttr);
	// 7551    .line 917
	// 7552    .restart local v12    # "roundingInc":D
	// 7553    .restart local v14    # "roundingIncReciprocal":D
	// 7554    .restart local v25    # "log10RoundingIncr":I
label_cond_1b0:
	roundingInc = android::icu::math::BigDecimal::ONE->movePointRight(log10RoundingIncr)->doubleValue();
	goto label_goto_172;
	// 7570    .line 926
	// 7571    .end local v12    # "roundingInc":D
	// 7572    .end local v14    # "roundingIncReciprocal":D
	// 7573    .end local v25    # "log10RoundingIncr":I
label_cond_1bd:
	cVar4 = 0x0;
	goto label_goto_195;
	// 7579    .line 925
label_catchall_1bf:
	// move-exception
	
	cVar3->monitor_exit();
	// throw
	throw;

}
// .method private format(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;Z)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DecimalFormat::format(long long cVar1,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool parseAttr)
{
	
	bool isNegative;
	long long cVar1;
	int tooBig;
	long long cVar2;
	std::shared_ptr<android::icu::text::DigitList> cVar3;
	std::shared_ptr<java::lang::ArithmeticException> cVar4;
	
	//    .param p1, "number"    # J
	//    .param p3, "result"    # Ljava/lang/StringBuffer;
	//    .param p4, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p5, "parseAttr"    # Z
	fieldPosition->setBeginIndex(0x0);
	fieldPosition->setEndIndex(0x0);
	if ( !(this->actualRoundingIncrementICU) )  
		goto label_cond_21;
	return this->format(android::icu::math::BigDecimal::valueOf(cVar1), result, fieldPosition);
	// 7634    .line 1094
label_cond_21:
	if ( (cVar1 > 0x0) >= 0 )
		goto label_cond_65;
	isNegative = 0x1;
	//    .local v10, "isNegative":Z
label_goto_28:
	if ( !(isNegative) )  
		goto label_cond_2f;
	cVar1 = (0 - cVar1);
label_cond_2f:
	if ( this->multiplier == 0x1 )
		goto label_cond_7d;
	tooBig = 0x0;
	//    .local v4, "tooBig":Z
	if ( (cVar1 > 0x0) >= 0 )
		goto label_cond_69;
	//    .local v14, "cutoff":J
	if ( (cVar1 > (-0x8000000000000000L / (long long)(this->multiplier))) > 0 ) 
		goto label_cond_67;
	tooBig = 0x1;
label_goto_4b:
	if ( !(tooBig) )  
		goto label_cond_7d;
	if ( !(isNegative) )  
		goto label_cond_54;
	cVar1 = (0 - cVar1);
	//    .end local p1    # "number":J
label_cond_54:
	return this->format(java::math::BigInteger::valueOf(cVar1), result, fieldPosition, parseAttr);
	// 7729    .line 1094
	// 7730    .end local v4    # "tooBig":Z
	// 7731    .end local v10    # "isNegative":Z
	// 7732    .end local v14    # "cutoff":J
	// 7733    .restart local p1    # "number":J
label_cond_65:
	isNegative = 0x0;
	//    .restart local v10    # "isNegative":Z
	goto label_goto_28;
	// 7740    .line 1107
	// 7741    .restart local v4    # "tooBig":Z
	// 7742    .restart local v14    # "cutoff":J
label_cond_67:
	tooBig = 0x0;
	goto label_goto_4b;
	// 7748    .line 1109
	// 7749    .end local v14    # "cutoff":J
label_cond_69:
	//    .restart local v14    # "cutoff":J
	if ( (cVar1 > (0x7fffffffffffffffL / (long long)(this->multiplier))) <= 0 )
		goto label_cond_7b;
	tooBig = 0x1;
	goto label_goto_4b;
label_cond_7b:
	tooBig = 0x0;
	goto label_goto_4b;
	// 7776    .line 1121
	// 7777    .end local v4    # "tooBig":Z
	// 7778    .end local v14    # "cutoff":J
label_cond_7d:
	cVar2 = (cVar1 * (long long)(this->multiplier));
	cVar3 = this->digitList;
	cVar3->monitor_enter();
	try {
	//label_try_start_89:
	this->digitList->set(cVar2, this->precision(0x1));
	if ( !(this->digitList->wasRounded()) )  
		goto label_cond_b6;
	if ( this->roundingMode != 0x7 )
		goto label_cond_b6;
	cVar4 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rounding necessary")));
	// throw
	throw cVar4;
	// 7840    :try_end_b3
	// 7841    .catchall {:try_start_89 .. :try_end_b3} :catchall_b3
	// 7843    .line 1122
label_catchall_b3:
	// move-exception
	
	cVar3->monitor_exit();
	// throw
	throw;
	// 7851    .line 1128
label_cond_b6:
	try {
	//label_try_start_c2:
	//label_try_end_c5:
	}
	catch (...){
		goto label_catchall_b3;
	}
	//    .catchall {:try_start_c2 .. :try_end_c5} :catchall_b3
	cVar3->monitor_exit();
	return this->subformat((double)(cVar2), result, fieldPosition, isNegative, 0x1, parseAttr);

}
// .method private format(Ljava/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;Z)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DecimalFormat::format(std::shared_ptr<java::math::BigDecimal> cVar3,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool parseAttr)
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<java::math::BigDecimal> cVar3;
	std::shared_ptr<android::icu::text::DigitList> cVar4;
	bool cVar5;
	std::shared_ptr<java::lang::ArithmeticException> cVar6;
	
	//    .param p1, "number"    # Ljava/math/BigDecimal;
	//    .param p2, "result"    # Ljava/lang/StringBuffer;
	//    .param p3, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p4, "parseAttr"    # Z
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this->multiplier == cVar0 )
		goto label_cond_11;
	cVar3 = cVar3->multiply(java::math::BigDecimal::valueOf((long long)(this->multiplier)));
label_cond_11:
	if ( !(this->actualRoundingIncrement) )  
		goto label_cond_23;
	cVar3 = cVar3->divide(this->actualRoundingIncrement, cVar1, this->roundingMode)->multiply(this->actualRoundingIncrement);
label_cond_23:
	cVar4 = this->digitList;
	cVar4->monitor_enter();
	try {
	//label_try_start_26:
	if ( this->useExponentialNotation )     
		goto label_cond_53;
	cVar5 = ( this->areSignificantDigitsUsed() ^ 0x1);
label_goto_37:
	this->digitList->set(cVar3, this->precision(0x0), cVar5);
	if ( !(this->digitList->wasRounded()) )  
		goto label_cond_55;
	if ( this->roundingMode != 0x7 )
		goto label_cond_55;
	cVar6 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rounding necessary")));
	// throw
	throw cVar6;
	// 7984    :try_end_50
	// 7985    .catchall {:try_start_26 .. :try_end_50} :catchall_50
	// 7987    .line 1186
label_catchall_50:
	// move-exception
	
	cVar4->monitor_exit();
	// throw
	throw;
label_cond_53:
	cVar5 = cVar1;
	goto label_goto_37;
	// 8001    .line 1193
label_cond_55:
	try {
	//label_try_start_55:
	if ( cVar3->signum() >= 0 )
		goto label_cond_6a;
label_goto_5f:
	//label_try_end_67:
	}
	catch (...){
		goto label_catchall_50;
	}
	//    .catchall {:try_start_55 .. :try_end_67} :catchall_50
	cVar4->monitor_exit();
	return this->subformat(cVar3->doubleValue(), result, fieldPosition, cVar0, 0x0, parseAttr);
label_cond_6a:
	cVar0 = cVar1;
	goto label_goto_5f;

}
// .method private format(Ljava/math/BigInteger;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;Z)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DecimalFormat::format(std::shared_ptr<java::math::BigInteger> cVar2,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool parseAttr)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::math::BigDecimal> cVar1;
	std::shared_ptr<java::math::BigInteger> cVar2;
	std::shared_ptr<android::icu::text::DigitList> cVar3;
	std::shared_ptr<java::lang::ArithmeticException> cVar4;
	
	//    .param p1, "number"    # Ljava/math/BigInteger;
	//    .param p2, "result"    # Ljava/lang/StringBuffer;
	//    .param p3, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p4, "parseAttr"    # Z
	cVar0 = 0x1;
	if ( !(this->actualRoundingIncrementICU) )  
		goto label_cond_10;
	cVar1 = std::make_shared<android::icu::math::BigDecimal>(cVar2);
	return this->format(cVar1, result, fieldPosition);
	// 8071    .line 1149
label_cond_10:
	if ( this->multiplier == cVar0 )
		goto label_cond_1f;
	cVar2 = cVar2->multiply(java::math::BigInteger::valueOf((long long)(this->multiplier)));
label_cond_1f:
	cVar3 = this->digitList;
	cVar3->monitor_enter();
	try {
	//label_try_start_22:
	this->digitList->set(cVar2, this->precision(0x1));
	if ( !(this->digitList->wasRounded()) )  
		goto label_cond_45;
	if ( this->roundingMode != 0x7 )
		goto label_cond_45;
	cVar4 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rounding necessary")));
	// throw
	throw cVar4;
	// 8131    :try_end_42
	// 8132    .catchall {:try_start_22 .. :try_end_42} :catchall_42
	// 8134    .line 1155
label_catchall_42:
	// move-exception
	
	cVar3->monitor_exit();
	// throw
	throw;
	// 8142    .line 1161
label_cond_45:
	try {
	//label_try_start_45:
	if ( cVar2->signum() >= 0 )
		goto label_cond_5a;
label_goto_4f:
	//label_try_end_57:
	}
	catch (...){
		goto label_catchall_42;
	}
	//    .catchall {:try_start_45 .. :try_end_57} :catchall_42
	cVar3->monitor_exit();
	return this->subformat(cVar2->intValue(), result, fieldPosition, cVar0, 0x1, parseAttr);
label_cond_5a:
	cVar0 = 0x0;
	goto label_goto_4f;

}
// .method private formatAffix2Attribute(ZLandroid/icu/text/NumberFormat$Field;Ljava/lang/StringBuffer;II)V
void android::icu::text::DecimalFormat::formatAffix2Attribute(bool isPrefix,std::shared_ptr<android::icu::text::NumberFormat_S_Field> fieldType,std::shared_ptr<java::lang::StringBuffer> buf,int offset,int symbolSize)
{
	
	int begin;
	
	//    .param p1, "isPrefix"    # Z
	//    .param p2, "fieldType"    # Landroid/icu/text/NumberFormat$Field;
	//    .param p3, "buf"    # Ljava/lang/StringBuffer;
	//    .param p4, "offset"    # I
	//    .param p5, "symbolSize"    # I
	begin = offset;
	//    .local v0, "begin":I
	if ( isPrefix )     
		goto label_cond_9;
	begin = (offset + buf->length());
label_cond_9:
	this->addAttribute(fieldType, begin, (begin + symbolSize));
	return;

}
// .method private getEquivalentDecimals(Ljava/lang/String;Z)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::DecimalFormat::getEquivalentDecimals(std::shared_ptr<java::lang::String> decimal,bool strictParse)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> equivSet;
	
	//    .param p1, "decimal"    # Ljava/lang/String;
	//    .param p2, "strictParse"    # Z
	equivSet = android::icu::text::UnicodeSet::EMPTY;
	//    .local v0, "equivSet":Landroid/icu/text/UnicodeSet;
	if ( !(strictParse) )  
		goto label_cond_1a;
	if ( !(android::icu::text::DecimalFormat::strictDotEquivalents->contains(decimal)) )  
		goto label_cond_f;
	equivSet = android::icu::text::DecimalFormat::strictDotEquivalents;
label_cond_e:
label_goto_e:
	return equivSet;
	// 8245    .line 2829
label_cond_f:
	if ( !(android::icu::text::DecimalFormat::strictCommaEquivalents->contains(decimal)) )  
		goto label_cond_e;
	equivSet = android::icu::text::DecimalFormat::strictCommaEquivalents;
	goto label_goto_e;
	// 8260    .line 2833
label_cond_1a:
	if ( !(android::icu::text::DecimalFormat::dotEquivalents->contains(decimal)) )  
		goto label_cond_25;
	equivSet = android::icu::text::DecimalFormat::dotEquivalents;
	goto label_goto_e;
	// 8275    .line 2835
label_cond_25:
	if ( !(android::icu::text::DecimalFormat::commaEquivalents->contains(decimal)) )  
		goto label_cond_e;
	equivSet = android::icu::text::DecimalFormat::commaEquivalents;
	goto label_goto_e;

}
// .method private static isBidiMark(I)Z
bool android::icu::text::DecimalFormat::isBidiMark(int c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # I
	cVar0 = 0x1;
	if ( c == 0x200e )
		goto label_cond_9;
	if ( c != 0x200f )
		goto label_cond_a;
label_cond_9:
label_goto_9:
	return cVar0;
label_cond_a:
	if ( c == 0x61c )
		goto label_cond_9;
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method private isGroupingPosition(I)Z
bool android::icu::text::DecimalFormat::isGroupingPosition(int pos)
{
	
	bool result;
	
	//    .param p1, "pos"    # I
	result = 0x0;
	//    .local v0, "result":Z
	if ( !(this->isGroupingUsed()) )  
		goto label_cond_1f;
	if ( pos <= 0 )
		goto label_cond_1f;
	if ( this->groupingSize <= 0 )
		goto label_cond_1f;
	if ( this->groupingSize2 <= 0 )
		goto label_cond_22;
	if ( pos <= this->groupingSize )
		goto label_cond_22;
	if ( ((pos - this->groupingSize) %  this->groupingSize2) )     
		goto label_cond_20;
	result = 0x1;
label_cond_1f:
label_goto_1f:
	return result;
	// 8370    .line 1241
label_cond_20:
	result = 0x0;
	goto label_goto_1f;
	// 8376    .line 1243
label_cond_22:
	if ( (pos % this->groupingSize) )     
		goto label_cond_2a;
	result = 0x1;
	goto label_goto_1f;
label_cond_2a:
	result = 0x0;
	goto label_goto_1f;

}
// .method private isNegative(D)Z
bool android::icu::text::DecimalFormat::isNegative(double number)
{
	
	bool cVar0;
	double cVar1;
	
	//    .param p1, "number"    # D
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( (number > cVar1) < 0 ) 
		goto label_cond_13;
	if ( (number < cVar1) )     
		goto label_cond_14;
	if ( (( 0x3ff0000000000000L / number) > cVar1) >= 0 )
		goto label_cond_14;
label_cond_13:
label_goto_13:
	return cVar0;
label_cond_14:
	cVar0 = 0x0;
	goto label_goto_13;

}
// .method static final match(Ljava/lang/String;II)I
int android::icu::text::DecimalFormat::match(std::shared_ptr<java::lang::String> text,int pos,int ch)
{
	
	int cVar0;
	int cVar1;
	int pos;
	
	//    .param p0, "text"    # Ljava/lang/String;
	//    .param p1, "pos"    # I
	//    .param p2, "ch"    # I
	cVar0 = -0x1;
	if ( pos < 0 ) 
		goto label_cond_9;
	if ( pos <  text->length() )
		goto label_cond_a;
label_cond_9:
	return cVar0;
	// 8454    .line 3184
label_cond_a:
	cVar1 = android::icu::text::DecimalFormat::skipBidiMarks(text, pos);
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(ch)) )  
		goto label_cond_1d;
	cVar1;
	//    .local v1, "s":I
	pos = android::icu::text::DecimalFormat::skipPatternWhiteSpace(text, cVar1);
	//    .end local p1    # "pos":I
	//    .local v0, "pos":I
	if ( pos != cVar1 )
		goto label_cond_1c;
	return cVar0;
	// 8484    .line 3193
label_cond_1c:
	return pos;
	// 8488    .line 3195
	// 8489    .end local v0    # "pos":I
	// 8490    .end local v1    # "s":I
	// 8491    .restart local p1    # "pos":I
label_cond_1d:
	if ( cVar1 >= text->length() )
		goto label_cond_29;
	if ( android::icu::text::UTF16::charAt(text, cVar1) == ch )
		goto label_cond_2a;
label_cond_29:
	return cVar0;
	// 8509    .line 3198
label_cond_2a:
	return android::icu::text::DecimalFormat::skipBidiMarks(text, (android::icu::text::UTF16::getCharCount(ch) +  cVar1));

}
// .method static final match(Ljava/lang/String;ILjava/lang/String;)I
int android::icu::text::DecimalFormat::match(std::shared_ptr<java::lang::String> text,int pos,std::shared_ptr<java::lang::String> str)
{
	
	int i;
	int ch;
	int pos;
	
	//    .param p0, "text"    # Ljava/lang/String;
	//    .param p1, "pos"    # I
	//    .param p2, "str"    # Ljava/lang/String;
	i = 0x0;
	//    .local v1, "i":I
label_cond_1:
label_goto_1:
	if ( i >= str->length() )
		goto label_cond_27;
	if ( pos < 0 ) 
		goto label_cond_27;
	ch = android::icu::text::UTF16::charAt(str, i);
	//    .local v0, "ch":I
	i = (i +  android::icu::text::UTF16::getCharCount(ch));
	if ( android::icu::text::DecimalFormat::isBidiMark(ch) )     
		goto label_cond_1;
	pos = android::icu::text::DecimalFormat::match(text, pos, ch);
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(ch)) )  
		goto label_cond_1;
	i = android::icu::text::DecimalFormat::skipPatternWhiteSpace(str, i);
	goto label_goto_1;
	// 8585    .line 3219
	// 8586    .end local v0    # "ch":I
label_cond_27:
	return pos;

}
// .method private matchesDigit(Ljava/lang/String;I[I)I
int android::icu::text::DecimalFormat::matchesDigit(std::shared_ptr<java::lang::String> str,int start,std::shared_ptr<int[]> decVal)
{
	
	int cVar0;
	int cVar1;
	auto localeDigits;
	int i;
	int digitStrLen;
	int cp;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "decVal"    # [I
	cVar0 = 0xa;
	cVar1 = 0x0;
	localeDigits = this->symbols->getDigitStringsLocal();
	//    .local v3, "localeDigits":[Ljava/lang/String;
	i = 0x0;
	//    .local v2, "i":I
label_goto_a:
	if ( i >= cVar0 )
		goto label_cond_20;
	digitStrLen = localeDigits[i]->length();
	//    .local v1, "digitStrLen":I
	if ( !(str->regionMatches(start, localeDigits[i], cVar1, digitStrLen)) )  
		goto label_cond_1d;
	decVal[cVar1] = i;
	return digitStrLen;
	// 8640    .line 2802
label_cond_1d:
	i = ( i + 0x1);
	goto label_goto_a;
	// 8646    .line 2811
	// 8647    .end local v1    # "digitStrLen":I
label_cond_20:
	cp = str->codePointAt(start);
	//    .local v0, "cp":I
	decVal[cVar1] = android::icu::lang::UCharacter::digit(cp, cVar0);
	if ( decVal[cVar1] < 0 ) 
		goto label_cond_33;
	return java::lang::Character::charCount(cp);
	// 8673    .line 2817
label_cond_33:
	return cVar1;

}
// .method private multiply(D)D
double android::icu::text::DecimalFormat::multiply(double number)
{
	
	//    .param p1, "number"    # D
	if ( this->multiplier == 0x1 )
		goto label_cond_a;
	return ( (double)(this->multiplier) * number);
	// 8699    .line 825
label_cond_a:
	return number;

}
// .method private parse(Ljava/lang/String;Ljava/text/ParsePosition;[Landroid/icu/util/Currency;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DecimalFormat::parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,std::shared_ptr<std::vector<android::icu::util::Currency>> currency)
{
	
	int backup;
	int i;
	std::shared_ptr<java::lang::Double> cVar0;
	std::shared<std::vector<bool[]>> status;
	int n;
	std::shared_ptr<java::lang::Double> n;
	double cVar1;
	std::shared_ptr<android::icu::util::CurrencyAmount> cVar2;
	std::shared_ptr<java::lang::Object> n;
	int mult;
	std::shared_ptr<android::icu::text::DigitList> cVar4;
	long long l;
	int nx;
	std::shared_ptr<java::math::BigInteger> big;
	auto big;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	//    .param p3, "currency"    # [Landroid/icu/util/Currency;
	backup = parsePosition->getIndex();
	//    .local v16, "backup":I
	//    .local v19, "i":I
	if ( this->formatWidth <= 0 )
		goto label_cond_23;
	if ( !(this->padPosition) )  
		goto label_cond_19;
	if ( this->padPosition != 0x1 )
		goto label_cond_23;
label_cond_19:
	i = this->skipPadding(text, backup);
label_cond_23:
	if ( !(text->regionMatches(backup, this->symbols->getNaN(), 0x0, this->symbols->getNaN()->length())) )  
		goto label_cond_7d;
	i = (i + this->symbols->getNaN()->length());
	if ( this->formatWidth <= 0 )
		goto label_cond_6e;
	if ( this->padPosition == 0x2 )
		goto label_cond_64;
	if ( this->padPosition != 0x3 )
		goto label_cond_6e;
label_cond_64:
label_cond_6e:
	parsePosition->setIndex(i);
	cVar0 = std::make_shared<java::lang::Double>(0x7ff8000000000000L);
	return cVar0;
	// 8856    .line 1988
label_cond_7d:
	backup;
	status = std::make_shared<std::vector<bool[]>>(0x3);
	//    .local v8, "status":[Z
	if ( !(this->currencySignCount) )  
		goto label_cond_98;
	if ( this->parseForCurrency(text, parsePosition, currency, status) )     
		goto label_cond_c9;
	return 0x0;
	// 8893    .line 1995
label_cond_98:
	if ( !(currency) )  
		goto label_cond_9c;
	return 0x0;
	// 8902    .line 1998
label_cond_9c:
	if ( this->subparse(text, parsePosition, this->digitList, status, currency, this->negPrefixPattern, this->negSuffixPattern, this->posPrefixPattern, this->posSuffixPattern, 0x0, 0x0) )     
		goto label_cond_c9;
	parsePosition->setIndex(backup);
	return 0x0;
	// 8957    .line 2006
label_cond_c9:
	n = 0x0;
	//    .local v23, "n":Ljava/lang/Number;
	if ( !(status[0x0]) )  
		goto label_cond_f0;
	//    .end local v23    # "n":Ljava/lang/Number;
	if ( !(status[0x1]) )  
		goto label_cond_ed;
	cVar1 = 0x7ff0000000000000L;
label_goto_d9:
	var101 = n(cVar1);
	//    .local v23, "n":Ljava/lang/Number;
label_cond_de:
label_goto_de:
	if ( !(currency) )  
		goto label_cond_ec;
	cVar2 = std::make_shared<android::icu::util::CurrencyAmount>(n, currency[0x0]);
	n = cVar2;
	//    .end local v23    # "n":Ljava/lang/Number;
label_cond_ec:
	return n;
	// 9008    .line 2011
label_cond_ed:
	cVar1 = -0x10000000000000L;
	goto label_goto_d9;
	// 9014    .line 2015
	// 9015    .local v23, "n":Ljava/lang/Number;
label_cond_f0:
	if ( !(status[0x2]) )  
		goto label_cond_110;
	if ( !(status[0x1]) )  
		goto label_cond_105;
	//    .end local v23    # "n":Ljava/lang/Number;
	var116 = n(std::make_shared<java::lang::String>(std::make_shared<char[]>("0.0")));
	//    .local v23, "n":Ljava/lang/Number;
label_goto_104:
	goto label_goto_de;
	// 9043    .local v23, "n":Ljava/lang/Number;
label_cond_105:
	//    .end local v23    # "n":Ljava/lang/Number;
	var120 = n(std::make_shared<java::lang::String>(std::make_shared<char[]>("-0.0")));
	goto label_goto_104;
	// 9056    .line 2020
	// 9057    .restart local v23    # "n":Ljava/lang/Number;
label_cond_110:
	if ( status[0x1] )     
		goto label_cond_12a;
	if ( !(this->digitList->isZero()) )  
		goto label_cond_12a;
	//    .end local v23    # "n":Ljava/lang/Number;
	var130 = n(std::make_shared<java::lang::String>(std::make_shared<char[]>("-0.0")));
	//    .local v23, "n":Ljava/lang/Number;
	goto label_goto_de;
	// 9088    .line 2027
	// 9089    .local v23, "n":Ljava/lang/Number;
label_cond_12a:
	mult = this->multiplier;
	//    .local v22, "mult":I
label_goto_130:
	if ( ( mult % 0xa) )     
		goto label_cond_141;
	cVar4 = this->digitList;
	cVar4->decimalAt = ( cVar4->decimalAt + -0x1);
	mult = ( mult / 0xa);
	goto label_goto_130;
	// 9120    .line 2034
label_cond_141:
	if ( this->parseBigDecimal )     
		goto label_cond_1d2;
	if ( mult != 0x1 )
		goto label_cond_1d2;
	if ( !(this->digitList->isIntegral()) )  
		goto label_cond_1d2;
	if ( this->digitList->decimalAt >= 0xc )
		goto label_cond_1b1;
	l = 0x0;
	//    .local v20, "l":J
	if ( this->digitList->count <= 0 )
		goto label_cond_1ab;
	nx = 0x0;
	//    .local v24, "nx":I
label_goto_16c:
	if ( nx >= this->digitList->count )
		goto label_cond_18e;
	//    .end local v24    # "nx":I
	//    .local v25, "nx":I
	l = (((0xa * l) +  (long long)((char)(this->digitList->digits[nx]))) - 0x30);
	nx = ( nx + 0x1);
	//    .end local v25    # "nx":I
	//    .restart local v24    # "nx":I
	goto label_goto_16c;
	// 9217    .line 2043
label_cond_18e:
label_goto_18e:
	//    .end local v24    # "nx":I
	//    .restart local v25    # "nx":I
	if ( nx >= this->digitList->decimalAt )
		goto label_cond_1a1;
	l = (l * 0xa);
	nx = ( nx + 0x1);
	//    .end local v25    # "nx":I
	//    .restart local v24    # "nx":I
	goto label_goto_18e;
	// 9245    .line 2046
	// 9246    .end local v24    # "nx":I
	// 9247    .restart local v25    # "nx":I
label_cond_1a1:
	if ( status[0x1] )     
		goto label_cond_1ab;
	l = (0 - l);
	//    .end local v25    # "nx":I
label_cond_1ab:
	n = java::lang::Long::valueOf(l);
	//    .local v23, "n":Ljava/lang/Number;
	goto label_goto_de;
	// 9272    .line 2052
	// 9273    .end local v20    # "l":J
	// 9274    .local v23, "n":Ljava/lang/Number;
label_cond_1b1:
	big = this->digitList->getBigInteger(status[0x1]);
	//    .local v18, "big":Ljava/math/BigInteger;
	if ( big->bitLength() >= 0x40 )
		goto label_cond_1ce;
	n = java::lang::Long::valueOf(big->longValue());
	//    .local v23, "n":Ljava/lang/Number;
	goto label_goto_de;
	// 9309    .local v23, "n":Ljava/lang/Number;
label_cond_1ce:
	n = big;
	//    .local v23, "n":Ljava/lang/Number;
	goto label_goto_de;
	// 9316    .line 2058
	// 9317    .end local v18    # "big":Ljava/math/BigInteger;
	// 9318    .local v23, "n":Ljava/lang/Number;
label_cond_1d2:
	big = this->digitList->getBigDecimalICU(status[0x1]);
	//    .local v17, "big":Landroid/icu/math/BigDecimal;
	n = big;
	//    .local v23, "n":Ljava/lang/Number;
	if ( mult == 0x1 )
		goto label_cond_de;
	n = big->divide(android::icu::math::BigDecimal::valueOf((long long)(mult)), this->mathContext);
	goto label_goto_de;

}
// .method private parseForCurrency(Ljava/lang/String;Ljava/text/ParsePosition;[Landroid/icu/util/Currency;[Z)Z
bool android::icu::text::DecimalFormat::parseForCurrency(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,std::shared_ptr<std::vector<android::icu::util::Currency>> currency,std::shared_ptr<bool[]> status)
{
	
	int origPos;
	int maxPosIndex;
	int maxErrorPos;
	std::shared<std::vector<bool[]>> tmpStatus;
	std::shared_ptr<java::text::ParsePosition> tmpPos;
	std::shared_ptr<android::icu::text::DigitList> tmpDigitList;
	bool found;
	std::shared_ptr<java::util::Iterator> affix_S_iterator;
	std::shared_ptr<android::icu::text::DecimalFormat_S_AffixForCurrency> affix;
	int index;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	//    .param p3, "currency"    # [Landroid/icu/util/Currency;
	//    .param p4, "status"    # [Z
	origPos = parsePosition->getIndex();
	//    .local v20, "origPos":I
	if ( this->isReadyForParsing )     
		goto label_cond_27;
	//    .local v22, "savedCurrencySignCount":I
	this->setupCurrencyAffixForAllPatterns();
	if ( this->currencySignCount != 0x3 )
		goto label_cond_cc;
	this->applyPatternWithoutExpandAffix(this->formatPattern, 0x0);
label_goto_22:
	this->isReadyForParsing = 0x1;
	//    .end local v22    # "savedCurrencySignCount":I
label_cond_27:
	maxPosIndex = origPos;
	//    .local v19, "maxPosIndex":I
	maxErrorPos = -0x1;
	//    .local v18, "maxErrorPos":I
	0x0;
	//    .local v23, "savedStatus":[Z
	tmpStatus = std::make_shared<std::vector<bool[]>>(0x3);
	//    .local v6, "tmpStatus":[Z
	tmpPos = std::make_shared<java::text::ParsePosition>(origPos);
	//    .local v4, "tmpPos":Ljava/text/ParsePosition;
	tmpDigitList = std::make_shared<android::icu::text::DigitList>();
	//    .local v5, "tmpDigitList":Landroid/icu/text/DigitList;
	if ( this->style != 0x6 )
		goto label_cond_d8;
	found = this->subparse(text, tmpPos, tmpDigitList, tmpStatus, currency, this->negPrefixPattern, this->negSuffixPattern, this->posPrefixPattern, this->posSuffixPattern, 0x1, 0x1);
	//    .local v16, "found":Z
label_goto_5f:
	if ( !(found) )  
		goto label_cond_f6;
	if ( tmpPos->getIndex() <= origPos )
		goto label_cond_73;
	maxPosIndex = tmpPos->getIndex();
	tmpStatus;
	//    .local v23, "savedStatus":[Z
	this->digitList = tmpDigitList;
	//    .end local v23    # "savedStatus":[Z
label_cond_73:
label_goto_73:
	affix_S_iterator = this->affixPatternsForCurrency->iterator();
	//    .end local v16    # "found":Z
	//    .local v15, "affix$iterator":Ljava/util/Iterator;
label_cond_7b:
label_goto_7b:
	if ( !(affix_S_iterator->hasNext()) )  
		goto label_cond_10a;
	affix = affix_S_iterator->next();
	affix->checkCast("android::icu::text::DecimalFormat_S_AffixForCurrency");
	//    .local v14, "affix":Landroid/icu/text/DecimalFormat$AffixForCurrency;
	tmpStatus = std::make_shared<std::vector<bool[]>>(0x3);
	//    .end local v4    # "tmpPos":Ljava/text/ParsePosition;
	tmpPos = std::make_shared<java::text::ParsePosition>(origPos);
	//    .restart local v4    # "tmpPos":Ljava/text/ParsePosition;
	//    .end local v5    # "tmpDigitList":Landroid/icu/text/DigitList;
	tmpDigitList = std::make_shared<android::icu::text::DigitList>();
	//    .restart local v5    # "tmpDigitList":Landroid/icu/text/DigitList;
	//    .local v21, "result":Z
	if ( !(this->subparse(text, tmpPos, tmpDigitList, tmpStatus, currency, affix->getNegPrefix(), affix->getNegSuffix(), affix->getPosPrefix(), affix->getPosSuffix(), 0x1, affix->getPatternType())) )  
		goto label_cond_fc;
	0x1;
	//    .local v16, "found":Z
	if ( tmpPos->getIndex() <= maxPosIndex )
		goto label_cond_7b;
	maxPosIndex = tmpPos->getIndex();
	tmpStatus;
	//    .restart local v23    # "savedStatus":[Z
	this->digitList = tmpDigitList;
	goto label_goto_7b;
	// 9647    .line 2080
	// 9648    .end local v4    # "tmpPos":Ljava/text/ParsePosition;
	// 9649    .end local v5    # "tmpDigitList":Landroid/icu/text/DigitList;
	// 9650    .end local v6    # "tmpStatus":[Z
	// 9651    .end local v14    # "affix":Landroid/icu/text/DecimalFormat$AffixForCurrency;
	// 9652    .end local v15    # "affix$iterator":Ljava/util/Iterator;
	// 9653    .end local v16    # "found":Z
	// 9654    .end local v18    # "maxErrorPos":I
	// 9655    .end local v19    # "maxPosIndex":I
	// 9656    .end local v21    # "result":Z
	// 9657    .end local v23    # "savedStatus":[Z
	// 9658    .restart local v22    # "savedCurrencySignCount":I
label_cond_cc:
	this->applyPattern(this->formatPattern, 0x0);
	goto label_goto_22;
	// 9672    .line 2101
	// 9673    .end local v22    # "savedCurrencySignCount":I
	// 9674    .restart local v4    # "tmpPos":Ljava/text/ParsePosition;
	// 9675    .restart local v5    # "tmpDigitList":Landroid/icu/text/DigitList;
	// 9676    .restart local v6    # "tmpStatus":[Z
	// 9677    .restart local v18    # "maxErrorPos":I
	// 9678    .restart local v19    # "maxPosIndex":I
	// 9679    .local v23, "savedStatus":[Z
label_cond_d8:
	found = this->subparse(text, tmpPos, tmpDigitList, tmpStatus, currency, this->negPrefixPattern, this->negSuffixPattern, this->posPrefixPattern, this->posSuffixPattern, 0x1, 0x0);
	//    .local v16, "found":Z
	goto label_goto_5f;
	// 9716    .line 2111
label_cond_f6:
	maxErrorPos = tmpPos->getErrorIndex();
	goto label_goto_73;
	// 9724    .line 2131
	// 9725    .end local v16    # "found":Z
	// 9726    .end local v23    # "savedStatus":[Z
	// 9727    .restart local v14    # "affix":Landroid/icu/text/DecimalFormat$AffixForCurrency;
	// 9728    .restart local v15    # "affix$iterator":Ljava/util/Iterator;
	// 9729    .restart local v21    # "result":Z
label_cond_fc:
	if ( tmpPos->getErrorIndex() <= maxErrorPos )
		goto label_cond_7b;
	maxErrorPos = tmpPos->getErrorIndex();
	goto label_goto_7b;
	// 9745    .line 2146
	// 9746    .end local v14    # "affix":Landroid/icu/text/DecimalFormat$AffixForCurrency;
	// 9747    .end local v21    # "result":Z
label_cond_10a:
	tmpStatus = std::make_shared<std::vector<bool[]>>(0x3);
	//    .end local v4    # "tmpPos":Ljava/text/ParsePosition;
	tmpPos = std::make_shared<java::text::ParsePosition>(origPos);
	//    .restart local v4    # "tmpPos":Ljava/text/ParsePosition;
	//    .end local v5    # "tmpDigitList":Landroid/icu/text/DigitList;
	tmpDigitList = std::make_shared<android::icu::text::DigitList>();
	//    .restart local v5    # "tmpDigitList":Landroid/icu/text/DigitList;
	//    .restart local v21    # "result":Z
	if ( !(this->subparse(text, tmpPos, tmpDigitList, tmpStatus, currency, this->negativePrefix, this->negativeSuffix, this->positivePrefix, this->positiveSuffix, 0x0, 0x0)) )  
		goto label_cond_155;
	if ( tmpPos->getIndex() <= maxPosIndex )
		goto label_cond_149;
	maxPosIndex = tmpPos->getIndex();
	//    .local v23, "savedStatus":[Z
	this->digitList = tmpDigitList;
	//    .end local v23    # "savedStatus":[Z
label_cond_149:
	found = 0x1;
label_cond_14b:
label_goto_14b:
	if ( found )     
		goto label_cond_162;
	parsePosition->setErrorIndex(maxErrorPos);
label_cond_154:
	return found;
	// 9850    .line 2162
label_cond_155:
	if ( tmpPos->getErrorIndex() <= maxErrorPos )
		goto label_cond_14b;
	tmpPos->getErrorIndex();
	goto label_goto_14b;
	// 9866    .line 2170
label_cond_162:
	parsePosition->setIndex(maxPosIndex);
	parsePosition->setErrorIndex(-0x1);
	index = 0x0;
	//    .local v17, "index":I
label_goto_171:
	if ( index >= 0x3 )
		goto label_cond_154;
	status[index] = tmpStatus[index];
	index = ( index + 0x1);
	goto label_goto_171;

}
// .method private patternError(Ljava/lang/String;Ljava/lang/String;)V
void android::icu::text::DecimalFormat::patternError(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "pattern"    # Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" in pattern \")))->append(pattern)->append(0x22)->toString());
	// throw
	throw cVar0;

}
// .method private precision(Z)I
int android::icu::text::DecimalFormat::precision(bool isIntegral)
{
	
	int cVar0;
	
	//    .param p1, "isIntegral"    # Z
	if ( !(this->areSignificantDigitsUsed()) )  
		goto label_cond_b;
	return this->getMaximumSignificantDigits();
	// 9964    .line 1257
label_cond_b:
	if ( !(this->useExponentialNotation) )  
		goto label_cond_19;
	return (this->getMinimumIntegerDigits() +  this->getMaximumFractionDigits());
	// 9983    .line 1260
label_cond_19:
	if ( !(isIntegral) )  
		goto label_cond_1d;
	cVar0 = 0x0;
label_goto_1c:
	return cVar0;
label_cond_1d:
	cVar0 = this->getMaximumFractionDigits();
	goto label_goto_1c;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::DecimalFormat::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	bool cVar3;
	std::shared_ptr<android::icu::text::DigitList> cVar4;
	std::shared_ptr<android::icu::math::BigDecimal> cVar5;
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 10004        value = {
	// 10005            Ljava/io/IOException;,
	// 10006            Ljava/lang/ClassNotFoundException;
	// 10007        }
	// 10008    .end annotation
	cVar0 = 0x77359400;
	cVar1 = 0x154;
	cVar2 = 0x4;
	cVar3 = 0x0;
	stream->defaultReadObject();
	if ( this->getMaximumIntegerDigits() <= cVar0 )
		goto label_cond_14;
	this->setMaximumIntegerDigits(cVar0);
label_cond_14:
	if ( this->getMaximumFractionDigits() <= cVar1 )
		goto label_cond_1d;
	this->_setMaximumFractionDigits(cVar1);
label_cond_1d:
	if ( this->serialVersionOnStream >= 0x2 )
		goto label_cond_39;
	this->exponentSignAlwaysShown = cVar3;
	this->setInternalRoundingIncrement(0x0);
	this->roundingMode = 0x6;
	this->formatWidth = cVar3;
	this->pad = 0x20;
	this->padPosition = cVar3;
	if ( this->serialVersionOnStream >= 0x1 )
		goto label_cond_39;
	this->useExponentialNotation = cVar3;
label_cond_39:
	if ( this->serialVersionOnStream >= 0x3 )
		goto label_cond_41;
	this->setCurrencyForSymbols();
label_cond_41:
	if ( this->serialVersionOnStream >= cVar2 )
		goto label_cond_49;
	this->currencyUsage = android::icu::util::Currency_S_CurrencyUsage::STANDARD;
label_cond_49:
	this->serialVersionOnStream = cVar2;
	cVar4 = std::make_shared<android::icu::text::DigitList>();
	this->digitList = cVar4;
	if ( !(this->roundingIncrement) )  
		goto label_cond_60;
	cVar5 = std::make_shared<android::icu::math::BigDecimal>(this->roundingIncrement);
	this->setInternalRoundingIncrement(cVar5);
label_cond_60:
	this->resetActualRounding();
	return;

}
// .method private resetActualRounding()V
void android::icu::text::DecimalFormat::resetActualRounding()
{
	
	std::shared_ptr<java::math::BigDecimal> cVar0;
	std::shared_ptr<android::icu::math::BigDecimal> byWidth;
	
	cVar0 = 0x0;
	if ( !(this->roundingIncrementICU) )  
		goto label_cond_3c;
	if ( this->getMaximumFractionDigits() <= 0 )
		goto label_cond_2d;
	byWidth = android::icu::math::BigDecimal::ONE->movePointLeft(this->getMaximumFractionDigits());
	//    .local v0, "byWidth":Landroid/icu/math/BigDecimal;
label_goto_15:
	if ( this->roundingIncrementICU->compareTo(byWidth) < 0 ) 
		goto label_cond_30;
	this->actualRoundingIncrementICU = this->roundingIncrementICU;
	//    .end local v0    # "byWidth":Landroid/icu/math/BigDecimal;
label_goto_21:
	if ( this->actualRoundingIncrementICU )     
		goto label_cond_62;
	this->setRoundingDouble(0x0);
	this->actualRoundingIncrement = cVar0;
label_goto_2c:
	return;
	// 10204    .line 6128
label_cond_2d:
	byWidth = android::icu::math::BigDecimal::ONE;
	//    .restart local v0    # "byWidth":Landroid/icu/math/BigDecimal;
	goto label_goto_15;
	// 10211    .line 6132
label_cond_30:
	if ( !(byWidth->equals(android::icu::math::BigDecimal::ONE)) )  
		goto label_cond_39;
	//    .end local v0    # "byWidth":Landroid/icu/math/BigDecimal;
label_cond_39:
	this->actualRoundingIncrementICU = byWidth;
	goto label_goto_21;
	// 10229    .line 6135
label_cond_3c:
	if ( this->roundingMode == 0x6 )
		goto label_cond_47;
	if ( !(this->isScientificNotation()) )  
		goto label_cond_4a;
label_cond_47:
	this->actualRoundingIncrementICU = cVar0;
	goto label_goto_21;
	// 10249    .line 6141
label_cond_4a:
	if ( this->getMaximumFractionDigits() <= 0 )
		goto label_cond_5d;
	this->actualRoundingIncrementICU = android::icu::math::BigDecimal::ONE->movePointLeft(this->getMaximumFractionDigits());
	goto label_goto_21;
	// 10272    .line 6144
label_cond_5d:
	this->actualRoundingIncrementICU = android::icu::math::BigDecimal::ONE;
	goto label_goto_21;
	// 10280    .line 6153
label_cond_62:
	this->setRoundingDouble(this->actualRoundingIncrementICU->doubleValue());
	this->actualRoundingIncrement = this->actualRoundingIncrementICU->toBigDecimal();
	goto label_goto_2c;

}
// .method private round(D)D
double android::icu::text::DecimalFormat::round(double cVar0)
{
	
	bool isNegative;
	double cVar0;
	
	//    .param p1, "number"    # D
	isNegative = this->isNegative(cVar0);
	//    .local v7, "isNegative":Z
	if ( !(isNegative) )  
		goto label_cond_7;
	cVar0 = (0.0 - cVar0);
label_cond_7:
	if ( (this->roundingDouble < 0x0) <= 0 )
		goto label_cond_1b;
	return android::icu::text::DecimalFormat::round(cVar0, this->roundingDouble, this->roundingDoubleReciprocal, this->roundingMode, isNegative);
	// 10345    .line 816
label_cond_1b:
	return cVar0;

}
// .method private static round(DDDIZ)D
double android::icu::text::DecimalFormat::round(double number,double roundingInc,double roundingIncReciprocal,int mode,bool isNegative)
{
	
	double div;
	auto ceil;
	double ceildiff;
	auto floor;
	double floordiff;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	auto div;
	double cVar2;
	double testFloor;
	std::shared_ptr<java::lang::ArithmeticException> cVar3;
	
	//    .param p0, "number"    # D
	//    .param p2, "roundingInc"    # D
	//    .param p4, "roundingIncReciprocal"    # D
	//    .param p6, "mode"    # I
	//    .param p7, "isNegative"    # Z
	if ( (roundingIncReciprocal < 0x0) )     
		goto label_cond_36;
	div = (number /  roundingInc);
	//    .local v6, "div":D
label_goto_8:
	// switch
	{
	auto item = ( mode );
	if (item == 0) goto label_pswitch_6f;
	if (item == 1) goto label_pswitch_67;
	if (item == 2) goto label_pswitch_39;
	if (item == 3) goto label_pswitch_54;
	if (item == 4) goto label_pswitch_b;
	if (item == 5) goto label_pswitch_b;
	if (item == 6) goto label_pswitch_b;
	if (item == 7) goto label_pswitch_78;
	}
label_pswitch_b:
	ceil = java::lang::Math::ceil(div);
	//    .local v2, "ceil":D
	ceildiff = (ceil -  div);
	//    .local v4, "ceildiff":D
	floor = java::lang::Math::floor(div);
	//    .local v8, "floor":D
	floordiff = (div -  floor);
	//    .local v10, "floordiff":D
	// switch
	{
	auto item = ( mode );
	if (item == 4) goto label_pswitch_b7;
	if (item == 5) goto label_pswitch_ac;
	if (item == 6) goto label_pswitch_8a;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid rounding mode: ")))->append(mode)->toString());
	// throw
	throw cVar0;
	// 10424    .line 1002
	// 10425    .end local v2    # "ceil":D
	// 10426    .end local v4    # "ceildiff":D
	// 10427    .end local v6    # "div":D
	// 10428    .end local v8    # "floor":D
	// 10429    .end local v10    # "floordiff":D
label_cond_36:
	div = (number *  roundingIncReciprocal);
	//    .restart local v6    # "div":D
	goto label_goto_8;
	// 10436    .line 1009
label_pswitch_39:
	if ( !(isNegative) )  
		goto label_cond_4b;
	div = java::lang::Math::floor(( android::icu::text::DecimalFormat::epsilon + div));
label_goto_42:
	if ( (roundingIncReciprocal < 0x0) )     
		goto label_cond_c2;
	cVar2 = (div *  roundingInc);
label_goto_4a:
	return cVar2;
	// 10462    .line 1009
label_cond_4b:
	div = java::lang::Math::ceil((div -  android::icu::text::DecimalFormat::epsilon));
	goto label_goto_42;
	// 10474    .line 1012
label_pswitch_54:
	if ( !(isNegative) )  
		goto label_cond_5f;
	div = java::lang::Math::ceil((div -  android::icu::text::DecimalFormat::epsilon));
	goto label_goto_42;
label_cond_5f:
	div = java::lang::Math::floor(( android::icu::text::DecimalFormat::epsilon + div));
	goto label_goto_42;
	// 10499    .line 1015
label_pswitch_67:
	div = java::lang::Math::floor(( android::icu::text::DecimalFormat::epsilon + div));
	goto label_goto_42;
	// 10511    .line 1018
label_pswitch_6f:
	div = java::lang::Math::ceil((div -  android::icu::text::DecimalFormat::epsilon));
	goto label_goto_42;
	// 10523    .line 1021
label_pswitch_78:
	if ( !((div < java::lang::Math::floor(div))) )  
		goto label_cond_89;
	cVar3 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rounding necessary")));
	// throw
	throw cVar3;
	// 10542    .line 1024
label_cond_89:
	return number;
	// 10546    .line 1050
	// 10547    .restart local v2    # "ceil":D
	// 10548    .restart local v4    # "ceildiff":D
	// 10549    .restart local v8    # "floor":D
	// 10550    .restart local v10    # "floordiff":D
label_pswitch_8a:
	if ( (( android::icu::text::DecimalFormat::epsilon + floordiff) > ceildiff) >= 0 )
		goto label_cond_93;
	div = floor;
	goto label_goto_42;
	// 10565    .line 1052
label_cond_93:
	if ( (( android::icu::text::DecimalFormat::epsilon + ceildiff) > floordiff) >= 0 )
		goto label_cond_9c;
	div = ceil;
	goto label_goto_42;
	// 10580    .line 1055
label_cond_9c:
	testFloor = (floor /  0x4000000000000000L);
	//    .local v12, "testFloor":D
	if ( (testFloor < java::lang::Math::floor(testFloor)) )     
		goto label_cond_aa;
	div = floor;
	goto label_goto_42;
label_cond_aa:
	div = ceil;
	goto label_goto_42;
	// 10605    .line 1060
	// 10606    .end local v12    # "testFloor":D
label_pswitch_ac:
	if ( (floordiff > ( android::icu::text::DecimalFormat::epsilon + ceildiff)) > 0 ) 
		goto label_cond_b5;
	div = floor;
	goto label_goto_42;
label_cond_b5:
	div = ceil;
	goto label_goto_42;
	// 10625    .line 1063
label_pswitch_b7:
	if ( (ceildiff > ( android::icu::text::DecimalFormat::epsilon + floordiff)) > 0 ) 
		goto label_cond_c0;
	div = ceil;
	goto label_goto_42;
label_cond_c0:
	div = floor;
	goto label_goto_42;
	// 10644    .line 1069
	// 10645    .end local v2    # "ceil":D
	// 10646    .end local v4    # "ceildiff":D
	// 10647    .end local v8    # "floor":D
	// 10648    .end local v10    # "floordiff":D
label_cond_c2:
	cVar2 = (div /  roundingIncReciprocal);
	goto label_goto_4a;
	// 10654    .line 1007
	// 10655    nop
	// 10657    :pswitch_data_c6
	// 10658    .packed-switch 0x0
	// 10659        :pswitch_6f
	// 10660        :pswitch_67
	// 10661        :pswitch_39
	// 10662        :pswitch_54
	// 10663        :pswitch_b
	// 10664        :pswitch_b
	// 10665        :pswitch_b
	// 10666        :pswitch_78
	// 10667    .end packed-switch
	// 10669    .line 1045
	// 10670    :pswitch_data_da
	// 10671    .packed-switch 0x4
	// 10672        :pswitch_b7
	// 10673        :pswitch_ac
	// 10674        :pswitch_8a
	// 10675    .end packed-switch

}
// .method private setCurrencyForSymbols()V
void android::icu::text::DecimalFormat::setCurrencyForSymbols()
{
	
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> def;
	
	def = std::make_shared<android::icu::text::DecimalFormatSymbols>(this->symbols->getULocale());
	//    .local v0, "def":Landroid/icu/text/DecimalFormatSymbols;
	if ( !(this->symbols->getCurrencySymbol()->equals(def->getCurrencySymbol())) )  
		goto label_cond_39;
	if ( !(this->symbols->getInternationalCurrencySymbol()->equals(def->getInternationalCurrencySymbol())) )  
		goto label_cond_39;
	this->setCurrency(android::icu::util::Currency::getInstance(this->symbols->getULocale()));
label_goto_38:
	return;
	// 10748    .line 3272
label_cond_39:
	this->setCurrency(0x0);
	goto label_goto_38;

}
// .method private setInternalRoundingIncrement(Landroid/icu/math/BigDecimal;)V
void android::icu::text::DecimalFormat::setInternalRoundingIncrement(std::shared_ptr<android::icu::math::BigDecimal> value)
{
	
	std::shared_ptr<java::math::BigDecimal> cVar0;
	
	//    .param p1, "value"    # Landroid/icu/math/BigDecimal;
	cVar0 = 0x0;
	this->roundingIncrementICU = value;
	if ( value )     
		goto label_cond_8;
label_goto_5:
	this->roundingIncrement = cVar0;
	return;
	// 10776    .line 5515
label_cond_8:
	cVar0 = value->toBigDecimal();
	goto label_goto_5;

}
// .method private setRoundingDouble(D)V
void android::icu::text::DecimalFormat::setRoundingDouble(double newValue)
{
	
	double cVar0;
	double rawRoundedReciprocal;
	
	//    .param p1, "newValue"    # D
	cVar0 = 0x0;
	this->roundingDouble = newValue;
	if ( (this->roundingDouble < cVar0) <= 0 )
		goto label_cond_2a;
	rawRoundedReciprocal = (0x3ff0000000000000L /  this->roundingDouble);
	//    .local v0, "rawRoundedReciprocal":D
	this->roundingDoubleReciprocal = java::lang::Math::rint(rawRoundedReciprocal);
	if ( (java::lang::Math::abs((rawRoundedReciprocal -  this->roundingDoubleReciprocal)) < 0x3e112e0be826d695L) <= 0 )
		goto label_cond_29;
	this->roundingDoubleReciprocal = cVar0;
	//    .end local v0    # "rawRoundedReciprocal":D
label_cond_29:
label_goto_29:
	return;
	// 10841    .line 6169
label_cond_2a:
	this->roundingDoubleReciprocal = cVar0;
	goto label_goto_29;

}
// .method private setupCurrencyAffixForAllPatterns()V
void android::icu::text::DecimalFormat::setupCurrencyAffixForAllPatterns()
{
	
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> cVar0;
	std::shared_ptr<java::util::HashSet> cVar1;
	std::shared_ptr<android::icu::text::DecimalFormat_S_AffixForCurrency> affixes;
	std::shared_ptr<java::util::Iterator> iter;
	std::shared_ptr<java::util::HashSet> currencyUnitPatternSet;
	std::shared_ptr<java::lang::String> pluralCount;
	std::shared_ptr<java::lang::Object> currencyPattern;
	
	if ( this->currencyPluralInfo )     
		goto label_cond_11;
	cVar0 = std::make_shared<android::icu::text::CurrencyPluralInfo>(this->symbols->getULocale());
	this->currencyPluralInfo = cVar0;
label_cond_11:
	cVar1 = std::make_shared<java::util::HashSet>();
	this->affixPatternsForCurrency = cVar1;
	//    .local v10, "savedFormatPattern":Ljava/lang/String;
	this->applyPatternWithoutExpandAffix(android::icu::text::DecimalFormat::getPattern(this->symbols->getULocale(), 0x1), 0x0);
	affixes = std::make_shared<android::icu::text::DecimalFormat_S_AffixForCurrency>(this->negPrefixPattern, this->negSuffixPattern, this->posPrefixPattern, this->posSuffixPattern, 0x0);
	//    .local v0, "affixes":Landroid/icu/text/DecimalFormat$AffixForCurrency;
	this->affixPatternsForCurrency->add(affixes);
	iter = this->currencyPluralInfo->pluralPatternIterator();
	//    .local v8, "iter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	currencyUnitPatternSet = std::make_shared<java::util::HashSet>();
	//    .local v7, "currencyUnitPatternSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_47:
label_goto_47:
	if ( !(iter->hasNext()) )  
		goto label_cond_7c;
	pluralCount = iter->next();
	pluralCount->checkCast("java::lang::String");
	//    .local v9, "pluralCount":Ljava/lang/String;
	currencyPattern = this->currencyPluralInfo->getCurrencyPluralPattern(pluralCount);
	//    .local v6, "currencyPattern":Ljava/lang/String;
	if ( !(currencyPattern) )  
		goto label_cond_47;
	if ( currencyUnitPatternSet->contains(currencyPattern) )     
		goto label_cond_47;
	currencyUnitPatternSet->add(currencyPattern);
	this->applyPatternWithoutExpandAffix(currencyPattern, 0x0);
	//    .end local v0    # "affixes":Landroid/icu/text/DecimalFormat$AffixForCurrency;
	affixes = std::make_shared<android::icu::text::DecimalFormat_S_AffixForCurrency>(this->negPrefixPattern, this->negSuffixPattern, this->posPrefixPattern, this->posSuffixPattern, 0x1);
	//    .restart local v0    # "affixes":Landroid/icu/text/DecimalFormat$AffixForCurrency;
	this->affixPatternsForCurrency->add(affixes);
	goto label_goto_47;
	// 11008    .line 2217
	// 11009    .end local v6    # "currencyPattern":Ljava/lang/String;
	// 11010    .end local v9    # "pluralCount":Ljava/lang/String;
label_cond_7c:
	this->formatPattern = this->formatPattern;
	return;

}
// .method private static skipBidiMarks(Ljava/lang/String;I)I
int android::icu::text::DecimalFormat::skipBidiMarks(std::shared_ptr<java::lang::String> text,int pos)
{
	
	int c;
	int pos;
	
	//    .param p0, "text"    # Ljava/lang/String;
	//    .param p1, "pos"    # I
label_goto_0:
	if ( pos >= text->length() )
		goto label_cond_10;
	c = android::icu::text::UTF16::charAt(text, pos);
	//    .local v0, "c":I
	if ( android::icu::text::DecimalFormat::isBidiMark(c) )     
		goto label_cond_11;
	//    .end local v0    # "c":I
label_cond_10:
	return pos;
	// 11050    .line 3045
	// 11051    .restart local v0    # "c":I
label_cond_11:
	pos = (pos +  android::icu::text::UTF16::getCharCount(c));
	goto label_goto_0;

}
// .method private final skipPadding(Ljava/lang/String;I)I
int android::icu::text::DecimalFormat::skipPadding(std::shared_ptr<java::lang::String> text,int position)
{
	
	int position;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "position"    # I
label_goto_0:
	if ( position >= text->length() )
		goto label_cond_11;
	if ( text->charAt(position) != this->pad )
		goto label_cond_11;
	position = ( position + 0x1);
	goto label_goto_0;
	// 11089    .line 2851
label_cond_11:
	return position;

}
// .method private static skipPatternWhiteSpace(Ljava/lang/String;I)I
int android::icu::text::DecimalFormat::skipPatternWhiteSpace(std::shared_ptr<java::lang::String> text,int pos)
{
	
	int c;
	int pos;
	
	//    .param p0, "text"    # Ljava/lang/String;
	//    .param p1, "pos"    # I
label_goto_0:
	if ( pos >= text->length() )
		goto label_cond_10;
	c = android::icu::text::UTF16::charAt(text, pos);
	//    .local v0, "c":I
	if ( android::icu::impl::PatternProps::isWhiteSpace(c) )     
		goto label_cond_11;
	//    .end local v0    # "c":I
label_cond_10:
	return pos;
	// 11126    .line 3017
	// 11127    .restart local v0    # "c":I
label_cond_11:
	pos = (pos +  android::icu::text::UTF16::getCharCount(c));
	goto label_goto_0;

}
// .method private static skipUWhiteSpace(Ljava/lang/String;I)I
int android::icu::text::DecimalFormat::skipUWhiteSpace(std::shared_ptr<java::lang::String> text,int pos)
{
	
	int c;
	int pos;
	
	//    .param p0, "text"    # Ljava/lang/String;
	//    .param p1, "pos"    # I
label_goto_0:
	if ( pos >= text->length() )
		goto label_cond_10;
	c = android::icu::text::UTF16::charAt(text, pos);
	//    .local v0, "c":I
	if ( android::icu::lang::UCharacter::isUWhiteSpace(c) )     
		goto label_cond_11;
	//    .end local v0    # "c":I
label_cond_10:
	return pos;
	// 11170    .line 3031
	// 11171    .restart local v0    # "c":I
label_cond_11:
	pos = (pos +  android::icu::text::UTF16::getCharCount(c));
	goto label_goto_0;

}
// .method private subformat(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;ZZZ)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DecimalFormat::subformat(double number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool isNegative,bool isInteger,bool parseAttr)
{
	
	//    .param p1, "number"    # D
	//    .param p3, "result"    # Ljava/lang/StringBuffer;
	//    .param p4, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p5, "isNegative"    # Z
	//    .param p6, "isInteger"    # Z
	//    .param p7, "parseAttr"    # Z
	if ( this->currencySignCount != 0x3 )
		goto label_cond_1a;
	return this->subformat(this->currencyPluralInfo->select(this->getFixedDecimal(number)), result, fieldPosition, isNegative, isInteger, parseAttr);
label_cond_1a:
	return this->subformat(result, fieldPosition, isNegative, isInteger, parseAttr);

}
// .method private subformat(ILjava/lang/StringBuffer;Ljava/text/FieldPosition;ZZZ)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DecimalFormat::subformat(int number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool isNegative,bool isInteger,bool parseAttr)
{
	
	//    .param p1, "number"    # I
	//    .param p2, "result"    # Ljava/lang/StringBuffer;
	//    .param p3, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p4, "isNegative"    # Z
	//    .param p5, "isInteger"    # Z
	//    .param p6, "parseAttr"    # Z
	if ( this->currencySignCount != 0x3 )
		goto label_cond_1b;
	return this->subformat(this->currencyPluralInfo->select(this->getFixedDecimal((double)(number))), result, fieldPosition, isNegative, isInteger, parseAttr);
label_cond_1b:
	return this->subformat(result, fieldPosition, isNegative, isInteger, parseAttr);

}
// .method private subformat(Ljava/lang/String;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;ZZZ)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DecimalFormat::subformat(std::shared_ptr<java::lang::String> pluralCount,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool isNegative,bool isInteger,bool parseAttr)
{
	
	std::shared_ptr<java::lang::Object> currencyPluralPattern;
	
	//    .param p1, "pluralCount"    # Ljava/lang/String;
	//    .param p2, "result"    # Ljava/lang/StringBuffer;
	//    .param p3, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p4, "isNegative"    # Z
	//    .param p5, "isInteger"    # Z
	//    .param p6, "parseAttr"    # Z
	if ( this->style != 0x6 )
		goto label_cond_17;
	currencyPluralPattern = this->currencyPluralInfo->getCurrencyPluralPattern(pluralCount);
	//    .local v6, "currencyPluralPattern":Ljava/lang/String;
	if ( this->formatPattern->equals(currencyPluralPattern) )     
		goto label_cond_17;
	this->applyPatternWithoutExpandAffix(currencyPluralPattern, 0x0);
	//    .end local v6    # "currencyPluralPattern":Ljava/lang/String;
label_cond_17:
	this->expandAffixAdjustWidth(pluralCount);
	return this->subformat(result, fieldPosition, isNegative, isInteger, parseAttr);

}
// .method private subformat(Ljava/lang/StringBuffer;Ljava/text/FieldPosition;ZZZ)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DecimalFormat::subformat(std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool isNegative,bool isInteger,bool parseAttr)
{
	
	int cVar0;
	
	//    .param p1, "result"    # Ljava/lang/StringBuffer;
	//    .param p2, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p3, "isNegative"    # Z
	//    .param p4, "isInteger"    # Z
	//    .param p5, "parseAttr"    # Z
	cVar0 = 0x0;
	if ( !(this->digitList->isZero()) )  
		goto label_cond_d;
	this->digitList->decimalAt = cVar0;
label_cond_d:
	//    .local v6, "prefixLen":I
	if ( !(this->useExponentialNotation) )  
		goto label_cond_2c;
	this->subformatExponential(result, fieldPosition, parseAttr);
label_goto_1e:
	//    .local v7, "suffixLen":I
	this->addPadding(result, fieldPosition, this->appendAffix(result, isNegative, 0x1, fieldPosition, parseAttr), this->appendAffix(result, isNegative, cVar0, fieldPosition, parseAttr));
	return result;
	// 11459    .line 1400
	// 11460    .end local v7    # "suffixLen":I
label_cond_2c:
	this->subformatFixed(result, fieldPosition, isInteger, parseAttr);
	goto label_goto_1e;

}
// .method private subformatExponential(Ljava/lang/StringBuffer;Ljava/text/FieldPosition;Z)V
void android::icu::text::DecimalFormat::subformatExponential(std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool parseAttr)
{
	
	auto digits;
	std::shared_ptr<java::lang::String> decimal;
	int maxIntDig;
	int minIntDig;
	int intBegin;
	int fracBegin;
	int minFracDig;
	long long fractionalDigits;
	int fractionalDigitsCount;
	int recordFractionDigits;
	int exponent;
	int minimumDigits;
	int integerDigits;
	int totalDigits;
	int i;
	int cVar0;
	std::shared_ptr<android::icu::text::UFieldPosition> cVar3;
	int expBegin;
	unsigned char expDig;
	std::shared_ptr<java::lang::Object> cVar4;
	int cVar1;
	
	//    .param p1, "result"    # Ljava/lang/StringBuffer;
	//    .param p2, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p3, "parseAttr"    # Z
	digits = this->symbols->getDigitStringsLocal();
	//    .local v7, "digits":[Ljava/lang/String;
	if ( this->currencySignCount )     
		goto label_cond_183;
	decimal = this->symbols->getDecimalSeparatorString();
	//    .local v4, "decimal":Ljava/lang/String;
label_goto_1c:
	//    .local v27, "useSigDig":Z
	maxIntDig = this->getMaximumIntegerDigits();
	//    .local v20, "maxIntDig":I
	minIntDig = this->getMinimumIntegerDigits();
	//    .local v22, "minIntDig":I
	if ( fieldPosition->getField() )     
		goto label_cond_18f;
	fieldPosition->setBeginIndex(result->length());
	fieldPosition->setEndIndex(-0x1);
label_cond_42:
label_goto_42:
	intBegin = result->length();
	//    .local v17, "intBegin":I
	//    .local v18, "intEnd":I
	fracBegin = -0x1;
	//    .local v12, "fracBegin":I
	minFracDig = 0x0;
	//    .local v21, "minFracDig":I
	if ( !(this->areSignificantDigitsUsed()) )  
		goto label_cond_1df;
	minIntDig = 0x1;
	maxIntDig = 0x1;
	minFracDig = ( this->getMinimumSignificantDigits() + -0x1);
label_cond_57:
label_goto_57:
	fractionalDigits = 0x0;
	//    .local v14, "fractionalDigits":J
	fractionalDigitsCount = 0x0;
	//    .local v13, "fractionalDigitsCount":I
	recordFractionDigits = 0x0;
	//    .local v25, "recordFractionDigits":Z
	exponent = this->digitList->decimalAt;
	//    .local v11, "exponent":I
	if ( maxIntDig <= 0x1 )
		goto label_cond_207;
	if ( maxIntDig == minIntDig )
		goto label_cond_207;
	if ( exponent <= 0 )
		goto label_cond_201;
	exponent = (( exponent + -0x1) / maxIntDig);
label_goto_7a:
	exponent = (exponent * maxIntDig);
label_goto_7c:
	minimumDigits = (minIntDig + minFracDig);
	//    .local v23, "minimumDigits":I
	if ( !(this->digitList->isZero()) )  
		goto label_cond_214;
	integerDigits = minIntDig;
	//    .local v19, "integerDigits":I
label_goto_8c:
	totalDigits = this->digitList->count;
	//    .local v26, "totalDigits":I
	if ( minimumDigits <= totalDigits )
		goto label_cond_a0;
	totalDigits = minimumDigits;
label_cond_a0:
	if ( integerDigits <= totalDigits )
		goto label_cond_a8;
	totalDigits = integerDigits;
label_cond_a8:
	i = 0x0;
	//    .end local v25    # "recordFractionDigits":Z
	//    .local v16, "i":I
label_goto_aa:
	if ( i >= totalDigits )
		goto label_cond_259;
	if ( i != integerDigits )
		goto label_cond_149;
	if ( fieldPosition->getField() )     
		goto label_cond_224;
	fieldPosition->setEndIndex(result->length());
label_cond_c7:
label_goto_c7:
	if ( !(parseAttr) )  
		goto label_cond_de;
	result->length();
	this->addAttribute(android::icu::text::NumberFormat_S_Field::INTEGER, intBegin, result->length());
label_cond_de:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::DECIMAL_SEPARATOR )
		goto label_cond_f5;
	fieldPosition->setBeginIndex(result->length());
label_cond_f5:
	result->append(decimal);
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::DECIMAL_SEPARATOR )
		goto label_cond_111;
	fieldPosition->setEndIndex(result->length());
label_cond_111:
	result->length();
	if ( !(parseAttr) )  
		goto label_cond_12c;
	//    .local v5, "decimalSeparatorBegin":I
	this->addAttribute(android::icu::text::NumberFormat_S_Field::DECIMAL_SEPARATOR, ( result->length() + -0x1), result->length());
	//    .end local v5    # "decimalSeparatorBegin":I
label_cond_12c:
	if ( fieldPosition->getField() != 0x1 )
		goto label_cond_23d;
	fieldPosition->setBeginIndex(result->length());
label_cond_143:
label_goto_143:
label_cond_149:
	if ( i >= this->digitList->count )
		goto label_cond_256;
	cVar0 = this->digitList->getDigitValue(i);
label_goto_169:
	result->append(digits[cVar0]);
	if ( !(recordFractionDigits) )  
		goto label_cond_17f;
	fractionalDigitsCount = ( fractionalDigitsCount + 0x1);
	fractionalDigits = (fractionalDigits * 0xa);
	fractionalDigits = (fractionalDigits + (long long)(cVar0));
label_cond_17f:
	i = ( i + 0x1);
	goto label_goto_aa;
	// 11954    .line 1622
	// 11955    .end local v4    # "decimal":Ljava/lang/String;
	// 11956    .end local v11    # "exponent":I
	// 11957    .end local v12    # "fracBegin":I
	// 11958    .end local v13    # "fractionalDigitsCount":I
	// 11959    .end local v14    # "fractionalDigits":J
	// 11960    .end local v16    # "i":I
	// 11961    .end local v17    # "intBegin":I
	// 11962    .end local v18    # "intEnd":I
	// 11963    .end local v19    # "integerDigits":I
	// 11964    .end local v20    # "maxIntDig":I
	// 11965    .end local v21    # "minFracDig":I
	// 11966    .end local v22    # "minIntDig":I
	// 11967    .end local v23    # "minimumDigits":I
	// 11968    .end local v26    # "totalDigits":I
	// 11969    .end local v27    # "useSigDig":Z
label_cond_183:
	this->symbols->getMonetaryDecimalSeparatorString();
	//    .restart local v4    # "decimal":Ljava/lang/String;
	goto label_goto_1c;
	// 11984    .line 1631
	// 11985    .restart local v20    # "maxIntDig":I
	// 11986    .restart local v22    # "minIntDig":I
	// 11987    .restart local v27    # "useSigDig":Z
label_cond_18f:
	if ( fieldPosition->getField() != 0x1 )
		goto label_cond_1a6;
	fieldPosition->setBeginIndex(-0x1);
	goto label_goto_42;
	// 12012    .line 1633
label_cond_1a6:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::INTEGER )
		goto label_cond_1c8;
	fieldPosition->setBeginIndex(result->length());
	fieldPosition->setEndIndex(-0x1);
	goto label_goto_42;
	// 12048    .line 1636
label_cond_1c8:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::FRACTION )
		goto label_cond_42;
	fieldPosition->setBeginIndex(-0x1);
	goto label_goto_42;
	// 12073    .line 1652
	// 12074    .restart local v12    # "fracBegin":I
	// 12075    .restart local v17    # "intBegin":I
	// 12076    .restart local v18    # "intEnd":I
	// 12077    .restart local v21    # "minFracDig":I
label_cond_1df:
	minFracDig = this->getMinimumFractionDigits();
	if ( maxIntDig <= 0x8 )
		goto label_cond_1f7;
	maxIntDig = 0x1;
	if ( 0x1 >= minIntDig )
		goto label_cond_1f7;
	maxIntDig = minIntDig;
label_cond_1f7:
	if ( maxIntDig <= minIntDig )
		goto label_cond_57;
	minIntDig = 0x1;
	goto label_goto_57;
	// 12120    .line 1679
	// 12121    .restart local v11    # "exponent":I
	// 12122    .restart local v13    # "fractionalDigitsCount":I
	// 12123    .restart local v14    # "fractionalDigits":J
	// 12124    .restart local v25    # "recordFractionDigits":Z
label_cond_201:
	exponent = ( (exponent / maxIntDig) + -0x1);
	goto label_goto_7a;
	// 12132    .line 1684
label_cond_207:
	if ( minIntDig > 0 ) 
		goto label_cond_20b;
	if ( minFracDig <= 0 )
		goto label_cond_211;
label_cond_20b:
	cVar1 = minIntDig;
label_goto_20d:
	exponent = (exponent - cVar1);
	goto label_goto_7c;
label_cond_211:
	cVar1 = 0x1;
	goto label_goto_20d;
	// 12151    .line 1694
	// 12152    .restart local v23    # "minimumDigits":I
label_cond_214:
	//    .restart local v19    # "integerDigits":I
	goto label_goto_8c;
	// 12171    .line 1706
	// 12172    .end local v25    # "recordFractionDigits":Z
	// 12173    .restart local v16    # "i":I
	// 12174    .restart local v26    # "totalDigits":I
label_cond_224:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::INTEGER )
		goto label_cond_c7;
	fieldPosition->setEndIndex(result->length());
	goto label_goto_c7;
	// 12201    .line 1733
label_cond_23d:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::FRACTION )
		goto label_cond_143;
	fieldPosition->setBeginIndex(result->length());
	goto label_goto_143;
	// 12228    .line 1739
label_cond_256:
	cVar0 = 0x0;
	//    .local v6, "digit":B
	goto label_goto_169;
	// 12235    .line 1749
	// 12236    .end local v6    # "digit":B
label_cond_259:
	if ( !(this->digitList->isZero()) )  
		goto label_cond_272;
	if ( totalDigits )     
		goto label_cond_272;
	result->append(digits[0x0]);
label_cond_272:
	if ( fracBegin != -0x1 )
		goto label_cond_2ca;
	if ( !(this->decimalSeparatorAlwaysShown) )  
		goto label_cond_2ca;
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::DECIMAL_SEPARATOR )
		goto label_cond_297;
	fieldPosition->setBeginIndex(result->length());
label_cond_297:
	result->append(decimal);
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::DECIMAL_SEPARATOR )
		goto label_cond_2b3;
	fieldPosition->setEndIndex(result->length());
label_cond_2b3:
	if ( !(parseAttr) )  
		goto label_cond_2ca;
	//    .restart local v5    # "decimalSeparatorBegin":I
	this->addAttribute(android::icu::text::NumberFormat_S_Field::DECIMAL_SEPARATOR, ( result->length() + -0x1), result->length());
	//    .end local v5    # "decimalSeparatorBegin":I
label_cond_2ca:
	if ( fieldPosition->getField() )     
		goto label_cond_429;
	if ( fieldPosition->getEndIndex() >= 0 )
		goto label_cond_2e1;
	fieldPosition->setEndIndex(result->length());
label_cond_2e1:
label_goto_2e1:
	if ( !(recordFractionDigits) )  
		goto label_cond_2ec;
	cVar3 = fieldPosition;
	cVar3->checkCast("android::icu::text::UFieldPosition");
	cVar3->setFractionDigits(fractionalDigitsCount, fractionalDigits);
label_cond_2ec:
	if ( !(parseAttr) )  
		goto label_cond_312;
	if ( -0x1 >= 0 )
		goto label_cond_301;
	this->addAttribute(android::icu::text::NumberFormat_S_Field::INTEGER, intBegin, result->length());
label_cond_301:
	if ( fracBegin <= 0 )
		goto label_cond_312;
	this->addAttribute(android::icu::text::NumberFormat_S_Field::FRACTION, fracBegin, result->length());
label_cond_312:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::EXPONENT_SYMBOL )
		goto label_cond_329;
	fieldPosition->setBeginIndex(result->length());
label_cond_329:
	result->append(this->symbols->getExponentSeparator());
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::EXPONENT_SYMBOL )
		goto label_cond_351;
	fieldPosition->setEndIndex(result->length());
label_cond_351:
	if ( !(parseAttr) )  
		goto label_cond_378;
	this->addAttribute(android::icu::text::NumberFormat_S_Field::EXPONENT_SYMBOL, (result->length() - this->symbols->getExponentSeparator()->length()), result->length());
label_cond_378:
	if ( !(this->digitList->isZero()) )  
		goto label_cond_385;
	exponent = 0x0;
label_cond_385:
	if ( exponent >= 0 )
		goto label_cond_49c;
	//    .local v24, "negativeExponent":Z
label_goto_389:
	if ( !(negativeExponent) )  
		goto label_cond_4a0;
	exponent = (0 - exponent);
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::EXPONENT_SIGN )
		goto label_cond_3a3;
	fieldPosition->setBeginIndex(result->length());
label_cond_3a3:
	result->append(this->symbols->getMinusSignString());
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::EXPONENT_SIGN )
		goto label_cond_3cb;
	fieldPosition->setEndIndex(result->length());
label_cond_3cb:
	if ( !(parseAttr) )  
		goto label_cond_3e4;
	this->addAttribute(android::icu::text::NumberFormat_S_Field::EXPONENT_SIGN, ( result->length() + -0x1), result->length());
label_cond_3e4:
label_goto_3e4:
	expBegin = result->length();
	//    .local v8, "expBegin":I
	this->digitList->set((long long)(exponent));
	expDig = this->minExponentDigits;
	//    .local v9, "expDig":I
	if ( !(this->useExponentialNotation) )  
		goto label_cond_40b;
	if ( expDig >= 0x1 )
		goto label_cond_40b;
label_cond_40b:
	i = this->digitList->decimalAt;
label_goto_417:
	if ( i >= expDig )
		goto label_cond_500;
	result->append(digits[0x0]);
	i = ( i + 0x1);
	goto label_goto_417;
	// 12764    .line 1774
	// 12765    .end local v8    # "expBegin":I
	// 12766    .end local v9    # "expDig":I
	// 12767    .end local v24    # "negativeExponent":Z
label_cond_429:
	if ( fieldPosition->getField() != 0x1 )
		goto label_cond_453;
	if ( fieldPosition->getBeginIndex() >= 0 )
		goto label_cond_446;
	fieldPosition->setBeginIndex(result->length());
label_cond_446:
	fieldPosition->setEndIndex(result->length());
	goto label_goto_2e1;
	// 12813    .line 1779
label_cond_453:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::INTEGER )
		goto label_cond_472;
	if ( fieldPosition->getEndIndex() >= 0 )
		goto label_cond_2e1;
	fieldPosition->setEndIndex(result->length());
	goto label_goto_2e1;
	// 12847    .line 1783
label_cond_472:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::FRACTION )
		goto label_cond_2e1;
	if ( fieldPosition->getBeginIndex() >= 0 )
		goto label_cond_48f;
	fieldPosition->setBeginIndex(result->length());
label_cond_48f:
	fieldPosition->setEndIndex(result->length());
	goto label_goto_2e1;
	// 12893    .line 1826
label_cond_49c:
	//    .restart local v24    # "negativeExponent":Z
	goto label_goto_389;
	// 12900    .line 1842
label_cond_4a0:
	if ( !(this->exponentSignAlwaysShown) )  
		goto label_cond_3e4;
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::EXPONENT_SIGN )
		goto label_cond_4bf;
	fieldPosition->setBeginIndex(result->length());
label_cond_4bf:
	result->append(this->symbols->getPlusSignString());
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::EXPONENT_SIGN )
		goto label_cond_4e7;
	fieldPosition->setEndIndex(result->length());
label_cond_4e7:
	if ( !(parseAttr) )  
		goto label_cond_3e4;
	//    .local v10, "expSignBegin":I
	this->addAttribute(android::icu::text::NumberFormat_S_Field::EXPONENT_SIGN, ( result->length() + -0x1), result->length());
	goto label_goto_3e4;
	// 13005    .line 1867
	// 13006    .end local v10    # "expSignBegin":I
	// 13007    .restart local v8    # "expBegin":I
	// 13008    .restart local v9    # "expDig":I
label_cond_500:
	i = 0x0;
label_goto_502:
	if ( i >= this->digitList->decimalAt )
		goto label_cond_545;
	if ( i >= this->digitList->count )
		goto label_cond_540;
	cVar4 = digits[this->digitList->getDigitValue(i)];
label_goto_536:
	result->append(cVar4);
	i = ( i + 0x1);
	goto label_goto_502;
	// 13078    .line 1869
label_cond_540:
	cVar4 = digits[0x0];
	goto label_goto_536;
	// 13086    .line 1872
label_cond_545:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::EXPONENT )
		goto label_cond_561;
	fieldPosition->setBeginIndex(expBegin);
	fieldPosition->setEndIndex(result->length());
label_cond_561:
	if ( !(parseAttr) )  
		goto label_cond_572;
	this->addAttribute(android::icu::text::NumberFormat_S_Field::EXPONENT, expBegin, result->length());
label_cond_572:
	return;

}
// .method private subformatFixed(Ljava/lang/StringBuffer;Ljava/text/FieldPosition;ZZ)V
void android::icu::text::DecimalFormat::subformatFixed(std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition,bool isInteger,bool parseAttr)
{
	
	auto digits;
	int useSigDig;
	int maxIntDig;
	int intBegin;
	long long fractionalDigits;
	int fractionalDigitsCount;
	int sigCount;
	int minSigDig;
	int maxSigDig;
	int count;
	int i;
	int digitIndex;
	int fractionPresent;
	int recordFractionDigits;
	int digit;
	
	//    .param p1, "result"    # Ljava/lang/StringBuffer;
	//    .param p2, "fieldPosition"    # Ljava/text/FieldPosition;
	//    .param p3, "isInteger"    # Z
	//    .param p4, "parseAttr"    # Z
	digits = this->symbols->getDigitStrings();
	//    .local v9, "digits":[Ljava/lang/String;
	if ( this->currencySignCount )     
		goto label_cond_16b;
	//    .local v15, "grouping":Ljava/lang/String;
label_goto_1c:
	if ( this->currencySignCount )     
		goto label_cond_177;
	//    .local v5, "decimal":Ljava/lang/String;
label_goto_2e:
	useSigDig = this->areSignificantDigitsUsed();
	//    .local v25, "useSigDig":Z
	maxIntDig = this->getMaximumIntegerDigits();
	//    .local v18, "maxIntDig":I
	//    .local v20, "minIntDig":I
	intBegin = result->length();
	//    .local v17, "intBegin":I
	if ( !(fieldPosition->getField()) )  
		goto label_cond_50;
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::INTEGER )
		goto label_cond_57;
label_cond_50:
	fieldPosition->setBeginIndex(intBegin);
label_cond_57:
	fractionalDigits = 0x0;
	//    .local v12, "fractionalDigits":J
	fractionalDigitsCount = 0x0;
	//    .local v14, "fractionalDigitsCount":I
	0x0;
	//    .local v22, "recordFractionDigits":Z
	sigCount = 0x0;
	//    .local v23, "sigCount":I
	this->getMinimumSignificantDigits();
	//    .local v21, "minSigDig":I
	this->getMaximumSignificantDigits();
	//    .local v19, "maxSigDig":I
	if ( useSigDig )     
		goto label_cond_6d;
	minSigDig = 0x0;
	maxSigDig = 0x7fffffff;
label_cond_6d:
	if ( !(useSigDig) )  
		goto label_cond_183;
	count = java::lang::Math::max(0x1, this->digitList->decimalAt);
	//    .local v4, "count":I
label_goto_85:
	if ( this->digitList->decimalAt <= 0 )
		goto label_cond_ad;
	if ( count >= this->digitList->decimalAt )
		goto label_cond_ad;
	count = this->digitList->decimalAt;
label_cond_ad:
	//    .local v7, "digitIndex":I
	if ( count <= maxIntDig )
		goto label_cond_c4;
	if ( maxIntDig < 0 ) 
		goto label_cond_c4;
	count = maxIntDig;
label_cond_c4:
	//    .local v24, "sizeBeforeIntegerPart":I
	i = ( count + -0x1);
	//    .local v16, "i":I
	digitIndex = 0x0;
	//    .end local v7    # "digitIndex":I
	//    .local v8, "digitIndex":I
label_goto_cb:
	if ( i < 0 ) 
		goto label_cond_199;
	if ( i >= this->digitList->decimalAt )
		goto label_cond_187;
	if ( digitIndex >= this->digitList->count )
		goto label_cond_187;
	if ( sigCount >= maxSigDig )
		goto label_cond_187;
	//    .end local v8    # "digitIndex":I
	//    .restart local v7    # "digitIndex":I
	result->append(digits[this->digitList->getDigitValue(digitIndex)]);
	sigCount = ( sigCount + 0x1);
label_goto_10e:
	if ( !(this->isGroupingPosition(i)) )  
		goto label_cond_166;
	result->append(this->symbols->getGroupingSeparatorString());
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::GROUPING_SEPARATOR )
		goto label_cond_14d;
	if ( fieldPosition->getBeginIndex() )     
		goto label_cond_14d;
	if ( fieldPosition->getEndIndex() )     
		goto label_cond_14d;
	fieldPosition->setBeginIndex(( result->length() + -0x1));
	fieldPosition->setEndIndex(result->length());
label_cond_14d:
	if ( !(parseAttr) )  
		goto label_cond_166;
	this->addAttribute(android::icu::text::NumberFormat_S_Field::GROUPING_SEPARATOR, ( result->length() + -0x1), result->length());
label_cond_166:
	i = ( i + -0x1);
	digitIndex = digitIndex;
	//    .end local v7    # "digitIndex":I
	//    .restart local v8    # "digitIndex":I
	goto label_goto_cb;
	// 13586    .line 1415
	// 13587    .end local v4    # "count":I
	// 13588    .end local v5    # "decimal":Ljava/lang/String;
	// 13589    .end local v8    # "digitIndex":I
	// 13590    .end local v12    # "fractionalDigits":J
	// 13591    .end local v14    # "fractionalDigitsCount":I
	// 13592    .end local v15    # "grouping":Ljava/lang/String;
	// 13593    .end local v16    # "i":I
	// 13594    .end local v17    # "intBegin":I
	// 13595    .end local v18    # "maxIntDig":I
	// 13596    .end local v19    # "maxSigDig":I
	// 13597    .end local v20    # "minIntDig":I
	// 13598    .end local v21    # "minSigDig":I
	// 13599    .end local v22    # "recordFractionDigits":Z
	// 13600    .end local v23    # "sigCount":I
	// 13601    .end local v24    # "sizeBeforeIntegerPart":I
	// 13602    .end local v25    # "useSigDig":Z
label_cond_16b:
	this->symbols->getMonetaryGroupingSeparatorString();
	//    .restart local v15    # "grouping":Ljava/lang/String;
	goto label_goto_1c;
	// 13617    .line 1417
label_cond_177:
	//    .restart local v5    # "decimal":Ljava/lang/String;
	goto label_goto_2e;
	// 13632    .line 1444
	// 13633    .restart local v12    # "fractionalDigits":J
	// 13634    .restart local v14    # "fractionalDigitsCount":I
	// 13635    .restart local v17    # "intBegin":I
	// 13636    .restart local v18    # "maxIntDig":I
	// 13637    .restart local v19    # "maxSigDig":I
	// 13638    .restart local v20    # "minIntDig":I
	// 13639    .restart local v21    # "minSigDig":I
	// 13640    .restart local v22    # "recordFractionDigits":Z
	// 13641    .restart local v23    # "sigCount":I
	// 13642    .restart local v25    # "useSigDig":Z
label_cond_183:
	count = this->getMinimumIntegerDigits();
	//    .restart local v4    # "count":I
	goto label_goto_85;
	// 13649    .line 1469
	// 13650    .restart local v8    # "digitIndex":I
	// 13651    .restart local v16    # "i":I
	// 13652    .restart local v24    # "sizeBeforeIntegerPart":I
label_cond_187:
	result->append(digits[0x0]);
	if ( sigCount <= 0 )
		goto label_cond_3ef;
	sigCount = ( sigCount + 0x1);
	//    .end local v8    # "digitIndex":I
	//    .restart local v7    # "digitIndex":I
	goto label_goto_10e;
	// 13676    .line 1493
	// 13677    .end local v7    # "digitIndex":I
	// 13678    .restart local v8    # "digitIndex":I
label_cond_199:
	if ( !(fieldPosition->getField()) )  
		goto label_cond_1ab;
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::INTEGER )
		goto label_cond_1b6;
label_cond_1ab:
	fieldPosition->setEndIndex(result->length());
label_cond_1b6:
	if ( sigCount )     
		goto label_cond_1c8;
	if ( this->digitList->count )     
		goto label_cond_1c8;
	sigCount = 0x1;
label_cond_1c8:
	if ( isInteger )     
		goto label_cond_301;
	if ( digitIndex >= this->digitList->count )
		goto label_cond_301;
	fractionPresent = 0x1;
	//    .local v11, "fractionPresent":Z
label_goto_1db:
	if ( fractionPresent )     
		goto label_cond_1f2;
	if ( result->length() != result->length() )
		goto label_cond_1f2;
	result->append(digits[0x0]);
label_cond_1f2:
	if ( !(parseAttr) )  
		goto label_cond_205;
	this->addAttribute(android::icu::text::NumberFormat_S_Field::INTEGER, intBegin, result->length());
label_cond_205:
	if ( this->decimalSeparatorAlwaysShown )     
		goto label_cond_20f;
	if ( !(fractionPresent) )  
		goto label_cond_25b;
label_cond_20f:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::DECIMAL_SEPARATOR )
		goto label_cond_226;
	fieldPosition->setBeginIndex(result->length());
label_cond_226:
	result->append(decimal);
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::DECIMAL_SEPARATOR )
		goto label_cond_242;
	fieldPosition->setEndIndex(result->length());
label_cond_242:
	if ( !(parseAttr) )  
		goto label_cond_25b;
	this->addAttribute(android::icu::text::NumberFormat_S_Field::DECIMAL_SEPARATOR, ( result->length() + -0x1), result->length());
label_cond_25b:
	if ( fieldPosition->getField() != 0x1 )
		goto label_cond_316;
	fieldPosition->setBeginIndex(result->length());
label_cond_272:
label_goto_272:
	//    .local v10, "fracBegin":I
	recordFractionDigits = fieldPosition->instanceOf("android::icu::text::UFieldPosition");
	//    .local v22, "recordFractionDigits":Z
	if ( !(useSigDig) )  
		goto label_cond_32f;
	count = 0x7fffffff;
label_goto_281:
	if ( !(useSigDig) )  
		goto label_cond_2a0;
	if ( sigCount == maxSigDig )
		goto label_cond_29f;
	if ( sigCount <  minSigDig )
		goto label_cond_2a0;
	if ( digitIndex != this->digitList->count )
		goto label_cond_2a0;
label_cond_29f:
	count = 0x0;
label_cond_2a0:
	i = 0x0;
label_goto_2a2:
	if ( i >= count )
		goto label_cond_3ec;
	if ( useSigDig )     
		goto label_cond_335;
	if ( i <  this->getMinimumFractionDigits() )
		goto label_cond_335;
	if ( isInteger )     
		goto label_cond_2c4;
	if ( digitIndex <  this->digitList->count )
		goto label_cond_335;
label_cond_2c4:
	digitIndex;
	//    .end local v8    # "digitIndex":I
	//    .restart local v7    # "digitIndex":I
label_cond_2c5:
label_goto_2c5:
	if ( fieldPosition->getField() != 0x1 )
		goto label_cond_3d1;
	fieldPosition->setEndIndex(result->length());
label_cond_2dc:
label_goto_2dc:
	if ( !(recordFractionDigits) )  
		goto label_cond_2e5;
	fieldPosition->checkCast("android::icu::text::UFieldPosition");
	//    .end local p2    # "fieldPosition":Ljava/text/FieldPosition;
	fieldPosition->setFractionDigits(fractionalDigitsCount, fractionalDigits);
label_cond_2e5:
	if ( !(parseAttr) )  
		goto label_cond_300;
	if ( this->decimalSeparatorAlwaysShown )     
		goto label_cond_2f1;
	if ( !(fractionPresent) )  
		goto label_cond_300;
label_cond_2f1:
	this->addAttribute(android::icu::text::NumberFormat_S_Field::FRACTION, result->length(), result->length());
label_cond_300:
	return;
	// 14097    .line 1509
	// 14098    .end local v7    # "digitIndex":I
	// 14099    .end local v10    # "fracBegin":I
	// 14100    .end local v11    # "fractionPresent":Z
	// 14101    .restart local v8    # "digitIndex":I
	// 14102    .local v22, "recordFractionDigits":Z
	// 14103    .restart local p2    # "fieldPosition":Ljava/text/FieldPosition;
label_cond_301:
	if ( !(useSigDig) )  
		goto label_cond_30f;
	if ( sigCount >= minSigDig )
		goto label_cond_30c;
label_goto_309:
	//    .restart local v11    # "fractionPresent":Z
	goto label_goto_1db;
	// 14119    .end local v11    # "fractionPresent":Z
label_cond_30c:
	//    .restart local v11    # "fractionPresent":Z
	goto label_goto_1db;
	// 14126    .end local v11    # "fractionPresent":Z
label_cond_30f:
	if ( this->getMinimumFractionDigits() <= 0 )
		goto label_cond_30c;
	goto label_goto_309;
	// 14136    .line 1538
	// 14137    .restart local v11    # "fractionPresent":Z
label_cond_316:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::FRACTION )
		goto label_cond_272;
	fieldPosition->setBeginIndex(result->length());
	goto label_goto_272;
	// 14164    .line 1546
	// 14165    .restart local v10    # "fracBegin":I
	// 14166    .local v22, "recordFractionDigits":Z
label_cond_32f:
	count = this->getMaximumFractionDigits();
	goto label_goto_281;
	// 14174    .line 1565
label_cond_335:
	if ( ( i - -0x1) <= ( this->digitList->decimalAt + -0x1) )
		goto label_cond_364;
	result->append(digits[0x0]);
	if ( !(recordFractionDigits) )  
		goto label_cond_35e;
	fractionalDigitsCount = ( fractionalDigitsCount + 0x1);
	fractionalDigits = (fractionalDigits * 0xa);
label_cond_35e:
	//    .end local v8    # "digitIndex":I
	//    .restart local v7    # "digitIndex":I
label_cond_35f:
	i = ( i + 0x1);
	digitIndex = digitIndex;
	//    .end local v7    # "digitIndex":I
	//    .restart local v8    # "digitIndex":I
	goto label_goto_2a2;
	// 14235    .line 1576
label_cond_364:
	if ( isInteger )     
		goto label_cond_3bc;
	if ( digitIndex >= this->digitList->count )
		goto label_cond_3bc;
	digitIndex = ( digitIndex + 0x1);
	//    .end local v8    # "digitIndex":I
	//    .restart local v7    # "digitIndex":I
	digit = this->digitList->getDigitValue(digitIndex);
	//    .local v6, "digit":B
	result->append(digits[digit]);
	if ( !(recordFractionDigits) )  
		goto label_cond_39a;
	fractionalDigitsCount = ( fractionalDigitsCount + 0x1);
	fractionalDigits = (fractionalDigits * 0xa);
	fractionalDigits = (fractionalDigits + (long long)(digit));
	//    .end local v6    # "digit":B
label_cond_39a:
label_goto_39a:
	sigCount = ( sigCount + 0x1);
	if ( !(useSigDig) )  
		goto label_cond_35f;
	if ( sigCount == maxSigDig )
		goto label_cond_2c5;
	if ( digitIndex != this->digitList->count )
		goto label_cond_35f;
	if ( sigCount <  minSigDig )
		goto label_cond_35f;
	goto label_goto_2c5;
	// 14340    .line 1585
	// 14341    .end local v7    # "digitIndex":I
	// 14342    .restart local v8    # "digitIndex":I
label_cond_3bc:
	result->append(digits[0x0]);
	if ( !(recordFractionDigits) )  
		goto label_cond_3ea;
	fractionalDigitsCount = ( fractionalDigitsCount + 0x1);
	fractionalDigits = (fractionalDigits * 0xa);
	//    .end local v8    # "digitIndex":I
	//    .restart local v7    # "digitIndex":I
	goto label_goto_39a;
	// 14371    .line 1604
label_cond_3d1:
	if ( fieldPosition->getFieldAttribute() != android::icu::text::NumberFormat_S_Field::FRACTION )
		goto label_cond_2dc;
	fieldPosition->setEndIndex(result->length());
	goto label_goto_2dc;
	// 14398    .end local v7    # "digitIndex":I
	// 14399    .restart local v8    # "digitIndex":I
label_cond_3ea:
	//    .end local v8    # "digitIndex":I
	//    .restart local v7    # "digitIndex":I
	goto label_goto_39a;
	// 14407    .end local v7    # "digitIndex":I
	// 14408    .restart local v8    # "digitIndex":I
label_cond_3ec:
	digitIndex;
	//    .end local v8    # "digitIndex":I
	//    .restart local v7    # "digitIndex":I
	goto label_goto_2c5;
	// 14416    .end local v7    # "digitIndex":I
	// 14417    .end local v10    # "fracBegin":I
	// 14418    .end local v11    # "fractionPresent":Z
	// 14419    .restart local v8    # "digitIndex":I
	// 14420    .local v22, "recordFractionDigits":Z
label_cond_3ef:
	//    .end local v8    # "digitIndex":I
	//    .restart local v7    # "digitIndex":I
	goto label_goto_10e;

}
// .method private final subparse(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/DigitList;[Z[Landroid/icu/util/Currency;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZI)Z
bool android::icu::text::DecimalFormat::subparse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,std::shared_ptr<android::icu::text::DigitList> digits,std::shared_ptr<bool[]> status,std::shared_ptr<std::vector<android::icu::util::Currency>> currency,std::shared_ptr<java::lang::String> negPrefix,std::shared_ptr<java::lang::String> negSuffix,std::shared_ptr<java::lang::String> posPrefix,std::shared_ptr<java::lang::String> posSuffix,bool parseComplexCurrency,int type)
{
	
	int position;
	int oldStart;
	int posMatch;
	int negMatch;
	int cVar0;
	int cVar1;
	bool cVar4;
	std::shared_ptr<java::lang::String> decimal;
	std::shared_ptr<java::lang::String> grouping;
	std::shared_ptr<java::lang::String> exponentSep;
	int sawDecimal;
	int sawGrouping;
	int sawDigit;
	auto exponent;
	int strictParse;
	int strictFail;
	int lastGroup;
	int groupedDigitCount;
	int gs2;
	int digitCount;
	int backup;
	auto parsedDigit;
	int matchLen;
	long long exponent;
	int decimalStrLen;
	int groupingStrLen;
	int cp;
	int negExp;
	int pos;
	std::shared_ptr<java::lang::String> plusSign;
	std::shared_ptr<java::lang::String> minusSign;
	std::shared_ptr<android::icu::text::DigitList> exponentDigits;
	int digitMatchLen;
	auto grouping;
	auto decimal;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	//    .param p3, "digits"    # Landroid/icu/text/DigitList;
	//    .param p4, "status"    # [Z
	//    .param p5, "currency"    # [Landroid/icu/util/Currency;
	//    .param p6, "negPrefix"    # Ljava/lang/String;
	//    .param p7, "negSuffix"    # Ljava/lang/String;
	//    .param p8, "posPrefix"    # Ljava/lang/String;
	//    .param p9, "posSuffix"    # Ljava/lang/String;
	//    .param p10, "parseComplexCurrency"    # Z
	//    .param p11, "type"    # I
	position = parsePosition->getIndex();
	//    .local v6, "position":I
	oldStart = parsePosition->getIndex();
	//    .local v39, "oldStart":I
	if ( this->formatWidth <= 0 )
		goto label_cond_1c;
	if ( this->padPosition )     
		goto label_cond_1c;
	position = this->skipPadding(text, position);
label_cond_1c:
	posMatch = this->compareAffix(text, position, 0x0, 0x1, posPrefix, parseComplexCurrency, type, currency);
	//    .local v43, "posMatch":I
	negMatch = this->compareAffix(text, position, 0x1, 0x1, negPrefix, parseComplexCurrency, type, currency);
	//    .local v38, "negMatch":I
	if ( posMatch < 0 ) 
		goto label_cond_4c;
	if ( negMatch < 0 ) 
		goto label_cond_4c;
	if ( posMatch <= negMatch )
		goto label_cond_f2;
	negMatch = -0x1;
label_cond_4c:
label_goto_4c:
	if ( posMatch < 0 ) 
		goto label_cond_fc;
	position = (position + posMatch);
label_goto_50:
	if ( this->formatWidth <= 0 )
		goto label_cond_65;
	if ( this->padPosition != 0x1 )
		goto label_cond_65;
	position = this->skipPadding(text, position);
label_cond_65:
	status[0x0] = 0x0;
	if ( !(text->regionMatches(position, this->symbols->getInfinity(), 0x0, this->symbols->getInfinity()->length())) )  
		goto label_cond_109;
	position = (position +  this->symbols->getInfinity()->length());
	status[0x0] = 0x1;
label_cond_97:
	if ( this->formatWidth <= 0 )
		goto label_cond_ac;
	if ( this->padPosition != 0x2 )
		goto label_cond_ac;
	position = this->skipPadding(text, position);
label_cond_ac:
	if ( posMatch < 0 ) 
		goto label_cond_c1;
	posMatch = this->compareAffix(text, position, 0x0, 0x0, posSuffix, parseComplexCurrency, type, currency);
label_cond_c1:
	if ( negMatch < 0 ) 
		goto label_cond_d6;
	negMatch = this->compareAffix(text, position, 0x1, 0x0, negSuffix, parseComplexCurrency, type, currency);
label_cond_d6:
	if ( posMatch < 0 ) 
		goto label_cond_e2;
	if ( negMatch < 0 ) 
		goto label_cond_e2;
	if ( posMatch <= negMatch )
		goto label_cond_44c;
	negMatch = -0x1;
label_cond_e2:
label_goto_e2:
	if ( posMatch < 0 ) 
		goto label_cond_456;
	cVar0 = 0x1;
label_goto_e6:
	if ( negMatch < 0 ) 
		goto label_cond_45a;
	cVar1 = 0x1;
label_goto_e9:
	if ( cVar0 != cVar1 )
		goto label_cond_45d;
	parsePosition->setErrorIndex(position);
	return 0x0;
	// 14756    .line 2417
label_cond_f2:
	if ( negMatch <= posMatch )
		goto label_cond_4c;
	posMatch = -0x1;
	goto label_goto_4c;
	// 14769    .line 2423
label_cond_fc:
	if ( negMatch < 0 ) 
		goto label_cond_102;
	position = (position + negMatch);
	goto label_goto_50;
	// 14778    .line 2426
label_cond_102:
	parsePosition->setErrorIndex(position);
	return 0x0;
	// 14789    .line 2448
label_cond_109:
	digits->count = 0x0;
	digits->decimalAt = 0x0;
	if ( this->currencySignCount )     
		goto label_cond_1bb;
	decimal = this->symbols->getDecimalSeparatorString();
	//    .local v21, "decimal":Ljava/lang/String;
label_goto_121:
	if ( this->currencySignCount )     
		goto label_cond_1c5;
	grouping = this->symbols->getGroupingSeparatorString();
	//    .local v31, "grouping":Ljava/lang/String;
label_goto_12f:
	exponentSep = this->symbols->getExponentSeparator();
	//    .local v7, "exponentSep":Ljava/lang/String;
	sawDecimal = 0x0;
	//    .local v44, "sawDecimal":Z
	sawGrouping = 0x0;
	//    .local v46, "sawGrouping":Z
	sawDigit = 0x0;
	//    .local v45, "sawDigit":Z
	exponent = 0x0;
	//    .local v26, "exponent":J
	strictParse = this->isParseStrict();
	//    .local v48, "strictParse":Z
	strictFail = 0x0;
	//    .local v47, "strictFail":Z
	lastGroup = -0x1;
	//    .local v34, "lastGroup":I
	groupedDigitCount = 0x0;
	//    .local v30, "groupedDigitCount":I
	if ( this->groupingSize2 )     
		goto label_cond_1cf;
	gs2 = this->groupingSize;
	//    .local v33, "gs2":I
label_goto_155:
	if ( !(android::icu::text::DecimalFormat::skipExtendedSeparatorParsing) )  
		goto label_cond_1d6;
	//    .local v22, "decimalEquiv":Landroid/icu/text/UnicodeSet;
label_goto_15b:
	if ( !(android::icu::text::DecimalFormat::skipExtendedSeparatorParsing) )  
		goto label_cond_1e2;
	//    .local v29, "groupEquiv":Landroid/icu/text/UnicodeSet;
label_goto_161:
	digitCount = 0x0;
	//    .local v24, "digitCount":I
	backup = -0x1;
	//    .local v19, "backup":I
	parsedDigit = std::make_shared<std::vector<int[]>>(0x1);
	parsedDigit[0x0] = -0x1;
	//    .local v40, "parsedDigit":[I
label_cond_16e:
label_goto_16e:
	if ( position >= text->length() )
		goto label_cond_194;
	matchLen = this->matchesDigit(text, position, parsedDigit);
	//    .local v35, "matchLen":I
	if ( matchLen <= 0 )
		goto label_cond_22b;
	if ( backup == -0x1 )
		goto label_cond_1fb;
	if ( !(strictParse) )  
		goto label_cond_1f7;
	if ( lastGroup == -0x1 )
		goto label_cond_1ec;
	if ( groupedDigitCount == gs2 )
		goto label_cond_1ec;
label_cond_192:
	strictFail = 0x1;
	//    .end local v35    # "matchLen":I
label_cond_194:
label_goto_194:
	if ( digits->decimalAt )     
		goto label_cond_3d9;
	if ( !(this->isDecimalPatternMatchRequired()) )  
		goto label_cond_3d9;
	if ( this->formatPattern->indexOf(decimal) == -0x1 )
		goto label_cond_3d9;
	parsePosition->setIndex(oldStart);
	parsePosition->setErrorIndex(position);
	return 0x0;
	// 15037    .line 2450
	// 15038    .end local v7    # "exponentSep":Ljava/lang/String;
	// 15039    .end local v19    # "backup":I
	// 15040    .end local v21    # "decimal":Ljava/lang/String;
	// 15041    .end local v22    # "decimalEquiv":Landroid/icu/text/UnicodeSet;
	// 15042    .end local v24    # "digitCount":I
	// 15043    .end local v26    # "exponent":J
	// 15044    .end local v29    # "groupEquiv":Landroid/icu/text/UnicodeSet;
	// 15045    .end local v30    # "groupedDigitCount":I
	// 15046    .end local v31    # "grouping":Ljava/lang/String;
	// 15047    .end local v33    # "gs2":I
	// 15048    .end local v34    # "lastGroup":I
	// 15049    .end local v40    # "parsedDigit":[I
	// 15050    .end local v44    # "sawDecimal":Z
	// 15051    .end local v45    # "sawDigit":Z
	// 15052    .end local v46    # "sawGrouping":Z
	// 15053    .end local v47    # "strictFail":Z
	// 15054    .end local v48    # "strictParse":Z
label_cond_1bb:
	decimal = this->symbols->getMonetaryDecimalSeparatorString();
	//    .restart local v21    # "decimal":Ljava/lang/String;
	goto label_goto_121;
	// 15067    .line 2452
label_cond_1c5:
	grouping = this->symbols->getMonetaryGroupingSeparatorString();
	//    .restart local v31    # "grouping":Ljava/lang/String;
	goto label_goto_12f;
	// 15080    .line 2465
	// 15081    .restart local v7    # "exponentSep":Ljava/lang/String;
	// 15082    .restart local v26    # "exponent":J
	// 15083    .restart local v30    # "groupedDigitCount":I
	// 15084    .restart local v34    # "lastGroup":I
	// 15085    .restart local v44    # "sawDecimal":Z
	// 15086    .restart local v45    # "sawDigit":Z
	// 15087    .restart local v46    # "sawGrouping":Z
	// 15088    .restart local v47    # "strictFail":Z
	// 15089    .restart local v48    # "strictParse":Z
label_cond_1cf:
	this->groupingSize2;
	goto label_goto_155;
	// 15099    .line 2468
	// 15100    .restart local v33    # "gs2":I
label_cond_1d6:
	this->getEquivalentDecimals(decimal, strictParse);
	//    .restart local v22    # "decimalEquiv":Landroid/icu/text/UnicodeSet;
	goto label_goto_15b;
	// 15115    .line 2470
label_cond_1e2:
	if ( !(strictParse) )  
		goto label_cond_1e8;
	android::icu::text::DecimalFormat::strictDefaultGroupingSeparators;
	//    .restart local v29    # "groupEquiv":Landroid/icu/text/UnicodeSet;
	goto label_goto_161;
	// 15124    .end local v29    # "groupEquiv":Landroid/icu/text/UnicodeSet;
label_cond_1e8:
	android::icu::text::DecimalFormat::defaultGroupingSeparators;
	//    .restart local v29    # "groupEquiv":Landroid/icu/text/UnicodeSet;
	goto label_goto_161;
	// 15131    .line 2492
	// 15132    .restart local v19    # "backup":I
	// 15133    .restart local v24    # "digitCount":I
	// 15134    .restart local v35    # "matchLen":I
	// 15135    .restart local v40    # "parsedDigit":[I
label_cond_1ec:
	if ( lastGroup != -0x1 )
		goto label_cond_1f7;
	if ( groupedDigitCount >  gs2 )
		goto label_cond_192;
label_cond_1f7:
	lastGroup = backup;
	groupedDigitCount = 0x0;
label_cond_1fb:
	groupedDigitCount = ( groupedDigitCount + 0x1);
	position = (position + matchLen);
	backup = -0x1;
	0x1;
	if ( parsedDigit[0x0] )     
		goto label_cond_21c;
	if ( digits->count )     
		goto label_cond_21c;
	if ( !(sawDecimal) )  
		goto label_cond_16e;
	digits->decimalAt = ( digits->decimalAt + -0x1);
	goto label_goto_16e;
	// 15198    .line 2516
label_cond_21c:
	digitCount = ( digitCount + 0x1);
	digits->append((char)(( parsedDigit[0x0] + 0x30)));
	goto label_goto_16e;
	// 15217    .line 2523
label_cond_22b:
	decimalStrLen = decimal->length();
	//    .local v23, "decimalStrLen":I
	if ( !(text->regionMatches(position, decimal, 0x0, decimalStrLen)) )  
		goto label_cond_268;
	if ( !(strictParse) )  
		goto label_cond_254;
	if ( backup != -0x1 )
		goto label_cond_250;
	if ( lastGroup == -0x1 )
		goto label_cond_254;
	if ( groupedDigitCount == this->groupingSize )
		goto label_cond_254;
label_cond_250:
	strictFail = 0x1;
	goto label_goto_194;
	// 15271    .line 2536
label_cond_254:
	if ( this->isParseIntegerOnly() )     
		goto label_cond_194;
	if ( sawDecimal )     
		goto label_cond_194;
	digits->decimalAt = digitCount;
	sawDecimal = 0x1;
	position = (position + decimalStrLen);
	goto label_goto_16e;
	// 15297    .line 2546
label_cond_268:
	if ( !(this->isGroupingUsed()) )  
		goto label_cond_296;
	groupingStrLen = grouping->length();
	//    .local v32, "groupingStrLen":I
	if ( !(text->regionMatches(position, grouping, 0x0, groupingStrLen)) )  
		goto label_cond_296;
	if ( sawDecimal )     
		goto label_cond_194;
	if ( !(strictParse) )  
		goto label_cond_28e;
	if ( !(sawDigit) )  
		goto label_cond_28a;
	if ( backup == -0x1 )
		goto label_cond_28e;
label_cond_28a:
	strictFail = 0x1;
	goto label_goto_194;
	// 15348    .line 2565
label_cond_28e:
	backup = position;
	position = (position + groupingStrLen);
	0x1;
	goto label_goto_16e;
	// 15361    .line 2573
	// 15362    .end local v32    # "groupingStrLen":I
label_cond_296:
	cp = text->codePointAt(position);
	//    .local v20, "cp":I
	if ( sawDecimal )     
		goto label_cond_2dd;
	if ( !(android::icu::text::UnicodeSet::EMPTY->contains(cp)) )  
		goto label_cond_2dd;
	if ( !(strictParse) )  
		goto label_cond_2c0;
	if ( backup != -0x1 )
		goto label_cond_2bc;
	if ( lastGroup == -0x1 )
		goto label_cond_2c0;
	if ( groupedDigitCount == this->groupingSize )
		goto label_cond_2c0;
label_cond_2bc:
	strictFail = 0x1;
	goto label_goto_194;
	// 15416    .line 2586
label_cond_2c0:
	if ( this->isParseIntegerOnly() )     
		goto label_cond_194;
	digits->decimalAt = digitCount;
	decimal = java::lang::String::valueOf(java::lang::Character::toChars(cp));
	sawDecimal = 0x1;
	position = (position +  java::lang::Character::charCount(cp));
	goto label_goto_16e;
	// 15453    .line 2601
label_cond_2dd:
	if ( !(this->isGroupingUsed()) )  
		goto label_cond_313;
	if ( !(( sawGrouping ^ 0x1)) )  
		goto label_cond_313;
	if ( !(android::icu::text::UnicodeSet::EMPTY->contains(cp)) )  
		goto label_cond_313;
	if ( sawDecimal )     
		goto label_cond_194;
	if ( !(strictParse) )  
		goto label_cond_300;
	if ( !(sawDigit) )  
		goto label_cond_2fc;
	if ( backup == -0x1 )
		goto label_cond_300;
label_cond_2fc:
	strictFail = 0x1;
	goto label_goto_194;
	// 15497    .line 2617
label_cond_300:
	grouping = java::lang::String::valueOf(java::lang::Character::toChars(cp));
	backup = position;
	position = (position +  java::lang::Character::charCount(cp));
	sawGrouping = 0x1;
	goto label_goto_16e;
	// 15523    .line 2629
label_cond_313:
	//    .local v9, "exponentSepStrLen":I
	if ( !(text->regionMatches(0x1, position, exponentSep, 0x0, exponentSep->length())) )  
		goto label_cond_194;
	negExp = 0x0;
	//    .local v37, "negExp":Z
	pos = (position + exponentSep->length());
	//    .local v42, "pos":I
	if ( pos >= text->length() )
		goto label_cond_358;
	plusSign = this->symbols->getPlusSignString();
	//    .local v41, "plusSign":Ljava/lang/String;
	minusSign = this->symbols->getMinusSignString();
	//    .local v36, "minusSign":Ljava/lang/String;
	if ( !(text->regionMatches(pos, plusSign, 0x0, plusSign->length())) )  
		goto label_cond_386;
	pos = (pos + plusSign->length());
	//    .end local v36    # "minusSign":Ljava/lang/String;
	//    .end local v41    # "plusSign":Ljava/lang/String;
label_cond_358:
label_goto_358:
	exponentDigits = std::make_shared<android::icu::text::DigitList>();
	//    .local v28, "exponentDigits":Landroid/icu/text/DigitList;
	exponentDigits->count = 0x0;
label_goto_362:
	if ( pos >= text->length() )
		goto label_cond_3a0;
	digitMatchLen = this->matchesDigit(text, pos, parsedDigit);
	//    .local v25, "digitMatchLen":I
	if ( digitMatchLen <= 0 )
		goto label_cond_3a0;
	exponentDigits->append((char)(( parsedDigit[0x0] + 0x30)));
	pos = (pos + digitMatchLen);
	goto label_goto_362;
	// 15672    .line 2639
	// 15673    .end local v25    # "digitMatchLen":I
	// 15674    .end local v28    # "exponentDigits":Landroid/icu/text/DigitList;
	// 15675    .restart local v36    # "minusSign":Ljava/lang/String;
	// 15676    .restart local v41    # "plusSign":Ljava/lang/String;
label_cond_386:
	if ( !(text->regionMatches(pos, minusSign, 0x0, minusSign->length())) )  
		goto label_cond_358;
	pos = (pos + minusSign->length());
	0x1;
	goto label_goto_358;
	// 15708    .line 2657
	// 15709    .end local v36    # "minusSign":Ljava/lang/String;
	// 15710    .end local v41    # "plusSign":Ljava/lang/String;
	// 15711    .restart local v28    # "exponentDigits":Landroid/icu/text/DigitList;
label_cond_3a0:
	if ( exponentDigits->count <= 0 )
		goto label_cond_194;
	if ( !(strictParse) )  
		goto label_cond_3ae;
	if ( !(sawGrouping) )  
		goto label_cond_3ae;
	strictFail = 0x1;
	goto label_goto_194;
	// 15730    .line 2666
label_cond_3ae:
	if ( exponentDigits->count <= 0xa )
		goto label_cond_3c5;
	if ( !(negExp) )  
		goto label_cond_3c0;
	status[0x2] = 0x1;
label_cond_3bc:
label_goto_3bc:
	position = pos;
	goto label_goto_194;
	// 15757    .line 2672
label_cond_3c0:
	status[0x0] = 0x1;
	goto label_goto_3bc;
	// 15767    .line 2675
label_cond_3c5:
	exponentDigits->decimalAt = exponentDigits->count;
	exponent = exponentDigits->getLong();
	if ( !(negExp) )  
		goto label_cond_3bc;
	exponent = (0 - exponent);
	goto label_goto_3bc;
	// 15794    .line 2699
	// 15795    .end local v9    # "exponentSepStrLen":I
	// 15796    .end local v20    # "cp":I
	// 15797    .end local v23    # "decimalStrLen":I
	// 15798    .end local v28    # "exponentDigits":Landroid/icu/text/DigitList;
	// 15799    .end local v35    # "matchLen":I
	// 15800    .end local v37    # "negExp":Z
	// 15801    .end local v42    # "pos":I
label_cond_3d9:
	if ( backup == -0x1 )
		goto label_cond_3e0;
	position = backup;
label_cond_3e0:
	if ( sawDecimal )     
		goto label_cond_3e8;
	digits->decimalAt = digitCount;
label_cond_3e8:
	if ( !(strictParse) )  
		goto label_cond_3fd;
	if ( !(( sawDecimal ^ 0x1)) )  
		goto label_cond_3fd;
	if ( lastGroup == -0x1 )
		goto label_cond_3fd;
	if ( groupedDigitCount == this->groupingSize )
		goto label_cond_3fd;
	strictFail = 0x1;
label_cond_3fd:
	if ( !(strictFail) )  
		goto label_cond_40d;
	parsePosition->setIndex(oldStart);
	parsePosition->setErrorIndex(position);
	return 0x0;
	// 15870    .line 2724
label_cond_40d:
	exponent = (exponent + (long long)(digits->decimalAt));
	if ( (exponent > (long long)((0 - this->getParseMaxDigits()))) >= 0 )
		goto label_cond_436;
	status[0x2] = 0x1;
label_goto_422:
	if ( sawDigit )     
		goto label_cond_97;
	if ( digitCount )     
		goto label_cond_97;
	parsePosition->setIndex(oldStart);
	parsePosition->setErrorIndex(oldStart);
	return 0x0;
	// 15925    .line 2727
label_cond_436:
	if ( (exponent > (long long)(this->getParseMaxDigits())) <= 0 )
		goto label_cond_444;
	status[0x0] = 0x1;
	goto label_goto_422;
	// 15946    .line 2730
label_cond_444:
	digits->decimalAt = (int)(exponent);
	goto label_goto_422;
	// 15958    .line 2758
	// 15959    .end local v7    # "exponentSep":Ljava/lang/String;
	// 15960    .end local v19    # "backup":I
	// 15961    .end local v21    # "decimal":Ljava/lang/String;
	// 15962    .end local v22    # "decimalEquiv":Landroid/icu/text/UnicodeSet;
	// 15963    .end local v24    # "digitCount":I
	// 15964    .end local v26    # "exponent":J
	// 15965    .end local v29    # "groupEquiv":Landroid/icu/text/UnicodeSet;
	// 15966    .end local v30    # "groupedDigitCount":I
	// 15967    .end local v31    # "grouping":Ljava/lang/String;
	// 15968    .end local v33    # "gs2":I
	// 15969    .end local v34    # "lastGroup":I
	// 15970    .end local v40    # "parsedDigit":[I
	// 15971    .end local v44    # "sawDecimal":Z
	// 15972    .end local v45    # "sawDigit":Z
	// 15973    .end local v46    # "sawGrouping":Z
	// 15974    .end local v47    # "strictFail":Z
	// 15975    .end local v48    # "strictParse":Z
label_cond_44c:
	if ( negMatch <= posMatch )
		goto label_cond_e2;
	posMatch = -0x1;
	goto label_goto_e2;
	// 15988    .line 2764
label_cond_456:
	cVar0 = 0x0;
	goto label_goto_e6;
label_cond_45a:
	cVar1 = 0x0;
	goto label_goto_e9;
	// 16001    .line 2769
label_cond_45d:
	if ( posMatch < 0 ) 
		goto label_cond_461;
	//    .end local v38    # "negMatch":I
label_cond_461:
	position = (position + negMatch);
	if ( this->formatWidth <= 0 )
		goto label_cond_478;
	if ( this->padPosition != 0x3 )
		goto label_cond_478;
	position = this->skipPadding(text, position);
label_cond_478:
	parsePosition->setIndex(position);
	if ( posMatch < 0 ) 
		goto label_cond_492;
	cVar4 = 0x1;
label_goto_480:
	status[0x1] = cVar4;
	if ( parsePosition->getIndex() != oldStart )
		goto label_cond_494;
	parsePosition->setErrorIndex(position);
	return 0x0;
	// 16070    .line 2778
label_cond_492:
	cVar4 = 0x0;
	goto label_goto_480;
	// 16076    .line 2784
label_cond_494:
	return 0x1;

}
// .method private toPattern(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat::toPattern(bool localized)
{
	
	std::shared_ptr<java::lang::StringBuffer> result;
	int cVar0;
	char cVar1;
	int useSigDig;
	char cVar2;
	int padPos;
	std::shared_ptr<java::lang::StringBuffer> cVar3;
	int cVar4;
	std::shared_ptr<java::lang::String> cVar5;
	int i;
	std::shared_ptr<java::lang::String> roundingDigits;
	int roundingDecimalPos;
	int part;
	int cVar6;
	int sub0Start;
	int g;
	int maxDig;
	int minDig;
	int maxSigDig;
	int cVar7;
	int pos;
	int cVar11;
	int cVar13;
	int cVar14;
	int cVar17;
	int cVar19;
	int cVar21;
	int add;
	int cVar23;
	std::shared_ptr<java::lang::StringBuilder> cVar24;
	int cVar26;
	
	//    .param p1, "localized"    # Z
	result = std::make_shared<java::lang::StringBuffer>();
	//    .local v17, "result":Ljava/lang/StringBuffer;
	if ( !(localized) )  
		goto label_cond_161;
	cVar0 = this->symbols->getZeroDigit();
label_goto_11:
	if ( !(localized) )  
		goto label_cond_165;
	cVar1 = this->symbols->getDigit();
label_goto_1d:
	0x0;
	//    .local v20, "sigDigit":C
	useSigDig = this->areSignificantDigitsUsed();
	//    .local v22, "useSigDig":Z
	if ( !(useSigDig) )  
		goto label_cond_31;
	if ( !(localized) )  
		goto label_cond_169;
	//    .end local v20    # "sigDigit":C
label_cond_31:
label_goto_31:
	if ( !(localized) )  
		goto label_cond_16d;
	cVar2 = this->symbols->getGroupingSeparator();
label_goto_3d:
	0x0;
	//    .local v18, "roundingDecimalPos":I
	0x0;
	//    .local v19, "roundingDigits":Ljava/lang/String;
	if ( this->formatWidth <= 0 )
		goto label_cond_171;
	padPos = this->padPosition;
	//    .local v13, "padPos":I
label_goto_4d:
	if ( this->formatWidth <= 0 )
		goto label_cond_178;
	var38 = cVar3(0x2);
	if ( !(localized) )  
		goto label_cond_174;
	cVar4 = this->symbols->getPadEscape();
label_goto_6c:
	cVar5 = cVar3->append(cVar4)->append(this->pad)->toString();
label_goto_82:
	if ( !(this->roundingIncrementICU) )  
		goto label_cond_aa;
	i = this->roundingIncrementICU->scale();
	//    .local v9, "i":I
	roundingDigits = this->roundingIncrementICU->movePointRight(i)->toString();
	//    .local v19, "roundingDigits":Ljava/lang/String;
	roundingDecimalPos = (roundingDigits->length() - i);
	//    .end local v9    # "i":I
	//    .end local v19    # "roundingDigits":Ljava/lang/String;
label_cond_aa:
	part = 0x0;
	//    .local v15, "part":I
label_goto_ab:
	if ( part >= 0x2 )
		goto label_cond_385;
	if ( padPos )     
		goto label_cond_b8;
	result->append(cVar5);
label_cond_b8:
	if ( !(part) )  
		goto label_cond_17b;
	cVar6 = 0x1;
label_goto_bc:
	this->appendAffixPattern(result, cVar6, 0x1, localized);
	if ( padPos != 0x1 )
		goto label_cond_d6;
	result->append(cVar5);
label_cond_d6:
	sub0Start = result->length();
	//    .local v21, "sub0Start":I
	if ( !(this->isGroupingUsed()) )  
		goto label_cond_17f;
	g = java::lang::Math::max(0x0, this->groupingSize);
	//    .local v7, "g":I
label_goto_f0:
	if ( g <= 0 )
		goto label_cond_114;
	if ( this->groupingSize2 <= 0 )
		goto label_cond_114;
	if ( this->groupingSize2 == this->groupingSize )
		goto label_cond_114;
	g = (g + this->groupingSize2);
label_cond_114:
	maxDig = 0x0;
	//    .local v10, "maxDig":I
	0x0;
	//    .local v12, "minDig":I
	0x0;
	//    .local v11, "maxSigDig":I
	if ( !(useSigDig) )  
		goto label_cond_182;
	minDig = this->getMinimumSignificantDigits();
	maxSigDig = this->getMaximumSignificantDigits();
	maxDig = maxSigDig;
label_goto_122:
	if ( !(this->useExponentialNotation) )  
		goto label_cond_18b;
	if ( maxDig <= 0x8 )
		goto label_cond_131;
	maxDig = 0x1;
label_cond_131:
label_goto_131:
	i = maxDig;
	//    .restart local v9    # "i":I
label_goto_132:
	if ( i <= 0 )
		goto label_cond_1e7;
	if ( this->useExponentialNotation )     
		goto label_cond_14b;
	if ( i >= maxDig )
		goto label_cond_14b;
	if ( !(this->isGroupingPosition(i)) )  
		goto label_cond_14b;
	result->append(cVar2);
label_cond_14b:
	if ( !(useSigDig) )  
		goto label_cond_1ae;
	if ( maxSigDig <  i )
		goto label_cond_1ab;
	if ( i <= (maxSigDig - minDig) )
		goto label_cond_1ab;
	cVar7 = this->symbols->getSignificantDigit();
label_goto_157:
	result->append(cVar7);
label_goto_15e:
	i = ( i + -0x1);
	goto label_goto_132;
	// 16526    .line 4462
	// 16527    .end local v7    # "g":I
	// 16528    .end local v9    # "i":I
	// 16529    .end local v10    # "maxDig":I
	// 16530    .end local v11    # "maxSigDig":I
	// 16531    .end local v12    # "minDig":I
	// 16532    .end local v13    # "padPos":I
	// 16533    .end local v15    # "part":I
	// 16534    .end local v18    # "roundingDecimalPos":I
	// 16535    .end local v21    # "sub0Start":I
	// 16536    .end local v22    # "useSigDig":Z
label_cond_161:
	0x30;
	//    .local v23, "zero":C
	goto label_goto_11;
	// 16543    .line 4463
	// 16544    .end local v23    # "zero":C
label_cond_165:
	0x23;
	//    .local v6, "digit":C
	goto label_goto_1d;
	// 16551    .line 4467
	// 16552    .end local v6    # "digit":C
	// 16553    .restart local v20    # "sigDigit":C
	// 16554    .restart local v22    # "useSigDig":Z
label_cond_169:
	0x40;
	goto label_goto_31;
	// 16560    .line 4469
	// 16561    .end local v20    # "sigDigit":C
label_cond_16d:
	0x2c;
	//    .local v8, "group":C
	goto label_goto_3d;
	// 16568    .line 4473
	// 16569    .end local v8    # "group":C
	// 16570    .restart local v18    # "roundingDecimalPos":I
	// 16571    .local v19, "roundingDigits":Ljava/lang/String;
label_cond_171:
	-0x1;
	//    .restart local v13    # "padPos":I
	goto label_goto_4d;
	// 16578    .line 4477
label_cond_174:
	cVar4 = 0x2a;
	goto label_goto_6c;
	// 16584    .line 4478
label_cond_178:
	0x0;
	//    .local v14, "padSpec":Ljava/lang/String;
	goto label_goto_82;
	// 16591    .line 4492
	// 16592    .end local v14    # "padSpec":Ljava/lang/String;
	// 16593    .end local v19    # "roundingDigits":Ljava/lang/String;
	// 16594    .restart local v15    # "part":I
label_cond_17b:
	cVar6 = 0x0;
	goto label_goto_bc;
	// 16600    .line 4497
	// 16601    .restart local v21    # "sub0Start":I
label_cond_17f:
	g = 0x0;
	//    .restart local v7    # "g":I
	goto label_goto_f0;
	// 16608    .line 4506
	// 16609    .restart local v10    # "maxDig":I
	// 16610    .restart local v11    # "maxSigDig":I
	// 16611    .restart local v12    # "minDig":I
label_cond_182:
	this->getMinimumIntegerDigits();
	this->getMaximumIntegerDigits();
	goto label_goto_122;
	// 16624    .line 4513
label_cond_18b:
	if ( !(useSigDig) )  
		goto label_cond_196;
	maxDig = java::lang::Math::max(maxDig, ( g + 0x1));
	goto label_goto_131;
	// 16639    .line 4516
label_cond_196:
	maxDig = ( java::lang::Math::max(java::lang::Math::max(g, this->getMinimumIntegerDigits()), roundingDecimalPos) + 0x1);
	goto label_goto_131;
	// 16663    .restart local v9    # "i":I
label_cond_1ab:
	cVar7 = cVar1;
	goto label_goto_157;
	// 16670    .line 4529
label_cond_1ae:
	if ( !(roundingDigits) )  
		goto label_cond_1d7;
	pos = (roundingDecimalPos - i);
	//    .local v16, "pos":I
	if ( pos < 0 ) 
		goto label_cond_1d7;
	if ( pos >= roundingDigits->length() )
		goto label_cond_1d7;
	result->append((char)((( roundingDigits->charAt(pos) + -0x30) + cVar0)));
	goto label_goto_15e;
	// 16718    .line 4536
	// 16719    .end local v16    # "pos":I
label_cond_1d7:
	if ( i >  minDig )
		goto label_cond_1e4;
	cVar11 = cVar0;
label_goto_1db:
	result->append(cVar11);
	goto label_goto_15e;
label_cond_1e4:
	cVar11 = cVar1;
	goto label_goto_1db;
	// 16739    .line 4539
label_cond_1e7:
	if ( useSigDig )     
		goto label_cond_25b;
	if ( this->getMaximumFractionDigits() > 0 ) 
		goto label_cond_1f7;
	if ( !(this->decimalSeparatorAlwaysShown) )  
		goto label_cond_20a;
label_cond_1f7:
	if ( !(localized) )  
		goto label_cond_231;
	cVar13 = this->symbols->getDecimalSeparator();
label_goto_203:
	result->append(cVar13);
label_cond_20a:
	pos = roundingDecimalPos;
	//    .restart local v16    # "pos":I
	i = 0x0;
label_goto_20d:
	if ( i >= this->getMaximumFractionDigits() )
		goto label_cond_25b;
	if ( !(roundingDigits) )  
		goto label_cond_246;
	if ( pos >= roundingDigits->length() )
		goto label_cond_246;
	if ( pos >= 0 )
		goto label_cond_234;
	cVar14 = cVar0;
label_goto_225:
	result->append(cVar14);
	pos = ( pos + 0x1);
label_goto_22e:
	i = ( i + 0x1);
	goto label_goto_20d;
	// 16830    .line 4542
	// 16831    .end local v16    # "pos":I
label_cond_231:
	cVar13 = 0x2e;
	goto label_goto_203;
	// 16837    .line 4548
	// 16838    .restart local v16    # "pos":I
label_cond_234:
	cVar14 = (char)((( roundingDigits->charAt(pos) + -0x30) + cVar0));
	goto label_goto_225;
	// 16860    .line 4552
label_cond_246:
	if ( i >= this->getMinimumFractionDigits() )
		goto label_cond_258;
	cVar17 = cVar0;
label_goto_250:
	result->append(cVar17);
	goto label_goto_22e;
label_cond_258:
	cVar17 = cVar1;
	goto label_goto_250;
	// 16886    .line 4555
	// 16887    .end local v16    # "pos":I
label_cond_25b:
	if ( !(this->useExponentialNotation) )  
		goto label_cond_2b3;
	if ( !(localized) )  
		goto label_cond_2a6;
	result->append(this->symbols->getExponentSeparator());
label_goto_276:
	if ( !(this->exponentSignAlwaysShown) )  
		goto label_cond_291;
	if ( !(localized) )  
		goto label_cond_2b0;
	cVar19 = this->symbols->getPlusSign();
label_goto_28a:
	result->append(cVar19);
label_cond_291:
	i = 0x0;
label_goto_292:
	if ( i >= this->minExponentDigits )
		goto label_cond_2b3;
	result->append(cVar0);
	i = ( i + 0x1);
	goto label_goto_292;
	// 16974    .line 4559
label_cond_2a6:
	result->append(0x45);
	goto label_goto_276;
	// 16986    .line 4562
label_cond_2b0:
	cVar19 = 0x2b;
	goto label_goto_28a;
	// 16992    .line 4568
label_cond_2b3:
	if ( !(cVar5) )  
		goto label_cond_323;
	if ( !(( this->useExponentialNotation ^ 0x1)) )  
		goto label_cond_323;
	if ( part )     
		goto label_cond_30c;
	cVar21 = (this->positivePrefix->length() + this->positiveSuffix->length());
label_goto_2e5:
	add = (((this->formatWidth - result->length()) + sub0Start) - cVar21);
	//    .local v5, "add":I
label_cond_2e7:
label_goto_2e7:
	if ( add <= 0 )
		goto label_cond_323;
	result->insert(sub0Start, cVar1);
	maxDig = ( maxDig + 0x1);
	add = ( add + -0x1);
	if ( add <= 0x1 )
		goto label_cond_2e7;
	if ( !(this->isGroupingPosition(maxDig)) )  
		goto label_cond_2e7;
	result->insert(sub0Start, cVar2);
	add = ( add + -0x1);
	goto label_goto_2e7;
	// 17099    .line 4574
	// 17100    .end local v5    # "add":I
label_cond_30c:
	cVar21 = (this->negativePrefix->length() + this->negativeSuffix->length());
	goto label_goto_2e5;
	// 17126    .line 4587
label_cond_323:
	if ( padPos != 0x2 )
		goto label_cond_32e;
	result->append(cVar5);
label_cond_32e:
	if ( !(part) )  
		goto label_cond_38a;
	cVar23 = 0x1;
label_goto_332:
	this->appendAffixPattern(result, cVar23, 0x0, localized);
	if ( padPos != 0x3 )
		goto label_cond_34c;
	result->append(cVar5);
label_cond_34c:
	if ( part )     
		goto label_cond_3a0;
	if ( !(this->negativeSuffix->equals(this->positiveSuffix)) )  
		goto label_cond_38d;
	cVar24 = std::make_shared<java::lang::StringBuilder>();
	if ( !(this->negativePrefix->equals(cVar24->append(0x2d)->append(this->positivePrefix)->toString())) )  
		goto label_cond_38d;
	//    .end local v7    # "g":I
	//    .end local v9    # "i":I
	//    .end local v10    # "maxDig":I
	//    .end local v11    # "maxSigDig":I
	//    .end local v12    # "minDig":I
	//    .end local v21    # "sub0Start":I
label_cond_385:
	return result->toString();
	// 17247    .line 4592
	// 17248    .restart local v7    # "g":I
	// 17249    .restart local v9    # "i":I
	// 17250    .restart local v10    # "maxDig":I
	// 17251    .restart local v11    # "maxSigDig":I
	// 17252    .restart local v12    # "minDig":I
	// 17253    .restart local v21    # "sub0Start":I
label_cond_38a:
	cVar23 = 0x0;
	goto label_goto_332;
	// 17259    .line 4601
label_cond_38d:
	if ( !(localized) )  
		goto label_cond_3a4;
	cVar26 = this->symbols->getPatternSeparator();
label_goto_399:
	result->append(cVar26);
label_cond_3a0:
	part = ( part + 0x1);
	goto label_goto_ab;
	// 17286    .line 4601
label_cond_3a4:
	cVar26 = 0x3b;
	goto label_goto_399;

}
// .method private static trimMarksFromAffix(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat::trimMarksFromAffix(std::shared_ptr<java::lang::String> affix)
{
	
	int idx;
	std::shared_ptr<java::lang::StringBuilder> buf;
	int c;
	
	//    .param p0, "affix"    # Ljava/lang/String;
	//    .local v2, "hasBidiMark":Z
	idx = 0x0;
	//    .local v3, "idx":I
label_goto_2:
	if ( idx >= affix->length() )
		goto label_cond_13;
	if ( !(android::icu::text::DecimalFormat::isBidiMark(affix->charAt(idx))) )  
		goto label_cond_16;
label_cond_13:
	if ( 0x0 )     
		goto label_cond_19;
	return affix;
	// 17335    .line 2897
label_cond_16:
	idx = ( idx + 0x1);
	goto label_goto_2;
	// 17341    .line 2907
label_cond_19:
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(affix, 0x0, idx);
	idx = ( idx + 0x1);
label_goto_24:
	if ( idx >= affix->length() )
		goto label_cond_3a;
	c = affix->charAt(idx);
	//    .local v1, "c":C
	if ( android::icu::text::DecimalFormat::isBidiMark(c) )     
		goto label_cond_37;
	buf->append(c);
label_cond_37:
	idx = ( idx + 0x1);
	goto label_goto_24;
	// 17386    .line 2917
	// 17387    .end local v1    # "c":C
label_cond_3a:
	return buf->toString();

}
// .method private unquote(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat::unquote(std::shared_ptr<java::lang::String> pat)
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	int i;
	char ch;
	
	//    .param p1, "pat"    # Ljava/lang/String;
	buf = std::make_shared<java::lang::StringBuilder>(pat->length());
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v2, "i":I
label_goto_a:
	if ( i >= pat->length() )
		goto label_cond_1f;
	//    .end local v2    # "i":I
	//    .local v3, "i":I
	ch = pat->charAt(i);
	//    .local v1, "ch":C
	if ( ch == 0x27 )
		goto label_cond_1d;
	buf->append(ch);
label_cond_1d:
	i = ( i + 0x1);
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_a;
	// 17448    .line 3987
	// 17449    .end local v1    # "ch":C
label_cond_1f:
	return buf->toString();

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void android::icu::text::DecimalFormat::writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream)
{
	
	//    .param p1, "stream"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 17462        value = {
	// 17463            Ljava/io/IOException;
	// 17464        }
	// 17465    .end annotation
	this->attributes->clear();
	stream->defaultWriteObject();
	return;

}
// .method adjustNumberAsInFormatting(D)D
double android::icu::text::DecimalFormat::adjustNumberAsInFormatting(double number)
{
	
	double cVar0;
	
	//    .param p1, "number"    # D
	//    .annotation runtime Ljava/lang/Deprecated;
	// 17486    .end annotation
	if ( !(java::lang::Double::isNaN(number)) )  
		goto label_cond_7;
	return number;
	// 17499    .line 949
label_cond_7:
	cVar0 = this->round(this->multiply(number));
	if ( !(java::lang::Double::isInfinite(cVar0)) )  
		goto label_cond_16;
	return cVar0;
	// 17519    .line 953
label_cond_16:
	return this->toDigitList(cVar0)->getDouble();

}
// .method public applyLocalizedPattern(Ljava/lang/String;)V
void android::icu::text::DecimalFormat::applyLocalizedPattern(std::shared_ptr<java::lang::String> pattern)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	this->applyPattern(pattern, 0x1);
	return;

}
// .method public applyPattern(Ljava/lang/String;)V
void android::icu::text::DecimalFormat::applyPattern(std::shared_ptr<java::lang::String> pattern)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	this->applyPattern(pattern, 0x0);
	return;

}
// .method public areSignificantDigitsUsed()Z
bool android::icu::text::DecimalFormat::areSignificantDigitsUsed()
{
	
	return this->useSignificantDigits;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DecimalFormat::clone()
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar4;
	std::shared_ptr<android::icu::text::DecimalFormat> other;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar0;
	std::shared_ptr<android::icu::text::DigitList> cVar1;
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> cVar2;
	std::shared_ptr<java::util::ArrayList> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	other = this->clone();
	other->checkCast("android::icu::text::DecimalFormat");
	//    .local v1, "other":Landroid/icu/text/DecimalFormat;
	cVar0 = this->symbols->clone();
	cVar0->checkCast("android::icu::text::DecimalFormatSymbols");
	other->symbols = cVar0;
	cVar1 = std::make_shared<android::icu::text::DigitList>();
	other->digitList = cVar1;
	if ( !(this->currencyPluralInfo) )  
		goto label_cond_25;
	cVar2 = this->currencyPluralInfo->clone();
	cVar2->checkCast("android::icu::text::CurrencyPluralInfo");
	other->currencyPluralInfo = cVar2;
label_cond_25:
	cVar3 = std::make_shared<java::util::ArrayList>();
	other->attributes = cVar3;
	other->currencyUsage = this->currencyUsage;
	//label_try_end_30:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_31;
	}
	//    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_30} :catch_31
	return other;
	// 17635    .line 3927
	// 17636    .end local v1    # "other":Landroid/icu/text/DecimalFormat;
label_catch_31:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	cVar4 = std::make_shared<java::lang::IllegalStateException>();
	// throw
	throw cVar4;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::DecimalFormat::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::DecimalFormat> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( obj )     
		goto label_cond_4;
	return cVar1;
	// 17662    .line 3939
label_cond_4:
	if ( this->equals(obj) )     
		goto label_cond_b;
	return cVar1;
label_cond_b:
	other = obj;
	other->checkCast("android::icu::text::DecimalFormat");
	//    .local v0, "other":Landroid/icu/text/DecimalFormat;
	if ( this->currencySignCount != other->currencySignCount )
		goto label_cond_9b;
	if ( this->style != 0x6 )
		goto label_cond_41;
	if ( !(this->equals(this->posPrefixPattern, other->posPrefixPattern)) )  
		goto label_cond_9b;
	if ( !(this->equals(this->posSuffixPattern, other->posSuffixPattern)) )  
		goto label_cond_9b;
	if ( !(this->equals(this->negPrefixPattern, other->negPrefixPattern)) )  
		goto label_cond_9b;
	if ( !(this->equals(this->negSuffixPattern, other->negSuffixPattern)) )  
		goto label_cond_9b;
label_cond_41:
	if ( this->multiplier != other->multiplier )
		goto label_cond_9b;
	if ( this->groupingSize != other->groupingSize )
		goto label_cond_9b;
	if ( this->groupingSize2 != other->groupingSize2 )
		goto label_cond_9b;
	if ( this->decimalSeparatorAlwaysShown != other->decimalSeparatorAlwaysShown )
		goto label_cond_9b;
	if ( this->useExponentialNotation != other->useExponentialNotation )
		goto label_cond_9b;
	if ( !(this->useExponentialNotation) )  
		goto label_cond_69;
	if ( this->minExponentDigits != other->minExponentDigits )
		goto label_cond_9b;
label_cond_69:
	if ( this->useSignificantDigits != other->useSignificantDigits )
		goto label_cond_9b;
	if ( !(this->useSignificantDigits) )  
		goto label_cond_7f;
	if ( this->minSignificantDigits != other->minSignificantDigits )
		goto label_cond_9b;
	if ( this->maxSignificantDigits != other->maxSignificantDigits )
		goto label_cond_9b;
label_cond_7f:
	if ( !(this->symbols->equals(other->symbols)) )  
		goto label_cond_9b;
	if ( !(android::icu::impl::Utility::objectEquals(this->currencyPluralInfo, other->currencyPluralInfo)) )  
		goto label_cond_9b;
	cVar1 = this->currencyUsage->equals(other->currencyUsage);
label_cond_9b:
	return cVar1;

}
// .method public format(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DecimalFormat::format(double number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition)
{
	
	//    .param p1, "number"    # D
	//    .param p3, "result"    # Ljava/lang/StringBuffer;
	//    .param p4, "fieldPosition"    # Ljava/text/FieldPosition;
	return this->format(number, result, fieldPosition, 0x0);

}
// .method public format(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DecimalFormat::format(long long number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition)
{
	
	//    .param p1, "number"    # J
	//    .param p3, "result"    # Ljava/lang/StringBuffer;
	//    .param p4, "fieldPosition"    # Ljava/text/FieldPosition;
	return this->format(number, result, fieldPosition, 0x0);

}
// .method public format(Landroid/icu/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DecimalFormat::format(std::shared_ptr<android::icu::math::BigDecimal> cVar3,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition)
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<android::icu::math::BigDecimal> cVar3;
	std::shared_ptr<android::icu::text::DigitList> cVar4;
	bool cVar5;
	std::shared_ptr<java::lang::ArithmeticException> cVar6;
	
	//    .param p1, "number"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "result"    # Ljava/lang/StringBuffer;
	//    .param p3, "fieldPosition"    # Ljava/text/FieldPosition;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this->multiplier == cVar0 )
		goto label_cond_13;
	cVar3 = cVar3->multiply(android::icu::math::BigDecimal::valueOf((long long)(this->multiplier)), this->mathContext);
label_cond_13:
	if ( !(this->actualRoundingIncrementICU) )  
		goto label_cond_27;
	cVar3 = cVar3->divide(this->actualRoundingIncrementICU, cVar1, this->roundingMode)->multiply(this->actualRoundingIncrementICU, this->mathContext);
label_cond_27:
	cVar4 = this->digitList;
	cVar4->monitor_enter();
	try {
	//label_try_start_2a:
	if ( this->useExponentialNotation )     
		goto label_cond_57;
	cVar5 = ( this->areSignificantDigitsUsed() ^ 0x1);
label_goto_3b:
	this->digitList->set(cVar3, this->precision(0x0), cVar5);
	if ( !(this->digitList->wasRounded()) )  
		goto label_cond_59;
	if ( this->roundingMode != 0x7 )
		goto label_cond_59;
	cVar6 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rounding necessary")));
	// throw
	throw cVar6;
	// 18013    :try_end_54
	// 18014    .catchall {:try_start_2a .. :try_end_54} :catchall_54
	// 18016    .line 1217
label_catchall_54:
	// move-exception
	
	cVar4->monitor_exit();
	// throw
	throw;
label_cond_57:
	cVar5 = cVar1;
	goto label_goto_3b;
	// 18030    .line 1224
label_cond_59:
	try {
	//label_try_start_59:
	if ( cVar3->signum() >= 0 )
		goto label_cond_6e;
label_goto_63:
	//label_try_end_6b:
	}
	catch (...){
		goto label_catchall_54;
	}
	//    .catchall {:try_start_59 .. :try_end_6b} :catchall_54
	cVar4->monitor_exit();
	return this->subformat(cVar3->doubleValue(), result, fieldPosition, cVar0, 0x0, 0x0);
label_cond_6e:
	cVar0 = cVar1;
	goto label_goto_63;

}
// .method public format(Ljava/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DecimalFormat::format(std::shared_ptr<java::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition)
{
	
	//    .param p1, "number"    # Ljava/math/BigDecimal;
	//    .param p2, "result"    # Ljava/lang/StringBuffer;
	//    .param p3, "fieldPosition"    # Ljava/text/FieldPosition;
	return this->format(number, result, fieldPosition, 0x0);

}
// .method public format(Ljava/math/BigInteger;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DecimalFormat::format(std::shared_ptr<java::math::BigInteger> number,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> fieldPosition)
{
	
	//    .param p1, "number"    # Ljava/math/BigInteger;
	//    .param p2, "result"    # Ljava/lang/StringBuffer;
	//    .param p3, "fieldPosition"    # Ljava/text/FieldPosition;
	return this->format(number, result, fieldPosition, 0x0);

}
// .method public formatToCharacterIterator(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;
std::shared_ptr<java::text::AttributedCharacterIterator> android::icu::text::DecimalFormat::formatToCharacterIterator(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	return this->formatToCharacterIterator(obj, android::icu::text::DecimalFormat::NULL_UNIT);

}
// .method formatToCharacterIterator(Ljava/lang/Object;Landroid/icu/text/DecimalFormat$Unit;)Ljava/text/AttributedCharacterIterator;
std::shared_ptr<java::text::AttributedCharacterIterator> android::icu::text::DecimalFormat::formatToCharacterIterator(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> unit)
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::Number> number;
	std::shared_ptr<java::lang::StringBuffer> text;
	std::shared_ptr<java::text::FieldPosition> cVar3;
	std::shared_ptr<java::text::AttributedString> as;
	int i;
	std::shared_ptr<java::text::FieldPosition> pos;
	std::shared_ptr<java::text::AttributedCharacterIterator_S_Attribute> attribute;
	std::shared_ptr<java::text::FieldPosition> cVar4;
	std::shared_ptr<java::text::FieldPosition> cVar5;
	std::shared_ptr<java::text::FieldPosition> cVar6;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar7;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "unit"    # Landroid/icu/text/DecimalFormat$Unit;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( obj->instanceOf("java::lang::Number") )     
		goto label_cond_c;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar2;
label_cond_c:
	number = obj;
	number->checkCast("java::lang::Number");
	//    .local v9, "number":Ljava/lang/Number;
	text = std::make_shared<java::lang::StringBuffer>();
	//    .local v4, "text":Ljava/lang/StringBuffer;
	unit->writePrefix(text);
	this->attributes->clear();
	if ( !(obj->instanceOf("java::math::BigInteger")) )  
		goto label_cond_59;
	number->checkCast("java::math::BigInteger");
	//    .end local v9    # "number":Ljava/lang/Number;
	cVar3 = std::make_shared<java::text::FieldPosition>(cVar1);
	this->format(number, text, cVar3, cVar0);
label_goto_2a:
	unit->writeSuffix(text);
	as = std::make_shared<java::text::AttributedString>(text->toString());
	//    .local v0, "as":Ljava/text/AttributedString;
	i = 0x0;
	//    .local v8, "i":I
label_goto_37:
	if ( i >= this->attributes->size() )
		goto label_cond_96;
	pos = this->attributes->get(i);
	pos->checkCast("java::text::FieldPosition");
	//    .local v10, "pos":Ljava/text/FieldPosition;
	attribute = pos->getFieldAttribute();
	//    .local v7, "attribute":Ljava/text/Format$Field;
	as->addAttribute(attribute, attribute, pos->getBeginIndex(), pos->getEndIndex());
	i = ( i + 0x1);
	goto label_goto_37;
	// 18238    .line 4359
	// 18239    .end local v0    # "as":Ljava/text/AttributedString;
	// 18240    .end local v7    # "attribute":Ljava/text/Format$Field;
	// 18241    .end local v8    # "i":I
	// 18242    .end local v10    # "pos":Ljava/text/FieldPosition;
	// 18243    .restart local v9    # "number":Ljava/lang/Number;
label_cond_59:
	if ( !(obj->instanceOf("java::math::BigDecimal")) )  
		goto label_cond_68;
	number->checkCast("java::math::BigDecimal");
	//    .end local v9    # "number":Ljava/lang/Number;
	cVar4 = std::make_shared<java::text::FieldPosition>(cVar1);
	this->format(number, text, cVar4, cVar0);
	goto label_goto_2a;
	// 18261    .line 4362
	// 18262    .restart local v9    # "number":Ljava/lang/Number;
label_cond_68:
	if ( !(obj->instanceOf("java::lang::Double")) )  
		goto label_cond_7a;
	cVar5 = std::make_shared<java::text::FieldPosition>(cVar1);
	this->format(number->doubleValue(), text, cVar5, cVar0);
	goto label_goto_2a;
	// 18283    .line 4364
label_cond_7a:
	if ( obj->instanceOf("java::lang::Integer") )     
		goto label_cond_82;
	if ( !(obj->instanceOf("java::lang::Long")) )  
		goto label_cond_90;
label_cond_82:
	cVar6 = std::make_shared<java::text::FieldPosition>(cVar1);
	this->format(number->longValue(), text, cVar6, cVar0);
	goto label_goto_2a;
	// 18309    .line 4367
label_cond_90:
	cVar7 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar7;
	// 18317    .line 4380
	// 18318    .end local v9    # "number":Ljava/lang/Number;
	// 18319    .restart local v0    # "as":Ljava/text/AttributedString;
	// 18320    .restart local v8    # "i":I
label_cond_96:
	return as->getIterator();

}
// .method public getCurrencyPluralInfo()Landroid/icu/text/CurrencyPluralInfo;
std::shared_ptr<android::icu::text::CurrencyPluralInfo> android::icu::text::DecimalFormat::getCurrencyPluralInfo()
{
	
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> cVar0;
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	try {
	//label_try_start_1:
	if ( this->currencyPluralInfo )     
		goto label_cond_7;
	cVar1 = cVar0;
label_goto_6:
	return cVar1;
	// 18346    .line 3890
label_cond_7:
	cVar1 = this->currencyPluralInfo->clone();
	cVar1->checkCast("android::icu::text::CurrencyPluralInfo");
	//label_try_end_f:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_f} :catch_10
	goto label_goto_6;
	// 18360    .line 3891
label_catch_10:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "foo":Ljava/lang/Exception;
	return cVar0;

}
// .method public getCurrencyUsage()Landroid/icu/util/Currency$CurrencyUsage;
std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> android::icu::text::DecimalFormat::getCurrencyUsage()
{
	
	return this->currencyUsage;

}
// .method public getDecimalFormatSymbols()Landroid/icu/text/DecimalFormatSymbols;
std::shared_ptr<android::icu::text::DecimalFormatSymbols> android::icu::text::DecimalFormat::getDecimalFormatSymbols()
{
	
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	cVar0 = this->symbols->clone();
	cVar0->checkCast("android::icu::text::DecimalFormatSymbols");
	//label_try_end_8:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9;
	}
	//    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_8} :catch_9
	return cVar0;
	// 18397    .line 3232
label_catch_9:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "foo":Ljava/lang/Exception;
	return 0x0;

}
// .method protected getEffectiveCurrency()Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::text::DecimalFormat::getEffectiveCurrency()
{
	
	std::shared_ptr<android::icu::util::Currency> c;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 18411    .end annotation
	c = this->getCurrency();
	//    .local v0, "c":Landroid/icu/util/Currency;
	if ( c )     
		goto label_cond_10;
label_cond_10:
	return c;

}
// .method getFixedDecimal(D)Landroid/icu/text/PluralRules$FixedDecimal;
std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> android::icu::text::DecimalFormat::getFixedDecimal(double number)
{
	
	//    .param p1, "number"    # D
	return this->getFixedDecimal(number, this->digitList);

}
// .method getFixedDecimal(DLandroid/icu/text/DigitList;)Landroid/icu/text/PluralRules$FixedDecimal;
std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> android::icu::text::DecimalFormat::getFixedDecimal(double number,std::shared_ptr<android::icu::text::DigitList> dl)
{
	
	long long cVar0;
	int fractionalDigitsInDigitList;
	int maxFractionalDigits;
	int minFractionalDigits;
	int v;
	long long f;
	int i;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar1;
	
	//    .param p1, "number"    # D
	//    .param p3, "dl"    # Landroid/icu/text/DigitList;
	cVar0 = 0xa;
	fractionalDigitsInDigitList = (dl->count - dl->decimalAt);
	//    .local v8, "fractionalDigitsInDigitList":I
	if ( !(this->useSignificantDigits) )  
		goto label_cond_4b;
	maxFractionalDigits = (this->maxSignificantDigits - dl->decimalAt);
	//    .local v10, "maxFractionalDigits":I
	minFractionalDigits = (this->minSignificantDigits - dl->decimalAt);
	//    .local v11, "minFractionalDigits":I
	if ( minFractionalDigits >= 0 )
		goto label_cond_24;
	minFractionalDigits = 0x0;
label_cond_24:
	if ( maxFractionalDigits >= 0 )
		goto label_cond_27;
	maxFractionalDigits = 0x0;
label_cond_27:
label_goto_27:
	v = fractionalDigitsInDigitList;
	//    .local v5, "v":I
	if ( fractionalDigitsInDigitList >= minFractionalDigits )
		goto label_cond_54;
	v = minFractionalDigits;
label_cond_2b:
label_goto_2b:
	f = 0x0;
	//    .local v6, "f":J
	if ( v <= 0 )
		goto label_cond_5f;
	i = java::lang::Math::max(0x0, dl->decimalAt);
	//    .local v9, "i":I
label_goto_37:
	if ( i >= dl->count )
		goto label_cond_58;
	f = (f *  cVar0);
	f = (f +  (long long)(( dl->digits[i] + -0x30)));
	i = ( i + 0x1);
	goto label_goto_37;
	// 18573    .line 1300
	// 18574    .end local v5    # "v":I
	// 18575    .end local v6    # "f":J
	// 18576    .end local v9    # "i":I
	// 18577    .end local v10    # "maxFractionalDigits":I
	// 18578    .end local v11    # "minFractionalDigits":I
label_cond_4b:
	//    .restart local v10    # "maxFractionalDigits":I
	//    .restart local v11    # "minFractionalDigits":I
	goto label_goto_27;
	// 18593    .line 1306
	// 18594    .restart local v5    # "v":I
label_cond_54:
	if ( fractionalDigitsInDigitList <= maxFractionalDigits )
		goto label_cond_2b;
	v = maxFractionalDigits;
	goto label_goto_2b;
	// 18603    .line 1315
	// 18604    .restart local v6    # "f":J
	// 18605    .restart local v9    # "i":I
label_cond_58:
	i = v;
label_goto_59:
	if ( i >= fractionalDigitsInDigitList )
		goto label_cond_5f;
	f = (f *  cVar0);
	i = ( i + 0x1);
	goto label_goto_59;
	// 18620    .line 1319
	// 18621    .end local v9    # "i":I
label_cond_5f:
	cVar1 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(number, v, f);
	return cVar1;

}
// .method public getFormatWidth()I
int android::icu::text::DecimalFormat::getFormatWidth()
{
	
	return this->formatWidth;

}
// .method public getGroupingSize()I
int android::icu::text::DecimalFormat::getGroupingSize()
{
	
	return this->groupingSize;

}
// .method public getMathContext()Ljava/math/MathContext;
std::shared_ptr<java::math::MathContext> android::icu::text::DecimalFormat::getMathContext()
{
	
	std::shared_ptr<java::math::MathContext> cVar0;
	std::shared_ptr<java::math::MathContext> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	try {
	//label_try_start_1:
	if ( this->mathContext )     
		goto label_cond_6;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar1 = std::make_shared<java::math::MathContext>(this->mathContext->getDigits(), java::math::RoundingMode::valueOf(this->mathContext->getRoundingMode()));
	//label_try_end_1b:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1d;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1b} :catch_1d
	cVar0 = cVar1;
	goto label_goto_5;
	// 18696    .line 3804
label_catch_1d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "foo":Ljava/lang/Exception;
	return cVar0;

}
// .method public getMathContextICU()Landroid/icu/math/MathContext;
std::shared_ptr<android::icu::math::MathContext> android::icu::text::DecimalFormat::getMathContextICU()
{
	
	return this->mathContext;

}
// .method public getMaximumSignificantDigits()I
int android::icu::text::DecimalFormat::getMaximumSignificantDigits()
{
	
	return this->maxSignificantDigits;

}
// .method public getMinimumExponentDigits()B
unsigned char android::icu::text::DecimalFormat::getMinimumExponentDigits()
{
	
	return this->minExponentDigits;

}
// .method public getMinimumSignificantDigits()I
int android::icu::text::DecimalFormat::getMinimumSignificantDigits()
{
	
	return this->minSignificantDigits;

}
// .method public getMultiplier()I
int android::icu::text::DecimalFormat::getMultiplier()
{
	
	return this->multiplier;

}
// .method public getNegativePrefix()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat::getNegativePrefix()
{
	
	return this->negativePrefix;

}
// .method public getNegativeSuffix()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat::getNegativeSuffix()
{
	
	return this->negativeSuffix;

}
// .method public getPadCharacter()C
char android::icu::text::DecimalFormat::getPadCharacter()
{
	
	return this->pad;

}
// .method public getPadPosition()I
int android::icu::text::DecimalFormat::getPadPosition()
{
	
	return this->padPosition;

}
// .method public getParseMaxDigits()I
int android::icu::text::DecimalFormat::getParseMaxDigits()
{
	
	return this->PARSE_MAX_EXPONENT;

}
// .method public getPositivePrefix()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat::getPositivePrefix()
{
	
	return this->positivePrefix;

}
// .method public getPositiveSuffix()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat::getPositiveSuffix()
{
	
	return this->positiveSuffix;

}
// .method public getRoundingIncrement()Ljava/math/BigDecimal;
std::shared_ptr<java::math::BigDecimal> android::icu::text::DecimalFormat::getRoundingIncrement()
{
	
	if ( this->roundingIncrementICU )     
		goto label_cond_6;
	return 0x0;
	// 18839    .line 3406
label_cond_6:
	return this->roundingIncrementICU->toBigDecimal();

}
// .method public getRoundingMode()I
int android::icu::text::DecimalFormat::getRoundingMode()
{
	
	return this->roundingMode;

}
// .method public getSecondaryGroupingSize()I
int android::icu::text::DecimalFormat::getSecondaryGroupingSize()
{
	
	return this->groupingSize2;

}
// .method public hashCode()I
int android::icu::text::DecimalFormat::hashCode()
{
	
	return (( this->hashCode() * 0x25) +  this->positivePrefix->hashCode());

}
// .method public isDecimalPatternMatchRequired()Z
bool android::icu::text::DecimalFormat::isDecimalPatternMatchRequired()
{
	
	return this->parseRequireDecimalPoint;

}
// .method public isDecimalSeparatorAlwaysShown()Z
bool android::icu::text::DecimalFormat::isDecimalSeparatorAlwaysShown()
{
	
	return this->decimalSeparatorAlwaysShown;

}
// .method public isExponentSignAlwaysShown()Z
bool android::icu::text::DecimalFormat::isExponentSignAlwaysShown()
{
	
	return this->exponentSignAlwaysShown;

}
// .method isNumberNegative(D)Z
bool android::icu::text::DecimalFormat::isNumberNegative(double number)
{
	
	//    .param p1, "number"    # D
	//    .annotation runtime Ljava/lang/Deprecated;
	// 18926    .end annotation
	if ( !(java::lang::Double::isNaN(number)) )  
		goto label_cond_8;
	return 0x0;
	// 18941    .line 977
label_cond_8:
	return this->isNegative(this->multiply(number));

}
// .method public isParseBigDecimal()Z
bool android::icu::text::DecimalFormat::isParseBigDecimal()
{
	
	return this->parseBigDecimal;

}
// .method public isScientificNotation()Z
bool android::icu::text::DecimalFormat::isScientificNotation()
{
	
	return this->useExponentialNotation;

}
// .method public parse(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::DecimalFormat::parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition)
{
	
	std::shared_ptr<java::lang::Number> cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	cVar0 = this->parse(text, parsePosition, 0x0);
	cVar0->checkCast("java::lang::Number");
	return cVar0;

}
// .method public parseCurrency(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;
std::shared_ptr<android::icu::util::CurrencyAmount> android::icu::text::DecimalFormat::parseCurrency(std::shared_ptr<java::lang::CharSequence> text,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<android::icu::util::CurrencyAmount> cVar0;
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	//    .local v0, "currency":[Landroid/icu/util/Currency;
	cVar0 = this->parse(text->toString(), pos, std::make_shared<std::vector<std::vector<android::icu::util::Currency>>>(0x1));
	cVar0->checkCast("android::icu::util::CurrencyAmount");
	return cVar0;

}
// .method public setCurrency(Landroid/icu/util/Currency;)V
void android::icu::text::DecimalFormat::setCurrency(std::shared_ptr<android::icu::util::Currency> theCurrency)
{
	
	std::shared_ptr<bool[]> cVar0;
	int d;
	
	//    .param p1, "theCurrency"    # Landroid/icu/util/Currency;
	cVar0 = 0x0;
	this->setCurrency(theCurrency);
	if ( !(theCurrency) )  
		goto label_cond_1b;
	//    .local v1, "s":Ljava/lang/String;
	this->symbols->setCurrency(theCurrency);
	this->symbols->setCurrencySymbol(theCurrency->getName(this->symbols->getULocale(), 0x0, cVar0));
	//    .end local v1    # "s":Ljava/lang/String;
label_cond_1b:
	if ( !(this->currencySignCount) )  
		goto label_cond_3e;
	if ( !(theCurrency) )  
		goto label_cond_36;
	this->setRoundingIncrement(theCurrency->getRoundingIncrement(this->currencyUsage));
	d = theCurrency->getDefaultFractionDigits(this->currencyUsage);
	//    .local v0, "d":I
	this->setMinimumFractionDigits(d);
	this->setMaximumFractionDigits(d);
	//    .end local v0    # "d":I
label_cond_36:
	if ( this->currencySignCount == 0x3 )
		goto label_cond_3e;
	this->expandAffixes(cVar0);
label_cond_3e:
	return;

}
// .method public setCurrencyPluralInfo(Landroid/icu/text/CurrencyPluralInfo;)V
void android::icu::text::DecimalFormat::setCurrencyPluralInfo(std::shared_ptr<android::icu::text::CurrencyPluralInfo> newInfo)
{
	
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> cVar0;
	
	//    .param p1, "newInfo"    # Landroid/icu/text/CurrencyPluralInfo;
	cVar0 = newInfo->clone();
	cVar0->checkCast("android::icu::text::CurrencyPluralInfo");
	this->currencyPluralInfo = cVar0;
	this->isReadyForParsing = 0x0;
	return;

}
// .method public setCurrencyUsage(Landroid/icu/util/Currency$CurrencyUsage;)V
void android::icu::text::DecimalFormat::setCurrencyUsage(std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> newUsage)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<android::icu::util::Currency> theCurrency;
	int d;
	
	//    .param p1, "newUsage"    # Landroid/icu/util/Currency$CurrencyUsage;
	if ( newUsage )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("return value is null at method AAA")));
	// throw
	throw cVar0;
	// 19145    .line 5331
label_cond_b:
	this->currencyUsage = newUsage;
	theCurrency = this->getCurrency();
	//    .local v1, "theCurrency":Landroid/icu/util/Currency;
	if ( !(theCurrency) )  
		goto label_cond_28;
	this->setRoundingIncrement(theCurrency->getRoundingIncrement(this->currencyUsage));
	d = theCurrency->getDefaultFractionDigits(this->currencyUsage);
	//    .local v0, "d":I
	this->setMinimumFractionDigits(d);
	this->_setMaximumFractionDigits(d);
	//    .end local v0    # "d":I
label_cond_28:
	return;

}
// .method public setDecimalFormatSymbols(Landroid/icu/text/DecimalFormatSymbols;)V
void android::icu::text::DecimalFormat::setDecimalFormatSymbols(std::shared_ptr<android::icu::text::DecimalFormatSymbols> newSymbols)
{
	
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar0;
	
	//    .param p1, "newSymbols"    # Landroid/icu/text/DecimalFormatSymbols;
	cVar0 = newSymbols->clone();
	cVar0->checkCast("android::icu::text::DecimalFormatSymbols");
	this->symbols = cVar0;
	this->setCurrencyForSymbols();
	this->expandAffixes(0x0);
	return;

}
// .method public setDecimalPatternMatchRequired(Z)V
void android::icu::text::DecimalFormat::setDecimalPatternMatchRequired(bool value)
{
	
	//    .param p1, "value"    # Z
	this->parseRequireDecimalPoint = value;
	return;

}
// .method public setDecimalSeparatorAlwaysShown(Z)V
void android::icu::text::DecimalFormat::setDecimalSeparatorAlwaysShown(bool newValue)
{
	
	//    .param p1, "newValue"    # Z
	this->decimalSeparatorAlwaysShown = newValue;
	return;

}
// .method public setExponentSignAlwaysShown(Z)V
void android::icu::text::DecimalFormat::setExponentSignAlwaysShown(bool expSignAlways)
{
	
	//    .param p1, "expSignAlways"    # Z
	this->exponentSignAlwaysShown = expSignAlways;
	return;

}
// .method public setFormatWidth(I)V
void android::icu::text::DecimalFormat::setFormatWidth(int width)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "width"    # I
	if ( width >= 0 )
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal format width")));
	// throw
	throw cVar0;
	// 19266    .line 3547
label_cond_b:
	this->formatWidth = width;
	return;

}
// .method public setGroupingSize(I)V
void android::icu::text::DecimalFormat::setGroupingSize(int newValue)
{
	
	//    .param p1, "newValue"    # I
	this->groupingSize = (unsigned char)(newValue);
	return;

}
// .method public setMathContext(Ljava/math/MathContext;)V
void android::icu::text::DecimalFormat::setMathContext(std::shared_ptr<java::math::MathContext> newValue)
{
	
	std::shared_ptr<android::icu::math::MathContext> cVar0;
	
	//    .param p1, "newValue"    # Ljava/math/MathContext;
	cVar0 = std::make_shared<android::icu::math::MathContext>(newValue->getPrecision(), 0x1, 0x0, newValue->getRoundingMode()->ordinal());
	this->mathContext = cVar0;
	return;

}
// .method public setMathContextICU(Landroid/icu/math/MathContext;)V
void android::icu::text::DecimalFormat::setMathContextICU(std::shared_ptr<android::icu::math::MathContext> newValue)
{
	
	//    .param p1, "newValue"    # Landroid/icu/math/MathContext;
	this->mathContext = newValue;
	return;

}
// .method public setMaximumFractionDigits(I)V
void android::icu::text::DecimalFormat::setMaximumFractionDigits(int newValue)
{
	
	//    .param p1, "newValue"    # I
	this->_setMaximumFractionDigits(newValue);
	this->resetActualRounding();
	return;

}
// .method public setMaximumIntegerDigits(I)V
void android::icu::text::DecimalFormat::setMaximumIntegerDigits(int newValue)
{
	
	//    .param p1, "newValue"    # I
	this->setMaximumIntegerDigits(java::lang::Math::min(newValue, 0x77359400));
	return;

}
// .method public setMaximumSignificantDigits(I)V
void android::icu::text::DecimalFormat::setMaximumSignificantDigits(int cVar1)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p1, "max"    # I
	cVar0 = 0x1;
	if ( cVar1 >= cVar0 )
		goto label_cond_4;
	cVar1 = 0x1;
label_cond_4:
	//    .local v0, "min":I
	this->minSignificantDigits = java::lang::Math::min(this->minSignificantDigits, cVar1);
	this->maxSignificantDigits = cVar1;
	this->setSignificantDigitsUsed(cVar0);
	return;

}
// .method public setMinimumExponentDigits(B)V
void android::icu::text::DecimalFormat::setMinimumExponentDigits(unsigned char minExpDig)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "minExpDig"    # B
	if ( minExpDig >= 0x1 )
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exponent digits must be >= 1")));
	// throw
	throw cVar0;
	// 19421    .line 3690
label_cond_c:
	this->minExponentDigits = minExpDig;
	return;

}
// .method public setMinimumFractionDigits(I)V
void android::icu::text::DecimalFormat::setMinimumFractionDigits(int newValue)
{
	
	//    .param p1, "newValue"    # I
	this->setMinimumFractionDigits(java::lang::Math::min(newValue, 0x154));
	return;

}
// .method public setMinimumIntegerDigits(I)V
void android::icu::text::DecimalFormat::setMinimumIntegerDigits(int newValue)
{
	
	//    .param p1, "newValue"    # I
	this->setMinimumIntegerDigits(java::lang::Math::min(newValue, 0x135));
	return;

}
// .method public setMinimumSignificantDigits(I)V
void android::icu::text::DecimalFormat::setMinimumSignificantDigits(int cVar1)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p1, "min"    # I
	cVar0 = 0x1;
	if ( cVar1 >= cVar0 )
		goto label_cond_4;
	cVar1 = 0x1;
label_cond_4:
	//    .local v0, "max":I
	this->minSignificantDigits = cVar1;
	this->maxSignificantDigits = java::lang::Math::max(this->maxSignificantDigits, cVar1);
	this->setSignificantDigitsUsed(cVar0);
	return;

}
// .method public setMultiplier(I)V
void android::icu::text::DecimalFormat::setMultiplier(int newValue)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "newValue"    # I
	if ( newValue )     
		goto label_cond_1c;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad multiplier: ")))->append(newValue)->toString());
	// throw
	throw cVar0;
	// 19533    .line 3391
label_cond_1c:
	this->multiplier = newValue;
	return;

}
// .method public setNegativePrefix(Ljava/lang/String;)V
void android::icu::text::DecimalFormat::setNegativePrefix(std::shared_ptr<java::lang::String> newValue)
{
	
	//    .param p1, "newValue"    # Ljava/lang/String;
	this->negativePrefix = newValue;
	this->negPrefixPattern = 0x0;
	return;

}
// .method public setNegativeSuffix(Ljava/lang/String;)V
void android::icu::text::DecimalFormat::setNegativeSuffix(std::shared_ptr<java::lang::String> newValue)
{
	
	//    .param p1, "newValue"    # Ljava/lang/String;
	this->negativeSuffix = newValue;
	this->negSuffixPattern = 0x0;
	return;

}
// .method public setPadCharacter(C)V
void android::icu::text::DecimalFormat::setPadCharacter(char padChar)
{
	
	//    .param p1, "padChar"    # C
	this->pad = padChar;
	return;

}
// .method public setPadPosition(I)V
void android::icu::text::DecimalFormat::setPadPosition(int padPos)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "padPos"    # I
	if ( padPos < 0 ) 
		goto label_cond_5;
	if ( padPos <= 0x3 )
		goto label_cond_e;
label_cond_5:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal pad position")));
	// throw
	throw cVar0;
	// 19609    .line 3624
label_cond_e:
	this->padPosition = padPos;
	return;

}
// .method public setParseBigDecimal(Z)V
void android::icu::text::DecimalFormat::setParseBigDecimal(bool value)
{
	
	//    .param p1, "value"    # Z
	this->parseBigDecimal = value;
	return;

}
// .method public setParseMaxDigits(I)V
void android::icu::text::DecimalFormat::setParseMaxDigits(int newValue)
{
	
	//    .param p1, "newValue"    # I
	if ( newValue <= 0 )
		goto label_cond_4;
	this->PARSE_MAX_EXPONENT = newValue;
label_cond_4:
	return;

}
// .method public setPositivePrefix(Ljava/lang/String;)V
void android::icu::text::DecimalFormat::setPositivePrefix(std::shared_ptr<java::lang::String> newValue)
{
	
	//    .param p1, "newValue"    # Ljava/lang/String;
	this->positivePrefix = newValue;
	this->posPrefixPattern = 0x0;
	return;

}
// .method public setPositiveSuffix(Ljava/lang/String;)V
void android::icu::text::DecimalFormat::setPositiveSuffix(std::shared_ptr<java::lang::String> newValue)
{
	
	//    .param p1, "newValue"    # Ljava/lang/String;
	this->positiveSuffix = newValue;
	this->posSuffixPattern = 0x0;
	return;

}
// .method public setRoundingIncrement(D)V
void android::icu::text::DecimalFormat::setRoundingIncrement(double newValue)
{
	
	double cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<android::icu::math::BigDecimal> cVar2;
	
	//    .param p1, "newValue"    # D
	cVar0 = 0x0;
	if ( (newValue > cVar0) >= 0 )
		goto label_cond_f;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal rounding increment")));
	// throw
	throw cVar1;
	// 19700    .line 3467
label_cond_f:
	if ( (newValue < cVar0) )     
		goto label_cond_1d;
	cVar2 = 0x0;
	cVar2->checkCast("android::icu::math::BigDecimal");
	this->setInternalRoundingIncrement(cVar2);
label_goto_19:
	this->resetActualRounding();
	return;
	// 19720    .line 3472
label_cond_1d:
	this->setInternalRoundingIncrement(android::icu::math::BigDecimal::valueOf(newValue));
	goto label_goto_19;

}
// .method public setRoundingIncrement(Landroid/icu/math/BigDecimal;)V
void android::icu::text::DecimalFormat::setRoundingIncrement(std::shared_ptr<android::icu::math::BigDecimal> newValue)
{
	
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "newValue"    # Landroid/icu/math/BigDecimal;
	if ( newValue )     
		goto label_cond_f;
	i = 0x0;
	//    .local v0, "i":I
label_goto_4:
	if ( i >= 0 )
		goto label_cond_16;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal rounding increment")));
	// throw
	throw cVar0;
	// 19757    .line 3440
	// 19758    .end local v0    # "i":I
label_cond_f:
	i = newValue->compareTo(android::icu::math::BigDecimal::ZERO);
	//    .restart local v0    # "i":I
	goto label_goto_4;
	// 19769    .line 3444
label_cond_16:
	if ( i )     
		goto label_cond_1f;
	this->setInternalRoundingIncrement(0x0);
label_goto_1b:
	this->resetActualRounding();
	return;
	// 19783    .line 3447
label_cond_1f:
	this->setInternalRoundingIncrement(newValue);
	goto label_goto_1b;

}
// .method public setRoundingIncrement(Ljava/math/BigDecimal;)V
void android::icu::text::DecimalFormat::setRoundingIncrement(std::shared_ptr<java::math::BigDecimal> newValue)
{
	
	std::shared_ptr<android::icu::math::BigDecimal> cVar0;
	std::shared_ptr<android::icu::math::BigDecimal> cVar1;
	
	//    .param p1, "newValue"    # Ljava/math/BigDecimal;
	cVar0 = 0x0;
	if ( newValue )     
		goto label_cond_9;
	cVar0->checkCast("android::icu::math::BigDecimal");
	this->setRoundingIncrement(cVar0);
label_goto_8:
	return;
	// 19809    .line 3424
label_cond_9:
	cVar1 = std::make_shared<android::icu::math::BigDecimal>(newValue);
	this->setRoundingIncrement(cVar1);
	goto label_goto_8;

}
// .method public setRoundingMode(I)V
void android::icu::text::DecimalFormat::setRoundingMode(int roundingMode)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "roundingMode"    # I
	if ( roundingMode < 0 ) 
		goto label_cond_5;
	if ( roundingMode <= 0x7 )
		goto label_cond_1f;
label_cond_5:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid rounding mode: ")))->append(roundingMode)->toString());
	// throw
	throw cVar0;
	// 19858    .line 3510
label_cond_1f:
	this->roundingMode = roundingMode;
	this->resetActualRounding();
	return;

}
// .method public setScientificNotation(Z)V
void android::icu::text::DecimalFormat::setScientificNotation(bool useScientific)
{
	
	//    .param p1, "useScientific"    # Z
	this->useExponentialNotation = useScientific;
	return;

}
// .method public setSecondaryGroupingSize(I)V
void android::icu::text::DecimalFormat::setSecondaryGroupingSize(int newValue)
{
	
	//    .param p1, "newValue"    # I
	this->groupingSize2 = (unsigned char)(newValue);
	return;

}
// .method public setSignificantDigitsUsed(Z)V
void android::icu::text::DecimalFormat::setSignificantDigitsUsed(bool useSignificantDigits)
{
	
	//    .param p1, "useSignificantDigits"    # Z
	this->useSignificantDigits = useSignificantDigits;
	return;

}
// .method toDigitList(D)Landroid/icu/text/DigitList;
std::shared_ptr<android::icu::text::DigitList> android::icu::text::DecimalFormat::toDigitList(double number)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::DigitList> result;
	
	//    .param p1, "number"    # D
	//    .annotation runtime Ljava/lang/Deprecated;
	// 19911    .end annotation
	cVar0 = 0x0;
	result = std::make_shared<android::icu::text::DigitList>();
	//    .local v0, "result":Landroid/icu/text/DigitList;
	result->set(number, this->precision(cVar0), cVar0);
	return result;

}
// .method public toLocalizedPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat::toLocalizedPattern()
{
	
	if ( this->style != 0x6 )
		goto label_cond_8;
	return this->formatPattern;
	// 19949    .line 4049
label_cond_8:
	return this->toPattern(0x1);

}
// .method public toPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat::toPattern()
{
	
	if ( this->style != 0x6 )
		goto label_cond_8;
	return this->formatPattern;
	// 19976    .line 4036
label_cond_8:
	return this->toPattern(0x0);

}


