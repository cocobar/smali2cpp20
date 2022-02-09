#ifndef __java_awt_font_NumericShaper_S_Range__
#define __java_awt_font_NumericShaper_S_Range__
// H L:\smali2cpp20\x64\Release\out\java\awt\font\NumericShaper$Range.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"
#include "java.util.Set.h"

namespace java::awt::font{
class NumericShaper_S_Range : public java::lang::Enum<java::awt::font::NumericShaper_S_Range> {
protected:
private:
	static std::shared_ptr<std::vector<java::awt::font::NumericShaper_S_Range>> _S_VALUES;
	int base;
	int end;
	int start;
	NumericShaper_S_Range(std::shared_ptr<java::lang::String> var0,int var1,int base,int start,int end);
	int virtual getDigitBase();
	bool virtual inRange(int c);
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> indexToRange(int index);
	static std::shared_ptr<java::util::Set<java::awt::font::NumericShaper_S_Range>> maskToRangeSet(int mask);
	static int toRangeIndex(std::shared_ptr<java::awt::font::NumericShaper_S_Range> script);
	static int toRangeMask(std::shared_ptr<java::util::Set<java::awt::font::NumericShaper_S_Range>> ranges);
public:
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> ARABIC;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> BALINESE;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> BENGALI;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> CHAM;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> DEVANAGARI;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> EASTERN_ARABIC;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> ETHIOPIC;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> EUROPEAN;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> GUJARATI;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> GURMUKHI;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> JAVANESE;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> KANNADA;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> KAYAH_LI;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> KHMER;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> LAO;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> LEPCHA;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> LIMBU;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> MALAYALAM;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> MEETEI_MAYEK;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> MONGOLIAN;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> MYANMAR;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> MYANMAR_SHAN;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> NEW_TAI_LUE;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> NKO;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> OL_CHIKI;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> ORIYA;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> SAURASHTRA;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> SUNDANESE;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> TAI_THAM_HORA;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> TAI_THAM_THAM;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> TAMIL;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> TELUGU;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> THAI;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> TIBETAN;
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> VAI;
	static int _get0(std::shared_ptr<java::awt::font::NumericShaper_S_Range> _this);
	static int _get1(std::shared_ptr<java::awt::font::NumericShaper_S_Range> _this);
	static int _get2(std::shared_ptr<java::awt::font::NumericShaper_S_Range> _this);
	static bool _wrap0(std::shared_ptr<java::awt::font::NumericShaper_S_Range> _this,int c);
	static int _wrap1(std::shared_ptr<java::awt::font::NumericShaper_S_Range> _this);
	static int _wrap2(std::shared_ptr<java::awt::font::NumericShaper_S_Range> script);
	static int _wrap3(std::shared_ptr<java::util::Set> ranges);
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> _wrap4(int index);
	static std::shared_ptr<java::util::Set> _wrap5(int mask);
	static void static_cinit();
	NumericShaper_S_Range(std::shared_ptr<java::lang::String> enum_S_name,int enum_S_ordinal,int base,int start,int end,std::shared_ptr<java::awt::font::NumericShaper_S_Range> _this5);
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<java::awt::font::NumericShaper_S_Range> values();
	char virtual getNumericBase();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::awt::font::NumericShaper_S_Range::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~NumericShaper_S_Range(){
	}

}; // class NumericShaper_S_Range
}; // namespace java::awt::font

#endif //__java_awt_font_NumericShaper_S_Range__

