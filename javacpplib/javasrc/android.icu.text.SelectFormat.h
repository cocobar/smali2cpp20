#ifndef __android_icu_text_SelectFormat__
#define __android_icu_text_SelectFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SelectFormat.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.FieldPosition.h"
#include "java.text.Format.h"
#include "java.text.ParsePosition.h"

namespace android::icu::text{
class SelectFormat : public java::text::Format {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<android::icu::text::MessagePattern> msgPattern;
	std::shared_ptr<java::lang::String> pattern;
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> in);
	void virtual reset();
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	SelectFormat(std::shared_ptr<java::lang::String> pattern);
	static int findSubMessage(std::shared_ptr<android::icu::text::MessagePattern> pattern,int partIndex,std::shared_ptr<java::lang::String> keyword);
	void virtual applyPattern(std::shared_ptr<java::lang::String> pattern);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<java::lang::String> keyword);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::lang::Object> keyword,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	int virtual hashCode();
	std::shared_ptr<java::lang::Object> virtual parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos);
	std::shared_ptr<java::lang::String> virtual toPattern();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::SelectFormat::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SelectFormat(){
	}

}; // class SelectFormat
}; // namespace android::icu::text

#endif //__android_icu_text_SelectFormat__

