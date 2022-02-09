#ifndef __dalvik_annotation_TestTargetClass__
#define __dalvik_annotation_TestTargetClass__
// H L:\smali2cpp20\x64\Release\out\dalvik\annotation\TestTargetClass.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.annotation.Annotation.h"

namespace dalvik::annotation{
class TestTargetClass : public java::lang::annotation::Annotation {
protected:
private:
public:
	std::shared_ptr<java::lang::Class<java::lang::Object>> value();
	TestTargetClass(){ };
	virtual ~TestTargetClass(){ };

}; // class TestTargetClass
}; // namespace dalvik::annotation

#endif //__dalvik_annotation_TestTargetClass__

