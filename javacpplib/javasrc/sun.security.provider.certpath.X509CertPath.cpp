// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\X509CertPath.smali
#include "java2ctype.h"
#include "java.io.ByteArrayInputStream.h"
#include "java.io.ByteArrayOutputStream.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.CertificateEncodingException.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.CertificateFactory.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.ListIterator.h"
#include "sun.security.pkcs.ContentInfo.h"
#include "sun.security.pkcs.PKCS7.h"
#include "sun.security.pkcs.SignerInfo.h"
#include "sun.security.provider.certpath.X509CertPath.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"

static sun::security::provider::certpath::X509CertPath::COUNT_ENCODING = std::make_shared<java::lang::String>("count");
static sun::security::provider::certpath::X509CertPath::PKCS7_ENCODING = std::make_shared<java::lang::String>("PKCS7");
static sun::security::provider::certpath::X509CertPath::PKIPATH_ENCODING = std::make_shared<java::lang::String>("PkiPath");
static sun::security::provider::certpath::X509CertPath::encodingList;
static sun::security::provider::certpath::X509CertPath::serialVersionUID = 0x453f54f74c4520b4L;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::X509CertPath::static_cinit()
{
	
	std::shared_ptr<java::util::ArrayList> list;
	
	list = std::make_shared<java::util::ArrayList>(0x2);
	//    .local v0, "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	list->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("PkiPath")));
	list->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS7")));
	sun::security::provider::certpath::X509CertPath::encodingList = java::util::Collections::unmodifiableCollection(list);
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;)V
sun::security::provider::certpath::X509CertPath::X509CertPath(std::shared_ptr<java::io::InputStream> is)
{
	
	//    .param p1, "is"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 078        value = {
	// 079            Ljava/security/cert/CertificateException;
	// 080        }
	// 081    .end annotation
	sun::security::provider::certpath::X509CertPath::(is, std::make_shared<java::lang::String>(std::make_shared<char[]>("PkiPath")));
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;Ljava/lang/String;)V
sun::security::provider::certpath::X509CertPath::X509CertPath(std::shared_ptr<java::io::InputStream> is,std::shared_ptr<java::lang::String> encoding)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	
	//    .param p1, "is"    # Ljava/io/InputStream;
	//    .param p2, "encoding"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 098        value = {
	// 099            Ljava/security/cert/CertificateException;
	// 100        }
	// 101    .end annotation
	java::security::cert::CertPath::(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509")));
	if ( !(encoding->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("PkiPath")))) )  
		goto label_cond_16;
	this->certs = sun::security::provider::certpath::X509CertPath::parsePKIPATH(is);
label_goto_15:
	return;
	// 129    .line 156
