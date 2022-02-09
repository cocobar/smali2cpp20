// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedCollator$CollationBuffer.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.FCDUTF16CollationIterator.h"
#include "android.icu.impl.coll.UTF16CollationIterator.h"
#include "android.icu.text.RuleBasedCollator_S_CollationBuffer.h"
#include "android.icu.text.RuleBasedCollator_S_FCDUTF16NFDIterator.h"
#include "android.icu.text.RuleBasedCollator_S_UTF16NFDIterator.h"

// .method private constructor <init>(Landroid/icu/impl/coll/CollationData;)V
android::icu::text::RuleBasedCollator_S_CollationBuffer::RuleBasedCollator_S_CollationBuffer(std::shared_ptr<android::icu::impl::coll::CollationData> data)
{
	
	std::shared_ptr<android::icu::impl::coll::UTF16CollationIterator> cVar0;
	std::shared_ptr<android::icu::impl::coll::UTF16CollationIterator> cVar1;
	std::shared_ptr<android::icu::impl::coll::FCDUTF16CollationIterator> cVar2;
	std::shared_ptr<android::icu::impl::coll::FCDUTF16CollationIterator> cVar3;
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_UTF16NFDIterator> cVar4;
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_UTF16NFDIterator> cVar5;
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_FCDUTF16NFDIterator> cVar6;
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_FCDUTF16NFDIterator> cVar7;
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::impl::coll::UTF16CollationIterator>(data);
	this->leftUTF16CollIter = cVar0;
	cVar1 = std::make_shared<android::icu::impl::coll::UTF16CollationIterator>(data);
	this->rightUTF16CollIter = cVar1;
	cVar2 = std::make_shared<android::icu::impl::coll::FCDUTF16CollationIterator>(data);
	this->leftFCDUTF16Iter = cVar2;
	cVar3 = std::make_shared<android::icu::impl::coll::FCDUTF16CollationIterator>(data);
	this->rightFCDUTF16Iter = cVar3;
	cVar4 = std::make_shared<android::icu::text::RuleBasedCollator_S_UTF16NFDIterator>();
	this->leftUTF16NFDIter = cVar4;
	cVar5 = std::make_shared<android::icu::text::RuleBasedCollator_S_UTF16NFDIterator>();
	this->rightUTF16NFDIter = cVar5;
	cVar6 = std::make_shared<android::icu::text::RuleBasedCollator_S_FCDUTF16NFDIterator>();
	this->leftFCDUTF16NFDIter = cVar6;
	cVar7 = std::make_shared<android::icu::text::RuleBasedCollator_S_FCDUTF16NFDIterator>();
	this->rightFCDUTF16NFDIter = cVar7;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/coll/CollationData;Landroid/icu/text/RuleBasedCollator$CollationBuffer;)V
android::icu::text::RuleBasedCollator_S_CollationBuffer::RuleBasedCollator_S_CollationBuffer(std::shared_ptr<android::icu::impl::coll::CollationData> data,std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> _this1)
{
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "-this1"    # Landroid/icu/text/RuleBasedCollator$CollationBuffer;
	android::icu::text::RuleBasedCollator_S_CollationBuffer::(data);
	return;

}


