#ifndef __java_io_ObjectOutputStream_S_PutField__
#define __java_io_ObjectOutputStream_S_PutField__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$PutField.smali
#include "java2ctype.h"
#include "java.io.ObjectOutput.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class ObjectOutputStream_S_PutField : public java::lang::Object {
protected:
private:
public:
	ObjectOutputStream_S_PutField();
	void put(std::shared_ptr<java::lang::String> var0,unsigned char var1) = 0;
	void put(std::shared_ptr<java::lang::String> var0,char var1) = 0;
	void put(std::shared_ptr<java::lang::String> var0,double var1) = 0;
	void put(std::shared_ptr<java::lang::String> var0,float var1) = 0;
	void put(std::shared_ptr<java::lang::String> var0,int var1) = 0;
	void put(std::shared_ptr<java::lang::String> var0,long long var1) = 0;
	void put(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::Object> var1) = 0;
	void put(std::shared_ptr<java::lang::String> var0,short var1) = 0;
	void put(std::shared_ptr<java::lang::String> var0,bool var1) = 0;
	void write(std::shared_ptr<java::io::ObjectOutput> var0);
public:
	virtual ~ObjectOutputStream_S_PutField(){
	}

}; // class ObjectOutputStream_S_PutField
}; // namespace java::io

#endif //__java_io_ObjectOutputStream_S_PutField__

