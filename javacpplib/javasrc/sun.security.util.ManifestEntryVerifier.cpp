// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\ManifestEntryVerifier.smali
#include "java2ctype.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.security.CodeSigner.h"
#include "java.security.MessageDigest.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.security.Provider.h"
#include "java.util.ArrayList.h"
#include "java.util.Base64_S_Decoder.h"
#include "java.util.Base64.h"
#include "java.util.HashMap.h"
#include "java.util.Hashtable.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Set.h"
#include "java.util.jar.Attributes.h"
#include "java.util.jar.JarEntry.h"
#include "java.util.jar.Manifest.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.ManifestEntryVerifier_S_SunProviderHolder.h"
#include "sun.security.util.ManifestEntryVerifier.h"

static sun::security::util::ManifestEntryVerifier::debug;
static sun::security::util::ManifestEntryVerifier::hexc;
// .method static constructor <clinit>()V
void sun::security::util::ManifestEntryVerifier::static_cinit()
{
	
	std::shared<std::vector<char[]>> cVar0;
	
	sun::security::util::ManifestEntryVerifier::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("jar")));
	cVar0 = std::make_shared<std::vector<char[]>>(0x10);
	?;
	sun::security::util::ManifestEntryVerifier::hexc = cVar0;
	return;
	// 091    .line 232
	// 092    nop
	// 094    :array_14
	// 095    .array-data 2
	// 096        0x30s
	// 097        0x31s
	// 098        0x32s
	// 099        0x33s
	// 100        0x34s
	// 101        0x35s
	// 102        0x36s
	// 103        0x37s
	// 104        0x38s
	// 105        0x39s
	// 106        0x61s
	// 107        0x62s
	// 108        0x63s
	// 109        0x64s
	// 110        0x65s
	// 111        0x66s
	// 112    .end array-data

}
// .method public constructor <init>(Ljava/util/jar/Manifest;)V
sun::security::util::ManifestEntryVerifier::ManifestEntryVerifier(std::shared_ptr<java::util::jar::Manifest> man)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	std::shared_ptr<java::util::ArrayList> cVar2;
	std::shared_ptr<java::util::ArrayList> cVar3;
	
	//    .param p1, "man"    # Ljava/util/jar/Manifest;
	cVar0 = 0x0;
	// 123    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->name = cVar0;
	this->skip = 0x1;
	this->signers = cVar0;
	cVar1 = std::make_shared<java::util::HashMap>(0xb);
	this->createdDigests = cVar1;
	cVar2 = std::make_shared<java::util::ArrayList>();
	this->digests = cVar2;
	cVar3 = std::make_shared<java::util::ArrayList>();
	this->manifestHashes = cVar3;
	this->man = man;
	return;

}
// .method static toHex([B)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::ManifestEntryVerifier::toHex(std::shared_ptr<unsigned char[]> data)
{
	
	std::shared_ptr<java::lang::StringBuffer> sb;
	int i;
	
	//    .param p0, "data"    # [B
	sb = std::make_shared<java::lang::StringBuffer>(( data->size() * 0x2));
	//    .local v1, "sb":Ljava/lang/StringBuffer;
	i = 0x0;
	//    .local v0, "i":I
label_goto_9:
	if ( i >= data->size() )
		goto label_cond_27;
	sb->append(sun::security::util::ManifestEntryVerifier::hexc[( _shri(data[i],0x4) & 0xf)]);
	sb->append(sun::security::util::ManifestEntryVerifier::hexc[( data[i] & 0xf)]);
	i = ( i + 0x1);
	goto label_goto_9;
	// 219    .line 247
label_cond_27:
	return sb->toString();

}
// .method public getEntry()Ljava/util/jar/JarEntry;
std::shared_ptr<java::util::jar::JarEntry> sun::security::util::ManifestEntryVerifier::getEntry()
{
	
	return this->entry;

}
// .method public setEntry(Ljava/lang/String;Ljava/util/jar/JarEntry;)V
void sun::security::util::ManifestEntryVerifier::setEntry(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::util::jar::JarEntry> entry)
{
	
	int cVar0;
	std::shared_ptr<java::util::jar::Attributes> attr;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::util::Iterator> se_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> se;
	std::shared_ptr<java::lang::String> key;
	std::shared_ptr<java::lang::Object> algorithm;
	std::shared_ptr<java::security::MessageDigest> digest;
	std::shared_ptr<java::lang::String> cVar3;
	std::shared_ptr<java::lang::Object> digest;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "entry"    # Ljava/util/jar/JarEntry;
	//    .annotation system Ldalvik/annotation/Throws;
	// 245        value = {
	// 246            Ljava/io/IOException;
	// 247        }
	// 248    .end annotation
	cVar0 = 0x0;
	this->digests->clear();
	this->manifestHashes->clear();
	this->name = name;
	this->entry = entry;
	this->skip = 0x1;
	this->signers = 0x0;
	if ( !(this->man) )  
		goto label_cond_1b;
	if ( name )     
		goto label_cond_1c;
label_cond_1b:
	return;
	// 290    .line 110
label_cond_1c:
	attr = this->man->getAttributes(name);
	//    .local v1, "attr":Ljava/util/jar/Attributes;
	if ( attr )     
		goto label_cond_5d;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	attr = this->man->getAttributes(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("./")))->append(name)->toString());
	if ( attr )     
		goto label_cond_5d;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	attr = this->man->getAttributes(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(name)->toString());
	if ( attr )     
		goto label_cond_5d;
	return;
	// 361    .line 123
