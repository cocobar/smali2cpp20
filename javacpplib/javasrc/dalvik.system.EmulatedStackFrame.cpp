// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\EmulatedStackFrame.smali
#include "java2ctype.h"
#include "dalvik.system.EmulatedStackFrame_S_Range.h"
#include "dalvik.system.EmulatedStackFrame.h"
#include "java.lang.Class.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.invoke.MethodType.h"

// .method static synthetic -get0(Ldalvik/system/EmulatedStackFrame;)[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> dalvik::system::EmulatedStackFrame::_get0(std::shared_ptr<dalvik::system::EmulatedStackFrame> _this)
{
	
	//    .param p0, "-this"    # Ldalvik/system/EmulatedStackFrame;
	return _this->references;

}
// .method static synthetic -get1(Ldalvik/system/EmulatedStackFrame;)[B
unsigned char dalvik::system::EmulatedStackFrame::_get1(std::shared_ptr<dalvik::system::EmulatedStackFrame> _this)
{
	
	//    .param p0, "-this"    # Ldalvik/system/EmulatedStackFrame;
	return _this->stackFrame;

}
// .method static synthetic -get2(Ldalvik/system/EmulatedStackFrame;)Ljava/lang/invoke/MethodType;
std::shared_ptr<java::lang::invoke::MethodType> dalvik::system::EmulatedStackFrame::_get2(std::shared_ptr<dalvik::system::EmulatedStackFrame> _this)
{
	
	//    .param p0, "-this"    # Ldalvik/system/EmulatedStackFrame;
	return _this->type;

}
// .method private constructor <init>(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;[B)V
dalvik::system::EmulatedStackFrame::EmulatedStackFrame(std::shared_ptr<java::lang::invoke::MethodType> type,std::shared_ptr<java::lang::invoke::MethodType> callsiteType,std::shared_ptr<std::vector<java::lang::Object>> references,std::shared_ptr<unsigned char[]> stackFrame)
{
	
	//    .param p1, "type"    # Ljava/lang/invoke/MethodType;
	//    .param p2, "callsiteType"    # Ljava/lang/invoke/MethodType;
	//    .param p3, "references"    # [Ljava/lang/Object;
	//    .param p4, "stackFrame"    # [B
	// 067    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->type = type;
	this->callsiteType = callsiteType;
	this->references = references;
	this->stackFrame = stackFrame;
	return;

}
// .method public static create(Ljava/lang/invoke/MethodType;)Ldalvik/system/EmulatedStackFrame;
std::shared_ptr<dalvik::system::EmulatedStackFrame> dalvik::system::EmulatedStackFrame::create(std::shared_ptr<java::lang::invoke::MethodType> frameType)
{
	
	int numRefs;
	int frameSize;
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::Class> ptype;
	std::shared_ptr<java::lang::Class> rtype;
	std::shared_ptr<dalvik::system::EmulatedStackFrame> cVar3;
	
	//    .param p0, "frameType"    # Ljava/lang/invoke/MethodType;
	numRefs = 0x0;
	//    .local v1, "numRefs":I
	frameSize = 0x0;
	//    .local v0, "frameSize":I
	cVar0 = frameType->ptypes();
	cVar1 = 0x0;
label_goto_8:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_1d;
	ptype = cVar0[cVar1];
	//    .local v2, "ptype":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( ptype->isPrimitive() )     
		goto label_cond_17;
	numRefs = ( numRefs + 0x1);
label_goto_14:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_8;
	// 129    .line 164
label_cond_17:
	frameSize = (frameSize +  dalvik::system::EmulatedStackFrame::getSize(ptype));
	goto label_goto_14;
	// 139    .line 168
	// 140    .end local v2    # "ptype":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_1d:
	rtype = frameType->rtype();
	//    .local v3, "rtype":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( rtype->isPrimitive() )     
		goto label_cond_33;
	numRefs = ( numRefs + 0x1);
label_goto_29:
	cVar3 = std::make_shared<dalvik::system::EmulatedStackFrame>(frameType, frameType, std::make_shared<std::vector<std::vector<java::lang::Object>>>(numRefs), std::make_shared<std::vector<unsigned char[]>>(frameSize));
	return cVar3;
	// 171    .line 172
label_cond_33:
	frameSize = (frameSize +  dalvik::system::EmulatedStackFrame::getSize(rtype));
	goto label_goto_29;

}
// .method public static getSize(Ljava/lang/Class;)I
int dalvik::system::EmulatedStackFrame::getSize(std::shared_ptr<java::lang::Class<java::lang::Object>> type)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 185        value = {
	// 186            "(",
	// 187            "Ljava/lang/Class",
	// 188            "<*>;)I"
	// 189        }
	// 190    .end annotation
	//    .local p0, "type":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( type->isPrimitive() )     
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("type.isPrimitive() == false: ")))->append(type)->toString());
	// throw
	throw cVar0;
	// 226    .line 271
