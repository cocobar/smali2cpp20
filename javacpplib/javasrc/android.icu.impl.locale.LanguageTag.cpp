// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LanguageTag.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.AsciiUtil_S_CaseInsensitiveKey.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.impl.locale.BaseLocale.h"
#include "android.icu.impl.locale.Extension.h"
#include "android.icu.impl.locale.LanguageTag.h"
#include "android.icu.impl.locale.LocaleExtensions.h"
#include "android.icu.impl.locale.ParseStatus.h"
#include "android.icu.impl.locale.StringTokenIterator.h"
#include "java.lang.AssertionError.h"
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

static android::icu::impl::locale::LanguageTag::_assertionsDisabled;
static android::icu::impl::locale::LanguageTag::GRANDFATHERED;
static android::icu::impl::locale::LanguageTag::JDKIMPL = false;
static android::icu::impl::locale::LanguageTag::PRIVATEUSE = std::make_shared<java::lang::String>("x");
static android::icu::impl::locale::LanguageTag::PRIVUSE_VARIANT_PREFIX = std::make_shared<java::lang::String>("lvariant");
static android::icu::impl::locale::LanguageTag::SEP = std::make_shared<java::lang::String>("-");
static android::icu::impl::locale::LanguageTag::UNDETERMINED;
// .method static constructor <clinit>()V
void android::icu::impl::locale::LanguageTag::static_cinit()
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
	std::shared_ptr<android::icu::impl::locale::AsciiUtil_S_CaseInsensitiveKey> cVar31;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	android::icu::impl::locale::LanguageTag::_assertionsDisabled = ( android::icu::impl::locale::LanguageTag()->desiredAssertionStatus() ^ 0x1);
	android::icu::impl::locale::LanguageTag::UNDETERMINED = std::make_shared<java::lang::String>(std::make_shared<char[]>("und"));
	cVar3 = std::make_shared<java::util::HashMap>();
	android::icu::impl::locale::LanguageTag::GRANDFATHERED = cVar3;
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
label_goto_1b4:
	if ( cVar30 >= entries->size() )
		goto label_cond_1c7;
	e = entries[cVar30];
	//    .local v0, "e":[Ljava/lang/String;
	cVar31 = std::make_shared<android::icu::impl::locale::AsciiUtil_S_CaseInsensitiveKey>(e[cVar2]);
	android::icu::impl::locale::LanguageTag::GRANDFATHERED->put(cVar31, e);
	cVar30 = ( cVar30 + 0x1);
	goto label_goto_1b4;
	// 527    .line 22
	// 528    .end local v0    # "e":[Ljava/lang/String;
label_cond_1c7:
	return;

}
// .method private constructor <init>()V
android::icu::impl::locale::LanguageTag::LanguageTag()
{
	
	// 538    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_language = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_script = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_region = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_privateuse = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_extlangs = java::util::Collections::emptyList({const[class].FS-Param});
	this->_variants = java::util::Collections::emptyList({const[class].FS-Param});
	this->_extensions = java::util::Collections::emptyList({const[class].FS-Param});
	return;

}
// .method public static canonicalizeExtension(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::canonicalizeExtension(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return android::icu::impl::locale::AsciiUtil::toLowerString(s);

}
// .method public static canonicalizeExtensionSingleton(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::canonicalizeExtensionSingleton(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return android::icu::impl::locale::AsciiUtil::toLowerString(s);

}
// .method public static canonicalizeExtensionSubtag(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::canonicalizeExtensionSubtag(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return android::icu::impl::locale::AsciiUtil::toLowerString(s);

}
// .method public static canonicalizeExtlang(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::canonicalizeExtlang(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return android::icu::impl::locale::AsciiUtil::toLowerString(s);

}
// .method public static canonicalizeLanguage(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::canonicalizeLanguage(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return android::icu::impl::locale::AsciiUtil::toLowerString(s);

}
// .method public static canonicalizePrivateuse(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::canonicalizePrivateuse(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return android::icu::impl::locale::AsciiUtil::toLowerString(s);

}
// .method public static canonicalizePrivateuseSubtag(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::canonicalizePrivateuseSubtag(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return android::icu::impl::locale::AsciiUtil::toLowerString(s);

}
// .method public static canonicalizeRegion(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::canonicalizeRegion(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return android::icu::impl::locale::AsciiUtil::toUpperString(s);

}
// .method public static canonicalizeScript(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::canonicalizeScript(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return android::icu::impl::locale::AsciiUtil::toTitleString(s);

}
// .method public static canonicalizeVariant(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::canonicalizeVariant(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return android::icu::impl::locale::AsciiUtil::toLowerString(s);

}
// .method public static isExtensionSingleton(Ljava/lang/String;)Z
bool android::icu::impl::locale::LanguageTag::isExtensionSingleton(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() != 0x1 )
		goto label_cond_17;
	if ( !(android::icu::impl::locale::AsciiUtil::isAlphaString(s)) )  
		goto label_cond_17;
	cVar0 = ( android::icu::impl::locale::AsciiUtil::caseIgnoreMatch(std::make_shared<java::lang::String>(std::make_shared<char[]>("x")), s) ^ 0x1);
