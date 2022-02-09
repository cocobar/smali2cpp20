#ifndef __android_icu_text_Transform__
#define __android_icu_text_Transform__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Transform.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
template <typename D,typename S>
class Transform : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<D> transform(std::shared_ptr<S> var0);
	Transform(){ };
	virtual ~Transform(){ };

}; // class Transform
}; // namespace android::icu::text
// .method public abstract transform(Ljava/lang/Object;)Ljava/lang/Object;
template <typename D,typename S>
std::shared_ptr<D> android::icu::text::Transform<D,S>::transform(std::shared_ptr<S> var0)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 022        value = {
	// 023            "(TS;)TD;"
	// 024        }
	// 025    .end annotation

}

#endif //__android_icu_text_Transform__

