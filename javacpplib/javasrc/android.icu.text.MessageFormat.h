#ifndef __android_icu_text_MessageFormat__
#define __android_icu_text_MessageFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessageFormat.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.MessageFormat_S_AppendableWrapper.h"
#include "android.icu.text.MessageFormat_S_PluralSelectorContext.h"
#include "android.icu.text.MessageFormat_S_PluralSelectorProvider.h"
#include "android.icu.text.MessagePattern_S_ApostropheMode.h"
#include "android.icu.text.MessagePattern.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.UFormat.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.text.FieldPosition.h"
#include "java.text.Format.h"
#include "java.text.ParsePosition.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::text{
class MessageFormat : public android::icu::text::UFormat {
protected:
private:
	static char CURLY_BRACE_LEFT;
	static char CURLY_BRACE_RIGHT;
	static int DATE_MODIFIER_EMPTY;
	static int DATE_MODIFIER_FULL;
	static int DATE_MODIFIER_LONG;
	static int DATE_MODIFIER_MEDIUM;
	static int DATE_MODIFIER_SHORT;
	static int MODIFIER_CURRENCY;
	static int MODIFIER_EMPTY;
	static int MODIFIER_INTEGER;
	static int MODIFIER_PERCENT;
	static char SINGLE_QUOTE;
	static int STATE_INITIAL;
	static int STATE_IN_QUOTE;
	static int STATE_MSG_ELEMENT;
	static int STATE_SINGLE_QUOTE;
	static int TYPE_DATE;
	static int TYPE_DURATION;
	static int TYPE_NUMBER;
	static int TYPE_ORDINAL;
	static int TYPE_SPELLOUT;
	static int TYPE_TIME;
	static std::shared_ptr<std::vector<java::lang::String>> dateModifierList;
	static std::shared_ptr<std::vector<java::lang::String>> modifierList;
	static std::shared_ptr<java::util::Locale> rootLocale;
	static std::shared_ptr<std::vector<java::lang::String>> typeList;
	std::shared_ptr<java::util::Map<java::lang::Integer,java::text::Format>> cachedFormatters;
	std::shared_ptr<java::util::Set<java::lang::Integer>> customFormatArgStarts;
	std::shared_ptr<android::icu::text::MessagePattern> msgPattern;
	std::shared_ptr<android::icu::text::MessageFormat_S_PluralSelectorProvider> ordinalProvider;
	std::shared_ptr<android::icu::text::MessageFormat_S_PluralSelectorProvider> pluralProvider;
	std::shared_ptr<android::icu::text::DateFormat> stockDateFormatter;
	std::shared_ptr<android::icu::text::NumberFormat> stockNumberFormatter;
	std::shared_ptr<android::icu::util::ULocale> ulocale;
	bool virtual argNameMatches(int partIndex,std::shared_ptr<java::lang::String> argName,int argNumber);
	void virtual cacheExplicitFormats();
	std::shared_ptr<java::text::Format> virtual createAppropriateFormat(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> style);
	static int findChoiceSubMessage(std::shared_ptr<android::icu::text::MessagePattern> pattern,int cVar2,double number);
	int virtual findFirstPluralNumberArg(int msgStart,std::shared_ptr<java::lang::String> argName);
	static int findKeyword(std::shared_ptr<java::lang::String> s,std::shared_ptr<std::vector<java::lang::String>> list);
	int virtual findOtherSubMessage(int cVar0);
	void virtual format(int msgStart,std::shared_ptr<android::icu::text::MessageFormat_S_PluralSelectorContext> pluralNumber,std::shared_ptr<std::vector<java::lang::Object>> args,std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> argsMap,std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> dest,std::shared_ptr<java::text::FieldPosition> fp);
	void virtual format(std::shared_ptr<java::lang::Object> arguments,std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> result,std::shared_ptr<java::text::FieldPosition> fp);
	void virtual format(std::shared_ptr<std::vector<java::lang::Object>> arguments,std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> argsMap,std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> dest,std::shared_ptr<java::text::FieldPosition> fp);
	void virtual formatComplexSubMessage(int msgStart,std::shared_ptr<android::icu::text::MessageFormat_S_PluralSelectorContext> pluralNumber,std::shared_ptr<std::vector<java::lang::Object>> args,std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> argsMap,std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> dest);
	std::shared_ptr<java::lang::String> virtual getArgName(int partIndex);
	std::shared_ptr<java::lang::String> virtual getLiteralStringUntilNextArgument(int from);
	std::shared_ptr<android::icu::text::DateFormat> virtual getStockDateFormatter();
	std::shared_ptr<android::icu::text::NumberFormat> virtual getStockNumberFormatter();
	static int matchStringUntilLimitPart(std::shared_ptr<android::icu::text::MessagePattern> pattern,int partIndex,int limitPartIndex,std::shared_ptr<java::lang::String> source,int sourceOffset);
	int virtual nextTopLevelArgStart(int cVar0);
	void virtual parse(int msgStart,std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<std::vector<java::lang::Object>> args,std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> argsMap);
	static double parseChoiceArgument(std::shared_ptr<android::icu::text::MessagePattern> pattern,int partIndex,std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> in);
	void virtual resetPattern();
	void virtual setArgStartFormat(int argStart,std::shared_ptr<java::text::Format> formatter);
	void virtual setCustomArgStartFormat(int argStart,std::shared_ptr<java::text::Format> formatter);
	std::shared_ptr<java::text::FieldPosition> virtual updateMetaData(std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> dest,int prevLength,std::shared_ptr<java::text::FieldPosition> fp,std::shared_ptr<java::lang::Object> argId);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> out);
