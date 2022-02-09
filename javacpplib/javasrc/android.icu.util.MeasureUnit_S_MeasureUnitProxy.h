#ifndef __android_icu_util_MeasureUnit_S_MeasureUnitProxy__
#define __android_icu_util_MeasureUnit_S_MeasureUnitProxy__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\MeasureUnit$MeasureUnitProxy.smali
#include "java2ctype.h"
#include "java.io.Externalizable.h"
#include "java.io.ObjectInput.h"
#include "java.io.ObjectOutput.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class MeasureUnit_S_MeasureUnitProxy : public java::io::Externalizable {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<java::lang::String> subType;
	std::shared_ptr<java::lang::String> type;
	std::shared_ptr<java::lang::Object> virtual readResolve();
public:
	MeasureUnit_S_MeasureUnitProxy();
	MeasureUnit_S_MeasureUnitProxy(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> subType);
	void virtual readExternal(std::shared_ptr<java::io::ObjectInput> in);
	void virtual writeExternal(std::shared_ptr<java::io::ObjectOutput> out);
public:
	virtual ~MeasureUnit_S_MeasureUnitProxy(){
	}

}; // class MeasureUnit_S_MeasureUnitProxy
}; // namespace android::icu::util

#endif //__android_icu_util_MeasureUnit_S_MeasureUnitProxy__

