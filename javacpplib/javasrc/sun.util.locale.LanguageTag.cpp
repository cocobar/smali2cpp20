// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\LanguageTag.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "sun.util.locale.BaseLocale.h"
#include "sun.util.locale.Extension.h"
#include "sun.util.locale.LanguageTag.h"
#include "sun.util.locale.LocaleExtensions.h"
#include "sun.util.locale.LocaleUtils.h"
#include "sun.util.locale.ParseStatus.h"
#include "sun.util.locale.StringTokenIterator.h"

static sun::util::locale::LanguageTag::GRANDFATHERED;
static sun::util::locale::LanguageTag::PRIVATEUSE = std::make_shared<java::lang::String>("x");
static sun::util::locale::LanguageTag::PRIVUSE_VARIANT_PREFIX = std::make_shared<java::lang::String>("lvariant");
static sun::util::locale::LanguageTag::SEP = std::make_shared<java::lang::String>("-");
static sun::util::locale::LanguageTag::UNDETERMINED = std::make_shared<java::lang::String>("und");
// .method static constructor <clinit>()V
void sun::util::locale::LanguageTag::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::util::HashMap> cVar3;
	std::shared<std::vector<std::vector<std::vector<java::lang::String>>>> entries;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
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
	int cVar30;
	std::shared_ptr<java::lang::Object> e;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<java::util::HashMap>();
	sun::util::locale::LanguageTag::GRANDFATHERED = cVar3;
	entries = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(0x1a);
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar4[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("art-lojban"));
	cVar4[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("jbo"));
	entries[cVar2] = cVar4;
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("cel-gaulish"));
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("xtg-x-cel-gaulish"));
	entries[cVar1] = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("en-GB-oed"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("en-GB-x-oed"));
	entries[cVar0] = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar7[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("i-ami"));
	cVar7[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ami"));
	entries[0x3] = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar8[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("i-bnn"));
	cVar8[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("bnn"));
	entries[0x4] = cVar8;
	cVar9 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar9[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("i-default"));
	cVar9[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("en-x-i-default"));
	entries[0x5] = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar10[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("i-enochian"));
	cVar10[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("und-x-i-enochian"));
	entries[0x6] = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar11[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("i-hak"));
	cVar11[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("hak"));
	entries[0x7] = cVar11;
	cVar12 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar12[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("i-klingon"));
	cVar12[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tlh"));
	entries[0x8] = cVar12;
	cVar13 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar13[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("i-lux"));
	cVar13[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("lb"));
	entries[0x9] = cVar13;
	cVar14 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar14[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("i-mingo"));
	cVar14[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("see-x-i-mingo"));
	entries[0xa] = cVar14;
	cVar15 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar15[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("i-navajo"));
	cVar15[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nv"));
	entries[0xb] = cVar15;
	cVar16 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar16[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("i-pwn"));
	cVar16[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("pwn"));
	entries[0xc] = cVar16;
	cVar17 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar17[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("i-tao"));
	cVar17[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tao"));
	entries[0xd] = cVar17;
	cVar18 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar18[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("i-tay"));
	cVar18[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tay"));
	entries[0xe] = cVar18;
	cVar19 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar19[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("i-tsu"));
	cVar19[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tsu"));
	entries[0xf] = cVar19;
	cVar20 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar20[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("no-bok"));
	cVar20[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nb"));
	entries[0x10] = cVar20;
	cVar21 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar21[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("no-nyn"));
	cVar21[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nn"));
	entries[0x11] = cVar21;
	cVar22 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar22[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sgn-BE-FR"));
	cVar22[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sfb"));
	entries[0x12] = cVar22;
	cVar23 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar23[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sgn-BE-NL"));
	cVar23[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("vgt"));
	entries[0x13] = cVar23;
	cVar24 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar24[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sgn-CH-DE"));
	cVar24[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sgg"));
	entries[0x14] = cVar24;
	cVar25 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar25[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh-guoyu"));
	cVar25[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("cmn"));
	entries[0x15] = cVar25;
	cVar26 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar26[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh-hakka"));
	cVar26[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("hak"));
	entries[0x16] = cVar26;
	cVar27 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar27[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh-min"));
	cVar27[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nan-x-zh-min"));
	entries[0x17] = cVar27;
	cVar28 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar28[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh-min-nan"));
	cVar28[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nan"));
	entries[0x18] = cVar28;
	cVar29 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar29[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh-xiang"));
	cVar29[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("hsn"));
	entries[0x19] = cVar29;
	//    .local v1, "entries":[[Ljava/lang/String;
	cVar30 = cVar2;
label_goto_1a5:
	if ( cVar30 >= entries->size() )
		goto label_cond_1b7;
	e = entries[cVar30];
	//    .local v0, "e":[Ljava/lang/String;
	sun::util::locale::LanguageTag::GRANDFATHERED->put(sun::util::locale::LocaleUtils::toLowerString(e[cVar2]), e);
	cVar30 = ( cVar30 + 0x1);
	goto label_goto_1a5;
	// 507    .line 41
	// 508    .end local v0    # "e":[Ljava/lang/String;
label_cond_1b7:
	return;

}
// .method private constructor <init>()V
sun::util::locale::LanguageTag::LanguageTag()
{
	
	// 518    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->language = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->script = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->region = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->privateuse = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->extlangs = java::util::Collections::emptyList({const[class].FS-Param});
	this->variants = java::util::Collections::emptyList({const[class].FS-Param});
	this->extensions = java::util::Collections::emptyList({const[class].FS-Param});
	return;

}
// .method public static canonicalizeExtension(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::canonicalizeExtension(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return sun::util::locale::LocaleUtils::toLowerString(s);

}
// .method public static canonicalizeExtensionSingleton(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::canonicalizeExtensionSingleton(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return sun::util::locale::LocaleUtils::toLowerString(s);

}
// .method public static canonicalizeExtensionSubtag(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::canonicalizeExtensionSubtag(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return sun::util::locale::LocaleUtils::toLowerString(s);

}
// .method public static canonicalizeExtlang(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::canonicalizeExtlang(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return sun::util::locale::LocaleUtils::toLowerString(s);

}
// .method public static canonicalizeLanguage(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::canonicalizeLanguage(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return sun::util::locale::LocaleUtils::toLowerString(s);

}
// .method public static canonicalizePrivateuse(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::canonicalizePrivateuse(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return sun::util::locale::LocaleUtils::toLowerString(s);

}
// .method public static canonicalizePrivateuseSubtag(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::canonicalizePrivateuseSubtag(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return sun::util::locale::LocaleUtils::toLowerString(s);

}
// .method public static canonicalizeRegion(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::canonicalizeRegion(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return sun::util::locale::LocaleUtils::toUpperString(s);

}
// .method public static canonicalizeScript(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::canonicalizeScript(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return sun::util::locale::LocaleUtils::toTitleString(s);

}
// .method public static canonicalizeVariant(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::canonicalizeVariant(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return sun::util::locale::LocaleUtils::toLowerString(s);

}
// .method public static isExtensionSingleton(Ljava/lang/String;)Z
bool sun::util::locale::LanguageTag::isExtensionSingleton(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() != 0x1 )
		goto label_cond_17;
	if ( !(sun::util::locale::LocaleUtils::isAlphaString(s)) )  
		goto label_cond_17;
	cVar0 = ( sun::util::locale::LocaleUtils::caseIgnoreMatch(std::make_shared<java::lang::String>(std::make_shared<char[]>("x")), s) ^ 0x1);
label_goto_16:
	return cVar0;
label_cond_17:
	cVar0 = 0x0;
	goto label_goto_16;

}
// .method public static isExtensionSingletonChar(C)Z
bool sun::util::locale::LanguageTag::isExtensionSingletonChar(char c)
{
	
	//    .param p0, "c"    # C
	return sun::util::locale::LanguageTag::isExtensionSingleton(java::lang::String::valueOf(c));

}
// .method public static isExtensionSubtag(Ljava/lang/String;)Z
bool sun::util::locale::LanguageTag::isExtensionSubtag(std::shared_ptr<java::lang::String> s)
{
	
	int len;
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	len = s->length();
	//    .local v0, "len":I
	if ( len <  0x2 )
		goto label_cond_10;
	if ( len >  0x8 )
		goto label_cond_10;
	cVar0 = sun::util::locale::LocaleUtils::isAlphaNumericString(s);
label_goto_f:
	return cVar0;
label_cond_10:
	cVar0 = 0x0;
	goto label_goto_f;

}
// .method public static isExtlang(Ljava/lang/String;)Z
bool sun::util::locale::LanguageTag::isExtlang(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() != 0x3 )
		goto label_cond_c;
	cVar0 = sun::util::locale::LocaleUtils::isAlphaString(s);
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public static isLanguage(Ljava/lang/String;)Z
bool sun::util::locale::LanguageTag::isLanguage(std::shared_ptr<java::lang::String> s)
{
	
	int len;
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	len = s->length();
	//    .local v0, "len":I
	if ( len <  0x2 )
		goto label_cond_10;
	if ( len >  0x8 )
		goto label_cond_10;
	cVar0 = sun::util::locale::LocaleUtils::isAlphaString(s);
label_goto_f:
	return cVar0;
label_cond_10:
	cVar0 = 0x0;
	goto label_goto_f;

}
// .method public static isPrivateusePrefix(Ljava/lang/String;)Z
bool sun::util::locale::LanguageTag::isPrivateusePrefix(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() != 0x1 )
		goto label_cond_f;
	cVar0 = sun::util::locale::LocaleUtils::caseIgnoreMatch(std::make_shared<java::lang::String>(std::make_shared<char[]>("x")), s);
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public static isPrivateusePrefixChar(C)Z
bool sun::util::locale::LanguageTag::isPrivateusePrefixChar(char c)
{
	
	//    .param p0, "c"    # C
	return sun::util::locale::LocaleUtils::caseIgnoreMatch(std::make_shared<java::lang::String>(std::make_shared<char[]>("x")), java::lang::String::valueOf(c));

}
// .method public static isPrivateuseSubtag(Ljava/lang/String;)Z
bool sun::util::locale::LanguageTag::isPrivateuseSubtag(std::shared_ptr<java::lang::String> s)
{
	
	int len;
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	len = s->length();
	//    .local v0, "len":I
	if ( len <  0x1 )
		goto label_cond_10;
	if ( len >  0x8 )
		goto label_cond_10;
	cVar0 = sun::util::locale::LocaleUtils::isAlphaNumericString(s);
label_goto_f:
	return cVar0;
label_cond_10:
	cVar0 = 0x0;
	goto label_goto_f;

}
// .method public static isRegion(Ljava/lang/String;)Z
bool sun::util::locale::LanguageTag::isRegion(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() != 0x2 )
		goto label_cond_d;
	if ( sun::util::locale::LocaleUtils::isAlphaString(s) )     
		goto label_cond_19;
label_cond_d:
	if ( s->length() != 0x3 )
		goto label_cond_1b;
	cVar0 = sun::util::locale::LocaleUtils::isNumericString(s);
label_goto_18:
	return cVar0;
label_cond_19:
	cVar0 = 0x1;
	goto label_goto_18;
	// 972    .line 612
label_cond_1b:
	cVar0 = 0x0;
	goto label_goto_18;

}
// .method public static isScript(Ljava/lang/String;)Z
bool sun::util::locale::LanguageTag::isScript(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() != 0x4 )
		goto label_cond_c;
	cVar0 = sun::util::locale::LocaleUtils::isAlphaString(s);
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public static isVariant(Ljava/lang/String;)Z
bool sun::util::locale::LanguageTag::isVariant(std::shared_ptr<java::lang::String> s)
{
	
	int cVar1;
	int len;
	bool cVar1;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar1 = 0x0;
	len = s->length();
	//    .local v0, "len":I
	if ( len <  0x5 )
		goto label_cond_11;
	if ( len >  0x8 )
		goto label_cond_11;
	return sun::util::locale::LocaleUtils::isAlphaNumericString(s);
	// 1035    .line 622
label_cond_11:
	if ( len != 0x4 )
		goto label_cond_3e;
	if ( !(sun::util::locale::LocaleUtils::isNumeric(s->charAt(cVar1))) )  
		goto label_cond_3d;
	if ( !(sun::util::locale::LocaleUtils::isAlphaNumeric(s->charAt(0x1))) )  
		goto label_cond_3d;
	if ( !(sun::util::locale::LocaleUtils::isAlphaNumeric(s->charAt(0x2))) )  
		goto label_cond_3d;
	cVar1 = sun::util::locale::LocaleUtils::isAlphaNumeric(s->charAt(0x3));
label_cond_3d:
	return cVar1;
	// 1095    .line 628
label_cond_3e:
	return cVar1;

}
// .method public static parse(Ljava/lang/String;Lsun/util/locale/ParseStatus;)Lsun/util/locale/LanguageTag;
std::shared_ptr<sun::util::locale::LanguageTag> sun::util::locale::LanguageTag::parse(std::shared_ptr<java::lang::String> languageTag,std::shared_ptr<sun::util::locale::ParseStatus> sts)
{
	
	std::shared_ptr<sun::util::locale::ParseStatus> sts;
	std::shared_ptr<std::vector<java::lang::String>> gfmap;
	std::shared_ptr<sun::util::locale::StringTokenIterator> itr;
	std::shared_ptr<sun::util::locale::LanguageTag> tag;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "languageTag"    # Ljava/lang/String;
	//    .param p1, "sts"    # Lsun/util/locale/ParseStatus;
	if ( sts )     
		goto label_cond_61;
	//    .end local p1    # "sts":Lsun/util/locale/ParseStatus;
	sts = std::make_shared<sun::util::locale::ParseStatus>();
	//    .restart local p1    # "sts":Lsun/util/locale/ParseStatus;
label_goto_7:
	gfmap = sun::util::locale::LanguageTag::GRANDFATHERED->get(sun::util::locale::LocaleUtils::toLowerString(languageTag));
	gfmap->checkCast("std::vector<java::lang::String>");
	//    .local v0, "gfmap":[Ljava/lang/String;
	if ( !(gfmap) )  
		goto label_cond_65;
	itr = std::make_shared<sun::util::locale::StringTokenIterator>(gfmap[0x1], std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v1, "itr":Lsun/util/locale/StringTokenIterator;
label_goto_20:
	tag = std::make_shared<sun::util::locale::LanguageTag>();
	//    .local v3, "tag":Lsun/util/locale/LanguageTag;
	if ( !(tag->parseLanguage(itr, sts)) )  
		goto label_cond_3a;
	tag->parseExtlangs(itr, sts);
	tag->parseScript(itr, sts);
	tag->parseRegion(itr, sts);
	tag->parseVariants(itr, sts);
	tag->parseExtensions(itr, sts);
label_cond_3a:
	tag->parsePrivateuse(itr, sts);
	if ( itr->isDone() )     
		goto label_cond_60;
	if ( !(( sts->isError() ^ 0x1)) )  
		goto label_cond_60;
	s = itr->current();
	//    .local v2, "s":Ljava/lang/String;
	sts->errorIndex = itr->currentStart();
	if ( s->length() )     
		goto label_cond_6e;
	sts->errorMsg = std::make_shared<java::lang::String>(std::make_shared<char[]>("Empty subtag"));
	//    .end local v2    # "s":Ljava/lang/String;
label_cond_60:
label_goto_60:
	return tag;
	// 1225    .line 185
	// 1226    .end local v0    # "gfmap":[Ljava/lang/String;
	// 1227    .end local v1    # "itr":Lsun/util/locale/StringTokenIterator;
	// 1228    .end local v3    # "tag":Lsun/util/locale/LanguageTag;
label_cond_61:
	sts->reset();
	goto label_goto_7;
	// 1234    .line 196
	// 1235    .restart local v0    # "gfmap":[Ljava/lang/String;
label_cond_65:
	itr = std::make_shared<sun::util::locale::StringTokenIterator>(languageTag, std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .restart local v1    # "itr":Lsun/util/locale/StringTokenIterator;
	goto label_goto_20;
	// 1246    .line 217
	// 1247    .restart local v2    # "s":Ljava/lang/String;
	// 1248    .restart local v3    # "tag":Lsun/util/locale/LanguageTag;
label_cond_6e:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sts->errorMsg = cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid subtag: ")))->append(s)->toString();
	goto label_goto_60;

}
// .method private parseExtensions(Lsun/util/locale/StringTokenIterator;Lsun/util/locale/ParseStatus;)Z
bool sun::util::locale::LanguageTag::parseExtensions(std::shared_ptr<sun::util::locale::StringTokenIterator> itr,std::shared_ptr<sun::util::locale::ParseStatus> sts)
{
	
	std::shared_ptr<java::lang::String> s;
	int start;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	
	//    .param p1, "itr"    # Lsun/util/locale/StringTokenIterator;
	//    .param p2, "sts"    # Lsun/util/locale/ParseStatus;
	if ( itr->isDone() )     
		goto label_cond_c;
	if ( !(sts->isError()) )  
		goto label_cond_e;
label_cond_c:
	return 0x0;
	// 1298    .line 340
label_cond_e:
	//    .local v0, "found":Z
label_goto_f:
	if ( itr->isDone() )     
		goto label_cond_73;
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( !(sun::util::locale::LanguageTag::isExtensionSingleton(s)) )  
		goto label_cond_73;
	start = itr->currentStart();
	//    .local v4, "start":I
	//    .local v3, "singleton":Ljava/lang/String;
	sb = std::make_shared<java::lang::StringBuilder>(s);
	//    .local v2, "sb":Ljava/lang/StringBuilder;
	itr->next();
label_goto_2c:
	if ( itr->isDone() )     
		goto label_cond_50;
	s = itr->current();
	if ( !(sun::util::locale::LanguageTag::isExtensionSubtag(s)) )  
		goto label_cond_50;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(s);
	sts->parseLength = itr->currentEnd();
	itr->next();
	goto label_goto_2c;
	// 1384    .line 361
label_cond_50:
	if ( sts->parseLength >  start )
		goto label_cond_74;
	sts->errorIndex = start;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sts->errorMsg = cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Incomplete extension \'")))->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString();
	//    .end local v1    # "s":Ljava/lang/String;
	//    .end local v2    # "sb":Ljava/lang/StringBuilder;
	//    .end local v3    # "singleton":Ljava/lang/String;
	//    .end local v4    # "start":I
label_cond_73:
	return 0x0;
	// 1428    .line 367
	// 1429    .restart local v1    # "s":Ljava/lang/String;
	// 1430    .restart local v2    # "sb":Ljava/lang/StringBuilder;
	// 1431    .restart local v3    # "singleton":Ljava/lang/String;
	// 1432    .restart local v4    # "start":I
label_cond_74:
	if ( !(this->extensions->isEmpty()) )  
		goto label_cond_84;
	cVar1 = std::make_shared<java::util::ArrayList>(0x4);
	this->extensions = cVar1;
label_cond_84:
	this->extensions->add(sb->toString());
	0x1;
	goto label_goto_f;

}
// .method private parseExtlangs(Lsun/util/locale/StringTokenIterator;Lsun/util/locale/ParseStatus;)Z
bool sun::util::locale::LanguageTag::parseExtlangs(std::shared_ptr<sun::util::locale::StringTokenIterator> itr,std::shared_ptr<sun::util::locale::ParseStatus> sts)
{
	
	int cVar0;
	bool found;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::util::ArrayList> cVar1;
	
	//    .param p1, "itr"    # Lsun/util/locale/StringTokenIterator;
	//    .param p2, "sts"    # Lsun/util/locale/ParseStatus;
	cVar0 = 0x3;
	if ( itr->isDone() )     
		goto label_cond_d;
	if ( !(sts->isError()) )  
		goto label_cond_f;
label_cond_d:
	return 0x0;
	// 1494    .line 251
label_cond_f:
	found = 0x0;
	//    .local v0, "found":Z
label_cond_10:
	if ( itr->isDone() )     
		goto label_cond_20;
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( sun::util::locale::LanguageTag::isExtlang(s) )     
		goto label_cond_21;
	//    .end local v1    # "s":Ljava/lang/String;
label_cond_20:
label_goto_20:
	return found;
	// 1526    .line 258
	// 1527    .restart local v1    # "s":Ljava/lang/String;
label_cond_21:
	found = 0x1;
	if ( !(this->extlangs->isEmpty()) )  
		goto label_cond_31;
	cVar1 = std::make_shared<java::util::ArrayList>(cVar0);
	this->extlangs = cVar1;
label_cond_31:
	this->extlangs->add(s);
	sts->parseLength = itr->currentEnd();
	itr->next();
	if ( this->extlangs->size() != cVar0 )
		goto label_cond_10;
	goto label_goto_20;

}
// .method private parseLanguage(Lsun/util/locale/StringTokenIterator;Lsun/util/locale/ParseStatus;)Z
bool sun::util::locale::LanguageTag::parseLanguage(std::shared_ptr<sun::util::locale::StringTokenIterator> itr,std::shared_ptr<sun::util::locale::ParseStatus> sts)
{
	
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "itr"    # Lsun/util/locale/StringTokenIterator;
	//    .param p2, "sts"    # Lsun/util/locale/ParseStatus;
	if ( itr->isDone() )     
		goto label_cond_c;
	if ( !(sts->isError()) )  
		goto label_cond_e;
label_cond_c:
	return 0x0;
	// 1600    .line 233
label_cond_e:
	//    .local v0, "found":Z
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( !(sun::util::locale::LanguageTag::isLanguage(s)) )  
		goto label_cond_25;
	this->language = s;
	sts->parseLength = itr->currentEnd();
	itr->next();
label_cond_25:
	return 0x0;

}
// .method public static parseLocale(Lsun/util/locale/BaseLocale;Lsun/util/locale/LocaleExtensions;)Lsun/util/locale/LanguageTag;
std::shared_ptr<sun::util::locale::LanguageTag> sun::util::locale::LanguageTag::parseLocale(std::shared_ptr<sun::util::locale::BaseLocale> baseLocale,std::shared_ptr<sun::util::locale::LocaleExtensions> localeExtensions)
{
	
	std::shared_ptr<sun::util::locale::LanguageTag> tag;
	std::shared_ptr<java::lang::String> language;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::String> variant;
	int variants;
	std::shared_ptr<sun::util::locale::StringTokenIterator> varitr;
	std::shared_ptr<java::lang::String> var;
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared_ptr<java::lang::String> prvv;
	std::shared_ptr<java::lang::String> privuseVar;
	std::shared_ptr<java::util::List> extensions;
	std::shared_ptr<java::lang::String> privateuse;
	std::shared_ptr<java::util::Iterator> locextKey_S_iterator;
	std::shared_ptr<java::lang::Character> locextKey;
	std::shared_ptr<sun::util::locale::Extension> ext;
	std::shared_ptr<java::util::ArrayList> extensions;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::util::ArrayList> variants;
	
	//    .param p0, "baseLocale"    # Lsun/util/locale/BaseLocale;
	//    .param p1, "localeExtensions"    # Lsun/util/locale/LocaleExtensions;
	tag = std::make_shared<sun::util::locale::LanguageTag>();
	//    .local v16, "tag":Lsun/util/locale/LanguageTag;
	language = baseLocale->getLanguage();
	//    .local v7, "language":Ljava/lang/String;
	script = baseLocale->getScript();
	//    .local v15, "script":Ljava/lang/String;
	region = baseLocale->getRegion();
	//    .local v14, "region":Ljava/lang/String;
	variant = baseLocale->getVariant();
	//    .local v18, "variant":Ljava/lang/String;
	0x0;
	//    .local v6, "hasSubtag":Z
	//    .local v12, "privuseVar":Ljava/lang/String;
	if ( !(sun::util::locale::LanguageTag::isLanguage(language)) )  
		goto label_cond_2f;
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("iw")))) )  
		goto label_cond_109;
	language = std::make_shared<java::lang::String>(std::make_shared<char[]>("he"));
label_cond_2b:
label_goto_2b:
	tag->language = language;
label_cond_2f:
	if ( !(sun::util::locale::LanguageTag::isScript(script)) )  
		goto label_cond_40;
	tag->script = sun::util::locale::LanguageTag::canonicalizeScript(script);
	0x1;
label_cond_40:
	if ( !(sun::util::locale::LanguageTag::isRegion(region)) )  
		goto label_cond_51;
	tag->region = sun::util::locale::LanguageTag::canonicalizeRegion(region);
	0x1;
label_cond_51:
	if ( !(tag->language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("no")))) )  
		goto label_cond_88;
	if ( !(tag->region->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("NO")))) )  
		goto label_cond_88;
	if ( !(variant->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("NY")))) )  
		goto label_cond_88;
	tag->language = std::make_shared<java::lang::String>(std::make_shared<char[]>("nn"));
	variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_cond_88:
	if ( variant->length() <= 0 )
		goto label_cond_dc;
	variants = 0x0;
	//    .local v19, "variants":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	var62 = varitr(variant, std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	//    .end local v19    # "variants":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	//    .local v20, "varitr":Lsun/util/locale/StringTokenIterator;
