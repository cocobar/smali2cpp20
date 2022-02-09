// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass.smali
#include "java2ctype.h"
#include "dalvik.system.VMRuntime.h"
#include "dalvik.system.VMStack.h"
#include "java.io.ByteArrayOutputStream.h"
#include "java.io.DataOutputStream.h"
#include "java.io.Externalizable.h"
#include "java.io.IOException.h"
#include "java.io.InvalidClassException.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.ObjectStreamClass_S_1.h"
#include "java.io.ObjectStreamClass_S_2.h"
#include "java.io.ObjectStreamClass_S_3.h"
#include "java.io.ObjectStreamClass_S_4.h"
#include "java.io.ObjectStreamClass_S_5.h"
#include "java.io.ObjectStreamClass_S_Caches.h"
#include "java.io.ObjectStreamClass_S_ClassDataSlot.h"
#include "java.io.ObjectStreamClass_S_EntryFuture.h"
#include "java.io.ObjectStreamClass_S_ExceptionInfo.h"
#include "java.io.ObjectStreamClass_S_FieldReflector.h"
#include "java.io.ObjectStreamClass_S_FieldReflectorKey.h"
#include "java.io.ObjectStreamClass_S_MemberSignature.h"
#include "java.io.ObjectStreamClass_S_WeakClassKey.h"
#include "java.io.ObjectStreamClass.h"
#include "java.io.ObjectStreamException.h"
#include "java.io.ObjectStreamField.h"
#include "java.io.Serializable.h"
#include "java.lang.Boolean.h"
#include "java.lang.Byte.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.Double.h"
#include "java.lang.Enum.h"
#include "java.lang.Error.h"
#include "java.lang.Exception.h"
#include "java.lang.Float.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.Integer.h"
#include "java.lang.InternalError.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.NoSuchFieldException.h"
#include "java.lang.NoSuchMethodException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.SecurityException.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.Short.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Thread.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.lang.Void.h"
#include "java.lang.ref.Reference.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.lang.ref.SoftReference.h"
#include "java.lang.ref.WeakReference.h"
#include "java.lang.reflect.Constructor.h"
#include "java.lang.reflect.Field.h"
#include "java.lang.reflect.InvocationTargetException.h"
#include "java.lang.reflect.Member.h"
#include "java.lang.reflect.Method.h"
#include "java.lang.reflect.Proxy.h"
#include "java.security.AccessController.h"
#include "java.security.MessageDigest.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.Collections.h"
#include "java.util.Comparator.h"
#include "java.util.HashSet.h"
#include "java.util.concurrent.ConcurrentMap.h"
#include "sun.misc.Unsafe.h"
#include "sun.reflect.misc.ReflectUtil.h"

