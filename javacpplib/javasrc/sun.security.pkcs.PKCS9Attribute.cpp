// CPP L:\smali2cpp20\x64\Release\out\sun\security\pkcs\PKCS9Attribute.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Byte.h"
#include "java.lang.Class.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.ExceptionInInitializerError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.security.cert.CertificateException.h"
#include "java.util.Date.h"
#include "java.util.Hashtable.h"
#include "java.util.Locale.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.pkcs.PKCS9Attribute.h"
#include "sun.security.pkcs.SignerInfo.h"
#include "sun.security.pkcs.SigningCertificateInfo.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerEncoder.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CertificateExtensions.h"

static sun::security::pkcs::PKCS9Attribute::BYTE_ARRAY_CLASS;
static sun::security::pkcs::PKCS9Attribute::CHALLENGE_PASSWORD_OID;
static sun::security::pkcs::PKCS9Attribute::CHALLENGE_PASSWORD_STR = std::make_shared<java::lang::String>("ChallengePassword");
static sun::security::pkcs::PKCS9Attribute::CONTENT_TYPE_OID;
static sun::security::pkcs::PKCS9Attribute::CONTENT_TYPE_STR = std::make_shared<java::lang::String>("ContentType");
static sun::security::pkcs::PKCS9Attribute::COUNTERSIGNATURE_OID;
static sun::security::pkcs::PKCS9Attribute::COUNTERSIGNATURE_STR = std::make_shared<java::lang::String>("Countersignature");
static sun::security::pkcs::PKCS9Attribute::EMAIL_ADDRESS_OID;
static sun::security::pkcs::PKCS9Attribute::EMAIL_ADDRESS_STR = std::make_shared<java::lang::String>("EmailAddress");
static sun::security::pkcs::PKCS9Attribute::EXTENDED_CERTIFICATE_ATTRIBUTES_OID;
static sun::security::pkcs::PKCS9Attribute::EXTENDED_CERTIFICATE_ATTRIBUTES_STR = std::make_shared<java::lang::String>("ExtendedCertificateAttributes");
static sun::security::pkcs::PKCS9Attribute::EXTENSION_REQUEST_OID;
static sun::security::pkcs::PKCS9Attribute::EXTENSION_REQUEST_STR = std::make_shared<java::lang::String>("ExtensionRequest");
static sun::security::pkcs::PKCS9Attribute::ISSUER_SERIALNUMBER_OID;
static sun::security::pkcs::PKCS9Attribute::ISSUER_SERIALNUMBER_STR = std::make_shared<java::lang::String>("IssuerAndSerialNumber");
static sun::security::pkcs::PKCS9Attribute::MESSAGE_DIGEST_OID;
static sun::security::pkcs::PKCS9Attribute::MESSAGE_DIGEST_STR = std::make_shared<java::lang::String>("MessageDigest");
static sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE;
static sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE;
static sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS;
static sun::security::pkcs::PKCS9Attribute::PKCS9_VALUE_TAGS;
static sun::security::pkcs::PKCS9Attribute::RSA_PROPRIETARY_STR = std::make_shared<java::lang::String>("RSAProprietary");
static sun::security::pkcs::PKCS9Attribute::SIGNATURE_TIMESTAMP_TOKEN_OID;
static sun::security::pkcs::PKCS9Attribute::SIGNATURE_TIMESTAMP_TOKEN_STR = std::make_shared<java::lang::String>("SignatureTimestampToken");
static sun::security::pkcs::PKCS9Attribute::SIGNING_CERTIFICATE_OID;
static sun::security::pkcs::PKCS9Attribute::SIGNING_CERTIFICATE_STR = std::make_shared<java::lang::String>("SigningCertificate");
static sun::security::pkcs::PKCS9Attribute::SIGNING_TIME_OID;
static sun::security::pkcs::PKCS9Attribute::SIGNING_TIME_STR = std::make_shared<java::lang::String>("SigningTime");
static sun::security::pkcs::PKCS9Attribute::SINGLE_VALUED;
static sun::security::pkcs::PKCS9Attribute::SMIME_CAPABILITY_OID;
static sun::security::pkcs::PKCS9Attribute::SMIME_CAPABILITY_STR = std::make_shared<java::lang::String>("SMIMECapability");
static sun::security::pkcs::PKCS9Attribute::SMIME_SIGNING_DESC_STR = std::make_shared<java::lang::String>("SMIMESigningDesc");
static sun::security::pkcs::PKCS9Attribute::UNSTRUCTURED_ADDRESS_OID;
static sun::security::pkcs::PKCS9Attribute::UNSTRUCTURED_ADDRESS_STR = std::make_shared<java::lang::String>("UnstructuredAddress");
static sun::security::pkcs::PKCS9Attribute::UNSTRUCTURED_NAME_OID;
static sun::security::pkcs::PKCS9Attribute::UNSTRUCTURED_NAME_STR = std::make_shared<java::lang::String>("UnstructuredName");
static sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES;
static sun::security::pkcs::PKCS9Attribute::debug;
// .method static constructor <clinit>()V
void sun::security::pkcs::PKCS9Attribute::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	int i;
	std::shared<std::vector<int[]>> cVar5;
	std::shared<std::vector<int[]>> cVar6;
	std::shared<std::vector<int[]>> cVar7;
	std::shared_ptr<java::lang::ExceptionInInitializerError> cVar43;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Hashtable> cVar8;
	std::shared_ptr<java::util::Hashtable> cVar9;
	std::shared<std::vector<std::vector<std::vector<java::lang::Byte>>>> cVar10;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar11;
	std::shared_ptr<java::lang::Byte> cVar12;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar13;
	std::shared_ptr<java::lang::Byte> cVar14;
	std::shared_ptr<java::lang::Byte> cVar15;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar16;
	std::shared_ptr<java::lang::Byte> cVar17;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar18;
	std::shared_ptr<java::lang::Byte> cVar19;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar20;
	std::shared_ptr<java::lang::Byte> cVar21;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar22;
	std::shared_ptr<java::lang::Byte> cVar23;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar24;
	std::shared_ptr<java::lang::Byte> cVar25;
	std::shared_ptr<java::lang::Byte> cVar26;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar27;
	std::shared_ptr<java::lang::Byte> cVar28;
	std::shared_ptr<java::lang::Byte> cVar29;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar30;
	std::shared_ptr<java::lang::Byte> cVar31;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar32;
	std::shared_ptr<java::lang::Byte> cVar33;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar34;
	std::shared_ptr<java::lang::Byte> cVar35;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar36;
	std::shared_ptr<java::lang::Byte> cVar37;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar38;
	std::shared_ptr<java::lang::Byte> cVar39;
	std::shared<std::vector<std::vector<java::lang::Byte>>> cVar40;
	std::shared_ptr<java::lang::Byte> cVar41;
	std::shared_ptr<java::lang::ExceptionInInitializerError> cVar44;
	auto str;
	std::shared<std::vector<bool[]>> cVar42;
	
	cVar0 = 0x9;
	cVar1 = 0x2;
	cVar2 = 0x0;
	cVar3 = 0x0;
	cVar4 = 0x1;
	sun::security::pkcs::PKCS9Attribute::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("jar")));
	sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS = std::make_shared<std::vector<std::vector<sun::security::util::ObjectIdentifier>>>(0x12);
	i = 0x1;
	//    .local v1, "i":I
