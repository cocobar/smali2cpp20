// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetRecog_sbcs_S_NGramParser.h"
#include "android.icu.text.CharsetRecog_sbcs_S_NGramParser_IBM420.h"
#include "android.icu.text.CharsetRecog_sbcs.h"

// .method constructor <init>()V
android::icu::text::CharsetRecog_sbcs::CharsetRecog_sbcs()
{
	
	// 044    invoke-direct {p0}, Landroid/icu/text/CharsetRecognizer;-><init>()V
	return;

}
// .method match(Landroid/icu/text/CharsetDetector;[I[B)I
int android::icu::text::CharsetRecog_sbcs::match(std::shared_ptr<android::icu::text::CharsetDetector> det,std::shared_ptr<int[]> ngrams,std::shared_ptr<unsigned char[]> byteMap)
{
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	//    .param p2, "ngrams"    # [I
	//    .param p3, "byteMap"    # [B
	return this->match(det, ngrams, byteMap, 0x20);

}
// .method match(Landroid/icu/text/CharsetDetector;[I[BB)I
int android::icu::text::CharsetRecog_sbcs::match(std::shared_ptr<android::icu::text::CharsetDetector> det,std::shared_ptr<int[]> ngrams,std::shared_ptr<unsigned char[]> byteMap,unsigned char spaceChar)
{
	
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_NGramParser> parser;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	//    .param p2, "ngrams"    # [I
	//    .param p3, "byteMap"    # [B
	//    .param p4, "spaceChar"    # B
	parser = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramParser>(ngrams, byteMap);
	//    .local v0, "parser":Landroid/icu/text/CharsetRecog_sbcs$NGramParser;
	return parser->parse(det, spaceChar);

}
// .method matchIBM420(Landroid/icu/text/CharsetDetector;[I[BB)I
int android::icu::text::CharsetRecog_sbcs::matchIBM420(std::shared_ptr<android::icu::text::CharsetDetector> det,std::shared_ptr<int[]> ngrams,std::shared_ptr<unsigned char[]> byteMap,unsigned char spaceChar)
{
	
	std::shared_ptr<android::icu::text::CharsetRecog_sbcs_S_NGramParser_IBM420> parser;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	//    .param p2, "ngrams"    # [I
	//    .param p3, "byteMap"    # [B
	//    .param p4, "spaceChar"    # B
	parser = std::make_shared<android::icu::text::CharsetRecog_sbcs_S_NGramParser_IBM420>(ngrams, byteMap);
	//    .local v0, "parser":Landroid/icu/text/CharsetRecog_sbcs$NGramParser_IBM420;
	return parser->parse(det, spaceChar);

}


