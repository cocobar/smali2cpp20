// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\DisabledAlgorithmConstraints$Constraints.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.Key.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.regex.Matcher.h"
#include "java.util.regex.Pattern.h"
#include "sun.security.util.AlgorithmDecomposer.h"
#include "sun.security.util.CertConstraintParameters.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraint_S_Operator.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraint.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraints.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_KeySizeConstraint.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_jdkCAConstraint.h"
#include "sun.security.util.DisabledAlgorithmConstraints.h"
#include "sun.security.util.KeyUtil.h"

static sun::security::util::DisabledAlgorithmConstraints_S_Constraints::keySizePattern;
// .method static constructor <clinit>()V
void sun::security::util::DisabledAlgorithmConstraints_S_Constraints::static_cinit()
{
	
	sun::security::util::DisabledAlgorithmConstraints_S_Constraints::keySizePattern = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("keySize\\s*(<=|<|==|!=|>|>=)\\s*(\\d+)")));
	return;

}
// .method public constructor <init>([Ljava/lang/String;)V
sun::security::util::DisabledAlgorithmConstraints_S_Constraints::DisabledAlgorithmConstraints_S_Constraints(std::shared_ptr<std::vector<java::lang::String>> constraintArray)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> constraintEntry;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int space;
	std::shared_ptr<java::lang::String> algorithm;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint> c;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint> lastConstraint;
	int jdkCALimit;
	std::shared_ptr<java::lang::Object> cVar4;
	int cVar5;
	std::shared_ptr<java::lang::CharSequence> entry;
	std::shared_ptr<java::util::regex::Matcher> matcher;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_KeySizeConstraint> c;
	std::shared_ptr<java::util::HashSet> cVar7;
	std::shared_ptr<java::util::Set> cVar8;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar11;
	std::shared_ptr<java::lang::StringBuilder> cVar12;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_jdkCAConstraint> c;
	std::shared_ptr<java::util::HashSet> cVar10;
	
	//    .param p1, "constraintArray"    # [Ljava/lang/String;
	// 062    invoke-direct/range {p0 .. p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::HashMap>();
	this->constraintsMap = cVar0;
	cVar1 = 0x0;
label_goto_11:
	if ( cVar1 >= constraintArray->size() )
		goto label_cond_149;
	constraintEntry = constraintArray[cVar1];
	//    .local v3, "constraintEntry":Ljava/lang/String;
	if ( !(constraintEntry) )  
		goto label_cond_1d;
	if ( !(constraintEntry->isEmpty()) )  
		goto label_cond_21;
label_cond_1d:
label_goto_1d:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_11;
	// 106    .line 248
label_cond_21:
	constraintEntry = constraintEntry->trim();
	if ( !(sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})) )  
		goto label_cond_46;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Constraints: ")))->append(constraintEntry)->toString());
label_cond_46:
	space = constraintEntry->indexOf(0x20);
	//    .local v9, "space":I
	if ( space <= 0 )
		goto label_cond_f4;
	algorithm = sun::security::util::AlgorithmDecomposer::hashName(constraintEntry->substring(0x0, space)->toUpperCase(java::util::Locale::ENGLISH));
	//    .local v1, "algorithm":Ljava/lang/String;
	//    .local v8, "policy":Ljava/lang/String;
	c = 0x0;
	//    .local v2, "c":Lsun/security/util/DisabledAlgorithmConstraints$Constraint;
	lastConstraint = 0x0;
	//    .local v6, "lastConstraint":Lsun/security/util/DisabledAlgorithmConstraints$Constraint;
	jdkCALimit = 0x0;
	//    .local v5, "jdkCALimit":Z
	cVar4 = constraintEntry->substring(( space + 0x1))->split(std::make_shared<java::lang::String>(std::make_shared<char[]>("&")));
	cVar5 = 0x0;
	//    .end local v2    # "c":Lsun/security/util/DisabledAlgorithmConstraints$Constraint;
	//    .end local v6    # "lastConstraint":Lsun/security/util/DisabledAlgorithmConstraints$Constraint;