label_goto_16:
	if ( i >= ( sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS->size() + -0x2) )
		goto label_cond_42;
	cVar5 = std::make_shared<std::vector<int[]>>(0x7);
	cVar5[cVar3] = cVar4;
	cVar5[cVar4] = cVar1;
	cVar5[cVar1] = 0x348;
	cVar5[0x3] = 0x1bb8d;
	cVar5[0x4] = cVar4;
	cVar5[0x5] = cVar0;
	cVar5[0x6] = i;
	sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[i] = sun::security::util::ObjectIdentifier::newInternal(cVar5);
	i = ( i + 0x1);
	goto label_goto_16;
	// 220    .line 199
label_cond_42:
	cVar6 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[( sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS->size() + -0x2)] = sun::security::util::ObjectIdentifier::newInternal(cVar6);
	cVar7 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[( sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS->size() + -0x1)] = sun::security::util::ObjectIdentifier::newInternal(cVar7);
	try {
	//label_try_start_66:
	sun::security::pkcs::PKCS9Attribute::BYTE_ARRAY_CLASS = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("[B")));
	//label_try_end_6f:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_44a;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_66 .. :try_end_6f} :catch_44a
	sun::security::pkcs::PKCS9Attribute::EMAIL_ADDRESS_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[cVar4];
	sun::security::pkcs::PKCS9Attribute::UNSTRUCTURED_NAME_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[cVar1];
	sun::security::pkcs::PKCS9Attribute::CONTENT_TYPE_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x3];
	sun::security::pkcs::PKCS9Attribute::MESSAGE_DIGEST_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x4];
	sun::security::pkcs::PKCS9Attribute::SIGNING_TIME_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x5];
	sun::security::pkcs::PKCS9Attribute::COUNTERSIGNATURE_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x6];
	sun::security::pkcs::PKCS9Attribute::CHALLENGE_PASSWORD_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x7];
	sun::security::pkcs::PKCS9Attribute::UNSTRUCTURED_ADDRESS_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x8];
	sun::security::pkcs::PKCS9Attribute::EXTENDED_CERTIFICATE_ATTRIBUTES_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[cVar0];
	sun::security::pkcs::PKCS9Attribute::ISSUER_SERIALNUMBER_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xa];
	sun::security::pkcs::PKCS9Attribute::EXTENSION_REQUEST_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xe];
	sun::security::pkcs::PKCS9Attribute::SMIME_CAPABILITY_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xf];
	sun::security::pkcs::PKCS9Attribute::SIGNING_CERTIFICATE_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x10];
	sun::security::pkcs::PKCS9Attribute::SIGNATURE_TIMESTAMP_TOKEN_OID = sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x11];
	cVar8 = std::make_shared<java::util::Hashtable>(0x12);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE = cVar8;
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("emailaddress")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[cVar4]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("unstructuredname")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[cVar1]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("contenttype")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x3]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("messagedigest")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x4]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("signingtime")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x5]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("countersignature")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x6]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("challengepassword")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x7]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("unstructuredaddress")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x8]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("extendedcertificateattributes")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[cVar0]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuerandserialnumber")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xa]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("rsaproprietary")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xb]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("rsaproprietary")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xc]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("signingdescription")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xd]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("extensionrequest")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xe]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("smimecapability")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xf]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("signingcertificate")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x10]);
	sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("signaturetimestamptoken")), sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x11]);
	cVar9 = std::make_shared<java::util::Hashtable>(0x10);
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE = cVar9;
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[cVar4], std::make_shared<java::lang::String>(std::make_shared<char[]>("EmailAddress")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[cVar1], std::make_shared<java::lang::String>(std::make_shared<char[]>("UnstructuredName")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x3], std::make_shared<java::lang::String>(std::make_shared<char[]>("ContentType")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x4], std::make_shared<java::lang::String>(std::make_shared<char[]>("MessageDigest")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x5], std::make_shared<java::lang::String>(std::make_shared<char[]>("SigningTime")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x6], std::make_shared<java::lang::String>(std::make_shared<char[]>("Countersignature")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x7], std::make_shared<java::lang::String>(std::make_shared<char[]>("ChallengePassword")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x8], std::make_shared<java::lang::String>(std::make_shared<char[]>("UnstructuredAddress")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[cVar0], std::make_shared<java::lang::String>(std::make_shared<char[]>("ExtendedCertificateAttributes")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xa], std::make_shared<java::lang::String>(std::make_shared<char[]>("IssuerAndSerialNumber")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xb], std::make_shared<java::lang::String>(std::make_shared<char[]>("RSAProprietary")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xc], std::make_shared<java::lang::String>(std::make_shared<char[]>("RSAProprietary")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xd], std::make_shared<java::lang::String>(std::make_shared<char[]>("SMIMESigningDesc")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xe], std::make_shared<java::lang::String>(std::make_shared<char[]>("ExtensionRequest")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0xf], std::make_shared<java::lang::String>(std::make_shared<char[]>("SMIMECapability")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x10], std::make_shared<java::lang::String>(std::make_shared<char[]>("SigningCertificate")));
	sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->put(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[0x11], std::make_shared<java::lang::String>(std::make_shared<char[]>("SignatureTimestampToken")));
	cVar10 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Byte>>>>(0x12);
	cVar10[cVar3] = cVar2;
	cVar11 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar4);
	cVar12 = std::make_shared<java::lang::Byte>(0x16);
	cVar11[cVar3] = cVar12;
	cVar10[cVar4] = cVar11;
	cVar13 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar1);
	cVar14 = std::make_shared<java::lang::Byte>(0x16);
	cVar13[cVar3] = cVar14;
	cVar15 = std::make_shared<java::lang::Byte>(0x13);
	cVar13[cVar4] = cVar15;
	cVar10[cVar1] = cVar13;
	cVar16 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar4);
	cVar17 = std::make_shared<java::lang::Byte>(0x6);
	cVar16[cVar3] = cVar17;
	cVar10[0x3] = cVar16;
	cVar18 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar4);
	cVar19 = std::make_shared<java::lang::Byte>(0x4);
	cVar18[cVar3] = cVar19;
	cVar10[0x4] = cVar18;
	cVar20 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar4);
	cVar21 = std::make_shared<java::lang::Byte>(0x17);
	cVar20[cVar3] = cVar21;
	cVar10[0x5] = cVar20;
	cVar22 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar4);
	cVar23 = std::make_shared<java::lang::Byte>(0x30);
	cVar22[cVar3] = cVar23;
	cVar10[0x6] = cVar22;
	cVar24 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar1);
	cVar25 = std::make_shared<java::lang::Byte>(0x13);
	cVar24[cVar3] = cVar25;
	cVar26 = std::make_shared<java::lang::Byte>(0x14);
	cVar24[cVar4] = cVar26;
	cVar10[0x7] = cVar24;
	cVar27 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar1);
	cVar28 = std::make_shared<java::lang::Byte>(0x13);
	cVar27[cVar3] = cVar28;
	cVar29 = std::make_shared<java::lang::Byte>(0x14);
	cVar27[cVar4] = cVar29;
	cVar10[0x8] = cVar27;
	cVar30 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar4);
	cVar31 = std::make_shared<java::lang::Byte>(0x31);
	cVar30[cVar3] = cVar31;
	cVar10[cVar0] = cVar30;
	cVar32 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar4);
	cVar33 = std::make_shared<java::lang::Byte>(0x30);
	cVar32[cVar3] = cVar33;
	cVar10[0xa] = cVar32;
	cVar10[0xb] = cVar2;
	cVar10[0xc] = cVar2;
	cVar10[0xd] = cVar2;
	cVar34 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar4);
	cVar35 = std::make_shared<java::lang::Byte>(0x30);
	cVar34[cVar3] = cVar35;
	cVar10[0xe] = cVar34;
	cVar36 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar4);
	cVar37 = std::make_shared<java::lang::Byte>(0x30);
	cVar36[cVar3] = cVar37;
	cVar10[0xf] = cVar36;
	cVar38 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar4);
	cVar39 = std::make_shared<java::lang::Byte>(0x30);
	cVar38[cVar3] = cVar39;
	cVar10[0x10] = cVar38;
	cVar40 = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(cVar4);
	cVar41 = std::make_shared<java::lang::Byte>(0x30);
	cVar40[cVar3] = cVar41;
	cVar10[0x11] = cVar40;
	sun::security::pkcs::PKCS9Attribute::PKCS9_VALUE_TAGS = cVar10;
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x12);
	try {
	//label_try_start_3a6:
	str = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("[Ljava.lang.String;")));
	//    .local v2, "str":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0x0] = 0x0;
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0x1] = str;
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0x2] = str;
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0x3] = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.security.util.ObjectIdentifier")));
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0x4] = sun::security::pkcs::PKCS9Attribute::BYTE_ARRAY_CLASS;
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0x5] = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.util.Date")));
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0x6] = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("[Lsun.security.pkcs.SignerInfo;")));
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0x7] = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.lang.String")));
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0x8] = str;
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0x9] = 0x0;
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0xa] = 0x0;
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0xb] = 0x0;
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0xc] = 0x0;
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0xd] = 0x0;
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0xe] = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.security.x509.CertificateExtensions")));
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0xf] = 0x0;
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0x10] = 0x0;
	sun::security::pkcs::PKCS9Attribute::VALUE_CLASSES[0x11] = sun::security::pkcs::PKCS9Attribute::BYTE_ARRAY_CLASS;
	//label_try_end_440:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_455;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_3a6 .. :try_end_440} :catch_455
	cVar42 = std::make_shared<std::vector<bool[]>>(0x12);
	?;
	sun::security::pkcs::PKCS9Attribute::SINGLE_VALUED = cVar42;
	return;
	// 1321    .line 206
	// 1322    .end local v2    # "str":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_catch_44a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/ClassNotFoundException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar43 = std::make_shared<java::lang::ExceptionInInitializerError>(getCatchExcetionFromList->toString());
	// throw
	throw cVar43;
	// 1338    .line 362
	// 1339    .end local v0    # "e":Ljava/lang/ClassNotFoundException;
