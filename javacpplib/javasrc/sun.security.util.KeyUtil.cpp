// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\KeyUtil.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.math.BigInteger.h"
#include "java.security.Key.h"
#include "java.security.interfaces.DSAKey.h"
#include "java.security.interfaces.DSAParams.h"
#include "java.security.interfaces.ECKey.h"
#include "java.security.interfaces.RSAKey.h"
#include "java.security.spec.ECParameterSpec.h"
#include "javax.crypto.SecretKey.h"
#include "javax.crypto.interfaces.DHKey.h"
#include "javax.crypto.spec.DHParameterSpec.h"
#include "sun.security.util.KeyUtil.h"
#include "sun.security.util.Length.h"

// .method public constructor <init>()V
sun::security::util::KeyUtil::KeyUtil()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static final getKeySize(Ljava/security/Key;)I
int sun::security::util::KeyUtil::getKeySize(std::shared_ptr<java::security::Key> key)
{
	
	int size;
	std::shared_ptr<javax::crypto::SecretKey> sk;
	std::shared_ptr<java::security::interfaces::RSAKey> pubk;
	std::shared_ptr<java::security::interfaces::ECKey> pubk;
	std::shared_ptr<java::security::spec::ECParameterSpec> params;
	std::shared_ptr<java::security::interfaces::DSAKey> pubk;
	std::shared_ptr<java::security::interfaces::DSAParams> params;
	std::shared_ptr<javax::crypto::interfaces::DHKey> pubk;
	std::shared_ptr<sun::security::util::Length> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "key"    # Ljava/security/Key;
	size = -0x1;
	//    .local v9, "size":I
	if ( !(key->instanceOf("sun::security::util::Length")) )  
		goto label_cond_10;
	try {
	//label_try_start_5:
	cVar0 = key;
	cVar0->checkCast("sun::security::util::Length");
	//    .local v8, "ruler":Lsun/security/util/Length;
	//label_try_end_c:
	}
	catch (java::lang::UnsupportedOperationException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_84;
	}
	//    .catch Ljava/lang/UnsupportedOperationException; {:try_start_5 .. :try_end_c} :catch_84
	size = cVar0->length();
	//    .end local v8    # "ruler":Lsun/security/util/Length;
label_goto_d:
	if ( size < 0 ) 
		goto label_cond_10;
	return size;
	// 055    .line 68
label_cond_10:
	if ( !(key->instanceOf("javax::crypto::SecretKey")) )  
		goto label_cond_32;
	sk = key;
	sk->checkCast("javax::crypto::SecretKey");
	//    .local v10, "sk":Ljavax/crypto/SecretKey;
	//    .local v1, "format":Ljava/lang/String;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("RAW"))->equals(sk->getFormat())) )  
		goto label_cond_31;
	if ( !(sk->getEncoded()) )  
		goto label_cond_31;
	size = ( sk->getEncoded()->size() * 0x8);
	//    .end local v1    # "format":Ljava/lang/String;
	//    .end local v10    # "sk":Ljavax/crypto/SecretKey;
label_cond_31:
label_goto_31:
	return size;
	// 104    .line 75
label_cond_32:
	if ( !(key->instanceOf("java::security::interfaces::RSAKey")) )  
		goto label_cond_42;
	pubk = key;
	pubk->checkCast("java::security::interfaces::RSAKey");
	//    .local v6, "pubk":Ljava/security/interfaces/RSAKey;
	size = pubk->getModulus()->bitLength();
	goto label_goto_31;
	// 127    .line 78
	// 128    .end local v6    # "pubk":Ljava/security/interfaces/RSAKey;
label_cond_42:
	if ( !(key->instanceOf("java::security::interfaces::ECKey")) )  
		goto label_cond_58;
	pubk = key;
	pubk->checkCast("java::security::interfaces::ECKey");
	//    .local v5, "pubk":Ljava/security/interfaces/ECKey;
	params = pubk->getParams();
	//    .local v3, "params":Ljava/security/spec/ECParameterSpec;
	if ( !(params) )  
		goto label_cond_31;
	size = params->getOrder()->bitLength();
	goto label_goto_31;
	// 160    .line 92
	// 161    .end local v3    # "params":Ljava/security/spec/ECParameterSpec;
	// 162    .end local v5    # "pubk":Ljava/security/interfaces/ECKey;
label_cond_58:
	if ( !(key->instanceOf("java::security::interfaces::DSAKey")) )  
		goto label_cond_70;
	pubk = key;
	pubk->checkCast("java::security::interfaces::DSAKey");
	//    .local v4, "pubk":Ljava/security/interfaces/DSAKey;
	params = pubk->getParams();
	//    .local v2, "params":Ljava/security/interfaces/DSAParams;
	if ( !(params) )  
		goto label_cond_6e;
	size = params->getP()->bitLength();
	goto label_goto_31;
label_cond_6e:
	size = -0x1;
	goto label_goto_31;
	// 198    .line 96
	// 199    .end local v2    # "params":Ljava/security/interfaces/DSAParams;
	// 200    .end local v4    # "pubk":Ljava/security/interfaces/DSAKey;
label_cond_70:
	if ( !(key->instanceOf("javax::crypto::interfaces::DHKey")) )  
		goto label_cond_31;
	pubk = key;
	pubk->checkCast("javax::crypto::interfaces::DHKey");
	//    .local v7, "pubk":Ljavax/crypto/interfaces/DHKey;
	size = pubk->getParams()->getP()->bitLength();
	goto label_goto_31;
	// 227    .line 58
	// 228    .end local v7    # "pubk":Ljavax/crypto/interfaces/DHKey;
label_catch_84:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v11, "usoe":Ljava/lang/UnsupportedOperationException;
	goto label_goto_d;

}


