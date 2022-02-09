// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\StringReplacer.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.StringReplacer.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeReplacer.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

// .method public constructor <init>(Ljava/lang/String;ILandroid/icu/text/RuleBasedTransliterator$Data;)V
android::icu::text::StringReplacer::StringReplacer(std::shared_ptr<java::lang::String> theOutput,int theCursorPos,std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> theData)
{
	
	bool cVar0;
	
	//    .param p1, "theOutput"    # Ljava/lang/String;
	//    .param p2, "theCursorPos"    # I
	//    .param p3, "theData"    # Landroid/icu/text/RuleBasedTransliterator$Data;
	cVar0 = 0x1;
	// 032    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->output = theOutput;
	this->cursorPos = theCursorPos;
	this->hasCursor = cVar0;
	this->data = theData;
	this->isComplex = cVar0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/RuleBasedTransliterator$Data;)V
android::icu::text::StringReplacer::StringReplacer(std::shared_ptr<java::lang::String> theOutput,std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> theData)
{
	
	int cVar0;
	
	//    .param p1, "theOutput"    # Ljava/lang/String;
	//    .param p2, "theData"    # Landroid/icu/text/RuleBasedTransliterator$Data;
	cVar0 = 0x0;
	// 062    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->output = theOutput;
	this->cursorPos = cVar0;
	this->hasCursor = cVar0;
	this->data = theData;
	this->isComplex = 0x1;
	return;

}
// .method public addReplacementSetTo(Landroid/icu/text/UnicodeSet;)V
void android::icu::text::StringReplacer::addReplacementSetTo(std::shared_ptr<android::icu::text::UnicodeSet> toUnionTo)
{
	
	int i;
	int ch;
	std::shared_ptr<android::icu::text::UnicodeReplacer> r;
	
	//    .param p1, "toUnionTo"    # Landroid/icu/text/UnicodeSet;
	i = 0x0;
	//    .local v1, "i":I
label_goto_1:
	if ( i >= this->output->length() )
		goto label_cond_24;
	ch = android::icu::text::UTF16::charAt(this->output, i);
	//    .local v0, "ch":I
	r = this->data->lookupReplacer(ch);
	//    .local v2, "r":Landroid/icu/text/UnicodeReplacer;
	if ( r )     
		goto label_cond_20;
	toUnionTo->add(ch);
label_goto_1a:
	i = (i +  android::icu::text::UTF16::getCharCount(ch));
	goto label_goto_1;
	// 137    .line 333
label_cond_20:
	r->addReplacementSetTo(toUnionTo);
	goto label_goto_1a;
	// 143    .line 336
	// 144    .end local v0    # "ch":I
	// 145    .end local v2    # "r":Landroid/icu/text/UnicodeReplacer;
label_cond_24:
	return;

}
// .method public replace(Landroid/icu/text/Replaceable;II[I)I
int android::icu::text::StringReplacer::replace(std::shared_ptr<android::icu::text::Replaceable> text,int start,int limit,std::shared_ptr<int[]> cursor)
{
	
	int newStart;
	int outLen;
	int n;
	std::shared_ptr<java::lang::StringBuffer> buf;
	int tempStart;
	int destStart;
	int len;
	int destLimit;
	int oOutput;
	int c;
	int nextIndex;
	std::shared_ptr<android::icu::text::UnicodeReplacer> r;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "cursor"    # [I
	newStart = 0x0;
	//    .local v10, "newStart":I
	if ( this->isComplex )     
		goto label_cond_55;
	text->replace(start, limit, this->output);
	outLen = this->output->length();
	//    .local v13, "outLen":I
	newStart = this->cursorPos;
label_goto_28:
	if ( !(this->hasCursor) )  
		goto label_cond_18e;
	if ( this->cursorPos >= 0 )
		goto label_cond_18f;
	newStart = start;
	n = this->cursorPos;
	//    .local v9, "n":I
label_goto_3e:
	if ( n >= 0 )
		goto label_cond_189;
	if ( newStart <= 0 )
		goto label_cond_189;
	newStart = (newStart - android::icu::text::UTF16::getCharCount(text->char32At(( newStart + -0x1))));
	n = ( n + 0x1);
	goto label_goto_3e;
	// 261    .line 143
	// 262    .end local v9    # "n":I
	// 263    .end local v13    # "outLen":I
label_cond_55:
	buf = std::make_shared<java::lang::StringBuffer>();
	//    .local v4, "buf":Ljava/lang/StringBuffer;
	this->isComplex = 0x0;
	tempStart = text->length();
	//    .local v16, "tempStart":I
	destStart = tempStart;
	//    .local v7, "destStart":I
	if ( start <= 0 )
		goto label_cond_f4;
	len = android::icu::text::UTF16::getCharCount(text->char32At(( start + -0x1)));
	//    .local v8, "len":I
	text->copy((start - len), start, tempStart);
	destStart = (tempStart + len);
	//    .end local v8    # "len":I
label_goto_87:
	destLimit = destStart;
	//    .local v6, "destLimit":I
	//    .local v15, "tempExtra":I
	oOutput = 0x0;
	//    .local v12, "oOutput":I
label_goto_8a:
	if ( oOutput >= this->output->length() )
		goto label_cond_135;
	if ( oOutput != this->cursorPos )
		goto label_cond_aa;
	((buf->length() + destLimit) - destStart);
label_cond_aa:
	c = android::icu::text::UTF16::charAt(this->output, oOutput);
	//    .local v5, "c":I
	nextIndex = (oOutput + android::icu::text::UTF16::getCharCount(c));
	//    .local v11, "nextIndex":I
	if ( nextIndex != this->output->length() )
		goto label_cond_e1;
	text->copy(limit, (limit + android::icu::text::UTF16::getCharCount(text->char32At(limit))), destLimit);
label_cond_e1:
	r = this->data->lookupReplacer(c);
	//    .local v14, "r":Landroid/icu/text/UnicodeReplacer;
	if ( r )     
		goto label_cond_105;
	android::icu::text::UTF16::append(buf, c);
label_goto_f2:
	oOutput = nextIndex;
	goto label_goto_8a;
	// 462    .line 163
	// 463    .end local v5    # "c":I
	// 464    .end local v6    # "destLimit":I
	// 465    .end local v11    # "nextIndex":I
	// 466    .end local v12    # "oOutput":I
	// 467    .end local v14    # "r":Landroid/icu/text/UnicodeReplacer;
	// 468    .end local v15    # "tempExtra":I
label_cond_f4:
	text->replace(tempStart, tempStart, std::make_shared<java::lang::String>(std::make_shared<char[]>("\uffff")));
	destStart = ( tempStart + 0x1);
	goto label_goto_87;
	// 487    .line 196
	// 488    .restart local v5    # "c":I
	// 489    .restart local v6    # "destLimit":I
	// 490    .restart local v11    # "nextIndex":I
	// 491    .restart local v12    # "oOutput":I
	// 492    .restart local v14    # "r":Landroid/icu/text/UnicodeReplacer;
	// 493    .restart local v15    # "tempExtra":I
label_cond_105:
	this->isComplex = 0x1;
	if ( buf->length() <= 0 )
		goto label_cond_12b;
	text->replace(destLimit, destLimit, buf->toString());
	destLimit = (destLimit + buf->length());
	buf->setLength(0x0);
label_cond_12b:
	//    .restart local v8    # "len":I
	destLimit = (destLimit +  r->replace(text, destLimit, destLimit, cursor));
	goto label_goto_f2;
	// 551    .line 212
	// 552    .end local v5    # "c":I
	// 553    .end local v8    # "len":I
	// 554    .end local v11    # "nextIndex":I
	// 555    .end local v14    # "r":Landroid/icu/text/UnicodeReplacer;
label_cond_135:
	if ( buf->length() <= 0 )
		goto label_cond_14c;
	text->replace(destLimit, destLimit, buf->toString());
	destLimit = (destLimit + buf->length());
label_cond_14c:
	if ( oOutput != this->cursorPos )
		goto label_cond_158;
	(destLimit - destStart);
label_cond_158:
	outLen = (destLimit - destStart);
	//    .restart local v13    # "outLen":I
	text->copy(destStart, destLimit, start);
	text->replace((tempStart + outLen), ((destLimit + 0x0) + outLen), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	text->replace((start + outLen), (limit + outLen), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	goto label_goto_28;
	// 646    .line 244
	// 647    .end local v4    # "buf":Ljava/lang/StringBuffer;
	// 648    .end local v6    # "destLimit":I
	// 649    .end local v7    # "destStart":I
	// 650    .end local v12    # "oOutput":I
	// 651    .end local v15    # "tempExtra":I
	// 652    .end local v16    # "tempStart":I
	// 653    .restart local v9    # "n":I
label_cond_189:
	newStart = (newStart +  n);
	//    .end local v9    # "n":I
label_goto_18a:
	cursor[0x0] = newStart;
label_cond_18e:
	return outLen;
	// 668    .line 245
label_cond_18f:
	if ( this->cursorPos <= this->output->length() )
		goto label_cond_1d4;
	newStart = (start + outLen);
	n = (this->cursorPos - this->output->length());
	//    .restart local v9    # "n":I
label_goto_1b9:
	if ( n <= 0 )
		goto label_cond_1d2;
	if ( newStart >= text->length() )
		goto label_cond_1d2;
	newStart = (newStart + android::icu::text::UTF16::getCharCount(text->char32At(newStart)));
	n = ( n + -0x1);
	goto label_goto_1b9;
	// 745    .line 253
label_cond_1d2:
	newStart = (newStart +  n);
	goto label_goto_18a;
	// 751    .line 257
	// 752    .end local v9    # "n":I
label_cond_1d4:
	newStart = (newStart + start);
	goto label_goto_18a;

}
// .method public toReplacerPattern(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::StringReplacer::toReplacerPattern(bool escapeUnprintable)
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	std::shared_ptr<java::lang::StringBuffer> rule;
	std::shared_ptr<java::lang::StringBuffer> quoteBuf;
	int cursor;
	int i;
	int c;
	std::shared_ptr<android::icu::text::UnicodeReplacer> r;
	std::shared_ptr<java::lang::StringBuffer> buf;
	
	//    .param p1, "escapeUnprintable"    # Z
	cVar0 = 0x7c;
	cVar1 = 0x40;
	cVar2 = 0x1;
	rule = std::make_shared<java::lang::StringBuffer>();
	//    .local v7, "rule":Ljava/lang/StringBuffer;
	quoteBuf = std::make_shared<java::lang::StringBuffer>();
	//    .local v5, "quoteBuf":Ljava/lang/StringBuffer;
	cursor = this->cursorPos;
	//    .local v2, "cursor":I
	if ( !(this->hasCursor) )  
		goto label_cond_22;
	if ( cursor >= 0 )
		goto label_cond_22;
	cursor = cursor;
	//    .end local v2    # "cursor":I
	//    .local v3, "cursor":I
label_goto_19:
	cursor = ( cursor + 0x1);
	//    .end local v3    # "cursor":I
	//    .restart local v2    # "cursor":I
	if ( cursor >= 0 )
		goto label_cond_22;
	android::icu::impl::Utility::appendToRule(rule, cVar1, cVar2, escapeUnprintable, quoteBuf);
	cursor = cursor;
	//    .end local v2    # "cursor":I
	//    .restart local v3    # "cursor":I
	goto label_goto_19;
	// 816    .line 284
	// 817    .end local v3    # "cursor":I
	// 818    .restart local v2    # "cursor":I
label_cond_22:
	i = 0x0;
	//    .local v4, "i":I
label_goto_23:
	if ( i >= this->output->length() )
		goto label_cond_64;
	if ( !(this->hasCursor) )  
		goto label_cond_34;
	if ( i != cursor )
		goto label_cond_34;
	android::icu::impl::Utility::appendToRule(rule, cVar0, cVar2, escapeUnprintable, quoteBuf);
label_cond_34:
	c = this->output->charAt(i);
	//    .local v1, "c":C
	r = this->data->lookupReplacer(c);
	//    .local v6, "r":Landroid/icu/text/UnicodeReplacer;
	if ( r )     
		goto label_cond_48;
	android::icu::impl::Utility::appendToRule(rule, c, 0x0, escapeUnprintable, quoteBuf);
label_goto_45:
	i = ( i + 0x1);
	goto label_goto_23;
	// 871    .line 294
label_cond_48:
	buf = std::make_shared<java::lang::StringBuffer>(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")));
	//    .local v0, "buf":Ljava/lang/StringBuffer;
	buf->append(r->toReplacerPattern(escapeUnprintable));
	buf->append(0x20);
	android::icu::impl::Utility::appendToRule(rule, buf->toString(), cVar2, escapeUnprintable, quoteBuf);
	goto label_goto_45;
	// 901    .line 305
	// 902    .end local v0    # "buf":Ljava/lang/StringBuffer;
	// 903    .end local v1    # "c":C
	// 904    .end local v6    # "r":Landroid/icu/text/UnicodeReplacer;
label_cond_64:
	if ( !(this->hasCursor) )  
		goto label_cond_84;
	if ( cursor <= this->output->length() )
		goto label_cond_84;
	cursor = (cursor -  this->output->length());
	//    .end local v2    # "cursor":I
	//    .restart local v3    # "cursor":I
label_goto_78:
	//    .end local v3    # "cursor":I
	//    .restart local v2    # "cursor":I
	if ( cursor <= 0 )
		goto label_cond_81;
	android::icu::impl::Utility::appendToRule(rule, cVar1, cVar2, escapeUnprintable, quoteBuf);
	cursor = ( cursor + -0x1);
	//    .end local v2    # "cursor":I
	//    .restart local v3    # "cursor":I
	goto label_goto_78;
	// 948    .line 310
	// 949    .end local v3    # "cursor":I
	// 950    .restart local v2    # "cursor":I
label_cond_81:
	android::icu::impl::Utility::appendToRule(rule, cVar0, cVar2, escapeUnprintable, quoteBuf);
label_cond_84:
	android::icu::impl::Utility::appendToRule(rule, -0x1, cVar2, escapeUnprintable, quoteBuf);
	return rule->toString();

}


