#ifndef __android_icu_text_ArabicShaping__
#define __android_icu_text_ArabicShaping__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ArabicShaping.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class ArabicShaping : public java::lang::Object {
protected:
private:
	static int ALEFTYPE;
	static int DESHAPE_MODE;
	static char HAMZA06_CHAR;
	static char HAMZAFE_CHAR;
	static int IRRELEVANT;
	static char LAMALEF_SPACE_SUB;
	static int LAMTYPE;
	static char LAM_CHAR;
	static int LINKL;
	static int LINKR;
	static int LINK_MASK;
	static char NEW_TAIL_CHAR;
	static char OLD_TAIL_CHAR;
	static char SHADDA06_CHAR;
	static char SHADDA_CHAR;
	static char SHADDA_TATWEEL_CHAR;
	static int SHAPE_MODE;
	static char SPACE_CHAR;
	static char TASHKEEL_SPACE_SUB;
	static char TATWEEL_CHAR;
	static char YEH_HAMZAFE_CHAR;
	static char YEH_HAMZA_CHAR;
	static std::shared_ptr<int[]> araLink;
	static std::shared_ptr<int[]> convertFEto06;
	static std::shared_ptr<char[]> convertNormalizedLamAlef;
	static std::shared_ptr<int[]> irrelevantPos;
	static std::shared_ptr<int[]> presLink;
	static std::shared_ptr<int[][][]> shapeTable;
	static std::shared_ptr<int[]> tailFamilyIsolatedFinal;
	static std::shared_ptr<int[]> tashkeelMedial;
	static std::shared_ptr<char[]> yehHamzaToYeh;
	bool isLogical;
	int options;
	bool spacesRelativeToTextBeginEnd;
	char tailChar;
	int virtual calculateSize(std::shared_ptr<char[]> source,int sourceStart,int sourceLength);
	static char changeLamAlef(char ch);
	static int countSpaceSub(std::shared_ptr<char[]> dest,int length,char subChar);
	static int countSpacesLeft(std::shared_ptr<char[]> dest,int start,int count);
	static int countSpacesRight(std::shared_ptr<char[]> dest,int start,int count);
	int virtual deShapeUnicode(std::shared_ptr<char[]> dest,int start,int length,int destSize);
	int virtual deshapeNormalize(std::shared_ptr<char[]> dest,int start,int length);
	int virtual expandCompositChar(std::shared_ptr<char[]> dest,int start,int length,int lacount,int shapingMode);
	bool virtual expandCompositCharAtBegin(std::shared_ptr<char[]> dest,int start,int length,int lacount);
	bool virtual expandCompositCharAtEnd(std::shared_ptr<char[]> dest,int start,int length,int lacount);
	bool virtual expandCompositCharAtNear(std::shared_ptr<char[]> dest,int start,int length,int yehHamzaOption,int seenTailOption,int lamAlefOption);
	static int flipArray(std::shared_ptr<char[]> dest,int start,int e,int w);
	static int getLink(char ch);
	int virtual handleGeneratedSpaces(std::shared_ptr<char[]> dest,int start,int length);
	static int handleTashkeelWithTatweel(std::shared_ptr<char[]> dest,int sourceLength);
	int virtual internalShape(std::shared_ptr<char[]> source,int sourceStart,int sourceLength,std::shared_ptr<char[]> dest,int destStart,int destSize);
	static void invertBuffer(std::shared_ptr<char[]> buffer,int start,int length);
	static bool isAlefChar(char ch);
	static bool isAlefMaksouraChar(char ch);
	static int isIsolatedTashkeelChar(char ch);
	static bool isLamAlefChar(char ch);
	static bool isNormalizedLamAlefChar(char ch);
	static int isSeenFamilyChar(char ch);
	static int isSeenTailFamilyChar(char ch);
	static bool isTailChar(char ch);
	static bool isTashkeelChar(char ch);
	static bool isTashkeelCharFE(char ch);
	static int isTashkeelOnTatweelChar(char ch);
	static bool isYehHamzaChar(char ch);
	int virtual normalize(std::shared_ptr<char[]> dest,int start,int length);
	void virtual shapeToArabicDigitsWithContext(std::shared_ptr<char[]> dest,int start,int length,char digitBase,bool lastStrongWasAL);
	int virtual shapeUnicode(std::shared_ptr<char[]> dest,int start,int length,int destSize,int tashkeelFlag);
	static void shiftArray(std::shared_ptr<char[]> dest,int start,int e,char subChar);
	static int specialChar(char ch);
public:
	static int DIGITS_AN2EN;
	static int DIGITS_EN2AN;
	static int DIGITS_EN2AN_INIT_AL;
	static int DIGITS_EN2AN_INIT_LR;
	static int DIGITS_MASK;
	static int DIGITS_NOOP;
	static int DIGIT_TYPE_AN;
	static int DIGIT_TYPE_AN_EXTENDED;
	static int DIGIT_TYPE_MASK;
	static int LAMALEF_AUTO;
	static int LAMALEF_BEGIN;
	static int LAMALEF_END;
	static int LAMALEF_MASK;
	static int LAMALEF_NEAR;
	static int LAMALEF_RESIZE;
	static int LENGTH_FIXED_SPACES_AT_BEGINNING;
	static int LENGTH_FIXED_SPACES_AT_END;
	static int LENGTH_FIXED_SPACES_NEAR;
	static int LENGTH_GROW_SHRINK;
	static int LENGTH_MASK;
	static int LETTERS_MASK;
	static int LETTERS_NOOP;
	static int LETTERS_SHAPE;
	static int LETTERS_SHAPE_TASHKEEL_ISOLATED;
	static int LETTERS_UNSHAPE;
	static int SEEN_MASK;
	static int SEEN_TWOCELL_NEAR;
	static int SHAPE_TAIL_NEW_UNICODE;
	static int SHAPE_TAIL_TYPE_MASK;
	static int SPACES_RELATIVE_TO_TEXT_BEGIN_END;
	static int SPACES_RELATIVE_TO_TEXT_MASK;
	static int TASHKEEL_BEGIN;
	static int TASHKEEL_END;
	static int TASHKEEL_MASK;
	static int TASHKEEL_REPLACE_BY_TATWEEL;
	static int TASHKEEL_RESIZE;
	static int TEXT_DIRECTION_LOGICAL;
	static int TEXT_DIRECTION_MASK;
	static int TEXT_DIRECTION_VISUAL_LTR;
	static int TEXT_DIRECTION_VISUAL_RTL;
	static int YEHHAMZA_MASK;
	static int YEHHAMZA_TWOCELL_NEAR;
	static void static_cinit();
	ArabicShaping(int options);
	bool virtual equals(std::shared_ptr<java::lang::Object> rhs);
	int virtual hashCode();
	int virtual shape(std::shared_ptr<char[]> source,int sourceStart,int sourceLength,std::shared_ptr<char[]> dest,int destStart,int destSize);
	std::shared_ptr<java::lang::String> virtual shape(std::shared_ptr<java::lang::String> text);
	void virtual shape(std::shared_ptr<char[]> source,int start,int length);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::ArabicShaping::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ArabicShaping(){
	}

}; // class ArabicShaping
}; // namespace android::icu::text

#endif //__android_icu_text_ArabicShaping__

