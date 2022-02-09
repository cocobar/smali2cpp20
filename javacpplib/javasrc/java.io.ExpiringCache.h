#ifndef __java_io_ExpiringCache__
#define __java_io_ExpiringCache__
// H L:\smali2cpp20\x64\Release\out\java\io\ExpiringCache.smali
#include "java2ctype.h"
#include "java.io.ExpiringCache_S_Entry.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace java::io{
class ExpiringCache : public java::lang::Object {
protected:
private:
	int MAX_ENTRIES;
	std::shared_ptr<java::util::Map<java::lang::String,java::io::ExpiringCache_S_Entry>> map;
	long long millisUntilExpiration;
	int queryCount;
	int queryOverflow;
	void virtual cleanup();
	std::shared_ptr<java::io::ExpiringCache_S_Entry> virtual entryFor(std::shared_ptr<java::lang::String> key);
public:
	static int _get0(std::shared_ptr<java::io::ExpiringCache> _this);
	ExpiringCache();
	ExpiringCache(long long millisUntilExpiration);
	void virtual clear();
	std::shared_ptr<java::lang::String> virtual get(std::shared_ptr<java::lang::String> key);
	void virtual put(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> val);
public:
	virtual ~ExpiringCache(){
	}

}; // class ExpiringCache
}; // namespace java::io

#endif //__java_io_ExpiringCache__

