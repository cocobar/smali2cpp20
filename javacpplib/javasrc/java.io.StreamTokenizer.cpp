// CPP L:\smali2cpp20\x64\Release\out\java\io\StreamTokenizer.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.Reader.h"
#include "java.io.StreamTokenizer.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Arrays.h"

static java::io::StreamTokenizer::CT_ALPHA = 0x4t;
static java::io::StreamTokenizer::CT_COMMENT = 0x10t;
static java::io::StreamTokenizer::CT_DIGIT = 0x2t;
static java::io::StreamTokenizer::CT_QUOTE = 0x8t;
static java::io::StreamTokenizer::CT_WHITESPACE = 0x1t;
static java::io::StreamTokenizer::NEED_CHAR = 0x7fffffff;
static java::io::StreamTokenizer::SKIP_LF = 0x7ffffffe;
static java::io::StreamTokenizer::TT_EOF = -0x1;
static java::io::StreamTokenizer::TT_EOL = 0xa;
static java::io::StreamTokenizer::TT_NOTHING = -0x4;
static java::io::StreamTokenizer::TT_NUMBER = -0x2;
static java::io::StreamTokenizer::TT_WORD = -0x3;
// .method private constructor <init>()V
java::io::StreamTokenizer::StreamTokenizer()
{
	
	std::shared_ptr<java::io::Reader> cVar0;
	bool cVar1;
	
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 072    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->reader = cVar0;
	this->input = cVar0;
	this->buf = std::make_shared<std::vector<char[]>>(0x14);
	this->peekc = 0x7fffffff;
	this->LINENO = 0x1;
	this->eolIsSignificantP = cVar1;
	this->slashSlashCommentsP = cVar1;
	this->slashStarCommentsP = cVar1;
	this->ctype = std::make_shared<std::vector<unsigned char[]>>(0x100);
	this->ttype = -0x4;
	this->wordChars(0x61, 0x7a);
	this->wordChars(0x41, 0x5a);
	this->wordChars(0xa0, 0xff);
	this->whitespaceChars(cVar1, 0x20);
	this->commentChar(0x2f);
	this->quoteChar(0x22);
	this->quoteChar(0x27);
	this->parseNumbers();
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;)V
java::io::StreamTokenizer::StreamTokenizer(std::shared_ptr<java::io::InputStream> is)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "is"    # Ljava/io/InputStream;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 170    .end annotation
	// 174    invoke-direct {p0}, Ljava/io/StreamTokenizer;-><init>()V
	if ( is )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 186    .line 236
label_cond_b:
	this->input = is;
	return;

}
// .method public constructor <init>(Ljava/io/Reader;)V
java::io::StreamTokenizer::StreamTokenizer(std::shared_ptr<java::io::Reader> r)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "r"    # Ljava/io/Reader;
	// 200    invoke-direct {p0}, Ljava/io/StreamTokenizer;-><init>()V
	if ( r )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 212    .line 250
