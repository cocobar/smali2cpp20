// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream.smali
#include "java2ctype.h"
#include "java.io.Externalizable.h"
#include "java.io.IOException.h"
#include "java.io.NotActiveException.h"
#include "java.io.NotSerializableException.h"
#include "java.io.ObjectOutputStream_S_1.h"
#include "java.io.ObjectOutputStream_S_BlockDataOutputStream.h"
#include "java.io.ObjectOutputStream_S_Caches.h"
#include "java.io.ObjectOutputStream_S_DebugTraceInfoStack.h"
#include "java.io.ObjectOutputStream_S_HandleTable.h"
#include "java.io.ObjectOutputStream_S_PutField.h"
#include "java.io.ObjectOutputStream_S_PutFieldImpl.h"
#include "java.io.ObjectOutputStream_S_ReplaceTable.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.ObjectStreamClass_S_ClassDataSlot.h"
#include "java.io.ObjectStreamClass_S_WeakClassKey.h"
#include "java.io.ObjectStreamClass.h"
#include "java.io.ObjectStreamField.h"
#include "java.io.OutputStream.h"
#include "java.io.SerialCallbackContext.h"
#include "java.io.Serializable.h"
#include "java.io.SerializablePermission.h"
#include "java.lang.Boolean.h"
#include "java.lang.Byte.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Double.h"
#include "java.lang.Enum.h"
#include "java.lang.Float.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
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
#include "java.lang.ref.ReferenceQueue.h"
#include "java.security.AccessController.h"
#include "java.util.concurrent.ConcurrentMap.h"
#include "sun.reflect.misc.ReflectUtil.h"

