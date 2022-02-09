// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\StringMatcher.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.StringMatcher.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Appendable.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

// .method public constructor <init>(Ljava/lang/String;IIILandroid/icu/text/RuleBasedTransliterator$Data;)V
android::icu::text::StringMatcher::StringMatcher(std::shared_ptr<java::lang::String> theString,int start,int limit,int segmentNum,std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> theData)
{
	
	//    .param p1, "theString"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "segmentNum"    # I
	//    .param p5, "theData"    # Landroid/icu/text/RuleBasedTransliterator$Data;
	android::icu::text::StringMatcher::(theString->substring(start, limit), segmentNum, theData);
	return;

}
// .method public constructor <init>(Ljava/lang/String;ILandroid/icu/text/RuleBasedTransliterator$Data;)V
android::icu::text::StringMatcher::StringMatcher(std::shared_ptr<java::lang::String> theString,int segmentNum,std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> theData)
{
	
	int cVar0;
	
	//    .param p1, "theString"    # Ljava/lang/String;
	//    .param p2, "segmentNum"    # I
	//    .param p3, "theData"    # Landroid/icu/text/RuleBasedTransliterator$Data;
	cVar0 = -0x1;
	// 053    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->data = theData;
	this->pattern = theString;
	this->matchLimit = cVar0;
	this->matchStart = cVar0;
	this->segmentNumber = segmentNum;
	return;

}
// .method public addMatchSetTo(Landroid/icu/text/UnicodeSet;)V
void android::icu::text::StringMatcher::addMatchSetTo(std::shared_ptr<android::icu::text::UnicodeSet> toUnionTo)
{
	
	int i;
	int ch;
	std::shared_ptr<android::icu::text::UnicodeMatcher> matcher;
	
	//    .param p1, "toUnionTo"    # Landroid/icu/text/UnicodeSet;
	i = 0x0;
	//    .local v1, "i":I
label_goto_1:
	if ( i >= this->pattern->length() )
		goto label_cond_24;
	ch = android::icu::text::UTF16::charAt(this->pattern, i);
	//    .local v0, "ch":I
	matcher = this->data->lookupMatcher(ch);
	//    .local v2, "matcher":Landroid/icu/text/UnicodeMatcher;
	if ( matcher )     
		goto label_cond_20;
	toUnionTo->add(ch);
label_goto_1a:
	i = (i +  android::icu::text::UTF16::getCharCount(ch));
	goto label_goto_1;
	// 125    .line 233
label_cond_20:
	matcher->addMatchSetTo(toUnionTo);
	goto label_goto_1a;
	// 131    .line 236
	// 132    .end local v0    # "ch":I
	// 133    .end local v2    # "matcher":Landroid/icu/text/UnicodeMatcher;
label_cond_24:
	return;

}
// .method public addReplacementSetTo(Landroid/icu/text/UnicodeSet;)V
void android::icu::text::StringMatcher::addReplacementSetTo(std::shared_ptr<android::icu::text::UnicodeSet> toUnionTo)
{
	
	//    .param p1, "toUnionTo"    # Landroid/icu/text/UnicodeSet;
	return;

}
// .method public matches(Landroid/icu/text/Replaceable;[IIZ)I
int android::icu::text::StringMatcher::matches(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<int[]> offset,int limit,bool incremental)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared<std::vector<int[]>> cursor;
	int i;
	int keyChar;
	std::shared_ptr<android::icu::text::UnicodeMatcher> subm;
	int m;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "offset"    # [I
	//    .param p3, "limit"    # I
	//    .param p4, "incremental"    # Z
	cVar0 = 0x1;
	cVar1 = 0x2;
	cVar2 = 0x0;
	cursor = std::make_shared<std::vector<int[]>>(cVar0);
	cursor[cVar2] = offset[cVar2];
	//    .local v0, "cursor":[I
	if ( limit >= cursor[cVar2] )
		goto label_cond_57;
	i = ( this->pattern->length() + -0x1);
	//    .local v1, "i":I
