// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\DisabledAlgorithmConstraints$Constraint.smali
#include "java2ctype.h"
#include "java.security.Key.h"
#include "sun.security.util.CertConstraintParameters.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraint.h"

// .method private constructor <init>()V
sun::security::util::DisabledAlgorithmConstraints_S_Constraint::DisabledAlgorithmConstraints_S_Constraint()
{
	
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->nextConstraint = 0x0;
	return;

}
// .method synthetic constructor <init>(Lsun/security/util/DisabledAlgorithmConstraints$Constraint;)V
sun::security::util::DisabledAlgorithmConstraints_S_Constraint::DisabledAlgorithmConstraints_S_Constraint(std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint> _this0)
{
	
	//    .param p1, "-this0"    # Lsun/security/util/DisabledAlgorithmConstraints$Constraint;
	// 051    invoke-direct {p0}, Lsun/security/util/DisabledAlgorithmConstraints$Constraint;-><init>()V
	return;

}
// .method public abstract permits(Lsun/security/util/CertConstraintParameters;)V
void sun::security::util::DisabledAlgorithmConstraints_S_Constraint::permits(std::shared_ptr<sun::security::util::CertConstraintParameters> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 060        value = {
	// 061            Ljava/security/cert/CertPathValidatorException;
	// 062        }
	// 063    .end annotation

}
// .method public permits(Ljava/security/Key;)Z
bool sun::security::util::DisabledAlgorithmConstraints_S_Constraint::permits(std::shared_ptr<java::security::Key> key)
{
	
	//    .param p1, "key"    # Ljava/security/Key;
	return 0x1;

}


