// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TZDBTimeZoneNames$TZDBNameSearchHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.TZDBTimeZoneNames_S_TZDBNameInfo.h"
#include "android.icu.impl.TZDBTimeZoneNames_S_TZDBNameSearchHandler.h"
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

static android::icu::impl::TZDBTimeZoneNames_S_TZDBNameSearchHandler::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::TZDBTimeZoneNames_S_TZDBNameSearchHandler::static_cinit()
{
	
	android::icu::impl::TZDBTimeZoneNames_S_TZDBNameSearchHandler::_assertionsDisabled = ( android::icu::impl::TZDBTimeZoneNames_S_TZDBNameSearchHandler()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>(Ljava/util/EnumSet;Ljava/lang/String;)V
android::icu::impl::TZDBTimeZoneNames_S_TZDBNameSearchHandler::TZDBTimeZoneNames_S_TZDBNameSearchHandler(std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> nameTypes,std::shared_ptr<java::lang::String> region)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p2, "region"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 083        value = {
	// 084            "(",
	// 085            "Ljava/util/EnumSet",
	// 086            "<",
	// 087            "Landroid/icu/text/TimeZoneNames$NameType;",
	// 088            ">;",
	// 089            "Ljava/lang/String;",
	// 090            ")V"
	// 091        }
	// 092    .end annotation
	//    .local p1, "nameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneNames$NameType;>;"
	// 097    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_nameTypes = nameTypes;
	if ( android::icu::impl::TZDBTimeZoneNames_S_TZDBNameSearchHandler::_assertionsDisabled )     
		goto label_cond_11;
	if ( region )     
		goto label_cond_11;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 115    .line 240
label_cond_11:
	this->_region = region;
	return;

}
// .method public getMatches()Ljava/util/Collection;
std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> android::icu::impl::TZDBTimeZoneNames_S_TZDBNameSearchHandler::getMatches()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 128        value = {
	// 129            "()",
	// 130            "Ljava/util/Collection",
	// 131            "<",
	// 132            "Landroid/icu/text/TimeZoneNames$MatchInfo;",
	// 133            ">;"
	// 134        }
	// 135    .end annotation
	if ( this->_matches )     
		goto label_cond_9;
	return java::util::Collections::emptyList({const[class].FS-Param});
	// 150    .line 333
label_cond_9:
	return this->_matches;

}
// .method public handlePrefixMatch(ILjava/util/Iterator;)Z
bool android::icu::impl::TZDBTimeZoneNames_S_TZDBNameSearchHandler::handlePrefixMatch(int matchLength,std::shared_ptr<java::util::Iterator<android::icu::impl::TZDBTimeZoneNames_S_TZDBNameInfo>> values)
{
	
	int match;
	int cVar0;
	std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNameInfo> ninfo;
	std::shared_ptr<std::vector<java::lang::String>> cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> match;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> ntype;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_MatchInfo> minfo;
	std::shared_ptr<java::util::LinkedList> cVar3;
	
	//    .param p1, "matchLength"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 161        value = {
	// 162            "(I",
	// 163            "Ljava/util/Iterator",
	// 164            "<",
	// 165            "Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;",
	// 166            ">;)Z"
	// 167        }
	// 168    .end annotation
	//    .local p2, "values":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;>;"
	match = 0x0;
	//    .local v1, "match":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
	cVar0 = 0x0;
	//    .end local v1    # "match":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
label_cond_3:
label_goto_3:
	if ( !(values->hasNext()) )  
		goto label_cond_3d;
	ninfo = values->next();
	ninfo->checkCast("android::icu::impl::TZDBTimeZoneNames_S_TZDBNameInfo");
	//    .local v4, "ninfo":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
	if ( !(this->_nameTypes) )  
		goto label_cond_1f;
	if ( ( this->_nameTypes->contains(ninfo->type) ^ 0x1) )     
		goto label_cond_3;
label_cond_1f:
	if ( ninfo->parseRegions )     
		goto label_cond_28;
	if ( cVar0 )     
		goto label_cond_3;
	cVar0 = ninfo;
	//    .local v0, "defaultRegionMatch":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
	ninfo;
	//    .local v1, "match":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
	goto label_goto_3;
	// 234    .line 273
	// 235    .end local v0    # "defaultRegionMatch":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
	// 236    .end local v1    # "match":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
label_cond_28:
	//    .local v2, "matchRegion":Z
	cVar1 = ninfo->parseRegions;
	cVar2 = 0x0;
label_goto_2d:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_3b;
	//    .local v6, "region":Ljava/lang/String;
	if ( !(this->_region->equals(cVar1[cVar2])) )  
		goto label_cond_7c;
	match = ninfo;
	//    .restart local v1    # "match":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
	//    .end local v1    # "match":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
	//    .end local v6    # "region":Ljava/lang/String;
label_cond_3b:
	if ( !(0x0) )  
		goto label_cond_7f;
	//    .end local v2    # "matchRegion":Z
	//    .end local v4    # "ninfo":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
label_cond_3d:
	if ( !(match) )  
		goto label_cond_7a;
	ntype = match->type;
	//    .local v5, "ntype":Landroid/icu/text/TimeZoneNames$NameType;
	if ( !(match->ambiguousType) )  
		goto label_cond_63;
	if ( ntype == android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD )
		goto label_cond_4d;
	if ( ntype != android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT )
		goto label_cond_63;
label_cond_4d:
	if ( !(this->_nameTypes->contains(android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD)) )  
		goto label_cond_63;
	if ( !(this->_nameTypes->contains(android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT)) )  
		goto label_cond_63;
label_cond_63:
	minfo = std::make_shared<android::icu::text::TimeZoneNames_S_MatchInfo>(ntype, 0x0, match->mzID, matchLength);
	//    .local v3, "minfo":Landroid/icu/text/TimeZoneNames$MatchInfo;
	if ( this->_matches )     
		goto label_cond_75;
	cVar3 = std::make_shared<java::util::LinkedList>();
	this->_matches = cVar3;
label_cond_75:
	this->_matches->add(minfo);
	//    .end local v3    # "minfo":Landroid/icu/text/TimeZoneNames$MatchInfo;
	//    .end local v5    # "ntype":Landroid/icu/text/TimeZoneNames$NameType;
label_cond_7a:
	return 0x1;
	// 363    .line 279
	// 364    .restart local v2    # "matchRegion":Z
	// 365    .restart local v4    # "ninfo":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
	// 366    .restart local v6    # "region":Ljava/lang/String;
label_cond_7c:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_2d;
	// 372    .line 289
	// 373    .end local v6    # "region":Ljava/lang/String;
label_cond_7f:
	if ( match )     
		goto label_cond_3;
	ninfo;
	//    .restart local v1    # "match":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
	goto label_goto_3;

}


