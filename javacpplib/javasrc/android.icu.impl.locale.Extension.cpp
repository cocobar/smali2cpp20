// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\Extension.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.Extension.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method protected constructor <init>(C)V
android::icu::impl::locale::Extension::Extension(char key)
{
	
	//    .param p1, "key"    # C
	// 019    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_key = key;
	return;

}
// .method constructor <init>(CLjava/lang/String;)V
android::icu::impl::locale::Extension::Extension(char key,std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "key"    # C
	//    .param p2, "value"    # Ljava/lang/String;
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_key = key;
	this->_value = value;
	return;

}
// .method public getID()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::Extension::getID()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->_key)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(this->_value)->toString();

}
// .method public getKey()C
char android::icu::impl::locale::Extension::getKey()
{
	
	return this->_key;

}
// .method public getValue()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::Extension::getValue()
{
	
	return this->_value;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::Extension::toString()
{
	
	return this->getID();

}


