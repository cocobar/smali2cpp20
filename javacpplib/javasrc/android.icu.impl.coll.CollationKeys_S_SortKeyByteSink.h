#ifndef __android_icu_impl_coll_CollationKeys_S_SortKeyByteSink__
#define __android_icu_impl_coll_CollationKeys_S_SortKeyByteSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationKeys$SortKeyByteSink.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationKeys_S_SortKeyByteSink : public java::lang::Object {
protected:
	std::shared_ptr<unsigned char[]> buffer_;
	void AppendBeyondCapacity(std::shared_ptr<unsigned char[]> var0,int var1,int var2,int var3) = 0;
	bool Resize(int var0,int var1) = 0;
private:
	int appended_;
public:
	CollationKeys_S_SortKeyByteSink(std::shared_ptr<unsigned char[]> dest);
	void virtual Append(int b);
	void virtual Append(std::shared_ptr<unsigned char[]> bytes,int n);
	int virtual GetRemainingCapacity();
	int virtual NumberOfBytesAppended();
	bool virtual Overflowed();
	void virtual setBufferAndAppended(std::shared_ptr<unsigned char[]> dest,int app);
public:
	virtual ~CollationKeys_S_SortKeyByteSink(){
	}

}; // class CollationKeys_S_SortKeyByteSink
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationKeys_S_SortKeyByteSink__

