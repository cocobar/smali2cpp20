// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\EmulatedStackFrame$Range.smali
#include "java2ctype.h"
#include "dalvik.system.EmulatedStackFrame_S_Range.h"
#include "dalvik.system.EmulatedStackFrame.h"
#include "java.lang.Class.h"
#include "java.lang.invoke.MethodType.h"

// .method private constructor <init>(IIII)V
dalvik::system::EmulatedStackFrame_S_Range::EmulatedStackFrame_S_Range(int referencesStart,int numReferences,int stackFrameStart,int numBytes)
{
	
	//    .param p1, "referencesStart"    # I
	//    .param p2, "numReferences"    # I
	//    .param p3, "stackFrameStart"    # I
	//    .param p4, "numBytes"    # I
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->referencesStart = referencesStart;
	this->numReferences = numReferences;
	this->stackFrameStart = stackFrameStart;
	this->numBytes = numBytes;
	return;

}
// .method public static all(Ljava/lang/invoke/MethodType;)Ldalvik/system/EmulatedStackFrame$Range;
std::shared_ptr<dalvik::system::EmulatedStackFrame_S_Range> dalvik::system::EmulatedStackFrame_S_Range::all(std::shared_ptr<java::lang::invoke::MethodType> frameType)
{
	
	//    .param p0, "frameType"    # Ljava/lang/invoke/MethodType;
	return dalvik::system::EmulatedStackFrame_S_Range::of(frameType, 0x0, frameType->parameterCount());

}
// .method public static of(Ljava/lang/invoke/MethodType;II)Ldalvik/system/EmulatedStackFrame$Range;
std::shared_ptr<dalvik::system::EmulatedStackFrame_S_Range> dalvik::system::EmulatedStackFrame_S_Range::of(std::shared_ptr<java::lang::invoke::MethodType> frameType,int startArg,int endArg)
{
	
	auto ptypes;
	int referencesStart;
	int numReferences;
	int stackFrameStart;
	int numBytes;
	int i;
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<dalvik::system::EmulatedStackFrame_S_Range> cVar0;
	
	//    .param p0, "frameType"    # Ljava/lang/invoke/MethodType;
	//    .param p1, "startArg"    # I
	//    .param p2, "endArg"    # I
	ptypes = frameType->ptypes();
	//    .local v4, "ptypes":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	referencesStart = 0x0;
	//    .local v5, "referencesStart":I
	numReferences = 0x0;
	//    .local v3, "numReferences":I
	stackFrameStart = 0x0;
	//    .local v6, "stackFrameStart":I
	numBytes = 0x0;
	//    .local v2, "numBytes":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_9:
	if ( i >= startArg )
		goto label_cond_1e;
	cl = ptypes[i];
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( cl->isPrimitive() )     
		goto label_cond_18;
	referencesStart = ( referencesStart + 0x1);
label_goto_15:
	i = ( i + 0x1);
	goto label_goto_9;
	// 130    .line 137
label_cond_18:
	stackFrameStart = (stackFrameStart +  dalvik::system::EmulatedStackFrame::getSize(cl));
	goto label_goto_15;
	// 140    .line 141
	// 141    .end local v0    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_1e:
	i = startArg;
label_goto_1f:
	if ( i >= endArg )
		goto label_cond_34;
	cl = ptypes[i];
	//    .restart local v0    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( cl->isPrimitive() )     
		goto label_cond_2e;
	numReferences = ( numReferences + 0x1);
label_goto_2b:
	i = ( i + 0x1);
	goto label_goto_1f;
	// 168    .line 146
label_cond_2e:
	numBytes = (numBytes +  dalvik::system::EmulatedStackFrame::getSize(cl));
	goto label_goto_2b;
	// 178    .line 150
	// 179    .end local v0    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_34:
	cVar0 = std::make_shared<dalvik::system::EmulatedStackFrame_S_Range>(referencesStart, numReferences, stackFrameStart, numBytes);
	return cVar0;

}


