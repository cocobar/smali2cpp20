#ifndef __java_io_ObjectOutputStream__
#define __java_io_ObjectOutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream.smali
#include "java2ctype.h"
#include "java.io.Externalizable.h"
#include "java.io.IOException.h"
#include "java.io.ObjectOutput.h"
#include "java.io.ObjectOutputStream_S_BlockDataOutputStream.h"
#include "java.io.ObjectOutputStream_S_DebugTraceInfoStack.h"
#include "java.io.ObjectOutputStream_S_HandleTable.h"
#include "java.io.ObjectOutputStream_S_PutField.h"
#include "java.io.ObjectOutputStream_S_PutFieldImpl.h"
#include "java.io.ObjectOutputStream_S_ReplaceTable.h"
#include "java.io.ObjectStreamClass.h"
#include "java.io.ObjectStreamConstants.h"
#include "java.io.OutputStream.h"
#include "java.io.SerialCallbackContext.h"
#include "java.lang.Class.h"
#include "java.lang.Enum.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class ObjectOutputStream : public java::io::OutputStream, public java::io::ObjectOutput, public java::io::ObjectStreamConstants {
protected:
	ObjectOutputStream();
	void virtual annotateClass(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	void virtual annotateProxyClass(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	void virtual drain();
	bool virtual enableReplaceObject(bool enable);
	std::shared_ptr<java::lang::Object> virtual replaceObject(std::shared_ptr<java::lang::Object> obj);
	void virtual writeClassDescriptor(std::shared_ptr<java::io::ObjectStreamClass> desc);
	void virtual writeObjectOverride(std::shared_ptr<java::lang::Object> obj);
	void virtual writeStreamHeader();
private:
	static bool extendedDebugInfo;
	std::shared_ptr<java::io::ObjectOutputStream_S_BlockDataOutputStream> bout;
	std::shared_ptr<java::io::SerialCallbackContext> curContext;
	std::shared_ptr<java::io::ObjectOutputStream_S_PutFieldImpl> curPut;
	std::shared_ptr<java::io::ObjectOutputStream_S_DebugTraceInfoStack> debugInfoStack;
	int depth;
	bool enableOverride;
	bool enableReplace;
	std::shared_ptr<java::io::ObjectOutputStream_S_HandleTable> handles;
	std::shared_ptr<unsigned char[]> primVals;
	int protocol;
	std::shared_ptr<java::io::ObjectOutputStream_S_ReplaceTable> subs;
	static bool auditSubclass(std::shared_ptr<java::lang::Class<java::lang::Object>> subcl);
	void virtual clear();
	void virtual defaultWriteFields(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectStreamClass> desc);
	static void doublesToBytes(std::shared_ptr<double[]> var0,int var1,std::shared_ptr<unsigned char[]> var2,int var3,int var4) = 0;
	static void floatsToBytes(std::shared_ptr<float[]> var0,int var1,std::shared_ptr<unsigned char[]> var2,int var3,int var4) = 0;
	bool virtual isCustomSubclass();
	void virtual verifySubclass();
	void virtual writeArray(std::shared_ptr<java::lang::Object> array,std::shared_ptr<java::io::ObjectStreamClass> desc,bool unshared);
	void virtual writeClass(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,bool unshared);
	void virtual writeClassDesc(std::shared_ptr<java::io::ObjectStreamClass> desc,bool unshared);
	void virtual writeEnum(std::shared_ptr<java::lang::Enum<java::lang::Object>> en,std::shared_ptr<java::io::ObjectStreamClass> desc,bool unshared);
	void virtual writeExternalData(std::shared_ptr<java::io::Externalizable> obj);
	void virtual writeFatalException(std::shared_ptr<java::io::IOException> ex);
	void virtual writeHandle(int handle);
	void virtual writeNonProxyDesc(std::shared_ptr<java::io::ObjectStreamClass> desc,bool unshared);
	void virtual writeNull();
	void virtual writeObject0(std::shared_ptr<java::lang::Object> obj,bool unshared);
	void virtual writeOrdinaryObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectStreamClass> desc,bool unshared);
	void virtual writeProxyDesc(std::shared_ptr<java::io::ObjectStreamClass> desc,bool unshared);
	void virtual writeSerialData(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectStreamClass> desc);
	void virtual writeString(std::shared_ptr<java::lang::String> str,bool unshared);
public:
	static std::shared_ptr<java::io::ObjectOutputStream_S_BlockDataOutputStream> _get0(std::shared_ptr<java::io::ObjectOutputStream> _this);
	static void _wrap0(std::shared_ptr<double[]> src,int srcpos,std::shared_ptr<unsigned char[]> dst,int dstpos,int ndoubles);
	static void _wrap1(std::shared_ptr<float[]> src,int srcpos,std::shared_ptr<unsigned char[]> dst,int dstpos,int nfloats);
	static void _wrap2(std::shared_ptr<java::io::ObjectOutputStream> _this,std::shared_ptr<java::lang::Object> obj,bool unshared);
	ObjectOutputStream(std::shared_ptr<java::io::OutputStream> out);
	void virtual close();
	void virtual defaultWriteObject();
	void virtual flush();
	int virtual getProtocolVersion();
	std::shared_ptr<java::io::ObjectOutputStream_S_PutField> virtual putFields();
	void virtual reset();
	void virtual useProtocolVersion(int version);
	void virtual write(int val);
	void virtual write(std::shared_ptr<unsigned char[]> buf);
	void virtual write(std::shared_ptr<unsigned char[]> buf,int off,int len);
	void virtual writeBoolean(bool val);
	void virtual writeByte(int val);
	void virtual writeBytes(std::shared_ptr<java::lang::String> str);
	void virtual writeChar(int val);
	void virtual writeChars(std::shared_ptr<java::lang::String> str);
	void virtual writeDouble(double val);
	void virtual writeFields();
	void virtual writeFloat(float val);
	void virtual writeInt(int val);
	void virtual writeLong(long long val);
	void virtual writeObject(std::shared_ptr<java::lang::Object> obj);
	void virtual writeShort(int val);
	void virtual writeTypeString(std::shared_ptr<java::lang::String> str);
	void virtual writeUTF(std::shared_ptr<java::lang::String> str);
	void virtual writeUnshared(std::shared_ptr<java::lang::Object> obj);
public:
	virtual ~ObjectOutputStream(){
	}

}; // class ObjectOutputStream
}; // namespace java::io

#endif //__java_io_ObjectOutputStream__

