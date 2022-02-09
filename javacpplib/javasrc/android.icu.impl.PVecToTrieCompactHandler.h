#ifndef __android_icu_impl_PVecToTrieCompactHandler__
#define __android_icu_impl_PVecToTrieCompactHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\PVecToTrieCompactHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.IntTrieBuilder.h"
#include "android.icu.impl.PropsVectors_S_CompactHandler.h"

namespace android::icu::impl{
class PVecToTrieCompactHandler : public android::icu::impl::PropsVectors_S_CompactHandler {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::IntTrieBuilder> builder;
	int initialValue;
	PVecToTrieCompactHandler();
	void virtual setRowIndexForErrorValue(int rowIndex);
	void virtual setRowIndexForInitialValue(int rowIndex);
	void virtual setRowIndexForRange(int start,int end,int rowIndex);
	void virtual startRealValues(int rowIndex);
public:
	virtual ~PVecToTrieCompactHandler(){
	}

}; // class PVecToTrieCompactHandler
}; // namespace android::icu::impl

#endif //__android_icu_impl_PVecToTrieCompactHandler__