static java::io::ObjectOutputStream::extendedDebugInfo;
// .method static synthetic -get0(Ljava/io/ObjectOutputStream;)Ljava/io/ObjectOutputStream$BlockDataOutputStream;
std::shared_ptr<java::io::ObjectOutputStream_S_BlockDataOutputStream> java::io::ObjectOutputStream::_get0(std::shared_ptr<java::io::ObjectOutputStream> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectOutputStream;
	return _this->bout;

}
// .method static synthetic -wrap0([DI[BII)V
void java::io::ObjectOutputStream::_wrap0(std::shared_ptr<double[]> src,int srcpos,std::shared_ptr<unsigned char[]> dst,int dstpos,int ndoubles)
{
	
	//    .param p0, "src"    # [D
	//    .param p1, "srcpos"    # I
	//    .param p2, "dst"    # [B
	//    .param p3, "dstpos"    # I
	//    .param p4, "ndoubles"    # I
	java::io::ObjectOutputStream::doublesToBytes(src, srcpos, dst, dstpos, ndoubles);
	return;

}
// .method static synthetic -wrap1([FI[BII)V
void java::io::ObjectOutputStream::_wrap1(std::shared_ptr<float[]> src,int srcpos,std::shared_ptr<unsigned char[]> dst,int dstpos,int nfloats)
{
	
	//    .param p0, "src"    # [F
	//    .param p1, "srcpos"    # I
	//    .param p2, "dst"    # [B
	//    .param p3, "dstpos"    # I
	//    .param p4, "nfloats"    # I
	java::io::ObjectOutputStream::floatsToBytes(src, srcpos, dst, dstpos, nfloats);
	return;

}
// .method static synthetic -wrap2(Ljava/io/ObjectOutputStream;Ljava/lang/Object;Z)V
void java::io::ObjectOutputStream::_wrap2(std::shared_ptr<java::io::ObjectOutputStream> _this,std::shared_ptr<java::lang::Object> obj,bool unshared)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectOutputStream;
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "unshared"    # Z
	_this->writeObject0(obj, unshared);
	return;

}
// .method protected constructor <init>()V
java::io::ObjectOutputStream::ObjectOutputStream()
{
	
	std::shared_ptr<java::io::ObjectOutputStream_S_BlockDataOutputStream> cVar0;
	std::shared_ptr<java::lang::SecurityManager> sm;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 106        value = {
	// 107            Ljava/io/IOException;,
	// 108            Ljava/lang/SecurityException;
	// 109        }
	// 110    .end annotation
	cVar0 = 0x0;
	// 116    invoke-direct {p0}, Ljava/io/OutputStream;-><init>()V
	this->protocol = 0x2;
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_12;
	sm->checkPermission(java::io::ObjectOutputStream::SUBCLASS_IMPLEMENTATION_PERMISSION);
label_cond_12:
	this->bout = cVar0;
	this->handles = cVar0;
	this->subs = cVar0;
	this->enableOverride = 0x1;
	this->debugInfoStack = cVar0;
	return;

}
// .method public constructor <init>(Ljava/io/OutputStream;)V
java::io::ObjectOutputStream::ObjectOutputStream(std::shared_ptr<java::io::OutputStream> out)
{
	
	int cVar0;
	float cVar1;
	std::shared_ptr<java::io::ObjectOutputStream_S_BlockDataOutputStream> cVar2;
	std::shared_ptr<java::io::ObjectOutputStream_S_HandleTable> cVar3;
	std::shared_ptr<java::io::ObjectOutputStream_S_ReplaceTable> cVar4;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 163        value = {
	// 164            Ljava/io/IOException;
	// 165        }
	// 166    .end annotation
	cVar0 = 0xa;
	cVar1 = 0x40400000;
	// 174    invoke-direct {p0}, Ljava/io/OutputStream;-><init>()V
	this->protocol = 0x2;
	this->verifySubclass();
	cVar2 = std::make_shared<java::io::ObjectOutputStream_S_BlockDataOutputStream>(out);
	this->bout = cVar2;
	cVar3 = std::make_shared<java::io::ObjectOutputStream_S_HandleTable>(cVar0, cVar1);
	this->handles = cVar3;
	cVar4 = std::make_shared<java::io::ObjectOutputStream_S_ReplaceTable>(cVar0, cVar1);
	this->subs = cVar4;
	this->enableOverride = 0x0;
	this->writeStreamHeader();
	this->bout->setBlockDataMode(0x1);
	this->debugInfoStack = 0x0;
	return;

}
// .method private static auditSubclass(Ljava/lang/Class;)Z
bool java::io::ObjectOutputStream::auditSubclass(std::shared_ptr<java::lang::Class<java::lang::Object>> subcl)
{
	
	std::shared_ptr<java::io::ObjectOutputStream_S_1> cVar0;
	std::shared_ptr<java::lang::Boolean> result;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 232        value = {
	// 233            "(",
	// 234            "Ljava/lang/Class",
	// 235            "<*>;)Z"
	// 236        }
	// 237    .end annotation
	//    .local p0, "subcl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = std::make_shared<java::io::ObjectOutputStream_S_1>(subcl);
	result = java::security::AccessController::doPrivileged(cVar0);
	result->checkCast("java::lang::Boolean");
	//    .local v0, "result":Ljava/lang/Boolean;
	return result->booleanValue();

}
// .method private clear()V
void java::io::ObjectOutputStream::clear()
{
	
	this->subs->clear();
	this->handles->clear();
	return;

}
// .method private defaultWriteFields(Ljava/lang/Object;Ljava/io/ObjectStreamClass;)V
void java::io::ObjectOutputStream::defaultWriteFields(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectStreamClass> desc)
{
	
	int cVar0;
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<java::lang::ClassCastException> cVar1;
	int primDataSize;
	auto fields;
	std::shared<std::vector<std::vector<java::lang::Object>>> objVals;
	int i;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "desc"    # Ljava/io/ObjectStreamClass;
	//    .annotation system Ldalvik/annotation/Throws;
	// 285        value = {
	// 286            Ljava/io/IOException;
	// 287        }
	// 288    .end annotation
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
	// 319    .line 1576
label_cond_17:
	desc->checkDefaultSerialize();
	primDataSize = desc->getPrimDataSize();
	//    .local v5, "primDataSize":I
	if ( !(this->primVals) )  
		goto label_cond_27;
	if ( this->primVals->size() >= primDataSize )
		goto label_cond_2b;
label_cond_27:
	this->primVals = std::make_shared<std::vector<unsigned char[]>>(primDataSize);
label_cond_2b:
	desc->getPrimFieldValues(obj, this->primVals);
	this->bout->write(this->primVals, cVar0, primDataSize, cVar0);
	fields = desc->getFields(cVar0);
	//    .local v1, "fields":[Ljava/io/ObjectStreamField;
	objVals = std::make_shared<std::vector<std::vector<java::lang::Object>>>(desc->getNumObjFields());
	//    .local v4, "objVals":[Ljava/lang/Object;
	//    .local v3, "numPrimFields":I
	desc->getObjFieldValues(obj, objVals);
	i = 0x0;
	//    .local v2, "i":I
label_goto_49:
	if ( i >= objVals->size() )
		goto label_cond_5e;
	try {
	//label_try_start_4c:
	this->writeObject0(objVals[i], fields[((fields->size() - objVals->size()) + i)]->isUnshared());
	//label_try_end_59:
	}
	catch (...){
		goto label_catchall_5c;
	}
	//    .catchall {:try_start_4c .. :try_end_59} :catchall_5c
	i = ( i + 0x1);
	goto label_goto_49;
	// 416    .line 1599
label_catchall_5c:
	// move-exception
	
	// throw
	throw;
	// 422    .line 1605
label_cond_5e:
	return;

}
// .method private isCustomSubclass()Z
bool java::io::ObjectOutputStream::isCustomSubclass()
{
	
	bool cVar0;
	
	if ( this->getClass()->getClassLoader() == java::io::ObjectOutputStream()->getClassLoader() )
		goto label_cond_12;
	cVar0 = 0x1;
label_goto_11:
	return cVar0;
label_cond_12:
	cVar0 = 0x0;
	goto label_goto_11;

}
// .method private verifySubclass()V
void java::io::ObjectOutputStream::verifySubclass()
{
	
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::shared_ptr<java::io::ObjectStreamClass_S_WeakClassKey> key;
	std::shared_ptr<java::lang::Boolean> result;
	std::shared_ptr<java::lang::Object> result;
	
	cl = this->getClass();
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( cl != java::io::ObjectOutputStream() )
		goto label_cond_9;
	return;
	// 485    .line 1061
label_cond_9:
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v3, "sm":Ljava/lang/SecurityManager;
	if ( sm )     
		goto label_cond_10;
	return;
	// 498    .line 1065
label_cond_10:
	java::io::ObjectStreamClass::processQueue(java::io::ObjectOutputStream_S_Caches::subclassAuditsQueue, java::io::ObjectOutputStream_S_Caches::subclassAudits);
	key = std::make_shared<java::io::ObjectStreamClass_S_WeakClassKey>(cl, java::io::ObjectOutputStream_S_Caches::subclassAuditsQueue);
	//    .local v1, "key":Ljava/io/ObjectStreamClass$WeakClassKey;
	result = java::io::ObjectOutputStream_S_Caches::subclassAudits->get(key);
	result->checkCast("java::lang::Boolean");
	//    .local v2, "result":Ljava/lang/Boolean;
	if ( result )     
		goto label_cond_35;
	result = java::lang::Boolean::valueOf(java::io::ObjectOutputStream::auditSubclass(cl));
	java::io::ObjectOutputStream_S_Caches::subclassAudits->putIfAbsent(key, result);
label_cond_35:
	if ( !(result->booleanValue()) )  
		goto label_cond_3c;
	return;
	// 552    .line 1075
label_cond_3c:
	sm->checkPermission(java::io::ObjectOutputStream::SUBCLASS_IMPLEMENTATION_PERMISSION);
	return;

}
// .method private writeArray(Ljava/lang/Object;Ljava/io/ObjectStreamClass;Z)V
void java::io::ObjectOutputStream::writeArray(std::shared_ptr<java::lang::Object> array,std::shared_ptr<java::io::ObjectStreamClass> desc,bool unshared)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::Class> ccl;
	std::shared_ptr<int[]> ia;
	std::shared_ptr<unsigned char[]> ba;
	std::shared_ptr<long long[]> ja;
	std::shared_ptr<float[]> fa;
	std::shared_ptr<double[]> da;
	std::shared_ptr<short[]> sa;
	std::shared_ptr<char[]> ca;
	std::shared_ptr<bool[]> za;
	std::shared_ptr<java::lang::InternalError> cVar2;
	std::shared_ptr<std::vector<java::lang::Object>> objs;
	int len;
	int i;
	
	//    .param p1, "array"    # Ljava/lang/Object;
	//    .param p2, "desc"    # Ljava/io/ObjectStreamClass;
	//    .param p3, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 568        value = {
	// 569            Ljava/io/IOException;
	// 570        }
	// 571    .end annotation
	this->bout->writeByte(0x75);
	this->writeClassDesc(desc, 0x0);
	if ( !(unshared) )  
		goto label_cond_46;
	cVar0 = 0x0;
label_goto_18:
	this->handles->assign(cVar0);
	ccl = desc->forClass()->getComponentType();
	//    .local v4, "ccl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(ccl->isPrimitive()) )  
		goto label_cond_121;
	if ( ccl != java::lang::Integer::TYPE )
		goto label_cond_49;
	ia = array;
	ia->checkCast("int[]");
	//    .local v8, "ia":[I
	this->bout->writeInt(ia->size());
	this->bout->writeInts(ia, 0x0, ia->size());
	//    .end local v8    # "ia":[I
label_cond_45:
label_goto_45:
	return;
	// 660    .end local v4    # "ccl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_46:
	cVar0 = array;
	goto label_goto_18;
	// 667    .line 1380
	// 668    .restart local v4    # "ccl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_49:
	if ( ccl != java::lang::Byte::TYPE )
		goto label_cond_6a;
	ba = array;
	ba->checkCast("unsigned char[]");
	//    .local v2, "ba":[B
	this->bout->writeInt(ba->size());
	this->bout->write(ba, 0x0, ba->size(), 0x1);
	goto label_goto_45;
	// 708    .line 1384
	// 709    .end local v2    # "ba":[B
label_cond_6a:
	if ( ccl != java::lang::Long::TYPE )
		goto label_cond_87;
	ja = array;
	ja->checkCast("long long[]");
	//    .local v9, "ja":[J
	this->bout->writeInt(ja->size());
	this->bout->writeLongs(ja, 0x0, ja->size());
	goto label_goto_45;
	// 745    .line 1388
	// 746    .end local v9    # "ja":[J
label_cond_87:
	if ( ccl != java::lang::Float::TYPE )
		goto label_cond_a4;
	fa = array;
	fa->checkCast("float[]");
	//    .local v6, "fa":[F
	this->bout->writeInt(fa->size());
	this->bout->writeFloats(fa, 0x0, fa->size());
	goto label_goto_45;
	// 782    .line 1392
	// 783    .end local v6    # "fa":[F
label_cond_a4:
	if ( ccl != java::lang::Double::TYPE )
		goto label_cond_c1;
	da = array;
	da->checkCast("double[]");
	//    .local v5, "da":[D
	this->bout->writeInt(da->size());
	this->bout->writeDoubles(da, 0x0, da->size());
	goto label_goto_45;
	// 819    .line 1396
	// 820    .end local v5    # "da":[D
label_cond_c1:
	if ( ccl != java::lang::Short::TYPE )
		goto label_cond_df;
	sa = array;
	sa->checkCast("short[]");
	//    .local v12, "sa":[S
	this->bout->writeInt(sa->size());
	this->bout->writeShorts(sa, 0x0, sa->size());
	goto label_goto_45;
	// 856    .line 1400
	// 857    .end local v12    # "sa":[S
label_cond_df:
	if ( ccl != java::lang::Character::TYPE )
		goto label_cond_fd;
	ca = array;
	ca->checkCast("char[]");
	//    .local v3, "ca":[C
	this->bout->writeInt(ca->size());
	this->bout->writeChars(ca, 0x0, ca->size());
	goto label_goto_45;
	// 893    .line 1404
	// 894    .end local v3    # "ca":[C
label_cond_fd:
	if ( ccl != java::lang::Boolean::TYPE )
		goto label_cond_11b;
	za = array;
	za->checkCast("bool[]");
	//    .local v13, "za":[Z
	this->bout->writeInt(za->size());
	this->bout->writeBooleans(za, 0x0, za->size());
	goto label_goto_45;
	// 930    .line 1409
	// 931    .end local v13    # "za":[Z
label_cond_11b:
	cVar2 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar2;
label_cond_121:
	objs = array;
	objs->checkCast("std::vector<java::lang::Object>");
	//    .local v11, "objs":[Ljava/lang/Object;
	len = objs->size();
	//    .local v10, "len":I
	this->bout->writeInt(len);
	i = 0x0;
	//    .local v7, "i":I
label_goto_12e:
	if ( i >= len )
		goto label_cond_45;
	try {
	//label_try_start_130:
	this->writeObject0(objs[i], 0x0);
	//label_try_end_138:
	}
	catch (...){
		goto label_catchall_13b;
	}
	//    .catchall {:try_start_130 .. :try_end_138} :catchall_13b
	i = ( i + 0x1);
	goto label_goto_12e;
	// 981    .line 1428
label_catchall_13b:
	// move-exception
	
	try {
	//label_try_start_13c:
	// throw
	throw;
	// 987    :try_end_13d
	// 988    .catchall {:try_start_13c .. :try_end_13d} :catchall_13d
	// 990    .line 1434
label_catchall_13d:
	// move-exception
	
	// throw
	throw;

}
// .method private writeClass(Ljava/lang/Class;Z)V
void java::io::ObjectOutputStream::writeClass(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,bool unshared)
{
	
	//    .param p2, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 1001        value = {
	// 1002            "(",
	// 1003            "Ljava/lang/Class",
	// 1004            "<*>;Z)V"
	// 1005        }
	// 1006    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1009        value = {
	// 1010            Ljava/io/IOException;
	// 1011        }
	// 1012    .end annotation
	//    .local p1, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	this->bout->writeByte(0x76);
	this->writeClassDesc(java::io::ObjectStreamClass::lookup(cl, 0x1), 0x0);
	if ( !(unshared) )  
		goto label_cond_15;
	//    .end local p1    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_15:
	this->handles->assign(cl);
	return;

}
// .method private writeClassDesc(Ljava/io/ObjectStreamClass;Z)V
void java::io::ObjectOutputStream::writeClassDesc(std::shared_ptr<java::io::ObjectStreamClass> desc,bool unshared)
{
	
	int handle;
	
	//    .param p1, "desc"    # Ljava/io/ObjectStreamClass;
	//    .param p2, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1054        value = {
	// 1055            Ljava/io/IOException;
	// 1056        }
	// 1057    .end annotation
	if ( desc )     
		goto label_cond_6;
	this->writeNull();
label_goto_5:
	return;
	// 1070    .line 1275
label_cond_6:
	if ( unshared )     
		goto label_cond_15;
	handle = this->handles->lookup(desc);
	//    .local v0, "handle":I
	if ( handle == -0x1 )
		goto label_cond_15;
	this->writeHandle(handle);
	goto label_goto_5;
	// 1090    .line 1277
	// 1091    .end local v0    # "handle":I
label_cond_15:
	if ( !(desc->isProxy()) )  
		goto label_cond_1f;
	this->writeProxyDesc(desc, unshared);
	goto label_goto_5;
	// 1104    .line 1280
label_cond_1f:
	this->writeNonProxyDesc(desc, unshared);
	goto label_goto_5;

}
// .method private writeEnum(Ljava/lang/Enum;Ljava/io/ObjectStreamClass;Z)V
void java::io::ObjectOutputStream::writeEnum(std::shared_ptr<java::lang::Enum<java::lang::Object>> en,std::shared_ptr<java::io::ObjectStreamClass> desc,bool unshared)
{
	
	bool cVar0;
	std::shared_ptr<java::io::ObjectStreamClass> sdesc;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	
	//    .param p2, "desc"    # Ljava/io/ObjectStreamClass;
	//    .param p3, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 1116        value = {
	// 1117            "(",
	// 1118            "Ljava/lang/Enum",
	// 1119            "<*>;",
	// 1120            "Ljava/io/ObjectStreamClass;",
	// 1121            "Z)V"
	// 1122        }
	// 1123    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1126        value = {
	// 1127            Ljava/io/IOException;
	// 1128        }
	// 1129    .end annotation
	//    .local p1, "en":Ljava/lang/Enum;, "Ljava/lang/Enum<*>;"
	cVar0 = 0x0;
	this->bout->writeByte(0x7e);
	sdesc = desc->getSuperDesc();
	//    .local v0, "sdesc":Ljava/io/ObjectStreamClass;
	if ( sdesc->forClass() != java::lang::Enum() )
		goto label_cond_27;
	//    .end local p2    # "desc":Ljava/io/ObjectStreamClass;
label_goto_14:
	this->writeClassDesc(desc, cVar0);
	if ( !(unshared) )  
		goto label_cond_29;
	cVar1 = 0x0;
label_goto_1c:
	this->handles->assign(cVar1);
	this->writeString(en->name(), cVar0);
	return;
	// 1181    .restart local p2    # "desc":Ljava/io/ObjectStreamClass;
label_cond_27:
	desc = sdesc;
	goto label_goto_14;
	// 1188    .end local p2    # "desc":Ljava/io/ObjectStreamClass;
label_cond_29:
	cVar1 = en;
	goto label_goto_1c;

}
// .method private writeExternalData(Ljava/io/Externalizable;)V
void java::io::ObjectOutputStream::writeExternalData(std::shared_ptr<java::io::Externalizable> obj)
{
	
	std::shared_ptr<java::io::SerialCallbackContext> oldContext;
	
	//    .param p1, "obj"    # Ljava/io/Externalizable;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1200        value = {
	// 1201            Ljava/io/IOException;
	// 1202        }
	// 1203    .end annotation
	//    .local v1, "oldPut":Ljava/io/ObjectOutputStream$PutFieldImpl;
	this->curPut = 0x0;
	oldContext = this->curContext;
	//    .local v0, "oldContext":Ljava/io/SerialCallbackContext;
	try {
	//label_try_start_9:
	this->curContext = 0x0;
	if ( this->protocol != 0x1 )
		goto label_cond_17;
	obj->writeExternal(this);
	//label_try_end_12:
	}
	catch (...){
		goto label_catchall_2e;
	}
	//    .catchall {:try_start_9 .. :try_end_12} :catchall_2e
label_goto_12:
	this->curContext = oldContext;
	this->curPut = this->curPut;
	return;
	// 1247    .line 1507
label_cond_17:
	try {
	//label_try_start_17:
	this->bout->setBlockDataMode(0x1);
	obj->writeExternal(this);
	this->bout->setBlockDataMode(0x0);
	this->bout->writeByte(0x78);
	//label_try_end_2d:
	}
	catch (...){
		goto label_catchall_2e;
	}
	//    .catchall {:try_start_17 .. :try_end_2d} :catchall_2e
	goto label_goto_12;
	// 1277    .line 1512
label_catchall_2e:
	// move-exception
	
	this->curContext = oldContext;
	// throw
	throw;

}
// .method private writeFatalException(Ljava/io/IOException;)V
void java::io::ObjectOutputStream::writeFatalException(std::shared_ptr<java::io::IOException> ex)
{
	
	bool oldMode;
	
	//    .param p1, "ex"    # Ljava/io/IOException;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1292        value = {
	// 1293            Ljava/io/IOException;
	// 1294        }
	// 1295    .end annotation
	this->clear();
	oldMode = this->bout->setBlockDataMode(0x0);
	//    .local v0, "oldMode":Z
	try {
	//label_try_start_a:
	this->bout->writeByte(0x7b);
	this->writeObject0(ex, 0x0);
	this->clear();
	//label_try_end_18:
	}
	catch (...){
		goto label_catchall_1e;
	}
	//    .catchall {:try_start_a .. :try_end_18} :catchall_1e
	this->bout->setBlockDataMode(oldMode);
	return;
	// 1337    .line 1628
label_catchall_1e:
	// move-exception
	
	this->bout->setBlockDataMode(oldMode);
	// throw
	throw;

}
// .method private writeHandle(I)V
void java::io::ObjectOutputStream::writeHandle(int handle)
{
	
	//    .param p1, "handle"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1354        value = {
	// 1355            Ljava/io/IOException;
	// 1356        }
	// 1357    .end annotation
	this->bout->writeByte(0x71);
	this->bout->writeInt((0x7e0000 +  handle));
	return;

}
// .method private writeNonProxyDesc(Ljava/io/ObjectStreamClass;Z)V
void java::io::ObjectOutputStream::writeNonProxyDesc(std::shared_ptr<java::io::ObjectStreamClass> desc,bool unshared)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	bool cVar1;
	bool cVar2;
	std::shared_ptr<java::lang::Class> cl;
	
	//    .param p1, "desc"    # Ljava/io/ObjectStreamClass;
	//    .param p2, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1385        value = {
	// 1386            Ljava/io/IOException;
	// 1387        }
	// 1388    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x1;
	cVar2 = 0x0;
	this->bout->writeByte(0x72);
	if ( !(unshared) )  
		goto label_cond_43;
label_goto_e:
	this->handles->assign(cVar0);
	if ( this->protocol != cVar1 )
		goto label_cond_45;
	desc->writeNonProxy(this);
label_goto_18:
	cl = desc->forClass();
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	this->bout->setBlockDataMode(cVar1);
	if ( !(cl) )  
		goto label_cond_2c;
	if ( !(this->isCustomSubclass()) )  
		goto label_cond_2c;
	sun::reflect::misc::ReflectUtil::checkPackageAccess(cl);
label_cond_2c:
	this->annotateClass(cl);
	this->bout->setBlockDataMode(cVar2);
	this->bout->writeByte(0x78);
	this->writeClassDesc(desc->getSuperDesc(), cVar2);
	return;
	// 1470    .end local v0    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_43:
	cVar0 = desc;
	goto label_goto_e;
	// 1477    .line 1331
label_cond_45:
	this->writeClassDescriptor(desc);
	goto label_goto_18;

}
// .method private writeNull()V
void java::io::ObjectOutputStream::writeNull()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1487        value = {
	// 1488            Ljava/io/IOException;
	// 1489        }
	// 1490    .end annotation
	this->bout->writeByte(0x70);
	return;

}
// .method private writeObject0(Ljava/lang/Object;Z)V
void java::io::ObjectOutputStream::writeObject0(std::shared_ptr<java::lang::Object> obj,bool unshared)
{
	
	int cVar0;
	bool oldMode;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<java::lang::Object> cVar1;
	int h;
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	std::shared_ptr<java::lang::Object> obj;
	std::shared_ptr<java::lang::Class> repCl;
	std::shared_ptr<java::lang::Object> rep;
	std::shared_ptr<java::lang::Class> cVar2;
	std::shared_ptr<java::io::ObjectStreamClass> cVar3;
	std::shared_ptr<java::lang::String> cVar5;
	std::shared_ptr<java::lang::Enum> cVar6;
	std::shared_ptr<java::io::NotSerializableException> cVar7;
	std::shared_ptr<java::lang::Class> obj;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1509        value = {
	// 1510            Ljava/io/IOException;
	// 1511        }
	// 1512    .end annotation
	cVar0 = -0x1;
	oldMode = this->bout->setBlockDataMode(0x0);
	//    .local v5, "oldMode":Z
	this->depth = ( this->depth + 0x1);
	try {
	//label_try_start_e:
	cVar1 = this->subs->lookup(obj);
	if ( cVar1 )     
		goto label_cond_25;
	this->writeNull();
	//label_try_end_19:
	}
	catch (...){
		goto label_catchall_10e;
	}
	//    .catchall {:try_start_e .. :try_end_19} :catchall_10e
	this->depth = ( this->depth + -0x1);
	this->bout->setBlockDataMode(oldMode);
	return;
	// 1564    .line 1132
label_cond_25:
	if ( unshared )     
		goto label_cond_3e;
	try {
	//label_try_start_27:
	h = this->handles->lookup(cVar1);
	//    .local v3, "h":I
	if ( h == cVar0 )
		goto label_cond_3e;
	this->writeHandle(h);
	//label_try_end_32:
	}
	catch (...){
		goto label_catchall_10e;
	}
	//    .catchall {:try_start_27 .. :try_end_32} :catchall_10e
	this->depth = ( this->depth + -0x1);
	this->bout->setBlockDataMode(oldMode);
	return;
	// 1598    .line 1148
	// 1599    .end local v3    # "h":I
label_cond_3e:
	cVar1;
	//    .local v6, "orig":Ljava/lang/Object;
	try {
	//label_try_start_3f:
	cl = cVar1->getClass();
	//    .local v1, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	desc = java::io::ObjectStreamClass::lookup(cl, 0x1);
	//    .local v2, "desc":Ljava/io/ObjectStreamClass;
	if ( !(desc->hasWriteReplaceMethod()) )  
		goto label_cond_8e;
	//label_try_end_51:
	}
	catch (...){
		goto label_catchall_10e;
	}
	//    .catchall {:try_start_3f .. :try_end_51} :catchall_10e
	obj = desc->invokeWriteReplace(cVar1);
	//    .end local p1    # "obj":Ljava/lang/Object;
	//    .local v4, "obj":Ljava/lang/Object;
	if ( !(obj) )  
		goto label_cond_60;
	try {
	//label_try_start_54:
	repCl = obj->getClass();
	//    .local v8, "repCl":Ljava/lang/Class;
	if ( repCl == cl )
		goto label_cond_60;
	cl = repCl;
	java::io::ObjectStreamClass::lookup(repCl, 0x1);
	//    .end local v8    # "repCl":Ljava/lang/Class;
label_cond_60:
label_goto_60:
	if ( !(this->enableReplace) )  
		goto label_cond_76;
	rep = this->replaceObject(obj);
	//    .local v7, "rep":Ljava/lang/Object;
	if ( rep == obj )
		goto label_cond_75;
	if ( !(rep) )  
		goto label_cond_75;
	cl = rep->getClass();
	desc = java::io::ObjectStreamClass::lookup(cl, 0x1);
label_cond_75:
	obj = rep;
	//    .end local v7    # "rep":Ljava/lang/Object;
label_cond_76:
	if ( obj == cVar1 )
		goto label_cond_a9;
	this->subs->assign(cVar1, obj);
	if ( obj )     
		goto label_cond_90;
	this->writeNull();
	//label_try_end_82:
	}
	catch (...){
		goto label_catchall_cc;
	}
	//    .catchall {:try_start_54 .. :try_end_82} :catchall_cc
	this->depth = ( this->depth + -0x1);
	this->bout->setBlockDataMode(oldMode);
	return;
	// 1724    .end local v4    # "obj":Ljava/lang/Object;
	// 1725    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_8e:
	obj = cVar1;
	//    .end local p1    # "obj":Ljava/lang/Object;
	//    .restart local v4    # "obj":Ljava/lang/Object;
	goto label_goto_60;
	// 1734    .line 1197
label_cond_90:
	if ( unshared )     
		goto label_cond_a9;
	try {
	//label_try_start_92:
	h = this->handles->lookup(obj);
	//    .restart local v3    # "h":I
	if ( h == cVar0 )
		goto label_cond_a9;
	this->writeHandle(h);
	//label_try_end_9d:
	}
	catch (...){
		goto label_catchall_cc;
	}
	//    .catchall {:try_start_92 .. :try_end_9d} :catchall_cc
	this->depth = ( this->depth + -0x1);
	this->bout->setBlockDataMode(oldMode);
	return;
	// 1768    .line 1215
	// 1769    .end local v3    # "h":I
label_cond_a9:
	try {
	//label_try_start_a9:
	if ( !(obj->instanceOf("java::lang::Class")) )  
		goto label_cond_c0;
	cVar2 = obj;
	cVar2->checkCast("java::lang::Class");
	this->writeClass(cVar2, unshared);
	//label_try_end_b4:
	}
	catch (...){
		goto label_catchall_cc;
	}
	//    .catchall {:try_start_a9 .. :try_end_b4} :catchall_cc
label_goto_b4:
	this->depth = ( this->depth + -0x1);
	this->bout->setBlockDataMode(oldMode);
	return;
	// 1803    .line 1217
label_cond_c0:
	try {
	//label_try_start_c0:
	if ( !(obj->instanceOf("java::io::ObjectStreamClass")) )  
		goto label_cond_da;
	cVar3 = obj;
	cVar3->checkCast("java::io::ObjectStreamClass");
	this->writeClassDesc(cVar3, unshared);
	//label_try_end_cb:
	}
	catch (...){
		goto label_catchall_cc;
	}
	//    .catchall {:try_start_c0 .. :try_end_cb} :catchall_cc
	goto label_goto_b4;
	// 1823    .line 1236
label_catchall_cc:
	// move-exception
	catchall = tryCatchExcetionList.back();
	obj;
	//    .end local v1    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .end local v2    # "desc":Ljava/io/ObjectStreamClass;
	//    .end local v4    # "obj":Ljava/lang/Object;
	//    .end local v6    # "orig":Ljava/lang/Object;
	//    .restart local p1    # "obj":Ljava/lang/Object;
label_goto_ce:
	this->depth = ( this->depth + -0x1);
	this->bout->setBlockDataMode(oldMode);
	// throw
	throw;
	// 1850    .line 1220
	// 1851    .end local p1    # "obj":Ljava/lang/Object;
	// 1852    .restart local v1    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 1853    .restart local v2    # "desc":Ljava/io/ObjectStreamClass;
	// 1854    .restart local v4    # "obj":Ljava/lang/Object;
	// 1855    .restart local v6    # "orig":Ljava/lang/Object;
label_cond_da:
	try {
	//label_try_start_da:
	if ( !(obj->instanceOf("java::lang::String")) )  
		goto label_cond_e6;
	cVar5 = obj;
	cVar5->checkCast("java::lang::String");
	this->writeString(cVar5, unshared);
	goto label_goto_b4;
	// 1873    .line 1222
label_cond_e6:
	if ( !(cl->isArray()) )  
		goto label_cond_f0;
	this->writeArray(obj, desc, unshared);
	goto label_goto_b4;
	// 1886    .line 1224
label_cond_f0:
	if ( !(obj->instanceOf("java::lang::Enum")) )  
		goto label_cond_fc;
	cVar6 = obj;
	cVar6->checkCast("java::lang::Enum");
	this->writeEnum(cVar6, desc, unshared);
	goto label_goto_b4;
	// 1903    .line 1226
label_cond_fc:
	if ( !(obj->instanceOf("java::io::Serializable")) )  
		goto label_cond_104;
	this->writeOrdinaryObject(obj, desc, unshared);
	goto label_goto_b4;
	// 1914    .line 1233
label_cond_104:
	cVar7 = std::make_shared<java::io::NotSerializableException>(cl->getName());
	// throw
	throw cVar7;
	// 1925    :try_end_10e
	// 1926    .catchall {:try_start_da .. :try_end_10e} :catchall_cc
	// 1928    .line 1236
	// 1929    .end local v1    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 1930    .end local v2    # "desc":Ljava/io/ObjectStreamClass;
	// 1931    .end local v4    # "obj":Ljava/lang/Object;
	// 1932    .end local v6    # "orig":Ljava/lang/Object;
	// 1933    .restart local p1    # "obj":Ljava/lang/Object;
label_catchall_10e:
	// move-exception
	catchall = tryCatchExcetionList.back();
	goto label_goto_ce;

}
// .method private writeOrdinaryObject(Ljava/lang/Object;Ljava/io/ObjectStreamClass;Z)V
void java::io::ObjectOutputStream::writeOrdinaryObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectStreamClass> desc,bool unshared)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "desc"    # Ljava/io/ObjectStreamClass;
	//    .param p3, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1946        value = {
	// 1947            Ljava/io/IOException;
	// 1948        }
	// 1949    .end annotation
	try {
	//label_try_start_0:
	desc->checkSerialize();
	this->bout->writeByte(0x73);
	this->writeClassDesc(desc, 0x0);
	if ( !(unshared) )  
		goto label_cond_2a;
	cVar0 = 0x0;
label_goto_13:
	this->handles->assign(cVar0);
	if ( !(desc->isExternalizable()) )  
		goto label_cond_2c;
	if ( !(( desc->isProxy() ^ 0x1)) )  
		goto label_cond_2c;
	obj->checkCast("java::io::Externalizable");
	//    .end local p1    # "obj":Ljava/lang/Object;
	this->writeExternalData(obj);
label_goto_29:
	return;
	// 2003    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_2a:
	cVar0 = obj;
	goto label_goto_13;
	// 2010    .line 1481
label_cond_2c:
	this->writeSerialData(obj, desc);
	//label_try_end_2f:
	}
	catch (...){
		goto label_catchall_30;
	}
	//    .catchall {:try_start_0 .. :try_end_2f} :catchall_30
	goto label_goto_29;
	// 2018    .line 1483
	// 2019    .end local p1    # "obj":Ljava/lang/Object;
label_catchall_30:
	// move-exception
	
	// throw
	throw;

}
// .method private writeProxyDesc(Ljava/io/ObjectStreamClass;Z)V
void java::io::ObjectOutputStream::writeProxyDesc(std::shared_ptr<java::io::ObjectStreamClass> desc,bool unshared)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::Class> cl;
	auto ifaces;
	int i;
	
	//    .param p1, "desc"    # Ljava/io/ObjectStreamClass;
	//    .param p2, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 2031        value = {
	// 2032            Ljava/io/IOException;
	// 2033        }
	// 2034    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x0;
	this->bout->writeByte(0x7d);
	if ( !(unshared) )  
		goto label_cond_30;
label_goto_d:
	this->handles->assign(cVar0);
	cl = desc->forClass();
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	ifaces = cl->getInterfaces();
	//    .local v2, "ifaces":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	this->bout->writeInt(ifaces->size());
	i = 0x0;
	//    .local v1, "i":I
label_goto_1f:
	if ( i >= ifaces->size() )
		goto label_cond_32;
	this->bout->writeUTF(ifaces[i]->getName());
	i = ( i + 0x1);
	goto label_goto_1f;
	// 2100    .end local v0    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 2101    .end local v1    # "i":I
	// 2102    .end local v2    # "ifaces":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
label_cond_30:
	cVar0 = desc;
	goto label_goto_d;
	// 2109    .line 1306
	// 2110    .restart local v0    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 2111    .restart local v1    # "i":I
	// 2112    .restart local v2    # "ifaces":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
label_cond_32:
	this->bout->setBlockDataMode(0x1);
	if ( !(cl) )  
		goto label_cond_43;
	if ( !(this->isCustomSubclass()) )  
		goto label_cond_43;
	sun::reflect::misc::ReflectUtil::checkPackageAccess(cl);
label_cond_43:
	this->annotateProxyClass(cl);
	this->bout->setBlockDataMode(cVar1);
	this->bout->writeByte(0x78);
	this->writeClassDesc(desc->getSuperDesc(), cVar1);
	return;

}
// .method private writeSerialData(Ljava/lang/Object;Ljava/io/ObjectStreamClass;)V
void java::io::ObjectOutputStream::writeSerialData(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectStreamClass> desc)
{
	
	auto slots;
	int i;
	std::shared_ptr<java::io::ObjectStreamClass> slotDesc;
	std::shared_ptr<java::io::SerialCallbackContext> oldContext;
	std::shared_ptr<java::io::SerialCallbackContext> cVar0;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "desc"    # Ljava/io/ObjectStreamClass;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2164        value = {
	// 2165            Ljava/io/IOException;
	// 2166        }
	// 2167    .end annotation
	slots = desc->getClassDataLayout();
	//    .local v4, "slots":[Ljava/io/ObjectStreamClass$ClassDataSlot;
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( i >= slots->size() )
		goto label_cond_4f;
	slotDesc = slots[i]->desc;
	//    .local v3, "slotDesc":Ljava/io/ObjectStreamClass;
	if ( !(slotDesc->hasWriteObjectMethod()) )  
		goto label_cond_4b;
	//    .local v2, "oldPut":Ljava/io/ObjectOutputStream$PutFieldImpl;
	this->curPut = 0x0;
	oldContext = this->curContext;
	//    .local v1, "oldContext":Ljava/io/SerialCallbackContext;
	try {
	//label_try_start_19:
	cVar0 = std::make_shared<java::io::SerialCallbackContext>(obj, slotDesc);
	this->curContext = cVar0;
	this->bout->setBlockDataMode(0x1);
	slotDesc->invokeWriteObject(obj, this);
	this->bout->setBlockDataMode(0x0);
	this->bout->writeByte(0x78);
	//label_try_end_36:
	}
	catch (...){
		goto label_catchall_42;
	}
	//    .catchall {:try_start_19 .. :try_end_36} :catchall_42
	this->curContext->setUsed();
	this->curContext = oldContext;
	this->curPut = this->curPut;
	//    .end local v1    # "oldContext":Ljava/io/SerialCallbackContext;
	//    .end local v2    # "oldPut":Ljava/io/ObjectOutputStream$PutFieldImpl;
label_goto_3f:
	i = ( i + 0x1);
	goto label_goto_5;
	// 2264    .line 1548
	// 2265    .restart local v1    # "oldContext":Ljava/io/SerialCallbackContext;
	// 2266    .restart local v2    # "oldPut":Ljava/io/ObjectOutputStream$PutFieldImpl;
label_catchall_42:
	// move-exception
	
	this->curContext->setUsed();
	this->curContext = oldContext;
	// throw
	throw;
	// 2281    .line 1558
	// 2282    .end local v1    # "oldContext":Ljava/io/SerialCallbackContext;
	// 2283    .end local v2    # "oldPut":Ljava/io/ObjectOutputStream$PutFieldImpl;
label_cond_4b:
	this->defaultWriteFields(obj, slotDesc);
	goto label_goto_3f;
	// 2289    .line 1561
	// 2290    .end local v3    # "slotDesc":Ljava/io/ObjectStreamClass;
label_cond_4f:
	return;

}
// .method private writeString(Ljava/lang/String;Z)V
void java::io::ObjectOutputStream::writeString(std::shared_ptr<java::lang::String> str,bool unshared)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	long long utflen;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 2300        value = {
	// 2301            Ljava/io/IOException;
	// 2302        }
	// 2303    .end annotation
	if ( !(unshared) )  
		goto label_cond_22;
	cVar0 = 0x0;
label_goto_5:
	this->handles->assign(cVar0);
	utflen = this->bout->getUTFLength(str);
	//    .local v0, "utflen":J
	if ( (utflen > 0xffff) > 0 ) 
		goto label_cond_24;
	this->bout->writeByte(0x74);
	this->bout->writeUTF(str, utflen);
label_goto_21:
	return;
	// 2347    .end local v0    # "utflen":J
label_cond_22:
	cVar0 = str;
	goto label_goto_5;
	// 2354    .line 1357
	// 2355    .restart local v0    # "utflen":J
label_cond_24:
	this->bout->writeByte(0x7c);
	this->bout->writeLongUTF(str, utflen);
	goto label_goto_21;

}
// .method protected annotateClass(Ljava/lang/Class;)V
void java::io::ObjectOutputStream::annotateClass(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2376        value = {
	// 2377            "(",
	// 2378            "Ljava/lang/Class",
	// 2379            "<*>;)V"
	// 2380        }
	// 2381    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 2384        value = {
	// 2385            Ljava/io/IOException;
	// 2386        }
	// 2387    .end annotation
	//    .local p1, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return;

}
// .method protected annotateProxyClass(Ljava/lang/Class;)V
void java::io::ObjectOutputStream::annotateProxyClass(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2398        value = {
	// 2399            "(",
	// 2400            "Ljava/lang/Class",
	// 2401            "<*>;)V"
	// 2402        }
	// 2403    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 2406        value = {
	// 2407            Ljava/io/IOException;
	// 2408        }
	// 2409    .end annotation
	//    .local p1, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return;

}
// .method public close()V
void java::io::ObjectOutputStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2420        value = {
	// 2421            Ljava/io/IOException;
	// 2422        }
	// 2423    .end annotation
	this->flush();
	this->bout->close();
	return;

}
// .method public defaultWriteObject()V
void java::io::ObjectOutputStream::defaultWriteObject()
{
	
	std::shared_ptr<java::io::SerialCallbackContext> ctx;
	std::shared_ptr<java::io::NotActiveException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2441        value = {
	// 2442            Ljava/io/IOException;
	// 2443        }
	// 2444    .end annotation
	ctx = this->curContext;
	//    .local v0, "ctx":Ljava/io/SerialCallbackContext;
	if ( ctx )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::NotActiveException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not in call to writeObject")));
	// throw
	throw cVar0;
	// 2463    .line 453
label_cond_d:
	//    .local v2, "curObj":Ljava/lang/Object;
	//    .local v1, "curDesc":Ljava/io/ObjectStreamClass;
	this->bout->setBlockDataMode(0x0);
	this->defaultWriteFields(ctx->getObj(), ctx->getDesc());
	this->bout->setBlockDataMode(0x1);
	return;

}
// .method protected drain()V
void java::io::ObjectOutputStream::drain()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2500        value = {
	// 2501            Ljava/io/IOException;
	// 2502        }
	// 2503    .end annotation
	this->bout->drain();
	return;

}
// .method protected enableReplaceObject(Z)Z
bool java::io::ObjectOutputStream::enableReplaceObject(bool enable)
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	
	//    .param p1, "enable"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 2519        value = {
	// 2520            Ljava/lang/SecurityException;
	// 2521        }
	// 2522    .end annotation
	if ( enable != this->enableReplace )
		goto label_cond_5;
	return enable;
	// 2533    .line 632
label_cond_5:
	if ( !(enable) )  
		goto label_cond_12;
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_12;
	sm->checkPermission(java::io::ObjectOutputStream::SUBSTITUTION_PERMISSION);
	//    .end local v0    # "sm":Ljava/lang/SecurityManager;
label_cond_12:
	this->enableReplace = enable;
	return ( this->enableReplace ^ 0x1);

}
// .method public flush()V
void java::io::ObjectOutputStream::flush()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2567        value = {
	// 2568            Ljava/io/IOException;
	// 2569        }
	// 2570    .end annotation
	this->bout->flush();
	return;

}
// .method getProtocolVersion()I
int java::io::ObjectOutputStream::getProtocolVersion()
{
	
	return this->protocol;

}
// .method public putFields()Ljava/io/ObjectOutputStream$PutField;
std::shared_ptr<java::io::ObjectOutputStream_S_PutField> java::io::ObjectOutputStream::putFields()
{
	
	std::shared_ptr<java::io::SerialCallbackContext> ctx;
	std::shared_ptr<java::io::NotActiveException> cVar0;
	std::shared_ptr<java::io::ObjectOutputStream_S_PutFieldImpl> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2595        value = {
	// 2596            Ljava/io/IOException;
	// 2597        }
	// 2598    .end annotation
	if ( this->curPut )     
		goto label_cond_20;
	ctx = this->curContext;
	//    .local v0, "ctx":Ljava/io/SerialCallbackContext;
	if ( ctx )     
		goto label_cond_11;
	cVar0 = std::make_shared<java::io::NotActiveException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not in call to writeObject")));
	// throw
	throw cVar0;
	// 2622    .line 476
label_cond_11:
	ctx->getObj();
	//    .local v2, "curObj":Ljava/lang/Object;
	//    .local v1, "curDesc":Ljava/io/ObjectStreamClass;
	cVar1 = std::make_shared<java::io::ObjectOutputStream_S_PutFieldImpl>(this, ctx->getDesc());
	this->curPut = cVar1;
	//    .end local v0    # "ctx":Ljava/io/SerialCallbackContext;
	//    .end local v1    # "curDesc":Ljava/io/ObjectStreamClass;
	//    .end local v2    # "curObj":Ljava/lang/Object;
label_cond_20:
	return this->curPut;

}
// .method protected replaceObject(Ljava/lang/Object;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectOutputStream::replaceObject(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2656        value = {
	// 2657            Ljava/io/IOException;
	// 2658        }
	// 2659    .end annotation
	return obj;

}
// .method public reset()V
void java::io::ObjectOutputStream::reset()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2669        value = {
	// 2670            Ljava/io/IOException;
	// 2671        }
	// 2672    .end annotation
	if ( !(this->depth) )  
		goto label_cond_e;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("stream active")));
	// throw
	throw cVar0;
	// 2691    .line 515
label_cond_e:
	this->bout->setBlockDataMode(0x0);
	this->bout->writeByte(0x79);
	this->clear();
	this->bout->setBlockDataMode(0x1);
	return;

}
// .method public useProtocolVersion(I)V
void java::io::ObjectOutputStream::useProtocolVersion(int version)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "version"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2722        value = {
	// 2723            Ljava/io/IOException;
	// 2724        }
	// 2725    .end annotation
	if ( !(this->handles->size()) )  
		goto label_cond_11;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("stream non-empty")));
	// throw
	throw cVar0;
	// 2746    .line 308
