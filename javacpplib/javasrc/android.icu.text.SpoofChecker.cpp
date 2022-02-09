// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.lang.UScript.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.SpoofChecker_S_CheckResult.h"
#include "android.icu.text.SpoofChecker_S_RestrictionLevel.h"
#include "android.icu.text.SpoofChecker_S_ScriptSet.h"
#include "android.icu.text.SpoofChecker_S_SpoofData.h"
#include "android.icu.text.SpoofChecker.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collections.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

static android::icu::text::SpoofChecker::ALL_CHECKS = -0x1;
static android::icu::text::SpoofChecker::ANY_CASE = 0x8;
static android::icu::text::SpoofChecker::ASCII;
static android::icu::text::SpoofChecker::CHAR_LIMIT = 0x40;
static android::icu::text::SpoofChecker::CONFUSABLE = 0x7;
static android::icu::text::SpoofChecker::INCLUSION;
static android::icu::text::SpoofChecker::INVISIBLE = 0x20;
static android::icu::text::SpoofChecker::MIXED_NUMBERS = 0x80;
static android::icu::text::SpoofChecker::MIXED_SCRIPT_CONFUSABLE = 0x2;
static android::icu::text::SpoofChecker::RECOMMENDED;
static android::icu::text::SpoofChecker::RESTRICTION_LEVEL = 0x10;
static android::icu::text::SpoofChecker::SINGLE_SCRIPT = 0x10;
static android::icu::text::SpoofChecker::SINGLE_SCRIPT_CONFUSABLE = 0x1;
static android::icu::text::SpoofChecker::WHOLE_SCRIPT_CONFUSABLE = 0x4;
static android::icu::text::SpoofChecker::nfdNormalizer;
// .method static synthetic -get0(Landroid/icu/text/SpoofChecker;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::SpoofChecker::_get0(std::shared_ptr<android::icu::text::SpoofChecker> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/SpoofChecker;
	return _this->fAllowedCharsSet;

}
// .method static synthetic -get1(Landroid/icu/text/SpoofChecker;)Ljava/util/Set;
std::shared_ptr<java::util::Set> android::icu::text::SpoofChecker::_get1(std::shared_ptr<android::icu::text::SpoofChecker> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/SpoofChecker;
	return _this->fAllowedLocales;

}
// .method static synthetic -get2(Landroid/icu/text/SpoofChecker;)I
int android::icu::text::SpoofChecker::_get2(std::shared_ptr<android::icu::text::SpoofChecker> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/SpoofChecker;
	return _this->fChecks;

}
// .method static synthetic -get3(Landroid/icu/text/SpoofChecker;)Landroid/icu/text/SpoofChecker$RestrictionLevel;
std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> android::icu::text::SpoofChecker::_get3(std::shared_ptr<android::icu::text::SpoofChecker> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/SpoofChecker;
	return _this->fRestrictionLevel;

}
// .method static synthetic -get4(Landroid/icu/text/SpoofChecker;)Landroid/icu/text/SpoofChecker$SpoofData;
std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> android::icu::text::SpoofChecker::_get4(std::shared_ptr<android::icu::text::SpoofChecker> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/SpoofChecker;
	return _this->fSpoofData;

}
// .method static synthetic -set0(Landroid/icu/text/SpoofChecker;Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::SpoofChecker::_set0(std::shared_ptr<android::icu::text::SpoofChecker> _this,std::shared_ptr<android::icu::text::UnicodeSet> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/SpoofChecker;
	//    .param p1, "-value"    # Landroid/icu/text/UnicodeSet;
	_this->fAllowedCharsSet = _value;
	return _value;

}
// .method static synthetic -set1(Landroid/icu/text/SpoofChecker;Ljava/util/Set;)Ljava/util/Set;
std::shared_ptr<java::util::Set> android::icu::text::SpoofChecker::_set1(std::shared_ptr<android::icu::text::SpoofChecker> _this,std::shared_ptr<java::util::Set> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/SpoofChecker;
	//    .param p1, "-value"    # Ljava/util/Set;
	_this->fAllowedLocales = _value;
	return _value;

}
// .method static synthetic -set2(Landroid/icu/text/SpoofChecker;I)I
int android::icu::text::SpoofChecker::_set2(std::shared_ptr<android::icu::text::SpoofChecker> _this,int _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/SpoofChecker;
	//    .param p1, "-value"    # I
	_this->fChecks = _value;
	return _value;

}
// .method static synthetic -set3(Landroid/icu/text/SpoofChecker;Landroid/icu/text/SpoofChecker$RestrictionLevel;)Landroid/icu/text/SpoofChecker$RestrictionLevel;
std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> android::icu::text::SpoofChecker::_set3(std::shared_ptr<android::icu::text::SpoofChecker> _this,std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/SpoofChecker;
	//    .param p1, "-value"    # Landroid/icu/text/SpoofChecker$RestrictionLevel;
	_this->fRestrictionLevel = _value;
	return _value;

}
// .method static synthetic -set4(Landroid/icu/text/SpoofChecker;Landroid/icu/text/SpoofChecker$SpoofData;)Landroid/icu/text/SpoofChecker$SpoofData;
std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> android::icu::text::SpoofChecker::_set4(std::shared_ptr<android::icu::text::SpoofChecker> _this,std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/SpoofChecker;
	//    .param p1, "-value"    # Landroid/icu/text/SpoofChecker$SpoofData;
	_this->fSpoofData = _value;
	return _value;

}
// .method static constructor <clinit>()V
void android::icu::text::SpoofChecker::static_cinit()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[\'\\-.\\:\\u00B7\\u0375\\u058A\\u05F3\\u05F4\\u06FD\\u06FE\\u0F0B\\u200C\\u200D\\u2010\\u2019\\u2027\\u30A0\\u30FB]")));
	android::icu::text::SpoofChecker::INCLUSION = cVar0->freeze();
	cVar1 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[0-9A-Z_a-z\\u00C0-\\u00D6\\u00D8-\\u00F6\\u00F8-\\u0131\\u0134-\\u013E\\u0141-\\u0148\\u014A-\\u017E\\u018F\\u01A0\\u01A1\\u01AF\\u01B0\\u01CD-\\u01DC\\u01DE-\\u01E3\\u01E6-\\u01F0\\u01F4\\u01F5\\u01F8-\\u021B\\u021E\\u021F\\u0226-\\u0233\\u0259\\u02BB\\u02BC\\u02EC\\u0300-\\u0304\\u0306-\\u030C\\u030F-\\u0311\\u0313\\u0314\\u031B\\u0323-\\u0328\\u032D\\u032E\\u0330\\u0331\\u0335\\u0338\\u0339\\u0342\\u0345\\u037B-\\u037D\\u0386\\u0388-\\u038A\\u038C\\u038E-\\u03A1\\u03A3-\\u03CE\\u03FC-\\u045F\\u048A-\\u0529\\u052E\\u052F\\u0531-\\u0556\\u0559\\u0561-\\u0586\\u05B4\\u05D0-\\u05EA\\u05F0-\\u05F2\\u0620-\\u063F\\u0641-\\u0655\\u0660-\\u0669\\u0670-\\u0672\\u0674\\u0679-\\u068D\\u068F-\\u06D3\\u06D5\\u06E5\\u06E6\\u06EE-\\u06FC\\u06FF\\u0750-\\u07B1\\u08A0-\\u08AC\\u08B2\\u08B6-\\u08BD\\u0901-\\u094D\\u094F\\u0950\\u0956\\u0957\\u0960-\\u0963\\u0966-\\u096F\\u0971-\\u0977\\u0979-\\u097F\\u0981-\\u0983\\u0985-\\u098C\\u098F\\u0990\\u0993-\\u09A8\\u09AA-\\u09B0\\u09B2\\u09B6-\\u09B9\\u09BC-\\u09C4\\u09C7\\u09C8\\u09CB-\\u09CE\\u09D7\\u09E0-\\u09E3\\u09E6-\\u09F1\\u0A01-\\u0A03\\u0A05-\\u0A0A\\u0A0F\\u0A10\\u0A13-\\u0A28\\u0A2A-\\u0A30\\u0A32\\u0A35\\u0A38\\u0A39\\u0A3C\\u0A3E-\\u0A42\\u0A47\\u0A48\\u0A4B-\\u0A4D\\u0A5C\\u0A66-\\u0A74\\u0A81-\\u0A83\\u0A85-\\u0A8D\\u0A8F-\\u0A91\\u0A93-\\u0AA8\\u0AAA-\\u0AB0\\u0AB2\\u0AB3\\u0AB5-\\u0AB9\\u0ABC-\\u0AC5\\u0AC7-\\u0AC9\\u0ACB-\\u0ACD\\u0AD0\\u0AE0-\\u0AE3\\u0AE6-\\u0AEF\\u0B01-\\u0B03\\u0B05-\\u0B0C\\u0B0F\\u0B10\\u0B13-\\u0B28\\u0B2A-\\u0B30\\u0B32\\u0B33\\u0B35-\\u0B39\\u0B3C-\\u0B43\\u0B47\\u0B48\\u0B4B-\\u0B4D\\u0B56\\u0B57\\u0B5F-\\u0B61\\u0B66-\\u0B6F\\u0B71\\u0B82\\u0B83\\u0B85-\\u0B8A\\u0B8E-\\u0B90\\u0B92-\\u0B95\\u0B99\\u0B9A\\u0B9C\\u0B9E\\u0B9F\\u0BA3\\u0BA4\\u0BA8-\\u0BAA\\u0BAE-\\u0BB9\\u0BBE-\\u0BC2\\u0BC6-\\u0BC8\\u0BCA-\\u0BCD\\u0BD0\\u0BD7\\u0BE6-\\u0BEF\\u0C01-\\u0C03\\u0C05-\\u0C0C\\u0C0E-\\u0C10\\u0C12-\\u0C28\\u0C2A-\\u0C33\\u0C35-\\u0C39\\u0C3D-\\u0C44\\u0C46-\\u0C48\\u0C4A-\\u0C4D\\u0C55\\u0C56\\u0C60\\u0C61\\u0C66-\\u0C6F\\u0C80\\u0C82\\u0C83\\u0C85-\\u0C8C\\u0C8E-\\u0C90\\u0C92-\\u0CA8\\u0CAA-\\u0CB3\\u0CB5-\\u0CB9\\u0CBC-\\u0CC4\\u0CC6-\\u0CC8\\u0CCA-\\u0CCD\\u0CD5\\u0CD6\\u0CE0-\\u0CE3\\u0CE6-\\u0CEF\\u0CF1\\u0CF2\\u0D02\\u0D03\\u0D05-\\u0D0C\\u0D0E-\\u0D10\\u0D12-\\u0D3A\\u0D3D-\\u0D43\\u0D46-\\u0D48\\u0D4A-\\u0D4E\\u0D54-\\u0D57\\u0D60\\u0D61\\u0D66-\\u0D6F\\u0D7A-\\u0D7F\\u0D82\\u0D83\\u0D85-\\u0D8E\\u0D91-\\u0D96\\u0D9A-\\u0DA5\\u0DA7-\\u0DB1\\u0DB3-\\u0DBB\\u0DBD\\u0DC0-\\u0DC6\\u0DCA\\u0DCF-\\u0DD4\\u0DD6\\u0DD8-\\u0DDE\\u0DF2\\u0E01-\\u0E32\\u0E34-\\u0E3A\\u0E40-\\u0E4E\\u0E50-\\u0E59\\u0E81\\u0E82\\u0E84\\u0E87\\u0E88\\u0E8A\\u0E8D\\u0E94-\\u0E97\\u0E99-\\u0E9F\\u0EA1-\\u0EA3\\u0EA5\\u0EA7\\u0EAA\\u0EAB\\u0EAD-\\u0EB2\\u0EB4-\\u0EB9\\u0EBB-\\u0EBD\\u0EC0-\\u0EC4\\u0EC6\\u0EC8-\\u0ECD\\u0ED0-\\u0ED9\\u0EDE\\u0EDF\\u0F00\\u0F20-\\u0F29\\u0F35\\u0F37\\u0F3E-\\u0F42\\u0F44-\\u0F47\\u0F49-\\u0F4C\\u0F4E-\\u0F51\\u0F53-\\u0F56\\u0F58-\\u0F5B\\u0F5D-\\u0F68\\u0F6A-\\u0F6C\\u0F71\\u0F72\\u0F74\\u0F7A-\\u0F80\\u0F82-\\u0F84\\u0F86-\\u0F92\\u0F94-\\u0F97\\u0F99-\\u0F9C\\u0F9E-\\u0FA1\\u0FA3-\\u0FA6\\u0FA8-\\u0FAB\\u0FAD-\\u0FB8\\u0FBA-\\u0FBC\\u0FC6\\u1000-\\u1049\\u1050-\\u109D\\u10C7\\u10CD\\u10D0-\\u10F0\\u10F7-\\u10FA\\u10FD-\\u10FF\\u1200-\\u1248\\u124A-\\u124D\\u1250-\\u1256\\u1258\\u125A-\\u125D\\u1260-\\u1288\\u128A-\\u128D\\u1290-\\u12B0\\u12B2-\\u12B5\\u12B8-\\u12BE\\u12C0\\u12C2-\\u12C5\\u12C8-\\u12D6\\u12D8-\\u1310\\u1312-\\u1315\\u1318-\\u135A\\u135D-\\u135F\\u1380-\\u138F\\u1780-\\u17A2\\u17A5-\\u17A7\\u17A9-\\u17B3\\u17B6-\\u17CA\\u17D2\\u17D7\\u17DC\\u17E0-\\u17E9\\u1C80-\\u1C88\\u1E00-\\u1E99\\u1E9E\\u1EA0-\\u1EF9\\u1F00-\\u1F15\\u1F18-\\u1F1D\\u1F20-\\u1F45\\u1F48-\\u1F4D\\u1F50-\\u1F57\\u1F59\\u1F5B\\u1F5D\\u1F5F-\\u1F70\\u1F72\\u1F74\\u1F76\\u1F78\\u1F7A\\u1F7C\\u1F80-\\u1FB4\\u1FB6-\\u1FBA\\u1FBC\\u1FC2-\\u1FC4\\u1FC6-\\u1FC8\\u1FCA\\u1FCC\\u1FD0-\\u1FD2\\u1FD6-\\u1FDA\\u1FE0-\\u1FE2\\u1FE4-\\u1FEA\\u1FEC\\u1FF2-\\u1FF4\\u1FF6-\\u1FF8\\u1FFA\\u1FFC\\u2D27\\u2D2D\\u2D80-\\u2D96\\u2DA0-\\u2DA6\\u2DA8-\\u2DAE\\u2DB0-\\u2DB6\\u2DB8-\\u2DBE\\u2DC0-\\u2DC6\\u2DC8-\\u2DCE\\u2DD0-\\u2DD6\\u2DD8-\\u2DDE\\u3005-\\u3007\\u3041-\\u3096\\u3099\\u309A\\u309D\\u309E\\u30A1-\\u30FA\\u30FC-\\u30FE\\u3105-\\u312D\\u31A0-\\u31BA\\u3400-\\u4DB5\\u4E00-\\u9FD5\\uA660\\uA661\\uA674-\\uA67B\\uA67F\\uA69F\\uA717-\\uA71F\\uA788\\uA78D\\uA78E\\uA790-\\uA793\\uA7A0-\\uA7AA\\uA7AE\\uA7FA\\uA9E7-\\uA9FE\\uAA60-\\uAA76\\uAA7A-\\uAA7F\\uAB01-\\uAB06\\uAB09-\\uAB0E\\uAB11-\\uAB16\\uAB20-\\uAB26\\uAB28-\\uAB2E\\uAC00-\\uD7A3\\uFA0E\\uFA0F\\uFA11\\uFA13\\uFA14\\uFA1F\\uFA21\\uFA23\\uFA24\\uFA27-\\uFA29\\U00020000-\\U0002A6D6\\U0002A700-\\U0002B734\\U0002B740-\\U0002B81D\\U0002B820-\\U0002CEA1]")));
	android::icu::text::SpoofChecker::RECOMMENDED = cVar1->freeze();
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>(0x0, 0x7f);
	android::icu::text::SpoofChecker::ASCII = cVar2->freeze();
	android::icu::text::SpoofChecker::nfdNormalizer = android::icu::text::Normalizer2::getNFDInstance({const[class].FS-Param});
	return;

}
// .method private constructor <init>()V
android::icu::text::SpoofChecker::SpoofChecker()
{
	
	// 249    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/SpoofChecker;)V
android::icu::text::SpoofChecker::SpoofChecker(std::shared_ptr<android::icu::text::SpoofChecker> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/SpoofChecker;
	// 260    invoke-direct {p0}, Landroid/icu/text/SpoofChecker;-><init>()V
	return;

}
// .method private static getAugmentedScriptSet(ILandroid/icu/text/SpoofChecker$ScriptSet;)V
void android::icu::text::SpoofChecker::getAugmentedScriptSet(int codePoint,std::shared_ptr<android::icu::text::SpoofChecker_S_ScriptSet> result)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	
	//    .param p0, "codePoint"    # I
	//    .param p1, "result"    # Landroid/icu/text/SpoofChecker$ScriptSet;
	cVar0 = 0xac;
	cVar1 = 0x77;
	cVar2 = 0x69;
	result->clear();
	android::icu::lang::UScript::getScriptExtensions(codePoint, result);
	if ( !(result->get(0x11)) )  
		goto label_cond_1d;
	result->set(cVar0);
	result->set(cVar2);
	result->set(cVar1);
label_cond_1d:
	if ( !(result->get(0x14)) )  
		goto label_cond_28;
	result->set(cVar2);
label_cond_28:
	if ( !(result->get(0x16)) )  
		goto label_cond_33;
	result->set(cVar2);
label_cond_33:
	if ( !(result->get(0x12)) )  
		goto label_cond_3e;
	result->set(cVar1);
label_cond_3e:
	if ( !(result->get(0x5)) )  
		goto label_cond_48;
	result->set(cVar0);
label_cond_48:
	if ( result->get(0x0) )     
		goto label_cond_56;
	if ( !(result->get(0x1)) )  
		goto label_cond_59;
label_cond_56:
	result->setAll();
label_cond_59:
	return;

}
// .method private getNumerics(Ljava/lang/String;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::SpoofChecker::getNumerics(std::shared_ptr<java::lang::String> input,std::shared_ptr<android::icu::text::UnicodeSet> result)
{
	
	int utf16Offset;
	int codePoint;
	
	//    .param p1, "input"    # Ljava/lang/String;
	//    .param p2, "result"    # Landroid/icu/text/UnicodeSet;
	result->clear();
	utf16Offset = 0x0;
	//    .local v1, "utf16Offset":I
label_cond_4:
label_goto_4:
	if ( utf16Offset >= input->length() )
		goto label_cond_25;
	codePoint = java::lang::Character::codePointAt(input, utf16Offset);
	//    .local v0, "codePoint":I
	utf16Offset = (utf16Offset +  java::lang::Character::charCount(codePoint));
	if ( android::icu::lang::UCharacter::getType(codePoint) != 0x9 )
		goto label_cond_4;
	result->add((codePoint - android::icu::lang::UCharacter::getNumericValue(codePoint)));
	goto label_goto_4;
	// 434    .line 1563
	// 435    .end local v0    # "codePoint":I
label_cond_25:
	return;

}
// .method private getResolvedScriptSet(Ljava/lang/CharSequence;Landroid/icu/text/SpoofChecker$ScriptSet;)V
void android::icu::text::SpoofChecker::getResolvedScriptSet(std::shared_ptr<java::lang::CharSequence> input,std::shared_ptr<android::icu::text::SpoofChecker_S_ScriptSet> result)
{
	
	//    .param p1, "input"    # Ljava/lang/CharSequence;
	//    .param p2, "result"    # Landroid/icu/text/SpoofChecker$ScriptSet;
	this->getResolvedScriptSetWithout(input, 0xaf, result);
	return;

}
// .method private getResolvedScriptSetWithout(Ljava/lang/CharSequence;ILandroid/icu/text/SpoofChecker$ScriptSet;)V
void android::icu::text::SpoofChecker::getResolvedScriptSetWithout(std::shared_ptr<java::lang::CharSequence> input,int script,std::shared_ptr<android::icu::text::SpoofChecker_S_ScriptSet> result)
{
	
	std::shared_ptr<android::icu::text::SpoofChecker_S_ScriptSet> temp;
	int utf16Offset;
	int codePoint;
	
	//    .param p1, "input"    # Ljava/lang/CharSequence;
	//    .param p2, "script"    # I
	//    .param p3, "result"    # Landroid/icu/text/SpoofChecker$ScriptSet;
	result->setAll();
	temp = std::make_shared<android::icu::text::SpoofChecker_S_ScriptSet>();
	//    .local v1, "temp":Landroid/icu/text/SpoofChecker$ScriptSet;
	utf16Offset = 0x0;
	//    .local v2, "utf16Offset":I
label_cond_9:
label_goto_9:
	if ( utf16Offset >= input->length() )
		goto label_cond_2b;
	codePoint = java::lang::Character::codePointAt(input, utf16Offset);
	//    .local v0, "codePoint":I
	utf16Offset = (utf16Offset +  java::lang::Character::charCount(codePoint));
	android::icu::text::SpoofChecker::getAugmentedScriptSet(codePoint, temp);
	if ( script == 0xaf )
		goto label_cond_27;
	if ( !(( temp->get(script) ^ 0x1)) )  
		goto label_cond_9;
label_cond_27:
	result->and(temp);
	goto label_goto_9;
	// 518    .line 1544
	// 519    .end local v0    # "codePoint":I
label_cond_2b:
	return;

}
// .method private getRestrictionLevel(Ljava/lang/String;)Landroid/icu/text/SpoofChecker$RestrictionLevel;
std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> android::icu::text::SpoofChecker::getRestrictionLevel(std::shared_ptr<java::lang::String> input)
{
	
	std::shared_ptr<android::icu::text::SpoofChecker_S_ScriptSet> resolvedScriptSet;
	std::shared_ptr<android::icu::text::SpoofChecker_S_ScriptSet> resolvedNoLatn;
	
	//    .param p1, "input"    # Ljava/lang/String;
	if ( this->fAllowedCharsSet->containsAll(input) )     
		goto label_cond_b;
	return android::icu::text::SpoofChecker_S_RestrictionLevel::UNRESTRICTIVE;
	// 543    .line 1575
label_cond_b:
	if ( !(android::icu::text::SpoofChecker::ASCII->containsAll(input)) )  
		goto label_cond_16;
	return android::icu::text::SpoofChecker_S_RestrictionLevel::ASCII;
	// 558    .line 1580
label_cond_16:
	resolvedScriptSet = std::make_shared<android::icu::text::SpoofChecker_S_ScriptSet>();
	//    .local v1, "resolvedScriptSet":Landroid/icu/text/SpoofChecker$ScriptSet;
	this->getResolvedScriptSet(input, resolvedScriptSet);
	if ( resolvedScriptSet->isEmpty() )     
		goto label_cond_27;
	return android::icu::text::SpoofChecker_S_RestrictionLevel::SINGLE_SCRIPT_RESTRICTIVE;
	// 580    .line 1589
label_cond_27:
	resolvedNoLatn = std::make_shared<android::icu::text::SpoofChecker_S_ScriptSet>();
	//    .local v0, "resolvedNoLatn":Landroid/icu/text/SpoofChecker$ScriptSet;
	this->getResolvedScriptSetWithout(input, 0x19, resolvedNoLatn);
	if ( resolvedNoLatn->get(0xac) )     
		goto label_cond_49;
	if ( resolvedNoLatn->get(0x69) )     
		goto label_cond_49;
	if ( !(resolvedNoLatn->get(0x77)) )  
		goto label_cond_4c;
label_cond_49:
	return android::icu::text::SpoofChecker_S_RestrictionLevel::HIGHLY_RESTRICTIVE;
	// 625    .line 1599
label_cond_4c:
	if ( resolvedNoLatn->isEmpty() )     
		goto label_cond_72;
	if ( !(( resolvedNoLatn->get(0x8) ^ 0x1)) )  
		goto label_cond_72;
	if ( !(( resolvedNoLatn->get(0xe) ^ 0x1)) )  
		goto label_cond_72;
	if ( !(( resolvedNoLatn->get(0x6) ^ 0x1)) )  
		goto label_cond_72;
	return android::icu::text::SpoofChecker_S_RestrictionLevel::MODERATELY_RESTRICTIVE;
	// 670    .line 1605
label_cond_72:
	return android::icu::text::SpoofChecker_S_RestrictionLevel::MINIMALLY_RESTRICTIVE;

}
// .method public areConfusable(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::text::SpoofChecker::areConfusable(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::text::SpoofChecker_S_ScriptSet> s1RSS;
	std::shared_ptr<android::icu::text::SpoofChecker_S_ScriptSet> s2RSS;
	int result;
	
	//    .param p1, "s1"    # Ljava/lang/String;
	//    .param p2, "s2"    # Ljava/lang/String;
	if ( ( this->fChecks & 0x7) )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No confusable checks are enabled.")));
	// throw
	throw cVar0;
	// 703    .line 1358
