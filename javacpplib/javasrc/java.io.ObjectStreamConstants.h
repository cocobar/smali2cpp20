#ifndef __java_io_ObjectStreamConstants__
#define __java_io_ObjectStreamConstants__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamConstants.smali
#include "java2ctype.h"
#include "java.io.SerializablePermission.h"
#include "java.lang.Object.h"

namespace java::io{
class ObjectStreamConstants : public java::lang::Object {
protected:
private:
public:
	static int PROTOCOL_VERSION_1;
	static int PROTOCOL_VERSION_2;
	static unsigned char SC_BLOCK_DATA;
	static unsigned char SC_ENUM;
	static unsigned char SC_EXTERNALIZABLE;
	static unsigned char SC_SERIALIZABLE;
	static unsigned char SC_WRITE_METHOD;
	static short STREAM_MAGIC;
	static short STREAM_VERSION;
	static std::shared_ptr<java::io::SerializablePermission> SUBCLASS_IMPLEMENTATION_PERMISSION;
	static std::shared_ptr<java::io::SerializablePermission> SUBSTITUTION_PERMISSION;
	static unsigned char TC_ARRAY;
	static unsigned char TC_BASE;
	static unsigned char TC_BLOCKDATA;
	static unsigned char TC_BLOCKDATALONG;
	static unsigned char TC_CLASS;
	static unsigned char TC_CLASSDESC;
	static unsigned char TC_ENDBLOCKDATA;
	static unsigned char TC_ENUM;
	static unsigned char TC_EXCEPTION;
	static unsigned char TC_LONGSTRING;
	static unsigned char TC_MAX;
	static unsigned char TC_NULL;
	static unsigned char TC_OBJECT;
	static unsigned char TC_PROXYCLASSDESC;
	static unsigned char TC_REFERENCE;
	static unsigned char TC_RESET;
	static unsigned char TC_STRING;
	static int baseWireHandle;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::ObjectStreamConstants::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
	ObjectStreamConstants(){ };
	virtual ~ObjectStreamConstants(){ };

}; // class ObjectStreamConstants
}; // namespace java::io

#endif //__java_io_ObjectStreamConstants__

