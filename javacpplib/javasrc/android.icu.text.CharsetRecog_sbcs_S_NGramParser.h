#ifndef __android_icu_text_CharsetRecog_sbcs_S_NGramParser__
#define __android_icu_text_CharsetRecog_sbcs_S_NGramParser__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$NGramParser.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class CharsetRecog_sbcs_S_NGramParser : public java::lang::Object {
protected:
	int byteIndex;
	std::shared_ptr<unsigned char[]> byteMap;
	unsigned char spaceChar;
	void virtual addByte(int b);
	void virtual parseCharacters(std::shared_ptr<android::icu::text::CharsetDetector> det);
private:
	static int N_GRAM_MASK;
	int hitCount;
	int ngram;
	int ngramCount;
	std::shared_ptr<int[]> ngramList;
	void virtual lookup(int thisNgram);
	int virtual nextByte(std::shared_ptr<android::icu::text::CharsetDetector> det);
	static int search(std::shared_ptr<int[]> table,int value);
public:
	CharsetRecog_sbcs_S_NGramParser(std::shared_ptr<int[]> theNgramList,std::shared_ptr<unsigned char[]> theByteMap);
	int virtual parse(std::shared_ptr<android::icu::text::CharsetDetector> det);
	int virtual parse(std::shared_ptr<android::icu::text::CharsetDetector> det,unsigned char spaceCh);
public:
	virtual ~CharsetRecog_sbcs_S_NGramParser(){
	}

}; // class CharsetRecog_sbcs_S_NGramParser
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_sbcs_S_NGramParser__

