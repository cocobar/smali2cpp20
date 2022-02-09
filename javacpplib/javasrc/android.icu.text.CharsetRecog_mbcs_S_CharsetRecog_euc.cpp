// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_mbcs$CharsetRecog_euc.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetRecog_mbcs_S_CharsetRecog_euc.h"
#include "android.icu.text.CharsetRecog_mbcs_S_iteratedChar.h"

// .method constructor <init>()V
android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc::CharsetRecog_mbcs_S_CharsetRecog_euc()
{
	
	// 030    invoke-direct {p0}, Landroid/icu/text/CharsetRecog_mbcs;-><init>()V
	return;

}
// .method nextChar(Landroid/icu/text/CharsetRecog_mbcs$iteratedChar;Landroid/icu/text/CharsetDetector;)Z
bool android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc::nextChar(std::shared_ptr<android::icu::text::CharsetRecog_mbcs_S_iteratedChar> it,std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	bool cVar0;
	int cVar1;
	bool cVar2;
	int firstByte;
	int secondByte;
	int thirdByte;
	
	//    .param p1, "it"    # Landroid/icu/text/CharsetRecog_mbcs$iteratedChar;
	//    .param p2, "det"    # Landroid/icu/text/CharsetDetector;
	cVar0 = 0x0;
	cVar1 = 0xa1;
	cVar2 = 0x1;
	it->error = cVar0;
	0x0;
	//    .local v0, "firstByte":I
	0x0;
	//    .local v1, "secondByte":I
	0x0;
	//    .local v2, "thirdByte":I
	firstByte = it->nextByte(det);
	//    .end local v0    # "firstByte":I
	it->charValue = firstByte;
	//    .restart local v0    # "firstByte":I
	if ( firstByte >= 0 )
		goto label_cond_18;
	it->done = cVar2;
label_cond_13:
label_goto_13:
	if ( it->done )     
		goto label_cond_4f;
label_goto_17:
	return cVar2;
	// 089    .line 344
label_cond_18:
	if ( firstByte <= 0x8d )
		goto label_cond_13;
	secondByte = it->nextByte(det);
	it->charValue = (( it->charValue << 0x8) |  secondByte);
	if ( firstByte <  cVar1 )
		goto label_cond_32;
	if ( firstByte >  0xfe )
		goto label_cond_32;
	if ( secondByte >= cVar1 )
		goto label_cond_13;
	it->error = cVar2;
	goto label_goto_13;
	// 124    .line 359
label_cond_32:
	if ( firstByte != 0x8e )
		goto label_cond_3b;
	if ( secondByte >= cVar1 )
		goto label_cond_13;
	it->error = cVar2;
	goto label_goto_13;
	// 138    .line 372
label_cond_3b:
	if ( firstByte != 0x8f )
		goto label_cond_13;
	thirdByte = it->nextByte(det);
	it->charValue = (( it->charValue << 0x8) |  thirdByte);
	if ( thirdByte >= cVar1 )
		goto label_cond_13;
	it->error = cVar2;
	goto label_goto_13;
label_cond_4f:
	cVar2 = cVar0;
	goto label_goto_17;

}