label_goto_15:
	if ( i < 0 ) 
		goto label_cond_42;
	keyChar = this->pattern->charAt(i);
	//    .local v2, "keyChar":C
	subm = this->data->lookupMatcher(keyChar);
	//    .local v4, "subm":Landroid/icu/text/UnicodeMatcher;
	if ( subm )     
		goto label_cond_3b;
	if ( cursor[cVar2] <= limit )
		goto label_cond_3a;
	if ( keyChar != text->charAt(cursor[cVar2]) )
		goto label_cond_3a;
	cursor[cVar2] = ( cursor[cVar2] + -0x1);
label_cond_37:
	i = ( i + -0x1);
	goto label_goto_15;
	// 233    .line 123
label_cond_3a:
	return cVar2;
	// 237    .line 127
label_cond_3b:
	m = subm->matches(text, cursor, limit, incremental);
	//    .local v3, "m":I
	if ( m == cVar1 )
		goto label_cond_37;
	return m;
	// 250    .line 136
	// 251    .end local v2    # "keyChar":C
	// 252    .end local v3    # "m":I
	// 253    .end local v4    # "subm":Landroid/icu/text/UnicodeMatcher;
label_cond_42:
	if ( this->matchStart >= 0 )
		goto label_cond_52;
	this->matchStart = ( cursor[cVar2] + 0x1);
	this->matchLimit = ( offset[cVar2] + 0x1);
label_cond_52:
label_goto_52:
	offset[cVar2] = cursor[cVar2];
	return cVar1;
	// 283    .line 141
	// 284    .end local v1    # "i":I
label_cond_57:
	i = 0x0;
	//    .restart local v1    # "i":I
label_goto_58:
	if ( i >= this->pattern->length() )
		goto label_cond_92;
	if ( !(incremental) )  
		goto label_cond_67;
	if ( cursor[cVar2] != limit )
		goto label_cond_67;
	return cVar0;
	// 308    .line 147
label_cond_67:
	keyChar = this->pattern->charAt(i);
	//    .restart local v2    # "keyChar":C
	subm = this->data->lookupMatcher(keyChar);
	//    .restart local v4    # "subm":Landroid/icu/text/UnicodeMatcher;
	if ( subm )     
		goto label_cond_8b;
	if ( cursor[cVar2] >= limit )
		goto label_cond_8a;
	if ( keyChar != text->charAt(cursor[cVar2]) )
		goto label_cond_8a;
	cursor[cVar2] = ( cursor[cVar2] + 0x1);
label_cond_87:
	i = ( i + 0x1);
	goto label_goto_58;
	// 355    .line 157
label_cond_8a:
	return cVar2;
	// 359    .line 161
label_cond_8b:
	m = subm->matches(text, cursor, limit, incremental);
	//    .restart local v3    # "m":I
	if ( m == cVar1 )
		goto label_cond_87;
	return m;
	// 372    .line 168
	// 373    .end local v2    # "keyChar":C
	// 374    .end local v3    # "m":I
	// 375    .end local v4    # "subm":Landroid/icu/text/UnicodeMatcher;
