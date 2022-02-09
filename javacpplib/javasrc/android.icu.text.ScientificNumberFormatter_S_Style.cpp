// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ScientificNumberFormatter$Style.smali
#include "java2ctype.h"
#include "android.icu.text.ScientificNumberFormatter_S_Style.h"
#include "java.lang.StringBuilder.h"
#include "java.text.AttributedCharacterIterator.h"

// .method private constructor <init>()V
android::icu::text::ScientificNumberFormatter_S_Style::ScientificNumberFormatter_S_Style()
{
	
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/ScientificNumberFormatter$Style;)V
android::icu::text::ScientificNumberFormatter_S_Style::ScientificNumberFormatter_S_Style(std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_Style> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/ScientificNumberFormatter$Style;
	// 033    invoke-direct {p0}, Landroid/icu/text/ScientificNumberFormatter$Style;-><init>()V
	return;

}
// .method static append(Ljava/text/AttributedCharacterIterator;IILjava/lang/StringBuilder;)V
void android::icu::text::ScientificNumberFormatter_S_Style::append(std::shared_ptr<java::text::AttributedCharacterIterator> iterator,int start,int limit,std::shared_ptr<java::lang::StringBuilder> result)
{
	
	int i;
	
	//    .param p0, "iterator"    # Ljava/text/AttributedCharacterIterator;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "result"    # Ljava/lang/StringBuilder;
	//    .local v1, "oldIndex":I
	iterator->setIndex(start);
	i = start;
	//    .local v0, "i":I
label_goto_8:
	if ( i >= limit )
		goto label_cond_17;
	result->append(iterator->current());
	iterator->next();
	i = ( i + 0x1);
	goto label_goto_8;
	// 077    .line 134
label_cond_17:
	iterator->setIndex(iterator->getIndex());
	return;

}


