// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Utility.smali
#include "java2ctype.h"
#include "android.icu.impl.IllegalIcuArgumentException.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "java.io.IOException.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Comparable.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Integer.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.util.ArrayList.h"
#include "java.util.Locale.h"
#include "java.util.regex.Pattern.h"

static android::icu::impl::Utility::APOSTROPHE = '\'';
static android::icu::impl::Utility::BACKSLASH = '\\';
static android::icu::impl::Utility::DIGITS;
static android::icu::impl::Utility::ESCAPE = '\ua5a5';
static android::icu::impl::Utility::ESCAPE_BYTE = -0x5bt;
static android::icu::impl::Utility::HEX_DIGIT;
static android::icu::impl::Utility::LINE_SEPARATOR = nullptr;
static android::icu::impl::Utility::MAGIC_UNSIGNED = -0x80000000;
static android::icu::impl::Utility::UNESCAPE_MAP;
// .method static constructor <clinit>()V
void android::icu::impl::Utility::static_cinit()
{
	
	int cVar0;
	std::shared<std::vector<char[]>> cVar1;
	std::shared<std::vector<char[]>> cVar2;
	std::shared<std::vector<char[]>> cVar3;
	
	cVar0 = 0x10;
	android::icu::impl::Utility::LINE_SEPARATOR = java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("line.separator")));
	cVar1 = std::make_shared<std::vector<char[]>>(cVar0);
	?;
	android::icu::impl::Utility::HEX_DIGIT = cVar1;
	cVar2 = std::make_shared<std::vector<char[]>>(cVar0);
	?;
	android::icu::impl::Utility::UNESCAPE_MAP = cVar2;
	cVar3 = std::make_shared<std::vector<char[]>>(0x24);
	?;
	android::icu::impl::Utility::DIGITS = cVar3;
	return;
	// 068    .line 706
	// 069    nop
	// 071    :array_24
	// 072    .array-data 2
	// 073        0x30s
	// 074        0x31s
	// 075        0x32s
	// 076        0x33s
	// 077        0x34s
	// 078        0x35s
	// 079        0x36s
	// 080        0x37s
	// 081        0x38s
	// 082        0x39s
	// 083        0x41s
	// 084        0x42s
	// 085        0x43s
	// 086        0x44s
	// 087        0x45s
	// 088        0x46s
	// 089    .end array-data
	// 091    .line 776
	// 092    :array_38
	// 093    .array-data 2
	// 094        0x61s
	// 095        0x7s
	// 096        0x62s
	// 097        0x8s
	// 098        0x65s
	// 099        0x1bs
	// 100        0x66s
	// 101        0xcs
	// 102        0x6es
	// 103        0xas
	// 104        0x72s
	// 105        0xds
	// 106        0x74s
	// 107        0x9s
	// 108        0x76s
	// 109        0xbs
	// 110    .end array-data
	// 112    .line 1358
	// 113    :array_4c
	// 114    .array-data 2
	// 115        0x30s
	// 116        0x31s
	// 117        0x32s
	// 118        0x33s
	// 119        0x34s
	// 120        0x35s
	// 121        0x36s
	// 122        0x37s
	// 123        0x38s
	// 124        0x39s
	// 125        0x41s
	// 126        0x42s
	// 127        0x43s
	// 128        0x44s
	// 129        0x45s
	// 130        0x46s
	// 131        0x47s
	// 132        0x48s
	// 133        0x49s
	// 134        0x4as
	// 135        0x4bs
	// 136        0x4cs
	// 137        0x4ds
	// 138        0x4es
	// 139        0x4fs
	// 140        0x50s
	// 141        0x51s
	// 142        0x52s
	// 143        0x53s
	// 144        0x54s
	// 145        0x55s
	// 146        0x56s
	// 147        0x57s
	// 148        0x58s
	// 149        0x59s
	// 150        0x5as
	// 151    .end array-data

}
// .method public constructor <init>()V
android::icu::impl::Utility::Utility()
{
	
	// 159    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static final RLEStringToByteArray(Ljava/lang/String;)[B
unsigned char android::icu::impl::Utility::RLEStringToByteArray(std::shared_ptr<java::lang::String> s)
{
	
	unsigned char cVar0;
	int length;
	std::shared<std::vector<unsigned char[]>> array;
	int nextChar;
	int node;
	int ai;
	int i;
	unsigned char b;
	int runLength;
	int j;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	std::shared_ptr<java::lang::IllegalStateException> cVar2;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar0 = -0x5b;
	length = (( s->charAt(0x0) << 0x10) | s->charAt(0x1));
	//    .local v8, "length":I
	array = std::make_shared<std::vector<unsigned char[]>>(length);
	//    .local v2, "array":[B
	nextChar = 0x1;
	//    .local v9, "nextChar":Z
	//    .local v4, "c":C
	node = 0x0;
	//    .local v10, "node":I
	//    .local v11, "runLength":I
	//    .local v5, "i":I
	//    .local v0, "ai":I
	ai = 0x0;
	//    .end local v0    # "ai":I
	//    .local v1, "ai":I
	i = 0x2;
	//    .end local v4    # "c":C
	//    .end local v5    # "i":I
	//    .local v6, "i":I
label_goto_1a:
	if ( ai >= length )
		goto label_cond_5d;
	if ( !(nextChar) )  
		goto label_cond_2f;
	//    .end local v6    # "i":I
	//    .restart local v5    # "i":I
	//    .local v4, "c":C
	b = (unsigned char)(_shri(s->charAt(i),0x8));
	//    .local v3, "b":B
	nextChar = 0x0;
	//    .end local v4    # "c":C
label_goto_28:
	// switch
	{
	auto item = ( node );
	if (item == 0) goto label_pswitch_35;
	if (item == 1) goto label_pswitch_3f;
	if (item == 2) goto label_pswitch_4f;
	}
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
label_goto_2c:
	ai = ai;
	//    .end local v0    # "ai":I
	//    .restart local v1    # "ai":I
	i = i;
	//    .end local v5    # "i":I
	//    .restart local v6    # "i":I
	goto label_goto_1a;
	// 271    .line 601
	// 272    .end local v3    # "b":B
label_cond_2f:
	(unsigned char)(( 0x0 & 0xff));
	//    .restart local v3    # "b":B
	nextChar = 0x1;
	//    .end local v6    # "i":I
	//    .restart local v5    # "i":I
	goto label_goto_28;
	// 288    .line 612
label_pswitch_35:
	if ( b != cVar0 )
		goto label_cond_3a;
	node = 0x1;
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	goto label_goto_2c;
	// 301    .line 616
	// 302    .end local v0    # "ai":I
	// 303    .restart local v1    # "ai":I
label_cond_3a:
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	array[ai] = b;
	goto label_goto_2c;
	// 313    .line 622
	// 314    .end local v0    # "ai":I
	// 315    .restart local v1    # "ai":I
label_pswitch_3f:
	if ( b != cVar0 )
		goto label_cond_47;
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	array[ai] = cVar0;
	node = 0x0;
	goto label_goto_2c;
	// 331    .line 627
	// 332    .end local v0    # "ai":I
	// 333    .restart local v1    # "ai":I
label_cond_47:
	runLength = b;
	if ( runLength >= 0 )
		goto label_cond_4c;
	( runLength + 0x100);
label_cond_4c:
	node = 0x2;
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	goto label_goto_2c;
	// 352    .line 636
	// 353    .end local v0    # "ai":I
	// 354    .restart local v1    # "ai":I
label_pswitch_4f:
	j = 0x0;
	//    .local v7, "j":I
label_goto_50:
	if ( j >= 0x0 )
		goto label_cond_5a;
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	array[ai] = b;
	j = ( j + 0x1);
	ai = ( ai + 0x1);
	//    .end local v0    # "ai":I
	//    .restart local v1    # "ai":I
	goto label_goto_50;
	// 376    .line 637
label_cond_5a:
	node = 0x0;
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	goto label_goto_2c;
	// 387    .line 642
	// 388    .end local v0    # "ai":I
	// 389    .end local v3    # "b":B
	// 390    .end local v5    # "i":I
	// 391    .end local v7    # "j":I
	// 392    .restart local v1    # "ai":I
	// 393    .restart local v6    # "i":I
label_cond_5d:
	if ( !(node) )  
		goto label_cond_68;
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad run-length encoded byte array")));
	// throw
	throw cVar1;
	// 406    .line 645
label_cond_68:
	if ( i == s->length() )
		goto label_cond_77;
	cVar2 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Excess data in RLE byte array string")));
	// throw
	throw cVar2;
	// 423    .line 648
label_cond_77:
	return array;
	// 427    .line 609
	// 428    :pswitch_data_78
	// 429    .packed-switch 0x0
	// 430        :pswitch_35
	// 431        :pswitch_3f
	// 432        :pswitch_4f
	// 433    .end packed-switch

}
// .method public static final RLEStringToCharArray(Ljava/lang/String;)[C
char android::icu::impl::Utility::RLEStringToCharArray(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	int length;
	std::shared<std::vector<char[]>> array;
	int ai;
	int i;
	int c;
	int j;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar0 = 0xa5a5;
	length = (( s->charAt(0x0) << 0x10) | s->charAt(0x1));
	//    .local v6, "length":I
	array = std::make_shared<std::vector<char[]>>(length);
	//    .local v2, "array":[C
	ai = 0x0;
	//    .local v0, "ai":I
	i = 0x2;
	//    .local v4, "i":I
label_goto_15:
	if ( i >= s->length() )
		goto label_cond_4a;
	c = s->charAt(i);
	//    .local v3, "c":C
	if ( c != cVar0 )
		goto label_cond_44;
	i = ( i + 0x1);
	c = s->charAt(i);
	if ( c != cVar0 )
		goto label_cond_31;
	//    .end local v0    # "ai":I
	//    .local v1, "ai":I
	array[ai] = c;
	ai = ( ai + 0x1);
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
label_goto_2e:
	i = ( i + 0x1);
	goto label_goto_15;
	// 516    .line 562
label_cond_31:
	//    .local v7, "runLength":I
	i = ( i + 0x1);
	//    .local v8, "runValue":C
	j = 0x0;
	//    .local v5, "j":I
	ai = ai;
	//    .end local v0    # "ai":I
	//    .restart local v1    # "ai":I
label_goto_3a:
	if ( j >= c )
		goto label_cond_56;
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	array[ai] = s->charAt(i);
	j = ( j + 0x1);
	ai = ( ai + 0x1);
	//    .end local v0    # "ai":I
	//    .restart local v1    # "ai":I
	goto label_goto_3a;
	// 554    .line 568
	// 555    .end local v1    # "ai":I
	// 556    .end local v5    # "j":I
	// 557    .end local v7    # "runLength":I
	// 558    .end local v8    # "runValue":C
	// 559    .restart local v0    # "ai":I
label_cond_44:
	//    .end local v0    # "ai":I
	//    .restart local v1    # "ai":I
	array[ai] = c;
	ai = ( ai + 0x1);
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	goto label_goto_2e;
	// 573    .line 572
	// 574    .end local v3    # "c":C
label_cond_4a:
	if ( ai == length )
		goto label_cond_55;
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad run-length encoded short array")));
	// throw
	throw cVar1;
	// 587    .line 575
label_cond_55:
	return array;
	// 591    .end local v0    # "ai":I
	// 592    .restart local v1    # "ai":I
	// 593    .restart local v3    # "c":C
	// 594    .restart local v5    # "j":I
	// 595    .restart local v7    # "runLength":I
	// 596    .restart local v8    # "runValue":C
label_cond_56:
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	goto label_goto_2e;

}
// .method public static final RLEStringToIntArray(Ljava/lang/String;)[I
int android::icu::impl::Utility::RLEStringToIntArray(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	int length;
	std::shared<std::vector<int[]>> array;
	int maxI;
	int i;
	int ai;
	int c;
	int j;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar0 = 0xa5a5;
	length = android::icu::impl::Utility::getInt(s, 0x0);
	//    .local v7, "length":I
	array = std::make_shared<std::vector<int[]>>(length);
	//    .local v2, "array":[I
	//    .local v0, "ai":I
	//    .local v4, "i":I
	maxI = ( s->length() / 0x2);
	//    .local v8, "maxI":I
	i = 0x1;
	//    .end local v4    # "i":I
	//    .local v5, "i":I
	ai = 0x0;
	//    .end local v0    # "ai":I
	//    .local v1, "ai":I
label_goto_14:
	if ( ai >= length )
		goto label_cond_47;
	if ( i >= maxI )
		goto label_cond_47;
	i = ( i + 0x1);
	//    .end local v5    # "i":I
	//    .restart local v4    # "i":I
	c = android::icu::impl::Utility::getInt(s, i);
	//    .local v3, "c":I
	if ( c != cVar0 )
		goto label_cond_42;
	i = ( i + 0x1);
	//    .end local v4    # "i":I
	//    .restart local v5    # "i":I
	c = android::icu::impl::Utility::getInt(s, i);
	if ( c != cVar0 )
		goto label_cond_30;
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	array[ai] = c;
	//    .end local v5    # "i":I
	//    .restart local v4    # "i":I
label_goto_2d:
	i = i;
	//    .end local v4    # "i":I
	//    .restart local v5    # "i":I
	ai = ai;
	//    .end local v0    # "ai":I
	//    .restart local v1    # "ai":I
	goto label_goto_14;
	// 700    .line 496
label_cond_30:
	c;
	//    .local v9, "runLength":I
	//    .end local v5    # "i":I
	//    .restart local v4    # "i":I
	//    .local v10, "runValue":I
	j = 0x0;
	//    .local v6, "j":I
label_goto_38:
	if ( j >= c )
		goto label_cond_55;
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	array[ai] = android::icu::impl::Utility::getInt(s, i);
	j = ( j + 0x1);
	ai = ( ai + 0x1);
	//    .end local v0    # "ai":I
	//    .restart local v1    # "ai":I
	goto label_goto_38;
	// 738    .line 504
	// 739    .end local v6    # "j":I
	// 740    .end local v9    # "runLength":I
	// 741    .end local v10    # "runValue":I
label_cond_42:
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	array[ai] = c;
	goto label_goto_2d;
	// 751    .line 508
	// 752    .end local v0    # "ai":I
	// 753    .end local v3    # "c":I
	// 754    .end local v4    # "i":I
	// 755    .restart local v1    # "ai":I
	// 756    .restart local v5    # "i":I
label_cond_47:
	if ( ai != length )
		goto label_cond_4b;
	if ( i == maxI )
		goto label_cond_54;
label_cond_4b:
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad run-length encoded int array")));
	// throw
	throw cVar1;
	// 772    .line 512
label_cond_54:
	return array;
	// 776    .end local v5    # "i":I
	// 777    .restart local v3    # "c":I
	// 778    .restart local v4    # "i":I
	// 779    .restart local v6    # "j":I
	// 780    .restart local v9    # "runLength":I
	// 781    .restart local v10    # "runValue":I
label_cond_55:
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	goto label_goto_2d;

}
// .method public static final RLEStringToShortArray(Ljava/lang/String;)[S
short android::icu::impl::Utility::RLEStringToShortArray(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	int length;
	std::shared<std::vector<short[]>> array;
	int ai;
	int i;
	int c;
	int j;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar0 = 0xa5a5;
	length = (( s->charAt(0x0) << 0x10) | s->charAt(0x1));
	//    .local v6, "length":I
	array = std::make_shared<std::vector<short[]>>(length);
	//    .local v2, "array":[S
	ai = 0x0;
	//    .local v0, "ai":I
	i = 0x2;
	//    .local v4, "i":I
label_goto_15:
	if ( i >= s->length() )
		goto label_cond_4d;
	c = s->charAt(i);
	//    .local v3, "c":C
	if ( c != cVar0 )
		goto label_cond_46;
	i = ( i + 0x1);
	c = s->charAt(i);
	if ( c != cVar0 )
		goto label_cond_32;
	//    .end local v0    # "ai":I
	//    .local v1, "ai":I
	array[ai] = (short)(c);
	ai = ( ai + 0x1);
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
label_goto_2f:
	i = ( i + 0x1);
	goto label_goto_15;
	// 872    .line 532
label_cond_32:
	//    .local v7, "runLength":I
	i = ( i + 0x1);
	//    .local v8, "runValue":S
	j = 0x0;
	//    .local v5, "j":I
	ai = ai;
	//    .end local v0    # "ai":I
	//    .restart local v1    # "ai":I
label_goto_3c:
	if ( j >= c )
		goto label_cond_59;
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	array[ai] = (short)(s->charAt(i));
	j = ( j + 0x1);
	ai = ( ai + 0x1);
	//    .end local v0    # "ai":I
	//    .restart local v1    # "ai":I
	goto label_goto_3c;
	// 912    .line 538
	// 913    .end local v1    # "ai":I
	// 914    .end local v5    # "j":I
	// 915    .end local v7    # "runLength":I
	// 916    .end local v8    # "runValue":S
	// 917    .restart local v0    # "ai":I
label_cond_46:
	//    .end local v0    # "ai":I
	//    .restart local v1    # "ai":I
	array[ai] = (short)(c);
	ai = ( ai + 0x1);
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	goto label_goto_2f;
	// 933    .line 542
	// 934    .end local v3    # "c":C
label_cond_4d:
	if ( ai == length )
		goto label_cond_58;
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad run-length encoded short array")));
	// throw
	throw cVar1;
	// 947    .line 545
label_cond_58:
	return array;
	// 951    .end local v0    # "ai":I
	// 952    .restart local v1    # "ai":I
	// 953    .restart local v3    # "c":C
	// 954    .restart local v5    # "j":I
	// 955    .restart local v7    # "runLength":I
	// 956    .restart local v8    # "runValue":S
label_cond_59:
	//    .end local v1    # "ai":I
	//    .restart local v0    # "ai":I
	goto label_goto_2f;

}
// .method private static final appendEncodedByte(Ljava/lang/Appendable;B[B)V
void android::icu::impl::Utility::appendEncodedByte(std::shared_ptr<java::lang::Appendable> buffer,unsigned char value,std::shared_ptr<unsigned char[]> state)
{
	
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "value"    # B
	//    .param p2, "state"    # [B
	//    .annotation system Ldalvik/annotation/Signature;
	// 970        value = {
	// 971            "<T::",
	// 972            "Ljava/lang/Appendable;",
	// 973            ">(TT;B[B)V"
	// 974        }
	// 975    .end annotation
	//    .local p0, "buffer":Ljava/lang/Appendable;, "TT;"
	try {
	//label_try_start_1:
	if ( !(state[0x0]) )  
		goto label_cond_16;
	//    .local v0, "c":C
	buffer->append((char)((( state[0x1] << 0x8) |  ( value & 0xff))));
	state[0x0] = 0x0;
	//    .end local v0    # "c":C
label_goto_15:
	return;
	// 1016    .line 471
label_cond_16:
	state[0x0] = 0x1;
	state[0x1] = value;
	//label_try_end_1d:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1e;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1d} :catch_1e
	goto label_goto_15;
	// 1033    .line 474
label_catch_1e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method private static final appendInt(Ljava/lang/Appendable;I)V
void android::icu::impl::Utility::appendInt(std::shared_ptr<java::lang::Appendable> buffer,int value)
{
	
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "value"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 1050        value = {
	// 1051            "<T::",
	// 1052            "Ljava/lang/Appendable;",
	// 1053            ">(TT;I)V"
	// 1054        }
	// 1055    .end annotation
	//    .local p0, "buffer":Ljava/lang/Appendable;, "TT;"
	try {
	//label_try_start_3:
	buffer->append((char)(_ushri(value,0x10)));
	buffer->append((char)((0xffff &  value)));
	//label_try_end_e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f;
	}
	//    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_e} :catch_f
	return;
	// 1081    .line 393
label_catch_f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public static appendNumber(Ljava/lang/Appendable;III)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::impl::Utility::appendNumber(std::shared_ptr<java::lang::Appendable> result,int n,int radix,int minDigits)
{
	
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "n"    # I
	//    .param p2, "radix"    # I
	//    .param p3, "minDigits"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 1100        value = {
	// 1101            "<T::",
	// 1102            "Ljava/lang/Appendable;",
	// 1103            ">(TT;III)TT;"
	// 1104        }
	// 1105    .end annotation
	//    .local p0, "result":Ljava/lang/Appendable;, "TT;"
	if ( radix <  0x2 )
		goto label_cond_7;
	if ( radix <= 0x24 )
		goto label_cond_28;
label_cond_7:
	try {
	//label_try_start_7:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal radix ")))->append(radix)->toString());
	// throw
	throw cVar0;
	// 1144    :try_end_21
	// 1145    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_21} :catch_21
	// 1147    .line 1423
label_catch_21:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 1159    .line 1413
	// 1160    .end local v1    # "e":Ljava/io/IOException;
label_cond_28:
	//    .local v0, "abs":I
	if ( n >= 0 )
		goto label_cond_32;
	try {
	//label_try_start_2c:
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
label_cond_32:
	android::icu::impl::Utility::recursiveAppendNumber(result, n, radix, minDigits);
	//label_try_end_35:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_21;
	}
	//    .catch Ljava/io/IOException; {:try_start_2c .. :try_end_35} :catch_21
	return result;

}
// .method public static appendToRule(Ljava/lang/StringBuffer;IZZLjava/lang/StringBuffer;)V
void android::icu::impl::Utility::appendToRule(std::shared_ptr<java::lang::StringBuffer> rule,int c,bool isLiteral,bool escapeUnprintable,std::shared_ptr<java::lang::StringBuffer> quoteBuf)
{
	
	char cVar0;
	int cVar1;
	char cVar2;
	int cVar3;
	char cVar4;
	int trailingCount;
	int len;
	
	//    .param p0, "rule"    # Ljava/lang/StringBuffer;
	//    .param p1, "c"    # I
	//    .param p2, "isLiteral"    # Z
	//    .param p3, "escapeUnprintable"    # Z
	//    .param p4, "quoteBuf"    # Ljava/lang/StringBuffer;
	cVar0 = 0x20;
	cVar1 = 0x2;
	cVar2 = 0x5c;
	cVar3 = 0x0;
	cVar4 = 0x27;
	if ( isLiteral )     
		goto label_cond_12;
	if ( !(escapeUnprintable) )  
		goto label_cond_a6;
	if ( !(android::icu::impl::Utility::isUnprintable(c)) )  
		goto label_cond_a6;
label_cond_12:
	if ( quoteBuf->length() <= 0 )
		goto label_cond_81;
label_goto_18:
	if ( quoteBuf->length() <  cVar1 )
		goto label_cond_36;
	if ( quoteBuf->charAt(cVar3) != cVar4 )
		goto label_cond_36;
	if ( quoteBuf->charAt(0x1) != cVar4 )
		goto label_cond_36;
	rule->append(cVar2)->append(cVar4);
	quoteBuf->delete(cVar3, cVar1);
	goto label_goto_18;
	// 1263    .line 1589
label_cond_36:
	trailingCount = 0x0;
	//    .local v1, "trailingCount":I
label_goto_37:
	if ( quoteBuf->length() <  cVar1 )
		goto label_cond_61;
	if ( quoteBuf->charAt(( quoteBuf->length() + -0x2)) != cVar4 )
		goto label_cond_61;
	if ( quoteBuf->charAt(( quoteBuf->length() + -0x1)) != cVar4 )
		goto label_cond_61;
	quoteBuf->setLength(( quoteBuf->length() + -0x2));
	trailingCount = ( trailingCount + 0x1);
	goto label_goto_37;
	// 1316    .line 1596
label_cond_61:
	if ( quoteBuf->length() <= 0 )
		goto label_cond_7f;
	rule->append(cVar4);
	rule->append(quoteBuf);
	rule->append(cVar4);
	quoteBuf->setLength(cVar3);
	trailingCount = trailingCount;
	//    .end local v1    # "trailingCount":I
	//    .local v2, "trailingCount":I
label_goto_74:
	trailingCount = ( trailingCount + -0x1);
	//    .end local v2    # "trailingCount":I
	//    .restart local v1    # "trailingCount":I
	if ( trailingCount <= 0 )
		goto label_cond_81;
	rule->append(cVar2)->append(cVar4);
label_cond_7f:
	trailingCount = trailingCount;
	//    .end local v1    # "trailingCount":I
	//    .restart local v2    # "trailingCount":I
	goto label_goto_74;
	// 1362    .line 1606
	// 1363    .end local v2    # "trailingCount":I
label_cond_81:
	if ( c == -0x1 )
		goto label_cond_97;
	if ( c != cVar0 )
		goto label_cond_98;
	len = rule->length();
	//    .local v0, "len":I
	if ( len <= 0 )
		goto label_cond_97;
	if ( rule->charAt(( len + -0x1)) == cVar0 )
		goto label_cond_97;
	rule->append(cVar0);
	//    .end local v0    # "len":I
label_cond_97:
label_goto_97:
	return;
	// 1398    .line 1617
label_cond_98:
	if ( !(escapeUnprintable) )  
		goto label_cond_a2;
	if ( !(( android::icu::impl::Utility::escapeUnprintable(rule, c) ^ 0x1)) )  
		goto label_cond_97;
label_cond_a2:
	rule->appendCodePoint(c);
	goto label_goto_97;
	// 1416    .line 1624
label_cond_a6:
	if ( quoteBuf->length() )     
		goto label_cond_b9;
	if ( c == cVar4 )
		goto label_cond_b0;
	if ( c != cVar2 )
		goto label_cond_b9;
label_cond_b0:
	rule->append(cVar2)->append((char)(c));
	goto label_goto_97;
	// 1441    .line 1632
label_cond_b9:
	if ( quoteBuf->length() > 0 ) 
		goto label_cond_df;
	if ( c <  0x21 )
		goto label_cond_e9;
	if ( c >  0x7e )
		goto label_cond_e9;
	if ( c <  0x30 )
		goto label_cond_cf;
	if ( c <= 0x39 )
		goto label_cond_e9;
label_cond_cf:
	if ( c <  0x41 )
		goto label_cond_d7;
	if ( c <= 0x5a )
		goto label_cond_e9;
label_cond_d7:
	if ( c <  0x61 )
		goto label_cond_df;
	if ( c <= 0x7a )
		goto label_cond_e9;
label_cond_df:
	quoteBuf->appendCodePoint(c);
	if ( c != cVar4 )
		goto label_cond_97;
	quoteBuf->append((char)(c));
	goto label_goto_97;
	// 1501    .line 1637
label_cond_e9:
	if ( android::icu::impl::PatternProps::isWhiteSpace(c) )     
		goto label_cond_df;
	rule->appendCodePoint(c);
	goto label_goto_97;

}
// .method public static appendToRule(Ljava/lang/StringBuffer;Landroid/icu/text/UnicodeMatcher;ZLjava/lang/StringBuffer;)V
void android::icu::impl::Utility::appendToRule(std::shared_ptr<java::lang::StringBuffer> rule,std::shared_ptr<android::icu::text::UnicodeMatcher> matcher,bool escapeUnprintable,std::shared_ptr<java::lang::StringBuffer> quoteBuf)
{
	
	//    .param p0, "rule"    # Ljava/lang/StringBuffer;
	//    .param p1, "matcher"    # Landroid/icu/text/UnicodeMatcher;
	//    .param p2, "escapeUnprintable"    # Z
	//    .param p3, "quoteBuf"    # Ljava/lang/StringBuffer;
	if ( !(matcher) )  
		goto label_cond_a;
	android::icu::impl::Utility::appendToRule(rule, matcher->toPattern(escapeUnprintable), 0x1, escapeUnprintable, quoteBuf);
label_cond_a:
	return;

}
// .method public static appendToRule(Ljava/lang/StringBuffer;Ljava/lang/String;ZZLjava/lang/StringBuffer;)V
void android::icu::impl::Utility::appendToRule(std::shared_ptr<java::lang::StringBuffer> rule,std::shared_ptr<java::lang::String> text,bool isLiteral,bool escapeUnprintable,std::shared_ptr<java::lang::StringBuffer> quoteBuf)
{
	
	int i;
	
	//    .param p0, "rule"    # Ljava/lang/StringBuffer;
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "isLiteral"    # Z
	//    .param p3, "escapeUnprintable"    # Z
	//    .param p4, "quoteBuf"    # Ljava/lang/StringBuffer;
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= text->length() )
		goto label_cond_11;
	android::icu::impl::Utility::appendToRule(rule, text->charAt(i), isLiteral, escapeUnprintable, quoteBuf);
	i = ( i + 0x1);
	goto label_goto_1;
	// 1575    .line 1664
label_cond_11:
	return;

}
// .method public static final arrayEquals(Ljava/lang/Object;Ljava/lang/Object;)Z
bool android::icu::impl::Utility::arrayEquals(std::shared_ptr<java::lang::Object> source,std::shared_ptr<java::lang::Object> target)
{
	
	bool cVar0;
	
	//    .param p0, "source"    # Ljava/lang/Object;
	//    .param p1, "target"    # Ljava/lang/Object;
	if ( source )     
		goto label_cond_8;
	if ( target )     
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;
	// 1601    .line 82
label_cond_8:
	if ( !(source->instanceOf("std::vector<java::lang::Object>")) )  
		goto label_cond_13;
	source->checkCast("std::vector<java::lang::Object>");
	//    .end local p0    # "source":Ljava/lang/Object;
	return android::icu::impl::Utility::arrayEquals(source, target);
	// 1617    .line 84
	// 1618    .restart local p0    # "source":Ljava/lang/Object;
label_cond_13:
	if ( !(source->instanceOf("int[]")) )  
		goto label_cond_1e;
	source->checkCast("int[]");
	//    .end local p0    # "source":Ljava/lang/Object;
	return android::icu::impl::Utility::arrayEquals(source, target);
	// 1634    .line 86
	// 1635    .restart local p0    # "source":Ljava/lang/Object;
label_cond_1e:
	if ( !(source->instanceOf("double[]")) )  
		goto label_cond_29;
	source->checkCast("double[]");
	//    .end local p0    # "source":Ljava/lang/Object;
	return android::icu::impl::Utility::arrayEquals(source, target);
	// 1651    .line 88
	// 1652    .restart local p0    # "source":Ljava/lang/Object;
label_cond_29:
	if ( !(source->instanceOf("unsigned char[]")) )  
		goto label_cond_34;
	source->checkCast("unsigned char[]");
	//    .end local p0    # "source":Ljava/lang/Object;
	return android::icu::impl::Utility::arrayEquals(source, target);
	// 1668    .line 90
	// 1669    .restart local p0    # "source":Ljava/lang/Object;
label_cond_34:
	return source->equals(target);

}
// .method public static final arrayEquals([BLjava/lang/Object;)Z
bool android::icu::impl::Utility::arrayEquals(std::shared_ptr<unsigned char[]> source,std::shared_ptr<java::lang::Object> target)
{
	
	bool cVar1;
	std::shared_ptr<unsigned char[]> targ;
	
	//    .param p0, "source"    # [B
	//    .param p1, "target"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( source )     
		goto label_cond_7;
	if ( target )     
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;
	// 1696    .line 68
label_cond_7:
	if ( target->instanceOf("unsigned char[]") )     
		goto label_cond_c;
	return cVar1;
label_cond_c:
	targ = target;
	targ->checkCast("unsigned char[]");
	//    .local v0, "targ":[B
	if ( source->size() != targ->size() )
		goto label_cond_18;
	cVar1 = android::icu::impl::Utility::arrayRegionMatches(source, cVar1, targ, cVar1, source->size());
label_cond_18:
	return cVar1;

}
// .method public static final arrayEquals([DLjava/lang/Object;)Z
bool android::icu::impl::Utility::arrayEquals(std::shared_ptr<double[]> source,std::shared_ptr<java::lang::Object> target)
{
	
	bool cVar1;
	std::shared_ptr<double[]> targ;
	
	//    .param p0, "source"    # [D
	//    .param p1, "target"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( source )     
		goto label_cond_7;
	if ( target )     
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;
	// 1748    .line 61
label_cond_7:
	if ( target->instanceOf("double[]") )     
		goto label_cond_c;
	return cVar1;
label_cond_c:
	targ = target;
	targ->checkCast("double[]");
	//    .local v0, "targ":[D
	if ( source->size() != targ->size() )
		goto label_cond_18;
	cVar1 = android::icu::impl::Utility::arrayRegionMatches(source, cVar1, targ, cVar1, source->size());
label_cond_18:
	return cVar1;

}
// .method public static final arrayEquals([ILjava/lang/Object;)Z
bool android::icu::impl::Utility::arrayEquals(std::shared_ptr<int[]> source,std::shared_ptr<java::lang::Object> target)
{
	
	bool cVar1;
	std::shared_ptr<int[]> targ;
	
	//    .param p0, "source"    # [I
	//    .param p1, "target"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( source )     
		goto label_cond_7;
	if ( target )     
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;
	// 1800    .line 49
label_cond_7:
	if ( target->instanceOf("int[]") )     
		goto label_cond_c;
	return cVar1;
label_cond_c:
	targ = target;
	targ->checkCast("int[]");
	//    .local v0, "targ":[I
	if ( source->size() != targ->size() )
		goto label_cond_18;
	cVar1 = android::icu::impl::Utility::arrayRegionMatches(source, cVar1, targ, cVar1, source->size());
label_cond_18:
	return cVar1;

}
// .method public static final arrayEquals([Ljava/lang/Object;Ljava/lang/Object;)Z
bool android::icu::impl::Utility::arrayEquals(std::shared_ptr<std::vector<java::lang::Object>> source,std::shared_ptr<java::lang::Object> target)
{
	
	bool cVar1;
	std::shared_ptr<std::vector<java::lang::Object>> targ;
	
	//    .param p0, "source"    # [Ljava/lang/Object;
	//    .param p1, "target"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( source )     
		goto label_cond_7;
	if ( target )     
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;
	// 1852    .line 37
label_cond_7:
	if ( target->instanceOf("std::vector<java::lang::Object>") )     
		goto label_cond_c;
	return cVar1;
label_cond_c:
	targ = target;
	targ->checkCast("std::vector<java::lang::Object>");
	//    .local v0, "targ":[Ljava/lang/Object;
	if ( source->size() != targ->size() )
		goto label_cond_18;
	cVar1 = android::icu::impl::Utility::arrayRegionMatches(source, cVar1, targ, cVar1, source->size());
label_cond_18:
	return cVar1;

}
// .method public static final arrayRegionMatches([BI[BII)Z
bool android::icu::impl::Utility::arrayRegionMatches(std::shared_ptr<unsigned char[]> source,int sourceStart,std::shared_ptr<unsigned char[]> target,int targetStart,int len)
{
	
	int i;
	
	//    .param p0, "source"    # [B
	//    .param p1, "sourceStart"    # I
	//    .param p2, "target"    # [B
	//    .param p3, "targetStart"    # I
	//    .param p4, "len"    # I
	//    .local v2, "sourceEnd":I
	//    .local v0, "delta":I
	i = sourceStart;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= (sourceStart + len) )
		goto label_cond_14;
	if ( source[i] == target[(i + (targetStart - sourceStart))] )
		goto label_cond_11;
	return 0x0;
	// 1924    .line 172
label_cond_11:
	i = ( i + 0x1);
	goto label_goto_5;
	// 1930    .line 176
label_cond_14:
	return 0x1;

}
// .method public static final arrayRegionMatches([CI[CII)Z
bool android::icu::impl::Utility::arrayRegionMatches(std::shared_ptr<char[]> source,int sourceStart,std::shared_ptr<char[]> target,int targetStart,int len)
{
	
	int i;
	
	//    .param p0, "source"    # [C
	//    .param p1, "sourceStart"    # I
	//    .param p2, "target"    # [C
	//    .param p3, "targetStart"    # I
	//    .param p4, "len"    # I
	//    .local v2, "sourceEnd":I
	//    .local v0, "delta":I
	i = sourceStart;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= (sourceStart + len) )
		goto label_cond_14;
	if ( source[i] == target[(i + (targetStart - sourceStart))] )
		goto label_cond_11;
	return 0x0;
	// 1975    .line 124
label_cond_11:
	i = ( i + 0x1);
	goto label_goto_5;
	// 1981    .line 128
label_cond_14:
	return 0x1;

}
// .method public static final arrayRegionMatches([DI[DII)Z
bool android::icu::impl::Utility::arrayRegionMatches(std::shared_ptr<double[]> source,int sourceStart,std::shared_ptr<double[]> target,int targetStart,int len)
{
	
	int i;
	
	//    .param p0, "source"    # [D
	//    .param p1, "sourceStart"    # I
	//    .param p2, "target"    # [D
	//    .param p3, "targetStart"    # I
	//    .param p4, "len"    # I
	//    .local v2, "sourceEnd":I
	//    .local v0, "delta":I
	i = sourceStart;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= (sourceStart + len) )
		goto label_cond_16;
	if ( !((source[i] < target[(i + (targetStart - sourceStart))])) )  
		goto label_cond_13;
	return 0x0;
	// 2028    .line 162
label_cond_13:
	i = ( i + 0x1);
	goto label_goto_5;
	// 2034    .line 166
label_cond_16:
	return 0x1;

}
// .method public static final arrayRegionMatches([II[III)Z
bool android::icu::impl::Utility::arrayRegionMatches(std::shared_ptr<int[]> source,int sourceStart,std::shared_ptr<int[]> target,int targetStart,int len)
{
	
	int i;
	
	//    .param p0, "source"    # [I
	//    .param p1, "sourceStart"    # I
	//    .param p2, "target"    # [I
	//    .param p3, "targetStart"    # I
	//    .param p4, "len"    # I
	//    .local v2, "sourceEnd":I
	//    .local v0, "delta":I
	i = sourceStart;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= (sourceStart + len) )
		goto label_cond_14;
	if ( source[i] == target[(i + (targetStart - sourceStart))] )
		goto label_cond_11;
	return 0x0;
	// 2079    .line 143
label_cond_11:
	i = ( i + 0x1);
	goto label_goto_5;
	// 2085    .line 147
label_cond_14:
	return 0x1;

}
// .method public static final arrayRegionMatches([Ljava/lang/Object;I[Ljava/lang/Object;II)Z
bool android::icu::impl::Utility::arrayRegionMatches(std::shared_ptr<std::vector<java::lang::Object>> source,int sourceStart,std::shared_ptr<std::vector<java::lang::Object>> target,int targetStart,int len)
{
	
	int i;
	
	//    .param p0, "source"    # [Ljava/lang/Object;
	//    .param p1, "sourceStart"    # I
	//    .param p2, "target"    # [Ljava/lang/Object;
	//    .param p3, "targetStart"    # I
	//    .param p4, "len"    # I
	//    .local v2, "sourceEnd":I
	//    .local v0, "delta":I
	i = sourceStart;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= (sourceStart + len) )
		goto label_cond_18;
	if ( android::icu::impl::Utility::arrayEquals(source[i], target[(i + (targetStart - sourceStart))]) )     
		goto label_cond_15;
	return 0x0;
	// 2134    .line 105
label_cond_15:
	i = ( i + 0x1);
	goto label_goto_5;
	// 2140    .line 109
label_cond_18:
	return 0x1;

}
// .method public static final arrayToRLEString([B)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::arrayToRLEString(std::shared_ptr<unsigned char[]> a)
{
	
	unsigned char cVar0;
	std::shared_ptr<java::lang::StringBuilder> buffer;
	unsigned char runValue;
	int runLength;
	std::shared<std::vector<unsigned char[]>> state;
	int i;
	unsigned char b;
	
	//    .param p0, "a"    # [B
	cVar0 = 0x0;
	buffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "buffer":Ljava/lang/StringBuilder;
	buffer->append((char)(_shri(a->size(),0x10)));
	buffer->append((char)(a->size()));
	runValue = a[cVar0];
	//    .local v4, "runValue":B
	runLength = 0x1;
	//    .local v3, "runLength":I
	state = std::make_shared<std::vector<unsigned char[]>>(0x2);
	//    .local v5, "state":[B
	i = 0x1;
	//    .local v2, "i":I
label_goto_19:
	if ( i >= a->size() )
		goto label_cond_2f;
	b = a[i];
	//    .local v0, "b":B
	if ( b != runValue )
		goto label_cond_29;
	if ( runLength >= 0xff )
		goto label_cond_29;
	runLength = ( runLength + 0x1);
label_goto_26:
	i = ( i + 0x1);
	goto label_goto_19;
	// 2218    .line 348
label_cond_29:
	android::icu::impl::Utility::encodeRun(buffer, runValue, runLength, state);
	runValue = b;
	runLength = 0x1;
	goto label_goto_26;
	// 2230    .line 353
	// 2231    .end local v0    # "b":B
label_cond_2f:
	android::icu::impl::Utility::encodeRun(buffer, runValue, runLength, state);
	if ( !(state[cVar0]) )  
		goto label_cond_39;
	android::icu::impl::Utility::appendEncodedByte(buffer, cVar0, state);
label_cond_39:
	return buffer->toString();

}
// .method public static final arrayToRLEString([C)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::arrayToRLEString(std::shared_ptr<char[]> a)
{
	
	std::shared_ptr<java::lang::StringBuilder> buffer;
	char runValue;
	int runLength;
	int i;
	char s;
	int runValue;
	
	//    .param p0, "a"    # [C
	buffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buffer":Ljava/lang/StringBuilder;
	buffer->append((char)(_shri(a->size(),0x10)));
	buffer->append((char)(a->size()));
	runValue = a[0x0];
	//    .local v3, "runValue":C
	runLength = 0x1;
	//    .local v2, "runLength":I
	i = 0x1;
	//    .local v1, "i":I
label_goto_16:
	if ( i >= a->size() )
		goto label_cond_2e;
	s = a[i];
	//    .local v4, "s":C
	if ( s != runValue )
		goto label_cond_27;
	if ( runLength >= 0xffff )
		goto label_cond_27;
	runLength = ( runLength + 0x1);
label_goto_24:
	i = ( i + 0x1);
	goto label_goto_16;
	// 2316    .line 314
label_cond_27:
	android::icu::impl::Utility::encodeRun(buffer, (short)(runValue), runLength);
	runValue = s;
	runLength = 0x1;
	goto label_goto_24;
	// 2330    .line 319
	// 2331    .end local v4    # "s":C
label_cond_2e:
	android::icu::impl::Utility::encodeRun(buffer, (short)(runValue), runLength);
	return buffer->toString();

}
// .method public static final arrayToRLEString([I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::arrayToRLEString(std::shared_ptr<int[]> a)
{
	
	std::shared_ptr<java::lang::StringBuilder> buffer;
	int runValue;
	int runLength;
	int i;
	int s;
	
	//    .param p0, "a"    # [I
	buffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buffer":Ljava/lang/StringBuilder;
	android::icu::impl::Utility::appendInt(buffer, a->size());
	runValue = a[0x0];
	//    .local v3, "runValue":I
	runLength = 0x1;
	//    .local v2, "runLength":I
	i = 0x1;
	//    .local v1, "i":I
label_goto_e:
	if ( i >= a->size() )
		goto label_cond_25;
	s = a[i];
	//    .local v4, "s":I
	if ( s != runValue )
		goto label_cond_1f;
	if ( runLength >= 0xffff )
		goto label_cond_1f;
	runLength = ( runLength + 0x1);
label_goto_1c:
	i = ( i + 0x1);
	goto label_goto_e;
	// 2400    .line 249
label_cond_1f:
	android::icu::impl::Utility::encodeRun(buffer, runValue, runLength);
	runValue = s;
	runLength = 0x1;
	goto label_goto_1c;
	// 2412    .line 254
	// 2413    .end local v4    # "s":I
label_cond_25:
	android::icu::impl::Utility::encodeRun(buffer, runValue, runLength);
	return buffer->toString();

}
// .method public static final arrayToRLEString([S)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::arrayToRLEString(std::shared_ptr<short[]> a)
{
	
	std::shared_ptr<java::lang::StringBuilder> buffer;
	short runValue;
	int runLength;
	int i;
	short s;
	
	//    .param p0, "a"    # [S
	buffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buffer":Ljava/lang/StringBuilder;
	buffer->append((char)(_shri(a->size(),0x10)));
	buffer->append((char)(a->size()));
	runValue = a[0x0];
	//    .local v3, "runValue":S
	runLength = 0x1;
	//    .local v2, "runLength":I
	i = 0x1;
	//    .local v1, "i":I
label_goto_16:
	if ( i >= a->size() )
		goto label_cond_2d;
	s = a[i];
	//    .local v4, "s":S
	if ( s != runValue )
		goto label_cond_27;
	if ( runLength >= 0xffff )
		goto label_cond_27;
	runLength = ( runLength + 0x1);
label_goto_24:
	i = ( i + 0x1);
	goto label_goto_16;
	// 2490    .line 282
label_cond_27:
	android::icu::impl::Utility::encodeRun(buffer, runValue, runLength);
	runValue = s;
	runLength = 0x1;
	goto label_goto_24;
	// 2502    .line 287
	// 2503    .end local v4    # "s":S
label_cond_2d:
	android::icu::impl::Utility::encodeRun(buffer, runValue, runLength);
	return buffer->toString();

}
// .method public static checkCompare(Ljava/lang/Comparable;Ljava/lang/Comparable;)I
int android::icu::impl::Utility::checkCompare(std::shared_ptr<java::lang::Comparable<T>> a,std::shared_ptr<java::lang::Comparable<T>> b)
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2518        value = {
	// 2519            "<T::",
	// 2520            "Ljava/lang/Comparable",
	// 2521            "<TT;>;>(TT;TT;)I"
	// 2522        }
	// 2523    .end annotation
	//    .local p0, "a":Ljava/lang/Comparable;, "TT;"
	//    .local p1, "b":Ljava/lang/Comparable;, "TT;"
	if ( a )     
		goto label_cond_8;
	if ( b )     
		goto label_cond_6;
	cVar0 = 0x0;
label_goto_5:
	return cVar0;
	// 2540    .line 202
label_cond_6:
	cVar0 = -0x1;
	goto label_goto_5;
	// 2546    .line 203
label_cond_8:
	if ( b )     
		goto label_cond_c;
	cVar0 = 0x1;
	goto label_goto_5;
label_cond_c:
	cVar0 = a->compareTo(b);
	goto label_goto_5;

}
// .method public static checkHash(Ljava/lang/Object;)I
int android::icu::impl::Utility::checkHash(std::shared_ptr<java::lang::Object> a)
{
	
	int cVar0;
	
	//    .param p0, "a"    # Ljava/lang/Object;
	if ( a )     
		goto label_cond_4;
	cVar0 = 0x0;
label_goto_3:
	return cVar0;
label_cond_4:
	cVar0 = a->hashCode();
	goto label_goto_3;

}
// .method public static final compareUnsigned(II)I
int android::icu::impl::Utility::compareUnsigned(int source,int target)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	
	//    .param p0, "source"    # I
	//    .param p1, "target"    # I
	cVar0 = -0x80000000;
	cVar1 = (source +  cVar0);
	cVar2 = (target +  cVar0);
	if ( cVar1 >= cVar2 )
		goto label_cond_8;
	return -0x1;
	// 2605    .line 1694