label_cond_10:
	//    .local v2, "s1Skeleton":Ljava/lang/String;
	//    .local v4, "s2Skeleton":Ljava/lang/String;
	if ( this->getSkeleton(s1)->equals(this->getSkeleton(s2)) )     
		goto label_cond_1f;
	return 0x0;
	// 726    .line 1367
label_cond_1f:
	s1RSS = std::make_shared<android::icu::text::SpoofChecker_S_ScriptSet>();
	//    .local v1, "s1RSS":Landroid/icu/text/SpoofChecker$ScriptSet;
	this->getResolvedScriptSet(s1, s1RSS);
	s2RSS = std::make_shared<android::icu::text::SpoofChecker_S_ScriptSet>();
	//    .local v3, "s2RSS":Landroid/icu/text/SpoofChecker$ScriptSet;
	this->getResolvedScriptSet(s2, s2RSS);
	result = 0x0;
	//    .local v0, "result":I
	if ( !(s1RSS->intersects(s2RSS)) )  
		goto label_cond_3b;
	result = 0x1;
label_cond_37:
label_goto_37:
	result = (result &  this->fChecks);
	return result;
	// 769    .line 1377
label_cond_3b:
	result = 0x2;
	if ( s1RSS->isEmpty() )     
		goto label_cond_37;
	if ( !(( s2RSS->isEmpty() ^ 0x1)) )  
		goto label_cond_37;
	result = ( result | 0x4);
	goto label_goto_37;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::SpoofChecker::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::SpoofChecker> otherSC;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( other->instanceOf("android::icu::text::SpoofChecker") )     
		goto label_cond_6;
	return cVar0;
