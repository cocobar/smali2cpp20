// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterIteratorWrapper.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterIteratorWrapper.h"
#include "android.icu.text.UCharacterIterator.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Object.h"

// .method public constructor <init>(Landroid/icu/text/UCharacterIterator;)V
android::icu::impl::UCharacterIteratorWrapper::UCharacterIteratorWrapper(std::shared_ptr<android::icu::text::UCharacterIterator> iter)
{
	
	//    .param p1, "iter"    # Landroid/icu/text/UCharacterIterator;
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->iterator = iter;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::UCharacterIteratorWrapper::clone()
{
	
	std::shared_ptr<android::icu::impl::UCharacterIteratorWrapper> result;
	std::shared_ptr<android::icu::text::UCharacterIterator> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	result = this->clone();
	result->checkCast("android::icu::impl::UCharacterIteratorWrapper");
	//    .local v1, "result":Landroid/icu/impl/UCharacterIteratorWrapper;
	cVar0 = this->iterator->clone();
	cVar0->checkCast("android::icu::text::UCharacterIterator");
	result->iterator = cVar0;
	//label_try_end_10:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_11;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_10} :catch_11
	return result;
	// 060    .line 149
	// 061    .end local v1    # "result":Landroid/icu/impl/UCharacterIteratorWrapper;
label_catch_11:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	return 0x0;

}
// .method public current()C
char android::icu::impl::UCharacterIteratorWrapper::current()
{
	
	return (char)(this->iterator->current());

}
// .method public first()C
char android::icu::impl::UCharacterIteratorWrapper::first()
{
	
	this->iterator->setToStart();
	return (char)(this->iterator->current());

}
// .method public getBeginIndex()I
int android::icu::impl::UCharacterIteratorWrapper::getBeginIndex()
{
	
	return 0x0;

}
// .method public getEndIndex()I
int android::icu::impl::UCharacterIteratorWrapper::getEndIndex()
{
	
	return this->iterator->getLength();

}
// .method public getIndex()I
int android::icu::impl::UCharacterIteratorWrapper::getIndex()
{
	
	return this->iterator->getIndex();

}
// .method public last()C
char android::icu::impl::UCharacterIteratorWrapper::last()
{
	
	this->iterator->setToLimit();
	return (char)(this->iterator->previous());

}
// .method public next()C
char android::icu::impl::UCharacterIteratorWrapper::next()
{
	
	this->iterator->next();
	return (char)(this->iterator->current());

}
// .method public previous()C
char android::icu::impl::UCharacterIteratorWrapper::previous()
{
	
	return (char)(this->iterator->previous());

}
// .method public setIndex(I)C
char android::icu::impl::UCharacterIteratorWrapper::setIndex(int position)
{
	
	//    .param p1, "position"    # I
	this->iterator->setIndex(position);
	return (char)(this->iterator->current());

}


