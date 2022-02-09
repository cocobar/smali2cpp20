// CPP L:\smali2cpp20\x64\Release\out\java\awt\font\TextAttribute.smali
#include "java2ctype.h"
#include "java.awt.font.TextAttribute.h"
#include "java.io.InvalidObjectException.h"
#include "java.lang.Boolean.h"
#include "java.lang.Class.h"
#include "java.lang.Float.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.AttributedCharacterIterator_S_Attribute.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"

static java::awt::font::TextAttribute::BACKGROUND;
static java::awt::font::TextAttribute::BIDI_EMBEDDING;
static java::awt::font::TextAttribute::CHAR_REPLACEMENT;
static java::awt::font::TextAttribute::FAMILY;
static java::awt::font::TextAttribute::FONT;
static java::awt::font::TextAttribute::FOREGROUND;
static java::awt::font::TextAttribute::INPUT_METHOD_HIGHLIGHT;
static java::awt::font::TextAttribute::INPUT_METHOD_UNDERLINE;
static java::awt::font::TextAttribute::JUSTIFICATION;
static java::awt::font::TextAttribute::JUSTIFICATION_FULL;
static java::awt::font::TextAttribute::JUSTIFICATION_NONE;
static java::awt::font::TextAttribute::KERNING;
static java::awt::font::TextAttribute::KERNING_ON;
static java::awt::font::TextAttribute::LIGATURES;
static java::awt::font::TextAttribute::LIGATURES_ON;
static java::awt::font::TextAttribute::NUMERIC_SHAPING;
static java::awt::font::TextAttribute::POSTURE;
static java::awt::font::TextAttribute::POSTURE_OBLIQUE;
static java::awt::font::TextAttribute::POSTURE_REGULAR;
static java::awt::font::TextAttribute::RUN_DIRECTION;
static java::awt::font::TextAttribute::RUN_DIRECTION_LTR;
static java::awt::font::TextAttribute::RUN_DIRECTION_RTL;
static java::awt::font::TextAttribute::SIZE;
static java::awt::font::TextAttribute::STRIKETHROUGH;
static java::awt::font::TextAttribute::STRIKETHROUGH_ON;
static java::awt::font::TextAttribute::SUPERSCRIPT;
static java::awt::font::TextAttribute::SUPERSCRIPT_SUB;
static java::awt::font::TextAttribute::SUPERSCRIPT_SUPER;
static java::awt::font::TextAttribute::SWAP_COLORS;
static java::awt::font::TextAttribute::SWAP_COLORS_ON;
static java::awt::font::TextAttribute::TRACKING;
static java::awt::font::TextAttribute::TRACKING_LOOSE;
static java::awt::font::TextAttribute::TRACKING_TIGHT;
static java::awt::font::TextAttribute::TRANSFORM;
static java::awt::font::TextAttribute::UNDERLINE;
static java::awt::font::TextAttribute::UNDERLINE_LOW_DASHED;
static java::awt::font::TextAttribute::UNDERLINE_LOW_DOTTED;
static java::awt::font::TextAttribute::UNDERLINE_LOW_GRAY;
static java::awt::font::TextAttribute::UNDERLINE_LOW_ONE_PIXEL;
static java::awt::font::TextAttribute::UNDERLINE_LOW_TWO_PIXEL;
static java::awt::font::TextAttribute::UNDERLINE_ON;
static java::awt::font::TextAttribute::WEIGHT;
static java::awt::font::TextAttribute::WEIGHT_BOLD;
static java::awt::font::TextAttribute::WEIGHT_DEMIBOLD;
static java::awt::font::TextAttribute::WEIGHT_DEMILIGHT;
static java::awt::font::TextAttribute::WEIGHT_EXTRABOLD;
static java::awt::font::TextAttribute::WEIGHT_EXTRA_LIGHT;
static java::awt::font::TextAttribute::WEIGHT_HEAVY;
static java::awt::font::TextAttribute::WEIGHT_LIGHT;
static java::awt::font::TextAttribute::WEIGHT_MEDIUM;
static java::awt::font::TextAttribute::WEIGHT_REGULAR;
static java::awt::font::TextAttribute::WEIGHT_SEMIBOLD;
static java::awt::font::TextAttribute::WEIGHT_ULTRABOLD;
static java::awt::font::TextAttribute::WIDTH;
static java::awt::font::TextAttribute::WIDTH_CONDENSED;
static java::awt::font::TextAttribute::WIDTH_EXTENDED;
static java::awt::font::TextAttribute::WIDTH_REGULAR;
static java::awt::font::TextAttribute::WIDTH_SEMI_CONDENSED;
static java::awt::font::TextAttribute::WIDTH_SEMI_EXTENDED;
static java::awt::font::TextAttribute::instanceMap;
static java::awt::font::TextAttribute::serialVersionUID = 0x6b789d8c0de80d46L;
// .method static constructor <clinit>()V
void java::awt::font::TextAttribute::static_cinit()
{
	
	float cVar0;
	float cVar1;
	float cVar2;
	float cVar3;
	int cVar4;
	std::shared_ptr<java::util::HashMap> cVar5;
	std::shared_ptr<java::awt::font::TextAttribute> cVar6;
	std::shared_ptr<java::awt::font::TextAttribute> cVar7;
	std::shared_ptr<java::awt::font::TextAttribute> cVar8;
	std::shared_ptr<java::awt::font::TextAttribute> cVar9;
	std::shared_ptr<java::awt::font::TextAttribute> cVar10;
	std::shared_ptr<java::awt::font::TextAttribute> cVar11;
	std::shared_ptr<java::awt::font::TextAttribute> cVar12;
	std::shared_ptr<java::awt::font::TextAttribute> cVar13;
	std::shared_ptr<java::awt::font::TextAttribute> cVar14;
	std::shared_ptr<java::awt::font::TextAttribute> cVar15;
	std::shared_ptr<java::awt::font::TextAttribute> cVar16;
	std::shared_ptr<java::awt::font::TextAttribute> cVar17;
	std::shared_ptr<java::awt::font::TextAttribute> cVar18;
	std::shared_ptr<java::awt::font::TextAttribute> cVar19;
	std::shared_ptr<java::awt::font::TextAttribute> cVar20;
	std::shared_ptr<java::awt::font::TextAttribute> cVar21;
	std::shared_ptr<java::awt::font::TextAttribute> cVar22;
	std::shared_ptr<java::awt::font::TextAttribute> cVar23;
	std::shared_ptr<java::awt::font::TextAttribute> cVar24;
	std::shared_ptr<java::awt::font::TextAttribute> cVar25;
	std::shared_ptr<java::awt::font::TextAttribute> cVar26;
	std::shared_ptr<java::awt::font::TextAttribute> cVar27;
	std::shared_ptr<java::awt::font::TextAttribute> cVar28;
	
	cVar0 = 0x3f600000;
	cVar1 = 0x3f400000;
	cVar2 = 0x0;
	cVar3 = 0x3f800000;
	cVar4 = 0x1;
	cVar5 = std::make_shared<java::util::HashMap>(0x1d);
	java::awt::font::TextAttribute::instanceMap = cVar5;
	cVar6 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("family")));
	java::awt::font::TextAttribute::FAMILY = cVar6;
	cVar7 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("weight")));
	java::awt::font::TextAttribute::WEIGHT = cVar7;
	java::awt::font::TextAttribute::WEIGHT_EXTRA_LIGHT = java::lang::Float::valueOf(0x3f000000);
	java::awt::font::TextAttribute::WEIGHT_LIGHT = java::lang::Float::valueOf(cVar1);
	java::awt::font::TextAttribute::WEIGHT_DEMILIGHT = java::lang::Float::valueOf(cVar0);
	java::awt::font::TextAttribute::WEIGHT_REGULAR = java::lang::Float::valueOf(cVar3);
	java::awt::font::TextAttribute::WEIGHT_SEMIBOLD = java::lang::Float::valueOf(0x3fa00000);
	java::awt::font::TextAttribute::WEIGHT_MEDIUM = java::lang::Float::valueOf(0x3fc00000);
	java::awt::font::TextAttribute::WEIGHT_DEMIBOLD = java::lang::Float::valueOf(0x3fe00000);
	java::awt::font::TextAttribute::WEIGHT_BOLD = java::lang::Float::valueOf(0x40000000);
	java::awt::font::TextAttribute::WEIGHT_HEAVY = java::lang::Float::valueOf(0x40100000);
	java::awt::font::TextAttribute::WEIGHT_EXTRABOLD = java::lang::Float::valueOf(0x40200000);
	java::awt::font::TextAttribute::WEIGHT_ULTRABOLD = java::lang::Float::valueOf(0x40300000);
	cVar8 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("width")));
	java::awt::font::TextAttribute::WIDTH = cVar8;
	java::awt::font::TextAttribute::WIDTH_CONDENSED = java::lang::Float::valueOf(cVar1);
	java::awt::font::TextAttribute::WIDTH_SEMI_CONDENSED = java::lang::Float::valueOf(cVar0);
	java::awt::font::TextAttribute::WIDTH_REGULAR = java::lang::Float::valueOf(cVar3);
	java::awt::font::TextAttribute::WIDTH_SEMI_EXTENDED = java::lang::Float::valueOf(0x3fa00000);
	java::awt::font::TextAttribute::WIDTH_EXTENDED = java::lang::Float::valueOf(0x3fc00000);
	cVar9 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("posture")));
	java::awt::font::TextAttribute::POSTURE = cVar9;
	java::awt::font::TextAttribute::POSTURE_REGULAR = java::lang::Float::valueOf(cVar2);
	java::awt::font::TextAttribute::POSTURE_OBLIQUE = java::lang::Float::valueOf(0x3e4ccccd);
	cVar10 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("size")));
	java::awt::font::TextAttribute::SIZE = cVar10;
	cVar11 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("transform")));
	java::awt::font::TextAttribute::TRANSFORM = cVar11;
	cVar12 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("superscript")));
	java::awt::font::TextAttribute::SUPERSCRIPT = cVar12;
	java::awt::font::TextAttribute::SUPERSCRIPT_SUPER = java::lang::Integer::valueOf(cVar4);
	java::awt::font::TextAttribute::SUPERSCRIPT_SUB = java::lang::Integer::valueOf(-0x1);
	cVar13 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("font")));
	java::awt::font::TextAttribute::FONT = cVar13;
	cVar14 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("char_replacement")));
	java::awt::font::TextAttribute::CHAR_REPLACEMENT = cVar14;
	cVar15 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("foreground")));
	java::awt::font::TextAttribute::FOREGROUND = cVar15;
	cVar16 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("background")));
	java::awt::font::TextAttribute::BACKGROUND = cVar16;
	cVar17 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("underline")));
	java::awt::font::TextAttribute::UNDERLINE = cVar17;
	java::awt::font::TextAttribute::UNDERLINE_ON = java::lang::Integer::valueOf(0x0);
	cVar18 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("strikethrough")));
	java::awt::font::TextAttribute::STRIKETHROUGH = cVar18;
	java::awt::font::TextAttribute::STRIKETHROUGH_ON = java::lang::Boolean::TRUE;
	cVar19 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("run_direction")));
	java::awt::font::TextAttribute::RUN_DIRECTION = cVar19;
	java::awt::font::TextAttribute::RUN_DIRECTION_LTR = java::lang::Boolean::FALSE;
	java::awt::font::TextAttribute::RUN_DIRECTION_RTL = java::lang::Boolean::TRUE;
	cVar20 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("bidi_embedding")));
	java::awt::font::TextAttribute::BIDI_EMBEDDING = cVar20;
	cVar21 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("justification")));
	java::awt::font::TextAttribute::JUSTIFICATION = cVar21;
	java::awt::font::TextAttribute::JUSTIFICATION_FULL = java::lang::Float::valueOf(cVar3);
	java::awt::font::TextAttribute::JUSTIFICATION_NONE = java::lang::Float::valueOf(cVar2);
	cVar22 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("input method highlight")));
	java::awt::font::TextAttribute::INPUT_METHOD_HIGHLIGHT = cVar22;
	cVar23 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("input method underline")));
	java::awt::font::TextAttribute::INPUT_METHOD_UNDERLINE = cVar23;
	java::awt::font::TextAttribute::UNDERLINE_LOW_ONE_PIXEL = java::lang::Integer::valueOf(cVar4);
	java::awt::font::TextAttribute::UNDERLINE_LOW_TWO_PIXEL = java::lang::Integer::valueOf(0x2);
	java::awt::font::TextAttribute::UNDERLINE_LOW_DOTTED = java::lang::Integer::valueOf(0x3);
	java::awt::font::TextAttribute::UNDERLINE_LOW_GRAY = java::lang::Integer::valueOf(0x4);
	java::awt::font::TextAttribute::UNDERLINE_LOW_DASHED = java::lang::Integer::valueOf(0x5);
	cVar24 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("swap_colors")));
	java::awt::font::TextAttribute::SWAP_COLORS = cVar24;
	java::awt::font::TextAttribute::SWAP_COLORS_ON = java::lang::Boolean::TRUE;
	cVar25 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("numeric_shaping")));
	java::awt::font::TextAttribute::NUMERIC_SHAPING = cVar25;
	cVar26 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("kerning")));
	java::awt::font::TextAttribute::KERNING = cVar26;
	java::awt::font::TextAttribute::KERNING_ON = java::lang::Integer::valueOf(cVar4);
	cVar27 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ligatures")));
	java::awt::font::TextAttribute::LIGATURES = cVar27;
	java::awt::font::TextAttribute::LIGATURES_ON = java::lang::Integer::valueOf(cVar4);
	cVar28 = std::make_shared<java::awt::font::TextAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("tracking")));
	java::awt::font::TextAttribute::TRACKING = cVar28;
	java::awt::font::TextAttribute::TRACKING_TIGHT = java::lang::Float::valueOf(-0x42dc28f6);
	java::awt::font::TextAttribute::TRACKING_LOOSE = java::lang::Float::valueOf(0x3d23d70a);
	return;

}
// .method protected constructor <init>(Ljava/lang/String;)V
java::awt::font::TextAttribute::TextAttribute(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	java::text::AttributedCharacterIterator_S_Attribute::(name);
	if ( this->getClass() != java::awt::font::TextAttribute() )
		goto label_cond_10;
	java::awt::font::TextAttribute::instanceMap->put(name, this);
label_cond_10:
	return;

}
// .method protected readResolve()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::awt::font::TextAttribute::readResolve()
{
	
	std::shared_ptr<java::io::InvalidObjectException> cVar0;
	std::shared_ptr<java::awt::font::TextAttribute> instance;
	std::shared_ptr<java::io::InvalidObjectException> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 748        value = {
	// 749            Ljava/io/InvalidObjectException;
	// 750        }
	// 751    .end annotation
	if ( this->getClass() == java::awt::font::TextAttribute() )
		goto label_cond_11;
	cVar0 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("subclass didn\'t correctly implement readResolve")));
	// throw
	throw cVar0;
	// 774    .line 123
label_cond_11:
	instance = java::awt::font::TextAttribute::instanceMap->get(this->getName());
	instance->checkCast("java::awt::font::TextAttribute");
	//    .local v0, "instance":Ljava/awt/font/TextAttribute;
	if ( !(instance) )  
		goto label_cond_20;
	return instance;
	// 795    .line 127
label_cond_20:
	cVar1 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unknown attribute name")));
	// throw
	throw cVar1;

}