label_cond_8:
	if ( cVar1 <= cVar2 )
		goto label_cond_c;
	return 0x1;
	// 2614    .line 1697
label_cond_c:
	return 0x0;

}
// .method private static final encodeRun(Ljava/lang/Appendable;BI[B)V
void android::icu::impl::Utility::encodeRun(std::shared_ptr<java::lang::Appendable> buffer,unsigned char value,int cVar1,std::shared_ptr<unsigned char[]> state)
{
	
	unsigned char cVar0;
	int j;
	int cVar1;
	
	//    .param p1, "value"    # B
	//    .param p2, "length"    # I
	//    .param p3, "state"    # [B
	//    .annotation system Ldalvik/annotation/Signature;
	// 2627        value = {
	// 2628            "<T::",
	// 2629            "Ljava/lang/Appendable;",
	// 2630            ">(TT;BI[B)V"
	// 2631        }
	// 2632    .end annotation
	//    .local p0, "buffer":Ljava/lang/Appendable;, "TT;"
	cVar0 = -0x5b;
	if ( cVar1 >= 0x4 )
		goto label_cond_13;
	j = 0x0;
	//    .local v0, "j":I
label_goto_6:
	if ( j >= cVar1 )
		goto label_cond_2a;
	if ( value != cVar0 )
		goto label_cond_d;
	android::icu::impl::Utility::appendEncodedByte(buffer, cVar0, state);
label_cond_d:
	android::icu::impl::Utility::appendEncodedByte(buffer, value, state);
	j = ( j + 0x1);
	goto label_goto_6;
	// 2664    .line 443
	// 2665    .end local v0    # "j":I
label_cond_13:
	if ( (unsigned char)(cVar1) != cVar0 )
		goto label_cond_20;
	if ( value != cVar0 )
		goto label_cond_1b;
	android::icu::impl::Utility::appendEncodedByte(buffer, cVar0, state);
label_cond_1b:
	android::icu::impl::Utility::appendEncodedByte(buffer, value, state);
	cVar1 = ( cVar1 + -0x1);
label_cond_20:
	android::icu::impl::Utility::appendEncodedByte(buffer, cVar0, state);
	android::icu::impl::Utility::appendEncodedByte(buffer, (unsigned char)(cVar1), state);
	android::icu::impl::Utility::appendEncodedByte(buffer, value, state);
label_cond_2a:
	return;

}
// .method private static final encodeRun(Ljava/lang/Appendable;II)V
void android::icu::impl::Utility::encodeRun(std::shared_ptr<java::lang::Appendable> buffer,int value,int cVar1)
{
	
	int cVar0;
	int j;
	int cVar1;
	
	//    .param p1, "value"    # I
	//    .param p2, "length"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 2705        value = {
	// 2706            "<T::",
	// 2707            "Ljava/lang/Appendable;",
	// 2708            ">(TT;II)V"
	// 2709        }
	// 2710    .end annotation
	//    .local p0, "buffer":Ljava/lang/Appendable;, "TT;"
	cVar0 = 0xa5a5;
	if ( cVar1 >= 0x4 )
		goto label_cond_14;
	j = 0x0;
	//    .local v0, "j":I
label_goto_7:
	if ( j >= cVar1 )
		goto label_cond_29;
	if ( value != cVar0 )
		goto label_cond_e;
	android::icu::impl::Utility::appendInt(buffer, value);
label_cond_e:
	android::icu::impl::Utility::appendInt(buffer, value);
	j = ( j + 0x1);
	goto label_goto_7;
	// 2743    .line 376
	// 2744    .end local v0    # "j":I
label_cond_14:
	if ( cVar1 != cVar0 )
		goto label_cond_20;
	if ( value != cVar0 )
		goto label_cond_1b;
	android::icu::impl::Utility::appendInt(buffer, cVar0);
label_cond_1b:
	android::icu::impl::Utility::appendInt(buffer, value);
	cVar1 = ( cVar1 + -0x1);
label_cond_20:
	android::icu::impl::Utility::appendInt(buffer, cVar0);
	android::icu::impl::Utility::appendInt(buffer, cVar1);
	android::icu::impl::Utility::appendInt(buffer, value);
label_cond_29:
	return;

}
// .method private static final encodeRun(Ljava/lang/Appendable;SI)V
void android::icu::impl::Utility::encodeRun(std::shared_ptr<java::lang::Appendable> buffer,short value,int cVar1)
{
	
	int cVar0;
	char valueChar;
	int j;
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar2;
	int cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "value"    # S
	//    .param p2, "length"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 2781        value = {
	// 2782            "<T::",
	// 2783            "Ljava/lang/Appendable;",
	// 2784            ">(TT;SI)V"
	// 2785        }
	// 2786    .end annotation
	//    .local p0, "buffer":Ljava/lang/Appendable;, "TT;"
	cVar0 = 0xa5a5;
	valueChar = (char)(value);
	//    .local v2, "valueChar":C
	if ( cVar1 >= 0x4 )
		goto label_cond_18;
	j = 0x0;
	//    .local v1, "j":I
label_goto_8:
	if ( j >= cVar1 )
		goto label_cond_34;
	if ( valueChar != cVar0 )
		goto label_cond_12;
	try {
	//label_try_start_f:
	buffer->append(0xa5a5);
label_cond_12:
	buffer->append(valueChar);
	j = ( j + 0x1);
	goto label_goto_8;
	// 2826    .line 414
	// 2827    .end local v1    # "j":I
label_cond_18:
	if ( cVar1 != cVar0 )
		goto label_cond_27;
	if ( valueChar != cVar0 )
		goto label_cond_22;
	buffer->append(0xa5a5);
label_cond_22:
	buffer->append(valueChar);
	cVar1 = ( cVar1 + -0x1);
label_cond_27:
	buffer->append(0xa5a5);
	buffer->append((char)(cVar1));
	buffer->append(valueChar);
	//label_try_end_34:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35;
	}
	//    .catch Ljava/io/IOException; {:try_start_f .. :try_end_34} :catch_35
label_cond_34:
	return;
	// 2866    .line 425
label_catch_35:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method public static final escape(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::escape(std::shared_ptr<java::lang::String> s)
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	int i;
	int c;
	int four;
	std::shared_ptr<java::lang::String> cVar0;
	int cVar1;
	
	//    .param p0, "s"    # Ljava/lang/String;
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v3, "i":I
label_goto_6:
	if ( i >= s->length() )
		goto label_cond_50;
	c = java::lang::Character::codePointAt(s, i);
	//    .local v1, "c":I
	i = (i +  android::icu::text::UTF16::getCharCount(c));
	if ( c <  0x20 )
		goto label_cond_2d;
	if ( c >  0x7f )
		goto label_cond_2d;
	if ( c != 0x5c )
		goto label_cond_28;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\\\")));
	goto label_goto_6;
	// 2935    .line 764
label_cond_28:
	buf->append((char)(c));
	goto label_goto_6;
	// 2943    .line 767
label_cond_2d:
	if ( c >  0xffff )
		goto label_cond_47;
	four = 0x1;
	//    .local v2, "four":Z
label_goto_33:
	if ( !(four) )  
		goto label_cond_49;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("\\u"));
label_goto_38:
	buf->append(cVar0);
	if ( !(four) )  
		goto label_cond_4d;
	cVar1 = 0x4;
label_goto_3f:
	buf->append(android::icu::impl::Utility::hex((long long)(c), cVar1));
	goto label_goto_6;
	// 2977    .line 767
	// 2978    .end local v2    # "four":Z
label_cond_47:
	four = 0x0;
	//    .restart local v2    # "four":Z
	goto label_goto_33;
	// 2985    .line 768
label_cond_49:
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("\\U"));
	goto label_goto_38;
	// 2991    .line 769
