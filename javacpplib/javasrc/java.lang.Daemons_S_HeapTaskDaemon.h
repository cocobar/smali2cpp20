#ifndef __java_lang_Daemons_S_HeapTaskDaemon__
#define __java_lang_Daemons_S_HeapTaskDaemon__
// H L:\smali2cpp20\x64\Release\out\java\lang\Daemons$HeapTaskDaemon.smali
#include "java2ctype.h"
#include "java.lang.Daemons_S_Daemon.h"
#include "java.lang.Thread.h"

namespace java::lang{
class Daemons_S_HeapTaskDaemon : public java::lang::Daemons_S_Daemon {
protected:
private:
	static std::shared_ptr<java::lang::Daemons_S_HeapTaskDaemon> INSTANCE;
public:
	static std::shared_ptr<java::lang::Daemons_S_HeapTaskDaemon> _get0();
	static void static_cinit();
	Daemons_S_HeapTaskDaemon();
	void virtual interrupt(std::shared_ptr<java::lang::Thread> thread);
	void virtual runInternal();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Daemons_S_HeapTaskDaemon::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Daemons_S_HeapTaskDaemon(){
	}

}; // class Daemons_S_HeapTaskDaemon
}; // namespace java::lang

#endif //__java_lang_Daemons_S_HeapTaskDaemon__
