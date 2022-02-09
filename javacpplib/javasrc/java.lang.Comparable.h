#ifndef __java_lang_Comparable__
#define __java_lang_Comparable__
// H L:\smali2cpp20\x64\Release\out\java\lang\Comparable.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace java::lang{
template <typename T>
class Comparable : public java::lang::Object {
protected:
private:
public:
	int compareTo(std::shared_ptr<T> var0);
	Comparable(){ };
	virtual ~Comparable(){ };

}; // class Comparable
}; // namespace java::lang
// .method public abstract compareTo(Ljava/lang/Object;)I
template <typename T>
int java::lang::Comparable<T>::compareTo(std::shared_ptr<T> var0)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 020        value = {
	// 021            "(TT;)I"
	// 022        }
	// 023    .end annotation

}

#endif //__java_lang_Comparable__

