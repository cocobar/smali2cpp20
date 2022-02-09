#ifndef __android_icu_util_CharsTrie__
#define __android_icu_util_CharsTrie__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CharsTrie.smali
#include "java2ctype.h"
#include "android.icu.util.BytesTrie_S_Result.h"
#include "android.icu.util.CharsTrie_S_Entry.h"
#include "android.icu.util.CharsTrie_S_Iterator.h"
#include "android.icu.util.CharsTrie_S_State.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class CharsTrie : public java::lang::Cloneable, public java::lang::Iterable<android::icu::util::CharsTrie_S_Entry> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::util::BytesTrie_S_Result>> valueResults_;
	std::shared_ptr<java::lang::CharSequence> chars_;
	int pos_;
	int remainingMatchLength_;
	int root_;
	static void append(std::shared_ptr<java::lang::Appendable> out,int c);
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual branchNext(int pos,int cVar1,int inUnit);
	static long long findUniqueValue(std::shared_ptr<java::lang::CharSequence> chars,int pos,long long uniqueValue);
	static long long findUniqueValueFromBranch(std::shared_ptr<java::lang::CharSequence> chars,int pos,int length,long long uniqueValue);
	static void getNextBranchChars(std::shared_ptr<java::lang::CharSequence> chars,int pos,int length,std::shared_ptr<java::lang::Appendable> out);
	static int jumpByDelta(std::shared_ptr<java::lang::CharSequence> chars,int pos);
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual nextImpl(int pos,int inUnit);
	static int readNodeValue(std::shared_ptr<java::lang::CharSequence> chars,int pos,int leadUnit);
	static int readValue(std::shared_ptr<java::lang::CharSequence> chars,int pos,int leadUnit);
	static int skipDelta(std::shared_ptr<java::lang::CharSequence> chars,int pos);
	static int skipNodeValue(int cVar1,int leadUnit);
	static int skipValue(int cVar0,int leadUnit);
	static int skipValue(std::shared_ptr<java::lang::CharSequence> chars,int pos);
	void virtual stop();
public:
	static bool _assertionsDisabled;
	static int kMaxBranchLinearSubNodeLength;
	static int kMaxLinearMatchLength;
	static int kMaxOneUnitDelta;
	static int kMaxOneUnitNodeValue;
	static int kMaxOneUnitValue;
	static int kMaxTwoUnitDelta;
	static int kMaxTwoUnitNodeValue;
	static int kMaxTwoUnitValue;
	static int kMinLinearMatch;
	static int kMinTwoUnitDeltaLead;
	static int kMinTwoUnitNodeValueLead;
	static int kMinTwoUnitValueLead;
	static int kMinValueLead;
	static int kNodeTypeMask;
	static int kThreeUnitDeltaLead;
	static int kThreeUnitNodeValueLead;
	static int kThreeUnitValueLead;
	static int kValueIsFinal;
	static int _wrap0(std::shared_ptr<java::lang::CharSequence> chars,int pos);
	static int _wrap1(std::shared_ptr<java::lang::CharSequence> chars,int pos,int leadUnit);
	static int _wrap2(std::shared_ptr<java::lang::CharSequence> chars,int pos,int leadUnit);
	static int _wrap3(std::shared_ptr<java::lang::CharSequence> chars,int pos);
	static int _wrap4(int pos,int leadUnit);
	static int _wrap5(int pos,int leadUnit);
	static void static_cinit();
	CharsTrie(std::shared_ptr<java::lang::CharSequence> trieChars,int offset);
	static std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> iterator(std::shared_ptr<java::lang::CharSequence> trieChars,int offset,int maxStringLength);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual current();
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual first(int inUnit);
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual firstForCodePoint(int cp);
	int virtual getNextChars(std::shared_ptr<java::lang::Appendable> out);
	long long virtual getUniqueValue();
	int virtual getValue();
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> virtual iterator();
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> virtual iterator(int maxStringLength);
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual next(int inUnit);
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual next(std::shared_ptr<java::lang::CharSequence> s,int sIndex,int sLimit);
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual nextForCodePoint(int cp);
	std::shared_ptr<android::icu::util::CharsTrie> virtual reset();
	std::shared_ptr<android::icu::util::CharsTrie> virtual resetToState(std::shared_ptr<android::icu::util::CharsTrie_S_State> state);
	std::shared_ptr<android::icu::util::CharsTrie> virtual saveState(std::shared_ptr<android::icu::util::CharsTrie_S_State> state);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::CharsTrie::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CharsTrie(){
	}

}; // class CharsTrie
}; // namespace android::icu::util

#endif //__android_icu_util_CharsTrie__

