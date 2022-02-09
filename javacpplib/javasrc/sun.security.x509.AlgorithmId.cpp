// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\AlgorithmId.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.AlgorithmParameters.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.security.Provider.h"
#include "java.security.Security.h"
#include "java.util.Enumeration.h"
#include "java.util.HashMap.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"

static sun::security::x509::AlgorithmId::AES_oid;
static sun::security::x509::AlgorithmId::DH_PKIX_data;
static sun::security::x509::AlgorithmId::DH_PKIX_oid;
static sun::security::x509::AlgorithmId::DH_data;
static sun::security::x509::AlgorithmId::DH_oid;
static sun::security::x509::AlgorithmId::DSA_OIW_data;
static sun::security::x509::AlgorithmId::DSA_OIW_oid;
static sun::security::x509::AlgorithmId::DSA_PKIX_data;
static sun::security::x509::AlgorithmId::DSA_oid;
static sun::security::x509::AlgorithmId::ECDH_oid;
static sun::security::x509::AlgorithmId::EC_oid;
static sun::security::x509::AlgorithmId::MD2_oid;
static sun::security::x509::AlgorithmId::MD5_oid;
static sun::security::x509::AlgorithmId::RSAEncryption_data;
static sun::security::x509::AlgorithmId::RSAEncryption_oid;
static sun::security::x509::AlgorithmId::RSA_data;
static sun::security::x509::AlgorithmId::RSA_oid;
static sun::security::x509::AlgorithmId::SHA224_oid;
static sun::security::x509::AlgorithmId::SHA256_oid;
static sun::security::x509::AlgorithmId::SHA384_oid;
static sun::security::x509::AlgorithmId::SHA512_oid;
static sun::security::x509::AlgorithmId::SHA_oid;
static sun::security::x509::AlgorithmId::dsaWithSHA1_PKIX_data;
static sun::security::x509::AlgorithmId::initOidTableVersion = 0x0;
static sun::security::x509::AlgorithmId::md2WithRSAEncryption_data;
static sun::security::x509::AlgorithmId::md2WithRSAEncryption_oid;
static sun::security::x509::AlgorithmId::md5WithRSAEncryption_data;
static sun::security::x509::AlgorithmId::md5WithRSAEncryption_oid;
static sun::security::x509::AlgorithmId::nameTable;
static sun::security::x509::AlgorithmId::oidTable;
static sun::security::x509::AlgorithmId::pbeWithMD5AndDES_oid;
static sun::security::x509::AlgorithmId::pbeWithMD5AndRC2_oid;
static sun::security::x509::AlgorithmId::pbeWithSHA1AndDES_oid;
static sun::security::x509::AlgorithmId::pbeWithSHA1AndDESede_oid = nullptr;
static sun::security::x509::AlgorithmId::pbeWithSHA1AndRC2_40_oid = nullptr;
static sun::security::x509::AlgorithmId::pbeWithSHA1AndRC2_oid;
static sun::security::x509::AlgorithmId::serialVersionUID = 0x640067c6d62263e5L;
static sun::security::x509::AlgorithmId::sha1WithDSA_OIW_data;
static sun::security::x509::AlgorithmId::sha1WithDSA_OIW_oid;
static sun::security::x509::AlgorithmId::sha1WithDSA_oid;
static sun::security::x509::AlgorithmId::sha1WithECDSA_oid;
static sun::security::x509::AlgorithmId::sha1WithRSAEncryption_OIW_data;
static sun::security::x509::AlgorithmId::sha1WithRSAEncryption_OIW_oid;
static sun::security::x509::AlgorithmId::sha1WithRSAEncryption_data;
static sun::security::x509::AlgorithmId::sha1WithRSAEncryption_oid;
static sun::security::x509::AlgorithmId::sha224WithDSA_oid;
static sun::security::x509::AlgorithmId::sha224WithECDSA_oid;
static sun::security::x509::AlgorithmId::sha224WithRSAEncryption_data;
static sun::security::x509::AlgorithmId::sha224WithRSAEncryption_oid;
static sun::security::x509::AlgorithmId::sha256WithDSA_oid;
static sun::security::x509::AlgorithmId::sha256WithECDSA_oid;
static sun::security::x509::AlgorithmId::sha256WithRSAEncryption_data;
static sun::security::x509::AlgorithmId::sha256WithRSAEncryption_oid;
static sun::security::x509::AlgorithmId::sha384WithECDSA_oid;
static sun::security::x509::AlgorithmId::sha384WithRSAEncryption_data;
static sun::security::x509::AlgorithmId::sha384WithRSAEncryption_oid;
static sun::security::x509::AlgorithmId::sha512WithECDSA_oid;
static sun::security::x509::AlgorithmId::sha512WithRSAEncryption_data;
static sun::security::x509::AlgorithmId::sha512WithRSAEncryption_oid;
static sun::security::x509::AlgorithmId::shaWithDSA_OIW_data;
static sun::security::x509::AlgorithmId::shaWithDSA_OIW_oid;
static sun::security::x509::AlgorithmId::specifiedWithECDSA_oid;
// .method static constructor <clinit>()V
void sun::security::x509::AlgorithmId::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<java::util::HashMap> cVar5;
	std::shared_ptr<java::util::HashMap> cVar6;
	std::shared<std::vector<int[]>> cVar7;
	std::shared<std::vector<int[]>> cVar8;
	std::shared<std::vector<int[]>> cVar9;
	std::shared<std::vector<int[]>> cVar10;
	std::shared<std::vector<int[]>> cVar11;
	std::shared<std::vector<int[]>> cVar12;
	std::shared<std::vector<int[]>> cVar13;
	std::shared<std::vector<int[]>> cVar14;
	std::shared<std::vector<int[]>> cVar15;
	std::shared<std::vector<int[]>> cVar16;
	std::shared<std::vector<int[]>> cVar17;
	std::shared<std::vector<int[]>> cVar18;
	std::shared<std::vector<int[]>> cVar19;
	std::shared<std::vector<int[]>> cVar20;
	std::shared<std::vector<int[]>> cVar21;
	std::shared<std::vector<int[]>> cVar22;
	std::shared<std::vector<int[]>> cVar23;
	std::shared<std::vector<int[]>> cVar24;
	std::shared<std::vector<int[]>> cVar25;
	std::shared<std::vector<int[]>> cVar26;
	std::shared<std::vector<int[]>> cVar27;
	std::shared<std::vector<int[]>> cVar28;
	std::shared<std::vector<int[]>> cVar29;
	std::shared<std::vector<int[]>> cVar30;
	std::shared<std::vector<int[]>> cVar31;
	std::shared<std::vector<int[]>> cVar32;
	std::shared<std::vector<int[]>> cVar33;
	std::shared<std::vector<int[]>> cVar34;
	std::shared<std::vector<int[]>> cVar35;
	std::shared<std::vector<int[]>> cVar36;
	std::shared<std::vector<int[]>> cVar37;
	std::shared<std::vector<int[]>> cVar38;
	std::shared<std::vector<int[]>> cVar39;
	std::shared<std::vector<int[]>> cVar40;
	std::shared<std::vector<int[]>> cVar41;
	std::shared<std::vector<int[]>> cVar42;
	std::shared<std::vector<int[]>> cVar43;
	std::shared<std::vector<int[]>> cVar44;
	std::shared<std::vector<int[]>> cVar45;
	
	cVar0 = 0x8;
	cVar1 = 0x1;
	cVar2 = 0x9;
	cVar3 = 0x6;
	cVar4 = 0x7;
	sun::security::x509::AlgorithmId::initOidTableVersion = -0x1;
	cVar5 = std::make_shared<java::util::HashMap>(cVar1);
	sun::security::x509::AlgorithmId::oidTable = cVar5;
	cVar6 = std::make_shared<java::util::HashMap>();
	sun::security::x509::AlgorithmId::nameTable = cVar6;
	cVar7 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::AlgorithmId::MD2_oid = sun::security::util::ObjectIdentifier::newInternal(cVar7);
	cVar8 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::AlgorithmId::MD5_oid = sun::security::util::ObjectIdentifier::newInternal(cVar8);
	cVar9 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::AlgorithmId::SHA_oid = sun::security::util::ObjectIdentifier::newInternal(cVar9);
	cVar10 = std::make_shared<std::vector<int[]>>(cVar2);
	?;
	sun::security::x509::AlgorithmId::SHA224_oid = sun::security::util::ObjectIdentifier::newInternal(cVar10);
	cVar11 = std::make_shared<std::vector<int[]>>(cVar2);
	?;
	sun::security::x509::AlgorithmId::SHA256_oid = sun::security::util::ObjectIdentifier::newInternal(cVar11);
	cVar12 = std::make_shared<std::vector<int[]>>(cVar2);
	?;
	sun::security::x509::AlgorithmId::SHA384_oid = sun::security::util::ObjectIdentifier::newInternal(cVar12);
	cVar13 = std::make_shared<std::vector<int[]>>(cVar2);
	?;
	sun::security::x509::AlgorithmId::SHA512_oid = sun::security::util::ObjectIdentifier::newInternal(cVar13);
	cVar14 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::DH_data = cVar14;
	cVar15 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::AlgorithmId::DH_PKIX_data = cVar15;
	cVar16 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::AlgorithmId::DSA_OIW_data = cVar16;
	cVar17 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::AlgorithmId::DSA_PKIX_data = cVar17;
	?;
	sun::security::x509::AlgorithmId::RSA_data = ?;
	cVar18 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::RSAEncryption_data = cVar18;
	cVar19 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::AlgorithmId::EC_oid = sun::security::x509::AlgorithmId::oid(cVar19);
	?;
	sun::security::x509::AlgorithmId::ECDH_oid = sun::security::x509::AlgorithmId::oid(?);
	cVar20 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::AlgorithmId::AES_oid = sun::security::x509::AlgorithmId::oid(cVar20);
	cVar21 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::md2WithRSAEncryption_data = cVar21;
	cVar22 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::md5WithRSAEncryption_data = cVar22;
	cVar23 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::sha1WithRSAEncryption_data = cVar23;
	cVar24 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::AlgorithmId::sha1WithRSAEncryption_OIW_data = cVar24;
	cVar25 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::sha224WithRSAEncryption_data = cVar25;
	cVar26 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::sha256WithRSAEncryption_data = cVar26;
	cVar27 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::sha384WithRSAEncryption_data = cVar27;
	cVar28 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::sha512WithRSAEncryption_data = cVar28;
	cVar29 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::AlgorithmId::shaWithDSA_OIW_data = cVar29;
	cVar30 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::AlgorithmId::sha1WithDSA_OIW_data = cVar30;
	cVar31 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::AlgorithmId::dsaWithSHA1_PKIX_data = cVar31;
	cVar32 = std::make_shared<std::vector<int[]>>(cVar2);
	?;
	sun::security::x509::AlgorithmId::sha224WithDSA_oid = sun::security::x509::AlgorithmId::oid(cVar32);
	cVar33 = std::make_shared<std::vector<int[]>>(cVar2);
	?;
	sun::security::x509::AlgorithmId::sha256WithDSA_oid = sun::security::x509::AlgorithmId::oid(cVar33);
	cVar34 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::AlgorithmId::sha1WithECDSA_oid = sun::security::x509::AlgorithmId::oid(cVar34);
	cVar35 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::sha224WithECDSA_oid = sun::security::x509::AlgorithmId::oid(cVar35);
	cVar36 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::sha256WithECDSA_oid = sun::security::x509::AlgorithmId::oid(cVar36);
	cVar37 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::sha384WithECDSA_oid = sun::security::x509::AlgorithmId::oid(cVar37);
	cVar38 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::sha512WithECDSA_oid = sun::security::x509::AlgorithmId::oid(cVar38);
	cVar39 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::AlgorithmId::specifiedWithECDSA_oid = sun::security::x509::AlgorithmId::oid(cVar39);
	cVar40 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::pbeWithMD5AndDES_oid = sun::security::util::ObjectIdentifier::newInternal(cVar40);
	cVar41 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::pbeWithMD5AndRC2_oid = sun::security::util::ObjectIdentifier::newInternal(cVar41);
	cVar42 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::pbeWithSHA1AndDES_oid = sun::security::util::ObjectIdentifier::newInternal(cVar42);
	cVar43 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	sun::security::x509::AlgorithmId::pbeWithSHA1AndRC2_oid = sun::security::util::ObjectIdentifier::newInternal(cVar43);
	cVar44 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::AlgorithmId::pbeWithSHA1AndDESede_oid = sun::security::util::ObjectIdentifier::newInternal(cVar44);
	cVar45 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::AlgorithmId::pbeWithSHA1AndRC2_40_oid = sun::security::util::ObjectIdentifier::newInternal(cVar45);
	sun::security::x509::AlgorithmId::DH_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::DH_data);
	sun::security::x509::AlgorithmId::DH_PKIX_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::DH_PKIX_data);
	sun::security::x509::AlgorithmId::DSA_OIW_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::DSA_OIW_data);
	sun::security::x509::AlgorithmId::DSA_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::DSA_PKIX_data);
	sun::security::x509::AlgorithmId::RSA_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::RSA_data);
	sun::security::x509::AlgorithmId::RSAEncryption_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::RSAEncryption_data);
	sun::security::x509::AlgorithmId::md2WithRSAEncryption_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::md2WithRSAEncryption_data);
	sun::security::x509::AlgorithmId::md5WithRSAEncryption_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::md5WithRSAEncryption_data);
	sun::security::x509::AlgorithmId::sha1WithRSAEncryption_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::sha1WithRSAEncryption_data);
	sun::security::x509::AlgorithmId::sha1WithRSAEncryption_OIW_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::sha1WithRSAEncryption_OIW_data);
	sun::security::x509::AlgorithmId::sha224WithRSAEncryption_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::sha224WithRSAEncryption_data);
	sun::security::x509::AlgorithmId::sha256WithRSAEncryption_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::sha256WithRSAEncryption_data);
	sun::security::x509::AlgorithmId::sha384WithRSAEncryption_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::sha384WithRSAEncryption_data);
	sun::security::x509::AlgorithmId::sha512WithRSAEncryption_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::sha512WithRSAEncryption_data);
	sun::security::x509::AlgorithmId::shaWithDSA_OIW_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::shaWithDSA_OIW_data);
	sun::security::x509::AlgorithmId::sha1WithDSA_OIW_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::sha1WithDSA_OIW_data);
	sun::security::x509::AlgorithmId::sha1WithDSA_oid = sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::AlgorithmId::dsaWithSHA1_PKIX_data);
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::MD5_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("MD5")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::MD2_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("MD2")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::SHA_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-1")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::SHA224_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-224")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::SHA256_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-256")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::SHA384_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-384")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::SHA512_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-512")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::RSAEncryption_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("RSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::RSA_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("RSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::DH_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("Diffie-Hellman")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::DH_PKIX_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("Diffie-Hellman")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::DSA_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("DSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::DSA_OIW_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("DSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::EC_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("EC")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::ECDH_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("ECDH")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::AES_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("AES")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha1WithECDSA_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1withECDSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha224WithECDSA_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA224withECDSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha256WithECDSA_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA256withECDSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha384WithECDSA_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA384withECDSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha512WithECDSA_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA512withECDSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::md5WithRSAEncryption_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("MD5withRSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::md2WithRSAEncryption_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("MD2withRSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha1WithDSA_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1withDSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha1WithDSA_OIW_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1withDSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::shaWithDSA_OIW_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1withDSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha224WithDSA_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA224withDSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha256WithDSA_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA256withDSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha1WithRSAEncryption_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1withRSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha1WithRSAEncryption_OIW_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1withRSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha224WithRSAEncryption_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA224withRSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha256WithRSAEncryption_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA256withRSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha384WithRSAEncryption_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA384withRSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::sha512WithRSAEncryption_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA512withRSA")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::pbeWithMD5AndDES_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("PBEWithMD5AndDES")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::pbeWithMD5AndRC2_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("PBEWithMD5AndRC2")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::pbeWithSHA1AndDES_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("PBEWithSHA1AndDES")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::pbeWithSHA1AndRC2_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("PBEWithSHA1AndRC2")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::pbeWithSHA1AndDESede_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("PBEWithSHA1AndDESede")));
	sun::security::x509::AlgorithmId::nameTable->put(sun::security::x509::AlgorithmId::pbeWithSHA1AndRC2_40_oid, std::make_shared<java::lang::String>(std::make_shared<char[]>("PBEWithSHA1AndRC2_40")));
	return;
	// 1153    .line 672
	// 1154    nop
	// 1156    :array_3b6
	// 1157    .array-data 4
	// 1158        0x1
	// 1159        0x2
	// 1160        0x348
	// 1161        0x1bb8d
	// 1162        0x2
	// 1163        0x2
	// 1164    .end array-data
	// 1166    .line 679
	// 1167    :array_3c6
	// 1168    .array-data 4
	// 1169        0x1
	// 1170        0x2
	// 1171        0x348
	// 1172        0x1bb8d
	// 1173        0x2
	// 1174        0x5
	// 1175    .end array-data
	// 1177    .line 688
	// 1178    :array_3d6
	// 1179    .array-data 4
	// 1180        0x1
	// 1181        0x3
	// 1182        0xe
	// 1183        0x3
	// 1184        0x2
	// 1185        0x1a
	// 1186    .end array-data
	// 1188    .line 691
	// 1189    :array_3e6
	// 1190    .array-data 4
	// 1191        0x2
	// 1192        0x10
	// 1193        0x348
	// 1194        0x1
	// 1195        0x65
	// 1196        0x3
	// 1197        0x4
	// 1198        0x2
	// 1199        0x4
	// 1200    .end array-data
	// 1202    .line 694
	// 1203    :array_3fc
	// 1204    .array-data 4
	// 1205        0x2
	// 1206        0x10
	// 1207        0x348
	// 1208        0x1
	// 1209        0x65
	// 1210        0x3
	// 1211        0x4
	// 1212        0x2
	// 1213        0x1
	// 1214    .end array-data
	// 1216    .line 697
	// 1217    :array_412
	// 1218    .array-data 4
	// 1219        0x2
	// 1220        0x10
	// 1221        0x348
	// 1222        0x1
	// 1223        0x65
	// 1224        0x3
	// 1225        0x4
	// 1226        0x2
	// 1227        0x2
	// 1228    .end array-data
	// 1230    .line 700
	// 1231    :array_428
	// 1232    .array-data 4
	// 1233        0x2
	// 1234        0x10
	// 1235        0x348
	// 1236        0x1
	// 1237        0x65
	// 1238        0x3
	// 1239        0x4
	// 1240        0x2
	// 1241        0x3
	// 1242    .end array-data
	// 1244    .line 705
	// 1245    :array_43e
	// 1246    .array-data 4
	// 1247        0x1
	// 1248        0x2
	// 1249        0x348
	// 1250        0x1bb8d
	// 1251        0x1
	// 1252        0x3
	// 1253        0x1
	// 1254    .end array-data
	// 1256    .line 706
	// 1257    :array_450
	// 1258    .array-data 4
	// 1259        0x1
	// 1260        0x2
	// 1261        0x348
	// 1262        0x273e
	// 1263        0x2
	// 1264        0x1
	// 1265    .end array-data
	// 1267    .line 707
	// 1268    :array_460
	// 1269    .array-data 4
	// 1270        0x1
	// 1271        0x3
	// 1272        0xe
	// 1273        0x3
	// 1274        0x2
	// 1275        0xc
	// 1276    .end array-data
	// 1278    .line 708
	// 1279    :array_470
	// 1280    .array-data 4
	// 1281        0x1
	// 1282        0x2
	// 1283        0x348
	// 1284        0x2738
	// 1285        0x4
	// 1286        0x1
	// 1287    .end array-data
	// 1289    .line 711
	// 1290    :array_480
	// 1291    .array-data 4
	// 1292        0x1
	// 1293        0x2
	// 1294        0x348
	// 1295        0x1bb8d
	// 1296        0x1
	// 1297        0x1
	// 1298        0x1
	// 1299    .end array-data
	// 1301    .line 717
	// 1302    :array_492
	// 1303    .array-data 4
	// 1304        0x1
	// 1305        0x2
	// 1306        0x348
	// 1307        0x273d
	// 1308        0x2
	// 1309        0x1
	// 1310    .end array-data
	// 1312    .line 726
	// 1313    :array_4a2
	// 1314    .array-data 4
	// 1315        0x2
	// 1316        0x10
	// 1317        0x348
	// 1318        0x1
	// 1319        0x65
	// 1320        0x3
	// 1321        0x4
	// 1322        0x1
	// 1323    .end array-data
	// 1325    .line 732
	// 1326    :array_4b6
	// 1327    .array-data 4
	// 1328        0x1
	// 1329        0x2
	// 1330        0x348
	// 1331        0x1bb8d
	// 1332        0x1
	// 1333        0x1
	// 1334        0x2
	// 1335    .end array-data
	// 1337    .line 734
	// 1338    :array_4c8
	// 1339    .array-data 4
	// 1340        0x1
	// 1341        0x2
	// 1342        0x348
	// 1343        0x1bb8d
	// 1344        0x1
	// 1345        0x1
	// 1346        0x4
	// 1347    .end array-data
	// 1349    .line 736
	// 1350    :array_4da
	// 1351    .array-data 4
	// 1352        0x1
	// 1353        0x2
	// 1354        0x348
	// 1355        0x1bb8d
	// 1356        0x1
	// 1357        0x1
	// 1358        0x5
	// 1359    .end array-data
	// 1361    .line 738
	// 1362    :array_4ec
	// 1363    .array-data 4
	// 1364        0x1
	// 1365        0x3
	// 1366        0xe
	// 1367        0x3
	// 1368        0x2
	// 1369        0x1d
	// 1370    .end array-data
	// 1372    .line 740
	// 1373    :array_4fc
	// 1374    .array-data 4
	// 1375        0x1
	// 1376        0x2
	// 1377        0x348
	// 1378        0x1bb8d
	// 1379        0x1
	// 1380        0x1
	// 1381        0xe
	// 1382    .end array-data
	// 1384    .line 742
	// 1385    :array_50e
	// 1386    .array-data 4
	// 1387        0x1
	// 1388        0x2
	// 1389        0x348
	// 1390        0x1bb8d
	// 1391        0x1
	// 1392        0x1
	// 1393        0xb
	// 1394    .end array-data
	// 1396    .line 744
	// 1397    :array_520
	// 1398    .array-data 4
	// 1399        0x1
	// 1400        0x2
	// 1401        0x348
	// 1402        0x1bb8d
	// 1403        0x1
	// 1404        0x1
	// 1405        0xc
	// 1406    .end array-data
	// 1408    .line 746
	// 1409    :array_532
	// 1410    .array-data 4
	// 1411        0x1
	// 1412        0x2
	// 1413        0x348
	// 1414        0x1bb8d
	// 1415        0x1
	// 1416        0x1
	// 1417        0xd
	// 1418    .end array-data
	// 1420    .line 748
	// 1421    :array_544
	// 1422    .array-data 4
	// 1423        0x1
	// 1424        0x3
	// 1425        0xe
	// 1426        0x3
	// 1427        0x2
	// 1428        0xd
	// 1429    .end array-data
	// 1431    .line 750
	// 1432    :array_554
	// 1433    .array-data 4
	// 1434        0x1
	// 1435        0x3
	// 1436        0xe
	// 1437        0x3
	// 1438        0x2
	// 1439        0x1b
	// 1440    .end array-data
	// 1442    .line 752
	// 1443    :array_564
	// 1444    .array-data 4
	// 1445        0x1
	// 1446        0x2
	// 1447        0x348
	// 1448        0x2738
	// 1449        0x4
	// 1450        0x3
	// 1451    .end array-data
	// 1453    .line 766
	// 1454    :array_574
	// 1455    .array-data 4
	// 1456        0x2
	// 1457        0x10
	// 1458        0x348
	// 1459        0x1
	// 1460        0x65
	// 1461        0x3
	// 1462        0x4
	// 1463        0x3
	// 1464        0x1
	// 1465    .end array-data
	// 1467    .line 768
	// 1468    :array_58a
	// 1469    .array-data 4
	// 1470        0x2
	// 1471        0x10
	// 1472        0x348
	// 1473        0x1
	// 1474        0x65
	// 1475        0x3
	// 1476        0x4
	// 1477        0x3
	// 1478        0x2
	// 1479    .end array-data
	// 1481    .line 771
	// 1482    :array_5a0
	// 1483    .array-data 4
	// 1484        0x1
	// 1485        0x2
	// 1486        0x348
	// 1487        0x273d
	// 1488        0x4
	// 1489        0x1
	// 1490    .end array-data
	// 1492    .line 773
	// 1493    :array_5b0
	// 1494    .array-data 4
	// 1495        0x1
	// 1496        0x2
	// 1497        0x348
	// 1498        0x273d
	// 1499        0x4
	// 1500        0x3
	// 1501        0x1
	// 1502    .end array-data
	// 1504    .line 775
	// 1505    :array_5c2
	// 1506    .array-data 4
	// 1507        0x1
	// 1508        0x2
	// 1509        0x348
	// 1510        0x273d
	// 1511        0x4
	// 1512        0x3
	// 1513        0x2
	// 1514    .end array-data
	// 1516    .line 777
	// 1517    :array_5d4
	// 1518    .array-data 4
	// 1519        0x1
	// 1520        0x2
	// 1521        0x348
	// 1522        0x273d
	// 1523        0x4
	// 1524        0x3
	// 1525        0x3
	// 1526    .end array-data
	// 1528    .line 779
	// 1529    :array_5e6
	// 1530    .array-data 4
	// 1531        0x1
	// 1532        0x2
	// 1533        0x348
	// 1534        0x273d
	// 1535        0x4
	// 1536        0x3
	// 1537        0x4
	// 1538    .end array-data
	// 1540    .line 781
	// 1541    :array_5f8
	// 1542    .array-data 4
	// 1543        0x1
	// 1544        0x2
	// 1545        0x348
	// 1546        0x273d
	// 1547        0x4
	// 1548        0x3
	// 1549    .end array-data
	// 1551    .line 788
	// 1552    :array_608
	// 1553    .array-data 4
	// 1554        0x1
	// 1555        0x2
	// 1556        0x348
	// 1557        0x1bb8d
	// 1558        0x1
	// 1559        0x5
	// 1560        0x3
	// 1561    .end array-data
	// 1563    .line 790
	// 1564    :array_61a
	// 1565    .array-data 4
	// 1566        0x1
	// 1567        0x2
	// 1568        0x348
	// 1569        0x1bb8d
	// 1570        0x1
	// 1571        0x5
	// 1572        0x6
	// 1573    .end array-data
	// 1575    .line 792
	// 1576    :array_62c
	// 1577    .array-data 4
	// 1578        0x1
	// 1579        0x2
	// 1580        0x348
	// 1581        0x1bb8d
	// 1582        0x1
	// 1583        0x5
	// 1584        0xa
	// 1585    .end array-data
	// 1587    .line 794
	// 1588    :array_63e
	// 1589    .array-data 4
	// 1590        0x1
	// 1591        0x2
	// 1592        0x348
	// 1593        0x1bb8d
	// 1594        0x1
	// 1595        0x5
	// 1596        0xb
	// 1597    .end array-data
	// 1599    .line 796
	// 1600    :array_650
	// 1601    .array-data 4
	// 1602        0x1
	// 1603        0x2
	// 1604        0x348
	// 1605        0x1bb8d
	// 1606        0x1
	// 1607        0xc
	// 1608        0x1
	// 1609        0x3
	// 1610    .end array-data
	// 1612    .line 798
	// 1613    :array_664
	// 1614    .array-data 4
	// 1615        0x1
	// 1616        0x2
	// 1617        0x348
	// 1618        0x1bb8d
	// 1619        0x1
	// 1620        0xc
	// 1621        0x1
	// 1622        0x6
	// 1623    .end array-data

}
// .method public constructor <init>()V
sun::security::x509::AlgorithmId::AlgorithmId()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1629    .end annotation
	// 1633    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->constructedFromDer = 0x1;
	return;

}
// .method public constructor <init>(Lsun/security/util/ObjectIdentifier;)V
sun::security::x509::AlgorithmId::AlgorithmId(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	// 1650    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->constructedFromDer = 0x1;
	this->algid = oid;
	return;

}
// .method public constructor <init>(Lsun/security/util/ObjectIdentifier;Ljava/security/AlgorithmParameters;)V
sun::security::x509::AlgorithmId::AlgorithmId(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<java::security::AlgorithmParameters> algparams)
{
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "algparams"    # Ljava/security/AlgorithmParameters;
	// 1671    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->constructedFromDer = 0x1;
	this->algid = oid;
	this->algParams = algparams;
	this->constructedFromDer = 0x0;
	return;

}
// .method private constructor <init>(Lsun/security/util/ObjectIdentifier;Lsun/security/util/DerValue;)V
sun::security::x509::AlgorithmId::AlgorithmId(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<sun::security::util::DerValue> params)
{
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "params"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1698        value = {
	// 1699            Ljava/io/IOException;
	// 1700        }
	// 1701    .end annotation
	// 1705    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->constructedFromDer = 0x1;
	this->algid = oid;
	this->params = params;
	if ( !(this->params) )  
		goto label_cond_11;
	this->decodeParams();
label_cond_11:
	return;

}
// .method private static algOID(Ljava/lang/String;)Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::x509::AlgorithmId::algOID(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar0;
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar1;
	std::shared_ptr<java::util::Map> cVar2;
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar3;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1735        value = {
	// 1736            Ljava/io/IOException;
	// 1737        }
	// 1738    .end annotation
	if ( name->indexOf(0x2e) == -0x1 )
		goto label_cond_29;
	if ( !(name->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("OID.")))) )  
		goto label_cond_23;
	cVar0 = std::make_shared<sun::security::util::ObjectIdentifier>(name->substring(std::make_shared<java::lang::String>(std::make_shared<char[]>("OID."))->length()));
	return cVar0;
	// 1778    .line 465
