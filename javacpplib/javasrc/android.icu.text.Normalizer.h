#ifndef __android_icu_text_Normalizer__
#define __android_icu_text_Normalizer__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_CmpEquivLevel.h"
#include "android.icu.text.Normalizer_S_Mode.h"
#include "android.icu.text.Normalizer_S_QuickCheckResult.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.UCharacterIterator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class Normalizer : public java::lang::Cloneable {
protected:
private:
	static int COMPARE_EQUIV;
	std::shared_ptr<java::lang::StringBuilder> buffer;
	int bufferPos;
	int currentIndex;
	std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode;
	int nextIndex;
	std::shared_ptr<android::icu::text::Normalizer2> norm2;
	int options;
	std::shared_ptr<android::icu::text::UCharacterIterator> text;
	void virtual clearBuffer();
	static std::shared_ptr<android::icu::text::Normalizer_S_CmpEquivLevel> createCmpEquivLevelStack();
	static std::shared_ptr<android::icu::text::Normalizer2> getComposeNormalizer2(bool compat,int options);
	static std::shared_ptr<android::icu::text::Normalizer2> getDecomposeNormalizer2(bool compat,int options);
	static int internalCompare(std::shared_ptr<java::lang::CharSequence> cVar3,std::shared_ptr<java::lang::CharSequence> cVar5,int options);
	bool virtual nextNormalize();
	bool virtual previousNormalize();
