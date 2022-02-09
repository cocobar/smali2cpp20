#ifndef __android_icu_impl_UResource_S_Key__
#define __android_icu_impl_UResource_S_Key__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UResource$Key.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class UResource_S_Key : public java::lang::CharSequence, public java::lang::Cloneable, public java::lang::Comparable<android::icu::impl::UResource_S_Key> {
protected:
private:
	std::shared_ptr<unsigned char[]> bytes;
	int length;
	int offset;
	std::shared_ptr<java::lang::String> s;
	UResource_S_Key(std::shared_ptr<unsigned char[]> keyBytes,int keyOffset,int keyLength);
	std::shared_ptr<java::lang::String> virtual internalSubString(int start,int end);
	bool virtual regionMatches(int start,std::shared_ptr<java::lang::CharSequence> cs,int n);
	bool virtual regionMatches(std::shared_ptr<unsigned char[]> otherBytes,int otherOffset,int n);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	UResource_S_Key();
	UResource_S_Key(std::shared_ptr<java::lang::String> s);
	char virtual charAt(int i);
	std::shared_ptr<android::icu::impl::UResource_S_Key> virtual clone();
	int virtual compareTo(std::shared_ptr<android::icu::impl::UResource_S_Key> other);
	int virtual compareTo(std::shared_ptr<java::lang::CharSequence> cs);
	bool virtual contentEquals(std::shared_ptr<java::lang::CharSequence> cs);
	bool virtual endsWith(std::shared_ptr<java::lang::CharSequence> cs);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual hashCode();
	int virtual length();
	bool virtual regionMatches(int start,std::shared_ptr<java::lang::CharSequence> cs);
	std::shared_ptr<android::icu::impl::UResource_S_Key> virtual setBytes(std::shared_ptr<unsigned char[]> keyBytes,int keyOffset);
	std::shared_ptr<android::icu::impl::UResource_S_Key> virtual setString(std::shared_ptr<java::lang::String> s);
	std::shared_ptr<android::icu::impl::UResource_S_Key> virtual setToEmpty();
	bool virtual startsWith(std::shared_ptr<java::lang::CharSequence> cs);
	std::shared_ptr<android::icu::impl::UResource_S_Key> virtual subSequence(int start,int end);
	std::shared_ptr<java::lang::String> virtual substring(int start);
	std::shared_ptr<java::lang::String> virtual substring(int start,int end);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::UResource_S_Key::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UResource_S_Key(){
	}

}; // class UResource_S_Key
}; // namespace android::icu::impl

#endif //__android_icu_impl_UResource_S_Key__

