#ifndef __android_icu_impl_URLHandler_S_URLVisitor__
#define __android_icu_impl_URLHandler_S_URLVisitor__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\URLHandler$URLVisitor.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class URLHandler_S_URLVisitor : public java::lang::Object {
protected:
private:
public:
	void visit(std::shared_ptr<java::lang::String> var0) = 0;
	URLHandler_S_URLVisitor(){ };
	virtual ~URLHandler_S_URLVisitor(){ };

}; // class URLHandler_S_URLVisitor
}; // namespace android::icu::impl

#endif //__android_icu_impl_URLHandler_S_URLVisitor__

