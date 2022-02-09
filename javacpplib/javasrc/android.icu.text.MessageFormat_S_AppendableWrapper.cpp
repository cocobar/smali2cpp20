// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessageFormat$AppendableWrapper.smali
#include "java2ctype.h"
#include "android.icu.text.MessageFormat_S_AppendableWrapper.h"
#include "android.icu.text.MessageFormat_S_AttributeAndPosition.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "java.io.IOException.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.text.AttributedCharacterIterator_S_Attribute.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.text.CharacterIterator.h"
#include "java.text.Format.h"
#include "java.util.ArrayList.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

// .method static synthetic -get0(Landroid/icu/text/MessageFormat$AppendableWrapper;)Ljava/util/List;
std::shared_ptr<java::util::List> android::icu::text::MessageFormat_S_AppendableWrapper::_get0(std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessageFormat$AppendableWrapper;
	return _this->attributes;

}
// .method static synthetic -get1(Landroid/icu/text/MessageFormat$AppendableWrapper;)I
int android::icu::text::MessageFormat_S_AppendableWrapper::_get1(std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessageFormat$AppendableWrapper;
	return _this->length;

}
// .method public constructor <init>(Ljava/lang/StringBuffer;)V
android::icu::text::MessageFormat_S_AppendableWrapper::MessageFormat_S_AppendableWrapper(std::shared_ptr<java::lang::StringBuffer> sb)
{
	
	//    .param p1, "sb"    # Ljava/lang/StringBuffer;
	// 061    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->app = sb;
	this->length = sb->length();
	this->attributes = 0x0;
	return;

}
// .method public constructor <init>(Ljava/lang/StringBuilder;)V
android::icu::text::MessageFormat_S_AppendableWrapper::MessageFormat_S_AppendableWrapper(std::shared_ptr<java::lang::StringBuilder> sb)
{
	
	//    .param p1, "sb"    # Ljava/lang/StringBuilder;
	// 088    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->app = sb;
	this->length = sb->length();
	this->attributes = 0x0;
	return;

}
// .method public static append(Ljava/lang/Appendable;Ljava/text/CharacterIterator;)I
int android::icu::text::MessageFormat_S_AppendableWrapper::append(std::shared_ptr<java::lang::Appendable> result,std::shared_ptr<java::text::CharacterIterator> iterator)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	int start;
	int limit;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "result"    # Ljava/lang/Appendable;
	//    .param p1, "iterator"    # Ljava/text/CharacterIterator;
	try {
	//label_try_start_0:
	start = iterator->getBeginIndex();
	//    .local v3, "start":I
	limit = iterator->getEndIndex();
	//    .local v2, "limit":I
	//    .local v1, "length":I
	if ( start >= limit )
		goto label_cond_26;
	result->append(iterator->first());
label_goto_13:
	start = ( start + 0x1);
	if ( start >= limit )
		goto label_cond_26;
	result->append(iterator->next());
	//label_try_end_1e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1f;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_1e} :catch_1f
	goto label_goto_13;
	// 159    .line 2564
	// 160    .end local v1    # "length":I
	// 161    .end local v2    # "limit":I
	// 162    .end local v3    # "start":I
label_catch_1f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 174    .line 2563
	// 175    .end local v0    # "e":Ljava/io/IOException;
	// 176    .restart local v1    # "length":I
	// 177    .restart local v2    # "limit":I
	// 178    .restart local v3    # "start":I
label_cond_26:
	return (limit - start);

}
// .method public append(Ljava/lang/CharSequence;)V
void android::icu::text::MessageFormat_S_AppendableWrapper::append(std::shared_ptr<java::lang::CharSequence> s)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	try {
	//label_try_start_0:
	this->app->append(s);
	this->length = (this->length +  s->length());
	//label_try_end_e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_e} :catch_f
	return;
	// 212    .line 2534
label_catch_f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public append(Ljava/lang/CharSequence;II)V
void android::icu::text::MessageFormat_S_AppendableWrapper::append(std::shared_ptr<java::lang::CharSequence> s,int start,int limit)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	try {
	//label_try_start_0:
	this->app->append(s, start, limit);
	this->length = (this->length +  (limit - start));
	//label_try_end_c:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_c} :catch_d
	return;
	// 252    .line 2543
label_catch_d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public append(Ljava/text/CharacterIterator;)V
void android::icu::text::MessageFormat_S_AppendableWrapper::append(std::shared_ptr<java::text::CharacterIterator> iterator)
{
	
	//    .param p1, "iterator"    # Ljava/text/CharacterIterator;
	this->length = (this->length +  android::icu::text::MessageFormat_S_AppendableWrapper::append(this->app, iterator));
	return;

}
// .method public formatAndAppend(Ljava/text/Format;Ljava/lang/Object;)V
void android::icu::text::MessageFormat_S_AppendableWrapper::formatAndAppend(std::shared_ptr<java::text::Format> formatter,std::shared_ptr<java::lang::Object> arg)
{
	
	std::shared_ptr<java::text::CharacterIterator> formattedArg;
	int start;
	int offset;
	std::shared_ptr<java::util::Map> map;
	int runLimit;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<android::icu::text::MessageFormat_S_AttributeAndPosition> cVar0;
	std::shared_ptr<java::text::AttributedCharacterIterator_S_Attribute> cVar1;
	
	//    .param p1, "formatter"    # Ljava/text/Format;
	//    .param p2, "arg"    # Ljava/lang/Object;
	if ( this->attributes )     
		goto label_cond_c;
	this->append(formatter->format(arg));
label_cond_b:
	return;
	// 309    .line 2573
label_cond_c:
	formattedArg = formatter->formatToCharacterIterator(arg);
	//    .local v2, "formattedArg":Ljava/text/AttributedCharacterIterator;
	//    .local v6, "prevLength":I
	this->append(formattedArg);
	formattedArg->first();
	start = formattedArg->getIndex();
	//    .local v8, "start":I
	//    .local v3, "limit":I
	offset = (this->length - start);
	//    .local v5, "offset":I
label_goto_22:
	if ( start >= formattedArg->getEndIndex() )
		goto label_cond_b;
	map = formattedArg->getAttributes();
	//    .local v4, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;"
	runLimit = formattedArg->getRunLimit();
	//    .local v7, "runLimit":I
	if ( !(map->size()) )  
		goto label_cond_5f;
	entry_S_iterator = map->entrySet()->iterator();
	//    .local v1, "entry$iterator":Ljava/util/Iterator;
label_goto_3a:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_5f;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;"
	cVar1 = entry->getKey();
	cVar1->checkCast("java::text::AttributedCharacterIterator_S_Attribute");
	cVar0 = std::make_shared<android::icu::text::MessageFormat_S_AttributeAndPosition>(cVar1, entry->getValue(), (offset + start), (offset + runLimit));
	this->attributes->add(cVar0);
	goto label_goto_3a;
	// 419    .line 2592
	// 420    .end local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;"
	// 421    .end local v1    # "entry$iterator":Ljava/util/Iterator;
label_cond_5f:
	start = runLimit;
	formattedArg->setIndex(runLimit);
	goto label_goto_22;

}
// .method public formatAndAppend(Ljava/text/Format;Ljava/lang/Object;Ljava/lang/String;)V
void android::icu::text::MessageFormat_S_AppendableWrapper::formatAndAppend(std::shared_ptr<java::text::Format> formatter,std::shared_ptr<java::lang::Object> arg,std::shared_ptr<java::lang::String> argString)
{
	
	//    .param p1, "formatter"    # Ljava/text/Format;
	//    .param p2, "arg"    # Ljava/lang/Object;
	//    .param p3, "argString"    # Ljava/lang/String;
	if ( this->attributes )     
		goto label_cond_a;
	if ( !(argString) )  
		goto label_cond_a;
	this->append(argString);
label_goto_9:
	return;
	// 452    .line 2602
label_cond_a:
	this->formatAndAppend(formatter, arg);
	goto label_goto_9;

}
// .method public useAttributes()V
void android::icu::text::MessageFormat_S_AppendableWrapper::useAttributes()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->attributes = cVar0;
	return;

}


