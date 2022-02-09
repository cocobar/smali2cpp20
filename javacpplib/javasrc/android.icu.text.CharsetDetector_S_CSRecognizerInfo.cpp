// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetDetector$CSRecognizerInfo.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector_S_CSRecognizerInfo.h"
#include "android.icu.text.CharsetRecognizer.h"

// .method constructor <init>(Landroid/icu/text/CharsetRecognizer;Z)V
android::icu::text::CharsetDetector_S_CSRecognizerInfo::CharsetDetector_S_CSRecognizerInfo(std::shared_ptr<android::icu::text::CharsetRecognizer> recognizer,bool isDefaultEnabled)
{
	
	//    .param p1, "recognizer"    # Landroid/icu/text/CharsetRecognizer;
	//    .param p2, "isDefaultEnabled"    # Z
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->recognizer = recognizer;
	this->isDefaultEnabled = isDefaultEnabled;
	return;

}


