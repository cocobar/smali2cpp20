// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliterationRule.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.StringMatcher.h"
#include "android.icu.text.StringReplacer.h"
#include "android.icu.text.TransliterationRule.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeReplacer.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::TransliterationRule::ANCHOR_END = 0x2;
static android::icu::text::TransliterationRule::ANCHOR_START = 0x1;
// .method public constructor <init>(Ljava/lang/String;IILjava/lang/String;II[Landroid/icu/text/UnicodeMatcher;ZZLandroid/icu/text/RuleBasedTransliterator$Data;)V
android::icu::text::TransliterationRule::TransliterationRule(std::shared_ptr<java::lang::String> input,int anteContextPos,int postContextPos,std::shared_ptr<java::lang::String> output,int cVar0,int cursorOffset,std::shared_ptr<std::vector<android::icu::text::UnicodeMatcher>> segs,bool anchorStart,bool anchorEnd,std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> theData)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::StringMatcher> cVar1;
	std::shared_ptr<android::icu::text::StringMatcher> cVar2;
	std::shared_ptr<android::icu::text::StringMatcher> cVar3;
	std::shared_ptr<android::icu::text::StringReplacer> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar7;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	
	//    .param p1, "input"    # Ljava/lang/String;
	//    .param p2, "anteContextPos"    # I
	//    .param p3, "postContextPos"    # I
	//    .param p4, "output"    # Ljava/lang/String;
	//    .param p5, "cursorPos"    # I
	//    .param p6, "cursorOffset"    # I
	//    .param p7, "segs"    # [Landroid/icu/text/UnicodeMatcher;
	//    .param p8, "anchorStart"    # Z
	//    .param p9, "anchorEnd"    # Z
	//    .param p10, "theData"    # Landroid/icu/text/RuleBasedTransliterator$Data;
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->data = theData;
	if ( anteContextPos >= 0 )
		goto label_cond_a1;
	this->anteContextLength = 0x0;
label_goto_c:
	if ( postContextPos >= 0 )
		goto label_cond_b4;
	this->keyLength = (input->length() -  this->anteContextLength);
label_goto_17:
	if ( cVar0 >= 0 )
		goto label_cond_cf;
	cVar0 = output->length();
label_cond_1d:
	this->segments = segs;
	this->pattern = input;
	this->flags = 0x0;
	if ( !(anchorStart) )  
		goto label_cond_2d;
	this->flags = (unsigned char)(( this->flags | 0x1));
label_cond_2d:
	if ( !(anchorEnd) )  
		goto label_cond_36;
	this->flags = (unsigned char)(( this->flags | 0x2));
label_cond_36:
	this->anteContext = 0x0;
	if ( this->anteContextLength <= 0 )
		goto label_cond_50;
	cVar1 = std::make_shared<android::icu::text::StringMatcher>(this->pattern->substring(0x0, this->anteContextLength), 0x0, this->data);
	this->anteContext = cVar1;
label_cond_50:
	this->key = 0x0;
	if ( this->keyLength <= 0 )
		goto label_cond_6e;
	cVar2 = std::make_shared<android::icu::text::StringMatcher>(this->pattern->substring(this->anteContextLength, (this->anteContextLength +  this->keyLength)), 0x0, this->data);
	this->key = cVar2;
label_cond_6e:
	//    .local v1, "postContextLength":I
	this->postContext = 0x0;
	if ( ((this->pattern->length() -  this->keyLength) - this->anteContextLength) <= 0 )
		goto label_cond_95;
	cVar3 = std::make_shared<android::icu::text::StringMatcher>(this->pattern->substring((this->anteContextLength +  this->keyLength)), 0x0, this->data);
	this->postContext = cVar3;
label_cond_95:
	cVar4 = std::make_shared<android::icu::text::StringReplacer>(output, (cVar0 + cursorOffset), this->data);
	this->output = cVar4;
	return;
	// 263    .line 168
	// 264    .end local v1    # "postContextLength":I
