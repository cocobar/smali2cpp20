#ifndef __android_icu_text_Transliterator_S_Position__
#define __android_icu_text_Transliterator_S_Position__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Transliterator$Position.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class Transliterator_S_Position : public java::lang::Object {
protected:
private:
public:
	static bool _assertionsDisabled;
	int contextLimit;
	int contextStart;
	int limit;
	int start;
	static void static_cinit();
	Transliterator_S_Position();
	Transliterator_S_Position(int contextStart,int contextLimit,int start);
	Transliterator_S_Position(int contextStart,int contextLimit,int start,int limit);
	Transliterator_S_Position(std::shared_ptr<android::icu::text::Transliterator_S_Position> pos);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
	void virtual set(std::shared_ptr<android::icu::text::Transliterator_S_Position> pos);
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual validate(int length);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::Transliterator_S_Position::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Transliterator_S_Position(){
	}

}; // class Transliterator_S_Position
}; // namespace android::icu::text

#endif //__android_icu_text_Transliterator_S_Position__

