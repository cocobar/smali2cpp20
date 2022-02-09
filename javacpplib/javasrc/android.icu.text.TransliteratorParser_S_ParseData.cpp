// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorParser$ParseData.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.TransliteratorParser_S_ParseData.h"
#include "android.icu.text.TransliteratorParser.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeReplacer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.ParsePosition.h"
#include "java.util.List.h"
#include "java.util.Map.h"

// .method private constructor <init>(Landroid/icu/text/TransliteratorParser;)V
android::icu::text::TransliteratorParser_S_ParseData::TransliteratorParser_S_ParseData(std::shared_ptr<android::icu::text::TransliteratorParser> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/TransliteratorParser;
	this->this_S_0 = this_S_0;
	// 033    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/TransliteratorParser;Landroid/icu/text/TransliteratorParser$ParseData;)V
android::icu::text::TransliteratorParser_S_ParseData::TransliteratorParser_S_ParseData(std::shared_ptr<android::icu::text::TransliteratorParser> this_S_0,std::shared_ptr<android::icu::text::TransliteratorParser_S_ParseData> _this1)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/TransliteratorParser;
	//    .param p2, "-this1"    # Landroid/icu/text/TransliteratorParser$ParseData;
	android::icu::text::TransliteratorParser_S_ParseData::(this_S_0);
	return;

}
// .method public isMatcher(I)Z
bool android::icu::text::TransliteratorParser_S_ParseData::isMatcher(int ch)
{
	
	int i;
	
	//    .param p1, "ch"    # I
	i = (ch - android::icu::text::TransliteratorParser::-get3(this->this_S_0)->variablesBase);
	//    .local v0, "i":I
	if ( i < 0 ) 
		goto label_cond_25;
	if ( i >= android::icu::text::TransliteratorParser::-get6(this->this_S_0)->size() )
		goto label_cond_25;
	return android::icu::text::TransliteratorParser::-get6(this->this_S_0)->get(i)->instanceOf("android::icu::text::UnicodeMatcher");
	// 098    .line 261
label_cond_25:
	return 0x1;

}
// .method public isReplacer(I)Z
bool android::icu::text::TransliteratorParser_S_ParseData::isReplacer(int ch)
{
	
	int i;
	
	//    .param p1, "ch"    # I
	i = (ch - android::icu::text::TransliteratorParser::-get3(this->this_S_0)->variablesBase);
	//    .local v0, "i":I
	if ( i < 0 ) 
		goto label_cond_25;
	if ( i >= android::icu::text::TransliteratorParser::-get6(this->this_S_0)->size() )
		goto label_cond_25;
	return android::icu::text::TransliteratorParser::-get6(this->this_S_0)->get(i)->instanceOf("android::icu::text::UnicodeReplacer");
	// 152    .line 275
label_cond_25:
	return 0x1;

}
// .method public lookup(Ljava/lang/String;)[C
char android::icu::text::TransliteratorParser_S_ParseData::lookup(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<char[]> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar0 = android::icu::text::TransliteratorParser::-get5(this->this_S_0)->get(name);
	cVar0->checkCast("char[]");
	return cVar0;

}
// .method public lookupMatcher(I)Landroid/icu/text/UnicodeMatcher;
std::shared_ptr<android::icu::text::UnicodeMatcher> android::icu::text::TransliteratorParser_S_ParseData::lookupMatcher(int ch)
{
	
	int i;
	std::shared_ptr<android::icu::text::UnicodeMatcher> cVar0;
	
	//    .param p1, "ch"    # I
	i = (ch - android::icu::text::TransliteratorParser::-get3(this->this_S_0)->variablesBase);
	//    .local v0, "i":I
	if ( i < 0 ) 
		goto label_cond_25;
	if ( i >= android::icu::text::TransliteratorParser::-get6(this->this_S_0)->size() )
		goto label_cond_25;
	cVar0 = android::icu::text::TransliteratorParser::-get6(this->this_S_0)->get(i);
	cVar0->checkCast("android::icu::text::UnicodeMatcher");
	return cVar0;
	// 227    .line 224
label_cond_25:
	return 0x0;

}
// .method public parseReference(Ljava/lang/String;Ljava/text/ParsePosition;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TransliteratorParser_S_ParseData::parseReference(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,int limit)
{
	
	int start;
	int i;
	int c;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	//    .param p3, "limit"    # I
	start = pos->getIndex();
	//    .local v2, "start":I
	i = start;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= limit )
		goto label_cond_1d;
	c = text->charAt(i);
	//    .local v0, "c":C
	if ( i != start )
		goto label_cond_15;
	if ( ( android::icu::lang::UCharacter::isUnicodeIdentifierStart(c) ^ 0x1) )     
		goto label_cond_1d;
label_cond_15:
	if ( !(( android::icu::lang::UCharacter::isUnicodeIdentifierPart(c) ^ 0x1)) )  
		goto label_cond_21;
	//    .end local v0    # "c":C
label_cond_1d:
	if ( i != start )
		goto label_cond_24;
	return 0x0;
	// 293    .line 241
	// 294    .restart local v0    # "c":C
label_cond_21:
	i = ( i + 0x1);
	goto label_goto_5;
	// 300    .line 246
	// 301    .end local v0    # "c":C
label_cond_24:
	pos->setIndex(i);
	return text->substring(start, i);

}