label_cond_4d:
	cVar1 = 0x8;
	goto label_goto_3f;
	// 2997    .line 772
	// 2998    .end local v1    # "c":I
	// 2999    .end local v2    # "four":Z
label_cond_50:
	return buf->toString();

}
// .method public static escapeUnprintable(Ljava/lang/Appendable;I)Z
bool android::icu::impl::Utility::escapeUnprintable(std::shared_ptr<java::lang::Appendable> result,int c)
{
	
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "c"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 3012        value = {
	// 3013            "<T::",
	// 3014            "Ljava/lang/Appendable;",
	// 3015            ">(TT;I)Z"
	// 3016        }
	// 3017    .end annotation
	//    .local p0, "result":Ljava/lang/Appendable;, "TT;"
	try {
	//label_try_start_1:
	if ( !(android::icu::impl::Utility::isUnprintable(c)) )  
		goto label_cond_7b;
	result->append(0x5c);
	if ( !((-0x10000 &  c)) )  
		goto label_cond_6e;
	result->append(0x55);
	result->append(android::icu::impl::Utility::DIGITS[( _shri(c,0x1c) & 0xf)]);
	result->append(android::icu::impl::Utility::DIGITS[( _shri(c,0x18) & 0xf)]);
	result->append(android::icu::impl::Utility::DIGITS[( _shri(c,0x14) & 0xf)]);
	result->append(android::icu::impl::Utility::DIGITS[( _shri(c,0x10) & 0xf)]);
label_goto_42:
	result->append(android::icu::impl::Utility::DIGITS[( _shri(c,0xc) & 0xf)]);
	result->append(android::icu::impl::Utility::DIGITS[( _shri(c,0x8) & 0xf)]);
	result->append(android::icu::impl::Utility::DIGITS[( _shri(c,0x4) & 0xf)]);
	result->append(android::icu::impl::Utility::DIGITS[( c & 0xf)]);
	return 0x1;
	// 3140    .line 1499
label_cond_6e:
	result->append(0x75);
	//label_try_end_73:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_74;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_73} :catch_74
	goto label_goto_42;
	// 3150    .line 1508
label_catch_74:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 3162    .line 1507
	// 3163    .end local v0    # "e":Ljava/io/IOException;
label_cond_7b:
	return 0x0;

}
// .method public static final format1ForSource(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::format1ForSource(std::shared_ptr<java::lang::String> s)
{
	
	char cVar0;
	char cVar1;
	std::shared_ptr<java::lang::StringBuilder> buffer;
	int i;
	char c;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar0 = 0x5c;
	cVar1 = 0x22;
	buffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buffer":Ljava/lang/StringBuilder;
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")));
	i = 0x0;
	//    .local v2, "i":I
label_goto_10:
	if ( i >= s->length() )
		goto label_cond_a4;
	//    .end local v2    # "i":I
	//    .local v3, "i":I
	c = s->charAt(i);
	//    .local v1, "c":C
	if ( c <  0x20 )
		goto label_cond_22;
	if ( c != cVar1 )
		goto label_cond_2e;
label_cond_22:
	if ( c != 0xa )
		goto label_cond_38;
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\n")));
label_goto_2c:
	i = ( i + 0x1);
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_10;
	// 3234    .line 718
	// 3235    .end local v2    # "i":I
	// 3236    .restart local v3    # "i":I
label_cond_2e:
	if ( c == cVar0 )
		goto label_cond_22;
	if ( c >  0x7e )
		goto label_cond_71;
	buffer->append(c);
	goto label_goto_2c;
	// 3250    .line 721
label_cond_38:
	if ( c != 0x9 )
		goto label_cond_43;
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\t")));
	goto label_goto_2c;
	// 3263    .line 723
label_cond_43:
	if ( c != 0xd )
		goto label_cond_4e;
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\r")));
	goto label_goto_2c;
	// 3276    .line 730
label_cond_4e:
	buffer->append(cVar0);
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[_shri(( c & 0x1c0),0x6)]);
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[_shri(( c & 0x38),0x3)]);
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[( c & 0x7)]);
	goto label_goto_2c;
	// 3313    .line 740