label_catch_455:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "e":Ljava/lang/ClassNotFoundException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar44 = std::make_shared<java::lang::ExceptionInInitializerError>(getCatchExcetionFromList->toString());
	// throw
	throw cVar44;
	// 1355    .line 200
	// 1356    :array_460
	// 1357    .array-data 4
	// 1358        0x1
	// 1359        0x2
	// 1360        0x348
	// 1361        0x1bb8d
	// 1362        0x1
	// 1363        0x9
	// 1364        0x10
	// 1365        0x2
	// 1366        0xc
	// 1367    .end array-data
	// 1369    .line 202
	// 1370    :array_476
	// 1371    .array-data 4
	// 1372        0x1
	// 1373        0x2
	// 1374        0x348
	// 1375        0x1bb8d
	// 1376        0x1
	// 1377        0x9
	// 1378        0x10
	// 1379        0x2
	// 1380        0xe
	// 1381    .end array-data
	// 1383    .line 371
	// 1384    :array_48c
	// 1385    .array-data 1
	// 1386        0x0t
	// 1387        0x0t
	// 1388        0x0t
	// 1389        0x1t
	// 1390        0x1t
	// 1391        0x1t
	// 1392        0x0t
	// 1393        0x1t
	// 1394        0x0t
	// 1395        0x0t
	// 1396        0x1t
	// 1397        0x0t
	// 1398        0x0t
	// 1399        0x0t
	// 1400        0x1t
	// 1401        0x1t
	// 1402        0x1t
	// 1403        0x1t
	// 1404    .end array-data

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Object;)V
sun::security::pkcs::PKCS9Attribute::PKCS9Attribute(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1412        value = {
	// 1413            Ljava/lang/IllegalArgumentException;
	// 1414        }
	// 1415    .end annotation
	// 1419    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	oid = sun::security::pkcs::PKCS9Attribute::getOID(name);
	//    .local v0, "oid":Lsun/security/util/ObjectIdentifier;
	if ( oid )     
		goto label_cond_2a;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unrecognized attribute name ")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" constructing PKCS9Attribute.")))->toString());
	// throw
	throw cVar0;
	// 1465    .line 454
label_cond_2a:
	this->init(oid, value);
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::pkcs::PKCS9Attribute::PKCS9Attribute(std::shared_ptr<sun::security::util::DerValue> derVal)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<sun::security::util::DerInputStream> derIn;
	auto val;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::io::IOException> cVar5;
	std::shared_ptr<unsigned char[]> content;
	std::shared_ptr<sun::security::util::DerInputStream> cVar6;
	auto elems;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	int i;
	std::shared_ptr<java::lang::Byte> tag;
	std::shared<std::vector<std::vector<java::lang::String>>> values;
	std::shared_ptr<sun::security::util::DerInputStream> cVar8;
	std::shared<std::vector<std::vector<sun::security::pkcs::SignerInfo>>> values;
	std::shared_ptr<sun::security::pkcs::SignerInfo> cVar9;
	std::shared_ptr<java::io::IOException> cVar10;
	std::shared_ptr<java::io::IOException> cVar11;
	std::shared_ptr<java::io::IOException> cVar12;
	std::shared_ptr<java::io::IOException> cVar13;
	std::shared_ptr<sun::security::x509::CertificateExtensions> cVar14;
	std::shared_ptr<sun::security::util::DerInputStream> cVar15;
	std::shared_ptr<java::io::IOException> cVar16;
	std::shared_ptr<sun::security::pkcs::SigningCertificateInfo> cVar17;
	
	//    .param p1, "derVal"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1477        value = {
	// 1478            Ljava/io/IOException;
	// 1479        }
	// 1480    .end annotation
	cVar0 = 0x2;
	cVar1 = -0x1;
	cVar2 = 0x1;
	cVar3 = 0x0;
	// 1492    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	derIn = std::make_shared<sun::security::util::DerInputStream>(derVal->toByteArray());
	//    .local v1, "derIn":Lsun/security/util/DerInputStream;
	val = derIn->getSequence(cVar0);
	//    .local v5, "val":[Lsun/security/util/DerValue;
	if ( !(derIn->available()) )  
		goto label_cond_23;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Excess data parsing PKCS9Attribute")));
	// throw
	throw cVar4;
	// 1526    .line 490
label_cond_23:
	if ( val->size() == cVar0 )
		goto label_cond_2f;
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9Attribute doesn\'t have two components")));
	// throw
	throw cVar5;
	// 1541    .line 494
label_cond_2f:
	this->oid = val[cVar3]->getOID();
	content = val[cVar2]->toByteArray();
	//    .local v0, "content":[B
	cVar6 = std::make_shared<sun::security::util::DerInputStream>(content);
	elems = cVar6->getSet(cVar2);
	//    .local v2, "elems":[Lsun/security/util/DerValue;
	this->index = sun::security::pkcs::PKCS9Attribute::indexOf(this->oid, sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS, cVar2);
	if ( this->index != cVar1 )
		goto label_cond_76;
	if ( !(sun::security::pkcs::PKCS9Attribute::debug) )  
		goto label_cond_73;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	sun::security::pkcs::PKCS9Attribute::debug->println(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unsupported signer attribute: ")))->append(this->oid)->toString());
label_cond_73:
	this->value = content;
	return;
	// 1622    .line 508
label_cond_76:
	if ( !(sun::security::pkcs::PKCS9Attribute::SINGLE_VALUED[this->index]) )  
		goto label_cond_84;
	if ( elems->size() <= cVar2 )
		goto label_cond_84;
	// throw
	this->throwSingleValuedException();
label_cond_84:
	i = 0x0;
	//    .local v3, "i":I
label_goto_85:
	if ( i >= elems->size() )
		goto label_cond_a3;
	tag = std::make_shared<java::lang::Byte>(elems[i]->tag);
	//    .local v4, "tag":Ljava/lang/Byte;
	if ( sun::security::pkcs::PKCS9Attribute::indexOf(tag, sun::security::pkcs::PKCS9Attribute::PKCS9_VALUE_TAGS[this->index], cVar3) != cVar1 )
		goto label_cond_a0;
	// throw
	this->throwTagException(tag);
label_cond_a0:
	i = ( i + 0x1);
	goto label_goto_85;
	// 1681    .line 520
	// 1682    .end local v4    # "tag":Ljava/lang/Byte;
label_cond_a3:
	// switch
	{
	auto item = ( this->index );
	if (item == 1) goto label_pswitch_a9;
	if (item == 2) goto label_pswitch_a9;
	if (item == 3) goto label_pswitch_be;
	if (item == 4) goto label_pswitch_c7;
	if (item == 5) goto label_pswitch_d0;
	if (item == 6) goto label_pswitch_e2;
	if (item == 7) goto label_pswitch_fc;
	if (item == 8) goto label_pswitch_a9;
	if (item == 9) goto label_pswitch_105;
	if (item == 10) goto label_pswitch_10e;
	if (item == 11) goto label_pswitch_117;
	if (item == 12) goto label_pswitch_117;
	if (item == 13) goto label_pswitch_120;
	if (item == 14) goto label_pswitch_129;
	if (item == 15) goto label_pswitch_13d;
	if (item == 16) goto label_pswitch_146;
	if (item == 17) goto label_pswitch_155;
	}
label_goto_a8:
	return;
	// 1692    .line 525
label_pswitch_a9:
	values = std::make_shared<std::vector<std::vector<java::lang::String>>>(elems->size());
	//    .local v6, "values":[Ljava/lang/String;
	i = 0x0;
label_goto_ad:
	if ( i >= elems->size() )
		goto label_cond_bb;
	values[i] = elems[i]->getAsString();
	i = ( i + 0x1);
	goto label_goto_ad;
	// 1721    .line 529
label_cond_bb:
	this->value = values;
	goto label_goto_a8;
	// 1727    .line 534
	// 1728    .end local v6    # "values":[Ljava/lang/String;
label_pswitch_be:
	this->value = elems[cVar3]->getOID();
	goto label_goto_a8;
	// 1740    .line 538
label_pswitch_c7:
	this->value = elems[cVar3]->getOctetString();
	goto label_goto_a8;
	// 1752    .line 542
label_pswitch_d0:
	cVar8 = std::make_shared<sun::security::util::DerInputStream>(elems[cVar3]->toByteArray());
	this->value = cVar8->getUTCTime();
	goto label_goto_a8;
	// 1772    .line 547
label_pswitch_e2:
	values = std::make_shared<std::vector<std::vector<sun::security::pkcs::SignerInfo>>>(elems->size());
	//    .local v7, "values":[Lsun/security/pkcs/SignerInfo;
	i = 0x0;
label_goto_e6:
	if ( i >= elems->size() )
		goto label_cond_f9;
	cVar9 = std::make_shared<sun::security::pkcs::SignerInfo>(elems[i]->toDerInputStream());
	values[i] = cVar9;
	i = ( i + 0x1);
	goto label_goto_e6;
	// 1806    .line 551
label_cond_f9:
	this->value = values;
	goto label_goto_a8;
	// 1812    .line 556
	// 1813    .end local v7    # "values":[Lsun/security/pkcs/SignerInfo;
label_pswitch_fc:
	this->value = elems[cVar3]->getAsString();
	goto label_goto_a8;
	// 1825    .line 560
label_pswitch_105:
	cVar10 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9 extended-certificate attribute not supported.")));
	// throw
	throw cVar10;
	// 1835    .line 564
label_pswitch_10e:
	cVar11 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9 IssuerAndSerialNumberattribute not supported.")));
	// throw
	throw cVar11;
	// 1845    .line 569
label_pswitch_117:
	cVar12 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9 RSA DSI attributes11 and 12, not supported.")));
	// throw
	throw cVar12;
	// 1855    .line 573
label_pswitch_120:
	cVar13 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9 attribute #13 not supported.")));
	// throw
	throw cVar13;
	// 1865    .line 577
label_pswitch_129:
	cVar15 = std::make_shared<sun::security::util::DerInputStream>(elems[cVar3]->toByteArray());
	cVar14 = std::make_shared<sun::security::x509::CertificateExtensions>(cVar15);
	this->value = cVar14;
	goto label_goto_a8;
	// 1887    .line 582
label_pswitch_13d:
	cVar16 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9 SMIMECapability attribute not supported.")));
	// throw
	throw cVar16;
	// 1897    .line 586
label_pswitch_146:
	cVar17 = std::make_shared<sun::security::pkcs::SigningCertificateInfo>(elems[cVar3]->toByteArray());
	this->value = cVar17;
	goto label_goto_a8;
	// 1913    .line 590
label_pswitch_155:
	this->value = elems[cVar3]->toByteArray();
	goto label_goto_a8;
	// 1925    .line 520
	// 1926    nop
	// 1928    :pswitch_data_160
	// 1929    .packed-switch 0x1
	// 1930        :pswitch_a9
	// 1931        :pswitch_a9
	// 1932        :pswitch_be
	// 1933        :pswitch_c7
	// 1934        :pswitch_d0
	// 1935        :pswitch_e2
	// 1936        :pswitch_fc
	// 1937        :pswitch_a9
	// 1938        :pswitch_105
	// 1939        :pswitch_10e
	// 1940        :pswitch_117
	// 1941        :pswitch_117
	// 1942        :pswitch_120
	// 1943        :pswitch_129
	// 1944        :pswitch_13d
	// 1945        :pswitch_146
	// 1946        :pswitch_155
	// 1947    .end packed-switch

}
// .method public constructor <init>(Lsun/security/util/ObjectIdentifier;Ljava/lang/Object;)V
sun::security::pkcs::PKCS9Attribute::PKCS9Attribute(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<java::lang::Object> value)
{
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1955        value = {
	// 1956            Ljava/lang/IllegalArgumentException;
	// 1957        }
	// 1958    .end annotation
	// 1962    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->init(oid, value);
	return;

}
// .method public static getName(Lsun/security/util/ObjectIdentifier;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::PKCS9Attribute::getName(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "oid"    # Lsun/security/util/ObjectIdentifier;
	cVar0 = sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->get(oid);
	cVar0->checkCast("java::lang::String");
	return cVar0;

}
// .method public static getOID(Ljava/lang/String;)Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::pkcs::PKCS9Attribute::getOID(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = sun::security::pkcs::PKCS9Attribute::NAME_OID_TABLE->get(name->toLowerCase(java::util::Locale::ENGLISH));
	cVar0->checkCast("sun::security::util::ObjectIdentifier");
	return cVar0;

}
// .method static indexOf(Ljava/lang/Object;[Ljava/lang/Object;I)I
int sun::security::pkcs::PKCS9Attribute::indexOf(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<std::vector<java::lang::Object>> a,int start)
{
	
	int i;
	
	//    .param p0, "obj"    # Ljava/lang/Object;
	//    .param p1, "a"    # [Ljava/lang/Object;
	//    .param p2, "start"    # I
	i = start;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= a->size() )
		goto label_cond_10;
	if ( !(obj->equals(a[i])) )  
		goto label_cond_d;
	return i;
	// 2038    .line 836
label_cond_d:
	i = ( i + 0x1);
	goto label_goto_1;
	// 2044    .line 839
label_cond_10:
	return -0x1;

}
// .method private init(Lsun/security/util/ObjectIdentifier;Ljava/lang/Object;)V
void sun::security::pkcs::PKCS9Attribute::init(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<java::lang::Class> clazz;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2056        value = {
	// 2057            Ljava/lang/IllegalArgumentException;
	// 2058        }
	// 2059    .end annotation
	this->oid = oid;
	this->index = sun::security::pkcs::PKCS9Attribute::indexOf(oid, sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS, 0x1);
	if ( this->index != -0x1 )
		goto label_cond_54;
	clazz = sun::security::pkcs::PKCS9Attribute::BYTE_ARRAY_CLASS;
	//    .local v0, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_12:
	if ( clazz->isInstance(value) )     
		goto label_cond_5b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Wrong value class  for attribute ")))->append(oid)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" constructing PKCS9Attribute; was ")))->append(value->getClass()->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", should be ")))->append(clazz->toString())->toString());
	// throw
	throw cVar0;
	// 2161    .line 462
	// 2162    .end local v0    # "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_54:
	//    .restart local v0    # "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	goto label_goto_12;
	// 2173    .line 471
label_cond_5b:
	this->value = value;
	return;

}
// .method private throwSingleValuedException()V
void sun::security::pkcs::PKCS9Attribute::throwSingleValuedException()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2184        value = {
	// 2185            Ljava/io/IOException;
	// 2186        }
	// 2187    .end annotation
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Single-value attribute ")))->append(this->oid)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (")))->append(this->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" has multiple values.")))->toString());
	// throw
	throw cVar0;

}
// .method private throwTagException(Ljava/lang/Byte;)V
void sun::security::pkcs::PKCS9Attribute::throwTagException(std::shared_ptr<java::lang::Byte> tag)
{
	
	auto expectedTags;
	std::shared_ptr<java::lang::StringBuffer> msg;
	int i;
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "tag"    # Ljava/lang/Byte;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2258        value = {
	// 2259            Ljava/io/IOException;
	// 2260        }
	// 2261    .end annotation
	expectedTags = sun::security::pkcs::PKCS9Attribute::PKCS9_VALUE_TAGS[this->index];
	//    .local v0, "expectedTags":[Ljava/lang/Byte;
	msg = std::make_shared<java::lang::StringBuffer>(0x64);
	//    .local v2, "msg":Ljava/lang/StringBuffer;
	msg->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Value of attribute ")));
	msg->append(this->oid->toString());
	msg->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (")));
	msg->append(this->getName());
	msg->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") has wrong tag: ")));
	msg->append(tag->toString());
	msg->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".  Expected tags: ")));
	msg->append(expectedTags[0x0]->toString());
	i = 0x1;
	//    .local v1, "i":I
