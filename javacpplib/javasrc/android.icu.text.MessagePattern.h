#ifndef __android_icu_text_MessagePattern__
#define __android_icu_text_MessagePattern__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePattern.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern_S_ApostropheMode.h"
#include "android.icu.text.MessagePattern_S_ArgType.h"
#include "android.icu.text.MessagePattern_S_Part_S_Type.h"
#include "android.icu.text.MessagePattern_S_Part.h"
#include "android.icu.util.Freezable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Double.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"

namespace android::icu::text{
class MessagePattern : public java::lang::Cloneable, public android::icu::util::Freezable<android::icu::text::MessagePattern> {
protected:
private:
	static int MAX_PREFIX_LENGTH;
	static std::shared_ptr<std::vector<android::icu::text::MessagePattern_S_ArgType>> argTypes;
	static std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> defaultAposMode;
	std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> aposMode;
	bool frozen;
	bool hasArgNames;
	bool hasArgNumbers;
	std::shared_ptr<java::lang::String> msg;
	bool needsAutoQuoting;
	std::shared_ptr<java::util::ArrayList<java::lang::Double>> numericValues;
	std::shared_ptr<java::util::ArrayList<android::icu::text::MessagePattern_S_Part>> parts;
	void virtual addArgDoublePart(double numericValue,int start,int length);
	void virtual addLimitPart(int start,std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> type,int index,int length,int value);
	void virtual addPart(std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> type,int index,int length,int value);
	bool virtual inMessageFormatPattern(int nestingLevel);
	bool virtual inTopLevelChoiceMessage(int nestingLevel,std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> parentType);
	static bool isArgTypeChar(int c);
	bool virtual isChoice(int index);
	bool virtual isOrdinal(int index);
	bool virtual isPlural(int index);
	bool virtual isSelect(int index);
	int virtual parseArg(int index,int argStartLength,int nestingLevel);
	int virtual parseArgNumber(int start,int limit);
	static int parseArgNumber(std::shared_ptr<java::lang::CharSequence> s,int start,int limit);
	int virtual parseChoiceStyle(int index,int nestingLevel);
	void virtual parseDouble(int start,int limit,bool allowInfinity);
	int virtual parseMessage(int cVar1,int msgStartLength,int nestingLevel,std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> parentType);
	int virtual parsePluralOrSelectStyle(std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType,int index,int nestingLevel);
	int virtual parseSimpleStyle(int index);
	void virtual postParse();
	void virtual preParse(std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<java::lang::String> virtual prefix();
	std::shared_ptr<java::lang::String> virtual prefix(int start);
	static std::shared_ptr<java::lang::String> prefix(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> prefix(std::shared_ptr<java::lang::String> s,int start);
	int virtual skipDouble(int index);
	int virtual skipIdentifier(int index);
	int virtual skipWhiteSpace(int index);
public:
	static bool _assertionsDisabled;
	static int ARG_NAME_NOT_NUMBER;
	static int ARG_NAME_NOT_VALID;
	static double NO_NUMERIC_VALUE;
	static std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> _get0();
	static void static_cinit();
	MessagePattern();
	MessagePattern(std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> mode);
	MessagePattern(std::shared_ptr<java::lang::String> pattern);
	static void appendReducedApostrophes(std::shared_ptr<java::lang::String> s,int start,int limit,std::shared_ptr<java::lang::StringBuilder> sb);
	static int validateArgumentName(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::String> virtual autoQuoteApostropheDeep();
	void virtual clear();
	void virtual clearPatternAndSetApostropheMode(std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> mode);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::text::MessagePattern> virtual cloneAsThawed();
	int virtual countParts();
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<android::icu::text::MessagePattern> virtual freeze();
	std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> virtual getApostropheMode();
	int virtual getLimitPartIndex(int start);
	double virtual getNumericValue(std::shared_ptr<android::icu::text::MessagePattern_S_Part> part);
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> virtual getPart(int i);
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> virtual getPartType(int i);
	int virtual getPatternIndex(int partIndex);
	std::shared_ptr<java::lang::String> virtual getPatternString();
	double virtual getPluralOffset(int pluralStart);
	std::shared_ptr<java::lang::String> virtual getSubstring(std::shared_ptr<android::icu::text::MessagePattern_S_Part> part);
	bool virtual hasNamedArguments();
	bool virtual hasNumberedArguments();
	int virtual hashCode();
	bool virtual isFrozen();
	bool virtual jdkAposMode();
	std::shared_ptr<android::icu::text::MessagePattern> virtual parse(std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<android::icu::text::MessagePattern> virtual parseChoiceStyle(std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<android::icu::text::MessagePattern> virtual parsePluralStyle(std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<android::icu::text::MessagePattern> virtual parseSelectStyle(std::shared_ptr<java::lang::String> pattern);
	bool virtual partSubstringMatches(std::shared_ptr<android::icu::text::MessagePattern_S_Part> part,std::shared_ptr<java::lang::String> s);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::MessagePattern::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~MessagePattern(){
	}

}; // class MessagePattern
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePattern__

