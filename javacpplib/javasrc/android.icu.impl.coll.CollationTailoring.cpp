// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationTailoring.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "android.icu.impl.coll.CollationTailoring.h"
#include "android.icu.impl.coll.SharedObject_S_Reference.h"
#include "android.icu.impl.coll.SharedObject.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.AssertionError.h"
#include "java.lang.String.h"

static android::icu::impl::coll::CollationTailoring::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationTailoring::static_cinit()
{
	
	android::icu::impl::coll::CollationTailoring::_assertionsDisabled = ( android::icu::impl::coll::CollationTailoring()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>(Landroid/icu/impl/coll/SharedObject$Reference;)V
android::icu::impl::coll::CollationTailoring::CollationTailoring(std::shared_ptr<android::icu::impl::coll::SharedObject_S_Reference<android::icu::impl::coll::CollationSettings>> baseSettings)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	std::shared_ptr<android::icu::impl::coll::SharedObject_S_Reference> cVar6;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar7;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 073        value = {
	// 074            "(",
	// 075            "Landroid/icu/impl/coll/SharedObject$Reference",
	// 076            "<",
	// 077            "Landroid/icu/impl/coll/CollationSettings;",
	// 078            ">;)V"
	// 079        }
	// 080    .end annotation
	//    .local p1, "baseSettings":Landroid/icu/impl/coll/SharedObject$Reference;, "Landroid/icu/impl/coll/SharedObject$Reference<Landroid/icu/impl/coll/CollationSettings;>;"
	// 087    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->actualLocale = android::icu::util::ULocale::ROOT;
	this->version = 0x0;
	if ( !(baseSettings) )  
		goto label_cond_54;
	if ( android::icu::impl::coll::CollationTailoring::_assertionsDisabled )     
		goto label_cond_21;
	cVar0 = baseSettings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !(cVar0->reorderCodes->size()) )  
		goto label_cond_21;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 123    .line 40
label_cond_21:
	if ( android::icu::impl::coll::CollationTailoring::_assertionsDisabled )     
		goto label_cond_35;
	cVar2 = baseSettings->readOnly();
	cVar2->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !(cVar2->reorderTable) )  
		goto label_cond_35;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 145    .line 41
label_cond_35:
	if ( android::icu::impl::coll::CollationTailoring::_assertionsDisabled )     
		goto label_cond_4d;
	cVar4 = baseSettings->readOnly();
	cVar4->checkCast("android::icu::impl::coll::CollationSettings");
	if ( !((cVar4->minHighNoReorder > 0x0)) )  
		goto label_cond_4d;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 171    .line 42
label_cond_4d:
	this->settings = baseSettings->clone();
label_goto_53:
	return;
	// 183    .line 44
label_cond_54:
	cVar7 = std::make_shared<android::icu::impl::coll::CollationSettings>();
	cVar6 = std::make_shared<android::icu::impl::coll::SharedObject_S_Reference>(cVar7);
	this->settings = cVar6;
	goto label_goto_53;

}
// .method static makeBaseVersion(Landroid/icu/util/VersionInfo;)Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::impl::coll::CollationTailoring::makeBaseVersion(std::shared_ptr<android::icu::util::VersionInfo> ucaVersion)
{
	
	//    .param p0, "ucaVersion"    # Landroid/icu/util/VersionInfo;
	return android::icu::util::VersionInfo::getInstance(android::icu::util::VersionInfo::UCOL_BUILDER_VERSION->getMajor(), (( ucaVersion->getMajor() << 0x3) +  ucaVersion->getMinor()), ( ucaVersion->getMilli() << 0x6), 0x0);

}
// .method ensureOwnedData()V
void android::icu::impl::coll::CollationTailoring::ensureOwnedData()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationData> cVar0;
	
	if ( this->ownedData )     
		goto label_cond_11;
	//    .local v0, "nfcImpl":Landroid/icu/impl/Normalizer2Impl;
	cVar0 = std::make_shared<android::icu::impl::coll::CollationData>(android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->impl);
	this->ownedData = cVar0;
	//    .end local v0    # "nfcImpl":Landroid/icu/impl/Normalizer2Impl;
label_cond_11:
	this->data = this->ownedData;
	return;

}
// .method public getRules()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::coll::CollationTailoring::getRules()
{
	
	if ( !(this->rules) )  
		goto label_cond_7;
	return this->rules;
	// 292    .line 70
label_cond_7:
	if ( !(this->rulesResource) )  
		goto label_cond_12;
	return this->rulesResource->getString();
	// 307    .line 73
label_cond_12:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));

}
// .method getUCAVersion()I
int android::icu::impl::coll::CollationTailoring::getUCAVersion()
{
	
	return (( _shri(this->version,0xc) & 0xff0) |  ( _shri(this->version,0xe) & 0x3));

}
// .method setRules(Ljava/lang/String;)V
void android::icu::impl::coll::CollationTailoring::setRules(std::shared_ptr<java::lang::String> r)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "r"    # Ljava/lang/String;
	if ( android::icu::impl::coll::CollationTailoring::_assertionsDisabled )     
		goto label_cond_12;
	if ( this->rules )     
		goto label_cond_c;
	if ( !(this->rulesResource) )  
		goto label_cond_12;
label_cond_c:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 361    .line 59
label_cond_12:
	this->rules = r;
	return;

}
// .method setRulesResource(Landroid/icu/util/UResourceBundle;)V
void android::icu::impl::coll::CollationTailoring::setRulesResource(std::shared_ptr<android::icu::util::UResourceBundle> res)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "res"    # Landroid/icu/util/UResourceBundle;
	if ( android::icu::impl::coll::CollationTailoring::_assertionsDisabled )     
		goto label_cond_12;
	if ( this->rules )     
		goto label_cond_c;
	if ( !(this->rulesResource) )  
		goto label_cond_12;
label_cond_c:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 394    .line 64
label_cond_12:
	this->rulesResource = res;
	return;

}
// .method setVersion(II)V
void android::icu::impl::coll::CollationTailoring::setVersion(int baseVersion,int rulesVersion)
{
	
	int r;
	int s;
	int q;
	
	//    .param p1, "baseVersion"    # I
	//    .param p2, "rulesVersion"    # I
	r = (_shri(rulesVersion,0x10) & 0xff00);
	//    .local v1, "r":I
	s = ( _shri(rulesVersion,0x10) & 0xff);
	//    .local v2, "s":I
	//    .local v3, "t":I
	q = ( rulesVersion & 0xff);
	//    .local v0, "q":I
	this->version = (((( android::icu::util::VersionInfo::UCOL_BUILDER_VERSION->getMajor() << 0x18) |  (0xffc000 &  baseVersion)) |  ( (_shri(r,0x6) +  r) & 0x3f00)) |  ( ((((( s << 0x3) +  _shri(s,0x5)) +  ( _shri(rulesVersion,0x8) & 0xff)) +  ( q << 0x4)) +  _shri(q,0x4)) & 0xff));
	return;

}


