// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream.smali
#include "java2ctype.h"
#include "dalvik.system.VMStack.h"
#include "java.io.Externalizable.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.InvalidClassException.h"
#include "java.io.InvalidObjectException.h"
#include "java.io.NotActiveException.h"
#include "java.io.ObjectInputStream_S_1.h"
#include "java.io.ObjectInputStream_S_BlockDataInputStream.h"
#include "java.io.ObjectInputStream_S_Caches.h"
#include "java.io.ObjectInputStream_S_GetField.h"
#include "java.io.ObjectInputStream_S_GetFieldImpl.h"
#include "java.io.ObjectInputStream_S_HandleTable.h"
#include "java.io.ObjectInputStream_S_ValidationList.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectInputValidation.h"
#include "java.io.ObjectStreamClass_S_ClassDataSlot.h"
#include "java.io.ObjectStreamClass_S_WeakClassKey.h"
#include "java.io.ObjectStreamClass.h"
#include "java.io.ObjectStreamField.h"
#include "java.io.OptionalDataException.h"
#include "java.io.SerialCallbackContext.h"
#include "java.io.SerializablePermission.h"
#include "java.io.StreamCorruptedException.h"
#include "java.io.WriteAbortedException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Boolean.h"
#include "java.lang.Byte.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.Double.h"
#include "java.lang.Enum.h"
#include "java.lang.Exception.h"
#include "java.lang.Float.h"
#include "java.lang.IllegalAccessError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Integer.h"
#include "java.lang.InternalError.h"
#include "java.lang.Long.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.Short.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.lang.Void.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.lang.reflect.Array.h"
#include "java.lang.reflect.Field.h"
#include "java.lang.reflect.Proxy.h"
#include "java.security.AccessController.h"
#include "java.util.HashMap.h"
#include "java.util.concurrent.ConcurrentMap.h"
#include "sun.reflect.misc.ReflectUtil.h"