label_cond_11:
	// switch
	{
	auto item = ( version );
	if (item == 1) goto label_pswitch_2e;
	if (item == 2) goto label_pswitch_2e;
	}
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unknown version: ")))->append(version)->toString());
	// throw
	throw cVar1;
	// 2777    .line 311
label_pswitch_2e:
	this->protocol = version;
	return;
	// 2784    .line 308
	// 2785    nop
	// 2787    :pswitch_data_32
	// 2788    .packed-switch 0x1
	// 2789        :pswitch_2e
	// 2790        :pswitch_2e
	// 2791    .end packed-switch

}
// .method public write(I)V
void java::io::ObjectOutputStream::write(int val)
{
	
	//    .param p1, "val"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2798        value = {
	// 2799            Ljava/io/IOException;
	// 2800        }
	// 2801    .end annotation
	this->bout->write(val);
	return;

}
// .method public write([B)V
void java::io::ObjectOutputStream::write(std::shared_ptr<unsigned char[]> buf)
{
	
	int cVar0;
	
	//    .param p1, "buf"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 2817        value = {
	// 2818            Ljava/io/IOException;
	// 2819        }
	// 2820    .end annotation
	cVar0 = 0x0;
	this->bout->write(buf, cVar0, buf->size(), cVar0);
	return;

}
// .method public write([BII)V
void java::io::ObjectOutputStream::write(std::shared_ptr<unsigned char[]> buf,int off,int len)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	int endoff;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	
	//    .param p1, "buf"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2842        value = {
	// 2843            Ljava/io/IOException;
	// 2844        }
	// 2845    .end annotation
	if ( buf )     
		goto label_cond_9;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 2860    .line 720
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
	// 2878    .line 721
