#ifndef __android_icu_text_RBBIDataWrapper__
#define __android_icu_text_RBBIDataWrapper__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIDataWrapper.smali
#include "java2ctype.h"
#include "android.icu.impl.CharTrie.h"
#include "android.icu.text.RBBIDataWrapper_S_IsAcceptable.h"
#include "android.icu.text.RBBIDataWrapper_S_RBBIDataHeader.h"
#include "android.icu.text.RBBIDataWrapper_S_TrieFoldingFunc.h"
#include "java.io.PrintStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::text{
class RBBIDataWrapper : public java::lang::Object {
protected:
private:
	static std::shared_ptr<android::icu::text::RBBIDataWrapper_S_IsAcceptable> IS_ACCEPTABLE;
	static int ROW_DATA;
	bool isBigEndian;
	void virtual dumpCharCategories(std::shared_ptr<java::io::PrintStream> out);
	void virtual dumpRow(std::shared_ptr<java::io::PrintStream> out,std::shared_ptr<short[]> table,int state);
	void virtual dumpTable(std::shared_ptr<java::io::PrintStream> out,std::shared_ptr<short[]> table);
	int virtual getStateTableNumStates(std::shared_ptr<short[]> table);
public:
	static int ACCEPTING;
	static int DATA_FORMAT;
	static int DH_CATCOUNT;
	static int DH_FORMATVERSION;
	static int DH_FTABLE;
	static int DH_FTABLELEN;
	static int DH_LENGTH;
	static int DH_MAGIC;
	static int DH_RTABLE;
	static int DH_RTABLELEN;
	static int DH_RULESOURCE;
	static int DH_RULESOURCELEN;
	static int DH_SFTABLE;
	static int DH_SFTABLELEN;
	static int DH_SIZE;
	static int DH_SRTABLE;
	static int DH_SRTABLELEN;
	static int DH_STATUSTABLE;
	static int DH_STATUSTABLELEN;
	static int DH_TRIE;
	static int DH_TRIELEN;
	static int FLAGS;
	static int FORMAT_VERSION;
	static int LOOKAHEAD;
	static int NEXTSTATES;
	static int NUMSTATES;
	static int RBBI_BOF_REQUIRED;
	static int RBBI_LOOKAHEAD_HARD_BREAK;
	static int RESERVED;
	static int ROWLEN;
	static int TAGIDX;
	static std::shared_ptr<android::icu::text::RBBIDataWrapper_S_TrieFoldingFunc> fTrieFoldingFunc;
	std::shared_ptr<short[]> fFTable;
	std::shared_ptr<android::icu::text::RBBIDataWrapper_S_RBBIDataHeader> fHeader;
	std::shared_ptr<short[]> fRTable;
	std::shared_ptr<java::lang::String> fRuleSource;
	std::shared_ptr<short[]> fSFTable;
	std::shared_ptr<short[]> fSRTable;
	std::shared_ptr<int[]> fStatusTable;
	std::shared_ptr<android::icu::impl::CharTrie> fTrie;
	static void static_cinit();
	RBBIDataWrapper();
	static std::shared_ptr<android::icu::text::RBBIDataWrapper> get(std::shared_ptr<java::nio::ByteBuffer> bytes);
	static std::shared_ptr<java::lang::String> intToHexString(int n,int width);
	static std::shared_ptr<java::lang::String> intToString(int n,int width);
	void virtual dump(std::shared_ptr<java::io::PrintStream> out);
	int virtual getRowIndex(int state);
	int virtual getStateTableFlags(std::shared_ptr<short[]> table);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RBBIDataWrapper::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RBBIDataWrapper(){
	}

}; // class RBBIDataWrapper
}; // namespace android::icu::text

#endif //__android_icu_text_RBBIDataWrapper__

