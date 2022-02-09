#ifndef __java_io_ObjectOutputStream_S_ReplaceTable__
#define __java_io_ObjectOutputStream_S_ReplaceTable__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$ReplaceTable.smali
#include "java2ctype.h"
#include "java.io.ObjectOutputStream_S_HandleTable.h"
#include "java.lang.Object.h"

namespace java::io{
class ObjectOutputStream_S_ReplaceTable : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::io::ObjectOutputStream_S_HandleTable> htab;
	std::shared_ptr<std::vector<java::lang::Object>> reps;
	void virtual grow();
public:
	ObjectOutputStream_S_ReplaceTable(int initialCapacity,float loadFactor);
	void virtual assign(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::Object> rep);
	void virtual clear();
	std::shared_ptr<java::lang::Object> virtual lookup(std::shared_ptr<java::lang::Object> cVar0);
	int virtual size();
public:
	virtual ~ObjectOutputStream_S_ReplaceTable(){
	}

}; // class ObjectOutputStream_S_ReplaceTable
}; // namespace java::io

#endif //__java_io_ObjectOutputStream_S_ReplaceTable__

