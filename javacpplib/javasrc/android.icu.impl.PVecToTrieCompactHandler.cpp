// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\PVecToTrieCompactHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.IntTrieBuilder.h"
#include "android.icu.impl.PVecToTrieCompactHandler.h"
#include "java.lang.IndexOutOfBoundsException.h"

// .method public constructor <init>()V
android::icu::impl::PVecToTrieCompactHandler::PVecToTrieCompactHandler()
{
	
	// 021    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public setRowIndexForErrorValue(I)V
void android::icu::impl::PVecToTrieCompactHandler::setRowIndexForErrorValue(int rowIndex)
{
	
	//    .param p1, "rowIndex"    # I
	return;

}
// .method public setRowIndexForInitialValue(I)V
void android::icu::impl::PVecToTrieCompactHandler::setRowIndexForInitialValue(int rowIndex)
{
	
	//    .param p1, "rowIndex"    # I
	this->initialValue = rowIndex;
	return;

}
// .method public setRowIndexForRange(III)V
void android::icu::impl::PVecToTrieCompactHandler::setRowIndexForRange(int start,int end,int rowIndex)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "rowIndex"    # I
	this->builder->setRange(start, ( end + 0x1), rowIndex, 0x1);
	return;

}
// .method public startRealValues(I)V
void android::icu::impl::PVecToTrieCompactHandler::startRealValues(int rowIndex)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	std::shared_ptr<android::icu::impl::IntTrieBuilder> cVar1;
	
	//    .param p1, "rowIndex"    # I
	if ( rowIndex <= 0xffff )
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 086    .line 46
label_cond_b:
	cVar1 = std::make_shared<android::icu::impl::IntTrieBuilder>(0x0, 0x186a0, this->initialValue, this->initialValue, 0x0);
	this->builder = cVar1;
	return;

}


