#ifndef __java_lang_Daemons_S_ReferenceQueueDaemon__
#define __java_lang_Daemons_S_ReferenceQueueDaemon__
// H L:\smali2cpp20\x64\Release\out\java\lang\Daemons$ReferenceQueueDaemon.smali
#include "java2ctype.h"
#include "java.lang.Daemons_S_Daemon.h"

namespace java::lang{
class Daemons_S_ReferenceQueueDaemon : public java::lang::Daemons_S_Daemon {
protected:
private:
	static std::shared_ptr<java::lang::Daemons_S_ReferenceQueueDaemon> INSTANCE;
public:
	static std::shared_ptr<java::lang::Daemons_S_ReferenceQueueDaemon> _get0();
	static void static_cinit();
	Daemons_S_ReferenceQueueDaemon();
	void virtual runInternal();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Daemons_S_ReferenceQueueDaemon::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Daemons_S_ReferenceQueueDaemon(){
	}

}; // class Daemons_S_ReferenceQueueDaemon
}; // namespace java::lang

#endif //__java_lang_Daemons_S_ReferenceQueueDaemon__

