// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorParser$RuleHalf.smali
#include "java2ctype.h"
#include "android.icu.impl.IllegalIcuArgumentException.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.FunctionReplacer.h"
#include "android.icu.text.Quantifier.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.StringMatcher.h"
#include "android.icu.text.StringReplacer.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.TransliteratorIDParser_S_SingleID.h"
#include "android.icu.text.TransliteratorIDParser.h"
#include "android.icu.text.TransliteratorParser_S_ParseData.h"
#include "android.icu.text.TransliteratorParser_S_RuleHalf.h"
#include "android.icu.text.TransliteratorParser.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.text.ParsePosition.h"

// .method private constructor <init>()V
android::icu::text::TransliteratorParser_S_RuleHalf::TransliteratorParser_S_RuleHalf()
{
	
	int cVar0;
	int cVar1;
	
	cVar0 = -0x1;
	cVar1 = 0x0;
	// 047    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->cursor = cVar0;
	this->ante = cVar0;
	this->post = cVar0;
	this->cursorOffset = cVar1;
	this->cursorOffsetPos = cVar1;
	this->anchorStart = cVar1;
	this->anchorEnd = cVar1;
	this->nextSegmentNumber = 0x1;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/TransliteratorParser$RuleHalf;)V
android::icu::text::TransliteratorParser_S_RuleHalf::TransliteratorParser_S_RuleHalf(std::shared_ptr<android::icu::text::TransliteratorParser_S_RuleHalf> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/TransliteratorParser$RuleHalf;
	// 084    invoke-direct {p0}, Landroid/icu/text/TransliteratorParser$RuleHalf;-><init>()V
	return;

}
// .method private parseSection(Ljava/lang/String;IILandroid/icu/text/TransliteratorParser;Ljava/lang/StringBuffer;Landroid/icu/text/UnicodeSet;Z)I
int android::icu::text::TransliteratorParser_S_RuleHalf::parseSection(std::shared_ptr<java::lang::String> rule,int pos,int limit,std::shared_ptr<android::icu::text::TransliteratorParser> parser,std::shared_ptr<java::lang::StringBuffer> buf,std::shared_ptr<android::icu::text::UnicodeSet> illegal,bool isSegment)
{
	
	int start;
	std::shared_ptr<java::text::ParsePosition> pp;
	int quoteLimit;
	int varLimit;
	auto iref;
	int pos;
	int c;
	int escaped;
	int iq;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int r;
	auto name;
	std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> single;
	auto t;
	int bufSegStart;
	std::shared_ptr<android::icu::text::FunctionReplacer> r;
	std::shared_ptr<android::icu::text::StringReplacer> cVar2;
	int segmentNumber;
	std::shared_ptr<android::icu::text::StringMatcher> m;
	int qstart;
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::vector<std::any> tryCatchExcetionList;
	int min;
	int max;
	std::shared_ptr<android::icu::text::Quantifier> m;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	
	//    .param p1, "rule"    # Ljava/lang/String;
	//    .param p2, "pos"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "parser"    # Landroid/icu/text/TransliteratorParser;
	//    .param p5, "buf"    # Ljava/lang/StringBuffer;
	//    .param p6, "illegal"    # Landroid/icu/text/UnicodeSet;
	//    .param p7, "isSegment"    # Z
	start = pos;
	//    .local v33, "start":I
	pp = 0x0;
	//    .local v25, "pp":Ljava/text/ParsePosition;
	//    .local v28, "quoteStart":I
	quoteLimit = -0x1;
	//    .local v27, "quoteLimit":I
	//    .local v36, "varStart":I
	varLimit = -0x1;
	//    .local v35, "varLimit":I
	iref = std::make_shared<std::vector<int[]>>(0x1);
	//    .local v17, "iref":[I
	//    .local v12, "bufStart":I
	pos = pos;
	//    .end local v25    # "pp":Ljava/text/ParsePosition;
	//    .end local p2    # "pos":I
	//    .local v23, "pos":I
label_goto_17:
	if ( pos >= limit )
		goto label_cond_53c;
	pos = ( pos + 0x1);
	//    .end local v23    # "pos":I
	//    .restart local p2    # "pos":I
	c = rule->charAt(pos);
	//    .local v13, "c":C
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(c)) )  
		goto label_cond_30;
	pos = pos;
	//    .end local p2    # "pos":I
	//    .restart local v23    # "pos":I
	goto label_goto_17;
	// 179    .line 470
	// 180    .end local v23    # "pos":I
	// 181    .restart local p2    # "pos":I
