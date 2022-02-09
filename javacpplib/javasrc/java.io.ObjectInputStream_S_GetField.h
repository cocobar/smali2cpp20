#ifndef __java_io_ObjectInputStream_S_GetField__
#define __java_io_ObjectInputStream_S_GetField__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$GetField.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class ObjectInputStream_S_GetField : public java::lang::Object {
protected:
private:
public:
	ObjectInputStream_S_GetField();
	bool defaulted(std::shared_ptr<java::lang::String> var0);
	unsigned char get(std::shared_ptr<java::lang::String> var0,unsigned char var1);
	char get(std::shared_ptr<java::lang::String> var0,char var1);
	double get(std::shared_ptr<java::lang::String> var0,double var1);
	float get(std::shared_ptr<java::lang::String> var0,float var1);
	int get(std::shared_ptr<java::lang::String> var0,int var1);
	long long get(std::shared_ptr<java::lang::String> var0,long long var1);
	std::shared_ptr<java::lang::Object> get(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::Object> var1);
	short get(std::shared_ptr<java::lang::String> var0,short var1);
	bool get(std::shared_ptr<java::lang::String> var0,bool var1);
	std::shared_ptr<java::io::ObjectStreamClass> getObjectStreamClass() = 0;
public:
	virtual ~ObjectInputStream_S_GetField(){
	}

}; // class ObjectInputStream_S_GetField
}; // namespace java::io

#endif //__java_io_ObjectInputStream_S_GetField__

