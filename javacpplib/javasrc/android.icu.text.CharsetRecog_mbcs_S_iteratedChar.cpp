// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_mbcs$iteratedChar.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetRecog_mbcs_S_iteratedChar.h"

// .method constructor <init>()V
android::icu::text::CharsetRecog_mbcs_S_iteratedChar::CharsetRecog_mbcs_S_iteratedChar()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->charValue = cVar0;
	this->nextIndex = cVar0;
	this->error = cVar0;
	this->done = cVar0;
	return;

}
// .method nextByte(Landroid/icu/text/CharsetDetector;)I
int android::icu::text::CharsetRecog_mbcs_S_iteratedChar::nextByte(std::shared_ptr<android::icu::text::CharsetDetector> det)
{
	
	int cVar0;
	
	//    .param p1, "det"    # Landroid/icu/text/CharsetDetector;
	if ( this->nextIndex <  det->fRawLength )
		goto label_cond_b;
	this->done = 0x1;
	return -0x1;
	// 077    .line 162
label_cond_b:
	cVar0 = this->nextIndex;
	this->nextIndex = ( cVar0 + 0x1);
	//    .local v0, "byteValue":I
	return ( det->fRawInput[cVar0] & 0xff);

}
// .method reset()V
void android::icu::text::CharsetRecog_mbcs_S_iteratedChar::reset()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->charValue = cVar0;
	this->nextIndex = cVar0;
	this->error = cVar0;
	this->done = cVar0;
	return;

}


