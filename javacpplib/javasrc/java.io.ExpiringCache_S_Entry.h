#ifndef __java_io_ExpiringCache_S_Entry__
#define __java_io_ExpiringCache_S_Entry__
// H L:\smali2cpp20\x64\Release\out\java\io\ExpiringCache$Entry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class ExpiringCache_S_Entry : public java::lang::Object {
protected:
private:
	long long timestamp;
	std::shared_ptr<java::lang::String> val;
public:
	ExpiringCache_S_Entry(long long timestamp,std::shared_ptr<java::lang::String> val);
	void virtual setTimestamp(long long timestamp);
	void virtual setVal(std::shared_ptr<java::lang::String> val);
	long long virtual timestamp();
	std::shared_ptr<java::lang::String> virtual val();
public:
	virtual ~ExpiringCache_S_Entry(){
	}

}; // class ExpiringCache_S_Entry
}; // namespace java::io

#endif //__java_io_ExpiringCache_S_Entry__

