#ifndef __android_icu_impl_coll_UVector32__
#define __android_icu_impl_coll_UVector32__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\UVector32.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class UVector32 : public java::lang::Object {
protected:
private:
	std::shared_ptr<int[]> buffer;
	int length;
	void virtual ensureAppendCapacity();
public:
	UVector32();
	void virtual addElement(int e);
	int virtual elementAti(int i);
	int virtual getBuffer();
	void virtual insertElementAt(int elem,int index);
	bool virtual isEmpty();
	void virtual removeAllElements();
	void virtual setElementAt(int elem,int index);
	int virtual size();
public:
	virtual ~UVector32(){
	}

}; // class UVector32
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_UVector32__