label_cond_23:
	cVar1 = std::make_shared<sun::security::util::ObjectIdentifier>(name);
	return cVar1;
	// 1786    .line 470
label_cond_29:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("MD5")))) )  
		goto label_cond_35;
	return sun::security::x509::AlgorithmId::MD5_oid;
	// 1801    .line 473
label_cond_35:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("MD2")))) )  
		goto label_cond_41;
	return sun::security::x509::AlgorithmId::MD2_oid;
	// 1816    .line 476
label_cond_41:
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA"))) )     
		goto label_cond_5c;
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1"))) )     
		goto label_cond_5c;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-1")))) )  
		goto label_cond_5f;
label_cond_5c:
	return sun::security::x509::AlgorithmId::SHA_oid;
	// 1850    .line 480
label_cond_5f:
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-256"))) )     
		goto label_cond_71;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA256")))) )  
		goto label_cond_74;
label_cond_71:
	return sun::security::x509::AlgorithmId::SHA256_oid;
	// 1876    .line 484
label_cond_74:
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-384"))) )     
		goto label_cond_86;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA384")))) )  
		goto label_cond_89;
label_cond_86:
	return sun::security::x509::AlgorithmId::SHA384_oid;
	// 1902    .line 488
label_cond_89:
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-512"))) )     
		goto label_cond_9b;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA512")))) )  
		goto label_cond_9e;