public:
	static int COMPARE_CODE_POINT_ORDER;
	static int COMPARE_IGNORE_CASE;
	static int COMPARE_NORM_OPTIONS_SHIFT;
	static std::shared_ptr<android::icu::text::Normalizer_S_Mode> COMPOSE;
	static std::shared_ptr<android::icu::text::Normalizer_S_Mode> COMPOSE_COMPAT;
	static std::shared_ptr<android::icu::text::Normalizer_S_Mode> DECOMP;
	static std::shared_ptr<android::icu::text::Normalizer_S_Mode> DECOMP_COMPAT;
	static std::shared_ptr<android::icu::text::Normalizer_S_Mode> DEFAULT;
	static int DONE;
	static std::shared_ptr<android::icu::text::Normalizer_S_Mode> FCD;
	static int FOLD_CASE_DEFAULT;
	static int FOLD_CASE_EXCLUDE_SPECIAL_I;
	static int IGNORE_HANGUL;
	static int INPUT_IS_FCD;
	static std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> MAYBE;
	static std::shared_ptr<android::icu::text::Normalizer_S_Mode> NFC;
	static std::shared_ptr<android::icu::text::Normalizer_S_Mode> NFD;
	static std::shared_ptr<android::icu::text::Normalizer_S_Mode> NFKC;
	static std::shared_ptr<android::icu::text::Normalizer_S_Mode> NFKD;
	static std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> NO;
	static std::shared_ptr<android::icu::text::Normalizer_S_Mode> NONE;
	static std::shared_ptr<android::icu::text::Normalizer_S_Mode> NO_OP;
	static int UNICODE_3_2;
	static std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> YES;
	static void static_cinit();
	Normalizer(std::shared_ptr<android::icu::text::UCharacterIterator> iter,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	Normalizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int opt);
	Normalizer(std::shared_ptr<java::text::CharacterIterator> iter,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int opt);
	static int cmpEquivFold(std::shared_ptr<java::lang::CharSequence> cs1,std::shared_ptr<java::lang::CharSequence> cs2,int options);
	static int compare(int char32a,int char32b,int options);
	static int compare(int char32a,std::shared_ptr<java::lang::String> str2,int options);
	static int compare(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2,int options);
	static int compare(std::shared_ptr<char[]> s1,int s1Start,int s1Limit,std::shared_ptr<char[]> s2,int s2Start,int s2Limit,int options);
	static int compare(std::shared_ptr<char[]> s1,std::shared_ptr<char[]> s2,int options);
	static int compose(std::shared_ptr<char[]> src,int srcStart,int srcLimit,std::shared_ptr<char[]> dest,int destStart,int destLimit,bool compat,int options);
	static int compose(std::shared_ptr<char[]> source,std::shared_ptr<char[]> target,bool compat,int options);
	static std::shared_ptr<java::lang::String> compose(std::shared_ptr<java::lang::String> str,bool compat);
	static std::shared_ptr<java::lang::String> compose(std::shared_ptr<java::lang::String> str,bool compat,int options);
	static int concatenate(std::shared_ptr<char[]> left,int leftStart,int leftLimit,std::shared_ptr<char[]> right,int rightStart,int rightLimit,std::shared_ptr<char[]> dest,int destStart,int destLimit,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	static std::shared_ptr<java::lang::String> concatenate(std::shared_ptr<java::lang::String> left,std::shared_ptr<java::lang::String> right,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	static std::shared_ptr<java::lang::String> concatenate(std::shared_ptr<char[]> left,std::shared_ptr<char[]> right,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	static int decompose(std::shared_ptr<char[]> src,int srcStart,int srcLimit,std::shared_ptr<char[]> dest,int destStart,int destLimit,bool compat,int options);
	static int decompose(std::shared_ptr<char[]> source,std::shared_ptr<char[]> target,bool compat,int options);
	static std::shared_ptr<java::lang::String> decompose(std::shared_ptr<java::lang::String> str,bool compat);
	static std::shared_ptr<java::lang::String> decompose(std::shared_ptr<java::lang::String> str,bool compat,int options);
	static int getFC_NFKC_Closure(int c,std::shared_ptr<char[]> dest);
	static std::shared_ptr<java::lang::String> getFC_NFKC_Closure(int c);
	static bool isNormalized(int char32,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	static bool isNormalized(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	static bool isNormalized(std::shared_ptr<char[]> src,int start,int limit,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	static int normalize(std::shared_ptr<char[]> src,int srcStart,int srcLimit,std::shared_ptr<char[]> dest,int destStart,int destLimit,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	static int normalize(std::shared_ptr<char[]> source,std::shared_ptr<char[]> target,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	static std::shared_ptr<java::lang::String> normalize(int char32,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode);
	static std::shared_ptr<java::lang::String> normalize(int char32,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	static std::shared_ptr<java::lang::String> normalize(std::shared_ptr<java::lang::String> src,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode);
	static std::shared_ptr<java::lang::String> normalize(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	static std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> quickCheck(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode);
	static std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> quickCheck(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	static std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> quickCheck(std::shared_ptr<char[]> source,int start,int limit,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	static std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> quickCheck(std::shared_ptr<char[]> source,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options);
	std::shared_ptr<java::lang::Object> virtual clone();
	int virtual current();
	int virtual endIndex();
	int virtual first();
	int virtual getBeginIndex();
	int virtual getEndIndex();
	int virtual getIndex();
	int virtual getLength();
	std::shared_ptr<android::icu::text::Normalizer_S_Mode> virtual getMode();
	int virtual getOption(int option);
	int virtual getText(std::shared_ptr<char[]> fillIn);
	std::shared_ptr<java::lang::String> virtual getText();
	int virtual last();
	int virtual next();
	int virtual previous();
	void virtual reset();
	int virtual setIndex(int index);
	void virtual setIndexOnly(int index);
	void virtual setMode(std::shared_ptr<android::icu::text::Normalizer_S_Mode> newMode);
	void virtual setOption(int option,bool value);
	void virtual setText(std::shared_ptr<android::icu::text::UCharacterIterator> newText);
	void virtual setText(std::shared_ptr<java::lang::String> newText);
	void virtual setText(std::shared_ptr<java::lang::StringBuffer> newText);
	void virtual setText(std::shared_ptr<java::text::CharacterIterator> newText);
	void virtual setText(std::shared_ptr<char[]> newText);
	int virtual startIndex();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::Normalizer::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Normalizer(){
	}

}; // class Normalizer
}; // namespace android::icu::text

#endif //__android_icu_text_Normalizer__

