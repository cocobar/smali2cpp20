#ifndef __android_icu_impl_PropsVectors_S_CompactHandler__
#define __android_icu_impl_PropsVectors_S_CompactHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\PropsVectors$CompactHandler.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class PropsVectors_S_CompactHandler : public java::lang::Object {
protected:
private:
public:
	void setRowIndexForErrorValue(int var0) = 0;
	void setRowIndexForInitialValue(int var0) = 0;
	void setRowIndexForRange(int var0,int var1,int var2) = 0;
	void startRealValues(int var0) = 0;
	PropsVectors_S_CompactHandler(){ };
	virtual ~PropsVectors_S_CompactHandler(){ };

}; // class PropsVectors_S_CompactHandler
}; // namespace android::icu::impl

#endif //__android_icu_impl_PropsVectors_S_CompactHandler__