label_cond_5d:
	se_S_iterator = attr->entrySet()->iterator();
	//    .local v6, "se$iterator":Ljava/util/Iterator;
label_cond_65:
label_goto_65:
	if ( !(se_S_iterator->hasNext()) )  
		goto label_cond_c9;
	se = se_S_iterator->next();
	se->checkCast("java::util::Map_S_Entry");
	//    .local v5, "se":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;"
	key = se->getKey()->toString();
	//    .local v3, "key":Ljava/lang/String;
	if ( !(key->toUpperCase(java::util::Locale::ENGLISH)->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("-DIGEST")))) )  
		goto label_cond_65;
	algorithm = key->substring(cVar0, ( key->length() + -0x7));
	//    .local v0, "algorithm":Ljava/lang/String;
	digest = this->createdDigests->get(algorithm);
	digest->checkCast("java::security::MessageDigest");
	//    .local v2, "digest":Ljava/security/MessageDigest;
	if ( digest )     
		goto label_cond_a9;
	try {
	//label_try_start_9c:
	digest = java::security::MessageDigest::getInstance(algorithm, sun::security::util::ManifestEntryVerifier_S_SunProviderHolder::-get0(algorithm, sun::security::util::ManifestEntryVerifier_S_SunProviderHolder::-get0({const[class].FS-Param})));
	this->createdDigests->put(algorithm, digest);
	//label_try_end_a9:
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ca;
	}
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_9c .. :try_end_a9} :catch_ca
label_cond_a9:
label_goto_a9:
	if ( !(digest) )  
		goto label_cond_65;
	this->skip = cVar0;
	digest->reset();
	this->digests->add(digest);
	cVar3 = se->getValue();
	cVar3->checkCast("java::lang::String");
	this->manifestHashes->add(java::util::Base64::getMimeDecoder({const[class].FS-Param})->decode(cVar3));
	goto label_goto_65;
	// 494    .line 152
	// 495    .end local v0    # "algorithm":Ljava/lang/String;
	// 496    .end local v2    # "digest":Ljava/security/MessageDigest;
	// 497    .end local v3    # "key":Ljava/lang/String;
	// 498    .end local v5    # "se":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;"
label_cond_c9:
	return;
	// 502    .line 138
	// 503    .restart local v0    # "algorithm":Ljava/lang/String;
	// 504    .restart local v2    # "digest":Ljava/security/MessageDigest;
	// 505    .restart local v3    # "key":Ljava/lang/String;
	// 506    .restart local v5    # "se":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;"
label_catch_ca:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "nsae":Ljava/security/NoSuchAlgorithmException;
	goto label_goto_a9;

}
// .method public update(B)V
void sun::security::util::ManifestEntryVerifier::update(unsigned char buffer)
{
	
	int i;
	std::shared_ptr<java::security::MessageDigest> cVar0;
	
	//    .param p1, "buffer"    # B
	if ( !(this->skip) )  
		goto label_cond_5;
	return;
	// 526    .line 160
label_cond_5:
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= this->digests->size() )
		goto label_cond_1c;
	cVar0 = this->digests->get(i);
	cVar0->checkCast("java::security::MessageDigest");
	cVar0->update(buffer);
	i = ( i + 0x1);
	goto label_goto_6;
	// 556    .line 163
