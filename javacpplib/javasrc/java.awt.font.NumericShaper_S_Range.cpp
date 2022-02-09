// CPP L:\smali2cpp20\x64\Release\out\java\awt\font\NumericShaper$Range.smali
#include "java2ctype.h"
#include "java.awt.font.NumericShaper_S_Range_S_1.h"
#include "java.awt.font.NumericShaper_S_Range.h"
#include "java.lang.Enum.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.EnumSet.h"
#include "java.util.Iterator.h"
#include "java.util.Set.h"

static java::awt::font::NumericShaper_S_Range::_S_VALUES;
static java::awt::font::NumericShaper_S_Range::ARABIC;
static java::awt::font::NumericShaper_S_Range::BALINESE;
static java::awt::font::NumericShaper_S_Range::BENGALI;
static java::awt::font::NumericShaper_S_Range::CHAM;
static java::awt::font::NumericShaper_S_Range::DEVANAGARI;
static java::awt::font::NumericShaper_S_Range::EASTERN_ARABIC;
static java::awt::font::NumericShaper_S_Range::ETHIOPIC;
static java::awt::font::NumericShaper_S_Range::EUROPEAN;
static java::awt::font::NumericShaper_S_Range::GUJARATI;
static java::awt::font::NumericShaper_S_Range::GURMUKHI;
static java::awt::font::NumericShaper_S_Range::JAVANESE;
static java::awt::font::NumericShaper_S_Range::KANNADA;
static java::awt::font::NumericShaper_S_Range::KAYAH_LI;
static java::awt::font::NumericShaper_S_Range::KHMER;
static java::awt::font::NumericShaper_S_Range::LAO;
static java::awt::font::NumericShaper_S_Range::LEPCHA;
static java::awt::font::NumericShaper_S_Range::LIMBU;
static java::awt::font::NumericShaper_S_Range::MALAYALAM;
static java::awt::font::NumericShaper_S_Range::MEETEI_MAYEK;
static java::awt::font::NumericShaper_S_Range::MONGOLIAN;
static java::awt::font::NumericShaper_S_Range::MYANMAR;
static java::awt::font::NumericShaper_S_Range::MYANMAR_SHAN;
static java::awt::font::NumericShaper_S_Range::NEW_TAI_LUE;
static java::awt::font::NumericShaper_S_Range::NKO;
static java::awt::font::NumericShaper_S_Range::OL_CHIKI;
static java::awt::font::NumericShaper_S_Range::ORIYA;
static java::awt::font::NumericShaper_S_Range::SAURASHTRA;
static java::awt::font::NumericShaper_S_Range::SUNDANESE;
static java::awt::font::NumericShaper_S_Range::TAI_THAM_HORA;
static java::awt::font::NumericShaper_S_Range::TAI_THAM_THAM;
static java::awt::font::NumericShaper_S_Range::TAMIL;
static java::awt::font::NumericShaper_S_Range::TELUGU;
static java::awt::font::NumericShaper_S_Range::THAI;
static java::awt::font::NumericShaper_S_Range::TIBETAN;
static java::awt::font::NumericShaper_S_Range::VAI;
// .method static synthetic -get0(Ljava/awt/font/NumericShaper$Range;)I
int java::awt::font::NumericShaper_S_Range::_get0(std::shared_ptr<java::awt::font::NumericShaper_S_Range> _this)
{
	
	//    .param p0, "-this"    # Ljava/awt/font/NumericShaper$Range;
	return _this->base;

}
// .method static synthetic -get1(Ljava/awt/font/NumericShaper$Range;)I
int java::awt::font::NumericShaper_S_Range::_get1(std::shared_ptr<java::awt::font::NumericShaper_S_Range> _this)
{
	
	//    .param p0, "-this"    # Ljava/awt/font/NumericShaper$Range;
	return _this->end;

}
// .method static synthetic -get2(Ljava/awt/font/NumericShaper$Range;)I
int java::awt::font::NumericShaper_S_Range::_get2(std::shared_ptr<java::awt::font::NumericShaper_S_Range> _this)
{
	
	//    .param p0, "-this"    # Ljava/awt/font/NumericShaper$Range;
	return _this->start;

}
// .method static synthetic -wrap0(Ljava/awt/font/NumericShaper$Range;I)Z
bool java::awt::font::NumericShaper_S_Range::_wrap0(std::shared_ptr<java::awt::font::NumericShaper_S_Range> _this,int c)
{
	
	//    .param p0, "-this"    # Ljava/awt/font/NumericShaper$Range;
	//    .param p1, "c"    # I
	return _this->inRange(c);

}
// .method static synthetic -wrap1(Ljava/awt/font/NumericShaper$Range;)I
int java::awt::font::NumericShaper_S_Range::_wrap1(std::shared_ptr<java::awt::font::NumericShaper_S_Range> _this)
{
	
	//    .param p0, "-this"    # Ljava/awt/font/NumericShaper$Range;
	return _this->getDigitBase();

}
// .method static synthetic -wrap2(Ljava/awt/font/NumericShaper$Range;)I
int java::awt::font::NumericShaper_S_Range::_wrap2(std::shared_ptr<java::awt::font::NumericShaper_S_Range> script)
{
	
	//    .param p0, "script"    # Ljava/awt/font/NumericShaper$Range;
	return java::awt::font::NumericShaper_S_Range::toRangeIndex(script);

}
// .method static synthetic -wrap3(Ljava/util/Set;)I
int java::awt::font::NumericShaper_S_Range::_wrap3(std::shared_ptr<java::util::Set> ranges)
{
	
	//    .param p0, "ranges"    # Ljava/util/Set;
	return java::awt::font::NumericShaper_S_Range::toRangeMask(ranges);

}
// .method static synthetic -wrap4(I)Ljava/awt/font/NumericShaper$Range;
std::shared_ptr<java::awt::font::NumericShaper_S_Range> java::awt::font::NumericShaper_S_Range::_wrap4(int index)
{
	
	//    .param p0, "index"    # I
	return java::awt::font::NumericShaper_S_Range::indexToRange(index);

}
// .method static synthetic -wrap5(I)Ljava/util/Set;
std::shared_ptr<java::util::Set> java::awt::font::NumericShaper_S_Range::_wrap5(int mask)
{
	
	//    .param p0, "mask"    # I
	return java::awt::font::NumericShaper_S_Range::maskToRangeSet(mask);

}
// .method static constructor <clinit>()V
void java::awt::font::NumericShaper_S_Range::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar5;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar6;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar7;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar8;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar9;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar10;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar11;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar12;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar13;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar14;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar15;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar16;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar17;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar18;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar19;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar20;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range_S_1> cVar21;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar22;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar23;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar24;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar25;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar26;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar27;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar28;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar29;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar30;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar31;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar32;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar33;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar34;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar35;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar36;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar37;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar38;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar39;
	std::shared<std::vector<std::vector<java::awt::font::NumericShaper_S_Range>>> cVar40;
	
	cVar0 = 0x1;
	cVar1 = 0x1c50;
	cVar2 = 0x1000;
	cVar3 = 0xb80;
	cVar4 = 0x0;
	cVar5 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("EUROPEAN")), cVar4, 0x30, cVar4, 0x300);
	java::awt::font::NumericShaper_S_Range::EUROPEAN = cVar5;
	cVar6 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ARABIC")), cVar0, 0x660, 0x600, 0x780);
	java::awt::font::NumericShaper_S_Range::ARABIC = cVar6;
	cVar7 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("EASTERN_ARABIC")), 0x2, 0x6f0, 0x600, 0x780);
	java::awt::font::NumericShaper_S_Range::EASTERN_ARABIC = cVar7;
	cVar8 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DEVANAGARI")), 0x3, 0x966, 0x900, 0x980);
	java::awt::font::NumericShaper_S_Range::DEVANAGARI = cVar8;
	cVar9 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BENGALI")), 0x4, 0x9e6, 0x980, 0xa00);
	java::awt::font::NumericShaper_S_Range::BENGALI = cVar9;
	cVar10 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GURMUKHI")), 0x5, 0xa66, 0xa00, 0xa80);
	java::awt::font::NumericShaper_S_Range::GURMUKHI = cVar10;
	cVar11 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GUJARATI")), 0x6, 0xae6, 0xb00, cVar3);
	java::awt::font::NumericShaper_S_Range::GUJARATI = cVar11;
	cVar12 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ORIYA")), 0x7, 0xb66, 0xb00, cVar3);
	java::awt::font::NumericShaper_S_Range::ORIYA = cVar12;
	cVar13 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TAMIL")), 0x8, 0xbe6, cVar3, 0xc00);
	java::awt::font::NumericShaper_S_Range::TAMIL = cVar13;
	cVar14 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TELUGU")), 0x9, 0xc66, 0xc00, 0xc80);
	java::awt::font::NumericShaper_S_Range::TELUGU = cVar14;
	cVar15 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("KANNADA")), 0xa, 0xce6, 0xc80, 0xd00);
	java::awt::font::NumericShaper_S_Range::KANNADA = cVar15;
	cVar16 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MALAYALAM")), 0xb, 0xd66, 0xd00, 0xd80);
	java::awt::font::NumericShaper_S_Range::MALAYALAM = cVar16;
	cVar17 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("THAI")), 0xc, 0xe50, 0xe00, 0xe80);
	java::awt::font::NumericShaper_S_Range::THAI = cVar17;
	cVar18 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAO")), 0xd, 0xed0, 0xe80, 0xf00);
	java::awt::font::NumericShaper_S_Range::LAO = cVar18;
	cVar19 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TIBETAN")), 0xe, 0xf20, 0xf00, cVar2);
	java::awt::font::NumericShaper_S_Range::TIBETAN = cVar19;
	cVar20 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MYANMAR")), 0xf, 0x1040, cVar2, 0x1080);
	java::awt::font::NumericShaper_S_Range::MYANMAR = cVar20;
	cVar21 = std::make_shared<java::awt::font::NumericShaper_S_Range_S_1>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ETHIOPIC")), 0x10, 0x1369, 0x1200, 0x1380);
	java::awt::font::NumericShaper_S_Range::ETHIOPIC = cVar21;
	cVar22 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("KHMER")), 0x11, 0x17e0, 0x1780, 0x1800);
	java::awt::font::NumericShaper_S_Range::KHMER = cVar22;
	cVar23 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MONGOLIAN")), 0x12, 0x1810, 0x1800, 0x1900);
	java::awt::font::NumericShaper_S_Range::MONGOLIAN = cVar23;
	cVar24 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NKO")), 0x13, 0x7c0, 0x7c0, 0x800);
	java::awt::font::NumericShaper_S_Range::NKO = cVar24;
	cVar25 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MYANMAR_SHAN")), 0x14, 0x1090, cVar2, 0x10a0);
	java::awt::font::NumericShaper_S_Range::MYANMAR_SHAN = cVar25;
	cVar26 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LIMBU")), 0x15, 0x1946, 0x1900, 0x1950);
	java::awt::font::NumericShaper_S_Range::LIMBU = cVar26;
	cVar27 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NEW_TAI_LUE")), 0x16, 0x19d0, 0x1980, 0x19e0);
	java::awt::font::NumericShaper_S_Range::NEW_TAI_LUE = cVar27;
	cVar28 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BALINESE")), 0x17, 0x1b50, 0x1b00, 0x1b80);
	java::awt::font::NumericShaper_S_Range::BALINESE = cVar28;
	cVar29 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SUNDANESE")), 0x18, 0x1bb0, 0x1b80, 0x1bc0);
	java::awt::font::NumericShaper_S_Range::SUNDANESE = cVar29;
	cVar30 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LEPCHA")), 0x19, 0x1c40, 0x1c00, cVar1);
	java::awt::font::NumericShaper_S_Range::LEPCHA = cVar30;
	cVar31 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("OL_CHIKI")), 0x1a, cVar1, cVar1, 0x1c80);
	java::awt::font::NumericShaper_S_Range::OL_CHIKI = cVar31;
	cVar32 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("VAI")), 0x1b, 0xa620, 0xa500, 0xa640);
	java::awt::font::NumericShaper_S_Range::VAI = cVar32;
	cVar33 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SAURASHTRA")), 0x1c, 0xa8d0, 0xa880, 0xa8e0);
	java::awt::font::NumericShaper_S_Range::SAURASHTRA = cVar33;
	cVar34 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("KAYAH_LI")), 0x1d, 0xa900, 0xa900, 0xa930);
	java::awt::font::NumericShaper_S_Range::KAYAH_LI = cVar34;
	cVar35 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CHAM")), 0x1e, 0xaa50, 0xaa00, 0xaa60);
	java::awt::font::NumericShaper_S_Range::CHAM = cVar35;
	cVar36 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TAI_THAM_HORA")), 0x1f, 0x1a80, 0x1a20, 0x1ab0);
	java::awt::font::NumericShaper_S_Range::TAI_THAM_HORA = cVar36;
	cVar37 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TAI_THAM_THAM")), 0x20, 0x1a90, 0x1a20, 0x1ab0);
	java::awt::font::NumericShaper_S_Range::TAI_THAM_THAM = cVar37;
	cVar38 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("JAVANESE")), 0x21, 0xa9d0, 0xa980, 0xa9e0);
	java::awt::font::NumericShaper_S_Range::JAVANESE = cVar38;
	cVar39 = std::make_shared<java::awt::font::NumericShaper_S_Range>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MEETEI_MAYEK")), 0x22, 0xabf0, 0xabc0, 0xac00);
	java::awt::font::NumericShaper_S_Range::MEETEI_MAYEK = cVar39;
	cVar40 = std::make_shared<std::vector<std::vector<java::awt::font::NumericShaper_S_Range>>>(0x23);
	cVar40[cVar4] = java::awt::font::NumericShaper_S_Range::EUROPEAN;
	cVar40[cVar0] = java::awt::font::NumericShaper_S_Range::ARABIC;
	cVar40[0x2] = java::awt::font::NumericShaper_S_Range::EASTERN_ARABIC;
	cVar40[0x3] = java::awt::font::NumericShaper_S_Range::DEVANAGARI;
	cVar40[0x4] = java::awt::font::NumericShaper_S_Range::BENGALI;
	cVar40[0x5] = java::awt::font::NumericShaper_S_Range::GURMUKHI;
	cVar40[0x6] = java::awt::font::NumericShaper_S_Range::GUJARATI;
	cVar40[0x7] = java::awt::font::NumericShaper_S_Range::ORIYA;
	cVar40[0x8] = java::awt::font::NumericShaper_S_Range::TAMIL;
	cVar40[0x9] = java::awt::font::NumericShaper_S_Range::TELUGU;
	cVar40[0xa] = java::awt::font::NumericShaper_S_Range::KANNADA;
	cVar40[0xb] = java::awt::font::NumericShaper_S_Range::MALAYALAM;
	cVar40[0xc] = java::awt::font::NumericShaper_S_Range::THAI;
	cVar40[0xd] = java::awt::font::NumericShaper_S_Range::LAO;
	cVar40[0xe] = java::awt::font::NumericShaper_S_Range::TIBETAN;
	cVar40[0xf] = java::awt::font::NumericShaper_S_Range::MYANMAR;
	cVar40[0x10] = java::awt::font::NumericShaper_S_Range::ETHIOPIC;
	cVar40[0x11] = java::awt::font::NumericShaper_S_Range::KHMER;
	cVar40[0x12] = java::awt::font::NumericShaper_S_Range::MONGOLIAN;
	cVar40[0x13] = java::awt::font::NumericShaper_S_Range::NKO;
	cVar40[0x14] = java::awt::font::NumericShaper_S_Range::MYANMAR_SHAN;
	cVar40[0x15] = java::awt::font::NumericShaper_S_Range::LIMBU;
	cVar40[0x16] = java::awt::font::NumericShaper_S_Range::NEW_TAI_LUE;
	cVar40[0x17] = java::awt::font::NumericShaper_S_Range::BALINESE;
	cVar40[0x18] = java::awt::font::NumericShaper_S_Range::SUNDANESE;
	cVar40[0x19] = java::awt::font::NumericShaper_S_Range::LEPCHA;
	cVar40[0x1a] = java::awt::font::NumericShaper_S_Range::OL_CHIKI;
	cVar40[0x1b] = java::awt::font::NumericShaper_S_Range::VAI;
	cVar40[0x1c] = java::awt::font::NumericShaper_S_Range::SAURASHTRA;
	cVar40[0x1d] = java::awt::font::NumericShaper_S_Range::KAYAH_LI;
	cVar40[0x1e] = java::awt::font::NumericShaper_S_Range::CHAM;
	cVar40[0x1f] = java::awt::font::NumericShaper_S_Range::TAI_THAM_HORA;
	cVar40[0x20] = java::awt::font::NumericShaper_S_Range::TAI_THAM_THAM;
	cVar40[0x21] = java::awt::font::NumericShaper_S_Range::JAVANESE;
	cVar40[0x22] = java::awt::font::NumericShaper_S_Range::MEETEI_MAYEK;
	java::awt::font::NumericShaper_S_Range::_S_VALUES = cVar40;
	return;

}
// .method private constructor <init>(Ljava/lang/String;IIII)V
java::awt::font::NumericShaper_S_Range::NumericShaper_S_Range(std::shared_ptr<java::lang::String> var0,int var1,int base,int start,int end)
{
	
	//    .param p3, "base"    # I
	//    .param p4, "start"    # I
	//    .param p5, "end"    # I
	java::lang::Enum::(var0, var1);
	this->base = (base - ( this->getNumericBase() + 0x30));
	this->start = start;
	this->end = end;
	return;

}
// .method synthetic constructor <init>(Ljava/lang/String;IIIILjava/awt/font/NumericShaper$Range;)V
java::awt::font::NumericShaper_S_Range::NumericShaper_S_Range(std::shared_ptr<java::lang::String> enum_S_name,int enum_S_ordinal,int base,int start,int end,std::shared_ptr<java::awt::font::NumericShaper_S_Range> _this5)
{
	
	//    .param p1, "enum$name"    # Ljava/lang/String;
	//    .param p2, "enum$ordinal"    # I
	//    .param p3, "base"    # I
	//    .param p4, "start"    # I
	//    .param p5, "end"    # I
	//    .param p6, "-this5"    # Ljava/awt/font/NumericShaper$Range;
	java::awt::font::NumericShaper_S_Range::(enum_S_name, enum_S_ordinal, base, start, end);
	return;

}
// .method private getDigitBase()I
int java::awt::font::NumericShaper_S_Range::getDigitBase()
{
	
	return this->base;

}
// .method private inRange(I)Z
bool java::awt::font::NumericShaper_S_Range::inRange(int c)
{
	
	bool cVar1;
	
	//    .param p1, "c"    # I
	cVar1 = 0x0;
	if ( this->start >  c )
		goto label_cond_a;
	if ( c >= this->end )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method private static indexToRange(I)Ljava/awt/font/NumericShaper$Range;
std::shared_ptr<java::awt::font::NumericShaper_S_Range> java::awt::font::NumericShaper_S_Range::indexToRange(int index)
{
	
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar0;
	
	//    .param p0, "index"    # I
	if ( index >= 0x13 )
		goto label_cond_b;
	cVar0 = java::awt::font::NumericShaper_S_Range::values({const[class].FS-Param})[index];
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method private static maskToRangeSet(I)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::awt::font::NumericShaper_S_Range>> java::awt::font::NumericShaper_S_Range::maskToRangeSet(int mask)
{
	
	std::shared_ptr<java::util::Set> set;
	int i;
	
	//    .param p0, "mask"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 1253        value = {
	// 1254            "(I)",
	// 1255            "Ljava/util/Set",
	// 1256            "<",
	// 1257            "Ljava/awt/font/NumericShaper$Range;",
	// 1258            ">;"
	// 1259        }
	// 1260    .end annotation
	set = java::util::EnumSet::noneOf(java::awt::font::NumericShaper_S_Range());
	//    .local v2, "set":Ljava/util/Set;, "Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;"
	//    .local v0, "a":[Ljava/awt/font/NumericShaper$Range;
	i = 0x0;
	//    .local v1, "i":I
label_goto_b:
	if ( i >= 0x13 )
		goto label_cond_1c;
	if ( !(((0x1 << i) &  mask)) )  
		goto label_cond_19;
	set->add(java::awt::font::NumericShaper_S_Range::values({const[class].FS-Param})[i]);
label_cond_19:
	i = ( i + 0x1);
	goto label_goto_b;
	// 1306    .line 342
label_cond_1c:
	return set;

}
// .method private static toRangeIndex(Ljava/awt/font/NumericShaper$Range;)I
int java::awt::font::NumericShaper_S_Range::toRangeIndex(std::shared_ptr<java::awt::font::NumericShaper_S_Range> script)
{
	
	int index;
	
	//    .param p0, "script"    # Ljava/awt/font/NumericShaper$Range;
	index = script->ordinal();
	//    .local v0, "index":I
	if ( index >= 0x13 )
		goto label_cond_9;
	//    .end local v0    # "index":I
label_goto_8:
	return index;
	// 1331    .restart local v0    # "index":I
label_cond_9:
	index = -0x1;
	goto label_goto_8;

}
// .method private static toRangeMask(Ljava/util/Set;)I
int java::awt::font::NumericShaper_S_Range::toRangeMask(std::shared_ptr<java::util::Set<java::awt::font::NumericShaper_S_Range>> ranges)
{
	
	int m;
	std::shared_ptr<java::util::Iterator> range_S_iterator;
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> range;
	int index;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1341        value = {
	// 1342            "(",
	// 1343            "Ljava/util/Set",
	// 1344            "<",
	// 1345            "Ljava/awt/font/NumericShaper$Range;",
	// 1346            ">;)I"
	// 1347        }
	// 1348    .end annotation
	//    .local p0, "ranges":Ljava/util/Set;, "Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;"
	m = 0x0;
	//    .local v1, "m":I
	range_S_iterator = ranges->iterator();
	//    .local v3, "range$iterator":Ljava/util/Iterator;
label_cond_5:
label_goto_5:
	if ( !(range_S_iterator->hasNext()) )  
		goto label_cond_1d;
	range = range_S_iterator->next();
	range->checkCast("java::awt::font::NumericShaper_S_Range");
	//    .local v2, "range":Ljava/awt/font/NumericShaper$Range;
	index = range->ordinal();
	//    .local v0, "index":I
	if ( index >= 0x13 )
		goto label_cond_5;
	m = (m |  (0x1 << index));
	goto label_goto_5;
	// 1397    .line 331
	// 1398    .end local v0    # "index":I
	// 1399    .end local v2    # "range":Ljava/awt/font/NumericShaper$Range;
label_cond_1d:
	return m;

}
// .method public static valueOf(Ljava/lang/String;)Ljava/awt/font/NumericShaper$Range;
std::shared_ptr<java::awt::font::NumericShaper_S_Range> java::awt::font::NumericShaper_S_Range::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::awt::font::NumericShaper_S_Range> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(java::awt::font::NumericShaper_S_Range(), name);
	cVar0->checkCast("java::awt::font::NumericShaper_S_Range");
	return cVar0;

}
// .method public static values()[Ljava/awt/font/NumericShaper$Range;
std::shared_ptr<java::awt::font::NumericShaper_S_Range> java::awt::font::NumericShaper_S_Range::values()
{
	
	return java::awt::font::NumericShaper_S_Range::_S_VALUES;

}
// .method getNumericBase()C
char java::awt::font::NumericShaper_S_Range::getNumericBase()
{
	
	return 0x0;

}


