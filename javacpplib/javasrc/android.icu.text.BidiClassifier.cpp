// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BidiClassifier.smali
#include "java2ctype.h"
#include "android.icu.text.BidiClassifier.h"
#include "java.lang.Object.h"

// .method public constructor <init>(Ljava/lang/Object;)V
android::icu::text::BidiClassifier::BidiClassifier(std::shared_ptr<java::lang::Object> context)
{
	
	//    .param p1, "context"    # Ljava/lang/Object;
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->context = context;
	return;

}
// .method public classify(I)I
int android::icu::text::BidiClassifier::classify(int c)
{
	
	//    .param p1, "c"    # I
	return 0x17;

}
// .method public getContext()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::BidiClassifier::getContext()
{
	
	return this->context;

}
// .method public setContext(Ljava/lang/Object;)V
void android::icu::text::BidiClassifier::setContext(std::shared_ptr<java::lang::Object> context)
{
	
	//    .param p1, "context"    # Ljava/lang/Object;
	this->context = context;
	return;

}


