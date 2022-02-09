#ifndef __java_awt_font_NumericShaper__
#define __java_awt_font_NumericShaper__
// H L:\smali2cpp20\x64\Release\out\java\awt\font\NumericShaper.smali
#include "java2ctype.h"
#include "java.awt.font.NumericShaper_S_Range.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.Serializable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Set.h"

namespace java::awt::font{
class NumericShaper : public java::io::Serializable {
protected:
private:
	static int ARABIC_KEY;
	static int BENGALI_KEY;
	static int BSEARCH_THRESHOLD;
	static int CONTEXTUAL_MASK;
	static int DEVANAGARI_KEY;
	static int EASTERN_ARABIC_KEY;
	static int ETHIOPIC_KEY;
	static int EUROPEAN_KEY;
	static int GUJARATI_KEY;
	static int GURMUKHI_KEY;
	static int KANNADA_KEY;
	static int KHMER_KEY;
	static int LAO_KEY;
	static int MALAYALAM_KEY;
	static int MONGOLIAN_KEY;
	static int MYANMAR_KEY;
	static int NUM_KEYS;
	static int ORIYA_KEY;
	static int TAMIL_KEY;
	static int TELUGU_KEY;
	static int THAI_KEY;
	static int TIBETAN_KEY;
	static std::shared_ptr<char[]> bases;
	static std::shared_ptr<char[]> contexts;
	static int ctCache;
	static int ctCacheLimit;
	static long long serialVersionUID;
	static std::shared_ptr<int[]> strongTable;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> currentRange;
	int key;
	int mask;
	std::shared_ptr<std::vector<java::awt::font::NumericShaper_S_Range>> rangeArray;
	std::shared_ptr<java::util::Set<java::awt::font::NumericShaper_S_Range>> rangeSet;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> shapingRange;
	int stCache;
	NumericShaper(int key,int mask);
	NumericShaper(std::shared_ptr<java::awt::font::NumericShaper_S_Range> defaultContext,std::shared_ptr<java::util::Set<java::awt::font::NumericShaper_S_Range>> ranges);
	void virtual checkParams(std::shared_ptr<char[]> text,int start,int count);
	static int getContextKey(char c);
	static int getHighBit(int cVar3);
	static int getKeyFromMask(int mask);
	bool virtual isStrongDirectional(char c);
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> virtual rangeForCodePoint(int codepoint);
	static int search(int value,std::shared_ptr<int[]> array,int start,int length);
	void virtual shapeContextually(std::shared_ptr<char[]> text,int start,int count,int cVar0);
	void virtual shapeContextually(std::shared_ptr<char[]> text,int start,int count,std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar0);
	void virtual shapeNonContextually(std::shared_ptr<char[]> text,int start,int count);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream);
public:
	static int ALL_RANGES;
	static int ARABIC;
	static int BENGALI;
	static int DEVANAGARI;
	static int EASTERN_ARABIC;
	static int ETHIOPIC;
	static int EUROPEAN;
	static int GUJARATI;
	static int GURMUKHI;
	static int KANNADA;
	static int KHMER;
	static int LAO;
	static int MALAYALAM;
	static int MONGOLIAN;
	static int MYANMAR;
	static int ORIYA;
	static int TAMIL;
	static int TELUGU;
	static int THAI;
	static int TIBETAN;
	static void static_cinit();
	static std::shared_ptr<java::awt::font::NumericShaper> getContextualShaper(int ranges);
	static std::shared_ptr<java::awt::font::NumericShaper> getContextualShaper(int ranges,int defaultContext);
	static std::shared_ptr<java::awt::font::NumericShaper> getContextualShaper(std::shared_ptr<java::util::Set<java::awt::font::NumericShaper_S_Range>> ranges);
	static std::shared_ptr<java::awt::font::NumericShaper> getContextualShaper(std::shared_ptr<java::util::Set<java::awt::font::NumericShaper_S_Range>> ranges,std::shared_ptr<java::awt::font::NumericShaper_S_Range> defaultContext);
	static std::shared_ptr<java::awt::font::NumericShaper> getShaper(int singleRange);
	static std::shared_ptr<java::awt::font::NumericShaper> getShaper(std::shared_ptr<java::awt::font::NumericShaper_S_Range> singleRange);
	bool virtual equals(std::shared_ptr<java::lang::Object> o);
	std::shared_ptr<java::util::Set<java::awt::font::NumericShaper_S_Range>> virtual getRangeSet();
	int virtual getRanges();
	int virtual hashCode();
	bool virtual isContextual();
	void virtual shape(std::shared_ptr<char[]> text,int start,int count);
	void virtual shape(std::shared_ptr<char[]> text,int start,int count,int context);
	void virtual shape(std::shared_ptr<char[]> text,int start,int count,std::shared_ptr<java::awt::font::NumericShaper_S_Range> context);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::awt::font::NumericShaper::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~NumericShaper(){
	}

}; // class NumericShaper
}; // namespace java::awt::font

#endif //__java_awt_font_NumericShaper__

