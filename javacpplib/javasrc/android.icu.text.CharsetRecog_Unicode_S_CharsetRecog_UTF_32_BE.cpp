// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_Unicode$CharsetRecog_UTF_32_BE.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE::CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE()
{
	
	// 023    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_Unicode$CharsetRecog_UTF_32;-><init>()V
	return;

}
// .method getChar([BI)I
int android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE::getChar(std::shared_ptr<unsigned char[]> input,int index)
{
	
	//    .param p1, "input"    # [B
	//    .param p2, "index"    # I
	return (((( ( input[( index + 0x0)] & 0xff) << 0x18) |  ( ( input[( index + 0x1)] & 0xff) << 0x10)) |  ( ( input[( index + 0x2)] & 0xff) << 0x8)) |  ( input[( index + 0x3)] & 0xff));

}
// .method getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF-32BE"));

}


