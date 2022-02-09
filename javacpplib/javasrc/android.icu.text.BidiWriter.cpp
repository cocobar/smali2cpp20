// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BidiWriter.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.Bidi.h"
#include "android.icu.text.BidiRun.h"
#include "android.icu.text.BidiWriter.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::BidiWriter::LRM_CHAR = '\u200e';
static android::icu::text::BidiWriter::MASK_R_AL = 0x2002;
static android::icu::text::BidiWriter::RLM_CHAR = '\u200f';
// .method constructor <init>()V
android::icu::text::BidiWriter::BidiWriter()
{
	
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static IsCombining(I)Z
bool android::icu::text::BidiWriter::IsCombining(int type)
{
	
	bool cVar0;
	
	//    .param p0, "type"    # I
	cVar0 = 0x1;
	if ( !(( (cVar0 << type) & 0x1c0)) )  
		goto label_cond_9;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method private static doWriteForward(Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::BidiWriter::doWriteForward(std::shared_ptr<java::lang::String> src,int options)
{
	
	std::shared_ptr<java::lang::StringBuffer> dest;
	int i;
	int c;
	std::shared_ptr<java::lang::StringBuilder> dest;
	
	//    .param p0, "src"    # Ljava/lang/String;
	//    .param p1, "options"    # I
	// switch
	{
	auto item = ( ( options & 0xa) );
	if (item == 0x0) goto label_sswitch_30;
	if (item == 0x2) goto label_sswitch_31;
	if (item == 0x8) goto label_sswitch_56;
	}
	dest = std::make_shared<java::lang::StringBuffer>(src->length());
	//    .local v2, "dest":Ljava/lang/StringBuffer;
	i = 0x0;
	//    .local v4, "i":I
label_cond_f:
	c = android::icu::text::UTF16::charAt(src, i);
	//    .local v1, "c":I
	i = (i +  android::icu::text::UTF16::getCharCount(c));
	if ( android::icu::text::Bidi::IsBidiControlChar(c) )     
		goto label_cond_25;
	android::icu::text::UTF16::append(dest, android::icu::lang::UCharacter::getMirror(c));
label_cond_25:
	if ( i <  src->length() )
		goto label_cond_f;
	return dest->toString();
	// 118    .line 48
	// 119    .end local v1    # "c":I
	// 120    .end local v2    # "dest":Ljava/lang/StringBuffer;
	// 121    .end local v4    # "i":I
label_sswitch_30:
	return src;
	// 125    .line 51
label_sswitch_31:
	dest = std::make_shared<java::lang::StringBuffer>(src->length());
	//    .restart local v2    # "dest":Ljava/lang/StringBuffer;
	i = 0x0;
	//    .restart local v4    # "i":I
label_cond_3b:
	c = android::icu::text::UTF16::charAt(src, i);
	//    .restart local v1    # "c":I
	i = (i +  android::icu::text::UTF16::getCharCount(c));
	android::icu::text::UTF16::append(dest, android::icu::lang::UCharacter::getMirror(c));
	if ( i <  src->length() )
		goto label_cond_3b;
	return dest->toString();
	// 175    .line 65
	// 176    .end local v1    # "c":I
	// 177    .end local v2    # "dest":Ljava/lang/StringBuffer;
	// 178    .end local v4    # "i":I
label_sswitch_56:
	dest = std::make_shared<java::lang::StringBuilder>(src->length());
	//    .local v3, "dest":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .restart local v4    # "i":I
label_goto_60:
	i = ( i + 0x1);
	//    .end local v4    # "i":I
	//    .local v5, "i":I
	c = src->charAt(i);
	//    .local v0, "c":C
	if ( android::icu::text::Bidi::IsBidiControlChar(c) )     
		goto label_cond_6f;
	dest->append(c);
label_cond_6f:
	if ( i >= src->length() )
		goto label_cond_77;
	i = i;
	//    .end local v5    # "i":I
	//    .restart local v4    # "i":I
	goto label_goto_60;
	// 228    .line 76
	// 229    .end local v4    # "i":I
	// 230    .restart local v5    # "i":I
label_cond_77:
	return dest->toString();
	// 238    .line 45
	// 239    :sswitch_data_7c
	// 240    .sparse-switch
	// 241        0x0 -> :sswitch_30
	// 242        0x2 -> :sswitch_31
	// 243        0x8 -> :sswitch_56
	// 244    .end sparse-switch

}
// .method private static doWriteForward([CIII)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::BidiWriter::doWriteForward(std::shared_ptr<char[]> text,int start,int limit,int options)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "text"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "options"    # I
	cVar0 = std::make_shared<java::lang::String>(text, start, (limit - start));
	return android::icu::text::BidiWriter::doWriteForward(cVar0, options);

}
// .method static doWriteReverse([CIII)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::BidiWriter::doWriteReverse(std::shared_ptr<char[]> text,int start,int limit,int options)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "text"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "options"    # I
	cVar0 = std::make_shared<java::lang::String>(text, start, (limit - start));
	return android::icu::text::BidiWriter::writeReverse(cVar0, options);

}
// .method static writeReordered(Landroid/icu/text/Bidi;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::BidiWriter::writeReordered(std::shared_ptr<android::icu::text::Bidi> bidi,int cVar4)
{
	
	char cVar0;
	char cVar1;
	std::shared_ptr<char[]> text;
	int runCount;
	int cVar4;
	std::shared_ptr<java::lang::StringBuilder> dest;
	int cVar5;
	int run;
	std::shared_ptr<android::icu::text::BidiRun> bidiRun;
	std::shared_ptr<unsigned char[]> dirProps;
	int markFlag;
	char uc;
	int uc;
	
	//    .param p0, "bidi"    # Landroid/icu/text/Bidi;
	//    .param p1, "options"    # I
	cVar0 = 0x200f;
	cVar1 = 0x200e;
	text = bidi->text;
	//    .local v6, "text":[C
	runCount = bidi->countRuns();
	//    .local v5, "runCount":I
	if ( !(( bidi->reorderingOptions & 0x1)) )  
		goto label_cond_16;
	cVar4 = ( ( cVar4 | 0x4) & -0x9);
label_cond_16:
	if ( !(( bidi->reorderingOptions & 0x2)) )  
		goto label_cond_20;
	cVar4 = ( ( cVar4 | 0x8) & -0x5);
label_cond_20:
	if ( bidi->reorderingMode == 0x4 )
		goto label_cond_36;
	if ( bidi->reorderingMode == 0x5 )
		goto label_cond_36;
	if ( bidi->reorderingMode == 0x6 )
		goto label_cond_36;
	if ( bidi->reorderingMode == 0x3 )
		goto label_cond_36;
	cVar4 = ( cVar4 & -0x5);
label_cond_36:
	if ( !(( cVar4 & 0x4)) )  
		goto label_cond_68;
	cVar5 = ( bidi->length * 0x2);
label_goto_40:
	dest = std::make_shared<java::lang::StringBuilder>(cVar5);
	//    .local v1, "dest":Ljava/lang/StringBuilder;
	if ( ( cVar4 & 0x10) )     
		goto label_cond_142;
	if ( ( cVar4 & 0x4) )     
		goto label_cond_77;
	run = 0x0;
	//    .local v4, "run":I
label_goto_4c:
	if ( run >= runCount )
		goto label_cond_1ce;
	bidiRun = bidi->getVisualRun(run);
	//    .local v0, "bidiRun":Landroid/icu/text/BidiRun;
	if ( !(bidiRun->isEvenRun()) )  
		goto label_cond_6b;
	dest->append(android::icu::text::BidiWriter::doWriteForward(text, bidiRun->start, bidiRun->limit, ( cVar4 & -0x3)));
label_goto_65:
	run = ( run + 0x1);
	goto label_goto_4c;
	// 442    .line 273
	// 443    .end local v0    # "bidiRun":Landroid/icu/text/BidiRun;
	// 444    .end local v1    # "dest":Ljava/lang/StringBuilder;
	// 445    .end local v4    # "run":I
label_cond_68:
	cVar5 = bidi->length;
	goto label_goto_40;
	// 451    .line 294
	// 452    .restart local v0    # "bidiRun":Landroid/icu/text/BidiRun;
	// 453    .restart local v1    # "dest":Ljava/lang/StringBuilder;
	// 454    .restart local v4    # "run":I
label_cond_6b:
	dest->append(android::icu::text::BidiWriter::doWriteReverse(text, bidiRun->start, bidiRun->limit, cVar4));
	goto label_goto_65;
	// 470    .line 300
	// 471    .end local v0    # "bidiRun":Landroid/icu/text/BidiRun;
	// 472    .end local v4    # "run":I
label_cond_77:
	dirProps = bidi->dirProps;
	//    .local v2, "dirProps":[B
	run = 0x0;
	//    .restart local v4    # "run":I
label_goto_7a:
	if ( run >= runCount )
		goto label_cond_1ce;
	bidiRun = bidi->getVisualRun(run);
	//    .restart local v0    # "bidiRun":Landroid/icu/text/BidiRun;
	0x0;
	//    .local v3, "markFlag":I
	markFlag = bidi->runs[run]->insertRemove;
	if ( markFlag >= 0 )
		goto label_cond_8a;
	markFlag = 0x0;
label_cond_8a:
	if ( !(bidiRun->isEvenRun()) )  
		goto label_cond_e6;
	if ( !(bidi->isInverse()) )  
		goto label_cond_9e;
	if ( !(dirProps[bidiRun->start]) )  
		goto label_cond_9e;
	markFlag = ( markFlag | 0x1);
label_cond_9e:
	if ( !(( markFlag & 0x1)) )  
		goto label_cond_d4;
	uc = 0x200e;
	//    .local v7, "uc":C
label_goto_a4:
	if ( !(uc) )  
		goto label_cond_a9;
	dest->append(uc);
label_cond_a9:
	dest->append(android::icu::text::BidiWriter::doWriteForward(text, bidiRun->start, bidiRun->limit, ( cVar4 & -0x3)));
	if ( !(bidi->isInverse()) )  
		goto label_cond_c6;
	if ( !(dirProps[( bidiRun->limit + -0x1)]) )  
		goto label_cond_c6;
	markFlag = ( markFlag | 0x2);
label_cond_c6:
	if ( !(( markFlag & 0x2)) )  
		goto label_cond_dd;
	uc = 0x200e;
label_goto_cc:
	if ( !(uc) )  
		goto label_cond_d1;
	dest->append(uc);
label_cond_d1:
label_goto_d1:
	run = ( run + 0x1);
	goto label_goto_7a;
	// 607    .line 319
	// 608    .end local v7    # "uc":C
label_cond_d4:
	if ( !(( markFlag & 0x4)) )  
		goto label_cond_db;
	uc = 0x200f;
	//    .restart local v7    # "uc":C
	goto label_goto_a4;
	// 620    .line 322
	// 621    .end local v7    # "uc":C
label_cond_db:
	uc = 0x0;
	//    .restart local v7    # "uc":C
	goto label_goto_a4;
	// 628    .line 337
label_cond_dd:
	if ( !(( markFlag & 0x8)) )  
		goto label_cond_e4;
	uc = 0x200f;
	goto label_goto_cc;
	// 639    .line 340
label_cond_e4:
	uc = 0x0;
	goto label_goto_cc;
	// 645    .line 346
	// 646    .end local v7    # "uc":C
label_cond_e6:
	if ( !(bidi->isInverse()) )  
		goto label_cond_fa;
	if ( !(( bidi->testDirPropFlagAt(0x2002, ( bidiRun->limit + -0x1)) ^ 0x1)) )  
		goto label_cond_fa;
	markFlag = ( markFlag | 0x4);
label_cond_fa:
	if ( !(( markFlag & 0x1)) )  
		goto label_cond_130;
	uc = 0x200e;
	//    .restart local v7    # "uc":C
label_goto_100:
	if ( !(uc) )  
		goto label_cond_105;
	dest->append(uc);
label_cond_105:
	dest->append(android::icu::text::BidiWriter::doWriteReverse(text, bidiRun->start, bidiRun->limit, cVar4));
	if ( !(bidi->isInverse()) )  
		goto label_cond_124;
	if ( ( android::icu::text::Bidi::DirPropFlag(dirProps[bidiRun->start]) & 0x2002) )     
		goto label_cond_124;
	markFlag = ( markFlag | 0x8);
label_cond_124:
	if ( !(( markFlag & 0x2)) )  
		goto label_cond_139;
	uc = 0x200e;
label_goto_12a:
	if ( !(uc) )  
		goto label_cond_d1;
	dest->append(uc);
	goto label_goto_d1;
	// 744    .line 353
	// 745    .end local v7    # "uc":C
label_cond_130:
	if ( !(( markFlag & 0x4)) )  
		goto label_cond_137;
	uc = 0x200f;
	//    .restart local v7    # "uc":C
	goto label_goto_100;
	// 757    .line 356
	// 758    .end local v7    # "uc":C
label_cond_137:
	uc = 0x0;
	//    .restart local v7    # "uc":C
	goto label_goto_100;
	// 765    .line 370
label_cond_139:
	if ( !(( markFlag & 0x8)) )  
		goto label_cond_140;
	uc = 0x200f;
	goto label_goto_12a;
	// 776    .line 373
label_cond_140:
	uc = 0x0;
	goto label_goto_12a;
	// 782    .line 383
	// 783    .end local v0    # "bidiRun":Landroid/icu/text/BidiRun;
	// 784    .end local v2    # "dirProps":[B
	// 785    .end local v3    # "markFlag":I
	// 786    .end local v4    # "run":I
	// 787    .end local v7    # "uc":C
label_cond_142:
	if ( ( cVar4 & 0x4) )     
		goto label_cond_16f;
	run = runCount;
	//    .restart local v4    # "run":I
label_goto_147:
	run = ( run + -0x1);
	if ( run < 0 ) 
		goto label_cond_1ce;
	bidiRun = bidi->getVisualRun(run);
	//    .restart local v0    # "bidiRun":Landroid/icu/text/BidiRun;
	if ( !(bidiRun->isEvenRun()) )  
		goto label_cond_163;
	dest->append(android::icu::text::BidiWriter::doWriteReverse(text, bidiRun->start, bidiRun->limit, ( cVar4 & -0x3)));
	goto label_goto_147;
	// 832    .line 392
label_cond_163:
	dest->append(android::icu::text::BidiWriter::doWriteForward(text, bidiRun->start, bidiRun->limit, cVar4));
	goto label_goto_147;
	// 848    .line 399
	// 849    .end local v0    # "bidiRun":Landroid/icu/text/BidiRun;
	// 850    .end local v4    # "run":I
label_cond_16f:
	dirProps = bidi->dirProps;
	//    .restart local v2    # "dirProps":[B
	run = runCount;
	//    .restart local v4    # "run":I
label_cond_172:
label_goto_172:
	run = ( run + -0x1);
	if ( run < 0 ) 
		goto label_cond_1ce;
	bidiRun = bidi->getVisualRun(run);
	//    .restart local v0    # "bidiRun":Landroid/icu/text/BidiRun;
	if ( !(bidiRun->isEvenRun()) )  
		goto label_cond_1a2;
	if ( !(dirProps[( bidiRun->limit + -0x1)]) )  
		goto label_cond_18b;
	dest->append(cVar1);
label_cond_18b:
	dest->append(android::icu::text::BidiWriter::doWriteReverse(text, bidiRun->start, bidiRun->limit, ( cVar4 & -0x3)));
	if ( !(dirProps[bidiRun->start]) )  
		goto label_cond_172;
	dest->append(cVar1);
	goto label_goto_172;
	// 918    .line 416
label_cond_1a2:
	if ( ( android::icu::text::Bidi::DirPropFlag(dirProps[bidiRun->start]) & 0x2002) )     
		goto label_cond_1b1;
	dest->append(cVar0);
label_cond_1b1:
	dest->append(android::icu::text::BidiWriter::doWriteForward(text, bidiRun->start, bidiRun->limit, cVar4));
	if ( ( android::icu::text::Bidi::DirPropFlag(dirProps[( bidiRun->limit + -0x1)]) & 0x2002) )     
		goto label_cond_172;
	dest->append(cVar0);
	goto label_goto_172;
	// 969    .line 431
	// 970    .end local v0    # "bidiRun":Landroid/icu/text/BidiRun;
	// 971    .end local v2    # "dirProps":[B
label_cond_1ce:
	return dest->toString();

}
// .method static writeReverse(Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::BidiWriter::writeReverse(std::shared_ptr<java::lang::String> src,int options)
{
	
	std::shared_ptr<java::lang::StringBuffer> dest;
	int srcLength;
	int c;
	int j;
	
	//    .param p0, "src"    # Ljava/lang/String;
	//    .param p1, "options"    # I
	dest = std::make_shared<java::lang::StringBuffer>(src->length());
	//    .local v1, "dest":Ljava/lang/StringBuffer;
	// switch
	{
	auto item = ( ( options & 0xb) );
	if (item == 0) goto label_pswitch_3a;
	if (item == 1) goto label_pswitch_58;
	}
	srcLength = src->length();
	//    .local v4, "srcLength":I
label_goto_12:
	//    .local v2, "i":I
	c = android::icu::text::UTF16::charAt(src, ( srcLength + -0x1));
	//    .local v0, "c":I
	srcLength = (srcLength -  android::icu::text::UTF16::getCharCount(c));
	if ( !(( options & 0x1)) )  
		goto label_cond_7e;
label_goto_22:
	if ( srcLength <= 0 )
		goto label_cond_7e;
	if ( !(android::icu::text::BidiWriter::IsCombining(android::icu::lang::UCharacter::getType(c))) )  
		goto label_cond_7e;
	c = android::icu::text::UTF16::charAt(src, ( srcLength + -0x1));
	srcLength = (srcLength -  android::icu::text::UTF16::getCharCount(c));
	goto label_goto_22;
	// 1062    .line 139
	// 1063    .end local v0    # "c":I
	// 1064    .end local v2    # "i":I
	// 1065    .end local v4    # "srcLength":I
label_pswitch_3a:
	srcLength = src->length();
	//    .restart local v4    # "srcLength":I
label_cond_3e:
	//    .restart local v2    # "i":I
	srcLength = (srcLength -  android::icu::text::UTF16::getCharCount(android::icu::text::UTF16::charAt(src, ( srcLength + -0x1))));
	dest->append(src->substring(srcLength, srcLength));
	if ( srcLength > 0 ) 
		goto label_cond_3e;
label_cond_53:
	return dest->toString();
	// 1109    .line 164
	// 1110    .end local v2    # "i":I
	// 1111    .end local v4    # "srcLength":I
label_pswitch_58:
	srcLength = src->length();
	//    .restart local v4    # "srcLength":I
label_goto_5c:
	//    .restart local v2    # "i":I
label_cond_5d:
	c = android::icu::text::UTF16::charAt(src, ( srcLength + -0x1));
	//    .restart local v0    # "c":I
	srcLength = (srcLength -  android::icu::text::UTF16::getCharCount(c));
	if ( srcLength <= 0 )
		goto label_cond_74;
	if ( android::icu::text::BidiWriter::IsCombining(android::icu::lang::UCharacter::getType(c)) )     
		goto label_cond_5d;
label_cond_74:
	dest->append(src->substring(srcLength, srcLength));
	if ( srcLength <= 0 )
		goto label_cond_53;
	goto label_goto_5c;
	// 1165    .line 212
label_cond_7e:
	if ( !(( options & 0x8)) )  
		goto label_cond_8b;
	if ( !(android::icu::text::Bidi::IsBidiControlChar(c)) )  
		goto label_cond_8b;
label_goto_88:
	if ( srcLength <= 0 )
		goto label_cond_53;
	goto label_goto_12;
	// 1185    .line 219
label_cond_8b:
	j = srcLength;
	//    .local v3, "j":I
	if ( !(( options & 0x2)) )  
		goto label_cond_9c;
	c = android::icu::lang::UCharacter::getMirror(c);
	android::icu::text::UTF16::append(dest, c);
label_cond_9c:
	dest->append(src->substring(j, srcLength));
	goto label_goto_88;
	// 1220    .line 124
	// 1221    :pswitch_data_a4
	// 1222    .packed-switch 0x0
	// 1223        :pswitch_3a
	// 1224        :pswitch_58
	// 1225    .end packed-switch

}