label_goto_9e:
	if ( varitr->isDone() )     
		goto label_cond_ae;
	var = varitr->current();
	//    .local v17, "var":Ljava/lang/String;
	if ( sun::util::locale::LanguageTag::isVariant(var) )     
		goto label_cond_129;
	//    .end local v17    # "var":Ljava/lang/String;
label_cond_ae:
	if ( !(variants) )  
		goto label_cond_b7;
	tag->variants = variants;
	0x1;
label_cond_b7:
	if ( varitr->isDone() )     
		goto label_cond_dc;
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "buf":Ljava/lang/StringBuilder;
label_goto_c2:
	if ( varitr->isDone() )     
		goto label_cond_d2;
	prvv = varitr->current();
	//    .local v13, "prvv":Ljava/lang/String;
	if ( sun::util::locale::LanguageTag::isPrivateuseSubtag(prvv) )     
		goto label_cond_13c;
	//    .end local v13    # "prvv":Ljava/lang/String;
label_cond_d2:
	if ( buf->length() <= 0 )
		goto label_cond_dc;
	privuseVar = buf->toString();
	//    .end local v3    # "buf":Ljava/lang/StringBuilder;
	//    .end local v12    # "privuseVar":Ljava/lang/String;
	//    .end local v20    # "varitr":Lsun/util/locale/StringTokenIterator;
