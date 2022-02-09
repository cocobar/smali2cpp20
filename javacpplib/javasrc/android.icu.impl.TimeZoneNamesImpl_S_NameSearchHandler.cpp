// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$NameSearchHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_NameInfo.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_NameSearchHandler.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.EnumSet.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedList.h"
#include "java.util.List.h"

static android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler::static_cinit()
{
	
	android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler::_assertionsDisabled = ( android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>(Ljava/util/EnumSet;)V
android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler::TimeZoneNamesImpl_S_NameSearchHandler(std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> nameTypes)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 082        value = {
	// 083            "(",
	// 084            "Ljava/util/EnumSet",
	// 085            "<",
	// 086            "Landroid/icu/text/TimeZoneNames$NameType;",
	// 087            ">;)V"
	// 088        }
	// 089    .end annotation
	//    .local p1, "nameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneNames$NameType;>;"
	// 094    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_nameTypes = nameTypes;
	return;

}
// .method public getMatches()Ljava/util/Collection;
std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler::getMatches()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 108        value = {
	// 109            "()",
	// 110            "Ljava/util/Collection",
	// 111            "<",
	// 112            "Landroid/icu/text/TimeZoneNames$MatchInfo;",
	// 113            ">;"
	// 114        }
	// 115    .end annotation
	if ( this->_matches )     
		goto label_cond_9;
	return java::util::Collections::emptyList({const[class].FS-Param});
	// 130    .line 566
label_cond_9:
	return this->_matches;

}
// .method public getMaxMatchLen()I
int android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler::getMaxMatchLen()
{
	
	return this->_maxMatchLen;

}
// .method public handlePrefixMatch(ILjava/util/Iterator;)Z
bool android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler::handlePrefixMatch(int matchLength,std::shared_ptr<java::util::Iterator<android::icu::impl::TimeZoneNamesImpl_S_NameInfo>> values)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_NameInfo> ninfo;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_MatchInfo> minfo;
	std::shared_ptr<java::util::LinkedList> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p1, "matchLength"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 151        value = {
	// 152            "(I",
	// 153            "Ljava/util/Iterator",
	// 154            "<",
	// 155            "Landroid/icu/impl/TimeZoneNamesImpl$NameInfo;",
	// 156            ">;)Z"
	// 157        }
	// 158    .end annotation
	//    .local p2, "values":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/TimeZoneNamesImpl$NameInfo;>;"
	cVar0 = 0x0;
label_cond_1:
label_goto_1:
	if ( !(values->hasNext()) )  
		goto label_cond_59;
	ninfo = values->next();
	ninfo->checkCast("android::icu::impl::TimeZoneNamesImpl_S_NameInfo");
	//    .local v1, "ninfo":Landroid/icu/impl/TimeZoneNamesImpl$NameInfo;
	if ( !(this->_nameTypes) )  
		goto label_cond_1d;
	if ( ( this->_nameTypes->contains(ninfo->type) ^ 0x1) )     
		goto label_cond_1;
label_cond_1d:
	if ( !(ninfo->tzID) )  
		goto label_cond_41;
	minfo = std::make_shared<android::icu::text::TimeZoneNames_S_MatchInfo>(ninfo->type, ninfo->tzID, cVar0, matchLength);
	//    .local v0, "minfo":Landroid/icu/text/TimeZoneNames$MatchInfo;
label_goto_2a:
	if ( this->_matches )     
		goto label_cond_35;
	cVar1 = std::make_shared<java::util::LinkedList>();
	this->_matches = cVar1;
label_cond_35:
	this->_matches->add(minfo);
	if ( matchLength <= this->_maxMatchLen )
		goto label_cond_1;
	this->_maxMatchLen = matchLength;
	goto label_goto_1;
	// 243    .line 544
	// 244    .end local v0    # "minfo":Landroid/icu/text/TimeZoneNames$MatchInfo;
label_cond_41:
	if ( android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler::_assertionsDisabled )     
		goto label_cond_4f;
	if ( ninfo->mzID )     
		goto label_cond_4f;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 260    .line 545
label_cond_4f:
	minfo = std::make_shared<android::icu::text::TimeZoneNames_S_MatchInfo>(ninfo->type, cVar0, ninfo->mzID, matchLength);
	//    .restart local v0    # "minfo":Landroid/icu/text/TimeZoneNames$MatchInfo;
	goto label_goto_2a;
	// 273    .line 555
	// 274    .end local v0    # "minfo":Landroid/icu/text/TimeZoneNames$MatchInfo;
	// 275    .end local v1    # "ninfo":Landroid/icu/impl/TimeZoneNamesImpl$NameInfo;
label_cond_59:
	return 0x1;

}
// .method public resetResults()V
void android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler::resetResults()
{
	
	this->_matches = 0x0;
	this->_maxMatchLen = 0x0;
	return;

}


