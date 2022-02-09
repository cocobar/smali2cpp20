// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\PatternTokenizer.smali
#include "java2ctype.h"
#include "android.icu.impl.PatternTokenizer.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

static android::icu::impl::PatternTokenizer::AFTER_QUOTE = -0x1;
static android::icu::impl::PatternTokenizer::BACK_SLASH = '\\';
static android::icu::impl::PatternTokenizer::BROKEN_ESCAPE = 0x4;
static android::icu::impl::PatternTokenizer::BROKEN_QUOTE = 0x3;
static android::icu::impl::PatternTokenizer::DONE = 0x0;
static android::icu::impl::PatternTokenizer::HEX = 0x4;
static android::icu::impl::PatternTokenizer::IN_QUOTE = 0x0;
static android::icu::impl::PatternTokenizer::LITERAL = 0x2;
static android::icu::impl::PatternTokenizer::NONE = 0x0;
static android::icu::impl::PatternTokenizer::NORMAL_QUOTE = 0x2;
static android::icu::impl::PatternTokenizer::NO_QUOTE = 0x0;
static android::icu::impl::PatternTokenizer::SINGLE_QUOTE = '\'';
static android::icu::impl::PatternTokenizer::SLASH_START = 0x3;
static android::icu::impl::PatternTokenizer::START_QUOTE = 0x1;
static android::icu::impl::PatternTokenizer::SYNTAX = 0x1;
static android::icu::impl::PatternTokenizer::UNKNOWN = 0x5;
// .method static constructor <clinit>()V
void android::icu::impl::PatternTokenizer::static_cinit()
{
	
	android::icu::impl::PatternTokenizer::NO_QUOTE = -0x1;
	android::icu::impl::PatternTokenizer::IN_QUOTE = -0x2;
	return;

}
// .method public constructor <init>()V
android::icu::impl::PatternTokenizer::PatternTokenizer()
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar3;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar4;
	
	cVar0 = 0x0;
	// 087    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar1 = std::make_shared<android::icu::text::UnicodeSet>();
	this->ignorableCharacters = cVar1;
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>();
	this->syntaxCharacters = cVar2;
	cVar3 = std::make_shared<android::icu::text::UnicodeSet>();
	this->extraQuotingCharacters = cVar3;
	cVar4 = std::make_shared<android::icu::text::UnicodeSet>();
	this->escapeCharacters = cVar4;
	this->usingSlash = cVar0;
	this->usingQuote = cVar0;
	this->needingQuoteCharacters = 0x0;
	return;

}
// .method private appendEscaped(Ljava/lang/StringBuffer;I)V
void android::icu::impl::PatternTokenizer::appendEscaped(std::shared_ptr<java::lang::StringBuffer> result,int cp)
{
	
	//    .param p1, "result"    # Ljava/lang/StringBuffer;
	//    .param p2, "cp"    # I
	if ( cp >  0xffff )
		goto label_cond_16;
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\u")))->append(android::icu::impl::Utility::hex((long long)(cp), 0x4));
label_goto_15:
	return;
	// 164    .line 232
label_cond_16:
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\U")))->append(android::icu::impl::Utility::hex((long long)(cp), 0x8));
	goto label_goto_15;

}
// .method public getEscapeCharacters()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::impl::PatternTokenizer::getEscapeCharacters()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	cVar0 = this->escapeCharacters->clone();
	cVar0->checkCast("android::icu::text::UnicodeSet");
	return cVar0;

}
// .method public getExtraQuotingCharacters()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::impl::PatternTokenizer::getExtraQuotingCharacters()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	cVar0 = this->extraQuotingCharacters->clone();
	cVar0->checkCast("android::icu::text::UnicodeSet");
	return cVar0;

}
// .method public getIgnorableCharacters()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::impl::PatternTokenizer::getIgnorableCharacters()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	cVar0 = this->ignorableCharacters->clone();
	cVar0->checkCast("android::icu::text::UnicodeSet");
	return cVar0;

}
// .method public getLimit()I
int android::icu::impl::PatternTokenizer::getLimit()
{
	
	return this->limit;

}
// .method public getStart()I
int android::icu::impl::PatternTokenizer::getStart()
{
	
	return this->start;

}
// .method public getSyntaxCharacters()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::impl::PatternTokenizer::getSyntaxCharacters()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	cVar0 = this->syntaxCharacters->clone();
	cVar0->checkCast("android::icu::text::UnicodeSet");
	return cVar0;

}
// .method public isUsingQuote()Z
bool android::icu::impl::PatternTokenizer::isUsingQuote()
{
	
	return this->usingQuote;

}
// .method public isUsingSlash()Z
bool android::icu::impl::PatternTokenizer::isUsingSlash()
{
	
	return this->usingSlash;

}
// .method public next(Ljava/lang/StringBuffer;)I
int android::icu::impl::PatternTokenizer::next(std::shared_ptr<java::lang::StringBuffer> buffer)
{
	
	char cVar0;
	int status;
	int lastQuote;
	int quoteStatus;
	int hexValue;
	int i;
	int cp;
	int hexCount;
	
	//    .param p1, "buffer"    # Ljava/lang/StringBuffer;
	cVar0 = 0x5c;
	if ( this->start <  this->limit )
		goto label_cond_a;
	return 0x0;
	// 309    .line 261
label_cond_a:
	status = 0x5;
	//    .local v6, "status":I
	lastQuote = 0x5;
	//    .local v4, "lastQuote":I
	quoteStatus = 0x0;
	//    .local v5, "quoteStatus":I
	//    .local v1, "hexCount":I
	hexValue = 0x0;
	//    .local v2, "hexValue":I
	i = this->start;
	//    .local v3, "i":I
label_goto_11:
	if ( i >= this->limit )
		goto label_cond_ae;
	cp = android::icu::text::UTF16::charAt(this->pattern, i);
	//    .local v0, "cp":I
	// switch
	{
	auto item = ( quoteStatus );
	if (item == -1) goto label_pswitch_61;
	if (item == 0) goto label_pswitch_1e;
	if (item == 1) goto label_pswitch_6a;
	if (item == 2) goto label_pswitch_76;
	if (item == 3) goto label_pswitch_2c;
	if (item == 4) goto label_pswitch_46;
	}
label_goto_1e:
label_pswitch_1e:
	if ( !(this->ignorableCharacters->contains(cp)) )  
		goto label_cond_7e;
label_cond_26:
label_goto_26:
	i = (i +  android::icu::text::UTF16::getCharCount(cp));
	goto label_goto_11;
	// 372    .line 273
label_pswitch_2c:
	// switch
	{
	auto item = ( cp );
	if (item == 0x55) goto label_sswitch_3c;
	if (item == 0x75) goto label_sswitch_38;
	}
	if ( !(this->usingSlash) )  
		goto label_cond_41;
	android::icu::text::UTF16::append(buffer, cp);
	quoteStatus = 0x0;
	goto label_goto_26;
	// 390    .line 275
label_sswitch_38:
	quoteStatus = 0x4;
	0x4;
	0x0;
	goto label_goto_26;
	// 403    .line 280
label_sswitch_3c:
	quoteStatus = 0x4;
	0x8;
	0x0;
	goto label_goto_26;
	// 416    .line 290
label_cond_41:
	buffer->append(cVar0);
	quoteStatus = 0x0;
	goto label_goto_1e;
	// 425    .line 296
label_pswitch_46:
	hexValue = ( hexValue << 0x4);
	hexValue = (hexValue +  cp);
	// switch
	{
	auto item = ( cp );
	if (item == 0x30) goto label_sswitch_50;
	if (item == 0x31) goto label_sswitch_50;
	if (item == 0x32) goto label_sswitch_50;
	if (item == 0x33) goto label_sswitch_50;
	if (item == 0x34) goto label_sswitch_50;
	if (item == 0x35) goto label_sswitch_50;
	if (item == 0x36) goto label_sswitch_50;
	if (item == 0x37) goto label_sswitch_50;
	if (item == 0x38) goto label_sswitch_50;
	if (item == 0x39) goto label_sswitch_50;
	if (item == 0x41) goto label_sswitch_5e;
	if (item == 0x42) goto label_sswitch_5e;
	if (item == 0x43) goto label_sswitch_5e;
	if (item == 0x44) goto label_sswitch_5e;
	if (item == 0x45) goto label_sswitch_5e;
	if (item == 0x46) goto label_sswitch_5e;
	if (item == 0x61) goto label_sswitch_5b;
	if (item == 0x62) goto label_sswitch_5b;
	if (item == 0x63) goto label_sswitch_5b;
	if (item == 0x64) goto label_sswitch_5b;
	if (item == 0x65) goto label_sswitch_5b;
	if (item == 0x66) goto label_sswitch_5b;
	}
	this->start = i;
	return 0x4;
	// 443    .line 300
label_sswitch_50:
	hexValue = ( hexValue + -0x30);
label_goto_52:
	hexCount = ( hexCount + -0x1);
	if ( hexCount )     
		goto label_cond_26;
	quoteStatus = 0x0;
	android::icu::text::UTF16::append(buffer, hexValue);
	goto label_goto_26;
	// 462    .line 302
label_sswitch_5b:
	hexValue = ( hexValue + -0x57);
	goto label_goto_52;
	// 468    .line 304
label_sswitch_5e:
	hexValue = ( hexValue + -0x37);
	goto label_goto_52;
	// 474    .line 318
label_pswitch_61:
	if ( cp != lastQuote )
		goto label_cond_68;
	android::icu::text::UTF16::append(buffer, cp);
	quoteStatus = 0x2;
	goto label_goto_26;
	// 487    .line 323
label_cond_68:
	quoteStatus = 0x0;
	goto label_goto_1e;
	// 494    .line 327
label_pswitch_6a:
	if ( cp != lastQuote )
		goto label_cond_71;
	android::icu::text::UTF16::append(buffer, cp);
	quoteStatus = 0x0;
	goto label_goto_26;
	// 507    .line 333
label_cond_71:
	android::icu::text::UTF16::append(buffer, cp);
	quoteStatus = 0x2;
	goto label_goto_26;
	// 517    .line 337
label_pswitch_76:
	if ( cp != lastQuote )
		goto label_cond_7a;
	quoteStatus = -0x1;
	goto label_goto_26;
	// 527    .line 341
label_cond_7a:
	android::icu::text::UTF16::append(buffer, cp);
	goto label_goto_26;
	// 533    .line 349
label_cond_7e:
	if ( !(this->syntaxCharacters->contains(cp)) )  
		goto label_cond_98;
	if ( status != 0x5 )
		goto label_cond_95;
	android::icu::text::UTF16::append(buffer, cp);
	this->start = (android::icu::text::UTF16::getCharCount(cp) +  i);
	return 0x1;
	// 565    .line 355
label_cond_95:
	this->start = i;
	return status;
	// 572    .line 360
label_cond_98:
	0x2;
	if ( cp != cVar0 )
		goto label_cond_9d;
	quoteStatus = 0x3;
	goto label_goto_26;
	// 585    .line 364
label_cond_9d:
	if ( !(this->usingQuote) )  
		goto label_cond_a9;
	if ( cp != 0x27 )
		goto label_cond_a9;
	cp;
	quoteStatus = 0x1;
	goto label_goto_26;
	// 604    .line 370
label_cond_a9:
	android::icu::text::UTF16::append(buffer, cp);
	goto label_goto_26;
	// 610    .line 373
	// 611    .end local v0    # "cp":I
label_cond_ae:
	this->start = this->limit;
	// switch
	{
	auto item = ( quoteStatus );
	if (item == 1) goto label_pswitch_c2;
	if (item == 2) goto label_pswitch_c2;
	if (item == 3) goto label_pswitch_b8;
	if (item == 4) goto label_pswitch_b6;
	}
label_goto_b5:
	return status;
	// 624    .line 376
label_pswitch_b6:
	status = 0x4;
	goto label_goto_b5;
	// 631    .line 379
label_pswitch_b8:
	if ( !(this->usingSlash) )  
		goto label_cond_be;
	status = 0x4;
	goto label_goto_b5;
	// 642    .line 382
label_cond_be:
	buffer->append(cVar0);
	goto label_goto_b5;
	// 648    .line 386
label_pswitch_c2:
	status = 0x3;
	goto label_goto_b5;
	// 655    .line 271
	// 656    :pswitch_data_c4
	// 657    .packed-switch -0x1
	// 658        :pswitch_61
	// 659        :pswitch_1e
	// 660        :pswitch_6a
	// 661        :pswitch_76
	// 662        :pswitch_2c
	// 663        :pswitch_46
	// 664    .end packed-switch
	// 666    .line 273
	// 667    :sswitch_data_d4
	// 668    .sparse-switch
	// 669        0x55 -> :sswitch_3c
	// 670        0x75 -> :sswitch_38
	// 671    .end sparse-switch
	// 673    .line 298
	// 674    :sswitch_data_de
	// 675    .sparse-switch
	// 676        0x30 -> :sswitch_50
	// 677        0x31 -> :sswitch_50
	// 678        0x32 -> :sswitch_50
	// 679        0x33 -> :sswitch_50
	// 680        0x34 -> :sswitch_50
	// 681        0x35 -> :sswitch_50
	// 682        0x36 -> :sswitch_50
	// 683        0x37 -> :sswitch_50
	// 684        0x38 -> :sswitch_50
	// 685        0x39 -> :sswitch_50
	// 686        0x41 -> :sswitch_5e
	// 687        0x42 -> :sswitch_5e
	// 688        0x43 -> :sswitch_5e
	// 689        0x44 -> :sswitch_5e
	// 690        0x45 -> :sswitch_5e
	// 691        0x46 -> :sswitch_5e
	// 692        0x61 -> :sswitch_5b
	// 693        0x62 -> :sswitch_5b
	// 694        0x63 -> :sswitch_5b
	// 695        0x64 -> :sswitch_5b
	// 696        0x65 -> :sswitch_5b
	// 697        0x66 -> :sswitch_5b
	// 698    .end sparse-switch
	// 700    .line 374
	// 701    :pswitch_data_138
	// 702    .packed-switch 0x1
	// 703        :pswitch_c2
	// 704        :pswitch_c2
	// 705        :pswitch_b8
	// 706        :pswitch_b6
	// 707    .end packed-switch

}
// .method public normalize()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::PatternTokenizer::normalize()
{
	
	std::shared_ptr<java::lang::StringBuffer> result;
	std::shared_ptr<java::lang::StringBuffer> buffer;
	int status;
	
	//    .local v1, "oldStart":I
	result = std::make_shared<java::lang::StringBuffer>();
	//    .local v2, "result":Ljava/lang/StringBuffer;
	buffer = std::make_shared<java::lang::StringBuffer>();
	//    .local v0, "buffer":Ljava/lang/StringBuffer;
label_goto_d:
	buffer->setLength(0x0);
	status = this->next(buffer);
	//    .local v3, "status":I
	if ( status )     
		goto label_cond_1d;
	this->start = this->start;
	return result->toString();
	// 755    .line 247
label_cond_1d:
	if ( status == 0x1 )
		goto label_cond_28;
	result->append(this->quoteLiteral(buffer));
	goto label_goto_d;
	// 770    .line 250
label_cond_28:
	result->append(buffer);
	goto label_goto_d;

}
// .method public quoteLiteral(Ljava/lang/CharSequence;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::PatternTokenizer::quoteLiteral(std::shared_ptr<java::lang::CharSequence> string)
{
	
	//    .param p1, "string"    # Ljava/lang/CharSequence;
	return this->quoteLiteral(string->toString());

}
// .method public quoteLiteral(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::PatternTokenizer::quoteLiteral(std::shared_ptr<java::lang::String> string)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	std::shared_ptr<java::lang::StringBuffer> result;
	int quotedChar;
	int i;
	int cp;
	
	//    .param p1, "string"    # Ljava/lang/String;
	cVar0 = 0x5c;
	cVar1 = 0x27;
	if ( this->needingQuoteCharacters )     
		goto label_cond_33;
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>();
	this->needingQuoteCharacters = cVar2->addAll(this->syntaxCharacters)->addAll(this->ignorableCharacters)->addAll(this->extraQuotingCharacters);
	if ( !(this->usingSlash) )  
		goto label_cond_2a;
	this->needingQuoteCharacters->add(cVar0);
