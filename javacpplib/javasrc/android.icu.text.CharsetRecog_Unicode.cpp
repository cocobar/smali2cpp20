// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_Unicode.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetRecog_Unicode.h"

// .method constructor <init>()V
android::icu::text::CharsetRecog_Unicode::CharsetRecog_Unicode()
{
	
	// 024    invoke-direct {p0}, Landroid/icu/text/CharsetRecognizer;-><init>()V
	return;

}
// .method static adjustConfidence(II)I
int android::icu::text::CharsetRecog_Unicode::adjustConfidence(int codeUnit,int cVar1)
{
	
	int cVar1;
	
	//    .param p0, "codeUnit"    # I
	//    .param p1, "confidence"    # I
	if ( codeUnit )     
		goto label_cond_8;
	cVar1 = ( cVar1 + -0xa);
label_cond_4:
label_goto_4:
	if ( cVar1 >= 0 )
		goto label_cond_18;
	cVar1 = 0x0;
label_cond_7:
label_goto_7:
	return cVar1;
	// 054    .line 44
label_cond_8:
	if ( codeUnit <  0x20 )
		goto label_cond_13;
	if ( codeUnit >  0xff )
		goto label_cond_13;
label_goto_10:
	cVar1 = ( cVar1 + 0xa);
	goto label_goto_4;
	// 070    .line 44
label_cond_13:
	if ( codeUnit != 0xa )
		goto label_cond_4;
	goto label_goto_10;
	// 078    .line 49
label_cond_18:
	if ( cVar1 <= 0x64 )
		goto label_cond_7;
	cVar1 = 0x64;
	goto label_goto_7;

}
// .method static codeUnit16FromBytes(BB)I
int android::icu::text::CharsetRecog_Unicode::codeUnit16FromBytes(unsigned char hi,unsigned char lo)
{
	
	//    .param p0, "hi"    # B
	//    .param p1, "lo"    # B
	return (( ( hi & 0xff) << 0x8) |  ( lo & 0xff));

}


