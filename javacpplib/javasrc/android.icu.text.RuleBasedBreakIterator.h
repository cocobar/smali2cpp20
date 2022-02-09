#ifndef __android_icu_text_RuleBasedBreakIterator__
#define __android_icu_text_RuleBasedBreakIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedBreakIterator.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.LanguageBreakEngine.h"
#include "android.icu.text.RBBIDataWrapper.h"
#include "android.icu.text.RuleBasedBreakIterator_S_LookAheadResults.h"
#include "android.icu.text.UnhandledBreakEngine.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.io.PrintStream.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"
#include "java.text.CharacterIterator.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

namespace android::icu::text{
class RuleBasedBreakIterator : public android::icu::text::BreakIterator {
protected:
	static void checkOffset(int offset,std::shared_ptr<java::text::CharacterIterator> text);
private:
	static std::shared_ptr<java::lang::String> RBBI_DEBUG_ARG;
	static int RBBI_END;
	static int RBBI_RUN;
	static int RBBI_START;
	static int START_STATE;
	static int STOP_STATE;
	static bool TRACE;
	static int kMaxLookaheads;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap<java::lang::Integer,android::icu::text::LanguageBreakEngine>> fBreakEngines;
	int fBreakType;
	std::shared_ptr<int[]> fCachedBreakPositions;
	int fDictionaryCharCount;
	int fLastRuleStatusIndex;
	bool fLastStatusIndexValid;
	std::shared_ptr<android::icu::text::RuleBasedBreakIterator_S_LookAheadResults> fLookAheadMatches;
	int fPositionInCache;
	std::shared_ptr<java::text::CharacterIterator> fText;
	std::shared_ptr<android::icu::text::UnhandledBreakEngine> fUnhandledBreakEngine;
	RuleBasedBreakIterator();
	int virtual checkDictionary(int startPos,int endPos,bool reverse);
	std::shared_ptr<android::icu::text::LanguageBreakEngine> virtual getLanguageBreakEngine(int c);
	int virtual handleNext(std::shared_ptr<short[]> stateTable);
	int virtual handlePrevious(std::shared_ptr<short[]> stateTable);
	void virtual makeRuleStatusValid();
	void virtual reset();
	int virtual rulesFollowing(int offset);
	int virtual rulesPreceding(int offset);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<java::lang::String> fDebugEnv;
	std::shared_ptr<android::icu::text::RBBIDataWrapper> fRData;
	static void static_cinit();
	RuleBasedBreakIterator(std::shared_ptr<java::lang::String> rules);
	static void compileRules(std::shared_ptr<java::lang::String> rules,std::shared_ptr<java::io::OutputStream> ruleBinary);
	static std::shared_ptr<android::icu::text::RuleBasedBreakIterator> getInstanceFromCompiledRules(std::shared_ptr<java::io::InputStream> is);
	static std::shared_ptr<android::icu::text::RuleBasedBreakIterator> getInstanceFromCompiledRules(std::shared_ptr<java::nio::ByteBuffer> bytes);
	std::shared_ptr<java::lang::Object> virtual clone();
	int virtual current();
	void virtual dump(std::shared_ptr<java::io::PrintStream> cVar0);
	bool virtual equals(std::shared_ptr<java::lang::Object> that);
	int virtual first();
	int virtual following(int offset);
	int virtual getBreakType();
	int virtual getRuleStatus();
	int virtual getRuleStatusVec(std::shared_ptr<int[]> fillInArray);
	std::shared_ptr<java::text::CharacterIterator> virtual getText();
	int virtual hashCode();
	bool virtual isBoundary(int offset);
	int virtual last();
	int virtual next();
	int virtual next(int n);
	int virtual preceding(int offset);
	int virtual previous();
	void virtual setBreakType(int type);
	void virtual setText(std::shared_ptr<java::text::CharacterIterator> newText);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RuleBasedBreakIterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RuleBasedBreakIterator(){
	}

}; // class RuleBasedBreakIterator
}; // namespace android::icu::text

#endif //__android_icu_text_RuleBasedBreakIterator__

