#ifndef __android_icu_util_Freezable__
#define __android_icu_util_Freezable__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Freezable.smali
#include "java2ctype.h"
#include "java.lang.Cloneable.h"

namespace android::icu::util{
template <typename T>
class Freezable : public java::lang::Cloneable {
protected:
private:
public:
	std::shared_ptr<T> cloneAsThawed();
	std::shared_ptr<T> freeze();
	bool isFrozen() = 0;
	Freezable(){ };
	virtual ~Freezable(){ };

}; // class Freezable
}; // namespace android::icu::util
// .method public abstract cloneAsThawed()Ljava/lang/Object;
template <typename T>
std::shared_ptr<T> android::icu::util::Freezable<T>::cloneAsThawed()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 024        value = {
	// 025            "()TT;"
	// 026        }
	// 027    .end annotation

}
// .method public abstract freeze()Ljava/lang/Object;
template <typename T>
std::shared_ptr<T> android::icu::util::Freezable<T>::freeze()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 032        value = {
	// 033            "()TT;"
	// 034        }
	// 035    .end annotation

}

#endif //__android_icu_util_Freezable__

