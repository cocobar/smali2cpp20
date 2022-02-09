#ifndef __android_icu_impl_ICUService__
#define __android_icu_impl_ICUService__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUService.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUNotifier.h"
#include "android.icu.impl.ICURWLock.h"
#include "android.icu.impl.ICUService_S_CacheEntry.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.ICUService_S_LocaleRef.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Comparator.h"
#include "java.util.EventListener.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.SortedMap.h"

namespace android::icu::impl{
class ICUService : public android::icu::impl::ICUNotifier {
protected:
	std::shared_ptr<java::lang::String> name;
	bool virtual acceptsListener(std::shared_ptr<java::util::EventListener> l);
	void virtual clearCaches();
	void virtual clearServiceCache();
	std::shared_ptr<java::lang::Object> virtual handleDefault(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<std::vector<java::lang::String>> actualIDReturn);
	void virtual markDefault();
	void virtual notifyListener(std::shared_ptr<java::util::EventListener> l);
	void virtual reInitializeFactories();
private:
	static bool DEBUG;
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::ICUService_S_CacheEntry>> cache;
	int defaultSize;
	std::shared_ptr<android::icu::impl::ICUService_S_LocaleRef> dnref;
	std::shared_ptr<java::util::List<android::icu::impl::ICUService_S_Factory>> factories;
	std::shared_ptr<android::icu::impl::ICURWLock> factoryLock;
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::ICUService_S_Factory>> idcache;
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::ICUService_S_Factory>> virtual getVisibleIDMap();
public:
	static void static_cinit();
	ICUService();
	ICUService(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<android::icu::impl::ICUService_S_Key> virtual createKey(std::shared_ptr<java::lang::String> id);
	std::shared_ptr<java::util::List<android::icu::impl::ICUService_S_Factory>> virtual factories();
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<java::lang::String> descriptor);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<java::lang::String> descriptor,std::shared_ptr<std::vector<java::lang::String>> actualReturn);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<java::lang::String> id);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> virtual getDisplayNames();
	std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> virtual getDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> virtual getDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> matchID);
	std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> virtual getDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::util::Comparator<java::lang::Object>> com);
	std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> virtual getDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::util::Comparator<java::lang::Object>> com,std::shared_ptr<java::lang::String> matchID);
	std::shared_ptr<java::lang::Object> virtual getKey(std::shared_ptr<android::icu::impl::ICUService_S_Key> key);
	std::shared_ptr<java::lang::Object> virtual getKey(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<std::vector<java::lang::String>> actualReturn);
	std::shared_ptr<java::lang::Object> virtual getKey(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<std::vector<java::lang::String>> actualReturn,std::shared_ptr<android::icu::impl::ICUService_S_Factory> factory);
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getVisibleIDs();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getVisibleIDs(std::shared_ptr<java::lang::String> matchID);
	bool virtual isDefault();
	std::shared_ptr<android::icu::impl::ICUService_S_Factory> virtual registerFactory(std::shared_ptr<android::icu::impl::ICUService_S_Factory> factory);
	std::shared_ptr<android::icu::impl::ICUService_S_Factory> virtual registerObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::String> id);
	std::shared_ptr<android::icu::impl::ICUService_S_Factory> virtual registerObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::String> id,bool visible);
	void virtual reset();
	std::shared_ptr<java::lang::String> virtual stats();
	std::shared_ptr<java::lang::String> virtual toString();
	bool virtual unregisterFactory(std::shared_ptr<android::icu::impl::ICUService_S_Factory> factory);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ICUService::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ICUService(){
	}

}; // class ICUService
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUService__

