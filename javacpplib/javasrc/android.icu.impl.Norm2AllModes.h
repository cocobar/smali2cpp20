#ifndef __android_icu_impl_Norm2AllModes__
#define __android_icu_impl_Norm2AllModes__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.Norm2AllModes_S_ComposeNormalizer2.h"
#include "android.icu.impl.Norm2AllModes_S_DecomposeNormalizer2.h"
#include "android.icu.impl.Norm2AllModes_S_FCDNormalizer2.h"
#include "android.icu.impl.Norm2AllModes_S_NoopNormalizer2.h"
#include "android.icu.impl.Norm2AllModes_S_Norm2AllModesSingleton.h"
#include "android.icu.impl.Norm2AllModes_S_Normalizer2WithImpl.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.text.Normalizer2.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl{
class Norm2AllModes : public java::lang::Object {
protected:
private:
	static std::shared_ptr<android::icu::impl::CacheBase<java::lang::String,android::icu::impl::Norm2AllModes,java::nio::ByteBuffer>> cache;
	Norm2AllModes(std::shared_ptr<android::icu::impl::Normalizer2Impl> ni);
	static std::shared_ptr<android::icu::impl::Norm2AllModes> getInstanceFromSingleton(std::shared_ptr<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton> singleton);
public:
	static std::shared_ptr<android::icu::impl::Norm2AllModes_S_NoopNormalizer2> NOOP_NORMALIZER2;
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_ComposeNormalizer2> comp;
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_DecomposeNormalizer2> decomp;
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_ComposeNormalizer2> fcc;
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_FCDNormalizer2> fcd;
	std::shared_ptr<android::icu::impl::Normalizer2Impl> impl;
	static void static_cinit();
	Norm2AllModes(std::shared_ptr<android::icu::impl::Normalizer2Impl> ni,std::shared_ptr<android::icu::impl::Norm2AllModes> _this1);
	static std::shared_ptr<android::icu::text::Normalizer2> getFCDNormalizer2();
	static std::shared_ptr<android::icu::impl::Norm2AllModes> getInstance(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl> getN2WithImpl(int index);
	static std::shared_ptr<android::icu::impl::Norm2AllModes> getNFCInstance();
	static std::shared_ptr<android::icu::impl::Norm2AllModes> getNFKCInstance();
	static std::shared_ptr<android::icu::impl::Norm2AllModes> getNFKC_CFInstance();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::Norm2AllModes::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Norm2AllModes(){
	}

}; // class Norm2AllModes
}; // namespace android::icu::impl

#endif //__android_icu_impl_Norm2AllModes__

