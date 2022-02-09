// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\ObjectIdentifier.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Exception.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.math.BigInteger.h"
#include "java.util.Arrays.h"
#include "sun.security.util.DerInputBuffer.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.ObjectIdentifier_S_HugeOidNotSupportedByOldJDK.h"
#include "sun.security.util.ObjectIdentifier.h"

static sun::security::util::ObjectIdentifier::_assertionsDisabled;
static sun::security::util::ObjectIdentifier::serialVersionUID = 0x78b20eec64177f2eL;
// .method static constructor <clinit>()V
void sun::security::util::ObjectIdentifier::static_cinit()
{
	
	sun::security::util::ObjectIdentifier::_assertionsDisabled = ( sun::security::util::ObjectIdentifier()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
sun::security::util::ObjectIdentifier::ObjectIdentifier(std::shared_ptr<java::lang::String> oid)
{
	
	int start;
	int pos;
	std::shared<std::vector<unsigned char[]>> tmp;
	int first;
	int count;
	int length;
	std::shared_ptr<java::lang::Exception> e;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int end;
	std::shared_ptr<java::lang::String> comp;
	std::shared_ptr<java::math::BigInteger> bignum;
	std::vector<std::any> tryCatchExcetionList;
	int num;
	
	//    .param p1, "oid"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 058        value = {
	// 059            Ljava/io/IOException;
	// 060        }
	// 061    .end annotation
	// 065    invoke-direct/range {p0 .. p0}, Ljava/lang/Object;-><init>()V
	this->encoding = 0x0;
	this->components = 0x0;
	this->componentLen = -0x1;
	this->componentsCalculated = 0x0;
	//    .local v3, "ch":I
	start = 0x0;
	//    .local v13, "start":I
	0x0;
	//    .local v7, "end":I
	pos = 0x0;
	//    .local v12, "pos":I
	tmp = std::make_shared<std::vector<unsigned char[]>>(oid->length());
	//    .local v14, "tmp":[B
	first = 0x0;
	//    .local v8, "first":I
	count = 0x0;
	//    .local v5, "count":I
	0x0;
label_cond_25:
	length = 0x0;
	//    .local v10, "length":I
	try {
	//label_try_start_26:
	end = oid->indexOf(0x2e, start);
	if ( end != -0x1 )
		goto label_cond_73;
	comp = oid->substring(start);
	//    .local v4, "comp":Ljava/lang/String;
	length = (oid->length() - start);
label_goto_3b:
	if ( length <= 0x9 )
		goto label_cond_9b;
	bignum = std::make_shared<java::math::BigInteger>(comp);
	//    .local v2, "bignum":Ljava/math/BigInteger;
	if ( count )     
		goto label_cond_7c;
	sun::security::util::ObjectIdentifier::checkFirstComponent(bignum);
	bignum->intValue();
	//    .end local v2    # "bignum":Ljava/math/BigInteger;
label_goto_4d:
	start = ( end + 0x1);
	count = ( count + 0x1);
	if ( end != -0x1 )
		goto label_cond_25;
	sun::security::util::ObjectIdentifier::checkCount(count);
	this->encoding = std::make_shared<std::vector<unsigned char[]>>(pos);
	java::lang::System::arraycopy(tmp, 0x0, this->encoding, 0x0, pos);
	this->stringForm = oid;
	return;
	// 234    .line 162
	// 235    .end local v4    # "comp":Ljava/lang/String;
label_cond_73:
	//    .restart local v4    # "comp":Ljava/lang/String;
	length = (end - start);
	goto label_goto_3b;
	// 249    .line 172
	// 250    .restart local v2    # "bignum":Ljava/math/BigInteger;
label_cond_7c:
	if ( count != 0x1 )
		goto label_cond_95;
	sun::security::util::ObjectIdentifier::checkSecondComponent(first, bignum);
label_goto_8f:
	pos = (pos +  sun::security::util::ObjectIdentifier::pack7Oid(bignum, tmp, pos));
	goto label_goto_4d;
	// 284    .line 176
label_cond_95:
	sun::security::util::ObjectIdentifier::checkOtherComponent(count, bignum);
	//label_try_end_98:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_99;
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b9;
	}
	//    .catch Ljava/io/IOException; {:try_start_26 .. :try_end_98} :catch_99
	//    .catch Ljava/lang/Exception; {:try_start_26 .. :try_end_98} :catch_b9
	goto label_goto_8f;
	// 293    .line 203
	// 294    .end local v2    # "bignum":Ljava/math/BigInteger;
	// 295    .end local v4    # "comp":Ljava/lang/String;
label_catch_99:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v9, "ioe":Ljava/io/IOException;
	// throw
	throw;
	// 303    .line 181
	// 304    .end local v9    # "ioe":Ljava/io/IOException;
	// 305    .restart local v4    # "comp":Ljava/lang/String;
label_cond_9b:
	try {
	//label_try_start_9b:
	num = java::lang::Integer::parseInt(comp);
	//    .local v11, "num":I
	if ( count )     
		goto label_cond_a6;
	sun::security::util::ObjectIdentifier::checkFirstComponent(num);
	num;
	goto label_goto_4d;
	// 324    .line 186
label_cond_a6:
	if ( count != 0x1 )
		goto label_cond_b5;
	sun::security::util::ObjectIdentifier::checkSecondComponent(first, num);
label_goto_af:
	pos = (pos +  sun::security::util::ObjectIdentifier::pack7Oid(num, tmp, pos));
	goto label_goto_4d;
	// 348    .line 190
label_cond_b5:
	sun::security::util::ObjectIdentifier::checkOtherComponent(count, num);
	//label_try_end_b8:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_99;
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b9;
	}
	//    .catch Ljava/io/IOException; {:try_start_9b .. :try_end_b8} :catch_99
	//    .catch Ljava/lang/Exception; {:try_start_9b .. :try_end_b8} :catch_b9
	goto label_goto_af;
	// 357    .line 205
	// 358    .end local v4    # "comp":Ljava/lang/String;
	// 359    .end local v11    # "num":I
label_catch_b9:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v6, "e":Ljava/lang/Exception;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectIdentifier() -- Invalid format: ")))->append(e->toString())->toString(), e);
	// throw
	throw cVar0;

}
// .method constructor <init>(Lsun/security/util/DerInputBuffer;)V
sun::security::util::ObjectIdentifier::ObjectIdentifier(std::shared_ptr<sun::security::util::DerInputBuffer> buf)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<sun::security::util::DerInputStream> in;
	
	//    .param p1, "buf"    # Lsun/security/util/DerInputBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 402        value = {
	// 403            Ljava/io/IOException;
	// 404        }
	// 405    .end annotation
	cVar0 = 0x0;
	// 411    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->encoding = cVar0;
	this->components = cVar0;
	this->componentLen = -0x1;
	this->componentsCalculated = 0x0;
	in = std::make_shared<sun::security::util::DerInputStream>(buf);
	//    .local v0, "in":Lsun/security/util/DerInputStream;
	this->encoding = std::make_shared<std::vector<unsigned char[]>>(in->available());
	in->getBytes(this->encoding);
	sun::security::util::ObjectIdentifier::check(this->encoding);
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::util::ObjectIdentifier::ObjectIdentifier(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	int type_id;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	int len;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 462        value = {
	// 463            Ljava/io/IOException;
	// 464        }
	// 465    .end annotation
	cVar0 = 0x0;
	// 471    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->encoding = cVar0;
	this->components = cVar0;
	this->componentLen = -0x1;
	this->componentsCalculated = 0x0;
	type_id = (unsigned char)(in->getByte());
	//    .local v1, "type_id":B
	if ( type_id == 0x6 )
		goto label_cond_37;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectIdentifier() -- data isn\'t an object ID (tag = ")))->append(type_id)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
	// throw
	throw cVar1;
	// 537    .line 258
label_cond_37:
	len = in->getLength();
	//    .local v0, "len":I
	if ( len <= in->available() )
		goto label_cond_6a;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::io::IOException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectIdentifier() -- length exceedsdata available.  Length: ")))->append(len)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", Available: ")))->append(in->available())->toString());
	// throw
	throw cVar3;
	// 594    .line 264
label_cond_6a:
	this->encoding = std::make_shared<std::vector<unsigned char[]>>(len);
	in->getBytes(this->encoding);
	sun::security::util::ObjectIdentifier::check(this->encoding);
	return;

}
// .method public constructor <init>([I)V
sun::security::util::ObjectIdentifier::ObjectIdentifier(std::shared_ptr<int[]> values)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	bool cVar1;
	int i;
	
	//    .param p1, "values"    # [I
	//    .annotation system Ldalvik/annotation/Throws;
	// 618        value = {
	// 619            Ljava/io/IOException;
	// 620        }
	// 621    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 629    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->encoding = cVar0;
	this->components = cVar0;
	this->componentLen = -0x1;
	this->componentsCalculated = cVar1;
	sun::security::util::ObjectIdentifier::checkCount(values->size());
	sun::security::util::ObjectIdentifier::checkFirstComponent(values[cVar1]);
	sun::security::util::ObjectIdentifier::checkSecondComponent(values[cVar1], values[0x1]);
	i = 0x2;
	//    .local v0, "i":I
label_goto_20:
	if ( i >= values->size() )
		goto label_cond_2b;
	sun::security::util::ObjectIdentifier::checkOtherComponent(i, values[i]);
	i = ( i + 0x1);
	goto label_goto_20;
	// 683    .line 222
label_cond_2b:
	this->init(values, values->size());
	return;

}
// .method private static check([B)V
void sun::security::util::ObjectIdentifier::check(std::shared_ptr<unsigned char[]> encoding)
{
	
	int length;
	std::shared_ptr<java::io::IOException> cVar0;
	int i;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p0, "encoding"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 697        value = {
	// 698            Ljava/io/IOException;
	// 699        }
	// 700    .end annotation
	length = encoding->size();
	//    .local v1, "length":I
	if ( length <  0x1 )
		goto label_cond_c;
	if ( !(( encoding[( length + -0x1)] & 0x80)) )  
		goto label_cond_15;
label_cond_c:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectIdentifier() -- Invalid DER encoding, not ended")));
	// throw
	throw cVar0;
	// 731    .line 615
label_cond_15:
	i = 0x0;
	//    .local v0, "i":I
label_goto_16:
	if ( i >= length )
		goto label_cond_34;
	if ( encoding[i] != -0x80 )
		goto label_cond_31;
	if ( !(i) )  
		goto label_cond_28;
	if ( ( encoding[( i + -0x1)] & 0x80) )     
		goto label_cond_31;
label_cond_28:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectIdentifier() -- Invalid DER encoding, useless extra octet detected")));
	// throw
	throw cVar1;
	// 767    .line 615
label_cond_31:
	i = ( i + 0x1);
	goto label_goto_16;
	// 773    .line 623
label_cond_34:
	return;

}
// .method private static checkCount(I)V
void sun::security::util::ObjectIdentifier::checkCount(int count)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p0, "count"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 782        value = {
	// 783            Ljava/io/IOException;
	// 784        }
	// 785    .end annotation
	if ( count >= 0x2 )
		goto label_cond_c;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectIdentifier() -- Must be at least two oid components ")));
	// throw
	throw cVar0;
	// 802    .line 629
label_cond_c:
	return;

}
// .method private static checkFirstComponent(I)V
void sun::security::util::ObjectIdentifier::checkFirstComponent(int first)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p0, "first"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 811        value = {
	// 812            Ljava/io/IOException;
	// 813        }
	// 814    .end annotation
	if ( first < 0 ) 
		goto label_cond_5;
	if ( first <= 0x2 )
		goto label_cond_e;
label_cond_5:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectIdentifier() -- First oid component is invalid ")));
	// throw
	throw cVar0;
	// 834    .line 635
label_cond_e:
	return;

}
// .method private static checkFirstComponent(Ljava/math/BigInteger;)V
void sun::security::util::ObjectIdentifier::checkFirstComponent(std::shared_ptr<java::math::BigInteger> first)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p0, "first"    # Ljava/math/BigInteger;
	//    .annotation system Ldalvik/annotation/Throws;
	// 843        value = {
	// 844            Ljava/io/IOException;
	// 845        }
	// 846    .end annotation
	if ( first->signum() == -0x1 )
		goto label_cond_14;
	if ( first->compareTo(java::math::BigInteger::valueOf(0x2)) != 0x1 )
		goto label_cond_1d;
label_cond_14:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectIdentifier() -- First oid component is invalid ")));
	// throw
	throw cVar0;
	// 883    .line 642
label_cond_1d:
	return;

}
// .method private static checkOtherComponent(II)V
void sun::security::util::ObjectIdentifier::checkOtherComponent(int i,int num)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "i"    # I
	//    .param p1, "num"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 893        value = {
	// 894            Ljava/io/IOException;
	// 895        }
	// 896    .end annotation
	if ( num >= 0 )
		goto label_cond_25;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectIdentifier() -- oid component #")))->append(( i + 0x1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" must be non-negative ")))->toString());
	// throw
	throw cVar0;
	// 939    .line 662
label_cond_25:
	return;

}
// .method private static checkOtherComponent(ILjava/math/BigInteger;)V
void sun::security::util::ObjectIdentifier::checkOtherComponent(int i,std::shared_ptr<java::math::BigInteger> num)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "i"    # I
	//    .param p1, "num"    # Ljava/math/BigInteger;
	//    .annotation system Ldalvik/annotation/Throws;
	// 949        value = {
	// 950            Ljava/io/IOException;
	// 951        }
	// 952    .end annotation
	if ( num->signum() != -0x1 )
		goto label_cond_2a;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectIdentifier() -- oid component #")))->append(( i + 0x1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" must be non-negative ")))->toString());
	// throw
	throw cVar0;
	// 1001    .line 668
label_cond_2a:
	return;

}
// .method private static checkSecondComponent(II)V
void sun::security::util::ObjectIdentifier::checkSecondComponent(int first,int second)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p0, "first"    # I
	//    .param p1, "second"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1011        value = {
	// 1012            Ljava/io/IOException;
	// 1013        }
	// 1014    .end annotation
	if ( second < 0 ) 
		goto label_cond_9;
	if ( first == 0x2 )
		goto label_cond_12;
	if ( second <= 0x27 )
		goto label_cond_12;
