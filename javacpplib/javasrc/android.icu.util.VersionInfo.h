#ifndef __android_icu_util_VersionInfo__
#define __android_icu_util_VersionInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\VersionInfo.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

namespace android::icu::util{
class VersionInfo : public java::lang::Comparable<android::icu::util::VersionInfo> {
protected:
private:
	static std::shared_ptr<java::lang::String> INVALID_VERSION_NUMBER_;
	static int LAST_BYTE_MASK_;
	static std::shared_ptr<java::util::concurrent::ConcurrentHashMap<java::lang::Integer,android::icu::util::VersionInfo>> MAP_;
	static std::shared_ptr<java::lang::String> TZDATA_VERSION;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_VERSION;
	static std::shared_ptr<android::icu::util::VersionInfo> javaVersion;
	int m_version_;
	VersionInfo(int compactversion);
	static int getInt(int major,int minor,int milli,int micro);
public:
	static std::shared_ptr<android::icu::util::VersionInfo> ICU_DATA_VERSION;
	static std::shared_ptr<java::lang::String> ICU_DATA_VERSION_PATH;
	static std::shared_ptr<android::icu::util::VersionInfo> ICU_VERSION;
	static std::shared_ptr<android::icu::util::VersionInfo> UCOL_BUILDER_VERSION;
	static std::shared_ptr<android::icu::util::VersionInfo> UCOL_RUNTIME_VERSION;
	static std::shared_ptr<android::icu::util::VersionInfo> UCOL_TAILORINGS_VERSION;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_1_0;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_1_0_1;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_1_1_0;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_1_1_5;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_2_0;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_2_1_2;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_2_1_5;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_2_1_8;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_2_1_9;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_3_0;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_3_0_1;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_3_1_0;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_3_1_1;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_3_2;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_4_0;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_4_0_1;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_4_1;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_5_0;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_5_1;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_5_2;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_6_0;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_6_1;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_6_2;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_6_3;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_7_0;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_8_0;
	static std::shared_ptr<android::icu::util::VersionInfo> UNICODE_9_0;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::VersionInfo> getInstance(int major);
	static std::shared_ptr<android::icu::util::VersionInfo> getInstance(int major,int minor);
	static std::shared_ptr<android::icu::util::VersionInfo> getInstance(int major,int minor,int milli);
	static std::shared_ptr<android::icu::util::VersionInfo> getInstance(int major,int minor,int milli,int micro);
	static std::shared_ptr<android::icu::util::VersionInfo> getInstance(std::shared_ptr<java::lang::String> version);
	static std::shared_ptr<java::lang::String> getTZDataVersion();
	static std::shared_ptr<android::icu::util::VersionInfo> javaVersion();
	static void main(std::shared_ptr<std::vector<java::lang::String>> args);
	int virtual compareTo(std::shared_ptr<android::icu::util::VersionInfo> other);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual getMajor();
	int virtual getMicro();
	int virtual getMilli();
	int virtual getMinor();
	std::shared_ptr<java::lang::String> virtual getVersionString(int minDigits,int maxDigits);
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::VersionInfo::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~VersionInfo(){
	}

}; // class VersionInfo
}; // namespace android::icu::util

#endif //__android_icu_util_VersionInfo__