label_cond_71:
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\u")));
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[_shri((0xf000 &  c),0xc)]);
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[_shri(( c & 0xf00),0x8)]);
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[_shri(( c & 0xf0),0x4)]);
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[( c & 0xf)]);
	goto label_goto_2c;
	// 3365    .line 747
	// 3366    .end local v1    # "c":C
	// 3367    .end local v3    # "i":I
	// 3368    .restart local v2    # "i":I
label_cond_a4:
	buffer->append(cVar1);
	return buffer->toString();

}
// .method public static final formatForSource(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::formatForSource(std::shared_ptr<java::lang::String> s)
{
	
	char cVar0;
	char cVar1;
	std::shared_ptr<java::lang::StringBuilder> buffer;
	int i;
	int count;
	char c;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar0 = 0x5c;
	cVar1 = 0x22;
	buffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buffer":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v3, "i":I
label_goto_a:
	if ( i >= s->length() )
		goto label_cond_cf;
	if ( i <= 0 )
		goto label_cond_1d;
	buffer->append(0x2b)->append(android::icu::impl::Utility::LINE_SEPARATOR);
label_cond_1d:
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("        \")));
	count = 0xb;
	//    .local v2, "count":I
label_goto_25:
	if ( i >= s->length() )
		goto label_cond_ca;
	if ( count >= 0x50 )
		goto label_cond_ca;
	//    .end local v3    # "i":I
	//    .local v4, "i":I
	c = s->charAt(i);
	//    .local v1, "c":C
	if ( c <  0x20 )
		goto label_cond_3b;
	if ( c != cVar1 )
		goto label_cond_49;
label_cond_3b:
	if ( c != 0xa )
		goto label_cond_55;
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\n")));
	count = ( count + 0x2);
label_goto_47:
	i = ( i + 0x1);
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_25;
	// 3479    .line 666
	// 3480    .end local v3    # "i":I
	// 3481    .restart local v4    # "i":I
label_cond_49:
	if ( c == cVar0 )
		goto label_cond_3b;
	if ( c >  0x7e )
		goto label_cond_94;
	buffer->append(c);
	count = ( count + 0x1);
	goto label_goto_47;
	// 3498    .line 670
label_cond_55:
	if ( c != 0x9 )
		goto label_cond_62;
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\t")));
	count = ( count + 0x2);
	goto label_goto_47;
	// 3514    .line 673
label_cond_62:
	if ( c != 0xd )
		goto label_cond_6f;
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\r")));
	count = ( count + 0x2);
	goto label_goto_47;
	// 3530    .line 681
label_cond_6f:
	buffer->append(cVar0);
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[_shri(( c & 0x1c0),0x6)]);
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[_shri(( c & 0x38),0x3)]);
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[( c & 0x7)]);
	count = ( count + 0x4);
	goto label_goto_47;
	// 3570    .line 693
