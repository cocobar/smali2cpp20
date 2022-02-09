#ifndef __android_icu_impl_UCharacterNameReader__
#define __android_icu_impl_UCharacterNameReader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterNameReader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_Authenticate.h"
#include "android.icu.impl.UCharacterName_S_AlgorithmName.h"
#include "android.icu.impl.UCharacterName.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl{
class UCharacterNameReader : public android::icu::impl::ICUBinary_S_Authenticate {
protected:
	UCharacterNameReader(std::shared_ptr<java::nio::ByteBuffer> bytes);
	bool virtual authenticate(std::shared_ptr<unsigned char[]> dataformatid,std::shared_ptr<unsigned char[]> dataformatversion);
	void virtual read(std::shared_ptr<android::icu::impl::UCharacterName> data);
private:
	static int ALG_INFO_SIZE_;
	static int DATA_FORMAT_ID_;
	static int GROUP_INFO_SIZE_;
	int m_algnamesindex_;
	std::shared_ptr<java::nio::ByteBuffer> m_byteBuffer_;
	int m_groupindex_;
	int m_groupstringindex_;
	int m_tokenstringindex_;
	std::shared_ptr<android::icu::impl::UCharacterName_S_AlgorithmName> virtual readAlg();
public:
	bool virtual isDataVersionAcceptable(std::shared_ptr<unsigned char[]> version);
public:
	virtual ~UCharacterNameReader(){
	}

}; // class UCharacterNameReader
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterNameReader__