label_goto_16:
	return cVar0;
label_cond_17:
	cVar0 = 0x0;
	goto label_goto_16;

}
// .method public static isExtensionSingletonChar(C)Z
bool android::icu::impl::locale::LanguageTag::isExtensionSingletonChar(char c)
{
	
	//    .param p0, "c"    # C
	return android::icu::impl::locale::LanguageTag::isExtensionSingleton(java::lang::String::valueOf(c));

}
// .method public static isExtensionSubtag(Ljava/lang/String;)Z
bool android::icu::impl::locale::LanguageTag::isExtensionSubtag(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() <  0x2 )
		goto label_cond_14;
	if ( s->length() >  0x8 )
		goto label_cond_14;
	cVar0 = android::icu::impl::locale::AsciiUtil::isAlphaNumericString(s);
label_goto_13:
	return cVar0;
label_cond_14:
	cVar0 = 0x0;
	goto label_goto_13;

}
// .method public static isExtlang(Ljava/lang/String;)Z
bool android::icu::impl::locale::LanguageTag::isExtlang(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() != 0x3 )
		goto label_cond_c;
	cVar0 = android::icu::impl::locale::AsciiUtil::isAlphaString(s);
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public static isLanguage(Ljava/lang/String;)Z
bool android::icu::impl::locale::LanguageTag::isLanguage(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() <  0x2 )
		goto label_cond_14;
	if ( s->length() >  0x8 )
		goto label_cond_14;
	cVar0 = android::icu::impl::locale::AsciiUtil::isAlphaString(s);
label_goto_13:
	return cVar0;
label_cond_14:
	cVar0 = 0x0;
	goto label_goto_13;

}
// .method public static isPrivateusePrefix(Ljava/lang/String;)Z
bool android::icu::impl::locale::LanguageTag::isPrivateusePrefix(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() != 0x1 )
		goto label_cond_f;
	cVar0 = android::icu::impl::locale::AsciiUtil::caseIgnoreMatch(std::make_shared<java::lang::String>(std::make_shared<char[]>("x")), s);
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public static isPrivateusePrefixChar(C)Z
bool android::icu::impl::locale::LanguageTag::isPrivateusePrefixChar(char c)
{
	
	//    .param p0, "c"    # C
	return android::icu::impl::locale::AsciiUtil::caseIgnoreMatch(std::make_shared<java::lang::String>(std::make_shared<char[]>("x")), java::lang::String::valueOf(c));

}
// .method public static isPrivateuseSubtag(Ljava/lang/String;)Z
bool android::icu::impl::locale::LanguageTag::isPrivateuseSubtag(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() <  0x1 )
		goto label_cond_14;
	if ( s->length() >  0x8 )
		goto label_cond_14;
	cVar0 = android::icu::impl::locale::AsciiUtil::isAlphaNumericString(s);
label_goto_13:
	return cVar0;
label_cond_14:
	cVar0 = 0x0;
	goto label_goto_13;

}
// .method public static isRegion(Ljava/lang/String;)Z
bool android::icu::impl::locale::LanguageTag::isRegion(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() != 0x2 )
		goto label_cond_d;
	if ( android::icu::impl::locale::AsciiUtil::isAlphaString(s) )     
		goto label_cond_19;
label_cond_d:
	if ( s->length() != 0x3 )
		goto label_cond_1b;
	cVar0 = android::icu::impl::locale::AsciiUtil::isNumericString(s);
label_goto_18:
	return cVar0;
label_cond_19:
	cVar0 = 0x1;
	goto label_goto_18;
	// 998    .line 600
label_cond_1b:
	cVar0 = 0x0;
	goto label_goto_18;

}
// .method public static isScript(Ljava/lang/String;)Z
bool android::icu::impl::locale::LanguageTag::isScript(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() != 0x4 )
		goto label_cond_c;
	cVar0 = android::icu::impl::locale::AsciiUtil::isAlphaString(s);
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public static isVariant(Ljava/lang/String;)Z
bool android::icu::impl::locale::LanguageTag::isVariant(std::shared_ptr<java::lang::String> s)
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
	return android::icu::impl::locale::AsciiUtil::isAlphaNumericString(s);
	// 1061    .line 610
