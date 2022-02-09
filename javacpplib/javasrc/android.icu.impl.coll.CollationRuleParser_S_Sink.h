#ifndef __android_icu_impl_coll_CollationRuleParser_S_Sink__
#define __android_icu_impl_coll_CollationRuleParser_S_Sink__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationRuleParser$Sink.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationRuleParser_S_Sink : public java::lang::Object {
protected:
private:
public:
	CollationRuleParser_S_Sink();
	void addRelation(int var0,std::shared_ptr<java::lang::CharSequence> var1,std::shared_ptr<java::lang::CharSequence> var2,std::shared_ptr<java::lang::CharSequence> var3) = 0;
	void addReset(int var0,std::shared_ptr<java::lang::CharSequence> var1) = 0;
	void virtual optimize(std::shared_ptr<android::icu::text::UnicodeSet> set);
	void virtual suppressContractions(std::shared_ptr<android::icu::text::UnicodeSet> set);
public:
	virtual ~CollationRuleParser_S_Sink(){
	}

}; // class CollationRuleParser_S_Sink
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationRuleParser_S_Sink__

