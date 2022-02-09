#ifndef __android_icu_impl_coll_CollationDataReader_S_IsAcceptable__
#define __android_icu_impl_coll_CollationDataReader_S_IsAcceptable__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationDataReader$IsAcceptable.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_Authenticate.h"

namespace android::icu::impl::coll{
class CollationDataReader_S_IsAcceptable : public android::icu::impl::ICUBinary_S_Authenticate {
protected:
private:
	CollationDataReader_S_IsAcceptable();
public:
	CollationDataReader_S_IsAcceptable(std::shared_ptr<android::icu::impl::coll::CollationDataReader_S_IsAcceptable> _this0);
	bool virtual isDataVersionAcceptable(std::shared_ptr<unsigned char[]> version);
public:
	virtual ~CollationDataReader_S_IsAcceptable(){
	}

}; // class CollationDataReader_S_IsAcceptable
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationDataReader_S_IsAcceptable__