label_cond_a1:
	if ( anteContextPos <= input->length() )
		goto label_cond_b0;
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid ante context")));
	// throw
	throw cVar5;
	// 281    .line 171
label_cond_b0:
	this->anteContextLength = anteContextPos;
	goto label_goto_c;
	// 287    .line 176
label_cond_b4:
	if ( postContextPos <  this->anteContextLength )
		goto label_cond_be;
	if ( postContextPos <= input->length() )
		goto label_cond_c7;
label_cond_be:
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid post context")));
	// throw
	throw cVar6;
	// 310    .line 180
label_cond_c7:
	this->keyLength = (postContextPos - this->anteContextLength);
	goto label_goto_17;
	// 320    .line 184
label_cond_cf:
	if ( cVar0 <= output->length() )
		goto label_cond_1d;
	cVar7 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid cursor position")));
	// throw
	throw cVar7;

}
// .method static final posAfter(Landroid/icu/text/Replaceable;I)I
int android::icu::text::TransliterationRule::posAfter(std::shared_ptr<android::icu::text::Replaceable> str,int pos)
{
	
	int cVar0;
	
	//    .param p0, "str"    # Landroid/icu/text/Replaceable;
	//    .param p1, "pos"    # I
	if ( pos < 0 ) 
		goto label_cond_12;
	if ( pos >= str->length() )
		goto label_cond_12;
	cVar0 = (android::icu::text::UTF16::getCharCount(str->char32At(pos)) +  pos);
label_goto_11:
	return cVar0;
	// 368    .line 346
label_cond_12:
	cVar0 = ( pos + 0x1);
	goto label_goto_11;

}
// .method static final posBefore(Landroid/icu/text/Replaceable;I)I
int android::icu::text::TransliterationRule::posBefore(std::shared_ptr<android::icu::text::Replaceable> str,int pos)
{
	
	int cVar0;
	
	//    .param p0, "str"    # Landroid/icu/text/Replaceable;
	//    .param p1, "pos"    # I
	if ( pos <= 0 )
		goto label_cond_f;
	cVar0 = (pos - android::icu::text::UTF16::getCharCount(str->char32At(( pos + -0x1))));
label_goto_e:
	return cVar0;
	// 401    .line 340
label_cond_f:
	cVar0 = ( pos + -0x1);
	goto label_goto_e;

}
// .method addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::TransliterationRule::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> filter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet,std::shared_ptr<android::icu::text::UnicodeSet> revisiting)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> tempSource;
	std::shared_ptr<android::icu::text::UnicodeSet> temp;
	int i;
	int ch;
	std::shared_ptr<android::icu::text::UnicodeMatcher> matcher;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "filter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p4, "revisiting"    # Landroid/icu/text/UnicodeSet;
	//    .local v4, "limit":I
	tempSource = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v7, "tempSource":Landroid/icu/text/UnicodeSet;
	temp = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v6, "temp":Landroid/icu/text/UnicodeSet;
	i = this->anteContextLength;
	//    .local v3, "i":I
label_goto_12:
	if ( i >= (this->anteContextLength + this->keyLength) )
		goto label_cond_53;
	ch = android::icu::text::UTF16::charAt(this->pattern, i);
	//    .local v1, "ch":I
	i = (i +  android::icu::text::UTF16::getCharCount(ch));
	matcher = this->data->lookupMatcher(ch);
	//    .local v5, "matcher":Landroid/icu/text/UnicodeMatcher;
	if ( matcher )     
		goto label_cond_32;
	if ( filter->contains(ch) )     
		goto label_cond_2e;
	return;
	// 481    .line 575
label_cond_2e:
	tempSource->add(ch);
	goto label_goto_12;
	// 487    .line 578
