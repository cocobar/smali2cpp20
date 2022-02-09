// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ScientificNumberFormatter$MarkupStyle.smali
#include "java2ctype.h"
#include "android.icu.text.NumberFormat_S_Field.h"
#include "android.icu.text.ScientificNumberFormatter_S_MarkupStyle.h"
#include "android.icu.text.ScientificNumberFormatter_S_Style.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.util.Map.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::text::ScientificNumberFormatter_S_MarkupStyle::ScientificNumberFormatter_S_MarkupStyle(std::shared_ptr<java::lang::String> beginMarkup,std::shared_ptr<java::lang::String> endMarkup)
{
	
	//    .param p1, "beginMarkup"    # Ljava/lang/String;
	//    .param p2, "endMarkup"    # Ljava/lang/String;
	android::icu::text::ScientificNumberFormatter_S_Style::(0x0);
	this->beginMarkup = beginMarkup;
	this->endMarkup = endMarkup;
	return;

}
// .method format(Ljava/text/AttributedCharacterIterator;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ScientificNumberFormatter_S_MarkupStyle::format(std::shared_ptr<java::text::AttributedCharacterIterator> iterator,std::shared_ptr<java::lang::String> preExponent)
{
	
	int copyFromOffset;
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<java::util::Map> attributeSet;
	int limit;
	
	//    .param p1, "iterator"    # Ljava/text/AttributedCharacterIterator;
	//    .param p2, "preExponent"    # Ljava/lang/String;
	copyFromOffset = 0x0;
	//    .local v1, "copyFromOffset":I
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "result":Ljava/lang/StringBuilder;
	iterator->first();
label_goto_9:
	if ( iterator->current() == 0xffff )
		goto label_cond_58;
	attributeSet = iterator->getAttributes();
	//    .local v0, "attributeSet":Ljava/util/Map;, "Ljava/util/Map<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;"
	if ( !(attributeSet->containsKey(android::icu::text::NumberFormat_S_Field::EXPONENT_SYMBOL)) )  
		goto label_cond_39;
	android::icu::text::ScientificNumberFormatter_S_MarkupStyle::append(iterator, copyFromOffset, iterator->getRunStart(android::icu::text::NumberFormat_S_Field::EXPONENT_SYMBOL), result);
	copyFromOffset = iterator->getRunLimit(android::icu::text::NumberFormat_S_Field::EXPONENT_SYMBOL);
	iterator->setIndex(copyFromOffset);
	result->append(preExponent);
	result->append(this->beginMarkup);
	goto label_goto_9;
	// 122    .line 169
label_cond_39:
	if ( !(attributeSet->containsKey(android::icu::text::NumberFormat_S_Field::EXPONENT)) )  
		goto label_cond_54;
	limit = iterator->getRunLimit(android::icu::text::NumberFormat_S_Field::EXPONENT);
	//    .local v2, "limit":I
	android::icu::text::ScientificNumberFormatter_S_MarkupStyle::append(iterator, copyFromOffset, limit, result);
	copyFromOffset = limit;
	iterator->setIndex(limit);
	result->append(this->endMarkup);
	goto label_goto_9;
	// 156    .line 180
	// 157    .end local v2    # "limit":I
label_cond_54:
	iterator->next();
	goto label_goto_9;
	// 163    .line 183
	// 164    .end local v0    # "attributeSet":Ljava/util/Map;, "Ljava/util/Map<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;"
label_cond_58:
	android::icu::text::ScientificNumberFormatter_S_MarkupStyle::append(iterator, copyFromOffset, iterator->getEndIndex(), result);
	return result->toString();

}