label_cond_1c:
	return;

}
// .method public update([BII)V
void sun::security::util::ManifestEntryVerifier::update(std::shared_ptr<unsigned char[]> buffer,int off,int len)
{
	
	int i;
	std::shared_ptr<java::security::MessageDigest> cVar0;
	
	//    .param p1, "buffer"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	if ( !(this->skip) )  
		goto label_cond_5;
	return;
	// 575    .line 171
label_cond_5:
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= this->digests->size() )
		goto label_cond_1c;
	cVar0 = this->digests->get(i);
	cVar0->checkCast("java::security::MessageDigest");
	cVar0->update(buffer, off, len);
	i = ( i + 0x1);
	goto label_goto_6;
	// 605    .line 174
label_cond_1c:
	return;

}
// .method public verify(Ljava/util/Hashtable;Ljava/util/Hashtable;)[Ljava/security/CodeSigner;
std::shared_ptr<java::security::CodeSigner> sun::security::util::ManifestEntryVerifier::verify(std::shared_ptr<java::util::Hashtable<java::lang::String,std::vector<java::security::CodeSigner>>> verifiedSigners,std::shared_ptr<java::util::Hashtable<java::lang::String,std::vector<java::security::CodeSigner>>> sigFileSigners)
{
	
	int i;
	std::shared_ptr<java::security::MessageDigest> digest;
	std::shared_ptr<unsigned char[]> manHash;
	std::shared_ptr<unsigned char[]> theHash;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::SecurityException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<std::vector<java::security::CodeSigner>> cVar5;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 613        value = {
	// 614            "(",
	// 615            "Ljava/util/Hashtable",
	// 616            "<",
	// 617            "Ljava/lang/String;",
	// 618            "[",
	// 619            "Ljava/security/CodeSigner;",
	// 620            ">;",
	// 621            "Ljava/util/Hashtable",
	// 622            "<",
	// 623            "Ljava/lang/String;",
	// 624            "[",
	// 625            "Ljava/security/CodeSigner;",
	// 626            ">;)[",
	// 627            "Ljava/security/CodeSigner;"
	// 628        }
	// 629    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 632        value = {
	// 633            Ljava/util/jar/JarException;
	// 634        }
	// 635    .end annotation
	//    .local p1, "verifiedSigners":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;[Ljava/security/CodeSigner;>;"
	//    .local p2, "sigFileSigners":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;[Ljava/security/CodeSigner;>;"
	if ( !(this->skip) )  
		goto label_cond_6;
	return 0x0;
	// 650    .line 200
label_cond_6:
	if ( !(this->signers) )  
		goto label_cond_d;
	return this->signers;
	// 661    .line 203
label_cond_d:
	i = 0x0;
	//    .local v1, "i":I
label_goto_e:
	if ( i >= this->digests->size() )
		goto label_cond_c5;
	digest = this->digests->get(i);
	digest->checkCast("java::security::MessageDigest");
	//    .local v0, "digest":Ljava/security/MessageDigest;
	manHash = this->manifestHashes->get(i);
	manHash->checkCast("unsigned char[]");
	//    .local v2, "manHash":[B
	theHash = digest->digest();
	//    .local v3, "theHash":[B
	if ( !(sun::security::util::ManifestEntryVerifier::debug) )  
		goto label_cond_97;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::ManifestEntryVerifier::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Manifest Entry: ")))->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" digest=")))->append(digest->getAlgorithm())->toString());
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::ManifestEntryVerifier::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  manifest ")))->append(sun::security::util::ManifestEntryVerifier::toHex(manHash))->toString());
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::ManifestEntryVerifier::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  computed ")))->append(sun::security::util::ManifestEntryVerifier::toHex(theHash))->toString());
	sun::security::util::ManifestEntryVerifier::debug->println();
label_cond_97:
	if ( java::security::MessageDigest::isEqual(theHash, manHash) )     
		goto label_cond_c1;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::SecurityException>(cVar4->append(digest->getAlgorithm())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" digest error for ")))->append(this->name)->toString());
	// throw
	throw cVar3;
	// 857    .line 203
label_cond_c1:
	i = ( i + 0x1);
	goto label_goto_e;
	// 863    .line 223
	// 864    .end local v0    # "digest":Ljava/security/MessageDigest;
	// 865    .end local v2    # "manHash":[B
	// 866    .end local v3    # "theHash":[B
label_cond_c5:
	cVar5 = sigFileSigners->remove(this->name);
	cVar5->checkCast("std::vector<java::security::CodeSigner>");
	this->signers = cVar5;
	if ( !(this->signers) )  
		goto label_cond_da;
	verifiedSigners->put(this->name, this->signers);
label_cond_da:
	return this->signers;

}


