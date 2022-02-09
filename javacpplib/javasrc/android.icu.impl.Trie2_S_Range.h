#ifndef __android_icu_impl_Trie2_S_Range__
#define __android_icu_impl_Trie2_S_Range__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2$Range.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class Trie2_S_Range : public java::lang::Object {
protected:
private:
public:
	int endCodePoint;
	bool leadSurrogate;
	int startCodePoint;
	int value;
	Trie2_S_Range();
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual hashCode();
public:
	virtual ~Trie2_S_Range(){
	}

}; // class Trie2_S_Range
}; // namespace android::icu::impl

#endif //__android_icu_impl_Trie2_S_Range__

