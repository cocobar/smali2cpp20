#ifndef __android_icu_impl_coll_CollationDataBuilder_S_DataBuilderCollationIterator__
#define __android_icu_impl_coll_CollationDataBuilder_S_DataBuilderCollationIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationDataBuilder$DataBuilderCollationIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationDataBuilder.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "java.lang.CharSequence.h"

namespace android::icu::impl::coll{
class CollationDataBuilder_S_DataBuilderCollationIterator : public android::icu::impl::coll::CollationIterator {
protected:
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> builder;
	std::shared_ptr<android::icu::impl::coll::CollationData> builderData;
	std::shared_ptr<int[]> jamoCE32s;
	int pos;
	std::shared_ptr<java::lang::CharSequence> s;
	void virtual backwardNumCodePoints(int num);
	void virtual forwardNumCodePoints(int num);
	int virtual getCE32FromBuilderData(int ce32);
	int virtual getDataCE32(int c);
private:
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	CollationDataBuilder_S_DataBuilderCollationIterator(std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> b,std::shared_ptr<android::icu::impl::coll::CollationData> newData);
	int virtual fetchCEs(std::shared_ptr<java::lang::CharSequence> str,int start,std::shared_ptr<long long[]> ces,int cesLength);
	int virtual getOffset();
	int virtual nextCodePoint();
	int virtual previousCodePoint();
	void virtual resetToOffset(int newOffset);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationDataBuilder_S_DataBuilderCollationIterator(){
	}

}; // class CollationDataBuilder_S_DataBuilderCollationIterator
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationDataBuilder_S_DataBuilderCollationIterator__

