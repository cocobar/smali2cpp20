// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalDataCache$CompactDecimalDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.CompactDecimalDataCache_S_CompactDecimalDataSink.h"
#include "android.icu.text.CompactDecimalDataCache_S_Data.h"
#include "android.icu.text.CompactDecimalDataCache_S_DataBundle.h"
#include "android.icu.text.CompactDecimalDataCache_S_FormatsTableKey.h"
#include "android.icu.text.CompactDecimalDataCache_S_PatternsTableKey.h"
#include "android.icu.text.CompactDecimalDataCache.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method static synthetic -set0(Landroid/icu/text/CompactDecimalDataCache$CompactDecimalDataSink;Z)Z
bool android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink::_set0(std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink> _this,bool _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/CompactDecimalDataCache$CompactDecimalDataSink;
	//    .param p1, "-value"    # Z
	_this->isFallback = _value;
	return _value;

}
// .method static synthetic -set1(Landroid/icu/text/CompactDecimalDataCache$CompactDecimalDataSink;Z)Z
bool android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink::_set1(std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink> _this,bool _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/CompactDecimalDataCache$CompactDecimalDataSink;
	//    .param p1, "-value"    # Z
	_this->isLatin = _value;
	return _value;

}
// .method public constructor <init>(Landroid/icu/text/CompactDecimalDataCache$DataBundle;Landroid/icu/util/ULocale;)V
android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink::CompactDecimalDataCache_S_CompactDecimalDataSink(std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> dataBundle,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "dataBundle"    # Landroid/icu/text/CompactDecimalDataCache$DataBundle;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	// 057    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	this->dataBundle = dataBundle;
	this->locale = locale;
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool isRoot)
{
	
	int i1;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey> patternsTableKey;
	int i2;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey> formatsTableKey;
	std::shared_ptr<java::lang::String> style;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> destination;
	int i3;
	auto power10;
	int log10Value;
	int i4;
	std::shared_ptr<java::lang::String> pluralVariant;
	std::shared_ptr<java::lang::String> template;
	int numZeros;
	auto divisor;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "isRoot"    # Z
	if ( !(isRoot) )  
		goto label_cond_b;
	if ( !(( this->isLatin ^ 0x1)) )  
		goto label_cond_b;
	return;
	// 091    .line 150
label_cond_b:
	//    .local v20, "patternsTable":Landroid/icu/impl/UResource$Table;
	i1 = 0x0;
	//    .local v15, "i1":I
label_goto_10:
	if ( !(value->getTable()->getKeyAndValue(i1, key, value)) )  
		goto label_cond_1bd;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("patternsShort")))) )  
		goto label_cond_85;
	patternsTableKey = android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::PATTERNS_SHORT;
	//    .local v21, "patternsTableKey":Landroid/icu/text/CompactDecimalDataCache$PatternsTableKey;
label_goto_29:
	//    .local v11, "formatsTable":Landroid/icu/impl/UResource$Table;
	i2 = 0x0;
	//    .local v16, "i2":I
label_goto_2f:
	if ( !(value->getTable()->getKeyAndValue(i2, key, value)) )  
		goto label_cond_1b9;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("decimalFormat")))) )  
		goto label_cond_93;
	formatsTableKey = android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::DECIMAL_FORMAT;
	//    .local v14, "formatsTableKey":Landroid/icu/text/CompactDecimalDataCache$FormatsTableKey;
label_goto_48:
	0x0;
	//    .local v8, "style":Ljava/lang/String;
	0x0;
	//    .local v9, "destination":Landroid/icu/text/CompactDecimalDataCache$Data;
	if ( patternsTableKey != android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::PATTERNS_LONG )
		goto label_cond_a1;
	if ( formatsTableKey != android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::DECIMAL_FORMAT )
		goto label_cond_a1;
	style = std::make_shared<java::lang::String>(std::make_shared<char[]>("long"));
	//    .local v8, "style":Ljava/lang/String;
	destination = this->dataBundle->longData;
	//    .local v9, "destination":Landroid/icu/text/CompactDecimalDataCache$Data;
label_goto_5d:
	if ( !(this->isFallback) )  
		goto label_cond_c9;
	if ( style != std::make_shared<java::lang::String>(std::make_shared<char[]>("long")) )
		goto label_cond_c9;
	if ( !(( this->dataBundle->shortData->isEmpty() ^ 0x1)) )  
		goto label_cond_c9;
	if ( !(( this->dataBundle->shortData->fromFallback ^ 0x1)) )  
		goto label_cond_c9;
	//    .end local v8    # "style":Ljava/lang/String;
	//    .end local v9    # "destination":Landroid/icu/text/CompactDecimalDataCache$Data;
	//    .end local v14    # "formatsTableKey":Landroid/icu/text/CompactDecimalDataCache$FormatsTableKey;
label_cond_82:
	i2 = ( i2 + 0x1);
	goto label_goto_2f;
	// 254    .line 157
	// 255    .end local v11    # "formatsTable":Landroid/icu/impl/UResource$Table;
	// 256    .end local v16    # "i2":I
	// 257    .end local v21    # "patternsTableKey":Landroid/icu/text/CompactDecimalDataCache$PatternsTableKey;
label_cond_85:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("patternsLong")))) )  
		goto label_cond_1b9;
	android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::PATTERNS_LONG;
	//    .restart local v21    # "patternsTableKey":Landroid/icu/text/CompactDecimalDataCache$PatternsTableKey;
	goto label_goto_29;
	// 275    .line 171
	// 276    .restart local v11    # "formatsTable":Landroid/icu/impl/UResource$Table;
	// 277    .restart local v16    # "i2":I