label_cond_30:
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("=><\u2190\u2192\u2194;"))->indexOf(c) < 0 ) 
		goto label_cond_46;
	if ( !(isSegment) )  
		goto label_cond_45;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unclosed segment")), rule, start);
	//    .end local v13    # "c":C
label_cond_45:
label_goto_45:
label_sswitch_45:
	return pos;
	// 210    .line 479
	// 211    .restart local v13    # "c":C
label_cond_46:
	if ( !(this->anchorEnd) )  
		goto label_cond_56;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Malformed variable reference")), rule, start);
label_cond_56:
	if ( !(android::icu::text::UnicodeSet::resemblesPattern(rule, ( pos + -0x1))) )  
		goto label_cond_87;
	if ( pp )     
		goto label_cond_6a;
	var48 = pp(0x0);
label_cond_6a:
	pp->setIndex(( pos + -0x1));
	buf->append(android::icu::text::TransliteratorParser::-wrap0(parser, rule, pp));
	pos = pp->getIndex();
	pos = pos;
	//    .end local p2    # "pos":I
	//    .restart local v23    # "pos":I
	goto label_goto_17;
	// 287    .line 493
	// 288    .end local v23    # "pos":I
	// 289    .restart local p2    # "pos":I
label_cond_87:
	if ( c != 0x5c )
		goto label_cond_c8;
	if ( pos != limit )
		goto label_cond_9b;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Trailing backslash")), rule, start);
label_cond_9b:
	iref[0x0] = pos;
	escaped = android::icu::impl::Utility::unescapeAt(rule, iref);
	//    .local v15, "escaped":I
	pos = iref[0x0];
	if ( escaped != -0x1 )
		goto label_cond_b6;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Malformed escape")), rule, start);
label_cond_b6:
	android::icu::text::TransliteratorParser::-wrap2(parser, escaped, rule, start);
	android::icu::text::UTF16::append(buf, escaped);
	pos = pos;
	//    .end local p2    # "pos":I
	//    .restart local v23    # "pos":I
	goto label_goto_17;
	// 368    .line 508
	// 369    .end local v15    # "escaped":I
	// 370    .end local v23    # "pos":I
	// 371    .restart local p2    # "pos":I
label_cond_c8:
	if ( c != 0x27 )
		goto label_cond_141;
	iq = rule->indexOf(0x27, pos);
	//    .local v16, "iq":I
	if ( iq != pos )
		goto label_cond_e7;
	buf->append(c);
	pos = ( pos + 0x1);
label_cond_e3:
	pos = pos;
	//    .end local p2    # "pos":I
	//    .restart local v23    # "pos":I
	goto label_goto_17;
	// 412    .line 520
	// 413    .end local v23    # "pos":I
	// 414    .restart local p2    # "pos":I
label_cond_e7:
label_goto_eb:
	if ( iq >= 0 )
		goto label_cond_f7;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unterminated quote")), rule, start);
label_cond_f7:
	buf->append(rule->substring(pos, iq));
	pos = ( iq + 0x1);
	if ( pos >= limit )
		goto label_cond_121;
	if ( rule->charAt(pos) != 0x27 )
		goto label_cond_121;
	iq = rule->indexOf(0x27, ( pos + 0x1));
	goto label_goto_eb;
	// 480    .line 535
label_cond_121:
	iq = buf->length();