static java::io::ObjectInputStream::NULL_HANDLE = -0x1;
static java::io::ObjectInputStream::primClasses;
static java::io::ObjectInputStream::unsharedMarker;
// .method static synthetic -get0(Ljava/io/ObjectInputStream;)Ljava/io/ObjectInputStream$BlockDataInputStream;
std::shared_ptr<java::io::ObjectInputStream_S_BlockDataInputStream> java::io::ObjectInputStream::_get0(std::shared_ptr<java::io::ObjectInputStream> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectInputStream;
	return _this->bin;

}
// .method static synthetic -get1(Ljava/io/ObjectInputStream;)Z
bool java::io::ObjectInputStream::_get1(std::shared_ptr<java::io::ObjectInputStream> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectInputStream;
	return _this->defaultDataEnd;

}
// .method static synthetic -get2(Ljava/io/ObjectInputStream;)Ljava/io/ObjectInputStream$HandleTable;
std::shared_ptr<java::io::ObjectInputStream_S_HandleTable> java::io::ObjectInputStream::_get2(std::shared_ptr<java::io::ObjectInputStream> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectInputStream;
	return _this->handles;

}
// .method static synthetic -get3(Ljava/io/ObjectInputStream;)I
int java::io::ObjectInputStream::_get3(std::shared_ptr<java::io::ObjectInputStream> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectInputStream;
	return _this->passHandle;

}
// .method static synthetic -set0(Ljava/io/ObjectInputStream;I)I
int java::io::ObjectInputStream::_set0(std::shared_ptr<java::io::ObjectInputStream> _this,int _value)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectInputStream;
	//    .param p1, "-value"    # I
	_this->passHandle = _value;
	return _value;

}
// .method static synthetic -wrap0(Ljava/io/ObjectInputStream;Z)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream::_wrap0(std::shared_ptr<java::io::ObjectInputStream> _this,bool unshared)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectInputStream;
	//    .param p1, "unshared"    # Z
	return _this->readObject0(unshared);

}
// .method static synthetic -wrap1([BI[DII)V
void java::io::ObjectInputStream::_wrap1(std::shared_ptr<unsigned char[]> src,int srcpos,std::shared_ptr<double[]> dst,int dstpos,int ndoubles)
{
	
	//    .param p0, "src"    # [B
	//    .param p1, "srcpos"    # I
	//    .param p2, "dst"    # [D
	//    .param p3, "dstpos"    # I
	//    .param p4, "ndoubles"    # I
	java::io::ObjectInputStream::bytesToDoubles(src, srcpos, dst, dstpos, ndoubles);
	return;

}
// .method static synthetic -wrap2([BI[FII)V
void java::io::ObjectInputStream::_wrap2(std::shared_ptr<unsigned char[]> src,int srcpos,std::shared_ptr<float[]> dst,int dstpos,int nfloats)
{
	
	//    .param p0, "src"    # [B
	//    .param p1, "srcpos"    # I
	//    .param p2, "dst"    # [F
	//    .param p3, "dstpos"    # I
	//    .param p4, "nfloats"    # I
	java::io::ObjectInputStream::bytesToFloats(src, srcpos, dst, dstpos, nfloats);
	return;

}
// .method static synthetic -wrap3(Ljava/io/ObjectInputStream;)V
void java::io::ObjectInputStream::_wrap3(std::shared_ptr<java::io::ObjectInputStream> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectInputStream;
	_this->handleReset();
	return;

}
// .method static constructor <clinit>()V
void java::io::ObjectInputStream::static_cinit()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	
	cVar0 = std::make_shared<java::lang::Object>();
	java::io::ObjectInputStream::unsharedMarker = cVar0;
	cVar1 = std::make_shared<java::util::HashMap>(0x8, 0x3f800000);
	java::io::ObjectInputStream::primClasses = cVar1;
	java::io::ObjectInputStream::primClasses->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("boolean")), java::lang::Boolean::TYPE);
	java::io::ObjectInputStream::primClasses->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("byte")), java::lang::Byte::TYPE);
	java::io::ObjectInputStream::primClasses->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("char")), java::lang::Character::TYPE);
	java::io::ObjectInputStream::primClasses->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("short")), java::lang::Short::TYPE);
	java::io::ObjectInputStream::primClasses->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("int")), java::lang::Integer::TYPE);
	java::io::ObjectInputStream::primClasses->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("long")), java::lang::Long::TYPE);
	java::io::ObjectInputStream::primClasses->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("float")), java::lang::Float::TYPE);
	java::io::ObjectInputStream::primClasses->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("double")), java::lang::Double::TYPE);
	java::io::ObjectInputStream::primClasses->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("void")), java::lang::Void::TYPE);
	return;

}
// .method protected constructor <init>()V
java::io::ObjectInputStream::ObjectInputStream()
{
	
	std::shared_ptr<java::io::ObjectInputStream_S_BlockDataInputStream> cVar0;
	std::shared_ptr<java::lang::SecurityManager> sm;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 280        value = {
	// 281            Ljava/io/IOException;,
	// 282            Ljava/lang/SecurityException;
	// 283        }
	// 284    .end annotation
	cVar0 = 0x0;
	// 290    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->passHandle = -0x1;
	this->defaultDataEnd = 0x0;
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_15;
	sm->checkPermission(java::io::ObjectInputStream::SUBCLASS_IMPLEMENTATION_PERMISSION);
label_cond_15:
	this->bin = cVar0;
	this->handles = cVar0;
	this->vlist = cVar0;
	this->enableOverride = 0x1;
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;)V
java::io::ObjectInputStream::ObjectInputStream(std::shared_ptr<java::io::InputStream> in)
{
	
	bool cVar0;
	std::shared_ptr<java::io::ObjectInputStream_S_BlockDataInputStream> cVar1;
	std::shared_ptr<java::io::ObjectInputStream_S_HandleTable> cVar2;
	std::shared_ptr<java::io::ObjectInputStream_S_ValidationList> cVar3;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 339        value = {
	// 340            Ljava/io/IOException;
	// 341        }
	// 342    .end annotation
	cVar0 = 0x0;
	// 348    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->passHandle = -0x1;
	this->defaultDataEnd = cVar0;
	this->verifySubclass();
	cVar1 = std::make_shared<java::io::ObjectInputStream_S_BlockDataInputStream>(this, in);
	this->bin = cVar1;
	cVar2 = std::make_shared<java::io::ObjectInputStream_S_HandleTable>(0xa);
	this->handles = cVar2;
	cVar3 = std::make_shared<java::io::ObjectInputStream_S_ValidationList>();
	this->vlist = cVar3;
	this->enableOverride = cVar0;
	this->readStreamHeader();
	this->bin->setBlockDataMode(0x1);
	return;

}
// .method private static auditSubclass(Ljava/lang/Class;)Z
bool java::io::ObjectInputStream::auditSubclass(std::shared_ptr<java::lang::Class<java::lang::Object>> subcl)
{
	
	std::shared_ptr<java::io::ObjectInputStream_S_1> cVar0;
	std::shared_ptr<java::lang::Boolean> result;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 404        value = {
	// 405            "(",
	// 406            "Ljava/lang/Class",
	// 407            "<*>;)Z"
	// 408        }
	// 409    .end annotation
	//    .local p0, "subcl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = std::make_shared<java::io::ObjectInputStream_S_1>(subcl);
	result = java::security::AccessController::doPrivileged(cVar0);
	result->checkCast("java::lang::Boolean");
	//    .local v0, "result":Ljava/lang/Boolean;
	return result->booleanValue();

}
// .method private checkResolve(Ljava/lang/Object;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream::checkResolve(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::lang::Object> rep;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 444        value = {
	// 445            Ljava/io/IOException;
	// 446        }
	// 447    .end annotation
	if ( !(this->enableResolve) )  
		goto label_cond_e;
	if ( !(this->handles->lookupException(this->passHandle)) )  
		goto label_cond_f;
label_cond_e:
	return obj;
	// 469    .line 1402
label_cond_f:
	rep = this->resolveObject(obj);
	//    .local v0, "rep":Ljava/lang/Object;
	if ( rep == obj )
		goto label_cond_1c;
	this->handles->setObject(this->passHandle, rep);
label_cond_1c:
	return rep;

}
// .method private clear()V
void java::io::ObjectInputStream::clear()
{
	
	this->handles->clear();
	this->vlist->clear();
	return;

}
// .method private static cloneArray(Ljava/lang/Object;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream::cloneArray(std::shared_ptr<java::lang::Object> array)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p0, "array"    # Ljava/lang/Object;
	if ( !(array->instanceOf("std::vector<java::lang::Object>")) )  
		goto label_cond_b;
	array->checkCast("std::vector<java::lang::Object>");
	//    .end local p0    # "array":Ljava/lang/Object;
	return array->clone();
	// 529    .line 3532
	// 530    .restart local p0    # "array":Ljava/lang/Object;
label_cond_b:
	if ( !(array->instanceOf("bool[]")) )  
		goto label_cond_16;
	array->checkCast("bool[]");
	//    .end local p0    # "array":Ljava/lang/Object;
	return array->clone();
	// 546    .line 3534
	// 547    .restart local p0    # "array":Ljava/lang/Object;
label_cond_16:
	if ( !(array->instanceOf("unsigned char[]")) )  
		goto label_cond_21;
	array->checkCast("unsigned char[]");
	//    .end local p0    # "array":Ljava/lang/Object;
	return array->clone();
	// 563    .line 3536
	// 564    .restart local p0    # "array":Ljava/lang/Object;
label_cond_21:
	if ( !(array->instanceOf("char[]")) )  
		goto label_cond_2c;
	array->checkCast("char[]");
	//    .end local p0    # "array":Ljava/lang/Object;
	return array->clone();
	// 580    .line 3538
	// 581    .restart local p0    # "array":Ljava/lang/Object;
label_cond_2c:
	if ( !(array->instanceOf("double[]")) )  
		goto label_cond_37;
	array->checkCast("double[]");
	//    .end local p0    # "array":Ljava/lang/Object;
	return array->clone();
	// 597    .line 3540
	// 598    .restart local p0    # "array":Ljava/lang/Object;
label_cond_37:
	if ( !(array->instanceOf("float[]")) )  
		goto label_cond_42;
	array->checkCast("float[]");
	//    .end local p0    # "array":Ljava/lang/Object;
	return array->clone();
	// 614    .line 3542
	// 615    .restart local p0    # "array":Ljava/lang/Object;
label_cond_42:
	if ( !(array->instanceOf("int[]")) )  
		goto label_cond_4d;
	array->checkCast("int[]");
	//    .end local p0    # "array":Ljava/lang/Object;
	return array->clone();
	// 631    .line 3544
	// 632    .restart local p0    # "array":Ljava/lang/Object;
label_cond_4d:
	if ( !(array->instanceOf("long long[]")) )  
		goto label_cond_58;
	array->checkCast("long long[]");
	//    .end local p0    # "array":Ljava/lang/Object;
	return array->clone();
	// 648    .line 3546
	// 649    .restart local p0    # "array":Ljava/lang/Object;
label_cond_58:
	if ( !(array->instanceOf("short[]")) )  
		goto label_cond_63;
	array->checkCast("short[]");
	//    .end local p0    # "array":Ljava/lang/Object;
	return array->clone();
	// 665    .line 3549
	// 666    .restart local p0    # "array":Ljava/lang/Object;
label_cond_63:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;

}
// .method private defaultReadFields(Ljava/lang/Object;Ljava/io/ObjectStreamClass;)V
void java::io::ObjectInputStream::defaultReadFields(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectStreamClass> desc)
{
	
	int cVar0;
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<java::lang::ClassCastException> cVar1;
	int primDataSize;
	int objHandle;
	auto fields;
	std::shared<std::vector<std::vector<java::lang::Object>>> objVals;
	int i;
	std::shared_ptr<java::io::ObjectStreamField> f;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "desc"    # Ljava/io/ObjectStreamClass;
	//    .annotation system Ldalvik/annotation/Throws;
	// 680        value = {
	// 681            Ljava/io/IOException;
	// 682        }
	// 683    .end annotation
	cVar0 = 0x0;
	cl = desc->forClass();
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(cl) )  
		goto label_cond_17;
	if ( !(obj) )  
		goto label_cond_17;
	if ( !(( cl->isInstance(obj) ^ 0x1)) )  
		goto label_cond_17;
	cVar1 = std::make_shared<java::lang::ClassCastException>();
	// throw
	throw cVar1;
	// 714    .line 1988
label_cond_17:
	primDataSize = desc->getPrimDataSize();
	//    .local v7, "primDataSize":I
	if ( !(this->primVals) )  
		goto label_cond_24;
	if ( this->primVals->size() >= primDataSize )
		goto label_cond_28;
label_cond_24:
	this->primVals = std::make_shared<std::vector<unsigned char[]>>(primDataSize);
label_cond_28:
	this->bin->readFully(this->primVals, cVar0, primDataSize, cVar0);
	if ( !(obj) )  
		goto label_cond_36;
	desc->setPrimFieldValues(obj, this->primVals);
label_cond_36:
	objHandle = this->passHandle;
	//    .local v5, "objHandle":I
	fields = desc->getFields(cVar0);
	//    .local v2, "fields":[Ljava/io/ObjectStreamField;
	objVals = std::make_shared<std::vector<std::vector<java::lang::Object>>>(desc->getNumObjFields());
	//    .local v6, "objVals":[Ljava/lang/Object;
	//    .local v4, "numPrimFields":I
	i = 0x0;
	//    .local v3, "i":I
label_goto_47:
	if ( i >= objVals->size() )
		goto label_cond_68;
	f = fields[((fields->size() - objVals->size()) + i)];
	//    .local v1, "f":Ljava/io/ObjectStreamField;
	objVals[i] = this->readObject0(f->isUnshared());
	if ( !(f->getField()) )  
		goto label_cond_65;
	this->handles->markDependency(objHandle, this->passHandle);
label_cond_65:
	i = ( i + 0x1);
	goto label_goto_47;
	// 827    .line 2008
	// 828    .end local v1    # "f":Ljava/io/ObjectStreamField;
label_cond_68:
	if ( !(obj) )  
		goto label_cond_6d;
	desc->setObjFieldValues(obj, objVals);
label_cond_6d:
	this->passHandle = objHandle;
	return;

}
// .method private handleReset()V
void java::io::ObjectInputStream::handleReset()
{
	
	std::shared_ptr<java::io::StreamCorruptedException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 846        value = {
	// 847            Ljava/io/StreamCorruptedException;
	// 848        }
	// 849    .end annotation
	if ( this->depth <= 0 )
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::StreamCorruptedException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected reset; recursion depth: ")))->append(this->depth)->toString());
	// throw
	throw cVar0;
	// 886    .line 2041
label_cond_20:
	this->clear();
	return;

}
// .method private isCustomSubclass()Z
bool java::io::ObjectInputStream::isCustomSubclass()
{
	
	bool cVar0;
	
	if ( this->getClass()->getClassLoader() == java::io::ObjectInputStream()->getClassLoader() )
		goto label_cond_12;
	cVar0 = 0x1;
label_goto_11:
	return cVar0;
label_cond_12:
	cVar0 = 0x0;
	goto label_goto_11;

}
// .method private static latestUserDefinedLoader()Ljava/lang/ClassLoader;
std::shared_ptr<java::lang::ClassLoader> java::io::ObjectInputStream::latestUserDefinedLoader()
{
	
	return dalvik::system::VMStack::getClosestUserClassLoader({const[class].FS-Param});

}
// .method private readArray(Z)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream::readArray(bool unshared)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::InternalError> cVar1;
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	int len;
	std::shared_ptr<java::lang::Object> array;
	std::shared_ptr<java::lang::Class> ccl;
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<java::lang::Object> cVar2;
	int arrayHandle;
	std::shared_ptr<java::lang::ClassNotFoundException> resolveEx;
	int i;
	std::shared_ptr<int[]> cVar4;
	std::shared_ptr<unsigned char[]> cVar5;
	std::shared_ptr<long long[]> cVar6;
	std::shared_ptr<float[]> cVar7;
	std::shared_ptr<double[]> cVar8;
	std::shared_ptr<short[]> cVar9;
	std::shared_ptr<char[]> cVar10;
	std::shared_ptr<bool[]> cVar11;
	std::shared_ptr<java::lang::InternalError> cVar12;
	std::shared_ptr<std::vector<java::lang::Object>> oa;
	
	//    .param p1, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 944        value = {
	// 945            Ljava/io/IOException;
	// 946        }
	// 947    .end annotation
	cVar0 = 0x0;
	if ( this->bin->readByte() == 0x75 )
		goto label_cond_11;
	cVar1 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar1;
	// 970    .line 1667
label_cond_11:
	desc = this->readClassDesc(cVar0);
	//    .local v4, "desc":Ljava/io/ObjectStreamClass;
	len = this->bin->readInt();
	//    .local v6, "len":I
	array = 0x0;
	//    .local v0, "array":Ljava/lang/Object;
	ccl = 0x0;
	//    .local v2, "ccl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cl = desc->forClass();
	//    .local v3, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(cl) )  
		goto label_cond_2b;
	ccl = cl->getComponentType();
	//    .local v2, "ccl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	array = java::lang::reflect::Array::newInstance(ccl, len);
	//    .end local v0    # "array":Ljava/lang/Object;
	//    .end local v2    # "ccl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_2b:
	if ( !(unshared) )  
		goto label_cond_4b;
	cVar2 = java::io::ObjectInputStream::unsharedMarker;
label_goto_31:
	arrayHandle = this->handles->assign(cVar2);
	//    .local v1, "arrayHandle":I
	resolveEx = desc->getResolveException();
	//    .local v8, "resolveEx":Ljava/lang/ClassNotFoundException;
	if ( !(resolveEx) )  
		goto label_cond_40;
	this->handles->markException(arrayHandle, resolveEx);
label_cond_40:
	if ( ccl )     
		goto label_cond_4d;
	i = 0x0;
	//    .local v5, "i":I
label_goto_43:
	if ( i >= len )
		goto label_cond_5f;
	this->readObject0(cVar0);
	i = ( i + 0x1);
	goto label_goto_43;
	// 1061    .end local v1    # "arrayHandle":I
	// 1062    .end local v5    # "i":I
	// 1063    .end local v8    # "resolveEx":Ljava/lang/ClassNotFoundException;
label_cond_4b:
	cVar2 = array;
	goto label_goto_31;
	// 1070    .line 1687
	// 1071    .restart local v1    # "arrayHandle":I
	// 1072    .restart local v8    # "resolveEx":Ljava/lang/ClassNotFoundException;
label_cond_4d:
	if ( !(ccl->isPrimitive()) )  
		goto label_cond_c9;
	if ( ccl != java::lang::Integer::TYPE )
		goto label_cond_67;
	cVar4 = array;
	cVar4->checkCast("int[]");
	this->bin->readInts(cVar4, cVar0, len);
label_cond_5f:
label_goto_5f:
	this->handles->finish(arrayHandle);
	this->passHandle = arrayHandle;
	return array;
	// 1107    .line 1690
label_cond_67:
	if ( ccl != java::lang::Byte::TYPE )
		goto label_cond_75;
	cVar5 = array;
	cVar5->checkCast("unsigned char[]");
	this->bin->readFully(cVar5, cVar0, len, 0x1);
	goto label_goto_5f;
	// 1126    .line 1692
label_cond_75:
	if ( ccl != java::lang::Long::TYPE )
		goto label_cond_82;
	cVar6 = array;
	cVar6->checkCast("long long[]");
	this->bin->readLongs(cVar6, cVar0, len);
	goto label_goto_5f;
	// 1143    .line 1694
label_cond_82:
	if ( ccl != java::lang::Float::TYPE )
		goto label_cond_8f;
	cVar7 = array;
	cVar7->checkCast("float[]");
	this->bin->readFloats(cVar7, cVar0, len);
	goto label_goto_5f;
	// 1160    .line 1696
label_cond_8f:
	if ( ccl != java::lang::Double::TYPE )
		goto label_cond_9c;
	cVar8 = array;
	cVar8->checkCast("double[]");
	this->bin->readDoubles(cVar8, cVar0, len);
	goto label_goto_5f;
	// 1177    .line 1698
label_cond_9c:
	if ( ccl != java::lang::Short::TYPE )
		goto label_cond_a9;
	cVar9 = array;
	cVar9->checkCast("short[]");
	this->bin->readShorts(cVar9, cVar0, len);
	goto label_goto_5f;
	// 1194    .line 1700
label_cond_a9:
	if ( ccl != java::lang::Character::TYPE )
		goto label_cond_b6;
	cVar10 = array;
	cVar10->checkCast("char[]");
	this->bin->readChars(cVar10, cVar0, len);
	goto label_goto_5f;
	// 1211    .line 1702
label_cond_b6:
	if ( ccl != java::lang::Boolean::TYPE )
		goto label_cond_c3;
	cVar11 = array;
	cVar11->checkCast("bool[]");
	this->bin->readBooleans(cVar11, cVar0, len);
	goto label_goto_5f;
	// 1228    .line 1705
label_cond_c3:
	cVar12 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar12;
label_cond_c9:
	oa = array;
	oa->checkCast("std::vector<java::lang::Object>");
	//    .local v7, "oa":[Ljava/lang/Object;
	i = 0x0;
	//    .restart local v5    # "i":I
label_goto_cd:
	if ( i >= len )
		goto label_cond_5f;
	oa[i] = this->readObject0(cVar0);
	this->handles->markDependency(arrayHandle, this->passHandle);
	i = ( i + 0x1);
	goto label_goto_cd;

}
// .method private readClass(Z)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::io::ObjectInputStream::readClass(bool unshared)
{
	
	std::shared_ptr<java::lang::InternalError> cVar0;
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::lang::ClassNotFoundException> resolveEx;
	
	//    .param p1, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 1274        value = {
	// 1275            "(Z)",
	// 1276            "Ljava/lang/Class",
	// 1277            "<*>;"
	// 1278        }
	// 1279    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1282        value = {
	// 1283            Ljava/io/IOException;
	// 1284        }
	// 1285    .end annotation
	if ( this->bin->readByte() == 0x76 )
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar0;
	// 1306    .line 1487
label_cond_10:
	desc = this->readClassDesc(0x0);
	//    .local v1, "desc":Ljava/io/ObjectStreamClass;
	cl = desc->forClass();
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(unshared) )  
		goto label_cond_3a;
	cVar1 = java::io::ObjectInputStream::unsharedMarker;
