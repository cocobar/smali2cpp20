#ifndef __android_icu_impl_coll_CollationFastLatin__
#define __android_icu_impl_coll_CollationFastLatin__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationFastLatin.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationFastLatin : public java::lang::Object {
protected:
private:
	CollationFastLatin();
	static int getCases(int variableTop,bool strengthIsPrimary,int cVar4);
	static int getPrimaries(int variableTop,int pair);
	static int getQuaternaries(int variableTop,int cVar2);
	static int getSecondaries(int variableTop,int cVar3);
	static int getSecondariesFromOneShortCE(int ce);
	static int getTertiaries(int variableTop,bool withCaseBits,int cVar6);
	static int lookup(std::shared_ptr<char[]> table,int c);
	static long long nextPair(std::shared_ptr<char[]> table,int c,int ce,std::shared_ptr<java::lang::CharSequence> s16,int sIndex);
public:
	static bool _assertionsDisabled;
	static int BAIL_OUT;
	static int BAIL_OUT_RESULT;
	static int CASE_AND_TERTIARY_MASK;
	static int CASE_MASK;
	static int COMMON_SEC;
	static int COMMON_SEC_PLUS_OFFSET;
	static int COMMON_TER;
	static int COMMON_TER_PLUS_OFFSET;
	static int CONTRACTION;
	static int CONTR_CHAR_MASK;
	static int CONTR_LENGTH_SHIFT;
	static int EOS;
	static int EXPANSION;
	static int INDEX_MASK;
	static int LATIN_LIMIT;
	static int LATIN_MAX;
	static int LATIN_MAX_UTF8_LEAD;
	static int LONG_INC;
	static int LONG_PRIMARY_MASK;
	static int LOWER_CASE;
	static int MAX_LONG;
	static int MAX_SEC_AFTER;
	static int MAX_SEC_BEFORE;
	static int MAX_SEC_HIGH;
	static int MAX_SHORT;
	static int MAX_TER_AFTER;
	static int MERGE_WEIGHT;
	static int MIN_LONG;
	static int MIN_SEC_AFTER;
	static int MIN_SEC_BEFORE;
	static int MIN_SEC_HIGH;
	static int MIN_SHORT;
	static int NUM_FAST_CHARS;
	static int PUNCT_LIMIT;
	static int PUNCT_START;
	static int SECONDARY_MASK;
	static int SEC_INC;
	static int SEC_OFFSET;
	static int SHORT_INC;
	static int SHORT_PRIMARY_MASK;
	static int TERTIARY_MASK;
	static int TER_OFFSET;
	static int TWO_CASES_MASK;
	static int TWO_COMMON_SEC_PLUS_OFFSET;
	static int TWO_COMMON_TER_PLUS_OFFSET;
	static int TWO_LONG_PRIMARIES_MASK;
	static int TWO_LOWER_CASES;
	static int TWO_SECONDARIES_MASK;
	static int TWO_SEC_OFFSETS;
	static int TWO_SHORT_PRIMARIES_MASK;
	static int TWO_TERTIARIES_MASK;
	static int TWO_TER_OFFSETS;
	static int VERSION;
	static void static_cinit();
	static int compareUTF16(std::shared_ptr<char[]> table,std::shared_ptr<char[]> primaries,int options,std::shared_ptr<java::lang::CharSequence> left,std::shared_ptr<java::lang::CharSequence> right,int startIndex);
	static int getCharIndex(char c);
	static int getOptions(std::shared_ptr<android::icu::impl::coll::CollationData> data,std::shared_ptr<android::icu::impl::coll::CollationSettings> settings,std::shared_ptr<char[]> primaries);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationFastLatin::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationFastLatin(){
	}

}; // class CollationFastLatin
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationFastLatin__

