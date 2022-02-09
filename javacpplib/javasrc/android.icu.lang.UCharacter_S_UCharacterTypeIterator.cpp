// CPP L:\smali2cpp20\x64\Release\out\android\icu\lang\UCharacter$UCharacterTypeIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2_16.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "android.icu.lang.UCharacter_S_UCharacterTypeIterator_S_MaskType.h"
#include "android.icu.lang.UCharacter_S_UCharacterTypeIterator.h"
#include "android.icu.util.RangeValueIterator_S_Element.h"
#include "java.lang.Object.h"
#include "java.util.Iterator.h"

static android::icu::lang::UCharacter_S_UCharacterTypeIterator::MASK_TYPE;
// .method static constructor <clinit>()V
void android::icu::lang::UCharacter_S_UCharacterTypeIterator::static_cinit()
{
	
	std::shared_ptr<android::icu::lang::UCharacter_S_UCharacterTypeIterator_S_MaskType> cVar0;
	
	cVar0 = std::make_shared<android::icu::lang::UCharacter_S_UCharacterTypeIterator_S_MaskType>(0x0);
	android::icu::lang::UCharacter_S_UCharacterTypeIterator::MASK_TYPE = cVar0;
	return;

}
// .method constructor <init>()V
android::icu::lang::UCharacter_S_UCharacterTypeIterator::UCharacter_S_UCharacterTypeIterator()
{
	
	// 068    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->reset();
	return;

}
// .method public next(Landroid/icu/util/RangeValueIterator$Element;)Z
bool android::icu::lang::UCharacter_S_UCharacterTypeIterator::next(std::shared_ptr<android::icu::util::RangeValueIterator_S_Element> element)
{
	
	std::shared_ptr<android::icu::impl::Trie2_S_Range> cVar0;
	
	//    .param p1, "element"    # Landroid/icu/util/RangeValueIterator$Element;
	if ( !(this->trieIterator->hasNext()) )  
		goto label_cond_2e;
	cVar0 = this->trieIterator->next();
	cVar0->checkCast("android::icu::impl::Trie2_S_Range");
	this->range = cVar0;
	if ( !(( cVar0->leadSurrogate ^ 0x1)) )  
		goto label_cond_2e;
	element->start = this->range->startCodePoint;
	element->limit = ( this->range->endCodePoint + 0x1);
	element->value = this->range->value;
	return 0x1;
	// 137    .line 4863
label_cond_2e:
	return 0x0;

}
// .method public reset()V
void android::icu::lang::UCharacter_S_UCharacterTypeIterator::reset()
{
	
	this->trieIterator = android::icu::impl::UCharacterProperty::INSTANCE->m_trie_->iterator(android::icu::lang::UCharacter_S_UCharacterTypeIterator::MASK_TYPE);
	return;

}