label_goto_1f:
	this->passHandle = this->handles->assign(cVar1);
	resolveEx = desc->getResolveException();
	//    .local v2, "resolveEx":Ljava/lang/ClassNotFoundException;
	if ( !(resolveEx) )  
		goto label_cond_32;
	this->handles->markException(this->passHandle, resolveEx);
label_cond_32:
	this->handles->finish(this->passHandle);
	return cl;
	// 1362    .end local v2    # "resolveEx":Ljava/lang/ClassNotFoundException;
label_cond_3a:
	cVar1 = cl;
	goto label_goto_1f;

}
// .method private readClassDesc(Z)Ljava/io/ObjectStreamClass;
std::shared_ptr<java::io::ObjectStreamClass> java::io::ObjectInputStream::readClassDesc(bool unshared)
{
	
	unsigned char tc;
	std::shared_ptr<java::io::StreamCorruptedException> cVar0;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar1;
	std::shared_ptr<java::io::ObjectStreamClass> cVar2;
	std::shared_ptr<java::io::ObjectStreamClass> cVar3;
	
	//    .param p1, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1374        value = {
	// 1375            Ljava/io/IOException;
	// 1376        }
	// 1377    .end annotation
	tc = this->bin->peekByte();
	//    .local v0, "tc":B
	// switch
	{
	auto item = ( tc );
	if (item == 0x70) goto label_sswitch_20;
	if (item == 0x71) goto label_sswitch_27;
	if (item == 0x72) goto label_sswitch_33;
	if (item == 0x7d) goto label_sswitch_2e;
	}
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar1[0x0] = java::lang::Byte::valueOf(tc);
	cVar0 = std::make_shared<java::io::StreamCorruptedException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid type code: %02X")), cVar1));
	// throw
	throw cVar0;
	// 1418    .line 1512
label_sswitch_20:
	cVar2 = this->readNull();
	cVar2->checkCast("java::io::ObjectStreamClass");
	return cVar2;
	// 1428    .line 1515
label_sswitch_27:
	cVar3 = this->readHandle(unshared);
	cVar3->checkCast("java::io::ObjectStreamClass");
	return cVar3;
	// 1438    .line 1518
label_sswitch_2e:
	return this->readProxyDesc(unshared);
	// 1446    .line 1521
label_sswitch_33:
	return this->readNonProxyDesc(unshared);
	// 1454    .line 1510
	// 1455    :sswitch_data_38
	// 1456    .sparse-switch
	// 1457        0x70 -> :sswitch_20
	// 1458        0x71 -> :sswitch_27
	// 1459        0x72 -> :sswitch_33
	// 1460        0x7d -> :sswitch_2e
	// 1461    .end sparse-switch

}
// .method private readEnum(Z)Ljava/lang/Enum;
std::shared_ptr<java::lang::Enum<java::lang::Object>> java::io::ObjectInputStream::readEnum(bool unshared)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::Object> cVar5;
	std::shared_ptr<java::lang::InternalError> cVar2;
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	std::shared_ptr<java::io::InvalidClassException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	int enumHandle;
	std::shared_ptr<java::lang::ClassNotFoundException> resolveEx;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<java::io::InvalidObjectException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::io::IOException> cVar8;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Object> en;
	
	//    .param p1, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 1468        value = {
	// 1469            "(Z)",
	// 1470            "Ljava/lang/Enum",
	// 1471            "<*>;"
	// 1472        }
	// 1473    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1476        value = {
	// 1477            Ljava/io/IOException;
	// 1478        }
	// 1479    .end annotation
	cVar0 = 0x0;
	cVar5 = 0x0;
	if ( this->bin->readByte() == 0x7e )
		goto label_cond_12;
	cVar2 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar2;
	// 1504    .line 1729
label_cond_12:
	desc = this->readClassDesc(cVar0);
	//    .local v1, "desc":Ljava/io/ObjectStreamClass;
	if ( desc->isEnum() )     
		goto label_cond_36;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::io::InvalidClassException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("non-enum class: ")))->append(desc)->toString());
	// throw
	throw cVar3;
	// 1543    .line 1734
label_cond_36:
	if ( !(unshared) )  
		goto label_cond_3c;
	cVar5 = java::io::ObjectInputStream::unsharedMarker;
label_cond_3c:
	enumHandle = this->handles->assign(cVar5);
	//    .local v3, "enumHandle":I
	resolveEx = desc->getResolveException();
	//    .local v6, "resolveEx":Ljava/lang/ClassNotFoundException;
	if ( !(resolveEx) )  
		goto label_cond_4b;
	this->handles->markException(enumHandle, resolveEx);