label_cond_6:
	otherSC = other;
	otherSC->checkCast("android::icu::text::SpoofChecker");
	//    .local v0, "otherSC":Landroid/icu/text/SpoofChecker;
	if ( this->fSpoofData == otherSC->fSpoofData )
		goto label_cond_20;
	if ( !(this->fSpoofData) )  
		goto label_cond_20;
	if ( !(( this->fSpoofData->equals(otherSC->fSpoofData) ^ 0x1)) )  
		goto label_cond_20;
	return cVar0;
	// 842    .line 1455
label_cond_20:
	if ( this->fChecks == otherSC->fChecks )
		goto label_cond_27;
	return cVar0;
	// 853    .line 1458
label_cond_27:
	if ( this->fAllowedLocales == otherSC->fAllowedLocales )
		goto label_cond_3e;
	if ( !(this->fAllowedLocales) )  
		goto label_cond_3e;
	if ( !(( this->fAllowedLocales->equals(otherSC->fAllowedLocales) ^ 0x1)) )  
		goto label_cond_3e;
	return cVar0;
	// 882    .line 1462
label_cond_3e:
	if ( this->fAllowedCharsSet == otherSC->fAllowedCharsSet )
		goto label_cond_55;
	if ( !(this->fAllowedCharsSet) )  
		goto label_cond_55;
	if ( !(( this->fAllowedCharsSet->equals(otherSC->fAllowedCharsSet) ^ 0x1)) )  
		goto label_cond_55;
	return cVar0;
	// 911    .line 1466
