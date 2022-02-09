#ifndef __android_icu_impl_UBiDiProps__
#define __android_icu_impl_UBiDiProps__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UBiDiProps.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_16.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl{
class UBiDiProps : public java::lang::Object {
protected:
private:
	static int BIDI_CONTROL_SHIFT;
	static int BPT_MASK;
	static int BPT_SHIFT;
	static int CLASS_MASK;
	static std::shared_ptr<java::lang::String> DATA_FILE_NAME;
	static std::shared_ptr<java::lang::String> DATA_NAME;
	static std::shared_ptr<java::lang::String> DATA_TYPE;
	static int ESC_MIRROR_DELTA;
	static int FMT;
	static int IS_MIRRORED_SHIFT;
	static int IX_JG_LIMIT;
	static int IX_JG_LIMIT2;
	static int IX_JG_START;
	static int IX_JG_START2;
	static int IX_MAX_VALUES;
	static int IX_MIRROR_LENGTH;
	static int IX_TOP;
	static int IX_TRIE_SIZE;
	static int JOIN_CONTROL_SHIFT;
	static int JT_MASK;
	static int JT_SHIFT;
	static int MAX_JG_MASK;
	static int MAX_JG_SHIFT;
	static int MIRROR_DELTA_SHIFT;
	static int MIRROR_INDEX_SHIFT;
	std::shared_ptr<int[]> indexes;
	std::shared_ptr<unsigned char[]> jgArray;
	std::shared_ptr<unsigned char[]> jgArray2;
	std::shared_ptr<int[]> mirrors;
	std::shared_ptr<android::icu::impl::Trie2_16> trie;
	UBiDiProps();
	static int getClassFromProps(int props);
	static bool getFlagFromProps(int props,int shift);
	int virtual getMirror(int c,int props);
	static int getMirrorCodePoint(int m);
	static int getMirrorDeltaFromProps(int props);
	static int getMirrorIndex(int m);
	void virtual readData(std::shared_ptr<java::nio::ByteBuffer> bytes);
public:
	static std::shared_ptr<android::icu::impl::UBiDiProps> INSTANCE;
	static void static_cinit();
	void virtual addPropertyStarts(std::shared_ptr<android::icu::text::UnicodeSet> set);
	int virtual getClass(int c);
	int virtual getJoiningGroup(int c);
	int virtual getJoiningType(int c);
	int virtual getMaxValue(int which);
	int virtual getMirror(int c);
	int virtual getPairedBracket(int c);
	int virtual getPairedBracketType(int c);
	bool virtual isBidiControl(int c);
	bool virtual isJoinControl(int c);
	bool virtual isMirrored(int c);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::UBiDiProps::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UBiDiProps(){
	}

}; // class UBiDiProps
}; // namespace android::icu::impl

#endif //__android_icu_impl_UBiDiProps__