label_cond_9b:
	return sun::security::x509::AlgorithmId::SHA512_oid;
	// 1928    .line 492
label_cond_9e:
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-224"))) )     
		goto label_cond_b0;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA224")))) )  
		goto label_cond_b3;
label_cond_b0:
	return sun::security::x509::AlgorithmId::SHA224_oid;
	// 1954    .line 498
label_cond_b3:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("RSA")))) )  
		goto label_cond_bf;
	return sun::security::x509::AlgorithmId::RSAEncryption_oid;
	// 1969    .line 501
label_cond_bf:
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("Diffie-Hellman"))) )     
		goto label_cond_d1;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("DH")))) )  
		goto label_cond_d4;
label_cond_d1:
	return sun::security::x509::AlgorithmId::DH_oid;
	// 1995    .line 505
label_cond_d4:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("DSA")))) )  
		goto label_cond_e0;
	return sun::security::x509::AlgorithmId::DSA_oid;
	// 2010    .line 508
label_cond_e0:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("EC")))) )  
		goto label_cond_ec;
	return sun::security::x509::AlgorithmId::EC_oid;
	// 2025    .line 511
label_cond_ec:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("ECDH")))) )  
		goto label_cond_f8;
	return sun::security::x509::AlgorithmId::ECDH_oid;
	// 2040    .line 516
