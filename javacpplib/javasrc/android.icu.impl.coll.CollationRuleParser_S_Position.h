#ifndef __android_icu_impl_coll_CollationRuleParser_S_Position__
#define __android_icu_impl_coll_CollationRuleParser_S_Position__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationRuleParser$Position.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl::coll{
class CollationRuleParser_S_Position : public java::lang::Enum<android::icu::impl::coll::CollationRuleParser_S_Position> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::coll::CollationRuleParser_S_Position>> _S_VALUES;
	CollationRuleParser_S_Position(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> FIRST_IMPLICIT;
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> FIRST_PRIMARY_IGNORABLE;
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> FIRST_REGULAR;
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> FIRST_SECONDARY_IGNORABLE;
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> FIRST_TERTIARY_IGNORABLE;
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> FIRST_TRAILING;
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> FIRST_VARIABLE;
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> LAST_IMPLICIT;
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> LAST_PRIMARY_IGNORABLE;
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> LAST_REGULAR;
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> LAST_SECONDARY_IGNORABLE;
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> LAST_TERTIARY_IGNORABLE;
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> LAST_TRAILING;
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> LAST_VARIABLE;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Position> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationRuleParser_S_Position::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationRuleParser_S_Position(){
	}

}; // class CollationRuleParser_S_Position
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationRuleParser_S_Position__

