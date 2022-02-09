// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EDecimalHandling.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EFractionHandling.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EGender.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EHalfPlacement.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EHalfSupport.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EMilliSupport.h"
#include "android.icu.impl.duration.impl.DataRecord_S_ENumberSystem.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EPluralization.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EZeroHandling.h"
#include "android.icu.impl.duration.impl.DataRecord_S_ScopeData.h"
#include "android.icu.impl.duration.impl.DataRecord.h"
#include "android.icu.impl.duration.impl.RecordReader.h"
#include "android.icu.impl.duration.impl.RecordWriter.h"
#include "java.lang.InternalError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"

// .method public constructor <init>()V
android::icu::impl::duration::impl::DataRecord::DataRecord()
{
	
	// 108    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static read(Ljava/lang/String;Landroid/icu/impl/duration/impl/RecordReader;)Landroid/icu/impl/duration/impl/DataRecord;
std::shared_ptr<android::icu::impl::duration::impl::DataRecord> android::icu::impl::duration::impl::DataRecord::read(std::shared_ptr<java::lang::String> ln,std::shared_ptr<android::icu::impl::duration::impl::RecordReader> in)
{
	
	std::shared_ptr<android::icu::impl::duration::impl::DataRecord> record;
	std::shared_ptr<java::util::ArrayList> list;
	std::shared_ptr<java::lang::Object> data;
	std::shared_ptr<std::vector<android::icu::impl::duration::impl::DataRecord_S_ScopeData>> cVar0;
	std::shared_ptr<java::lang::InternalError> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::InternalError> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "ln"    # Ljava/lang/String;
	//    .param p1, "in"    # Landroid/icu/impl/duration/impl/RecordReader;
	if ( !(in->open(std::make_shared<java::lang::String>(std::make_shared<char[]>("DataRecord")))) )  
		goto label_cond_18e;
	record = std::make_shared<android::icu::impl::duration::impl::DataRecord>();
	//    .local v2, "record":Landroid/icu/impl/duration/impl/DataRecord;
	record->pl = in->namedIndex(std::make_shared<java::lang::String>(std::make_shared<char[]>("pl")), android::icu::impl::duration::impl::DataRecord_S_EPluralization::names);
	record->pluralNames = in->stringTable(std::make_shared<java::lang::String>(std::make_shared<char[]>("pluralName")));
	record->genders = in->namedIndexArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("gender")), android::icu::impl::duration::impl::DataRecord_S_EGender::names);
	record->singularNames = in->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("singularName")));
	record->halfNames = in->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("halfName")));
	record->numberNames = in->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("numberName")));
	record->mediumNames = in->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("mediumName")));
	record->shortNames = in->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("shortName")));
	record->measures = in->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("measure")));
	record->rqdSuffixes = in->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("rqdSuffix")));
	record->optSuffixes = in->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("optSuffix")));
	record->halves = in->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("halves")));
	record->halfPlacements = in->namedIndexArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("halfPlacement")), android::icu::impl::duration::impl::DataRecord_S_EHalfPlacement::names);
	record->halfSupport = in->namedIndexArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("halfSupport")), android::icu::impl::duration::impl::DataRecord_S_EHalfSupport::names);
	record->fifteenMinutes = in->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("fifteenMinutes")));
	record->fiveMinutes = in->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("fiveMinutes")));
	record->requiresDigitSeparator = in->bool(std::make_shared<java::lang::String>(std::make_shared<char[]>("requiresDigitSeparator")));
	record->digitPrefix = in->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("digitPrefix")));
	record->countSep = in->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("countSep")));
	record->shortUnitSep = in->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("shortUnitSep")));
	record->unitSep = in->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("unitSep")));
	record->unitSepRequiresDP = in->boolArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("unitSepRequiresDP")));
	record->requiresSkipMarker = in->boolArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("requiresSkipMarker")));
	record->numberSystem = in->namedIndex(std::make_shared<java::lang::String>(std::make_shared<char[]>("numberSystem")), android::icu::impl::duration::impl::DataRecord_S_ENumberSystem::names);
	record->zero = in->character(std::make_shared<java::lang::String>(std::make_shared<char[]>("zero")));
	record->decimalSep = in->character(std::make_shared<java::lang::String>(std::make_shared<char[]>("decimalSep")));
	record->omitSingularCount = in->bool(std::make_shared<java::lang::String>(std::make_shared<char[]>("omitSingularCount")));
	record->omitDualCount = in->bool(std::make_shared<java::lang::String>(std::make_shared<char[]>("omitDualCount")));
	record->zeroHandling = in->namedIndex(std::make_shared<java::lang::String>(std::make_shared<char[]>("zeroHandling")), android::icu::impl::duration::impl::DataRecord_S_EZeroHandling::names);
	record->decimalHandling = in->namedIndex(std::make_shared<java::lang::String>(std::make_shared<char[]>("decimalHandling")), android::icu::impl::duration::impl::DataRecord_S_EDecimalHandling::names);
	record->fractionHandling = in->namedIndex(std::make_shared<java::lang::String>(std::make_shared<char[]>("fractionHandling")), android::icu::impl::duration::impl::DataRecord_S_EFractionHandling::names);
	record->skippedUnitMarker = in->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("skippedUnitMarker")));
	record->allowZero = in->bool(std::make_shared<java::lang::String>(std::make_shared<char[]>("allowZero")));
	record->weeksAloneOnly = in->bool(std::make_shared<java::lang::String>(std::make_shared<char[]>("weeksAloneOnly")));
	record->useMilliseconds = in->namedIndex(std::make_shared<java::lang::String>(std::make_shared<char[]>("useMilliseconds")), android::icu::impl::duration::impl::DataRecord_S_EMilliSupport::names);
	if ( !(in->open(std::make_shared<java::lang::String>(std::make_shared<char[]>("ScopeDataList")))) )  
		goto label_cond_187;
	list = std::make_shared<java::util::ArrayList>();
	//    .local v1, "list":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/duration/impl/DataRecord$ScopeData;>;"
