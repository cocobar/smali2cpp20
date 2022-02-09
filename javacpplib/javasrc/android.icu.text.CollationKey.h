#ifndef __android_icu_text_CollationKey__
#define __android_icu_text_CollationKey__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CollationKey.smali
#include "java2ctype.h"
#include "android.icu.text.RawCollationKey.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CollationKey : public java::lang::Comparable<android::icu::text::CollationKey> {
protected:
private:
	static int MERGE_SEPERATOR_;
	int m_hashCode_;
	std::shared_ptr<unsigned char[]> m_key_;
	int m_length_;
	std::shared_ptr<java::lang::String> m_source_;
	CollationKey(std::shared_ptr<java::lang::String> source,std::shared_ptr<unsigned char[]> key,int length);
	int virtual getLength();
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	CollationKey(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::RawCollationKey> key);
	CollationKey(std::shared_ptr<java::lang::String> source,std::shared_ptr<unsigned char[]> key);
	int virtual compareTo(std::shared_ptr<android::icu::text::CollationKey> target);
	bool virtual equals(std::shared_ptr<android::icu::text::CollationKey> target);
	bool virtual equals(std::shared_ptr<java::lang::Object> target);
	std::shared_ptr<android::icu::text::CollationKey> virtual getBound(int boundType,int noOfLevels);
	std::shared_ptr<java::lang::String> virtual getSourceString();
	int virtual hashCode();
	std::shared_ptr<android::icu::text::CollationKey> virtual merge(std::shared_ptr<android::icu::text::CollationKey> source);
	unsigned char virtual toByteArray();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CollationKey::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationKey(){
	}

}; // class CollationKey
}; // namespace android::icu::text

#endif //__android_icu_text_CollationKey__