label_cond_2a:
	if ( !(this->usingQuote) )  
		goto label_cond_33;
	this->needingQuoteCharacters->add(cVar1);
label_cond_33:
	result = std::make_shared<java::lang::StringBuffer>();
	//    .local v3, "result":Ljava/lang/StringBuffer;
	quotedChar = android::icu::impl::PatternTokenizer::NO_QUOTE;
	//    .local v2, "quotedChar":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_3b:
	if ( i >= string->length() )
		goto label_cond_aa;
	cp = android::icu::text::UTF16::charAt(string, i);
	//    .local v0, "cp":I
	if ( !(this->escapeCharacters->contains(cp)) )  
		goto label_cond_5f;
	if ( quotedChar != android::icu::impl::PatternTokenizer::IN_QUOTE )
		goto label_cond_56;
	result->append(cVar1);
	quotedChar = android::icu::impl::PatternTokenizer::NO_QUOTE;
label_cond_56:
	this->appendEscaped(result, cp);
label_cond_59:
label_goto_59:
	i = (i +  android::icu::text::UTF16::getCharCount(cp));
	goto label_goto_3b;
	// 915    .line 182
label_cond_5f:
	if ( !(this->needingQuoteCharacters->contains(cp)) )  
		goto label_cond_9d;
	if ( quotedChar != android::icu::impl::PatternTokenizer::IN_QUOTE )
		goto label_cond_78;
	android::icu::text::UTF16::append(result, cp);
	if ( !(this->usingQuote) )  
		goto label_cond_59;
	if ( cp != cVar1 )
		goto label_cond_59;
	result->append(cVar1);
	goto label_goto_59;
	// 945    .line 192
