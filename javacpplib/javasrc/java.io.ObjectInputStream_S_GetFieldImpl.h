#ifndef __java_io_ObjectInputStream_S_GetFieldImpl__
#define __java_io_ObjectInputStream_S_GetFieldImpl__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$GetFieldImpl.smali
#include "java2ctype.h"
#include "java.io.ObjectInputStream_S_GetField.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectStreamClass.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class ObjectInputStream_S_GetFieldImpl : public java::io::ObjectInputStream_S_GetField {
protected:
private:
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	std::shared_ptr<int[]> objHandles;
	std::shared_ptr<std::vector<java::lang::Object>> objVals;
	std::shared_ptr<unsigned char[]> primVals;
	int virtual getFieldOffset(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Class<java::lang::Object>> type);
public:
	std::shared_ptr<java::io::ObjectInputStream> this_S_0;
	ObjectInputStream_S_GetFieldImpl(std::shared_ptr<java::io::ObjectInputStream> this_S_0,std::shared_ptr<java::io::ObjectStreamClass> desc);
	bool virtual defaulted(std::shared_ptr<java::lang::String> name);
	unsigned char virtual get(std::shared_ptr<java::lang::String> name,unsigned char cVar0);
	char virtual get(std::shared_ptr<java::lang::String> name,char cVar0);
	double virtual get(std::shared_ptr<java::lang::String> name,double cVar0);
	float virtual get(std::shared_ptr<java::lang::String> name,float cVar0);
	int virtual get(std::shared_ptr<java::lang::String> name,int cVar0);
	long long virtual get(std::shared_ptr<java::lang::String> name,long long cVar0);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> val);
	short virtual get(std::shared_ptr<java::lang::String> name,short cVar0);
	bool virtual get(std::shared_ptr<java::lang::String> name,bool cVar0);
	std::shared_ptr<java::io::ObjectStreamClass> virtual getObjectStreamClass();
	void virtual readFields();
public:
	virtual ~ObjectInputStream_S_GetFieldImpl(){
	}

}; // class ObjectInputStream_S_GetFieldImpl
}; // namespace java::io

#endif //__java_io_ObjectInputStream_S_GetFieldImpl__

