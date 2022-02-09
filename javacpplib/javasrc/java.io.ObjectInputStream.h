#ifndef __java_io_ObjectInputStream__
#define __java_io_ObjectInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream.smali
#include "java2ctype.h"
#include "java.io.Externalizable.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.ObjectInput.h"
#include "java.io.ObjectInputStream_S_BlockDataInputStream.h"
#include "java.io.ObjectInputStream_S_GetField.h"
#include "java.io.ObjectInputStream_S_HandleTable.h"
#include "java.io.ObjectInputStream_S_ValidationList.h"
#include "java.io.ObjectInputValidation.h"
#include "java.io.ObjectStreamClass.h"
#include "java.io.ObjectStreamConstants.h"
#include "java.io.SerialCallbackContext.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Enum.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"

namespace java::io{
class ObjectInputStream : public java::io::InputStream, public java::io::ObjectInput, public java::io::ObjectStreamConstants {
protected:
	ObjectInputStream();
	bool virtual enableResolveObject(bool enable);
	std::shared_ptr<java::io::ObjectStreamClass> virtual readClassDescriptor();
	std::shared_ptr<java::lang::Object> virtual readObjectOverride();
	void virtual readStreamHeader();
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual resolveClass(std::shared_ptr<java::io::ObjectStreamClass> desc);
	std::shared_ptr<java::lang::Object> virtual resolveObject(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual resolveProxyClass(std::shared_ptr<std::vector<java::lang::String>> interfaces);
private:
	static int NULL_HANDLE;
	static std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::Class<java::lang::Object>>> primClasses;
	static std::shared_ptr<java::lang::Object> unsharedMarker;
	std::shared_ptr<java::io::ObjectInputStream_S_BlockDataInputStream> bin;
	bool closed;
	std::shared_ptr<java::io::SerialCallbackContext> curContext;
	bool defaultDataEnd;
	int depth;
	bool enableOverride;
	bool enableResolve;
	std::shared_ptr<java::io::ObjectInputStream_S_HandleTable> handles;
	int passHandle;
	std::shared_ptr<unsigned char[]> primVals;
	std::shared_ptr<java::io::ObjectInputStream_S_ValidationList> vlist;
	static bool auditSubclass(std::shared_ptr<java::lang::Class<java::lang::Object>> subcl);
	static void bytesToDoubles(std::shared_ptr<unsigned char[]> var0,int var1,std::shared_ptr<double[]> var2,int var3,int var4) = 0;
	static void bytesToFloats(std::shared_ptr<unsigned char[]> var0,int var1,std::shared_ptr<float[]> var2,int var3,int var4) = 0;
	std::shared_ptr<java::lang::Object> virtual checkResolve(std::shared_ptr<java::lang::Object> obj);
	void virtual clear();
	static std::shared_ptr<java::lang::Object> cloneArray(std::shared_ptr<java::lang::Object> array);
	void virtual defaultReadFields(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectStreamClass> desc);
	void virtual handleReset();
	bool virtual isCustomSubclass();
	static std::shared_ptr<java::lang::ClassLoader> latestUserDefinedLoader();
	std::shared_ptr<java::lang::Object> virtual readArray(bool unshared);
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual readClass(bool unshared);
	std::shared_ptr<java::io::ObjectStreamClass> virtual readClassDesc(bool unshared);
	std::shared_ptr<java::lang::Enum<java::lang::Object>> virtual readEnum(bool unshared);
	void virtual readExternalData(std::shared_ptr<java::io::Externalizable> obj,std::shared_ptr<java::io::ObjectStreamClass> desc);
	std::shared_ptr<java::io::IOException> virtual readFatalException();
	std::shared_ptr<java::lang::Object> virtual readHandle(bool unshared);
	std::shared_ptr<java::io::ObjectStreamClass> virtual readNonProxyDesc(bool unshared);
	std::shared_ptr<java::lang::Object> virtual readNull();
	std::shared_ptr<java::lang::Object> virtual readObject0(bool unshared);
	std::shared_ptr<java::lang::Object> virtual readOrdinaryObject(bool unshared);
	std::shared_ptr<java::io::ObjectStreamClass> virtual readProxyDesc(bool unshared);
	void virtual readSerialData(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectStreamClass> desc);
	std::shared_ptr<java::lang::String> virtual readString(bool unshared);
	void virtual skipCustomData();
	void virtual verifySubclass();
public:
	static std::shared_ptr<java::io::ObjectInputStream_S_BlockDataInputStream> _get0(std::shared_ptr<java::io::ObjectInputStream> _this);
	static bool _get1(std::shared_ptr<java::io::ObjectInputStream> _this);
	static std::shared_ptr<java::io::ObjectInputStream_S_HandleTable> _get2(std::shared_ptr<java::io::ObjectInputStream> _this);
	static int _get3(std::shared_ptr<java::io::ObjectInputStream> _this);
	static int _set0(std::shared_ptr<java::io::ObjectInputStream> _this,int _value);
	static std::shared_ptr<java::lang::Object> _wrap0(std::shared_ptr<java::io::ObjectInputStream> _this,bool unshared);
	static void _wrap1(std::shared_ptr<unsigned char[]> src,int srcpos,std::shared_ptr<double[]> dst,int dstpos,int ndoubles);
	static void _wrap2(std::shared_ptr<unsigned char[]> src,int srcpos,std::shared_ptr<float[]> dst,int dstpos,int nfloats);
	static void _wrap3(std::shared_ptr<java::io::ObjectInputStream> _this);
	static void static_cinit();
	ObjectInputStream(std::shared_ptr<java::io::InputStream> in);
	int virtual available();
	void virtual close();
	void virtual defaultReadObject();
	int virtual read();
	int virtual read(std::shared_ptr<unsigned char[]> buf,int off,int len);
	bool virtual readBoolean();
	unsigned char virtual readByte();
	char virtual readChar();
	double virtual readDouble();
	std::shared_ptr<java::io::ObjectInputStream_S_GetField> virtual readFields();
	float virtual readFloat();
	void virtual readFully(std::shared_ptr<unsigned char[]> buf);
	void virtual readFully(std::shared_ptr<unsigned char[]> buf,int off,int len);
	int virtual readInt();
	std::shared_ptr<java::lang::String> virtual readLine();
	long long virtual readLong();
	std::shared_ptr<java::lang::Object> virtual readObject();
	short virtual readShort();
	std::shared_ptr<java::lang::String> virtual readTypeString();
	std::shared_ptr<java::lang::String> virtual readUTF();
	std::shared_ptr<java::lang::Object> virtual readUnshared();
	int virtual readUnsignedByte();
	int virtual readUnsignedShort();
	void virtual registerValidation(std::shared_ptr<java::io::ObjectInputValidation> obj,int prio);
	int virtual skipBytes(int len);
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::ObjectInputStream::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ObjectInputStream(){
	}

}; // class ObjectInputStream
}; // namespace java::io

#endif //__java_io_ObjectInputStream__