label_cond_78:
	if ( !(this->usingSlash) )  
		goto label_cond_83;
	result->append(cVar0);
	android::icu::text::UTF16::append(result, cp);
	goto label_goto_59;
	// 959    .line 197
label_cond_83:
	if ( !(this->usingQuote) )  
		goto label_cond_99;
	if ( cp != cVar1 )
		goto label_cond_90;
	result->append(cVar1);
	result->append(cVar1);
	goto label_goto_59;
	// 976    .line 203
label_cond_90:
	result->append(cVar1);
	android::icu::text::UTF16::append(result, cp);
	quotedChar = android::icu::impl::PatternTokenizer::IN_QUOTE;
	goto label_goto_59;
	// 988    .line 209
label_cond_99:
	this->appendEscaped(result, cp);
	goto label_goto_59;
	// 994    .line 214
label_cond_9d:
	if ( quotedChar != android::icu::impl::PatternTokenizer::IN_QUOTE )
		goto label_cond_a6;
	result->append(cVar1);
	quotedChar = android::icu::impl::PatternTokenizer::NO_QUOTE;
label_cond_a6:
	android::icu::text::UTF16::append(result, cp);
	goto label_goto_59;
	// 1012    .line 222
	// 1013    .end local v0    # "cp":I
label_cond_aa:
	if ( quotedChar != android::icu::impl::PatternTokenizer::IN_QUOTE )
		goto label_cond_b1;
	result->append(cVar1);
