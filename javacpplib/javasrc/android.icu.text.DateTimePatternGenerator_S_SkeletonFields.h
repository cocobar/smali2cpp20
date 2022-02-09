#ifndef __android_icu_text_DateTimePatternGenerator_S_SkeletonFields__
#define __android_icu_text_DateTimePatternGenerator_S_SkeletonFields__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$SkeletonFields.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::text{
class DateTimePatternGenerator_S_SkeletonFields : public java::lang::Object {
protected:
private:
	static unsigned char DEFAULT_CHAR;
	static unsigned char DEFAULT_LENGTH;
	std::shared_ptr<unsigned char[]> chars;
	std::shared_ptr<unsigned char[]> lengths;
	DateTimePatternGenerator_S_SkeletonFields();
	std::shared_ptr<java::lang::StringBuilder> virtual appendFieldTo(int field,std::shared_ptr<java::lang::StringBuilder> sb,bool canonical);
	std::shared_ptr<java::lang::StringBuilder> virtual appendTo(std::shared_ptr<java::lang::StringBuilder> sb,bool canonical);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	DateTimePatternGenerator_S_SkeletonFields(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_SkeletonFields> _this0);
	std::shared_ptr<java::lang::StringBuilder> virtual appendFieldTo(int field,std::shared_ptr<java::lang::StringBuilder> sb);
	std::shared_ptr<java::lang::StringBuilder> virtual appendTo(std::shared_ptr<java::lang::StringBuilder> sb);
	void virtual clear();
	void virtual clearField(int field);
	int virtual compareTo(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_SkeletonFields> other);
	void virtual copyFieldFrom(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_SkeletonFields> other,int field);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	char virtual getFieldChar(int field);
	int virtual getFieldLength(int field);
	int virtual hashCode();
	bool virtual isFieldEmpty(int field);
	void virtual populate(int field,char ch,int length);
	void virtual populate(int field,std::shared_ptr<java::lang::String> value);
	std::shared_ptr<java::lang::String> virtual toCanonicalString();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateTimePatternGenerator_S_SkeletonFields::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateTimePatternGenerator_S_SkeletonFields(){
	}

}; // class DateTimePatternGenerator_S_SkeletonFields
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator_S_SkeletonFields__

