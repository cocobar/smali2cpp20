#ifndef __android_icu_impl_USerializedSet__
#define __android_icu_impl_USerializedSet__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\USerializedSet.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class USerializedSet : public java::lang::Object {
protected:
private:
	std::shared_ptr<char[]> array;
	int arrayOffset;
	int bmpLength;
	int length;
public:
	USerializedSet();
	bool virtual contains(int c);
	int virtual countRanges();
	bool virtual getRange(int rangeIndex,std::shared_ptr<int[]> range);
	bool virtual getSet(std::shared_ptr<char[]> src,int srcStart);
	void virtual setToOne(int c);
public:
	virtual ~USerializedSet(){
	}

}; // class USerializedSet
}; // namespace android::icu::impl

#endif //__android_icu_impl_USerializedSet__

