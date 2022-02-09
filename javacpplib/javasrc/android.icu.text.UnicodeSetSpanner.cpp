// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSetSpanner.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_SpanCondition.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.text.UnicodeSetSpanner_S_CountMethod.h"
#include "android.icu.text.UnicodeSetSpanner_S_TrimOption.h"
#include "android.icu.text.UnicodeSetSpanner.h"
#include "android.icu.util.OutputInt.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Landroid/icu/text/UnicodeSet;)V
android::icu::text::UnicodeSetSpanner::UnicodeSetSpanner(std::shared_ptr<android::icu::text::UnicodeSet> source)
{
	
	//    .param p1, "source"    # Landroid/icu/text/UnicodeSet;
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->unicodeSet = source;
	return;

}
// .method public countIn(Ljava/lang/CharSequence;)I
int android::icu::text::UnicodeSetSpanner::countIn(std::shared_ptr<java::lang::CharSequence> sequence)
{
	
	//    .param p1, "sequence"    # Ljava/lang/CharSequence;
	return this->countIn(sequence, android::icu::text::UnicodeSetSpanner_S_CountMethod::MIN_ELEMENTS, android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE);

}
// .method public countIn(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)I
int android::icu::text::UnicodeSetSpanner::countIn(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_CountMethod> countMethod)
{
	
	//    .param p1, "sequence"    # Ljava/lang/CharSequence;
	//    .param p2, "countMethod"    # Landroid/icu/text/UnicodeSetSpanner$CountMethod;
	return this->countIn(sequence, countMethod, android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE);

}
// .method public countIn(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;Landroid/icu/text/UnicodeSet$SpanCondition;)I
int android::icu::text::UnicodeSetSpanner::countIn(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_CountMethod> countMethod,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition)
{
	
	int count;
	int start;
	int length;
	std::shared_ptr<android::icu::util::OutputInt> cVar0;
	int endOfSpan;
	
	//    .param p1, "sequence"    # Ljava/lang/CharSequence;
	//    .param p2, "countMethod"    # Landroid/icu/text/UnicodeSetSpanner$CountMethod;
	//    .param p3, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	count = 0x0;
	//    .local v0, "count":I
	start = 0x0;
	//    .local v5, "start":I
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_18;
	//    .local v3, "skipSpan":Landroid/icu/text/UnicodeSet$SpanCondition;
label_goto_8:
	length = sequence->length();
	//    .local v2, "length":I
	cVar0 = 0x0;
label_goto_d:
	if ( start == length )
		goto label_cond_17;
	endOfSpan = this->unicodeSet->span(sequence, start, android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE);
	//    .local v1, "endOfSpan":I
	if ( endOfSpan != length )
		goto label_cond_1b;
	//    .end local v1    # "endOfSpan":I
label_cond_17:
	return count;
	// 123    .line 152
	// 124    .end local v2    # "length":I
	// 125    .end local v3    # "skipSpan":Landroid/icu/text/UnicodeSet$SpanCondition;
label_cond_18:
	android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED;
	//    .restart local v3    # "skipSpan":Landroid/icu/text/UnicodeSet$SpanCondition;
	goto label_goto_8;
	// 132    .line 160
	// 133    .restart local v1    # "endOfSpan":I
	// 134    .restart local v2    # "length":I
label_cond_1b:
	if ( countMethod != android::icu::text::UnicodeSetSpanner_S_CountMethod::WHOLE_SPAN )
		goto label_cond_28;
	start = this->unicodeSet->span(sequence, endOfSpan, spanCondition);
	count = ( count + 0x1);
	goto label_goto_d;
	// 152    .line 164
label_cond_28:
	if ( cVar0 )     
		goto label_cond_2f;
	cVar0 = std::make_shared<android::icu::util::OutputInt>();
label_cond_2f:
	start = this->unicodeSet->spanAndCount(sequence, endOfSpan, spanCondition, cVar0);
	count = (count +  cVar0->value);
	goto label_goto_d;

}
// .method public deleteFrom(Ljava/lang/CharSequence;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSetSpanner::deleteFrom(std::shared_ptr<java::lang::CharSequence> sequence)
{
	
	//    .param p1, "sequence"    # Ljava/lang/CharSequence;
	return this->replaceFrom(sequence, std::make_shared<java::lang::String>(std::make_shared<char[]>("")), android::icu::text::UnicodeSetSpanner_S_CountMethod::WHOLE_SPAN, android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE);

}
// .method public deleteFrom(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSetSpanner::deleteFrom(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition)
{
	
	//    .param p1, "sequence"    # Ljava/lang/CharSequence;
	//    .param p2, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	return this->replaceFrom(sequence, std::make_shared<java::lang::String>(std::make_shared<char[]>("")), android::icu::text::UnicodeSetSpanner_S_CountMethod::WHOLE_SPAN, spanCondition);

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::UnicodeSetSpanner::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	if ( !(other->instanceOf("android::icu::text::UnicodeSetSpanner")) )  
		goto label_cond_f;
	other->checkCast("android::icu::text::UnicodeSetSpanner");
	//    .end local p1    # "other":Ljava/lang/Object;
	cVar0 = this->unicodeSet->equals(other->unicodeSet);
label_goto_e:
	return cVar0;
	// 238    .restart local p1    # "other":Ljava/lang/Object;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public getUnicodeSet()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSetSpanner::getUnicodeSet()
{
	
	return this->unicodeSet;

}
// .method public hashCode()I
int android::icu::text::UnicodeSetSpanner::hashCode()
{
	
	return this->unicodeSet->hashCode();

}
// .method public replaceFrom(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSetSpanner::replaceFrom(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<java::lang::CharSequence> replacement)
{
	
	//    .param p1, "sequence"    # Ljava/lang/CharSequence;
	//    .param p2, "replacement"    # Ljava/lang/CharSequence;
	return this->replaceFrom(sequence, replacement, android::icu::text::UnicodeSetSpanner_S_CountMethod::MIN_ELEMENTS, android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE);

}
// .method public replaceFrom(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSetSpanner::replaceFrom(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<java::lang::CharSequence> replacement,std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_CountMethod> countMethod)
{
	
	//    .param p1, "sequence"    # Ljava/lang/CharSequence;
	//    .param p2, "replacement"    # Ljava/lang/CharSequence;
	//    .param p3, "countMethod"    # Landroid/icu/text/UnicodeSetSpanner$CountMethod;
	return this->replaceFrom(sequence, replacement, countMethod, android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE);

}
// .method public replaceFrom(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSetSpanner::replaceFrom(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<java::lang::CharSequence> replacement,std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_CountMethod> countMethod,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition)
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	int length;
	std::shared_ptr<android::icu::util::OutputInt> spanCount;
	int endCopy;
	int endModify;
	int i;
	
	//    .param p1, "sequence"    # Ljava/lang/CharSequence;
	//    .param p2, "replacement"    # Ljava/lang/CharSequence;
	//    .param p3, "countMethod"    # Landroid/icu/text/UnicodeSetSpanner$CountMethod;
	//    .param p4, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_2f;
	//    .local v0, "copySpan":Landroid/icu/text/UnicodeSet$SpanCondition;
label_goto_6:
	if ( replacement->length() )     
		goto label_cond_32;
	//    .local v5, "remove":Z
label_goto_d:
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v6, "result":Ljava/lang/StringBuilder;
	length = sequence->length();
	//    .local v4, "length":I
	spanCount = 0x0;
	//    .local v7, "spanCount":Landroid/icu/util/OutputInt;
	endCopy = 0x0;
	//    .end local v7    # "spanCount":Landroid/icu/util/OutputInt;
	//    .local v1, "endCopy":I
label_goto_18:
	if ( endCopy == length )
		goto label_cond_2a;
	if ( countMethod != android::icu::text::UnicodeSetSpanner_S_CountMethod::WHOLE_SPAN )
		goto label_cond_34;
	endModify = this->unicodeSet->span(sequence, endCopy, spanCondition);
	//    .local v2, "endModify":I
label_goto_24:
	if ( 0x1 )     
		goto label_cond_28;
	if ( endModify )     
		goto label_cond_42;
label_cond_28:
label_goto_28:
	if ( endModify != length )
		goto label_cond_54;
	//    .end local v2    # "endModify":I
label_cond_2a:
	return result->toString();
	// 389    .line 245
	// 390    .end local v0    # "copySpan":Landroid/icu/text/UnicodeSet$SpanCondition;
	// 391    .end local v1    # "endCopy":I
	// 392    .end local v4    # "length":I
	// 393    .end local v5    # "remove":Z
	// 394    .end local v6    # "result":Ljava/lang/StringBuilder;
label_cond_2f:
	android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED;
	//    .restart local v0    # "copySpan":Landroid/icu/text/UnicodeSet$SpanCondition;
	goto label_goto_6;
	// 401    .line 246
label_cond_32:
	0x0;
	//    .restart local v5    # "remove":Z
	goto label_goto_d;
	// 408    .line 258
	// 409    .restart local v1    # "endCopy":I
	// 410    .restart local v4    # "length":I
	// 411    .restart local v6    # "result":Ljava/lang/StringBuilder;
label_cond_34:
	if ( spanCount )     
		goto label_cond_3b;
	spanCount = std::make_shared<android::icu::util::OutputInt>();
label_cond_3b:
	endModify = this->unicodeSet->spanAndCount(sequence, endCopy, spanCondition, spanCount);
	//    .restart local v2    # "endModify":I
	goto label_goto_24;
	// 431    .line 265
label_cond_42:
	if ( countMethod != android::icu::text::UnicodeSetSpanner_S_CountMethod::WHOLE_SPAN )
		goto label_cond_4a;
	result->append(replacement);
	goto label_goto_28;
	// 442    .line 268
label_cond_4a:
	i = spanCount->value;
	//    .local v3, "i":I
label_goto_4c:
	if ( i <= 0 )
		goto label_cond_28;
	result->append(replacement);
	i = ( i + -0x1);
	goto label_goto_4c;
	// 458    .line 275
	// 459    .end local v3    # "i":I
label_cond_54:
	endCopy = this->unicodeSet->span(sequence, endModify, android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE);
	result->append(sequence->subSequence(endModify, endCopy));
	goto label_goto_18;

}
// .method public trim(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;
std::shared_ptr<java::lang::CharSequence> android::icu::text::UnicodeSetSpanner::trim(std::shared_ptr<java::lang::CharSequence> sequence)
{
	
	//    .param p1, "sequence"    # Ljava/lang/CharSequence;
	return this->trim(sequence, android::icu::text::UnicodeSetSpanner_S_TrimOption::BOTH, android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE);

}
// .method public trim(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$TrimOption;)Ljava/lang/CharSequence;
std::shared_ptr<java::lang::CharSequence> android::icu::text::UnicodeSetSpanner::trim(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> trimOption)
{
	
	//    .param p1, "sequence"    # Ljava/lang/CharSequence;
	//    .param p2, "trimOption"    # Landroid/icu/text/UnicodeSetSpanner$TrimOption;
	return this->trim(sequence, trimOption, android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE);

}
// .method public trim(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$TrimOption;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/CharSequence;
std::shared_ptr<java::lang::CharSequence> android::icu::text::UnicodeSetSpanner::trim(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> trimOption,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition)
{
	
	int length;
	int endLeadContained;
	int startTrailContained;
	std::shared_ptr<java::lang::CharSequence> sequence;
	
	//    .param p1, "sequence"    # Ljava/lang/CharSequence;
	//    .param p2, "trimOption"    # Landroid/icu/text/UnicodeSetSpanner$TrimOption;
	//    .param p3, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	length = sequence->length();
	//    .local v1, "length":I
	if ( trimOption == android::icu::text::UnicodeSetSpanner_S_TrimOption::TRAILING )
		goto label_cond_14;
	endLeadContained = this->unicodeSet->span(sequence, spanCondition);
	//    .local v0, "endLeadContained":I
	if ( endLeadContained != length )
		goto label_cond_15;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 544    .line 369
	// 545    .end local v0    # "endLeadContained":I
label_cond_14:
	endLeadContained = 0x0;
	//    .restart local v0    # "endLeadContained":I
label_cond_15:
	if ( trimOption == android::icu::text::UnicodeSetSpanner_S_TrimOption::LEADING )
		goto label_cond_24;
	startTrailContained = this->unicodeSet->spanBack(sequence, spanCondition);
	//    .local v2, "startTrailContained":I
label_goto_1f:
	if ( endLeadContained )     
		goto label_cond_26;
	if ( startTrailContained != length )
		goto label_cond_26;
	//    .end local p1    # "sequence":Ljava/lang/CharSequence;
label_goto_23:
	return sequence;
	// 574    .line 374
	// 575    .end local v2    # "startTrailContained":I
	// 576    .restart local p1    # "sequence":Ljava/lang/CharSequence;
label_cond_24:
	//    .restart local v2    # "startTrailContained":I
	goto label_goto_1f;
	// 583    .line 376
label_cond_26:
	sequence = sequence->subSequence(endLeadContained, startTrailContained);
	goto label_goto_23;

}


