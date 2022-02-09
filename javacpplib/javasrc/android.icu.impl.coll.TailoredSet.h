#ifndef __android_icu_impl_coll_TailoredSet__
#define __android_icu_impl_coll_TailoredSet__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\TailoredSet.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::impl::coll{
class TailoredSet : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::impl::coll::CollationData> baseData;
	std::shared_ptr<android::icu::impl::coll::CollationData> data;
	std::shared_ptr<java::lang::String> suffix;
	std::shared_ptr<android::icu::text::UnicodeSet> tailored;
	std::shared_ptr<java::lang::StringBuilder> unreversedPrefix;
	void virtual add(int c);
	void virtual addContractions(int c,std::shared_ptr<java::lang::CharSequence> p,int pidx);
	void virtual addPrefix(std::shared_ptr<android::icu::impl::coll::CollationData> d,std::shared_ptr<java::lang::CharSequence> pfx,int c,int ce32);
	void virtual addPrefixes(std::shared_ptr<android::icu::impl::coll::CollationData> d,int c,std::shared_ptr<java::lang::CharSequence> p,int pidx);
	void virtual addSuffix(int c,std::shared_ptr<java::lang::CharSequence> sfx);
	void virtual compare(int c,int cVar2,int cVar3);
	void virtual compareContractions(int c,std::shared_ptr<java::lang::CharSequence> p,int pidx,std::shared_ptr<java::lang::CharSequence> q,int qidx);
	void virtual comparePrefixes(int c,std::shared_ptr<java::lang::CharSequence> p,int pidx,std::shared_ptr<java::lang::CharSequence> q,int qidx);
	void virtual enumTailoredRange(int start,int end,int ce32,std::shared_ptr<android::icu::impl::coll::TailoredSet> ts);
	void virtual handleCE32(int start,int end,int cVar2);
	void virtual resetPrefix();
	void virtual setPrefix(std::shared_ptr<java::lang::CharSequence> pfx);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	TailoredSet(std::shared_ptr<android::icu::text::UnicodeSet> t);
	void virtual forData(std::shared_ptr<android::icu::impl::coll::CollationData> d);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::TailoredSet::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TailoredSet(){
	}

}; // class TailoredSet
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_TailoredSet__

