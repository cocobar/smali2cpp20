#ifndef __android_icu_impl_UCharacterUtility__
#define __android_icu_impl_UCharacterUtility__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterUtility.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace android::icu::impl{
class UCharacterUtility : public java::lang::Object {
protected:
private:
	static int NON_CHARACTER_MAX_3_1_;
	static int NON_CHARACTER_MIN_3_1_;
	static int NON_CHARACTER_SUFFIX_MIN_3_0_;
	UCharacterUtility();
public:
	static int compareNullTermByteSubString(std::shared_ptr<java::lang::String> str,std::shared_ptr<unsigned char[]> array,int strindex,int aindex);
	static int getNullTermByteSubString(std::shared_ptr<java::lang::StringBuffer> str,std::shared_ptr<unsigned char[]> array,int index);
	static bool isNonCharacter(int ch);
	static int skipByteSubString(std::shared_ptr<unsigned char[]> array,int index,int length,unsigned char skipend);
	static int skipNullTermByteSubString(std::shared_ptr<unsigned char[]> array,int index,int skipcount);
	static int toInt(char msc,char lsc);
public:
	virtual ~UCharacterUtility(){
	}

}; // class UCharacterUtility
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterUtility__

