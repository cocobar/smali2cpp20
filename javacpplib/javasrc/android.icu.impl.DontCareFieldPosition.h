#ifndef __android_icu_impl_DontCareFieldPosition__
#define __android_icu_impl_DontCareFieldPosition__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\DontCareFieldPosition.smali
#include "java2ctype.h"
#include "java.text.FieldPosition.h"

namespace android::icu::impl{
class DontCareFieldPosition : public java::text::FieldPosition {
protected:
private:
	DontCareFieldPosition();
public:
	static std::shared_ptr<android::icu::impl::DontCareFieldPosition> INSTANCE;
	static void static_cinit();
	void virtual setBeginIndex(int i);
	void virtual setEndIndex(int i);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::DontCareFieldPosition::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DontCareFieldPosition(){
	}

}; // class DontCareFieldPosition
}; // namespace android::icu::impl

#endif //__android_icu_impl_DontCareFieldPosition__