label_cond_16:
	if ( !(encoding->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS7")))) )  
		goto label_cond_26;
	this->certs = sun::security::provider::certpath::X509CertPath::parsePKCS7(is);
	goto label_goto_15;
	// 148    .line 164
label_cond_26:
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unsupported encoding")));
	// throw
	throw cVar0;

}
// .method public constructor <init>(Ljava/util/List;)V
sun::security::provider::certpath::X509CertPath::X509CertPath(std::shared_ptr<java::util::List<java::security::cert::Certificate>> certs)
{
	
	std::shared_ptr<java::util::Iterator> obj_S_iterator;
	std::shared_ptr<java::security::cert::X509Certificate> obj;
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::ArrayList> cVar2;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 162        value = {
	// 163            "(",
	// 164            "Ljava/util/List",
	// 165            "<+",
	// 166            "Ljava/security/cert/Certificate;",
	// 167            ">;)V"
	// 168        }
	// 169    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 172        value = {
	// 173            Ljava/security/cert/CertificateException;
	// 174        }
	// 175    .end annotation
	//    .local p1, "certs":Ljava/util/List;, "Ljava/util/List<+Ljava/security/cert/Certificate;>;"
	java::security::cert::CertPath::(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509")));
	obj_S_iterator = certs->iterator();
	//    .local v1, "obj$iterator":Ljava/util/Iterator;
label_cond_a:
	if ( !(obj_S_iterator->hasNext()) )  
		goto label_cond_3a;
	obj = obj_S_iterator->next();
	//    .local v0, "obj":Ljava/lang/Object;
	if ( obj->instanceOf("java::security::cert::X509Certificate") )     
		goto label_cond_a;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::cert::CertificateException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("List is not all X509Certificates: ")))->append(obj->getClass()->getName())->toString());
	// throw
	throw cVar0;
	// 244    .line 127
	// 245    .end local v0    # "obj":Ljava/lang/Object;
label_cond_3a:
	cVar2 = std::make_shared<java::util::ArrayList>(certs);
	this->certs = java::util::Collections::unmodifiableList(cVar2);
	return;

}
// .method private encodePKCS7()[B
unsigned char sun::security::provider::certpath::X509CertPath::encodePKCS7()
{
	
	int cVar0;
	std::shared_ptr<sun::security::pkcs::PKCS7> p7;
	std::shared_ptr<sun::security::pkcs::ContentInfo> cVar1;
	std::shared_ptr<std::vector<java::security::cert::X509Certificate>> cVar2;
	std::shared_ptr<sun::security::util::DerOutputStream> derout;
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 265        value = {
	// 266            Ljava/security/cert/CertificateEncodingException;
	// 267        }
	// 268    .end annotation
	cVar0 = 0x0;
	cVar1 = std::make_shared<sun::security::pkcs::ContentInfo>(sun::security::pkcs::ContentInfo::DATA_OID, 0x0);
	cVar2 = this->certs->toArray(std::make_shared<std::vector<std::vector<java::security::cert::X509Certificate>>>(this->certs->size()));
	cVar2->checkCast("std::vector<java::security::cert::X509Certificate>");
	p7 = std::make_shared<sun::security::pkcs::PKCS7>(std::make_shared<std::vector<std::vector<sun::security::x509::AlgorithmId>>>(cVar0), cVar1, cVar2, std::make_shared<std::vector<std::vector<sun::security::pkcs::SignerInfo>>>(cVar0));
	//    .local v2, "p7":Lsun/security/pkcs/PKCS7;
	derout = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "derout":Lsun/security/util/DerOutputStream;
	try {
	//label_try_start_27:
	p7->encodeSignedData(derout);
	//label_try_end_2a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2f;
	}
	//    .catch Ljava/io/IOException; {:try_start_27 .. :try_end_2a} :catch_2f
	return derout->toByteArray();
	// 330    .line 331
label_catch_2f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "ioe":Ljava/io/IOException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar3 = std::make_shared<java::security::cert::CertificateEncodingException>(getCatchExcetionFromList->getMessage());
	// throw
	throw cVar3;

}
// .method private encodePKIPATH()[B
unsigned char sun::security::provider::certpath::X509CertPath::encodePKIPATH()
{
	
	std::shared_ptr<java::util::ListIterator> li;
	std::shared_ptr<java::lang::Object> ioe;
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<sun::security::util::DerOutputStream> bytes;
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar0;
	std::shared_ptr<sun::security::util::DerOutputStream> derout;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 350        value = {
	// 351            Ljava/security/cert/CertificateEncodingException;
	// 352        }
	// 353    .end annotation
	li = this->certs->listIterator(this->certs->size());
	//    .local v5, "li":Ljava/util/ListIterator;, "Ljava/util/ListIterator<Ljava/security/cert/X509Certificate;>;"
	try {
	//label_try_start_c:
	bytes = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "bytes":Lsun/security/util/DerOutputStream;
label_goto_11:
	if ( !(li->hasPrevious()) )  
		goto label_cond_57;
	cert = li->previous();
	cert->checkCast("java::security::cert::X509Certificate");
	//    .local v1, "cert":Ljava/security/cert/X509Certificate;
	if ( this->certs->lastIndexOf(cert) == this->certs->indexOf(cert) )
		goto label_cond_4f;
	cVar0 = std::make_shared<java::security::cert::CertificateEncodingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate Certificate")));
	// throw
	throw cVar0;
	// 418    :try_end_34
	// 419    .catch Ljava/io/IOException; {:try_start_c .. :try_end_34} :catch_34
	// 421    .line 311
	// 422    .end local v0    # "bytes":Lsun/security/util/DerOutputStream;
	// 423    .end local v1    # "cert":Ljava/security/cert/X509Certificate;
label_catch_34:
	// move-exception
	ioe = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "ioe":Ljava/io/IOException;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::security::cert::CertificateEncodingException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IOException encoding PkiPath data: ")))->append(ioe)->toString(), ioe);
	// throw
	throw cVar1;
	// 453    .line 302
	// 454    .end local v4    # "ioe":Ljava/io/IOException;
	// 455    .restart local v0    # "bytes":Lsun/security/util/DerOutputStream;
	// 456    .restart local v1    # "cert":Ljava/security/cert/X509Certificate;
label_cond_4f:
	try {
	//label_try_start_4f:
	//    .local v3, "encoded":[B
	bytes->write(cert->getEncoded());
	goto label_goto_11;
	// 469    .line 307
	// 470    .end local v1    # "cert":Ljava/security/cert/X509Certificate;
	// 471    .end local v3    # "encoded":[B
label_cond_57:
	derout = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "derout":Lsun/security/util/DerOutputStream;
	derout->write(0x30, bytes);
	//label_try_end_64:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_34;
	}
	//    .catch Ljava/io/IOException; {:try_start_4f .. :try_end_64} :catch_34
	return derout->toByteArray();

}
// .method public static getEncodingsStatic()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<java::lang::String>> sun::security::provider::certpath::X509CertPath::getEncodingsStatic()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 496        value = {
	// 497            "()",
	// 498            "Ljava/util/Iterator",
	// 499            "<",
	// 500            "Ljava/lang/String;",
	// 501            ">;"
	// 502        }
	// 503    .end annotation
	return sun::security::provider::certpath::X509CertPath::encodingList->iterator();

}
// .method private static parsePKCS7(Ljava/io/InputStream;)Ljava/util/List;
std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> sun::security::provider::certpath::X509CertPath::parsePKCS7(std::shared_ptr<java::io::InputStream> is)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	std::shared_ptr<java::security::cert::CertificateException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::io::ByteArrayInputStream> is;
	std::shared_ptr<sun::security::pkcs::PKCS7> pkcs7;
	std::shared_ptr<std::vector<java::lang::Object>> certArray;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::ArrayList> certList;
	
	//    .param p0, "is"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Signature;
	// 520        value = {
	// 521            "(",
	// 522            "Ljava/io/InputStream;",
	// 523            ")",
	// 524            "Ljava/util/List",
	// 525            "<",
	// 526            "Ljava/security/cert/X509Certificate;",
	// 527            ">;"
	// 528        }
	// 529    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 532        value = {
	// 533            Ljava/security/cert/CertificateException;
	// 534        }
	// 535    .end annotation
	if ( is )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("input stream is null")));
	// throw
	throw cVar0;
	// 550    .line 226