label_cond_15:
	if ( endoff >  buf->size() )
		goto label_cond_f;
	if ( endoff < 0 ) 
		goto label_cond_f;
	this->bout->write(buf, off, len, 0x0);
	return;

}
// .method public writeBoolean(Z)V
void java::io::ObjectOutputStream::writeBoolean(bool val)
{
	
	//    .param p1, "val"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 2899        value = {
	// 2900            Ljava/io/IOException;
	// 2901        }
	// 2902    .end annotation
	this->bout->writeBoolean(val);
	return;

}
// .method public writeByte(I)V
void java::io::ObjectOutputStream::writeByte(int val)
{
	
	//    .param p1, "val"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2918        value = {
	// 2919            Ljava/io/IOException;
	// 2920        }
	// 2921    .end annotation
	this->bout->writeByte(val);
	return;

}
// .method public writeBytes(Ljava/lang/String;)V
void java::io::ObjectOutputStream::writeBytes(std::shared_ptr<java::lang::String> str)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2937        value = {
	// 2938            Ljava/io/IOException;
	// 2939        }
	// 2940    .end annotation
	this->bout->writeBytes(str);
	return;

}
// .method public writeChar(I)V
void java::io::ObjectOutputStream::writeChar(int val)
{
	
	//    .param p1, "val"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2956        value = {
	// 2957            Ljava/io/IOException;
	// 2958        }
	// 2959    .end annotation
	this->bout->writeChar(val);
	return;

}
// .method public writeChars(Ljava/lang/String;)V
void java::io::ObjectOutputStream::writeChars(std::shared_ptr<java::lang::String> str)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2975        value = {
	// 2976            Ljava/io/IOException;
	// 2977        }
	// 2978    .end annotation
	this->bout->writeChars(str);
	return;

}
// .method protected writeClassDescriptor(Ljava/io/ObjectStreamClass;)V
void java::io::ObjectOutputStream::writeClassDescriptor(std::shared_ptr<java::io::ObjectStreamClass> desc)
{
	
	//    .param p1, "desc"    # Ljava/io/ObjectStreamClass;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2994        value = {
	// 2995            Ljava/io/IOException;
	// 2996        }
	// 2997    .end annotation
	desc->writeNonProxy(this);
	return;

}
// .method public writeDouble(D)V
void java::io::ObjectOutputStream::writeDouble(double val)
{
	
	//    .param p1, "val"    # D
	//    .annotation system Ldalvik/annotation/Throws;
	// 3011        value = {
	// 3012            Ljava/io/IOException;
	// 3013        }
	// 3014    .end annotation
	this->bout->writeDouble(val);
	return;

}
// .method public writeFields()V
void java::io::ObjectOutputStream::writeFields()
{
	
	std::shared_ptr<java::io::NotActiveException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3029        value = {
	// 3030            Ljava/io/IOException;
	// 3031        }
	// 3032    .end annotation
	if ( this->curPut )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::NotActiveException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("no current PutField object")));
	// throw
	throw cVar0;
	// 3049    .line 496
