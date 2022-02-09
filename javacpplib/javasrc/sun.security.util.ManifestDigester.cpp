// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\ManifestDigester.smali
#include "java2ctype.h"
#include "java.io.ByteArrayOutputStream.h"
#include "java.io.UnsupportedEncodingException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.MessageDigest.h"
#include "java.util.HashMap.h"
#include "sun.security.util.ManifestDigester_S_Entry.h"
#include "sun.security.util.ManifestDigester_S_Position.h"
#include "sun.security.util.ManifestDigester.h"

static sun::security::util::ManifestDigester::MF_MAIN_ATTRS = std::make_shared<java::lang::String>("Manifest-Main-Attributes");
// .method public constructor <init>([B)V
sun::security::util::ManifestDigester::ManifestDigester(std::shared_ptr<unsigned char[]> bytes)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<sun::security::util::ManifestDigester_S_Position> pos;
	std::shared_ptr<sun::security::util::ManifestDigester_S_Entry> cVar1;
	int start;
	int len;
	int sectionLen;
	std::shared_ptr<java::lang::StringBuilder> nameBuf;
	std::shared_ptr<java::lang::IllegalStateException> cVar5;
	std::shared_ptr<java::lang::String> cVar2;
	int i;
	int wrapStart;
	std::shared_ptr<java::lang::String> cVar3;
	std::shared_ptr<sun::security::util::ManifestDigester_S_Entry> cVar4;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "bytes"    # [B
	// 042    invoke-direct/range {p0 .. p0}, Ljava/lang/Object;-><init>()V
	this->rawBytes = bytes;
	cVar0 = std::make_shared<java::util::HashMap>();
	this->entries = cVar0;
	baos = new java::io::ByteArrayOutputStream();
	//    .local v5, "baos":Ljava/io/ByteArrayOutputStream;
	pos = std::make_shared<sun::security::util::ManifestDigester_S_Position>();
	//    .local v10, "pos":Lsun/security/util/ManifestDigester$Position;
	if ( this->findSection(0x0, pos) )     
		goto label_cond_2b;
	return;
	// 090    .line 123
label_cond_2b:
	var31 = cVar1(0x0, ( pos->endOfSection + 0x1), pos->startOfNext, this->rawBytes);
	this->entries->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("Manifest-Main-Attributes")), cVar1);
	start = pos->startOfNext;
	//    .local v13, "start":I
