#ifndef __java_io_ObjectOutputStream_S_HandleTable__
#define __java_io_ObjectOutputStream_S_HandleTable__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$HandleTable.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace java::io{
class ObjectOutputStream_S_HandleTable : public java::lang::Object {
protected:
private:
	float loadFactor;
	std::shared_ptr<int[]> next;
	std::shared_ptr<std::vector<java::lang::Object>> objs;
	int size;
	std::shared_ptr<int[]> spine;
	int threshold;
	void virtual growEntries();
	void virtual growSpine();
	int virtual hash(std::shared_ptr<java::lang::Object> obj);
	void virtual insert(std::shared_ptr<java::lang::Object> obj,int handle);
public:
	ObjectOutputStream_S_HandleTable(int initialCapacity,float loadFactor);
	int virtual assign(std::shared_ptr<java::lang::Object> obj);
	void virtual clear();
	int virtual lookup(std::shared_ptr<java::lang::Object> obj);
	int virtual size();
public:
	virtual ~ObjectOutputStream_S_HandleTable(){
	}

}; // class ObjectOutputStream_S_HandleTable
}; // namespace java::io

#endif //__java_io_ObjectOutputStream_S_HandleTable__

