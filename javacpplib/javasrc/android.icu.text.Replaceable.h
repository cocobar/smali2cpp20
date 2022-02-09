#ifndef __android_icu_text_Replaceable__
#define __android_icu_text_Replaceable__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Replaceable.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class Replaceable : public java::lang::Object {
protected:
private:
public:
	int char32At(int var0) = 0;
	char charAt(int var0) = 0;
	void copy(int var0,int var1,int var2) = 0;
	void getChars(int var0,int var1,std::shared_ptr<char[]> var2,int var3) = 0;
	bool hasMetaData() = 0;
	int length() = 0;
	void replace(int var0,int var1,std::shared_ptr<java::lang::String> var2) = 0;
	void replace(int var0,int var1,std::shared_ptr<char[]> var2,int var3,int var4) = 0;
	Replaceable(){ };
	virtual ~Replaceable(){ };

}; // class Replaceable
}; // namespace android::icu::text

#endif //__android_icu_text_Replaceable__

