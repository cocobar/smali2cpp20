// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\DontCareFieldPosition.smali
#include "java2ctype.h"
#include "android.icu.impl.DontCareFieldPosition.h"
#include "java.text.FieldPosition.h"

static android::icu::impl::DontCareFieldPosition::INSTANCE;
// .method static constructor <clinit>()V
void android::icu::impl::DontCareFieldPosition::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::DontCareFieldPosition> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::DontCareFieldPosition>();
	android::icu::impl::DontCareFieldPosition::INSTANCE = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::impl::DontCareFieldPosition::DontCareFieldPosition()
{
	
	java::text::FieldPosition::(-0x366bb660);
	return;

}
// .method public setBeginIndex(I)V
void android::icu::impl::DontCareFieldPosition::setBeginIndex(int i)
{
	
	//    .param p1, "i"    # I
	return;

}
// .method public setEndIndex(I)V
void android::icu::impl::DontCareFieldPosition::setEndIndex(int i)
{
	
	//    .param p1, "i"    # I
	return;

}


