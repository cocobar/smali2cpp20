#ifndef __android_icu_impl_coll_CollationRootElements__
#define __android_icu_impl_coll_CollationRootElements__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationRootElements.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationRootElements : public java::lang::Object {
protected:
private:
	std::shared_ptr<long long[]> elements;
	int virtual findP(long long p);
	long long virtual getFirstSecTerForPrimary(int index);
	static bool isEndOfPrimaryRange(long long q);
public:
	static bool _assertionsDisabled;
	static int IX_COMMON_SEC_AND_TER_CE;
	static int IX_COUNT;
	static int IX_FIRST_PRIMARY_INDEX;
	static int IX_FIRST_SECONDARY_INDEX;
	static int IX_FIRST_TERTIARY_INDEX;
	static int IX_SEC_TER_BOUNDARIES;
	static long long PRIMARY_SENTINEL;
	static int PRIMARY_STEP_MASK;
	static int SEC_TER_DELTA_FLAG;
	static void static_cinit();
	CollationRootElements(std::shared_ptr<long long[]> rootElements);
	int virtual findPrimary(long long p);
	long long virtual firstCEWithPrimaryAtLeast(long long cVar1);
	long long virtual getFirstPrimary();
	long long virtual getFirstPrimaryCE();
	long long virtual getFirstSecondaryCE();
	long long virtual getFirstTertiaryCE();
	int virtual getLastCommonSecondary();
	long long virtual getLastSecondaryCE();
	long long virtual getLastTertiaryCE();
	long long virtual getPrimaryAfter(long long p,int index,bool isCompressible);
	long long virtual getPrimaryBefore(long long p,bool isCompressible);
	int virtual getSecondaryAfter(int cVar1,int s);
	int virtual getSecondaryBefore(long long p,int s);
	int virtual getSecondaryBoundary();
	int virtual getTertiaryAfter(int cVar1,int s,int t);
	int virtual getTertiaryBefore(long long p,int s,int t);
	int virtual getTertiaryBoundary();
	long long virtual lastCEWithPrimaryBefore(long long p);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationRootElements::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationRootElements(){
	}

}; // class CollationRootElements
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationRootElements__

