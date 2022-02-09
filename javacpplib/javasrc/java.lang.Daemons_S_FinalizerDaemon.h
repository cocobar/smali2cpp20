#ifndef __java_lang_Daemons_S_FinalizerDaemon__
#define __java_lang_Daemons_S_FinalizerDaemon__
// H L:\smali2cpp20\x64\Release\out\java\lang\Daemons$FinalizerDaemon.smali
#include "java2ctype.h"
#include "java.lang.Daemons_S_Daemon.h"
#include "java.lang.Object.h"
#include "java.lang.ref.FinalizerReference.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.util.concurrent.atomic.AtomicInteger.h"

namespace java::lang{
class Daemons_S_FinalizerDaemon : public java::lang::Daemons_S_Daemon {
protected:
private:
	static std::shared_ptr<java::lang::Daemons_S_FinalizerDaemon> INSTANCE;
	std::shared_ptr<java::lang::Object> finalizingObject;
	std::shared_ptr<java::util::concurrent::atomic::AtomicInteger> progressCounter;
	std::shared_ptr<java::lang::ref::ReferenceQueue<java::lang::Object>> queue;
	void virtual doFinalize(std::shared_ptr<java::lang::ref::FinalizerReference<java::lang::Object>> reference);
public:
	static std::shared_ptr<java::lang::Daemons_S_FinalizerDaemon> _get0();
	static std::shared_ptr<java::lang::Object> _get1(std::shared_ptr<java::lang::Daemons_S_FinalizerDaemon> _this);
	static std::shared_ptr<java::util::concurrent::atomic::AtomicInteger> _get2(std::shared_ptr<java::lang::Daemons_S_FinalizerDaemon> _this);
	static void static_cinit();
	Daemons_S_FinalizerDaemon();
	void virtual runInternal();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Daemons_S_FinalizerDaemon::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Daemons_S_FinalizerDaemon(){
	}

}; // class Daemons_S_FinalizerDaemon
}; // namespace java::lang

#endif //__java_lang_Daemons_S_FinalizerDaemon__