label_goto_169:
	data = android::icu::impl::duration::impl::DataRecord_S_ScopeData::read(in);
	//    .local v0, "data":Landroid/icu/impl/duration/impl/DataRecord$ScopeData;
	if ( !(data) )  
		goto label_cond_173;
	list->add(data);
	goto label_goto_169;
	// 510    .line 111
label_cond_173:
	if ( !(in->close()) )  
		goto label_cond_187;
	cVar0 = list->toArray(std::make_shared<std::vector<std::vector<android::icu::impl::duration::impl::DataRecord_S_ScopeData>>>(list->size()));
	cVar0->checkCast("std::vector<android::icu::impl::duration::impl::DataRecord_S_ScopeData>");
	record->scopeData = cVar0;
	//    .end local v0    # "data":Landroid/icu/impl/duration/impl/DataRecord$ScopeData;
	//    .end local v1    # "list":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/duration/impl/DataRecord$ScopeData;>;"
label_cond_187:
	if ( !(in->close()) )  
		goto label_cond_1a8;
	return record;
	// 546    .line 120
	// 547    .end local v2    # "record":Landroid/icu/impl/duration/impl/DataRecord;
label_cond_18e:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::InternalError>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("did not find DataRecord while reading ")))->append(ln)->toString());
	// throw
	throw cVar1;
	// 573    .line 123
	// 574    .restart local v2    # "record":Landroid/icu/impl/duration/impl/DataRecord;
