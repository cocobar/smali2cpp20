// CPP L:\smali2cpp20\x64\Release\out\com\sun\nio\file\SensitivityWatchEventModifier.smali
#include "java2ctype.h"
#include "com.sun.nio.file.SensitivityWatchEventModifier.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static com::sun::nio::file::SensitivityWatchEventModifier::_S_VALUES;
static com::sun::nio::file::SensitivityWatchEventModifier::HIGH;
static com::sun::nio::file::SensitivityWatchEventModifier::LOW;
static com::sun::nio::file::SensitivityWatchEventModifier::MEDIUM;
// .method static constructor <clinit>()V
void com::sun::nio::file::SensitivityWatchEventModifier::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<com::sun::nio::file::SensitivityWatchEventModifier> cVar3;
	std::shared_ptr<com::sun::nio::file::SensitivityWatchEventModifier> cVar4;
	std::shared_ptr<com::sun::nio::file::SensitivityWatchEventModifier> cVar5;
	std::shared<std::vector<std::vector<com::sun::nio::file::SensitivityWatchEventModifier>>> cVar6;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = 0x2;
	cVar3 = std::make_shared<com::sun::nio::file::SensitivityWatchEventModifier>(std::make_shared<java::lang::String>(std::make_shared<char[]>("HIGH")), cVar1, cVar2);
	com::sun::nio::file::SensitivityWatchEventModifier::HIGH = cVar3;
	cVar4 = std::make_shared<com::sun::nio::file::SensitivityWatchEventModifier>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MEDIUM")), cVar0, 0xa);
	com::sun::nio::file::SensitivityWatchEventModifier::MEDIUM = cVar4;
	cVar5 = std::make_shared<com::sun::nio::file::SensitivityWatchEventModifier>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LOW")), cVar2, 0x1e);
	com::sun::nio::file::SensitivityWatchEventModifier::LOW = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<com::sun::nio::file::SensitivityWatchEventModifier>>>(0x3);
	cVar6[cVar1] = com::sun::nio::file::SensitivityWatchEventModifier::HIGH;
	cVar6[cVar0] = com::sun::nio::file::SensitivityWatchEventModifier::MEDIUM;
	cVar6[cVar2] = com::sun::nio::file::SensitivityWatchEventModifier::LOW;
	com::sun::nio::file::SensitivityWatchEventModifier::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;II)V
com::sun::nio::file::SensitivityWatchEventModifier::SensitivityWatchEventModifier(std::shared_ptr<java::lang::String> var0,int var1,int sensitivity)
{
	
	//    .param p3, "sensitivity"    # I
	java::lang::Enum::(var0, var1);
	this->sensitivity = sensitivity;
	return;

}
// .method public static valueOf(Ljava/lang/String;)Lcom/sun/nio/file/SensitivityWatchEventModifier;
std::shared_ptr<com::sun::nio::file::SensitivityWatchEventModifier> com::sun::nio::file::SensitivityWatchEventModifier::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<com::sun::nio::file::SensitivityWatchEventModifier> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(com::sun::nio::file::SensitivityWatchEventModifier(), name);
	cVar0->checkCast("com::sun::nio::file::SensitivityWatchEventModifier");
	return cVar0;

}
// .method public static values()[Lcom/sun/nio/file/SensitivityWatchEventModifier;
std::shared_ptr<com::sun::nio::file::SensitivityWatchEventModifier> com::sun::nio::file::SensitivityWatchEventModifier::values()
{
	
	return com::sun::nio::file::SensitivityWatchEventModifier::_S_VALUES;

}
// .method public sensitivityValueInSeconds()I
int com::sun::nio::file::SensitivityWatchEventModifier::sensitivityValueInSeconds()
{
	
	return this->sensitivity;

}


