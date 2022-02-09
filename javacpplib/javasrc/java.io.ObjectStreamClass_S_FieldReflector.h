#ifndef __java_io_ObjectStreamClass_S_FieldReflector__
#define __java_io_ObjectStreamClass_S_FieldReflector__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$FieldReflector.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamField.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "sun.misc.Unsafe.h"

namespace java::io{
class ObjectStreamClass_S_FieldReflector : public java::lang::Object {
protected:
private:
	static std::shared_ptr<sun::misc::Unsafe> unsafe;
	std::shared_ptr<std::vector<java::io::ObjectStreamField>> fields;
	int numPrimFields;
	std::shared_ptr<int[]> offsets;
	std::shared_ptr<long long[]> readKeys;
	std::shared_ptr<char[]> typeCodes;
	std::shared_ptr<std::vector<java::lang::Class<java::lang::Object>>> types;
	std::shared_ptr<long long[]> writeKeys;
public:
	static void static_cinit();
	ObjectStreamClass_S_FieldReflector(std::shared_ptr<std::vector<java::io::ObjectStreamField>> fields);
	std::shared_ptr<java::io::ObjectStreamField> virtual getFields();
	void virtual getObjFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<std::vector<java::lang::Object>> vals);
	void virtual getPrimFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<unsigned char[]> buf);
	void virtual setObjFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<std::vector<java::lang::Object>> vals);
	void virtual setPrimFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<unsigned char[]> buf);
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::ObjectStreamClass_S_FieldReflector::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ObjectStreamClass_S_FieldReflector(){
	}

}; // class ObjectStreamClass_S_FieldReflector
}; // namespace java::io

#endif //__java_io_ObjectStreamClass_S_FieldReflector__

