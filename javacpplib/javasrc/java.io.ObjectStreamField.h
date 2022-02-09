#ifndef __java_io_ObjectStreamField__
#define __java_io_ObjectStreamField__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamField.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.reflect.Field.h"

namespace java::io{
class ObjectStreamField : public java::lang::Comparable<java::lang::Object> {
protected:
	void virtual setOffset(int offset);
private:
	std::shared_ptr<java::lang::reflect::Field> field;
	std::shared_ptr<java::lang::String> name;
	int offset;
	std::shared_ptr<java::lang::String> signature;
	std::shared_ptr<java::lang::Class<java::lang::Object>> type;
	bool unshared;
	static std::shared_ptr<java::lang::String> getClassSignature(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
public:
	ObjectStreamField(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Class<java::lang::Object>> type);
	ObjectStreamField(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Class<java::lang::Object>> type,bool unshared);
	ObjectStreamField(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> signature,bool unshared);
	ObjectStreamField(std::shared_ptr<java::lang::reflect::Field> field,bool unshared,bool showType);
	int virtual compareTo(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::reflect::Field> virtual getField();
	std::shared_ptr<java::lang::String> virtual getName();
	int virtual getOffset();
	std::shared_ptr<java::lang::String> virtual getSignature();
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual getType();
	char virtual getTypeCode();
	std::shared_ptr<java::lang::String> virtual getTypeString();
	bool virtual isPrimitive();
	bool virtual isUnshared();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~ObjectStreamField(){
	}

}; // class ObjectStreamField
}; // namespace java::io

#endif //__java_io_ObjectStreamField__

