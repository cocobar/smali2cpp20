// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UtilityExtensions.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.impl.UtilityExtensions.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.ReplaceableString.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>()V
android::icu::impl::UtilityExtensions::UtilityExtensions()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static appendToRule(Ljava/lang/StringBuffer;Landroid/icu/text/UnicodeMatcher;ZLjava/lang/StringBuffer;)V
void android::icu::impl::UtilityExtensions::appendToRule(std::shared_ptr<java::lang::StringBuffer> rule,std::shared_ptr<android::icu::text::UnicodeMatcher> matcher,bool escapeUnprintable,std::shared_ptr<java::lang::StringBuffer> quoteBuf)
{
	
	//    .param p0, "rule"    # Ljava/lang/StringBuffer;
	//    .param p1, "matcher"    # Landroid/icu/text/UnicodeMatcher;
	//    .param p2, "escapeUnprintable"    # Z
	//    .param p3, "quoteBuf"    # Ljava/lang/StringBuffer;
	if ( !(matcher) )  
		goto label_cond_a;
	android::icu::impl::UtilityExtensions::appendToRule(rule, matcher->toPattern(escapeUnprintable), 0x1, escapeUnprintable, quoteBuf);
label_cond_a:
	return;

}
// .method public static appendToRule(Ljava/lang/StringBuffer;Ljava/lang/String;ZZLjava/lang/StringBuffer;)V
void android::icu::impl::UtilityExtensions::appendToRule(std::shared_ptr<java::lang::StringBuffer> rule,std::shared_ptr<java::lang::String> text,bool isLiteral,bool escapeUnprintable,std::shared_ptr<java::lang::StringBuffer> quoteBuf)
{
	
	int i;
	
	//    .param p0, "rule"    # Ljava/lang/StringBuffer;
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "isLiteral"    # Z
	//    .param p3, "escapeUnprintable"    # Z
	//    .param p4, "quoteBuf"    # Ljava/lang/StringBuffer;
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= text->length() )
		goto label_cond_11;
	android::icu::impl::Utility::appendToRule(rule, text->charAt(i), isLiteral, escapeUnprintable, quoteBuf);
	i = ( i + 0x1);
	goto label_goto_1;
	// 076    .line 36
label_cond_11:
	return;

}
// .method public static formatInput(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UtilityExtensions::formatInput(std::shared_ptr<android::icu::text::Replaceable> input,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos)
{
	
	//    .param p0, "input"    # Landroid/icu/text/Replaceable;
	//    .param p1, "pos"    # Landroid/icu/text/Transliterator$Position;
	input->checkCast("android::icu::text::ReplaceableString");
	//    .end local p0    # "input":Landroid/icu/text/Replaceable;
	return android::icu::impl::UtilityExtensions::formatInput(input, pos);

}
// .method public static formatInput(Landroid/icu/text/ReplaceableString;Landroid/icu/text/Transliterator$Position;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UtilityExtensions::formatInput(std::shared_ptr<android::icu::text::ReplaceableString> input,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos)
{
	
	std::shared_ptr<java::lang::StringBuffer> appendTo;
	
	//    .param p0, "input"    # Landroid/icu/text/ReplaceableString;
	//    .param p1, "pos"    # Landroid/icu/text/Transliterator$Position;
	appendTo = std::make_shared<java::lang::StringBuffer>();
	//    .local v0, "appendTo":Ljava/lang/StringBuffer;
	android::icu::impl::UtilityExtensions::formatInput(appendTo, input, pos);
	return android::icu::impl::Utility::escape(appendTo->toString());

}
// .method public static formatInput(Ljava/lang/StringBuffer;Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::UtilityExtensions::formatInput(std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<android::icu::text::Replaceable> input,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos)
{
	
	//    .param p0, "appendTo"    # Ljava/lang/StringBuffer;
	//    .param p1, "input"    # Landroid/icu/text/Replaceable;
	//    .param p2, "pos"    # Landroid/icu/text/Transliterator$Position;
	input->checkCast("android::icu::text::ReplaceableString");
	//    .end local p1    # "input":Landroid/icu/text/Replaceable;
	return android::icu::impl::UtilityExtensions::formatInput(appendTo, input, pos);

}
// .method public static formatInput(Ljava/lang/StringBuffer;Landroid/icu/text/ReplaceableString;Landroid/icu/text/Transliterator$Position;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::UtilityExtensions::formatInput(std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<android::icu::text::ReplaceableString> input,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos)
{
	
	char cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "appendTo"    # Ljava/lang/StringBuffer;
	//    .param p1, "input"    # Landroid/icu/text/ReplaceableString;
	//    .param p2, "pos"    # Landroid/icu/text/Transliterator$Position;
	cVar0 = 0x7c;
	if ( pos->contextStart < 0 ) 
		goto label_cond_58;
	if ( pos->contextStart >  pos->start )
		goto label_cond_58;
	if ( pos->start >  pos->limit )
		goto label_cond_58;
	if ( pos->limit >  pos->contextLimit )
		goto label_cond_58;
	if ( pos->contextLimit >  input->length() )
		goto label_cond_58;
	//    .local v0, "b":Ljava/lang/String;
	//    .local v1, "c":Ljava/lang/String;
	//    .local v2, "d":Ljava/lang/String;
	appendTo->append(0x7b)->append(input->substring(pos->contextStart, pos->start))->append(cVar0)->append(input->substring(pos->start, pos->limit))->append(cVar0)->append(input->substring(pos->limit, pos->contextLimit))->append(0x7d);
	//    .end local v0    # "b":Ljava/lang/String;
	//    .end local v1    # "c":Ljava/lang/String;
	//    .end local v2    # "d":Ljava/lang/String;
label_goto_57:
	return appendTo;
	// 258    .line 91
label_cond_58:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	appendTo->append(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("INVALID Position {cs=")))->append(pos->contextStart)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", s=")))->append(pos->start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", l=")))->append(pos->limit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", cl=")))->append(pos->contextLimit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("} on ")))->append(input)->toString());
	goto label_goto_57;

}


