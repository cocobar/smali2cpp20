// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\IDNA$Info.smali
#include "java2ctype.h"
#include "android.icu.text.IDNA_S_Error.h"
#include "android.icu.text.IDNA_S_Info.h"
#include "java.util.EnumSet.h"
#include "java.util.Set.h"

// .method static synthetic -get0(Landroid/icu/text/IDNA$Info;)Ljava/util/EnumSet;
std::shared_ptr<java::util::EnumSet> android::icu::text::IDNA_S_Info::_get0(std::shared_ptr<android::icu::text::IDNA_S_Info> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/IDNA$Info;
	return _this->errors;

}
// .method static synthetic -get1(Landroid/icu/text/IDNA$Info;)Z
bool android::icu::text::IDNA_S_Info::_get1(std::shared_ptr<android::icu::text::IDNA_S_Info> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/IDNA$Info;
	return _this->isBiDi;

}
// .method static synthetic -get2(Landroid/icu/text/IDNA$Info;)Z
bool android::icu::text::IDNA_S_Info::_get2(std::shared_ptr<android::icu::text::IDNA_S_Info> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/IDNA$Info;
	return _this->isOkBiDi;

}
// .method static synthetic -get3(Landroid/icu/text/IDNA$Info;)Ljava/util/EnumSet;
std::shared_ptr<java::util::EnumSet> android::icu::text::IDNA_S_Info::_get3(std::shared_ptr<android::icu::text::IDNA_S_Info> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/IDNA$Info;
	return _this->labelErrors;

}
// .method static synthetic -set0(Landroid/icu/text/IDNA$Info;Z)Z
bool android::icu::text::IDNA_S_Info::_set0(std::shared_ptr<android::icu::text::IDNA_S_Info> _this,bool _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/IDNA$Info;
	//    .param p1, "-value"    # Z
	_this->isBiDi = _value;
	return _value;

}
// .method static synthetic -set1(Landroid/icu/text/IDNA$Info;Z)Z
bool android::icu::text::IDNA_S_Info::_set1(std::shared_ptr<android::icu::text::IDNA_S_Info> _this,bool _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/IDNA$Info;
	//    .param p1, "-value"    # Z
	_this->isOkBiDi = _value;
	return _value;

}
// .method static synthetic -set2(Landroid/icu/text/IDNA$Info;Z)Z
bool android::icu::text::IDNA_S_Info::_set2(std::shared_ptr<android::icu::text::IDNA_S_Info> _this,bool _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/IDNA$Info;
	//    .param p1, "-value"    # Z
	_this->isTransDiff = _value;
	return _value;

}
// .method static synthetic -wrap0(Landroid/icu/text/IDNA$Info;)V
void android::icu::text::IDNA_S_Info::_wrap0(std::shared_ptr<android::icu::text::IDNA_S_Info> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/IDNA$Info;
	_this->reset();
	return;

}
// .method public constructor <init>()V
android::icu::text::IDNA_S_Info::IDNA_S_Info()
{
	
	bool cVar0;
	
	cVar0 = 0x0;
	// 138    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->errors = java::util::EnumSet::noneOf(android::icu::text::IDNA_S_Error());
	this->labelErrors = java::util::EnumSet::noneOf(android::icu::text::IDNA_S_Error());
	this->isTransDiff = cVar0;
	this->isBiDi = cVar0;
	this->isOkBiDi = 0x1;
	return;

}
// .method private reset()V
void android::icu::text::IDNA_S_Info::reset()
{
	
	bool cVar0;
	
	cVar0 = 0x0;
	this->errors->clear();
	this->labelErrors->clear();
	this->isTransDiff = cVar0;
	this->isBiDi = cVar0;
	this->isOkBiDi = 0x1;
	return;

}
// .method public getErrors()Ljava/util/Set;
std::shared_ptr<java::util::Set<android::icu::text::IDNA_S_Error>> android::icu::text::IDNA_S_Info::getErrors()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 209        value = {
	// 210            "()",
	// 211            "Ljava/util/Set",
	// 212            "<",
	// 213            "Landroid/icu/text/IDNA$Error;",
	// 214            ">;"
	// 215        }
	// 216    .end annotation
	return this->errors;

}
// .method public hasErrors()Z
bool android::icu::text::IDNA_S_Info::hasErrors()
{
	
	return ( this->errors->isEmpty() ^ 0x1);

}
// .method public isTransitionalDifferent()Z
bool android::icu::text::IDNA_S_Info::isTransitionalDifferent()
{
	
	return this->isTransDiff;

}