label_cond_dc:
	extensions = 0x0;
	//    .local v5, "extensions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	privateuse = 0x0;
	//    .local v11, "privateuse":Ljava/lang/String;
	if ( !(localeExtensions) )  
		goto label_cond_180;
	//    .local v10, "locextKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	locextKey_S_iterator = localeExtensions->getKeys()->iterator();
	//    .end local v5    # "extensions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	//    .end local v11    # "privateuse":Ljava/lang/String;
	//    .local v9, "locextKey$iterator":Ljava/util/Iterator;
label_goto_e8:
	if ( !(locextKey_S_iterator->hasNext()) )  
		goto label_cond_180;
	locextKey = locextKey_S_iterator->next();
	locextKey->checkCast("java::lang::Character");
	//    .local v8, "locextKey":Ljava/lang/Character;
	ext = localeExtensions->getExtension(locextKey);
	//    .local v4, "ext":Lsun/util/locale/Extension;
	if ( !(sun::util::locale::LanguageTag::isPrivateusePrefixChar(locextKey->charValue())) )  
		goto label_cond_152;
	ext->getValue();
	//    .local v11, "privateuse":Ljava/lang/String;
	goto label_goto_e8;
	// 1991    .line 432
	// 1992    .end local v4    # "ext":Lsun/util/locale/Extension;
	// 1993    .end local v8    # "locextKey":Ljava/lang/Character;
	// 1994    .end local v9    # "locextKey$iterator":Ljava/util/Iterator;
	// 1995    .end local v10    # "locextKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	// 1996    .end local v11    # "privateuse":Ljava/lang/String;
	// 1997    .restart local v12    # "privuseVar":Ljava/lang/String;
