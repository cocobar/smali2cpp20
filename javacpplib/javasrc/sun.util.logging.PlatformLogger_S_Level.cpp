// CPP L:\smali2cpp20\x64\Release\out\sun\util\logging\PlatformLogger$Level.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"
#include "java.util.Arrays.h"
#include "sun.util.logging.PlatformLogger_S_Level.h"

static sun::util::logging::PlatformLogger_S_Level::_S_VALUES;
static sun::util::logging::PlatformLogger_S_Level::ALL;
static sun::util::logging::PlatformLogger_S_Level::CONFIG;
static sun::util::logging::PlatformLogger_S_Level::FINE;
static sun::util::logging::PlatformLogger_S_Level::FINER;
static sun::util::logging::PlatformLogger_S_Level::FINEST;
static sun::util::logging::PlatformLogger_S_Level::INFO;
static sun::util::logging::PlatformLogger_S_Level::LEVEL_VALUES;
static sun::util::logging::PlatformLogger_S_Level::OFF;
static sun::util::logging::PlatformLogger_S_Level::SEVERE;
static sun::util::logging::PlatformLogger_S_Level::WARNING;
// .method static constructor <clinit>()V
void sun::util::logging::PlatformLogger_S_Level::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar5;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar6;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar7;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar8;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar9;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar10;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar11;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar12;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar13;
	std::shared<std::vector<std::vector<sun::util::logging::PlatformLogger_S_Level>>> cVar14;
	std::shared<std::vector<int[]>> cVar15;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<sun::util::logging::PlatformLogger_S_Level>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ALL")), cVar4);
	sun::util::logging::PlatformLogger_S_Level::ALL = cVar5;
	cVar6 = std::make_shared<sun::util::logging::PlatformLogger_S_Level>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FINEST")), cVar3);
	sun::util::logging::PlatformLogger_S_Level::FINEST = cVar6;
	cVar7 = std::make_shared<sun::util::logging::PlatformLogger_S_Level>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FINER")), cVar2);
	sun::util::logging::PlatformLogger_S_Level::FINER = cVar7;
	cVar8 = std::make_shared<sun::util::logging::PlatformLogger_S_Level>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FINE")), cVar1);
	sun::util::logging::PlatformLogger_S_Level::FINE = cVar8;
	cVar9 = std::make_shared<sun::util::logging::PlatformLogger_S_Level>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CONFIG")), cVar0);
	sun::util::logging::PlatformLogger_S_Level::CONFIG = cVar9;
	cVar10 = std::make_shared<sun::util::logging::PlatformLogger_S_Level>(std::make_shared<java::lang::String>(std::make_shared<char[]>("INFO")), 0x5);
	sun::util::logging::PlatformLogger_S_Level::INFO = cVar10;
	cVar11 = std::make_shared<sun::util::logging::PlatformLogger_S_Level>(std::make_shared<java::lang::String>(std::make_shared<char[]>("WARNING")), 0x6);
	sun::util::logging::PlatformLogger_S_Level::WARNING = cVar11;
	cVar12 = std::make_shared<sun::util::logging::PlatformLogger_S_Level>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SEVERE")), 0x7);
	sun::util::logging::PlatformLogger_S_Level::SEVERE = cVar12;
	cVar13 = std::make_shared<sun::util::logging::PlatformLogger_S_Level>(std::make_shared<java::lang::String>(std::make_shared<char[]>("OFF")), 0x8);
	sun::util::logging::PlatformLogger_S_Level::OFF = cVar13;
	cVar14 = std::make_shared<std::vector<std::vector<sun::util::logging::PlatformLogger_S_Level>>>(0x9);
	cVar14[cVar4] = sun::util::logging::PlatformLogger_S_Level::ALL;
	cVar14[cVar3] = sun::util::logging::PlatformLogger_S_Level::FINEST;
	cVar14[cVar2] = sun::util::logging::PlatformLogger_S_Level::FINER;
	cVar14[cVar1] = sun::util::logging::PlatformLogger_S_Level::FINE;
	cVar14[cVar0] = sun::util::logging::PlatformLogger_S_Level::CONFIG;
	cVar14[0x5] = sun::util::logging::PlatformLogger_S_Level::INFO;
	cVar14[0x6] = sun::util::logging::PlatformLogger_S_Level::WARNING;
	cVar14[0x7] = sun::util::logging::PlatformLogger_S_Level::SEVERE;
	cVar14[0x8] = sun::util::logging::PlatformLogger_S_Level::OFF;
	sun::util::logging::PlatformLogger_S_Level::_S_VALUES = cVar14;
	cVar15 = std::make_shared<std::vector<int[]>>(0x9);
	?;
	sun::util::logging::PlatformLogger_S_Level::LEVEL_VALUES = cVar15;
	return;
	// 222    .line 125
	// 223    nop
	// 225    :array_9e
	// 226    .array-data 4
	// 227        -0x80000000
	// 228        0x12c
	// 229        0x190
	// 230        0x1f4
	// 231        0x2bc
	// 232        0x320
	// 233        0x384
	// 234        0x3e8
	// 235        0x7fffffff
	// 236    .end array-data

}
// .method private constructor <init>(Ljava/lang/String;I)V
sun::util::logging::PlatformLogger_S_Level::PlatformLogger_S_Level(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method static valueOf(I)Lsun/util/logging/PlatformLogger$Level;
std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> sun::util::logging::PlatformLogger_S_Level::valueOf(int level)
{
	
	int i;
	
	//    .param p0, "level"    # I
	// switch
	{
	auto item = ( level );
	if (item == -0x80000000) goto label_sswitch_30;
	if (item == 0x12c) goto label_sswitch_18;
	if (item == 0x190) goto label_sswitch_1e;
	if (item == 0x1f4) goto label_sswitch_1b;
	if (item == 0x2bc) goto label_sswitch_27;
	if (item == 0x320) goto label_sswitch_21;
	if (item == 0x384) goto label_sswitch_24;
	if (item == 0x3e8) goto label_sswitch_2a;
	if (item == 0x7fffffff) goto label_sswitch_2d;
	}
	i = java::util::Arrays::binarySearch(sun::util::logging::PlatformLogger_S_Level::LEVEL_VALUES, 0x0, ( sun::util::logging::PlatformLogger_S_Level::LEVEL_VALUES->size() + -0x2), level);
	//    .local v0, "i":I
	if ( i < 0 ) 
		goto label_cond_33;
	//    .end local v0    # "i":I
label_goto_15:
	return sun::util::logging::PlatformLogger_S_Level::values({const[class].FS-Param})[i];
	// 286    .line 139
label_sswitch_18:
	return sun::util::logging::PlatformLogger_S_Level::FINEST;
	// 292    .line 140
label_sswitch_1b:
	return sun::util::logging::PlatformLogger_S_Level::FINE;
	// 298    .line 141
label_sswitch_1e:
	return sun::util::logging::PlatformLogger_S_Level::FINER;
	// 304    .line 142
label_sswitch_21:
	return sun::util::logging::PlatformLogger_S_Level::INFO;
	// 310    .line 143
label_sswitch_24:
	return sun::util::logging::PlatformLogger_S_Level::WARNING;
	// 316    .line 144
label_sswitch_27:
	return sun::util::logging::PlatformLogger_S_Level::CONFIG;
	// 322    .line 145
label_sswitch_2a:
	return sun::util::logging::PlatformLogger_S_Level::SEVERE;
	// 328    .line 146
label_sswitch_2d:
	return sun::util::logging::PlatformLogger_S_Level::OFF;
	// 334    .line 147
label_sswitch_30:
	return sun::util::logging::PlatformLogger_S_Level::ALL;
	// 340    .line 152
	// 341    .restart local v0    # "i":I
label_cond_33:
	i = ( (0 - i) + -0x1);
	goto label_goto_15;
	// 349    .line 136
	// 350    nop
	// 352    :sswitch_data_38
	// 353    .sparse-switch
	// 354        -0x80000000 -> :sswitch_30
	// 355        0x12c -> :sswitch_18
	// 356        0x190 -> :sswitch_1e
	// 357        0x1f4 -> :sswitch_1b
	// 358        0x2bc -> :sswitch_27
	// 359        0x320 -> :sswitch_21
	// 360        0x384 -> :sswitch_24
	// 361        0x3e8 -> :sswitch_2a
	// 362        0x7fffffff -> :sswitch_2d
	// 363    .end sparse-switch

}
// .method public static valueOf(Ljava/lang/String;)Lsun/util/logging/PlatformLogger$Level;
std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> sun::util::logging::PlatformLogger_S_Level::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(sun::util::logging::PlatformLogger_S_Level(), name);
	cVar0->checkCast("sun::util::logging::PlatformLogger_S_Level");
	return cVar0;

}
// .method public static values()[Lsun/util/logging/PlatformLogger$Level;
std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> sun::util::logging::PlatformLogger_S_Level::values()
{
	
	return sun::util::logging::PlatformLogger_S_Level::_S_VALUES;

}
// .method public intValue()I
int sun::util::logging::PlatformLogger_S_Level::intValue()
{
	
	return sun::util::logging::PlatformLogger_S_Level::LEVEL_VALUES[this->ordinal()];

}