label_cond_d:
	this->bout->setBlockDataMode(0x0);
	this->curPut->writeFields();
	this->bout->setBlockDataMode(0x1);
	return;

}
// .method public writeFloat(F)V
void java::io::ObjectOutputStream::writeFloat(float val)
{
	
	//    .param p1, "val"    # F
	//    .annotation system Ldalvik/annotation/Throws;
	// 3077        value = {
	// 3078            Ljava/io/IOException;
	// 3079        }
	// 3080    .end annotation
	this->bout->writeFloat(val);
	return;

}
// .method public writeInt(I)V
void java::io::ObjectOutputStream::writeInt(int val)
{
	
	//    .param p1, "val"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 3096        value = {
	// 3097            Ljava/io/IOException;
	// 3098        }
	// 3099    .end annotation
	this->bout->writeInt(val);
	return;

}
// .method public writeLong(J)V
void java::io::ObjectOutputStream::writeLong(long long val)
{
	
	//    .param p1, "val"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 3115        value = {
	// 3116            Ljava/io/IOException;
	// 3117        }
	// 3118    .end annotation
	this->bout->writeLong(val);
	return;

}
// .method public final writeObject(Ljava/lang/Object;)V
void java::io::ObjectOutputStream::writeObject(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> ex;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3134        value = {
	// 3135            Ljava/io/IOException;
	// 3136        }
	// 3137    .end annotation
	if ( !(this->enableOverride) )  
		goto label_cond_8;
	this->writeObjectOverride(obj);
	return;
	// 3151    .line 347
label_cond_8:
	try {
	//label_try_start_9:
	this->writeObject0(obj, 0x0);
	//label_try_end_c:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	//    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_c} :catch_d
	return;
	// 3163    .line 348
label_catch_d:
	// move-exception
	ex = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/io/IOException;
	if ( this->depth )     
		goto label_cond_15;
	try {
	//label_try_start_12:
	this->writeFatalException(ex);
	//label_try_end_15:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	//    .catch Ljava/io/IOException; {:try_start_12 .. :try_end_15} :catch_16
label_cond_15:
label_goto_15:
	// throw
	throw ex;
	// 3184    .line 355
label_catch_16:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex2":Ljava/io/IOException;
	goto label_goto_15;

}
// .method protected writeObjectOverride(Ljava/lang/Object;)V
void java::io::ObjectOutputStream::writeObjectOverride(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3196        value = {
	// 3197            Ljava/io/IOException;
	// 3198        }
	// 3199    .end annotation
	if ( this->enableOverride )     
		goto label_cond_a;
	cVar0 = std::make_shared<java::io::IOException>();
	// throw
	throw cVar0;
	// 3214    .line 387
label_cond_a:
	return;

}
// .method public writeShort(I)V
void java::io::ObjectOutputStream::writeShort(int val)
{
	
	//    .param p1, "val"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 3223        value = {
	// 3224            Ljava/io/IOException;
	// 3225        }
	// 3226    .end annotation
	this->bout->writeShort(val);
	return;

}
// .method protected writeStreamHeader()V
void java::io::ObjectOutputStream::writeStreamHeader()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3241        value = {
	// 3242            Ljava/io/IOException;
	// 3243        }
	// 3244    .end annotation
	this->bout->writeShort(-0x5313);
	this->bout->writeShort(0x5);
	return;

}
// .method writeTypeString(Ljava/lang/String;)V
void java::io::ObjectOutputStream::writeTypeString(std::shared_ptr<java::lang::String> str)
{
	
	int handle;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3269        value = {
	// 3270            Ljava/io/IOException;
	// 3271        }
	// 3272    .end annotation
	if ( str )     
		goto label_cond_6;
	this->writeNull();
label_goto_5:
	return;
	// 3285    .line 1043
label_cond_6:
	handle = this->handles->lookup(str);
	//    .local v0, "handle":I
	if ( handle == -0x1 )
		goto label_cond_13;
	this->writeHandle(handle);
	goto label_goto_5;
	// 3303    .line 1046
label_cond_13:
	this->writeString(str, 0x0);
	goto label_goto_5;

}
// .method public writeUTF(Ljava/lang/String;)V
void java::io::ObjectOutputStream::writeUTF(std::shared_ptr<java::lang::String> str)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3316        value = {
	// 3317            Ljava/io/IOException;
	// 3318        }
	// 3319    .end annotation
	this->bout->writeUTF(str);
	return;

}
// .method public writeUnshared(Ljava/lang/Object;)V
void java::io::ObjectOutputStream::writeUnshared(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> ex;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3335        value = {
	// 3336            Ljava/io/IOException;
	// 3337        }
	// 3338    .end annotation
	try {
	//label_try_start_1:
	this->writeObject0(obj, 0x1);
	//label_try_end_4:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_4} :catch_5
	return;
	// 3352    .line 431
label_catch_5:
	// move-exception
	ex = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/io/IOException;
	if ( this->depth )     
		goto label_cond_d;
	this->writeFatalException(ex);
label_cond_d:
	// throw
	throw ex;

}


