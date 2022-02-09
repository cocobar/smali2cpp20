#ifndef __android_icu_util_CharsTrie_S_State__
#define __android_icu_util_CharsTrie_S_State__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CharsTrie$State.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class CharsTrie_S_State : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::CharSequence> chars;
	int pos;
	int remainingMatchLength;
	int root;
public:
	static std::shared_ptr<java::lang::CharSequence> _get0(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this);
	static int _get1(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this);
	static int _get2(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this);
	static int _get3(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this);
	static std::shared_ptr<java::lang::CharSequence> _set0(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this,std::shared_ptr<java::lang::CharSequence> _value);
	static int _set1(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this,int _value);
	static int _set2(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this,int _value);
	static int _set3(std::shared_ptr<android::icu::util::CharsTrie_S_State> _this,int _value);
	CharsTrie_S_State();
public:
	virtual ~CharsTrie_S_State(){
	}

}; // class CharsTrie_S_State
}; // namespace android::icu::util

#endif //__android_icu_util_CharsTrie_S_State__

