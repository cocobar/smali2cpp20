#ifndef __android_icu_text_StringSearch__
#define __android_icu_text_StringSearch__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringSearch.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.CollationElementIterator.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "android.icu.text.SearchIterator_S_ElementComparisonType.h"
#include "android.icu.text.SearchIterator.h"
#include "android.icu.text.StringSearch_S_CollationPCE.h"
#include "android.icu.text.StringSearch_S_Match.h"
#include "android.icu.text.StringSearch_S_Pattern.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.text.CharacterIterator.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class StringSearch : public android::icu::text::SearchIterator {
protected:
	int virtual handleNext(int position);
	int virtual handlePrevious(int position);
	void virtual setMatchNotFound();
private:
	static int CE_LEVEL2_BASE;
	static int CE_LEVEL3_BASE;
	static int CE_MATCH;
	static int CE_NO_MATCH;
	static int CE_SKIP_PATN;
	static int CE_SKIP_TARG;
	static int INITIAL_ARRAY_SIZE_;
	static int PRIMARYORDERMASK;
	static int SECONDARYORDERMASK;
	static int TERTIARYORDERMASK;
	std::shared_ptr<android::icu::text::RuleBasedCollator> collator_;
	std::shared_ptr<android::icu::text::Normalizer2> nfd_;
	std::shared_ptr<android::icu::text::StringSearch_S_Pattern> pattern_;
	int strength_;
	std::shared_ptr<android::icu::text::CollationElementIterator> textIter_;
	std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE> textProcessedIter_;
	bool toShift_;
	std::shared_ptr<android::icu::text::CollationElementIterator> utilIter_;
	static int addToIntArray(std::shared_ptr<int[]> cVar1,int offset,int destinationlength,int value,int increments);
	static long long addToLongArray(std::shared_ptr<long long[]> cVar1,int offset,int destinationlength,long long value,int increments);
	bool virtual checkIdentical(int start,int end);
	static int codePointAt(std::shared_ptr<java::text::CharacterIterator> iter,int index);
	static int codePointBefore(std::shared_ptr<java::text::CharacterIterator> iter,int index);
	static int compareCE64s(long long targCE,long long patCE,std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> compareType);
	int virtual getCE(int sourcece);
	static int getMask(int strength);
	static std::shared_ptr<java::lang::String> getString(std::shared_ptr<java::text::CharacterIterator> text,int start,int length);
	bool virtual handleNextCanonical();
	bool virtual handleNextCommonImpl();
	bool virtual handleNextExact();
	bool virtual handlePreviousCanonical();
	bool virtual handlePreviousCommonImpl();
	bool virtual handlePreviousExact();
	bool virtual initTextProcessedIter();
	void virtual initialize();
	int virtual initializePattern();
	int virtual initializePatternCETable();
	int virtual initializePatternPCETable();
	bool virtual isBreakBoundary(int index);
	static bool isOutOfBounds(int textstart,int textlimit,int offset);
	int virtual nextBoundaryAfter(int startIndex);
	bool virtual search(int startIdx,std::shared_ptr<android::icu::text::StringSearch_S_Match> m);
	bool virtual searchBackwards(int startIdx,std::shared_ptr<android::icu::text::StringSearch_S_Match> m);
public:
	int ceMask_;
	int variableTop_;
	static std::shared_ptr<android::icu::text::StringSearch_S_Pattern> _get0(std::shared_ptr<android::icu::text::StringSearch> _this);
	static std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE> _get1(std::shared_ptr<android::icu::text::StringSearch> _this);
	static bool _wrap0(std::shared_ptr<android::icu::text::StringSearch> _this);
	static void static_cinit();
	StringSearch(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> target);
	StringSearch(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::CharacterIterator> target,std::shared_ptr<android::icu::text::RuleBasedCollator> collator);
	StringSearch(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::CharacterIterator> target,std::shared_ptr<android::icu::text::RuleBasedCollator> collator,std::shared_ptr<android::icu::text::BreakIterator> breakiter);
	StringSearch(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::CharacterIterator> target,std::shared_ptr<android::icu::util::ULocale> locale);
	StringSearch(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::CharacterIterator> target,std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<android::icu::text::RuleBasedCollator> virtual getCollator();
	int virtual getIndex();
	std::shared_ptr<java::lang::String> virtual getPattern();
	bool virtual isCanonical();
	void virtual reset();
	void virtual setCanonical(bool allowCanonical);
	void virtual setCollator(std::shared_ptr<android::icu::text::RuleBasedCollator> collator);
	void virtual setIndex(int position);
	void virtual setPattern(std::shared_ptr<java::lang::String> pattern);
	void virtual setTarget(std::shared_ptr<java::text::CharacterIterator> text);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::StringSearch::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~StringSearch(){
	}

}; // class StringSearch
}; // namespace android::icu::text

#endif //__android_icu_text_StringSearch__