label_cond_1a8:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::InternalError>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("null data read while reading ")))->append(ln)->toString());
	// throw
	throw cVar3;

}
// .method public write(Landroid/icu/impl/duration/impl/RecordWriter;)V
void android::icu::impl::duration::impl::DataRecord::write(std::shared_ptr<android::icu::impl::duration::impl::RecordWriter> out)
{
	
	int i;
	
	//    .param p1, "out"    # Landroid/icu/impl/duration/impl/RecordWriter;
	out->open(std::make_shared<java::lang::String>(std::make_shared<char[]>("DataRecord")));
	out->namedIndex(std::make_shared<java::lang::String>(std::make_shared<char[]>("pl")), android::icu::impl::duration::impl::DataRecord_S_EPluralization::names, this->pl);
	out->stringTable(std::make_shared<java::lang::String>(std::make_shared<char[]>("pluralName")), this->pluralNames);
	out->namedIndexArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("gender")), android::icu::impl::duration::impl::DataRecord_S_EGender::names, this->genders);
	out->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("singularName")), this->singularNames);
	out->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("halfName")), this->halfNames);
	out->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("numberName")), this->numberNames);
	out->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("mediumName")), this->mediumNames);
	out->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("shortName")), this->shortNames);
	out->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("measure")), this->measures);
	out->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("rqdSuffix")), this->rqdSuffixes);
	out->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("optSuffix")), this->optSuffixes);
	out->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("halves")), this->halves);
	out->namedIndexArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("halfPlacement")), android::icu::impl::duration::impl::DataRecord_S_EHalfPlacement::names, this->halfPlacements);
	out->namedIndexArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("halfSupport")), android::icu::impl::duration::impl::DataRecord_S_EHalfSupport::names, this->halfSupport);
	out->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("fifteenMinutes")), this->fifteenMinutes);
	out->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("fiveMinutes")), this->fiveMinutes);
	out->bool(std::make_shared<java::lang::String>(std::make_shared<char[]>("requiresDigitSeparator")), this->requiresDigitSeparator);
	out->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("digitPrefix")), this->digitPrefix);
	out->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("countSep")), this->countSep);
	out->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("shortUnitSep")), this->shortUnitSep);
	out->stringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("unitSep")), this->unitSep);
	out->boolArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("unitSepRequiresDP")), this->unitSepRequiresDP);
	out->boolArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("requiresSkipMarker")), this->requiresSkipMarker);
	out->namedIndex(std::make_shared<java::lang::String>(std::make_shared<char[]>("numberSystem")), android::icu::impl::duration::impl::DataRecord_S_ENumberSystem::names, this->numberSystem);
	out->character(std::make_shared<java::lang::String>(std::make_shared<char[]>("zero")), this->zero);
	out->character(std::make_shared<java::lang::String>(std::make_shared<char[]>("decimalSep")), this->decimalSep);
	out->bool(std::make_shared<java::lang::String>(std::make_shared<char[]>("omitSingularCount")), this->omitSingularCount);
	out->bool(std::make_shared<java::lang::String>(std::make_shared<char[]>("omitDualCount")), this->omitDualCount);
	out->namedIndex(std::make_shared<java::lang::String>(std::make_shared<char[]>("zeroHandling")), android::icu::impl::duration::impl::DataRecord_S_EZeroHandling::names, this->zeroHandling);
	out->namedIndex(std::make_shared<java::lang::String>(std::make_shared<char[]>("decimalHandling")), android::icu::impl::duration::impl::DataRecord_S_EDecimalHandling::names, this->decimalHandling);
	out->namedIndex(std::make_shared<java::lang::String>(std::make_shared<char[]>("fractionHandling")), android::icu::impl::duration::impl::DataRecord_S_EFractionHandling::names, this->fractionHandling);
	out->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("skippedUnitMarker")), this->skippedUnitMarker);
	out->bool(std::make_shared<java::lang::String>(std::make_shared<char[]>("allowZero")), this->allowZero);
	out->bool(std::make_shared<java::lang::String>(std::make_shared<char[]>("weeksAloneOnly")), this->weeksAloneOnly);
	out->namedIndex(std::make_shared<java::lang::String>(std::make_shared<char[]>("useMilliseconds")), android::icu::impl::duration::impl::DataRecord_S_EMilliSupport::names, this->useMilliseconds);
	if ( !(this->scopeData) )  
		goto label_cond_14d;
	out->open(std::make_shared<java::lang::String>(std::make_shared<char[]>("ScopeDataList")));
	i = 0x0;
	//    .local v0, "i":I
label_goto_13b:
	if ( i >= this->scopeData->size() )
		goto label_cond_14a;
	this->scopeData[i]->write(out);
	i = ( i + 0x1);
	goto label_goto_13b;
	// 915    .line 173
label_cond_14a:
	out->close();
	//    .end local v0    # "i":I
label_cond_14d:
	out->close();
	return;

}


