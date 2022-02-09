#ifndef __android_icu_text_MessagePattern_S_Part__
#define __android_icu_text_MessagePattern_S_Part__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePattern$Part.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern_S_ArgType.h"
#include "android.icu.text.MessagePattern_S_Part_S_Type.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MessagePattern_S_Part : public java::lang::Object {
protected:
private:
	static int MAX_LENGTH;
	static int MAX_VALUE;
	int index;
	char length;
	int limitPartIndex;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> type;
	short value;
	MessagePattern_S_Part(std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> t,int i,int l,int v);
public:
	static int _get0(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this);
	static char _get1(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this);
	static int _get2(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this);
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> _get3(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this);
	static short _get4(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this);
	static int _set0(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this,int _value);
	static short _set1(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this,short _value);
	MessagePattern_S_Part(std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> t,int i,int l,int v,std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this4);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> virtual getArgType();
	int virtual getIndex();
	int virtual getLength();
	int virtual getLimit();
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> virtual getType();
	int virtual getValue();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~MessagePattern_S_Part(){
	}

}; // class MessagePattern_S_Part
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePattern_S_Part__

