#ifndef __android_icu_impl_URLHandler__
#define __android_icu_impl_URLHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\URLHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.URLHandler_S_URLVisitor.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.reflect.Method.h"
#include "java.net.URL.h"
#include "java.util.Map.h"

namespace android::icu::impl{
class URLHandler : public java::lang::Object {
protected:
	static std::shared_ptr<android::icu::impl::URLHandler> getDefault(std::shared_ptr<java::net::URL> url);
private:
	static bool DEBUG;
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::reflect::Method>> handlers;
public:
	static std::shared_ptr<java::lang::String> PROPNAME;
	static bool _get0();
	static void static_cinit();
	URLHandler();
	static std::shared_ptr<android::icu::impl::URLHandler> get(std::shared_ptr<java::net::URL> url);
	void virtual guide(std::shared_ptr<android::icu::impl::URLHandler_S_URLVisitor> visitor,bool recurse);
	void guide(std::shared_ptr<android::icu::impl::URLHandler_S_URLVisitor> var0,bool var1,bool var2) = 0;
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::URLHandler::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~URLHandler(){
	}

}; // class URLHandler
}; // namespace android::icu::impl

#endif //__android_icu_impl_URLHandler__

