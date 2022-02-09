// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$ClassDataSlot.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass_S_ClassDataSlot.h"
#include "java.io.ObjectStreamClass.h"

// .method constructor <init>(Ljava/io/ObjectStreamClass;Z)V
java::io::ObjectStreamClass_S_ClassDataSlot::ObjectStreamClass_S_ClassDataSlot(std::shared_ptr<java::io::ObjectStreamClass> desc,bool hasData)
{
	
	//    .param p1, "desc"    # Ljava/io/ObjectStreamClass;
	//    .param p2, "hasData"    # Z
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->desc = desc;
	this->hasData = hasData;
	return;

}