label_cond_93:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("currencyFormat")))) )  
		goto label_cond_82;
	android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::CURRENCY_FORMAT;
	//    .restart local v14    # "formatsTableKey":Landroid/icu/text/CompactDecimalDataCache$FormatsTableKey;
	goto label_goto_48;
	// 295    .line 184
	// 296    .local v8, "style":Ljava/lang/String;
	// 297    .local v9, "destination":Landroid/icu/text/CompactDecimalDataCache$Data;
label_cond_a1:
	if ( patternsTableKey != android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::PATTERNS_SHORT )
		goto label_cond_b5;
	if ( formatsTableKey != android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::DECIMAL_FORMAT )
		goto label_cond_b5;
	std::make_shared<java::lang::String>(std::make_shared<char[]>("short"));
	//    .local v8, "style":Ljava/lang/String;
	//    .local v9, "destination":Landroid/icu/text/CompactDecimalDataCache$Data;
	goto label_goto_5d;
	// 324    .line 188
	// 325    .local v8, "style":Ljava/lang/String;
	// 326    .local v9, "destination":Landroid/icu/text/CompactDecimalDataCache$Data;
label_cond_b5:
	if ( patternsTableKey != android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::PATTERNS_SHORT )
		goto label_cond_82;
	if ( formatsTableKey != android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::CURRENCY_FORMAT )
		goto label_cond_82;
	std::make_shared<java::lang::String>(std::make_shared<char[]>("shortCurrency"));
	//    .local v8, "style":Ljava/lang/String;
	//    .local v9, "destination":Landroid/icu/text/CompactDecimalDataCache$Data;
	goto label_goto_5d;
	// 353    .line 210
label_cond_c9:
	if ( !(isRoot) )  
		goto label_cond_ea;
	if ( style != std::make_shared<java::lang::String>(std::make_shared<char[]>("long")) )
		goto label_cond_ea;
	if ( !(this->dataBundle->longData->isEmpty()) )  
		goto label_cond_ea;
	if ( ( this->dataBundle->shortData->isEmpty() ^ 0x1) )     
		goto label_cond_82;
label_cond_ea:
	destination->fromFallback = this->isFallback;
	//    .local v23, "powersOfTenTable":Landroid/icu/impl/UResource$Table;
	i3 = 0x0;
	//    .local v17, "i3":I
label_goto_f6:
	if ( !(value->getTable()->getKeyAndValue(i3, key, value)) )  
		goto label_cond_82;
	power10 = java::lang::Long::parseLong(key->toString());
	//    .local v24, "power10":J
	log10Value = (int)(java::lang::Math::log10((double)(power10)));
	//    .local v5, "log10Value":I
	if ( log10Value <  0xf )
		goto label_cond_11f;
label_cond_11c:
	i3 = ( i3 + 0x1);
	goto label_goto_f6;
	// 462    .line 232
label_cond_11f:
	//    .local v22, "pluralVariantsTable":Landroid/icu/impl/UResource$Table;
	i4 = 0x0;
	//    .local v18, "i4":I
label_goto_125:
	if ( !(value->getTable()->getKeyAndValue(i4, key, value)) )  
		goto label_cond_11c;
	pluralVariant = key->toString();
	//    .local v4, "pluralVariant":Ljava/lang/String;
	template = value->toString();
	//    .local v6, "template":Ljava/lang/String;
	numZeros = android::icu::text::CompactDecimalDataCache::-wrap0(pluralVariant, log10Value, template, this->locale, style, destination, 0x0);
	//    .local v19, "numZeros":I
	if ( numZeros >= 0 )
		goto label_cond_149;
label_goto_146:
	i4 = ( i4 + 0x1);
	goto label_goto_125;
	// 522    .line 253
label_cond_149:
	divisor = android::icu::text::CompactDecimalDataCache::-wrap2(power10, numZeros);
	//    .local v12, "divisor":J
	if ( !((destination->divisors[log10Value] > 0x0)) )  
		goto label_cond_1b4;
	if ( !((destination->divisors[log10Value] > divisor)) )  
		goto label_cond_1b4;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Plural variant \'")))->append(pluralVariant)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' template \'")))->append(template)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' for 10^")))->append(log10Value)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" has wrong number of zeros in ")))->append(android::icu::text::CompactDecimalDataCache::-wrap1(this->locale, style))->toString());
	// throw
	throw cVar0;
	// 638    .line 261
label_cond_1b4:
	destination->divisors[log10Value] = divisor;
	goto label_goto_146;
	// 646    .line 151
	// 647    .end local v4    # "pluralVariant":Ljava/lang/String;
	// 648    .end local v5    # "log10Value":I
	// 649    .end local v6    # "template":Ljava/lang/String;
	// 650    .end local v8    # "style":Ljava/lang/String;
	// 651    .end local v9    # "destination":Landroid/icu/text/CompactDecimalDataCache$Data;
	// 652    .end local v11    # "formatsTable":Landroid/icu/impl/UResource$Table;
	// 653    .end local v12    # "divisor":J
	// 654    .end local v14    # "formatsTableKey":Landroid/icu/text/CompactDecimalDataCache$FormatsTableKey;
	// 655    .end local v16    # "i2":I
	// 656    .end local v17    # "i3":I
	// 657    .end local v18    # "i4":I
	// 658    .end local v19    # "numZeros":I
	// 659    .end local v21    # "patternsTableKey":Landroid/icu/text/CompactDecimalDataCache$PatternsTableKey;
	// 660    .end local v22    # "pluralVariantsTable":Landroid/icu/impl/UResource$Table;
	// 661    .end local v23    # "powersOfTenTable":Landroid/icu/impl/UResource$Table;
	// 662    .end local v24    # "power10":J
label_cond_1b9:
	i1 = ( i1 + 0x1);
	goto label_goto_10;
	// 668    .line 266
label_cond_1bd:
	return;

}


