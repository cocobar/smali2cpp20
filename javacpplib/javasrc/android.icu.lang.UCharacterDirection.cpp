// CPP L:\smali2cpp20\x64\Release\out\android\icu\lang\UCharacterDirection.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacterDirection.h"
#include "java.lang.String.h"

// .method private constructor <init>()V
android::icu::lang::UCharacterDirection::UCharacterDirection()
{
	
	// 015    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static toString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacterDirection::toString(int dir)
{
	
	//    .param p0, "dir"    # I
	// switch
	{
	auto item = ( dir );
	if (item == 0) goto label_pswitch_7;
	if (item == 1) goto label_pswitch_b;
	if (item == 2) goto label_pswitch_f;
	if (item == 3) goto label_pswitch_13;
	if (item == 4) goto label_pswitch_17;
	if (item == 5) goto label_pswitch_1b;
	if (item == 6) goto label_pswitch_1f;
	if (item == 7) goto label_pswitch_23;
	if (item == 8) goto label_pswitch_27;
	if (item == 9) goto label_pswitch_2b;
	if (item == 10) goto label_pswitch_2f;
	if (item == 11) goto label_pswitch_33;
	if (item == 12) goto label_pswitch_37;
	if (item == 13) goto label_pswitch_3b;
	if (item == 14) goto label_pswitch_3f;
	if (item == 15) goto label_pswitch_43;
	if (item == 16) goto label_pswitch_47;
	if (item == 17) goto label_pswitch_4b;
	if (item == 18) goto label_pswitch_4f;
	if (item == 19) goto label_pswitch_53;
	if (item == 20) goto label_pswitch_57;
	if (item == 21) goto label_pswitch_5b;
	if (item == 22) goto label_pswitch_5f;
	}
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Unassigned"));
	// 034    .line 45
label_pswitch_7:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Left-to-Right"));
	// 040    .line 47
label_pswitch_b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Right-to-Left"));
	// 046    .line 49
label_pswitch_f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("European Number"));
	// 052    .line 51
label_pswitch_13:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("European Number Separator"));
	// 058    .line 53
label_pswitch_17:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("European Number Terminator"));
	// 064    .line 55
label_pswitch_1b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Arabic Number"));
	// 070    .line 57
label_pswitch_1f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Common Number Separator"));
	// 076    .line 59
label_pswitch_23:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Paragraph Separator"));
	// 082    .line 61
label_pswitch_27:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Segment Separator"));
	// 088    .line 63
label_pswitch_2b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Whitespace"));
	// 094    .line 65
label_pswitch_2f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Other Neutrals"));
	// 100    .line 67
label_pswitch_33:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Left-to-Right Embedding"));
	// 106    .line 69
label_pswitch_37:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Left-to-Right Override"));
	// 112    .line 71
label_pswitch_3b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Right-to-Left Arabic"));
	// 118    .line 73
label_pswitch_3f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Right-to-Left Embedding"));
	// 124    .line 75
label_pswitch_43:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Right-to-Left Override"));
	// 130    .line 77
label_pswitch_47:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Pop Directional Format"));
	// 136    .line 79
label_pswitch_4b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Non-Spacing Mark"));
	// 142    .line 81
label_pswitch_4f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Boundary Neutral"));
	// 148    .line 83
label_pswitch_53:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("First Strong Isolate"));
	// 154    .line 85
label_pswitch_57:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Left-to-Right Isolate"));
	// 160    .line 87
label_pswitch_5b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Right-to-Left Isolate"));
	// 166    .line 89
label_pswitch_5f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Pop Directional Isolate"));
	// 172    .line 42
	// 173    nop
	// 175    :pswitch_data_64
	// 176    .packed-switch 0x0
	// 177        :pswitch_7
	// 178        :pswitch_b
	// 179        :pswitch_f
	// 180        :pswitch_13
	// 181        :pswitch_17
	// 182        :pswitch_1b
	// 183        :pswitch_1f
	// 184        :pswitch_23
	// 185        :pswitch_27
	// 186        :pswitch_2b
	// 187        :pswitch_2f
	// 188        :pswitch_33
	// 189        :pswitch_37
	// 190        :pswitch_3b
	// 191        :pswitch_3f
	// 192        :pswitch_43
	// 193        :pswitch_47
	// 194        :pswitch_4b
	// 195        :pswitch_4f
	// 196        :pswitch_53
	// 197        :pswitch_57
	// 198        :pswitch_5b
	// 199        :pswitch_5f
	// 200    .end packed-switch

}