label_cond_11:
	if ( len != 0x4 )
		goto label_cond_3e;
	if ( !(android::icu::impl::locale::AsciiUtil::isNumeric(s->charAt(cVar1))) )  
		goto label_cond_3d;
	if ( !(android::icu::impl::locale::AsciiUtil::isAlphaNumeric(s->charAt(0x1))) )  
		goto label_cond_3d;
	if ( !(android::icu::impl::locale::AsciiUtil::isAlphaNumeric(s->charAt(0x2))) )  
		goto label_cond_3d;
	cVar1 = android::icu::impl::locale::AsciiUtil::isAlphaNumeric(s->charAt(0x3));
label_cond_3d:
	return cVar1;
	// 1121    .line 616
label_cond_3e:
	return cVar1;

}
// .method public static parse(Ljava/lang/String;Landroid/icu/impl/locale/ParseStatus;)Landroid/icu/impl/locale/LanguageTag;
std::shared_ptr<android::icu::impl::locale::LanguageTag> android::icu::impl::locale::LanguageTag::parse(std::shared_ptr<java::lang::String> languageTag,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts)
{
	
	std::shared_ptr<android::icu::impl::locale::ParseStatus> sts;
	std::shared_ptr<android::icu::impl::locale::AsciiUtil_S_CaseInsensitiveKey> cVar0;
	std::shared_ptr<std::vector<java::lang::String>> gfmap;
	std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr;
	std::shared_ptr<android::icu::impl::locale::LanguageTag> tag;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p0, "languageTag"    # Ljava/lang/String;
	//    .param p1, "sts"    # Landroid/icu/impl/locale/ParseStatus;
	if ( sts )     
		goto label_cond_52;
	//    .end local p1    # "sts":Landroid/icu/impl/locale/ParseStatus;
	sts = std::make_shared<android::icu::impl::locale::ParseStatus>();
	//    .restart local p1    # "sts":Landroid/icu/impl/locale/ParseStatus;
label_goto_7:
	//    .local v1, "isGrandfathered":Z
	cVar0 = std::make_shared<android::icu::impl::locale::AsciiUtil_S_CaseInsensitiveKey>(languageTag);
	gfmap = android::icu::impl::locale::LanguageTag::GRANDFATHERED->get(cVar0);
	gfmap->checkCast("std::vector<java::lang::String>");
	//    .local v0, "gfmap":[Ljava/lang/String;
	if ( !(gfmap) )  
		goto label_cond_56;
	itr = std::make_shared<android::icu::impl::locale::StringTokenIterator>(gfmap[0x1], std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v2, "itr":Landroid/icu/impl/locale/StringTokenIterator;
label_goto_23:
	tag = std::make_shared<android::icu::impl::locale::LanguageTag>();
	//    .local v4, "tag":Landroid/icu/impl/locale/LanguageTag;
	if ( !(tag->parseLanguage(itr, sts)) )  
		goto label_cond_3d;
	tag->parseExtlangs(itr, sts);
	tag->parseScript(itr, sts);
	tag->parseRegion(itr, sts);
	tag->parseVariants(itr, sts);
	tag->parseExtensions(itr, sts);
label_cond_3d:
	tag->parsePrivateuse(itr, sts);
	if ( !(0x0) )  
		goto label_cond_76;
	if ( android::icu::impl::locale::LanguageTag::_assertionsDisabled )     
		goto label_cond_5f;
	if ( itr->isDone() )     
		goto label_cond_5f;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 1232    .line 168
	// 1233    .end local v0    # "gfmap":[Ljava/lang/String;
	// 1234    .end local v1    # "isGrandfathered":Z
	// 1235    .end local v2    # "itr":Landroid/icu/impl/locale/StringTokenIterator;
	// 1236    .end local v4    # "tag":Landroid/icu/impl/locale/LanguageTag;
label_cond_52:
	sts->reset();
	goto label_goto_7;
	// 1242    .line 181
	// 1243    .restart local v0    # "gfmap":[Ljava/lang/String;
	// 1244    .restart local v1    # "isGrandfathered":Z
label_cond_56:
	itr = std::make_shared<android::icu::impl::locale::StringTokenIterator>(languageTag, std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .restart local v2    # "itr":Landroid/icu/impl/locale/StringTokenIterator;
	goto label_goto_23;
	// 1255    .line 200
	// 1256    .restart local v4    # "tag":Landroid/icu/impl/locale/LanguageTag;
label_cond_5f:
	if ( android::icu::impl::locale::LanguageTag::_assertionsDisabled )     
		goto label_cond_6f;
	if ( !(sts->isError()) )  
		goto label_cond_6f;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 1274    .line 201
label_cond_6f:
	sts->_parseLength = languageTag->length();
label_cond_75:
label_goto_75:
	return tag;
	// 1287    .line 202
label_cond_76:
	if ( itr->isDone() )     
		goto label_cond_75;
	if ( !(( sts->isError() ^ 0x1)) )  
		goto label_cond_75;
	s = itr->current();
	//    .local v3, "s":Ljava/lang/String;
	sts->_errorIndex = itr->currentStart();
	if ( s->length() )     
		goto label_cond_9a;
	sts->_errorMsg = std::make_shared<java::lang::String>(std::make_shared<char[]>("Empty subtag"));
	goto label_goto_75;
	// 1330    .line 208
label_cond_9a:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sts->_errorMsg = cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid subtag: ")))->append(s)->toString();
	goto label_goto_75;

}
// .method private parseExtensions(Landroid/icu/impl/locale/StringTokenIterator;Landroid/icu/impl/locale/ParseStatus;)Z
bool android::icu::impl::locale::LanguageTag::parseExtensions(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts)
{
	
	std::shared_ptr<java::lang::String> s;
	int start;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	
	//    .param p1, "itr"    # Landroid/icu/impl/locale/StringTokenIterator;
	//    .param p2, "sts"    # Landroid/icu/impl/locale/ParseStatus;
	if ( itr->isDone() )     
		goto label_cond_d;
	if ( !(sts->isError()) )  
		goto label_cond_e;
label_cond_d:
	return 0x0;
	// 1380    .line 331
label_cond_e:
	//    .local v0, "found":Z
label_goto_f:
	if ( itr->isDone() )     
		goto label_cond_73;
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( !(android::icu::impl::locale::LanguageTag::isExtensionSingleton(s)) )  
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
	if ( !(android::icu::impl::locale::LanguageTag::isExtensionSubtag(s)) )  
		goto label_cond_50;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(s);
	sts->_parseLength = itr->currentEnd();
	itr->next();
	goto label_goto_2c;
	// 1466    .line 352
label_cond_50:
	if ( sts->_parseLength >  start )
		goto label_cond_74;
	sts->_errorIndex = start;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sts->_errorMsg = cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Incomplete extension \'")))->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString();
	//    .end local v1    # "s":Ljava/lang/String;
	//    .end local v2    # "sb":Ljava/lang/StringBuilder;
	//    .end local v3    # "singleton":Ljava/lang/String;
	//    .end local v4    # "start":I
label_cond_73:
	return 0x0;
	// 1510    .line 358
	// 1511    .restart local v1    # "s":Ljava/lang/String;
	// 1512    .restart local v2    # "sb":Ljava/lang/StringBuilder;
	// 1513    .restart local v3    # "singleton":Ljava/lang/String;
	// 1514    .restart local v4    # "start":I
label_cond_74:
	if ( this->_extensions->size() )     
		goto label_cond_84;
	cVar1 = std::make_shared<java::util::ArrayList>(0x4);
	this->_extensions = cVar1;
label_cond_84:
	this->_extensions->add(sb->toString());
	0x1;
	goto label_goto_f;

}
// .method private parseExtlangs(Landroid/icu/impl/locale/StringTokenIterator;Landroid/icu/impl/locale/ParseStatus;)Z
bool android::icu::impl::locale::LanguageTag::parseExtlangs(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts)
{
	
	int cVar0;
	bool found;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::util::ArrayList> cVar1;
	
	//    .param p1, "itr"    # Landroid/icu/impl/locale/StringTokenIterator;
	//    .param p2, "sts"    # Landroid/icu/impl/locale/ParseStatus;
	cVar0 = 0x3;
	if ( itr->isDone() )     
		goto label_cond_d;
	if ( !(sts->isError()) )  
		goto label_cond_f;
label_cond_d:
	return 0x0;
	// 1576    .line 242
label_cond_f:
	found = 0x0;
	//    .local v0, "found":Z
label_cond_10:
	if ( itr->isDone() )     
		goto label_cond_20;
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( android::icu::impl::locale::LanguageTag::isExtlang(s) )     
		goto label_cond_21;
	//    .end local v1    # "s":Ljava/lang/String;
label_cond_20:
label_goto_20:
	return found;
	// 1608    .line 249
	// 1609    .restart local v1    # "s":Ljava/lang/String;
label_cond_21:
	found = 0x1;
	if ( !(this->_extlangs->isEmpty()) )  
		goto label_cond_31;
	cVar1 = std::make_shared<java::util::ArrayList>(cVar0);
	this->_extlangs = cVar1;
label_cond_31:
	this->_extlangs->add(s);
	sts->_parseLength = itr->currentEnd();
	itr->next();
	if ( this->_extlangs->size() != cVar0 )
		goto label_cond_10;
	goto label_goto_20;

}
// .method private parseLanguage(Landroid/icu/impl/locale/StringTokenIterator;Landroid/icu/impl/locale/ParseStatus;)Z
bool android::icu::impl::locale::LanguageTag::parseLanguage(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts)
{
	
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "itr"    # Landroid/icu/impl/locale/StringTokenIterator;
	//    .param p2, "sts"    # Landroid/icu/impl/locale/ParseStatus;
	if ( itr->isDone() )     
		goto label_cond_c;
	if ( !(sts->isError()) )  
		goto label_cond_e;
label_cond_c:
	return 0x0;
	// 1682    .line 224
label_cond_e:
	//    .local v0, "found":Z
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( !(android::icu::impl::locale::LanguageTag::isLanguage(s)) )  
		goto label_cond_25;
	this->_language = s;
	sts->_parseLength = itr->currentEnd();
	itr->next();
label_cond_25:
	return 0x0;

}
// .method public static parseLocale(Landroid/icu/impl/locale/BaseLocale;Landroid/icu/impl/locale/LocaleExtensions;)Landroid/icu/impl/locale/LanguageTag;
std::shared_ptr<android::icu::impl::locale::LanguageTag> android::icu::impl::locale::LanguageTag::parseLocale(std::shared_ptr<android::icu::impl::locale::BaseLocale> baseLocale,std::shared_ptr<android::icu::impl::locale::LocaleExtensions> localeExtensions)
{
	
	std::shared_ptr<android::icu::impl::locale::LanguageTag> tag;
	std::shared_ptr<java::lang::String> language;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::String> variant;
	int variants;
	std::shared_ptr<android::icu::impl::locale::StringTokenIterator> varitr;
	std::shared_ptr<java::lang::String> var;
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared_ptr<java::lang::String> prvv;
	std::shared_ptr<java::lang::String> privuseVar;
	std::shared_ptr<java::util::List> extensions;
	std::shared_ptr<java::lang::String> privateuse;
	std::shared_ptr<java::util::Iterator> locextKey_S_iterator;
	std::shared_ptr<java::lang::Character> locextKey;
	std::shared_ptr<android::icu::impl::locale::Extension> ext;
	std::shared_ptr<java::util::ArrayList> extensions;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::util::ArrayList> variants;
	
	//    .param p0, "baseLocale"    # Landroid/icu/impl/locale/BaseLocale;
	//    .param p1, "localeExtensions"    # Landroid/icu/impl/locale/LocaleExtensions;
	tag = std::make_shared<android::icu::impl::locale::LanguageTag>();
	//    .local v16, "tag":Landroid/icu/impl/locale/LanguageTag;
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
	if ( language->length() <= 0 )
		goto label_cond_35;
	if ( !(android::icu::impl::locale::LanguageTag::isLanguage(language)) )  
		goto label_cond_35;
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("iw")))) )  
		goto label_cond_e2;
	language = std::make_shared<java::lang::String>(std::make_shared<char[]>("he"));
