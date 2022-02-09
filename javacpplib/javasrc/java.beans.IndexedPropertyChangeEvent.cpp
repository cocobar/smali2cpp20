// CPP L:\smali2cpp20\x64\Release\out\java\beans\IndexedPropertyChangeEvent.smali
#include "java2ctype.h"
#include "java.beans.IndexedPropertyChangeEvent.h"
#include "java.beans.PropertyChangeEvent.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static java::beans::IndexedPropertyChangeEvent::serialVersionUID = -0x471ad2af2ec1996L;
// .method public constructor <init>(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;I)V
java::beans::IndexedPropertyChangeEvent::IndexedPropertyChangeEvent(std::shared_ptr<java::lang::Object> source,std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<java::lang::Object> oldValue,std::shared_ptr<java::lang::Object> newValue,int index)
{
	
	//    .param p1, "source"    # Ljava/lang/Object;
	//    .param p2, "propertyName"    # Ljava/lang/String;
	//    .param p3, "oldValue"    # Ljava/lang/Object;
	//    .param p4, "newValue"    # Ljava/lang/Object;
	//    .param p5, "index"    # I
	java::beans::PropertyChangeEvent::(source, propertyName, oldValue, newValue);
	this->index = index;
	return;

}
// .method appendTo(Ljava/lang/StringBuilder;)V
void java::beans::IndexedPropertyChangeEvent::appendTo(std::shared_ptr<java::lang::StringBuilder> sb)
{
	
	//    .param p1, "sb"    # Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; index=")))->append(this->getIndex());
	return;

}
// .method public getIndex()I
int java::beans::IndexedPropertyChangeEvent::getIndex()
{
	
	return this->index;

}