label_cond_109:
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("ji")))) )  
		goto label_cond_119;
	language = std::make_shared<java::lang::String>(std::make_shared<char[]>("yi"));
	goto label_goto_2b;
	// 2014    .line 434
label_cond_119:
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("in")))) )  
		goto label_cond_2b;
	language = std::make_shared<java::lang::String>(std::make_shared<char[]>("id"));
	goto label_goto_2b;
	// 2031    .line 464
	// 2032    .restart local v17    # "var":Ljava/lang/String;
	// 2033    .restart local v20    # "varitr":Lsun/util/locale/StringTokenIterator;
label_cond_129:
	if ( variants )     
		goto label_cond_130;
	variants = std::make_shared<java::util::ArrayList>();
label_cond_130:
	variants->add(var);
	varitr->next();
	goto label_goto_9e;
	// 2055    .line 483
	// 2056    .end local v17    # "var":Ljava/lang/String;
	// 2057    .restart local v3    # "buf":Ljava/lang/StringBuilder;
	// 2058    .restart local v13    # "prvv":Ljava/lang/String;
label_cond_13c:
	if ( buf->length() <= 0 )
		goto label_cond_14a;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
label_cond_14a:
	buf->append(prvv);
	varitr->next();
	goto label_goto_c2;
	// 2082    .line 505
	// 2083    .end local v3    # "buf":Ljava/lang/StringBuilder;
	// 2084    .end local v12    # "privuseVar":Ljava/lang/String;
	// 2085    .end local v13    # "prvv":Ljava/lang/String;
	// 2086    .end local v20    # "varitr":Lsun/util/locale/StringTokenIterator;
	// 2087    .restart local v4    # "ext":Lsun/util/locale/Extension;
	// 2088    .restart local v8    # "locextKey":Ljava/lang/Character;
	// 2089    .restart local v9    # "locextKey$iterator":Ljava/util/Iterator;
	// 2090    .restart local v10    # "locextKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