label_cond_31:
label_goto_31:
	tag->_language = language;
label_cond_35:
	if ( script->length() <= 0 )
		goto label_cond_4c;
	if ( !(android::icu::impl::locale::LanguageTag::isScript(script)) )  
		goto label_cond_4c;
	tag->_script = android::icu::impl::locale::LanguageTag::canonicalizeScript(script);
	0x1;
label_cond_4c:
	if ( region->length() <= 0 )
		goto label_cond_63;
	if ( !(android::icu::impl::locale::LanguageTag::isRegion(region)) )  
		goto label_cond_63;
	tag->_region = android::icu::impl::locale::LanguageTag::canonicalizeRegion(region);
	0x1;
label_cond_63:
	if ( variant->length() <= 0 )
		goto label_cond_b7;
	variants = 0x0;
	//    .local v19, "variants":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	var47 = varitr(variant, std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	//    .end local v19    # "variants":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	//    .local v20, "varitr":Landroid/icu/impl/locale/StringTokenIterator;
label_goto_79:
	if ( varitr->isDone() )     
		goto label_cond_89;
	var = varitr->current();
	//    .local v17, "var":Ljava/lang/String;
	if ( android::icu::impl::locale::LanguageTag::isVariant(var) )     
		goto label_cond_102;
	//    .end local v17    # "var":Ljava/lang/String;
