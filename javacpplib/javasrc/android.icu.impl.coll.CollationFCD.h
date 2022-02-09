#ifndef __android_icu_impl_coll_CollationFCD__
#define __android_icu_impl_coll_CollationFCD__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationFCD.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationFCD : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> lcccBits;
	static std::shared_ptr<unsigned char[]> lcccIndex;
	static std::shared_ptr<int[]> tcccBits;
	static std::shared_ptr<unsigned char[]> tcccIndex;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	CollationFCD();
	static bool hasLccc(int c);
	static bool hasTccc(int c);
	static bool isFCD16OfTibetanCompositeVowel(int fcd16);
	static bool mayHaveLccc(int cVar2);
	static bool maybeTibetanCompositeVowel(int c);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationFCD::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationFCD(){
	}

}; // class CollationFCD
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationFCD__

