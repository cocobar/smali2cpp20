#ifndef __java_io_Externalizable__
#define __java_io_Externalizable__
// H L:\smali2cpp20\x64\Release\out\java\io\Externalizable.smali
#include "java2ctype.h"
#include "java.io.ObjectInput.h"
#include "java.io.ObjectOutput.h"
#include "java.io.Serializable.h"

namespace java::io{
class Externalizable : public java::io::Serializable {
protected:
private:
public:
	void readExternal(std::shared_ptr<java::io::ObjectInput> var0);
	void writeExternal(std::shared_ptr<java::io::ObjectOutput> var0);
	Externalizable(){ };
	virtual ~Externalizable(){ };

}; // class Externalizable
}; // namespace java::io

#endif //__java_io_Externalizable__

