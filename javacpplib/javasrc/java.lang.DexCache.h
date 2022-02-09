#ifndef __java_lang_DexCache__
#define __java_lang_DexCache__
// H L:\smali2cpp20\x64\Release\out\java\lang\DexCache.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::lang{
class DexCache : public java::lang::Object {
protected:
private:
	long long dexFile;
	std::shared_ptr<java::lang::String> location;
	int numResolvedCallSites;
	int numResolvedFields;
	int numResolvedMethodTypes;
	int numResolvedMethods;
	int numResolvedTypes;
	int numStrings;
	long long resolvedCallSites;
	long long resolvedFields;
	long long resolvedMethodTypes;
	long long resolvedMethods;
	long long resolvedTypes;
	long long strings;
	DexCache();
public:
public:
	virtual ~DexCache(){
	}

}; // class DexCache
}; // namespace java::lang

#endif //__java_lang_DexCache__

