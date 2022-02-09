#ifndef __android_icu_impl_UnicodeSetStringSpan_S_OffsetList__
#define __android_icu_impl_UnicodeSetStringSpan_S_OffsetList__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UnicodeSetStringSpan$OffsetList.smali
#include "java2ctype.h"
#include "android.icu.util.OutputInt.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class UnicodeSetStringSpan_S_OffsetList : public java::lang::Object {
protected:
private:
	int length;
	std::shared_ptr<int[]> list;
	int start;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	UnicodeSetStringSpan_S_OffsetList();
	void virtual addOffset(int offset);
	void virtual addOffsetAndCount(int offset,int count);
	void virtual clear();
	bool virtual containsOffset(int offset);
	bool virtual hasCountAtOffset(int offset,int count);
	bool virtual isEmpty();
	int virtual popMinimum(std::shared_ptr<android::icu::util::OutputInt> outCount);
	void virtual setMaxLength(int maxLength);
	void virtual shift(int delta);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::UnicodeSetStringSpan_S_OffsetList::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UnicodeSetStringSpan_S_OffsetList(){
	}

}; // class UnicodeSetStringSpan_S_OffsetList
}; // namespace android::icu::impl

#endif //__android_icu_impl_UnicodeSetStringSpan_S_OffsetList__

