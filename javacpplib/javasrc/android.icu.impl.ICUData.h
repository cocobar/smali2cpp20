#ifndef __android_icu_impl_ICUData__
#define __android_icu_impl_ICUData__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUData.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.logging.Logger.h"

namespace android::icu::impl{
class ICUData : public java::lang::Object {
protected:
private:
	static bool logBinaryDataFromInputStream;
	static std::shared_ptr<java::util::logging::Logger> logger;
	static void checkStreamForBinaryData(std::shared_ptr<java::io::InputStream> is,std::shared_ptr<java::lang::String> resourceName);
	static std::shared_ptr<java::io::InputStream> getStream(std::shared_ptr<java::lang::Class<java::lang::Object>> root,std::shared_ptr<java::lang::String> resourceName,bool required);
public:
	static std::shared_ptr<java::lang::String> ICU_BASE_NAME;
	static std::shared_ptr<java::lang::String> ICU_BRKITR_BASE_NAME;
	static std::shared_ptr<java::lang::String> ICU_BRKITR_NAME;
	static std::shared_ptr<java::lang::String> ICU_BUNDLE;
	static std::shared_ptr<java::lang::String> ICU_COLLATION_BASE_NAME;
	static std::shared_ptr<java::lang::String> ICU_CURR_BASE_NAME;
	static std::shared_ptr<java::lang::String> ICU_DATA_PATH;
	static std::shared_ptr<java::lang::String> ICU_LANG_BASE_NAME;
	static std::shared_ptr<java::lang::String> ICU_RBNF_BASE_NAME;
	static std::shared_ptr<java::lang::String> ICU_REGION_BASE_NAME;
	static std::shared_ptr<java::lang::String> ICU_TRANSLIT_BASE_NAME;
	static std::shared_ptr<java::lang::String> ICU_UNIT_BASE_NAME;
	static std::shared_ptr<java::lang::String> ICU_ZONE_BASE_NAME;
	static std::shared_ptr<java::lang::String> PACKAGE_NAME;
	ICUData();
	static bool exists(std::shared_ptr<java::lang::String> resourceName);
	static std::shared_ptr<java::io::InputStream> getRequiredStream(std::shared_ptr<java::lang::Class<java::lang::Object>> root,std::shared_ptr<java::lang::String> resourceName);
	static std::shared_ptr<java::io::InputStream> getRequiredStream(std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::lang::String> resourceName);
	static std::shared_ptr<java::io::InputStream> getRequiredStream(std::shared_ptr<java::lang::String> resourceName);
	static std::shared_ptr<java::io::InputStream> getStream(std::shared_ptr<java::lang::Class<java::lang::Object>> root,std::shared_ptr<java::lang::String> resourceName);
	static std::shared_ptr<java::io::InputStream> getStream(std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::lang::String> resourceName);
	static std::shared_ptr<java::io::InputStream> getStream(std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::lang::String> resourceName,bool required);
	static std::shared_ptr<java::io::InputStream> getStream(std::shared_ptr<java::lang::String> resourceName);
public:
	virtual ~ICUData(){
	}

}; // class ICUData
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUData__

