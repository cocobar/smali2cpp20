#ifndef __dalvik_annotation_KnownFailure__
#define __dalvik_annotation_KnownFailure__
// H L:\smali2cpp20\x64\Release\out\dalvik\annotation\KnownFailure.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.annotation.Annotation.h"

namespace dalvik::annotation{
class KnownFailure : public java::lang::annotation::Annotation {
protected:
private:
public:
	std::shared_ptr<java::lang::String> value() = 0;
	KnownFailure(){ };
	virtual ~KnownFailure(){ };

}; // class KnownFailure
}; // namespace dalvik::annotation

#endif //__dalvik_annotation_KnownFailure__

