// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$BlockDataInputStream.smali
#include "java2ctype.h"
#include "java.io.Bits.h"
#include "java.io.DataInputStream.h"
#include "java.io.EOFException.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.ObjectInputStream_S_BlockDataInputStream.h"
#include "java.io.ObjectInputStream_S_PeekInputStream.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.StreamCorruptedException.h"
#include "java.io.UTFDataFormatException.h"
#include "java.lang.ArrayIndexOutOfBoundsException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Integer.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"

static java::io::ObjectInputStream_S_BlockDataInputStream::CHAR_BUF_SIZE = 0x100;
static java::io::ObjectInputStream_S_BlockDataInputStream::HEADER_BLOCKED = -0x2;
static java::io::ObjectInputStream_S_BlockDataInputStream::MAX_BLOCK_SIZE = 0x400;
static java::io::ObjectInputStream_S_BlockDataInputStream::MAX_HEADER_SIZE = 0x5;
// .method constructor <init>(Ljava/io/ObjectInputStream;Ljava/io/InputStream;)V
java::io::ObjectInputStream_S_BlockDataInputStream::ObjectInputStream_S_BlockDataInputStream(std::shared_ptr<java::io::ObjectInputStream> this_S_0,std::shared_ptr<java::io::InputStream> in)
{
	
	bool cVar0;
	std::shared_ptr<java::io::ObjectInputStream_S_PeekInputStream> cVar1;
	std::shared_ptr<java::io::DataInputStream> cVar2;
	
	//    .param p1, "this$0"    # Ljava/io/ObjectInputStream;
	//    .param p2, "in"    # Ljava/io/InputStream;
	cVar0 = 0x0;
	this->this_S_0 = this_S_0;
	// 065    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V
	this->buf = std::make_shared<std::vector<unsigned char[]>>(0x400);
	this->hbuf = std::make_shared<std::vector<unsigned char[]>>(0x5);
	this->cbuf = std::make_shared<std::vector<char[]>>(0x100);
	this->blkmode = cVar0;
	this->pos = cVar0;
	this->end = -0x1;
	this->unread = cVar0;
	cVar1 = std::make_shared<java::io::ObjectInputStream_S_PeekInputStream>(in);
	this->in = cVar1;
	cVar2 = std::make_shared<java::io::DataInputStream>(this);
	this->din = cVar2;
	return;

}
// .method private readBlockHeader(Z)I
int java::io::ObjectInputStream_S_BlockDataInputStream::readBlockHeader(bool canBlock)
{
	
	int cVar0;
	int cVar1;
	int avail;
	int tc;
	std::shared_ptr<java::io::StreamCorruptedException> cVar2;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar3;
	std::shared_ptr<java::io::StreamCorruptedException> cVar4;
	int len;
	std::shared_ptr<java::io::StreamCorruptedException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	//    .param p1, "canBlock"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 124        value = {
	// 125            Ljava/io/IOException;
	// 126        }
	// 127    .end annotation
	cVar0 = -0x1;
	cVar1 = -0x2;
	if ( !(java::io::ObjectInputStream::-get1(this->this_S_0)) )  
		goto label_cond_16;
	return cVar0;
	// 148    .line 2519
	// 149    .local v0, "avail":I
	// 150    .local v3, "tc":I
label_pswitch_c:
	try {
	//label_try_start_c:
	this->in->read();
	java::io::ObjectInputStream::-wrap3(this->this_S_0);
	//    .end local v0    # "avail":I
	//    .end local v3    # "tc":I
label_cond_16:
	if ( !(canBlock) )  
		goto label_cond_1e;
	avail = 0x7fffffff;
	//    .restart local v0    # "avail":I
label_goto_1b:
	if ( avail )     
		goto label_cond_25;
	return cVar1;
	// 178    .line 2485
	// 179    .end local v0    # "avail":I
label_cond_1e:
	//    .restart local v0    # "avail":I
	goto label_goto_1b;
	// 190    .line 2490
label_cond_25:
	tc = this->in->peek();
	//    .restart local v3    # "tc":I
	// switch
	{
	auto item = ( tc );
	if (item == 119) goto label_pswitch_59;
	if (item == 120) goto label_pswitch_2e;
	if (item == 121) goto label_pswitch_c;
	if (item == 122) goto label_pswitch_6d;
	}
label_pswitch_2e:
	if ( tc < 0 ) 
		goto label_cond_9e;
	if ( tc <  0x70 )
		goto label_cond_38;
	if ( tc <= 0x7e )
		goto label_cond_9e;
label_cond_38:
	cVar3 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar3[0x0] = java::lang::Integer::valueOf(tc);
	cVar2 = std::make_shared<java::io::StreamCorruptedException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid type code: %02X")), cVar3));
	// throw
	throw cVar2;
	// 243    :try_end_4f
	// 244    .catch Ljava/io/EOFException; {:try_start_c .. :try_end_4f} :catch_4f
	// 246    .line 2532
	// 247    .end local v0    # "avail":I
	// 248    .end local v3    # "tc":I
label_catch_4f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/io/EOFException;
	cVar4 = std::make_shared<java::io::StreamCorruptedException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected EOF while reading block data header")));
	// throw
	throw cVar4;
	// 264    .line 2493
	// 265    .end local v1    # "ex":Ljava/io/EOFException;
	// 266    .restart local v0    # "avail":I
	// 267    .restart local v3    # "tc":I
label_pswitch_59:
	if ( avail >= 0x2 )
		goto label_cond_5c;
	return cVar1;
	// 274    .line 2496
label_cond_5c:
	try {
	//label_try_start_5c:
	this->in->readFully(this->hbuf, 0x0, 0x2);
	return ( this->hbuf[0x1] & 0xff);
	// 298    .line 2500
label_pswitch_6d:
	if ( avail >= 0x5 )
		goto label_cond_71;
	return cVar1;
	// 307    .line 2503
label_cond_71:
	this->in->readFully(this->hbuf, 0x0, 0x5);
	len = java::io::Bits::getInt(this->hbuf, 0x1);
	//    .local v2, "len":I
	if ( len >= 0 )
		goto label_cond_9d;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::io::StreamCorruptedException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("illegal block data header length: ")))->append(len)->toString());
	// throw
	throw cVar5;
	// 358    :try_end_9d
	// 359    .catch Ljava/io/EOFException; {:try_start_5c .. :try_end_9d} :catch_4f
	// 361    .line 2510
label_cond_9d:
	return len;
	// 365    .line 2529
	// 366    .end local v2    # "len":I
label_cond_9e:
	return cVar0;
	// 370    .line 2491
	// 371    nop
	// 373    :pswitch_data_a0
	// 374    .packed-switch 0x77
	// 375        :pswitch_59
	// 376        :pswitch_2e
	// 377        :pswitch_c
	// 378        :pswitch_6d
	// 379    .end packed-switch

}
// .method private readUTFBody(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectInputStream_S_BlockDataInputStream::readUTFBody(long long utflen)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> sbuf;
	int avail;
	long long utflen;
	
	//    .param p1, "utflen"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 386        value = {
	// 387            Ljava/io/IOException;
	// 388        }
	// 389    .end annotation
	cVar0 = 0x0;
	sbuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "sbuf":Ljava/lang/StringBuilder;
	if ( this->blkmode )     
		goto label_cond_e;
	this->pos = cVar0;
	this->end = cVar0;