label_cond_f8:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("AES")))) )  
		goto label_cond_104;
	return sun::security::x509::AlgorithmId::AES_oid;
	// 2055    .line 521
label_cond_104:
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("MD5withRSA"))) )     
		goto label_cond_116;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("MD5/RSA")))) )  
		goto label_cond_119;
label_cond_116:
	return sun::security::x509::AlgorithmId::md5WithRSAEncryption_oid;
	// 2081    .line 525
label_cond_119:
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("MD2withRSA"))) )     
		goto label_cond_12b;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("MD2/RSA")))) )  
		goto label_cond_12e;
label_cond_12b:
	return sun::security::x509::AlgorithmId::md2WithRSAEncryption_oid;
	// 2107    .line 529
label_cond_12e:
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHAwithDSA"))) )     
		goto label_cond_16d;
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1withDSA"))) )     
		goto label_cond_16d;
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA/DSA"))) )     
		goto label_cond_16d;
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1/DSA"))) )     
		goto label_cond_16d;
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("DSAWithSHA1"))) )     
		goto label_cond_16d;
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("DSS"))) )     
		goto label_cond_16d;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-1/DSA")))) )  
		goto label_cond_170;
label_cond_16d:
	return sun::security::x509::AlgorithmId::sha1WithDSA_oid;
	// 2183    .line 538
