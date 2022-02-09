#ifndef __android_icu_text_UFieldPosition__
#define __android_icu_text_UFieldPosition__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UFieldPosition.smali
#include "java2ctype.h"
#include "java.text.FieldPosition.h"
#include "java.text.Format_S_Field.h"

namespace android::icu::text{
class UFieldPosition : public java::text::FieldPosition {
protected:
private:
	int countVisibleFractionDigits;
	long long fractionDigits;
public:
	UFieldPosition();
	UFieldPosition(int field);
	UFieldPosition(std::shared_ptr<java::text::Format_S_Field> attribute);
	UFieldPosition(std::shared_ptr<java::text::Format_S_Field> attribute,int fieldID);
	int virtual getCountVisibleFractionDigits();
	long long virtual getFractionDigits();
	void virtual setFractionDigits(int countVisibleFractionDigits,long long fractionDigits);
public:
	virtual ~UFieldPosition(){
	}

}; // class UFieldPosition
}; // namespace android::icu::text

#endif //__android_icu_text_UFieldPosition__

