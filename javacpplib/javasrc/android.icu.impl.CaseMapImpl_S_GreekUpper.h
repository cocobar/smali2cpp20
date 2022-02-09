#ifndef __android_icu_impl_CaseMapImpl_S_GreekUpper__
#define __android_icu_impl_CaseMapImpl_S_GreekUpper__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CaseMapImpl$GreekUpper.smali
#include "java2ctype.h"
#include "android.icu.text.Edits.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class CaseMapImpl_S_GreekUpper : public java::lang::Object {
protected:
private:
	static int AFTER_CASED;
	static int AFTER_VOWEL_WITH_ACCENT;
	static int HAS_ACCENT;
	static int HAS_COMBINING_DIALYTIKA;
	static int HAS_DIALYTIKA;
	static int HAS_EITHER_DIALYTIKA;
	static int HAS_OTHER_GREEK_DIACRITIC;
	static int HAS_VOWEL;
	static int HAS_VOWEL_AND_ACCENT;
	static int HAS_VOWEL_AND_ACCENT_AND_DIALYTIKA;
	static int HAS_YPOGEGRAMMENI;
	static int UPPER_MASK;
	static std::shared_ptr<char[]> data0370;
	static std::shared_ptr<char[]> data1F00;
	static char data2126;
	CaseMapImpl_S_GreekUpper();
	static int getDiacriticData(int c);
	static int getLetterData(int c);
	static bool isFollowedByCasedLetter(std::shared_ptr<java::lang::CharSequence> s,int i);
	static std::shared_ptr<java::lang::Appendable> toUpper(int options,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits);
public:
	static std::shared_ptr<java::lang::Appendable> _wrap0(int options,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits);
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::CaseMapImpl_S_GreekUpper::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CaseMapImpl_S_GreekUpper(){
	}

}; // class CaseMapImpl_S_GreekUpper
}; // namespace android::icu::impl

#endif //__android_icu_impl_CaseMapImpl_S_GreekUpper__

