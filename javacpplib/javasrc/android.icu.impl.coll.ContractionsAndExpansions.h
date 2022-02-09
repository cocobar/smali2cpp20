#ifndef __android_icu_impl_coll_ContractionsAndExpansions__
#define __android_icu_impl_coll_ContractionsAndExpansions__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\ContractionsAndExpansions.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.ContractionsAndExpansions_S_CESink.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::impl::coll{
class ContractionsAndExpansions : public java::lang::Object {
protected:
private:
	bool addPrefixes;
	std::shared_ptr<long long[]> ces;
	int checkTailored;
	std::shared_ptr<android::icu::text::UnicodeSet> contractions;
	std::shared_ptr<android::icu::impl::coll::CollationData> data;
	std::shared_ptr<android::icu::text::UnicodeSet> expansions;
	std::shared_ptr<android::icu::text::UnicodeSet> ranges;
	std::shared_ptr<android::icu::impl::coll::ContractionsAndExpansions_S_CESink> sink;
	std::shared_ptr<java::lang::String> suffix;
	std::shared_ptr<android::icu::text::UnicodeSet> tailored;
	std::shared_ptr<java::lang::StringBuilder> unreversedPrefix;
	void virtual enumCnERange(int start,int end,int ce32,std::shared_ptr<android::icu::impl::coll::ContractionsAndExpansions> cne);
	void virtual handleCE32(int start,int end,int ce32);
	void virtual handlePrefixes(int start,int end,int ce32);
	void virtual resetPrefix();
	void virtual setPrefix(std::shared_ptr<java::lang::CharSequence> pfx);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	ContractionsAndExpansions(std::shared_ptr<android::icu::text::UnicodeSet> con,std::shared_ptr<android::icu::text::UnicodeSet> exp,std::shared_ptr<android::icu::impl::coll::ContractionsAndExpansions_S_CESink> s,bool prefixes);
	void virtual addExpansions(int start,int end);
	void virtual addStrings(int start,int end,std::shared_ptr<android::icu::text::UnicodeSet> set);
	void virtual forCodePoint(std::shared_ptr<android::icu::impl::coll::CollationData> cVar0,int c);
	void virtual forData(std::shared_ptr<android::icu::impl::coll::CollationData> d);
	void virtual handleContractions(int start,int end,int ce32);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::ContractionsAndExpansions::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ContractionsAndExpansions(){
	}

}; // class ContractionsAndExpansions
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_ContractionsAndExpansions__

