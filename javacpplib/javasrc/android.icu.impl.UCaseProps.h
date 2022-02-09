#ifndef __android_icu_impl_UCaseProps__
#define __android_icu_impl_UCaseProps__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCaseProps.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_16.h"
#include "android.icu.impl.UCaseProps_S_ContextIterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Appendable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Locale.h"

namespace android::icu::impl{
class UCaseProps : public java::lang::Object {
protected:
private:
	static int ABOVE;
	static int CLOSURE_MAX_LENGTH;
	static std::shared_ptr<java::lang::String> DATA_FILE_NAME;
	static std::shared_ptr<java::lang::String> DATA_NAME;
	static std::shared_ptr<java::lang::String> DATA_TYPE;
	static int DELTA_SHIFT;
	static int DOT_MASK;
	static int EXCEPTION;
	static int EXC_CLOSURE;
	static int EXC_CONDITIONAL_FOLD;
	static int EXC_CONDITIONAL_SPECIAL;
	static int EXC_DOT_SHIFT;
	static int EXC_DOUBLE_SLOTS;
	static int EXC_FOLD;
	static int EXC_FULL_MAPPINGS;
	static int EXC_LOWER;
	static int EXC_SHIFT;
	static int EXC_TITLE;
	static int EXC_UPPER;
	static int FMT;
	static int FOLD_CASE_OPTIONS_MASK;
	static int FULL_LOWER;
	static int IX_EXC_LENGTH;
	static int IX_TOP;
	static int IX_TRIE_SIZE;
	static int IX_UNFOLD_LENGTH;
	static int LOC_LITHUANIAN;
	static int LOC_TURKISH;
	static int OTHER_ACCENT;
	static int SENSITIVE;
	static int SOFT_DOTTED;
	static int UNFOLD_ROWS;
	static int UNFOLD_ROW_WIDTH;
	static int UNFOLD_STRING_WIDTH;
	static std::shared_ptr<unsigned char[]> flagsOffset;
	static std::shared_ptr<java::lang::String> iDot;
	static std::shared_ptr<java::lang::String> iDotAcute;
	static std::shared_ptr<java::lang::String> iDotGrave;
	static std::shared_ptr<java::lang::String> iDotTilde;
	static std::shared_ptr<java::lang::String> iOgonekDot;
	static std::shared_ptr<java::lang::String> jDot;
	std::shared_ptr<java::lang::String> exceptions;
	std::shared_ptr<int[]> indexes;
	std::shared_ptr<android::icu::impl::Trie2_16> trie;
	std::shared_ptr<char[]> unfold;
	UCaseProps();
	static int getCaseLocale(std::shared_ptr<java::lang::String> language);
	static int getDelta(int props);
	static int getExceptionsOffset(int props);
	int virtual getSlotValue(int excWord,int index,int excOffset);
	long long virtual getSlotValueAndOffset(int excWord,int index,int cVar0);
	static int getTypeAndIgnorableFromProps(int props);
	static int getTypeFromProps(int props);
	static bool hasSlot(int flags,int index);
	bool virtual isFollowedByCasedLetter(std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter,int dir);
	bool virtual isFollowedByDotAbove(std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter);
	bool virtual isFollowedByMoreAbove(std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter);
	bool virtual isPrecededBySoftDotted(std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter);
	bool virtual isPrecededBy_I(std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter);
	static bool propsHasException(int props);
	void virtual readData(std::shared_ptr<java::nio::ByteBuffer> bytes);
	static unsigned char slotOffset(int flags,int index);
	int virtual strcmpMax(std::shared_ptr<java::lang::String> s,int unfoldOffset,int max);
	int virtual toUpperOrTitle(int c,std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter,std::shared_ptr<java::lang::Appendable> out,int loc,bool upperNotTitle);
public:
	static int IGNORABLE;
	static std::shared_ptr<android::icu::impl::UCaseProps> INSTANCE;
	static int LOC_DUTCH;
	static int LOC_GREEK;
	static int LOC_ROOT;
	static int LOWER;
	static int MAX_STRING_LENGTH;
	static int NONE;
	static int TITLE;
	static int TYPE_MASK;
	static int UPPER;
	static std::shared_ptr<java::lang::StringBuilder> dummyStringBuilder;
	static void static_cinit();
	static int getCaseLocale(std::shared_ptr<android::icu::util::ULocale> locale);
	static int getCaseLocale(std::shared_ptr<java::util::Locale> locale);
	void virtual addCaseClosure(int c,std::shared_ptr<android::icu::text::UnicodeSet> set);
	void virtual addPropertyStarts(std::shared_ptr<android::icu::text::UnicodeSet> set);
	bool virtual addStringCaseClosure(std::shared_ptr<java::lang::String> s,std::shared_ptr<android::icu::text::UnicodeSet> set);
	int virtual fold(int cVar3,int options);
	int virtual getDotType(int c);
	int virtual getType(int c);
	int virtual getTypeOrIgnorable(int c);
	bool virtual hasBinaryProperty(int c,int which);
	bool virtual isCaseSensitive(int c);
	bool virtual isSoftDotted(int c);
	int virtual toFullFolding(int c,std::shared_ptr<java::lang::Appendable> out,int options);
	int virtual toFullLower(int c,std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter,std::shared_ptr<java::lang::Appendable> out,int caseLocale);
	int virtual toFullTitle(int c,std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter,std::shared_ptr<java::lang::Appendable> out,int caseLocale);
	int virtual toFullUpper(int c,std::shared_ptr<android::icu::impl::UCaseProps_S_ContextIterator> iter,std::shared_ptr<java::lang::Appendable> out,int caseLocale);
	int virtual tolower(int cVar1);
	int virtual totitle(int cVar0);
	int virtual toupper(int cVar1);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::UCaseProps::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UCaseProps(){
	}

}; // class UCaseProps
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCaseProps__