label_cond_92:
	this->matchStart = offset[cVar2];
	this->matchLimit = cursor[cVar2];
	goto label_goto_52;

}
// .method public matchesIndexValue(I)Z
bool android::icu::text::StringMatcher::matchesIndexValue(int v)
{
	
	bool cVar0;
	int cVar1;
	int c;
	std::shared_ptr<android::icu::text::UnicodeMatcher> m;
	
	//    .param p1, "v"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this->pattern->length() )     
		goto label_cond_b;
	return cVar0;
	// 410    .line 213
label_cond_b:
	c = android::icu::text::UTF16::charAt(this->pattern, cVar1);
	//    .local v0, "c":I
	m = this->data->lookupMatcher(c);
	//    .local v1, "m":Landroid/icu/text/UnicodeMatcher;
	if ( m )     
		goto label_cond_20;
	if ( ( c & 0xff) != v )
		goto label_cond_1e;
label_goto_1d:
	return cVar0;
label_cond_1e:
	cVar0 = cVar1;
	goto label_goto_1d;
label_cond_20:
	cVar0 = m->matchesIndexValue(v);
	goto label_goto_1d;

}
// .method public replace(Landroid/icu/text/Replaceable;II[I)I
int android::icu::text::StringMatcher::replace(std::shared_ptr<android::icu::text::Replaceable> text,int start,int limit,std::shared_ptr<int[]> cursor)
{
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "cursor"    # [I
	//    .local v1, "outLen":I
	limit;
	//    .local v0, "dest":I
	if ( this->matchStart < 0 ) 
		goto label_cond_19;
	if ( this->matchStart == this->matchLimit )
		goto label_cond_19;
	text->copy(this->matchStart, this->matchLimit, limit);
label_cond_19:
	text->replace(start, limit, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	return 0x0;

}
// .method public resetMatch()V
void android::icu::text::StringMatcher::resetMatch()
{
	
	int cVar0;
	
	cVar0 = -0x1;
	this->matchLimit = cVar0;
	this->matchStart = cVar0;
	return;

}
// .method public toPattern(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::StringMatcher::toPattern(bool escapeUnprintable)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::StringBuffer> result;
	std::shared_ptr<java::lang::StringBuffer> quoteBuf;
	int i;
	int keyChar;
	std::shared_ptr<android::icu::text::UnicodeMatcher> m;
	
	//    .param p1, "escapeUnprintable"    # Z
	cVar0 = 0x1;
	result = std::make_shared<java::lang::StringBuffer>();
	//    .local v4, "result":Ljava/lang/StringBuffer;
	quoteBuf = std::make_shared<java::lang::StringBuffer>();
	//    .local v3, "quoteBuf":Ljava/lang/StringBuffer;
	if ( this->segmentNumber <= 0 )
		goto label_cond_15;
	result->append(0x28);
label_cond_15:
	i = 0x0;
	//    .local v0, "i":I
label_goto_16:
	if ( i >= this->pattern->length() )
		goto label_cond_3a;
	keyChar = this->pattern->charAt(i);
	//    .local v1, "keyChar":C
	m = this->data->lookupMatcher(keyChar);
	//    .local v2, "m":Landroid/icu/text/UnicodeMatcher;
	if ( m )     
		goto label_cond_32;
	android::icu::impl::Utility::appendToRule(result, keyChar, 0x0, escapeUnprintable, quoteBuf);
label_goto_2f:
	i = ( i + 0x1);
	goto label_goto_16;
	// 590    .line 192
label_cond_32:
	android::icu::impl::Utility::appendToRule(result, m->toPattern(escapeUnprintable), cVar0, escapeUnprintable, quoteBuf);
	goto label_goto_2f;
	// 600    .line 196
	// 601    .end local v1    # "keyChar":C
	// 602    .end local v2    # "m":Landroid/icu/text/UnicodeMatcher;
label_cond_3a:
	if ( this->segmentNumber <= 0 )
		goto label_cond_43;
	result->append(0x29);
label_cond_43:
	android::icu::impl::Utility::appendToRule(result, -0x1, cVar0, escapeUnprintable, quoteBuf);
	return result->toString();

}
// .method public toReplacerPattern(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::StringMatcher::toReplacerPattern(bool escapeUnprintable)
{
	
	std::shared_ptr<java::lang::StringBuffer> rule;
	
	//    .param p1, "escapeUnprintable"    # Z
	rule = std::make_shared<java::lang::StringBuffer>(std::make_shared<java::lang::String>(std::make_shared<char[]>("$")));
	//    .local v0, "rule":Ljava/lang/StringBuffer;
	android::icu::impl::Utility::appendNumber(rule, this->segmentNumber, 0xa, 0x1);
	return rule->toString();

}


