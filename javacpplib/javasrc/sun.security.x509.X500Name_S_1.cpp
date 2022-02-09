// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\X500Name$1.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.reflect.Constructor.h"
#include "java.lang.reflect.Field.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.x509.X500Name_S_1.h"
#include "sun.security.x509.X500Name.h"

// .method constructor <init>()V
sun::security::x509::X500Name_S_1::X500Name_S_1()
{
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::X500Name_S_1::run()
{
	
	int cVar0;
	bool cVar1;
	std::shared_ptr<javax::security::auth::x500::X500Principal> pClass;
	std::shared<std::vector<std::vector<java::lang::Class>>> args;
	std::shared_ptr<java::lang::reflect::Constructor> cons;
	std::shared_ptr<java::lang::reflect::Field> field;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 064        value = {
	// 065            Ljava/lang/Exception;
	// 066        }
	// 067    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x1;
	pClass = javax::security::auth::x500::X500Principal();
	//    .local v3, "pClass":Ljava/lang/Class;, "Ljava/lang/Class<Ljavax/security/auth/x500/X500Principal;>;"
	args = std::make_shared<std::vector<std::vector<java::lang::Class>>>(cVar1);
	args[cVar0] = sun::security::x509::X500Name();
	//    .local v0, "args":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	cons = pClass->getDeclaredConstructor(args);
	//    .local v1, "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<Ljavax/security/auth/x500/X500Principal;>;"
	cons->setAccessible(cVar1);
	field = pClass->getDeclaredField(std::make_shared<java::lang::String>(std::make_shared<char[]>("thisX500Name")));
	//    .local v2, "field":Ljava/lang/reflect/Field;
	field->setAccessible(cVar1);
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar2[cVar0] = cons;
	cVar2[cVar1] = field;
	return cVar2;

}