label_cond_32:
	try {
	//label_try_start_32:
	cVar0 = matcher;
	cVar0->checkCast("android::icu::text::UnicodeSet");
	if ( filter->containsSome(cVar0) )     
		goto label_cond_3d;
	return;
	// 505    .line 581
label_cond_3d:
	matcher->addMatchSetTo(tempSource);
	//label_try_end_40:
	}
	catch (java::lang::ClassCastException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_41;
	}
	//    .catch Ljava/lang/ClassCastException; {:try_start_32 .. :try_end_40} :catch_41
	goto label_goto_12;
	// 513    .line 582
label_catch_41:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/ClassCastException;
	temp->clear();
	matcher->addMatchSetTo(temp);
	if ( filter->containsSome(temp) )     
		goto label_cond_4f;
	return;
	// 534    .line 588
label_cond_4f:
	tempSource->addAll(temp);
	goto label_goto_12;
	// 540    .line 593
	// 541    .end local v1    # "ch":I
	// 542    .end local v2    # "e":Ljava/lang/ClassCastException;
	// 543    .end local v5    # "matcher":Landroid/icu/text/UnicodeMatcher;
label_cond_53:
	sourceSet->addAll(tempSource);
	this->output->addReplacementSetTo(targetSet);
	return;

}
// .method public getAnteContextLength()I
int android::icu::text::TransliterationRule::getAnteContextLength()
{
	
	int cVar1;
	
	cVar1 = 0x0;
	if ( !(( this->flags & 0x1)) )  
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return (cVar1 +  this->anteContextLength);

}
// .method final getIndexValue()I
int android::icu::text::TransliterationRule::getIndexValue()
{
	
	int cVar1;
	int c;
	
	cVar1 = -0x1;
	if ( this->anteContextLength != this->pattern->length() )
		goto label_cond_c;
	return cVar1;
	// 599    .line 246
label_cond_c:
	c = android::icu::text::UTF16::charAt(this->pattern, this->anteContextLength);
	//    .local v0, "c":I
	if ( this->data->lookupMatcher(c) )     
		goto label_cond_1e;
	cVar1 = ( c & 0xff);
label_cond_1e:
	return cVar1;

}
// .method public masks(Landroid/icu/text/TransliterationRule;)Z
bool android::icu::text::TransliterationRule::masks(std::shared_ptr<android::icu::text::TransliterationRule> r2)
{
	
	bool cVar0;
	int cVar3;
	int len;
	int left;
	int left2;
	int right;
	int right2;
	bool cVar3;
	
	//    .param p1, "r2"    # Landroid/icu/text/TransliterationRule;
	cVar0 = 0x1;
	cVar3 = 0x0;
	len = this->pattern->length();
	//    .local v2, "len":I
	left = this->anteContextLength;
	//    .local v0, "left":I
	left2 = r2->anteContextLength;
	//    .local v1, "left2":I
	right = (this->pattern->length() - left);
	//    .local v3, "right":I
	right2 = (r2->pattern->length() - left2);
	//    .local v4, "right2":I
	if ( left != left2 )
		goto label_cond_51;
	if ( right != right2 )
		goto label_cond_51;
	if ( this->keyLength >  r2->keyLength )
		goto label_cond_51;
	if ( !(r2->pattern->regionMatches(cVar3, this->pattern, cVar3, len)) )  
		goto label_cond_51;
	if ( this->flags == r2->flags )
		goto label_cond_42;
	if ( ( this->flags & 0x1) )     
		goto label_cond_43;
	if ( ( this->flags & 0x2) )     
		goto label_cond_43;
label_cond_42:
label_goto_42:
	return cVar0;
	// 719    .line 328
label_cond_43:
	if ( !(( r2->flags & 0x1)) )  
		goto label_cond_4f;
	if ( ( r2->flags & 0x2) )     
		goto label_cond_42;
label_cond_4f:
	cVar0 = cVar3;
	goto label_goto_42;
	// 738    .line 331
label_cond_51:
	if ( left >  left2 )
		goto label_cond_67;
	if ( right <  right2 )
		goto label_cond_5d;
	if ( right != right2 )
		goto label_cond_67;
	if ( this->keyLength >  r2->keyLength )
		goto label_cond_67;
label_cond_5d:
	cVar3 = r2->pattern->regionMatches((left2 - left), this->pattern, cVar3, len);
label_cond_67:
	return cVar3;

}
// .method public matchAndReplace(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)I
int android::icu::text::TransliterationRule::matchAndReplace(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos,bool incremental)
{
	
	int i;
	std::shared_ptr<android::icu::text::StringMatcher> cVar0;
	std::shared<std::vector<int[]>> intRef;
	int anteLimit;
	int oText;
	int match;
	int keyLimit;
	int lenDelta;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "pos"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "incremental"    # Z
	if ( !(this->segments) )  
		goto label_cond_16;
	i = 0x0;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= this->segments->size() )
		goto label_cond_16;
	cVar0 = this->segments[i];
	cVar0->checkCast("android::icu::text::StringMatcher");
	cVar0->resetMatch();
	i = ( i + 0x1);
	goto label_goto_5;
	// 808    .line 389
	// 809    .end local v1    # "i":I
