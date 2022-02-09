// CPP L:\smali2cpp20\x64\Release\out\java\lang\Math$RandomNumberGeneratorHolder.smali
#include "java2ctype.h"
#include "java.lang.Math_S_RandomNumberGeneratorHolder.h"
#include "java.util.Random.h"

static java::lang::Math_S_RandomNumberGeneratorHolder::randomNumberGenerator;
// .method static constructor <clinit>()V
void java::lang::Math_S_RandomNumberGeneratorHolder::static_cinit()
{
	
	std::shared_ptr<java::util::Random> cVar0;
	
	cVar0 = std::make_shared<java::util::Random>();
	java::lang::Math_S_RandomNumberGeneratorHolder::randomNumberGenerator = cVar0;
	return;

}
// .method private constructor <init>()V
java::lang::Math_S_RandomNumberGeneratorHolder::Math_S_RandomNumberGeneratorHolder()
{
	
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