label_cond_b:
	this->reader = r;
	return;

}
// .method private read()I
int java::io::StreamTokenizer::read()
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 223        value = {
	// 224            Ljava/io/IOException;
	// 225        }
	// 226    .end annotation
	if ( !(this->reader) )  
		goto label_cond_b;
	return this->reader->read();
	// 243    .line 501
label_cond_b:
	if ( !(this->input) )  
		goto label_cond_16;
	return this->input->read();
	// 258    .line 504
label_cond_16:
	cVar0 = std::make_shared<java::lang::IllegalStateException>();
	// throw
	throw cVar0;

}
// .method public commentChar(I)V
void java::io::StreamTokenizer::commentChar(int ch)
{
	
	//    .param p1, "ch"    # I
	if ( ch < 0 ) 
		goto label_cond_d;
	if ( ch >= this->ctype->size() )
		goto label_cond_d;
	this->ctype[ch] = 0x10;
label_cond_d:
	return;

}
// .method public eolIsSignificant(Z)V
void java::io::StreamTokenizer::eolIsSignificant(bool flag)
{
	
	//    .param p1, "flag"    # Z
	this->eolIsSignificantP = flag;
	return;

}
// .method public lineno()I
int java::io::StreamTokenizer::lineno()
{
	
	return this->LINENO;

}
// .method public lowerCaseMode(Z)V
void java::io::StreamTokenizer::lowerCaseMode(bool fl)
{
	
	//    .param p1, "fl"    # Z
	this->forceLower = fl;
	return;

}
// .method public nextToken()I
int java::io::StreamTokenizer::nextToken()
{
	
	std::shared_ptr<unsigned char[]> ct;
	int c;
	int ctype;
	auto v;
	int decexp;
	int seendot;
	double v;
	auto denom;
	double denom;
	int i;
	unsigned char ctype;
	int d;
	int c2;
	int prevc;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 332        value = {
	// 333            Ljava/io/IOException;
	// 334        }
	// 335    .end annotation
	if ( !(this->pushedBack) )  
		goto label_cond_17;
	this->pushedBack = 0x0;
	return this->ttype;
	// 365    .line 530
label_cond_17:
	ct = this->ctype;
	//    .local v6, "ct":[B
	this->sval = 0x0;
	c = this->peekc;
	//    .local v4, "c":I
	if ( c >= 0 )
		goto label_cond_2c;
	c = 0x7fffffff;
label_cond_2c:
	if ( c != 0x7ffffffe )
		goto label_cond_4d;
	c = this->read();
	if ( c >= 0 )
		goto label_cond_44;
	this->ttype = -0x1;
	return -0x1;
	// 422    .line 540
label_cond_44:
	if ( c != 0xa )
		goto label_cond_4d;
	c = 0x7fffffff;
label_cond_4d:
	if ( c != 0x7fffffff )
		goto label_cond_65;
	c = this->read();
	if ( c >= 0 )
		goto label_cond_65;
	this->ttype = -0x1;
	return -0x1;
	// 462    .line 548
label_cond_65:
	this->ttype = c;
	this->peekc = 0x7fffffff;
	if ( c >= 0x100 )
		goto label_cond_ae;
	ctype = ct[c];
	//    .local v7, "ctype":I
label_goto_7a:
	if ( !(( ctype & 0x1)) )  
		goto label_cond_103;
	if ( c != 0xd )
		goto label_cond_cb;
	this->LINENO = ( this->LINENO + 0x1);
	if ( !(this->eolIsSignificantP) )  
		goto label_cond_b0;
	this->peekc = 0x7ffffffe;
	this->ttype = 0xa;
	return 0xa;
	// 546    .line 555
	// 547    .end local v7    # "ctype":I
label_cond_ae:
	ctype = 0x4;
	goto label_goto_7a;
	// 553    .line 563
	// 554    .restart local v7    # "ctype":I
label_cond_b0:
	c = this->read();
	if ( c != 0xa )
		goto label_cond_be;
	c = this->read();
label_cond_be:
label_goto_be:
	if ( c >= 0 )
		goto label_cond_f7;
	this->ttype = -0x1;
	return -0x1;
	// 590    .line 567
label_cond_cb:
	if ( c != 0xa )
		goto label_cond_f2;
	this->LINENO = ( this->LINENO + 0x1);
	if ( !(this->eolIsSignificantP) )  
		goto label_cond_f2;
	this->ttype = 0xa;
	return 0xa;
	// 635    .line 573
label_cond_f2:
	c = this->read();
	goto label_goto_be;
	// 643    .line 577
label_cond_f7:
	if ( c >= 0x100 )
		goto label_cond_101;
	ctype = ct[c];
label_goto_ff:
	goto label_goto_7a;
label_cond_101:
	ctype = 0x4;
	goto label_goto_ff;
	// 661    .line 580
label_cond_103:
	if ( !(( ctype & 0x2)) )  
		goto label_cond_191;
	//    .local v15, "neg":Z
	if ( c != 0x2d )
		goto label_cond_134;
	c = this->read();
	if ( c == 0x2e )
		goto label_cond_133;
	if ( c <  0x30 )
		goto label_cond_124;
	if ( c <= 0x39 )
		goto label_cond_133;
label_cond_124:
	this->peekc = c;
	this->ttype = 0x2d;
	return 0x2d;
	// 721    .line 588
label_cond_133:
label_cond_134:
	v = 0x0;
	//    .local v18, "v":D
	decexp = 0x0;
	//    .local v9, "decexp":I
	seendot = 0x0;
	//    .local v17, "seendot":I
label_goto_139:
	if ( c != 0x2e )
		goto label_cond_148;
	if ( seendot )     
		goto label_cond_148;
	seendot = 0x1;
label_goto_143:
	c = this->read();
	goto label_goto_139;
	// 759    .line 596
label_cond_148:
	if ( 0x30 >  c )
		goto label_cond_164;
	if ( c >  0x39 )
		goto label_cond_164;
	v = ((0x4024000000000000L *  v) +  (double)(( c + -0x30)));
	decexp = (decexp + seendot);
	goto label_goto_143;
	// 794    .line 603
label_cond_164:
	this->peekc = c;
	if ( !(decexp) )  
		goto label_cond_179;
	denom = 0x4024000000000000L;
	//    .local v10, "denom":D
	decexp = ( decexp + -0x1);
label_goto_16e:
	if ( decexp <= 0 )
		goto label_cond_177;
	denom = (denom *  0x4024000000000000L);
	decexp = ( decexp + -0x1);
	goto label_goto_16e;
	// 824    .line 612
label_cond_177:
	v = (v /  denom);
	//    .end local v10    # "denom":D
label_cond_179:
	if ( !(0x0) )  
		goto label_cond_180;
	v = (0.0 - v);
	//    .end local v18    # "v":D
label_cond_180:
	this->nval = v;
	this->ttype = -0x2;
	return -0x2;
	// 860    .line 618
	// 861    .end local v9    # "decexp":I
	// 862    .end local v15    # "neg":Z
	// 863    .end local v17    # "seendot":I
label_cond_191:
	if ( !(( ctype & 0x4)) )  
		goto label_cond_224;
	i = 0x0;
	//    .local v13, "i":I
label_goto_196:
	if ( i <  this->buf->size() )
		goto label_cond_1c2;
	this->buf = java::util::Arrays::copyOf(this->buf, ( this->buf->size() * 0x2));
label_cond_1c2:
	i = ( i + 0x1);
	//    .end local v13    # "i":I
	//    .local v14, "i":I
	this->buf[i] = (char)(c);
	c = this->read();
	if ( c >= 0 )
		goto label_cond_1dc;
	ctype = 0x1;
label_goto_1d6:
	if ( !(( ctype & 0x6)) )  
		goto label_cond_1e7;
	i = i;
	//    .end local v14    # "i":I
	//    .restart local v13    # "i":I
	goto label_goto_196;
	// 962    .line 626
	// 963    .end local v13    # "i":I
	// 964    .restart local v14    # "i":I
label_cond_1dc:
	if ( c >= 0x100 )
		goto label_cond_1e5;
	ctype = ct[c];
	goto label_goto_1d6;
label_cond_1e5:
	ctype = 0x4;
	goto label_goto_1d6;
	// 981    .line 628
label_cond_1e7:
	this->peekc = c;
	this->sval = java::lang::String::copyValueOf(this->buf, 0x0, i);
	if ( !(this->forceLower) )  
		goto label_cond_219;
	this->sval = this->sval->toLowerCase();
label_cond_219:
	this->ttype = -0x3;
	return -0x3;
	// 1050    .line 635
	// 1051    .end local v14    # "i":I
label_cond_224:
	if ( !(( ctype & 0x8)) )  
		goto label_cond_329;
	this->ttype = c;
	//    .restart local v13    # "i":I
	d = this->read();
	//    .local v8, "d":I
	i = 0x0;
	//    .end local v13    # "i":I
	//    .restart local v14    # "i":I
label_goto_232:
	if ( d < 0 ) 
		goto label_cond_2fb;
	if ( d == this->ttype )
		goto label_cond_2fb;
	if ( d == 0xa )
		goto label_cond_2fb;
	if ( d == 0xd )
		goto label_cond_2fb;
	if ( d != 0x5c )
		goto label_cond_2f5;
	c = this->read();
	//    .local v12, "first":I
	if ( c <  0x30 )
		goto label_cond_2d9;
	if ( c >  0x37 )
		goto label_cond_2d9;
	c = ( c + -0x30);
	c2 = this->read();
	//    .local v5, "c2":I
	if ( 0x30 >  c2 )
		goto label_cond_2d7;
	if ( c2 >  0x37 )
		goto label_cond_2d7;
	c = (( c << 0x3) + ( c2 + -0x30));
	c2 = this->read();
	if ( 0x30 >  c2 )
		goto label_cond_2d5;
	if ( c2 >  0x37 )
		goto label_cond_2d5;
	if ( c >  0x33 )
		goto label_cond_2d5;
	c = (( c << 0x3) + ( c2 + -0x30));
	d = this->read();
	//    .end local v5    # "c2":I
	//    .end local v12    # "first":I
label_goto_299:
	if ( i <  this->buf->size() )
		goto label_cond_2c5;
	this->buf = java::util::Arrays::copyOf(this->buf, ( this->buf->size() * 0x2));
label_cond_2c5:
	//    .end local v14    # "i":I
	//    .restart local v13    # "i":I
	this->buf[i] = (char)(c);
	i = ( i + 0x1);
	//    .end local v13    # "i":I
	//    .restart local v14    # "i":I
	goto label_goto_232;
	// 1271    .line 657
	// 1272    .restart local v5    # "c2":I
	// 1273    .restart local v12    # "first":I
label_cond_2d5:
	d = c2;
	goto label_goto_299;
	// 1279    .line 659
label_cond_2d7:
	d = c2;
	goto label_goto_299;
	// 1285    .line 661
	// 1286    .end local v5    # "c2":I
label_cond_2d9:
	// switch
	{
	auto item = ( c );
	if (item == 0x61) goto label_sswitch_2e1;
	if (item == 0x62) goto label_sswitch_2e3;
	if (item == 0x66) goto label_sswitch_2e6;
	if (item == 0x6e) goto label_sswitch_2e9;
	if (item == 0x72) goto label_sswitch_2ec;
	if (item == 0x74) goto label_sswitch_2ef;
	if (item == 0x76) goto label_sswitch_2f2;
	}
label_goto_2dc:
	d = this->read();
	goto label_goto_299;
	// 1298    .line 663
label_sswitch_2e1:
	c = 0x7;
	goto label_goto_2dc;
	// 1305    .line 666
label_sswitch_2e3:
	c = 0x8;
	goto label_goto_2dc;
	// 1312    .line 669
label_sswitch_2e6:
	c = 0xc;
	goto label_goto_2dc;
	// 1319    .line 672
label_sswitch_2e9:
	c = 0xa;
	goto label_goto_2dc;
	// 1326    .line 675
label_sswitch_2ec:
	c = 0xd;
	goto label_goto_2dc;
	// 1333    .line 678
label_sswitch_2ef:
	c = 0x9;
	goto label_goto_2dc;
	// 1340    .line 681
label_sswitch_2f2:
	c = 0xb;
	goto label_goto_2dc;
	// 1347    .line 687
	// 1348    .end local v12    # "first":I
label_cond_2f5:
	c = d;
	d = this->read();
	goto label_goto_299;
	// 1359    .line 700
label_cond_2fb:
	if ( d != this->ttype )
		goto label_cond_308;
	d = 0x7fffffff;
	//    .end local v8    # "d":I
label_cond_308:
	this->peekc = d;
	this->sval = java::lang::String::copyValueOf(this->buf, 0x0, i);
	return this->ttype;
	// 1411    .line 706
	// 1412    .end local v14    # "i":I
label_cond_329:
	if ( c != 0x2f )
		goto label_cond_410;
	if ( this->slashSlashCommentsP )     
		goto label_cond_33f;
	if ( !(this->slashStarCommentsP) )  
		goto label_cond_410;
label_cond_33f:
	c = this->read();
	if ( c != 0x2a )
		goto label_cond_3b5;
	if ( !(this->slashStarCommentsP) )  
		goto label_cond_3b5;
	prevc = 0x0;
	//    .local v16, "prevc":I
label_goto_353:
	c = this->read();
	if ( c != 0x2f )
		goto label_cond_365;
	if ( prevc == 0x2a )
		goto label_cond_3b0;
label_cond_365:
	if ( c != 0xd )
		goto label_cond_394;
	this->LINENO = ( this->LINENO + 0x1);
	c = this->read();
	if ( c != 0xa )
		goto label_cond_387;
	c = this->read();
label_cond_387:
label_goto_387:
	if ( c >= 0 )
		goto label_cond_3ad;
	this->ttype = -0x1;
	return -0x1;
	// 1539    .line 718
label_cond_394:
	if ( c != 0xa )
		goto label_cond_387;
	this->LINENO = ( this->LINENO + 0x1);
	c = this->read();
	goto label_goto_387;
	// 1569    .line 725
label_cond_3ad:
	prevc = c;
	goto label_goto_353;
	// 1575    .line 727
label_cond_3b0:
	return this->nextToken();
	// 1583    .line 728
	// 1584    .end local v16    # "prevc":I
label_cond_3b5:
	if ( c != 0x2f )
		goto label_cond_3de;
	if ( !(this->slashSlashCommentsP) )  
		goto label_cond_3de;
label_cond_3c3:
	c = this->read();
	if ( c == 0xa )
		goto label_cond_3d5;
	if ( c == 0xd )
		goto label_cond_3d5;
	if ( c >= 0 )
		goto label_cond_3c3;
label_cond_3d5:
	this->peekc = c;
	return this->nextToken();
	// 1633    .line 734
label_cond_3de:
	if ( !(( ct[0x2f] & 0x10)) )  
		goto label_cond_401;
label_cond_3e6:
	c = this->read();
	if ( c == 0xa )
		goto label_cond_3f8;
	if ( c == 0xd )
		goto label_cond_3f8;
	if ( c >= 0 )
		goto label_cond_3e6;
label_cond_3f8:
	this->peekc = c;
	return this->nextToken();
	// 1676    .line 739
label_cond_401:
	this->peekc = c;
	this->ttype = 0x2f;
	return 0x2f;
	// 1695    .line 745
label_cond_410:
	if ( !(( ctype & 0x10)) )  
		goto label_cond_42f;
label_cond_414:
	c = this->read();
	if ( c == 0xa )
		goto label_cond_426;
	if ( c == 0xd )
		goto label_cond_426;
	if ( c >= 0 )
		goto label_cond_414;
label_cond_426:
	this->peekc = c;
	return this->nextToken();
	// 1734    .line 751
label_cond_42f:
	this->ttype = c;
	return c;
	// 1742    .line 661
	// 1743    :sswitch_data_434
	// 1744    .sparse-switch
	// 1745        0x61 -> :sswitch_2e1
	// 1746        0x62 -> :sswitch_2e3
	// 1747        0x66 -> :sswitch_2e6
	// 1748        0x6e -> :sswitch_2e9
	// 1749        0x72 -> :sswitch_2ec
	// 1750        0x74 -> :sswitch_2ef
	// 1751        0x76 -> :sswitch_2f2
	// 1752    .end sparse-switch

}
// .method public ordinaryChar(I)V
void java::io::StreamTokenizer::ordinaryChar(int ch)
{
	
	//    .param p1, "ch"    # I
	if ( ch < 0 ) 
		goto label_cond_c;
	if ( ch >= this->ctype->size() )
		goto label_cond_c;
	this->ctype[ch] = 0x0;
label_cond_c:
	return;

}
// .method public ordinaryChars(II)V
void java::io::StreamTokenizer::ordinaryChars(int low,int cVar1)
{
	
	int low;
	int cVar1;
	
	//    .param p1, "low"    # I
	//    .param p2, "hi"    # I
	if ( low >= 0 )
		goto label_cond_4;
	low = 0x0;
label_cond_4:
	if ( cVar1 <  this->ctype->size() )
		goto label_cond_17;
	cVar1 = ( this->ctype->size() + -0x1);
	low = low;
	//    .end local p1    # "low":I
	//    .local v0, "low":I
label_goto_f:
	if ( low >  cVar1 )
		goto label_cond_19;
	low = ( low + 0x1);
	//    .end local v0    # "low":I
	//    .restart local p1    # "low":I
	this->ctype[low] = 0x0;
label_cond_17:
	low = low;
	//    .end local p1    # "low":I
	//    .restart local v0    # "low":I
	goto label_goto_f;
	// 1834    .line 322
label_cond_19:
	return;

}
// .method public parseNumbers()V
void java::io::StreamTokenizer::parseNumbers()
{
	
	int cVar0;
	int cVar1;
	int i;
	std::shared_ptr<unsigned char[]> cVar2;
	std::shared_ptr<unsigned char[]> cVar3;
	std::shared_ptr<unsigned char[]> cVar4;
	
	cVar0 = 0x2e;
	cVar1 = 0x2d;
	i = 0x30;
	//    .local v0, "i":I
label_goto_6:
	if ( i >  0x39 )
		goto label_cond_16;
	cVar2 = this->ctype;
	cVar2[i] = (unsigned char)(( cVar2[i] | 0x2));
	i = ( i + 0x1);
	goto label_goto_6;
	// 1872    .line 412
label_cond_16:
	cVar3 = this->ctype;
	cVar3[cVar0] = (unsigned char)(( cVar3[cVar0] | 0x2));
	cVar4 = this->ctype;
	cVar4[cVar1] = (unsigned char)(( cVar4[cVar1] | 0x2));
	return;

}
// .method public pushBack()V
void java::io::StreamTokenizer::pushBack()
{
	
	if ( this->ttype == -0x4 )
		goto label_cond_8;
	this->pushedBack = 0x1;
label_cond_8:
	return;

}
// .method public quoteChar(I)V
void java::io::StreamTokenizer::quoteChar(int ch)
{
	
	//    .param p1, "ch"    # I
	if ( ch < 0 ) 
		goto label_cond_d;
	if ( ch >= this->ctype->size() )
		goto label_cond_d;
	this->ctype[ch] = 0x8;
label_cond_d:
	return;

}
// .method public resetSyntax()V
void java::io::StreamTokenizer::resetSyntax()
{
	
	int i;
	
	//    .local v0, "i":I
label_goto_4:
	i = ( i + -0x1);
	if ( i < 0 ) 
		goto label_cond_d;
	this->ctype[i] = 0x0;
	goto label_goto_4;
	// 1970    .line 263
label_cond_d:
	return;

}
// .method public slashSlashComments(Z)V
void java::io::StreamTokenizer::slashSlashComments(bool flag)
{
	
	//    .param p1, "flag"    # Z
	this->slashSlashCommentsP = flag;
	return;

}
// .method public slashStarComments(Z)V
void java::io::StreamTokenizer::slashStarComments(bool flag)
{
	
	//    .param p1, "flag"    # Z
	this->slashStarCommentsP = flag;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::StreamTokenizer::toString()
{
	
	char cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared<std::vector<char[]>> s;
	std::shared_ptr<java::lang::String> ret;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	cVar0 = 0x27;
	// switch
	{
	auto item = ( this->ttype );
	if (item == -0x4) goto label_sswitch_5e;
	if (item == -0x3) goto label_sswitch_44;
	if (item == -0x2) goto label_sswitch_47;
	if (item == -0x1) goto label_sswitch_3c;
	if (item == 0xa) goto label_sswitch_40;
	}
	if ( this->ttype >= 0x100 )
		goto label_cond_62;
	if ( !(( this->ctype[this->ttype] & 0x8)) )  
		goto label_cond_62;
	//    .local v0, "ret":Ljava/lang/String;
label_goto_1a:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Token[")))->append(ret)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("], line ")))->append(this->LINENO)->toString();
	// 2068    .line 797
	// 2069    .end local v0    # "ret":Ljava/lang/String;
label_sswitch_3c:
	//    .restart local v0    # "ret":Ljava/lang/String;
	goto label_goto_1a;
	// 2076    .line 800
	// 2077    .end local v0    # "ret":Ljava/lang/String;
label_sswitch_40:
	//    .restart local v0    # "ret":Ljava/lang/String;
	goto label_goto_1a;
	// 2084    .line 803
	// 2085    .end local v0    # "ret":Ljava/lang/String;
label_sswitch_44:
	//    .restart local v0    # "ret":Ljava/lang/String;
	goto label_goto_1a;
	// 2092    .line 806
	// 2093    .end local v0    # "ret":Ljava/lang/String;
label_sswitch_47:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	//    .restart local v0    # "ret":Ljava/lang/String;
	goto label_goto_1a;
	// 2118    .line 809
	// 2119    .end local v0    # "ret":Ljava/lang/String;
label_sswitch_5e:
	//    .restart local v0    # "ret":Ljava/lang/String;
	goto label_goto_1a;
	// 2126    .line 824
	// 2127    .end local v0    # "ret":Ljava/lang/String;
label_cond_62:
	s = std::make_shared<std::vector<char[]>>(0x3);
	//    .local v1, "s":[C
	s[0x2] = cVar0;
	s[0x0] = cVar0;
	s[0x1] = (char)(this->ttype);
	ret = std::make_shared<java::lang::String>(s);
	//    .restart local v0    # "ret":Ljava/lang/String;
	goto label_goto_1a;
	// 2159    .line 795
	// 2160    :sswitch_data_76
	// 2161    .sparse-switch
	// 2162        -0x4 -> :sswitch_5e
	// 2163        -0x3 -> :sswitch_44
	// 2164        -0x2 -> :sswitch_47
	// 2165        -0x1 -> :sswitch_3c
	// 2166        0xa -> :sswitch_40
	// 2167    .end sparse-switch

}
// .method public whitespaceChars(II)V
void java::io::StreamTokenizer::whitespaceChars(int low,int cVar1)
{
	
	int low;
	int cVar1;
	
	//    .param p1, "low"    # I
	//    .param p2, "hi"    # I
	if ( low >= 0 )
		goto label_cond_3;
	low = 0x0;
label_cond_3:
	if ( cVar1 <  this->ctype->size() )
		goto label_cond_17;
	cVar1 = ( this->ctype->size() + -0x1);
	low = low;
	//    .end local p1    # "low":I
	//    .local v0, "low":I
label_goto_e:
	if ( low >  cVar1 )
		goto label_cond_19;
	low = ( low + 0x1);
	//    .end local v0    # "low":I
	//    .restart local p1    # "low":I
	this->ctype[low] = 0x1;
label_cond_17:
	low = low;
	//    .end local p1    # "low":I
	//    .restart local v0    # "low":I
	goto label_goto_e;
	// 2223    .line 302
label_cond_19:
	return;

}
// .method public wordChars(II)V
void java::io::StreamTokenizer::wordChars(int low,int cVar1)
{
	
	int low;
	int cVar1;
	std::shared_ptr<unsigned char[]> cVar2;
	
	//    .param p1, "low"    # I
	//    .param p2, "hi"    # I
	if ( low >= 0 )
		goto label_cond_3;
	low = 0x0;
label_cond_3:
	if ( cVar1 <  this->ctype->size() )
		goto label_cond_1b;
	cVar1 = ( this->ctype->size() + -0x1);
	low = low;
	//    .end local p1    # "low":I
	//    .local v0, "low":I
label_goto_e:
	if ( low >  cVar1 )
		goto label_cond_1d;
	cVar2 = this->ctype;
	low = ( low + 0x1);
	//    .end local v0    # "low":I
	//    .restart local p1    # "low":I
	cVar2[low] = (unsigned char)(( cVar2[low] | 0x4));
label_cond_1b:
	low = low;
	//    .end local p1    # "low":I
	//    .restart local v0    # "low":I
	goto label_goto_e;
	// 2285    .line 281
label_cond_1d:
	return;

}


