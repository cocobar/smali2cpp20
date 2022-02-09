// CPP L:\smali2cpp20\x64\Release\out\sun\reflect\Reflection.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.InternalError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.reflect.Modifier.h"
#include "sun.reflect.Reflection.h"

// .method public constructor <init>()V
sun::reflect::Reflection::Reflection()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static ensureMemberAccess(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Object;I)V
void sun::reflect::Reflection::ensureMemberAccess(std::shared_ptr<java::lang::Class<java::lang::Object>> currentClass,std::shared_ptr<java::lang::Class<java::lang::Object>> memberClass,std::shared_ptr<java::lang::Object> target,int modifiers)
{
	
	std::shared_ptr<java::lang::InternalError> cVar0;
	std::shared_ptr<java::lang::IllegalAccessException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p2, "target"    # Ljava/lang/Object;
	//    .param p3, "modifiers"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 022        value = {
	// 023            "(",
	// 024            "Ljava/lang/Class",
	// 025            "<*>;",
	// 026            "Ljava/lang/Class",
	// 027            "<*>;",
	// 028            "Ljava/lang/Object;",
	// 029            "I)V"
	// 030        }
	// 031    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 034        value = {
	// 035            Ljava/lang/IllegalAccessException;
	// 036        }
	// 037    .end annotation
	//    .local p0, "currentClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local p1, "memberClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(currentClass) )  
		goto label_cond_4;
	if ( memberClass )     
		goto label_cond_a;
label_cond_4:
	cVar0 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar0;
	// 055    .line 50
label_cond_a:
	if ( sun::reflect::Reflection::verifyMemberAccess(currentClass, memberClass, target, modifiers) )     
		goto label_cond_53;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalAccessException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Class ")))->append(currentClass->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" can not access a member of class ")))->append(memberClass->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" with modifiers \")))->append(java::lang::reflect::Modifier::toString(modifiers))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar1;
	// 136    .line 58
label_cond_53:
	return;

}
// .method private static isSameClassPackage(Ljava/lang/Class;Ljava/lang/Class;)Z
bool sun::reflect::Reflection::isSameClassPackage(std::shared_ptr<java::lang::Class<java::lang::Object>> c1,std::shared_ptr<java::lang::Class<java::lang::Object>> c2)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 144        value = {
	// 145            "(",
	// 146            "Ljava/lang/Class",
	// 147            "<*>;",
	// 148            "Ljava/lang/Class",
	// 149            "<*>;)Z"
	// 150        }
	// 151    .end annotation
	//    .local p0, "c1":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local p1, "c2":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return sun::reflect::Reflection::isSameClassPackage(c1->getClassLoader(), c1->getName(), c2->getClassLoader(), c2->getName());

}
// .method private static isSameClassPackage(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/lang/String;)Z
bool sun::reflect::Reflection::isSameClassPackage(std::shared_ptr<java::lang::ClassLoader> loader1,std::shared_ptr<java::lang::String> name1,std::shared_ptr<java::lang::ClassLoader> loader2,std::shared_ptr<java::lang::String> name2)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	bool cVar5;
	int lastDot1;
	int lastDot2;
	int idx1;
	int idx2;
	std::shared_ptr<java::lang::InternalError> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::InternalError> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	int length1;
	
	//    .param p0, "loader1"    # Ljava/lang/ClassLoader;
	//    .param p1, "name1"    # Ljava/lang/String;
	//    .param p2, "loader2"    # Ljava/lang/ClassLoader;
	//    .param p3, "name2"    # Ljava/lang/String;
	cVar0 = 0x4c;
	cVar1 = 0x2e;
	cVar2 = -0x1;
	cVar3 = 0x5b;
	cVar5 = 0x0;
	if ( loader1 == loader2 )
		goto label_cond_b;
	return cVar5;
	// 206    .line 153
label_cond_b:
	lastDot1 = name1->lastIndexOf(cVar1);
	//    .local v6, "lastDot1":I
	lastDot2 = name2->lastIndexOf(cVar1);
	//    .local v7, "lastDot2":I
	if ( lastDot1 == cVar2 )
		goto label_cond_17;
	if ( lastDot2 != cVar2 )
		goto label_cond_1b;
label_cond_17:
	if ( lastDot1 != lastDot2 )
		goto label_cond_1a;
	cVar5 = 0x1;
label_cond_1a:
	return cVar5;
	// 233    .line 160
label_cond_1b:
	idx1 = 0x0;
	//    .local v2, "idx1":I
	idx2 = 0x0;
	//    .local v4, "idx2":I
	if ( name1->charAt(idx1) != cVar3 )
		goto label_cond_4b;
label_cond_23:
	idx1 = ( idx1 + 0x1);
	if ( name1->charAt(idx1) == cVar3 )
		goto label_cond_23;
	if ( name1->charAt(idx1) == cVar0 )
		goto label_cond_4b;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::InternalError>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal class name ")))->append(name1)->toString());
	// throw
	throw cVar6;
	// 292    .line 173
label_cond_4b:
	if ( name2->charAt(idx2) != cVar3 )
		goto label_cond_79;
