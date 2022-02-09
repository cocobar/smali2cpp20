#ifndef __android_icu_text_CanonicalIterator__
#define __android_icu_text_CanonicalIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CanonicalIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.text.Normalizer2.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Set.h"

namespace android::icu::text{
class CanonicalIterator : public java::lang::Object {
protected:
private:
	static bool PROGRESS;
	static std::shared_ptr<java::util::Set<java::lang::String>> SET_WITH_NULL_STRING;
	static bool SKIP_ZEROS;
	std::shared_ptr<java::lang::StringBuilder> buffer;
	std::shared_ptr<int[]> current;
	bool done;
	std::shared_ptr<android::icu::impl::Normalizer2Impl> nfcImpl;
	std::shared_ptr<android::icu::text::Normalizer2> nfd;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> pieces;
	std::shared_ptr<java::lang::String> source;
	std::shared_ptr<java::util::Set<java::lang::String>> virtual extract(int comp,std::shared_ptr<java::lang::String> segment,int segmentPos,std::shared_ptr<java::lang::StringBuffer> buf);
	std::shared_ptr<java::lang::String> virtual getEquivalents(std::shared_ptr<java::lang::String> segment);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getEquivalents2(std::shared_ptr<java::lang::String> segment);
public:
	static void static_cinit();
	CanonicalIterator(std::shared_ptr<java::lang::String> source);
	static void permute(std::shared_ptr<java::lang::String> source,bool skipZeros,std::shared_ptr<java::util::Set<java::lang::String>> output);
	std::shared_ptr<java::lang::String> virtual getSource();
	std::shared_ptr<java::lang::String> virtual next();
	void virtual reset();
	void virtual setSource(std::shared_ptr<java::lang::String> newSource);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CanonicalIterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CanonicalIterator(){
	}

}; // class CanonicalIterator
}; // namespace android::icu::text

#endif //__android_icu_text_CanonicalIterator__

