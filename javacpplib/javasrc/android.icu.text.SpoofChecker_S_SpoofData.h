#ifndef __android_icu_text_SpoofChecker_S_SpoofData__
#define __android_icu_text_SpoofChecker_S_SpoofData__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$SpoofData.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_SpoofData_S_IsAcceptable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::text{
class SpoofChecker_S_SpoofData : public java::lang::Object {
protected:
private:
	static int DATA_FORMAT;
	static std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData_S_IsAcceptable> IS_ACCEPTABLE;
	SpoofChecker_S_SpoofData();
	SpoofChecker_S_SpoofData(std::shared_ptr<java::nio::ByteBuffer> bytes);
	void virtual readData(std::shared_ptr<java::nio::ByteBuffer> bytes);
public:
	std::shared_ptr<int[]> fCFUKeys;
	std::shared_ptr<java::lang::String> fCFUStrings;
	std::shared_ptr<short[]> fCFUValues;
	static void static_cinit();
	SpoofChecker_S_SpoofData(std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> _this0);
	SpoofChecker_S_SpoofData(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> _this1);
	static std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> getDefault();
	void virtual appendValueTo(int index,std::shared_ptr<java::lang::StringBuilder> dest);
	int virtual codePointAt(int index);
	void virtual confusableLookup(int inChar,std::shared_ptr<java::lang::StringBuilder> dest);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual hashCode();
	int virtual length();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::SpoofChecker_S_SpoofData::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SpoofChecker_S_SpoofData(){
	}

}; // class SpoofChecker_S_SpoofData
}; // namespace android::icu::text

#endif //__android_icu_text_SpoofChecker_S_SpoofData__

