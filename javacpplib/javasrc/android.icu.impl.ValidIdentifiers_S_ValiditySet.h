#ifndef __android_icu_impl_ValidIdentifiers_S_ValiditySet__
#define __android_icu_impl_ValidIdentifiers_S_ValiditySet__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ValidIdentifiers$ValiditySet.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ValidIdentifiers_S_ValiditySet : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::util::Set<java::lang::String>> regularData;
	std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<java::lang::String>>> subdivisionData;
	ValidIdentifiers_S_ValiditySet(std::shared_ptr<java::util::Set<java::lang::String>> plainData,bool makeMap);
	bool virtual contains(std::shared_ptr<java::lang::String> code);
	bool virtual contains(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> value);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~ValidIdentifiers_S_ValiditySet(){
	}

}; // class ValidIdentifiers_S_ValiditySet
}; // namespace android::icu::impl

#endif //__android_icu_impl_ValidIdentifiers_S_ValiditySet__