label_cond_89:
	if ( !(variants) )  
		goto label_cond_92;
	tag->_variants = variants;
	0x1;
label_cond_92:
	if ( varitr->isDone() )     
		goto label_cond_b7;
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "buf":Ljava/lang/StringBuilder;
label_goto_9d:
	if ( varitr->isDone() )     
		goto label_cond_ad;
	prvv = varitr->current();
	//    .local v13, "prvv":Ljava/lang/String;
	if ( android::icu::impl::locale::LanguageTag::isPrivateuseSubtag(prvv) )     
		goto label_cond_119;
	//    .end local v13    # "prvv":Ljava/lang/String;
label_cond_ad:
	if ( buf->length() <= 0 )
		goto label_cond_b7;
	privuseVar = buf->toString();
	//    .end local v3    # "buf":Ljava/lang/StringBuilder;
	//    .end local v12    # "privuseVar":Ljava/lang/String;
	//    .end local v20    # "varitr":Landroid/icu/impl/locale/StringTokenIterator;
label_cond_b7:
	extensions = 0x0;
	//    .local v5, "extensions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	privateuse = 0x0;
	//    .local v11, "privateuse":Ljava/lang/String;
	//    .local v10, "locextKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	locextKey_S_iterator = localeExtensions->getKeys()->iterator();
	//    .end local v5    # "extensions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	//    .end local v11    # "privateuse":Ljava/lang/String;
	//    .local v9, "locextKey$iterator":Ljava/util/Iterator;
