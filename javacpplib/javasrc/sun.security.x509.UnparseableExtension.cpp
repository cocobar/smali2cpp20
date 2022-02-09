// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\UnparseableExtension.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.lang.reflect.Field.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.OIDMap.h"
#include "sun.security.x509.UnparseableExtension.h"

// .method public constructor <init>(Lsun/security/x509/Extension;Ljava/lang/Throwable;)V
sun::security::x509::UnparseableExtension::UnparseableExtension(std::shared_ptr<sun::security::x509::Extension> ext,std::shared_ptr<java::lang::Throwable> why)
{
	
	std::shared_ptr<java::lang::Class> extClass;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "ext"    # Lsun/security/x509/Extension;
	//    .param p2, "why"    # Ljava/lang/Throwable;
	sun::security::x509::Extension::(ext);
	this->name = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	try {
	//label_try_start_8:
	extClass = sun::security::x509::OIDMap::getClass(ext->getExtensionId());
	//    .local v1, "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(extClass) )  
		goto label_cond_36;
	//    .local v2, "field":Ljava/lang/reflect/Field;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = extClass->getDeclaredField(std::make_shared<java::lang::String>(std::make_shared<char[]>("NAME")))->get(0x0);
	cVar1->checkCast("java::lang::String");
	this->name = cVar0->append(cVar1)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->toString();
	//label_try_end_36:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_39;
	}
	//    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_36} :catch_39
	//    .end local v1    # "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .end local v2    # "field":Ljava/lang/reflect/Field;
label_cond_36:
label_goto_36:
	this->why = why;
	return;
	// 090    .line 369
label_catch_39:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	goto label_goto_36;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::UnparseableExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<sun::misc::HexDumpEncoder> cVar1;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<sun::misc::HexDumpEncoder>();
	return cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unparseable ")))->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("extension due to\n")))->append(this->why)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n\n")))->append(cVar1->encodeBuffer(this->getExtensionValue()))->toString();

}


