// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\UResourceBundleIterator.smali
#include "java2ctype.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.UResourceBundleIterator.h"
#include "java.lang.String.h"
#include "java.util.NoSuchElementException.h"

// .method public constructor <init>(Landroid/icu/util/UResourceBundle;)V
android::icu::util::UResourceBundleIterator::UResourceBundleIterator(std::shared_ptr<android::icu::util::UResourceBundle> bndl)
{
	
	int cVar0;
	
	//    .param p1, "bndl"    # Landroid/icu/util/UResourceBundle;
	cVar0 = 0x0;
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->index = cVar0;
	this->size = cVar0;
	this->bundle = bndl;
	this->size = this->bundle->getSize();
	return;

}
// .method public hasNext()Z
bool android::icu::util::UResourceBundleIterator::hasNext()
{
	
	bool cVar0;
	
	if ( this->index >= this->size )
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method public next()Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundleIterator::next()
{
	
	int cVar0;
	std::shared_ptr<java::util::NoSuchElementException> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 074        value = {
	// 075            Ljava/util/NoSuchElementException;
	// 076        }
	// 077    .end annotation
	if ( this->index >= this->size )
		goto label_cond_13;
	cVar0 = this->index;
	this->index = ( cVar0 + 0x1);
	return this->bundle->get(cVar0);
	// 102    .line 63
label_cond_13:
	cVar1 = std::make_shared<java::util::NoSuchElementException>();
	// throw
	throw cVar1;

}
// .method public nextString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::UResourceBundleIterator::nextString()
{
	
	int cVar0;
	std::shared_ptr<java::util::NoSuchElementException> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 114        value = {
	// 115            Ljava/util/NoSuchElementException;,
	// 116            Landroid/icu/util/UResourceTypeMismatchException;
	// 117        }
	// 118    .end annotation
	if ( this->index >= this->size )
		goto label_cond_13;
	cVar0 = this->index;
	this->index = ( cVar0 + 0x1);
	return this->bundle->getString(cVar0);
	// 143    .line 75
label_cond_13:
	cVar1 = std::make_shared<java::util::NoSuchElementException>();
	// throw
	throw cVar1;

}
// .method public reset()V
void android::icu::util::UResourceBundleIterator::reset()
{
	
	this->index = 0x0;
	return;

}