static java::io::ObjectStreamClass::MAX_SDK_TARGET_FOR_CLINIT_UIDGEN_WORKAROUND = 0x17;
static java::io::ObjectStreamClass::NO_FIELDS;
static java::io::ObjectStreamClass::serialPersistentFields;
static java::io::ObjectStreamClass::serialVersionUID = -0x54f190e511018478L;
// .method static synthetic -get0(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class> java::io::ObjectStreamClass::_get0(std::shared_ptr<java::io::ObjectStreamClass> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	return _this->cl;

}
// .method static synthetic -get1(Ljava/io/ObjectStreamClass;)Z
bool java::io::ObjectStreamClass::_get1(std::shared_ptr<java::io::ObjectStreamClass> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	return _this->externalizable;

}
// .method static synthetic -get2(Ljava/io/ObjectStreamClass;)Z
bool java::io::ObjectStreamClass::_get2(std::shared_ptr<java::io::ObjectStreamClass> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	return _this->isEnum;

}
// .method static synthetic -get3(Ljava/io/ObjectStreamClass;)Ljava/lang/reflect/Method;
std::shared_ptr<java::lang::reflect::Method> java::io::ObjectStreamClass::_get3(std::shared_ptr<java::io::ObjectStreamClass> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	return _this->writeObjectMethod;

}
// .method static synthetic -set0(Ljava/io/ObjectStreamClass;Ljava/lang/reflect/Constructor;)Ljava/lang/reflect/Constructor;
std::shared_ptr<java::lang::reflect::Constructor> java::io::ObjectStreamClass::_set0(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::reflect::Constructor> _value)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	//    .param p1, "-value"    # Ljava/lang/reflect/Constructor;
	_this->cons = _value;
	return _value;

}
// .method static synthetic -set1(Ljava/io/ObjectStreamClass;Ljava/io/ObjectStreamClass$ExceptionInfo;)Ljava/io/ObjectStreamClass$ExceptionInfo;
std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> java::io::ObjectStreamClass::_set1(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> _value)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	//    .param p1, "-value"    # Ljava/io/ObjectStreamClass$ExceptionInfo;
	_this->deserializeEx = _value;
	return _value;

}
// .method static synthetic -set10(Ljava/io/ObjectStreamClass;Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;
std::shared_ptr<java::lang::reflect::Method> java::io::ObjectStreamClass::_set10(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::reflect::Method> _value)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	//    .param p1, "-value"    # Ljava/lang/reflect/Method;
	_this->writeReplaceMethod = _value;
	return _value;

}
// .method static synthetic -set2(Ljava/io/ObjectStreamClass;[Ljava/io/ObjectStreamField;)[Ljava/io/ObjectStreamField;
std::shared_ptr<java::io::ObjectStreamField> java::io::ObjectStreamClass::_set2(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<std::vector<java::io::ObjectStreamField>> _value)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	//    .param p1, "-value"    # [Ljava/io/ObjectStreamField;
	_this->fields = _value;
	return _value;

}
// .method static synthetic -set3(Ljava/io/ObjectStreamClass;Z)Z
bool java::io::ObjectStreamClass::_set3(std::shared_ptr<java::io::ObjectStreamClass> _this,bool _value)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	//    .param p1, "-value"    # Z
	_this->hasWriteObjectData = _value;
	return _value;

}
// .method static synthetic -set4(Ljava/io/ObjectStreamClass;Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;
std::shared_ptr<java::lang::reflect::Method> java::io::ObjectStreamClass::_set4(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::reflect::Method> _value)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	//    .param p1, "-value"    # Ljava/lang/reflect/Method;
	_this->readObjectMethod = _value;
	return _value;

}
// .method static synthetic -set5(Ljava/io/ObjectStreamClass;Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;
std::shared_ptr<java::lang::reflect::Method> java::io::ObjectStreamClass::_set5(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::reflect::Method> _value)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	//    .param p1, "-value"    # Ljava/lang/reflect/Method;
	_this->readObjectNoDataMethod = _value;
	return _value;

}
// .method static synthetic -set6(Ljava/io/ObjectStreamClass;Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;
std::shared_ptr<java::lang::reflect::Method> java::io::ObjectStreamClass::_set6(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::reflect::Method> _value)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	//    .param p1, "-value"    # Ljava/lang/reflect/Method;
	_this->readResolveMethod = _value;
	return _value;

}
// .method static synthetic -set7(Ljava/io/ObjectStreamClass;Ljava/io/ObjectStreamClass$ExceptionInfo;)Ljava/io/ObjectStreamClass$ExceptionInfo;
std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> java::io::ObjectStreamClass::_set7(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> _value)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	//    .param p1, "-value"    # Ljava/io/ObjectStreamClass$ExceptionInfo;
	_this->serializeEx = _value;
	return _value;

}
// .method static synthetic -set8(Ljava/io/ObjectStreamClass;Ljava/lang/Long;)Ljava/lang/Long;
std::shared_ptr<java::lang::Long> java::io::ObjectStreamClass::_set8(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::Long> _value)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	//    .param p1, "-value"    # Ljava/lang/Long;
	_this->suid = _value;
	return _value;

}
// .method static synthetic -set9(Ljava/io/ObjectStreamClass;Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;
std::shared_ptr<java::lang::reflect::Method> java::io::ObjectStreamClass::_set9(std::shared_ptr<java::io::ObjectStreamClass> _this,std::shared_ptr<java::lang::reflect::Method> _value)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	//    .param p1, "-value"    # Ljava/lang/reflect/Method;
	_this->writeObjectMethod = _value;
	return _value;

}
// .method static synthetic -wrap0(Ljava/lang/Class;)[Ljava/io/ObjectStreamField;
std::shared_ptr<java::io::ObjectStreamField> java::io::ObjectStreamClass::_wrap0(std::shared_ptr<java::lang::Class> cl)
{
	
	//    .param p0, "cl"    # Ljava/lang/Class;
	return java::io::ObjectStreamClass::getSerialFields(cl);

}
// .method static synthetic -wrap1(Ljava/lang/Class;)Ljava/lang/Long;
std::shared_ptr<java::lang::Long> java::io::ObjectStreamClass::_wrap1(std::shared_ptr<java::lang::Class> cl)
{
	
	//    .param p0, "cl"    # Ljava/lang/Class;
	return java::io::ObjectStreamClass::getDeclaredSUID(cl);

}
// .method static synthetic -wrap2(Ljava/lang/Class;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectStreamClass::_wrap2(std::shared_ptr<java::lang::Class> cl)
{
	
	//    .param p0, "cl"    # Ljava/lang/Class;
	return java::io::ObjectStreamClass::getClassSignature(cl);

}
// .method static synthetic -wrap3([Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectStreamClass::_wrap3(std::shared_ptr<std::vector<java::lang::Class>> paramTypes,std::shared_ptr<java::lang::Class> retType)
{
	
	//    .param p0, "paramTypes"    # [Ljava/lang/Class;
	//    .param p1, "retType"    # Ljava/lang/Class;
	return java::io::ObjectStreamClass::getMethodSignature(paramTypes, retType);

}
// .method static synthetic -wrap4(Ljava/lang/Class;)Ljava/lang/reflect/Constructor;
std::shared_ptr<java::lang::reflect::Constructor> java::io::ObjectStreamClass::_wrap4(std::shared_ptr<java::lang::Class> cl)
{
	
	//    .param p0, "cl"    # Ljava/lang/Class;
	return java::io::ObjectStreamClass::getExternalizableConstructor(cl);

}
// .method static synthetic -wrap5(Ljava/lang/Class;)Ljava/lang/reflect/Constructor;
std::shared_ptr<java::lang::reflect::Constructor> java::io::ObjectStreamClass::_wrap5(std::shared_ptr<java::lang::Class> cl)
{
	
	//    .param p0, "cl"    # Ljava/lang/Class;
	return java::io::ObjectStreamClass::getSerializableConstructor(cl);

}
// .method static synthetic -wrap6(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/reflect/Method;
std::shared_ptr<java::lang::reflect::Method> java::io::ObjectStreamClass::_wrap6(std::shared_ptr<java::lang::Class> cl,std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::Class>> argTypes,std::shared_ptr<java::lang::Class> returnType)
{
	
	//    .param p0, "cl"    # Ljava/lang/Class;
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "argTypes"    # [Ljava/lang/Class;
	//    .param p3, "returnType"    # Ljava/lang/Class;
	return java::io::ObjectStreamClass::getInheritableMethod(cl, name, argTypes, returnType);

}
// .method static synthetic -wrap7(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/reflect/Method;
std::shared_ptr<java::lang::reflect::Method> java::io::ObjectStreamClass::_wrap7(std::shared_ptr<java::lang::Class> cl,std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::Class>> argTypes,std::shared_ptr<java::lang::Class> returnType)
{
	
	//    .param p0, "cl"    # Ljava/lang/Class;
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "argTypes"    # [Ljava/lang/Class;
	//    .param p3, "returnType"    # Ljava/lang/Class;
	return java::io::ObjectStreamClass::getPrivateMethod(cl, name, argTypes, returnType);

}
// .method static synthetic -wrap8(Ljava/lang/Class;)J
long long java::io::ObjectStreamClass::_wrap8(std::shared_ptr<java::lang::Class> cl)
{
	
	//    .param p0, "cl"    # Ljava/lang/Class;
	return java::io::ObjectStreamClass::computeDefaultSUID(cl);

}
// .method static synthetic -wrap9(Ljava/io/ObjectStreamClass;)V
void java::io::ObjectStreamClass::_wrap9(std::shared_ptr<java::io::ObjectStreamClass> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectStreamClass;
	_this->computeFieldOffsets();
	return;

}
// .method static constructor <clinit>()V
void java::io::ObjectStreamClass::static_cinit()
{
	
	java::io::ObjectStreamClass::NO_FIELDS = std::make_shared<std::vector<std::vector<java::io::ObjectStreamField>>>(0x0);
	java::io::ObjectStreamClass::serialPersistentFields = java::io::ObjectStreamClass::NO_FIELDS;
	return;

}
// .method constructor <init>()V
java::io::ObjectStreamClass::ObjectStreamClass()
{
	
	// 416    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hasBlockExternalData = 0x1;
	return;

}
// .method private constructor <init>(Ljava/lang/Class;)V
java::io::ObjectStreamClass::ObjectStreamClass(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	std::shared_ptr<java::io::ObjectStreamClass> cVar1;
	std::shared_ptr<java::lang::Class> superCl;
	std::shared_ptr<java::io::ObjectStreamClass_S_2> cVar2;
	std::shared_ptr<java::lang::InternalError> cVar5;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> cVar3;
	int i;
	std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> cVar4;
	std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> cVar6;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 430        value = {
	// 431            "(",
	// 432            "Ljava/lang/Class",
	// 433            "<*>;)V"
	// 434        }
	// 435    .end annotation
	//    .local p1, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar1 = 0x0;
	// 442    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hasBlockExternalData = 0x1;
	this->cl = cl;
	this->name = cl->getName();
	this->isProxy = java::lang::reflect::Proxy::isProxyClass(cl);
	this->isEnum = java::lang::Enum()->isAssignableFrom(cl);
	this->serializable = java::io::Serializable()->isAssignableFrom(cl);
	this->externalizable = java::io::Externalizable()->isAssignableFrom(cl);
	superCl = cl->getSuperclass();
	//    .local v2, "superCl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(superCl) )  
		goto label_cond_38;
	cVar1 = java::io::ObjectStreamClass::lookup(superCl, 0x0);
label_cond_38:
	this->superDesc = cVar1;
	this->localDesc = this;
	if ( !(this->serializable) )  
		goto label_cond_83;
	cVar2 = std::make_shared<java::io::ObjectStreamClass_S_2>(this, cl);
	java::security::AccessController::doPrivileged(cVar2);
label_goto_48:
	try {
	//label_try_start_48:
	this->fieldRefl = java::io::ObjectStreamClass::getReflector(this->fields, this);
	//label_try_end_50:
	}
	catch (java::io::InvalidClassException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_90;
	}
	//    .catch Ljava/io/InvalidClassException; {:try_start_48 .. :try_end_50} :catch_90
	if ( this->deserializeEx )     
		goto label_cond_64;
	if ( !(this->isEnum) )  
		goto label_cond_97;
	cVar3 = std::make_shared<java::io::ObjectStreamClass_S_ExceptionInfo>(this->name, std::make_shared<java::lang::String>(std::make_shared<char[]>("enum type")));
	this->deserializeEx = cVar3;
label_cond_64:
label_goto_64:
	i = 0x0;
	//    .local v1, "i":I
label_goto_65:
	if ( i >= this->fields->size() )
		goto label_cond_a8;
	if ( this->fields[i]->getField() )     
		goto label_cond_80;
	cVar4 = std::make_shared<java::io::ObjectStreamClass_S_ExceptionInfo>(this->name, std::make_shared<java::lang::String>(std::make_shared<char[]>("unmatched serializable field(s) declared")));
	this->defaultSerializeEx = cVar4;
label_cond_80:
	i = ( i + 0x1);
	goto label_goto_65;
	// 603    .line 501
	// 604    .end local v1    # "i":I
label_cond_83:
	this->suid = java::lang::Long::valueOf(0x0);
	this->fields = java::io::ObjectStreamClass::NO_FIELDS;
	goto label_goto_48;
	// 621    .line 507
label_catch_90:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/io/InvalidClassException;
	cVar5 = std::make_shared<java::lang::InternalError>(getCatchExcetionFromList);
	// throw
	throw cVar5;
	// 633    .line 515
	// 634    .end local v0    # "ex":Ljava/io/InvalidClassException;
label_cond_97:
	if ( this->cons )     
		goto label_cond_64;
	cVar6 = std::make_shared<java::io::ObjectStreamClass_S_ExceptionInfo>(this->name, std::make_shared<java::lang::String>(std::make_shared<char[]>("no valid constructor")));
	this->deserializeEx = cVar6;
	goto label_goto_64;
	// 653    .line 525
	// 654    .restart local v1    # "i":I
label_cond_a8:
	return;

}
// .method private static classNamesEqual(Ljava/lang/String;Ljava/lang/String;)Z
bool java::io::ObjectStreamClass::classNamesEqual(std::shared_ptr<java::lang::String> name1,std::shared_ptr<java::lang::String> name2)
{
	
	int cVar0;
	
	//    .param p0, "name1"    # Ljava/lang/String;
	//    .param p1, "name2"    # Ljava/lang/String;
	cVar0 = 0x2e;
	return name1->substring(( name1->lastIndexOf(cVar0) + 0x1))->equals(name2->substring(( name2->lastIndexOf(cVar0) + 0x1)));

}
// .method private static computeDefaultSUID(Ljava/lang/Class;)J
long long java::io::ObjectStreamClass::computeDefaultSUID(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	std::shared_ptr<java::lang::InternalError> cVar7;
	std::shared_ptr<java::lang::SecurityException> cVar6;
	std::shared_ptr<java::io::ByteArrayOutputStream> bout;
	std::shared_ptr<java::io::DataOutputStream> dout;
	int classMods;
	auto methods;
	auto interfaces;
	std::shared_ptr<std::vector<java::lang::Object>> ifaceNames;
	int i;
	auto fields;
	std::shared<std::vector<std::vector<java::io::ObjectStreamClass_S_MemberSignature>>> fieldSigs;
	std::shared_ptr<java::io::ObjectStreamClass_S_MemberSignature> cVar0;
	std::shared_ptr<java::io::ObjectStreamClass_S_3> cVar1;
	auto sig;
	int mods;
	auto cons;
	std::shared<std::vector<std::vector<java::io::ObjectStreamClass_S_MemberSignature>>> consSigs;
	std::shared_ptr<java::io::ObjectStreamClass_S_MemberSignature> cVar2;
	std::shared_ptr<java::io::ObjectStreamClass_S_4> cVar3;
	auto methSigs;
	std::shared_ptr<java::io::ObjectStreamClass_S_MemberSignature> cVar4;
	std::shared_ptr<java::io::ObjectStreamClass_S_5> cVar5;
	auto hashBytes;
	long long hash;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 700        value = {
	// 701            "(",
	// 702            "Ljava/lang/Class",
	// 703            "<*>;)J"
	// 704        }
	// 705    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(java::io::Serializable()->isAssignableFrom(cl)) )  
		goto label_cond_12;
	if ( !(java::lang::reflect::Proxy::isProxyClass(cl)) )  
		goto label_cond_15;
label_cond_12:
	return 0x0;
	// 734    .line 1671
label_cond_15:
	try {
	//label_try_start_15:
	bout = std::make_shared<java::io::ByteArrayOutputStream>();
	//    .local v2, "bout":Ljava/io/ByteArrayOutputStream;
	dout = std::make_shared<java::io::DataOutputStream>(bout);
	//    .local v7, "dout":Ljava/io/DataOutputStream;
	dout->writeUTF(cl->getName());
	classMods = ( cl->getModifiers() & 0x611);
	//    .local v4, "classMods":I
	methods = cl->getDeclaredMethods();
	//    .local v20, "methods":[Ljava/lang/reflect/Method;
	if ( !(( classMods & 0x200)) )  
		goto label_cond_43;
	if ( methods->size() <= 0 )
		goto label_cond_70;
	classMods = ( classMods | 0x400);
label_cond_43:
label_goto_43:
	dout->writeInt(classMods);
	if ( cl->isArray() )     
		goto label_cond_8a;
	interfaces = cl->getInterfaces();
	//    .local v17, "interfaces":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	ifaceNames = std::make_shared<std::vector<std::vector<java::lang::String>>>(interfaces->size());
	//    .local v16, "ifaceNames":[Ljava/lang/String;
	i = 0x0;
	//    .local v15, "i":I
label_goto_5c:
	if ( i >= interfaces->size() )
		goto label_cond_73;
	ifaceNames[i] = interfaces[i]->getName();
	i = ( i + 0x1);
	goto label_goto_5c;
	// 853    .line 1688
	// 854    .end local v15    # "i":I
	// 855    .end local v16    # "ifaceNames":[Ljava/lang/String;
	// 856    .end local v17    # "interfaces":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
label_cond_70:
	classMods = ( classMods & -0x401);
	goto label_goto_43;
	// 862    .line 1703
	// 863    .restart local v15    # "i":I
	// 864    .restart local v16    # "ifaceNames":[Ljava/lang/String;
	// 865    .restart local v17    # "interfaces":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
label_cond_73:
	java::util::Arrays::sort(ifaceNames);
	i = 0x0;
label_goto_77:
	if ( i >= ifaceNames->size() )
		goto label_cond_8a;
	dout->writeUTF(ifaceNames[i]);
	i = ( i + 0x1);
	goto label_goto_77;
	// 895    .line 1709
	// 896    .end local v15    # "i":I
	// 897    .end local v16    # "ifaceNames":[Ljava/lang/String;
	// 898    .end local v17    # "interfaces":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
label_cond_8a:
	fields = cl->getDeclaredFields();
	//    .local v11, "fields":[Ljava/lang/reflect/Field;
	fieldSigs = std::make_shared<std::vector<std::vector<java::io::ObjectStreamClass_S_MemberSignature>>>(fields->size());
	//    .local v10, "fieldSigs":[Ljava/io/ObjectStreamClass$MemberSignature;
	i = 0x0;
	//    .restart local v15    # "i":I
label_goto_96:
	if ( i >= fields->size() )
		goto label_cond_a9;
	cVar0 = std::make_shared<java::io::ObjectStreamClass_S_MemberSignature>(fields[i]);
	fieldSigs[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_96;
	// 942    .line 1714
label_cond_a9:
	cVar1 = std::make_shared<java::io::ObjectStreamClass_S_3>();
	java::util::Arrays::sort(fieldSigs, cVar1);
	i = 0x0;
label_goto_b4:
	if ( i >= fieldSigs->size() )
		goto label_cond_f7;
	sig = fieldSigs[i];
	//    .local v22, "sig":Ljava/io/ObjectStreamClass$MemberSignature;
	mods = ( sig->member->getModifiers() & 0xdf);
	//    .local v21, "mods":I
	if ( !(( mods & 0x2)) )  
		goto label_cond_d9;
	if ( ( mods & 0x88) )     
		goto label_cond_f4;
label_cond_d9:
	dout->writeUTF(sig->name);
	dout->writeInt(mods);
	dout->writeUTF(sig->signature);
label_cond_f4:
	i = ( i + 0x1);
	goto label_goto_b4;
	// 1034    .line 1734
	// 1035    .end local v21    # "mods":I
	// 1036    .end local v22    # "sig":Ljava/io/ObjectStreamClass$MemberSignature;
label_cond_f7:
	if ( dalvik::system::VMRuntime::getRuntime({const[class].FS-Param})->getTargetSdkVersion() <= 0x17 )
		goto label_cond_146;
	//    .local v3, "checkSuperclass":Z
label_goto_108:
	if ( !(java::io::ObjectStreamClass::hasStaticInitializer(cl, checkSuperclass)) )  
		goto label_cond_127;
	dout->writeUTF(std::make_shared<java::lang::String>(std::make_shared<char[]>("<clinit>")));
	dout->writeInt(0x8);
	dout->writeUTF(std::make_shared<java::lang::String>(std::make_shared<char[]>("()V")));
label_cond_127:
	cons = cl->getDeclaredConstructors();
	//    .local v5, "cons":[Ljava/lang/reflect/Constructor;, "[Ljava/lang/reflect/Constructor<*>;"
	consSigs = std::make_shared<std::vector<std::vector<java::io::ObjectStreamClass_S_MemberSignature>>>(cons->size());
	//    .local v6, "consSigs":[Ljava/io/ObjectStreamClass$MemberSignature;
	i = 0x0;
label_goto_133:
	if ( i >= cons->size() )
		goto label_cond_148;
	cVar2 = std::make_shared<java::io::ObjectStreamClass_S_MemberSignature>(cons[i]);
	consSigs[i] = cVar2;
	i = ( i + 0x1);
	goto label_goto_133;
	// 1133    .line 1734
	// 1134    .end local v3    # "checkSuperclass":Z
	// 1135    .end local v5    # "cons":[Ljava/lang/reflect/Constructor;, "[Ljava/lang/reflect/Constructor<*>;"
	// 1136    .end local v6    # "consSigs":[Ljava/io/ObjectStreamClass$MemberSignature;
label_cond_146:
	//    .restart local v3    # "checkSuperclass":Z
	goto label_goto_108;
	// 1143    .line 1747
	// 1144    .restart local v5    # "cons":[Ljava/lang/reflect/Constructor;, "[Ljava/lang/reflect/Constructor<*>;"
	// 1145    .restart local v6    # "consSigs":[Ljava/io/ObjectStreamClass$MemberSignature;
label_cond_148:
	cVar3 = std::make_shared<java::io::ObjectStreamClass_S_4>();
	java::util::Arrays::sort(consSigs, cVar3);
	i = 0x0;
label_goto_153:
	if ( i >= consSigs->size() )
		goto label_cond_193;
	sig = consSigs[i];
	//    .restart local v22    # "sig":Ljava/io/ObjectStreamClass$MemberSignature;
	mods = ( sig->member->getModifiers() & 0xd3f);
	//    .restart local v21    # "mods":I
	if ( ( mods & 0x2) )     
		goto label_cond_190;
	dout = std::make_shared<java::io::DataOutputStream>")));
	dout->writeInt(mods);
	dout->writeUTF(sig->signature->replace(0x2f, 0x2e));
label_cond_190:
	i = ( i + 0x1);
	goto label_goto_153;
	// 1231    .line 1766
	// 1232    .end local v21    # "mods":I
	// 1233    .end local v22    # "sig":Ljava/io/ObjectStreamClass$MemberSignature;
label_cond_193:
	methSigs = std::make_shared<std::vector<std::vector<java::io::ObjectStreamClass_S_MemberSignature>>>(methods->size());
	//    .local v19, "methSigs":[Ljava/io/ObjectStreamClass$MemberSignature;
	i = 0x0;
label_goto_19f:
	if ( i >= methods->size() )
		goto label_cond_1b4;
	cVar4 = std::make_shared<java::io::ObjectStreamClass_S_MemberSignature>(methods[i]);
	methSigs[i] = cVar4;
	i = ( i + 0x1);
	goto label_goto_19f;
	// 1276    .line 1770
label_cond_1b4:
	cVar5 = std::make_shared<java::io::ObjectStreamClass_S_5>();
	java::util::Arrays::sort(methSigs, cVar5);
	i = 0x0;
label_goto_1c1:
	if ( i >= methSigs->size() )
		goto label_cond_206;
	sig = methSigs[i];
	//    .restart local v22    # "sig":Ljava/io/ObjectStreamClass$MemberSignature;
	mods = ( sig->member->getModifiers() & 0xd3f);
	//    .restart local v21    # "mods":I
	if ( ( mods & 0x2) )     
		goto label_cond_203;
	dout->writeUTF(sig->name);
	dout->writeInt(mods);
	dout->writeUTF(sig->signature->replace(0x2f, 0x2e));
label_cond_203:
	i = ( i + 0x1);
	goto label_goto_1c1;
	// 1370    .line 1793
	// 1371    .end local v21    # "mods":I
	// 1372    .end local v22    # "sig":Ljava/io/ObjectStreamClass$MemberSignature;
label_cond_206:
	dout->flush();
	//    .local v18, "md":Ljava/security/MessageDigest;
	hashBytes = java::security::MessageDigest::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA")))->digest(bout->toByteArray());
	//    .local v14, "hashBytes":[B
	hash = 0x0;
	//    .local v12, "hash":J
	i = ( java::lang::Math::min(hashBytes->size(), 0x8) + -0x1);
label_goto_229:
	if ( i < 0 ) 
		goto label_cond_241;
	//label_try_end_231:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24d;
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_242;
	}
	//    .catch Ljava/io/IOException; {:try_start_15 .. :try_end_231} :catch_24d
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_15 .. :try_end_231} :catch_242
	hash = ((hash << 0x8) | (long long)(( hashBytes[i] & 0xff)));
	i = ( i + -0x1);
	goto label_goto_229;
	// 1447    .line 1801
label_cond_241:
	return hash;
	// 1451    .line 1804
	// 1452    .end local v2    # "bout":Ljava/io/ByteArrayOutputStream;
	// 1453    .end local v3    # "checkSuperclass":Z
	// 1454    .end local v4    # "classMods":I
	// 1455    .end local v5    # "cons":[Ljava/lang/reflect/Constructor;, "[Ljava/lang/reflect/Constructor<*>;"
	// 1456    .end local v6    # "consSigs":[Ljava/io/ObjectStreamClass$MemberSignature;
	// 1457    .end local v7    # "dout":Ljava/io/DataOutputStream;
	// 1458    .end local v10    # "fieldSigs":[Ljava/io/ObjectStreamClass$MemberSignature;
	// 1459    .end local v11    # "fields":[Ljava/lang/reflect/Field;
	// 1460    .end local v12    # "hash":J
	// 1461    .end local v14    # "hashBytes":[B
	// 1462    .end local v15    # "i":I
	// 1463    .end local v18    # "md":Ljava/security/MessageDigest;
	// 1464    .end local v19    # "methSigs":[Ljava/io/ObjectStreamClass$MemberSignature;
	// 1465    .end local v20    # "methods":[Ljava/lang/reflect/Method;
label_catch_242:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v9, "ex":Ljava/security/NoSuchAlgorithmException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar6 = std::make_shared<java::lang::SecurityException>(getCatchExcetionFromList->getMessage());
	// throw
	throw cVar6;
	// 1481    .line 1802
	// 1482    .end local v9    # "ex":Ljava/security/NoSuchAlgorithmException;
label_catch_24d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v8, "ex":Ljava/io/IOException;
	var263 = cVar7(getCatchExcetionFromList);
	// throw
	throw cVar7;

}
// .method private computeFieldOffsets()V
void java::io::ObjectStreamClass::computeFieldOffsets()
{
	
	int cVar0;
	int cVar1;
	int firstObjIndex;
	int i;
	std::shared_ptr<java::io::ObjectStreamField> f;
	std::shared_ptr<java::lang::InternalError> cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<java::io::InvalidClassException> cVar5;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1500        value = {
	// 1501            Ljava/io/InvalidClassException;
	// 1502        }
	// 1503    .end annotation
	cVar0 = 0x0;
	cVar1 = -0x1;
	this->primDataSize = cVar0;
	this->numObjFields = cVar0;
	firstObjIndex = -0x1;
	//    .local v1, "firstObjIndex":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_8:
	if ( i >= this->fields->size() )
		goto label_cond_5b;
	f = this->fields[i];
	//    .local v0, "f":Ljava/io/ObjectStreamField;
	// switch
	{
	auto item = ( f->getTypeCode() );
	if (item == 0x42) goto label_sswitch_1e;
	if (item == 0x43) goto label_sswitch_2a;
	if (item == 0x44) goto label_sswitch_42;
	if (item == 0x46) goto label_sswitch_36;
	if (item == 0x49) goto label_sswitch_36;
	if (item == 0x4a) goto label_sswitch_42;
	if (item == 0x4c) goto label_sswitch_4e;
	if (item == 0x53) goto label_sswitch_2a;
	if (item == 0x5a) goto label_sswitch_1e;
	if (item == 0x5b) goto label_sswitch_4e;
	}
	cVar2 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar2;
	// 1551    .line 1268
label_sswitch_1e:
	cVar3 = this->primDataSize;
	this->primDataSize = ( cVar3 + 0x1);
	f->setOffset(cVar3);
label_cond_27:
label_goto_27:
	i = ( i + 0x1);
	goto label_goto_8;
	// 1568    .line 1273
label_sswitch_2a:
	f->setOffset(this->primDataSize);
	this->primDataSize = ( this->primDataSize + 0x2);
	goto label_goto_27;
	// 1583    .line 1279
label_sswitch_36:
	f->setOffset(this->primDataSize);
	this->primDataSize = ( this->primDataSize + 0x4);
	goto label_goto_27;
	// 1598    .line 1285
label_sswitch_42:
	f->setOffset(this->primDataSize);
	this->primDataSize = ( this->primDataSize + 0x8);
	goto label_goto_27;
	// 1613    .line 1291
label_sswitch_4e:
	cVar4 = this->numObjFields;
	this->numObjFields = ( cVar4 + 0x1);
	f->setOffset(cVar4);
	if ( firstObjIndex != cVar1 )
		goto label_cond_27;
	firstObjIndex = i;
	goto label_goto_27;
	// 1631    .line 1301
	// 1632    .end local v0    # "f":Ljava/io/ObjectStreamField;
label_cond_5b:
	if ( firstObjIndex == cVar1 )
		goto label_cond_70;
	if ( (this->numObjFields +  firstObjIndex) == this->fields->size() )
		goto label_cond_70;
	cVar5 = std::make_shared<java::io::InvalidClassException>(this->name, std::make_shared<java::lang::String>(std::make_shared<char[]>("illegal field order")));
	// throw
	throw cVar5;
	// 1658    .line 1306
label_cond_70:
	return;
	// 1662    .line 1265
	// 1663    nop
	// 1665    :sswitch_data_72
	// 1666    .sparse-switch
	// 1667        0x42 -> :sswitch_1e
	// 1668        0x43 -> :sswitch_2a
	// 1669        0x44 -> :sswitch_42
	// 1670        0x46 -> :sswitch_36
	// 1671        0x49 -> :sswitch_36
	// 1672        0x4a -> :sswitch_42
	// 1673        0x4c -> :sswitch_4e
	// 1674        0x53 -> :sswitch_2a
	// 1675        0x5a -> :sswitch_1e
	// 1676        0x5b -> :sswitch_4e
	// 1677    .end sparse-switch

}
// .method private getClassDataLayout0()[Ljava/io/ObjectStreamClass$ClassDataSlot;
std::shared_ptr<java::io::ObjectStreamClass_S_ClassDataSlot> java::io::ObjectStreamClass::getClassDataLayout0()
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<java::util::ArrayList> slots;
	std::shared_ptr<java::lang::Class> start;
	std::shared_ptr<java::lang::Class> end;
	std::shared_ptr<java::util::HashSet> oscNames;
	std::shared_ptr<java::lang::String> d;
	std::shared_ptr<java::io::InvalidClassException> cVar2;
	std::shared_ptr<java::lang::Class> match;
	std::shared_ptr<java::lang::Class> c;
	std::shared_ptr<java::io::ObjectStreamClass_S_ClassDataSlot> cVar3;
	auto start;
	std::shared_ptr<java::io::ObjectStreamClass_S_ClassDataSlot> cVar4;
	std::shared_ptr<java::io::ObjectStreamClass> d;
	std::shared_ptr<java::io::ObjectStreamClass_S_ClassDataSlot> cVar5;
	std::shared_ptr<std::vector<java::io::ObjectStreamClass_S_ClassDataSlot>> cVar6;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1683        value = {
	// 1684            Ljava/io/InvalidClassException;
	// 1685        }
	// 1686    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x1;
	slots = std::make_shared<java::util::ArrayList>();
	//    .local v6, "slots":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/io/ObjectStreamClass$ClassDataSlot;>;"
	start = this->cl;
	//    .local v7, "start":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	end = this->cl;
	//    .local v2, "end":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_b:
	if ( !(end) )  
		goto label_cond_1a;
	if ( !(java::io::Serializable()->isAssignableFrom(end)) )  
		goto label_cond_1a;
	end = end->getSuperclass();
	goto label_goto_b;
	// 1725    .line 1156
label_cond_1a:
	oscNames = std::make_shared<java::util::HashSet>(0x3);
	//    .local v4, "oscNames":Ljava/util/HashSet;, "Ljava/util/HashSet<Ljava/lang/String;>;"
	d = this;
	//    .local v1, "d":Ljava/io/ObjectStreamClass;
label_goto_21:
	if ( !(d) )  
		goto label_cond_83;
	if ( !(oscNames->contains(d->name)) )  
		goto label_cond_34;
	cVar2 = std::make_shared<java::io::InvalidClassException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Circular reference.")));
	// throw
	throw cVar2;
	// 1759    .line 1162
label_cond_34:
	oscNames->add(d->name);
	if ( !(d->cl) )  
		goto label_cond_68;
	//    .local v5, "searchName":Ljava/lang/String;
label_goto_43:
	match = 0x0;
	//    .local v3, "match":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	c = start;
	//    .local v0, "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_45:
	if ( c == end )
		goto label_cond_52;
	if ( !(d->cl->getName()->equals(c->getName())) )  
		goto label_cond_6b;
	match = c;
	//    .end local v3    # "match":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_52:
	if ( !(match) )  
		goto label_cond_74;
	c = start;
label_goto_55:
	if ( c == match )
		goto label_cond_70;
	cVar3 = std::make_shared<java::io::ObjectStreamClass_S_ClassDataSlot>(java::io::ObjectStreamClass::lookup(c, cVar1), cVar0);
	slots->add(cVar3);
	c = c->getSuperclass();
	goto label_goto_55;
	// 1834    .line 1166
	// 1835    .end local v0    # "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 1836    .end local v5    # "searchName":Ljava/lang/String;
label_cond_68:
	d->name;
	//    .restart local v5    # "searchName":Ljava/lang/String;
	goto label_goto_43;
	// 1843    .line 1168
	// 1844    .restart local v0    # "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 1845    .restart local v3    # "match":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_6b:
	c = c->getSuperclass();
	goto label_goto_45;
	// 1853    .line 1181
	// 1854    .end local v3    # "match":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_70:
	start = match->getSuperclass();
label_cond_74:
	cVar4 = std::make_shared<java::io::ObjectStreamClass_S_ClassDataSlot>(d->getVariantFor(match), cVar1);
	slots->add(cVar4);
	d = d->superDesc;
	goto label_goto_21;
	// 1877    .line 1189
	// 1878    .end local v0    # "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 1879    .end local v5    # "searchName":Ljava/lang/String;
label_cond_83:
	c = start;
	//    .restart local v0    # "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_84:
	if ( c == end )
		goto label_cond_97;
	cVar5 = std::make_shared<java::io::ObjectStreamClass_S_ClassDataSlot>(java::io::ObjectStreamClass::lookup(c, cVar1), cVar0);
	slots->add(cVar5);
	c = c->getSuperclass();
	goto label_goto_84;
	// 1907    .line 1195
label_cond_97:
	java::util::Collections::reverse(slots);
	cVar6 = slots->toArray(std::make_shared<std::vector<std::vector<java::io::ObjectStreamClass_S_ClassDataSlot>>>(slots->size()));
	cVar6->checkCast("std::vector<java::io::ObjectStreamClass_S_ClassDataSlot>");
	return cVar6;

}
// .method private static getClassSignature(Ljava/lang/Class;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectStreamClass::getClassSignature(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	std::shared_ptr<java::lang::StringBuilder> sbuf;
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<java::lang::InternalError> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1930        value = {
	// 1931            "(",
	// 1932            "Ljava/lang/Class",
	// 1933            "<*>;)",
	// 1934            "Ljava/lang/String;"
	// 1935        }
	// 1936    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	sbuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sbuf":Ljava/lang/StringBuilder;
label_goto_5:
	if ( !(cl->isArray()) )  
		goto label_cond_15;
	sbuf->append(0x5b);
	cl = cl->getComponentType();
	goto label_goto_5;
	// 1966    .line 1474
label_cond_15:
	if ( !(cl->isPrimitive()) )  
		goto label_cond_7f;
	if ( cl != java::lang::Integer::TYPE )
		goto label_cond_29;
	sbuf->append(0x49);
label_goto_24:
	return sbuf->toString();
	// 1992    .line 1477
label_cond_29:
	if ( cl != java::lang::Byte::TYPE )
		goto label_cond_33;
	sbuf->append(0x42);
	goto label_goto_24;
	// 2005    .line 1479
label_cond_33:
	if ( cl != java::lang::Long::TYPE )
		goto label_cond_3d;
	sbuf->append(0x4a);
	goto label_goto_24;
	// 2018    .line 1481
label_cond_3d:
	if ( cl != java::lang::Float::TYPE )
		goto label_cond_47;
	sbuf->append(0x46);
	goto label_goto_24;
	// 2031    .line 1483
label_cond_47:
	if ( cl != java::lang::Double::TYPE )
		goto label_cond_51;
	sbuf->append(0x44);
	goto label_goto_24;
	// 2044    .line 1485
label_cond_51:
	if ( cl != java::lang::Short::TYPE )
		goto label_cond_5b;
	sbuf->append(0x53);
	goto label_goto_24;
	// 2057    .line 1487
label_cond_5b:
	if ( cl != java::lang::Character::TYPE )
		goto label_cond_65;
	sbuf->append(0x43);
	goto label_goto_24;
	// 2070    .line 1489
label_cond_65:
	if ( cl != java::lang::Boolean::TYPE )
		goto label_cond_6f;
	sbuf->append(0x5a);
	goto label_goto_24;
	// 2083    .line 1491
label_cond_6f:
	if ( cl != java::lang::Void::TYPE )
		goto label_cond_79;
	sbuf->append(0x56);
	goto label_goto_24;
	// 2096    .line 1494
label_cond_79:
	cVar0 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar0;
	// 2104    .line 1497
label_cond_7f:
	sbuf->append(0x4c)->append(cl->getName()->replace(0x2e, 0x2f))->append(0x3b);
	goto label_goto_24;

}
// .method private static getConstructorId(Ljava/lang/Class;)J
long long java::io::ObjectStreamClass::getConstructorId(std::shared_ptr<java::lang::Class<java::lang::Object>> clazz)
{
	
	int targetSdkVersion;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2138        value = {
	// 2139            "(",
	// 2140            "Ljava/lang/Class",
	// 2141            "<*>;)J"
	// 2142        }
	// 2143    .end annotation
	//    .local p0, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	targetSdkVersion = dalvik::system::VMRuntime::getRuntime({const[class].FS-Param})->getTargetSdkVersion();
	//    .local v0, "targetSdkVersion":I
	if ( targetSdkVersion <= 0 )
		goto label_cond_1a;
	if ( targetSdkVersion >  0x18 )
		goto label_cond_1a;
	java::lang::System::logE(std::make_shared<java::lang::String>(std::make_shared<char[]>("WARNING: ObjectStreamClass.getConstructorId(Class<?>) is private API andwill be removed in a future Android release.")));
	return 0x1083b99f34b59645L;
	// 2174    .line 2294
label_cond_1a:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectStreamClass.getConstructorId(Class<?>) is not supported on SDK ")))->append(targetSdkVersion)->toString());
	// throw
	throw cVar0;

}
// .method private static getDeclaredSUID(Ljava/lang/Class;)Ljava/lang/Long;
std::shared_ptr<java::lang::Long> java::io::ObjectStreamClass::getDeclaredSUID(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	std::shared_ptr<java::lang::reflect::Field> f;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2204        value = {
	// 2205            "(",
	// 2206            "Ljava/lang/Class",
	// 2207            "<*>;)",
	// 2208            "Ljava/lang/Long;"
	// 2209        }
	// 2210    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	try {
	//label_try_start_1:
	f = cl->getDeclaredField(std::make_shared<java::lang::String>(std::make_shared<char[]>("serialVersionUID")));
	//    .local v1, "f":Ljava/lang/reflect/Field;
	0x18;
	//    .local v2, "mask":I
	if ( ( f->getModifiers() & 0x18) != 0x18 )
		goto label_cond_23;
	f->setAccessible(0x1);
	//label_try_end_20:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_22;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_20} :catch_22
	return java::lang::Long::valueOf(f->getLong(0x0));
	// 2262    .line 1656
	// 2263    .end local v1    # "f":Ljava/lang/reflect/Field;
	// 2264    .end local v2    # "mask":I
label_catch_22:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_23:
	return 0x0;

}
// .method private static getDeclaredSerialFields(Ljava/lang/Class;)[Ljava/io/ObjectStreamField;
std::shared_ptr<java::io::ObjectStreamField> java::io::ObjectStreamClass::getDeclaredSerialFields(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	int serialPersistentFields;
	std::shared<std::vector<std::vector<java::io::ObjectStreamField>>> boundFields;
	std::shared_ptr<java::util::HashSet> fieldNames;
	int i;
	std::shared_ptr<java::io::ObjectStreamField> spf;
	std::shared_ptr<java::lang::Object> fname;
	std::shared_ptr<java::io::InvalidClassException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::io::ObjectStreamField> cVar4;
	std::shared_ptr<java::lang::reflect::Field> f;
	std::shared_ptr<java::io::ObjectStreamField> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<std::vector<java::io::ObjectStreamField>> cVar0;
	auto serialPersistentFields;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2276        value = {
	// 2277            "(",
	// 2278            "Ljava/lang/Class",
	// 2279            "<*>;)[",
	// 2280            "Ljava/io/ObjectStreamField;"
	// 2281        }
	// 2282    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 2285        value = {
	// 2286            Ljava/io/InvalidClassException;
	// 2287        }
	// 2288    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	serialPersistentFields = 0x0;
	//    .local v9, "serialPersistentFields":[Ljava/io/ObjectStreamField;
	try {
	//label_try_start_2:
	f = cl->getDeclaredField(std::make_shared<java::lang::String>(std::make_shared<char[]>("serialPersistentFields")));
	//    .local v4, "f":Ljava/lang/reflect/Field;
	0x1a;
	//    .local v8, "mask":I
	if ( ( f->getModifiers() & 0x1a) != 0x1a )
		goto label_cond_22;
	f->setAccessible(0x1);
	cVar0 = f->get(0x0);
	cVar0->checkCast("std::vector<java::io::ObjectStreamField>");
	serialPersistentFields = cVar0;
	//label_try_end_22:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9c;
	}
	//    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_22} :catch_9c
	//    .end local v4    # "f":Ljava/lang/reflect/Field;
	//    .end local v8    # "mask":I
	//    .end local v9    # "serialPersistentFields":[Ljava/io/ObjectStreamField;
label_cond_22:
label_goto_22:
	if ( serialPersistentFields )     
		goto label_cond_25;
	return 0x0;
	// 2355    .line 1587
label_cond_25:
	if ( serialPersistentFields->size() )     
		goto label_cond_2b;
	return java::io::ObjectStreamClass::NO_FIELDS;
	// 2366    .line 1592
label_cond_2b:
	boundFields = std::make_shared<std::vector<std::vector<java::io::ObjectStreamField>>>(serialPersistentFields->size());
	//    .local v1, "boundFields":[Ljava/io/ObjectStreamField;
	fieldNames = std::make_shared<java::util::HashSet>(serialPersistentFields->size());
	//    .local v5, "fieldNames":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	i = 0x0;
	//    .local v7, "i":I
label_goto_35:
	if ( i >= serialPersistentFields->size() )
		goto label_cond_99;
	spf = serialPersistentFields[i];
	//    .local v10, "spf":Ljava/io/ObjectStreamField;
	fname = spf->getName();
	//    .local v6, "fname":Ljava/lang/String;
	if ( !(fieldNames->contains(fname)) )  
		goto label_cond_5e;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::InvalidClassException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("multiple serializable fields named ")))->append(fname)->toString());
	// throw
	throw cVar1;
	// 2434    .line 1603
label_cond_5e:
	fieldNames->add(fname);
	try {
	//label_try_start_61:
	f = cl->getDeclaredField(fname);
	//    .restart local v4    # "f":Ljava/lang/reflect/Field;
	if ( f->getType() != spf->getType() )
		goto label_cond_83;
	if ( ( f->getModifiers() & 0x8) )     
		goto label_cond_83;
	cVar3 = std::make_shared<java::io::ObjectStreamField>(f, spf->isUnshared(), 0x1);
	boundFields[i] = cVar3;
	//label_try_end_83:
	}
	catch (java::lang::NoSuchFieldException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	//    .catch Ljava/lang/NoSuchFieldException; {:try_start_61 .. :try_end_83} :catch_9a
	//    .end local v4    # "f":Ljava/lang/reflect/Field;
label_cond_83:
label_goto_83:
	if ( boundFields[i] )     
		goto label_cond_96;
	cVar4 = std::make_shared<java::io::ObjectStreamField>(fname, spf->getType(), spf->isUnshared());
	boundFields[i] = cVar4;
label_cond_96:
	i = ( i + 0x1);
	goto label_goto_35;
	// 2512    .line 1620
	// 2513    .end local v6    # "fname":Ljava/lang/String;
	// 2514    .end local v10    # "spf":Ljava/io/ObjectStreamField;
label_cond_99:
	return boundFields;
	// 2518    .line 1613
	// 2519    .restart local v6    # "fname":Ljava/lang/String;
	// 2520    .restart local v10    # "spf":Ljava/io/ObjectStreamField;
label_catch_9a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "ex":Ljava/lang/NoSuchFieldException;
	goto label_goto_83;
	// 2527    .line 1583
	// 2528    .end local v1    # "boundFields":[Ljava/io/ObjectStreamField;
	// 2529    .end local v3    # "ex":Ljava/lang/NoSuchFieldException;
	// 2530    .end local v5    # "fieldNames":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2531    .end local v6    # "fname":Ljava/lang/String;
	// 2532    .end local v7    # "i":I
	// 2533    .end local v10    # "spf":Ljava/io/ObjectStreamField;
	// 2534    .restart local v9    # "serialPersistentFields":[Ljava/io/ObjectStreamField;
label_catch_9c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ex":Ljava/lang/Exception;
	goto label_goto_22;

}
// .method private static getDefaultSerialFields(Ljava/lang/Class;)[Ljava/io/ObjectStreamField;
std::shared_ptr<java::io::ObjectStreamField> java::io::ObjectStreamClass::getDefaultSerialFields(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	auto clFields;
	std::shared_ptr<java::util::ArrayList> list;
	int i;
	std::shared_ptr<java::io::ObjectStreamField> cVar0;
	int size;
	std::shared_ptr<std::vector<java::io::ObjectStreamField>> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2545        value = {
	// 2546            "(",
	// 2547            "Ljava/lang/Class",
	// 2548            "<*>;)[",
	// 2549            "Ljava/io/ObjectStreamField;"
	// 2550        }
	// 2551    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	clFields = cl->getDeclaredFields();
	//    .local v0, "clFields":[Ljava/lang/reflect/Field;
	list = std::make_shared<java::util::ArrayList>();
	//    .local v2, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/io/ObjectStreamField;>;"
	0x88;
	//    .local v3, "mask":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_d:
	if ( i >= clFields->size() )
		goto label_cond_28;
	if ( ( clFields[i]->getModifiers() & 0x88) )     
		goto label_cond_25;
	cVar0 = std::make_shared<java::io::ObjectStreamField>(clFields[i], 0x0, 0x1);
	list->add(cVar0);
label_cond_25:
	i = ( i + 0x1);
	goto label_goto_d;
	// 2610    .line 1639
label_cond_28:
	size = list->size();
	//    .local v4, "size":I
	if ( size )     
		goto label_cond_31;
	cVar1 = java::io::ObjectStreamClass::NO_FIELDS;
label_goto_30:
	return cVar1;
	// 2625    .line 1641
label_cond_31:
	cVar1 = list->toArray(std::make_shared<std::vector<std::vector<java::io::ObjectStreamField>>>(size));
	cVar1->checkCast("std::vector<java::io::ObjectStreamField>");
	goto label_goto_30;

}
// .method private static getExternalizableConstructor(Ljava/lang/Class;)Ljava/lang/reflect/Constructor;
std::shared_ptr<java::lang::reflect::Constructor<java::lang::Object>> java::io::ObjectStreamClass::getExternalizableConstructor(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	std::shared_ptr<java::lang::reflect::Constructor> cVar0;
	std::shared_ptr<std::vector<java::lang::Class>> cVar1;
	std::shared_ptr<java::lang::reflect::Constructor> cons;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2641        value = {
	// 2642            "(",
	// 2643            "Ljava/lang/Class",
	// 2644            "<*>;)",
	// 2645            "Ljava/lang/reflect/Constructor",
	// 2646            "<*>;"
	// 2647        }
	// 2648    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = 0x0;
	cVar1 = 0x0;
	try {
	//label_try_start_2:
	cVar1->checkCast("std::vector<java::lang::Class>");
	cons = cl->getDeclaredConstructor(cVar1);
	//    .local v0, "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
	cons->setAccessible(0x1);
	//label_try_end_f:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_17;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_2 .. :try_end_f} :catch_17
	if ( !(( cons->getModifiers() & 0x1)) )  
		goto label_cond_15;
	//    .end local v0    # "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
label_goto_14:
	return cons;
	// 2685    .restart local v0    # "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
label_cond_15:
	cons = cVar0;
	goto label_goto_14;
	// 2692    .line 1339
	// 2693    .end local v0    # "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
label_catch_17:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/lang/NoSuchMethodException;
	return cVar0;

}
// .method private static getInheritableMethod(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/reflect/Method;
std::shared_ptr<java::lang::reflect::Method> java::io::ObjectStreamClass::getInheritableMethod(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::Class<java::lang::Object>>> argTypes,std::shared_ptr<java::lang::Class<java::lang::Object>> returnType)
{
	
	std::shared_ptr<java::lang::reflect::Method> cVar0;
	int meth;
	std::shared_ptr<java::lang::Class> defCl;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::reflect::Method> meth;
	int mods;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2706        value = {
	// 2707            "(",
	// 2708            "Ljava/lang/Class",
	// 2709            "<*>;",
	// 2710            "Ljava/lang/String;",
	// 2711            "[",
	// 2712            "Ljava/lang/Class",
	// 2713            "<*>;",
	// 2714            "Ljava/lang/Class",
	// 2715            "<*>;)",
	// 2716            "Ljava/lang/reflect/Method;"
	// 2717        }
	// 2718    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local p2, "argTypes":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	//    .local p3, "returnType":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = 0x0;
	meth = 0x0;
	//    .local v2, "meth":Ljava/lang/reflect/Method;
	defCl = cl;
	//    .local v0, "defCl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_3:
	if ( !(defCl) )  
		goto label_cond_9;
	try {
	//label_try_start_5:
	//label_try_end_8:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_5 .. :try_end_8} :catch_12
	meth = defCl->getDeclaredMethod(name, argTypes);
	//    .end local v2    # "meth":Ljava/lang/reflect/Method;
label_cond_9:
	if ( !(meth) )  
		goto label_cond_11;
	if ( meth->getReturnType() == returnType )
		goto label_cond_18;
label_cond_11:
	return cVar0;
	// 2761    .line 1391
	// 2762    .restart local v2    # "meth":Ljava/lang/reflect/Method;
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/lang/NoSuchMethodException;
	defCl = defCl->getSuperclass();
	goto label_goto_3;
	// 2774    .line 1399
	// 2775    .end local v1    # "ex":Ljava/lang/NoSuchMethodException;
	// 2776    .end local v2    # "meth":Ljava/lang/reflect/Method;
label_cond_18:
	meth->setAccessible(0x1);
	mods = meth->getModifiers();
	//    .local v3, "mods":I
	if ( !(( mods & 0x408)) )  
		goto label_cond_25;
	return cVar0;
	// 2796    .line 1403
label_cond_25:
	if ( !(( mods & 0x5)) )  
		goto label_cond_2a;
	return meth;
	// 2805    .line 1405
label_cond_2a:
	if ( !(( mods & 0x2)) )  
		goto label_cond_33;
	if ( cl != defCl )
		goto label_cond_31;
label_goto_30:
	return meth;
label_cond_31:
	meth = cVar0;
	goto label_goto_30;
	// 2822    .line 1408
label_cond_33:
	if ( !(java::io::ObjectStreamClass::packageEquals(cl, defCl)) )  
		goto label_cond_3a;
label_goto_39:
	return meth;
label_cond_3a:
	meth = cVar0;
	goto label_goto_39;

}
// .method private static getMethodSignature([Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectStreamClass::getMethodSignature(std::shared_ptr<std::vector<java::lang::Class<java::lang::Object>>> paramTypes,std::shared_ptr<java::lang::Class<java::lang::Object>> retType)
{
	
	std::shared_ptr<java::lang::StringBuilder> sbuf;
	int i;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2842        value = {
	// 2843            "([",
	// 2844            "Ljava/lang/Class",
	// 2845            "<*>;",
	// 2846            "Ljava/lang/Class",
	// 2847            "<*>;)",
	// 2848            "Ljava/lang/String;"
	// 2849        }
	// 2850    .end annotation
	//    .local p0, "paramTypes":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	//    .local p1, "retType":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	sbuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "sbuf":Ljava/lang/StringBuilder;
	sbuf->append(0x28);
	i = 0x0;
	//    .local v0, "i":I
label_goto_b:
	if ( i >= paramTypes->size() )
		goto label_cond_1a;
	sbuf->append(java::io::ObjectStreamClass::getClassSignature(paramTypes[i]));
	i = ( i + 0x1);
	goto label_goto_b;
	// 2889    .line 1513
label_cond_1a:
	sbuf->append(0x29);
	sbuf->append(java::io::ObjectStreamClass::getClassSignature(retType));
	return sbuf->toString();

}
// .method private static getPackageName(Ljava/lang/Class;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectStreamClass::getPackageName(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	std::shared_ptr<java::lang::String> s;
	int i;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2913        value = {
	// 2914            "(",
	// 2915            "Ljava/lang/Class",
	// 2916            "<*>;)",
	// 2917            "Ljava/lang/String;"
	// 2918        }
	// 2919    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	s = cl->getName();
	//    .local v1, "s":Ljava/lang/String;
	i = s->lastIndexOf(0x5b);
	//    .local v0, "i":I
	if ( i < 0 ) 
		goto label_cond_13;
	s = s->substring(( i + 0x2));
label_cond_13:
	i = s->lastIndexOf(0x2e);
	if ( i < 0 ) 
		goto label_cond_20;
	cVar0 = s->substring(0x0, i);
label_goto_1f:
	return cVar0;
label_cond_20:
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_1f;

}
// .method private static getPrivateMethod(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/reflect/Method;
std::shared_ptr<java::lang::reflect::Method> java::io::ObjectStreamClass::getPrivateMethod(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::Class<java::lang::Object>>> argTypes,std::shared_ptr<java::lang::Class<java::lang::Object>> returnType)
{
	
	std::shared_ptr<java::lang::reflect::Method> cVar0;
	std::shared_ptr<java::lang::reflect::Method> meth;
	int mods;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2977        value = {
	// 2978            "(",
	// 2979            "Ljava/lang/Class",
	// 2980            "<*>;",
	// 2981            "Ljava/lang/String;",
	// 2982            "[",
	// 2983            "Ljava/lang/Class",
	// 2984            "<*>;",
	// 2985            "Ljava/lang/Class",
	// 2986            "<*>;)",
	// 2987            "Ljava/lang/reflect/Method;"
	// 2988        }
	// 2989    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local p2, "argTypes":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	//    .local p3, "returnType":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = 0x0;
	try {
	//label_try_start_1:
	meth = cl->getDeclaredMethod(name, argTypes);
	//    .local v1, "meth":Ljava/lang/reflect/Method;
	meth->setAccessible(0x1);
	mods = meth->getModifiers();
	//    .local v2, "mods":I
	//label_try_end_10:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1e;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_1 .. :try_end_10} :catch_1e
	if ( meth->getReturnType() != returnType )
		goto label_cond_1c;
	if ( ( mods & 0x8) )     
		goto label_cond_1c;
	if ( !(( mods & 0x2)) )  
		goto label_cond_1c;
	//    .end local v1    # "meth":Ljava/lang/reflect/Method;
label_goto_1b:
	return meth;
	// 3039    .restart local v1    # "meth":Ljava/lang/reflect/Method;
label_cond_1c:
	meth = cVar0;
	goto label_goto_1b;
	// 3046    .line 1428
	// 3047    .end local v1    # "meth":Ljava/lang/reflect/Method;
	// 3048    .end local v2    # "mods":I
label_catch_1e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/NoSuchMethodException;
	return cVar0;

}
// .method private static getReflector([Ljava/io/ObjectStreamField;Ljava/io/ObjectStreamClass;)Ljava/io/ObjectStreamClass$FieldReflector;
std::shared_ptr<java::io::ObjectStreamClass_S_FieldReflector> java::io::ObjectStreamClass::getReflector(std::shared_ptr<std::vector<java::io::ObjectStreamField>> fields,std::shared_ptr<java::io::ObjectStreamClass> localDesc)
{
	
	std::shared_ptr<java::lang::Class> cVar0;
	std::shared_ptr<java::io::ObjectStreamClass_S_FieldReflectorKey> key;
	std::shared_ptr<java::lang::ref::Reference> ref;
	std::shared_ptr<java::io::ObjectStreamClass_S_FieldReflector> entry;
	std::shared_ptr<java::io::ObjectStreamClass_S_EntryFuture> newEntry;
	std::shared_ptr<java::lang::ref::SoftReference> newRef;
	std::shared_ptr<java::lang::Object> ref;
	std::shared_ptr<java::lang::InternalError> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::ref::SoftReference> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "fields"    # [Ljava/io/ObjectStreamField;
	//    .param p1, "localDesc"    # Ljava/io/ObjectStreamClass;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3062        value = {
	// 3063            Ljava/io/InvalidClassException;
	// 3064        }
	// 3065    .end annotation
	if ( !(localDesc) )  
		goto label_cond_59;
	if ( fields->size() <= 0 )
		goto label_cond_59;
	cVar0 = localDesc->cl;
label_goto_8:
	java::io::ObjectStreamClass::processQueue(java::io::ObjectStreamClass_S_Caches::-get1(java::io::ObjectStreamClass_S_Caches::-get1({const[class].FS-Param}), java::io::ObjectStreamClass_S_Caches::reflectors), java::io::ObjectStreamClass_S_Caches::reflectors);
	key = std::make_shared<java::io::ObjectStreamClass_S_FieldReflectorKey>(cVar0, fields, java::io::ObjectStreamClass_S_Caches::-get1({const[class].FS-Param}));
	//    .local v3, "key":Ljava/io/ObjectStreamClass$FieldReflectorKey;
	ref = java::io::ObjectStreamClass_S_Caches::reflectors->get(key);
	ref->checkCast("java::lang::ref::Reference");
	//    .local v6, "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
	entry = 0x0;
	//    .local v1, "entry":Ljava/lang/Object;
	if ( !(ref) )  
		goto label_cond_29;
	entry = ref->get();
	//    .end local v1    # "entry":Ljava/lang/Object;
label_cond_29:
	0x0;
	//    .local v2, "future":Ljava/io/ObjectStreamClass$EntryFuture;
	if ( entry )     
		goto label_cond_52;
	newEntry = std::make_shared<java::io::ObjectStreamClass_S_EntryFuture>(0x0);
	//    .local v4, "newEntry":Ljava/io/ObjectStreamClass$EntryFuture;
	newRef = std::make_shared<java::lang::ref::SoftReference>(newEntry);
	//    .local v5, "newRef":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
label_cond_36:
	if ( !(ref) )  
		goto label_cond_3d;
	java::io::ObjectStreamClass_S_Caches::reflectors->remove(key, ref);
label_cond_3d:
	ref = java::io::ObjectStreamClass_S_Caches::reflectors->putIfAbsent(key, newRef);
	//    .end local v6    # "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
	ref->checkCast("java::lang::ref::Reference");
	//    .restart local v6    # "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
	if ( !(ref) )  
		goto label_cond_4b;
	entry = ref->get();
label_cond_4b:
	if ( !(ref) )  
		goto label_cond_4f;
	if ( !(entry) )  
		goto label_cond_36;
label_cond_4f:
	if ( entry )     
		goto label_cond_52;
	//    .end local v2    # "future":Ljava/io/ObjectStreamClass$EntryFuture;
	//    .end local v4    # "newEntry":Ljava/io/ObjectStreamClass$EntryFuture;
	//    .end local v5    # "newRef":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
label_cond_52:
	if ( !(entry->instanceOf("java::io::ObjectStreamClass_S_FieldReflector")) )  
		goto label_cond_5b;
	entry->checkCast("java::io::ObjectStreamClass_S_FieldReflector");
	return entry;
	// 3201    .line 2115
	// 3202    .end local v3    # "key":Ljava/io/ObjectStreamClass$FieldReflectorKey;
	// 3203    .end local v6    # "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
label_cond_59:
	cVar0 = 0x0;
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	goto label_goto_8;
	// 3210    .line 2144
	// 3211    .end local v0    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 3212    .restart local v3    # "key":Ljava/io/ObjectStreamClass$FieldReflectorKey;
	// 3213    .restart local v6    # "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
label_cond_5b:
	if ( !(entry->instanceOf("java::io::ObjectStreamClass_S_EntryFuture")) )  
		goto label_cond_6c;
	entry->checkCast("java::io::ObjectStreamClass_S_EntryFuture");
	entry = entry->get();
label_cond_65:
label_goto_65:
	if ( !(entry->instanceOf("java::io::ObjectStreamClass_S_FieldReflector")) )  
		goto label_cond_88;
	entry->checkCast("java::io::ObjectStreamClass_S_FieldReflector");
	return entry;
	// 3238    .line 2146
label_cond_6c:
	if ( entry )     
		goto label_cond_65;
	try {
	//label_try_start_6e:
	entry = std::make_shared<java::io::ObjectStreamClass_S_FieldReflector>(java::io::ObjectStreamClass::matchFields(fields, localDesc));
	//label_try_end_77:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_85;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_6e .. :try_end_77} :catch_85
	//    .restart local v1    # "entry":Ljava/lang/Object;
label_goto_77:
	newEntry->set(entry);
	cVar1 = std::make_shared<java::lang::ref::SoftReference>(entry);
	java::io::ObjectStreamClass_S_Caches::reflectors->put(key, cVar1);
	goto label_goto_65;
	// 3270    .line 2149
	// 3271    .end local v1    # "entry":Ljava/lang/Object;
label_catch_85:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v7, "th":Ljava/lang/Throwable;
	entry = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v1    # "entry":Ljava/lang/Object;
	goto label_goto_77;
	// 3282    .line 2158
	// 3283    .end local v1    # "entry":Ljava/lang/Object;
	// 3284    .end local v7    # "th":Ljava/lang/Throwable;
label_cond_88:
	if ( !(entry->instanceOf("java::io::InvalidClassException")) )  
		goto label_cond_8f;
	entry->checkCast("java::io::InvalidClassException");
	// throw
	throw entry;
	// 3295    .line 2160
label_cond_8f:
	if ( !(entry->instanceOf("java::lang::RuntimeException")) )  
		goto label_cond_96;
	entry->checkCast("java::lang::RuntimeException");
	// throw
	throw entry;
	// 3306    .line 2162
label_cond_96:
	if ( !(entry->instanceOf("java::lang::Error")) )  
		goto label_cond_9d;
	entry->checkCast("java::lang::Error");
	// throw
	throw entry;
	// 3317    .line 2165
label_cond_9d:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::InternalError>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected entry: ")))->append(entry)->toString());
	// throw
	throw cVar2;

}
// .method private static getSerialFields(Ljava/lang/Class;)[Ljava/io/ObjectStreamField;
std::shared_ptr<java::io::ObjectStreamField> java::io::ObjectStreamClass::getSerialFields(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	std::shared_ptr<std::vector<java::lang::Object>> fields;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3347        value = {
	// 3348            "(",
	// 3349            "Ljava/lang/Class",
	// 3350            "<*>;)[",
	// 3351            "Ljava/io/ObjectStreamField;"
	// 3352        }
	// 3353    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 3356        value = {
	// 3357            Ljava/io/InvalidClassException;
	// 3358        }
	// 3359    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(java::io::Serializable()->isAssignableFrom(cl)) )  
		goto label_cond_30;
	if ( !(( java::io::Externalizable()->isAssignableFrom(cl) ^ 0x1)) )  
		goto label_cond_30;
	if ( !(( java::lang::reflect::Proxy::isProxyClass(cl) ^ 0x1)) )  
		goto label_cond_30;
	if ( !(( cl->isInterface() ^ 0x1)) )  
		goto label_cond_30;
	fields = java::io::ObjectStreamClass::getDeclaredSerialFields(cl);
	//    .local v0, "fields":[Ljava/io/ObjectStreamField;
	if ( fields )     
		goto label_cond_2c;
	fields = java::io::ObjectStreamClass::getDefaultSerialFields(cl);
label_cond_2c:
	java::util::Arrays::sort(fields);
label_goto_2f:
	return fields;
	// 3425    .line 1556
	// 3426    .end local v0    # "fields":[Ljava/io/ObjectStreamField;
label_cond_30:
	//    .restart local v0    # "fields":[Ljava/io/ObjectStreamField;
	goto label_goto_2f;

}
// .method private static getSerializableConstructor(Ljava/lang/Class;)Ljava/lang/reflect/Constructor;
std::shared_ptr<java::lang::reflect::Constructor<java::lang::Object>> java::io::ObjectStreamClass::getSerializableConstructor(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	std::shared_ptr<java::lang::reflect::Constructor> cVar0;
	std::shared_ptr<java::lang::Class> initCl;
	std::shared_ptr<std::vector<java::lang::Class>> cVar1;
	std::shared_ptr<java::lang::reflect::Constructor> cons;
	int mods;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3437        value = {
	// 3438            "(",
	// 3439            "Ljava/lang/Class",
	// 3440            "<*>;)",
	// 3441            "Ljava/lang/reflect/Constructor",
	// 3442            "<*>;"
	// 3443        }
	// 3444    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = 0x0;
	initCl = cl;
	//    .local v2, "initCl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_2:
	if ( !(java::io::Serializable()->isAssignableFrom(initCl)) )  
		goto label_cond_11;
	initCl = initCl->getSuperclass();
	if ( initCl )     
		goto label_cond_2;
	return cVar0;
	// 3474    .line 1357
label_cond_11:
	cVar1 = 0x0;
	try {
	//label_try_start_12:
	cVar1->checkCast("std::vector<java::lang::Class>");
	cons = initCl->getDeclaredConstructor(cVar1);
	//    .local v0, "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
	mods = cons->getModifiers();
	//    .local v3, "mods":I
	if ( ( mods & 0x2) )     
		goto label_cond_2c;
	if ( ( mods & 0x5) )     
		goto label_cond_2d;
	if ( !(( java::io::ObjectStreamClass::packageEquals(cl, initCl) ^ 0x1)) )  
		goto label_cond_2d;
label_cond_2c:
	return cVar0;
	// 3516    .line 1365
label_cond_2d:
	if ( cons->getDeclaringClass() == cl )
		goto label_cond_3b;
	cons = cons->serializationCopy(cons->getDeclaringClass(), cl);
label_cond_3b:
	cons->setAccessible(0x1);
	//label_try_end_3f:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_40;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_12 .. :try_end_3f} :catch_40
	return cons;
	// 3544    .line 1370
	// 3545    .end local v0    # "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
	// 3546    .end local v3    # "mods":I
label_catch_40:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/lang/NoSuchMethodException;
	return cVar0;

}
// .method private getVariantFor(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;
std::shared_ptr<java::io::ObjectStreamClass> java::io::ObjectStreamClass::getVariantFor(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	std::shared_ptr<java::lang::ClassNotFoundException> cVar0;
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3558        value = {
	// 3559            "(",
	// 3560            "Ljava/lang/Class",
	// 3561            "<*>;)",
	// 3562            "Ljava/io/ObjectStreamClass;"
	// 3563        }
	// 3564    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 3567        value = {
	// 3568            Ljava/io/InvalidClassException;
	// 3569        }
	// 3570    .end annotation
	//    .local p1, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = 0x0;
	if ( this->cl != cl )
		goto label_cond_6;
	return this;
	// 3584    .line 1319
label_cond_6:
	desc = std::make_shared<java::io::ObjectStreamClass>();
	//    .local v0, "desc":Ljava/io/ObjectStreamClass;
	if ( !(this->isProxy) )  
		goto label_cond_15;
	desc->initProxy(cl, cVar0, this->superDesc);
label_goto_14:
	return desc;
	// 3605    .line 1323
label_cond_15:
	desc->initNonProxy(this, cl, cVar0, this->superDesc);
	goto label_goto_14;

}
// .method private static native hasStaticInitializer(Ljava/lang/Class;Z)Z
bool java::io::ObjectStreamClass::hasStaticInitializer(std::shared_ptr<java::lang::Class<java::lang::Object>> var0,bool var1)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3616        value = {
	// 3617            "(",
	// 3618            "Ljava/lang/Class",
	// 3619            "<*>;Z)Z"
	// 3620        }
	// 3621    .end annotation

}
// .method public static lookup(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;
std::shared_ptr<java::io::ObjectStreamClass> java::io::ObjectStreamClass::lookup(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3627        value = {
	// 3628            "(",
	// 3629            "Ljava/lang/Class",
	// 3630            "<*>;)",
	// 3631            "Ljava/io/ObjectStreamClass;"
	// 3632        }
	// 3633    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return java::io::ObjectStreamClass::lookup(cl, 0x0);

}
// .method static lookup(Ljava/lang/Class;Z)Ljava/io/ObjectStreamClass;
std::shared_ptr<java::io::ObjectStreamClass> java::io::ObjectStreamClass::lookup(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,bool all)
{
	
	std::shared_ptr<java::io::ObjectStreamClass> cVar0;
	int cVar1;
	std::shared_ptr<java::io::ObjectStreamClass_S_WeakClassKey> key;
	std::shared_ptr<java::lang::ref::Reference> ref;
	std::shared_ptr<java::io::ObjectStreamClass> entry;
	std::shared_ptr<java::io::ObjectStreamClass_S_EntryFuture> newEntry;
	std::shared_ptr<java::lang::ref::SoftReference> newRef;
	std::shared_ptr<java::lang::Object> ref;
	std::shared_ptr<java::io::ObjectStreamClass_S_EntryFuture> future;
	std::shared_ptr<java::lang::Object> entry;
	std::shared_ptr<java::lang::ref::SoftReference> cVar3;
	std::shared_ptr<java::lang::InternalError> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "all"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 3651        value = {
	// 3652            "(",
	// 3653            "Ljava/lang/Class",
	// 3654            "<*>;Z)",
	// 3655            "Ljava/io/ObjectStreamClass;"
	// 3656        }
	// 3657    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = 0x0;
	if ( all )     
		goto label_cond_c;
	cVar1 = java::io::Serializable()->isAssignableFrom(cl);
label_goto_9:
	if ( cVar1 )     
		goto label_cond_e;
	return cVar0;
	// 3678    .line 307
label_cond_c:
	cVar1 = 0x1;
	goto label_goto_9;
	// 3684    .line 310
label_cond_e:
	java::io::ObjectStreamClass::processQueue(java::io::ObjectStreamClass_S_Caches::-get0(java::io::ObjectStreamClass_S_Caches::-get0({const[class].FS-Param}), java::io::ObjectStreamClass_S_Caches::localDescs), java::io::ObjectStreamClass_S_Caches::localDescs);
	key = std::make_shared<java::io::ObjectStreamClass_S_WeakClassKey>(cl, java::io::ObjectStreamClass_S_Caches::-get0({const[class].FS-Param}));
	//    .local v2, "key":Ljava/io/ObjectStreamClass$WeakClassKey;
	ref = java::io::ObjectStreamClass_S_Caches::localDescs->get(key);
	ref->checkCast("java::lang::ref::Reference");
	//    .local v5, "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
	entry = 0x0;
	//    .local v0, "entry":Ljava/lang/Object;
	if ( !(ref) )  
		goto label_cond_2f;
	entry = ref->get();
	//    .end local v0    # "entry":Ljava/lang/Object;
label_cond_2f:
	0x0;
	//    .local v1, "future":Ljava/io/ObjectStreamClass$EntryFuture;
	if ( entry )     
		goto label_cond_58;
	newEntry = std::make_shared<java::io::ObjectStreamClass_S_EntryFuture>(cVar0);
	//    .local v3, "newEntry":Ljava/io/ObjectStreamClass$EntryFuture;
	newRef = std::make_shared<java::lang::ref::SoftReference>(newEntry);
	//    .local v4, "newRef":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
label_cond_3c:
	if ( !(ref) )  
		goto label_cond_43;
	java::io::ObjectStreamClass_S_Caches::localDescs->remove(key, ref);
label_cond_43:
	ref = java::io::ObjectStreamClass_S_Caches::localDescs->putIfAbsent(key, newRef);
	//    .end local v5    # "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
	ref->checkCast("java::lang::ref::Reference");
	//    .restart local v5    # "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
	if ( !(ref) )  
		goto label_cond_51;
	entry = ref->get();
label_cond_51:
	if ( !(ref) )  
		goto label_cond_55;
	if ( !(entry) )  
		goto label_cond_3c;
label_cond_55:
	if ( entry )     
		goto label_cond_58;
	newEntry;
	//    .end local v1    # "future":Ljava/io/ObjectStreamClass$EntryFuture;
	//    .end local v3    # "newEntry":Ljava/io/ObjectStreamClass$EntryFuture;
	//    .end local v4    # "newRef":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
label_cond_58:
	if ( !(entry->instanceOf("java::io::ObjectStreamClass")) )  
		goto label_cond_5f;
	entry->checkCast("java::io::ObjectStreamClass");
	return entry;
	// 3803    .line 338
label_cond_5f:
	if ( !(entry->instanceOf("java::io::ObjectStreamClass_S_EntryFuture")) )  
		goto label_cond_71;
	future = entry;
	future->checkCast("java::io::ObjectStreamClass_S_EntryFuture");
	//    .local v1, "future":Ljava/io/ObjectStreamClass$EntryFuture;
	if ( future->getOwner() != java::lang::Thread::currentThread({const[class].FS-Param}) )
		goto label_cond_8f;
	entry = 0x0;
	//    .end local v1    # "future":Ljava/io/ObjectStreamClass$EntryFuture;
label_cond_71:
label_goto_71:
	if ( entry )     
		goto label_cond_88;
	try {
	//label_try_start_73:
	entry = std::make_shared<java::io::ObjectStreamClass>(cl);
	//label_try_end_78:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_94;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_73 .. :try_end_78} :catch_94
	//    .restart local v0    # "entry":Ljava/lang/Object;
label_goto_78:
	if ( !(future->set(entry)) )  
		goto label_cond_97;
	cVar3 = std::make_shared<java::lang::ref::SoftReference>(entry);
	java::io::ObjectStreamClass_S_Caches::localDescs->put(key, cVar3);
	//    .end local v0    # "entry":Ljava/lang/Object;
label_cond_88:
label_goto_88:
	if ( !(entry->instanceOf("java::io::ObjectStreamClass")) )  
		goto label_cond_9c;
	entry->checkCast("java::io::ObjectStreamClass");
	return entry;
	// 3874    .line 349
	// 3875    .restart local v1    # "future":Ljava/io/ObjectStreamClass$EntryFuture;
label_cond_8f:
	entry = future->get();
	//    .restart local v0    # "entry":Ljava/lang/Object;
	goto label_goto_71;
	// 3884    .line 355
	// 3885    .end local v0    # "entry":Ljava/lang/Object;
	// 3886    .end local v1    # "future":Ljava/io/ObjectStreamClass$EntryFuture;
label_catch_94:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v6, "th":Ljava/lang/Throwable;
	entry = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "entry":Ljava/lang/Object;
	goto label_goto_78;
	// 3897    .line 362
	// 3898    .end local v6    # "th":Ljava/lang/Throwable;
label_cond_97:
	entry = future->get();
	goto label_goto_88;
	// 3906    .line 368
	// 3907    .end local v0    # "entry":Ljava/lang/Object;
label_cond_9c:
	if ( !(entry->instanceOf("java::lang::RuntimeException")) )  
		goto label_cond_a3;
	entry->checkCast("java::lang::RuntimeException");
	// throw
	throw entry;
	// 3918    .line 370
label_cond_a3:
	if ( !(entry->instanceOf("java::lang::Error")) )  
		goto label_cond_aa;
	entry->checkCast("java::lang::Error");
	// throw
	throw entry;
	// 3929    .line 373
label_cond_aa:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::InternalError>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected entry: ")))->append(entry)->toString());
	// throw
	throw cVar4;

}
// .method public static lookupAny(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;
std::shared_ptr<java::io::ObjectStreamClass> java::io::ObjectStreamClass::lookupAny(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3959        value = {
	// 3960            "(",
	// 3961            "Ljava/lang/Class",
	// 3962            "<*>;)",
	// 3963            "Ljava/io/ObjectStreamClass;"
	// 3964        }
	// 3965    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return java::io::ObjectStreamClass::lookup(cl, 0x1);

}
// .method private static matchFields([Ljava/io/ObjectStreamField;Ljava/io/ObjectStreamClass;)[Ljava/io/ObjectStreamField;
std::shared_ptr<java::io::ObjectStreamField> java::io::ObjectStreamClass::matchFields(std::shared_ptr<std::vector<java::io::ObjectStreamField>> fields,std::shared_ptr<java::io::ObjectStreamClass> localDesc)
{
	
	bool cVar0;
	std::shared_ptr<std::vector<java::io::ObjectStreamField>> localFields;
	std::shared<std::vector<std::vector<java::io::ObjectStreamField>>> matches;
	int i;
	std::shared_ptr<java::io::ObjectStreamField> f;
	std::shared_ptr<java::io::ObjectStreamField> m;
	int j;
	std::shared_ptr<java::io::ObjectStreamField> lf;
	
	//    .param p0, "fields"    # [Ljava/io/ObjectStreamField;
	//    .param p1, "localDesc"    # Ljava/io/ObjectStreamClass;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3984        value = {
	// 3985            Ljava/io/InvalidClassException;
	// 3986        }
	// 3987    .end annotation
	cVar0 = 0x0;
	if ( !(localDesc) )  
		goto label_cond_47;
	localFields = localDesc->fields;
	//    .local v4, "localFields":[Ljava/io/ObjectStreamField;
label_goto_5:
	matches = std::make_shared<std::vector<std::vector<java::io::ObjectStreamField>>>(fields->size());
	//    .local v6, "matches":[Ljava/io/ObjectStreamField;
	i = 0x0;
	//    .local v1, "i":I
label_goto_9:
	if ( i >= fields->size() )
		goto label_cond_77;
	f = fields[i];
	//    .local v0, "f":Ljava/io/ObjectStreamField;
	m = 0x0;
	//    .local v5, "m":Ljava/io/ObjectStreamField;
	j = 0x0;
	//    .end local v5    # "m":Ljava/io/ObjectStreamField;
	//    .local v2, "j":I
label_goto_10:
	if ( j >= localFields->size() )
		goto label_cond_5c;
	lf = localFields[j];
	//    .local v3, "lf":Ljava/io/ObjectStreamField;
	if ( !(f->getName()->equals(lf->getName())) )  
		goto label_cond_44;
	if ( !(f->getSignature()->equals(lf->getSignature())) )  
		goto label_cond_44;
	if ( !(lf->getField()) )  
		goto label_cond_4a;
	m = new java::io::ObjectStreamField(lf->getField(), lf->isUnshared(), cVar0);
label_cond_44:
label_goto_44:
	j = ( j + 0x1);
	goto label_goto_10;
	// 4096    .line 2231
	// 4097    .end local v0    # "f":Ljava/io/ObjectStreamField;
	// 4098    .end local v1    # "i":I
	// 4099    .end local v2    # "j":I
	// 4100    .end local v3    # "lf":Ljava/io/ObjectStreamField;
	// 4101    .end local v4    # "localFields":[Ljava/io/ObjectStreamField;
	// 4102    .end local v6    # "matches":[Ljava/io/ObjectStreamField;
label_cond_47:
	java::io::ObjectStreamClass::NO_FIELDS;
	//    .restart local v4    # "localFields":[Ljava/io/ObjectStreamField;
	goto label_goto_5;
	// 4109    .line 2256
	// 4110    .restart local v0    # "f":Ljava/io/ObjectStreamField;
	// 4111    .restart local v1    # "i":I
	// 4112    .restart local v2    # "j":I
	// 4113    .restart local v3    # "lf":Ljava/io/ObjectStreamField;
	// 4114    .restart local v6    # "matches":[Ljava/io/ObjectStreamField;
label_cond_4a:
	m = new java::io::ObjectStreamField(lf->getName(), lf->getSignature(), lf->isUnshared());
	//    .local v5, "m":Ljava/io/ObjectStreamField;
	goto label_goto_44;
	// 4137    .line 2261
	// 4138    .end local v3    # "lf":Ljava/io/ObjectStreamField;
	// 4139    .end local v5    # "m":Ljava/io/ObjectStreamField;
label_cond_5c:
	if ( m )     
		goto label_cond_6b;
	m = std::make_shared<java::io::ObjectStreamField>(f->getName(), f->getSignature(), cVar0);
label_cond_6b:
	m->setOffset(f->getOffset());
	matches[i] = m;
	i = ( i + 0x1);
	goto label_goto_9;
	// 4174    .line 2268
	// 4175    .end local v0    # "f":Ljava/io/ObjectStreamField;
	// 4176    .end local v2    # "j":I
label_cond_77:
	return matches;

}
// .method private static newInstance(Ljava/lang/Class;J)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectStreamClass::newInstance(std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,long long constructorId)
{
	
	int targetSdkVersion;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "constructorId"    # J
	//    .annotation system Ldalvik/annotation/Signature;
	// 4185        value = {
	// 4186            "(",
	// 4187            "Ljava/lang/Class",
	// 4188            "<*>;J)",
	// 4189            "Ljava/lang/Object;"
	// 4190        }
	// 4191    .end annotation
	//    .local p0, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	targetSdkVersion = dalvik::system::VMRuntime::getRuntime({const[class].FS-Param})->getTargetSdkVersion();
	//    .local v0, "targetSdkVersion":I
	if ( targetSdkVersion <= 0 )
		goto label_cond_1d;
	if ( targetSdkVersion >  0x18 )
		goto label_cond_1d;
	java::lang::System::logE(std::make_shared<java::lang::String>(std::make_shared<char[]>("WARNING: ObjectStreamClass.newInstance(Class<?>, long) is private API andwill be removed in a future Android release.")));
	return sun::misc::Unsafe::getUnsafe({const[class].FS-Param})->allocateInstance(clazz);
	// 4228    .line 2305
label_cond_1d:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectStreamClass.newInstance(Class<?>, long) is not supported on SDK ")))->append(targetSdkVersion)->toString());
	// throw
	throw cVar0;

}
// .method private static packageEquals(Ljava/lang/Class;Ljava/lang/Class;)Z
bool java::io::ObjectStreamClass::packageEquals(std::shared_ptr<java::lang::Class<java::lang::Object>> cl1,std::shared_ptr<java::lang::Class<java::lang::Object>> cl2)
{
	
	bool cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4258        value = {
	// 4259            "(",
	// 4260            "Ljava/lang/Class",
	// 4261            "<*>;",
	// 4262            "Ljava/lang/Class",
	// 4263            "<*>;)Z"
	// 4264        }
	// 4265    .end annotation
	//    .local p0, "cl1":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local p1, "cl2":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( cl1->getClassLoader() != cl2->getClassLoader() )
		goto label_cond_17;
	cVar0 = java::io::ObjectStreamClass::getPackageName(cl1)->equals(java::io::ObjectStreamClass::getPackageName(cl2));
label_goto_16:
	return cVar0;
label_cond_17:
	cVar0 = 0x0;
	goto label_goto_16;

}
// .method static processQueue(Ljava/lang/ref/ReferenceQueue;Ljava/util/concurrent/ConcurrentMap;)V
void java::io::ObjectStreamClass::processQueue(std::shared_ptr<java::lang::ref::ReferenceQueue<java::lang::Class<java::lang::Object>>> queue,std::shared_ptr<java::util::concurrent::ConcurrentMap<java::lang::ref::WeakReference<java::lang::Class<java::lang::Object>>,java::lang::Object>> map)
{
	
	std::shared_ptr<java::lang::Object> ref;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4307        value = {
	// 4308            "(",
	// 4309            "Ljava/lang/ref/ReferenceQueue",
	// 4310            "<",
	// 4311            "Ljava/lang/Class",
	// 4312            "<*>;>;",
	// 4313            "Ljava/util/concurrent/ConcurrentMap",
	// 4314            "<+",
	// 4315            "Ljava/lang/ref/WeakReference",
	// 4316            "<",
	// 4317            "Ljava/lang/Class",
	// 4318            "<*>;>;*>;)V"
	// 4319        }
	// 4320    .end annotation
	//    .local p0, "queue":Ljava/lang/ref/ReferenceQueue;, "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;"
	//    .local p1, "map":Ljava/util/concurrent/ConcurrentMap;, "Ljava/util/concurrent/ConcurrentMap<+Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;*>;"
label_goto_0:
	ref = queue->poll();
	//    .local v0, "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<+Ljava/lang/Class<*>;>;"
	if ( !(ref) )  
		goto label_cond_a;
	map->remove(ref);
	goto label_goto_0;
	// 4339    .line 2321
label_cond_a:
	return;

}
// .method private static throwMiscException(Ljava/lang/Throwable;)V
void java::io::ObjectStreamClass::throwMiscException(std::shared_ptr<java::lang::Throwable> th)
{
	
	std::shared_ptr<java::io::IOException> ex;
	
	//    .param p0, "th"    # Ljava/lang/Throwable;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4348        value = {
	// 4349            Ljava/io/IOException;
	// 4350        }
	// 4351    .end annotation
	if ( !(th->instanceOf("java::lang::RuntimeException")) )  
		goto label_cond_7;
	th->checkCast("java::lang::RuntimeException");
	//    .end local p0    # "th":Ljava/lang/Throwable;
	// throw
	throw th;
	// 4365    .line 1526
	// 4366    .restart local p0    # "th":Ljava/lang/Throwable;
label_cond_7:
	if ( !(th->instanceOf("java::lang::Error")) )  
		goto label_cond_e;
	th->checkCast("java::lang::Error");
	//    .end local p0    # "th":Ljava/lang/Throwable;
	// throw
	throw th;
	// 4378    .line 1529
	// 4379    .restart local p0    # "th":Ljava/lang/Throwable;
label_cond_e:
	ex = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected exception type")));
	//    .local v0, "ex":Ljava/io/IOException;
	ex->initCause(th);
	// throw
	throw ex;

}
// .method checkDefaultSerialize()V
void java::io::ObjectStreamClass::checkDefaultSerialize()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4400        value = {
	// 4401            Ljava/io/InvalidClassException;
	// 4402        }
	// 4403    .end annotation
	if ( !(this->defaultSerializeEx) )  
		goto label_cond_b;
	// throw
	throw this->defaultSerializeEx->newInvalidClassException();
	// 4420    .line 783
label_cond_b:
	return;

}
// .method checkDeserialize()V
void java::io::ObjectStreamClass::checkDeserialize()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4428        value = {
	// 4429            Ljava/io/InvalidClassException;
	// 4430        }
	// 4431    .end annotation
	if ( !(this->deserializeEx) )  
		goto label_cond_b;
	// throw
	throw this->deserializeEx->newInvalidClassException();
	// 4448    .line 759
label_cond_b:
	return;

}
// .method checkSerialize()V
void java::io::ObjectStreamClass::checkSerialize()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4456        value = {
	// 4457            Ljava/io/InvalidClassException;
	// 4458        }
	// 4459    .end annotation
	if ( !(this->serializeEx) )  
		goto label_cond_b;
	// throw
	throw this->serializeEx->newInvalidClassException();
	// 4476    .line 770
label_cond_b:
	return;

}
// .method public forClass()Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::io::ObjectStreamClass::forClass()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4484        value = {
	// 4485            "()",
	// 4486            "Ljava/lang/Class",
	// 4487            "<*>;"
	// 4488        }
	// 4489    .end annotation
	//    .annotation runtime Lsun/reflect/CallerSensitive;
	// 4492    .end annotation
	if ( this->cl )     
		goto label_cond_6;
	return 0x0;
	// 4505    .line 258
label_cond_6:
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_21;
	if ( !(sun::reflect::misc::ReflectUtil::needsPackageAccessCheck(dalvik::system::VMStack::getCallingClassLoader(dalvik::system::VMStack::getCallingClassLoader({const[class].FS-Param}), this->cl->getClassLoader()), this->cl->getClassLoader())) )  
		goto label_cond_21;
	sun::reflect::misc::ReflectUtil::checkPackageAccess(this->cl);
label_cond_21:
	return this->cl;

}
// .method getClassDataLayout()[Ljava/io/ObjectStreamClass$ClassDataSlot;
std::shared_ptr<java::io::ObjectStreamClass_S_ClassDataSlot> java::io::ObjectStreamClass::getClassDataLayout()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4547        value = {
	// 4548            Ljava/io/InvalidClassException;
	// 4549        }
	// 4550    .end annotation
	if ( this->dataLayout )     
		goto label_cond_a;
	this->dataLayout = this->getClassDataLayout0();
label_cond_a:
	return this->dataLayout;

}
// .method public getField(Ljava/lang/String;)Ljava/io/ObjectStreamField;
std::shared_ptr<java::io::ObjectStreamField> java::io::ObjectStreamClass::getField(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	return this->getField(name, 0x0);

}
// .method getField(Ljava/lang/String;Ljava/lang/Class;)Ljava/io/ObjectStreamField;
std::shared_ptr<java::io::ObjectStreamField> java::io::ObjectStreamClass::getField(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Class<java::lang::Object>> type)
{
	
	int i;
	std::shared_ptr<java::io::ObjectStreamField> f;
	std::shared_ptr<java::lang::Class> ftype;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 4591        value = {
	// 4592            "(",
	// 4593            "Ljava/lang/String;",
	// 4594            "Ljava/lang/Class",
	// 4595            "<*>;)",
	// 4596            "Ljava/io/ObjectStreamField;"
	// 4597        }
	// 4598    .end annotation
	//    .local p2, "type":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	i = 0x0;
	//    .local v2, "i":I
label_goto_2:
	if ( i >= this->fields->size() )
		goto label_cond_34;
	f = this->fields[i];
	//    .local v0, "f":Ljava/io/ObjectStreamField;
	if ( !(f->getName()->equals(name)) )  
		goto label_cond_31;
	if ( !(type) )  
		goto label_cond_23;
	if ( type != java::lang::Object() )
		goto label_cond_24;
	if ( !(( f->isPrimitive() ^ 0x1)) )  
		goto label_cond_24;
label_cond_23:
	return f;
	// 4653    .line 829
label_cond_24:
	ftype = f->getType();
	//    .local v1, "ftype":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(ftype) )  
		goto label_cond_31;
	if ( !(type->isAssignableFrom(ftype)) )  
		goto label_cond_31;
	return f;
	// 4672    .line 821
	// 4673    .end local v1    # "ftype":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_31:
	i = ( i + 0x1);
	goto label_goto_2;
	// 4679    .line 835
	// 4680    .end local v0    # "f":Ljava/io/ObjectStreamField;
label_cond_34:
	return 0x0;

}
// .method public getFields()[Ljava/io/ObjectStreamField;
std::shared_ptr<java::io::ObjectStreamField> java::io::ObjectStreamClass::getFields()
{
	
	return this->getFields(0x1);

}
// .method getFields(Z)[Ljava/io/ObjectStreamField;
std::shared_ptr<java::io::ObjectStreamField> java::io::ObjectStreamClass::getFields(bool copy)
{
	
	std::shared_ptr<std::vector<java::io::ObjectStreamField>> cVar0;
	
	//    .param p1, "copy"    # Z
	if ( !(copy) )  
		goto label_cond_b;
	cVar0 = this->fields->clone();
	cVar0->checkCast("std::vector<java::io::ObjectStreamField>");
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = this->fields;
	goto label_goto_a;

}
// .method getLocalDesc()Ljava/io/ObjectStreamClass;
std::shared_ptr<java::io::ObjectStreamClass> java::io::ObjectStreamClass::getLocalDesc()
{
	
	return this->localDesc;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectStreamClass::getName()
{
	
	return this->name;

}
// .method getNumObjFields()I
int java::io::ObjectStreamClass::getNumObjFields()
{
	
	return this->numObjFields;

}
// .method getObjFieldValues(Ljava/lang/Object;[Ljava/lang/Object;)V
void java::io::ObjectStreamClass::getObjFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<std::vector<java::lang::Object>> vals)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "vals"    # [Ljava/lang/Object;
	this->fieldRefl->getObjFieldValues(obj, vals);
	return;

}
// .method getPrimDataSize()I
int java::io::ObjectStreamClass::getPrimDataSize()
{
	
	return this->primDataSize;

}
// .method getPrimFieldValues(Ljava/lang/Object;[B)V
void java::io::ObjectStreamClass::getPrimFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<unsigned char[]> buf)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "buf"    # [B
	this->fieldRefl->getPrimFieldValues(obj, buf);
	return;

}
// .method getResolveException()Ljava/lang/ClassNotFoundException;
std::shared_ptr<java::lang::ClassNotFoundException> java::io::ObjectStreamClass::getResolveException()
{
	
	return this->resolveEx;

}
// .method public getSerialVersionUID()J
long long java::io::ObjectStreamClass::getSerialVersionUID()
{
	
	std::shared_ptr<java::io::ObjectStreamClass_S_1> cVar0;
	std::shared_ptr<java::lang::Long> cVar1;
	
	if ( this->suid )     
		goto label_cond_11;
	cVar0 = std::make_shared<java::io::ObjectStreamClass_S_1>(this);
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("java::lang::Long");
	this->suid = cVar1;
label_cond_11:
	return this->suid->longValue();

}
// .method getSuperDesc()Ljava/io/ObjectStreamClass;
std::shared_ptr<java::io::ObjectStreamClass> java::io::ObjectStreamClass::getSuperDesc()
{
	
	return this->superDesc;

}
// .method hasBlockExternalData()Z
bool java::io::ObjectStreamClass::hasBlockExternalData()
{
	
	return this->hasBlockExternalData;

}
// .method hasReadObjectMethod()Z
bool java::io::ObjectStreamClass::hasReadObjectMethod()
{
	
	bool cVar0;
	
	if ( !(this->readObjectMethod) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method hasReadObjectNoDataMethod()Z
bool java::io::ObjectStreamClass::hasReadObjectNoDataMethod()
{
	
	bool cVar0;
	
	if ( !(this->readObjectNoDataMethod) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method hasReadResolveMethod()Z
bool java::io::ObjectStreamClass::hasReadResolveMethod()
{
	
	bool cVar0;
	
	if ( !(this->readResolveMethod) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method hasWriteObjectData()Z
bool java::io::ObjectStreamClass::hasWriteObjectData()
{
	
	return this->hasWriteObjectData;

}
// .method hasWriteObjectMethod()Z
bool java::io::ObjectStreamClass::hasWriteObjectMethod()
{
	
	bool cVar0;
	
	if ( !(this->writeObjectMethod) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method hasWriteReplaceMethod()Z
bool java::io::ObjectStreamClass::hasWriteReplaceMethod()
{
	
	bool cVar0;
	
	if ( !(this->writeReplaceMethod) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method initNonProxy(Ljava/io/ObjectStreamClass;Ljava/lang/Class;Ljava/lang/ClassNotFoundException;Ljava/io/ObjectStreamClass;)V
void java::io::ObjectStreamClass::initNonProxy(std::shared_ptr<java::io::ObjectStreamClass> model,std::shared_ptr<java::lang::Class<java::lang::Object>> cl,std::shared_ptr<java::lang::ClassNotFoundException> resolveEx,std::shared_ptr<java::io::ObjectStreamClass> superDesc)
{
	
	bool cVar11;
	std::shared_ptr<java::io::InvalidClassException> cVar1;
	std::shared_ptr<java::io::InvalidClassException> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	std::shared_ptr<java::io::InvalidClassException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::io::InvalidClassException> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::io::InvalidClassException> cVar9;
	std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> cVar10;
	
	//    .param p1, "model"    # Ljava/io/ObjectStreamClass;
	//    .param p3, "resolveEx"    # Ljava/lang/ClassNotFoundException;
	//    .param p4, "superDesc"    # Ljava/io/ObjectStreamClass;
	//    .annotation system Ldalvik/annotation/Signature;
	// 4974        value = {
	// 4975            "(",
	// 4976            "Ljava/io/ObjectStreamClass;",
	// 4977            "Ljava/lang/Class",
	// 4978            "<*>;",
	// 4979            "Ljava/lang/ClassNotFoundException;",
	// 4980            "Ljava/io/ObjectStreamClass;",
	// 4981            ")V"
	// 4982        }
	// 4983    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 4986        value = {
	// 4987            Ljava/io/InvalidClassException;
	// 4988        }
	// 4989    .end annotation
	//    .local p2, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar11 = 0x1;
	this->cl = cl;
	this->resolveEx = resolveEx;
	this->superDesc = superDesc;
	this->name = model->name;
	this->suid = java::lang::Long::valueOf(model->getSerialVersionUID());
	this->isProxy = 0x0;
	this->isEnum = model->isEnum;
	this->serializable = model->serializable;
	this->externalizable = model->externalizable;
	this->hasBlockExternalData = model->hasBlockExternalData;
	this->hasWriteObjectData = model->hasWriteObjectData;
	this->fields = model->fields;
	this->primDataSize = model->primDataSize;
	this->numObjFields = model->numObjFields;
	if ( !(cl) )  
		goto label_cond_159;
	this->localDesc = java::io::ObjectStreamClass::lookup(cl, cVar11);
	if ( !(this->localDesc->isProxy) )  
		goto label_cond_4f;
	cVar1 = std::make_shared<java::io::InvalidClassException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot bind non-proxy descriptor to a proxy class")));
	// throw
	throw cVar1;
	// 5093    .line 596
label_cond_4f:
	if ( this->isEnum == this->localDesc->isEnum )
		goto label_cond_68;
	if ( !(this->isEnum) )  
		goto label_cond_64;
	cVar3 = std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot bind enum descriptor to a non-enum class"));
label_goto_60:
	cVar2 = std::make_shared<java::io::InvalidClassException>(cVar3);
	// throw
	throw cVar2;
	// 5119    .line 599
label_cond_64:
	cVar3 = std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot bind non-enum descriptor to an enum class"));
	goto label_goto_60;
	// 5125    .line 602
label_cond_68:
	if ( this->serializable != this->localDesc->serializable )
		goto label_cond_b9;
	if ( !(( cl->isArray() ^ 0x1)) )  
		goto label_cond_b9;
	if ( !((this->suid->longValue() > this->localDesc->getSerialVersionUID())) )  
		goto label_cond_b9;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::io::InvalidClassException>(this->localDesc->name, cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("local class incompatible: stream classdesc serialVersionUID = ")))->append(this->suid)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", local class serialVersionUID = ")))->append(this->localDesc->getSerialVersionUID())->toString());
	// throw
	throw cVar5;
	// 5217    .line 613
label_cond_b9:
	if ( java::io::ObjectStreamClass::classNamesEqual(this->name, this->localDesc->name) )     
		goto label_cond_ec;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	cVar7 = std::make_shared<java::io::InvalidClassException>(this->localDesc->name, cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("local class name incompatible with stream class name \")))->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar7;
	// 5274    .line 619
label_cond_ec:
	if ( this->isEnum )     
		goto label_cond_12b;
	if ( this->serializable != this->localDesc->serializable )
		goto label_cond_10d;
	if ( this->externalizable == this->localDesc->externalizable )
		goto label_cond_10d;
	cVar9 = std::make_shared<java::io::InvalidClassException>(this->localDesc->name, std::make_shared<java::lang::String>(std::make_shared<char[]>("Serializable incompatible with Externalizable")));
	// throw
	throw cVar9;
	// 5313    .line 627
label_cond_10d:
	if ( this->serializable != this->localDesc->serializable )
		goto label_cond_11d;
	if ( this->externalizable == this->localDesc->externalizable )
		goto label_cond_16c;
label_cond_11d:
label_goto_11d:
	cVar10 = std::make_shared<java::io::ObjectStreamClass_S_ExceptionInfo>(this->localDesc->name, std::make_shared<java::lang::String>(std::make_shared<char[]>("class invalid for deserialization")));
	this->deserializeEx = cVar10;
label_cond_12b:
	this->cons = this->localDesc->cons;
	this->writeObjectMethod = this->localDesc->writeObjectMethod;
	this->readObjectMethod = this->localDesc->readObjectMethod;
	this->readObjectNoDataMethod = this->localDesc->readObjectNoDataMethod;
	this->writeReplaceMethod = this->localDesc->writeReplaceMethod;
	this->readResolveMethod = this->localDesc->readResolveMethod;
	if ( this->deserializeEx )     
		goto label_cond_159;
	this->deserializeEx = this->localDesc->deserializeEx;
label_cond_159:
	this->fieldRefl = java::io::ObjectStreamClass::getReflector(this->fields, this->localDesc);
	this->fields = this->fieldRefl->getFields();
	return;
	// 5428    .line 629
label_cond_16c:
	if ( this->serializable )     
		goto label_cond_172;
	cVar11 = this->externalizable;
label_cond_172:
	if ( !(( cVar11 ^ 0x1)) )  
		goto label_cond_12b;
	goto label_goto_11d;

}
// .method initProxy(Ljava/lang/Class;Ljava/lang/ClassNotFoundException;Ljava/io/ObjectStreamClass;)V
void java::io::ObjectStreamClass::initProxy(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,std::shared_ptr<java::lang::ClassNotFoundException> resolveEx,std::shared_ptr<java::io::ObjectStreamClass> superDesc)
{
	
	bool cVar0;
	std::shared_ptr<java::io::InvalidClassException> cVar1;
	
	//    .param p2, "resolveEx"    # Ljava/lang/ClassNotFoundException;
	//    .param p3, "superDesc"    # Ljava/io/ObjectStreamClass;
	//    .annotation system Ldalvik/annotation/Signature;
	// 5450        value = {
	// 5451            "(",
	// 5452            "Ljava/lang/Class",
	// 5453            "<*>;",
	// 5454            "Ljava/lang/ClassNotFoundException;",
	// 5455            "Ljava/io/ObjectStreamClass;",
	// 5456            ")V"
	// 5457        }
	// 5458    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 5461        value = {
	// 5462            Ljava/io/InvalidClassException;
	// 5463        }
	// 5464    .end annotation
	//    .local p1, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = 0x1;
	this->cl = cl;
	this->resolveEx = resolveEx;
	this->superDesc = superDesc;
	this->isProxy = cVar0;
	this->serializable = cVar0;
	this->suid = java::lang::Long::valueOf(0x0);
	this->fields = java::io::ObjectStreamClass::NO_FIELDS;
	if ( !(cl) )  
		goto label_cond_52;
	this->localDesc = java::io::ObjectStreamClass::lookup(cl, cVar0);
	if ( this->localDesc->isProxy )     
		goto label_cond_2e;
	cVar1 = std::make_shared<java::io::InvalidClassException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot bind proxy descriptor to a non-proxy class")));
	// throw
	throw cVar1;
	// 5527    .line 556
label_cond_2e:
	this->name = this->localDesc->name;
	this->externalizable = this->localDesc->externalizable;
	this->cons = this->localDesc->cons;
	this->writeReplaceMethod = this->localDesc->writeReplaceMethod;
	this->readResolveMethod = this->localDesc->readResolveMethod;
	this->deserializeEx = this->localDesc->deserializeEx;
label_cond_52:
	this->fieldRefl = java::io::ObjectStreamClass::getReflector(this->fields, this->localDesc);
	return;

}
// .method invokeReadObject(Ljava/lang/Object;Ljava/io/ObjectInputStream;)V
void java::io::ObjectStreamClass::invokeReadObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	std::shared_ptr<java::lang::ClassNotFoundException> th;
	std::shared_ptr<java::lang::InternalError> cVar1;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar2;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5591        value = {
	// 5592            Ljava/lang/ClassNotFoundException;,
	// 5593            Ljava/io/IOException;,
	// 5594            Ljava/lang/UnsupportedOperationException;
	// 5595        }
	// 5596    .end annotation
	if ( !(this->readObjectMethod) )  
		goto label_cond_2e;
	try {
	//label_try_start_4:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar0[0x0] = in;
	this->readObjectMethod->invoke(obj, cVar0);
	//label_try_end_f:
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_17;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_4 .. :try_end_f} :catch_17
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_4 .. :try_end_f} :catch_10
label_goto_f:
	return;
	// 5625    .line 1016
label_catch_10:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/IllegalAccessException;
	cVar1 = std::make_shared<java::lang::InternalError>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 5637    .line 1007
	// 5638    .end local v0    # "ex":Ljava/lang/IllegalAccessException;
label_catch_17:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/lang/reflect/InvocationTargetException;
	tryCatchExcetionList.pop_back();
	th = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "th":Ljava/lang/Throwable;
	if ( !(th->instanceOf("java::lang::ClassNotFoundException")) )  
		goto label_cond_23;
	th->checkCast("java::lang::ClassNotFoundException");
	//    .end local v2    # "th":Ljava/lang/Throwable;
	// throw
	throw th;
	// 5660    .line 1011
	// 5661    .restart local v2    # "th":Ljava/lang/Throwable;
label_cond_23:
	if ( !(th->instanceOf("java::io::IOException")) )  
		goto label_cond_2a;
	th->checkCast("java::io::IOException");
	//    .end local v2    # "th":Ljava/lang/Throwable;
	// throw
	throw th;
	// 5673    .line 1014
	// 5674    .restart local v2    # "th":Ljava/lang/Throwable;
label_cond_2a:
	// throw
	java::io::ObjectStreamClass::throwMiscException(th);
	goto label_goto_f;
	// 5680    .line 1021
	// 5681    .end local v1    # "ex":Ljava/lang/reflect/InvocationTargetException;
	// 5682    .end local v2    # "th":Ljava/lang/Throwable;
label_cond_2e:
	cVar2 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar2;

}
// .method invokeReadObjectNoData(Ljava/lang/Object;)V
void java::io::ObjectStreamClass::invokeReadObjectNoData(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::ObjectStreamException> th;
	std::shared_ptr<java::lang::InternalError> cVar1;
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar2;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5695        value = {
	// 5696            Ljava/io/IOException;,
	// 5697            Ljava/lang/UnsupportedOperationException;
	// 5698        }
	// 5699    .end annotation
	if ( !(this->readObjectNoDataMethod) )  
		goto label_cond_24;
	try {
	//label_try_start_4:
	cVar0 = 0x0;
	cVar0->checkCast("std::vector<java::lang::Object>");
	this->readObjectNoDataMethod->invoke(obj, cVar0);
	//label_try_end_c:
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_14;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_4 .. :try_end_c} :catch_14
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_4 .. :try_end_c} :catch_d
label_goto_c:
	return;
	// 5724    .line 1044
label_catch_d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/IllegalAccessException;
	cVar1 = std::make_shared<java::lang::InternalError>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 5736    .line 1037
	// 5737    .end local v0    # "ex":Ljava/lang/IllegalAccessException;
label_catch_14:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/lang/reflect/InvocationTargetException;
	tryCatchExcetionList.pop_back();
	th = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "th":Ljava/lang/Throwable;
	if ( !(th->instanceOf("java::io::ObjectStreamException")) )  
		goto label_cond_20;
	th->checkCast("java::io::ObjectStreamException");
	//    .end local v2    # "th":Ljava/lang/Throwable;
	// throw
	throw th;
	// 5759    .line 1042
	// 5760    .restart local v2    # "th":Ljava/lang/Throwable;
label_cond_20:
	// throw
	java::io::ObjectStreamClass::throwMiscException(th);
	goto label_goto_c;
	// 5766    .line 1049
	// 5767    .end local v1    # "ex":Ljava/lang/reflect/InvocationTargetException;
	// 5768    .end local v2    # "th":Ljava/lang/Throwable;
label_cond_24:
	cVar2 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar2;

}
// .method invokeReadResolve(Ljava/lang/Object;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectStreamClass::invokeReadResolve(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::ObjectStreamException> th;
	std::shared_ptr<java::lang::InternalError> cVar2;
	std::shared_ptr<java::lang::InternalError> cVar1;
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar3;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5781        value = {
	// 5782            Ljava/io/IOException;,
	// 5783            Ljava/lang/UnsupportedOperationException;
	// 5784        }
	// 5785    .end annotation
	if ( !(this->readResolveMethod) )  
		goto label_cond_2a;
	try {
	//label_try_start_4:
	cVar0 = 0x0;
	cVar0->checkCast("std::vector<java::lang::Object>");
	//label_try_end_c:
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_15;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e;
	}
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_4 .. :try_end_c} :catch_15
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_4 .. :try_end_c} :catch_e
	return this->readResolveMethod->invoke(obj, cVar0);
	// 5810    .line 1102
label_catch_e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/IllegalAccessException;
	cVar1 = std::make_shared<java::lang::InternalError>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 5822    .line 1094
	// 5823    .end local v0    # "ex":Ljava/lang/IllegalAccessException;
label_catch_15:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/lang/reflect/InvocationTargetException;
	tryCatchExcetionList.pop_back();
	th = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "th":Ljava/lang/Throwable;
	if ( !(th->instanceOf("java::io::ObjectStreamException")) )  
		goto label_cond_21;
	th->checkCast("java::io::ObjectStreamException");
	//    .end local v2    # "th":Ljava/lang/Throwable;
	// throw
	throw th;
	// 5845    .line 1099
	// 5846    .restart local v2    # "th":Ljava/lang/Throwable;
label_cond_21:
	// throw
	java::io::ObjectStreamClass::throwMiscException(th);
	cVar2 = std::make_shared<java::lang::InternalError>(th);
	// throw
	throw cVar2;
	// 5857    .line 1107
	// 5858    .end local v1    # "ex":Ljava/lang/reflect/InvocationTargetException;
	// 5859    .end local v2    # "th":Ljava/lang/Throwable;
label_cond_2a:
	cVar3 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar3;

}
// .method invokeWriteObject(Ljava/lang/Object;Ljava/io/ObjectOutputStream;)V
void java::io::ObjectStreamClass::invokeWriteObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectOutputStream> out)
{
	
	std::shared_ptr<java::io::IOException> th;
	std::shared_ptr<java::lang::InternalError> cVar1;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar2;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "out"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5873        value = {
	// 5874            Ljava/io/IOException;,
	// 5875            Ljava/lang/UnsupportedOperationException;
	// 5876        }
	// 5877    .end annotation
	if ( !(this->writeObjectMethod) )  
		goto label_cond_27;
	try {
	//label_try_start_4:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar0[0x0] = out;
	this->writeObjectMethod->invoke(obj, cVar0);
	//label_try_end_f:
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_17;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_4 .. :try_end_f} :catch_17
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_4 .. :try_end_f} :catch_10
label_goto_f:
	return;
	// 5906    .line 985
label_catch_10:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/IllegalAccessException;
	cVar1 = std::make_shared<java::lang::InternalError>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 5918    .line 978
	// 5919    .end local v0    # "ex":Ljava/lang/IllegalAccessException;
label_catch_17:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/lang/reflect/InvocationTargetException;
	tryCatchExcetionList.pop_back();
	th = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "th":Ljava/lang/Throwable;
	if ( !(th->instanceOf("java::io::IOException")) )  
		goto label_cond_23;
	th->checkCast("java::io::IOException");
	//    .end local v2    # "th":Ljava/lang/Throwable;
	// throw
	throw th;
	// 5941    .line 983
	// 5942    .restart local v2    # "th":Ljava/lang/Throwable;
label_cond_23:
	// throw
	java::io::ObjectStreamClass::throwMiscException(th);
	goto label_goto_f;
	// 5948    .line 990
	// 5949    .end local v1    # "ex":Ljava/lang/reflect/InvocationTargetException;
	// 5950    .end local v2    # "th":Ljava/lang/Throwable;
label_cond_27:
	cVar2 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar2;

}
// .method invokeWriteReplace(Ljava/lang/Object;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectStreamClass::invokeWriteReplace(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::ObjectStreamException> th;
	std::shared_ptr<java::lang::InternalError> cVar2;
	std::shared_ptr<java::lang::InternalError> cVar1;
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar3;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5963        value = {
	// 5964            Ljava/io/IOException;,
	// 5965            Ljava/lang/UnsupportedOperationException;
	// 5966        }
	// 5967    .end annotation
	if ( !(this->writeReplaceMethod) )  
		goto label_cond_2a;
	try {
	//label_try_start_4:
	cVar0 = 0x0;
	cVar0->checkCast("std::vector<java::lang::Object>");
	//label_try_end_c:
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_15;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e;
	}
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_4 .. :try_end_c} :catch_15
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_4 .. :try_end_c} :catch_e
	return this->writeReplaceMethod->invoke(obj, cVar0);
	// 5992    .line 1073
label_catch_e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/IllegalAccessException;
	cVar1 = std::make_shared<java::lang::InternalError>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 6004    .line 1065
	// 6005    .end local v0    # "ex":Ljava/lang/IllegalAccessException;
label_catch_15:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/lang/reflect/InvocationTargetException;
	tryCatchExcetionList.pop_back();
	th = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "th":Ljava/lang/Throwable;
	if ( !(th->instanceOf("java::io::ObjectStreamException")) )  
		goto label_cond_21;
	th->checkCast("java::io::ObjectStreamException");
	//    .end local v2    # "th":Ljava/lang/Throwable;
	// throw
	throw th;
	// 6027    .line 1070
	// 6028    .restart local v2    # "th":Ljava/lang/Throwable;
label_cond_21:
	// throw
	java::io::ObjectStreamClass::throwMiscException(th);
	cVar2 = std::make_shared<java::lang::InternalError>(th);
	// throw
	throw cVar2;
	// 6039    .line 1078
	// 6040    .end local v1    # "ex":Ljava/lang/reflect/InvocationTargetException;
	// 6041    .end local v2    # "th":Ljava/lang/Throwable;
label_cond_2a:
	cVar3 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar3;

}
// .method isEnum()Z
bool java::io::ObjectStreamClass::isEnum()
{
	
	return this->isEnum;

}
// .method isExternalizable()Z
bool java::io::ObjectStreamClass::isExternalizable()
{
	
	return this->externalizable;

}
// .method isInstantiable()Z
bool java::io::ObjectStreamClass::isInstantiable()
{
	
	bool cVar0;
	
	if ( !(this->cons) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method isProxy()Z
bool java::io::ObjectStreamClass::isProxy()
{
	
	return this->isProxy;

}
// .method isSerializable()Z
bool java::io::ObjectStreamClass::isSerializable()
{
	
	return this->serializable;

}
// .method newInstance()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectStreamClass::newInstance()
{
	
	std::shared_ptr<java::lang::InternalError> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 6113        value = {
	// 6114            Ljava/lang/InstantiationException;,
	// 6115            Ljava/lang/reflect/InvocationTargetException;,
	// 6116            Ljava/lang/UnsupportedOperationException;
	// 6117        }
	// 6118    .end annotation
	if ( !(this->cons) )  
		goto label_cond_15;
	try {
	//label_try_start_4:
	//label_try_end_c:
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e;
	}
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_4 .. :try_end_c} :catch_e
	return this->cons->newInstance(std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x0));
	// 6142    .line 957
label_catch_e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/IllegalAccessException;
	cVar0 = std::make_shared<java::lang::InternalError>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 6154    .line 962
	// 6155    .end local v0    # "ex":Ljava/lang/IllegalAccessException;
label_cond_15:
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar1;

}
// .method readNonProxy(Ljava/io/ObjectInputStream;)V
void java::io::ObjectStreamClass::readNonProxy(std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	int flags;
	bool cVar0;
	bool cVar1;
	bool cVar2;
	bool sflag;
	std::shared_ptr<java::io::InvalidClassException> cVar3;
	bool cVar7;
	std::shared_ptr<java::io::InvalidClassException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	int numFields;
	std::shared_ptr<java::io::InvalidClassException> cVar11;
	std::shared_ptr<java::lang::StringBuilder> cVar12;
	std::shared<std::vector<std::vector<java::io::ObjectStreamField>>> cVar13;
	int i;
	char tcode;
	std::shared_ptr<java::lang::String> fname;
	std::shared_ptr<java::io::InvalidClassException> cVar17;
	std::shared_ptr<java::lang::StringBuilder> cVar18;
	std::shared_ptr<java::io::IOException> cVar19;
	std::shared_ptr<java::io::ObjectStreamField> cVar14;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::String> signature;
	std::shared<std::vector<char[]>> cVar16;
	std::shared_ptr<std::vector<java::io::ObjectStreamField>> cVar13;
	int sflag;
	
	//    .param p1, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 6168        value = {
	// 6169            Ljava/io/IOException;,
	// 6170            Ljava/lang/ClassNotFoundException;
	// 6171        }
	// 6172    .end annotation
	this->name = in->readUTF();
	this->suid = java::lang::Long::valueOf(in->readLong());
	this->isProxy = 0x0;
	flags = in->readByte();
	//    .local v1, "flags":B
	if ( !(( flags & 0x1)) )  
		goto label_cond_42;
	cVar0 = 0x1;
label_goto_1c:
	this->hasWriteObjectData = cVar0;
	if ( !(( flags & 0x8)) )  
		goto label_cond_44;
	cVar1 = 0x1;
label_goto_23:
	this->hasBlockExternalData = cVar1;
	if ( !(( flags & 0x4)) )  
		goto label_cond_46;
	cVar2 = 0x1;
label_goto_2a:
	this->externalizable = cVar2;
	if ( !(( flags & 0x2)) )  
		goto label_cond_48;
	sflag = 0x1;
	//    .local v5, "sflag":Z
label_goto_31:
	if ( !(this->externalizable) )  
		goto label_cond_4a;
	if ( !(sflag) )  
		goto label_cond_4a;
	cVar3 = std::make_shared<java::io::InvalidClassException>(this->name, std::make_shared<java::lang::String>(std::make_shared<char[]>("serializable and externalizable flags conflict")));
	// throw
	throw cVar3;
	// 6266    .line 666
	// 6267    .end local v5    # "sflag":Z
label_cond_42:
	cVar0 = 0x0;
	goto label_goto_1c;
	// 6273    .line 668
label_cond_44:
	cVar1 = 0x0;
	goto label_goto_23;
	// 6279    .line 670
label_cond_46:
	cVar2 = 0x0;
	goto label_goto_2a;
	// 6285    .line 672
label_cond_48:
	sflag = 0x0;
	//    .restart local v5    # "sflag":Z
	goto label_goto_31;
	// 6292    .line 677
label_cond_4a:
	if ( this->externalizable )     
		goto label_cond_85;
	//    .end local v5    # "sflag":Z
label_goto_4e:
	this->serializable = sflag;
	if ( !(( flags & 0x10)) )  
		goto label_cond_87;
	cVar7 = 0x1;
label_goto_55:
	this->isEnum = cVar7;
	if ( !(this->isEnum) )  
		goto label_cond_89;
	if ( !((this->suid->longValue() > 0x0)) )  
		goto label_cond_89;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::io::InvalidClassException>(this->name, cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("enum descriptor has non-zero serialVersionUID: ")))->append(this->suid)->toString());
	// throw
	throw cVar8;
	// 6360    .line 677
	// 6361    .restart local v5    # "sflag":Z
label_cond_85:
	sflag = 0x1;
	goto label_goto_4e;
	// 6367    .line 678
	// 6368    .end local v5    # "sflag":Z
label_cond_87:
	cVar7 = 0x0;
	goto label_goto_55;
	// 6374    .line 684
label_cond_89:
	numFields = in->readShort();
	//    .local v4, "numFields":I
	if ( !(this->isEnum) )  
		goto label_cond_af;
	if ( !(numFields) )  
		goto label_cond_af;
	cVar12 = std::make_shared<java::lang::StringBuilder>();
	cVar11 = std::make_shared<java::io::InvalidClassException>(this->name, cVar12->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("enum descriptor has non-zero field count: ")))->append(numFields)->toString());
	// throw
	throw cVar11;
	// 6417    .line 689
label_cond_af:
	if ( numFields <= 0 )
		goto label_cond_da;
	cVar13 = std::make_shared<std::vector<std::vector<java::io::ObjectStreamField>>>(numFields);
label_goto_b3:
	this->fields = cVar13;
	i = 0x0;
	//    .local v3, "i":I
label_goto_b6:
	if ( i >= numFields )
		goto label_cond_10c;
	tcode = (char)(in->readByte());
	//    .local v7, "tcode":C
	fname = in->readUTF();
	//    .local v2, "fname":Ljava/lang/String;
	if ( tcode == 0x4c )
		goto label_cond_c9;
	if ( tcode != 0x5b )
		goto label_cond_dd;
label_cond_c9:
	//    .local v6, "signature":Ljava/lang/String;
label_goto_cd:
	try {
	//label_try_start_cd:
	cVar14 = std::make_shared<java::io::ObjectStreamField>(fname, signature, 0x0);
	this->fields[i] = cVar14;
	//label_try_end_d7:
	}
	catch (java::lang::RuntimeException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e9;
	}
	//    .catch Ljava/lang/RuntimeException; {:try_start_cd .. :try_end_d7} :catch_e9
	i = ( i + 0x1);
	goto label_goto_b6;
	// 6485    .line 690
	// 6486    .end local v2    # "fname":Ljava/lang/String;
	// 6487    .end local v3    # "i":I
	// 6488    .end local v6    # "signature":Ljava/lang/String;
	// 6489    .end local v7    # "tcode":C
label_cond_da:
	cVar13 = java::io::ObjectStreamClass::NO_FIELDS;
	goto label_goto_b3;
	// 6495    .line 695
	// 6496    .restart local v2    # "fname":Ljava/lang/String;
	// 6497    .restart local v3    # "i":I
	// 6498    .restart local v7    # "tcode":C
label_cond_dd:
	cVar16 = std::make_shared<std::vector<char[]>>(0x1);
	cVar16[0x0] = tcode;
	signature = std::make_shared<java::lang::String>(cVar16);
	//    .restart local v6    # "signature":Ljava/lang/String;
	goto label_goto_cd;
	// 6515    .line 698
label_catch_e9:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/RuntimeException;
	cVar18 = std::make_shared<java::lang::StringBuilder>();
	cVar17 = std::make_shared<java::io::InvalidClassException>(this->name, cVar18->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid descriptor for field ")))->append(fname)->toString());
	cVar19 = cVar17->initCause(getCatchExcetionFromList);
	cVar19->checkCast("java::io::IOException");
	// throw
	throw cVar19;
	// 6555    .line 703
	// 6556    .end local v0    # "e":Ljava/lang/RuntimeException;
	// 6557    .end local v2    # "fname":Ljava/lang/String;
	// 6558    .end local v6    # "signature":Ljava/lang/String;
	// 6559    .end local v7    # "tcode":C
label_cond_10c:
	this->computeFieldOffsets();
	return;

}
// .method setObjFieldValues(Ljava/lang/Object;[Ljava/lang/Object;)V
void java::io::ObjectStreamClass::setObjFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<std::vector<java::lang::Object>> vals)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "vals"    # [Ljava/lang/Object;
	this->fieldRefl->setObjFieldValues(obj, vals);
	return;

}
// .method setPrimFieldValues(Ljava/lang/Object;[B)V
void java::io::ObjectStreamClass::setPrimFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<unsigned char[]> buf)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "buf"    # [B
	this->fieldRefl->setPrimFieldValues(obj, buf);
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectStreamClass::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": static final long serialVersionUID = ")))->append(this->getSerialVersionUID())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("L;")))->toString();

}
// .method writeNonProxy(Ljava/io/ObjectOutputStream;)V
void java::io::ObjectStreamClass::writeNonProxy(std::shared_ptr<java::io::ObjectOutputStream> out)
{
	
	int flags;
	int i;
	std::shared_ptr<java::io::ObjectStreamField> f;
	
	//    .param p1, "out"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 6647        value = {
	// 6648            Ljava/io/IOException;
	// 6649        }
	// 6650    .end annotation
	out->writeUTF(this->name);
	out->writeLong(this->getSerialVersionUID());
	//    .local v1, "flags":B
	if ( !(this->externalizable) )  
		goto label_cond_5c;
	flags = (unsigned char)(0x4);
	//    .local v1, "flags":B
	//    .local v3, "protocol":I
	if ( out->getProtocolVersion() == 0x1 )
		goto label_cond_1d;
	flags = (unsigned char)(( flags | 0x8));
	//    .end local v1    # "flags":B
	//    .end local v3    # "protocol":I
label_cond_1d:
label_goto_1d:
	if ( !(this->hasWriteObjectData) )  
		goto label_cond_24;
	flags = (unsigned char)(( flags | 0x1));
label_cond_24:
	if ( !(this->isEnum) )  
		goto label_cond_2b;
label_cond_2b:
	out->writeByte(0x0);
	out->writeShort(this->fields->size());
	i = 0x0;
	//    .local v2, "i":I
label_goto_35:
	if ( i >= this->fields->size() )
		goto label_cond_63;
	f = this->fields[i];
	//    .local v0, "f":Ljava/io/ObjectStreamField;
	out->writeByte(f->getTypeCode());
	out->writeUTF(f->getName());
	if ( f->isPrimitive() )     
		goto label_cond_59;
	out->writeTypeString(f->getTypeString());
label_cond_59:
	i = ( i + 0x1);
	goto label_goto_35;
	// 6783    .line 720
	// 6784    .end local v0    # "f":Ljava/io/ObjectStreamField;
	// 6785    .end local v2    # "i":I
	// 6786    .local v1, "flags":B
label_cond_5c:
	if ( !(this->serializable) )  
		goto label_cond_1d;
	//    .local v1, "flags":B
	goto label_goto_1d;
	// 6800    .line 740
	// 6801    .end local v1    # "flags":B
	// 6802    .restart local v2    # "i":I
label_cond_63:
	return;

}


