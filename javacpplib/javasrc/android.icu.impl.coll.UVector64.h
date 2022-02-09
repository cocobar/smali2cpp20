#ifndef __android_icu_impl_coll_UVector64__
#define __android_icu_impl_coll_UVector64__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\UVector64.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class UVector64 : public java::lang::Object {
protected:
private:
	std::shared_ptr<long long[]> buffer;
	int length;
	void virtual ensureAppendCapacity();
public:
	UVector64();
	void virtual addElement(long long e);
	long long virtual elementAti(int i);
	long long virtual getBuffer();
	void virtual insertElementAt(long long elem,int index);
	bool virtual isEmpty();
	void virtual removeAllElements();
	void virtual setElementAt(long long elem,int index);
	int virtual size();
public:
	virtual ~UVector64(){
	}

}; // class UVector64
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_UVector64__

