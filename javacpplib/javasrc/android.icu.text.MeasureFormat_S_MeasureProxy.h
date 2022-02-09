#ifndef __android_icu_text_MeasureFormat_S_MeasureProxy__
#define __android_icu_text_MeasureFormat_S_MeasureProxy__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$MeasureProxy.smali
#include "java2ctype.h"
#include "android.icu.text.MeasureFormat_S_FormatWidth.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.TimeUnitFormat.h"
#include "android.icu.util.ULocale.h"
#include "java.io.Externalizable.h"
#include "java.io.ObjectInput.h"
#include "java.io.ObjectOutput.h"
#include "java.lang.Object.h"
#include "java.util.HashMap.h"

namespace android::icu::text{
class MeasureFormat_S_MeasureProxy : public java::io::Externalizable {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> formatWidth;
	std::shared_ptr<java::util::HashMap<java::lang::Object,java::lang::Object>> keyValues;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<android::icu::text::NumberFormat> numberFormat;
	int subClass;
	std::shared_ptr<android::icu::text::TimeUnitFormat> virtual createTimeUnitFormat();
	std::shared_ptr<java::lang::Object> virtual readResolve();
public:
	MeasureFormat_S_MeasureProxy();
	MeasureFormat_S_MeasureProxy(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width,std::shared_ptr<android::icu::text::NumberFormat> numberFormat,int subClass);
	void virtual readExternal(std::shared_ptr<java::io::ObjectInput> in);
	void virtual writeExternal(std::shared_ptr<java::io::ObjectOutput> out);
public:
	virtual ~MeasureFormat_S_MeasureProxy(){
	}

}; // class MeasureFormat_S_MeasureProxy
}; // namespace android::icu::text

#endif //__android_icu_text_MeasureFormat_S_MeasureProxy__

