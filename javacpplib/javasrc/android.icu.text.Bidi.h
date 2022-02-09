#ifndef __android_icu_text_Bidi__
#define __android_icu_text_Bidi__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Bidi.smali
#include "java2ctype.h"
#include "android.icu.impl.UBiDiProps.h"
#include "android.icu.text.Bidi_S_BracketData.h"
#include "android.icu.text.Bidi_S_ImpTabPair.h"
#include "android.icu.text.Bidi_S_InsertPoints.h"
#include "android.icu.text.Bidi_S_Isolate.h"
#include "android.icu.text.Bidi_S_LevState.h"
#include "android.icu.text.BidiClassifier.h"
#include "android.icu.text.BidiRun.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.AttributedCharacterIterator.h"

namespace android::icu::text{
class Bidi : public java::lang::Object {
protected:
private:
	static char CR;
	static int IMPTABLEVELS_COLUMNS;
	static int IMPTABLEVELS_RES;
	static int IMPTABPROPS_COLUMNS;
	static int IMPTABPROPS_RES;
	static char LF;
	static short _AN;
	static short _B;
	static short _EN;
	static short _L;
	static short _ON;
	static short _R;
	static short _S;
	static std::shared_ptr<short[]> groupProp;
	static std::shared_ptr<short[]> impAct0;
	static std::shared_ptr<short[]> impAct1;
	static std::shared_ptr<short[]> impAct2;
	static std::shared_ptr<short[]> impAct3;
	static std::shared_ptr<unsigned char[][]> impTabL_DEFAULT;
	static std::shared_ptr<unsigned char[][]> impTabL_GROUP_NUMBERS_WITH_R;
	static std::shared_ptr<unsigned char[][]> impTabL_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS;
	static std::shared_ptr<unsigned char[][]> impTabL_INVERSE_LIKE_DIRECT_WITH_MARKS;
	static std::shared_ptr<unsigned char[][]> impTabL_INVERSE_NUMBERS_AS_L;
	static std::shared_ptr<unsigned char[][]> impTabL_NUMBERS_SPECIAL;
	static std::shared_ptr<short[][]> impTabProps;
	static std::shared_ptr<unsigned char[][]> impTabR_DEFAULT;
	static std::shared_ptr<unsigned char[][]> impTabR_GROUP_NUMBERS_WITH_R;
	static std::shared_ptr<unsigned char[][]> impTabR_INVERSE_LIKE_DIRECT;
	static std::shared_ptr<unsigned char[][]> impTabR_INVERSE_LIKE_DIRECT_WITH_MARKS;
	static std::shared_ptr<unsigned char[][]> impTabR_INVERSE_NUMBERS_AS_L;
	static std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> impTab_DEFAULT;
	static std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> impTab_GROUP_NUMBERS_WITH_R;
	static std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> impTab_INVERSE_FOR_NUMBERS_SPECIAL;
	static std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> impTab_INVERSE_FOR_NUMBERS_SPECIAL_WITH_MARKS;
	static std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> impTab_INVERSE_LIKE_DIRECT;
	static std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> impTab_INVERSE_LIKE_DIRECT_WITH_MARKS;
	static std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> impTab_INVERSE_NUMBERS_AS_L;
	static std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> impTab_NUMBERS_SPECIAL;
	static short GetAction(unsigned char cell);
	static short GetActionProps(short cell);
	static short GetState(unsigned char cell);
	static short GetStateProps(short cell);
	void virtual addPoint(int pos,int flag);
	void virtual adjustWSLevels();
	void virtual bracketAddOpening(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,char match,int position);
	void virtual bracketInit(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd);
	void virtual bracketProcessB(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,unsigned char level);
	void virtual bracketProcessBoundary(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,int lastCcPos,unsigned char cVar0,unsigned char embeddingLevel);
	void virtual bracketProcessChar(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,int position);
	unsigned char virtual bracketProcessClosing(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,int openIdx,int position);
	void virtual bracketProcessLRI_RLI(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,unsigned char level);
	void virtual bracketProcessPDI(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd);
	unsigned char virtual checkExplicitLevels();
	void virtual checkParaCount();
	unsigned char virtual directionFromFlags();
	unsigned char virtual firstL_R_AL();
	unsigned char virtual firstL_R_AL_EN_AN();
	void virtual fixN0c(std::shared_ptr<android::icu::text::Bidi_S_BracketData> bd,int openingIndex,int newPropPosition,unsigned char newProp);
	void virtual getDirProps();
	void virtual getDirPropsMemory(bool mayAllocate,int len);
	void virtual getInitialDirPropsMemory(int len);
	void virtual getInitialLevelsMemory(int len);
	void virtual getInitialRunsMemory(int len);
	void virtual getLevelsMemory(bool mayAllocate,int len);
	std::shared_ptr<java::lang::Object> virtual getMemory(std::shared_ptr<java::lang::String> label,std::shared_ptr<java::lang::Object> array,std::shared_ptr<java::lang::Class<java::lang::Object>> arrayClass,bool mayAllocate,int sizeNeeded);
	void virtual getRunsMemory(bool mayAllocate,int len);
	unsigned char virtual lastL_R_AL();
	void virtual processPropertySeq(std::shared_ptr<android::icu::text::Bidi_S_LevState> levState,short _prop,int start,int limit);
	unsigned char virtual resolveExplicitLevels();
	void virtual resolveImplicitLevels(int start,int limit,short cVar0,short cVar1);
	void virtual setLevelsOutsideIsolates(int start,int limit,unsigned char level);
	void virtual setParaSuccess();
public:
	static unsigned char AL;
	static unsigned char AN;
	static unsigned char B;
	static unsigned char BN;
	static int CLASS_DEFAULT;
	static unsigned char CS;
	static int DIRECTION_DEFAULT_LEFT_TO_RIGHT;
	static int DIRECTION_DEFAULT_RIGHT_TO_LEFT;
	static int DIRECTION_LEFT_TO_RIGHT;
	static int DIRECTION_RIGHT_TO_LEFT;
	static short DO_MIRRORING;
	static std::shared_ptr<int[]> DirPropFlagE;
	static std::shared_ptr<int[]> DirPropFlagLR;
	static int DirPropFlagMultiRuns;
	static std::shared_ptr<int[]> DirPropFlagO;
	static unsigned char EN;
	static unsigned char ENL;
	static unsigned char ENR;
	static unsigned char ES;
	static unsigned char ET;
	static int FIRSTALLOC;
	static unsigned char FOUND_L;
	static unsigned char FOUND_R;
	static unsigned char FSI;
	static short INSERT_LRM_FOR_NUMERIC;
	static int ISOLATE;
	static short KEEP_BASE_COMBINING;
	static unsigned char L;
	static unsigned char LEVEL_DEFAULT_LTR;
	static unsigned char LEVEL_DEFAULT_RTL;
	static unsigned char LEVEL_OVERRIDE;
	static int LOOKING_FOR_PDI;
	static unsigned char LRE;
	static unsigned char LRI;
	static int LRM_AFTER;
	static int LRM_BEFORE;
	static unsigned char LRO;
	static unsigned char LTR;
	static int MAP_NOWHERE;
	static int MASK_BN_EXPLICIT;
	static int MASK_B_S;
	static int MASK_EMBEDDING;
	static int MASK_EXPLICIT;
	static int MASK_ISO;
	static int MASK_LTR;
	static int MASK_POSSIBLE_N;
	static int MASK_RTL;
	static int MASK_R_AL;
	static int MASK_STRONG_EN_AN;
	static int MASK_WS;
	static unsigned char MAX_EXPLICIT_LEVEL;
	static unsigned char MIXED;
	static unsigned char NEUTRAL;
	static int NOT_SEEKING_STRONG;
	static unsigned char NSM;
	static unsigned char ON;
	static int OPTION_DEFAULT;
	static int OPTION_INSERT_MARKS;
	static int OPTION_REMOVE_CONTROLS;
	static int OPTION_STREAMING;
	static short OUTPUT_REVERSE;
	static unsigned char PDF;
	static unsigned char PDI;
	static unsigned char R;
	static short REMOVE_BIDI_CONTROLS;
	static short REORDER_COUNT;
	static short REORDER_DEFAULT;
	static short REORDER_GROUP_NUMBERS_WITH_R;
	static short REORDER_INVERSE_FOR_NUMBERS_SPECIAL;
	static short REORDER_INVERSE_LIKE_DIRECT;
	static short REORDER_INVERSE_NUMBERS_AS_L;
	static short REORDER_LAST_LOGICAL_TO_VISUAL;
	static short REORDER_NUMBERS_SPECIAL;
	static short REORDER_RUNS_ONLY;
	static unsigned char RLE;
	static unsigned char RLI;
	static int RLM_AFTER;
	static int RLM_BEFORE;
	static unsigned char RLO;
	static unsigned char RTL;
	static unsigned char S;
	static int SEEKING_STRONG_FOR_FSI;
	static int SEEKING_STRONG_FOR_PARA;
	static int SIMPLE_OPENINGS_COUNT;
	static int SIMPLE_PARAS_COUNT;
	static unsigned char WS;
	std::shared_ptr<android::icu::impl::UBiDiProps> bdp;
	int controlCount;
	std::shared_ptr<android::icu::text::BidiClassifier> customClassifier;
	unsigned char defaultParaLevel;
	std::shared_ptr<unsigned char[]> dirProps;
	std::shared_ptr<unsigned char[]> dirPropsMemory;
	unsigned char direction;
	std::shared_ptr<java::lang::String> epilogue;
	int flags;
	std::shared_ptr<android::icu::text::Bidi_S_ImpTabPair> impTabPair;
	std::shared_ptr<android::icu::text::Bidi_S_InsertPoints> insertPoints;
	bool isGoodLogicalToVisualRunsMap;
	bool isInverse;
	int isolateCount;
	std::shared_ptr<std::vector<android::icu::text::Bidi_S_Isolate>> isolates;
	int lastArabicPos;
	int length;
	std::shared_ptr<unsigned char[]> levels;
	std::shared_ptr<unsigned char[]> levelsMemory;
	std::shared_ptr<int[]> logicalToVisualRunsMap;
	bool mayAllocateRuns;
	bool mayAllocateText;
	bool orderParagraphsLTR;
	int originalLength;
	std::shared_ptr<android::icu::text::Bidi> paraBidi;
	int paraCount;
	unsigned char paraLevel;
	std::shared_ptr<unsigned char[]> paras_level;
	std::shared_ptr<int[]> paras_limit;
	std::shared_ptr<java::lang::String> prologue;
	int reorderingMode;
	int reorderingOptions;
	int resultLength;
	int runCount;
	std::shared_ptr<std::vector<android::icu::text::BidiRun>> runs;
	std::shared_ptr<std::vector<android::icu::text::BidiRun>> runsMemory;
	std::shared_ptr<std::vector<android::icu::text::BidiRun>> simpleRuns;
	std::shared_ptr<char[]> text;
	int trailingWSStart;
	static void static_cinit();
	Bidi();
	Bidi(int maxLength,int maxRunCount);
	Bidi(std::shared_ptr<java::lang::String> paragraph,int flags);
	Bidi(std::shared_ptr<java::text::AttributedCharacterIterator> paragraph);
	Bidi(std::shared_ptr<char[]> text,int textStart,std::shared_ptr<unsigned char[]> embeddings,int embStart,int paragraphLength,int flags);
	static unsigned char DirFromStrong(unsigned char strong);
	static int DirPropFlag(unsigned char dir);
	static int DirPropFlagE(unsigned char level);
	static int DirPropFlagLR(unsigned char level);
	static int DirPropFlagO(unsigned char level);
	static unsigned char GetLRFromLevel(unsigned char level);
	static bool IsBidiControlChar(int c);
	static bool IsDefaultLevel(unsigned char level);
	static unsigned char NoOverride(unsigned char level);
	static unsigned char getBaseDirection(std::shared_ptr<java::lang::CharSequence> paragraph);
	static int invertMap(std::shared_ptr<int[]> srcMap);
	static int reorderLogical(std::shared_ptr<unsigned char[]> levels);
	static int reorderVisual(std::shared_ptr<unsigned char[]> levels);
	static void reorderVisually(std::shared_ptr<unsigned char[]> levels,int levelStart,std::shared_ptr<std::vector<java::lang::Object>> objects,int objectStart,int count);
	static bool requiresBidi(std::shared_ptr<char[]> text,int start,int limit);
	static std::shared_ptr<java::lang::String> writeReverse(std::shared_ptr<java::lang::String> src,int options);
	int virtual Bidi_Abs(int x);
	int virtual Bidi_Min(int x,int y);
	unsigned char virtual GetParaLevelAt(int pindex);
	bool virtual baseIsLeftToRight();
	int virtual countParagraphs();
	int virtual countRuns();
	std::shared_ptr<android::icu::text::Bidi> virtual createLineBidi(int lineStart,int lineLimit);
	int virtual getBaseLevel();
	std::shared_ptr<android::icu::text::BidiClassifier> virtual getCustomClassifier();
	int virtual getCustomizedClass(int c);
	void virtual getDirPropsMemory(int len);
	unsigned char virtual getDirection();
	int virtual getLength();
	unsigned char virtual getLevelAt(int charIndex);
	unsigned char virtual getLevels();
	void virtual getLevelsMemory(int len);
	int virtual getLogicalIndex(int visualIndex);
	int virtual getLogicalMap();
	std::shared_ptr<android::icu::text::BidiRun> virtual getLogicalRun(int logicalPosition);
	void virtual getLogicalToVisualRunsMap();
	unsigned char virtual getParaLevel();
	std::shared_ptr<android::icu::text::BidiRun> virtual getParagraph(int charIndex);
	std::shared_ptr<android::icu::text::BidiRun> virtual getParagraphByIndex(int paraIndex);
	int virtual getParagraphIndex(int charIndex);
	int virtual getProcessedLength();
	int virtual getReorderingMode();
	int virtual getReorderingOptions();
	int virtual getResultLength();
	int virtual getRunCount();
	int virtual getRunLevel(int run);
	int virtual getRunLimit(int run);
	int virtual getRunStart(int run);
	void virtual getRunsMemory(int len);
	char virtual getText();
	std::shared_ptr<java::lang::String> virtual getTextAsString();
	int virtual getVisualIndex(int logicalIndex);
	int virtual getVisualMap();
	std::shared_ptr<android::icu::text::BidiRun> virtual getVisualRun(int runIndex);
	bool virtual isInverse();
	bool virtual isLeftToRight();
	bool virtual isMixed();
	bool virtual isOrderParagraphsLTR();
	bool virtual isRightToLeft();
	void virtual orderParagraphsLTR(bool ordarParaLTR);
	void virtual setContext(std::shared_ptr<java::lang::String> prologue,std::shared_ptr<java::lang::String> epilogue);
	void virtual setCustomClassifier(std::shared_ptr<android::icu::text::BidiClassifier> classifier);
	void virtual setInverse(bool isInverse);
	std::shared_ptr<android::icu::text::Bidi> virtual setLine(int start,int limit);
	void virtual setPara(std::shared_ptr<java::lang::String> text,unsigned char paraLevel,std::shared_ptr<unsigned char[]> embeddingLevels);
	void virtual setPara(std::shared_ptr<java::text::AttributedCharacterIterator> paragraph);
	void virtual setPara(std::shared_ptr<char[]> cVar0,unsigned char paraLevel,std::shared_ptr<unsigned char[]> embeddingLevels);
	void virtual setParaRunsOnly(std::shared_ptr<char[]> parmText,unsigned char parmParaLevel);
	void virtual setReorderingMode(int reorderingMode);
	void virtual setReorderingOptions(int options);
	bool virtual testDirPropFlagAt(int flag,int index);
	void virtual verifyRange(int index,int start,int limit);
	void virtual verifyValidPara();
	void virtual verifyValidParaOrLine();
	std::shared_ptr<java::lang::String> virtual writeReordered(int options);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::Bidi::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Bidi(){
	}

}; // class Bidi
}; // namespace android::icu::text

#endif //__android_icu_text_Bidi__

