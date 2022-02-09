// CPP L:\smali2cpp20\x64\Release\out\java\lang\Character$Subset.smali
#include "java2ctype.h"
#include "java.lang.Character_S_Subset.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method protected constructor <init>(Ljava/lang/String;)V
java::lang::Character_S_Subset::Character_S_Subset(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	// 028    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( name )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("name")));
	// throw
	throw cVar0;
	// 042    .line 621
label_cond_e:
	this->name = name;
	return;

}
// .method public final equals(Ljava/lang/Object;)Z
bool java::lang::Character_S_Subset::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	cVar0 = 0x1;
label_goto_3:
	return cVar0;
label_cond_4:
	cVar0 = 0x0;
	goto label_goto_3;

}
// .method public final hashCode()I
int java::lang::Character_S_Subset::hashCode()
{
	
	return this->hashCode();

}
// .method public final toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Character_S_Subset::toString()
{
	
	return this->name;

}


