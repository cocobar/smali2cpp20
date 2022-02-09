#ifndef __android_icu_impl_JavaTimeZone__
#define __android_icu_impl_JavaTimeZone__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\JavaTimeZone.smali
#include "java2ctype.h"
#include "android.icu.util.TimeZone.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.reflect.Method.h"
#include "java.util.Calendar.h"
#include "java.util.Date.h"
#include "java.util.TimeZone.h"
#include "java.util.TreeSet.h"

namespace android::icu::impl{
class JavaTimeZone : public android::icu::util::TimeZone {
protected:
private:
	static std::shared_ptr<java::util::TreeSet<java::lang::String>> AVAILABLESET;
	static std::shared_ptr<java::lang::reflect::Method> mObservesDaylightTime;
	static long long serialVersionUID;
	bool isFrozen;
	std::shared_ptr<java::util::Calendar> javacal;
	std::shared_ptr<java::util::TimeZone> javatz;
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> s);
public:
	static void static_cinit();
	JavaTimeZone();
	JavaTimeZone(std::shared_ptr<java::util::TimeZone> jtz,std::shared_ptr<java::lang::String> cVar0);
	static std::shared_ptr<android::icu::impl::JavaTimeZone> createTimeZone(std::shared_ptr<java::lang::String> id);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::util::TimeZone> virtual cloneAsThawed();
	std::shared_ptr<android::icu::util::TimeZone> virtual freeze();
	int virtual getDSTSavings();
	int virtual getOffset(int era,int year,int month,int day,int dayOfWeek,int milliseconds);
	void virtual getOffset(long long date,bool local,std::shared_ptr<int[]> offsets);
	int virtual getRawOffset();
	int virtual hashCode();
	bool virtual inDaylightTime(std::shared_ptr<java::util::Date> date);
	bool virtual isFrozen();
	bool virtual observesDaylightTime();
	void virtual setRawOffset(int offsetMillis);
	std::shared_ptr<java::util::TimeZone> virtual unwrap();
	bool virtual useDaylightTime();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::JavaTimeZone::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~JavaTimeZone(){
	}

}; // class JavaTimeZone
}; // namespace android::icu::impl

#endif //__android_icu_impl_JavaTimeZone__