label_goto_47:
	if ( i >= expectedTags->size() )
		goto label_cond_5c;
	msg->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
	msg->append(expectedTags[i]->toString());
	i = ( i + 0x1);
	goto label_goto_47;
	// 2362    .line 875
label_cond_5c:
	msg->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")));
	cVar0 = std::make_shared<java::io::IOException>(msg->toString());
	// throw
	throw cVar0;

}
// .method public derEncode(Ljava/io/OutputStream;)V
void sun::security::pkcs::PKCS9Attribute::derEncode(std::shared_ptr<java::io::OutputStream> out)
{
	
	unsigned char cVar0;
	std::shared_ptr<sun::security::util::DerOutputStream> temp;
	std::shared_ptr<sun::security::util::DerOutputStream> derOut;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::lang::Object> values;
	std::shared<std::vector<std::vector<sun::security::util::DerOutputStream>>> temps;
	int i;
	std::shared_ptr<sun::security::util::DerOutputStream> cVar2;
	std::shared_ptr<sun::security::util::DerOutputStream> temp2;
	std::shared_ptr<java::lang::Object> cVar3;
	std::shared_ptr<java::lang::Object> cVar4;
	std::shared_ptr<java::lang::Object> cVar5;
	std::shared_ptr<java::lang::Object> cVar6;
	std::shared_ptr<java::lang::Object> cVar7;
	std::shared_ptr<sun::security::util::DerOutputStream> cVar8;
	std::shared_ptr<java::io::IOException> cVar9;
	std::shared_ptr<java::io::IOException> cVar10;
	std::shared_ptr<java::io::IOException> cVar11;
	std::shared_ptr<java::io::IOException> cVar12;
	std::shared_ptr<java::lang::Object> exts;
	std::shared_ptr<java::io::IOException> cVar13;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::IOException> cVar14;
	std::shared_ptr<java::io::IOException> cVar15;
	std::shared_ptr<java::lang::Object> cVar16;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2386        value = {
	// 2387            Ljava/io/IOException;
	// 2388        }
	// 2389    .end annotation
	cVar0 = 0x31;
	temp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v4, "temp":Lsun/security/util/DerOutputStream;
	temp->putOID(this->oid);
	// switch
	{
	auto item = ( this->index );
	if (item == -1) goto label_pswitch_27;
	if (item == 0) goto label_pswitch_11;
	if (item == 1) goto label_pswitch_2f;
	if (item == 2) goto label_pswitch_2f;
	if (item == 3) goto label_pswitch_4f;
	if (item == 4) goto label_pswitch_63;
	if (item == 5) goto label_pswitch_77;
	if (item == 6) goto label_pswitch_8b;
	if (item == 7) goto label_pswitch_94;
	if (item == 8) goto label_pswitch_a9;
	if (item == 9) goto label_pswitch_ca;
	if (item == 10) goto label_pswitch_d3;
	if (item == 11) goto label_pswitch_dc;
	if (item == 12) goto label_pswitch_dc;
	if (item == 13) goto label_pswitch_e5;
	if (item == 14) goto label_pswitch_ee;
	if (item == 15) goto label_pswitch_10f;
	if (item == 16) goto label_pswitch_118;
	if (item == 17) goto label_pswitch_121;
	}
label_goto_11:
label_pswitch_11:
	derOut = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "derOut":Lsun/security/util/DerOutputStream;
	derOut->write(0x30, temp->toByteArray());
	out->write(derOut->toByteArray());
	return;
	// 2437    .line 609
	// 2438    .end local v0    # "derOut":Lsun/security/util/DerOutputStream;
label_pswitch_27:
	cVar1 = this->value;
	cVar1->checkCast("unsigned char[]");
	temp->write(cVar1);
	goto label_goto_11;
	// 2448    .line 614
label_pswitch_2f:
	values = this->value;
	values->checkCast("std::vector<java::lang::String>");
	//    .local v7, "values":[Ljava/lang/String;
	temps = std::make_shared<std::vector<std::vector<sun::security::util::DerOutputStream>>>(values->size());
	//    .local v6, "temps":[Lsun/security/util/DerOutputStream;
	i = 0x0;
	//    .local v3, "i":I
label_goto_37:
	if ( i >= values->size() )
		goto label_cond_4b;
	cVar2 = std::make_shared<sun::security::util::DerOutputStream>();
	temps[i] = cVar2;
	temps[i]->putIA5String(values[i]);
	i = ( i + 0x1);
	goto label_goto_37;
	// 2490    .line 622
label_cond_4b:
	temp->putOrderedSetOf(cVar0, temps);
	goto label_goto_11;
	// 2496    .line 628
	// 2497    .end local v3    # "i":I
	// 2498    .end local v6    # "temps":[Lsun/security/util/DerOutputStream;
	// 2499    .end local v7    # "values":[Ljava/lang/String;
label_pswitch_4f:
	temp2 = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v5, "temp2":Lsun/security/util/DerOutputStream;
	cVar3 = this->value;
	cVar3->checkCast("sun::security::util::ObjectIdentifier");
	temp2->putOID(cVar3);
	temp->write(cVar0, temp2->toByteArray());
	goto label_goto_11;
	// 2522    .line 636
	// 2523    .end local v5    # "temp2":Lsun/security/util/DerOutputStream;
label_pswitch_63:
	temp2 = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v5    # "temp2":Lsun/security/util/DerOutputStream;
	cVar4 = this->value;
	cVar4->checkCast("unsigned char[]");
	temp2->putOctetString(cVar4);
	temp->write(cVar0, temp2->toByteArray());
	goto label_goto_11;
	// 2546    .line 644
	// 2547    .end local v5    # "temp2":Lsun/security/util/DerOutputStream;
label_pswitch_77:
	temp2 = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v5    # "temp2":Lsun/security/util/DerOutputStream;
	cVar5 = this->value;
	cVar5->checkCast("java::util::Date");
	temp2->putUTCTime(cVar5);
	temp->write(cVar0, temp2->toByteArray());
	goto label_goto_11;
	// 2570    .line 651
	// 2571    .end local v5    # "temp2":Lsun/security/util/DerOutputStream;
label_pswitch_8b:
	cVar6 = this->value;
	cVar6->checkCast("std::vector<sun::security::util::DerEncoder>");
	temp->putOrderedSetOf(cVar0, cVar6);
	goto label_goto_11;
	// 2581    .line 656
label_pswitch_94:
	temp2 = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v5    # "temp2":Lsun/security/util/DerOutputStream;
	cVar7 = this->value;
	cVar7->checkCast("java::lang::String");
	temp2->putPrintableString(cVar7);
	temp->write(cVar0, temp2->toByteArray());
	goto label_goto_11;
	// 2604    .line 664
	// 2605    .end local v5    # "temp2":Lsun/security/util/DerOutputStream;
label_pswitch_a9:
	values = this->value;
	values->checkCast("std::vector<java::lang::String>");
	//    .restart local v7    # "values":[Ljava/lang/String;
	temps = std::make_shared<std::vector<std::vector<sun::security::util::DerOutputStream>>>(values->size());
	//    .restart local v6    # "temps":[Lsun/security/util/DerOutputStream;
	i = 0x0;
	//    .restart local v3    # "i":I
label_goto_b1:
	if ( i >= values->size() )
		goto label_cond_c5;
	cVar8 = std::make_shared<sun::security::util::DerOutputStream>();
	temps[i] = cVar8;
	temps[i]->putPrintableString(values[i]);
	i = ( i + 0x1);
	goto label_goto_b1;
	// 2647    .line 672
label_cond_c5:
	temp->putOrderedSetOf(cVar0, temps);
	goto label_goto_11;
	// 2653    .line 677
	// 2654    .end local v3    # "i":I
	// 2655    .end local v6    # "temps":[Lsun/security/util/DerOutputStream;
	// 2656    .end local v7    # "values":[Ljava/lang/String;
label_pswitch_ca:
	cVar9 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9 extended-certificate attribute not supported.")));
	// throw
	throw cVar9;
	// 2666    .line 681
label_pswitch_d3:
	cVar10 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9 IssuerAndSerialNumberattribute not supported.")));
	// throw
	throw cVar10;
	// 2676    .line 686
label_pswitch_dc:
	cVar11 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9 RSA DSI attributes11 and 12, not supported.")));
	// throw
	throw cVar11;
	// 2686    .line 690
label_pswitch_e5:
	cVar12 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9 attribute #13 not supported.")));
	// throw
	throw cVar12;
	// 2696    .line 695
label_pswitch_ee:
	temp2 = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v5    # "temp2":Lsun/security/util/DerOutputStream;
	exts = this->value;
	exts->checkCast("sun::security::x509::CertificateExtensions");
	//    .local v2, "exts":Lsun/security/x509/CertificateExtensions;
	try {
	//label_try_start_f8:
	exts->encode(temp2, 0x1);
	//label_try_end_fb:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_104;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_f8 .. :try_end_fb} :catch_104
	temp->write(cVar0, temp2->toByteArray());
	goto label_goto_11;
	// 2726    .line 699
label_catch_104:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/security/cert/CertificateException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar13 = std::make_shared<java::io::IOException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar13;
	// 2742    .line 706
	// 2743    .end local v1    # "ex":Ljava/security/cert/CertificateException;
	// 2744    .end local v2    # "exts":Lsun/security/x509/CertificateExtensions;
	// 2745    .end local v5    # "temp2":Lsun/security/util/DerOutputStream;
label_pswitch_10f:
	cVar14 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9 attribute #15 not supported.")));
	// throw
	throw cVar14;
	// 2755    .line 710
label_pswitch_118:
	cVar15 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9 SigningCertificate attribute not supported.")));
	// throw
	throw cVar15;
	// 2767    .line 715
label_pswitch_121:
	cVar16 = this->value;
	cVar16->checkCast("unsigned char[]");
	temp->write(cVar0, cVar16);
	goto label_goto_11;
	// 2777    .line 607
	// 2778    :pswitch_data_12a
	// 2779    .packed-switch -0x1
	// 2780        :pswitch_27
	// 2781        :pswitch_11
	// 2782        :pswitch_2f
	// 2783        :pswitch_2f
	// 2784        :pswitch_4f
	// 2785        :pswitch_63
	// 2786        :pswitch_77
	// 2787        :pswitch_8b
	// 2788        :pswitch_94
	// 2789        :pswitch_a9
	// 2790        :pswitch_ca
	// 2791        :pswitch_d3
	// 2792        :pswitch_dc
	// 2793        :pswitch_dc
	// 2794        :pswitch_e5
	// 2795        :pswitch_ee
	// 2796        :pswitch_10f
	// 2797        :pswitch_118
	// 2798        :pswitch_121
	// 2799    .end packed-switch

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::PKCS9Attribute::getName()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	if ( this->index != -0x1 )
		goto label_cond_c;
	cVar0 = this->oid->toString();
label_goto_b:
	return cVar0;
	// 2824    .line 770
label_cond_c:
	cVar0 = sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->get(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[this->index]);
	cVar0->checkCast("java::lang::String");
	goto label_goto_b;

}
// .method public getOID()Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::pkcs::PKCS9Attribute::getOID()
{
	
	return this->oid;

}
// .method public getValue()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::pkcs::PKCS9Attribute::getValue()
{
	
	return this->value;

}
// .method public isKnown()Z
bool sun::security::pkcs::PKCS9Attribute::isKnown()
{
	
	bool cVar0;
	
	if ( this->index == -0x1 )
		goto label_cond_7;
	cVar0 = 0x1;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = 0x0;
	goto label_goto_6;

}
// .method public isSingleValued()Z
bool sun::security::pkcs::PKCS9Attribute::isSingleValued()
{
	
	bool cVar0;
	
	if ( this->index == -0x1 )
		goto label_cond_c;
	cVar0 = sun::security::pkcs::PKCS9Attribute::SINGLE_VALUED[this->index];
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x1;
	goto label_goto_b;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::PKCS9Attribute::toString()
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuffer> buf;
	std::shared_ptr<sun::misc::HexDumpEncoder> hexDump;
	std::shared_ptr<java::lang::Object> cVar1;
	int first;
	std::shared_ptr<java::lang::Object> values;
	int j;
	std::shared_ptr<java::lang::String> cVar2;
	
	cVar0 = -0x1;
	buf = std::make_shared<java::lang::StringBuffer>(0x64);
	//    .local v0, "buf":Ljava/lang/StringBuffer;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[")));
	if ( this->index != cVar0 )
		goto label_cond_4e;
	buf->append(this->oid->toString());
label_goto_1b:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": ")));
	if ( this->index == cVar0 )
		goto label_cond_2d;
	if ( !(sun::security::pkcs::PKCS9Attribute::SINGLE_VALUED[this->index]) )  
		goto label_cond_6a;
