#ifndef __android_icu_util_BytesTrie_S_State__
#define __android_icu_util_BytesTrie_S_State__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrie$State.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class BytesTrie_S_State : public java::lang::Object {
protected:
private:
	std::shared_ptr<unsigned char[]> bytes;
	int pos;
	int remainingMatchLength;
	int root;
public:
	static unsigned char _get0(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this);
	static int _get1(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this);
	static int _get2(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this);
	static int _get3(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this);
	static unsigned char _set0(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this,std::shared_ptr<unsigned char[]> _value);
	static int _set1(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this,int _value);
	static int _set2(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this,int _value);
	static int _set3(std::shared_ptr<android::icu::util::BytesTrie_S_State> _this,int _value);
	BytesTrie_S_State();
public:
	virtual ~BytesTrie_S_State(){
	}

}; // class BytesTrie_S_State
}; // namespace android::icu::util

#endif //__android_icu_util_BytesTrie_S_State__

