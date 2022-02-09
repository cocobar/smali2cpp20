#ifndef __android_icu_impl_coll_Collation__
#define __android_icu_impl_coll_Collation__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\Collation.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class Collation : public java::lang::Object {
protected:
private:
public:
	static bool _assertionsDisabled;
	static int BEFORE_WEIGHT16;
	static int BUILDER_DATA_TAG;
	static int CASE_AND_QUATERNARY_MASK;
	static int CASE_AND_TERTIARY_MASK;
	static int CASE_LEVEL;
	static int CASE_LEVEL_FLAG;
	static int CASE_MASK;
	static int COMMON_BYTE;
	static int COMMON_SECONDARY_CE;
	static int COMMON_SEC_AND_TER_CE;
	static int COMMON_TERTIARY_CE;
	static int COMMON_WEIGHT16;
	static int CONTRACTION_TAG;
	static int CONTRACT_NEXT_CCC;
	static int CONTRACT_SINGLE_CP_NO_MATCH;
	static int CONTRACT_TRAILING_CCC;
	static int DIGIT_TAG;
	static int EQUAL;
	static int EXPANSION32_TAG;
	static int EXPANSION_TAG;
	static int FALLBACK_CE32;
	static int FALLBACK_TAG;
	static int FFFD_CE32;
	static long long FFFD_PRIMARY;
	static long long FIRST_TRAILING_PRIMARY;
	static long long FIRST_UNASSIGNED_PRIMARY;
	static int GREATER;
	static int HANGUL_NO_SPECIAL_JAMO;
	static int HANGUL_TAG;
	static int IDENTICAL_LEVEL;
	static int IDENTICAL_LEVEL_FLAG;
	static int IMPLICIT_TAG;
	static int LATIN_EXPANSION_TAG;
	static int LEAD_ALL_FALLBACK;
	static int LEAD_ALL_UNASSIGNED;
	static int LEAD_MIXED;
	static int LEAD_SURROGATE_TAG;
	static int LEAD_TYPE_MASK;
	static int LESS;
	static int LEVEL_SEPARATOR_BYTE;
	static int LONG_PRIMARY_CE32_LOW_BYTE;
	static int LONG_PRIMARY_TAG;
	static int LONG_SECONDARY_TAG;
	static int MAX_EXPANSION_LENGTH;
	static int MAX_INDEX;
	static long long MAX_PRIMARY;
	static int MAX_REGULAR_CE32;
	static int MERGE_SEPARATOR_BYTE;
	static int MERGE_SEPARATOR_CE32;
	static long long MERGE_SEPARATOR_PRIMARY;
	static long long NO_CE;
	static int NO_CE32;
	static long long NO_CE_PRIMARY;
	static int NO_CE_WEIGHT16;
	static int NO_LEVEL;
	static int NO_LEVEL_FLAG;
	static int OFFSET_TAG;
	static int ONLY_SEC_TER_MASK;
	static int ONLY_TERTIARY_MASK;
	static int PREFIX_TAG;
	static int PRIMARY_COMPRESSION_HIGH_BYTE;
	static int PRIMARY_COMPRESSION_LOW_BYTE;
	static int PRIMARY_LEVEL;
	static int PRIMARY_LEVEL_FLAG;
	static int QUATERNARY_LEVEL;
	static int QUATERNARY_LEVEL_FLAG;
	static int QUATERNARY_MASK;
	static int RESERVED_TAG_3;
	static int SECONDARY_AND_CASE_MASK;
	static int SECONDARY_LEVEL;
	static int SECONDARY_LEVEL_FLAG;
	static int SECONDARY_MASK;
	static int SENTINEL_CP;
	static int SPECIAL_CE32_LOW_BYTE;
	static int TERMINATOR_BYTE;
	static int TERTIARY_LEVEL;
	static int TERTIARY_LEVEL_FLAG;
	static int TRAIL_WEIGHT_BYTE;
	static int U0000_TAG;
	static int UNASSIGNED_CE32;
	static int UNASSIGNED_IMPLICIT_BYTE;
	static int ZERO_LEVEL;
	static int ZERO_LEVEL_FLAG;
	static void static_cinit();
	Collation();
	static bool ce32HasContext(int ce32);
	static long long ceFromCE32(int ce32);
	static long long ceFromLongPrimaryCE32(int ce32);
	static long long ceFromLongSecondaryCE32(int ce32);
	static long long ceFromSimpleCE32(int ce32);
	static long long decThreeBytePrimaryByOneStep(long long cVar3,bool isCompressible,int step);
	static long long decTwoBytePrimaryByOneStep(long long cVar2,bool isCompressible,int step);
	static char digitFromCE32(int ce32);
	static long long getThreeBytePrimaryForOffsetData(int c,long long dataCE);
	static bool hasCE32Tag(int ce32,int tag);
	static long long incThreeBytePrimaryByOffset(long long basePrimary,bool isCompressible,int offset);
	static long long incTwoBytePrimaryByOffset(long long basePrimary,bool isCompressible,int offset);
	static int indexFromCE32(int ce32);
	static bool isAssignedCE32(int ce32);
	static bool isContractionCE32(int ce32);
	static bool isLongPrimaryCE32(int ce32);
	static bool isPrefixCE32(int ce32);
	static bool isSelfContainedCE32(int ce32);
	static bool isSimpleOrLongCE32(int ce32);
	static bool isSpecialCE32(int ce32);
	static long long latinCE0FromCE32(int ce32);
	static long long latinCE1FromCE32(int ce32);
	static int lengthFromCE32(int ce32);
	static long long makeCE(long long p);
	static long long makeCE(long long p,int s,int t,int q);
	static int makeCE32FromTagAndIndex(int tag,int index);
	static int makeCE32FromTagIndexAndLength(int tag,int index,int length);
	static int makeLongPrimaryCE32(long long p);
	static int makeLongSecondaryCE32(int lower32);
	static long long primaryFromLongPrimaryCE32(int ce32);
	static int tagFromCE32(int ce32);
	static long long unassignedCEFromCodePoint(int c);
	static long long unassignedPrimaryFromCodePoint(int c);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::Collation::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Collation(){
	}

}; // class Collation
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_Collation__