label_cond_16:
	intRef = std::make_shared<std::vector<int[]>>(0x1);
	//    .local v2, "intRef":[I
	anteLimit = android::icu::text::TransliterationRule::posBefore(text, pos->contextStart);
	//    .local v0, "anteLimit":I
	intRef[0x0] = android::icu::text::TransliterationRule::posBefore(text, pos->start);
	if ( !(this->anteContext) )  
		goto label_cond_38;
	//    .local v5, "match":I
	if ( this->anteContext->matches(text, intRef, anteLimit, 0x0) == 0x2 )
		goto label_cond_38;
	return 0x0;
	// 860    .line 418
	// 861    .end local v5    # "match":I
label_cond_38:
	oText = intRef[0x0];
	//    .local v9, "oText":I
	//    .local v6, "minOText":I
	if ( !(( this->flags & 0x1)) )  
		goto label_cond_49;
	if ( oText == anteLimit )
		goto label_cond_49;
	return 0x0;
	// 888    .line 430
label_cond_49:
	intRef[0x0] = pos->start;
	if ( !(this->key) )  
		goto label_cond_5e;
	match = this->key->matches(text, intRef, pos->limit, incremental);
	//    .restart local v5    # "match":I
	if ( match == 0x2 )
		goto label_cond_5e;
	return match;
	// 919    .line 439
	// 920    .end local v5    # "match":I
label_cond_5e:
	keyLimit = intRef[0x0];
	//    .local v3, "keyLimit":I
	if ( !(this->postContext) )  
		goto label_cond_79;
	if ( !(incremental) )  
		goto label_cond_6d;
	if ( keyLimit != pos->limit )
		goto label_cond_6d;
	return 0x1;
	// 944    .line 450
label_cond_6d:
	match = this->postContext->matches(text, intRef, pos->contextLimit, incremental);
	//    .restart local v5    # "match":I
	if ( match == 0x2 )
		goto label_cond_79;
	return match;
	// 963    .line 456
	// 964    .end local v5    # "match":I
label_cond_79:
	oText = intRef[0x0];
	if ( !(( this->flags & 0x2)) )  
		goto label_cond_8c;
	if ( oText == pos->contextLimit )
		goto label_cond_88;
	return 0x0;
	// 987    .line 464
label_cond_88:
	if ( !(incremental) )  
		goto label_cond_8c;
	return 0x1;
	// 996    .line 474
