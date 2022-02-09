#ifndef __android_icu_impl_coll_CollationSettings__
#define __android_icu_impl_coll_CollationSettings__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationSettings.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.SharedObject.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationSettings : public android::icu::impl::coll::SharedObject {
protected:
private:
	static std::shared_ptr<int[]> EMPTY_INT_ARRAY;
	long long virtual reorderEx(long long p);
	static bool reorderTableHasSplitBytes(std::shared_ptr<unsigned char[]> table);
	void virtual setReorderArrays(std::shared_ptr<int[]> cVar2,std::shared_ptr<int[]> ranges,int rangesStart,int rangesLength,std::shared_ptr<unsigned char[]> table);
	void virtual setReorderRanges(std::shared_ptr<int[]> ranges,int rangesStart,int rangesLength);
public:
	static bool _assertionsDisabled;
	static int ALTERNATE_MASK;
	static int BACKWARD_SECONDARY;
	static int CASE_FIRST;
	static int CASE_FIRST_AND_UPPER_MASK;
	static int CASE_LEVEL;
	static int CHECK_FCD;
	static int MAX_VARIABLE_MASK;
	static int MAX_VARIABLE_SHIFT;
	static int MAX_VAR_CURRENCY;
	static int MAX_VAR_PUNCT;
	static int MAX_VAR_SPACE;
	static int MAX_VAR_SYMBOL;
	static int NUMERIC;
	static int SHIFTED;
	static int STRENGTH_MASK;
	static int STRENGTH_SHIFT;
	static int UPPER_FIRST;
	int fastLatinOptions;
	std::shared_ptr<char[]> fastLatinPrimaries;
	long long minHighNoReorder;
	int options;
	std::shared_ptr<int[]> reorderCodes;
	std::shared_ptr<long long[]> reorderRanges;
	std::shared_ptr<unsigned char[]> reorderTable;
	long long variableTop;
	static void static_cinit();
	CollationSettings();
	static int getStrength(int options);
	static int getTertiaryMask(int options);
	static bool isTertiaryWithCaseBits(int options);
	static bool sortsTertiaryUpperCaseFirst(int options);
	void virtual aliasReordering(std::shared_ptr<android::icu::impl::coll::CollationData> data,std::shared_ptr<int[]> codesAndRanges,int codesLength,std::shared_ptr<unsigned char[]> table);
	std::shared_ptr<android::icu::impl::coll::CollationSettings> virtual clone();
	void virtual copyReorderingFrom(std::shared_ptr<android::icu::impl::coll::CollationSettings> other);
	bool virtual dontCheckFCD();
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	bool virtual getAlternateHandling();
	int virtual getCaseFirst();
	bool virtual getFlag(int bit);
	int virtual getMaxVariable();
	int virtual getStrength();
	bool virtual hasBackwardSecondary();
	bool virtual hasReordering();
	int virtual hashCode();
	bool virtual isNumeric();
	long long virtual reorder(long long p);
	void virtual resetReordering();
	void virtual setAlternateHandlingDefault(int defaultOptions);
	void virtual setAlternateHandlingShifted(bool value);
	void virtual setCaseFirst(int value);
	void virtual setCaseFirstDefault(int defaultOptions);
	void virtual setFlag(int bit,bool value);
	void virtual setFlagDefault(int bit,int defaultOptions);
	void virtual setMaxVariable(int value,int defaultOptions);
	void virtual setReordering(std::shared_ptr<android::icu::impl::coll::CollationData> data,std::shared_ptr<int[]> codes);
	void virtual setStrength(int value);
	void virtual setStrengthDefault(int defaultOptions);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationSettings::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationSettings(){
	}

}; // class CollationSettings
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationSettings__

