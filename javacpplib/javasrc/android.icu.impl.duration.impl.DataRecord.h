#ifndef __android_icu_impl_duration_impl_DataRecord__
#define __android_icu_impl_duration_impl_DataRecord__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_ScopeData.h"
#include "android.icu.impl.duration.impl.RecordReader.h"
#include "android.icu.impl.duration.impl.RecordWriter.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration::impl{
class DataRecord : public java::lang::Object {
protected:
private:
public:
	bool allowZero;
	std::shared_ptr<java::lang::String> countSep;
	unsigned char decimalHandling;
	char decimalSep;
	std::shared_ptr<java::lang::String> digitPrefix;
	std::shared_ptr<java::lang::String> fifteenMinutes;
	std::shared_ptr<java::lang::String> fiveMinutes;
	unsigned char fractionHandling;
	std::shared_ptr<unsigned char[]> genders;
	std::shared_ptr<std::vector<java::lang::String>> halfNames;
	std::shared_ptr<unsigned char[]> halfPlacements;
	std::shared_ptr<unsigned char[]> halfSupport;
	std::shared_ptr<std::vector<java::lang::String>> halves;
	std::shared_ptr<std::vector<java::lang::String>> measures;
	std::shared_ptr<std::vector<java::lang::String>> mediumNames;
	std::shared_ptr<std::vector<java::lang::String>> numberNames;
	unsigned char numberSystem;
	bool omitDualCount;
	bool omitSingularCount;
	std::shared_ptr<std::vector<java::lang::String>> optSuffixes;
	unsigned char pl;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> pluralNames;
	bool requiresDigitSeparator;
	std::shared_ptr<bool[]> requiresSkipMarker;
	std::shared_ptr<std::vector<java::lang::String>> rqdSuffixes;
	std::shared_ptr<std::vector<android::icu::impl::duration::impl::DataRecord_S_ScopeData>> scopeData;
	std::shared_ptr<std::vector<java::lang::String>> shortNames;
	std::shared_ptr<java::lang::String> shortUnitSep;
	std::shared_ptr<std::vector<java::lang::String>> singularNames;
	std::shared_ptr<java::lang::String> skippedUnitMarker;
	std::shared_ptr<std::vector<java::lang::String>> unitSep;
	std::shared_ptr<bool[]> unitSepRequiresDP;
	unsigned char useMilliseconds;
	bool weeksAloneOnly;
	char zero;
	unsigned char zeroHandling;
	DataRecord();
	static std::shared_ptr<android::icu::impl::duration::impl::DataRecord> read(std::shared_ptr<java::lang::String> ln,std::shared_ptr<android::icu::impl::duration::impl::RecordReader> in);
	void virtual write(std::shared_ptr<android::icu::impl::duration::impl::RecordWriter> out);
public:
	virtual ~DataRecord(){
	}

}; // class DataRecord
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_DataRecord__

