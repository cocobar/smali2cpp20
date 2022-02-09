#ifndef __dalvik_annotation_EnclosingClass__
#define __dalvik_annotation_EnclosingClass__
// H L:\smali2cpp20\x64\Release\out\dalvik\annotation\EnclosingClass.smali
#include "java2ctype.h"
#include "java.lang.annotation.Annotation.hh"

namespace dalvik::annotation{
class EnclosingClass : public java::lang::annotation::Annotation {
public:
	EnclosingClass();
	virtual ~EnclosingClass();

}; // class EnclosingClass
}; // namespace dalvik::annotation

#endif //__dalvik_annotation_EnclosingClass__

