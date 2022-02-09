#ifndef __android_icu_lang_UScriptRun__
#define __android_icu_lang_UScriptRun__
// H L:\smali2cpp20\x64\Release\out\android\icu\lang\UScriptRun.smali
#include "java2ctype.h"
#include "android.icu.lang.UScriptRun_S_ParenStackEntry.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::lang{
class UScriptRun : public java::lang::Object {
protected:
private:
	static int PAREN_STACK_DEPTH;
	static int pairedCharExtra;
	static int pairedCharPower;
	static std::shared_ptr<int[]> pairedChars;
	static std::shared_ptr<std::vector<android::icu::lang::UScriptRun_S_ParenStackEntry>> parenStack;
	std::shared_ptr<char[]> emptyCharArray;
	int fixupCount;
	int parenSP;
	int pushCount;
	int scriptCode;
	int scriptLimit;
	int scriptStart;
	std::shared_ptr<char[]> text;
	int textIndex;
	int textLimit;
	int textStart;
	static int dec(int sp);
	static int dec(int sp,int count);
	void virtual fixup(int scrptCode);
	static int getPairIndex(int ch);
	static unsigned char highBit(int cVar4);
	static int inc(int sp);
	static int inc(int sp,int count);
	static int limitInc(int cVar0);
	static int mod(int sp);
	void virtual pop();
	void virtual push(int pairIndex,int scrptCode);
	static bool sameScript(int scriptOne,int scriptTwo);
	bool virtual stackIsEmpty();
	bool virtual stackIsNotEmpty();
	void virtual syncFixup();
	std::shared_ptr<android::icu::lang::UScriptRun_S_ParenStackEntry> virtual top();
public:
	static void static_cinit();
	UScriptRun();
	UScriptRun(std::shared_ptr<java::lang::String> text);
	UScriptRun(std::shared_ptr<java::lang::String> text,int start,int count);
	UScriptRun(std::shared_ptr<char[]> chars);
	UScriptRun(std::shared_ptr<char[]> chars,int start,int count);
	int virtual getScriptCode();
	int virtual getScriptLimit();
	int virtual getScriptStart();
	bool virtual next();
	void virtual reset();
	void virtual reset(int start,int count);
	void virtual reset(std::shared_ptr<java::lang::String> str);
	void virtual reset(std::shared_ptr<java::lang::String> str,int start,int count);
	void virtual reset(std::shared_ptr<char[]> chars);
	void virtual reset(std::shared_ptr<char[]> cVar0,int start,int count);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::lang::UScriptRun::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UScriptRun(){
	}

}; // class UScriptRun
}; // namespace android::icu::lang

#endif //__android_icu_lang_UScriptRun__

