#ifndef __android_icu_impl_UPropertyAliases__
#define __android_icu_impl_UPropertyAliases__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UPropertyAliases.smali
#include "java2ctype.h"
#include "android.icu.impl.UPropertyAliases_S_IsAcceptable.h"
#include "android.icu.util.BytesTrie.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl{
class UPropertyAliases : public java::lang::Object {
protected:
private:
	static int DATA_FORMAT;
	static std::shared_ptr<android::icu::impl::UPropertyAliases_S_IsAcceptable> IS_ACCEPTABLE;
	static int IX_BYTE_TRIES_OFFSET;
	static int IX_NAME_GROUPS_OFFSET;
	static int IX_RESERVED3_OFFSET;
	static int IX_VALUE_MAPS_OFFSET;
	std::shared_ptr<unsigned char[]> bytesTries;
	std::shared_ptr<java::lang::String> nameGroups;
	std::shared_ptr<int[]> valueMaps;
	UPropertyAliases();
	static int asciiToLowercase(int cVar0);
	bool virtual containsName(std::shared_ptr<android::icu::util::BytesTrie> trie,std::shared_ptr<java::lang::CharSequence> name);
	int virtual findProperty(int property);
	int virtual findPropertyValueNameGroup(int valueMapIndex,int value);
	std::shared_ptr<java::lang::String> virtual getName(int nameGroupsIndex,int nameIndex);
	int virtual getPropertyOrValueEnum(int bytesTrieOffset,std::shared_ptr<java::lang::CharSequence> alias);
	void virtual load(std::shared_ptr<java::nio::ByteBuffer> bytes);
public:
	static std::shared_ptr<android::icu::impl::UPropertyAliases> INSTANCE;
	static void static_cinit();
	static int compare(std::shared_ptr<java::lang::String> stra,std::shared_ptr<java::lang::String> strb);
	int virtual getPropertyEnum(std::shared_ptr<java::lang::CharSequence> alias);
	std::shared_ptr<java::lang::String> virtual getPropertyName(int property,int nameChoice);
	int virtual getPropertyValueEnum(int property,std::shared_ptr<java::lang::CharSequence> alias);
	int virtual getPropertyValueEnumNoThrow(int property,std::shared_ptr<java::lang::CharSequence> alias);
	std::shared_ptr<java::lang::String> virtual getPropertyValueName(int property,int value,int nameChoice);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::UPropertyAliases::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UPropertyAliases(){
	}

}; // class UPropertyAliases
}; // namespace android::icu::impl

#endif //__android_icu_impl_UPropertyAliases__