label_cond_170:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA224WithDSA")))) )  
		goto label_cond_17c;
	return sun::security::x509::AlgorithmId::sha224WithDSA_oid;
	// 2198    .line 541
label_cond_17c:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA256WithDSA")))) )  
		goto label_cond_188;
	return sun::security::x509::AlgorithmId::sha256WithDSA_oid;
	// 2213    .line 544
label_cond_188:
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1WithRSA"))) )     
		goto label_cond_19a;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1/RSA")))) )  
		goto label_cond_19d;
label_cond_19a:
	return sun::security::x509::AlgorithmId::sha1WithRSAEncryption_oid;
	// 2239    .line 548
label_cond_19d:
	if ( name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1withECDSA"))) )     
		goto label_cond_1af;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("ECDSA")))) )  
		goto label_cond_1b2;
label_cond_1af:
	return sun::security::x509::AlgorithmId::sha1WithECDSA_oid;
	// 2265    .line 552
label_cond_1b2:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA224withECDSA")))) )  
		goto label_cond_1be;
	return sun::security::x509::AlgorithmId::sha224WithECDSA_oid;
	// 2280    .line 555
label_cond_1be:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA256withECDSA")))) )  
		goto label_cond_1ca;
	return sun::security::x509::AlgorithmId::sha256WithECDSA_oid;
	// 2295    .line 558
label_cond_1ca:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA384withECDSA")))) )  
		goto label_cond_1d6;
	return sun::security::x509::AlgorithmId::sha384WithECDSA_oid;
	// 2310    .line 561
label_cond_1d6:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA512withECDSA")))) )  
		goto label_cond_1e2;
	return sun::security::x509::AlgorithmId::sha512WithECDSA_oid;
	// 2325    .line 568
label_cond_1e2:
	cVar2 = sun::security::x509::AlgorithmId::oidTable;
	cVar2->monitor_enter();
	try {
	//label_try_start_1e5:
	sun::security::x509::AlgorithmId::reinitializeMappingTableLocked({const[class].FS-Param});
	cVar3 = sun::security::x509::AlgorithmId::oidTable->get(name->toUpperCase(java::util::Locale::ENGLISH));
	cVar3->checkCast("sun::security::util::ObjectIdentifier");
	//label_try_end_1f6:
	}
	catch (...){
		goto label_catchall_1f8;
	}
	//    .catchall {:try_start_1e5 .. :try_end_1f6} :catchall_1f8
	cVar2->monitor_exit();
	return cVar3;
	// 2356    .line 568
label_catchall_1f8:
	// move-exception
	
	cVar2->monitor_exit();
	// throw
	throw;

}
// .method public static get(Ljava/lang/String;)Lsun/security/x509/AlgorithmId;
std::shared_ptr<sun::security::x509::AlgorithmId> sun::security::x509::AlgorithmId::get(std::shared_ptr<java::lang::String> algname)
{
	
	std::shared_ptr<java::security::NoSuchAlgorithmException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
	std::shared_ptr<java::security::NoSuchAlgorithmException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<sun::security::x509::AlgorithmId> cVar4;
	
	//    .param p0, "algname"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2369        value = {
	// 2370            Ljava/security/NoSuchAlgorithmException;
	// 2371        }
	// 2372    .end annotation
	try {
	//label_try_start_0:
	//label_try_end_3:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_3} :catch_20
	oid = sun::security::x509::AlgorithmId::algOID(algname);
	//    .local v1, "oid":Lsun/security/util/ObjectIdentifier;
	if ( oid )     
		goto label_cond_3b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::NoSuchAlgorithmException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unrecognized algorithm name: ")))->append(algname)->toString());
	// throw
	throw cVar0;
	// 2414    .line 411
	// 2415    .end local v1    # "oid":Lsun/security/util/ObjectIdentifier;
label_catch_20:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ioe":Ljava/io/IOException;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::NoSuchAlgorithmException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid ObjectIdentifier ")))->append(algname)->toString());
	// throw
	throw cVar2;
	// 2447    .line 420
	// 2448    .end local v0    # "ioe":Ljava/io/IOException;
	// 2449    .restart local v1    # "oid":Lsun/security/util/ObjectIdentifier;
