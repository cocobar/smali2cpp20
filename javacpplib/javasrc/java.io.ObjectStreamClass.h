#ifndef __java_io_ObjectStreamClass__
#define __java_io_ObjectStreamClass__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass.smali
#include "java2ctype.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.ObjectStreamClass_S_ClassDataSlot.h"
#include "java.io.ObjectStreamClass_S_ExceptionInfo.h"
#include "java.io.ObjectStreamClass_S_FieldReflector.h"
#include "java.io.ObjectStreamField.h"
#include "java.io.Serializable.h"
#include "java.lang.Class.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.lang.ref.WeakReference.h"
#include "java.lang.reflect.Constructor.h"
#include "java.lang.reflect.Method.h"
#include "java.util.concurrent.ConcurrentMap.h"

namespace java::io{
class ObjectStreamClass : public java::io::Serializable {
protected:
private:
	static std::shared_ptr<std::vector<java::io::ObjectStreamField>> serialPersistentFields;
	static long long serialVersionUID;
	std::shared_ptr<java::lang::Class<java::lang::Object>> cl;
	std::shared_ptr<java::lang::reflect::Constructor<java::lang::Object>> cons;
	std::shared_ptr<std::vector<java::io::ObjectStreamClass_S_ClassDataSlot>> dataLayout;
	std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> defaultSerializeEx;
	std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> deserializeEx;
	bool externalizable;
	std::shared_ptr<java::io::ObjectStreamClass_S_FieldReflector> fieldRefl;
	std::shared_ptr<std::vector<java::io::ObjectStreamField>> fields;
	bool hasBlockExternalData;
	bool hasWriteObjectData;
	bool isEnum;
	bool isProxy;
	std::shared_ptr<java::io::ObjectStreamClass> localDesc;
	std::shared_ptr<java::lang::String> name;
	int numObjFields;
	int primDataSize;
	std::shared_ptr<java::lang::reflect::Method> readObjectMethod;
	std::shared_ptr<java::lang::reflect::Method> readObjectNoDataMethod;
	std::shared_ptr<java::lang::reflect::Method> readResolveMethod;
	std::shared_ptr<java::lang::ClassNotFoundException> resolveEx;
	bool serializable;
	std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> serializeEx;
	std::shared_ptr<java::lang::Long> suid;
	std::shared_ptr<java::io::ObjectStreamClass> superDesc;
	std::shared_ptr<java::lang::reflect::Method> writeObjectMethod;
	std::shared_ptr<java::lang::reflect::Method> writeReplaceMethod;
	ObjectStreamClass(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	static bool classNamesEqual(std::shared_ptr<java::lang::String> name1,std::shared_ptr<java::lang::String> name2);
	static long long computeDefaultSUID(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	void virtual computeFieldOffsets();
	std::shared_ptr<java::io::ObjectStreamClass_S_ClassDataSlot> virtual getClassDataLayout0();
	static std::shared_ptr<java::lang::String> getClassSignature(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	static long long getConstructorId(std::shared_ptr<java::lang::Class<java::lang::Object>> clazz);
	static std::shared_ptr<java::lang::Long> getDeclaredSUID(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	static std::shared_ptr<java::io::ObjectStreamField> getDeclaredSerialFields(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	static std::shared_ptr<java::io::ObjectStreamField> getDefaultSerialFields(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	static std::shared_ptr<java::lang::reflect::Constructor<java::lang::Object>> getExternalizableConstructor(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	static std::shared_ptr<java::lang::reflect::Method> getInheritableMethod(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::Class<java::lang::Object>>> argTypes,std::shared_ptr<java::lang::Class<java::lang::Object>> returnType);
	static std::shared_ptr<java::lang::String> getMethodSignature(std::shared_ptr<std::vector<java::lang::Class<java::lang::Object>>> paramTypes,std::shared_ptr<java::lang::Class<java::lang::Object>> retType);
	static std::shared_ptr<java::lang::String> getPackageName(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	static std::shared_ptr<java::lang::reflect::Method> getPrivateMethod(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::Class<java::lang::Object>>> argTypes,std::shared_ptr<java::lang::Class<java::lang::Object>> returnType);
	static std::shared_ptr<java::io::ObjectStreamClass_S_FieldReflector> getReflector(std::shared_ptr<std::vector<java::io::ObjectStreamField>> fields,std::shared_ptr<java::io::ObjectStreamClass> localDesc);
	static std::shared_ptr<java::io::ObjectStreamField> getSerialFields(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	static std::shared_ptr<java::lang::reflect::Constructor<java::lang::Object>> getSerializableConstructor(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	std::shared_ptr<java::io::ObjectStreamClass> virtual getVariantFor(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	static bool hasStaticInitializer(std::shared_ptr<java::lang::Class<java::lang::Object>> var0,bool var1);
	static std::shared_ptr<java::io::ObjectStreamField> matchFields(std::shared_ptr<std::vector<java::io::ObjectStreamField>> fields,std::shared_ptr<java::io::ObjectStreamClass> localDesc);
	static std::shared_ptr<java::lang::Object> newInstance(std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,long long constructorId);
	static bool packageEquals(std::shared_ptr<java::lang::Class<java::lang::Object>> cl1,std::shared_ptr<java::lang::Class<java::lang::Object>> cl2);
	static void throwMiscException(std::shared_ptr<java::lang::Throwable> th);
public:
	static int MAX_SDK_TARGET_FOR_CLINIT_UIDGEN_WORKAROUND;
	static std::shared_ptr<std::vector<java::io::ObjectStreamField>> NO_FIELDS;
	static std::shared_ptr<java::lang::Class> _get0(std::shared_ptr<java::io::ObjectStreamClass> _this);
	static bool _get1(std::shared_ptr<java::io::ObjectStreamClass> _this);
	static bool _get2(std::shared_ptr<java::io::ObjectStreamClass> _this);
	static std::shared_ptr<java::lang::reflect::Method> _get3(std::shared_ptr<java::io::ObjectStreamClass> _this);
	static std::shared_ptr<java::lang::reflect::Constructor> _set0(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::reflect::Constructor> _value);
	static std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> _set1(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> _value);
	static std::shared_ptr<java::lang::reflect::Method> _set10(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::reflect::Method> _value);
	static std::shared_ptr<java::io::ObjectStreamField> _set2(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<std::vector<java::io::ObjectStreamField>> _value);
	static bool _set3(std::shared_ptr<java::io::ObjectStreamClass> _this,bool _value);
	static std::shared_ptr<java::lang::reflect::Method> _set4(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::reflect::Method> _value);
	static std::shared_ptr<java::lang::reflect::Method> _set5(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::reflect::Method> _value);
	static std::shared_ptr<java::lang::reflect::Method> _set6(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::reflect::Method> _value);
	static std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> _set7(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> _value);
	static std::shared_ptr<java::lang::Long> _set8(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::Long> _value);
	static std::shared_ptr<java::lang::reflect::Method> _set9(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::reflect::Method> _value);
	static std::shared_ptr<java::io::ObjectStreamField> _wrap0(std::shared_ptr<java::lang::Class> cl);
	static std::shared_ptr<java::lang::Long> _wrap1(std::shared_ptr<java::lang::Class> cl);
	static std::shared_ptr<java::lang::String> _wrap2(std::shared_ptr<java::lang::Class> cl);
	static std::shared_ptr<java::lang::String> _wrap3(std::shared_ptr<std::vector<java::lang::Class>> paramTypes,std::shared_ptr<java::lang::Class> retType);
	static std::shared_ptr<java::lang::reflect::Constructor> _wrap4(std::shared_ptr<java::lang::Class> cl);
	static std::shared_ptr<java::lang::reflect::Constructor> _wrap5(std::shared_ptr<java::lang::Class> cl);
	static std::shared_ptr<java::lang::reflect::Method> _wrap6(std::shared_ptr<java::lang::Class> cl,std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::Class>> argTypes,std::shared_ptr<java::lang::Class> returnType);
	static std::shared_ptr<java::lang::reflect::Method> _wrap7(std::shared_ptr<java::lang::Class> cl,std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::Class>> argTypes,std::shared_ptr<java::lang::Class> returnType);
	static long long _wrap8(std::shared_ptr<java::lang::Class> cl);
	static void _wrap9(std::shared_ptr<java::io::ObjectStreamClass> _this);
	static void static_cinit();
	ObjectStreamClass();
	static std::shared_ptr<java::io::ObjectStreamClass> lookup(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	static std::shared_ptr<java::io::ObjectStreamClass> lookup(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,bool all);
	static std::shared_ptr<java::io::ObjectStreamClass> lookupAny(std::shared_ptr<java::lang::Class<java::lang::Object>> cl);
	static void processQueue(std::shared_ptr<java::lang::ref::ReferenceQueue<java::lang::Class<java::lang::Object>>> queue,std::shared_ptr<java::util::concurrent::ConcurrentMap<java::lang::ref::WeakReference<java::lang::Class<java::lang::Object>>,java::lang::Object>> map);
	void virtual checkDefaultSerialize();
	void virtual checkDeserialize();
	void virtual checkSerialize();
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual forClass();
	std::shared_ptr<java::io::ObjectStreamClass_S_ClassDataSlot> virtual getClassDataLayout();
	std::shared_ptr<java::io::ObjectStreamField> virtual getField(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::io::ObjectStreamField> virtual getField(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Class<java::lang::Object>> type);
	std::shared_ptr<java::io::ObjectStreamField> virtual getFields();
	std::shared_ptr<java::io::ObjectStreamField> virtual getFields(bool copy);
	std::shared_ptr<java::io::ObjectStreamClass> virtual getLocalDesc();
	std::shared_ptr<java::lang::String> virtual getName();
	int virtual getNumObjFields();
	void virtual getObjFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<std::vector<java::lang::Object>> vals);
	int virtual getPrimDataSize();
	void virtual getPrimFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<unsigned char[]> buf);
	std::shared_ptr<java::lang::ClassNotFoundException> virtual getResolveException();
	long long virtual getSerialVersionUID();
	std::shared_ptr<java::io::ObjectStreamClass> virtual getSuperDesc();
	bool virtual hasBlockExternalData();
	bool virtual hasReadObjectMethod();
	bool virtual hasReadObjectNoDataMethod();
	bool virtual hasReadResolveMethod();
	bool virtual hasWriteObjectData();
	bool virtual hasWriteObjectMethod();
	bool virtual hasWriteReplaceMethod();
	void virtual initNonProxy(std::shared_ptr<java::io::ObjectStreamClass> model,std::shared_ptr<java::lang::Class<java::lang::Object>> cl,std::shared_ptr<java::lang::ClassNotFoundException> resolveEx,std::shared_ptr<java::io::ObjectStreamClass> superDesc);
	void virtual initProxy(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,std::shared_ptr<java::lang::ClassNotFoundException> resolveEx,std::shared_ptr<java::io::ObjectStreamClass> superDesc);
	void virtual invokeReadObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectInputStream> in);
	void virtual invokeReadObjectNoData(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::Object> virtual invokeReadResolve(std::shared_ptr<java::lang::Object> obj);
	void virtual invokeWriteObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectOutputStream> out);
	std::shared_ptr<java::lang::Object> virtual invokeWriteReplace(std::shared_ptr<java::lang::Object> obj);
	bool virtual isEnum();
	bool virtual isExternalizable();
	bool virtual isInstantiable();
	bool virtual isProxy();
	bool virtual isSerializable();
	std::shared_ptr<java::lang::Object> virtual newInstance();
	void virtual readNonProxy(std::shared_ptr<java::io::ObjectInputStream> in);
	void virtual setObjFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<std::vector<java::lang::Object>> vals);
	void virtual setPrimFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<unsigned char[]> buf);
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual writeNonProxy(std::shared_ptr<java::io::ObjectOutputStream> out);
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::ObjectStreamClass::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ObjectStreamClass(){
	}

}; // class ObjectStreamClass
}; // namespace java::io

#endif //__java_io_ObjectStreamClass__

