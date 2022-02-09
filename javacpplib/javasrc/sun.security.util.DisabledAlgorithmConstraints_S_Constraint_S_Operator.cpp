// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\DisabledAlgorithmConstraints$Constraint$Operator.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraint_S_Operator.h"

static sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::_S_VALUES;
static sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::EQ;
static sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::GE;
static sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::GT;
static sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::LE;
static sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::LT;
static sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::NE;
// .method static constructor <clinit>()V
void sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> cVar5;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> cVar6;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> cVar7;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> cVar8;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> cVar9;
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> cVar10;
	std::shared<std::vector<std::vector<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator>>> cVar11;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("EQ")), cVar4);
	sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::EQ = cVar5;
	cVar6 = std::make_shared<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NE")), cVar3);
	sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::NE = cVar6;
	cVar7 = std::make_shared<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LT")), cVar2);
	sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::LT = cVar7;
	cVar8 = std::make_shared<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LE")), cVar1);
	sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::LE = cVar8;
	cVar9 = std::make_shared<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GT")), cVar0);
	sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::GT = cVar9;
	cVar10 = std::make_shared<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GE")), 0x5);
	sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::GE = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator>>>(0x6);
	cVar11[cVar4] = sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::EQ;
	cVar11[cVar3] = sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::NE;
	cVar11[cVar2] = sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::LT;
	cVar11[cVar1] = sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::LE;
	cVar11[cVar0] = sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::GT;
	cVar11[0x5] = sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::GE;
	sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::_S_VALUES = cVar11;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::DisabledAlgorithmConstraints_S_Constraint_S_Operator(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method static of(Ljava/lang/String;)Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;
std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::of(std::shared_ptr<java::lang::String> s)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( !(s->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("==")))) )  
		goto label_cond_c;
	return sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::EQ;
	// 178    .line 390
label_cond_c:
	if ( !(s->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("!=")))) )  
		goto label_cond_18;
	return sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::NE;
	// 193    .line 390
label_cond_18:
	if ( !(s->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("<")))) )  
		goto label_cond_24;
	return sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::LT;
	// 208    .line 390
label_cond_24:
	if ( !(s->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("<=")))) )  
		goto label_cond_30;
	return sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::LE;
	// 223    .line 390
label_cond_30:
	if ( !(s->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>(">")))) )  
		goto label_cond_3c;
	return sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::GT;
	// 238    .line 390
label_cond_3c:
	if ( !(s->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>(">=")))) )  
		goto label_cond_48;
	return sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::GE;
	// 253    .line 405
label_cond_48:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error in security property. ")))->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is not a legal Operator")))->toString());
	// throw
	throw cVar0;

}
// .method public static valueOf(Ljava/lang/String;)Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;
std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator(), name);
	cVar0->checkCast("sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator");
	return cVar0;

}
// .method public static values()[Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;
std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator> sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::values()
{
	
	return sun::security::util::DisabledAlgorithmConstraints_S_Constraint_S_Operator::_S_VALUES;

}