label_cond_152:
	if ( extensions )     
		goto label_cond_159;
	extensions = std::make_shared<java::util::ArrayList>();
label_cond_159:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	extensions->add(cVar0->append(locextKey->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(ext->getValue())->toString());
	goto label_goto_e8;
	// 2137    .line 513
	// 2138    .end local v4    # "ext":Lsun/util/locale/Extension;
	// 2139    .end local v8    # "locextKey":Ljava/lang/Character;
	// 2140    .end local v9    # "locextKey$iterator":Ljava/util/Iterator;
	// 2141    .end local v10    # "locextKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
label_cond_180:
	if ( !(extensions) )  
		goto label_cond_187;
	tag->extensions = extensions;
label_cond_187:
	if ( !(0x0) )  
		goto label_cond_1a1;
	if ( privateuse )     
		goto label_cond_1c1;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	privateuse = cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("lvariant-")))->append(privuseVar)->toString();
label_cond_1a1:
label_goto_1a1:
	if ( !(privateuse) )  
		goto label_cond_1a7;
	tag->privateuse = privateuse;
label_cond_1a7:
	if ( tag->language->length() )     
		goto label_cond_1c0;
	if ( 0x1 )     
		goto label_cond_1b7;
	if ( privateuse )     
		goto label_cond_1c0;