label_cond_20:
	if ( !(dalvik::system::EmulatedStackFrame::is64BitPrimitive(type)) )  
		goto label_cond_29;
	return 0x8;
	// 239    .line 274
label_cond_29:
	return 0x4;

}
// .method private static is64BitPrimitive(Ljava/lang/Class;)Z
bool dalvik::system::EmulatedStackFrame::is64BitPrimitive(std::shared_ptr<java::lang::Class<java::lang::Object>> type)
{
	
	bool cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 249        value = {
	// 250            "(",
	// 251            "Ljava/lang/Class",
	// 252            "<*>;)Z"
	// 253        }
	// 254    .end annotation
	//    .local p0, "type":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = 0x1;
	if ( type == java::lang::Double::TYPE )
		goto label_cond_9;
	if ( type != java::lang::Long::TYPE )
		goto label_cond_a;
label_cond_9:
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public copyRangeTo(Ldalvik/system/EmulatedStackFrame;Ldalvik/system/EmulatedStackFrame$Range;II)V
void dalvik::system::EmulatedStackFrame::copyRangeTo(std::shared_ptr<dalvik::system::EmulatedStackFrame> other,std::shared_ptr<dalvik::system::EmulatedStackFrame_S_Range> fromRange,int referencesStart,int primitivesStart)
{
	
	//    .param p1, "other"    # Ldalvik/system/EmulatedStackFrame;
	//    .param p2, "fromRange"    # Ldalvik/system/EmulatedStackFrame$Range;
	//    .param p3, "referencesStart"    # I
	//    .param p4, "primitivesStart"    # I
	if ( fromRange->numReferences <= 0 )
		goto label_cond_f;
	java::lang::System::arraycopy(this->references, fromRange->referencesStart, other->references, referencesStart, fromRange->numReferences);
label_cond_f:
	if ( fromRange->numBytes <= 0 )
		goto label_cond_1e;
	java::lang::System::arraycopy(this->stackFrame, fromRange->stackFrameStart, other->stackFrame, primitivesStart, fromRange->numBytes);
label_cond_1e:
	return;

}
// .method public copyReturnValueTo(Ldalvik/system/EmulatedStackFrame;)V
void dalvik::system::EmulatedStackFrame::copyReturnValueTo(std::shared_ptr<dalvik::system::EmulatedStackFrame> other)
{
	
	std::shared_ptr<java::lang::Class> returnType;
	
	//    .param p1, "other"    # Ldalvik/system/EmulatedStackFrame;
	returnType = this->type->returnType();
	//    .local v0, "returnType":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( returnType->isPrimitive() )     
		goto label_cond_1f;
	other->references[( other->references->size() + -0x1)] = this->references[( this->references->size() + -0x1)];
label_goto_1e:
	return;
	// 376    .line 232
label_cond_1f:
	if ( dalvik::system::EmulatedStackFrame::is64BitPrimitive(returnType) )     
		goto label_cond_38;
	java::lang::System::arraycopy(this->stackFrame, ( this->stackFrame->size() + -0x4), other->stackFrame, ( other->stackFrame->size() + -0x4), 0x4);
	goto label_goto_1e;
	// 409    .line 236
label_cond_38:
	java::lang::System::arraycopy(this->stackFrame, ( this->stackFrame->size() + -0x8), other->stackFrame, ( other->stackFrame->size() + -0x8), 0x8);
	goto label_goto_1e;

}
// .method public final getCallsiteType()Ljava/lang/invoke/MethodType;
std::shared_ptr<java::lang::invoke::MethodType> dalvik::system::EmulatedStackFrame::getCallsiteType()
{
	
	return this->callsiteType;

}
// .method public final getMethodType()Ljava/lang/invoke/MethodType;
std::shared_ptr<java::lang::invoke::MethodType> dalvik::system::EmulatedStackFrame::getMethodType()
{
	
	return this->type;

}
// .method public getReference(ILjava/lang/Class;)Ljava/lang/Object;
template <typename T>
std::shared_ptr<T> dalvik::system::EmulatedStackFrame::getReference(int idx,std::shared_ptr<java::lang::Class<T>> referenceType)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "idx"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 460        value = {
	// 461            "<T:",
	// 462            "Ljava/lang/Object;",
	// 463            ">(I",
	// 464            "Ljava/lang/Class",
	// 465            "<TT;>;)TT;"
	// 466        }
	// 467    .end annotation
	//    .local p2, "referenceType":Ljava/lang/Class;, "Ljava/lang/Class<TT;>;"
	if ( referenceType == this->type->ptypes()[idx] )
		goto label_cond_49;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument: ")))->append(idx)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is of type ")))->append(this->type->ptypes()[idx])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" expected ")))->append(referenceType)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))->toString());
	// throw
	throw cVar0;
	// 549    .line 204
