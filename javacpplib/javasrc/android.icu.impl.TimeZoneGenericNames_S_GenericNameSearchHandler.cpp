// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$GenericNameSearchHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericMatchInfo.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericNameSearchHandler.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericNameType.h"
#include "android.icu.impl.TimeZoneGenericNames_S_NameInfo.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedList.h"

// .method constructor <init>(Ljava/util/EnumSet;)V
android::icu::impl::TimeZoneGenericNames_S_GenericNameSearchHandler::TimeZoneGenericNames_S_GenericNameSearchHandler(std::shared_ptr<java::util::EnumSet<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>> types)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 060        value = {
	// 061            "(",
	// 062            "Ljava/util/EnumSet",
	// 063            "<",
	// 064            "Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;",
	// 065            ">;)V"
	// 066        }
	// 067    .end annotation
	//    .local p1, "types":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;>;"
	// 072    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_types = types;
	return;

}
// .method public getMatches()Ljava/util/Collection;
std::shared_ptr<java::util::Collection<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo>> android::icu::impl::TimeZoneGenericNames_S_GenericNameSearchHandler::getMatches()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 086        value = {
	// 087            "()",
	// 088            "Ljava/util/Collection",
	// 089            "<",
	// 090            "Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;",
	// 091            ">;"
	// 092        }
	// 093    .end annotation
	return this->_matches;

}
// .method public getMaxMatchLen()I
int android::icu::impl::TimeZoneGenericNames_S_GenericNameSearchHandler::getMaxMatchLen()
{
	
	return this->_maxMatchLen;

}
// .method public handlePrefixMatch(ILjava/util/Iterator;)Z
bool android::icu::impl::TimeZoneGenericNames_S_GenericNameSearchHandler::handlePrefixMatch(int matchLength,std::shared_ptr<java::util::Iterator<android::icu::impl::TimeZoneGenericNames_S_NameInfo>> values)
{
	
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_NameInfo> info;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> matchInfo;
	std::shared_ptr<java::util::LinkedList> cVar0;
	
	//    .param p1, "matchLength"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 116        value = {
	// 117            "(I",
	// 118            "Ljava/util/Iterator",
	// 119            "<",
	// 120            "Landroid/icu/impl/TimeZoneGenericNames$NameInfo;",
	// 121            ">;)Z"
	// 122        }
	// 123    .end annotation
	//    .local p2, "values":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/TimeZoneGenericNames$NameInfo;>;"
label_cond_1:
label_goto_1:
	if ( !(values->hasNext()) )  
		goto label_cond_3d;
	info = values->next();
	info->checkCast("android::icu::impl::TimeZoneGenericNames_S_NameInfo");
	//    .local v0, "info":Landroid/icu/impl/TimeZoneGenericNames$NameInfo;
	if ( !(this->_types) )  
		goto label_cond_1d;
	if ( ( this->_types->contains(info->type) ^ 0x1) )     
		goto label_cond_1;
label_cond_1d:
	matchInfo = std::make_shared<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo>(info->type, info->tzID, matchLength, 0x0);
	//    .local v1, "matchInfo":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	if ( this->_matches )     
		goto label_cond_31;
	cVar0 = std::make_shared<java::util::LinkedList>();
	this->_matches = cVar0;
label_cond_31:
	this->_matches->add(matchInfo);
	if ( matchLength <= this->_maxMatchLen )
		goto label_cond_1;
	this->_maxMatchLen = matchLength;
	goto label_goto_1;
	// 202    .line 668
	// 203    .end local v0    # "info":Landroid/icu/impl/TimeZoneGenericNames$NameInfo;
	// 204    .end local v1    # "matchInfo":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
label_cond_3d:
	return 0x1;

}
// .method public resetResults()V
void android::icu::impl::TimeZoneGenericNames_S_GenericNameSearchHandler::resetResults()
{
	
	this->_matches = 0x0;
	this->_maxMatchLen = 0x0;
	return;

}


