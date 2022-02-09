#ifndef __android_icu_text_StringSearch_S_CollationPCE__
#define __android_icu_text_StringSearch_S_CollationPCE__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringSearch$CollationPCE.smali
#include "java2ctype.h"
#include "android.icu.text.CollationElementIterator.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "android.icu.text.StringSearch_S_CollationPCE_S_PCEBuffer.h"
#include "android.icu.text.StringSearch_S_CollationPCE_S_Range.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class StringSearch_S_CollationPCE : public java::lang::Object {
protected:
private:
	static int BUFFER_GROW;
	static int CONTINUATION_MARKER;
	static int DEFAULT_BUFFER_SIZE;
	static int PRIMARYORDERMASK;
	std::shared_ptr<android::icu::text::CollationElementIterator> cei_;
	bool isShifted_;
	std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_PCEBuffer> pceBuffer_;
	int strength_;
	bool toShift_;
	int variableTop_;
	void virtual init(std::shared_ptr<android::icu::text::RuleBasedCollator> coll);
	static bool isContinuation(int ce);
	long long virtual processCE(int ce);
public:
	static long long PROCESSED_NULLORDER;
	StringSearch_S_CollationPCE(std::shared_ptr<android::icu::text::CollationElementIterator> iter);
	void virtual init(std::shared_ptr<android::icu::text::CollationElementIterator> iter);
	long long virtual nextProcessed(std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_Range> range);
	long long virtual previousProcessed(std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_Range> range);
public:
	virtual ~StringSearch_S_CollationPCE(){
	}

}; // class StringSearch_S_CollationPCE
}; // namespace android::icu::text

#endif //__android_icu_text_StringSearch_S_CollationPCE__