label_cond_e:
label_goto_e:
	if ( (utflen > 0x0) <= 0 )
		goto label_cond_54;
	avail = (this->end - this->pos);
	//    .local v0, "avail":I
	if ( avail >= 0x3 )
		goto label_cond_22;
	if ( ((long long)(avail) > utflen) )     
		goto label_cond_28;
label_cond_22:
	utflen = (utflen -  this->readUTFSpan(sbuf, utflen));
	goto label_goto_e;
	// 449    .line 3071
label_cond_28:
	if ( !(this->blkmode) )  
		goto label_cond_33;
	utflen = (utflen -  (long long)(this->readUTFChar(sbuf, utflen)));
	goto label_goto_e;
	// 466    .line 3076
label_cond_33:
	if ( avail <= 0 )
		goto label_cond_3e;
	java::lang::System::arraycopy(this->buf, this->pos, this->buf, cVar0, avail);
label_cond_3e:
	this->pos = cVar0;
	this->end = (int)(java::lang::Math::min(0x400, utflen));
	this->in->readFully(this->buf, avail, (this->end -  avail));
	goto label_goto_e;
	// 507    .line 3086
	// 508    .end local v0    # "avail":I
label_cond_54:
	return sbuf->toString();

}
// .method private readUTFChar(Ljava/lang/StringBuilder;J)I
int java::io::ObjectInputStream_S_BlockDataInputStream::readUTFChar(std::shared_ptr<java::lang::StringBuilder> sbuf,long long utflen)
{
	
	long long cVar0;
	int cVar1;
	int b1;
	std::shared_ptr<java::io::UTFDataFormatException> cVar2;
	std::shared_ptr<java::io::UTFDataFormatException> cVar3;
	int b2;
	std::shared_ptr<java::io::UTFDataFormatException> cVar4;
	std::shared_ptr<java::io::UTFDataFormatException> cVar5;
	int b3;
	std::shared_ptr<java::io::UTFDataFormatException> cVar6;
	
	//    .param p1, "sbuf"    # Ljava/lang/StringBuilder;
	//    .param p2, "utflen"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 522        value = {
	// 523            Ljava/io/IOException;
	// 524        }
	// 525    .end annotation
	cVar0 = 0x2;
	cVar1 = 0x80;
	b1 = ( this->readByte() & 0xff);
	//    .local v0, "b1":I
	// switch
	{
	auto item = ( _shri(b1,0x4) );
	if (item == 0) goto label_pswitch_15;
	if (item == 1) goto label_pswitch_15;
	if (item == 2) goto label_pswitch_15;
	if (item == 3) goto label_pswitch_15;
	if (item == 4) goto label_pswitch_15;
	if (item == 5) goto label_pswitch_15;
	if (item == 6) goto label_pswitch_15;
	if (item == 7) goto label_pswitch_15;
	if (item == 8) goto label_pswitch_f;
	if (item == 9) goto label_pswitch_f;
	if (item == 10) goto label_pswitch_f;
	if (item == 11) goto label_pswitch_f;
	if (item == 12) goto label_pswitch_1b;
	if (item == 13) goto label_pswitch_1b;
	if (item == 14) goto label_pswitch_42;
	}
label_pswitch_f:
	cVar2 = std::make_shared<java::io::UTFDataFormatException>();
	// throw
	throw cVar2;
	// 553    .line 3186
label_pswitch_15:
	sbuf->append((char)(b1));
	return 0x1;
	// 564    .line 3191
label_pswitch_1b:
	if ( (utflen > cVar0) >= 0 )
		goto label_cond_25;
	cVar3 = std::make_shared<java::io::UTFDataFormatException>();
	// throw
	throw cVar3;
	// 577    .line 3194
label_cond_25:
	b2 = this->readByte();
	//    .local v1, "b2":I
	if ( ( b2 & 0xc0) == cVar1 )
		goto label_cond_33;
	cVar4 = std::make_shared<java::io::UTFDataFormatException>();
	// throw
	throw cVar4;
	// 596    .line 3198
label_cond_33:
	sbuf->append((char)((( ( b1 & 0x1f) << 0x6) |  ( ( b2 & 0x3f) << 0x0))));
	return 0x2;
	// 619    .line 3203
	// 620    .end local v1    # "b2":I
label_pswitch_42:
	if ( (utflen > 0x3) >= 0 )
		goto label_cond_55;
	if ( (utflen > cVar0) )     
		goto label_cond_4f;
	this->readByte();
label_cond_4f:
	cVar5 = std::make_shared<java::io::UTFDataFormatException>();
	// throw
	throw cVar5;
	// 644    .line 3209
label_cond_55:
	b2 = this->readByte();
	//    .restart local v1    # "b2":I
	b3 = this->readByte();
	//    .local v2, "b3":I
	if ( ( b2 & 0xc0) != cVar1 )
		goto label_cond_65;
	if ( ( b3 & 0xc0) == cVar1 )
		goto label_cond_6b;
label_cond_65:
	cVar6 = std::make_shared<java::io::UTFDataFormatException>();
	// throw
	throw cVar6;
	// 674    .line 3214
label_cond_6b:
	sbuf->append((char)(((( ( b1 & 0xf) << 0xc) |  ( ( b2 & 0x3f) << 0x6)) |  ( ( b3 & 0x3f) << 0x0))));
	return 0x3;
	// 705    .line 3177
	// 706    nop
	// 708    :pswitch_data_80
	// 709    .packed-switch 0x0
	// 710        :pswitch_15
	// 711        :pswitch_15
	// 712        :pswitch_15
	// 713        :pswitch_15
	// 714        :pswitch_15
	// 715        :pswitch_15
	// 716        :pswitch_15
	// 717        :pswitch_15
	// 718        :pswitch_f
	// 719        :pswitch_f
	// 720        :pswitch_f
	// 721        :pswitch_f
	// 722        :pswitch_1b
	// 723        :pswitch_1b
	// 724        :pswitch_42
	// 725    .end packed-switch

}
// .method private readUTFSpan(Ljava/lang/StringBuilder;J)J
long long java::io::ObjectInputStream_S_BlockDataInputStream::readUTFSpan(std::shared_ptr<java::lang::StringBuilder> sbuf,long long utflen)
{
	
	int start;
	int avail;
	int cVar0;
	int outOfBounds;
	int cpos;
	std::shared_ptr<java::io::UTFDataFormatException> cVar3;
	std::shared_ptr<java::io::UTFDataFormatException> cVar7;
	int cVar1;
	int b1;
	std::shared_ptr<java::io::UTFDataFormatException> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	int cVar5;
	unsigned char b2;
	std::shared_ptr<java::io::UTFDataFormatException> cVar6;
	unsigned char b3;
	std::shared_ptr<java::io::UTFDataFormatException> cVar8;
	std::shared_ptr<java::io::UTFDataFormatException> cVar9;
	
	//    .param p1, "sbuf"    # Ljava/lang/StringBuilder;
	//    .param p2, "utflen"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 733        value = {
	// 734            Ljava/io/IOException;
	// 735        }
	// 736    .end annotation
	//    .local v6, "cpos":I
	start = this->pos;
	//    .local v10, "start":I
	avail = java::lang::Math::min((this->end -  this->pos), 0x100);
	//    .local v2, "avail":I
	if ( (utflen > (long long)(avail)) <= 0 )
		goto label_cond_63;
	cVar0 = ( avail + -0x2);
label_goto_1f:
	//    .local v11, "stop":I
	outOfBounds = 0x0;
	//    .local v9, "outOfBounds":Z
	cpos = 0x0;
	//    .end local v6    # "cpos":I
	//    .local v7, "cpos":I
label_goto_23:
	try {
	//label_try_start_23:
	if ( this->pos >= (this->pos + cVar0) )
		goto label_cond_10e;
	cVar1 = this->pos;
	this->pos = ( cVar1 + 0x1);
	b1 = ( this->buf[cVar1] & 0xff);
	//    .local v3, "b1":I
	// switch
	{
	auto item = ( _shri(b1,0x4) );
	if (item == 0) goto label_pswitch_67;
	if (item == 1) goto label_pswitch_67;
	if (item == 2) goto label_pswitch_67;
	if (item == 3) goto label_pswitch_67;
	if (item == 4) goto label_pswitch_67;
	if (item == 5) goto label_pswitch_67;
	if (item == 6) goto label_pswitch_67;
	if (item == 7) goto label_pswitch_67;
	if (item == 8) goto label_pswitch_40;
	if (item == 9) goto label_pswitch_40;
	if (item == 10) goto label_pswitch_40;
	if (item == 11) goto label_pswitch_40;
	if (item == 12) goto label_pswitch_72;
	if (item == 13) goto label_pswitch_72;
	if (item == 14) goto label_pswitch_bf;
	}
label_pswitch_40:
	cVar2 = std::make_shared<java::io::UTFDataFormatException>();
	// throw
	throw cVar2;
	// 833    :try_end_46
	// 834    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_23 .. :try_end_46} :catch_46
	// 835    .catchall {:try_start_23 .. :try_end_46} :catchall_8e
	// 837    .line 3147
	// 838    .end local v3    # "b1":I
label_catch_46:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v8, "ex":Ljava/lang/ArrayIndexOutOfBoundsException;
	//    .end local v7    # "cpos":I
	//    .restart local v6    # "cpos":I
label_goto_48:
	if ( 0x1 )     
		goto label_cond_55;
	if ( ((long long)((this->pos -  start)) > utflen) <= 0 )
		goto label_cond_129;
label_cond_55:
	this->pos = ((int)(utflen) +  start);
	cVar3 = std::make_shared<java::io::UTFDataFormatException>();
	// throw
	throw cVar3;
	// 885    .line 3102
	// 886    .end local v8    # "ex":Ljava/lang/ArrayIndexOutOfBoundsException;
	// 887    .end local v9    # "outOfBounds":Z
	// 888    .end local v11    # "stop":I
label_cond_63:
	cVar0 = (int)(utflen);
	goto label_goto_1f;
	// 896    .line 3118
	// 897    .end local v6    # "cpos":I
	// 898    .restart local v3    # "b1":I
	// 899    .restart local v7    # "cpos":I
	// 900    .restart local v9    # "outOfBounds":Z
	// 901    .restart local v11    # "stop":I
label_pswitch_67:
	try {
	//label_try_start_67:
	//label_try_end_6b:
	}
	catch (java::lang::ArrayIndexOutOfBoundsException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_46;
	}
	catch (...){
		goto label_catchall_8e;
	}
	//    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_67 .. :try_end_6b} :catch_46
	//    .catchall {:try_start_67 .. :try_end_6b} :catchall_8e
	//    .end local v7    # "cpos":I
	//    .restart local v6    # "cpos":I
	try {
	//label_try_start_6e:
	this->cbuf[cpos] = (char)(b1);
	//label_try_end_70:
	}
	catch (java::lang::ArrayIndexOutOfBoundsException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_bd;
	}
	catch (...){
		goto label_catchall_10c;
	}
	//    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_6e .. :try_end_70} :catch_bd
	//    .catchall {:try_start_6e .. :try_end_70} :catchall_10c
label_goto_70:
	cpos = cpos;
	//    .end local v6    # "cpos":I
	//    .restart local v7    # "cpos":I
	goto label_goto_23;
	// 930    .line 3123
label_pswitch_72:
	try {
	//label_try_start_72:
	cVar5 = this->pos;
	this->pos = ( cVar5 + 0x1);
	b2 = this->buf[cVar5];
	//    .local v4, "b2":I
	if ( ( b2 & 0xc0) == 0x80 )
		goto label_cond_aa;
	cVar6 = std::make_shared<java::io::UTFDataFormatException>();
	// throw
	throw cVar6;
	// 963    :try_end_8e
	// 964    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_72 .. :try_end_8e} :catch_46
	// 965    .catchall {:try_start_72 .. :try_end_8e} :catchall_8e
	// 967    .line 3149
	// 968    .end local v3    # "b1":I
	// 969    .end local v4    # "b2":I
label_catchall_8e:
	// move-exception
	
	cpos;
	//    .end local v7    # "cpos":I
	//    .restart local v6    # "cpos":I
label_goto_90:
	if ( outOfBounds )     
		goto label_cond_9c;
	if ( ((long long)((this->pos -  start)) > utflen) <= 0 )
		goto label_cond_13a;
label_cond_9c:
	this->pos = ((int)(utflen) +  start);
	cVar7 = std::make_shared<java::io::UTFDataFormatException>();
	// throw
	throw cVar7;
	// 1012    .line 3127
	// 1013    .end local v6    # "cpos":I
	// 1014    .restart local v3    # "b1":I
	// 1015    .restart local v4    # "b2":I
	// 1016    .restart local v7    # "cpos":I
label_cond_aa:
	try {
	//label_try_start_aa:
	//label_try_end_ae:
	}
	catch (java::lang::ArrayIndexOutOfBoundsException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_46;
	}
	catch (...){
		goto label_catchall_8e;
	}
	//    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_aa .. :try_end_ae} :catch_46
	//    .catchall {:try_start_aa .. :try_end_ae} :catchall_8e
	//    .end local v7    # "cpos":I
	//    .restart local v6    # "cpos":I
	try {
	//label_try_start_ba:
	this->cbuf[cpos] = (char)((( ( b1 & 0x1f) << 0x6) |  ( ( b2 & 0x3f) << 0x0)));
	//label_try_end_bc:
	}
	catch (java::lang::ArrayIndexOutOfBoundsException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_bd;
	}
	catch (...){
		goto label_catchall_10c;
	}
	//    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_ba .. :try_end_bc} :catch_bd
	//    .catchall {:try_start_ba .. :try_end_bc} :catchall_10c
	goto label_goto_70;
	// 1052    .line 3147
	// 1053    .end local v4    # "b2":I
label_catch_bd:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v8    # "ex":Ljava/lang/ArrayIndexOutOfBoundsException;
	goto label_goto_48;
	// 1060    .line 3132
	// 1061    .end local v6    # "cpos":I
	// 1062    .end local v8    # "ex":Ljava/lang/ArrayIndexOutOfBoundsException;
	// 1063    .restart local v7    # "cpos":I
label_pswitch_bf:
	try {
	//label_try_start_bf:
	b3 = this->buf[( this->pos + 0x1)];
	//    .local v5, "b3":I
	b2 = this->buf[( this->pos + 0x0)];
	//    .restart local v4    # "b2":I
	this->pos = ( this->pos + 0x2);
	if ( ( b2 & 0xc0) != 0x80 )
		goto label_cond_ed;
	if ( ( b3 & 0xc0) == 0x80 )
		goto label_cond_f3;
label_cond_ed:
	cVar8 = std::make_shared<java::io::UTFDataFormatException>();
	// throw
	throw cVar8;
	// 1125    .line 3138
label_cond_f3:
	//label_try_end_f7:
	}
	catch (java::lang::ArrayIndexOutOfBoundsException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_46;
	}
	catch (...){
		goto label_catchall_8e;
	}
	//    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_bf .. :try_end_f7} :catch_46
	//    .catchall {:try_start_bf .. :try_end_f7} :catchall_8e
	//    .end local v7    # "cpos":I
	//    .restart local v6    # "cpos":I
	try {
	//label_try_start_108:
	this->cbuf[cpos] = (char)(((( ( b1 & 0xf) << 0xc) |  ( ( b2 & 0x3f) << 0x6)) |  ( ( b3 & 0x3f) << 0x0)));
	//label_try_end_10a:
	}
	catch (java::lang::ArrayIndexOutOfBoundsException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_bd;
	}
	catch (...){
		goto label_catchall_10c;
	}
	//    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_108 .. :try_end_10a} :catch_bd
	//    .catchall {:try_start_108 .. :try_end_10a} :catchall_10c
	goto label_goto_70;
	// 1168    .line 3149
	// 1169    .end local v4    # "b2":I
	// 1170    .end local v5    # "b3":I
label_catchall_10c:
	// move-exception
	tryCatchExcetionList.back();
	goto label_goto_90;
	// 1176    .line 3150
	// 1177    .end local v3    # "b1":I
	// 1178    .end local v6    # "cpos":I
	// 1179    .restart local v7    # "cpos":I
label_cond_10e:
	if ( outOfBounds )     
		goto label_cond_11a;
	if ( ((long long)((this->pos -  start)) > utflen) <= 0 )
		goto label_cond_128;
label_cond_11a:
	this->pos = ((int)(utflen) +  start);
	cVar9 = std::make_shared<java::io::UTFDataFormatException>();
	// throw
	throw cVar9;
label_cond_128:
	//    .end local v7    # "cpos":I
	//    .restart local v6    # "cpos":I
label_cond_129:
	sbuf->append(this->cbuf, 0x0, cpos);
	return (long long)((this->pos -  start));
	// 1242    .line 3149
label_cond_13a:
	// throw
	throw;
	// 1246    .line 3109
	// 1247    nop
	// 1249    :pswitch_data_13c
	// 1250    .packed-switch 0x0
	// 1251        :pswitch_67
	// 1252        :pswitch_67
	// 1253        :pswitch_67
	// 1254        :pswitch_67
	// 1255        :pswitch_67
	// 1256        :pswitch_67
	// 1257        :pswitch_67
	// 1258        :pswitch_67
	// 1259        :pswitch_40
	// 1260        :pswitch_40
	// 1261        :pswitch_40
	// 1262        :pswitch_40
	// 1263        :pswitch_72
	// 1264        :pswitch_72
	// 1265        :pswitch_bf
	// 1266    .end packed-switch

}
// .method private refill()V
void java::io::ObjectInputStream_S_BlockDataInputStream::refill()
{
	
	int cVar0;
	int n;
	std::shared_ptr<java::io::StreamCorruptedException> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1272        value = {
	// 1273            Ljava/io/IOException;
	// 1274        }
	// 1275    .end annotation
	cVar0 = 0x0;
label_cond_2:
	try {
	//label_try_start_3:
	this->pos = 0x0;
	if ( this->unread <= 0 )
		goto label_cond_3b;
	n = this->in->read(this->buf, 0x0, java::lang::Math::min(this->unread, 0x400));
	//    .local v1, "n":I
	if ( n < 0 ) 
		goto label_cond_2a;
	this->end = n;
	this->unread = (this->unread -  n);
label_goto_23:
	if ( this->pos == this->end )
		goto label_cond_2;
	return;
	// 1338    .line 2556
label_cond_2a:
	cVar1 = std::make_shared<java::io::StreamCorruptedException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected EOF in middle of data block")));
	// throw
	throw cVar1;
	// 1349    :try_end_33
	// 1350    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_33} :catch_33
	// 1352    .line 2570
	// 1353    .end local v1    # "n":I
label_catch_33:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/io/IOException;
	this->pos = cVar0;
	this->end = -0x1;
	this->unread = cVar0;
	// throw
	throw;
	// 1370    .line 2560
	// 1371    .end local v0    # "ex":Ljava/io/IOException;
label_cond_3b:
	try {
	//label_try_start_3c:
	n = this->readBlockHeader(0x1);
	//    .restart local v1    # "n":I
	if ( n < 0 ) 
		goto label_cond_48;
	this->end = 0x0;
	this->unread = n;
	goto label_goto_23;
	// 1394    .line 2565
label_cond_48:
	this->end = -0x1;
	this->unread = 0x0;
	//label_try_end_4e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_33;
	}
	//    .catch Ljava/io/IOException; {:try_start_3c .. :try_end_4e} :catch_33
	goto label_goto_23;

}
// .method public available()I
int java::io::ObjectInputStream_S_BlockDataInputStream::available()
{
	
	bool cVar1;
	int n;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1415        value = {
	// 1416            Ljava/io/IOException;
	// 1417        }
	// 1418    .end annotation
	cVar1 = 0x0;
	if ( !(this->blkmode) )  
		goto label_cond_41;
	if ( this->pos != this->end )
		goto label_cond_1e;
	if ( this->unread )     
		goto label_cond_1e;
label_cond_f:
	n = this->readBlockHeader(cVar1);
	//    .local v0, "n":I
	if ( !(n) )  
		goto label_cond_f;
	// switch
	{
	auto item = ( n );
	if (item == -2) goto label_pswitch_1e;
	if (item == -1) goto label_pswitch_39;
	}
	this->pos = cVar1;
	this->end = cVar1;
	this->unread = n;
	//    .end local v0    # "n":I
label_cond_1e:
label_goto_1e:
label_pswitch_1e:
	if ( this->unread <= 0 )
		goto label_cond_3f;
	//    .local v1, "unreadAvail":I
label_goto_2e:
	if ( this->end < 0 ) 
		goto label_cond_38;
	cVar1 = ((this->end -  this->pos) +  java::lang::Math::min(this->in->available(), this->unread));
label_cond_38:
	return cVar1;
	// 1500    .line 2678
	// 1501    .end local v1    # "unreadAvail":I
	// 1502    .restart local v0    # "n":I
label_pswitch_39:
	this->pos = cVar1;
	this->end = -0x1;
	goto label_goto_1e;
	// 1513    .line 2691
	// 1514    .end local v0    # "n":I
label_cond_3f:
	0x0;
	//    .restart local v1    # "unreadAvail":I
	goto label_goto_2e;
	// 1521    .line 2694
	// 1522    .end local v1    # "unreadAvail":I
label_cond_41:
	return this->in->available();
	// 1532    .line 2673
	// 1533    :pswitch_data_48
	// 1534    .packed-switch -0x2
	// 1535        :pswitch_1e
	// 1536        :pswitch_39
	// 1537    .end packed-switch

}
// .method public close()V
void java::io::ObjectInputStream_S_BlockDataInputStream::close()
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1543        value = {
	// 1544            Ljava/io/IOException;
	// 1545        }
	// 1546    .end annotation
	cVar0 = 0x0;
	if ( !(this->blkmode) )  
		goto label_cond_c;
	this->pos = cVar0;
	this->end = -0x1;
	this->unread = cVar0;
label_cond_c:
	this->in->close();
	return;

}
// .method currentBlockRemaining()I
int java::io::ObjectInputStream_S_BlockDataInputStream::currentBlockRemaining()
{
	
	int cVar1;
	std::shared_ptr<java::lang::IllegalStateException> cVar2;
	
	cVar1 = 0x0;
	if ( !(this->blkmode) )  
		goto label_cond_12;
	if ( this->end < 0 ) 
		goto label_cond_11;
	cVar1 = ((this->end -  this->pos) +  this->unread);
label_cond_11:
	return cVar1;
	// 1606    .line 2587
label_cond_12:
	cVar2 = std::make_shared<java::lang::IllegalStateException>();
	// throw
	throw cVar2;

}
// .method getBlockDataMode()Z
bool java::io::ObjectInputStream_S_BlockDataInputStream::getBlockDataMode()
{
	
	return this->blkmode;

}
// .method peek()I
int java::io::ObjectInputStream_S_BlockDataInputStream::peek()
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1628        value = {
	// 1629            Ljava/io/IOException;
	// 1630        }
	// 1631    .end annotation
	if ( !(this->blkmode) )  
		goto label_cond_1c;
	if ( this->pos != this->end )
		goto label_cond_d;
	this->refill();
label_cond_d:
	if ( this->end < 0 ) 
		goto label_cond_1a;
	cVar0 = ( this->buf[this->pos] & 0xff);
label_goto_19:
	return cVar0;
label_cond_1a:
	cVar0 = -0x1;
	goto label_goto_19;
	// 1671    .line 2603
label_cond_1c:
	return this->in->peek();

}
// .method peekByte()B
unsigned char java::io::ObjectInputStream_S_BlockDataInputStream::peekByte()
{
	
	int val;
	std::shared_ptr<java::io::EOFException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1685        value = {
	// 1686            Ljava/io/IOException;
	// 1687        }
	// 1688    .end annotation
	val = this->peek();
	//    .local v0, "val":I
	if ( val >= 0 )
		goto label_cond_c;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 1707    .line 2617
label_cond_c:
	return (unsigned char)(val);

}
// .method public read()I
int java::io::ObjectInputStream_S_BlockDataInputStream::read()
{
	
	int cVar0;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1717        value = {
	// 1718            Ljava/io/IOException;
	// 1719        }
	// 1720    .end annotation
	if ( !(this->blkmode) )  
		goto label_cond_20;
	if ( this->pos != this->end )
		goto label_cond_d;
	this->refill();
label_cond_d:
	if ( this->end < 0 ) 
		goto label_cond_1e;
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	cVar1 = ( this->buf[cVar0] & 0xff);
label_goto_1d:
	return cVar1;
label_cond_1e:
	cVar1 = -0x1;
	goto label_goto_1d;
	// 1764    .line 2636
label_cond_20:
	return this->in->read();

}
// .method public read([BII)I
int java::io::ObjectInputStream_S_BlockDataInputStream::read(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1781        value = {
	// 1782            Ljava/io/IOException;
	// 1783        }
	// 1784    .end annotation
	return this->read(b, off, len, 0x0);

}
// .method read([BIIZ)I
int java::io::ObjectInputStream_S_BlockDataInputStream::read(std::shared_ptr<unsigned char[]> b,int off,int len,bool copy)
{
	
	int cVar0;
	int nread;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .param p4, "copy"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1804        value = {
	// 1805            Ljava/io/IOException;
	// 1806        }
	// 1807    .end annotation
	cVar0 = 0x0;
	if ( len )     
		goto label_cond_4;
	return cVar0;
	// 1818    .line 2717
label_cond_4:
	if ( !(this->blkmode) )  
		goto label_cond_2d;
	if ( this->pos != this->end )
		goto label_cond_11;
	this->refill();
label_cond_11:
	if ( this->end >= 0 )
		goto label_cond_17;
	return -0x1;
	// 1845    .line 2724
label_cond_17:
	nread = java::lang::Math::min(len, (this->end -  this->pos));
	//    .local v0, "nread":I
	java::lang::System::arraycopy(this->buf, this->pos, b, off, nread);
	this->pos = (this->pos +  nread);
	return nread;
	// 1875    .line 2728
	// 1876    .end local v0    # "nread":I
label_cond_2d:
	if ( !(copy) )  
		goto label_cond_45;
	nread = this->in->read(this->buf, cVar0, java::lang::Math::min(len, 0x400));
	//    .restart local v0    # "nread":I
	if ( nread <= 0 )
		goto label_cond_44;
	java::lang::System::arraycopy(this->buf, cVar0, b, off, nread);
label_cond_44:
	return nread;
	// 1908    .line 2735
	// 1909    .end local v0    # "nread":I
label_cond_45:
	return this->in->read(b, off, len);

}
// .method public readBoolean()Z
bool java::io::ObjectInputStream_S_BlockDataInputStream::readBoolean()
{
	
	bool cVar2;
	int v;
	std::shared_ptr<java::io::EOFException> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1923        value = {
	// 1924            Ljava/io/IOException;
	// 1925        }
	// 1926    .end annotation
	cVar2 = 0x0;
	v = this->read();
	//    .local v0, "v":I
	if ( v >= 0 )
		goto label_cond_d;
	cVar1 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar1;
	// 1947    .line 2777
label_cond_d:
	if ( !(v) )  
		goto label_cond_10;
	cVar2 = 0x1;
label_cond_10:
	return cVar2;

}
// .method readBooleans([ZII)V
void java::io::ObjectInputStream_S_BlockDataInputStream::readBooleans(std::shared_ptr<bool[]> v,int off,int len)
{
	
	int cVar0;
	int endoff;
	int off;
	int span;
	int cVar1;
	
	//    .param p1, "v"    # [Z
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1963        value = {
	// 1964            Ljava/io/IOException;
	// 1965        }
	// 1966    .end annotation
	cVar0 = 0x0;
	endoff = (off + len);
	//    .local v0, "endoff":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v1, "off":I
label_cond_4:
label_goto_4:
	if ( off >= endoff )
		goto label_cond_50;
	if ( this->blkmode )     
		goto label_cond_31;
	span = java::lang::Math::min((endoff - off), 0x400);
	//    .local v2, "span":I
	this->in->readFully(this->buf, cVar0, span);
	//    .local v3, "stop":I
	this->pos = cVar0;
	//    .end local v2    # "span":I
label_goto_1d:
	if ( off >= stop )
		goto label_cond_4;
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	cVar1 = this->pos;
	this->pos = ( cVar1 + 0x1);
	v[off] = java::io::Bits::getBoolean(this->buf, cVar1);
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_1d;
	// 2043    .line 2905
	// 2044    .end local v3    # "stop":I
label_cond_31:
	if ( (this->end -  this->pos) >= 0x1 )
		goto label_cond_45;
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	v[off] = this->din->readBoolean();
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_4;
	// 2076    .line 2909
label_cond_45:
	//    .restart local v3    # "stop":I
	goto label_goto_1d;
	// 2093    .line 2916
	// 2094    .end local v3    # "stop":I
label_cond_50:
	return;

}
// .method public readByte()B
unsigned char java::io::ObjectInputStream_S_BlockDataInputStream::readByte()
{
	
	int v;
	std::shared_ptr<java::io::EOFException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2102        value = {
	// 2103            Ljava/io/IOException;
	// 2104        }
	// 2105    .end annotation
	v = this->read();
	//    .local v0, "v":I
	if ( v >= 0 )
		goto label_cond_c;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 2124    .line 2785
label_cond_c:
	return (unsigned char)(v);

}
// .method public readChar()C
char java::io::ObjectInputStream_S_BlockDataInputStream::readChar()
{
	
	int cVar0;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2134        value = {
	// 2135            Ljava/io/IOException;
	// 2136        }
	// 2137    .end annotation
	cVar0 = 0x2;
	cVar1 = 0x0;
	if ( this->blkmode )     
		goto label_cond_1e;
	this->pos = cVar1;
	this->in->readFully(this->buf, cVar1, cVar0);
label_cond_f:
	//    .local v0, "v":C
	this->pos = ( this->pos + 0x2);
	return java::io::Bits::getChar(this->buf, this->pos);
	// 2180    .line 2800
	// 2181    .end local v0    # "v":C
label_cond_1e:
	if ( (this->end -  this->pos) >= cVar0 )
		goto label_cond_f;
	return this->din->readChar();

}
// .method readChars([CII)V
void java::io::ObjectInputStream_S_BlockDataInputStream::readChars(std::shared_ptr<char[]> v,int off,int len)
{
	
	int cVar0;
	int endoff;
	int off;
	int span;
	
	//    .param p1, "v"    # [C
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2207        value = {
	// 2208            Ljava/io/IOException;
	// 2209        }
	// 2210    .end annotation
	cVar0 = 0x0;
	endoff = (off + len);
	//    .local v0, "endoff":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v1, "off":I
label_cond_4:
label_goto_4:
	if ( off >= endoff )
		goto label_cond_56;
	if ( this->blkmode )     
		goto label_cond_35;
	span = java::lang::Math::min((endoff - off), 0x200);
	//    .local v2, "span":I
	this->in->readFully(this->buf, cVar0, ( span << 0x1));
	//    .local v3, "stop":I
	this->pos = cVar0;
	//    .end local v2    # "span":I
label_goto_1f:
	if ( off >= stop )
		goto label_cond_4;
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	v[off] = java::io::Bits::getChar(this->buf, this->pos);
	this->pos = ( this->pos + 0x2);
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_1f;
	// 2292    .line 2926
	// 2293    .end local v3    # "stop":I
label_cond_35:
	if ( (this->end -  this->pos) >= 0x2 )
		goto label_cond_49;
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	v[off] = this->din->readChar();
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_4;
	// 2325    .line 2930
label_cond_49:
	//    .restart local v3    # "stop":I
	goto label_goto_1f;
	// 2344    .line 2938
	// 2345    .end local v3    # "stop":I
label_cond_56:
	return;

}
// .method public readDouble()D
double java::io::ObjectInputStream_S_BlockDataInputStream::readDouble()
{
	
	int cVar0;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2353        value = {
	// 2354            Ljava/io/IOException;
	// 2355        }
	// 2356    .end annotation
	cVar0 = 0x8;
	cVar1 = 0x0;
	if ( this->blkmode )     
		goto label_cond_1f;
	this->pos = cVar1;
	this->in->readFully(this->buf, cVar1, cVar0);
label_cond_10:
	//    .local v0, "v":D
	this->pos = ( this->pos + 0x8);
	return java::io::Bits::getDouble(this->buf, this->pos);
	// 2399    .line 2872
	// 2400    .end local v0    # "v":D
label_cond_1f:
	if ( (this->end -  this->pos) >= cVar0 )
		goto label_cond_10;
	return this->din->readDouble();

}
// .method readDoubles([DII)V
void java::io::ObjectInputStream_S_BlockDataInputStream::readDoubles(std::shared_ptr<double[]> v,int off,int len)
{
	
	int cVar0;
	int endoff;
	int off;
	int span;
	
	//    .param p1, "v"    # [D
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2426        value = {
	// 2427            Ljava/io/IOException;
	// 2428        }
	// 2429    .end annotation
	cVar0 = 0x0;
	endoff = (off + len);
	//    .local v0, "endoff":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v1, "off":I
label_goto_4:
	if ( off >= endoff )
		goto label_cond_52;
	if ( this->blkmode )     
		goto label_cond_2f;
	span = java::lang::Math::min((endoff - off), 0x80);
	//    .local v2, "span":I
	this->in->readFully(this->buf, cVar0, ( span << 0x3));
	this->pos = cVar0;
label_goto_1d:
	java::io::ObjectInputStream::-wrap1(this->buf, this->pos, v, off, span);
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	this->pos = (this->pos +  ( span << 0x3));
	off = (off + span);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_4;
	// 2501    .line 3033
	// 2502    .end local v2    # "span":I
label_cond_2f:
	if ( (this->end -  this->pos) >= 0x8 )
		goto label_cond_44;
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	v[off] = this->din->readDouble();
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_4;
	// 2534    .line 3037
label_cond_44:
	span = java::lang::Math::min((endoff - off), _shri((this->end -  this->pos),0x3));
	//    .restart local v2    # "span":I
	goto label_goto_1d;
	// 2553    .line 3044
	// 2554    .end local v2    # "span":I
label_cond_52:
	return;

}
// .method public readFloat()F
float java::io::ObjectInputStream_S_BlockDataInputStream::readFloat()
{
	
	int cVar0;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2562        value = {
	// 2563            Ljava/io/IOException;
	// 2564        }
	// 2565    .end annotation
	cVar0 = 0x4;
	cVar1 = 0x0;
	if ( this->blkmode )     
		goto label_cond_1e;
	this->pos = cVar1;
	this->in->readFully(this->buf, cVar1, cVar0);
label_cond_f:
	//    .local v0, "v":F
	this->pos = ( this->pos + 0x4);
	return java::io::Bits::getFloat(this->buf, this->pos);
	// 2608    .line 2848
	// 2609    .end local v0    # "v":F
label_cond_1e:
	if ( (this->end -  this->pos) >= cVar0 )
		goto label_cond_f;
	return this->din->readFloat();

}
// .method readFloats([FII)V
void java::io::ObjectInputStream_S_BlockDataInputStream::readFloats(std::shared_ptr<float[]> v,int off,int len)
{
	
	int cVar0;
	int endoff;
	int off;
	int span;
	
	//    .param p1, "v"    # [F
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2635        value = {
	// 2636            Ljava/io/IOException;
	// 2637        }
	// 2638    .end annotation
	cVar0 = 0x0;
	endoff = (off + len);
	//    .local v0, "endoff":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v1, "off":I
label_goto_4:
	if ( off >= endoff )
		goto label_cond_51;
	if ( this->blkmode )     
		goto label_cond_2f;
	span = java::lang::Math::min((endoff - off), 0x100);
	//    .local v2, "span":I
	this->in->readFully(this->buf, cVar0, ( span << 0x2));
	this->pos = cVar0;
label_goto_1d:
	java::io::ObjectInputStream::-wrap2(this->buf, this->pos, v, off, span);
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	this->pos = (this->pos +  ( span << 0x2));
	off = (off + span);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_4;
	// 2710    .line 2991
	// 2711    .end local v2    # "span":I
label_cond_2f:
	if ( (this->end -  this->pos) >= 0x4 )
		goto label_cond_43;
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	v[off] = this->din->readFloat();
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_4;
	// 2743    .line 2995
label_cond_43:
	span = java::lang::Math::min((endoff - off), _shri((this->end -  this->pos),0x2));
	//    .restart local v2    # "span":I
	goto label_goto_1d;
	// 2762    .line 3002
	// 2763    .end local v2    # "span":I
label_cond_51:
	return;

}
// .method public readFully([B)V
void java::io::ObjectInputStream_S_BlockDataInputStream::readFully(std::shared_ptr<unsigned char[]> b)
{
	
	int cVar0;
	
	//    .param p1, "b"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 2772        value = {
	// 2773            Ljava/io/IOException;
	// 2774        }
	// 2775    .end annotation
	cVar0 = 0x0;
	this->readFully(b, cVar0, b->size(), cVar0);
	return;

}
// .method public readFully([BII)V
void java::io::ObjectInputStream_S_BlockDataInputStream::readFully(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2795        value = {
	// 2796            Ljava/io/IOException;
	// 2797        }
	// 2798    .end annotation
	this->readFully(b, off, len, 0x0);
	return;

}
// .method public readFully([BIIZ)V
void java::io::ObjectInputStream_S_BlockDataInputStream::readFully(std::shared_ptr<unsigned char[]> b,int off,int len,bool copy)
{
	
	int n;
	std::shared_ptr<java::io::EOFException> cVar0;
	int off;
	int len;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .param p4, "copy"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 2817        value = {
	// 2818            Ljava/io/IOException;
	// 2819        }
	// 2820    .end annotation
label_goto_0:
	if ( len <= 0 )
		goto label_cond_11;
	n = this->read(b, off, len, copy);
	//    .local v0, "n":I
	if ( n >= 0 )
		goto label_cond_e;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 2843    .line 2763
label_cond_e:
	off = (off +  n);
	len = (len -  n);
	goto label_goto_0;
	// 2852    .line 2766
	// 2853    .end local v0    # "n":I
label_cond_11:
	return;

}
// .method public readInt()I
int java::io::ObjectInputStream_S_BlockDataInputStream::readInt()
{
	
	int cVar0;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2861        value = {
	// 2862            Ljava/io/IOException;
	// 2863        }
	// 2864    .end annotation
	cVar0 = 0x4;
	cVar1 = 0x0;
	if ( this->blkmode )     
		goto label_cond_1e;
	this->pos = cVar1;
	this->in->readFully(this->buf, cVar1, cVar0);
label_cond_f:
	//    .local v0, "v":I
	this->pos = ( this->pos + 0x4);
	return java::io::Bits::getInt(this->buf, this->pos);
	// 2907    .line 2836
	// 2908    .end local v0    # "v":I
label_cond_1e:
	if ( (this->end -  this->pos) >= cVar0 )
		goto label_cond_f;
	return this->din->readInt();

}
// .method readInts([III)V
void java::io::ObjectInputStream_S_BlockDataInputStream::readInts(std::shared_ptr<int[]> v,int off,int len)
{
	
	int cVar0;
	int endoff;
	int off;
	int span;
	
	//    .param p1, "v"    # [I
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2934        value = {
	// 2935            Ljava/io/IOException;
	// 2936        }
	// 2937    .end annotation
	cVar0 = 0x0;
	endoff = (off + len);
	//    .local v0, "endoff":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v1, "off":I
label_cond_4:
label_goto_4:
	if ( off >= endoff )
		goto label_cond_56;
	if ( this->blkmode )     
		goto label_cond_35;
	span = java::lang::Math::min((endoff - off), 0x100);
	//    .local v2, "span":I
	this->in->readFully(this->buf, cVar0, ( span << 0x2));
	//    .local v3, "stop":I
	this->pos = cVar0;
	//    .end local v2    # "span":I
label_goto_1f:
	if ( off >= stop )
		goto label_cond_4;
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	v[off] = java::io::Bits::getInt(this->buf, this->pos);
	this->pos = ( this->pos + 0x4);
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_1f;
	// 3019    .line 2970
	// 3020    .end local v3    # "stop":I
label_cond_35:
	if ( (this->end -  this->pos) >= 0x4 )
		goto label_cond_49;
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	v[off] = this->din->readInt();
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_4;
	// 3052    .line 2974
label_cond_49:
	//    .restart local v3    # "stop":I
	goto label_goto_1f;
	// 3071    .line 2982
	// 3072    .end local v3    # "stop":I
label_cond_56:
	return;

}
// .method public readLine()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectInputStream_S_BlockDataInputStream::readLine()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3080        value = {
	// 3081            Ljava/io/IOException;
	// 3082        }
	// 3083    .end annotation
	return this->din->readLine();

}
// .method public readLong()J
long long java::io::ObjectInputStream_S_BlockDataInputStream::readLong()
{
	
	int cVar0;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3099        value = {
	// 3100            Ljava/io/IOException;
	// 3101        }
	// 3102    .end annotation
	cVar0 = 0x8;
	cVar1 = 0x0;
	if ( this->blkmode )     
		goto label_cond_1f;
	this->pos = cVar1;
	this->in->readFully(this->buf, cVar1, cVar0);
label_cond_10:
	//    .local v0, "v":J
	this->pos = ( this->pos + 0x8);
	return java::io::Bits::getLong(this->buf, this->pos);
	// 3145    .line 2860
	// 3146    .end local v0    # "v":J
label_cond_1f:
	if ( (this->end -  this->pos) >= cVar0 )
		goto label_cond_10;
	return this->din->readLong();

}
// .method readLongUTF()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectInputStream_S_BlockDataInputStream::readLongUTF()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3169        value = {
	// 3170            Ljava/io/IOException;
	// 3171        }
	// 3172    .end annotation
	return this->readUTFBody(this->readLong());

}
// .method readLongs([JII)V
void java::io::ObjectInputStream_S_BlockDataInputStream::readLongs(std::shared_ptr<long long[]> v,int off,int len)
{
	
	int cVar0;
	int endoff;
	int off;
	int span;
	
	//    .param p1, "v"    # [J
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 3193        value = {
	// 3194            Ljava/io/IOException;
	// 3195        }
	// 3196    .end annotation
	cVar0 = 0x0;
	endoff = (off + len);
	//    .local v0, "endoff":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v1, "off":I
label_cond_4:
label_goto_4:
	if ( off >= endoff )
		goto label_cond_57;
	if ( this->blkmode )     
		goto label_cond_35;
	span = java::lang::Math::min((endoff - off), 0x80);
	//    .local v2, "span":I
	this->in->readFully(this->buf, cVar0, ( span << 0x3));
	//    .local v3, "stop":I
	this->pos = cVar0;
	//    .end local v2    # "span":I
label_goto_1f:
	if ( off >= stop )
		goto label_cond_4;
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	v[off] = java::io::Bits::getLong(this->buf, this->pos);
	this->pos = ( this->pos + 0x8);
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_1f;
	// 3278    .line 3012
	// 3279    .end local v3    # "stop":I
label_cond_35:
	if ( (this->end -  this->pos) >= 0x8 )
		goto label_cond_4a;
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	v[off] = this->din->readLong();
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_4;
	// 3311    .line 3016
label_cond_4a:
	//    .restart local v3    # "stop":I
	goto label_goto_1f;
	// 3330    .line 3024
	// 3331    .end local v3    # "stop":I
label_cond_57:
	return;

}
// .method public readShort()S
short java::io::ObjectInputStream_S_BlockDataInputStream::readShort()
{
	
	int cVar0;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3339        value = {
	// 3340            Ljava/io/IOException;
	// 3341        }
	// 3342    .end annotation
	cVar0 = 0x2;
	cVar1 = 0x0;
	if ( this->blkmode )     
		goto label_cond_1e;
	this->pos = cVar1;
	this->in->readFully(this->buf, cVar1, cVar0);
label_cond_f:
	//    .local v0, "v":S
	this->pos = ( this->pos + 0x2);
	return java::io::Bits::getShort(this->buf, this->pos);
	// 3385    .line 2812
	// 3386    .end local v0    # "v":S
label_cond_1e:
	if ( (this->end -  this->pos) >= cVar0 )
		goto label_cond_f;
	return this->din->readShort();

}
// .method readShorts([SII)V
void java::io::ObjectInputStream_S_BlockDataInputStream::readShorts(std::shared_ptr<short[]> v,int off,int len)
{
	
	int cVar0;
	int endoff;
	int off;
	int span;
	
	//    .param p1, "v"    # [S
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 3412        value = {
	// 3413            Ljava/io/IOException;
	// 3414        }
	// 3415    .end annotation
	cVar0 = 0x0;
	endoff = (off + len);
	//    .local v0, "endoff":I
	off = off;
	//    .end local p2    # "off":I
	//    .local v1, "off":I
label_cond_4:
label_goto_4:
	if ( off >= endoff )
		goto label_cond_56;
	if ( this->blkmode )     
		goto label_cond_35;
	span = java::lang::Math::min((endoff - off), 0x200);
	//    .local v2, "span":I
	this->in->readFully(this->buf, cVar0, ( span << 0x1));
	//    .local v3, "stop":I
	this->pos = cVar0;
	//    .end local v2    # "span":I
label_goto_1f:
	if ( off >= stop )
		goto label_cond_4;
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	v[off] = java::io::Bits::getShort(this->buf, this->pos);
	this->pos = ( this->pos + 0x2);
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_1f;
	// 3497    .line 2948
	// 3498    .end local v3    # "stop":I
label_cond_35:
	if ( (this->end -  this->pos) >= 0x2 )
		goto label_cond_49;
	//    .end local v1    # "off":I
	//    .restart local p2    # "off":I
	v[off] = this->din->readShort();
	off = ( off + 0x1);
	//    .end local p2    # "off":I
	//    .restart local v1    # "off":I
	goto label_goto_4;
	// 3530    .line 2952
label_cond_49:
	//    .restart local v3    # "stop":I
	goto label_goto_1f;
	// 3549    .line 2960
	// 3550    .end local v3    # "stop":I
label_cond_56:
	return;

}
// .method public readUTF()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectInputStream_S_BlockDataInputStream::readUTF()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3558        value = {
	// 3559            Ljava/io/IOException;
	// 3560        }
	// 3561    .end annotation
	return this->readUTFBody((long long)(this->readUnsignedShort()));

}
// .method public readUnsignedByte()I
int java::io::ObjectInputStream_S_BlockDataInputStream::readUnsignedByte()
{
	
	int v;
	std::shared_ptr<java::io::EOFException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3581        value = {
	// 3582            Ljava/io/IOException;
	// 3583        }
	// 3584    .end annotation
	v = this->read();
	//    .local v0, "v":I
	if ( v >= 0 )
		goto label_cond_c;
	cVar0 = std::make_shared<java::io::EOFException>();
	// throw
	throw cVar0;
	// 3603    .line 2793
label_cond_c:
	return v;

}
// .method public readUnsignedShort()I
int java::io::ObjectInputStream_S_BlockDataInputStream::readUnsignedShort()
{
	
	int cVar0;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3611        value = {
	// 3612            Ljava/io/IOException;
	// 3613        }
	// 3614    .end annotation
	cVar0 = 0x2;
	cVar1 = 0x0;
	if ( this->blkmode )     
		goto label_cond_23;
	this->pos = cVar1;
	this->in->readFully(this->buf, cVar1, cVar0);
label_cond_f:
	//    .local v0, "v":I
	this->pos = ( this->pos + 0x2);
	return (java::io::Bits::getShort(this->buf, this->pos) & 0xffff);
	// 3661    .line 2824
	// 3662    .end local v0    # "v":I
label_cond_23:
	if ( (this->end -  this->pos) >= cVar0 )
		goto label_cond_f;
	return this->din->readUnsignedShort();

}
// .method setBlockDataMode(Z)Z
bool java::io::ObjectInputStream_S_BlockDataInputStream::setBlockDataMode(bool newmode)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	
	//    .param p1, "newmode"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 3686        value = {
	// 3687            Ljava/io/IOException;
	// 3688        }
	// 3689    .end annotation
	cVar0 = 0x0;
	if ( this->blkmode != newmode )
		goto label_cond_8;
	return this->blkmode;
	// 3704    .line 2433
label_cond_8:
	if ( !(newmode) )  
		goto label_cond_17;
	this->pos = cVar0;
	this->end = cVar0;
	this->unread = cVar0;
label_cond_10:
	this->blkmode = newmode;
	return ( this->blkmode ^ 0x1);
	// 3728    .line 2437
label_cond_17:
	if ( this->pos >= this->end )
		goto label_cond_10;
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unread block data")));
	// throw
	throw cVar1;

}
// .method public skip(J)J
long long java::io::ObjectInputStream_S_BlockDataInputStream::skip(long long len)
{
	
	long long remain;
	int nread;
	
	//    .param p1, "len"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 3750        value = {
	// 3751            Ljava/io/IOException;
	// 3752        }
	// 3753    .end annotation
	remain = len;
	//    .local v2, "remain":J
label_goto_2:
	if ( (remain > 0x0) <= 0 )
		goto label_cond_19;
	if ( !(this->blkmode) )  
		goto label_cond_2f;
	if ( this->pos != this->end )
		goto label_cond_15;
	this->refill();
label_cond_15:
	if ( this->end >= 0 )
		goto label_cond_1c;
label_cond_19:
	return (len - remain);
	// 3797    .line 2654
label_cond_1c:
	nread = (int)(java::lang::Math::min(remain, (long long)((this->end -  this->pos))));
	//    .local v0, "nread":I
	remain = (remain -  (long long)(nread));
	this->pos = (this->pos +  nread);
	goto label_goto_2;
	// 3828    .line 2658
	// 3829    .end local v0    # "nread":I
label_cond_2f:
	//    .restart local v0    # "nread":I
	nread = this->in->read(this->buf, 0x0, (int)(java::lang::Math::min(remain, 0x400)));
	if ( nread < 0 ) 
		goto label_cond_19;
	remain = (remain -  (long long)(nread));
	goto label_goto_2;

}
// .method skipBlockData()V
void java::io::ObjectInputStream_S_BlockDataInputStream::skipBlockData()
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3862        value = {
	// 3863            Ljava/io/IOException;
	// 3864        }
	// 3865    .end annotation
	if ( this->blkmode )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not in block data mode")));
	// throw
	throw cVar0;
	// 3882    .line 2461
label_cond_d:
label_goto_d:
	if ( this->end < 0 ) 
		goto label_cond_15;
	this->refill();
	goto label_goto_d;
	// 3894    .line 2464
label_cond_15:
	return;

}
// .method public skipBytes(I)I
int java::io::ObjectInputStream_S_BlockDataInputStream::skipBytes(int n)
{
	
	//    .param p1, "n"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 3903        value = {
	// 3904            Ljava/io/IOException;
	// 3905        }
	// 3906    .end annotation
	return this->din->skipBytes(n);

}