label_cond_94:
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\u")));
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[_shri((0xf000 &  c),0xc)]);
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[_shri(( c & 0xf00),0x8)]);
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[_shri(( c & 0xf0),0x4)]);
	buffer->append(android::icu::impl::Utility::HEX_DIGIT[( c & 0xf)]);
	count = ( count + 0x6);
	goto label_goto_47;
	// 3625    .line 701
	// 3626    .end local v1    # "c":C
	// 3627    .end local v4    # "i":I
	// 3628    .restart local v3    # "i":I
label_cond_ca:
	buffer->append(cVar1);
	goto label_goto_a;
	// 3634    .line 703
	// 3635    .end local v2    # "count":I
label_cond_cf:
	return buffer->toString();

}
// .method public static fromHex(Ljava/lang/String;ILjava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::fromHex(std::shared_ptr<java::lang::String> string,int minLength,std::shared_ptr<java::lang::String> separator)
{
	
	std::shared_ptr<java::lang::String> separator;
	
	//    .param p0, "string"    # Ljava/lang/String;
	//    .param p1, "minLength"    # I
	//    .param p2, "separator"    # Ljava/lang/String;
	if ( !(separator) )  
		goto label_cond_b;
	//    .end local p2    # "separator":Ljava/lang/String;
label_goto_2:
	return android::icu::impl::Utility::fromHex(string, minLength, java::util::regex::Pattern::compile(separator));
	// 3666    .restart local p2    # "separator":Ljava/lang/String;
label_cond_b:
	separator = std::make_shared<java::lang::String>(std::make_shared<char[]>("\\s+"));
	goto label_goto_2;

}
// .method public static fromHex(Ljava/lang/String;ILjava/util/regex/Pattern;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::fromHex(std::shared_ptr<java::lang::String> string,int minLength,std::shared_ptr<java::util::regex::Pattern> separator)
{
	
	std::shared_ptr<java::lang::StringBuilder> buffer;
	auto parts;
	int cVar0;
	std::shared_ptr<java::lang::String> part;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "string"    # Ljava/lang/String;
	//    .param p1, "minLength"    # I
	//    .param p2, "separator"    # Ljava/util/regex/Pattern;
	buffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buffer":Ljava/lang/StringBuilder;
	parts = separator->split(string);
	//    .local v3, "parts":[Ljava/lang/String;
	cVar0 = 0x0;
label_goto_b:
	if ( cVar0 >= parts->size() )
		goto label_cond_3b;
	part = parts[cVar0];
	//    .local v2, "part":Ljava/lang/String;
	if ( part->length() >= minLength )
		goto label_cond_2f;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("code point too short: ")))->append(part)->toString());
	// throw
	throw cVar1;
	// 3735    .line 1809