label_cond_3b:
	cVar4 = std::make_shared<sun::security::x509::AlgorithmId>(oid);
	return cVar4;

}
// .method public static get(Ljava/security/AlgorithmParameters;)Lsun/security/x509/AlgorithmId;
std::shared_ptr<sun::security::x509::AlgorithmId> sun::security::x509::AlgorithmId::get(std::shared_ptr<java::security::AlgorithmParameters> algparams)
{
	
	std::shared_ptr<java::lang::String> algname;
	std::shared_ptr<java::security::NoSuchAlgorithmException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
	std::shared_ptr<java::security::NoSuchAlgorithmException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<sun::security::x509::AlgorithmId> cVar4;
	
	//    .param p0, "algparams"    # Ljava/security/AlgorithmParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2462        value = {
	// 2463            Ljava/security/NoSuchAlgorithmException;
	// 2464        }
	// 2465    .end annotation
	algname = algparams->getAlgorithm();
	//    .local v0, "algname":Ljava/lang/String;
	try {
	//label_try_start_4:
	//label_try_end_7:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	//    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_7} :catch_24
	oid = sun::security::x509::AlgorithmId::algOID(algname);
	//    .local v2, "oid":Lsun/security/util/ObjectIdentifier;
	if ( oid )     
		goto label_cond_3f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::NoSuchAlgorithmException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unrecognized algorithm name: ")))->append(algname)->toString());
	// throw
	throw cVar0;
	// 2513    .line 436
	// 2514    .end local v2    # "oid":Lsun/security/util/ObjectIdentifier;
label_catch_24:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ioe":Ljava/io/IOException;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::NoSuchAlgorithmException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid ObjectIdentifier ")))->append(algname)->toString());
	// throw
	throw cVar2;
	// 2546    .line 444
	// 2547    .end local v1    # "ioe":Ljava/io/IOException;
	// 2548    .restart local v2    # "oid":Lsun/security/util/ObjectIdentifier;
label_cond_3f:
	cVar4 = std::make_shared<sun::security::x509::AlgorithmId>(oid, algparams);
	return cVar4;

}
// .method public static getAlgorithmId(Ljava/lang/String;)Lsun/security/x509/AlgorithmId;
std::shared_ptr<sun::security::x509::AlgorithmId> sun::security::x509::AlgorithmId::getAlgorithmId(std::shared_ptr<java::lang::String> algname)
{
	
	//    .param p0, "algname"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2561        value = {
	// 2562            Ljava/security/NoSuchAlgorithmException;
	// 2563        }
	// 2564    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2567    .end annotation
	return sun::security::x509::AlgorithmId::get(algname);

}
// .method public static getDigAlgFromSigAlg(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AlgorithmId::getDigAlgFromSigAlg(std::shared_ptr<java::lang::String> signatureAlgorithm)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	int with;
	
	//    .param p0, "signatureAlgorithm"    # Ljava/lang/String;
	cVar0 = signatureAlgorithm->toUpperCase(java::util::Locale::ENGLISH);
	with = cVar0->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("WITH")));
	//    .local v0, "with":I
	if ( with <= 0 )
		goto label_cond_15;
	return cVar0->substring(0x0, with);
	// 2610    .line 1033
label_cond_15:
	return 0x0;

}
// .method public static getEncAlgFromSigAlg(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AlgorithmId::getEncAlgFromSigAlg(std::shared_ptr<java::lang::String> signatureAlgorithm)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	int with;
	int and;
	std::shared_ptr<java::lang::String> keyAlgorithm;
	
	//    .param p0, "signatureAlgorithm"    # Ljava/lang/String;
	cVar0 = signatureAlgorithm->toUpperCase(java::util::Locale::ENGLISH);
	with = cVar0->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("WITH")));
	//    .local v2, "with":I
	//    .local v1, "keyAlgorithm":Ljava/lang/String;
	if ( with <= 0 )
		goto label_cond_2d;
	and = cVar0->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("AND")), ( with + 0x4));
	//    .local v0, "and":I
	if ( and <= 0 )
		goto label_cond_2e;
	keyAlgorithm = cVar0->substring(( with + 0x4), and);
	//    .local v1, "keyAlgorithm":Ljava/lang/String;
label_goto_21:
	if ( !(keyAlgorithm->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("ECDSA")))) )  
		goto label_cond_2d;
	//    .end local v0    # "and":I
	//    .end local v1    # "keyAlgorithm":Ljava/lang/String;
label_cond_2d:
	return 0x0;
	// 2684    .line 1014
	// 2685    .restart local v0    # "and":I
	// 2686    .local v1, "keyAlgorithm":Ljava/lang/String;
label_cond_2e:
	keyAlgorithm = cVar0->substring(( with + 0x4));
	//    .local v1, "keyAlgorithm":Ljava/lang/String;
	goto label_goto_21;

}
// .method public static makeSigAlg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AlgorithmId::makeSigAlg(std::shared_ptr<java::lang::String> digAlg,std::shared_ptr<java::lang::String> cVar0)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "digAlg"    # Ljava/lang/String;
	//    .param p1, "encAlg"    # Ljava/lang/String;
	if ( !(cVar0->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("EC")))) )  
		goto label_cond_16;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("ECDSA"));
label_cond_16:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(digAlg->replace(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")), std::make_shared<java::lang::String>(std::make_shared<char[]>(""))))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("with")))->append(cVar0)->toString();

}
// .method private static varargs oid([I)Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::x509::AlgorithmId::oid(std::shared_ptr<int[]> values)
{
	
	//    .param p0, "values"    # [I
	return sun::security::util::ObjectIdentifier::newInternal(values);

}
// .method public static parse(Lsun/security/util/DerValue;)Lsun/security/x509/AlgorithmId;
std::shared_ptr<sun::security::x509::AlgorithmId> sun::security::x509::AlgorithmId::parse(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<sun::security::util::DerInputStream> in;
	std::shared_ptr<sun::security::util::DerValue> cVar1;
	std::shared_ptr<sun::security::x509::AlgorithmId> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::io::IOException> cVar4;
	
	//    .param p0, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2768        value = {
	// 2769            Ljava/io/IOException;
	// 2770        }
	// 2771    .end annotation
	if ( val->tag == 0x30 )
		goto label_cond_f;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("algid parse error, not a sequence")));
	// throw
	throw cVar0;
	// 2790    .line 364
label_cond_f:
	in = val->toDerInputStream();
	//    .local v1, "in":Lsun/security/util/DerInputStream;
	//    .local v0, "algid":Lsun/security/util/ObjectIdentifier;
	if ( in->available() )     
		goto label_cond_24;
	cVar1 = 0x0;
label_cond_1e:
	cVar2 = std::make_shared<sun::security::x509::AlgorithmId>(in->getOID(), cVar1);
	return cVar2;
	// 2821    .line 370
label_cond_24:
	cVar1 = in->getDerValue();
	//    .local v2, "params":Lsun/security/util/DerValue;
	if ( cVar1->tag != 0x5 )
		goto label_cond_3d;
	if ( !(cVar1->length()) )  
		goto label_cond_3c;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid NULL")));
	// throw
	throw cVar3;
	// 2851    .line 375
label_cond_3c:
	cVar1 = 0x0;
	//    .end local v2    # "params":Lsun/security/util/DerValue;
label_cond_3d:
	if ( !(in->available()) )  
		goto label_cond_1e;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid AlgorithmIdentifier: extra data")));
	// throw
	throw cVar4;

}
// .method private static reinitializeMappingTableLocked()V
void sun::security::x509::AlgorithmId::reinitializeMappingTableLocked()
{
	
	int currentVersion;
	auto provs;
	int i;
	std::shared_ptr<java::util::Enumeration> enum_;
	std::shared_ptr<java::lang::String> alias;
	std::shared_ptr<java::lang::String> upperCaseAlias;
	int index;
	std::shared_ptr<java::lang::String> stdAlgName;
	std::shared_ptr<java::lang::Object> stdAlgName;
	std::shared_ptr<java::lang::Object> oid;
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
	std::vector<std::any> tryCatchExcetionList;
	auto oid;
	
	currentVersion = java::security::Security::getVersion({const[class].FS-Param});
	//    .local v1, "currentVersion":I
	if ( sun::security::x509::AlgorithmId::initOidTableVersion == currentVersion )
		goto label_cond_cb;
	provs = java::security::Security::getProviders({const[class].FS-Param});
	//    .local v9, "provs":[Ljava/security/Provider;
	i = 0x0;
	//    .local v4, "i":I
label_goto_d:
	if ( i >= provs->size() )
		goto label_cond_c9;
	enum_ = provs[i]->keys();
	//    .local v3, "enum_":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/Object;>;"
label_cond_16:
label_goto_16:
	if ( !(enum_->hasMoreElements()) )  
		goto label_cond_4a;
	alias = enum_->nextElement();
	alias->checkCast("java::lang::String");
	//    .local v0, "alias":Ljava/lang/String;
	upperCaseAlias = alias->toUpperCase(java::util::Locale::ENGLISH);
	//    .local v13, "upperCaseAlias":Ljava/lang/String;
	if ( !(upperCaseAlias->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("ALG.ALIAS")))) )  
		goto label_cond_16;
	index = upperCaseAlias->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("OID.")), 0x0);
	//    .local v5, "index":I
	if ( index == -0x1 )
		goto label_cond_83;
	index = (index +  std::make_shared<java::lang::String>(std::make_shared<char[]>("OID."))->length());
	if ( index != alias->length() )
		goto label_cond_4d;
	//    .end local v0    # "alias":Ljava/lang/String;
	//    .end local v5    # "index":I
	//    .end local v13    # "upperCaseAlias":Ljava/lang/String;