label_cond_55:
	if ( this->fRestrictionLevel == otherSC->fRestrictionLevel )
		goto label_cond_5c;
	return cVar0;
	// 922    .line 1469
label_cond_5c:
	return 0x1;

}
// .method public failsChecks(Ljava/lang/String;)Z
bool android::icu::text::SpoofChecker::failsChecks(std::shared_ptr<java::lang::String> text)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	return this->failsChecks(text, 0x0);

}
// .method public failsChecks(Ljava/lang/String;Landroid/icu/text/SpoofChecker$CheckResult;)Z
bool android::icu::text::SpoofChecker::failsChecks(std::shared_ptr<java::lang::String> text,std::shared_ptr<android::icu::text::SpoofChecker_S_CheckResult> checkResult)
{
	
	int length;
	std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> textRestrictionLevel;
	int result;
	std::shared_ptr<android::icu::text::UnicodeSet> numerics;
	int i;
	std::shared_ptr<java::lang::CharSequence> nfdText;
	int firstNonspacingMark;
	int haveMultipleMarks;
	std::shared_ptr<android::icu::text::UnicodeSet> marksSeenSoFar;
	int c;
	bool cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "checkResult"    # Landroid/icu/text/SpoofChecker$CheckResult;
	length = text->length();
	//    .local v4, "length":I
	//    .local v8, "result":I
	if ( !(checkResult) )  
		goto label_cond_10;
	checkResult->position = 0x0;
	checkResult->numerics = 0x0;
	checkResult->restrictionLevel = 0x0;
label_cond_10:
	if ( !(( this->fChecks & 0x10)) )  
		goto label_cond_28;
	textRestrictionLevel = this->getRestrictionLevel(text);
	//    .local v9, "textRestrictionLevel":Landroid/icu/text/SpoofChecker$RestrictionLevel;
	if ( textRestrictionLevel->compareTo(this->fRestrictionLevel) <= 0 )
		goto label_cond_24;
	result = 0x10;
label_cond_24:
	if ( !(checkResult) )  
		goto label_cond_28;
	checkResult->restrictionLevel = textRestrictionLevel;
	//    .end local v9    # "textRestrictionLevel":Landroid/icu/text/SpoofChecker$RestrictionLevel;
label_cond_28:
	if ( !(( this->fChecks & 0x80)) )  
		goto label_cond_43;
	numerics = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v7, "numerics":Landroid/icu/text/UnicodeSet;
	this->getNumerics(text, numerics);
	if ( numerics->size() <= 0x1 )
		goto label_cond_3f;
	result = ( result | 0x80);
label_cond_3f:
	if ( !(checkResult) )  
		goto label_cond_43;
	checkResult->numerics = numerics;
	//    .end local v7    # "numerics":Landroid/icu/text/UnicodeSet;
label_cond_43:
	if ( !(( this->fChecks & 0x40)) )  
		goto label_cond_5f;
	i = 0x0;
	//    .local v3, "i":I
label_cond_4a:
	if ( i >= length )
		goto label_cond_5f;
	//    .local v0, "c":I
	i = java::lang::Character::offsetByCodePoints(text, i, 0x1);
	if ( this->fAllowedCharsSet->contains(java::lang::Character::codePointAt(text, i)) )     
		goto label_cond_4a;
	result = ( result | 0x40);
	//    .end local v0    # "c":I
	//    .end local v3    # "i":I
label_cond_5f:
	if ( !(( this->fChecks & 0x20)) )  
		goto label_cond_9f;
	nfdText = android::icu::text::SpoofChecker::nfdNormalizer->normalize(text);
	//    .local v6, "nfdText":Ljava/lang/String;
	firstNonspacingMark = 0x0;
	//    .local v1, "firstNonspacingMark":I
	haveMultipleMarks = 0x0;
	//    .local v2, "haveMultipleMarks":Z
	marksSeenSoFar = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v5, "marksSeenSoFar":Landroid/icu/text/UnicodeSet;
	i = 0x0;
	//    .restart local v3    # "i":I
label_cond_73:
label_goto_73:
	if ( i >= length )
		goto label_cond_9f;
	c = java::lang::Character::codePointAt(nfdText, i);
	//    .restart local v0    # "c":I
	i = java::lang::Character::offsetByCodePoints(nfdText, i, 0x1);
	if ( java::lang::Character::getType(c) == 0x6 )
		goto label_cond_8d;
	0x0;
	if ( !(haveMultipleMarks) )  
		goto label_cond_73;
	marksSeenSoFar->clear();
	haveMultipleMarks = 0x0;
	goto label_goto_73;
	// 1165    .line 1291
label_cond_8d:
	if ( firstNonspacingMark )     
		goto label_cond_91;
	firstNonspacingMark = c;
	goto label_goto_73;
	// 1175    .line 1295
label_cond_91:
	if ( haveMultipleMarks )     
		goto label_cond_97;
	marksSeenSoFar->add(firstNonspacingMark);
	haveMultipleMarks = 0x1;
label_cond_97:
	if ( !(marksSeenSoFar->contains(c)) )  
		goto label_cond_a7;
	result = ( result | 0x20);
	//    .end local v0    # "c":I
	//    .end local v1    # "firstNonspacingMark":I
	//    .end local v2    # "haveMultipleMarks":Z
	//    .end local v3    # "i":I
	//    .end local v5    # "marksSeenSoFar":Landroid/icu/text/UnicodeSet;
	//    .end local v6    # "nfdText":Ljava/lang/String;
label_cond_9f:
	if ( !(checkResult) )  
		goto label_cond_a3;
	checkResult->checks = result;
label_cond_a3:
	if ( !(0x0) )  
		goto label_cond_ab;
	cVar0 = 0x1;
label_goto_a6:
	return cVar0;
	// 1218    .line 1305
	// 1219    .restart local v0    # "c":I
	// 1220    .restart local v1    # "firstNonspacingMark":I
	// 1221    .restart local v2    # "haveMultipleMarks":Z
	// 1222    .restart local v3    # "i":I
	// 1223    .restart local v5    # "marksSeenSoFar":Landroid/icu/text/UnicodeSet;
	// 1224    .restart local v6    # "nfdText":Ljava/lang/String;
label_cond_a7:
	marksSeenSoFar->add(c);
	goto label_goto_73;
	// 1230    .line 1311
	// 1231    .end local v0    # "c":I
	// 1232    .end local v1    # "firstNonspacingMark":I
	// 1233    .end local v2    # "haveMultipleMarks":Z
	// 1234    .end local v3    # "i":I
	// 1235    .end local v5    # "marksSeenSoFar":Landroid/icu/text/UnicodeSet;
	// 1236    .end local v6    # "nfdText":Ljava/lang/String;
label_cond_ab:
	cVar0 = 0x0;
	goto label_goto_a6;

}
// .method public getAllowedChars()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::SpoofChecker::getAllowedChars()
{
	
	return this->fAllowedCharsSet;

}
// .method public getAllowedJavaLocales()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::util::Locale>> android::icu::text::SpoofChecker::getAllowedJavaLocales()
{
	
	std::shared_ptr<java::util::HashSet> locales;
	std::shared_ptr<java::util::Iterator> uloc_S_iterator;
	std::shared_ptr<android::icu::util::ULocale> uloc;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1256        value = {
	// 1257            "()",
	// 1258            "Ljava/util/Set",
	// 1259            "<",
	// 1260            "Ljava/util/Locale;",
	// 1261            ">;"
	// 1262        }
	// 1263    .end annotation
	locales = std::make_shared<java::util::HashSet>(this->fAllowedLocales->size());
	//    .local v0, "locales":Ljava/util/HashSet;, "Ljava/util/HashSet<Ljava/util/Locale;>;"
	uloc_S_iterator = this->fAllowedLocales->iterator();
	//    .local v2, "uloc$iterator":Ljava/util/Iterator;
label_goto_11:
	if ( !(uloc_S_iterator->hasNext()) )  
		goto label_cond_25;
	uloc = uloc_S_iterator->next();
	uloc->checkCast("android::icu::util::ULocale");
	//    .local v1, "uloc":Landroid/icu/util/ULocale;
	locales->add(uloc->toLocale());
	goto label_goto_11;
	// 1309    .line 1110
	// 1310    .end local v1    # "uloc":Landroid/icu/util/ULocale;
label_cond_25:
	return locales;

}
// .method public getAllowedLocales()Ljava/util/Set;
std::shared_ptr<java::util::Set<android::icu::util::ULocale>> android::icu::text::SpoofChecker::getAllowedLocales()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1318        value = {
	// 1319            "()",
	// 1320            "Ljava/util/Set",
	// 1321            "<",
	// 1322            "Landroid/icu/util/ULocale;",
	// 1323            ">;"
	// 1324        }
	// 1325    .end annotation
	return java::util::Collections::unmodifiableSet(this->fAllowedLocales);

}
// .method public getChecks()I
int android::icu::text::SpoofChecker::getChecks()
{
	
	return this->fChecks;

}
// .method public getRestrictionLevel()Landroid/icu/text/SpoofChecker$RestrictionLevel;
std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> android::icu::text::SpoofChecker::getRestrictionLevel()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1351    .end annotation
	return this->fRestrictionLevel;

}
// .method public getSkeleton(ILjava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SpoofChecker::getSkeleton(int type,std::shared_ptr<java::lang::String> id)
{
	
	//    .param p1, "type"    # I
	//    .param p2, "id"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1365    .end annotation
	return this->getSkeleton(id);

}
// .method public getSkeleton(Ljava/lang/CharSequence;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SpoofChecker::getSkeleton(std::shared_ptr<java::lang::CharSequence> str)
{
	
	std::shared_ptr<java::lang::String> nfdId;
	std::shared_ptr<java::lang::StringBuilder> skelSB;
	int inputIndex;
	int c;
	
	//    .param p1, "str"    # Ljava/lang/CharSequence;
	nfdId = android::icu::text::SpoofChecker::nfdNormalizer->normalize(str);
	//    .local v2, "nfdId":Ljava/lang/String;
	//    .local v3, "normalizedLen":I
	skelSB = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "skelSB":Ljava/lang/StringBuilder;
	inputIndex = 0x0;
	//    .local v1, "inputIndex":I
label_goto_10:
	if ( inputIndex >= nfdId->length() )
		goto label_cond_21;
	c = java::lang::Character::codePointAt(nfdId, inputIndex);
	//    .local v0, "c":I
	inputIndex = (inputIndex +  java::lang::Character::charCount(c));
	this->fSpoofData->confusableLookup(c, skelSB);
	goto label_goto_10;
	// 1428    .line 1415
	// 1429    .end local v0    # "c":I
label_cond_21:
	//    .local v5, "skelStr":Ljava/lang/String;
	return android::icu::text::SpoofChecker::nfdNormalizer->normalize(skelSB->toString());

}
// .method public hashCode()I
int android::icu::text::SpoofChecker::hashCode()
{
	
	return ((((this->fChecks ^  this->fSpoofData->hashCode()) ^  this->fAllowedLocales->hashCode()) ^  this->fAllowedCharsSet->hashCode()) ^  this->fRestrictionLevel->ordinal());

}


