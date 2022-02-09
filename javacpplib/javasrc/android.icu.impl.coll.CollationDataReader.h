#ifndef __android_icu_impl_coll_CollationDataReader__
#define __android_icu_impl_coll_CollationDataReader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationDataReader.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationDataReader_S_IsAcceptable.h"
#include "android.icu.impl.coll.CollationTailoring.h"
#include "java.lang.Object.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl::coll{
class CollationDataReader : public java::lang::Object {
protected:
private:
	static int DATA_FORMAT;
	static std::shared_ptr<android::icu::impl::coll::CollationDataReader_S_IsAcceptable> IS_ACCEPTABLE;
	CollationDataReader();
public:
	static bool _assertionsDisabled;
	static int IX_CE32S_OFFSET;
	static int IX_CES_OFFSET;
	static int IX_COMPRESSIBLE_BYTES_OFFSET;
	static int IX_CONTEXTS_OFFSET;
	static int IX_FAST_LATIN_TABLE_OFFSET;
	static int IX_INDEXES_LENGTH;
	static int IX_JAMO_CE32S_START;
	static int IX_OPTIONS;
	static int IX_REORDER_CODES_OFFSET;
	static int IX_REORDER_TABLE_OFFSET;
	static int IX_RESERVED10_OFFSET;
	static int IX_RESERVED18_OFFSET;
	static int IX_RESERVED2;
	static int IX_RESERVED3;
	static int IX_RESERVED8_OFFSET;
	static int IX_ROOT_ELEMENTS_OFFSET;
	static int IX_SCRIPTS_OFFSET;
	static int IX_TOTAL_SIZE;
	static int IX_TRIE_OFFSET;
	static int IX_UNSAFE_BWD_OFFSET;
	static void static_cinit();
	static void read(std::shared_ptr<android::icu::impl::coll::CollationTailoring> base,std::shared_ptr<java::nio::ByteBuffer> inBytes,std::shared_ptr<android::icu::impl::coll::CollationTailoring> tailoring);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationDataReader::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationDataReader(){
	}

}; // class CollationDataReader
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationDataReader__

