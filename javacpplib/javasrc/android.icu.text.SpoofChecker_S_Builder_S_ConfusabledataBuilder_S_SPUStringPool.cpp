// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$Builder$ConfusabledataBuilder$SPUStringPool.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collections.h"
#include "java.util.Hashtable.h"
#include "java.util.Vector.h"

// .method public constructor <init>()V
android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool()
{
	
	std::shared_ptr<java::util::Vector> cVar0;
	std::shared_ptr<java::util::Hashtable> cVar1;
	
	// 048    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::Vector>();
	this->fVec = cVar0;
	cVar1 = std::make_shared<java::util::Hashtable>();
	this->fHash = cVar1;
	return;

}
// .method public addString(Ljava/lang/String;)Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString> android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool::addString(std::shared_ptr<java::lang::String> src)
{
	
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString> hashedString;
	
	//    .param p1, "src"    # Ljava/lang/String;
	hashedString = this->fHash->get(src);
	hashedString->checkCast("android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString");
	//    .local v0, "hashedString":Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
	if ( hashedString )     
		goto label_cond_19;
	//    .end local v0    # "hashedString":Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
	hashedString = std::make_shared<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString>(src);
	//    .restart local v0    # "hashedString":Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
	this->fHash->put(src, hashedString);
	this->fVec->addElement(hashedString);
label_cond_19:
	return hashedString;

}
// .method public getByIndex(I)Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString> android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool::getByIndex(int index)
{
	
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString> retString;
	
	//    .param p1, "index"    # I
	retString = this->fVec->elementAt(index);
	retString->checkCast("android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString");
	//    .local v0, "retString":Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
	return retString;

}
// .method public size()I
int android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool::size()
{
	
	return this->fVec->size();

}
// .method public sort()V
void android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool::sort()
{
	
	java::util::Collections::sort(this->fVec, android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator::INSTANCE);
	return;

}


