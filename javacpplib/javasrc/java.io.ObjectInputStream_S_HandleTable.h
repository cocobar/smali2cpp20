#ifndef __java_io_ObjectInputStream_S_HandleTable__
#define __java_io_ObjectInputStream_S_HandleTable__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$HandleTable.smali
#include "java2ctype.h"
#include "java.io.ObjectInputStream_S_HandleTable_S_HandleList.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.Object.h"

namespace java::io{
class ObjectInputStream_S_HandleTable : public java::lang::Object {
protected:
private:
	static unsigned char STATUS_EXCEPTION;
	static unsigned char STATUS_OK;
	static unsigned char STATUS_UNKNOWN;
	void virtual grow();
public:
	std::shared_ptr<std::vector<java::io::ObjectInputStream_S_HandleTable_S_HandleList>> deps;
	std::shared_ptr<std::vector<java::lang::Object>> entries;
	int lowDep;
	int size;
	std::shared_ptr<unsigned char[]> status;
	ObjectInputStream_S_HandleTable(int initialCapacity);
	int virtual assign(std::shared_ptr<java::lang::Object> obj);
	void virtual clear();
	void virtual finish(int handle);
	std::shared_ptr<java::lang::ClassNotFoundException> virtual lookupException(int handle);
	std::shared_ptr<java::lang::Object> virtual lookupObject(int handle);
	void virtual markDependency(int dependent,int target);
	void virtual markException(int handle,std::shared_ptr<java::lang::ClassNotFoundException> ex);
	void virtual setObject(int handle,std::shared_ptr<java::lang::Object> obj);
	int virtual size();
public:
	virtual ~ObjectInputStream_S_HandleTable(){
	}

}; // class ObjectInputStream_S_HandleTable
}; // namespace java::io

#endif //__java_io_ObjectInputStream_S_HandleTable__

