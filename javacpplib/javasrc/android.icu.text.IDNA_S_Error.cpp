// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\IDNA$Error.smali
#include "java2ctype.h"
#include "android.icu.text.IDNA_S_Error.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::IDNA_S_Error::_S_VALUES;
static android::icu::text::IDNA_S_Error::BIDI;
static android::icu::text::IDNA_S_Error::CONTEXTJ;
static android::icu::text::IDNA_S_Error::CONTEXTO_DIGITS;
static android::icu::text::IDNA_S_Error::CONTEXTO_PUNCTUATION;
static android::icu::text::IDNA_S_Error::DISALLOWED;
static android::icu::text::IDNA_S_Error::DOMAIN_NAME_TOO_LONG;
static android::icu::text::IDNA_S_Error::EMPTY_LABEL;
static android::icu::text::IDNA_S_Error::HYPHEN_3_4;
static android::icu::text::IDNA_S_Error::INVALID_ACE_LABEL;
static android::icu::text::IDNA_S_Error::LABEL_HAS_DOT;
static android::icu::text::IDNA_S_Error::LABEL_TOO_LONG;
static android::icu::text::IDNA_S_Error::LEADING_COMBINING_MARK;
static android::icu::text::IDNA_S_Error::LEADING_HYPHEN;
static android::icu::text::IDNA_S_Error::PUNYCODE;
static android::icu::text::IDNA_S_Error::TRAILING_HYPHEN;
// .method static constructor <clinit>()V
void android::icu::text::IDNA_S_Error::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar5;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar6;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar7;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar8;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar9;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar10;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar11;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar12;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar13;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar14;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar15;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar16;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar17;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar18;
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar19;
	std::shared<std::vector<std::vector<android::icu::text::IDNA_S_Error>>> cVar20;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("EMPTY_LABEL")), cVar4);
	android::icu::text::IDNA_S_Error::EMPTY_LABEL = cVar5;
	cVar6 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LABEL_TOO_LONG")), cVar3);
	android::icu::text::IDNA_S_Error::LABEL_TOO_LONG = cVar6;
	cVar7 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DOMAIN_NAME_TOO_LONG")), cVar2);
	android::icu::text::IDNA_S_Error::DOMAIN_NAME_TOO_LONG = cVar7;
	cVar8 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LEADING_HYPHEN")), cVar1);
	android::icu::text::IDNA_S_Error::LEADING_HYPHEN = cVar8;
	cVar9 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TRAILING_HYPHEN")), cVar0);
	android::icu::text::IDNA_S_Error::TRAILING_HYPHEN = cVar9;
	cVar10 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("HYPHEN_3_4")), 0x5);
	android::icu::text::IDNA_S_Error::HYPHEN_3_4 = cVar10;
	cVar11 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LEADING_COMBINING_MARK")), 0x6);
	android::icu::text::IDNA_S_Error::LEADING_COMBINING_MARK = cVar11;
	cVar12 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DISALLOWED")), 0x7);
	android::icu::text::IDNA_S_Error::DISALLOWED = cVar12;
	cVar13 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PUNYCODE")), 0x8);
	android::icu::text::IDNA_S_Error::PUNYCODE = cVar13;
	cVar14 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LABEL_HAS_DOT")), 0x9);
	android::icu::text::IDNA_S_Error::LABEL_HAS_DOT = cVar14;
	cVar15 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("INVALID_ACE_LABEL")), 0xa);
	android::icu::text::IDNA_S_Error::INVALID_ACE_LABEL = cVar15;
	cVar16 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BIDI")), 0xb);
	android::icu::text::IDNA_S_Error::BIDI = cVar16;
	cVar17 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CONTEXTJ")), 0xc);
	android::icu::text::IDNA_S_Error::CONTEXTJ = cVar17;
	cVar18 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CONTEXTO_PUNCTUATION")), 0xd);
	android::icu::text::IDNA_S_Error::CONTEXTO_PUNCTUATION = cVar18;
	cVar19 = std::make_shared<android::icu::text::IDNA_S_Error>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CONTEXTO_DIGITS")), 0xe);
	android::icu::text::IDNA_S_Error::CONTEXTO_DIGITS = cVar19;
	cVar20 = std::make_shared<std::vector<std::vector<android::icu::text::IDNA_S_Error>>>(0xf);
	cVar20[cVar4] = android::icu::text::IDNA_S_Error::EMPTY_LABEL;
	cVar20[cVar3] = android::icu::text::IDNA_S_Error::LABEL_TOO_LONG;
	cVar20[cVar2] = android::icu::text::IDNA_S_Error::DOMAIN_NAME_TOO_LONG;
	cVar20[cVar1] = android::icu::text::IDNA_S_Error::LEADING_HYPHEN;
	cVar20[cVar0] = android::icu::text::IDNA_S_Error::TRAILING_HYPHEN;
	cVar20[0x5] = android::icu::text::IDNA_S_Error::HYPHEN_3_4;
	cVar20[0x6] = android::icu::text::IDNA_S_Error::LEADING_COMBINING_MARK;
	cVar20[0x7] = android::icu::text::IDNA_S_Error::DISALLOWED;
	cVar20[0x8] = android::icu::text::IDNA_S_Error::PUNYCODE;
	cVar20[0x9] = android::icu::text::IDNA_S_Error::LABEL_HAS_DOT;
	cVar20[0xa] = android::icu::text::IDNA_S_Error::INVALID_ACE_LABEL;
	cVar20[0xb] = android::icu::text::IDNA_S_Error::BIDI;
	cVar20[0xc] = android::icu::text::IDNA_S_Error::CONTEXTJ;
	cVar20[0xd] = android::icu::text::IDNA_S_Error::CONTEXTO_PUNCTUATION;
	cVar20[0xe] = android::icu::text::IDNA_S_Error::CONTEXTO_DIGITS;
	android::icu::text::IDNA_S_Error::_S_VALUES = cVar20;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::IDNA_S_Error::IDNA_S_Error(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/IDNA$Error;
std::shared_ptr<android::icu::text::IDNA_S_Error> android::icu::text::IDNA_S_Error::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::IDNA_S_Error> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::IDNA_S_Error(), name);
	cVar0->checkCast("android::icu::text::IDNA_S_Error");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/IDNA$Error;
std::shared_ptr<android::icu::text::IDNA_S_Error> android::icu::text::IDNA_S_Error::values()
{
	
	return android::icu::text::IDNA_S_Error::_S_VALUES;

}


