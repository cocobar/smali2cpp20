#ifndef __android_icu_text_UCharacterIterator__
#define __android_icu_text_UCharacterIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UCharacterIterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.UForwardCharacterIterator.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class UCharacterIterator : public java::lang::Cloneable, public android::icu::text::UForwardCharacterIterator {
protected:
	UCharacterIterator();
private:
public:
	static std::shared_ptr<android::icu::text::UCharacterIterator> getInstance(std::shared_ptr<android::icu::text::Replaceable> source);
	static std::shared_ptr<android::icu::text::UCharacterIterator> getInstance(std::shared_ptr<java::lang::String> source);
	static std::shared_ptr<android::icu::text::UCharacterIterator> getInstance(std::shared_ptr<java::lang::StringBuffer> source);
	static std::shared_ptr<android::icu::text::UCharacterIterator> getInstance(std::shared_ptr<java::text::CharacterIterator> source);
	static std::shared_ptr<android::icu::text::UCharacterIterator> getInstance(std::shared_ptr<char[]> source);
	static std::shared_ptr<android::icu::text::UCharacterIterator> getInstance(std::shared_ptr<char[]> source,int start,int limit);
	std::shared_ptr<java::lang::Object> virtual clone();
	int current() = 0;
	int virtual currentCodePoint();
	std::shared_ptr<java::text::CharacterIterator> virtual getCharacterIterator();
	int getIndex() = 0;
	int getLength() = 0;
	int virtual getText(std::shared_ptr<char[]> fillIn);
	int getText(std::shared_ptr<char[]> var0,int var1) = 0;
	std::shared_ptr<java::lang::String> virtual getText();
	int virtual moveCodePointIndex(int delta);
	int virtual moveIndex(int delta);
	int next() = 0;
	int virtual nextCodePoint();
	int previous() = 0;
	int virtual previousCodePoint();
	void setIndex(int var0) = 0;
	void virtual setToLimit();
	void virtual setToStart();
public:
	virtual ~UCharacterIterator(){
	}

}; // class UCharacterIterator
}; // namespace android::icu::text

#endif //__android_icu_text_UCharacterIterator__

