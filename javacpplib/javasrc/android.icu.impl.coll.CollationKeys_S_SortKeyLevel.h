#ifndef __android_icu_impl_coll_CollationKeys_S_SortKeyLevel__
#define __android_icu_impl_coll_CollationKeys_S_SortKeyLevel__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationKeys$SortKeyLevel.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationKeys_S_SortKeyByteSink.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationKeys_S_SortKeyLevel : public java::lang::Object {
protected:
private:
	static int INITIAL_CAPACITY;
	bool virtual ensureCapacity(int appendCapacity);
public:
	static bool _assertionsDisabled;
	std::shared_ptr<unsigned char[]> buffer;
	int len;
	static void static_cinit();
	CollationKeys_S_SortKeyLevel();
	void virtual appendByte(int b);
	void virtual appendReverseWeight16(int w);
	void virtual appendTo(std::shared_ptr<android::icu::impl::coll::CollationKeys_S_SortKeyByteSink> sink);
	void virtual appendWeight16(int w);
	void virtual appendWeight32(long long w);
	unsigned char virtual data();
	unsigned char virtual getAt(int index);
	bool virtual isEmpty();
	int virtual length();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationKeys_S_SortKeyLevel::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationKeys_S_SortKeyLevel(){
	}

}; // class CollationKeys_S_SortKeyLevel
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationKeys_S_SortKeyLevel__

