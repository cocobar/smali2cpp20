#ifndef __android_icu_text_ChineseDateFormat__
#define __android_icu_text_ChineseDateFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ChineseDateFormat.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormat_S_Field.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.SimpleDateFormat.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.FieldPosition.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class ChineseDateFormat : public android::icu::text::SimpleDateFormat {
protected:
	std::shared_ptr<android::icu::text::DateFormat_S_Field> virtual patternCharToDateFormatField(char ch);
	void virtual subFormat(std::shared_ptr<java::lang::StringBuffer> buf,char ch,int count,int beginOffset,int fieldNum,std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext,std::shared_ptr<java::text::FieldPosition> pos,std::shared_ptr<android::icu::util::Calendar> cal);
	int virtual subParse(std::shared_ptr<java::lang::String> text,int start,char ch,int count,bool obeyCount,bool allowNegative,std::shared_ptr<bool[]> ambiguousYear,std::shared_ptr<android::icu::util::Calendar> cal);
private:
public:
	static long long serialVersionUID;
	ChineseDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::util::ULocale> locale);
	ChineseDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> override,std::shared_ptr<android::icu::util::ULocale> locale);
	ChineseDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::util::Locale> locale);
public:
	virtual ~ChineseDateFormat(){
	}

}; // class ChineseDateFormat
}; // namespace android::icu::text

#endif //__android_icu_text_ChineseDateFormat__

