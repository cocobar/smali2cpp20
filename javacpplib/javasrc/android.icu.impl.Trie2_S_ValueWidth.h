#ifndef __android_icu_impl_Trie2_S_ValueWidth__
#define __android_icu_impl_Trie2_S_ValueWidth__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2$ValueWidth.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class Trie2_S_ValueWidth : public java::lang::Enum<android::icu::impl::Trie2_S_ValueWidth> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::Trie2_S_ValueWidth>> _S_VALUES;
	Trie2_S_ValueWidth(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::Trie2_S_ValueWidth> BITS_16;
	static std::shared_ptr<android::icu::impl::Trie2_S_ValueWidth> BITS_32;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::Trie2_S_ValueWidth> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::Trie2_S_ValueWidth> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::Trie2_S_ValueWidth::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Trie2_S_ValueWidth(){
	}

}; // class Trie2_S_ValueWidth
}; // namespace android::icu::impl

#endif //__android_icu_impl_Trie2_S_ValueWidth__

