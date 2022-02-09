#ifndef __android_icu_text_PluralRules_S_FixedDecimal__
#define __android_icu_text_PluralRules_S_FixedDecimal__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$FixedDecimal.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_Operand.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.Comparable.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralRules_S_FixedDecimal : public java::lang::Number, public java::lang::Comparable<android::icu::text::PluralRules_S_FixedDecimal> {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_text_PluralRules_S_OperandSwitchesValues;
	static long long MAX_INTEGER_PART;
	static long long serialVersionUID;
	int baseFactor;
	static int _getandroid_icu_text_PluralRules_S_OperandSwitchesValues();
	static int getFractionalDigits(double cVar0,int v);
	static int getVisibleFractionCount(std::shared_ptr<java::lang::String> value);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> in);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> out);
public:
	static long long MAX;
	long long decimalDigits;
	long long decimalDigitsWithoutTrailingZeros;
	bool hasIntegerValue;
	long long integerValue;
	bool isNegative;
	double source;
	int visibleDecimalDigitCount;
	int visibleDecimalDigitCountWithoutTrailingZeros;
	static int _get0(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> _this);
	PluralRules_S_FixedDecimal(double n);
	PluralRules_S_FixedDecimal(double n,int v);
	PluralRules_S_FixedDecimal(double n,int v,long long f);
	PluralRules_S_FixedDecimal(long long n);
	PluralRules_S_FixedDecimal(std::shared_ptr<java::lang::String> n);
	static int decimals(double cVar0);
	static std::shared_ptr<android::icu::text::PluralRules_S_Operand> getOperand(std::shared_ptr<java::lang::String> t);
	int virtual compareTo(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> other);
	double virtual doubleValue();
	bool virtual equals(std::shared_ptr<java::lang::Object> arg0);
	float virtual floatValue();
	double virtual get(std::shared_ptr<android::icu::text::PluralRules_S_Operand> operand);
	int virtual getBaseFactor();
	long long virtual getDecimalDigits();
	long long virtual getDecimalDigitsWithoutTrailingZeros();
	long long virtual getIntegerValue();
	long long virtual getShiftedValue();
	double virtual getSource();
	int virtual getVisibleDecimalDigitCount();
	int virtual getVisibleDecimalDigitCountWithoutTrailingZeros();
	bool virtual hasIntegerValue();
	int virtual hashCode();
	int virtual intValue();
	bool virtual isHasIntegerValue();
	bool virtual isNegative();
	long long virtual longValue();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PluralRules_S_FixedDecimal(){
	}

}; // class PluralRules_S_FixedDecimal
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_FixedDecimal__

