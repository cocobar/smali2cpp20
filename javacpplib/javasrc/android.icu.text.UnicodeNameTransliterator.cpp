// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeNameTransliterator.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeNameTransliterator_S_1.h"
#include "android.icu.text.UnicodeNameTransliterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::UnicodeNameTransliterator::CLOSE_DELIM = '}';
static android::icu::text::UnicodeNameTransliterator::OPEN_DELIM = std::make_shared<java::lang::String>("\\N{");
static android::icu::text::UnicodeNameTransliterator::OPEN_DELIM_LEN = 0x3;
static android::icu::text::UnicodeNameTransliterator::_ID = std::make_shared<java::lang::String>("Any-Name");
// .method public constructor <init>(Landroid/icu/text/UnicodeFilter;)V
android::icu::text::UnicodeNameTransliterator::UnicodeNameTransliterator(std::shared_ptr<android::icu::text::UnicodeFilter> filter)
{
	
	//    .param p1, "filter"    # Landroid/icu/text/UnicodeFilter;
	android::icu::text::Transliterator::(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Name")), filter);
	return;

}
// .method static register()V
void android::icu::text::UnicodeNameTransliterator::register()
{
	
	std::shared_ptr<android::icu::text::UnicodeNameTransliterator_S_1> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::UnicodeNameTransliterator_S_1>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Name")), cVar0);
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::UnicodeNameTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> myFilter;
	
	//    .param p1, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	myFilter = this->getFilterAsUnicodeSet(inputFilter);
	//    .local v0, "myFilter":Landroid/icu/text/UnicodeSet;
	if ( myFilter->size() <= 0 )
		goto label_cond_55;
	sourceSet->addAll(myFilter);
	targetSet->addAll(0x30, 0x39)->addAll(0x41, 0x5a)->add(0x2d)->add(0x20)->addAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\N{")))->add(0x7d)->addAll(0x61, 0x7a)->add(0x3c)->add(0x3e)->add(0x28)->add(0x29);
label_cond_55:
	return;

}
// .method protected handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::UnicodeNameTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> offsets,bool isIncremental)
{
	
	int cursor;
	int limit;
	std::shared_ptr<java::lang::StringBuilder> str;
	int c;
	std::shared_ptr<java::lang::String> name;
	int clen;
	int len;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "offsets"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "isIncremental"    # Z
	cursor = offsets->start;
	//    .local v2, "cursor":I
	limit = offsets->limit;
	//    .local v4, "limit":I
	str = std::make_shared<java::lang::StringBuilder>();
	//    .local v6, "str":Ljava/lang/StringBuilder;
	str->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\N{")));
label_goto_f:
	if ( cursor >= limit )
		goto label_cond_41;
	c = text->char32At(cursor);
	//    .local v0, "c":I
	name = android::icu::lang::UCharacter::getExtendedName(c);
	//    .local v5, "name":Ljava/lang/String;
	if ( !(name) )  
		goto label_cond_3e;
	str->setLength(0x3);
	str->append(name)->append(0x7d);
	clen = android::icu::text::UTF16::getCharCount(c);
	//    .local v1, "clen":I
	text->replace(cursor, (cursor + clen), str->toString());
	len = str->length();
	//    .local v3, "len":I
	cursor = (cursor +  len);
	limit = (limit +  (len - clen));
	goto label_goto_f;
	// 258    .line 70
	// 259    .end local v1    # "clen":I
	// 260    .end local v3    # "len":I
label_cond_3e:
	cursor = ( cursor + 0x1);
	goto label_goto_f;
	// 266    .line 74
	// 267    .end local v0    # "c":I
	// 268    .end local v5    # "name":Ljava/lang/String;
label_cond_41:
	offsets->contextLimit = (offsets->contextLimit +  (limit - offsets->limit));
	offsets->limit = limit;
	offsets->start = cursor;
	return;

}


