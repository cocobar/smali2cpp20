#ifndef __android_icu_text_StringPrep__
#define __android_icu_text_StringPrep__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringPrep.smali
#include "java2ctype.h"
#include "android.icu.impl.CharTrie.h"
#include "android.icu.impl.UBiDiProps.h"
#include "android.icu.text.StringPrep_S_Values.h"
#include "android.icu.text.UCharacterIterator.h"
#include "android.icu.util.VersionInfo.h"
#include "java.io.InputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.ref.WeakReference.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::text{
class StringPrep : public java::lang::Object {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::ref::WeakReference<android::icu::text::StringPrep>>> CACHE;
	static int CHECK_BIDI_ON;
	static int DELETE;
	static int FOUR_UCHARS_MAPPING_INDEX_START;
	static int INDEX_MAPPING_DATA_SIZE;
	static int INDEX_TOP;
	static int MAP;
	static int MAX_INDEX_VALUE;
	static int MAX_PROFILE;
	static int NORMALIZATION_ON;
	static int NORM_CORRECTNS_LAST_UNI_VERSION;
	static int ONE_UCHAR_MAPPING_INDEX_START;
	static int OPTIONS;
	static std::shared_ptr<std::vector<java::lang::String>> PROFILE_NAMES;
	static int PROHIBITED;
	static int THREE_UCHARS_MAPPING_INDEX_START;
	static int TWO_UCHARS_MAPPING_INDEX_START;
	static int TYPE_LIMIT;
	static int TYPE_THRESHOLD;
	static int UNASSIGNED;
	std::shared_ptr<android::icu::impl::UBiDiProps> bdp;
	bool checkBiDi;
	bool doNFKC;
	std::shared_ptr<int[]> indexes;
	std::shared_ptr<char[]> mappingData;
	std::shared_ptr<android::icu::util::VersionInfo> normCorrVer;
	std::shared_ptr<android::icu::impl::CharTrie> sprepTrie;
	std::shared_ptr<android::icu::util::VersionInfo> sprepUniVer;
	StringPrep(std::shared_ptr<java::nio::ByteBuffer> bytes);
	char virtual getCodePointValue(int ch);
	static void getValues(char trieWord,std::shared_ptr<android::icu::text::StringPrep_S_Values> values);
	static std::shared_ptr<android::icu::util::VersionInfo> getVersionInfo(int comp);
	static std::shared_ptr<android::icu::util::VersionInfo> getVersionInfo(std::shared_ptr<unsigned char[]> version);
	std::shared_ptr<java::lang::StringBuffer> virtual map(std::shared_ptr<android::icu::text::UCharacterIterator> iter,int options);
	std::shared_ptr<java::lang::StringBuffer> virtual normalize(std::shared_ptr<java::lang::StringBuffer> src);
public:
	static int ALLOW_UNASSIGNED;
	static int DEFAULT;
	static int RFC3491_NAMEPREP;
	static int RFC3530_NFS4_CIS_PREP;
	static int RFC3530_NFS4_CS_PREP;
	static int RFC3530_NFS4_CS_PREP_CI;
	static int RFC3530_NFS4_MIXED_PREP_PREFIX;
	static int RFC3530_NFS4_MIXED_PREP_SUFFIX;
	static int RFC3722_ISCSI;
	static int RFC3920_NODEPREP;
	static int RFC3920_RESOURCEPREP;
	static int RFC4011_MIB;
	static int RFC4013_SASLPREP;
	static int RFC4505_TRACE;
	static int RFC4518_LDAP;
	static int RFC4518_LDAP_CI;
	static void static_cinit();
	StringPrep(std::shared_ptr<java::io::InputStream> inputStream);
	static std::shared_ptr<android::icu::text::StringPrep> getInstance(int profile);
	std::shared_ptr<java::lang::String> virtual prepare(std::shared_ptr<java::lang::String> src,int options);
	std::shared_ptr<java::lang::StringBuffer> virtual prepare(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::StringPrep::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~StringPrep(){
	}

}; // class StringPrep
}; // namespace android::icu::text

#endif //__android_icu_text_StringPrep__