label_goto_c1:
	if ( !(locextKey_S_iterator->hasNext()) )  
		goto label_cond_161;
	locextKey = locextKey_S_iterator->next();
	locextKey->checkCast("java::lang::Character");
	//    .local v8, "locextKey":Ljava/lang/Character;
	ext = localeExtensions->getExtension(locextKey);
	//    .local v4, "ext":Landroid/icu/impl/locale/Extension;
	if ( !(android::icu::impl::locale::LanguageTag::isPrivateusePrefixChar(locextKey->charValue())) )  
		goto label_cond_133;
	ext->getValue();
	//    .local v11, "privateuse":Ljava/lang/String;
	goto label_goto_c1;
	// 2034    .line 424
	// 2035    .end local v4    # "ext":Landroid/icu/impl/locale/Extension;
	// 2036    .end local v8    # "locextKey":Ljava/lang/Character;
	// 2037    .end local v9    # "locextKey$iterator":Ljava/util/Iterator;
	// 2038    .end local v10    # "locextKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	// 2039    .end local v11    # "privateuse":Ljava/lang/String;
	// 2040    .restart local v12    # "privuseVar":Ljava/lang/String;
label_cond_e2:
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("ji")))) )  
		goto label_cond_f2;
	language = std::make_shared<java::lang::String>(std::make_shared<char[]>("yi"));
	goto label_goto_31;
	// 2057    .line 426
label_cond_f2:
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("in")))) )  
		goto label_cond_31;
	language = std::make_shared<java::lang::String>(std::make_shared<char[]>("id"));
	goto label_goto_31;
	// 2074    .line 458
	// 2075    .restart local v17    # "var":Ljava/lang/String;
	// 2076    .restart local v20    # "varitr":Landroid/icu/impl/locale/StringTokenIterator;
label_cond_102:
	if ( variants )     
		goto label_cond_109;
	variants = std::make_shared<java::util::ArrayList>();
label_cond_109:
	variants->add(android::icu::impl::locale::LanguageTag::canonicalizeVariant(var));
	varitr->next();
	goto label_goto_79;
	// 2102    .line 481
	// 2103    .end local v17    # "var":Ljava/lang/String;
	// 2104    .restart local v3    # "buf":Ljava/lang/StringBuilder;
	// 2105    .restart local v13    # "prvv":Ljava/lang/String;
label_cond_119:
	if ( buf->length() <= 0 )
		goto label_cond_127;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
label_cond_127:
	buf->append(android::icu::impl::locale::AsciiUtil::toLowerString(prvv));
	varitr->next();
	goto label_goto_9d;
	// 2134    .line 505
	// 2135    .end local v3    # "buf":Ljava/lang/StringBuilder;
	// 2136    .end local v12    # "privuseVar":Ljava/lang/String;
	// 2137    .end local v13    # "prvv":Ljava/lang/String;
	// 2138    .end local v20    # "varitr":Landroid/icu/impl/locale/StringTokenIterator;
	// 2139    .restart local v4    # "ext":Landroid/icu/impl/locale/Extension;
	// 2140    .restart local v8    # "locextKey":Ljava/lang/Character;
	// 2141    .restart local v9    # "locextKey$iterator":Ljava/util/Iterator;
	// 2142    .restart local v10    # "locextKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
label_cond_133:
	if ( extensions )     
		goto label_cond_13a;
	extensions = std::make_shared<java::util::ArrayList>();
label_cond_13a:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	extensions->add(cVar0->append(locextKey->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(ext->getValue())->toString());
	goto label_goto_c1;
	// 2189    .line 512
	// 2190    .end local v4    # "ext":Landroid/icu/impl/locale/Extension;
	// 2191    .end local v8    # "locextKey":Ljava/lang/Character;
label_cond_161:
	if ( !(extensions) )  
		goto label_cond_168;
	tag->_extensions = extensions;
label_cond_168:
	if ( !(0x0) )  
		goto label_cond_182;
	if ( privateuse )     
		goto label_cond_1a1;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	privateuse = cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("lvariant-")))->append(privuseVar)->toString();
label_cond_182:
label_goto_182:
	if ( !(privateuse) )  
		goto label_cond_188;
	tag->_privateuse = privateuse;
