// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Bidi$BracketData.smali
#include "java2ctype.h"
#include "android.icu.text.Bidi_S_BracketData.h"
#include "android.icu.text.Bidi_S_IsoRun.h"
#include "android.icu.text.Bidi_S_Opening.h"

// .method constructor <init>()V
android::icu::text::Bidi_S_BracketData::Bidi_S_BracketData()
{
	
	// 033    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->openings = std::make_shared<std::vector<std::vector<android::icu::text::Bidi_S_Opening>>>(0x14);
	this->isoRuns = std::make_shared<std::vector<std::vector<android::icu::text::Bidi_S_IsoRun>>>(0x7f);
	return;

}


