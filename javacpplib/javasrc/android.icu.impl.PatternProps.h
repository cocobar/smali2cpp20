#ifndef __android_icu_impl_PatternProps__
#define __android_icu_impl_PatternProps__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\PatternProps.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class PatternProps : public java::lang::Object {
protected:
private:
	static std::shared_ptr<unsigned char[]> index2000;
	static std::shared_ptr<unsigned char[]> latin1;
	static std::shared_ptr<int[]> syntax2000;
	static std::shared_ptr<int[]> syntaxOrWhiteSpace2000;
public:
	static void static_cinit();
	PatternProps();
	static bool isIdentifier(std::shared_ptr<java::lang::CharSequence> s);
	static bool isIdentifier(std::shared_ptr<java::lang::CharSequence> s,int start,int limit);
	static bool isSyntax(int c);
	static bool isSyntaxOrWhiteSpace(int c);
	static bool isWhiteSpace(int c);
	static int skipIdentifier(std::shared_ptr<java::lang::CharSequence> s,int i);
	static int skipWhiteSpace(std::shared_ptr<java::lang::CharSequence> s,int i);
	static std::shared_ptr<java::lang::String> trimWhiteSpace(std::shared_ptr<java::lang::String> s);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::PatternProps::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PatternProps(){
	}

}; // class PatternProps
}; // namespace android::icu::impl

#endif //__android_icu_impl_PatternProps__