label_cond_1b7:
	tag->language = std::make_shared<java::lang::String>(std::make_shared<char[]>("und"));
label_cond_1c0:
	return tag;
	// 2223    .line 523
label_cond_1c1:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	//    .restart local v11    # "privateuse":Ljava/lang/String;
	goto label_goto_1a1;

}
// .method private parsePrivateuse(Lsun/util/locale/StringTokenIterator;Lsun/util/locale/ParseStatus;)Z
bool sun::util::locale::LanguageTag::parsePrivateuse(std::shared_ptr<sun::util::locale::StringTokenIterator> itr,std::shared_ptr<sun::util::locale::ParseStatus> sts)
{
	
	bool found;
	std::shared_ptr<java::lang::String> s;
	int start;
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	//    .param p1, "itr"    # Lsun/util/locale/StringTokenIterator;
	//    .param p2, "sts"    # Lsun/util/locale/ParseStatus;
	if ( itr->isDone() )     
		goto label_cond_c;
	if ( !(sts->isError()) )  
		goto label_cond_e;
label_cond_c:
	return 0x0;
	// 2306    .line 384
label_cond_e:
	found = 0x0;
	//    .local v0, "found":Z
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( !(sun::util::locale::LanguageTag::isPrivateusePrefix(s)) )  
		goto label_cond_40;
	start = itr->currentStart();
	//    .local v3, "start":I
	sb = std::make_shared<java::lang::StringBuilder>(s);
	//    .local v2, "sb":Ljava/lang/StringBuilder;
	itr->next();
label_goto_25:
	if ( itr->isDone() )     
		goto label_cond_35;
	s = itr->current();
	if ( sun::util::locale::LanguageTag::isPrivateuseSubtag(s) )     
		goto label_cond_41;
label_cond_35:
	if ( sts->parseLength >  start )
		goto label_cond_55;
	sts->errorIndex = start;
	sts->errorMsg = std::make_shared<java::lang::String>(std::make_shared<char[]>("Incomplete privateuse"));
	//    .end local v2    # "sb":Ljava/lang/StringBuilder;
	//    .end local v3    # "start":I
label_cond_40:
label_goto_40:
	return found;
	// 2380    .line 397
	// 2381    .restart local v2    # "sb":Ljava/lang/StringBuilder;
	// 2382    .restart local v3    # "start":I
label_cond_41:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(s);
	sts->parseLength = itr->currentEnd();
	itr->next();
	goto label_goto_25;
	// 2404    .line 408
label_cond_55:
	this->privateuse = sb->toString();
	found = 0x1;
	goto label_goto_40;

}
// .method private parseRegion(Lsun/util/locale/StringTokenIterator;Lsun/util/locale/ParseStatus;)Z
bool sun::util::locale::LanguageTag::parseRegion(std::shared_ptr<sun::util::locale::StringTokenIterator> itr,std::shared_ptr<sun::util::locale::ParseStatus> sts)
{
	
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "itr"    # Lsun/util/locale/StringTokenIterator;
	//    .param p2, "sts"    # Lsun/util/locale/ParseStatus;
	if ( itr->isDone() )     
		goto label_cond_c;
	if ( !(sts->isError()) )  
		goto label_cond_e;
label_cond_c:
	return 0x0;
	// 2443    .line 298
label_cond_e:
	//    .local v0, "found":Z
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( !(sun::util::locale::LanguageTag::isRegion(s)) )  
		goto label_cond_25;
	this->region = s;
	sts->parseLength = itr->currentEnd();
	itr->next();
label_cond_25:
	return 0x0;

}
// .method private parseScript(Lsun/util/locale/StringTokenIterator;Lsun/util/locale/ParseStatus;)Z
bool sun::util::locale::LanguageTag::parseScript(std::shared_ptr<sun::util::locale::StringTokenIterator> itr,std::shared_ptr<sun::util::locale::ParseStatus> sts)
{
	
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "itr"    # Lsun/util/locale/StringTokenIterator;
	//    .param p2, "sts"    # Lsun/util/locale/ParseStatus;
	if ( itr->isDone() )     
		goto label_cond_c;
	if ( !(sts->isError()) )  
		goto label_cond_e;
label_cond_c:
	return 0x0;
	// 2507    .line 280
label_cond_e:
	//    .local v0, "found":Z
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( !(sun::util::locale::LanguageTag::isScript(s)) )  
		goto label_cond_25;
	this->script = s;
	sts->parseLength = itr->currentEnd();
	itr->next();
label_cond_25:
	return 0x0;

}
// .method private parseVariants(Lsun/util/locale/StringTokenIterator;Lsun/util/locale/ParseStatus;)Z
bool sun::util::locale::LanguageTag::parseVariants(std::shared_ptr<sun::util::locale::StringTokenIterator> itr,std::shared_ptr<sun::util::locale::ParseStatus> sts)
{
	
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .param p1, "itr"    # Lsun/util/locale/StringTokenIterator;
	//    .param p2, "sts"    # Lsun/util/locale/ParseStatus;
	if ( itr->isDone() )     
		goto label_cond_c;
	if ( !(sts->isError()) )  
		goto label_cond_e;
label_cond_c:
	return 0x0;
	// 2571    .line 316
label_cond_e:
	//    .local v0, "found":Z
label_goto_f:
	if ( itr->isDone() )     
		goto label_cond_1f;
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( sun::util::locale::LanguageTag::isVariant(s) )     
		goto label_cond_20;
	//    .end local v1    # "s":Ljava/lang/String;
label_cond_1f:
	return 0x0;
	// 2602    .line 323
	// 2603    .restart local v1    # "s":Ljava/lang/String;
label_cond_20:
	0x1;
	if ( !(this->variants->isEmpty()) )  
		goto label_cond_31;
	cVar0 = std::make_shared<java::util::ArrayList>(0x3);
	this->variants = cVar0;
label_cond_31:
	this->variants->add(s);
	sts->parseLength = itr->currentEnd();
	itr->next();
	goto label_goto_f;

}
// .method public getExtensions()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> sun::util::locale::LanguageTag::getExtensions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2649        value = {
	// 2650            "()",
	// 2651            "Ljava/util/List",
	// 2652            "<",
	// 2653            "Ljava/lang/String;",
	// 2654            ">;"
	// 2655        }
	// 2656    .end annotation
	if ( !(this->extensions->isEmpty()) )  
		goto label_cond_d;
	return java::util::Collections::emptyList({const[class].FS-Param});
	// 2675    .line 576