label_cond_b1:
	return result->toString();

}
// .method public setEscapeCharacters(Landroid/icu/text/UnicodeSet;)Landroid/icu/impl/PatternTokenizer;
std::shared_ptr<android::icu::impl::PatternTokenizer> android::icu::impl::PatternTokenizer::setEscapeCharacters(std::shared_ptr<android::icu::text::UnicodeSet> escapeCharacters)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	//    .param p1, "escapeCharacters"    # Landroid/icu/text/UnicodeSet;
	cVar0 = escapeCharacters->clone();
	cVar0->checkCast("android::icu::text::UnicodeSet");
	this->escapeCharacters = cVar0;
	return this;

}
// .method public setExtraQuotingCharacters(Landroid/icu/text/UnicodeSet;)Landroid/icu/impl/PatternTokenizer;
std::shared_ptr<android::icu::impl::PatternTokenizer> android::icu::impl::PatternTokenizer::setExtraQuotingCharacters(std::shared_ptr<android::icu::text::UnicodeSet> syntaxCharacters)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	//    .param p1, "syntaxCharacters"    # Landroid/icu/text/UnicodeSet;
	cVar0 = syntaxCharacters->clone();
	cVar0->checkCast("android::icu::text::UnicodeSet");
	this->extraQuotingCharacters = cVar0;
	this->needingQuoteCharacters = 0x0;
	return this;

}
// .method public setIgnorableCharacters(Landroid/icu/text/UnicodeSet;)Landroid/icu/impl/PatternTokenizer;
std::shared_ptr<android::icu::impl::PatternTokenizer> android::icu::impl::PatternTokenizer::setIgnorableCharacters(std::shared_ptr<android::icu::text::UnicodeSet> ignorableCharacters)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	//    .param p1, "ignorableCharacters"    # Landroid/icu/text/UnicodeSet;
	cVar0 = ignorableCharacters->clone();
	cVar0->checkCast("android::icu::text::UnicodeSet");
	this->ignorableCharacters = cVar0;
	this->needingQuoteCharacters = 0x0;
	return this;

}
// .method public setLimit(I)Landroid/icu/impl/PatternTokenizer;
std::shared_ptr<android::icu::impl::PatternTokenizer> android::icu::impl::PatternTokenizer::setLimit(int limit)
{
	
	//    .param p1, "limit"    # I
	this->limit = limit;
	return this;

}
// .method public setPattern(Ljava/lang/CharSequence;)Landroid/icu/impl/PatternTokenizer;
std::shared_ptr<android::icu::impl::PatternTokenizer> android::icu::impl::PatternTokenizer::setPattern(std::shared_ptr<java::lang::CharSequence> pattern)
{
	
	//    .param p1, "pattern"    # Ljava/lang/CharSequence;
	return this->setPattern(pattern->toString());

}
// .method public setPattern(Ljava/lang/String;)Landroid/icu/impl/PatternTokenizer;
std::shared_ptr<android::icu::impl::PatternTokenizer> android::icu::impl::PatternTokenizer::setPattern(std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	if ( pattern )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Inconsistent arguments")));
	// throw
	throw cVar0;
	// 1141    .line 142
label_cond_b:
	this->start = 0x0;
	this->limit = pattern->length();
	this->pattern = pattern;
	return this;

}
// .method public setStart(I)Landroid/icu/impl/PatternTokenizer;
std::shared_ptr<android::icu::impl::PatternTokenizer> android::icu::impl::PatternTokenizer::setStart(int start)
{
	
	//    .param p1, "start"    # I
	this->start = start;
	return this;

}
// .method public setSyntaxCharacters(Landroid/icu/text/UnicodeSet;)Landroid/icu/impl/PatternTokenizer;
std::shared_ptr<android::icu::impl::PatternTokenizer> android::icu::impl::PatternTokenizer::setSyntaxCharacters(std::shared_ptr<android::icu::text::UnicodeSet> syntaxCharacters)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	//    .param p1, "syntaxCharacters"    # Landroid/icu/text/UnicodeSet;
	cVar0 = syntaxCharacters->clone();
	cVar0->checkCast("android::icu::text::UnicodeSet");
	this->syntaxCharacters = cVar0;
	this->needingQuoteCharacters = 0x0;
	return this;

}
// .method public setUsingQuote(Z)Landroid/icu/impl/PatternTokenizer;
std::shared_ptr<android::icu::impl::PatternTokenizer> android::icu::impl::PatternTokenizer::setUsingQuote(bool usingQuote)
{
	
	//    .param p1, "usingQuote"    # Z
	this->usingQuote = usingQuote;
	this->needingQuoteCharacters = 0x0;
	return this;

}
// .method public setUsingSlash(Z)Landroid/icu/impl/PatternTokenizer;
std::shared_ptr<android::icu::impl::PatternTokenizer> android::icu::impl::PatternTokenizer::setUsingSlash(bool usingSlash)
{
	
	//    .param p1, "usingSlash"    # Z
	this->usingSlash = usingSlash;
	this->needingQuoteCharacters = 0x0;
	return this;

}


