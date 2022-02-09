// CPP L:\smali2cpp20\x64\Release\out\android\icu\lang\UCharacterCategory.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacterCategory.h"
#include "java.lang.String.h"

// .method private constructor <init>()V
android::icu::lang::UCharacterCategory::UCharacterCategory()
{
	
	// 015    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static toString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacterCategory::toString(int category)
{
	
	//    .param p0, "category"    # I
	// switch
	{
	auto item = ( category );
	if (item == 1) goto label_pswitch_7;
	if (item == 2) goto label_pswitch_b;
	if (item == 3) goto label_pswitch_f;
	if (item == 4) goto label_pswitch_13;
	if (item == 5) goto label_pswitch_17;
	if (item == 6) goto label_pswitch_1b;
	if (item == 7) goto label_pswitch_1f;
	if (item == 8) goto label_pswitch_23;
	if (item == 9) goto label_pswitch_27;
	if (item == 10) goto label_pswitch_2b;
	if (item == 11) goto label_pswitch_2f;
	if (item == 12) goto label_pswitch_33;
	if (item == 13) goto label_pswitch_37;
	if (item == 14) goto label_pswitch_3b;
	if (item == 15) goto label_pswitch_3f;
	if (item == 16) goto label_pswitch_43;
	if (item == 17) goto label_pswitch_47;
	if (item == 18) goto label_pswitch_4b;
	if (item == 19) goto label_pswitch_4f;
	if (item == 20) goto label_pswitch_53;
	if (item == 21) goto label_pswitch_57;
	if (item == 22) goto label_pswitch_5b;
	if (item == 23) goto label_pswitch_5f;
	if (item == 24) goto label_pswitch_63;
	if (item == 25) goto label_pswitch_67;
	if (item == 26) goto label_pswitch_6b;
	if (item == 27) goto label_pswitch_6f;
	if (item == 28) goto label_pswitch_73;
	if (item == 29) goto label_pswitch_77;
	}
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Unassigned"));
	// 034    .line 43
label_pswitch_7:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Letter, Uppercase"));
	// 040    .line 45
label_pswitch_b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Letter, Lowercase"));
	// 046    .line 47
label_pswitch_f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Letter, Titlecase"));
	// 052    .line 49
label_pswitch_13:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Letter, Modifier"));
	// 058    .line 51
label_pswitch_17:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Letter, Other"));
	// 064    .line 53
label_pswitch_1b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Mark, Non-Spacing"));
	// 070    .line 55
label_pswitch_1f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Mark, Enclosing"));
	// 076    .line 57
label_pswitch_23:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Mark, Spacing Combining"));
	// 082    .line 59
label_pswitch_27:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Number, Decimal Digit"));
	// 088    .line 61
label_pswitch_2b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Number, Letter"));
	// 094    .line 63
label_pswitch_2f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Number, Other"));
	// 100    .line 65
label_pswitch_33:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Separator, Space"));
	// 106    .line 67
label_pswitch_37:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Separator, Line"));
	// 112    .line 69
label_pswitch_3b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Separator, Paragraph"));
	// 118    .line 71
label_pswitch_3f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Other, Control"));
	// 124    .line 73
label_pswitch_43:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Other, Format"));
	// 130    .line 75
label_pswitch_47:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Other, Private Use"));
	// 136    .line 77
label_pswitch_4b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Other, Surrogate"));
	// 142    .line 79
label_pswitch_4f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Punctuation, Dash"));
	// 148    .line 81
label_pswitch_53:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Punctuation, Open"));
	// 154    .line 83
label_pswitch_57:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Punctuation, Close"));
	// 160    .line 85
label_pswitch_5b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Punctuation, Connector"));
	// 166    .line 87
label_pswitch_5f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Punctuation, Other"));
	// 172    .line 89
label_pswitch_63:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Symbol, Math"));
	// 178    .line 91
label_pswitch_67:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Symbol, Currency"));
	// 184    .line 93
label_pswitch_6b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Symbol, Modifier"));
	// 190    .line 95
label_pswitch_6f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Symbol, Other"));
	// 196    .line 97
label_pswitch_73:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Punctuation, Initial quote"));
	// 202    .line 99
label_pswitch_77:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Punctuation, Final quote"));
	// 208    .line 41
	// 209    nop
	// 211    :pswitch_data_7c
	// 212    .packed-switch 0x1
	// 213        :pswitch_7
	// 214        :pswitch_b
	// 215        :pswitch_f
	// 216        :pswitch_13
	// 217        :pswitch_17
	// 218        :pswitch_1b
	// 219        :pswitch_1f
	// 220        :pswitch_23
	// 221        :pswitch_27
	// 222        :pswitch_2b
	// 223        :pswitch_2f
	// 224        :pswitch_33
	// 225        :pswitch_37
	// 226        :pswitch_3b
	// 227        :pswitch_3f
	// 228        :pswitch_43
	// 229        :pswitch_47
	// 230        :pswitch_4b
	// 231        :pswitch_4f
	// 232        :pswitch_53
	// 233        :pswitch_57
	// 234        :pswitch_5b
	// 235        :pswitch_5f
	// 236        :pswitch_63
	// 237        :pswitch_67
	// 238        :pswitch_6b
	// 239        :pswitch_6f
	// 240        :pswitch_73
	// 241        :pswitch_77
	// 242    .end packed-switch

}