label_goto_127:
	if ( iq >= buf->length() )
		goto label_cond_e3;
	android::icu::text::TransliteratorParser::-wrap2(parser, buf->charAt(iq), rule, start);
	iq = ( iq + 0x1);
	goto label_goto_127;
	// 518    .line 544
	// 519    .end local v16    # "iq":I
label_cond_141:
	android::icu::text::TransliteratorParser::-wrap2(parser, c, rule, start);
	if ( !(illegal->contains(c)) )  
		goto label_cond_173;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	android::icu::text::TransliteratorParser::syntaxError(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal character \'")))->append(c)->append(0x27)->toString(), rule, start);
label_cond_173:
	// switch
	{
	auto item = ( c );
	if (item == 0x24) goto label_sswitch_2a8;
	if (item == 0x26) goto label_sswitch_22d;
	if (item == 0x28) goto label_sswitch_1d9;
	if (item == 0x29) goto label_sswitch_45;
	if (item == 0x2a) goto label_sswitch_33f;
	if (item == 0x2b) goto label_sswitch_33f;
	if (item == 0x2e) goto label_sswitch_334;
	if (item == 0x3f) goto label_sswitch_33f;
	if (item == 0x40) goto label_sswitch_487;
	if (item == 0x5e) goto label_sswitch_1ba;
	if (item == 0x7b) goto label_sswitch_439;
	if (item == 0x7c) goto label_sswitch_46d;
	if (item == 0x7d) goto label_sswitch_453;
	if (item == 0x2206) goto label_sswitch_22d;
	}
	if ( c <  0x21 )
		goto label_cond_1b1;
	if ( c >  0x7e )
		goto label_cond_1b1;
	if ( c <  0x30 )
		goto label_cond_186;
	if ( c <= 0x39 )
		goto label_cond_1b1;
label_cond_186:
	if ( c <  0x41 )
		goto label_cond_18e;
	if ( c <= 0x5a )
		goto label_cond_1b1;
label_cond_18e:
	if ( c <  0x61 )
		goto label_cond_196;
	if ( c <= 0x7a )
		goto label_cond_1b1;
label_cond_196:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	android::icu::text::TransliteratorParser::syntaxError(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unquoted ")))->append(c)->toString(), rule, start);
label_cond_1b1:
	buf->append(c);
label_goto_1b6:
	pos = pos;
	//    .end local p2    # "pos":I
	//    .restart local v23    # "pos":I
	goto label_goto_17;
	// 650    .line 556
	// 651    .end local v23    # "pos":I
	// 652    .restart local p2    # "pos":I
label_sswitch_1ba:
	if ( buf->length() )     
		goto label_cond_1ce;
	if ( !(( this->anchorStart ^ 0x1)) )  
		goto label_cond_1ce;
	this->anchorStart = 0x1;
	goto label_goto_1b6;
	// 677    .line 559
label_cond_1ce:
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Misplaced anchor start")), rule, start);
	goto label_goto_1b6;
	// 689    .line 567
label_sswitch_1d9:
	bufSegStart = buf->length();
	//    .local v11, "bufSegStart":I
	segmentNumber = this->nextSegmentNumber;
	this->nextSegmentNumber = ( segmentNumber + 0x1);
	//    .local v31, "segmentNumber":I
	pos = this->parseSection(rule, pos, limit, parser, buf, android::icu::text::TransliteratorParser::-get1({const[class].FS-Param}), 0x1);
	var219 = m(buf->substring(bufSegStart), segmentNumber, android::icu::text::TransliteratorParser::-get3(parser));
	//    .local v18, "m":Landroid/icu/text/StringMatcher;
	parser->setSegmentObject(segmentNumber, m);
	buf->setLength(bufSegStart);
	buf->append(parser->getSegmentStandin(segmentNumber));
	goto label_goto_1b6;
	// 784    .line 594
	// 785    .end local v11    # "bufSegStart":I
	// 786    .end local v18    # "m":Landroid/icu/text/StringMatcher;
	// 787    .end local v31    # "segmentNumber":I
label_sswitch_22d:
	iref[0x0] = pos;
	single = android::icu::text::TransliteratorIDParser::parseFilterID(rule, iref);
	//    .local v32, "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
	if ( !(single) )  
		goto label_cond_248;
	if ( !(( android::icu::impl::Utility::parseChar(rule, iref, 0x28) ^ 0x1)) )  
		goto label_cond_252;
label_cond_248:
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid function")), rule, start);
label_cond_252:
	t = single->getInstance();
	//    .local v34, "t":Landroid/icu/text/Transliterator;
	if ( t )     
		goto label_cond_262;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid function ID")), rule, start);
label_cond_262:
	bufSegStart = buf->length();
	//    .restart local v11    # "bufSegStart":I
	pos = this->parseSection(rule, iref[0x0], limit, parser, buf, android::icu::text::TransliteratorParser::-get0({const[class].FS-Param}), 0x1);
	cVar2 = std::make_shared<android::icu::text::StringReplacer>(buf->substring(bufSegStart), android::icu::text::TransliteratorParser::-get3(parser));
	var277 = r(t, cVar2);
	//    .local v30, "r":Landroid/icu/text/FunctionReplacer;
	buf->setLength(bufSegStart);
	buf->append(parser->generateStandInFor(r));
	goto label_goto_1b6;
	// 929    .line 632
	// 930    .end local v11    # "bufSegStart":I
	// 931    .end local v30    # "r":Landroid/icu/text/FunctionReplacer;
	// 932    .end local v32    # "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
	// 933    .end local v34    # "t":Landroid/icu/text/Transliterator;
label_sswitch_2a8:
	if ( pos != limit )
		goto label_cond_2b5;
	this->anchorEnd = 0x1;
	goto label_goto_1b6;
	// 950    .line 639
label_cond_2b5:
	r = android::icu::lang::UCharacter::digit(rule->charAt(pos), 0xa);
	//    .local v29, "r":I
	if ( r <  0x1 )
		goto label_cond_2f5;
	if ( r >  0x9 )
		goto label_cond_2f5;
	iref[0x0] = pos;
	r = android::icu::impl::Utility::parseNumber(rule, iref, 0xa);
	if ( r >= 0 )
		goto label_cond_2e3;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Undefined segment reference")), rule, start);
label_cond_2e3:
	pos = iref[0x0];
	buf->append(parser->getSegmentStandin(r));
	goto label_goto_1b6;
	// 1026    .line 651
label_cond_2f5:
	if ( pp )     
		goto label_cond_2ff;
	var321 = pp(0x0);
label_cond_2ff:
	pp->setIndex(pos);
	name = android::icu::text::TransliteratorParser::-get4(parser)->parseReference(rule, pp, limit);
	//    .local v22, "name":Ljava/lang/String;
	if ( name )     
		goto label_cond_31d;
	this->anchorEnd = 0x1;
	goto label_goto_1b6;
	// 1075    .line 666
label_cond_31d:
	pos = pp->getIndex();
	buf->length();
	android::icu::text::TransliteratorParser::-wrap1(parser, name, buf);
	buf->length();
	goto label_goto_1b6;
	// 1102    .line 678
	// 1103    .end local v22    # "name":Ljava/lang/String;
	// 1104    .end local v29    # "r":I
label_sswitch_334:
	buf->append(parser->getDotStandIn());
	goto label_goto_1b6;
	// 1116    .line 692
label_sswitch_33f:
	if ( !(isSegment) )  
		goto label_cond_353;
	if ( buf->length() != buf->length() )
		goto label_cond_353;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Misplaced quantifier")), rule, start);
	goto label_goto_1b6;
	// 1137    .line 702
label_cond_353:
	if ( buf->length() != quoteLimit )
		goto label_cond_394;
	qstart = -0x1;
	//    .local v5, "qstart":I
	//    .local v6, "qlimit":I
label_goto_35f:
	try {
	//label_try_start_35f:
	m = std::make_shared<android::icu::text::StringMatcher>(buf->toString(), qstart, qlimit, 0x0, android::icu::text::TransliteratorParser::-get3(parser));
	//label_try_end_36d:
	}
	catch (java::lang::RuntimeException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3aa;
	}
	//    .catch Ljava/lang/RuntimeException; {:try_start_35f .. :try_end_36d} :catch_3aa
	//    .local v3, "m":Landroid/icu/text/UnicodeMatcher;
	min = 0x0;
	//    .local v21, "min":I
	max = 0x7fffffff;
	//    .local v20, "max":I
	// switch
	{
	auto item = ( c );
	if (item == 0x2b) goto label_sswitch_42f;
	if (item == 0x3f) goto label_sswitch_433;
	}
label_goto_375:
	var370 = m(m, min, max);
	//    .end local v3    # "m":Landroid/icu/text/UnicodeMatcher;
	//    .local v19, "m":Landroid/icu/text/UnicodeMatcher;
	buf->setLength(qstart);
	buf->append(parser->generateStandInFor(m));
	goto label_goto_1b6;
	// 1222    .line 706
	// 1223    .end local v5    # "qstart":I
	// 1224    .end local v6    # "qlimit":I
	// 1225    .end local v19    # "m":Landroid/icu/text/UnicodeMatcher;
	// 1226    .end local v20    # "max":I
	// 1227    .end local v21    # "min":I
label_cond_394:
	if ( buf->length() != varLimit )
		goto label_cond_3a1;
	qstart = -0x1;
	//    .restart local v5    # "qstart":I
	//    .restart local v6    # "qlimit":I
	goto label_goto_35f;
	// 1247    .line 713
	// 1248    .end local v5    # "qstart":I
	// 1249    .end local v6    # "qlimit":I
label_cond_3a1:
	qstart = ( buf->length() + -0x1);
	//    .restart local v5    # "qstart":I
	//    .restart local v6    # "qlimit":I
	goto label_goto_35f;
	// 1264    .line 721
label_catch_3aa:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v14, "e":Ljava/lang/RuntimeException;
	if ( pos >= 0x32 )
		goto label_cond_3f1;
	//    .local v26, "precontext":Ljava/lang/String;
label_goto_3ba:
	if ( (limit - pos) >  0x32 )
		goto label_cond_410;
	//    .local v24, "postContext":Ljava/lang/String;
label_goto_3c4:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Failure in rule: ")))->append(precontext)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("$$$")))->append(postContext)->toString());
	// throw
	throw cVar3->initCause(getCatchExcetionFromList);
	// 1344    .line 722
	// 1345    .end local v24    # "postContext":Ljava/lang/String;
	// 1346    .end local v26    # "precontext":Ljava/lang/String;
label_cond_3f1:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	//    .restart local v26    # "precontext":Ljava/lang/String;
	goto label_goto_3ba;
	// 1379    .line 723
label_cond_410:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	//    .restart local v24    # "postContext":Ljava/lang/String;
	goto label_goto_3c4;
	// 1412    .line 731
	// 1413    .end local v14    # "e":Ljava/lang/RuntimeException;
	// 1414    .end local v24    # "postContext":Ljava/lang/String;
	// 1415    .end local v26    # "precontext":Ljava/lang/String;
	// 1416    .restart local v3    # "m":Landroid/icu/text/UnicodeMatcher;
	// 1417    .restart local v20    # "max":I
	// 1418    .restart local v21    # "min":I
label_sswitch_42f:
	min = 0x1;
	goto label_goto_375;
	// 1425    .line 734
label_sswitch_433:
	min = 0x0;
	max = 0x1;
	goto label_goto_375;
	// 1435    .line 758
	// 1436    .end local v3    # "m":Landroid/icu/text/UnicodeMatcher;
	// 1437    .end local v5    # "qstart":I
	// 1438    .end local v6    # "qlimit":I
	// 1439    .end local v20    # "max":I
	// 1440    .end local v21    # "min":I
label_sswitch_439:
	if ( this->ante < 0 ) 
		goto label_cond_449;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Multiple ante contexts")), rule, start);
label_cond_449:
	this->ante = buf->length();
	goto label_goto_1b6;
	// 1469    .line 764
label_sswitch_453:
	if ( this->post < 0 ) 
		goto label_cond_463;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Multiple post contexts")), rule, start);
label_cond_463:
	this->post = buf->length();
	goto label_goto_1b6;
	// 1498    .line 770
label_sswitch_46d:
	if ( this->cursor < 0 ) 
		goto label_cond_47d;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Multiple cursors")), rule, start);
label_cond_47d:
	this->cursor = buf->length();
	goto label_goto_1b6;
	// 1527    .line 776
label_sswitch_487:
	if ( this->cursorOffset >= 0 )
		goto label_cond_4ba;
	if ( buf->length() <= 0 )
		goto label_cond_4ae;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	android::icu::text::TransliteratorParser::syntaxError(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Misplaced ")))->append(c)->toString(), rule, start);
label_cond_4ae:
	this->cursorOffset = ( this->cursorOffset + -0x1);
	goto label_goto_1b6;
	// 1581    .line 781
label_cond_4ba:
	if ( this->cursorOffset <= 0 )
		goto label_cond_4f7;
	if ( buf->length() != this->cursorOffsetPos )
		goto label_cond_4d0;
	if ( this->cursor < 0 ) 
		goto label_cond_4eb;
label_cond_4d0:
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	android::icu::text::TransliteratorParser::syntaxError(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Misplaced ")))->append(c)->toString(), rule, start);
label_cond_4eb:
	this->cursorOffset = ( this->cursorOffset + 0x1);
	goto label_goto_1b6;
	// 1646    .line 787
label_cond_4f7:
	if ( this->cursor )     
		goto label_cond_50a;
	if ( buf->length() )     
		goto label_cond_50a;
	this->cursorOffset = -0x1;
	goto label_goto_1b6;
	// 1669    .line 789
label_cond_50a:
	if ( this->cursor >= 0 )
		goto label_cond_51f;
	this->cursorOffsetPos = buf->length();
	this->cursorOffset = 0x1;
	goto label_goto_1b6;
	// 1695    .line 793
label_cond_51f:
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	android::icu::text::TransliteratorParser::syntaxError(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Misplaced ")))->append(c)->toString(), rule, start);
	goto label_goto_1b6;
	// 1723    .end local v13    # "c":C
	// 1724    .end local p2    # "pos":I
	// 1725    .restart local v23    # "pos":I
label_cond_53c:
	pos = pos;
	//    .end local v23    # "pos":I
	//    .restart local p2    # "pos":I
	goto label_goto_45;
	// 1733    .line 550
	// 1734    :sswitch_data_540
	// 1735    .sparse-switch
	// 1736        0x24 -> :sswitch_2a8
	// 1737        0x26 -> :sswitch_22d
	// 1738        0x28 -> :sswitch_1d9
	// 1739        0x29 -> :sswitch_45
	// 1740        0x2a -> :sswitch_33f
	// 1741        0x2b -> :sswitch_33f
	// 1742        0x2e -> :sswitch_334
	// 1743        0x3f -> :sswitch_33f
	// 1744        0x40 -> :sswitch_487
	// 1745        0x5e -> :sswitch_1ba
	// 1746        0x7b -> :sswitch_439
	// 1747        0x7c -> :sswitch_46d
	// 1748        0x7d -> :sswitch_453
	// 1749        0x2206 -> :sswitch_22d
	// 1750    .end sparse-switch
	// 1752    .line 729
	// 1753    :sswitch_data_57a
	// 1754    .sparse-switch
	// 1755        0x2b -> :sswitch_42f
	// 1756        0x3f -> :sswitch_433
	// 1757    .end sparse-switch

}
// .method public isValidInput(Landroid/icu/text/TransliteratorParser;)Z
bool android::icu::text::TransliteratorParser_S_RuleHalf::isValidInput(std::shared_ptr<android::icu::text::TransliteratorParser> parser)
{
	
	int i;
	int c;
	
	//    .param p1, "parser"    # Landroid/icu/text/TransliteratorParser;
	i = 0x0;
	//    .local v1, "i":I
label_cond_1:
	if ( i >= this->text->length() )
		goto label_cond_20;
	c = android::icu::text::UTF16::charAt(this->text, i);
	//    .local v0, "c":I
	i = (i +  android::icu::text::UTF16::getCharCount(c));
	if ( android::icu::text::TransliteratorParser::-get4(parser)->isMatcher(c) )     
		goto label_cond_1;
	return 0x0;
	// 1811    .line 855
	// 1812    .end local v0    # "c":I
label_cond_20:
	return 0x1;

}
// .method public isValidOutput(Landroid/icu/text/TransliteratorParser;)Z
bool android::icu::text::TransliteratorParser_S_RuleHalf::isValidOutput(std::shared_ptr<android::icu::text::TransliteratorParser> parser)
{
	
	int i;
	int c;
	
	//    .param p1, "parser"    # Landroid/icu/text/TransliteratorParser;
	i = 0x0;
	//    .local v1, "i":I
label_cond_1:
	if ( i >= this->text->length() )
		goto label_cond_20;
	c = android::icu::text::UTF16::charAt(this->text, i);
	//    .local v0, "c":I
	i = (i +  android::icu::text::UTF16::getCharCount(c));
	if ( android::icu::text::TransliteratorParser::-get4(parser)->isReplacer(c) )     
		goto label_cond_1;
	return 0x0;
	// 1868    .line 840
	// 1869    .end local v0    # "c":I
label_cond_20:
	return 0x1;

}
// .method public parse(Ljava/lang/String;IILandroid/icu/text/TransliteratorParser;)I
int android::icu::text::TransliteratorParser_S_RuleHalf::parse(std::shared_ptr<java::lang::String> rule,int pos,int limit,std::shared_ptr<android::icu::text::TransliteratorParser> parser)
{
	
	std::shared_ptr<java::lang::StringBuffer> buf;
	
	//    .param p1, "rule"    # Ljava/lang/String;
	//    .param p2, "pos"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "parser"    # Landroid/icu/text/TransliteratorParser;
	//    .local v8, "start":I
	buf = std::make_shared<java::lang::StringBuffer>();
	//    .local v5, "buf":Ljava/lang/StringBuffer;
	this->text = buf->toString();
	if ( this->cursorOffset <= 0 )
		goto label_cond_2a;
	if ( this->cursor == this->cursorOffsetPos )
		goto label_cond_2a;
	android::icu::text::TransliteratorParser::syntaxError(std::make_shared<java::lang::String>(std::make_shared<char[]>("Misplaced |")), rule, pos);
label_cond_2a:
	return this->parseSection(rule, pos, limit, parser, buf, android::icu::text::TransliteratorParser::-get2({const[class].FS-Param}), 0x0);

}
// .method removeContext()V
void android::icu::text::TransliteratorParser_S_RuleHalf::removeContext()
{
	
	int cVar0;
	bool cVar1;
	int cVar2;
	int cVar3;
	
	cVar0 = -0x1;
	cVar1 = 0x0;
	if ( this->ante >= 0 )
		goto label_cond_22;
	cVar2 = cVar1;
label_goto_9:
	if ( this->post >= 0 )
		goto label_cond_25;
	cVar3 = this->text->length();
label_goto_13:
	this->text = this->text->substring(cVar2, cVar3);
	this->post = cVar0;
	this->ante = cVar0;
	this->anchorEnd = cVar1;
	this->anchorStart = cVar1;
	return;
	// 1993    .line 822
label_cond_22:
	cVar2 = this->ante;
	goto label_goto_9;
	// 1999    .line 823
label_cond_25:
	cVar3 = this->post;
	goto label_goto_13;

}


