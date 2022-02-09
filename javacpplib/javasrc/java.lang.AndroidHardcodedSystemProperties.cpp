// CPP L:\smali2cpp20\x64\Release\out\java\lang\AndroidHardcodedSystemProperties.smali
#include "java2ctype.h"
#include "java.lang.AndroidHardcodedSystemProperties.h"
#include "java.lang.String.h"

static java::lang::AndroidHardcodedSystemProperties::JAVA_VERSION = std::make_shared<java::lang::String>("0");
static java::lang::AndroidHardcodedSystemProperties::STATIC_PROPERTIES;
// .method static constructor <clinit>()V
void java::lang::AndroidHardcodedSystemProperties::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared<std::vector<std::vector<std::vector<java::lang::String>>>> cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar7;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar8;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar9;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar10;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar11;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar12;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar13;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar14;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar15;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar16;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar17;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar18;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar19;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar20;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar21;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar22;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar23;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar24;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar25;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar26;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar27;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar28;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar29;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar30;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar31;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar32;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar33;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar34;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar35;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar36;
	
	cVar0 = 0x0;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(0x20);
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar5[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.class.version"));
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("50.0"));
	cVar4[cVar3] = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar6[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.version"));
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("0"));
	cVar4[cVar2] = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar7[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.compiler"));
	cVar7[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	cVar4[cVar1] = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar8[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.ext.dirs"));
	cVar8[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	cVar4[0x3] = cVar8;
	cVar9 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar9[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.specification.name"));
	cVar9[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Dalvik Core Library"));
	cVar4[0x4] = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar10[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.specification.vendor"));
	cVar10[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("The Android Project"));
	cVar4[0x5] = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar11[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.specification.version"));
	cVar11[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("0.9"));
	cVar4[0x6] = cVar11;
	cVar12 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar12[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.vendor"));
	cVar12[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("The Android Project"));
	cVar4[0x7] = cVar12;
	cVar13 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar13[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.vendor.url"));
	cVar13[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("http://www.android.com/"));
	cVar4[0x8] = cVar13;
	cVar14 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar14[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.vm.name"));
	cVar14[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Dalvik"));
	cVar4[0x9] = cVar14;
	cVar15 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar15[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.vm.specification.name"));
	cVar15[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Dalvik Virtual Machine Specification"));
	cVar4[0xa] = cVar15;
	cVar16 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar16[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.vm.specification.vendor"));
	cVar16[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("The Android Project"));
	cVar4[0xb] = cVar16;
	cVar17 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar17[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.vm.specification.version"));
	cVar17[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("0.9"));
	cVar4[0xc] = cVar17;
	cVar18 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar18[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.vm.vendor"));
	cVar18[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("The Android Project"));
	cVar4[0xd] = cVar18;
	cVar19 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar19[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.vm.vendor.url"));
	cVar19[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("http://www.android.com/"));
	cVar4[0xe] = cVar19;
	cVar20 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar20[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.net.preferIPv6Addresses"));
	cVar20[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("false"));
	cVar4[0xf] = cVar20;
	cVar21 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar21[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("file.encoding"));
	cVar21[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF-8"));
	cVar4[0x10] = cVar21;
	cVar22 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar22[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("file.separator"));
	cVar22[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("/"));
	cVar4[0x11] = cVar22;
	cVar23 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar23[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("line.separator"));
	cVar23[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\n"));
	cVar4[0x12] = cVar23;
	cVar24 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar24[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("path.separator"));
	cVar24[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>(":"));
	cVar4[0x13] = cVar24;
	cVar25 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar25[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ICUDebug"));
	cVar25[cVar2] = cVar0;
	cVar4[0x14] = cVar25;
	cVar26 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar26[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.text.DecimalFormat.SkipExtendedSeparatorParsing"));
	cVar26[cVar2] = cVar0;
	cVar4[0x15] = cVar26;
	cVar27 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar27[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.text.MessagePattern.ApostropheMode"));
	cVar27[cVar2] = cVar0;
	cVar4[0x16] = cVar27;
	cVar28 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar28[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.io.useCanonCaches"));
	cVar28[cVar2] = cVar0;
	cVar4[0x17] = cVar28;
	cVar29 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar29[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.io.useCanonPrefixCache"));
	cVar29[cVar2] = cVar0;
	cVar4[0x18] = cVar29;
	cVar30 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar30[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("http.keepAlive"));
	cVar30[cVar2] = cVar0;
	cVar4[0x19] = cVar30;
	cVar31 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar31[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("http.keepAliveDuration"));
	cVar31[cVar2] = cVar0;
	cVar4[0x1a] = cVar31;
	cVar32 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar32[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("http.maxConnections"));
	cVar32[cVar2] = cVar0;
	cVar4[0x1b] = cVar32;
	cVar33 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar33[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("os.name"));
	cVar33[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Linux"));
	cVar4[0x1c] = cVar33;
	cVar34 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar34[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("javax.net.debug"));
	cVar34[cVar2] = cVar0;
	cVar4[0x1d] = cVar34;
	cVar35 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar35[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("com.sun.security.preserveOldDCEncoding"));
	cVar35[cVar2] = cVar0;
	cVar4[0x1e] = cVar35;
	cVar36 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar36[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("java.util.logging.manager"));
	cVar36[cVar2] = cVar0;
	cVar4[0x1f] = cVar36;
	java::lang::AndroidHardcodedSystemProperties::STATIC_PROPERTIES = cVar4;
	return;

}
// .method public constructor <init>()V
java::lang::AndroidHardcodedSystemProperties::AndroidHardcodedSystemProperties()
{
	
	// 494    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


