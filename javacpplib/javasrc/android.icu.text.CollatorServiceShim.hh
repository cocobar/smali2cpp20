#ifndef __android_icu_text_CollatorServiceShim__
#define __android_icu_text_CollatorServiceShim__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CollatorServiceShim.smali
#include "java2ctype.h"
#include "android.icu.text.Collator_S_ServiceShim.hh"

namespace android::icu::text{
class CollatorServiceShim : public android::icu::text::Collator_S_ServiceShim {
public:
	CollatorServiceShim();
	virtual ~CollatorServiceShim();

}; // class CollatorServiceShim
}; // namespace android::icu::text

#endif //__android_icu_text_CollatorServiceShim__

