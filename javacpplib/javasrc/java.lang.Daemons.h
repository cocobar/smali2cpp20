#ifndef __java_lang_Daemons__
#define __java_lang_Daemons__
// H L:\smali2cpp20\x64\Release\out\java\lang\Daemons.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace java::lang{
class Daemons : public java::lang::Object {
protected:
private:
	static long long MAX_FINALIZE_NANOS;
	static int NANOS_PER_MILLI;
	static int NANOS_PER_SECOND;
public:
	Daemons();
	static void requestGC();
	static void requestHeapTrim();
	static void start();
	static void startPostZygoteFork();
	static void stop();
public:
	virtual ~Daemons(){
	}

}; // class Daemons
}; // namespace java::lang

#endif //__java_lang_Daemons__

