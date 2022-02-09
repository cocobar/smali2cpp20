// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\DisabledAlgorithmConstraints$jdkCAConstraint.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathValidatorException_S_BasicReason.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "sun.security.util.CertConstraintParameters.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraint.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_jdkCAConstraint.h"
#include "sun.security.util.DisabledAlgorithmConstraints.h"

// .method constructor <init>(Ljava/lang/String;)V
sun::security::util::DisabledAlgorithmConstraints_S_jdkCAConstraint::DisabledAlgorithmConstraints_S_jdkCAConstraint(std::shared_ptr<java::lang::String> algo)
{
	
	//    .param p1, "algo"    # Ljava/lang/String;
	sun::security::util::DisabledAlgorithmConstraints_S_Constraint::(0x0);
	this->algorithm = algo;
	return;

}
// .method public permits(Lsun/security/util/CertConstraintParameters;)V
void sun::security::util::DisabledAlgorithmConstraints_S_jdkCAConstraint::permits(std::shared_ptr<sun::security::util::CertConstraintParameters> cp)
{
	
	std::shared_ptr<java::lang::Throwable> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	
	//    .param p1, "cp"    # Lsun/security/util/CertConstraintParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 041        value = {
	// 042            Ljava/security/cert/CertPathValidatorException;
	// 043        }
	// 044    .end annotation
	cVar0 = 0x0;
	if ( !(sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})) )  
		goto label_cond_24;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("jdkCAConstraints.permits(): ")))->append(this->algorithm)->toString());
label_cond_24:
	if ( !(cp->isTrustedMatch()) )  
		goto label_cond_41;
	if ( !(this->nextConstraint) )  
		goto label_cond_34;
	this->nextConstraint->permits(cp);
	return;
	// 104    .line 455
label_cond_34:
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Algorithm constraints check failed on certificate anchor limits")), cVar0, cVar0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::ALGORITHM_CONSTRAINED);
	// throw
	throw cVar2;
	// 123    .line 460
label_cond_41:
	return;

}


