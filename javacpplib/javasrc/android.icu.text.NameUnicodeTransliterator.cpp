// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NameUnicodeTransliterator.smali
#include "java2ctype.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.UCharacterName.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.NameUnicodeTransliterator_S_1.h"
#include "android.icu.text.NameUnicodeTransliterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

static android::icu::text::NameUnicodeTransliterator::CLOSE_DELIM = '}';
static android::icu::text::NameUnicodeTransliterator::OPEN_DELIM = '\\';
static android::icu::text::NameUnicodeTransliterator::OPEN_PAT = std::make_shared<java::lang::String>("\\N~{~");
static android::icu::text::NameUnicodeTransliterator::SPACE = ' ';
static android::icu::text::NameUnicodeTransliterator::_ID = std::make_shared<java::lang::String>("Name-Any");
// .method public constructor <init>(Landroid/icu/text/UnicodeFilter;)V
android::icu::text::NameUnicodeTransliterator::NameUnicodeTransliterator(std::shared_ptr<android::icu::text::UnicodeFilter> filter)
{
	
	//    .param p1, "filter"    # Landroid/icu/text/UnicodeFilter;
	android::icu::text::Transliterator::(std::make_shared<java::lang::String>(std::make_shared<char[]>("Name-Any")), filter);
	return;

}
// .method static register()V
void android::icu::text::NameUnicodeTransliterator::register()
{
	
	std::shared_ptr<android::icu::text::NameUnicodeTransliterator_S_1> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::NameUnicodeTransliterator_S_1>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Name-Any")), cVar0);
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::NameUnicodeTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> myFilter;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> items;
	
	//    .param p1, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	cVar0 = 0x7d;
	myFilter = this->getFilterAsUnicodeSet(inputFilter);
	//    .local v1, "myFilter":Landroid/icu/text/UnicodeSet;
	if ( !(myFilter->containsAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\N{")))) )  
		goto label_cond_18;
	if ( !(( myFilter->contains(cVar0) ^ 0x1)) )  
		goto label_cond_19;
label_cond_18:
	return;
	// 090    .line 183
label_cond_19:
	cVar1 = std::make_shared<android::icu::text::UnicodeSet>();
	items = cVar1->addAll(0x30, 0x39)->addAll(0x41, 0x46)->addAll(0x61, 0x7a)->add(0x3c)->add(0x3e)->add(0x28)->add(0x29)->add(0x2d)->add(0x20)->addAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\N{")))->add(cVar0);
	//    .local v0, "items":Landroid/icu/text/UnicodeSet;
	items->retainAll(myFilter);
	if ( items->size() <= 0 )
		goto label_cond_77;
	sourceSet->addAll(items);
	targetSet->addAll(0x0, 0x10ffff);
label_cond_77:
	return;

}
// .method protected handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::NameUnicodeTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> offsets,bool isIncremental)
{
	
	int maxLen;
	std::shared_ptr<java::lang::StringBuffer> name;
	std::shared_ptr<android::icu::text::UnicodeSet> legal;
	int cursor;
	int limit;
	int mode;
	int openPos;
	int c;
	int i;
	int len;
	std::shared_ptr<java::lang::String> str;
	int delta;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "offsets"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "isIncremental"    # Z
	maxLen = ( android::icu::impl::UCharacterName::INSTANCE->getMaxCharNameLength() + 0x1);
	//    .local v8, "maxLen":I
	name = std::make_shared<java::lang::StringBuffer>(maxLen);
	//    .local v10, "name":Ljava/lang/StringBuffer;
	legal = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v5, "legal":Landroid/icu/text/UnicodeSet;
	android::icu::impl::UCharacterName::INSTANCE->getCharNameCharacters(legal);
	cursor = offsets->start;
	//    .local v2, "cursor":I
	limit = offsets->limit;
	//    .local v7, "limit":I
	mode = 0x0;
	//    .local v9, "mode":I
	openPos = -0x1;
	//    .local v11, "openPos":I
label_goto_21:
	if ( cursor >= limit )
		goto label_cond_c6;
	c = text->char32At(cursor);
	//    .local v1, "c":I
	// switch
	{
	auto item = ( mode );
	if (item == 0) goto label_pswitch_32;
	if (item == 1) goto label_pswitch_4b;
	}
label_cond_2c:
label_goto_2c:
	cursor = (cursor +  android::icu::text::UTF16::getCharCount(c));
	goto label_goto_21;
	// 290    .line 77
label_pswitch_32:
	if ( c != 0x5c )
		goto label_cond_2c;
	cursor;
	i = android::icu::impl::Utility::parsePattern(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\N~{~")), text, cursor, limit);
	//    .local v4, "i":I
	if ( i < 0 ) 
		goto label_cond_2c;
	if ( i >= limit )
		goto label_cond_2c;
	mode = 0x1;
	name->setLength(0x0);
	cursor = i;
	goto label_goto_21;
	// 328    .line 97
	// 329    .end local v4    # "i":I
label_pswitch_4b:
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(c)) )  
		goto label_cond_72;
	if ( name->length() <= 0 )
		goto label_cond_2c;
	if ( name->charAt(( name->length() + -0x1)) == 0x20 )
		goto label_cond_2c;
	name->append(0x20);
	if ( name->length() <= maxLen )
		goto label_cond_2c;
	mode = 0x0;
	goto label_goto_2c;
	// 376    .line 111
label_cond_72:
	if ( c != 0x7d )
		goto label_cond_af;
	len = name->length();
	//    .local v6, "len":I
	if ( len <= 0 )
		goto label_cond_8b;
	if ( name->charAt(( len + -0x1)) != 0x20 )
		goto label_cond_8b;
	name->setLength(( len + -0x1));
label_cond_8b:
	c = android::icu::lang::UCharacter::getCharFromExtendedName(name->toString());
	if ( c == -0x1 )
		goto label_cond_ab;
	cursor = ( cursor + 0x1);
	str = android::icu::text::UTF16::valueOf(c);
	//    .local v12, "str":Ljava/lang/String;
	text->replace(openPos, cursor, str);
	delta = ((cursor - openPos) - str->length());
	//    .local v3, "delta":I
	cursor = (cursor -  delta);
	limit = (limit -  delta);
	//    .end local v3    # "delta":I
	//    .end local v12    # "str":Ljava/lang/String;
label_cond_ab:
	mode = 0x0;
	openPos = -0x1;
	goto label_goto_21;
	// 464    .line 146
	// 465    .end local v6    # "len":I
label_cond_af:
	if ( !(legal->contains(c)) )  
		goto label_cond_c1;
	android::icu::text::UTF16::append(name, c);
	if ( name->length() <  maxLen )
		goto label_cond_2c;
	mode = 0x0;
	goto label_goto_2c;
	// 488    .line 157
label_cond_c1:
	cursor = ( cursor + -0x1);
	mode = 0x0;
	goto label_goto_2c;
	// 497    .line 167
	// 498    .end local v1    # "c":I
label_cond_c6:
	offsets->contextLimit = (offsets->contextLimit +  (limit - offsets->limit));
	offsets->limit = limit;
	if ( !(isIncremental) )  
		goto label_cond_e2;
	if ( openPos < 0 ) 
		goto label_cond_e2;
	//    .end local v11    # "openPos":I
label_goto_dd:
	offsets->start = openPos;
	return;
	// 535    .restart local v11    # "openPos":I
label_cond_e2:
	openPos = cursor;
	goto label_goto_dd;
	// 542    .line 75
	// 543    :pswitch_data_e4
	// 544    .packed-switch 0x0
	// 545        :pswitch_32
	// 546        :pswitch_4b
	// 547    .end packed-switch

}


