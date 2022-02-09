// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\DisabledAlgorithmConstraints$KeySizeConstraint.smali
#include "java2ctype.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.security.Key.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathValidatorException_S_BasicReason.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.X509Certificate.h"
#include "sun.security.util.CertConstraintParameters.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraint_S_Operator.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraint.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_KeySizeConstraint.h"
#include "sun.security.util.DisabledAlgorithmConstraints.h"
#include "sun.security.util.KeyUtil.h"

static sun::security::util::DisabledAlgorithmConstraints_S_KeySizeConstraint::_sun_security_util_DisabledAlgorithmConstraints_S_Constraint_S_OperatorSwitchesValues;
// .method private static synthetic -getsun-security-util-DisabledAlgorithmConstraints$Constraint$OperatorSwitchesValues()[I
int sun::security::util::DisabledAlgorithmConstraints_S_KeySizeConstraint::_getsun_security_util_DisabledAlgorithmConstraints_S_Constraint_S_OperatorSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(sun::security::util::DisabledAlgorithmConstraints_S_KeySizeConstraint::_sun_security_util_DisabledAlgorithmConstraints_S_Constraint_S_OperatorSwitchesValues) )  
		goto label_cond_7;
	return sun::security::util::DisabledAlgorithmConstraints_S_KeySizeConstraint::_sun_security_util_DisabledAlgorithmConstraints_S_Constraint_S_OperatorSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::EQ->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_51;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_51
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::GE->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4f;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_4f
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::GT->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4d;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_4d
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::LE->ordinal()] = 0x4;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4b;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_4b
label_goto_32:
	try {
	//label_try_start_32:
	cVar0[sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::LT->ordinal()] = 0x5;
	//label_try_end_3b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_49;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_32 .. :try_end_3b} :catch_49
label_goto_3b:
	try {
	//label_try_start_3b:
	cVar0[sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::NE->ordinal()] = 0x6;
	//label_try_end_44:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_47;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3b .. :try_end_44} :catch_47
label_goto_44:
	sun::security::util::DisabledAlgorithmConstraints_S_KeySizeConstraint::_sun_security_util_DisabledAlgorithmConstraints_S_Constraint_S_OperatorSwitchesValues = cVar0;
	return cVar0;
label_catch_47:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_44;
label_catch_49:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3b;
label_catch_4b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_4d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_4f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_51:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method public constructor <init>(Ljava/lang/String;Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;I)V
sun::security::util::DisabledAlgorithmConstraints_S_KeySizeConstraint::DisabledAlgorithmConstraints_S_KeySizeConstraint(std::shared_ptr<java::lang::String> algo,std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> operator,int length)
{
	
	int cVar0;
	int cVar1;
	int cVar3;
	
	//    .param p1, "algo"    # Ljava/lang/String;
	//    .param p2, "operator"    # Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;
	//    .param p3, "length"    # I
	cVar0 = -0x1;
	cVar1 = 0x7fffffff;
	cVar3 = 0x0;
	sun::security::util::DisabledAlgorithmConstraints_S_Constraint::(0x0);
	this->prohibitedSize = cVar0;
	this->algorithm = algo;
	// switch
	{
	auto item = ( sun::security::util::DisabledAlgorithmConstraints_S_KeySizeConstraint::-getsun-security-util-DisabledAlgorithmConstraints$Constraint$OperatorSwitchesValues({const[class].FS-Param})[operator->ordinal()] );
	if (item == 1) goto label_pswitch_1f;
	if (item == 2) goto label_pswitch_3c;
	if (item == 3) goto label_pswitch_37;
	if (item == 4) goto label_pswitch_30;
	if (item == 5) goto label_pswitch_2b;
	if (item == 6) goto label_pswitch_26;
	}
	this->minSize = cVar1;
	this->maxSize = cVar0;
label_goto_1e:
	return;
	// 216    .line 478
label_pswitch_1f:
	this->minSize = cVar3;
	this->maxSize = cVar1;
	this->prohibitedSize = length;
	goto label_goto_1e;
	// 228    .line 483
label_pswitch_26:
	this->minSize = length;
	this->maxSize = length;
	goto label_goto_1e;
	// 237    .line 487
label_pswitch_2b:
	this->minSize = length;
	this->maxSize = cVar1;
	goto label_goto_1e;
	// 246    .line 491
label_pswitch_30:
	this->minSize = ( length + 0x1);
	this->maxSize = cVar1;
	goto label_goto_1e;
	// 257    .line 495
label_pswitch_37:
	this->minSize = cVar3;
	this->maxSize = length;
	goto label_goto_1e;
	// 266    .line 499
label_pswitch_3c:
	this->minSize = cVar3;
	if ( length <= 0x1 )
		goto label_cond_43;
	cVar3 = ( length + -0x1);
label_cond_43:
	this->maxSize = cVar3;
	goto label_goto_1e;
	// 282    .line 476
	// 283    :pswitch_data_46
	// 284    .packed-switch 0x1
	// 285        :pswitch_1f
	// 286        :pswitch_3c
	// 287        :pswitch_37
	// 288        :pswitch_30
	// 289        :pswitch_2b
	// 290        :pswitch_26
	// 291    .end packed-switch

}
// .method private permitsImpl(Ljava/security/Key;)Z
bool sun::security::util::DisabledAlgorithmConstraints_S_KeySizeConstraint::permitsImpl(std::shared_ptr<java::security::Key> key)
{
	
	bool cVar0;
	bool cVar1;
	int size;
	
	//    .param p1, "key"    # Ljava/security/Key;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( !(this->algorithm->compareToIgnoreCase(key->getAlgorithm())) )  
		goto label_cond_f;
	return cVar0;
	// 319    .line 551
label_cond_f:
	size = sun::security::util::KeyUtil::getKeySize(key);
	//    .local v0, "size":I
	if ( size )     
		goto label_cond_16;
	return cVar1;
	// 332    .line 554
label_cond_16:
	if ( size <= 0 )
		goto label_cond_29;
	if ( size <  this->minSize )
		goto label_cond_27;
	if ( size >  this->maxSize )
		goto label_cond_27;
	if ( this->prohibitedSize == size )
		goto label_cond_25;
label_goto_24:
	return cVar0;
label_cond_25:
	cVar0 = cVar1;
	goto label_goto_24;
label_cond_27:
	cVar0 = cVar1;
	goto label_goto_24;
	// 366    .line 560
label_cond_29:
	return cVar0;

}
// .method public permits(Lsun/security/util/CertConstraintParameters;)V
void sun::security::util::DisabledAlgorithmConstraints_S_KeySizeConstraint::permits(std::shared_ptr<sun::security::util::CertConstraintParameters> cp)
{
	
	std::shared_ptr<java::lang::Throwable> cVar0;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar1;
	
	//    .param p1, "cp"    # Lsun/security/util/CertConstraintParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 377        value = {
	// 378            Ljava/security/cert/CertPathValidatorException;
	// 379        }
	// 380    .end annotation
	cVar0 = 0x0;
	if ( this->permitsImpl(cp->getCertificate()->getPublicKey()) )     
		goto label_cond_26;
	if ( !(this->nextConstraint) )  
		goto label_cond_19;
	this->nextConstraint->permits(cp);
	return;
	// 413    .line 523
label_cond_19:
	cVar1 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Algorithm constraints check failed on keysize limits")), cVar0, cVar0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::ALGORITHM_CONSTRAINED);
	// throw
	throw cVar1;
	// 432    .line 527
label_cond_26:
	return;

}
// .method public permits(Ljava/security/Key;)Z
bool sun::security::util::DisabledAlgorithmConstraints_S_KeySizeConstraint::permits(std::shared_ptr<java::security::Key> key)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "key"    # Ljava/security/Key;
	if ( !(this->nextConstraint) )  
		goto label_cond_e;
	if ( !(this->nextConstraint->permits(key)) )  
		goto label_cond_e;
	return 0x1;
	// 460    .line 538
label_cond_e:
	if ( !(sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})) )  
		goto label_cond_31;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("KeySizeConstraints.permits(): ")))->append(this->algorithm)->toString());
label_cond_31:
	return this->permitsImpl(key);

}