label_goto_5a:
	if ( !(this->findSection(start, pos)) )  
		goto label_cond_14f;
	len = ( (pos->endOfFirstLine - start) + 0x1);
	//    .local v8, "len":I
	sectionLen = ( (pos->endOfSection - start) + 0x1);
	//    .local v11, "sectionLen":I
	//    .local v12, "sectionLenWithBlank":I
	if ( len <= 0x6 )
		goto label_cond_141;
	if ( !(this->isNameAttr(bytes, start)) )  
		goto label_cond_141;
	nameBuf = std::make_shared<java::lang::StringBuilder>(sectionLen);
	//    .local v9, "nameBuf":Ljava/lang/StringBuilder;
	try {
	//label_try_start_8d:
	var65 = cVar2(bytes, ( start + 0x6), ( len + -0x6), std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF8")));
	nameBuf->append(cVar2);
	i = (start + len);
	//    .local v6, "i":I
	if ( (i - start) >= sectionLen )
		goto label_cond_11d;
	if ( bytes[i] != 0xd )
		goto label_cond_e6;
	i = ( i + 0x2);
	//    .end local v6    # "i":I
	//    .local v7, "i":I
label_goto_bd:
	if ( (i - start) >= sectionLen )
		goto label_cond_124;
	i = ( i + 0x1);
	//    .end local v7    # "i":I
	//    .restart local v6    # "i":I
	if ( bytes[i] != 0x20 )
		goto label_cond_125;
	wrapStart = i;
	//    .local v16, "wrapStart":I
	i = i;
	//    .end local v6    # "i":I
	//    .restart local v7    # "i":I
label_goto_d2:
	if ( (i - start) >= sectionLen )
		goto label_cond_ea;
	i = ( i + 0x1);
	//    .end local v7    # "i":I
	//    .restart local v6    # "i":I
	if ( bytes[i] == 0xa )
		goto label_cond_eb;
	i = i;
	//    .end local v6    # "i":I
	//    .restart local v7    # "i":I
	goto label_goto_d2;
	// 318    .line 145
	// 319    .end local v7    # "i":I
	// 320    .end local v16    # "wrapStart":I
	// 321    .restart local v6    # "i":I
label_cond_e6:
	i = ( i + 0x1);
	//    .end local v6    # "i":I
	//    .restart local v7    # "i":I
	goto label_goto_bd;
	// 331    .restart local v16    # "wrapStart":I
label_cond_ea:
	i = i;
	//    .end local v7    # "i":I
	//    .restart local v6    # "i":I
label_cond_eb:
	if ( bytes[( i + -0x1)] == 0xa )
		goto label_cond_f8;
	return;
	// 354    .line 158
label_cond_f8:
	if ( bytes[( i + -0x2)] != 0xd )
		goto label_cond_11f;
	//    .local v15, "wrapLen":I
label_goto_108:
	var116 = cVar3(bytes, wrapStart, wrapLen, std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF8")));
	nameBuf->append(cVar3);
	//    .end local v15    # "wrapLen":I
	//    .end local v16    # "wrapStart":I
label_cond_11d:
	i = i;
	//    .end local v6    # "i":I
	//    .restart local v7    # "i":I
	goto label_goto_bd;
	// 405    .line 161
	// 406    .end local v7    # "i":I
	// 407    .restart local v6    # "i":I
	// 408    .restart local v16    # "wrapStart":I
label_cond_11f:
	//    .restart local v15    # "wrapLen":I
	goto label_goto_108;
	// 417    .end local v6    # "i":I
	// 418    .end local v15    # "wrapLen":I
	// 419    .end local v16    # "wrapStart":I
	// 420    .restart local v7    # "i":I
label_cond_124:
	i;
	//    .end local v7    # "i":I
	//    .restart local v6    # "i":I
label_cond_125:
	var136 = cVar4(start, sectionLen, (pos->startOfNext - start), this->rawBytes);
	this->entries->put(nameBuf->toString(), cVar4);
	//label_try_end_141:
	}
	catch (java::io::UnsupportedEncodingException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_145;
	}
	//    .catch Ljava/io/UnsupportedEncodingException; {:try_start_8d .. :try_end_141} :catch_145
	//    .end local v6    # "i":I
	//    .end local v9    # "nameBuf":Ljava/lang/StringBuilder;
label_cond_141:
	start = pos->startOfNext;
	goto label_goto_5a;
	// 468    .line 174
	// 469    .restart local v9    # "nameBuf":Ljava/lang/StringBuilder;
label_catch_145:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v14, "uee":Ljava/io/UnsupportedEncodingException;
	cVar5 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF8 not available on platform")));
	// throw
	throw cVar5;
	// 485    .line 182
	// 486    .end local v8    # "len":I
	// 487    .end local v9    # "nameBuf":Ljava/lang/StringBuilder;
	// 488    .end local v11    # "sectionLen":I
	// 489    .end local v12    # "sectionLenWithBlank":I
	// 490    .end local v14    # "uee":Ljava/io/UnsupportedEncodingException;
label_cond_14f:
	return;

}
// .method private findSection(ILsun/security/util/ManifestDigester$Position;)Z
bool sun::security::util::ManifestDigester::findSection(int offset,std::shared_ptr<sun::security::util::ManifestDigester_S_Position> pos)
{
	
	int cVar0;
	int i;
	int len;
	int allBlank;
	
	//    .param p1, "offset"    # I
	//    .param p2, "pos"    # Lsun/security/util/ManifestDigester$Position;
	cVar0 = -0x1;
	i = offset;
	//    .local v2, "i":I
	len = this->rawBytes->size();
	//    .local v4, "len":I
	//    .local v3, "last":I
	allBlank = 0x1;
	//    .local v0, "allBlank":Z
	pos->endOfFirstLine = cVar0;
label_goto_9:
	if ( i >= len )
		goto label_cond_4c;
	//    .local v1, "b":B
	// switch
	{
	auto item = ( this->rawBytes[i] );
	if (item == 10) goto label_pswitch_2c;
	if (item == 11) goto label_pswitch_12;
	if (item == 12) goto label_pswitch_12;
	if (item == 13) goto label_pswitch_16;
	}
label_pswitch_12:
	0x0;
label_goto_13:
	i = ( i + 0x1);
	goto label_goto_9;
	// 546    .line 79
label_pswitch_16:
	if ( pos->endOfFirstLine != cVar0 )
		goto label_cond_1e;
	pos->endOfFirstLine = ( i + -0x1);
label_cond_1e:
	if ( i >= len )
		goto label_cond_2c;
	if ( this->rawBytes[( i + 0x1)] != 0xa )
		goto label_cond_2c;
	i = ( i + 0x1);
label_cond_2c:
label_pswitch_2c:
	if ( pos->endOfFirstLine != cVar0 )
		goto label_cond_34;
	pos->endOfFirstLine = ( i + -0x1);
label_cond_34:
	if ( allBlank )     
		goto label_cond_3a;
	if ( i != ( len + -0x1) )
		goto label_cond_49;
label_cond_3a:
	if ( i != ( len + -0x1) )
		goto label_cond_46;
	pos->endOfSection = i;
label_goto_40:
	pos->startOfNext = ( i + 0x1);
	return 0x1;
	// 614    .line 91
label_cond_46:
	pos->endOfSection = offset;
	goto label_goto_40;
	// 620    .line 97
label_cond_49:
	i;
	allBlank = 0x1;
	goto label_goto_13;
	// 630    .line 107
	// 631    .end local v1    # "b":B
label_cond_4c:
	return 0x0;
	// 637    .line 77
	// 638    :pswitch_data_4e
	// 639    .packed-switch 0xa
	// 640        :pswitch_2c
	// 641        :pswitch_12
	// 642        :pswitch_12
	// 643        :pswitch_16
	// 644    .end packed-switch

}
// .method private isNameAttr([BI)Z
bool sun::security::util::ManifestDigester::isNameAttr(std::shared_ptr<unsigned char[]> bytes,int start)
{
	
	bool cVar1;
	
	//    .param p1, "bytes"    # [B
	//    .param p2, "start"    # I
	cVar1 = 0x0;
	if ( bytes[start] == 0x4e )
		goto label_cond_d;
	if ( bytes[start] != 0x6e )
		goto label_cond_4e;
label_cond_d:
	if ( bytes[( start + 0x1)] == 0x61 )
		goto label_cond_1d;
	if ( bytes[( start + 0x1)] != 0x41 )
		goto label_cond_4e;
label_cond_1d:
	if ( bytes[( start + 0x2)] == 0x6d )
		goto label_cond_2d;
	if ( bytes[( start + 0x2)] != 0x4d )
		goto label_cond_4e;
label_cond_2d:
	if ( bytes[( start + 0x3)] == 0x65 )
		goto label_cond_3d;
	if ( bytes[( start + 0x3)] != 0x45 )
		goto label_cond_4e;
label_cond_3d:
	if ( bytes[( start + 0x4)] != 0x3a )
		goto label_cond_4e;
	if ( bytes[( start + 0x5)] != 0x20 )
		goto label_cond_4e;
	cVar1 = 0x1;
label_cond_4e:
	return cVar1;

}
// .method public get(Ljava/lang/String;Z)Lsun/security/util/ManifestDigester$Entry;
std::shared_ptr<sun::security::util::ManifestDigester_S_Entry> sun::security::util::ManifestDigester::get(std::shared_ptr<java::lang::String> name,bool oldStyle)
{
	
	std::shared_ptr<sun::security::util::ManifestDigester_S_Entry> e;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "oldStyle"    # Z
	e = this->entries->get(name);
	e->checkCast("sun::security::util::ManifestDigester_S_Entry");
	//    .local v0, "e":Lsun/security/util/ManifestDigester$Entry;
	if ( !(e) )  
		goto label_cond_c;
	e->oldStyle = oldStyle;
label_cond_c:
	return e;

}
// .method public manifestDigest(Ljava/security/MessageDigest;)[B
unsigned char sun::security::util::ManifestDigester::manifestDigest(std::shared_ptr<java::security::MessageDigest> md)
{
	
	//    .param p1, "md"    # Ljava/security/MessageDigest;
	md->reset();
	md->update(this->rawBytes, 0x0, this->rawBytes->size());
	return md->digest();

}


