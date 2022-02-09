// CPP L:\smali2cpp20\x64\Release\out\java\lang\Boolean.smali
#include "java2ctype.h"
#include "java.lang.Boolean.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"

static java::lang::Boolean::FALSE;
static java::lang::Boolean::TRUE;
static java::lang::Boolean::TYPE;
static java::lang::Boolean::serialVersionUID = -0x32df8d7f2a630512L;
// .method static constructor <clinit>()V
void java::lang::Boolean::static_cinit()
{
	
	std::shared_ptr<java::lang::Boolean> cVar0;
	std::shared_ptr<java::lang::Boolean> cVar1;
	
	cVar0 = std::make_shared<java::lang::Boolean>(0x1);
	java::lang::Boolean::TRUE = cVar0;
	cVar1 = std::make_shared<java::lang::Boolean>(0x0);
	java::lang::Boolean::FALSE = cVar1;
	java::lang::Boolean::TYPE = bool[]()->getComponentType();
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::Boolean::Boolean(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::Boolean::(java::lang::Boolean::parseBoolean(s));
	return;

}
// .method public constructor <init>(Z)V
java::lang::Boolean::Boolean(bool value)
{
	
	//    .param p1, "value"    # Z
	// 104    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = value;
	return;

}
// .method public static compare(ZZ)I
int java::lang::Boolean::compare(bool x,bool y)
{
	
	int cVar0;
	
	//    .param p0, "x"    # Z
	//    .param p1, "y"    # Z
	if ( x != y )
		goto label_cond_4;
	cVar0 = 0x0;
label_goto_3:
	return cVar0;
label_cond_4:
	if ( !(x) )  
		goto label_cond_8;
	cVar0 = 0x1;
	goto label_goto_3;
label_cond_8:
	cVar0 = -0x1;
	goto label_goto_3;

}
// .method public static getBoolean(Ljava/lang/String;)Z
bool java::lang::Boolean::getBoolean(std::shared_ptr<java::lang::String> name)
{
	
	bool result;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "name"    # Ljava/lang/String;
	result = 0x0;
	//    .local v1, "result":Z
	try {
	//label_try_start_1:
	//label_try_end_8:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a;
	}
	catch (java::lang::NullPointerException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_1 .. :try_end_8} :catch_a
	//    .catch Ljava/lang/NullPointerException; {:try_start_1 .. :try_end_8} :catch_a
	result = java::lang::Boolean::parseBoolean(java::lang::System::getProperty(name));
	//    .end local v1    # "result":Z
label_goto_9:
	return result;
	// 167    .line 255
	// 168    .restart local v1    # "result":Z
label_catch_a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/RuntimeException;
	goto label_goto_9;

}
// .method public static hashCode(Z)I
int java::lang::Boolean::hashCode(bool value)
{
	
	int cVar0;
	
	//    .param p0, "value"    # Z
	if ( !(value) )  
		goto label_cond_5;
	cVar0 = 0x4cf;
label_goto_4:
	return cVar0;
label_cond_5:
	cVar0 = 0x4d5;
	goto label_goto_4;

}
// .method public static logicalAnd(ZZ)Z
bool java::lang::Boolean::logicalAnd(bool a,bool b)
{
	
	bool b;
	
	//    .param p0, "a"    # Z
	//    .param p1, "b"    # Z
	if ( !(a) )  
		goto label_cond_3;
	//    .end local p1    # "b":Z
label_goto_2:
	return b;
	// 208    .restart local p1    # "b":Z
label_cond_3:
	b = 0x0;
	goto label_goto_2;

}
// .method public static logicalOr(ZZ)Z
bool java::lang::Boolean::logicalOr(bool a,bool b)
{
	
	bool b;
	
	//    .param p0, "a"    # Z
	//    .param p1, "b"    # Z
	if ( a )     
		goto label_cond_3;
	//    .end local p1    # "b":Z
label_goto_2:
	return b;
	// 228    .restart local p1    # "b":Z
label_cond_3:
	b = 0x1;
	goto label_goto_2;

}
// .method public static logicalXor(ZZ)Z
bool java::lang::Boolean::logicalXor(bool a,bool b)
{
	
	//    .param p0, "a"    # Z
	//    .param p1, "b"    # Z
	return (a ^ b);

}
// .method public static parseBoolean(Ljava/lang/String;)Z
bool java::lang::Boolean::parseBoolean(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( !(s) )  
		goto label_cond_a;
	cVar0 = s->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("true")));
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public static toString(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Boolean::toString(bool b)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "b"    # Z
	if ( !(b) )  
		goto label_cond_6;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("true"));
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("false"));
	goto label_goto_5;

}
// .method public static valueOf(Ljava/lang/String;)Ljava/lang/Boolean;
std::shared_ptr<java::lang::Boolean> java::lang::Boolean::valueOf(std::shared_ptr<java::lang::String> s)
{
	
	std::shared_ptr<java::lang::Boolean> cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( !(java::lang::Boolean::parseBoolean(s)) )  
		goto label_cond_9;
	cVar0 = java::lang::Boolean::TRUE;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = java::lang::Boolean::FALSE;
	goto label_goto_8;

}
// .method public static valueOf(Z)Ljava/lang/Boolean;
std::shared_ptr<java::lang::Boolean> java::lang::Boolean::valueOf(bool b)
{
	
	std::shared_ptr<java::lang::Boolean> cVar0;
	
	//    .param p0, "b"    # Z
	if ( !(b) )  
		goto label_cond_5;
	cVar0 = java::lang::Boolean::TRUE;
label_goto_4:
	return cVar0;
label_cond_5:
	cVar0 = java::lang::Boolean::FALSE;
	goto label_goto_4;

}
// .method public booleanValue()Z
bool java::lang::Boolean::booleanValue()
{
	
	return this->value;

}
// .method public compareTo(Ljava/lang/Boolean;)I
int java::lang::Boolean::compareTo(std::shared_ptr<java::lang::Boolean> b)
{
	
	//    .param p1, "b"    # Ljava/lang/Boolean;
	return java::lang::Boolean::compare(this->value, b->value);

}
// .method public equals(Ljava/lang/Object;)Z
bool java::lang::Boolean::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(obj->instanceOf("java::lang::Boolean")) )  
		goto label_cond_11;
	obj->checkCast("java::lang::Boolean");
	//    .end local p1    # "obj":Ljava/lang/Object;
	if ( this->value != obj->booleanValue() )
		goto label_cond_10;
	cVar1 = 0x1;
label_cond_10:
	return cVar1;
	// 403    .line 229
	// 404    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_11:
	return cVar1;

}
// .method public hashCode()I
int java::lang::Boolean::hashCode()
{
	
	return java::lang::Boolean::hashCode(this->value);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Boolean::toString()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	if ( !(this->value) )  
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("true"));
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("false"));
	goto label_goto_7;

}