label_cond_9:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectIdentifier() -- Second oid component is invalid ")));
	// throw
	throw cVar0;
	// 1038    .line 648
label_cond_12:
	return;

}
// .method private static checkSecondComponent(ILjava/math/BigInteger;)V
void sun::security::util::ObjectIdentifier::checkSecondComponent(int first,std::shared_ptr<java::math::BigInteger> second)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p0, "first"    # I
	//    .param p1, "second"    # Ljava/math/BigInteger;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1048        value = {
	// 1049            Ljava/io/IOException;
	// 1050        }
	// 1051    .end annotation
	if ( second->signum() == -0x1 )
		goto label_cond_17;
	if ( first == 0x2 )
		goto label_cond_20;
	if ( second->compareTo(java::math::BigInteger::valueOf(0x27)) != 0x1 )
		goto label_cond_20;
label_cond_17:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectIdentifier() -- Second oid component is invalid ")));
	// throw
	throw cVar0;
	// 1093    .line 656
label_cond_20:
	return;

}
// .method private init([II)V
void sun::security::util::ObjectIdentifier::init(std::shared_ptr<int[]> components,int length)
{
	
	int cVar0;
	int cVar1;
	int pos;
	std::shared<std::vector<unsigned char[]>> tmp;
	int i;
	
	//    .param p1, "components"    # [I
	//    .param p2, "length"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	pos = 0x0;
	//    .local v2, "pos":I
	tmp = std::make_shared<std::vector<unsigned char[]>>(( ( length * 0x5) + 0x1));
	//    .local v3, "tmp":[B
	if ( components[cVar0] >= (0x7fffffff - ( components[cVar1] * 0x28)) )
		goto label_cond_30;
	pos = ( sun::security::util::ObjectIdentifier::pack7Oid((( components[cVar1] * 0x28) +  components[cVar0]), tmp, pos) + 0x0);
label_goto_23:
	i = 0x2;
	//    .local v1, "i":I
label_goto_24:
	if ( i >= length )
		goto label_cond_4b;
	pos = (pos +  sun::security::util::ObjectIdentifier::pack7Oid(components[i], tmp, pos));
	i = ( i + 0x1);
	goto label_goto_24;
	// 1170    .line 289
	// 1171    .end local v1    # "i":I
label_cond_30:
	//    .local v0, "big":Ljava/math/BigInteger;
	pos = ( sun::security::util::ObjectIdentifier::pack7Oid(java::math::BigInteger::valueOf((long long)(components[cVar0]))->add(java::math::BigInteger::valueOf((long long)(( components[cVar1] * 0x28)))), tmp, pos) + 0x0);
	goto label_goto_23;
	// 1206    .line 297
	// 1207    .end local v0    # "big":Ljava/math/BigInteger;
	// 1208    .restart local v1    # "i":I
label_cond_4b:
	this->encoding = std::make_shared<std::vector<unsigned char[]>>(pos);
	java::lang::System::arraycopy(tmp, cVar1, this->encoding, cVar1, pos);
	return;

}
// .method public static newInternal([I)Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::util::ObjectIdentifier::newInternal(std::shared_ptr<int[]> values)
{
	
	std::shared_ptr<java::lang::RuntimeException> cVar1;
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "values"    # [I
	try {
	//label_try_start_0:
	cVar0 = std::make_shared<sun::security::util::ObjectIdentifier>(values);
	//label_try_end_5:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_5} :catch_6
	return cVar0;
	// 1238    .line 313
label_catch_6:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/io/IOException;
	cVar1 = std::make_shared<java::lang::RuntimeException>(getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method private static pack([BIIII)[B
unsigned char sun::security::util::ObjectIdentifier::pack(std::shared_ptr<unsigned char[]> in,int ioffset,int ilength,int iw,int ow)
{
	
	int cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<unsigned char[]> cVar3;
	int bits;
	std::shared<std::vector<unsigned char[]>> out;
	int ipos;
	int opos;
	int count;
	int cVar4;
	
	//    .param p0, "in"    # [B
	//    .param p1, "ioffset"    # I
	//    .param p2, "ilength"    # I
	//    .param p3, "iw"    # I
	//    .param p4, "ow"    # I
	cVar0 = 0x8;
	if ( sun::security::util::ObjectIdentifier::_assertionsDisabled )     
		goto label_cond_13;
	if ( iw <= 0 )
		goto label_cond_a;
	if ( iw <= cVar0 )
		goto label_cond_13;
label_cond_a:
	cVar1 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("input NUB must be between 1 and 8")));
	// throw
	throw cVar1;
	// 1280    .line 503
label_cond_13:
	if ( sun::security::util::ObjectIdentifier::_assertionsDisabled )     
		goto label_cond_24;
	if ( ow <= 0 )
		goto label_cond_1b;
	if ( ow <= cVar0 )
		goto label_cond_24;
label_cond_1b:
	cVar2 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("output NUB must be between 1 and 8")));
	// throw
	throw cVar2;
	// 1299    .line 505
label_cond_24:
	if ( iw != ow )
		goto label_cond_2d;
	cVar3 = in->clone();
	cVar3->checkCast("unsigned char[]");
	return cVar3;
	// 1312    .line 509
label_cond_2d:
	bits = (ilength * iw);
	//    .local v0, "bits":I
	out = std::make_shared<std::vector<unsigned char[]>>((( (bits + ow) + -0x1) /  ow));
	//    .local v4, "out":[B
	ipos = 0x0;
	//    .local v2, "ipos":I
	opos = (((( (bits + ow) + -0x1) /  ow) *  ow) - bits);
	//    .local v3, "opos":I
label_goto_3f:
	if ( ipos >= bits )
		goto label_cond_72;
	count = (iw - (ipos % iw));
	//    .local v1, "count":I
	if ( count <= (ow - (opos % ow)) )
		goto label_cond_4f;
	count = (ow - (opos % ow));
label_cond_4f:
	cVar4 = (opos / ow);
	out[cVar4] = (unsigned char)((out[cVar4] |  ((_shri(( in[((ipos / iw) +  ioffset)] + 0x100),((iw - (ipos % iw)) -  count)) &  ( (0x1 << count) + -0x1)) << ((ow - (opos % ow)) -  count))));
	ipos = (ipos +  count);
	opos = (opos +  count);
	goto label_goto_3f;
	// 1425    .line 532
	// 1426    .end local v1    # "count":I
label_cond_72:
	return out;

}
// .method private static pack7Oid(I[BI)I
int sun::security::util::ObjectIdentifier::pack7Oid(int input,std::shared_ptr<unsigned char[]> out,int ooffset)
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<unsigned char[]>> b;
	
	//    .param p0, "input"    # I
	//    .param p1, "out"    # [B
	//    .param p2, "ooffset"    # I
	cVar0 = 0x4;
	cVar1 = 0x0;
	b = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	//    .local v0, "b":[B
	b[cVar1] = (unsigned char)(_shri(input,0x18));
	b[0x1] = (unsigned char)(_shri(input,0x10));
	b[0x2] = (unsigned char)(_shri(input,0x8));
	b[0x3] = (unsigned char)(input);
	return sun::security::util::ObjectIdentifier::pack7Oid(b, cVar1, cVar0, out, ooffset);

}
// .method private static pack7Oid(Ljava/math/BigInteger;[BI)I
int sun::security::util::ObjectIdentifier::pack7Oid(std::shared_ptr<java::math::BigInteger> input,std::shared_ptr<unsigned char[]> out,int ooffset)
{
	
	std::shared_ptr<unsigned char[]> b;
	
	//    .param p0, "input"    # Ljava/math/BigInteger;
	//    .param p1, "out"    # [B
	//    .param p2, "ooffset"    # I
	b = input->toByteArray();
	//    .local v0, "b":[B
	return sun::security::util::ObjectIdentifier::pack7Oid(b, 0x0, b->size(), out, ooffset);

}
// .method private static pack7Oid([BII[BI)I
int sun::security::util::ObjectIdentifier::pack7Oid(std::shared_ptr<unsigned char[]> in,int ioffset,int ilength,std::shared_ptr<unsigned char[]> out,int ooffset)
{
	
	std::shared_ptr<unsigned char[]> pack;
	int firstNonZero;
	int i;
	
	//    .param p0, "in"    # [B
	//    .param p1, "ioffset"    # I
	//    .param p2, "ilength"    # I
	//    .param p3, "out"    # [B
	//    .param p4, "ooffset"    # I
	pack = sun::security::util::ObjectIdentifier::pack(in, ioffset, ilength, 0x8, 0x7);
	//    .local v2, "pack":[B
	firstNonZero = ( pack->size() + -0x1);
	//    .local v0, "firstNonZero":I
	i = ( pack->size() + -0x2);
	//    .local v1, "i":I
label_goto_d:
	if ( i < 0 ) 
		goto label_cond_1e;
	if ( !(pack[i]) )  
		goto label_cond_14;
	i;
label_cond_14:
	pack[i] = (unsigned char)(( pack[i] | 0x80));
	i = ( i + -0x1);
	goto label_goto_d;
	// 1568    .line 553
label_cond_1e:
	java::lang::System::arraycopy(pack, firstNonZero, out, ooffset, (pack->size() -  firstNonZero));
	return (pack->size() -  firstNonZero);

}
// .method private static pack8([BII[BI)I
int sun::security::util::ObjectIdentifier::pack8(std::shared_ptr<unsigned char[]> in,int ioffset,int ilength,std::shared_ptr<unsigned char[]> out,int ooffset)
{
	
	std::shared_ptr<unsigned char[]> pack;
	int firstNonZero;
	int i;
	
	//    .param p0, "in"    # [B
	//    .param p1, "ioffset"    # I
	//    .param p2, "ilength"    # I
	//    .param p3, "out"    # [B
	//    .param p4, "ooffset"    # I
	pack = sun::security::util::ObjectIdentifier::pack(in, ioffset, ilength, 0x7, 0x8);
	//    .local v2, "pack":[B
	firstNonZero = ( pack->size() + -0x1);
	//    .local v0, "firstNonZero":I
	i = ( pack->size() + -0x2);
	//    .local v1, "i":I
label_goto_d:
	if ( i < 0 ) 
		goto label_cond_17;
	if ( !(pack[i]) )  
		goto label_cond_14;
	i;
label_cond_14:
	i = ( i + -0x1);
	goto label_goto_d;
	// 1632    .line 572
label_cond_17:
	java::lang::System::arraycopy(pack, firstNonZero, out, ooffset, (pack->size() -  firstNonZero));
	return (pack->size() -  firstNonZero);

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void sun::security::util::ObjectIdentifier::readObject(std::shared_ptr<java::io::ObjectInputStream> is)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "is"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1652        value = {
	// 1653            Ljava/io/IOException;,
	// 1654            Ljava/lang/ClassNotFoundException;
	// 1655        }
	// 1656    .end annotation
	is->defaultReadObject();
	if ( this->encoding )     
		goto label_cond_10;
	cVar0 = this->components;
	cVar0->checkCast("int[]");
	this->init(cVar0, this->componentLen);
label_cond_10:
	return;

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void sun::security::util::ObjectIdentifier::writeObject(std::shared_ptr<java::io::ObjectOutputStream> os)
{
	
	std::shared_ptr<java::lang::Object> comps;
	
	//    .param p1, "os"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1685        value = {
	// 1686            Ljava/io/IOException;
	// 1687        }
	// 1688    .end annotation
	if ( this->componentsCalculated )     
		goto label_cond_12;
	comps = this->toIntArray();
	//    .local v0, "comps":[I
	if ( !(comps) )  
		goto label_cond_16;
	this->components = comps;
	this->componentLen = comps->size();
label_goto_f:
	this->componentsCalculated = 0x1;
	//    .end local v0    # "comps":[I
label_cond_12:
	os->defaultWriteObject();
	return;
	// 1727    .line 126
	// 1728    .restart local v0    # "comps":[I
label_cond_16:
	this->components = sun::security::util::ObjectIdentifier_S_HugeOidNotSupportedByOldJDK::theOne;
	goto label_goto_f;

}
// .method encode(Lsun/security/util/DerOutputStream;)V
void sun::security::util::ObjectIdentifier::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1743        value = {
	// 1744            Ljava/io/IOException;
	// 1745        }
	// 1746    .end annotation
	out->write(0x6, this->encoding);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::util::ObjectIdentifier::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<sun::security::util::ObjectIdentifier> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 1773    .line 345
label_cond_4:
	if ( obj->instanceOf("sun::security::util::ObjectIdentifier") )     
		goto label_cond_a;
	return 0x0;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::util::ObjectIdentifier");
	//    .local v0, "other":Lsun/security/util/ObjectIdentifier;
	return java::util::Arrays::equals(this->encoding, other->encoding);

}
// .method public equals(Lsun/security/util/ObjectIdentifier;)Z
bool sun::security::util::ObjectIdentifier::equals(std::shared_ptr<sun::security::util::ObjectIdentifier> other)
{
	
	//    .param p1, "other"    # Lsun/security/util/ObjectIdentifier;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1807    .end annotation
	return this->equals(other);

}
// .method public hashCode()I
int sun::security::util::ObjectIdentifier::hashCode()
{
	
	return java::util::Arrays::hashCode(this->encoding);

}
// .method public toIntArray()[I
int sun::security::util::ObjectIdentifier::toIntArray()
{
	
	std::shared<std::vector<int[]>> result;
	int fromPos;
	int i;
	int which;
	std::shared_ptr<java::math::BigInteger> big;
	std::shared_ptr<java::math::BigInteger> second;
	std::shared_ptr<int[]> result;
	int retval;
	int j;
	
	//    .local v4, "length":I
	result = std::make_shared<std::vector<int[]>>(0x14);
	//    .local v5, "result":[I
	//    .local v9, "which":I
	fromPos = 0x0;
	//    .local v1, "fromPos":I
	i = 0x0;
	//    .local v2, "i":I
	which = 0x0;
	//    .end local v9    # "which":I
	//    .local v10, "which":I
label_goto_b:
	if ( i >= this->encoding->size() )
		goto label_cond_b6;
	if ( ( this->encoding[i] & 0x80) )     
		goto label_cond_bb;
	if ( ( (i - fromPos) + 0x1) <= 0x4 )
		goto label_cond_80;
	big = std::make_shared<java::math::BigInteger>(sun::security::util::ObjectIdentifier::pack(this->encoding, fromPos, ( (i - fromPos) + 0x1), 0x7, 0x8));
	//    .local v0, "big":Ljava/math/BigInteger;
	if ( fromPos )     
		goto label_cond_67;
	which = ( which + 0x1);
	//    .end local v10    # "which":I
	//    .restart local v9    # "which":I
	result[which] = 0x2;
	second = big->subtract(java::math::BigInteger::valueOf(0x50));
	//    .local v7, "second":Ljava/math/BigInteger;
	if ( second->compareTo(java::math::BigInteger::valueOf(0x7fffffff)) != 0x1 )
		goto label_cond_4f;
	return 0x0;
	// 1949    .line 380
label_cond_4f:
	//    .end local v9    # "which":I
	//    .restart local v10    # "which":I
	result[which] = second->intValue();
	which = ( which + 0x1);
	//    .end local v0    # "big":Ljava/math/BigInteger;
	//    .end local v7    # "second":Ljava/math/BigInteger;
	//    .end local v10    # "which":I
	//    .restart local v9    # "which":I
label_goto_58:
	fromPos = ( i + 0x1);
label_goto_5a:
	if ( which <  result->size() )
		goto label_cond_63;
	result = java::util::Arrays::copyOf(result, ( which + 0xa));
label_cond_63:
	i = ( i + 0x1);
	which = which;
	//    .end local v9    # "which":I
	//    .restart local v10    # "which":I
	goto label_goto_b;
	// 1994    .line 383
	// 1995    .restart local v0    # "big":Ljava/math/BigInteger;
label_cond_67:
	if ( big->compareTo(java::math::BigInteger::valueOf(0x7fffffff)) != 0x1 )
		goto label_cond_77;
	return 0x0;
	// 2016    .line 386
label_cond_77:
	which = ( which + 0x1);
	//    .end local v10    # "which":I
	//    .restart local v9    # "which":I
	result[which] = big->intValue();
	goto label_goto_58;
	// 2030    .line 390
	// 2031    .end local v0    # "big":Ljava/math/BigInteger;
	// 2032    .end local v9    # "which":I
	// 2033    .restart local v10    # "which":I
label_cond_80:
	retval = 0x0;
	//    .local v6, "retval":I
	j = fromPos;
	//    .local v3, "j":I
label_goto_82:
	if ( j >  i )
		goto label_cond_90;
	retval = ( retval << 0x7);
	//    .local v8, "tmp":B
	retval = (retval |  ( this->encoding[j] & 0x7f));
	j = ( j + 0x1);
	goto label_goto_82;
	// 2064    .line 396
	// 2065    .end local v8    # "tmp":B
label_cond_90:
	if ( fromPos )     
		goto label_cond_b1;
	if ( retval >= 0x50 )
		goto label_cond_a4;
	which = ( which + 0x1);
	//    .end local v10    # "which":I
	//    .restart local v9    # "which":I
	result[which] = ( retval / 0x28);
	//    .end local v9    # "which":I
	//    .restart local v10    # "which":I
	result[which] = ( retval % 0x28);
	which = ( which + 0x1);
	//    .end local v10    # "which":I
	//    .restart local v9    # "which":I
	goto label_goto_58;
	// 2098    .line 401
	// 2099    .end local v9    # "which":I
	// 2100    .restart local v10    # "which":I
label_cond_a4:
	which = ( which + 0x1);
	//    .end local v10    # "which":I
	//    .restart local v9    # "which":I
	result[which] = 0x2;
	//    .end local v9    # "which":I
	//    .restart local v10    # "which":I
	result[which] = ( retval + -0x50);
	which = ( which + 0x1);
	//    .end local v10    # "which":I
	//    .restart local v9    # "which":I
	goto label_goto_58;
	// 2125    .line 405
	// 2126    .end local v9    # "which":I
	// 2127    .restart local v10    # "which":I
label_cond_b1:
	which = ( which + 0x1);
	//    .end local v10    # "which":I
	//    .restart local v9    # "which":I
	result[which] = retval;
	goto label_goto_58;
	// 2137    .line 414
	// 2138    .end local v3    # "j":I
	// 2139    .end local v6    # "retval":I
	// 2140    .end local v9    # "which":I
	// 2141    .restart local v10    # "which":I
label_cond_b6:
	return java::util::Arrays::copyOf(result, which);
label_cond_bb:
	which = which;
	//    .end local v10    # "which":I
	//    .restart local v9    # "which":I
	goto label_goto_5a;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::ObjectIdentifier::toString()
{
	
	char cVar0;
	std::shared_ptr<java::lang::String> s;
	int length;
	std::shared_ptr<java::lang::StringBuffer> sb;
	int fromPos;
	int i;
	std::shared_ptr<java::math::BigInteger> big;
	int retval;
	int j;
	
	cVar0 = 0x2e;
	s = this->stringForm;
	//    .local v6, "s":Ljava/lang/String;
	if ( s )     
		goto label_cond_92;
	length = this->encoding->size();
	//    .local v4, "length":I
	sb = std::make_shared<java::lang::StringBuffer>(( length * 0x4));
	//    .local v7, "sb":Ljava/lang/StringBuffer;
	fromPos = 0x0;
	//    .local v1, "fromPos":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_12:
	if ( i >= length )
		goto label_cond_8c;
	if ( ( this->encoding[i] & 0x80) )     
		goto label_cond_51;
	if ( !(fromPos) )  
		goto label_cond_21;
	sb->append(cVar0);
label_cond_21:
	if ( ( (i - fromPos) + 0x1) <= 0x4 )
		goto label_cond_58;
	big = std::make_shared<java::math::BigInteger>(sun::security::util::ObjectIdentifier::pack(this->encoding, fromPos, ( (i - fromPos) + 0x1), 0x7, 0x8));
	//    .local v0, "big":Ljava/math/BigInteger;
	if ( fromPos )     
		goto label_cond_54;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.")));
	sb->append(big->subtract(java::math::BigInteger::valueOf(0x50)));
	//    .end local v0    # "big":Ljava/math/BigInteger;
label_goto_4f:
	fromPos = ( i + 0x1);
label_cond_51:
	i = ( i + 0x1);
	goto label_goto_12;
	// 2272    .line 445
	// 2273    .restart local v0    # "big":Ljava/math/BigInteger;
label_cond_54:
	sb->append(big);
	goto label_goto_4f;
	// 2279    .line 448
	// 2280    .end local v0    # "big":Ljava/math/BigInteger;
label_cond_58:
	retval = 0x0;
	//    .local v5, "retval":I
	j = fromPos;
	//    .local v3, "j":I
label_goto_5a:
	if ( j >  i )
		goto label_cond_68;
	retval = ( retval << 0x7);
	//    .local v8, "tmp":B
	retval = (retval |  ( this->encoding[j] & 0x7f));
	j = ( j + 0x1);
	goto label_goto_5a;
	// 2311    .line 454
	// 2312    .end local v8    # "tmp":B
label_cond_68:
	if ( fromPos )     
		goto label_cond_88;
	if ( retval >= 0x50 )
		goto label_cond_7c;
	sb->append(( retval / 0x28));
	sb->append(cVar0);
	sb->append(( retval % 0x28));
	goto label_goto_4f;
	// 2336    .line 460
label_cond_7c:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.")));
	sb->append(( retval + -0x50));
	goto label_goto_4f;
	// 2349    .line 464
label_cond_88:
	sb->append(retval);
	goto label_goto_4f;
	// 2355    .line 470
	// 2356    .end local v3    # "j":I
	// 2357    .end local v5    # "retval":I
label_cond_8c:
	s = sb->toString();
	this->stringForm = s;
	//    .end local v1    # "fromPos":I
	//    .end local v2    # "i":I
	//    .end local v4    # "length":I
	//    .end local v7    # "sb":Ljava/lang/StringBuffer;
label_cond_92:
	return s;

}