label_goto_70:
	if ( cVar5 >= cVar4->size() )
		goto label_cond_1d;
	//    .local v4, "entry":Ljava/lang/String;
	entry = cVar4[cVar5]->trim();
	matcher = sun::security::util::DisabledAlgorithmConstraints_S_Constraints::keySizePattern->matcher(entry);
	//    .local v7, "matcher":Ljava/util/regex/Matcher;
	if ( !(matcher->matches()) )  
		goto label_cond_108;
	if ( !(sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})) )  
		goto label_cond_a9;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})->println(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Constraints set to keySize: ")))->append(entry)->toString());
label_cond_a9:
	c = std::make_shared<sun::security::util::DisabledAlgorithmConstraints_S_KeySizeConstraint>(algorithm, sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::of(matcher->group(0x1)), java::lang::Integer::parseInt(matcher->group(0x2)));
label_cond_c5:
label_goto_c5:
	if ( lastConstraint )     
		goto label_cond_146;
	if ( this->constraintsMap->containsKey(algorithm) )     
		goto label_cond_df;
	cVar7 = std::make_shared<java::util::HashSet>();
	this->constraintsMap->putIfAbsent(algorithm, cVar7);
label_cond_df:
	if ( !(c) )  
		goto label_cond_ee;
	cVar8 = this->constraintsMap->get(algorithm);
	cVar8->checkCast("java::util::Set");
	cVar8->add(c);
label_cond_ee:
label_goto_ee:
	lastConstraint = c;
	//    .local v6, "lastConstraint":Lsun/security/util/DisabledAlgorithmConstraints$Constraint;
	cVar5 = ( cVar5 + 0x1);
	goto label_goto_70;
	// 368    .line 264
	// 369    .end local v1    # "algorithm":Ljava/lang/String;
	// 370    .end local v4    # "entry":Ljava/lang/String;
	// 371    .end local v5    # "jdkCALimit":Z
	// 372    .end local v6    # "lastConstraint":Lsun/security/util/DisabledAlgorithmConstraints$Constraint;
	// 373    .end local v7    # "matcher":Ljava/util/regex/Matcher;
	// 374    .end local v8    # "policy":Ljava/lang/String;
label_cond_f4:
	cVar10 = std::make_shared<java::util::HashSet>();
	this->constraintsMap->putIfAbsent(constraintEntry->toUpperCase(java::util::Locale::ENGLISH), cVar10);
	goto label_goto_1d;
	// 397    .line 289
	// 398    .restart local v1    # "algorithm":Ljava/lang/String;
	// 399    .restart local v4    # "entry":Ljava/lang/String;
	// 400    .restart local v5    # "jdkCALimit":Z
	// 401    .restart local v7    # "matcher":Ljava/util/regex/Matcher;
	// 402    .restart local v8    # "policy":Ljava/lang/String;
label_cond_108:
	if ( !(entry->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("jdkCA")))) )  
		goto label_cond_c5;
	if ( !(sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})) )  
		goto label_cond_123;
	sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Constraints set to jdkCA.")));
label_cond_123:
	if ( !(jdkCALimit) )  
		goto label_cond_13f;
	cVar12 = std::make_shared<java::lang::StringBuilder>();
	cVar11 = std::make_shared<java::lang::IllegalArgumentException>(cVar12->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Only one jdkCA entry allowed in property. Constraint: ")))->append(constraintEntry)->toString());
	// throw
	throw cVar11;
	// 459    .line 298
label_cond_13f:
	c = std::make_shared<sun::security::util::DisabledAlgorithmConstraints_S_jdkCAConstraint>(algorithm);
	//    .local v2, "c":Lsun/security/util/DisabledAlgorithmConstraints$Constraint;
	jdkCALimit = 0x1;
	goto label_goto_c5;
	// 471    .line 313
	// 472    .end local v2    # "c":Lsun/security/util/DisabledAlgorithmConstraints$Constraint;
label_cond_146:
	lastConstraint->nextConstraint = c;
	goto label_goto_ee;
	// 478    .line 318
	// 479    .end local v1    # "algorithm":Ljava/lang/String;
	// 480    .end local v3    # "constraintEntry":Ljava/lang/String;
	// 481    .end local v4    # "entry":Ljava/lang/String;
	// 482    .end local v5    # "jdkCALimit":Z
	// 483    .end local v7    # "matcher":Ljava/util/regex/Matcher;
	// 484    .end local v8    # "policy":Ljava/lang/String;
	// 485    .end local v9    # "space":I
label_cond_149:
	return;

}
// .method private getConstraints(Ljava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<sun::security::util::DisabledAlgorithmConstraints_S_Constraint>> sun::security::util::DisabledAlgorithmConstraints_S_Constraints::getConstraints(std::shared_ptr<java::lang::String> algorithm)
{
	
	std::shared_ptr<java::util::Set> cVar0;
	
	//    .param p1, "algorithm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 494        value = {
	// 495            "(",
	// 496            "Ljava/lang/String;",
	// 497            ")",
	// 498            "Ljava/util/Set",
	// 499            "<",
	// 500            "Lsun/security/util/DisabledAlgorithmConstraints$Constraint;",
	// 501            ">;"
	// 502        }
	// 503    .end annotation
	cVar0 = this->constraintsMap->get(algorithm);
	cVar0->checkCast("java::util::Set");
	return cVar0;

}
// .method public permits(Lsun/security/util/CertConstraintParameters;)V
void sun::security::util::DisabledAlgorithmConstraints_S_Constraints::permits(std::shared_ptr<sun::security::util::CertConstraintParameters> cp)
{
	
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::Set> algorithms;
	std::shared_ptr<java::util::Iterator> algorithm_S_iterator;
	std::shared_ptr<java::lang::String> algorithm;
	std::shared_ptr<java::lang::Iterable> set;
	std::shared_ptr<java::util::Iterator> constraint_S_iterator;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint> constraint;
	
	//    .param p1, "cp"    # Lsun/security/util/CertConstraintParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 524        value = {
	// 525            Ljava/security/cert/CertPathValidatorException;
	// 526        }
	// 527    .end annotation
	cert = cp->getCertificate();
	//    .local v3, "cert":Ljava/security/cert/X509Certificate;
	if ( !(sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})) )  
		goto label_cond_29;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Constraints.permits(): ")))->append(cert->getSigAlgName())->toString());
