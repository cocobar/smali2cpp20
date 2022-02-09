#ifndef __dalvik_annotation_TestTarget__
#define __dalvik_annotation_TestTarget__
// H L:\smali2cpp20\x64\Release\out\dalvik\annotation\TestTarget.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.annotation.Annotation.h"

namespace dalvik::annotation{
class TestTarget : public java::lang::annotation::Annotation {
protected:
private:
public:
	std::shared_ptr<java::lang::String> conceptName() = 0;
	std::shared_ptr<java::lang::Class<java::lang::Object>> methodArgs();
	std::shared_ptr<java::lang::String> methodName() = 0;
	TestTarget(){ };
	virtual ~TestTarget(){ };

}; // class TestTarget
}; // namespace dalvik::annotation

#endif //__dalvik_annotation_TestTarget__

