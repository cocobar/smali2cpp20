// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BidiTransform.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.ArabicShaping.h"
#include "android.icu.text.ArabicShapingException.h"
#include "android.icu.text.Bidi.h"
#include "android.icu.text.BidiTransform_S_Mirroring.h"
#include "android.icu.text.BidiTransform_S_Order.h"
#include "android.icu.text.BidiTransform_S_ReorderingScheme.h"
#include "android.icu.text.BidiTransform.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

// .method static synthetic -wrap0(B)Z
bool android::icu::text::BidiTransform::_wrap0(unsigned char level)
{
	
	//    .param p0, "level"    # B
	return android::icu::text::BidiTransform::IsLTR(level);

}
// .method static synthetic -wrap1(Landroid/icu/text/BidiTransform$Order;)Z
bool android::icu::text::BidiTransform::_wrap1(std::shared_ptr<android::icu::text::BidiTransform_S_Order> order)
{
	
	//    .param p0, "order"    # Landroid/icu/text/BidiTransform$Order;
	return android::icu::text::BidiTransform::IsLogical(order);

}
// .method static synthetic -wrap2(B)Z
bool android::icu::text::BidiTransform::_wrap2(unsigned char level)
{
	
	//    .param p0, "level"    # B
	return android::icu::text::BidiTransform::IsRTL(level);

}
// .method static synthetic -wrap3(Landroid/icu/text/BidiTransform$Order;)Z
bool android::icu::text::BidiTransform::_wrap3(std::shared_ptr<android::icu::text::BidiTransform_S_Order> order)
{
	
	//    .param p0, "order"    # Landroid/icu/text/BidiTransform$Order;
	return android::icu::text::BidiTransform::IsVisual(order);

}
// .method static synthetic -wrap4(Landroid/icu/text/BidiTransform;)V
void android::icu::text::BidiTransform::_wrap4(std::shared_ptr<android::icu::text::BidiTransform> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/BidiTransform;
	_this->mirror();
	return;

}
// .method static synthetic -wrap5(Landroid/icu/text/BidiTransform;)V
void android::icu::text::BidiTransform::_wrap5(std::shared_ptr<android::icu::text::BidiTransform> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/BidiTransform;
	_this->reorder();
	return;

}
// .method static synthetic -wrap6(Landroid/icu/text/BidiTransform;BI)V
void android::icu::text::BidiTransform::_wrap6(std::shared_ptr<android::icu::text::BidiTransform> _this,unsigned char level,int options)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/BidiTransform;
	//    .param p1, "level"    # B
	//    .param p2, "options"    # I
	_this->resolve(level, options);
	return;

}
// .method static synthetic -wrap7(Landroid/icu/text/BidiTransform;)V
void android::icu::text::BidiTransform::_wrap7(std::shared_ptr<android::icu::text::BidiTransform> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/BidiTransform;
	_this->reverse();
	return;

}
// .method static synthetic -wrap8(Landroid/icu/text/BidiTransform;II)V
void android::icu::text::BidiTransform::_wrap8(std::shared_ptr<android::icu::text::BidiTransform> _this,int digitsDir,int lettersDir)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/BidiTransform;
	//    .param p1, "digitsDir"    # I
	//    .param p2, "lettersDir"    # I
	_this->shapeArabic(digitsDir, lettersDir);
	return;

}
// .method public constructor <init>()V
android::icu::text::BidiTransform::BidiTransform()
{
	
	// 134    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static IsLTR(B)Z
bool android::icu::text::BidiTransform::IsLTR(unsigned char level)
{
	
	bool cVar1;
	
	//    .param p0, "level"    # B
	cVar1 = 0x0;
	if ( ( level & 0x1) )     
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method private static IsLogical(Landroid/icu/text/BidiTransform$Order;)Z
bool android::icu::text::BidiTransform::IsLogical(std::shared_ptr<android::icu::text::BidiTransform_S_Order> order)
{
	
	//    .param p0, "order"    # Landroid/icu/text/BidiTransform$Order;
	return android::icu::text::BidiTransform_S_Order::LOGICAL->equals(order);

}
// .method private static IsRTL(B)Z
bool android::icu::text::BidiTransform::IsRTL(unsigned char level)
{
	
	bool cVar0;
	
	//    .param p0, "level"    # B
	cVar0 = 0x1;
	if ( ( level & 0x1) != cVar0 )
		goto label_cond_6;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method private static IsVisual(Landroid/icu/text/BidiTransform$Order;)Z
bool android::icu::text::BidiTransform::IsVisual(std::shared_ptr<android::icu::text::BidiTransform_S_Order> order)
{
	
	//    .param p0, "order"    # Landroid/icu/text/BidiTransform$Order;
	return android::icu::text::BidiTransform_S_Order::VISUAL->equals(order);

}
// .method private findMatchingScheme(BLandroid/icu/text/BidiTransform$Order;BLandroid/icu/text/BidiTransform$Order;)Landroid/icu/text/BidiTransform$ReorderingScheme;
std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> android::icu::text::BidiTransform::findMatchingScheme(unsigned char inLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> inOrder,unsigned char outLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> outOrder)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> scheme;
	
	//    .param p1, "inLevel"    # B
	//    .param p2, "inOrder"    # Landroid/icu/text/BidiTransform$Order;
	//    .param p3, "outLevel"    # B
	//    .param p4, "outOrder"    # Landroid/icu/text/BidiTransform$Order;
	cVar0 = android::icu::text::BidiTransform_S_ReorderingScheme::values({const[class].FS-Param});
	cVar1 = 0x0;
label_goto_6:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_14;
	scheme = cVar0[cVar1];
	//    .local v0, "scheme":Landroid/icu/text/BidiTransform$ReorderingScheme;
	if ( !(scheme->matches(inLevel, inOrder, outLevel, outOrder)) )  
		goto label_cond_11;
	return scheme;
	// 242    .line 284
label_cond_11:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_6;
	// 248    .line 289
	// 249    .end local v0    # "scheme":Landroid/icu/text/BidiTransform$ReorderingScheme;
label_cond_14:
	return 0x0;

}
// .method private mirror()V
void android::icu::text::BidiTransform::mirror()
{
	
	std::shared_ptr<java::lang::StringBuffer> sb;
	auto levels;
	int i;
	int ch;
	
	if ( ( this->reorderingOptions & 0x2) )     
		goto label_cond_7;
	return;
	// 270    .line 328
label_cond_7:
	sb = std::make_shared<java::lang::StringBuffer>(this->text);
	//    .local v4, "sb":Ljava/lang/StringBuffer;
	levels = this->bidi->getLevels();
	//    .local v2, "levels":[B
	i = 0x0;
	//    .local v1, "i":I
	//    .local v3, "n":I
label_goto_16:
	if ( i >= levels->size() )
		goto label_cond_2f;
	ch = android::icu::text::UTF16::charAt(sb, i);
	//    .local v0, "ch":I
	if ( !(( levels[i] & 0x1)) )  
		goto label_cond_29;
	android::icu::text::UTF16::setCharAt(sb, i, android::icu::lang::UCharacter::getMirror(ch));
label_cond_29:
	i = (i +  android::icu::text::UTF16::getCharCount(ch));
	goto label_goto_16;
	// 327    .line 337
	// 328    .end local v0    # "ch":I
label_cond_2f:
	this->text = sb->toString();
	this->reorderingOptions = ( this->reorderingOptions & -0x3);
	return;

}
// .method private reorder()V
void android::icu::text::BidiTransform::reorder()
{
	
	this->text = this->bidi->writeReordered(this->reorderingOptions);
	this->reorderingOptions = 0x0;
	return;

}
// .method private resolve(BI)V
void android::icu::text::BidiTransform::resolve(unsigned char level,int options)
{
	
	bool cVar1;
	
	//    .param p1, "level"    # B
	//    .param p2, "options"    # I
	cVar1 = 0x0;
	if ( !(( options & 0x5)) )  
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	this->bidi->setInverse(cVar1);
	this->bidi->setReorderingMode(options);
	this->bidi->setPara(this->text, level, 0x0);
	return;

}
// .method private resolveBaseDirection([B)V
void android::icu::text::BidiTransform::resolveBaseDirection(std::shared_ptr<unsigned char[]> levels)
{
	
	int cVar0;
	int cVar1;
	int level;
	
	//    .param p1, "levels"    # [B
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( !(android::icu::text::Bidi::IsDefaultLevel(levels[cVar1])) )  
		goto label_cond_2c;
	level = android::icu::text::Bidi::getBaseDirection(this->text);
	//    .local v0, "level":B
	if ( level == 0x3 )
		goto label_cond_22;
	//    .end local v0    # "level":B
label_goto_13:
	levels[cVar1] = level;
label_goto_15:
	if ( !(android::icu::text::Bidi::IsDefaultLevel(levels[cVar0])) )  
		goto label_cond_34;
	levels[cVar0] = levels[cVar1];
label_goto_21:
	return;
	// 463    .line 265
	// 464    .restart local v0    # "level":B
label_cond_22:
	if ( levels[cVar1] != 0x7f )
		goto label_cond_2a;
	level = cVar0;
	goto label_goto_13;
label_cond_2a:
	level = cVar1;
	goto label_goto_13;
	// 481    .line 267
	// 482    .end local v0    # "level":B
label_cond_2c:
	levels[cVar1] = (unsigned char)(( levels[cVar1] & 0x1));
	goto label_goto_15;
	// 494    .line 272
label_cond_34:
	levels[cVar0] = (unsigned char)(( levels[cVar0] & 0x1));
	goto label_goto_21;

}
// .method private reverse()V
void android::icu::text::BidiTransform::reverse()
{
	
	this->text = android::icu::text::Bidi::writeReverse(this->text, 0x0);
	return;

}
// .method private shapeArabic(I)V
void android::icu::text::BidiTransform::shapeArabic(int options)
{
	
	std::shared_ptr<android::icu::text::ArabicShaping> shaper;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "options"    # I
	if ( !(options) )  
		goto label_cond_f;
	shaper = std::make_shared<android::icu::text::ArabicShaping>(options);
	//    .local v1, "shaper":Landroid/icu/text/ArabicShaping;
	try {
	//label_try_start_7:
	this->text = shaper->shape(this->text);
	//label_try_end_f:
	}
	catch (android::icu::text::ArabicShapingException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Landroid/icu/text/ArabicShapingException; {:try_start_7 .. :try_end_f} :catch_10
	//    .end local v1    # "shaper":Landroid/icu/text/ArabicShaping;
label_cond_f:
label_goto_f:
	return;
	// 558    .line 374
	// 559    .restart local v1    # "shaper":Landroid/icu/text/ArabicShaping;
label_catch_10:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Landroid/icu/text/ArabicShapingException;
	goto label_goto_f;

}
// .method private shapeArabic(II)V
void android::icu::text::BidiTransform::shapeArabic(int digitsDir,int lettersDir)
{
	
	//    .param p1, "digitsDir"    # I
	//    .param p2, "lettersDir"    # I
	if ( digitsDir != lettersDir )
		goto label_cond_9;
	this->shapeArabic((this->shapingOptions |  digitsDir));
label_goto_8:
	return;
	// 587    .line 356
label_cond_9:
	this->shapeArabic((( this->shapingOptions & -0x19) |  digitsDir));
	this->shapeArabic((( this->shapingOptions & -0xe1) |  lettersDir));
	goto label_goto_8;

}
// .method public transform(Ljava/lang/CharSequence;BLandroid/icu/text/BidiTransform$Order;BLandroid/icu/text/BidiTransform$Order;Landroid/icu/text/BidiTransform$Mirroring;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::BidiTransform::transform(std::shared_ptr<java::lang::CharSequence> text,unsigned char inParaLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> inOrder,unsigned char outParaLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> outOrder,std::shared_ptr<android::icu::text::BidiTransform_S_Mirroring> doMirroring,int shapingOptions)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared<std::vector<unsigned char[]>> levels;
	std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> currentScheme;
	std::shared_ptr<android::icu::text::Bidi> cVar4;
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .param p2, "inParaLevel"    # B
	//    .param p3, "inOrder"    # Landroid/icu/text/BidiTransform$Order;
	//    .param p4, "outParaLevel"    # B
	//    .param p5, "outOrder"    # Landroid/icu/text/BidiTransform$Order;
	//    .param p6, "doMirroring"    # Landroid/icu/text/BidiTransform$Mirroring;
	//    .param p7, "shapingOptions"    # I
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	if ( !(text) )  
		goto label_cond_7;
	if ( inOrder )     
		goto label_cond_d;
label_cond_7:
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar3;
	// 641    .line 228
label_cond_d:
	if ( !(outOrder) )  
		goto label_cond_7;
	if ( !(doMirroring) )  
		goto label_cond_7;
	this->text = text->toString();
	levels = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	levels[cVar2] = inParaLevel;
	levels[cVar1] = outParaLevel;
	//    .local v1, "levels":[B
	this->resolveBaseDirection(levels);
	currentScheme = this->findMatchingScheme(levels[cVar2], inOrder, levels[cVar1], outOrder);
	//    .local v0, "currentScheme":Landroid/icu/text/BidiTransform$ReorderingScheme;
	if ( !(currentScheme) )  
		goto label_cond_42;
	cVar4 = std::make_shared<android::icu::text::Bidi>();
	this->bidi = cVar4;
	if ( !(android::icu::text::BidiTransform_S_Mirroring::ON->equals(doMirroring)) )  
		goto label_cond_45;
label_goto_39:
	this->reorderingOptions = cVar0;
	this->shapingOptions = ( shapingOptions & -0x5);
	currentScheme->doTransform(this);
label_cond_42:
	return this->text;
label_cond_45:
	cVar0 = cVar2;
	goto label_goto_39;

}


