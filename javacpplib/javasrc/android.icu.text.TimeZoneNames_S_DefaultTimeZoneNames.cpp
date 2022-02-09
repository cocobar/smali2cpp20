// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames$DefaultTimeZoneNames.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneNames_S_DefaultTimeZoneNames.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.EnumSet.h"
#include "java.util.List.h"
#include "java.util.Set.h"

static android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::INSTANCE;
static android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::serialVersionUID = -0xdd1567981cd7b0fL;
// .method static constructor <clinit>()V
void android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::static_cinit()
{
	
	std::shared_ptr<android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames>();
	android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::INSTANCE = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::TimeZoneNames_S_DefaultTimeZoneNames()
{
	
	// 050    invoke-direct {p0}, Landroid/icu/text/TimeZoneNames;-><init>()V
	return;

}
// .method public find(Ljava/lang/CharSequence;ILjava/util/EnumSet;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::find(std::shared_ptr<java::lang::CharSequence> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> nameTypes)
{
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 062        value = {
	// 063            "(",
	// 064            "Ljava/lang/CharSequence;",
	// 065            "I",
	// 066            "Ljava/util/EnumSet",
	// 067            "<",
	// 068            "Landroid/icu/text/TimeZoneNames$NameType;",
	// 069            ">;)",
	// 070            "Ljava/util/Collection",
	// 071            "<",
	// 072            "Landroid/icu/text/TimeZoneNames$MatchInfo;",
	// 073            ">;"
	// 074        }
	// 075    .end annotation
	//    .local p3, "nameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneNames$NameType;>;"
	return java::util::Collections::emptyList({const[class].FS-Param});

}
// .method public getAvailableMetaZoneIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::getAvailableMetaZoneIDs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 090        value = {
	// 091            "()",
	// 092            "Ljava/util/Set",
	// 093            "<",
	// 094            "Ljava/lang/String;",
	// 095            ">;"
	// 096        }
	// 097    .end annotation
	return java::util::Collections::emptySet({const[class].FS-Param});

}
// .method public getAvailableMetaZoneIDs(Ljava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::getAvailableMetaZoneIDs(std::shared_ptr<java::lang::String> tzID)
{
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 112        value = {
	// 113            "(",
	// 114            "Ljava/lang/String;",
	// 115            ")",
	// 116            "Ljava/util/Set",
	// 117            "<",
	// 118            "Ljava/lang/String;",
	// 119            ">;"
	// 120        }
	// 121    .end annotation
	return java::util::Collections::emptySet({const[class].FS-Param});

}
// .method public getMetaZoneDisplayName(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::getMetaZoneDisplayName(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type)
{
	
	//    .param p1, "mzID"    # Ljava/lang/String;
	//    .param p2, "type"    # Landroid/icu/text/TimeZoneNames$NameType;
	return 0x0;

}
// .method public getMetaZoneID(Ljava/lang/String;J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::getMetaZoneID(std::shared_ptr<java::lang::String> tzID,long long date)
{
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .param p2, "date"    # J
	return 0x0;

}
// .method public getReferenceZoneID(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::getReferenceZoneID(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<java::lang::String> region)
{
	
	//    .param p1, "mzID"    # Ljava/lang/String;
	//    .param p2, "region"    # Ljava/lang/String;
	return 0x0;

}
// .method public getTimeZoneDisplayName(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::getTimeZoneDisplayName(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type)
{
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .param p2, "type"    # Landroid/icu/text/TimeZoneNames$NameType;
	return 0x0;

}


