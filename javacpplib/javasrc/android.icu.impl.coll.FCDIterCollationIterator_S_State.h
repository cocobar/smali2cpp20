#ifndef __android_icu_impl_coll_FCDIterCollationIterator_S_State__
#define __android_icu_impl_coll_FCDIterCollationIterator_S_State__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\FCDIterCollationIterator$State.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl::coll{
class FCDIterCollationIterator_S_State : public java::lang::Enum<android::icu::impl::coll::FCDIterCollationIterator_S_State> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::coll::FCDIterCollationIterator_S_State>> _S_VALUES;
	FCDIterCollationIterator_S_State(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> IN_NORM_ITER_AT_LIMIT;
	static std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> IN_NORM_ITER_AT_START;
	static std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> ITER_CHECK_BWD;
	static std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> ITER_CHECK_FWD;
	static std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> ITER_IN_FCD_SEGMENT;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::FCDIterCollationIterator_S_State::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~FCDIterCollationIterator_S_State(){
	}

}; // class FCDIterCollationIterator_S_State
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_FCDIterCollationIterator_S_State__

