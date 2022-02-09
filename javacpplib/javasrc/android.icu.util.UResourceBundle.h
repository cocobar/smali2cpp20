#ifndef __android_icu_util_UResourceBundle__
#define __android_icu_util_UResourceBundle__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\UResourceBundle.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle_S_RootType.h"
#include "android.icu.util.UResourceBundleIterator.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Enumeration.h"
#include "java.util.HashMap.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.ResourceBundle.h"
#include "java.util.Set.h"

namespace android::icu::util{
class UResourceBundle : public java::util::ResourceBundle {
protected:
	static std::shared_ptr<android::icu::util::UResourceBundle> getBundleInstance(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeName,std::shared_ptr<java::lang::ClassLoader> root,bool disableFallback);
	static std::shared_ptr<android::icu::util::UResourceBundle> instantiateBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeName,std::shared_ptr<java::lang::ClassLoader> root,bool disableFallback);
	std::shared_ptr<android::icu::util::UResourceBundle> virtual findTopLevel(int index);
	std::shared_ptr<android::icu::util::UResourceBundle> virtual findTopLevel(std::shared_ptr<java::lang::String> aKey);
	std::shared_ptr<java::lang::String> getBaseName() = 0;
	std::shared_ptr<java::lang::String> getLocaleID() = 0;
	std::shared_ptr<android::icu::util::UResourceBundle> getParent() = 0;
	std::shared_ptr<android::icu::util::UResourceBundle> virtual handleGet(int index,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested);
	std::shared_ptr<android::icu::util::UResourceBundle> virtual handleGet(std::shared_ptr<java::lang::String> aKey,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual handleGetKeys();
	std::shared_ptr<java::lang::Object> virtual handleGetObject(std::shared_ptr<java::lang::String> aKey);
	std::shared_ptr<java::lang::String> virtual handleGetStringArray();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual handleKeySet();
	bool virtual isTopLevelResource();
private:
	static std::shared_ptr<int[]> _android_icu_util_UResourceBundle_S_RootTypeSwitchesValues;
	static std::shared_ptr<java::util::Map<java::lang::String,android::icu::util::UResourceBundle_S_RootType>> ROOT_CACHE;
	static int _getandroid_icu_util_UResourceBundle_S_RootTypeSwitchesValues();
	static std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> getRootType(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> root);
	std::shared_ptr<java::lang::Object> virtual handleGetObjectImpl(std::shared_ptr<java::lang::String> aKey,std::shared_ptr<android::icu::util::UResourceBundle> requested);
	std::shared_ptr<java::lang::Object> virtual resolveObject(std::shared_ptr<java::lang::String> aKey,std::shared_ptr<android::icu::util::UResourceBundle> requested);
	static void setRootType(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> rootType);
public:
	static int ARRAY;
	static int BINARY;
	static int INT;
	static int INT_VECTOR;
	static int NONE;
	static int STRING;
	static int TABLE;
	static void static_cinit();
	UResourceBundle();
	static std::shared_ptr<android::icu::util::UResourceBundle> getBundleInstance(std::shared_ptr<android::icu::util::ULocale> cVar0);
	static std::shared_ptr<android::icu::util::UResourceBundle> getBundleInstance(std::shared_ptr<java::lang::String> cVar0);
	static std::shared_ptr<android::icu::util::UResourceBundle> getBundleInstance(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<android::icu::util::ULocale> cVar1);
	static std::shared_ptr<android::icu::util::UResourceBundle> getBundleInstance(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<android::icu::util::ULocale> cVar1,std::shared_ptr<java::lang::ClassLoader> loader);
	static std::shared_ptr<android::icu::util::UResourceBundle> getBundleInstance(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeName);
	static std::shared_ptr<android::icu::util::UResourceBundle> getBundleInstance(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeName,std::shared_ptr<java::lang::ClassLoader> root);
	static std::shared_ptr<android::icu::util::UResourceBundle> getBundleInstance(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::util::UResourceBundle> getBundleInstance(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::ClassLoader> loader);
	std::shared_ptr<android::icu::util::UResourceBundle> virtual get(int index);
	std::shared_ptr<android::icu::util::UResourceBundle> virtual get(std::shared_ptr<java::lang::String> aKey);
	std::shared_ptr<java::nio::ByteBuffer> virtual getBinary();
	unsigned char virtual getBinary(std::shared_ptr<unsigned char[]> ba);
	int virtual getInt();
	int virtual getIntVector();
	std::shared_ptr<android::icu::util::UResourceBundleIterator> virtual getIterator();
	std::shared_ptr<java::lang::String> virtual getKey();
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getKeys();
	std::shared_ptr<java::util::Locale> virtual getLocale();
	int virtual getSize();
	std::shared_ptr<java::lang::String> virtual getString();
	std::shared_ptr<java::lang::String> virtual getString(int index);
	std::shared_ptr<java::lang::String> virtual getStringArray();
	int virtual getType();
	int virtual getUInt();
	std::shared_ptr<android::icu::util::ULocale> getULocale() = 0;
	std::shared_ptr<android::icu::util::VersionInfo> virtual getVersion();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual keySet();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::UResourceBundle::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UResourceBundle(){
	}

}; // class UResourceBundle
}; // namespace android::icu::util

#endif //__android_icu_util_UResourceBundle__

