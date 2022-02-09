// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$5.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass_S_5.h"
#include "java.io.ObjectStreamClass_S_MemberSignature.h"
#include "java.lang.String.h"

// .method constructor <init>()V
java::io::ObjectStreamClass_S_5::ObjectStreamClass_S_5()
{
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public compare(Ljava/io/ObjectStreamClass$MemberSignature;Ljava/io/ObjectStreamClass$MemberSignature;)I
int java::io::ObjectStreamClass_S_5::compare(std::shared_ptr<java::io::ObjectStreamClass_S_MemberSignature> ms1,std::shared_ptr<java::io::ObjectStreamClass_S_MemberSignature> ms2)
{
	
	int comp;
	
	//    .param p1, "ms1"    # Ljava/io/ObjectStreamClass$MemberSignature;
	//    .param p2, "ms2"    # Ljava/io/ObjectStreamClass$MemberSignature;
	comp = ms1->name->compareTo(ms2->name);
	//    .local v0, "comp":I
	if ( comp )     
		goto label_cond_12;
label_cond_12:
	return comp;

}


