#ifndef __android_icu_text_CollationElementIterator__
#define __android_icu_text_CollationElementIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CollationElementIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "android.icu.impl.coll.UVector32.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "android.icu.text.UCharacterIterator.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.CharacterIterator.h"
#include "java.util.Map.h"

namespace android::icu::text{
class CollationElementIterator : public java::lang::Object {
protected:
private:
	unsigned char dir_;
	std::shared_ptr<android::icu::impl::coll::CollationIterator> iter_;
	std::shared_ptr<android::icu::impl::coll::UVector32> offsets_;
	int otherHalf_;
	std::shared_ptr<android::icu::text::RuleBasedCollator> rbc_;
	std::shared_ptr<java::lang::String> string_;
	CollationElementIterator(std::shared_ptr<android::icu::text::RuleBasedCollator> collator);
	static bool ceNeedsTwoParts(long long ce);
	static int getFirstHalf(long long p,int lower32);
	static int getSecondHalf(long long p,int lower32);
	unsigned char virtual normalizeDir();
public:
	static bool _assertionsDisabled;
	static int IGNORABLE;
	static int NULLORDER;
	static bool _wrap0(long long ce);
	static int _wrap1(long long p,int lower32);
	static int _wrap2(long long p,int lower32);
	static void static_cinit();
	CollationElementIterator(std::shared_ptr<android::icu::text::UCharacterIterator> source,std::shared_ptr<android::icu::text::RuleBasedCollator> collator);
	CollationElementIterator(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::RuleBasedCollator> collator);
	CollationElementIterator(std::shared_ptr<java::text::CharacterIterator> source,std::shared_ptr<android::icu::text::RuleBasedCollator> collator);
	static std::shared_ptr<java::util::Map<java::lang::Integer,java::lang::Integer>> computeMaxExpansions(std::shared_ptr<android::icu::impl::coll::CollationData> data);
	static int getMaxExpansion(std::shared_ptr<java::util::Map<java::lang::Integer,java::lang::Integer>> maxExpansions,int order);
	static int primaryOrder(int ce);
	static int secondaryOrder(int ce);
	static int tertiaryOrder(int ce);
	bool virtual equals(std::shared_ptr<java::lang::Object> that);
	int virtual getMaxExpansion(int ce);
	int virtual getOffset();
	std::shared_ptr<android::icu::text::RuleBasedCollator> virtual getRuleBasedCollator();
	int virtual hashCode();
	int virtual next();
	int virtual previous();
	void virtual reset();
	void virtual setOffset(int cVar0);
	void virtual setText(std::shared_ptr<android::icu::text::UCharacterIterator> source);
	void virtual setText(std::shared_ptr<java::lang::String> source);
	void virtual setText(std::shared_ptr<java::text::CharacterIterator> source);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CollationElementIterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationElementIterator(){
	}

}; // class CollationElementIterator
}; // namespace android::icu::text

#endif //__android_icu_text_CollationElementIterator__