label_cond_8c:
	//    .local v7, "newLength":I
	lenDelta = (this->output->replace(text, pos->start, keyLimit, intRef) - (keyLimit - pos->start));
	//    .local v4, "lenDelta":I
	//    .local v8, "newStart":I
	pos->limit = (pos->limit +  lenDelta);
	pos->contextLimit = (pos->contextLimit +  lenDelta);
	pos->start = java::lang::Math::max(android::icu::text::TransliterationRule::posAfter(text, oText), java::lang::Math::min(java::lang::Math::min((oText +  lenDelta), pos->limit), intRef[0x0]));
	return 0x2;

}
// .method final matchesIndexValue(I)Z
bool android::icu::text::TransliterationRule::matchesIndexValue(int v)
{
	
	std::shared_ptr<android::icu::text::StringMatcher> m;
	bool cVar0;
	
	//    .param p1, "v"    # I
	if ( !(this->key) )  
		goto label_cond_d;
	m = this->key;
	//    .local v0, "m":Landroid/icu/text/UnicodeMatcher;
label_goto_6:
	if ( !(m) )  
		goto label_cond_10;
	cVar0 = m->matchesIndexValue(v);
label_goto_c:
	return cVar0;
	// 1085    .line 263
	// 1086    .end local v0    # "m":Landroid/icu/text/UnicodeMatcher;
label_cond_d:
	//    .restart local v0    # "m":Landroid/icu/text/UnicodeMatcher;
	goto label_goto_6;
	// 1093    .line 264
label_cond_10:
	cVar0 = 0x1;
	goto label_goto_c;

}
// .method public toRule(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TransliterationRule::toRule(bool escapeUnprintable)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::StringBuffer> rule;
	std::shared_ptr<java::lang::StringBuffer> quoteBuf;
	int emitBraces;
	
	//    .param p1, "escapeUnprintable"    # Z
	cVar0 = 0x1;
	rule = std::make_shared<java::lang::StringBuffer>();
	//    .local v2, "rule":Ljava/lang/StringBuffer;
	quoteBuf = std::make_shared<java::lang::StringBuffer>();
	//    .local v1, "quoteBuf":Ljava/lang/StringBuffer;
	if ( this->anteContext )     
		goto label_cond_13;
	if ( !(this->postContext) )  
		goto label_cond_60;
label_cond_13:
	emitBraces = 0x1;
	//    .local v0, "emitBraces":Z
label_goto_14:
	if ( !(( this->flags & 0x1)) )  
		goto label_cond_1f;
	rule->append(0x5e);
label_cond_1f:
	android::icu::impl::Utility::appendToRule(rule, this->anteContext, escapeUnprintable, quoteBuf);
	if ( !(emitBraces) )  
		goto label_cond_2b;
	android::icu::impl::Utility::appendToRule(rule, 0x7b, cVar0, escapeUnprintable, quoteBuf);
label_cond_2b:
	android::icu::impl::Utility::appendToRule(rule, this->key, escapeUnprintable, quoteBuf);
	if ( !(emitBraces) )  
		goto label_cond_37;
	android::icu::impl::Utility::appendToRule(rule, 0x7d, cVar0, escapeUnprintable, quoteBuf);
label_cond_37:
	android::icu::impl::Utility::appendToRule(rule, this->postContext, escapeUnprintable, quoteBuf);
	if ( !(( this->flags & 0x2)) )  
		goto label_cond_47;
	rule->append(0x24);
label_cond_47:
	android::icu::impl::Utility::appendToRule(rule, std::make_shared<java::lang::String>(std::make_shared<char[]>(" > ")), cVar0, escapeUnprintable, quoteBuf);
	android::icu::impl::Utility::appendToRule(rule, this->output->toReplacerPattern(escapeUnprintable), cVar0, escapeUnprintable, quoteBuf);
	android::icu::impl::Utility::appendToRule(rule, 0x3b, cVar0, escapeUnprintable, quoteBuf);
	return rule->toString();
	// 1218    .line 503
	// 1219    .end local v0    # "emitBraces":Z
label_cond_60:
	emitBraces = 0x0;
	//    .restart local v0    # "emitBraces":Z
	goto label_goto_14;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TransliterationRule::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(0x7b)->append(this->toRule(0x1))->append(0x7d)->toString();

}