label_cond_188:
	if ( tag->_language->length() )     
		goto label_cond_1a0;
	if ( 0x1 )     
		goto label_cond_198;
	if ( privateuse )     
		goto label_cond_1a0;
label_cond_198:
	tag->_language = android::icu::impl::locale::LanguageTag::UNDETERMINED;
label_cond_1a0:
	return tag;
	// 2273    .line 522
label_cond_1a1:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	//    .restart local v11    # "privateuse":Ljava/lang/String;
	goto label_goto_182;

}
// .method private parsePrivateuse(Landroid/icu/impl/locale/StringTokenIterator;Landroid/icu/impl/locale/ParseStatus;)Z
bool android::icu::impl::locale::LanguageTag::parsePrivateuse(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts)
{
	
	bool found;
	std::shared_ptr<java::lang::String> s;
	int start;
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	//    .param p1, "itr"    # Landroid/icu/impl/locale/StringTokenIterator;
	//    .param p2, "sts"    # Landroid/icu/impl/locale/ParseStatus;
	if ( itr->isDone() )     
		goto label_cond_c;
	if ( !(sts->isError()) )  
		goto label_cond_e;
label_cond_c:
	return 0x0;
	// 2352    .line 375
label_cond_e:
	found = 0x0;
	//    .local v0, "found":Z
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( !(android::icu::impl::locale::LanguageTag::isPrivateusePrefix(s)) )  
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
	if ( android::icu::impl::locale::LanguageTag::isPrivateuseSubtag(s) )     
		goto label_cond_41;
label_cond_35:
	if ( sts->_parseLength >  start )
		goto label_cond_55;
	sts->_errorIndex = start;
	sts->_errorMsg = std::make_shared<java::lang::String>(std::make_shared<char[]>("Incomplete privateuse"));
	//    .end local v2    # "sb":Ljava/lang/StringBuilder;
	//    .end local v3    # "start":I
label_cond_40:
label_goto_40:
	return found;
	// 2426    .line 388
	// 2427    .restart local v2    # "sb":Ljava/lang/StringBuilder;
	// 2428    .restart local v3    # "start":I
label_cond_41:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(s);
	sts->_parseLength = itr->currentEnd();
	itr->next();
	goto label_goto_25;
	// 2450    .line 399
label_cond_55:
	this->_privateuse = sb->toString();
	found = 0x1;
	goto label_goto_40;

}
// .method private parseRegion(Landroid/icu/impl/locale/StringTokenIterator;Landroid/icu/impl/locale/ParseStatus;)Z
bool android::icu::impl::locale::LanguageTag::parseRegion(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts)
{
	
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "itr"    # Landroid/icu/impl/locale/StringTokenIterator;
	//    .param p2, "sts"    # Landroid/icu/impl/locale/ParseStatus;
	if ( itr->isDone() )     
		goto label_cond_c;
	if ( !(sts->isError()) )  
		goto label_cond_e;
label_cond_c:
	return 0x0;
	// 2489    .line 289
label_cond_e:
	//    .local v0, "found":Z
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( !(android::icu::impl::locale::LanguageTag::isRegion(s)) )  
		goto label_cond_25;
	this->_region = s;
	sts->_parseLength = itr->currentEnd();
	itr->next();
label_cond_25:
	return 0x0;

}
// .method private parseScript(Landroid/icu/impl/locale/StringTokenIterator;Landroid/icu/impl/locale/ParseStatus;)Z
bool android::icu::impl::locale::LanguageTag::parseScript(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts)
{
	
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "itr"    # Landroid/icu/impl/locale/StringTokenIterator;
	//    .param p2, "sts"    # Landroid/icu/impl/locale/ParseStatus;
	if ( itr->isDone() )     
		goto label_cond_c;
	if ( !(sts->isError()) )  
		goto label_cond_e;
label_cond_c:
	return 0x0;
	// 2553    .line 271
label_cond_e:
	//    .local v0, "found":Z
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( !(android::icu::impl::locale::LanguageTag::isScript(s)) )  
		goto label_cond_25;
	this->_script = s;
	sts->_parseLength = itr->currentEnd();
	itr->next();
label_cond_25:
	return 0x0;

}
// .method private parseVariants(Landroid/icu/impl/locale/StringTokenIterator;Landroid/icu/impl/locale/ParseStatus;)Z
bool android::icu::impl::locale::LanguageTag::parseVariants(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts)
{
	
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .param p1, "itr"    # Landroid/icu/impl/locale/StringTokenIterator;
	//    .param p2, "sts"    # Landroid/icu/impl/locale/ParseStatus;
	if ( itr->isDone() )     
		goto label_cond_c;
	if ( !(sts->isError()) )  
		goto label_cond_e;
label_cond_c:
	return 0x0;
	// 2617    .line 307
label_cond_e:
	//    .local v0, "found":Z
label_goto_f:
	if ( itr->isDone() )     
		goto label_cond_1f;
	s = itr->current();
	//    .local v1, "s":Ljava/lang/String;
	if ( android::icu::impl::locale::LanguageTag::isVariant(s) )     
		goto label_cond_20;
	//    .end local v1    # "s":Ljava/lang/String;
label_cond_1f:
	return 0x0;
	// 2648    .line 314
	// 2649    .restart local v1    # "s":Ljava/lang/String;
label_cond_20:
	0x1;
	if ( !(this->_variants->isEmpty()) )  
		goto label_cond_31;
	cVar0 = std::make_shared<java::util::ArrayList>(0x3);
	this->_variants = cVar0;
label_cond_31:
	this->_variants->add(s);
	sts->_parseLength = itr->currentEnd();
	itr->next();
	goto label_goto_f;

}
// .method public getExtensions()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> android::icu::impl::locale::LanguageTag::getExtensions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2695        value = {
	// 2696            "()",
	// 2697            "Ljava/util/List",
	// 2698            "<",
	// 2699            "Ljava/lang/String;",
	// 2700            ">;"
	// 2701        }
	// 2702    .end annotation
	return java::util::Collections::unmodifiableList(this->_extensions);

}
// .method public getExtlangs()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> android::icu::impl::locale::LanguageTag::getExtlangs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2718        value = {
	// 2719            "()",
	// 2720            "Ljava/util/List",
	// 2721            "<",
	// 2722            "Ljava/lang/String;",
	// 2723            ">;"
	// 2724        }
	// 2725    .end annotation
	return java::util::Collections::unmodifiableList(this->_extlangs);

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::getLanguage()
{
	
	return this->_language;

}
// .method public getPrivateuse()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::getPrivateuse()
{
	
	return this->_privateuse;

}
// .method public getRegion()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::getRegion()
{
	
	return this->_region;

}
// .method public getScript()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::getScript()
{
	
	return this->_script;

}
// .method public getVariants()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> android::icu::impl::locale::LanguageTag::getVariants()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2781        value = {
	// 2782            "()",
	// 2783            "Ljava/util/List",
	// 2784            "<",
	// 2785            "Ljava/lang/String;",
	// 2786            ">;"
	// 2787        }
	// 2788    .end annotation
	return java::util::Collections::unmodifiableList(this->_variants);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LanguageTag::toString()
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
	if ( this->_language->length() <= 0 )
		goto label_cond_91;
	sb->append(this->_language);
	extlang_S_iterator = this->_extlangs->iterator();
	//    .local v3, "extlang$iterator":Ljava/util/Iterator;
