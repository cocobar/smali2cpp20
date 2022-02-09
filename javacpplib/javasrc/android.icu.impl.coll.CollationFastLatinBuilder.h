#ifndef __android_icu_impl_coll_CollationFastLatinBuilder__
#define __android_icu_impl_coll_CollationFastLatinBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationFastLatinBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.UVector64.h"
#include "java.lang.Object.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::impl::coll{
class CollationFastLatinBuilder : public java::lang::Object {
protected:
private:
	static long long CONTRACTION_FLAG;
	static int NUM_SPECIAL_GROUPS;
	long long ce0;
	long long ce1;
	std::shared_ptr<long long[][]> charCEs;
	std::shared_ptr<android::icu::impl::coll::UVector64> contractionCEs;
	long long firstDigitPrimary;
	long long firstLatinPrimary;
	long long firstShortPrimary;
	int headerLength;
	long long lastLatinPrimary;
	std::shared_ptr<char[]> miniCEs;
	std::shared_ptr<java::lang::StringBuilder> result;
	bool shortPrimaryOverflow;
	std::shared_ptr<android::icu::impl::coll::UVector64> uniqueCEs;
	void virtual addContractionEntry(int x,long long cce0,long long cce1);
	void virtual addUniqueCE(long long ce);
	static int binarySearch(std::shared_ptr<long long[]> list,int limit,long long ce);
	static int compareInt64AsUnsigned(long long a,long long b);
	void virtual encodeCharCEs();
	void virtual encodeContractions();
	int virtual encodeTwoCEs(long long first,long long second);
	void virtual encodeUniqueCEs();
	void virtual getCEs(std::shared_ptr<android::icu::impl::coll::CollationData> data);
	bool virtual getCEsFromCE32(std::shared_ptr<android::icu::impl::coll::CollationData> data,int c,int ce32);
	bool virtual getCEsFromContractionCE32(std::shared_ptr<android::icu::impl::coll::CollationData> data,int ce32);
	int virtual getMiniCE(long long ce);
	bool virtual inSameGroup(long long p,long long q);
	static bool isContractionCharCE(long long ce);
	bool virtual loadGroups(std::shared_ptr<android::icu::impl::coll::CollationData> data);
	void virtual resetCEs();
public:
	static bool _assertionsDisabled;
	std::shared_ptr<long long[]> lastSpecialPrimaries;
	static void static_cinit();
	CollationFastLatinBuilder();
	bool virtual forData(std::shared_ptr<android::icu::impl::coll::CollationData> data);
	char virtual getHeader();
	char virtual getTable();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationFastLatinBuilder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationFastLatinBuilder(){
	}

}; // class CollationFastLatinBuilder
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationFastLatinBuilder__