public:
	static bool _assertionsDisabled;
	static long long serialVersionUID;
	static std::shared_ptr<java::util::Map> _get0(std::shared_ptr<android::icu::text::MessageFormat> _this);
	static std::shared_ptr<android::icu::util::ULocale> _get1(std::shared_ptr<android::icu::text::MessageFormat> _this);
	static std::shared_ptr<android::icu::text::NumberFormat> _wrap0(std::shared_ptr<android::icu::text::MessageFormat> _this);
	static int _wrap1(std::shared_ptr<android::icu::text::MessageFormat> _this,int msgStart,std::shared_ptr<java::lang::String> argName);
	static int _wrap2(std::shared_ptr<android::icu::text::MessageFormat> _this,int partIndex);
	static void static_cinit();
	MessageFormat(std::shared_ptr<java::lang::String> pattern);
	MessageFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::util::ULocale> locale);
	MessageFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<java::lang::String> autoQuoteApostrophe(std::shared_ptr<java::lang::String> pattern);
	static std::shared_ptr<java::lang::String> format(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> arguments);
	static std::shared_ptr<java::lang::String> format(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<std::vector<java::lang::Object>> arguments);
	void virtual applyPattern(std::shared_ptr<java::lang::String> pttrn);
	void virtual applyPattern(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> aposMode);
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::lang::Object> arguments,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> arguments,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<std::vector<java::lang::Object>> arguments,std::shared_ptr<java::lang::StringBuffer> result,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::text::AttributedCharacterIterator> virtual formatToCharacterIterator(std::shared_ptr<java::lang::Object> arguments);
	std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> virtual getApostropheMode();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getArgumentNames();
	std::shared_ptr<java::text::Format> virtual getFormatByArgumentName(std::shared_ptr<java::lang::String> argumentName);
	std::shared_ptr<java::text::Format> virtual getFormats();
	std::shared_ptr<java::text::Format> virtual getFormatsByArgumentIndex();
	std::shared_ptr<java::util::Locale> virtual getLocale();
	std::shared_ptr<android::icu::util::ULocale> virtual getULocale();
	int virtual hashCode();
	std::shared_ptr<java::lang::Object> virtual parse(std::shared_ptr<java::lang::String> source);
	std::shared_ptr<java::lang::Object> virtual parse(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos);
	std::shared_ptr<java::lang::Object> virtual parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos);
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> virtual parseToMap(std::shared_ptr<java::lang::String> source);
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::Object>> virtual parseToMap(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos);
	void virtual setFormat(int formatElementIndex,std::shared_ptr<java::text::Format> newFormat);
	void virtual setFormatByArgumentIndex(int argumentIndex,std::shared_ptr<java::text::Format> newFormat);
	void virtual setFormatByArgumentName(std::shared_ptr<java::lang::String> argumentName,std::shared_ptr<java::text::Format> newFormat);
	void virtual setFormats(std::shared_ptr<std::vector<java::text::Format>> newFormats);
	void virtual setFormatsByArgumentIndex(std::shared_ptr<std::vector<java::text::Format>> newFormats);
	void virtual setFormatsByArgumentName(std::shared_ptr<java::util::Map<java::lang::String,java::text::Format>> newFormats);
	void virtual setLocale(std::shared_ptr<android::icu::util::ULocale> locale);
	void virtual setLocale(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<java::lang::String> virtual toPattern();
	bool virtual usesNamedArguments();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::MessageFormat::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~MessageFormat(){
	}

}; // class MessageFormat
}; // namespace android::icu::text

#endif //__android_icu_text_MessageFormat__

