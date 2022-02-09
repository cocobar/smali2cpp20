#ifndef __android_icu_impl_URLHandler_S_FileURLHandler__
#define __android_icu_impl_URLHandler_S_FileURLHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\URLHandler$FileURLHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.URLHandler_S_URLVisitor.h"
#include "android.icu.impl.URLHandler.h"
#include "java.io.File.h"
#include "java.lang.String.h"
#include "java.net.URL.h"

namespace android::icu::impl{
class URLHandler_S_FileURLHandler : public android::icu::impl::URLHandler {
protected:
private:
	void virtual process(std::shared_ptr<android::icu::impl::URLHandler_S_URLVisitor> v,bool recurse,bool strip,std::shared_ptr<java::lang::String> path,std::shared_ptr<std::vector<java::io::File>> files);
public:
	std::shared_ptr<java::io::File> file;
	URLHandler_S_FileURLHandler(std::shared_ptr<java::net::URL> url);
	void virtual guide(std::shared_ptr<android::icu::impl::URLHandler_S_URLVisitor> v,bool recurse,bool strip);
public:
	virtual ~URLHandler_S_FileURLHandler(){
	}

}; // class URLHandler_S_FileURLHandler
}; // namespace android::icu::impl

#endif //__android_icu_impl_URLHandler_S_FileURLHandler__