label_cond_b:
	try {
	//label_try_start_b:
	if ( is->markSupported() )     
		goto label_cond_1b;
	is = std::make_shared<java::io::ByteArrayInputStream>(sun::security::provider::certpath::X509CertPath::readAllBytes(is));
	//    .end local p0    # "is":Ljava/io/InputStream;
	//    .local v3, "is":Ljava/io/InputStream;
	//    .end local v3    # "is":Ljava/io/InputStream;
	//    .restart local p0    # "is":Ljava/io/InputStream;
label_cond_1b:
	pkcs7 = std::make_shared<sun::security::pkcs::PKCS7>(is);
	//    .local v4, "pkcs7":Lsun/security/pkcs/PKCS7;
	certArray = pkcs7->getCertificates();
	//    .local v0, "certArray":[Ljava/security/cert/X509Certificate;
	if ( !(certArray) )  
		goto label_cond_2f;
	//label_try_end_29:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_36;
	}
	//    .catch Ljava/io/IOException; {:try_start_b .. :try_end_29} :catch_36
	//    .local v1, "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
label_goto_2a:
	return java::util::Collections::unmodifiableList(certList);
	// 606    .line 239
	// 607    .end local v1    # "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
label_cond_2f:
	try {
	//label_try_start_2f:
	certList = std::make_shared<java::util::ArrayList>(0x0);
	//label_try_end_35:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_36;
	}
	//    .catch Ljava/io/IOException; {:try_start_2f .. :try_end_35} :catch_36
	//    .restart local v1    # "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	goto label_goto_2a;
	// 621    .line 241
	// 622    .end local v0    # "certArray":[Ljava/security/cert/X509Certificate;
	// 623    .end local v1    # "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	// 624    .end local v4    # "pkcs7":Lsun/security/pkcs/PKCS7;