label_cond_4a:
	i = ( i + 0x1);
	goto label_goto_d;
	// 2986    .line 593
	// 2987    .restart local v0    # "alias":Ljava/lang/String;
	// 2988    .restart local v5    # "index":I
	// 2989    .restart local v13    # "upperCaseAlias":Ljava/lang/String;
label_cond_4d:
	//    .local v8, "oidString":Ljava/lang/String;
	stdAlgName = provs[i]->getProperty(alias);
	//    .local v11, "stdAlgName":Ljava/lang/String;
	if ( !(stdAlgName) )  
		goto label_cond_16;
	stdAlgName = stdAlgName->toUpperCase(java::util::Locale::ENGLISH);
	oid = 0x0;
	//    .local v6, "oid":Lsun/security/util/ObjectIdentifier;
	try {
	//label_try_start_60:
	oid = std::make_shared<sun::security::util::ObjectIdentifier>(alias->substring(index));
	//label_try_end_65:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ce;
	}
	//    .catch Ljava/io/IOException; {:try_start_60 .. :try_end_65} :catch_ce
	//    .end local v6    # "oid":Lsun/security/util/ObjectIdentifier;
	//    .local v7, "oid":Lsun/security/util/ObjectIdentifier;
	oid = oid;
	//    .end local v7    # "oid":Lsun/security/util/ObjectIdentifier;
label_goto_66:
	if ( !(oid) )  
		goto label_cond_16;
	if ( sun::security::x509::AlgorithmId::oidTable->containsKey(stdAlgName) )     
		goto label_cond_75;
	sun::security::x509::AlgorithmId::oidTable->put(stdAlgName, oid);
label_cond_75:
	if ( sun::security::x509::AlgorithmId::nameTable->containsKey(oid) )     
		goto label_cond_16;
	sun::security::x509::AlgorithmId::nameTable->put(oid, stdAlgName);
	goto label_goto_16;
	// 3066    .line 617
	// 3067    .end local v8    # "oidString":Ljava/lang/String;
	// 3068    .end local v11    # "stdAlgName":Ljava/lang/String;
label_cond_83:
	//    .local v10, "sep":I
	//    .local v12, "suffix":Ljava/lang/String;
	oid = 0x0;
	//    .restart local v6    # "oid":Lsun/security/util/ObjectIdentifier;
	try {
	//label_try_start_97:
	oid = std::make_shared<sun::security::util::ObjectIdentifier>(alias->substring(( alias->indexOf(0x2e, std::make_shared<java::lang::String>(std::make_shared<char[]>("ALG.ALIAS."))->length()) + 0x1)));
	//label_try_end_9c:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_cc;
	}
	//    .catch Ljava/io/IOException; {:try_start_97 .. :try_end_9c} :catch_cc
	//    .end local v6    # "oid":Lsun/security/util/ObjectIdentifier;
	//    .restart local v7    # "oid":Lsun/security/util/ObjectIdentifier;
	oid = oid;
	//    .end local v7    # "oid":Lsun/security/util/ObjectIdentifier;
label_goto_9d:
	if ( !(oid) )  
		goto label_cond_16;
	stdAlgName = provs[i]->getProperty(alias);
	//    .restart local v11    # "stdAlgName":Ljava/lang/String;
	if ( !(stdAlgName) )  
		goto label_cond_16;
	stdAlgName = stdAlgName->toUpperCase(java::util::Locale::ENGLISH);
	if ( sun::security::x509::AlgorithmId::oidTable->containsKey(stdAlgName) )     
		goto label_cond_ba;
	sun::security::x509::AlgorithmId::oidTable->put(stdAlgName, oid);
label_cond_ba:
	if ( sun::security::x509::AlgorithmId::nameTable->containsKey(oid) )     
		goto label_cond_16;
	sun::security::x509::AlgorithmId::nameTable->put(oid, stdAlgName);
	goto label_goto_16;
	// 3161    .line 644
	// 3162    .end local v0    # "alias":Ljava/lang/String;
	// 3163    .end local v3    # "enum_":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/Object;>;"
	// 3164    .end local v5    # "index":I
	// 3165    .end local v10    # "sep":I
	// 3166    .end local v11    # "stdAlgName":Ljava/lang/String;
	// 3167    .end local v12    # "suffix":Ljava/lang/String;
	// 3168    .end local v13    # "upperCaseAlias":Ljava/lang/String;
label_cond_c9:
	sun::security::x509::AlgorithmId::initOidTableVersion = currentVersion;
	//    .end local v4    # "i":I
	//    .end local v9    # "provs":[Ljava/security/Provider;
label_cond_cb:
	return;
	// 3178    .line 623
	// 3179    .restart local v0    # "alias":Ljava/lang/String;
	// 3180    .restart local v3    # "enum_":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/Object;>;"
	// 3181    .restart local v4    # "i":I
	// 3182    .restart local v5    # "index":I
	// 3183    .restart local v6    # "oid":Lsun/security/util/ObjectIdentifier;
	// 3184    .restart local v9    # "provs":[Ljava/security/Provider;
	// 3185    .restart local v10    # "sep":I
	// 3186    .restart local v12    # "suffix":Ljava/lang/String;
	// 3187    .restart local v13    # "upperCaseAlias":Ljava/lang/String;
label_catch_cc:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/io/IOException;
	goto label_goto_9d;
	// 3194    .line 601
	// 3195    .end local v2    # "e":Ljava/io/IOException;
	// 3196    .end local v10    # "sep":I
	// 3197    .end local v12    # "suffix":Ljava/lang/String;
	// 3198    .restart local v8    # "oidString":Ljava/lang/String;
	// 3199    .restart local v11    # "stdAlgName":Ljava/lang/String;
label_catch_ce:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "e":Ljava/io/IOException;
	goto label_goto_66;

}
// .method protected decodeParams()V
void sun::security::x509::AlgorithmId::decodeParams()
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3212        value = {
	// 3213            Ljava/io/IOException;
	// 3214        }
	// 3215    .end annotation
	//    .local v0, "algidString":Ljava/lang/String;
	try {
	//label_try_start_6:
	this->algParams = java::security::AlgorithmParameters::getInstance(this->algid->toString());
	//label_try_end_c:
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_18;
	}
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_6 .. :try_end_c} :catch_18
	this->algParams->init(this->params->toByteArray());
	return;
	// 3250    .line 123
