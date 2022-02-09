#ifndef __java_lang_Daemons_S_FinalizerWatchdogDaemon__
#define __java_lang_Daemons_S_FinalizerWatchdogDaemon__
// H L:\smali2cpp20\x64\Release\out\java\lang\Daemons$FinalizerWatchdogDaemon.smali
#include "java2ctype.h"
#include "java.lang.Daemons_S_Daemon.h"
#include "java.lang.Object.h"

namespace java::lang{
class Daemons_S_FinalizerWatchdogDaemon : public java::lang::Daemons_S_Daemon {
protected:
private:
	static std::shared_ptr<java::lang::Daemons_S_FinalizerWatchdogDaemon> INSTANCE;
	bool needToWork;
	static void finalizerTimedOut(std::shared_ptr<java::lang::Object> object);
	bool virtual getNeedToWork();
	void virtual goToSleep();
	bool virtual sleepFor(long long durationNanos);
	bool virtual sleepUntilNeeded();
	std::shared_ptr<java::lang::Object> virtual waitForFinalization();
	void virtual wakeUp();
public:
	static std::shared_ptr<java::lang::Daemons_S_FinalizerWatchdogDaemon> _get0();
	static void _wrap0(std::shared_ptr<java::lang::Daemons_S_FinalizerWatchdogDaemon> _this);
	static void _wrap1(std::shared_ptr<java::lang::Daemons_S_FinalizerWatchdogDaemon> _this);
	static void static_cinit();
	Daemons_S_FinalizerWatchdogDaemon();
	void virtual runInternal();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Daemons_S_FinalizerWatchdogDaemon::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Daemons_S_FinalizerWatchdogDaemon(){
	}

}; // class Daemons_S_FinalizerWatchdogDaemon
}; // namespace java::lang

#endif //__java_lang_Daemons_S_FinalizerWatchdogDaemon__

