#ifndef __java_io_ObjectOutputStream_S_PutFieldImpl__
#define __java_io_ObjectOutputStream_S_PutFieldImpl__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$PutFieldImpl.smali
#include "java2ctype.h"
#include "java.io.ObjectOutput.h"
#include "java.io.ObjectOutputStream_S_PutField.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.ObjectStreamClass.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class ObjectOutputStream_S_PutFieldImpl : public java::io::ObjectOutputStream_S_PutField {
protected:
private:
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	std::shared_ptr<std::vector<java::lang::Object>> objVals;
	std::shared_ptr<unsigned char[]> primVals;
	int virtual getFieldOffset(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Class<java::lang::Object>> type);
public:
	std::shared_ptr<java::io::ObjectOutputStream> this_S_0;
	ObjectOutputStream_S_PutFieldImpl(std::shared_ptr<java::io::ObjectOutputStream> this_S_0,std::shared_ptr<java::io::ObjectStreamClass> desc);
	void virtual put(std::shared_ptr<java::lang::String> name,unsigned char val);
	void virtual put(std::shared_ptr<java::lang::String> name,char val);
	void virtual put(std::shared_ptr<java::lang::String> name,double val);
	void virtual put(std::shared_ptr<java::lang::String> name,float val);
	void virtual put(std::shared_ptr<java::lang::String> name,int val);
	void virtual put(std::shared_ptr<java::lang::String> name,long long val);
	void virtual put(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> val);
	void virtual put(std::shared_ptr<java::lang::String> name,short val);
	void virtual put(std::shared_ptr<java::lang::String> name,bool val);
	void virtual write(std::shared_ptr<java::io::ObjectOutput> out);
	void virtual writeFields();
public:
	virtual ~ObjectOutputStream_S_PutFieldImpl(){
	}

}; // class ObjectOutputStream_S_PutFieldImpl
}; // namespace java::io

#endif //__java_io_ObjectOutputStream_S_PutFieldImpl__