label_catch_18:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/security/NoSuchAlgorithmException;
	this->algParams = 0x0;
	return;

}
// .method public derEncode(Ljava/io/OutputStream;)V
void sun::security::x509::AlgorithmId::derEncode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> bytes;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<sun::security::util::DerValue> cVar0;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3268        value = {
	// 3269            Ljava/io/IOException;
	// 3270        }
	// 3271    .end annotation
	bytes = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "bytes":Lsun/security/util/DerOutputStream;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tmp":Lsun/security/util/DerOutputStream;
	bytes->putOID(this->algid);
	if ( this->constructedFromDer )     
		goto label_cond_25;
	if ( !(this->algParams) )  
		goto label_cond_39;
	cVar0 = std::make_shared<sun::security::util::DerValue>(this->algParams->getEncoded());
	this->params = cVar0;
label_cond_25:
label_goto_25:
	if ( this->params )     
		goto label_cond_3c;
	bytes->putNull();
label_goto_2c:
	tmp->write(0x30, bytes);
	out->write(tmp->toByteArray());
	return;
	// 3342    .line 162
label_cond_39:
	this->params = 0x0;
	goto label_goto_25;
	// 3348    .line 194
label_cond_3c:
	bytes->putDerValue(this->params);
	goto label_goto_2c;

}
// .method public final encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::AlgorithmId::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3361        value = {
	// 3362            Ljava/io/IOException;
	// 3363        }
	// 3364    .end annotation
	this->derEncode(out);
	return;

}
// .method public final encode()[B
unsigned char sun::security::x509::AlgorithmId::encode()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3377        value = {
	// 3378            Ljava/io/IOException;
	// 3379        }
	// 3380    .end annotation
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "out":Lsun/security/util/DerOutputStream;
	this->derEncode(out);
	return out->toByteArray();

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::AlgorithmId::equals(std::shared_ptr<java::lang::Object> other)
{
	
	//    .param p1, "other"    # Ljava/lang/Object;
	if ( this != other )
		goto label_cond_4;
	return 0x1;
	// 3413    .line 291
label_cond_4:
	if ( !(other->instanceOf("sun::security::x509::AlgorithmId")) )  
		goto label_cond_f;
	other->checkCast("sun::security::x509::AlgorithmId");
	//    .end local p1    # "other":Ljava/lang/Object;
	return this->equals(other);
	// 3429    .line 293
	// 3430    .restart local p1    # "other":Ljava/lang/Object;
label_cond_f:
	if ( !(other->instanceOf("sun::security::util::ObjectIdentifier")) )  
		goto label_cond_1a;
	other->checkCast("sun::security::util::ObjectIdentifier");
	//    .end local p1    # "other":Ljava/lang/Object;
	return this->equals(other);
	// 3446    .line 296
	// 3447    .restart local p1    # "other":Ljava/lang/Object;
label_cond_1a:
	return 0x0;

}
// .method public final equals(Lsun/security/util/ObjectIdentifier;)Z
bool sun::security::x509::AlgorithmId::equals(std::shared_ptr<sun::security::util::ObjectIdentifier> id)
{
	
	//    .param p1, "id"    # Lsun/security/util/ObjectIdentifier;
	return this->algid->equals(id);

}
// .method public equals(Lsun/security/x509/AlgorithmId;)Z
bool sun::security::x509::AlgorithmId::equals(std::shared_ptr<sun::security::x509::AlgorithmId> other)
{
	
	bool cVar0;
	int cVar0;
	
	//    .param p1, "other"    # Lsun/security/x509/AlgorithmId;
	if ( this->params )     
		goto label_cond_16;
	if ( other->params )     
		goto label_cond_14;
	cVar0 = 0x1;
label_goto_9:
	if ( !(this->algid->equals(other->algid)) )  
		goto label_cond_1f;
label_goto_13:
	return cVar0;
	// 3500    .line 276
label_cond_14:
	cVar0 = 0x0;
	//    .local v0, "paramsEqual":Z
	goto label_goto_9;
	// 3507    .end local v0    # "paramsEqual":Z
label_cond_16:
	cVar0 = this->params->equals(other->params);
	//    .local v0, "paramsEqual":Z
	goto label_goto_9;
	// 3520    .line 277
	// 3521    .end local v0    # "paramsEqual":Z
label_cond_1f:
	cVar0 = 0x0;
	goto label_goto_13;

}
// .method public getEncodedParams()[B
unsigned char sun::security::x509::AlgorithmId::getEncodedParams()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3531        value = {
	// 3532            Ljava/io/IOException;
	// 3533        }
	// 3534    .end annotation
	cVar0 = 0x0;
	if ( this->params )     
		goto label_cond_6;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = this->params->toByteArray();
	goto label_goto_5;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AlgorithmId::getName()
{
	
	std::shared_ptr<java::lang::String> algName;
	std::shared_ptr<java::util::Map> cVar1;
	std::shared_ptr<sun::security::util::DerValue> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	algName = sun::security::x509::AlgorithmId::nameTable->get(this->algid);
	algName->checkCast("java::lang::String");
	//    .local v0, "algName":Ljava/lang/String;
	if ( !(algName) )  
		goto label_cond_d;
	return algName;
	// 3579    .line 234
label_cond_d:
	if ( !(this->params) )  
		goto label_cond_33;
	if ( !(this->algid->equals(sun::security::x509::AlgorithmId::specifiedWithECDSA_oid)) )  
		goto label_cond_33;
	try {
	//label_try_start_1b:
	cVar0 = std::make_shared<sun::security::util::DerValue>(this->getEncodedParams());
	//    .local v2, "paramsId":Lsun/security/x509/AlgorithmId;
	//    .local v3, "paramsName":Ljava/lang/String;
	//label_try_end_32:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_50;
	}
	//    .catch Ljava/io/IOException; {:try_start_1b .. :try_end_32} :catch_50
	sun::security::x509::AlgorithmId::makeSigAlg(sun::security::x509::AlgorithmId::parse(cVar0)->getName(), std::make_shared<java::lang::String>(std::make_shared<char[]>("EC")));
	//    .end local v2    # "paramsId":Lsun/security/x509/AlgorithmId;
	//    .end local v3    # "paramsName":Ljava/lang/String;
label_cond_33:
label_goto_33:
	cVar1 = sun::security::x509::AlgorithmId::oidTable;
	cVar1->monitor_enter();
	try {
	//label_try_start_36:
	sun::security::x509::AlgorithmId::reinitializeMappingTableLocked({const[class].FS-Param});
	algName = sun::security::x509::AlgorithmId::nameTable->get(this->algid);
	//    .end local v0    # "algName":Ljava/lang/String;
	algName->checkCast("java::lang::String");
	//label_try_end_43:
	}
	catch (...){
		goto label_catchall_4d;
	}
	//    .catchall {:try_start_36 .. :try_end_43} :catchall_4d
	//    .restart local v0    # "algName":Ljava/lang/String;
	cVar1->monitor_exit();
	if ( algName )     
		goto label_cond_4c;
	//    .end local v0    # "algName":Ljava/lang/String;
label_cond_4c:
	return algName;
	// 3668    .line 247
label_catchall_4d:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;
	// 3676    .line 240
	// 3677    .restart local v0    # "algName":Ljava/lang/String;
label_catch_50:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	goto label_goto_33;

}
// .method public final getOID()Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::x509::AlgorithmId::getOID()
{
	
	return this->algid;

}
// .method public getParameters()Ljava/security/AlgorithmParameters;
std::shared_ptr<java::security::AlgorithmParameters> sun::security::x509::AlgorithmId::getParameters()
{
	
	return this->algParams;

}
// .method public hashCode()I
int sun::security::x509::AlgorithmId::hashCode()
{
	
	std::shared_ptr<java::lang::StringBuilder> sbuf;
	
	sbuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sbuf":Ljava/lang/StringBuilder;
	sbuf->append(this->algid->toString());
	sbuf->append(this->paramsToString());
	return sbuf->toString()->hashCode();

}
// .method protected paramsToString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AlgorithmId::paramsToString()
{
	
	if ( this->params )     
		goto label_cond_8;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 3757    .line 327
label_cond_8:
	if ( !(this->algParams) )  
		goto label_cond_13;
	return this->algParams->toString();
	// 3772    .line 330
label_cond_13:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(", params unparsed"));

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AlgorithmId::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->getName())->append(this->paramsToString())->toString();

}