label_catch_36:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "ioe":Ljava/io/IOException;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::security::cert::CertificateException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IOException parsing PKCS7 data: ")))->append(getCatchExcetionFromList)->toString());
	// throw
	throw cVar1;

}
// .method private static parsePKIPATH(Ljava/io/InputStream;)Ljava/util/List;
std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> sun::security::provider::certpath::X509CertPath::parsePKIPATH(std::shared_ptr<java::io::InputStream> is)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	std::shared_ptr<java::lang::Object> ioe;
	std::shared_ptr<java::security::cert::CertificateException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<sun::security::util::DerInputStream> dis;
	auto seq;
	std::shared_ptr<java::util::ArrayList> certList;
	std::vector<std::any> tryCatchExcetionList;
	int i;
	std::shared_ptr<java::io::ByteArrayInputStream> cVar1;
	std::shared_ptr<java::security::cert::X509Certificate> cVar2;
	
	//    .param p0, "is"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Signature;
	// 659        value = {
	// 660            "(",
	// 661            "Ljava/io/InputStream;",
	// 662            ")",
	// 663            "Ljava/util/List",
	// 664            "<",
	// 665            "Ljava/security/cert/X509Certificate;",
	// 666            ">;"
	// 667        }
	// 668    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 671        value = {
	// 672            Ljava/security/cert/CertificateException;
	// 673        }
	// 674    .end annotation
	0x0;
	//    .local v1, "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	0x0;
	//    .local v0, "certFac":Ljava/security/cert/CertificateFactory;
	if ( is )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("input stream is null")));
	// throw
	throw cVar0;
	// 697    .line 186
label_cond_d:
	try {
	//label_try_start_d:
	dis = std::make_shared<sun::security::util::DerInputStream>(sun::security::provider::certpath::X509CertPath::readAllBytes(is));
	//    .local v3, "dis":Lsun/security/util/DerInputStream;
	seq = dis->getSequence(0x3);
	//    .local v6, "seq":[Lsun/security/util/DerValue;
	if ( seq->size() )     
		goto label_cond_23;
	return java::util::Collections::emptyList({const[class].FS-Param});
	// 729    .line 192
label_cond_23:
	//    .local v0, "certFac":Ljava/security/cert/CertificateFactory;
	certList = std::make_shared<java::util::ArrayList>(seq->size());
	//label_try_end_30:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_51;
	}
	//    .catch Ljava/io/IOException; {:try_start_d .. :try_end_30} :catch_51
	//    .local v2, "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	try {
	//label_try_start_30:
	//    .end local v1    # "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	i = ( seq->size() + -0x1);
	//    .local v4, "i":I
label_goto_33:
	if ( i < 0 ) 
		goto label_cond_4c;
	cVar1 = std::make_shared<java::io::ByteArrayInputStream>(seq[i]->toByteArray());
	cVar2 = java::security::cert::CertificateFactory::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509")))->generateCertificate(cVar1);
	cVar2->checkCast("java::security::cert::X509Certificate");
	certList->add(cVar2);
	i = ( i + -0x1);
	goto label_goto_33;
	// 784    .line 201
label_cond_4c:
	//label_try_end_4f:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6c;
	}
	//    .catch Ljava/io/IOException; {:try_start_30 .. :try_end_4f} :catch_6c
	return java::util::Collections::unmodifiableList(certList);
	// 794    .line 203
	// 795    .end local v0    # "certFac":Ljava/security/cert/CertificateFactory;
	// 796    .end local v2    # "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	// 797    .end local v3    # "dis":Lsun/security/util/DerInputStream;
	// 798    .end local v4    # "i":I
	// 799    .end local v6    # "seq":[Lsun/security/util/DerValue;
	// 800    .restart local v1    # "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
