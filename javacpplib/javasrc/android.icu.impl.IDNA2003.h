#ifndef __android_icu_impl_IDNA2003__
#define __android_icu_impl_IDNA2003__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\IDNA2003.smali
#include "java2ctype.h"
#include "android.icu.text.StringPrep.h"
#include "android.icu.text.UCharacterIterator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace android::icu::impl{
class IDNA2003 : public java::lang::Object {
protected:
private:
	static std::shared_ptr<char[]> ACE_PREFIX;
	static int CAPITAL_A;
	static int CAPITAL_Z;
	static int FULL_STOP;
	static int HYPHEN;
	static int LOWER_CASE_DELTA;
	static int MAX_DOMAIN_NAME_LENGTH;
	static int MAX_LABEL_LENGTH;
	static std::shared_ptr<android::icu::text::StringPrep> namePrep;
	static int compareCaseInsensitiveASCII(std::shared_ptr<java::lang::StringBuffer> s1,std::shared_ptr<java::lang::StringBuffer> s2);
	static int getSeparatorIndex(std::shared_ptr<char[]> src,int start,int limit);
	static bool isLDHChar(int ch);
	static bool isLabelSeparator(int ch);
	static bool startsWithPrefix(std::shared_ptr<java::lang::StringBuffer> src);
	static char toASCIILower(char ch);
	static std::shared_ptr<java::lang::StringBuffer> toASCIILower(std::shared_ptr<java::lang::CharSequence> src);
public:
	static void static_cinit();
	IDNA2003();
	static int compare(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertIDNToASCII(std::shared_ptr<java::lang::String> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertIDNToUnicode(std::shared_ptr<java::lang::String> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertToASCII(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertToUnicode(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::IDNA2003::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~IDNA2003(){
	}

}; // class IDNA2003
}; // namespace android::icu::impl

#endif //__android_icu_impl_IDNA2003__

