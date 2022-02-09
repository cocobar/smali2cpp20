#ifndef __android_icu_impl_URLHandler_S_JarURLHandler__
#define __android_icu_impl_URLHandler_S_JarURLHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\URLHandler$JarURLHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.URLHandler_S_URLVisitor.h"
#include "android.icu.impl.URLHandler.h"
#include "java.lang.String.h"
#include "java.net.URL.h"
#include "java.util.jar.JarFile.h"

namespace android::icu::impl{
class URLHandler_S_JarURLHandler : public android::icu::impl::URLHandler {
protected:
private:
public:
	std::shared_ptr<java::util::jar::JarFile> jarFile;
	std::shared_ptr<java::lang::String> prefix;
	URLHandler_S_JarURLHandler(std::shared_ptr<java::net::URL> url);
	void virtual guide(std::shared_ptr<android::icu::impl::URLHandler_S_URLVisitor> v,bool recurse,bool strip);
public:
	virtual ~URLHandler_S_JarURLHandler(){
	}

}; // class URLHandler_S_JarURLHandler
}; // namespace android::icu::impl

#endif //__android_icu_impl_URLHandler_S_JarURLHandler__