label_cond_d:
	return java::util::Collections::unmodifiableList(this->extensions);

}
// .method public getExtlangs()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> sun::util::locale::LanguageTag::getExtlangs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2689        value = {
	// 2690            "()",
	// 2691            "Ljava/util/List",
	// 2692            "<",
	// 2693            "Ljava/lang/String;",
	// 2694            ">;"
	// 2695        }
	// 2696    .end annotation
	if ( !(this->extlangs->isEmpty()) )  
		goto label_cond_d;
	return java::util::Collections::emptyList({const[class].FS-Param});
	// 2715    .line 554
label_cond_d:
	return java::util::Collections::unmodifiableList(this->extlangs);

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::getLanguage()
{
	
	return this->language;

}
// .method public getPrivateuse()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::getPrivateuse()
{
	
	return this->privateuse;

}
// .method public getRegion()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::getRegion()
{
	
	return this->region;

}
// .method public getScript()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::getScript()
{
	
	return this->script;

}
// .method public getVariants()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> sun::util::locale::LanguageTag::getVariants()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2769        value = {
	// 2770            "()",
	// 2771            "Ljava/util/List",
	// 2772            "<",
	// 2773            "Ljava/lang/String;",
	// 2774            ">;"
	// 2775        }
	// 2776    .end annotation
	if ( !(this->variants->isEmpty()) )  
		goto label_cond_d;
	return java::util::Collections::emptyList({const[class].FS-Param});
	// 2795    .line 569
