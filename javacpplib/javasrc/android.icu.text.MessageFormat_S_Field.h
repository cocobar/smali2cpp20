#ifndef __android_icu_text_MessageFormat_S_Field__
#define __android_icu_text_MessageFormat_S_Field__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessageFormat$Field.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.Format_S_Field.h"

namespace android::icu::text{
class MessageFormat_S_Field : public java::text::Format_S_Field {
protected:
	MessageFormat_S_Field(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::Object> virtual readResolve();
private:
	static long long serialVersionUID;
public:
	static std::shared_ptr<android::icu::text::MessageFormat_S_Field> ARGUMENT;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::MessageFormat_S_Field::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~MessageFormat_S_Field(){
	}

}; // class MessageFormat_S_Field
}; // namespace android::icu::text

#endif //__android_icu_text_MessageFormat_S_Field__

