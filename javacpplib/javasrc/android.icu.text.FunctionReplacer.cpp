// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\FunctionReplacer.smali
#include "java2ctype.h"
#include "android.icu.text.FunctionReplacer.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeReplacer.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Landroid/icu/text/Transliterator;Landroid/icu/text/UnicodeReplacer;)V
android::icu::text::FunctionReplacer::FunctionReplacer(std::shared_ptr<android::icu::text::Transliterator> theTranslit,std::shared_ptr<android::icu::text::UnicodeReplacer> theReplacer)
{
	
	//    .param p1, "theTranslit"    # Landroid/icu/text/Transliterator;
	//    .param p2, "theReplacer"    # Landroid/icu/text/UnicodeReplacer;
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->translit = theTranslit;
	this->replacer = theReplacer;
	return;

}
// .method public addReplacementSetTo(Landroid/icu/text/UnicodeSet;)V
void android::icu::text::FunctionReplacer::addReplacementSetTo(std::shared_ptr<android::icu::text::UnicodeSet> toUnionTo)
{
	
	//    .param p1, "toUnionTo"    # Landroid/icu/text/UnicodeSet;
	toUnionTo->addAll(this->translit->getTargetSet());
	return;

}
// .method public replace(Landroid/icu/text/Replaceable;II[I)I
int android::icu::text::FunctionReplacer::replace(std::shared_ptr<android::icu::text::Replaceable> text,int start,int limit,std::shared_ptr<int[]> cursor)
{
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "cursor"    # [I
	//    .local v0, "len":I
	return (this->translit->transliterate(text, start, (start + this->replacer->replace(text, start, limit, cursor))) - start);

}
// .method public toReplacerPattern(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::FunctionReplacer::toReplacerPattern(bool escapeUnprintable)
{
	
	std::shared_ptr<java::lang::StringBuilder> rule;
	
	//    .param p1, "escapeUnprintable"    # Z
	rule = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("&")));
	//    .local v0, "rule":Ljava/lang/StringBuilder;
	rule->append(this->translit->getID());
	rule->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("( ")));
	rule->append(this->replacer->toReplacerPattern(escapeUnprintable));
	rule->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" )")));
	return rule->toString();

}


