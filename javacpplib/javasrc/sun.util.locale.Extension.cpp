// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\Extension.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "sun.util.locale.Extension.h"

// .method protected constructor <init>(C)V
sun::util::locale::Extension::Extension(char key)
{
	
	//    .param p1, "key"    # C
	// 021    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->key = key;
	return;

}
// .method constructor <init>(CLjava/lang/String;)V
sun::util::locale::Extension::Extension(char key,std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "key"    # C
	//    .param p2, "value"    # Ljava/lang/String;
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->key = key;
	this->setValue(value);
	return;

}
// .method public getID()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::Extension::getID()
{
	
	return this->id;

}
// .method public getKey()C
char sun::util::locale::Extension::getKey()
{
	
	return this->key;

}
// .method public getValue()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::Extension::getValue()
{
	
	return this->value;

}
// .method protected setValue(Ljava/lang/String;)V
void sun::util::locale::Extension::setValue(std::shared_ptr<java::lang::String> value)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "value"    # Ljava/lang/String;
	this->value = value;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->id = cVar0->append(this->key)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(value)->toString();
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::Extension::toString()
{
	
	return this->getID();

}


