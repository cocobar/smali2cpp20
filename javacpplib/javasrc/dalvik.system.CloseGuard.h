#ifndef __dalvik_system_CloseGuard__
#define __dalvik_system_CloseGuard__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\CloseGuard.smali
#include "java2ctype.h"
#include "dalvik.system.CloseGuard_S_DefaultTracker.h"
#include "dalvik.system.CloseGuard_S_Reporter.h"
#include "dalvik.system.CloseGuard_S_Tracker.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace dalvik::system{
class CloseGuard : public java::lang::Object {
protected:
private:
	static std::shared_ptr<dalvik::system::CloseGuard_S_DefaultTracker> DEFAULT_TRACKER;
	static bool ENABLED;
	static std::shared_ptr<dalvik::system::CloseGuard> NOOP;
	static std::shared_ptr<dalvik::system::CloseGuard_S_Reporter> REPORTER;
	static std::shared_ptr<dalvik::system::CloseGuard_S_Tracker> currentTracker;
	std::shared_ptr<java::lang::Throwable> allocationSite;
	CloseGuard();
public:
	static void static_cinit();
	static std::shared_ptr<dalvik::system::CloseGuard> get();
	static std::shared_ptr<dalvik::system::CloseGuard_S_Reporter> getReporter();
	static std::shared_ptr<dalvik::system::CloseGuard_S_Tracker> getTracker();
	static bool isEnabled();
	static void setEnabled(bool enabled);
	static void setReporter(std::shared_ptr<dalvik::system::CloseGuard_S_Reporter> reporter);
	static void setTracker(std::shared_ptr<dalvik::system::CloseGuard_S_Tracker> tracker);
	void virtual close();
	void virtual open(std::shared_ptr<java::lang::String> closer);
	void virtual warnIfOpen();
private:
	class static_init_class {
	public:
		static_init_class(){
			dalvik::system::CloseGuard::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CloseGuard(){
	}

}; // class CloseGuard
}; // namespace dalvik::system

#endif //__dalvik_system_CloseGuard__

