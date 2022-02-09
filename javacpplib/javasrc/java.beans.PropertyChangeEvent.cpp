// CPP L:\smali2cpp20\x64\Release\out\java\beans\PropertyChangeEvent.smali
#include "java2ctype.h"
#include "java.beans.PropertyChangeEvent.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.EventObject.h"

static java::beans::PropertyChangeEvent::serialVersionUID = 0x61bcac98a722147bL;
// .method public constructor <init>(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V
java::beans::PropertyChangeEvent::PropertyChangeEvent(std::shared_ptr<java::lang::Object> source,std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<java::lang::Object> oldValue,std::shared_ptr<java::lang::Object> newValue)
{
	
	//    .param p1, "source"    # Ljava/lang/Object;
	//    .param p2, "propertyName"    # Ljava/lang/String;
	//    .param p3, "oldValue"    # Ljava/lang/Object;
	//    .param p4, "newValue"    # Ljava/lang/Object;
	java::util::EventObject::(source);
	this->propertyName = propertyName;
	this->newValue = newValue;
	this->oldValue = oldValue;
	return;

}
// .method appendTo(Ljava/lang/StringBuilder;)V
void java::beans::PropertyChangeEvent::appendTo(std::shared_ptr<java::lang::StringBuilder> sb)
{
	
	//    .param p1, "sb"    # Ljava/lang/StringBuilder;
	return;

}
// .method public getNewValue()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::beans::PropertyChangeEvent::getNewValue()
{
	
	return this->newValue;

}
// .method public getOldValue()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::beans::PropertyChangeEvent::getOldValue()
{
	
	return this->oldValue;

}
// .method public getPropagationId()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::beans::PropertyChangeEvent::getPropagationId()
{
	
	return this->propagationId;

}
// .method public getPropertyName()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::beans::PropertyChangeEvent::getPropertyName()
{
	
	return this->propertyName;

}
// .method public setPropagationId(Ljava/lang/Object;)V
void java::beans::PropertyChangeEvent::setPropagationId(std::shared_ptr<java::lang::Object> propagationId)
{
	
	//    .param p1, "propagationId"    # Ljava/lang/Object;
	this->propagationId = propagationId;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::beans::PropertyChangeEvent::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>(this->getClass()->getName());
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[propertyName=")))->append(this->getPropertyName());
	this->appendTo(sb);
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; oldValue=")))->append(this->getOldValue());
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; newValue=")))->append(this->getNewValue());
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; propagationId=")))->append(this->getPropagationId());
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; source=")))->append(this->getSource());
	return sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString();

}


