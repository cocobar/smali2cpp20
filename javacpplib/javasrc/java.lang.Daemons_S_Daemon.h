#ifndef __java_lang_Daemons_S_Daemon__
#define __java_lang_Daemons_S_Daemon__
// H L:\smali2cpp20\x64\Release\out\java\lang\Daemons$Daemon.smali
#include "java2ctype.h"
#include "java.lang.Runnable.h"
#include "java.lang.StackTraceElement.h"
#include "java.lang.String.h"
#include "java.lang.Thread.h"

namespace java::lang{
class Daemons_S_Daemon : public java::lang::Runnable {
protected:
	Daemons_S_Daemon(std::shared_ptr<java::lang::String> name);
	bool virtual isRunning();
private:
	std::shared_ptr<java::lang::String> name;
	bool postZygoteFork;
	std::shared_ptr<java::lang::Thread> thread;
public:
	std::shared_ptr<java::lang::StackTraceElement> virtual getStackTrace();
	void virtual interrupt();
	void virtual interrupt(std::shared_ptr<java::lang::Thread> thread);
	void virtual run();
	void runInternal() = 0;
	void virtual start();
	void virtual startInternal();
	void virtual startPostZygoteFork();
	void virtual stop();
public:
	virtual ~Daemons_S_Daemon(){
	}

}; // class Daemons_S_Daemon
}; // namespace java::lang

#endif //__java_lang_Daemons_S_Daemon__