label_cond_2f:
	//    .local v1, "cp":I
	buffer->appendCodePoint(java::lang::Integer::parseInt(part, 0x10));
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_b;
	// 3752    .line 1812
	// 3753    .end local v1    # "cp":I
	// 3754    .end local v2    # "part":Ljava/lang/String;
label_cond_3b:
	return buffer->toString();

}
// .method static final getInt(Ljava/lang/String;I)I
int android::icu::impl::Utility::getInt(std::shared_ptr<java::lang::String> s,int i)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "i"    # I
	return (( s->charAt(( i * 0x2)) << 0x10) |  s->charAt(( ( i * 0x2) + 0x1)));

}
// .method public static hex(Ljava/lang/CharSequence;ILjava/lang/CharSequence;ZLjava/lang/Appendable;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::impl::Utility::hex(std::shared_ptr<java::lang::CharSequence> s,int width,std::shared_ptr<java::lang::CharSequence> separator,bool useCodePoints,std::shared_ptr<java::lang::Appendable> result)
{
	
	int i;
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar0;
	int cp;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "width"    # I
	//    .param p3, "useCodePoints"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 3796        value = {
	// 3797            "<S::",
	// 3798            "Ljava/lang/CharSequence;",
	// 3799            "U::",
	// 3800            "Ljava/lang/CharSequence;",
	// 3801            "T::",
	// 3802            "Ljava/lang/Appendable;",
	// 3803            ">(TS;ITU;ZTT;)TT;"
	// 3804        }
	// 3805    .end annotation
	//    .local p0, "s":Ljava/lang/CharSequence;, "TS;"
	//    .local p2, "separator":Ljava/lang/CharSequence;, "TU;"
	//    .local p4, "result":Ljava/lang/Appendable;, "TT;"
	if ( !(useCodePoints) )  
		goto label_cond_20;
	i = 0x0;
	//    .local v2, "i":I
label_goto_3:
	try {
	//label_try_start_3:
	if ( i >= s->length() )
		goto label_cond_3b;
	cp = java::lang::Character::codePointAt(s, i);
	//    .local v0, "cp":I
	if ( !(i) )  
		goto label_cond_12;
	result->append(separator);
label_cond_12:
	result->append(android::icu::impl::Utility::hex((long long)(cp), width));
	i = (i +  android::icu::text::UTF16::getCharCount(cp));
	goto label_goto_3;
	// 3857    .line 1021
	// 3858    .end local v0    # "cp":I
	// 3859    .end local v2    # "i":I
label_cond_20:
	i = 0x0;
	//    .restart local v2    # "i":I
label_goto_21:
	if ( i >= s->length() )
		goto label_cond_3b;
	if ( !(i) )  
		goto label_cond_2c;
	result->append(separator);
label_cond_2c:
	result->append(android::icu::impl::Utility::hex((long long)(s->charAt(i)), width));
	//label_try_end_38:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3c;
	}
	//    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_38} :catch_3c
	i = ( i + 0x1);
	goto label_goto_21;
	// 3898    .line 1028
label_cond_3b:
	return result;
	// 3902    .line 1029
label_catch_3c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public static hex(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::hex(long long ch)
{
	
	//    .param p0, "ch"    # J
	return android::icu::impl::Utility::hex(ch, 0x4);

}
// .method public static hex(JI)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::hex(long long cVar0,int places)
{
	
	int negative;
	long long cVar0;
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "i"    # J
	//    .param p2, "places"    # I
	if ( (cVar0 > -0x8000000000000000L) )     
		goto label_cond_a;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("-8000000000000000"));
	// 3947    .line 982
label_cond_a:
	if ( (cVar0 > 0x0) >= 0 )
		goto label_cond_58;
	negative = 0x1;
	//    .local v0, "negative":Z
label_goto_11:
	if ( !(negative) )  
		goto label_cond_14;
	cVar0 = (0 - cVar0);
label_cond_14:
	result = java::lang::Long::toString(cVar0, 0x10)->toUpperCase(java::util::Locale::ENGLISH);
	//    .local v1, "result":Ljava/lang/String;
	if ( result->length() >= places )
		goto label_cond_42;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	result = cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("0000000000000000"))->substring(result->length(), places))->append(result)->toString();
label_cond_42:
	if ( !(negative) )  
		goto label_cond_5a;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	return cVar2->append(0x2d)->append(result)->toString();
	// 4039    .line 982
	// 4040    .end local v0    # "negative":Z
	// 4041    .end local v1    # "result":Ljava/lang/String;
label_cond_58:
	negative = 0x0;
	//    .restart local v0    # "negative":Z
	goto label_goto_11;
	// 4048    .line 993
	// 4049    .restart local v1    # "result":Ljava/lang/String;
label_cond_5a:
	return result;

}
// .method public static hex(Ljava/lang/CharSequence;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::hex(std::shared_ptr<java::lang::CharSequence> s)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = android::icu::impl::Utility::hex(s, 0x4, std::make_shared<java::lang::String>(std::make_shared<char[]>(",")), 0x1, cVar0);
	cVar1->checkCast("java::lang::StringBuilder");
	return cVar1->toString();

}
// .method public static hex(Ljava/lang/CharSequence;ILjava/lang/CharSequence;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::hex(std::shared_ptr<java::lang::CharSequence> s,int width,std::shared_ptr<java::lang::CharSequence> separator)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "width"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 4087        value = {
	// 4088            "<S::",
	// 4089            "Ljava/lang/CharSequence;",
	// 4090            ">(TS;ITS;)",
	// 4091            "Ljava/lang/String;"
	// 4092        }
	// 4093    .end annotation
	//    .local p0, "s":Ljava/lang/CharSequence;, "TS;"
	//    .local p2, "separator":Ljava/lang/CharSequence;, "TS;"
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = android::icu::impl::Utility::hex(s, width, separator, 0x1, cVar0);
	cVar1->checkCast("java::lang::StringBuilder");
	return cVar1->toString();

}
// .method public static hex([BIILjava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::hex(std::shared_ptr<unsigned char[]> o,int start,int end,std::shared_ptr<java::lang::String> separator)
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	int i;
	
	//    .param p0, "o"    # [B
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "separator"    # Ljava/lang/String;
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "result":Ljava/lang/StringBuilder;
	i = start;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= end )
		goto label_cond_1a;
	if ( !(i) )  
		goto label_cond_d;
	result->append(separator);
label_cond_d:
	result->append(android::icu::impl::Utility::hex((long long)(o[i])));
	i = ( i + 0x1);
	goto label_goto_6;
	// 4161    .line 1041