label_cond_29:
	algorithms = sun::security::util::AlgorithmDecomposer::decomposeOneHash(cert->getSigAlgName());
	//    .local v2, "algorithms":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(algorithms) )  
		goto label_cond_39;
	if ( !(algorithms->isEmpty()) )  
		goto label_cond_3a;
label_cond_39:
	return;
	// 596    .line 360
label_cond_3a:
	algorithms->add(cert->getPublicKey()->getAlgorithm());
	algorithm_S_iterator = algorithms->iterator();
	//    .local v1, "algorithm$iterator":Ljava/util/Iterator;
label_cond_49:
	if ( !(algorithm_S_iterator->hasNext()) )  
		goto label_cond_6f;
	algorithm = algorithm_S_iterator->next();
	algorithm->checkCast("java::lang::String");
	//    .local v0, "algorithm":Ljava/lang/String;
	set = this->getConstraints(algorithm);
	//    .local v6, "set":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/util/DisabledAlgorithmConstraints$Constraint;>;"
	if ( !(set) )  
		goto label_cond_49;
	constraint_S_iterator = set->iterator();
	//    .local v5, "constraint$iterator":Ljava/util/Iterator;
label_goto_5f:
	if ( !(constraint_S_iterator->hasNext()) )  
		goto label_cond_49;
	constraint = constraint_S_iterator->next();
	constraint->checkCast("sun::security::util::DisabledAlgorithmConstraints_S_Constraint");
	//    .local v4, "constraint":Lsun/security/util/DisabledAlgorithmConstraints$Constraint;
	constraint->permits(cp);
	goto label_goto_5f;
	// 662    .line 372
	// 663    .end local v0    # "algorithm":Ljava/lang/String;
	// 664    .end local v4    # "constraint":Lsun/security/util/DisabledAlgorithmConstraints$Constraint;
	// 665    .end local v5    # "constraint$iterator":Ljava/util/Iterator;
	// 666    .end local v6    # "set":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/util/DisabledAlgorithmConstraints$Constraint;>;"
label_cond_6f:
	return;

}
// .method public permits(Ljava/security/Key;)Z
bool sun::security::util::DisabledAlgorithmConstraints_S_Constraints::permits(std::shared_ptr<java::security::Key> key)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::Iterable> set;
	std::shared_ptr<java::util::Iterator> constraint_S_iterator;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint> constraint;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "key"    # Ljava/security/Key;
	cVar0 = 0x1;
	set = this->getConstraints(key->getAlgorithm());
	//    .local v2, "set":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/util/DisabledAlgorithmConstraints$Constraint;>;"
	if ( set )     
		goto label_cond_c;
	return cVar0;
	// 694    .line 331
label_cond_c:
	constraint_S_iterator = set->iterator();
	//    .local v1, "constraint$iterator":Ljava/util/Iterator;
label_cond_10:
	if ( !(constraint_S_iterator->hasNext()) )  
		goto label_cond_49;
	constraint = constraint_S_iterator->next();
	constraint->checkCast("sun::security::util::DisabledAlgorithmConstraints_S_Constraint");
	//    .local v0, "constraint":Lsun/security/util/DisabledAlgorithmConstraints$Constraint;
	if ( constraint->permits(key) )     
		goto label_cond_10;
	if ( !(sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})) )  
		goto label_cond_47;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::DisabledAlgorithmConstraints::-get0({const[class].FS-Param})->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("keySizeConstraint: failed key constraint check ")))->append(sun::security::util::KeyUtil::getKeySize(key))->toString());
label_cond_47:
	return 0x0;
	// 766    .line 340
	// 767    .end local v0    # "constraint":Lsun/security/util/DisabledAlgorithmConstraints$Constraint;
label_cond_49:
	return cVar0;

}