label_cond_2d:
	if ( !(this->value->instanceOf("unsigned char[]")) )  
		goto label_cond_60;
	hexDump = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v2, "hexDump":Lsun/misc/HexDumpEncoder;
	cVar1 = this->value;
	cVar1->checkCast("unsigned char[]");
	buf->append(hexDump->encodeBuffer(cVar1));
	//    .end local v2    # "hexDump":Lsun/misc/HexDumpEncoder;
label_goto_43:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")));
	return buf->toString();
	// 3002    .line 800
label_cond_4e:
	cVar2 = sun::security::pkcs::PKCS9Attribute::OID_NAME_TABLE->get(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[this->index]);
	cVar2->checkCast("java::lang::String");
	buf->append(cVar2);
	goto label_goto_1b;
	// 3022    .line 809
label_cond_60:
	buf->append(this->value->toString());
	goto label_goto_43;
	// 3034    .line 814
label_cond_6a:
	first = 0x1;
	//    .local v1, "first":Z
	values = this->value;
	values->checkCast("std::vector<java::lang::Object>");
	//    .local v4, "values":[Ljava/lang/Object;
	j = 0x0;
	//    .local v3, "j":I
label_goto_70:
	if ( j >= values->size() )
		goto label_cond_89;
	if ( !(first) )  
		goto label_cond_82;
	first = 0x0;
label_goto_76:
	buf->append(values[j]->toString());
	j = ( j + 0x1);
	goto label_goto_70;
	// 3075    .line 821
label_cond_82:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
	goto label_goto_76;
	// 3083    .line 825
label_cond_89:
	return buf->toString();

}


