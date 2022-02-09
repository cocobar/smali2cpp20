// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$ConfusableDataUtils.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_ConfusableDataUtils.h"
#include "java.lang.AssertionError.h"

static android::icu::text::SpoofChecker_S_ConfusableDataUtils::_assertionsDisabled;
static android::icu::text::SpoofChecker_S_ConfusableDataUtils::FORMAT_VERSION = 0x2;
// .method static constructor <clinit>()V
void android::icu::text::SpoofChecker_S_ConfusableDataUtils::static_cinit()
{
	
	android::icu::text::SpoofChecker_S_ConfusableDataUtils::_assertionsDisabled = ( android::icu::text::SpoofChecker_S_ConfusableDataUtils()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method private constructor <init>()V
android::icu::text::SpoofChecker_S_ConfusableDataUtils::SpoofChecker_S_ConfusableDataUtils()
{
	
	// 047    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static final codePointAndLengthToKey(II)I
int android::icu::text::SpoofChecker_S_ConfusableDataUtils::codePointAndLengthToKey(int codePoint,int length)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	//    .param p0, "codePoint"    # I
	//    .param p1, "length"    # I
	if ( android::icu::text::SpoofChecker_S_ConfusableDataUtils::_assertionsDisabled )     
		goto label_cond_10;
	if ( (0xffffff &  codePoint) == codePoint )
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 075    .line 1667
label_cond_10:
	if ( android::icu::text::SpoofChecker_S_ConfusableDataUtils::_assertionsDisabled )     
		goto label_cond_1e;
	if ( length <= 0x100 )
		goto label_cond_1e;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 091    .line 1668
label_cond_1e:
	return (( ( length + -0x1) << 0x18) |  codePoint);

}
// .method public static final keyToCodePoint(I)I
int android::icu::text::SpoofChecker_S_ConfusableDataUtils::keyToCodePoint(int key)
{
	
	//    .param p0, "key"    # I
	return (0xffffff &  key);

}
// .method public static final keyToLength(I)I
int android::icu::text::SpoofChecker_S_ConfusableDataUtils::keyToLength(int key)
{
	
	//    .param p0, "key"    # I
	return ( _shri((-0x1000000 &  key),0x18) + 0x1);

}