label_cond_d:
	return java::util::Collections::unmodifiableList(this->variants);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LanguageTag::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::util::Iterator> extlang_S_iterator;
	std::shared_ptr<java::lang::String> extlang;
	std::shared_ptr<java::util::Iterator> variant_S_iterator;
	std::shared_ptr<java::lang::String> variant;
	std::shared_ptr<java::util::Iterator> extension_S_iterator;
	std::shared_ptr<java::lang::String> extension;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "sb":Ljava/lang/StringBuilder;
	if ( this->language->length() <= 0 )
		goto label_cond_91;
	sb->append(this->language);
	extlang_S_iterator = this->extlangs->iterator();
	//    .local v3, "extlang$iterator":Ljava/util/Iterator;
label_goto_18:
	if ( !(extlang_S_iterator->hasNext()) )  
		goto label_cond_2f;
	extlang = extlang_S_iterator->next();
	extlang->checkCast("java::lang::String");
	//    .local v2, "extlang":Ljava/lang/String;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(extlang);
	goto label_goto_18;
	// 2863    .line 724
	// 2864    .end local v2    # "extlang":Ljava/lang/String;
label_cond_2f:
	if ( this->script->length() <= 0 )
		goto label_cond_43;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(this->script);
label_cond_43:
	if ( this->region->length() <= 0 )
		goto label_cond_57;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(this->region);
label_cond_57:
	variant_S_iterator = this->variants->iterator();
	//    .local v6, "variant$iterator":Ljava/util/Iterator;
label_goto_5d:
	if ( !(variant_S_iterator->hasNext()) )  
		goto label_cond_74;
	variant = variant_S_iterator->next();
	variant->checkCast("java::lang::String");
	//    .local v5, "variant":Ljava/lang/String;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(variant);
	goto label_goto_5d;
	// 2940    .line 736
	// 2941    .end local v5    # "variant":Ljava/lang/String;
label_cond_74:
	extension_S_iterator = this->extensions->iterator();
	//    .local v1, "extension$iterator":Ljava/util/Iterator;
label_goto_7a:
	if ( !(extension_S_iterator->hasNext()) )  
		goto label_cond_91;
	extension = extension_S_iterator->next();
	extension->checkCast("java::lang::String");
	//    .local v0, "extension":Ljava/lang/String;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(extension);
	goto label_goto_7a;
	// 2975    .line 740
	// 2976    .end local v0    # "extension":Ljava/lang/String;
	// 2977    .end local v1    # "extension$iterator":Ljava/util/Iterator;
	// 2978    .end local v3    # "extlang$iterator":Ljava/util/Iterator;
	// 2979    .end local v6    # "variant$iterator":Ljava/util/Iterator;
label_cond_91:
	if ( this->privateuse->length() <= 0 )
		goto label_cond_aa;
	if ( sb->length() <= 0 )
		goto label_cond_a5;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
label_cond_a5:
	sb->append(this->privateuse);
label_cond_aa:
	return sb->toString();

}


