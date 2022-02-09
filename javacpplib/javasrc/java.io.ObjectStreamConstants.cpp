// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamConstants.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamConstants.h"
#include "java.io.SerializablePermission.h"
#include "java.lang.String.h"

static java::io::ObjectStreamConstants::PROTOCOL_VERSION_1 = 0x1;
static java::io::ObjectStreamConstants::PROTOCOL_VERSION_2 = 0x2;
static java::io::ObjectStreamConstants::SC_BLOCK_DATA = 0x8t;
static java::io::ObjectStreamConstants::SC_ENUM = 0x10t;
static java::io::ObjectStreamConstants::SC_EXTERNALIZABLE = 0x4t;
static java::io::ObjectStreamConstants::SC_SERIALIZABLE = 0x2t;
static java::io::ObjectStreamConstants::SC_WRITE_METHOD = 0x1t;
static java::io::ObjectStreamConstants::STREAM_MAGIC = -0x5313s;
static java::io::ObjectStreamConstants::STREAM_VERSION = 0x5s;
static java::io::ObjectStreamConstants::SUBCLASS_IMPLEMENTATION_PERMISSION;
static java::io::ObjectStreamConstants::SUBSTITUTION_PERMISSION;
static java::io::ObjectStreamConstants::TC_ARRAY = 0x75t;
static java::io::ObjectStreamConstants::TC_BASE = 0x70t;
static java::io::ObjectStreamConstants::TC_BLOCKDATA = 0x77t;
static java::io::ObjectStreamConstants::TC_BLOCKDATALONG = 0x7at;
static java::io::ObjectStreamConstants::TC_CLASS = 0x76t;
static java::io::ObjectStreamConstants::TC_CLASSDESC = 0x72t;
static java::io::ObjectStreamConstants::TC_ENDBLOCKDATA = 0x78t;
static java::io::ObjectStreamConstants::TC_ENUM = 0x7et;
static java::io::ObjectStreamConstants::TC_EXCEPTION = 0x7bt;
static java::io::ObjectStreamConstants::TC_LONGSTRING = 0x7ct;
static java::io::ObjectStreamConstants::TC_MAX = 0x7et;
static java::io::ObjectStreamConstants::TC_NULL = 0x70t;
static java::io::ObjectStreamConstants::TC_OBJECT = 0x73t;
static java::io::ObjectStreamConstants::TC_PROXYCLASSDESC = 0x7dt;
static java::io::ObjectStreamConstants::TC_REFERENCE = 0x71t;
static java::io::ObjectStreamConstants::TC_RESET = 0x79t;
static java::io::ObjectStreamConstants::TC_STRING = 0x74t;
static java::io::ObjectStreamConstants::baseWireHandle = 0x7e0000;
// .method static constructor <clinit>()V
void java::io::ObjectStreamConstants::static_cinit()
{
	
	std::shared_ptr<java::io::SerializablePermission> cVar0;
	std::shared_ptr<java::io::SerializablePermission> cVar1;
	
	cVar0 = std::make_shared<java::io::SerializablePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("enableSubstitution")));
	java::io::ObjectStreamConstants::SUBSTITUTION_PERMISSION = cVar0;
	cVar1 = std::make_shared<java::io::SerializablePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("enableSubclassImplementation")));
	java::io::ObjectStreamConstants::SUBCLASS_IMPLEMENTATION_PERMISSION = cVar1;
	return;

}


