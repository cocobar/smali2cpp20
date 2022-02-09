#ifndef __android_icu_text_BidiLine__
#define __android_icu_text_BidiLine__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BidiLine.smali
#include "java2ctype.h"
#include "android.icu.text.Bidi.h"
#include "android.icu.text.BidiRun.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class BidiLine : public java::lang::Object {
protected:
private:
	static void reorderLine(std::shared_ptr<android::icu::text::Bidi> bidi,unsigned char minLevel,unsigned char maxLevel);
public:
	BidiLine();
	static unsigned char getLevelAt(std::shared_ptr<android::icu::text::Bidi> bidi,int charIndex);
	static unsigned char getLevels(std::shared_ptr<android::icu::text::Bidi> bidi);
	static int getLogicalIndex(std::shared_ptr<android::icu::text::Bidi> bidi,int cVar3);
	static int getLogicalMap(std::shared_ptr<android::icu::text::Bidi> bidi);
	static std::shared_ptr<android::icu::text::BidiRun> getLogicalRun(std::shared_ptr<android::icu::text::Bidi> bidi,int logicalPosition);
	static int getRunFromLogicalIndex(std::shared_ptr<android::icu::text::Bidi> bidi,int logicalIndex);
	static void getRuns(std::shared_ptr<android::icu::text::Bidi> bidi);
	static void getSingleRun(std::shared_ptr<android::icu::text::Bidi> bidi,unsigned char level);
	static int getVisualIndex(std::shared_ptr<android::icu::text::Bidi> bidi,int logicalIndex);
	static int getVisualMap(std::shared_ptr<android::icu::text::Bidi> bidi);
	static std::shared_ptr<android::icu::text::BidiRun> getVisualRun(std::shared_ptr<android::icu::text::Bidi> bidi,int runIndex);
	static int invertMap(std::shared_ptr<int[]> srcMap);
	static int prepareReorder(std::shared_ptr<unsigned char[]> levels,std::shared_ptr<unsigned char[]> pMinLevel,std::shared_ptr<unsigned char[]> pMaxLevel);
	static int reorderLogical(std::shared_ptr<unsigned char[]> levels);
	static int reorderVisual(std::shared_ptr<unsigned char[]> levels);
	static std::shared_ptr<android::icu::text::Bidi> setLine(std::shared_ptr<android::icu::text::Bidi> paraBidi,int start,int limit);
	static void setTrailingWSStart(std::shared_ptr<android::icu::text::Bidi> bidi);
public:
	virtual ~BidiLine(){
	}

}; // class BidiLine
}; // namespace android::icu::text

#endif //__android_icu_text_BidiLine__

