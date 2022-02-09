#ifndef __android_icu_text_DictionaryBreakEngine_S_DequeI__
#define __android_icu_text_DictionaryBreakEngine_S_DequeI__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DictionaryBreakEngine$DequeI.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class DictionaryBreakEngine_S_DequeI : public java::lang::Object {
protected:
private:
	std::shared_ptr<int[]> data;
	int firstIdx;
	int lastIdx;
	void virtual grow();
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	DictionaryBreakEngine_S_DequeI();
	bool virtual contains(int v);
	bool virtual isEmpty();
	void virtual offer(int v);
	int virtual peek();
	int virtual peekLast();
	int virtual pollLast();
	int virtual pop();
	void virtual push(int v);
	int virtual size();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DictionaryBreakEngine_S_DequeI::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DictionaryBreakEngine_S_DequeI(){
	}

}; // class DictionaryBreakEngine_S_DequeI
}; // namespace android::icu::text

#endif //__android_icu_text_DictionaryBreakEngine_S_DequeI__