label_cond_1a:
	return result->toString();

}
// .method public static final highBit(I)B
unsigned char android::icu::impl::Utility::highBit(int cVar4)
{
	
	int cVar0;
	int cVar4;
	unsigned char bit;
	
	//    .param p0, "n"    # I
	cVar0 = 0x10;
	if ( cVar4 > 0 ) 
		goto label_cond_6;
	return -0x1;
	// 4185    .line 1715
label_cond_6:
	//    .local v0, "bit":B
	if ( cVar4 <  0x10000 )
		goto label_cond_e;
	cVar4 = _shri(cVar4,0x10);
	bit = (unsigned char)(cVar0);
	//    .end local v0    # "bit":B
label_cond_e:
	if ( cVar4 <  0x100 )
		goto label_cond_17;
	cVar4 = _shri(cVar4,0x8);
	bit = (unsigned char)(( bit + 0x8));
label_cond_17:
	if ( cVar4 <  cVar0 )
		goto label_cond_1e;
	cVar4 = _shri(cVar4,0x4);
	bit = (unsigned char)(( bit + 0x4));
label_cond_1e:
	if ( cVar4 <  0x4 )
		goto label_cond_26;
	cVar4 = _shri(cVar4,0x2);
	bit = (unsigned char)(( bit + 0x2));
label_cond_26:
	if ( cVar4 <  0x2 )
		goto label_cond_2e;
	_shri(cVar4,0x1);
label_cond_2e:
	return 0x0;

}
// .method public static isUnprintable(I)Z
bool android::icu::impl::Utility::isUnprintable(int c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # I
	cVar0 = 0x1;
	if ( c <  0x20 )
		goto label_cond_9;
	if ( c <= 0x7e )
		goto label_cond_a;
label_cond_9:
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public static lookup(Ljava/lang/String;[Ljava/lang/String;)I
int android::icu::impl::Utility::lookup(std::shared_ptr<java::lang::String> source,std::shared_ptr<std::vector<java::lang::String>> target)
{
	
	int i;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "target"    # [Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= target->size() )
		goto label_cond_10;
	if ( !(source->equals(target[i])) )  
		goto label_cond_d;
	return i;
	// 4313    .line 1113
label_cond_d:
	i = ( i + 0x1);
	goto label_goto_1;
	// 4319    .line 1116
label_cond_10:
	return -0x1;

}
// .method public static final objectEquals(Ljava/lang/Object;Ljava/lang/Object;)Z
bool android::icu::impl::Utility::objectEquals(std::shared_ptr<java::lang::Object> a,std::shared_ptr<java::lang::Object> b)
{
	
	bool cVar1;
	
	//    .param p0, "a"    # Ljava/lang/Object;
	//    .param p1, "b"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( a )     
		goto label_cond_7;
	if ( b )     
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
label_goto_6:
	return cVar1;
	// 4347    .line 194
label_cond_7:
	if ( !(b) )  
		goto label_cond_6;
	cVar1 = a->equals(b);
	goto label_goto_6;

}
// .method public static parseChar(Ljava/lang/String;[IC)Z
bool android::icu::impl::Utility::parseChar(std::shared_ptr<java::lang::String> id,std::shared_ptr<int[]> pos,char ch)
{
	
	bool cVar0;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "pos"    # [I
	//    .param p2, "ch"    # C
	cVar0 = 0x0;
	//    .local v0, "start":I
	pos[cVar0] = android::icu::impl::PatternProps::skipWhiteSpace(id, pos[cVar0]);
	if ( pos[cVar0] == id->length() )
		goto label_cond_1b;
	if ( id->charAt(pos[cVar0]) == ch )
		goto label_cond_1e;
label_cond_1b:
	pos[cVar0] = pos[cVar0];
	return cVar0;
	// 4405    .line 1139
label_cond_1e:
	pos[cVar0] = ( pos[cVar0] + 0x1);
	return 0x1;

}
// .method public static parseInteger(Ljava/lang/String;[II)I
int android::icu::impl::Utility::parseInteger(std::shared_ptr<java::lang::String> rule,std::shared_ptr<int[]> pos,int limit)
{
	
	int cVar0;
	int count;
	int value;
	int p;
	int radix;
	int d;
	int v;
	
	//    .param p0, "rule"    # Ljava/lang/String;
	//    .param p1, "pos"    # [I
	//    .param p2, "limit"    # I
	cVar0 = 0x0;
	count = 0x0;
	//    .local v6, "count":I
	value = 0x0;
	//    .local v11, "value":I
	p = pos[cVar0];
	//    .local v2, "p":I
	0xa;
	//    .local v9, "radix":I
	if ( !(rule->regionMatches(0x1, p, std::make_shared<java::lang::String>(std::make_shared<char[]>("0x")), cVar0, 0x2)) )  
		goto label_cond_2d;
	radix = 0x10;
	p = ( p + 0x2);
	//    .end local v2    # "p":I
	//    .local v8, "p":I
label_goto_18:
	if ( p >= limit )
		goto label_cond_4c;
	p = ( p + 0x1);
	//    .end local v8    # "p":I
	//    .restart local v2    # "p":I
	d = android::icu::lang::UCharacter::digit(rule->charAt(p), radix);
	//    .local v7, "d":I
	if ( d >= 0 )
		goto label_cond_40;
	//    .end local v7    # "d":I
label_goto_28:
	if ( count <= 0 )
		goto label_cond_2c;
	pos[cVar0] = ( p + -0x1);
label_cond_2c:
	return value;
	// 4505    .line 1291
label_cond_2d:
	if ( p >= limit )
		goto label_cond_3e;
	if ( rule->charAt(p) != 0x30 )
		goto label_cond_3e;
	count = 0x1;
	0x8;
	p = ( p + 0x1);
	//    .end local v2    # "p":I
	//    .restart local v8    # "p":I
	goto label_goto_18;
	// 4532    .end local v8    # "p":I
	// 4533    .restart local v2    # "p":I
label_cond_3e:
	p = p;
	//    .end local v2    # "p":I
	//    .restart local v8    # "p":I
	goto label_goto_18;
	// 4542    .line 1303
	// 4543    .end local v8    # "p":I
	// 4544    .restart local v2    # "p":I
	// 4545    .restart local v7    # "d":I
label_cond_40:
	count = ( count + 0x1);
	v = ((value * radix) + d);
	//    .local v10, "v":I
	if ( v >  value )
		goto label_cond_49;
	return cVar0;
	// 4561    .line 1312
label_cond_49:
	value = v;
	p = p;
	//    .end local v2    # "p":I
	//    .restart local v8    # "p":I
	goto label_goto_18;
	// 4571    .end local v7    # "d":I
	// 4572    .end local v10    # "v":I
label_cond_4c:
	p;
	//    .end local v8    # "p":I
	//    .restart local v2    # "p":I
	goto label_goto_28;

}
// .method public static parseNumber(Ljava/lang/String;[II)I
int android::icu::impl::Utility::parseNumber(std::shared_ptr<java::lang::String> text,std::shared_ptr<int[]> pos,int radix)
{
	
	int cVar0;
	int cVar1;
	int n;
	int p;
	int d;
	
	//    .param p0, "text"    # Ljava/lang/String;
	//    .param p1, "pos"    # [I
	//    .param p2, "radix"    # I
	cVar0 = -0x1;
	cVar1 = 0x0;
	n = 0x0;
	//    .local v2, "n":I
	p = pos[cVar1];
	//    .local v3, "p":I
label_goto_5:
	if ( p >= text->length() )
		goto label_cond_15;
	//    .local v0, "ch":I
	d = android::icu::lang::UCharacter::digit(java::lang::Character::codePointAt(text, p), radix);
	//    .local v1, "d":I
	if ( d >= 0 )
		goto label_cond_1a;
	//    .end local v0    # "ch":I
	//    .end local v1    # "d":I
label_cond_15:
	if ( p != pos[cVar1] )
		goto label_cond_24;
	return cVar0;
	// 4634    .line 1457
	// 4635    .restart local v0    # "ch":I
	// 4636    .restart local v1    # "d":I
label_cond_1a:
	n = ((radix * n) + d);
	if ( n >= 0 )
		goto label_cond_21;
	return cVar0;
	// 4648    .line 1463
label_cond_21:
	p = ( p + 0x1);
	goto label_goto_5;
	// 4654    .line 1468
	// 4655    .end local v0    # "ch":I
	// 4656    .end local v1    # "d":I
label_cond_24:
	pos[cVar1] = p;
	return n;

}
// .method public static parsePattern(Ljava/lang/String;IILjava/lang/String;[I)I
int android::icu::impl::Utility::parsePattern(std::shared_ptr<java::lang::String> rule,int pos,int limit,std::shared_ptr<java::lang::String> pattern,std::shared_ptr<int[]> parsedInts)
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> p;
	int intCount;
	int i;
	int cpat;
	int pos;
	
	//    .param p0, "rule"    # Ljava/lang/String;
	//    .param p1, "pos"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "pattern"    # Ljava/lang/String;
	//    .param p4, "parsedInts"    # [I
	cVar0 = 0x0;
	cVar1 = -0x1;
	p = std::make_shared<std::vector<int[]>>(0x1);
	//    .local v5, "p":[I
	intCount = 0x0;
	//    .local v3, "intCount":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_7:
	if ( i >= pattern->length() )
		goto label_cond_52;
	cpat = pattern->charAt(i);
	//    .local v1, "cpat":C
	// switch
	{
	auto item = ( cpat );
	if (item == 0x20) goto label_sswitch_17;
	if (item == 0x23) goto label_sswitch_2f;
	if (item == 0x7e) goto label_sswitch_28;
	}
	if ( pos <  limit )
		goto label_cond_42;
	return cVar1;
	// 4713    .line 1173
label_sswitch_17:
	if ( pos <  limit )
		goto label_cond_1a;
	return cVar1;
	// 4720    .line 1176
label_cond_1a:
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v6, "pos":I
	//    .local v0, "c":C
	if ( android::icu::impl::PatternProps::isWhiteSpace(rule->charAt(pos)) )     
		goto label_cond_27;
	return cVar1;
label_cond_27:
	pos = pos;
	//    .end local v0    # "c":C
	//    .end local v6    # "pos":I
	//    .restart local p1    # "pos":I
label_sswitch_28:
	pos = android::icu::impl::PatternProps::skipWhiteSpace(rule, pos);
label_goto_2c:
	i = ( i + 0x1);
	goto label_goto_7;
	// 4759    .line 1185
label_sswitch_2f:
	p[cVar0] = pos;
	//    .end local v3    # "intCount":I
	//    .local v4, "intCount":I
	parsedInts[intCount] = android::icu::impl::Utility::parseInteger(rule, p, limit);
	if ( p[cVar0] != pos )
		goto label_cond_3e;
	return cVar1;
	// 4782    .line 1191
label_cond_3e:
	pos = p[cVar0];
	intCount = ( intCount + 0x1);
	//    .end local v4    # "intCount":I
	//    .restart local v3    # "intCount":I
	goto label_goto_2c;
	// 4793    .line 1197
label_cond_42:
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .restart local v6    # "pos":I
	//    .restart local v0    # "c":C
	if ( (char)(android::icu::lang::UCharacter::toLowerCase(rule->charAt(pos))) == cpat )
		goto label_cond_50;
	return cVar1;
label_cond_50:
	pos = pos;
	//    .end local v6    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_2c;
	// 4824    .line 1204
	// 4825    .end local v0    # "c":C
	// 4826    .end local v1    # "cpat":C
label_cond_52:
	return pos;
	// 4830    .line 1171
	// 4831    nop
	// 4833    :sswitch_data_54
	// 4834    .sparse-switch
	// 4835        0x20 -> :sswitch_17
	// 4836        0x23 -> :sswitch_2f
	// 4837        0x7e -> :sswitch_28
	// 4838    .end sparse-switch

}
// .method public static parsePattern(Ljava/lang/String;Landroid/icu/text/Replaceable;II)I
int android::icu::impl::Utility::parsePattern(std::shared_ptr<java::lang::String> pat,std::shared_ptr<android::icu::text::Replaceable> text,int index,int limit)
{
	
	int cVar0;
	int ipat;
	int cpat;
	int c;
	int index;
	int n;
	
	//    .param p0, "pat"    # Ljava/lang/String;
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "index"    # I
	//    .param p3, "limit"    # I
	cVar0 = -0x1;
	ipat = 0x0;
	//    .local v2, "ipat":I
	if ( pat->length() )     
		goto label_cond_9;
	return index;
	// 4865    .line 1234
label_cond_9:
	cpat = java::lang::Character::codePointAt(pat, ipat);
	//    .local v1, "cpat":I
label_goto_d:
	if ( index >= limit )
		goto label_cond_41;
	c = text->char32At(index);
	//    .local v0, "c":I
	if ( cpat != 0x7e )
		goto label_cond_2c;
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(c)) )  
		goto label_cond_23;
	index = (index +  android::icu::text::UTF16::getCharCount(c));
	goto label_goto_d;
	// 4904    .line 1245
label_cond_23:
	ipat = ( ipat + 0x1);
	if ( ipat != pat->length() )
		goto label_cond_3c;
	return index;
	// 4917    .line 1253
label_cond_2c:
	if ( c != cpat )
		goto label_cond_3b;
	n = android::icu::text::UTF16::getCharCount(c);
	//    .local v3, "n":I
	index = (index +  n);
	ipat = (ipat +  n);
	if ( ipat != pat->length() )
		goto label_cond_3c;
	return index;
	// 4943    .line 1265
	// 4944    .end local v3    # "n":I
label_cond_3b:
	return cVar0;
	// 4948    .line 1268
label_cond_3c:
	cpat = android::icu::text::UTF16::charAt(pat, ipat);
	goto label_goto_d;
	// 4956    .line 1271
	// 4957    .end local v0    # "c":I
label_cond_41:
	return cVar0;

}
// .method public static parseUnicodeIdentifier(Ljava/lang/String;[I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::parseUnicodeIdentifier(std::shared_ptr<java::lang::String> str,std::shared_ptr<int[]> pos)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> buf;
	int p;
	int ch;
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "pos"    # [I
	cVar0 = 0x0;
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	p = pos[cVar0];
	//    .local v2, "p":I
label_goto_8:
	if ( p >= str->length() )
		goto label_cond_33;
	ch = java::lang::Character::codePointAt(str, p);
	//    .local v1, "ch":I
	if ( buf->length() )     
		goto label_cond_29;
	if ( !(android::icu::lang::UCharacter::isUnicodeIdentifierStart(ch)) )  
		goto label_cond_27;
	buf->appendCodePoint(ch);
label_goto_21:
	p = (p +  android::icu::text::UTF16::getCharCount(ch));
	goto label_goto_8;
	// 5021    .line 1343
label_cond_27:
	return 0x0;
	// 5027    .line 1346
label_cond_29:
	if ( !(android::icu::lang::UCharacter::isUnicodeIdentifierPart(ch)) )  
		goto label_cond_33;
	buf->appendCodePoint(ch);
	goto label_goto_21;
	// 5040    .line 1354
	// 5041    .end local v1    # "ch":I
