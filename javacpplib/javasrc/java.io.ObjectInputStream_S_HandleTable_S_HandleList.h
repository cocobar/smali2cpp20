#ifndef __java_io_ObjectInputStream_S_HandleTable_S_HandleList__
#define __java_io_ObjectInputStream_S_HandleTable_S_HandleList__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$HandleTable$HandleList.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace java::io{
class ObjectInputStream_S_HandleTable_S_HandleList : public java::lang::Object {
protected:
private:
	std::shared_ptr<int[]> list;
	int size;
public:
	ObjectInputStream_S_HandleTable_S_HandleList();
	void virtual add(int handle);
	int virtual get(int index);
	int virtual size();
public:
	virtual ~ObjectInputStream_S_HandleTable_S_HandleList(){
	}

}; // class ObjectInputStream_S_HandleTable_S_HandleList
}; // namespace java::io

#endif //__java_io_ObjectInputStream_S_HandleTable_S_HandleList__