label_cond_49:
	return this->references[idx];

}
// .method public setReference(ILjava/lang/Object;)V
void dalvik::system::EmulatedStackFrame::setReference(int idx,std::shared_ptr<java::lang::Object> reference)
{
	
	auto ptypes;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::IllegalStateException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "idx"    # I
	//    .param p2, "reference"    # Ljava/lang/Object;
	ptypes = this->type->ptypes();
	//    .local v0, "ptypes":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	if ( idx < 0 ) 
		goto label_cond_b;
	if ( idx <  ptypes->size() )
		goto label_cond_25;
label_cond_b:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid index: ")))->append(idx)->toString());
	// throw
	throw cVar0;
	// 605    .line 188
label_cond_25:
	if ( !(reference) )  
		goto label_cond_53;
	if ( !(( ptypes[idx]->isInstance(reference) ^ 0x1)) )  
		goto label_cond_53;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalStateException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("reference is not of type: ")))->append(this->type->ptypes()[idx])->toString());
	// throw
	throw cVar2;
	// 652    .line 192
label_cond_53:
	this->references[idx] = reference;
	return;

}
// .method public setReturnValueTo(Ljava/lang/Object;)V
void dalvik::system::EmulatedStackFrame::setReturnValueTo(std::shared_ptr<java::lang::Object> reference)
{
	
	std::shared_ptr<java::lang::Class> returnType;
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "reference"    # Ljava/lang/Object;
	returnType = this->type->returnType();
	//    .local v0, "returnType":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(returnType->isPrimitive()) )  
		goto label_cond_26;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalStateException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("return type is not a reference type: ")))->append(returnType)->toString());
	// throw
	throw cVar0;
	// 707    .line 247
label_cond_26:
	if ( !(reference) )  
		goto label_cond_4a;
	if ( !(( returnType->isInstance(reference) ^ 0x1)) )  
		goto label_cond_4a;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("reference is not of type ")))->append(returnType)->toString());
	// throw
	throw cVar2;
	// 744    .line 251
label_cond_4a:
	this->references[( this->references->size() + -0x1)] = reference;
	return;

}