label_catch_51:
	// move-exception
	ioe = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v1    # "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	//    .local v5, "ioe":Ljava/io/IOException;
label_goto_52:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::security::cert::CertificateException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IOException parsing PkiPath data: ")))->append(ioe)->toString(), ioe);
	// throw
	throw cVar3;
	// 832    .line 203
	// 833    .end local v5    # "ioe":Ljava/io/IOException;
	// 834    .restart local v0    # "certFac":Ljava/security/cert/CertificateFactory;
	// 835    .restart local v2    # "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	// 836    .restart local v3    # "dis":Lsun/security/util/DerInputStream;
	// 837    .restart local v6    # "seq":[Lsun/security/util/DerValue;
label_catch_6c:
	// move-exception
	ioe = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "ioe":Ljava/io/IOException;
	certList;
	//    .end local v2    # "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	//    .local v1, "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	goto label_goto_52;

}
// .method private static readAllBytes(Ljava/io/InputStream;)[B
unsigned char sun::security::provider::certpath::X509CertPath::readAllBytes(std::shared_ptr<java::io::InputStream> is)
{
	
	std::shared<std::vector<unsigned char[]>> buffer;
	std::shared_ptr<java::io::ByteArrayOutputStream> baos;
	int n;
	
	//    .param p0, "is"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 853        value = {
	// 854            Ljava/io/IOException;
	// 855        }
	// 856    .end annotation
	buffer = std::make_shared<std::vector<unsigned char[]>>(0x2000);
	//    .local v1, "buffer":[B
	baos = std::make_shared<java::io::ByteArrayOutputStream>(0x800);
	//    .local v0, "baos":Ljava/io/ByteArrayOutputStream;
label_goto_b:
	n = is->read(buffer);
	//    .local v2, "n":I
	if ( n == -0x1 )
		goto label_cond_17;
	baos->write(buffer, 0x0, n);
	goto label_goto_b;
	// 891    .line 265
label_cond_17:
	return baos->toByteArray();

}
// .method public getCertificates()Ljava/util/List;
std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> sun::security::provider::certpath::X509CertPath::getCertificates()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 905        value = {
	// 906            "()",
	// 907            "Ljava/util/List",
	// 908            "<",
	// 909            "Ljava/security/cert/X509Certificate;",
	// 910            ">;"
	// 911        }
	// 912    .end annotation
	return this->certs;

}
// .method public getEncoded()[B
unsigned char sun::security::provider::certpath::X509CertPath::getEncoded()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 924        value = {
	// 925            Ljava/security/cert/CertificateEncodingException;
	// 926        }
	// 927    .end annotation
	return this->encodePKIPATH();

}
// .method public getEncoded(Ljava/lang/String;)[B
unsigned char sun::security::provider::certpath::X509CertPath::getEncoded(std::shared_ptr<java::lang::String> encoding)
{
	
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar0;
	
	//    .param p1, "encoding"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 942        value = {
	// 943            Ljava/security/cert/CertificateEncodingException;
	// 944        }
	// 945    .end annotation
	if ( !(encoding->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("PkiPath")))) )  
		goto label_cond_e;
	return this->encodePKIPATH();
	// 964    .line 349
label_cond_e:
	if ( !(encoding->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS7")))) )  
		goto label_cond_1c;
	return this->encodePKCS7();
	// 981    .line 355
label_cond_1c:
	cVar0 = std::make_shared<java::security::cert::CertificateEncodingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unsupported encoding")));
	// throw
	throw cVar0;

}
// .method public getEncodings()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<java::lang::String>> sun::security::provider::certpath::X509CertPath::getEncodings()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 995        value = {
	// 996            "()",
	// 997            "Ljava/util/Iterator",
	// 998            "<",
	// 999            "Ljava/lang/String;",
	// 1000            ">;"
	// 1001        }
	// 1002    .end annotation
	return sun::security::provider::certpath::X509CertPath::getEncodingsStatic({const[class].FS-Param});

}


