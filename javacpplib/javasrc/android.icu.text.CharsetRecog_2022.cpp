// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_2022.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetRecog_2022.h"

// .method constructor <init>()V
android::icu::text::CharsetRecog_2022::CharsetRecog_2022()
{
	
	// 022    invoke-direct {p0}, Landroid/icu/text/CharsetRecognizer;-><init>()V
	return;

}
// .method match([BI[[B)I
int android::icu::text::CharsetRecog_2022::match(std::shared_ptr<unsigned char[]> text,int textLen,std::shared_ptr<unsigned char[][]> escapeSequences)
{
	
	int hits;
	int misses;
	int shifts;
	int i;
	int escN;
	auto seq;
	int j;
	int quality;
	
	//    .param p1, "text"    # [B
	//    .param p2, "textLen"    # I
	//    .param p3, "escapeSequences"    # [[B
	hits = 0x0;
	//    .local v1, "hits":I
	misses = 0x0;
	//    .local v4, "misses":I
	shifts = 0x0;
	//    .local v7, "shifts":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_5:
	if ( i >= textLen )
		goto label_cond_44;
	if ( text[i] != 0x1b )
		goto label_cond_35;
	escN = 0x0;
	//    .local v0, "escN":I
label_goto_e:
	if ( escN >= escapeSequences->size() )
		goto label_cond_33;
	seq = escapeSequences[escN];
	//    .local v6, "seq":[B
	if ( (textLen - i) >= seq->size() )
		goto label_cond_1b;
label_cond_18:
	escN = ( escN + 0x1);
	goto label_goto_e;
	// 090    .line 53
label_cond_1b:
	j = 0x1;
	//    .local v3, "j":I
label_goto_1c:
	if ( j >= seq->size() )
		goto label_cond_2a;
	if ( seq[j] != text[(i + j)] )
		goto label_cond_18;
	j = ( j + 0x1);
	goto label_goto_1c;
	// 114    .line 59
label_cond_2a:
	hits = ( hits + 0x1);
	i = (i +  ( seq->size() + -0x1));
	//    .end local v0    # "escN":I
	//    .end local v3    # "j":I
	//    .end local v6    # "seq":[B
label_cond_30:
label_goto_30:
	i = ( i + 0x1);
	goto label_goto_5;
	// 135    .line 64
	// 136    .restart local v0    # "escN":I
label_cond_33:
	misses = ( misses + 0x1);
	//    .end local v0    # "escN":I
label_cond_35:
	if ( text[i] == 0xe )
		goto label_cond_41;
	if ( text[i] != 0xf )
		goto label_cond_30;
label_cond_41:
	shifts = ( shifts + 0x1);
	goto label_goto_30;
	// 161    .line 73
label_cond_44:
	if ( hits )     
		goto label_cond_47;
	return 0x0;
	// 168    .line 83
label_cond_47:
	quality = ((( hits * 0x64) -  ( misses * 0x64)) / (hits + misses));
	//    .local v5, "quality":I
	if ( (hits + shifts) >= 0x5 )
		goto label_cond_5c;
	quality = (quality -  ( ( (hits + shifts) - 0x5) * 0xa));
label_cond_5c:
	if ( quality >= 0 )
		goto label_cond_5f;
label_cond_5f:
	return quality;

}


