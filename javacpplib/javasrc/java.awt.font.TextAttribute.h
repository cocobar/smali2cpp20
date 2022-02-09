#ifndef __java_awt_font_TextAttribute__
#define __java_awt_font_TextAttribute__
// H L:\smali2cpp20\x64\Release\out\java\awt\font\TextAttribute.smali
#include "java2ctype.h"
#include "java.lang.Boolean.h"
#include "java.lang.Float.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.AttributedCharacterIterator_S_Attribute.h"
#include "java.util.Map.h"

namespace java::awt::font{
class TextAttribute : public java::text::AttributedCharacterIterator_S_Attribute {
protected:
	TextAttribute(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::Object> virtual readResolve();
private:
	static std::shared_ptr<java::util::Map<java::lang::String,java::awt::font::TextAttribute>> instanceMap;
public:
	static std::shared_ptr<java::awt::font::TextAttribute> BACKGROUND;
	static std::shared_ptr<java::awt::font::TextAttribute> BIDI_EMBEDDING;
	static std::shared_ptr<java::awt::font::TextAttribute> CHAR_REPLACEMENT;
	static std::shared_ptr<java::awt::font::TextAttribute> FAMILY;
	static std::shared_ptr<java::awt::font::TextAttribute> FONT;
	static std::shared_ptr<java::awt::font::TextAttribute> FOREGROUND;
	static std::shared_ptr<java::awt::font::TextAttribute> INPUT_METHOD_HIGHLIGHT;
	static std::shared_ptr<java::awt::font::TextAttribute> INPUT_METHOD_UNDERLINE;
	static std::shared_ptr<java::awt::font::TextAttribute> JUSTIFICATION;
	static std::shared_ptr<java::lang::Float> JUSTIFICATION_FULL;
	static std::shared_ptr<java::lang::Float> JUSTIFICATION_NONE;
	static std::shared_ptr<java::awt::font::TextAttribute> KERNING;
	static std::shared_ptr<java::lang::Integer> KERNING_ON;
	static std::shared_ptr<java::awt::font::TextAttribute> LIGATURES;
	static std::shared_ptr<java::lang::Integer> LIGATURES_ON;
	static std::shared_ptr<java::awt::font::TextAttribute> NUMERIC_SHAPING;
	static std::shared_ptr<java::awt::font::TextAttribute> POSTURE;
	static std::shared_ptr<java::lang::Float> POSTURE_OBLIQUE;
	static std::shared_ptr<java::lang::Float> POSTURE_REGULAR;
	static std::shared_ptr<java::awt::font::TextAttribute> RUN_DIRECTION;
	static std::shared_ptr<java::lang::Boolean> RUN_DIRECTION_LTR;
	static std::shared_ptr<java::lang::Boolean> RUN_DIRECTION_RTL;
	static std::shared_ptr<java::awt::font::TextAttribute> SIZE;
	static std::shared_ptr<java::awt::font::TextAttribute> STRIKETHROUGH;
	static std::shared_ptr<java::lang::Boolean> STRIKETHROUGH_ON;
	static std::shared_ptr<java::awt::font::TextAttribute> SUPERSCRIPT;
	static std::shared_ptr<java::lang::Integer> SUPERSCRIPT_SUB;
	static std::shared_ptr<java::lang::Integer> SUPERSCRIPT_SUPER;
	static std::shared_ptr<java::awt::font::TextAttribute> SWAP_COLORS;
	static std::shared_ptr<java::lang::Boolean> SWAP_COLORS_ON;
	static std::shared_ptr<java::awt::font::TextAttribute> TRACKING;
	static std::shared_ptr<java::lang::Float> TRACKING_LOOSE;
	static std::shared_ptr<java::lang::Float> TRACKING_TIGHT;
	static std::shared_ptr<java::awt::font::TextAttribute> TRANSFORM;
	static std::shared_ptr<java::awt::font::TextAttribute> UNDERLINE;
	static std::shared_ptr<java::lang::Integer> UNDERLINE_LOW_DASHED;
	static std::shared_ptr<java::lang::Integer> UNDERLINE_LOW_DOTTED;
	static std::shared_ptr<java::lang::Integer> UNDERLINE_LOW_GRAY;
	static std::shared_ptr<java::lang::Integer> UNDERLINE_LOW_ONE_PIXEL;
	static std::shared_ptr<java::lang::Integer> UNDERLINE_LOW_TWO_PIXEL;
	static std::shared_ptr<java::lang::Integer> UNDERLINE_ON;
	static std::shared_ptr<java::awt::font::TextAttribute> WEIGHT;
	static std::shared_ptr<java::lang::Float> WEIGHT_BOLD;
	static std::shared_ptr<java::lang::Float> WEIGHT_DEMIBOLD;
	static std::shared_ptr<java::lang::Float> WEIGHT_DEMILIGHT;
	static std::shared_ptr<java::lang::Float> WEIGHT_EXTRABOLD;
	static std::shared_ptr<java::lang::Float> WEIGHT_EXTRA_LIGHT;
	static std::shared_ptr<java::lang::Float> WEIGHT_HEAVY;
	static std::shared_ptr<java::lang::Float> WEIGHT_LIGHT;
	static std::shared_ptr<java::lang::Float> WEIGHT_MEDIUM;
	static std::shared_ptr<java::lang::Float> WEIGHT_REGULAR;
	static std::shared_ptr<java::lang::Float> WEIGHT_SEMIBOLD;
	static std::shared_ptr<java::lang::Float> WEIGHT_ULTRABOLD;
	static std::shared_ptr<java::awt::font::TextAttribute> WIDTH;
	static std::shared_ptr<java::lang::Float> WIDTH_CONDENSED;
	static std::shared_ptr<java::lang::Float> WIDTH_EXTENDED;
	static std::shared_ptr<java::lang::Float> WIDTH_REGULAR;
	static std::shared_ptr<java::lang::Float> WIDTH_SEMI_CONDENSED;
	static std::shared_ptr<java::lang::Float> WIDTH_SEMI_EXTENDED;
	static long long serialVersionUID;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::awt::font::TextAttribute::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TextAttribute(){
	}

}; // class TextAttribute
}; // namespace java::awt::font

#endif //__java_awt_font_TextAttribute__