label_cond_51:
	idx2 = ( idx2 + 0x1);
	if ( name2->charAt(idx2) == cVar3 )
		goto label_cond_51;
	if ( name2->charAt(idx2) == cVar0 )
		goto label_cond_79;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::lang::InternalError>(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal class name ")))->append(name2)->toString());
	// throw
	throw cVar8;
	// 343    .line 184
label_cond_79:
	length1 = (lastDot1 - idx1);
	//    .local v5, "length1":I
	//    .local v8, "length2":I
	if ( length1 == (lastDot2 - idx2) )
		goto label_cond_80;
	return cVar5;
label_cond_80:
	return name1->regionMatches(cVar5, idx1, name2, idx2, length1);

}
// .method static isSubclassOf(Ljava/lang/Class;Ljava/lang/Class;)Z
bool sun::reflect::Reflection::isSubclassOf(std::shared_ptr<java::lang::Class<java::lang::Object>> queryClass,std::shared_ptr<java::lang::Class<java::lang::Object>> ofClass)
{
	
	std::shared_ptr<java::lang::Class> queryClass;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 374        value = {
	// 375            "(",
	// 376            "Ljava/lang/Class",
	// 377            "<*>;",
	// 378            "Ljava/lang/Class",
	// 379            "<*>;)Z"
	// 380        }
	// 381    .end annotation
	//    .local p0, "queryClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local p1, "ofClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_0:
	if ( !(queryClass) )  
		goto label_cond_b;
	if ( queryClass != ofClass )
		goto label_cond_6;
	return 0x1;
	// 398    .line 202
label_cond_6:
	queryClass = queryClass->getSuperclass();
	goto label_goto_0;
	// 406    .line 204
label_cond_b:
	return 0x0;

}
// .method public static verifyMemberAccess(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Object;I)Z
bool sun::reflect::Reflection::verifyMemberAccess(std::shared_ptr<java::lang::Class<java::lang::Object>> currentClass,std::shared_ptr<java::lang::Class<java::lang::Object>> memberClass,std::shared_ptr<java::lang::Object> target,int modifiers)
{
	
	bool cVar0;
	bool cVar1;
	int isSameClassPackage;
	int successSoFar;
	std::shared_ptr<java::lang::Class> targetClass;
	
	//    .param p2, "target"    # Ljava/lang/Object;
	//    .param p3, "modifiers"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 418        value = {
	// 419            "(",
	// 420            "Ljava/lang/Class",
	// 421            "<*>;",
	// 422            "Ljava/lang/Class",
	// 423            "<*>;",
	// 424            "Ljava/lang/Object;",
	// 425            "I)Z"
	// 426        }
	// 427    .end annotation
	//    .local p0, "currentClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local p1, "memberClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = 0x1;
	cVar1 = 0x0;
	0x0;
	//    .local v0, "gotIsSameClassPackage":Z
	0x0;
	//    .local v1, "isSameClassPackage":Z
	if ( currentClass != memberClass )
		goto label_cond_7;
	return cVar0;
	// 450    .line 82
label_cond_7:
	if ( java::lang::reflect::Modifier::isPublic(memberClass->getAccessFlags()) )     
		goto label_cond_19;
	isSameClassPackage = sun::reflect::Reflection::isSameClassPackage(currentClass, memberClass);
	//    .local v1, "isSameClassPackage":Z
	if ( isSameClassPackage )     
		goto label_cond_19;
	return cVar1;
	// 477    .line 92
	// 478    .end local v1    # "isSameClassPackage":Z
label_cond_19:
	if ( !(java::lang::reflect::Modifier::isPublic(modifiers)) )  
		goto label_cond_20;
	return cVar0;
	// 489    .line 96
label_cond_20:
	successSoFar = 0x0;
	//    .local v2, "successSoFar":Z
	if ( !(java::lang::reflect::Modifier::isProtected(modifiers)) )  
		goto label_cond_2e;
	if ( !(sun::reflect::Reflection::isSubclassOf(currentClass, memberClass)) )  
		goto label_cond_2e;
	successSoFar = 0x1;
label_cond_2e:
	if ( successSoFar )     
		goto label_cond_42;
	if ( !(( java::lang::reflect::Modifier::isPrivate(modifiers) ^ 0x1)) )  
		goto label_cond_42;
	if ( 0x1 )     
		goto label_cond_3f;
	isSameClassPackage = sun::reflect::Reflection::isSameClassPackage(currentClass, memberClass);
	//    .restart local v1    # "isSameClassPackage":Z
	//    .end local v1    # "isSameClassPackage":Z
label_cond_3f:
	if ( !(isSameClassPackage) )  
		goto label_cond_42;
label_cond_42:
	if ( successSoFar )     
		goto label_cond_45;
	return cVar1;
	// 550    .line 121
label_cond_45:
	if ( !(java::lang::reflect::Modifier::isProtected(modifiers)) )  
		goto label_cond_65;
	if ( target )     
		goto label_cond_60;
	targetClass = memberClass;
	//    .local v3, "targetClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_4e:
	if ( targetClass == currentClass )
		goto label_cond_65;
	if ( 0x1 )     
		goto label_cond_57;
	//    .restart local v1    # "isSameClassPackage":Z
	0x1;
	//    .end local v1    # "isSameClassPackage":Z
label_cond_57:
	if ( isSameClassPackage )     
		goto label_cond_65;
	if ( sun::reflect::Reflection::isSubclassOf(targetClass, currentClass) )     
		goto label_cond_65;
	return cVar1;
	// 595    .line 123
	// 596    .end local v3    # "targetClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_60:
	//    .restart local v3    # "targetClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	goto label_goto_4e;
	// 605    .line 137
	// 606    .end local v3    # "targetClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_65:
	return cVar0;

}