label_goto_18:
	if ( !(extlang_S_iterator->hasNext()) )  
		goto label_cond_2f;
	extlang = extlang_S_iterator->next();
	extlang->checkCast("java::lang::String");
	//    .local v2, "extlang":Ljava/lang/String;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(extlang);
	goto label_goto_18;
	// 2858    .line 710
	// 2859    .end local v2    # "extlang":Ljava/lang/String;
label_cond_2f:
	if ( this->_script->length() <= 0 )
		goto label_cond_43;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(this->_script);
label_cond_43:
	if ( this->_region->length() <= 0 )
		goto label_cond_57;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(this->_region);
label_cond_57:
	variant_S_iterator = this->_variants->iterator();
	//    .local v6, "variant$iterator":Ljava/util/Iterator;
label_goto_5d:
	if ( !(variant_S_iterator->hasNext()) )  
		goto label_cond_74;
	variant = variant_S_iterator->next();
	variant->checkCast("java::lang::String");
	//    .local v5, "variant":Ljava/lang/String;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(variant);
	goto label_goto_5d;
	// 2935    .line 722
	// 2936    .end local v5    # "variant":Ljava/lang/String;
label_cond_74:
	extension_S_iterator = this->_extensions->iterator();
	//    .local v1, "extension$iterator":Ljava/util/Iterator;
label_goto_7a:
	if ( !(extension_S_iterator->hasNext()) )  
		goto label_cond_91;
	extension = extension_S_iterator->next();
	extension->checkCast("java::lang::String");
	//    .local v0, "extension":Ljava/lang/String;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(extension);
	goto label_goto_7a;
	// 2970    .line 726
	// 2971    .end local v0    # "extension":Ljava/lang/String;
	// 2972    .end local v1    # "extension$iterator":Ljava/util/Iterator;
	// 2973    .end local v3    # "extlang$iterator":Ljava/util/Iterator;
	// 2974    .end local v6    # "variant$iterator":Ljava/util/Iterator;
label_cond_91:
	if ( this->_privateuse->length() <= 0 )
		goto label_cond_aa;
	if ( sb->length() <= 0 )
		goto label_cond_a5;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
label_cond_a5:
	sb->append(this->_privateuse);
label_cond_aa:
	return sb->toString();

}