label_cond_4b:
	name = this->readString(cVar0);
	//    .local v5, "name":Ljava/lang/String;
	//    .local v7, "result":Ljava/lang/Enum;, "Ljava/lang/Enum<*>;"
	cl = desc->forClass();
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(cl) )  
		goto label_cond_62;
	try {
	//label_try_start_56:
	//label_try_end_59:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6a;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_56 .. :try_end_59} :catch_6a
	en = java::lang::Enum::valueOf(cl, name);
	//    .local v2, "en":Ljava/lang/Enum;, "Ljava/lang/Enum<*>;"
	//    .local v7, "result":Ljava/lang/Enum;, "Ljava/lang/Enum<*>;"
	if ( unshared )     
		goto label_cond_62;
	this->handles->setObject(enumHandle, en);
	//    .end local v2    # "en":Ljava/lang/Enum;, "Ljava/lang/Enum<*>;"
	//    .end local v7    # "result":Ljava/lang/Enum;, "Ljava/lang/Enum<*>;"
label_cond_62:
	this->handles->finish(enumHandle);
	this->passHandle = enumHandle;
	return 0x0;
	// 1626    .line 1748
	// 1627    .local v7, "result":Ljava/lang/Enum;, "Ljava/lang/Enum<*>;"
label_catch_6a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v4, "ex":Ljava/lang/IllegalArgumentException;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::io::InvalidObjectException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("enum constant ")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" does not exist in ")))->append(cl)->toString());
	cVar8 = cVar6->initCause(getCatchExcetionFromList);
	cVar8->checkCast("java::io::IOException");
	// throw
	throw cVar8;

}
// .method private readExternalData(Ljava/io/Externalizable;Ljava/io/ObjectStreamClass;)V
void java::io::ObjectInputStream::readExternalData(std::shared_ptr<java::io::Externalizable> obj,std::shared_ptr<java::io::ObjectStreamClass> desc)
{
	
	std::shared_ptr<java::io::SerialCallbackContext> oldContext;
	int blocked;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj"    # Ljava/io/Externalizable;
	//    .param p2, "desc"    # Ljava/io/ObjectStreamClass;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1681        value = {
	// 1682            Ljava/io/IOException;
	// 1683        }
	// 1684    .end annotation
	oldContext = this->curContext;
	//    .local v2, "oldContext":Ljava/io/SerialCallbackContext;
	if ( !(oldContext) )  
		goto label_cond_8;
	oldContext->check();
label_cond_8:
	this->curContext = 0x0;
	try {
	//label_try_start_a:
	blocked = desc->hasBlockExternalData();
	//    .local v0, "blocked":Z
	if ( !(blocked) )  
		goto label_cond_16;
	this->bin->setBlockDataMode(0x1);
	//label_try_end_16:
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catchall {:try_start_a .. :try_end_16} :catchall_31
label_cond_16:
	if ( !(obj) )  
		goto label_cond_1b;
	try {
	//label_try_start_18:
	obj->readExternal(this);
	//label_try_end_1b:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_28;
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_18 .. :try_end_1b} :catch_28
	//    .catchall {:try_start_18 .. :try_end_1b} :catchall_31
label_cond_1b:
label_goto_1b:
	if ( !(blocked) )  
		goto label_cond_20;
	try {
	//label_try_start_1d:
	this->skipCustomData();
	//label_try_end_20:
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catchall {:try_start_1d .. :try_end_20} :catchall_31
label_cond_20:
	if ( !(oldContext) )  
		goto label_cond_25;
	oldContext->check();
label_cond_25:
	this->curContext = oldContext;
	return;
	// 1758    .line 1846
label_catch_28:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/lang/ClassNotFoundException;
	try {
	//label_try_start_29:
	this->handles->markException(this->passHandle, getCatchExcetionFromList);
	//label_try_end_30:
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catchall {:try_start_29 .. :try_end_30} :catchall_31
	goto label_goto_1b;
	// 1775    .line 1860
	// 1776    .end local v0    # "blocked":Z
	// 1777    .end local v1    # "ex":Ljava/lang/ClassNotFoundException;
label_catchall_31:
	// move-exception
	
	if ( !(oldContext) )  
		goto label_cond_37;
	oldContext->check();
label_cond_37:
	this->curContext = oldContext;
	// throw
	throw;

}
// .method private readFatalException()Ljava/io/IOException;
std::shared_ptr<java::io::IOException> java::io::ObjectInputStream::readFatalException()
{
	
	std::shared_ptr<java::lang::InternalError> cVar0;
	std::shared_ptr<java::io::IOException> e;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1798        value = {
	// 1799            Ljava/io/IOException;
	// 1800        }
	// 1801    .end annotation
	if ( this->bin->readByte() == 0x7b )
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar0;
	// 1822    .line 2023
label_cond_10:
	this->clear();
	e = this->readObject0(0x0);
	e->checkCast("java::io::IOException");
	//    .local v0, "e":Ljava/io/IOException;
	this->clear();
	return e;

}
// .method private readHandle(Z)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream::readHandle(bool unshared)
{
	
	int cVar0;
	std::shared_ptr<java::lang::InternalError> cVar1;
	std::shared_ptr<java::io::StreamCorruptedException> cVar2;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar3;
	std::shared_ptr<java::io::InvalidObjectException> cVar4;
	std::shared_ptr<java::lang::Object> obj;
	std::shared_ptr<java::io::InvalidObjectException> cVar5;
	
	//    .param p1, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1847        value = {
	// 1848            Ljava/io/IOException;
	// 1849        }
	// 1850    .end annotation
	cVar0 = 0x7e0000;
	if ( this->bin->readByte() == 0x71 )
		goto label_cond_13;
	cVar1 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar1;
	// 1875    .line 1456
label_cond_13:
	this->passHandle = (this->bin->readInt() -  cVar0);
	if ( this->passHandle < 0 ) 
		goto label_cond_2a;
	if ( this->passHandle <  this->handles->size() )
		goto label_cond_43;
label_cond_2a:
	cVar3 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar3[0x0] = java::lang::Integer::valueOf((this->passHandle +  cVar0));
	cVar2 = std::make_shared<java::io::StreamCorruptedException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid handle value: %08X")), cVar3));
	// throw
	throw cVar2;
	// 1932    .line 1462
label_cond_43:
	if ( !(unshared) )  
		goto label_cond_4e;
	cVar4 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot read back reference as unshared")));
	// throw
	throw cVar4;
	// 1947    .line 1468
label_cond_4e:
	obj = this->handles->lookupObject(this->passHandle);
	//    .local v0, "obj":Ljava/lang/Object;
	if ( obj != java::io::ObjectInputStream::unsharedMarker )
		goto label_cond_63;
	cVar5 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot read back reference to unshared object")));
	// throw
	throw cVar5;
	// 1974    .line 1474
label_cond_63:
	return obj;

}
// .method private readNonProxyDesc(Z)Ljava/io/ObjectStreamClass;
std::shared_ptr<java::io::ObjectStreamClass> java::io::ObjectInputStream::readNonProxyDesc(bool unshared)
{
	
	std::shared_ptr<java::lang::InternalError> cVar0;
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	std::shared_ptr<java::lang::Object> cVar1;
	int descHandle;
	std::shared_ptr<java::io::InvalidClassException> cVar3;
	std::shared_ptr<java::io::IOException> cVar4;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::ObjectStreamClass> readDesc;
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<java::lang::ClassNotFoundException> resolveEx;
	
	//    .param p1, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1983        value = {
	// 1984            Ljava/io/IOException;
	// 1985        }
	// 1986    .end annotation
	if ( this->bin->readByte() == 0x72 )
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar0;
	// 2007    .line 1599
label_cond_10:
	desc = std::make_shared<java::io::ObjectStreamClass>();
	//    .local v2, "desc":Ljava/io/ObjectStreamClass;
	if ( !(unshared) )  
		goto label_cond_54;
	cVar1 = java::io::ObjectInputStream::unsharedMarker;
label_goto_1b:
	descHandle = this->handles->assign(cVar1);
	//    .local v3, "descHandle":I
	this->passHandle = -0x1;
	0x0;
	//    .local v5, "readDesc":Ljava/io/ObjectStreamClass;
	try {
	//label_try_start_23:
	//label_try_end_26:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_56;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_23 .. :try_end_26} :catch_56
	readDesc = this->readClassDescriptor();
	//    .local v5, "readDesc":Ljava/io/ObjectStreamClass;
	//    .local v1, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local v6, "resolveEx":Ljava/lang/ClassNotFoundException;
	this->bin->setBlockDataMode(0x1);
	//    .local v0, "checksRequired":Z
	try {
	//label_try_start_33:
	cl = this->resolveClass(readDesc);
	//    .local v1, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( cl )     
		goto label_cond_66;
	//    .end local v6    # "resolveEx":Ljava/lang/ClassNotFoundException;
	resolveEx = std::make_shared<java::lang::ClassNotFoundException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("null class")));
	//label_try_end_41:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6c;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_33 .. :try_end_41} :catch_6c
	//    .end local v1    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_41:
label_goto_41:
	this->skipCustomData();
	desc->initNonProxy(readDesc, cl, 0x0, this->readClassDesc(0x0));
	this->handles->finish(descHandle);
	this->passHandle = descHandle;
	return desc;
	// 2111    .end local v0    # "checksRequired":Z
	// 2112    .end local v3    # "descHandle":I
	// 2113    .end local v5    # "readDesc":Ljava/io/ObjectStreamClass;
label_cond_54:
	cVar1 = desc;
	goto label_goto_1b;
	// 2120    .line 1606
	// 2121    .restart local v3    # "descHandle":I
	// 2122    .local v5, "readDesc":Ljava/io/ObjectStreamClass;
label_catch_56:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v4, "ex":Ljava/lang/ClassNotFoundException;
	cVar3 = std::make_shared<java::io::InvalidClassException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("failed to read class descriptor")));
	cVar4 = cVar3->initCause(getCatchExcetionFromList);
	cVar4->checkCast("java::io::IOException");
	// throw
	throw cVar4;
	// 2144    .line 1618
	// 2145    .end local v4    # "ex":Ljava/lang/ClassNotFoundException;
	// 2146    .restart local v0    # "checksRequired":Z
	// 2147    .restart local v1    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 2148    .local v5, "readDesc":Ljava/io/ObjectStreamClass;
	// 2149    .restart local v6    # "resolveEx":Ljava/lang/ClassNotFoundException;
label_cond_66:
	if ( !(this->isCustomSubclass()) )  
		goto label_cond_41;
	try {
	//label_try_start_68:
	sun::reflect::misc::ReflectUtil::checkPackageAccess(cl);
	//label_try_end_6b:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6c;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_68 .. :try_end_6b} :catch_6c
	goto label_goto_41;
	// 2161    .line 1621
	// 2162    .end local v1    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 2163    .end local v6    # "resolveEx":Ljava/lang/ClassNotFoundException;
label_catch_6c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v4    # "ex":Ljava/lang/ClassNotFoundException;
	tryCatchExcetionList.pop_back();
	//    .local v6, "resolveEx":Ljava/lang/ClassNotFoundException;
	goto label_goto_41;

}
// .method private readNull()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream::readNull()
{
	
	std::shared_ptr<java::lang::InternalError> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2178        value = {
	// 2179            Ljava/io/IOException;
	// 2180        }
	// 2181    .end annotation
	if ( this->bin->readByte() == 0x70 )
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar0;
	// 2202    .line 1444
label_cond_10:
	this->passHandle = -0x1;
	return 0x0;

}
// .method private readObject0(Z)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream::readObject0(bool unshared)
{
	
	bool oldMode;
	int remain;
	std::shared_ptr<java::io::OptionalDataException> cVar0;
	std::shared_ptr<java::io::OptionalDataException> cVar1;
	unsigned char tc;
	std::shared_ptr<java::io::StreamCorruptedException> cVar2;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar3;
	std::shared_ptr<java::io::OptionalDataException> cVar5;
	std::shared_ptr<java::io::StreamCorruptedException> cVar6;
	std::shared_ptr<java::io::OptionalDataException> cVar7;
	std::shared_ptr<java::io::StreamCorruptedException> cVar8;
	std::shared_ptr<java::io::WriteAbortedException> cVar4;
	
	//    .param p1, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 2218        value = {
	// 2219            Ljava/io/IOException;
	// 2220        }
	// 2221    .end annotation
	oldMode = this->bin->getBlockDataMode();
	//    .local v1, "oldMode":Z
	if ( !(oldMode) )  
		goto label_cond_27;
	remain = this->bin->currentBlockRemaining();
	//    .local v2, "remain":I
	if ( remain <= 0 )
		goto label_cond_18;
	cVar0 = std::make_shared<java::io::OptionalDataException>(remain);
	// throw
	throw cVar0;
	// 2257    .line 1309
label_cond_18:
	if ( !(this->defaultDataEnd) )  
		goto label_cond_22;
	cVar1 = std::make_shared<java::io::OptionalDataException>(0x1);
	// throw
	throw cVar1;
	// 2270    .line 1318
label_cond_22:
	this->bin->setBlockDataMode(0x0);
	//    .end local v2    # "remain":I
label_cond_27:
label_goto_27:
	tc = this->bin->peekByte();
	//    .local v3, "tc":B
	if ( tc != 0x79 )
		goto label_cond_3a;
	this->bin->readByte();
	this->handleReset();
	goto label_goto_27;
	// 2301    .line 1327
label_cond_3a:
	this->depth = ( this->depth + 0x1);
	// switch
	{
	auto item = ( tc );
	if (item == 112) goto label_pswitch_67;
	if (item == 113) goto label_pswitch_77;
	if (item == 114) goto label_pswitch_97;
	if (item == 115) goto label_pswitch_e3;
	if (item == 116) goto label_pswitch_a7;
	if (item == 117) goto label_pswitch_bb;
	if (item == 118) goto label_pswitch_87;
	if (item == 119) goto label_pswitch_104;
	if (item == 120) goto label_pswitch_126;
	if (item == 121) goto label_pswitch_43;
	if (item == 122) goto label_pswitch_104;
	if (item == 123) goto label_pswitch_f7;
	if (item == 124) goto label_pswitch_a7;
	if (item == 125) goto label_pswitch_97;
	if (item == 126) goto label_pswitch_cf;
	}
label_pswitch_43:
	try {
	//label_try_start_43:
	cVar3 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar3[0x0] = java::lang::Byte::valueOf(tc);
	cVar2 = std::make_shared<java::io::StreamCorruptedException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid type code: %02X")), cVar3));
	// throw
	throw cVar2;
	// 2340    :try_end_5a
	// 2341    .catchall {:try_start_43 .. :try_end_5a} :catchall_5a
	// 2343    .line 1384
label_catchall_5a:
	// move-exception
	
	this->depth = ( this->depth + -0x1);
	this->bin->setBlockDataMode(oldMode);
	// throw
	throw;
	// 2362    .line 1331
label_pswitch_67:
	try {
	//label_try_start_67:
	//label_try_end_6a:
	}
	catch (...){
		goto label_catchall_5a;
	}
	//    .catchall {:try_start_67 .. :try_end_6a} :catchall_5a
	this->depth = ( this->depth + -0x1);
	this->bin->setBlockDataMode(oldMode);
	return this->readNull();
	// 2386    .line 1334
label_pswitch_77:
	try {
	//label_try_start_77:
	//label_try_end_7a:
	}
	catch (...){
		goto label_catchall_5a;
	}
	//    .catchall {:try_start_77 .. :try_end_7a} :catchall_5a
	this->depth = ( this->depth + -0x1);
	this->bin->setBlockDataMode(oldMode);
	return this->readHandle(unshared);
	// 2410    .line 1337
label_pswitch_87:
	try {
	//label_try_start_87:
	//label_try_end_8a:
	}
	catch (...){
		goto label_catchall_5a;
	}
	//    .catchall {:try_start_87 .. :try_end_8a} :catchall_5a
	this->depth = ( this->depth + -0x1);
	this->bin->setBlockDataMode(oldMode);
	return this->readClass(unshared);
	// 2434    .line 1341
label_pswitch_97:
	try {
	//label_try_start_97:
	//label_try_end_9a:
	}
	catch (...){
		goto label_catchall_5a;
	}
	//    .catchall {:try_start_97 .. :try_end_9a} :catchall_5a
	this->depth = ( this->depth + -0x1);
	this->bin->setBlockDataMode(oldMode);
	return this->readClassDesc(unshared);
	// 2458    .line 1345
label_pswitch_a7:
	try {
	//label_try_start_a7:
	//label_try_end_ae:
	}
	catch (...){
		goto label_catchall_5a;
	}
	//    .catchall {:try_start_a7 .. :try_end_ae} :catchall_5a
	this->depth = ( this->depth + -0x1);
	this->bin->setBlockDataMode(oldMode);
	return this->checkResolve(this->readString(unshared));
	// 2486    .line 1348
label_pswitch_bb:
	try {
	//label_try_start_bb:
	//label_try_end_c2:
	}
	catch (...){
		goto label_catchall_5a;
	}
	//    .catchall {:try_start_bb .. :try_end_c2} :catchall_5a
	this->depth = ( this->depth + -0x1);
	this->bin->setBlockDataMode(oldMode);
	return this->checkResolve(this->readArray(unshared));
	// 2514    .line 1351
label_pswitch_cf:
	try {
	//label_try_start_cf:
	//label_try_end_d6:
	}
	catch (...){
		goto label_catchall_5a;
	}
	//    .catchall {:try_start_cf .. :try_end_d6} :catchall_5a
	this->depth = ( this->depth + -0x1);
	this->bin->setBlockDataMode(oldMode);
	return this->checkResolve(this->readEnum(unshared));
	// 2542    .line 1354
label_pswitch_e3:
	try {
	//label_try_start_e3:
	//label_try_end_ea:
	}
	catch (...){
		goto label_catchall_5a;
	}
	//    .catchall {:try_start_e3 .. :try_end_ea} :catchall_5a
	this->depth = ( this->depth + -0x1);
	this->bin->setBlockDataMode(oldMode);
	return this->checkResolve(this->readOrdinaryObject(unshared));
	// 2570    .line 1357
label_pswitch_f7:
	try {
	//label_try_start_f7:
	//    .local v0, "ex":Ljava/io/IOException;
	cVar4 = std::make_shared<java::io::WriteAbortedException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("writing aborted")), this->readFatalException());
	// throw
	throw cVar4;
	// 2587    .line 1362
	// 2588    .end local v0    # "ex":Ljava/io/IOException;
label_pswitch_104:
	if ( !(oldMode) )  
		goto label_cond_11d;
	this->bin->setBlockDataMode(0x1);
	this->bin->peek();
	cVar5 = std::make_shared<java::io::OptionalDataException>(this->bin->currentBlockRemaining());
	// throw
	throw cVar5;
	// 2619    .line 1368
label_cond_11d:
	cVar6 = std::make_shared<java::io::StreamCorruptedException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected block data")));
	// throw
	throw cVar6;
	// 2631    .line 1373
label_pswitch_126:
	if ( !(oldMode) )  
		goto label_cond_12f;
	cVar7 = std::make_shared<java::io::OptionalDataException>(0x1);
	// throw
	throw cVar7;
	// 2644    .line 1376
label_cond_12f:
	cVar8 = std::make_shared<java::io::StreamCorruptedException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected end of block data")));
	// throw
	throw cVar8;
	// 2655    :try_end_138
	// 2656    .catchall {:try_start_f7 .. :try_end_138} :catchall_5a
	// 2658    .line 1329
	// 2659    :pswitch_data_138
	// 2660    .packed-switch 0x70
	// 2661        :pswitch_67
	// 2662        :pswitch_77
	// 2663        :pswitch_97
	// 2664        :pswitch_e3
	// 2665        :pswitch_a7
	// 2666        :pswitch_bb
	// 2667        :pswitch_87
	// 2668        :pswitch_104
	// 2669        :pswitch_126
	// 2670        :pswitch_43
	// 2671        :pswitch_104
	// 2672        :pswitch_f7
	// 2673        :pswitch_a7
	// 2674        :pswitch_97
	// 2675        :pswitch_cf
	// 2676    .end packed-switch

}
// .method private readOrdinaryObject(Z)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream::readOrdinaryObject(bool unshared)
{
	
	std::shared_ptr<java::lang::InternalError> cVar0;
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	auto cl;
	std::shared_ptr<java::io::InvalidClassException> cVar1;
	std::shared_ptr<java::io::InvalidClassException> cVar5;
	std::shared_ptr<java::io::IOException> cVar6;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Object> obj;
	std::shared_ptr<java::lang::Object> cVar3;
	std::shared_ptr<java::lang::ClassNotFoundException> resolveEx;
	std::shared_ptr<java::io::Externalizable> cVar4;
	std::shared_ptr<java::lang::Object> rep;
	
	//    .param p1, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 2683        value = {
	// 2684            Ljava/io/IOException;
	// 2685        }
	// 2686    .end annotation
	if ( this->bin->readByte() == 0x73 )
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar0;
	// 2707    .line 1777
label_cond_10:
	desc = this->readClassDesc(0x0);
	//    .local v1, "desc":Ljava/io/ObjectStreamClass;
	desc->checkDeserialize();
	cl = desc->forClass();
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( cl == java::lang::String() )
		goto label_cond_24;
	if ( cl != java::lang::Class() )
		goto label_cond_2d;
label_cond_24:
	cVar1 = std::make_shared<java::io::InvalidClassException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid class descriptor")));
	// throw
	throw cVar1;
	// 2744    .line 1782
label_cond_2d:
	if ( cl == java::io::ObjectStreamClass() )
		goto label_cond_24;
	try {
	//label_try_start_31:
	if ( !(desc->isInstantiable()) )  
		goto label_cond_98;
	//label_try_end_3a:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	//    .catch Ljava/lang/Exception; {:try_start_31 .. :try_end_3a} :catch_9a
	obj = desc->newInstance();
label_goto_3b:
	if ( !(unshared) )  
		goto label_cond_b2;
	cVar3 = java::io::ObjectInputStream::unsharedMarker;
label_goto_41:
	this->passHandle = this->handles->assign(cVar3);
	resolveEx = desc->getResolveException();
	//    .local v5, "resolveEx":Ljava/lang/ClassNotFoundException;
	if ( !(resolveEx) )  
		goto label_cond_54;
	this->handles->markException(this->passHandle, resolveEx);
label_cond_54:
	if ( !(desc->isExternalizable()) )  
		goto label_cond_b4;
	cVar4 = obj;
	cVar4->checkCast("java::io::Externalizable");
	this->readExternalData(cVar4, desc);
label_goto_60:
	this->handles->finish(this->passHandle);
	if ( !(obj) )  
		goto label_cond_97;
	if ( this->handles->lookupException(this->passHandle) )     
		goto label_cond_97;
	if ( !(desc->hasReadResolveMethod()) )  
		goto label_cond_97;
	rep = desc->invokeReadResolve(obj);
	//    .local v4, "rep":Ljava/lang/Object;
	if ( !(unshared) )  
		goto label_cond_8d;
	if ( !(rep->getClass()->isArray()) )  
		goto label_cond_8d;
	rep = java::io::ObjectInputStream::cloneArray(rep);
label_cond_8d:
	if ( rep == obj )
		goto label_cond_97;
	obj = rep;
	//    .local v3, "obj":Ljava/lang/Object;
	this->handles->setObject(this->passHandle, rep);
	//    .end local v3    # "obj":Ljava/lang/Object;
	//    .end local v4    # "rep":Ljava/lang/Object;
label_cond_97:
	return obj;
	// 2884    .line 1788
	// 2885    .end local v5    # "resolveEx":Ljava/lang/ClassNotFoundException;
label_cond_98:
	obj = 0x0;
	//    .restart local v3    # "obj":Ljava/lang/Object;
	goto label_goto_3b;
	// 2892    .line 1789
	// 2893    .end local v3    # "obj":Ljava/lang/Object;
label_catch_9a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "ex":Ljava/lang/Exception;
	cVar5 = std::make_shared<java::io::InvalidClassException>(desc->forClass()->getName(), std::make_shared<java::lang::String>(std::make_shared<char[]>("unable to create instance")));
	cVar6 = cVar5->initCause(getCatchExcetionFromList);
	cVar6->checkCast("java::io::IOException");
	// throw
	throw cVar6;
	// 2924    .end local v2    # "ex":Ljava/lang/Exception;
label_cond_b2:
	cVar3 = obj;
	goto label_goto_41;
	// 2931    .line 1804
	// 2932    .restart local v5    # "resolveEx":Ljava/lang/ClassNotFoundException;
label_cond_b4:
	this->readSerialData(obj, desc);
	goto label_goto_60;

}
// .method private readProxyDesc(Z)Ljava/io/ObjectStreamClass;
std::shared_ptr<java::io::ObjectStreamClass> java::io::ObjectInputStream::readProxyDesc(bool unshared)
{
	
	std::shared_ptr<java::lang::InternalError> cVar0;
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	std::shared_ptr<java::lang::Object> cVar1;
	int descHandle;
	int numIfaces;
	std::shared<std::vector<std::vector<java::lang::String>>> ifaces;
	int i;
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<java::lang::ClassNotFoundException> resolveEx;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::InvalidClassException> cVar3;
	
	//    .param p1, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 2943        value = {
	// 2944            Ljava/io/IOException;
	// 2945        }
	// 2946    .end annotation
	if ( this->bin->readByte() == 0x7d )
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar0;
	// 2967    .line 1548
label_cond_10:
	desc = std::make_shared<java::io::ObjectStreamClass>();
	//    .local v1, "desc":Ljava/io/ObjectStreamClass;
	if ( !(unshared) )  
		goto label_cond_38;
	cVar1 = java::io::ObjectInputStream::unsharedMarker;
label_goto_1b:
	descHandle = this->handles->assign(cVar1);
	//    .local v2, "descHandle":I
	this->passHandle = -0x1;
	numIfaces = this->bin->readInt();
	//    .local v6, "numIfaces":I
	ifaces = std::make_shared<std::vector<std::vector<java::lang::String>>>(numIfaces);
	//    .local v5, "ifaces":[Ljava/lang/String;
	i = 0x0;
	//    .local v4, "i":I
label_goto_2b:
	if ( i >= numIfaces )
		goto label_cond_3a;
	ifaces[i] = this->bin->readUTF();
	i = ( i + 0x1);
	goto label_goto_2b;
	// 3025    .end local v2    # "descHandle":I
	// 3026    .end local v4    # "i":I
	// 3027    .end local v5    # "ifaces":[Ljava/lang/String;
	// 3028    .end local v6    # "numIfaces":I
label_cond_38:
	cVar1 = desc;
	goto label_goto_1b;
	// 3035    .line 1558
	// 3036    .restart local v2    # "descHandle":I
	// 3037    .restart local v4    # "i":I
	// 3038    .restart local v5    # "ifaces":[Ljava/lang/String;
	// 3039    .restart local v6    # "numIfaces":I
label_cond_3a:
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local v7, "resolveEx":Ljava/lang/ClassNotFoundException;
	this->bin->setBlockDataMode(0x1);
	try {
	//label_try_start_42:
	cl = this->resolveProxyClass(ifaces);
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( cl )     
		goto label_cond_63;
	//    .end local v7    # "resolveEx":Ljava/lang/ClassNotFoundException;
	resolveEx = std::make_shared<java::lang::ClassNotFoundException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("null class")));
	//label_try_end_50:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_72;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_42 .. :try_end_50} :catch_72
	//    .end local v0    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_50:
	this->skipCustomData();
	desc->initProxy(cl, 0x0, this->readClassDesc(0x0));
	this->handles->finish(descHandle);
	this->passHandle = descHandle;
	return desc;
	// 3099    .line 1564
	// 3100    .restart local v0    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 3101    .restart local v7    # "resolveEx":Ljava/lang/ClassNotFoundException;
label_cond_63:
	try {
	//label_try_start_63:
	if ( java::lang::reflect::Proxy::isProxyClass(cl) )     
		goto label_cond_75;
	cVar3 = std::make_shared<java::io::InvalidClassException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Not a proxy")));
	// throw
	throw cVar3;
	// 3119    .line 1574
	// 3120    .end local v0    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 3121    .end local v7    # "resolveEx":Ljava/lang/ClassNotFoundException;
label_catch_72:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "ex":Ljava/lang/ClassNotFoundException;
	tryCatchExcetionList.pop_back();
	//    .local v7, "resolveEx":Ljava/lang/ClassNotFoundException;
	goto label_goto_50;
	// 3132    .line 1571
	// 3133    .end local v3    # "ex":Ljava/lang/ClassNotFoundException;
	// 3134    .restart local v0    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 3135    .local v7, "resolveEx":Ljava/lang/ClassNotFoundException;
label_cond_75:
	sun::reflect::misc::ReflectUtil::checkProxyPackageAccess(this->getClass()->getClassLoader(), cl->getInterfaces());
	//label_try_end_84:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_72;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_63 .. :try_end_84} :catch_72
	goto label_goto_50;

}
// .method private readSerialData(Ljava/lang/Object;Ljava/io/ObjectStreamClass;)V
void java::io::ObjectInputStream::readSerialData(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectStreamClass> desc)
{
	
	bool cVar0;
	auto slots;
	int i;
	std::shared_ptr<java::io::ObjectStreamClass> slotDesc;
	std::shared_ptr<java::io::SerialCallbackContext> oldContext;
	std::shared_ptr<java::io::SerialCallbackContext> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "desc"    # Ljava/io/ObjectStreamClass;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3163        value = {
	// 3164            Ljava/io/IOException;
	// 3165        }
	// 3166    .end annotation
	cVar0 = 0x0;
	slots = desc->getClassDataLayout();
	//    .local v4, "slots":[Ljava/io/ObjectStreamClass$ClassDataSlot;
	i = 0x0;
	//    .local v1, "i":I
label_goto_7:
	if ( i >= slots->size() )
		goto label_cond_9c;
	slotDesc = slots[i]->desc;
	//    .local v3, "slotDesc":Ljava/io/ObjectStreamClass;
	if ( !(slots[i]->hasData) )  
		goto label_cond_86;
	if ( !(obj) )  
		goto label_cond_20;
	if ( !(this->handles->lookupException(this->passHandle)) )  
		goto label_cond_2f;
label_cond_20:
	this->defaultReadFields(0x0, slotDesc);
label_goto_23:
	if ( !(slotDesc->hasWriteObjectData()) )  
		goto label_cond_80;
	this->skipCustomData();
label_cond_2c:
label_goto_2c:
	i = ( i + 0x1);
	goto label_goto_7;
	// 3236    .line 1895
label_cond_2f:
	if ( !(slotDesc->hasReadObjectMethod()) )  
		goto label_cond_7c;
	oldContext = this->curContext;
	//    .local v2, "oldContext":Ljava/io/SerialCallbackContext;
	if ( !(oldContext) )  
		goto label_cond_3c;
	oldContext->check();
label_cond_3c:
	try {
	//label_try_start_3c:
	cVar1 = std::make_shared<java::io::SerialCallbackContext>(obj, slotDesc);
	this->curContext = cVar1;
	this->bin->setBlockDataMode(0x1);
	slotDesc->invokeReadObject(obj, this);
	//label_try_end_4c:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5b;
	}
	catch (...){
		goto label_catchall_6e;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_3c .. :try_end_4c} :catch_5b
	//    .catchall {:try_start_3c .. :try_end_4c} :catchall_6e
	this->curContext->setUsed();
	if ( !(oldContext) )  
		goto label_cond_56;
	oldContext->check();
label_cond_56:
label_goto_56:
	this->curContext = oldContext;
	this->defaultDataEnd = cVar0;
	goto label_goto_23;
	// 3297    .line 1904
label_catch_5b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/ClassNotFoundException;
	try {
	//label_try_start_5c:
	this->handles->markException(this->passHandle, getCatchExcetionFromList);
	//label_try_end_63:
	}
	catch (...){
		goto label_catchall_6e;
	}
	//    .catchall {:try_start_5c .. :try_end_63} :catchall_6e
	this->curContext->setUsed();
	if ( !(oldContext) )  
		goto label_cond_56;
	oldContext->check();
	goto label_goto_56;
	// 3325    .line 1913
	// 3326    .end local v0    # "ex":Ljava/lang/ClassNotFoundException;
label_catchall_6e:
	// move-exception
	
	this->curContext->setUsed();
	if ( !(oldContext) )  
		goto label_cond_79;
	oldContext->check();
label_cond_79:
	this->curContext = oldContext;
	// throw
	throw;
	// 3348    .line 1927
	// 3349    .end local v2    # "oldContext":Ljava/io/SerialCallbackContext;
label_cond_7c:
	this->defaultReadFields(obj, slotDesc);
	goto label_goto_23;
	// 3355    .line 1933
label_cond_80:
	this->bin->setBlockDataMode(cVar0);
	goto label_goto_2c;
	// 3363    .line 1936
label_cond_86:
	if ( !(obj) )  
		goto label_cond_2c;
	if ( !(slotDesc->hasReadObjectNoDataMethod()) )  
		goto label_cond_2c;
	if ( this->handles->lookupException(this->passHandle) )     
		goto label_cond_2c;
	slotDesc->invokeReadObjectNoData(obj);
	goto label_goto_2c;
	// 3391    .line 1944
	// 3392    .end local v3    # "slotDesc":Ljava/io/ObjectStreamClass;
label_cond_9c:
	return;

}
// .method private readString(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectInputStream::readString(bool unshared)
{
	
	unsigned char tc;
	std::shared_ptr<java::io::StreamCorruptedException> cVar0;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar1;
	std::shared_ptr<java::lang::String> str;
	std::shared_ptr<java::lang::Object> cVar2;
	
	//    .param p1, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 3401        value = {
	// 3402            Ljava/io/IOException;
	// 3403        }
	// 3404    .end annotation
	tc = this->bin->readByte();
	//    .local v1, "tc":B
	// switch
	{
	auto item = ( tc );
	if (item == 0x74) goto label_sswitch_20;
	if (item == 0x7c) goto label_sswitch_3a;
	}
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar1[0x0] = java::lang::Byte::valueOf(tc);
	cVar0 = std::make_shared<java::io::StreamCorruptedException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid type code: %02X")), cVar1));
	// throw
	throw cVar0;
	// 3445    .line 1642
label_sswitch_20:
	str = this->bin->readUTF();
	//    .local v0, "str":Ljava/lang/String;
label_goto_26:
	if ( !(unshared) )  
		goto label_cond_41;
	cVar2 = java::io::ObjectInputStream::unsharedMarker;
label_goto_2c:
	this->passHandle = this->handles->assign(cVar2);
	this->handles->finish(this->passHandle);
	return str;
	// 3479    .line 1646
	// 3480    .end local v0    # "str":Ljava/lang/String;
label_sswitch_3a:
	str = this->bin->readLongUTF();
	//    .restart local v0    # "str":Ljava/lang/String;
	goto label_goto_26;
label_cond_41:
	cVar2 = str;
	goto label_goto_2c;
	// 3497    .line 1640
	// 3498    nop
	// 3500    :sswitch_data_44
	// 3501    .sparse-switch
	// 3502        0x74 -> :sswitch_20
	// 3503        0x7c -> :sswitch_3a
	// 3504    .end sparse-switch

}
// .method private skipCustomData()V
void java::io::ObjectInputStream::skipCustomData()
{
	
	bool cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3510        value = {
	// 3511            Ljava/io/IOException;
	// 3512        }
	// 3513    .end annotation
	cVar0 = 0x0;
	//    .local v0, "oldHandle":I
label_goto_3:
	if ( !(this->bin->getBlockDataMode()) )  
		goto label_cond_15;
	this->bin->skipBlockData();
	this->bin->setBlockDataMode(cVar0);
label_cond_15:
	// switch
	{
	auto item = ( this->bin->peekByte() );
	if (item == 119) goto label_pswitch_22;
	if (item == 120) goto label_pswitch_29;
	if (item == 121) goto label_pswitch_1e;
	if (item == 122) goto label_pswitch_22;
	}
label_pswitch_1e:
	this->readObject0(cVar0);
	goto label_goto_3;
	// 3558    .line 1960
label_pswitch_22:
	this->bin->setBlockDataMode(0x1);
	goto label_goto_3;
	// 3568    .line 1964
label_pswitch_29:
	this->bin->readByte();
	this->passHandle = this->passHandle;
	return;
	// 3580    .line 1957
	// 3581    nop
	// 3583    :pswitch_data_32
	// 3584    .packed-switch 0x77
	// 3585        :pswitch_22
	// 3586        :pswitch_29
	// 3587        :pswitch_1e
	// 3588        :pswitch_22
	// 3589    .end packed-switch

}
// .method private verifySubclass()V
void java::io::ObjectInputStream::verifySubclass()
{
	
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::shared_ptr<java::io::ObjectStreamClass_S_WeakClassKey> key;
	std::shared_ptr<java::lang::Boolean> result;
	std::shared_ptr<java::lang::Object> result;
	
	cl = this->getClass();
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( cl != java::io::ObjectInputStream() )
		goto label_cond_9;
	return;
	// 3610    .line 1243
label_cond_9:
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v3, "sm":Ljava/lang/SecurityManager;
	if ( sm )     
		goto label_cond_10;
	return;
	// 3623    .line 1247
label_cond_10:
	java::io::ObjectStreamClass::processQueue(java::io::ObjectInputStream_S_Caches::subclassAuditsQueue, java::io::ObjectInputStream_S_Caches::subclassAudits);
	key = std::make_shared<java::io::ObjectStreamClass_S_WeakClassKey>(cl, java::io::ObjectInputStream_S_Caches::subclassAuditsQueue);
	//    .local v1, "key":Ljava/io/ObjectStreamClass$WeakClassKey;
	result = java::io::ObjectInputStream_S_Caches::subclassAudits->get(key);
	result->checkCast("java::lang::Boolean");
	//    .local v2, "result":Ljava/lang/Boolean;
	if ( result )     
		goto label_cond_35;
	result = java::lang::Boolean::valueOf(java::io::ObjectInputStream::auditSubclass(cl));
	java::io::ObjectInputStream_S_Caches::subclassAudits->putIfAbsent(key, result);
label_cond_35:
	if ( !(result->booleanValue()) )  
		goto label_cond_3c;
	return;
	// 3677    .line 1257
label_cond_3c:
	sm->checkPermission(java::io::ObjectInputStream::SUBCLASS_IMPLEMENTATION_PERMISSION);
	return;

}
// .method public available()I
int java::io::ObjectInputStream::available()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3692        value = {
	// 3693            Ljava/io/IOException;
	// 3694        }
	// 3695    .end annotation
	return this->bin->available();

}
// .method public close()V
void java::io::ObjectInputStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3711        value = {
	// 3712            Ljava/io/IOException;
	// 3713        }
	// 3714    .end annotation
	this->closed = 0x1;
	if ( this->depth )     
		goto label_cond_a;
	this->clear();
label_cond_a:
	this->bin->close();
	return;

}
// .method public defaultReadObject()V
void java::io::ObjectInputStream::defaultReadObject()
{
	
	bool cVar0;
	std::shared_ptr<java::io::SerialCallbackContext> ctx;
	std::shared_ptr<java::io::NotActiveException> cVar1;
	std::shared_ptr<java::io::ObjectStreamClass> curDesc;
	auto ex;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3743        value = {
	// 3744            Ljava/io/IOException;,
	// 3745            Ljava/lang/ClassNotFoundException;
	// 3746        }
	// 3747    .end annotation
	cVar0 = 0x1;
	ctx = this->curContext;
	//    .local v0, "ctx":Ljava/io/SerialCallbackContext;
	if ( ctx )     
		goto label_cond_e;
	cVar1 = std::make_shared<java::io::NotActiveException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not in call to readObject")));
	// throw
	throw cVar1;
	// 3768    .line 501
label_cond_e:
	//    .local v2, "curObj":Ljava/lang/Object;
	curDesc = ctx->getDesc();
	//    .local v1, "curDesc":Ljava/io/ObjectStreamClass;
	this->bin->setBlockDataMode(0x0);
	this->defaultReadFields(ctx->getObj(), curDesc);
	this->bin->setBlockDataMode(cVar0);
	if ( curDesc->hasWriteObjectData() )     
		goto label_cond_2c;
	this->defaultDataEnd = cVar0;
label_cond_2c:
	ex = this->handles->lookupException(this->passHandle);
	//    .local v3, "ex":Ljava/lang/ClassNotFoundException;
	if ( !(ex) )  
		goto label_cond_37;
	// throw
	throw ex;
	// 3823    .line 518
label_cond_37:
	return;

}
// .method protected enableResolveObject(Z)Z
bool java::io::ObjectInputStream::enableResolveObject(bool enable)
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	
	//    .param p1, "enable"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 3832        value = {
	// 3833            Ljava/lang/SecurityException;
	// 3834        }
	// 3835    .end annotation
	if ( enable != this->enableResolve )
		goto label_cond_5;
	return enable;
	// 3846    .line 782
label_cond_5:
	if ( !(enable) )  
		goto label_cond_12;
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_12;
	sm->checkPermission(java::io::ObjectInputStream::SUBSTITUTION_PERMISSION);
	//    .end local v0    # "sm":Ljava/lang/SecurityManager;
label_cond_12:
	this->enableResolve = enable;
	return ( this->enableResolve ^ 0x1);

}
// .method public read()I
int java::io::ObjectInputStream::read()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3880        value = {
	// 3881            Ljava/io/IOException;
	// 3882        }
	// 3883    .end annotation
	return this->bin->read();

}
// .method public read([BII)I
int java::io::ObjectInputStream::read(std::shared_ptr<unsigned char[]> buf,int off,int len)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	int endoff;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	
	//    .param p1, "buf"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 3902        value = {
	// 3903            Ljava/io/IOException;
	// 3904        }
	// 3905    .end annotation
	if ( buf )     
		goto label_cond_9;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 3920    .line 865
label_cond_9:
	endoff = (off + len);
	//    .local v0, "endoff":I
	if ( off < 0 ) 
		goto label_cond_f;
	if ( len >= 0 )
		goto label_cond_15;
label_cond_f:
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar1;
	// 3938    .line 866
label_cond_15:
	if ( endoff >  buf->size() )
		goto label_cond_f;
	if ( endoff < 0 ) 
		goto label_cond_f;
	return this->bin->read(buf, off, len, 0x0);

}
// .method public readBoolean()Z
bool java::io::ObjectInputStream::readBoolean()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3959        value = {
	// 3960            Ljava/io/IOException;
	// 3961        }
	// 3962    .end annotation
	return this->bin->readBoolean();

}
// .method public readByte()B
unsigned char java::io::ObjectInputStream::readByte()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3978        value = {
	// 3979            Ljava/io/IOException;
	// 3980        }
	// 3981    .end annotation
	return this->bin->readByte();

}
// .method public readChar()C
char java::io::ObjectInputStream::readChar()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3997        value = {
	// 3998            Ljava/io/IOException;
	// 3999        }
	// 4000    .end annotation
	return this->bin->readChar();

}
// .method protected readClassDescriptor()Ljava/io/ObjectStreamClass;
std::shared_ptr<java::io::ObjectStreamClass> java::io::ObjectInputStream::readClassDescriptor()
{
	
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4016        value = {
	// 4017            Ljava/io/IOException;,
	// 4018            Ljava/lang/ClassNotFoundException;
	// 4019        }
	// 4020    .end annotation
	desc = std::make_shared<java::io::ObjectStreamClass>();
	//    .local v0, "desc":Ljava/io/ObjectStreamClass;
	desc->readNonProxy(this);
	return desc;

}
// .method public readDouble()D
double java::io::ObjectInputStream::readDouble()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4039        value = {
	// 4040            Ljava/io/IOException;
	// 4041        }
	// 4042    .end annotation
	return this->bin->readDouble();

}
// .method public readFields()Ljava/io/ObjectInputStream$GetField;
std::shared_ptr<java::io::ObjectInputStream_S_GetField> java::io::ObjectInputStream::readFields()
{
	
	bool cVar0;
	std::shared_ptr<java::io::SerialCallbackContext> ctx;
	std::shared_ptr<java::io::NotActiveException> cVar1;
	std::shared_ptr<java::io::ObjectStreamClass> curDesc;
	std::shared_ptr<java::io::ObjectInputStream_S_GetFieldImpl> getField;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4058        value = {
	// 4059            Ljava/io/IOException;,
	// 4060            Ljava/lang/ClassNotFoundException;
	// 4061        }
	// 4062    .end annotation
	cVar0 = 0x1;
	ctx = this->curContext;
	//    .local v0, "ctx":Ljava/io/SerialCallbackContext;
	if ( ctx )     
		goto label_cond_e;
	cVar1 = std::make_shared<java::io::NotActiveException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not in call to readObject")));
	// throw
	throw cVar1;
	// 4083    .line 540
label_cond_e:
	ctx->getObj();
	//    .local v2, "curObj":Ljava/lang/Object;
	curDesc = ctx->getDesc();
	//    .local v1, "curDesc":Ljava/io/ObjectStreamClass;
	this->bin->setBlockDataMode(0x0);
	getField = std::make_shared<java::io::ObjectInputStream_S_GetFieldImpl>(this, curDesc);
	//    .local v3, "getField":Ljava/io/ObjectInputStream$GetFieldImpl;
	getField->readFields();
	this->bin->setBlockDataMode(cVar0);
	if ( curDesc->hasWriteObjectData() )     
		goto label_cond_31;
	this->defaultDataEnd = cVar0;
label_cond_31:
	return getField;

}
// .method public readFloat()F
float java::io::ObjectInputStream::readFloat()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4135        value = {
	// 4136            Ljava/io/IOException;
	// 4137        }
	// 4138    .end annotation
	return this->bin->readFloat();

}
// .method public readFully([B)V
void java::io::ObjectInputStream::readFully(std::shared_ptr<unsigned char[]> buf)
{
	
	int cVar0;
	
	//    .param p1, "buf"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 4155        value = {
	// 4156            Ljava/io/IOException;
	// 4157        }
	// 4158    .end annotation
	cVar0 = 0x0;
	this->bin->readFully(buf, cVar0, buf->size(), cVar0);
	return;

}
// .method public readFully([BII)V
void java::io::ObjectInputStream::readFully(std::shared_ptr<unsigned char[]> buf,int off,int len)
{
	
	int endoff;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p1, "buf"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 4180        value = {
	// 4181            Ljava/io/IOException;
	// 4182        }
	// 4183    .end annotation
	endoff = (off + len);
	//    .local v0, "endoff":I
	if ( off < 0 ) 
		goto label_cond_7;
	if ( len >= 0 )
		goto label_cond_d;
label_cond_7:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 4205    .line 1033
label_cond_d:
	if ( endoff >  buf->size() )
		goto label_cond_7;
	if ( endoff < 0 ) 
		goto label_cond_7;
	this->bin->readFully(buf, off, len, 0x0);
	return;

}
// .method public readInt()I
int java::io::ObjectInputStream::readInt()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4225        value = {
	// 4226            Ljava/io/IOException;
	// 4227        }
	// 4228    .end annotation
	return this->bin->readInt();

}
// .method public readLine()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectInputStream::readLine()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4244        value = {
	// 4245            Ljava/io/IOException;
	// 4246        }
	// 4247    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4250    .end annotation
	return this->bin->readLine();

}
// .method public readLong()J
long long java::io::ObjectInputStream::readLong()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4266        value = {
	// 4267            Ljava/io/IOException;
	// 4268        }
	// 4269    .end annotation
	return this->bin->readLong();

}
// .method public final readObject()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream::readObject()
{
	
	int outerHandle;
	auto ex;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4285        value = {
	// 4286            Ljava/io/IOException;,
	// 4287            Ljava/lang/ClassNotFoundException;
	// 4288        }
	// 4289    .end annotation
	if ( !(this->enableOverride) )  
		goto label_cond_9;
	return this->readObjectOverride();
	// 4304    .line 372
label_cond_9:
	outerHandle = this->passHandle;
	//    .local v2, "outerHandle":I
	try {
	//label_try_start_c:
	//    .local v1, "obj":Ljava/lang/Object;
	this->handles->markDependency(outerHandle, this->passHandle);
	ex = this->handles->lookupException(this->passHandle);
	//    .local v0, "ex":Ljava/lang/ClassNotFoundException;
	if ( !(ex) )  
		goto label_cond_31;
	// throw
	throw ex;
	// 4340    :try_end_22
	// 4341    .catchall {:try_start_c .. :try_end_22} :catchall_22
	// 4343    .line 384
	// 4344    .end local v0    # "ex":Ljava/lang/ClassNotFoundException;
	// 4345    .end local v1    # "obj":Ljava/lang/Object;
label_catchall_22:
	// move-exception
	
	this->passHandle = outerHandle;
	if ( !(this->closed) )  
		goto label_cond_30;
	if ( this->depth )     
		goto label_cond_30;
	this->clear();
label_cond_30:
	// throw
	throw;
	// 4368    .line 380
	// 4369    .restart local v0    # "ex":Ljava/lang/ClassNotFoundException;
	// 4370    .restart local v1    # "obj":Ljava/lang/Object;
label_cond_31:
	try {
	//label_try_start_31:
	if ( this->depth )     
		goto label_cond_3a;
	this->vlist->doCallbacks();
	//label_try_end_3a:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_31 .. :try_end_3a} :catchall_22
label_cond_3a:
	this->passHandle = outerHandle;
	if ( !(this->closed) )  
		goto label_cond_47;
	if ( this->depth )     
		goto label_cond_47;
	this->clear();
label_cond_47:
	return this->readObject0(0x0);

}
// .method protected readObjectOverride()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream::readObjectOverride()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4408        value = {
	// 4409            Ljava/io/IOException;,
	// 4410            Ljava/lang/ClassNotFoundException;
	// 4411        }
	// 4412    .end annotation
	return 0x0;

}
// .method public readShort()S
short java::io::ObjectInputStream::readShort()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4424        value = {
	// 4425            Ljava/io/IOException;
	// 4426        }
	// 4427    .end annotation
	return this->bin->readShort();

}
// .method protected readStreamHeader()V
void java::io::ObjectInputStream::readStreamHeader()
{
	
	short s0;
	short s1;
	std::shared_ptr<java::io::StreamCorruptedException> cVar0;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4443        value = {
	// 4444            Ljava/io/IOException;,
	// 4445            Ljava/io/StreamCorruptedException;
	// 4446        }
	// 4447    .end annotation
	s0 = this->bin->readShort();
	//    .local v0, "s0":S
	s1 = this->bin->readShort();
	//    .local v1, "s1":S
	if ( s0 != -0x5313 )
		goto label_cond_13;
	if ( s1 == 0x5 )
		goto label_cond_31;
label_cond_13:
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar1[0x0] = java::lang::Short::valueOf(s0);
	cVar1[0x1] = java::lang::Short::valueOf(s1);
	cVar0 = std::make_shared<java::io::StreamCorruptedException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid stream header: %04X%04X")), cVar1));
	// throw
	throw cVar0;
	// 4511    .line 811
label_cond_31:
	return;

}
// .method readTypeString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectInputStream::readTypeString()
{
	
	int oldHandle;
	unsigned char tc;
	std::shared_ptr<java::io::StreamCorruptedException> cVar0;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4519        value = {
	// 4520            Ljava/io/IOException;
	// 4521        }
	// 4522    .end annotation
	oldHandle = this->passHandle;
	//    .local v0, "oldHandle":I
	try {
	//label_try_start_2:
	tc = this->bin->peekByte();
	//    .local v1, "tc":B
	// switch
	{
	auto item = ( tc );
	if (item == 0x70) goto label_sswitch_26;
	if (item == 0x71) goto label_sswitch_2f;
	if (item == 0x74) goto label_sswitch_39;
	if (item == 0x7c) goto label_sswitch_39;
	}
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar1[0x0] = java::lang::Byte::valueOf(tc);
	cVar0 = std::make_shared<java::io::StreamCorruptedException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid type code: %02X")), cVar1));
	// throw
	throw cVar0;
	// 4567    :try_end_22
	// 4568    .catchall {:try_start_2 .. :try_end_22} :catchall_22
	// 4570    .line 1432
	// 4571    .end local v1    # "tc":B
label_catchall_22:
	// move-exception
	
	this->passHandle = oldHandle;
	// throw
	throw;
	// 4581    .line 1419
	// 4582    .restart local v1    # "tc":B
label_sswitch_26:
	try {
	//label_try_start_26:
	cVar2 = this->readNull();
	cVar2->checkCast("java::lang::String");
	//label_try_end_2c:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_26 .. :try_end_2c} :catchall_22
	this->passHandle = oldHandle;
	return cVar2;
	// 4599    .line 1422
label_sswitch_2f:
	try {
	//label_try_start_30:
	cVar3 = this->readHandle(0x0);
	cVar3->checkCast("java::lang::String");
	//label_try_end_36:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_30 .. :try_end_36} :catchall_22
	this->passHandle = oldHandle;
	return cVar3;
	// 4618    .line 1426
label_sswitch_39:
	try {
	//label_try_start_3a:
	//label_try_end_3d:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_3a .. :try_end_3d} :catchall_22
	this->passHandle = oldHandle;
	return this->readString(0x0);
	// 4635    .line 1417
	// 4636    nop
	// 4638    :sswitch_data_42
	// 4639    .sparse-switch
	// 4640        0x70 -> :sswitch_26
	// 4641        0x71 -> :sswitch_2f
	// 4642        0x74 -> :sswitch_39
	// 4643        0x7c -> :sswitch_39
	// 4644    .end sparse-switch

}
// .method public readUTF()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectInputStream::readUTF()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4650        value = {
	// 4651            Ljava/io/IOException;
	// 4652        }
	// 4653    .end annotation
	return this->bin->readUTF();

}
// .method public readUnshared()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream::readUnshared()
{
	
	int outerHandle;
	auto ex;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4669        value = {
	// 4670            Ljava/io/IOException;,
	// 4671            Ljava/lang/ClassNotFoundException;
	// 4672        }
	// 4673    .end annotation
	outerHandle = this->passHandle;
	//    .local v2, "outerHandle":I
	try {
	//label_try_start_3:
	//    .local v1, "obj":Ljava/lang/Object;
	this->handles->markDependency(outerHandle, this->passHandle);
	ex = this->handles->lookupException(this->passHandle);
	//    .local v0, "ex":Ljava/lang/ClassNotFoundException;
	if ( !(ex) )  
		goto label_cond_28;
	// throw
	throw ex;
	// 4711    :try_end_19
	// 4712    .catchall {:try_start_3 .. :try_end_19} :catchall_19
	// 4714    .line 474
	// 4715    .end local v0    # "ex":Ljava/lang/ClassNotFoundException;
	// 4716    .end local v1    # "obj":Ljava/lang/Object;
label_catchall_19:
	// move-exception
	
	this->passHandle = outerHandle;
	if ( !(this->closed) )  
		goto label_cond_27;
	if ( this->depth )     
		goto label_cond_27;
	this->clear();
label_cond_27:
	// throw
	throw;
	// 4739    .line 470
	// 4740    .restart local v0    # "ex":Ljava/lang/ClassNotFoundException;
	// 4741    .restart local v1    # "obj":Ljava/lang/Object;
label_cond_28:
	try {
	//label_try_start_28:
	if ( this->depth )     
		goto label_cond_31;
	this->vlist->doCallbacks();
	//label_try_end_31:
	}
	catch (...){
		goto label_catchall_19;
	}
	//    .catchall {:try_start_28 .. :try_end_31} :catchall_19
label_cond_31:
	this->passHandle = outerHandle;
	if ( !(this->closed) )  
		goto label_cond_3e;
	if ( this->depth )     
		goto label_cond_3e;
	this->clear();
label_cond_3e:
	return this->readObject0(0x1);

}
// .method public readUnsignedByte()I
int java::io::ObjectInputStream::readUnsignedByte()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4779        value = {
	// 4780            Ljava/io/IOException;
	// 4781        }
	// 4782    .end annotation
	return this->bin->readUnsignedByte();

}
// .method public readUnsignedShort()I
int java::io::ObjectInputStream::readUnsignedShort()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4798        value = {
	// 4799            Ljava/io/IOException;
	// 4800        }
	// 4801    .end annotation
	return this->bin->readUnsignedShort();

}
// .method public registerValidation(Ljava/io/ObjectInputValidation;I)V
void java::io::ObjectInputStream::registerValidation(std::shared_ptr<java::io::ObjectInputValidation> obj,int prio)
{
	
	std::shared_ptr<java::io::NotActiveException> cVar0;
	
	//    .param p1, "obj"    # Ljava/io/ObjectInputValidation;
	//    .param p2, "prio"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 4819        value = {
	// 4820            Ljava/io/NotActiveException;,
	// 4821            Ljava/io/InvalidObjectException;
	// 4822        }
	// 4823    .end annotation
	if ( this->depth )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::NotActiveException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("stream inactive")));
	// throw
	throw cVar0;
	// 4840    .line 580
label_cond_d:
	this->vlist->register(obj, prio);
	return;

}
// .method protected resolveClass(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::io::ObjectInputStream::resolveClass(std::shared_ptr<java::io::ObjectStreamClass> desc)
{
	
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::Class> cl;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "desc"    # Ljava/io/ObjectStreamClass;
	//    .annotation system Ldalvik/annotation/Signature;
	// 4854        value = {
	// 4855            "(",
	// 4856            "Ljava/io/ObjectStreamClass;",
	// 4857            ")",
	// 4858            "Ljava/lang/Class",
	// 4859            "<*>;"
	// 4860        }
	// 4861    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 4864        value = {
	// 4865            Ljava/io/IOException;,
	// 4866            Ljava/lang/ClassNotFoundException;
	// 4867        }
	// 4868    .end annotation
	name = desc->getName();
	//    .local v2, "name":Ljava/lang/String;
	try {
	//label_try_start_4:
	//label_try_end_c:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_4 .. :try_end_c} :catch_e
	return java::lang::Class::forName(name, 0x0, java::io::ObjectInputStream::latestUserDefinedLoader(name, 0x0, java::io::ObjectInputStream::latestUserDefinedLoader(name, 0x0, java::io::ObjectInputStream::latestUserDefinedLoader({const[class].FS-Param}))));
	// 4893    .line 630
label_catch_e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/lang/ClassNotFoundException;
	cl = java::io::ObjectInputStream::primClasses->get(name);
	cl->checkCast("java::lang::Class");
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(cl) )  
		goto label_cond_1a;
	return cl;
	// 4914    .line 635
label_cond_1a:
	// throw
	throw;

}
// .method protected resolveObject(Ljava/lang/Object;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream::resolveObject(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4923        value = {
	// 4924            Ljava/io/IOException;
	// 4925        }
	// 4926    .end annotation
	return obj;

}
// .method protected resolveProxyClass([Ljava/lang/String;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::io::ObjectInputStream::resolveProxyClass(std::shared_ptr<std::vector<java::lang::String>> interfaces)
{
	
	std::shared_ptr<java::lang::ClassLoader> latestLoader;
	std::shared_ptr<java::lang::ClassLoader> nonPublicLoader;
	int hasNonPublicInterface;
	std::shared<std::vector<std::vector<java::lang::Class>>> classObjs;
	int i;
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<java::lang::IllegalAccessError> cVar0;
	auto nonPublicLoader;
	std::shared_ptr<java::lang::ClassNotFoundException> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "interfaces"    # [Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 4937        value = {
	// 4938            "([",
	// 4939            "Ljava/lang/String;",
	// 4940            ")",
	// 4941            "Ljava/lang/Class",
	// 4942            "<*>;"
	// 4943        }
	// 4944    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 4947        value = {
	// 4948            Ljava/io/IOException;,
	// 4949            Ljava/lang/ClassNotFoundException;
	// 4950        }
	// 4951    .end annotation
	latestLoader = java::io::ObjectInputStream::latestUserDefinedLoader({const[class].FS-Param});
	//    .local v5, "latestLoader":Ljava/lang/ClassLoader;
	nonPublicLoader = 0x0;
	//    .local v6, "nonPublicLoader":Ljava/lang/ClassLoader;
	hasNonPublicInterface = 0x0;
	//    .local v3, "hasNonPublicInterface":Z
	classObjs = std::make_shared<std::vector<std::vector<java::lang::Class>>>(interfaces->size());
	//    .local v1, "classObjs":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	i = 0x0;
	//    .end local v6    # "nonPublicLoader":Ljava/lang/ClassLoader;
	//    .local v4, "i":I
label_goto_b:
	if ( i >= interfaces->size() )
		goto label_cond_37;
	cl = java::lang::Class::forName(interfaces[i], 0x0, latestLoader);
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( ( cl->getModifiers() & 0x1) )     
		goto label_cond_32;
	if ( !(hasNonPublicInterface) )  
		goto label_cond_2d;
	if ( nonPublicLoader == cl->getClassLoader() )
		goto label_cond_32;
	cVar0 = std::make_shared<java::lang::IllegalAccessError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("conflicting non-public interface class loaders")));
	// throw
	throw cVar0;
	// 5024    .line 709
label_cond_2d:
	nonPublicLoader = cl->getClassLoader();
	//    .local v6, "nonPublicLoader":Ljava/lang/ClassLoader;
	hasNonPublicInterface = 0x1;
	//    .end local v6    # "nonPublicLoader":Ljava/lang/ClassLoader;
label_cond_32:
	classObjs[i] = cl;
	i = ( i + 0x1);
	goto label_goto_b;
	// 5044    .line 717
	// 5045    .end local v0    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_37:
	if ( !(hasNonPublicInterface) )  
		goto label_cond_3e;
label_goto_39:
	try {
	//label_try_start_39:
	//label_try_end_3c:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_40;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_39 .. :try_end_3c} :catch_40
	return java::lang::reflect::Proxy::getProxyClass(nonPublicLoader, classObjs);
label_cond_3e:
	nonPublicLoader = latestLoader;
	goto label_goto_39;
	// 5066    .line 719
label_catch_40:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/IllegalArgumentException;
	cVar1 = std::make_shared<java::lang::ClassNotFoundException>(0x0, getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method public skipBytes(I)I
int java::io::ObjectInputStream::skipBytes(int len)
{
	
	//    .param p1, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 5085        value = {
	// 5086            Ljava/io/IOException;
	// 5087        }
	// 5088    .end annotation
	return this->bin->skipBytes(len);

}