label_cond_33:
	pos[cVar0] = p;
	return buf->toString();

}
// .method public static quotedIndexOf(Ljava/lang/String;IILjava/lang/String;)I
int android::icu::impl::Utility::quotedIndexOf(std::shared_ptr<java::lang::String> text,int start,int limit,std::shared_ptr<java::lang::String> setOfChars)
{
	
	int cVar0;
	int i;
	int c;
	
	//    .param p0, "text"    # Ljava/lang/String;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "setOfChars"    # Ljava/lang/String;
	cVar0 = 0x27;
	i = start;
	//    .local v1, "i":I
label_goto_3:
	if ( i >= limit )
		goto label_cond_26;
	c = text->charAt(i);
	//    .local v0, "c":C
	if ( c != 0x5c )
		goto label_cond_12;
	i = ( i + 0x1);
label_cond_f:
	i = ( i + 0x1);
	goto label_goto_3;
	// 5090    .line 1535
label_cond_12:
	if ( c != cVar0 )
		goto label_cond_1f;
label_goto_14:
	i = ( i + 0x1);
	if ( i >= limit )
		goto label_cond_f;
	if ( text->charAt(i) == cVar0 )
		goto label_cond_f;
	goto label_goto_14;
	// 5109    .line 1538
label_cond_1f:
	if ( setOfChars->indexOf(c) < 0 ) 
		goto label_cond_f;
	return i;
	// 5120    .line 1542
	// 5121    .end local v0    # "c":C
label_cond_26:
	return -0x1;

}
// .method private static recursiveAppendNumber(Ljava/lang/Appendable;III)V
void android::icu::impl::Utility::recursiveAppendNumber(std::shared_ptr<java::lang::Appendable> result,int n,int radix,int minDigits)
{
	
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "n"    # I
	//    .param p2, "radix"    # I
	//    .param p3, "minDigits"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 5134        value = {
	// 5135            "<T::",
	// 5136            "Ljava/lang/Appendable;",
	// 5137            ">(TT;III)V"
	// 5138        }
	// 5139    .end annotation
	//    .local p0, "result":Ljava/lang/Appendable;, "TT;"
	try {
	//label_try_start_0:
	//    .local v0, "digit":I
	if ( n >= radix )
		goto label_cond_7;
	if ( minDigits <= 0x1 )
		goto label_cond_e;
label_cond_7:
	android::icu::impl::Utility::recursiveAppendNumber(result, (n / radix), radix, ( minDigits + -0x1));
label_cond_e:
	result->append(android::icu::impl::Utility::DIGITS[(n % radix)]);
	//label_try_end_15:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_15} :catch_16
	return;
	// 5176    .line 1386
	// 5177    .end local v0    # "digit":I
label_catch_16:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public static repeat(Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::repeat(std::shared_ptr<java::lang::String> s,int count)
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	int i;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "count"    # I
	if ( count > 0 ) 
		goto label_cond_6;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 5203    .line 1765
label_cond_6:
	if ( count != 0x1 )
		goto label_cond_a;
	return s;
	// 5211    .line 1766
label_cond_a:
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "result":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v0, "i":I
label_goto_10:
	if ( i >= count )
		goto label_cond_18;
	result->append(s);
	i = ( i + 0x1);
	goto label_goto_10;
	// 5233    .line 1770
label_cond_18:
	return result->toString();

}
// .method public static final sameObjects(Ljava/lang/Object;Ljava/lang/Object;)Z
bool android::icu::impl::Utility::sameObjects(std::shared_ptr<java::lang::Object> a,std::shared_ptr<java::lang::Object> b)
{
	
	bool cVar0;
	
	//    .param p0, "a"    # Ljava/lang/Object;
	//    .param p1, "b"    # Ljava/lang/Object;
	if ( a != b )
		goto label_cond_4;
	cVar0 = 0x1;
label_goto_3:
	return cVar0;
label_cond_4:
	cVar0 = 0x0;
	goto label_goto_3;

}
// .method public static split(Ljava/lang/String;C[Ljava/lang/String;)V
void android::icu::impl::Utility::split(std::shared_ptr<java::lang::String> s,char divider,std::shared_ptr<std::vector<java::lang::String>> output)
{
	
	int last;
	int current;
	int i;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "divider"    # C
	//    .param p2, "output"    # [Ljava/lang/String;
	last = 0x0;
	//    .local v3, "last":I
	current = 0x0;
	//    .local v0, "current":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_3:
	if ( i >= s->length() )
		goto label_cond_1d;
	if ( s->charAt(i) != divider )
		goto label_cond_1a;
	//    .end local v0    # "current":I
	//    .local v1, "current":I
	output[current] = s->substring(last, i);
	last = ( i + 0x1);
	current = ( current + 0x1);
	//    .end local v1    # "current":I
	//    .restart local v0    # "current":I
label_cond_1a:
	i = ( i + 0x1);
	goto label_goto_3;
	// 5319    .line 1073
label_cond_1d:
	//    .end local v0    # "current":I
	//    .restart local v1    # "current":I
	output[current] = s->substring(last, i);
	current = ( current + 0x1);
	//    .end local v1    # "current":I
	//    .restart local v0    # "current":I
label_goto_26:
	if ( current >= output->size() )
		goto label_cond_32;
	//    .end local v0    # "current":I
	//    .restart local v1    # "current":I
	output[current] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	current = ( current + 0x1);
	//    .end local v1    # "current":I
	//    .restart local v0    # "current":I
	goto label_goto_26;
	// 5356    .line 1077
label_cond_32:
	return;

}
// .method public static split(Ljava/lang/String;C)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::split(std::shared_ptr<java::lang::String> s,char divider)
{
	
	int last;
	std::shared_ptr<java::util::ArrayList> output;
	int i;
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "divider"    # C
	last = 0x0;
	//    .local v1, "last":I
	output = std::make_shared<java::util::ArrayList>();
	//    .local v2, "output":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( i >= s->length() )
		goto label_cond_1f;
	if ( s->charAt(i) != divider )
		goto label_cond_1c;
	output->add(s->substring(last, i));
	last = ( i + 0x1);
label_cond_1c:
	i = ( i + 0x1);
	goto label_goto_7;
	// 5411    .line 1098
label_cond_1f:
	output->add(s->substring(last, i));
	cVar0 = output->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(output->size()));
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method public static splitString(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::splitString(std::shared_ptr<java::lang::String> src,std::shared_ptr<java::lang::String> target)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "src"    # Ljava/lang/String;
	//    .param p1, "target"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return src->split(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\Q")))->append(target)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\E")))->toString());

}
// .method public static splitWhitespace(Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::splitWhitespace(std::shared_ptr<java::lang::String> src)
{
	
	//    .param p0, "src"    # Ljava/lang/String;
	return src->split(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\s+")));

}
// .method public static unescape(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::unescape(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared<std::vector<int[]>> pos;
	int i;
	char c;
	int e;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar0 = 0x0;
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	pos = std::make_shared<std::vector<int[]>>(0x1);
	//    .local v5, "pos":[I
	i = 0x0;
	//    .local v3, "i":I
label_goto_a:
	if ( i >= s->length() )
		goto label_cond_57;
	i = ( i + 0x1);
	//    .end local v3    # "i":I
	//    .local v4, "i":I
	c = s->charAt(i);
	//    .local v1, "c":C
	if ( c != 0x5c )
		goto label_cond_52;
	pos[cVar0] = i;
	e = android::icu::impl::Utility::unescapeAt(s, pos);
	//    .local v2, "e":I
	if ( e >= 0 )
		goto label_cond_4c;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid escape sequence ")))->append(s->substring(( i + -0x1), java::lang::Math::min(( i + 0x8), s->length())))->toString());
	// throw
	throw cVar1;
	// 5588    .line 935
label_cond_4c:
	buf->appendCodePoint(e);
	i = pos[cVar0];
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_a;
	// 5599    .line 938
	// 5600    .end local v2    # "e":I
	// 5601    .end local v3    # "i":I
	// 5602    .restart local v4    # "i":I
label_cond_52:
	buf->append(c);
	i = i;
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_a;
	// 5612    .line 941
	// 5613    .end local v1    # "c":C
label_cond_57:
	return buf->toString();

}
// .method public static unescapeAt(Ljava/lang/String;[I)I
int android::icu::impl::Utility::unescapeAt(std::shared_ptr<java::lang::String> s,std::shared_ptr<int[]> offset16)
{
	
	int result;
	int n;
	int minDig;
	int offset;
	int length;
	int c;
	int dig;
	int bitsPerDigit;
	int cVar0;
	int ahead;
	std::shared<std::vector<int[]>> o;
	int i;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "offset16"    # [I
	result = 0x0;
	//    .local v12, "result":I
	n = 0x0;
	//    .local v9, "n":I
	minDig = 0x0;
	//    .local v8, "minDig":I
	0x0;
	//    .local v7, "maxDig":I
	0x4;
	//    .local v1, "bitsPerDigit":I
	//    .local v2, "braces":Z
	offset = offset16[0x0];
	//    .local v11, "offset":I
	length = s->length();
	//    .local v6, "length":I
	if ( offset < 0 ) 
		goto label_cond_11;
	if ( offset <  length )
		goto label_cond_13;
label_cond_11:
	return -0x1;
	// 5675    .line 818
label_cond_13:
	c = java::lang::Character::codePointAt(s, offset);
	//    .local v3, "c":I
	offset = (offset +  android::icu::text::UTF16::getCharCount(c));
	// switch
	{
	auto item = ( c );
	if (item == 0x55) goto label_sswitch_48;
	if (item == 0x75) goto label_sswitch_45;
	if (item == 0x78) goto label_sswitch_4d;
	}
	dig = android::icu::lang::UCharacter::digit(c, 0x8);
	//    .local v4, "dig":I
	if ( dig < 0 ) 
		goto label_cond_2c;
	minDig = 0x1;
	n = 0x1;
	bitsPerDigit = 0x3;
	result = dig;
	//    .end local v4    # "dig":I
label_cond_2c:
label_goto_2c:
	if ( !(minDig) )  
		goto label_cond_b5;
label_goto_2e:
	if ( offset >= length )
		goto label_cond_41;
	if ( n >= 0x3 )
		goto label_cond_41;
	c = android::icu::text::UTF16::charAt(s, offset);
	if ( bitsPerDigit != 0x3 )
		goto label_cond_60;
	cVar0 = 0x8;
label_goto_3b:
	dig = android::icu::lang::UCharacter::digit(c, cVar0);
	//    .restart local v4    # "dig":I
	if ( dig >= 0 )
		goto label_cond_63;
	//    .end local v4    # "dig":I
label_cond_41:
	if ( n >= minDig )
		goto label_cond_6f;
	return -0x1;
	// 5761    .line 824
label_sswitch_45:
	0x4;
	minDig = 0x4;
	goto label_goto_2c;
	// 5770    .line 827
label_sswitch_48:
	0x8;
	minDig = 0x8;
	goto label_goto_2c;
	// 5779    .line 830
label_sswitch_4d:
	minDig = 0x1;
	if ( offset >= length )
		goto label_cond_5e;
	if ( android::icu::text::UTF16::charAt(s, offset) != 0x7b )
		goto label_cond_5e;
	offset = ( offset + 0x1);
	0x1;
	0x8;
	goto label_goto_2c;
	// 5806    .line 836
label_cond_5e:
	0x2;
	goto label_goto_2c;
	// 5812    .line 853
label_cond_60:
	cVar0 = 0x10;
	goto label_goto_3b;
	// 5818    .line 857
	// 5819    .restart local v4    # "dig":I
label_cond_63:
	result = ((result << bitsPerDigit) | dig);
	offset = (offset +  android::icu::text::UTF16::getCharCount(c));
	n = ( n + 0x1);
	goto label_goto_2e;
	// 5837    .line 864
	// 5838    .end local v4    # "dig":I
label_cond_6f:
	if ( !(0x0) )  
		goto label_cond_79;
	if ( c == 0x7d )
		goto label_cond_77;
	return -0x1;
	// 5852    .line 868
label_cond_77:
	offset = ( offset + 0x1);
label_cond_79:
	if ( result < 0 ) 
		goto label_cond_7f;
	if ( result <  0x110000 )
		goto label_cond_81;
label_cond_7f:
	return -0x1;
	// 5870    .line 877
label_cond_81:
	if ( offset >= length )
		goto label_cond_b1;
	if ( !(android::icu::text::UTF16::isLeadSurrogate((char)(result))) )  
		goto label_cond_b1;
	ahead = ( offset + 0x1);
	//    .local v0, "ahead":I
	c = s->charAt(offset);
	if ( c != 0x5c )
		goto label_cond_a3;
	if ( ahead >= length )
		goto label_cond_a3;
	o = std::make_shared<std::vector<int[]>>(0x1);
	o[0x0] = ahead;
	//    .local v10, "o":[I
	c = android::icu::impl::Utility::unescapeAt(s, o);
	//    .end local v10    # "o":[I
label_cond_a3:
	if ( !(android::icu::text::UTF16::isTrailSurrogate((char)(c))) )  
		goto label_cond_b1;
	offset = o[0x0];
	result = java::lang::Character::toCodePoint((char)(result), (char)(c));
	//    .end local v0    # "ahead":I
label_cond_b1:
	offset16[0x0] = offset;
	return result;
	// 5953    .line 896
label_cond_b5:
	i = 0x0;
	//    .local v5, "i":I
label_goto_b6:
	if ( i >= android::icu::impl::Utility::UNESCAPE_MAP->size() )
		goto label_cond_d1;
	if ( c != android::icu::impl::Utility::UNESCAPE_MAP[i] )
		goto label_cond_cb;
	offset16[0x0] = offset;
	return android::icu::impl::Utility::UNESCAPE_MAP[( i + 0x1)];
	// 5986    .line 900
label_cond_cb:
	if ( c >= android::icu::impl::Utility::UNESCAPE_MAP[i] )
		goto label_cond_e6;
label_cond_d1:
	if ( c != 0x63 )
		goto label_cond_e9;
	if ( offset >= length )
		goto label_cond_e9;
	c = android::icu::text::UTF16::charAt(s, offset);
	offset16[0x0] = (android::icu::text::UTF16::getCharCount(c) +  offset);
	return ( c & 0x1f);
	// 6023    .line 896
label_cond_e6:
	i = ( i + 0x2);
	goto label_goto_b6;
	// 6029    .line 914
label_cond_e9:
	offset16[0x0] = offset;
	return c;
	// 6038    .line 822
	// 6039    nop
	// 6041    :sswitch_data_ee
	// 6042    .sparse-switch
	// 6043        0x55 -> :sswitch_48
	// 6044        0x75 -> :sswitch_45
	// 6045        0x78 -> :sswitch_4d
	// 6046    .end sparse-switch

}
// .method public static unescapeLeniently(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::unescapeLeniently(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared<std::vector<int[]>> pos;
	int i;
	char c;
	int e;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar0 = 0x0;
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	pos = std::make_shared<std::vector<int[]>>(0x1);
	//    .local v5, "pos":[I
	i = 0x0;
	//    .local v3, "i":I
label_goto_a:
	if ( i >= s->length() )
		goto label_cond_32;
	i = ( i + 0x1);
	//    .end local v3    # "i":I
	//    .local v4, "i":I
	c = s->charAt(i);
	//    .local v1, "c":C
	if ( c != 0x5c )
		goto label_cond_2d;
	pos[cVar0] = i;
	e = android::icu::impl::Utility::unescapeAt(s, pos);
	//    .local v2, "e":I
	if ( e >= 0 )
		goto label_cond_27;
	buf->append(c);
	i = i;
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_a;
	// 6115    .line 959
	// 6116    .end local v3    # "i":I
	// 6117    .restart local v4    # "i":I
label_cond_27:
	buf->appendCodePoint(e);
	i = pos[cVar0];
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_a;
	// 6128    .line 963
	// 6129    .end local v2    # "e":I
	// 6130    .end local v3    # "i":I
	// 6131    .restart local v4    # "i":I
label_cond_2d:
	buf->append(c);
	i = i;
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_a;
	// 6141    .line 966
	// 6142    .end local v1    # "c":C
label_cond_32:
	return buf->toString();

}
// .method public static valueOf([I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Utility::valueOf(std::shared_ptr<int[]> source)
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	int i;
	
	//    .param p0, "source"    # [I
	result = std::make_shared<java::lang::StringBuilder>(source->size());
	//    .local v1, "result":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( i >= source->size() )
		goto label_cond_12;
	result->appendCodePoint(source[i]);
	i = ( i + 0x1);
	goto label_goto_7;
	// 6183    .line 1754
label_cond_12:
	return result->toString();

}


