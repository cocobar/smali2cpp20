// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Bidi$InsertPoints.smali
#include "java2ctype.h"
#include "android.icu.text.Bidi_S_InsertPoints.h"
#include "android.icu.text.Bidi_S_Point.h"

// .method constructor <init>()V
android::icu::text::Bidi_S_InsertPoints::Bidi_S_InsertPoints()
{
	
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->points = std::make_shared<std::vector<std::vector<android::icu::text::Bidi_S_Point>>>(0x0);
	return;

}


