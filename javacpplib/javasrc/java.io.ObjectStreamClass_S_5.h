#ifndef __java_io_ObjectStreamClass_S_5__
#define __java_io_ObjectStreamClass_S_5__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$5.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass_S_MemberSignature.h"
#include "java.util.Comparator.h"

namespace java::io{
class ObjectStreamClass_S_5 : public java::util::Comparator<java::io::ObjectStreamClass_S_MemberSignature> {
protected:
private:
public:
	ObjectStreamClass_S_5();
	int virtual compare(std::shared_ptr<java::io::ObjectStreamClass_S_MemberSignature> ms1,std::shared_ptr<java::io::ObjectStreamClass_S_MemberSignature> ms2);
public:
	virtual ~ObjectStreamClass_S_5(){
	}

}; // class ObjectStreamClass_S_5
}; // namespace java::io

#endif //__java_io_ObjectStreamClass_S_5__
