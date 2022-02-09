#ifndef __android_icu_util_BytesTrie__
#define __android_icu_util_BytesTrie__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrie.smali
#include "java2ctype.h"
#include "android.icu.util.BytesTrie_S_Entry.h"
#include "android.icu.util.BytesTrie_S_Iterator.h"
#include "android.icu.util.BytesTrie_S_Result.h"
#include "android.icu.util.BytesTrie_S_State.h"
#include "java.lang.Appendable.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class BytesTrie : public java::lang::Cloneable, public java::lang::Iterable<android::icu::util::BytesTrie_S_Entry> {
protected:
private:
	static int kValueIsFinal;
	static std::shared_ptr<std::vector<android::icu::util::BytesTrie_S_Result>> valueResults_;
	std::shared_ptr<unsigned char[]> bytes_;
	int pos_;
	int remainingMatchLength_;
	int root_;
	static void append(std::shared_ptr<java::lang::Appendable> out,int c);
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual branchNext(int pos,int cVar2,int inByte);
	static long long findUniqueValue(std::shared_ptr<unsigned char[]> bytes,int pos,long long uniqueValue);
	static long long findUniqueValueFromBranch(std::shared_ptr<unsigned char[]> bytes,int pos,int length,long long uniqueValue);
	static void getNextBranchBytes(std::shared_ptr<unsigned char[]> bytes,int pos,int length,std::shared_ptr<java::lang::Appendable> out);
	static int jumpByDelta(std::shared_ptr<unsigned char[]> bytes,int pos);
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual nextImpl(int pos,int inByte);
	static int readValue(std::shared_ptr<unsigned char[]> bytes,int pos,int leadByte);
	static int skipDelta(std::shared_ptr<unsigned char[]> bytes,int pos);
	static int skipValue(int cVar1,int leadByte);
	static int skipValue(std::shared_ptr<unsigned char[]> bytes,int pos);
	void virtual stop();
public:
	static bool _assertionsDisabled;
	static int kFiveByteDeltaLead;
	static int kFiveByteValueLead;
	static int kFourByteDeltaLead;
	static int kFourByteValueLead;
	static int kMaxBranchLinearSubNodeLength;
	static int kMaxLinearMatchLength;
	static int kMaxOneByteDelta;
	static int kMaxOneByteValue;
	static int kMaxThreeByteDelta;
	static int kMaxThreeByteValue;
	static int kMaxTwoByteDelta;
	static int kMaxTwoByteValue;
	static int kMinLinearMatch;
	static int kMinOneByteValueLead;
	static int kMinThreeByteDeltaLead;
	static int kMinThreeByteValueLead;
	static int kMinTwoByteDeltaLead;
	static int kMinTwoByteValueLead;
	static int kMinValueLead;
	static int _wrap0(std::shared_ptr<unsigned char[]> bytes,int pos);
	static int _wrap1(std::shared_ptr<unsigned char[]> bytes,int pos,int leadByte);
	static int _wrap2(std::shared_ptr<unsigned char[]> bytes,int pos);
	static int _wrap3(int pos,int leadByte);
	static void static_cinit();
	BytesTrie(std::shared_ptr<unsigned char[]> trieBytes,int offset);
	static std::shared_ptr<android::icu::util::BytesTrie_S_Iterator> iterator(std::shared_ptr<unsigned char[]> trieBytes,int offset,int maxStringLength);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual current();
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual first(int cVar0);
	int virtual getNextBytes(std::shared_ptr<java::lang::Appendable> out);
	long long virtual getUniqueValue();
	int virtual getValue();
	std::shared_ptr<android::icu::util::BytesTrie_S_Iterator> virtual iterator();
	std::shared_ptr<android::icu::util::BytesTrie_S_Iterator> virtual iterator(int maxStringLength);
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual next(int cVar0);
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> virtual next(std::shared_ptr<unsigned char[]> s,int sIndex,int sLimit);
	std::shared_ptr<android::icu::util::BytesTrie> virtual reset();
	std::shared_ptr<android::icu::util::BytesTrie> virtual resetToState(std::shared_ptr<android::icu::util::BytesTrie_S_State> state);
	std::shared_ptr<android::icu::util::BytesTrie> virtual saveState(std::shared_ptr<android::icu::util::BytesTrie_S_State> state);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::BytesTrie::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BytesTrie(){
	}

}; // class BytesTrie
}; // namespace android::icu::util

#endif //__android_icu_util_BytesTrie__

