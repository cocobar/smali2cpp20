#ifndef __android_icu_impl_CaseMapImpl__
#define __android_icu_impl_CaseMapImpl__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CaseMapImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.CaseMapImpl_S_StringContextIterator.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.Edits.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class CaseMapImpl : public java::lang::Object {
protected:
private:
	static int appendCodePoint(std::shared_ptr<java::lang::Appendable> a,int c);
	static void appendResult(int result,std::shared_ptr<java::lang::Appendable> dest,int cpLength,int options,std::shared_ptr<android::icu::text::Edits> edits);
	static void appendUnchanged(std::shared_ptr<java::lang::CharSequence> src,int start,int length,std::shared_ptr<java::lang::Appendable> dest,int options,std::shared_ptr<android::icu::text::Edits> edits);
	static void internalToLower(int caseLocale,int options,std::shared_ptr<android::icu::impl::CaseMapImpl_S_StringContextIterator> iter,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits);
public:
	static bool _assertionsDisabled;
	static int OMIT_UNCHANGED_TEXT;
	static void _wrap0(int result,std::shared_ptr<java::lang::Appendable> dest,int cpLength,int options,std::shared_ptr<android::icu::text::Edits> edits);
	static void static_cinit();
	CaseMapImpl();
	static std::shared_ptr<java::lang::Appendable> fold(int options,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits);
	static std::shared_ptr<java::lang::Appendable> toLower(int caseLocale,int options,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits);
	static std::shared_ptr<java::lang::Appendable> toTitle(int caseLocale,int options,std::shared_ptr<android::icu::text::BreakIterator> titleIter,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits);
	static std::shared_ptr<java::lang::Appendable> toUpper(int caseLocale,int options,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::CaseMapImpl::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CaseMapImpl(){
	}

}; // class CaseMapImpl
}; // namespace android::icu::impl

#endif //__android_icu_impl_CaseMapImpl__

