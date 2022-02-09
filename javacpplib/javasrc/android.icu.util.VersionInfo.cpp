// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\VersionInfo.smali
#include "java2ctype.h"
#include "android.icu.util.LocaleData.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.VersionInfo.h"
#include "java.io.PrintStream.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

static android::icu::util::VersionInfo::ICU_DATA_VERSION;
static android::icu::util::VersionInfo::ICU_DATA_VERSION_PATH = std::make_shared<java::lang::String>("58b");
static android::icu::util::VersionInfo::ICU_VERSION;
static android::icu::util::VersionInfo::INVALID_VERSION_NUMBER_ = std::make_shared<java::lang::String>("Invalid version number: Version number may be negative or greater than 255");
static android::icu::util::VersionInfo::LAST_BYTE_MASK_ = 0xff;
static android::icu::util::VersionInfo::MAP_;
static android::icu::util::VersionInfo::TZDATA_VERSION;
static android::icu::util::VersionInfo::UCOL_BUILDER_VERSION;
static android::icu::util::VersionInfo::UCOL_RUNTIME_VERSION;
static android::icu::util::VersionInfo::UCOL_TAILORINGS_VERSION;
static android::icu::util::VersionInfo::UNICODE_1_0;
static android::icu::util::VersionInfo::UNICODE_1_0_1;
static android::icu::util::VersionInfo::UNICODE_1_1_0;
static android::icu::util::VersionInfo::UNICODE_1_1_5;
static android::icu::util::VersionInfo::UNICODE_2_0;
static android::icu::util::VersionInfo::UNICODE_2_1_2;
static android::icu::util::VersionInfo::UNICODE_2_1_5;
static android::icu::util::VersionInfo::UNICODE_2_1_8;
static android::icu::util::VersionInfo::UNICODE_2_1_9;
static android::icu::util::VersionInfo::UNICODE_3_0;
static android::icu::util::VersionInfo::UNICODE_3_0_1;
static android::icu::util::VersionInfo::UNICODE_3_1_0;
static android::icu::util::VersionInfo::UNICODE_3_1_1;
static android::icu::util::VersionInfo::UNICODE_3_2;
static android::icu::util::VersionInfo::UNICODE_4_0;
static android::icu::util::VersionInfo::UNICODE_4_0_1;
static android::icu::util::VersionInfo::UNICODE_4_1;
static android::icu::util::VersionInfo::UNICODE_5_0;
static android::icu::util::VersionInfo::UNICODE_5_1;
static android::icu::util::VersionInfo::UNICODE_5_2;
static android::icu::util::VersionInfo::UNICODE_6_0;
static android::icu::util::VersionInfo::UNICODE_6_1;
static android::icu::util::VersionInfo::UNICODE_6_2;
static android::icu::util::VersionInfo::UNICODE_6_3;
static android::icu::util::VersionInfo::UNICODE_7_0;
static android::icu::util::VersionInfo::UNICODE_8_0;
static android::icu::util::VersionInfo::UNICODE_9_0;
static android::icu::util::VersionInfo::UNICODE_VERSION;
static android::icu::util::VersionInfo::javaVersion;
// .method static constructor <clinit>()V
void android::icu::util::VersionInfo::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar5;
	
	cVar0 = 0x5;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	android::icu::util::VersionInfo::MAP_ = cVar5;
	android::icu::util::VersionInfo::UNICODE_1_0 = android::icu::util::VersionInfo::getInstance(cVar3, cVar4, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_1_0_1 = android::icu::util::VersionInfo::getInstance(cVar3, cVar4, cVar3, cVar4);
	android::icu::util::VersionInfo::UNICODE_1_1_0 = android::icu::util::VersionInfo::getInstance(cVar3, cVar3, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_1_1_5 = android::icu::util::VersionInfo::getInstance(cVar3, cVar3, cVar0, cVar4);
	android::icu::util::VersionInfo::UNICODE_2_0 = android::icu::util::VersionInfo::getInstance(cVar2, cVar4, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_2_1_2 = android::icu::util::VersionInfo::getInstance(cVar2, cVar3, cVar2, cVar4);
	android::icu::util::VersionInfo::UNICODE_2_1_5 = android::icu::util::VersionInfo::getInstance(cVar2, cVar3, cVar0, cVar4);
	android::icu::util::VersionInfo::UNICODE_2_1_8 = android::icu::util::VersionInfo::getInstance(cVar2, cVar3, 0x8, cVar4);
	android::icu::util::VersionInfo::UNICODE_2_1_9 = android::icu::util::VersionInfo::getInstance(cVar2, cVar3, 0x9, cVar4);
	android::icu::util::VersionInfo::UNICODE_3_0 = android::icu::util::VersionInfo::getInstance(cVar1, cVar4, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_3_0_1 = android::icu::util::VersionInfo::getInstance(cVar1, cVar4, cVar3, cVar4);
	android::icu::util::VersionInfo::UNICODE_3_1_0 = android::icu::util::VersionInfo::getInstance(cVar1, cVar3, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_3_1_1 = android::icu::util::VersionInfo::getInstance(cVar1, cVar3, cVar3, cVar4);
	android::icu::util::VersionInfo::UNICODE_3_2 = android::icu::util::VersionInfo::getInstance(cVar1, cVar2, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_4_0 = android::icu::util::VersionInfo::getInstance(0x4, cVar4, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_4_0_1 = android::icu::util::VersionInfo::getInstance(0x4, cVar4, cVar3, cVar4);
	android::icu::util::VersionInfo::UNICODE_4_1 = android::icu::util::VersionInfo::getInstance(0x4, cVar3, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_5_0 = android::icu::util::VersionInfo::getInstance(cVar0, cVar4, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_5_1 = android::icu::util::VersionInfo::getInstance(cVar0, cVar3, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_5_2 = android::icu::util::VersionInfo::getInstance(cVar0, cVar2, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_6_0 = android::icu::util::VersionInfo::getInstance(0x6, cVar4, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_6_1 = android::icu::util::VersionInfo::getInstance(0x6, cVar3, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_6_2 = android::icu::util::VersionInfo::getInstance(0x6, cVar2, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_6_3 = android::icu::util::VersionInfo::getInstance(0x6, cVar1, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_7_0 = android::icu::util::VersionInfo::getInstance(0x7, cVar4, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_8_0 = android::icu::util::VersionInfo::getInstance(0x8, cVar4, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_9_0 = android::icu::util::VersionInfo::getInstance(0x9, cVar4, cVar4, cVar4);
	android::icu::util::VersionInfo::ICU_VERSION = android::icu::util::VersionInfo::getInstance(0x3a, cVar2, cVar4, cVar4);
	android::icu::util::VersionInfo::ICU_DATA_VERSION = android::icu::util::VersionInfo::getInstance(0x3a, cVar2, cVar4, cVar4);
	android::icu::util::VersionInfo::UNICODE_VERSION = android::icu::util::VersionInfo::UNICODE_9_0;
	android::icu::util::VersionInfo::UCOL_RUNTIME_VERSION = android::icu::util::VersionInfo::getInstance(0x9);
	android::icu::util::VersionInfo::UCOL_BUILDER_VERSION = android::icu::util::VersionInfo::getInstance(0x9);
	android::icu::util::VersionInfo::UCOL_TAILORINGS_VERSION = android::icu::util::VersionInfo::getInstance(cVar3);
	android::icu::util::VersionInfo::TZDATA_VERSION = 0x0;
	return;

}
// .method private constructor <init>(I)V
android::icu::util::VersionInfo::VersionInfo(int compactversion)
{
	
	//    .param p1, "compactversion"    # I
	// 422    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->m_version_ = compactversion;
	return;

}
// .method public static getInstance(I)Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::util::VersionInfo::getInstance(int major)
{
	
	int cVar0;
	
	//    .param p0, "major"    # I
	cVar0 = 0x0;
	return android::icu::util::VersionInfo::getInstance(major, cVar0, cVar0, cVar0);

}
// .method public static getInstance(II)Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::util::VersionInfo::getInstance(int major,int minor)
{
	
	int cVar0;
	
	//    .param p0, "major"    # I
	//    .param p1, "minor"    # I
	cVar0 = 0x0;
	return android::icu::util::VersionInfo::getInstance(major, minor, cVar0, cVar0);

}
// .method public static getInstance(III)Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::util::VersionInfo::getInstance(int major,int minor,int milli)
{
	
	//    .param p0, "major"    # I
	//    .param p1, "minor"    # I
	//    .param p2, "milli"    # I
	return android::icu::util::VersionInfo::getInstance(major, minor, milli, 0x0);

}
// .method public static getInstance(IIII)Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::util::VersionInfo::getInstance(int major,int minor,int milli,int micro)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int version;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<android::icu::util::VersionInfo> result;
	std::shared_ptr<android::icu::util::VersionInfo> tmpvi;
	
	//    .param p0, "major"    # I
	//    .param p1, "minor"    # I
	//    .param p2, "milli"    # I
	//    .param p3, "micro"    # I
	cVar0 = 0xff;
	if ( major < 0 ) 
		goto label_cond_6;
	if ( major <= cVar0 )
		goto label_cond_f;
label_cond_6:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid version number: Version number may be negative or greater than 255")));
	// throw
	throw cVar1;
	// 504    .line 257
label_cond_f:
	if ( minor < 0 ) 
		goto label_cond_6;
	if ( minor >  cVar0 )
		goto label_cond_6;
	if ( milli < 0 ) 
		goto label_cond_6;
	if ( milli >  cVar0 )
		goto label_cond_6;
	if ( micro < 0 ) 
		goto label_cond_6;
	if ( micro >  cVar0 )
		goto label_cond_6;
	version = android::icu::util::VersionInfo::getInt(major, minor, milli, micro);
	//    .local v3, "version":I
	key = java::lang::Integer::valueOf(version);
	//    .local v0, "key":Ljava/lang/Integer;
	result = android::icu::util::VersionInfo::MAP_->get(key);
	result->checkCast("android::icu::util::VersionInfo");
	//    .local v1, "result":Landroid/icu/util/VersionInfo;
	if ( result )     
		goto label_cond_3d;
	//    .end local v1    # "result":Landroid/icu/util/VersionInfo;
	result = std::make_shared<android::icu::util::VersionInfo>(version);
	//    .restart local v1    # "result":Landroid/icu/util/VersionInfo;
	tmpvi = android::icu::util::VersionInfo::MAP_->putIfAbsent(key, result);
	tmpvi->checkCast("android::icu::util::VersionInfo");
	//    .local v2, "tmpvi":Landroid/icu/util/VersionInfo;
	if ( !(tmpvi) )  
		goto label_cond_3d;
	//    .end local v2    # "tmpvi":Landroid/icu/util/VersionInfo;
label_cond_3d:
	return result;

}
// .method public static getInstance(Ljava/lang/String;)Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::util::VersionInfo::getInstance(std::shared_ptr<java::lang::String> version)
{
	
	int cVar0;
	int cVar1;
	int length;
	auto array;
	int count;
	int index;
	int c;
	char c;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	
	//    .param p0, "version"    # Ljava/lang/String;
	cVar0 = 0x4;
	cVar1 = 0x0;
	length = version->length();
	//    .local v5, "length":I
	?;
	array = ?;
	//    .local v0, "array":[I
	count = 0x0;
	//    .local v2, "count":I
	index = 0x0;
	//    .local v4, "index":I
label_goto_c:
	if ( count >= cVar0 )
		goto label_cond_3b;
	if ( index >= length )
		goto label_cond_3b;
	c = version->charAt(index);
	//    .local v1, "c":C
	if ( c != 0x2e )
		goto label_cond_1d;
	count = ( count + 0x1);
label_goto_1a:
	index = ( index + 0x1);
	goto label_goto_c;
	// 628    .line 222
label_cond_1d:
	c = (char)(( c + -0x30));
	if ( c < 0 ) 
		goto label_cond_26;
	if ( c <= 0x9 )
		goto label_cond_2f;
label_cond_26:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid version number: Version number may be negative or greater than 255")));
	// throw
	throw cVar2;
	// 651    .line 226
label_cond_2f:
	array[count] = ( array[count] * 0xa);
	array[count] = (array[count] +  c);
	goto label_goto_1a;
	// 668    .line 231
	// 669    .end local v1    # "c":C
label_cond_3b:
	if ( index == length )
		goto label_cond_5e;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid version number: String \'")))->append(version)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' exceeds version format")))->toString());
	// throw
	throw cVar3;
	// 706    .line 235
label_cond_5e:
	i = 0x0;
	//    .local v3, "i":I
label_goto_5f:
	if ( i >= cVar0 )
		goto label_cond_77;
	if ( array[i] < 0 ) 
		goto label_cond_6b;
	if ( array[i] <= 0xff )
		goto label_cond_74;
label_cond_6b:
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid version number: Version number may be negative or greater than 255")));
	// throw
	throw cVar5;
	// 735    .line 235
label_cond_74:
	i = ( i + 0x1);
	goto label_goto_5f;
	// 741    .line 241
label_cond_77:
	return android::icu::util::VersionInfo::getInstance(array[cVar1], array[0x1], array[0x2], array[0x3]);

}
// .method private static getInt(IIII)I
int android::icu::util::VersionInfo::getInt(int major,int minor,int milli,int micro)
{
	
	//    .param p0, "major"    # I
	//    .param p1, "minor"    # I
	//    .param p2, "milli"    # I
	//    .param p3, "micro"    # I
	return (((( major << 0x18) |  ( minor << 0x10)) |  ( milli << 0x8)) |  micro);

}
// .method static getTZDataVersion()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::VersionInfo::getTZDataVersion()
{
	
	std::shared_ptr<android::icu::util::VersionInfo> cVar0;
	
	if ( android::icu::util::VersionInfo::TZDATA_VERSION )     
		goto label_cond_1f;
	cVar0 = android::icu::util::VersionInfo();
	cVar0->monitor_enter();
	try {
	//label_try_start_7:
	if ( android::icu::util::VersionInfo::TZDATA_VERSION )     
		goto label_cond_1e;
	//    .local v0, "tzbundle":Landroid/icu/util/UResourceBundle;
	android::icu::util::VersionInfo::TZDATA_VERSION = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("zoneinfo64")))->getString(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZVersion")));
	//label_try_end_1e:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_7 .. :try_end_1e} :catchall_22
label_cond_1e:
	cVar0->monitor_exit();
label_cond_1f:
	return android::icu::util::VersionInfo::TZDATA_VERSION;
	// 840    .line 645
label_catchall_22:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static javaVersion()Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::util::VersionInfo::javaVersion()
{
	
	std::shared_ptr<android::icu::util::VersionInfo> cVar0;
	std::shared_ptr<char[]> chars;
	int w;
	int count;
	int numeric;
	int r;
	char c;
	std::shared_ptr<java::lang::String> vs;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 852    .end annotation
	if ( android::icu::util::VersionInfo::javaVersion )     
		goto label_cond_60;
	cVar0 = android::icu::util::VersionInfo();
	cVar0->monitor_enter();
	try {
	//label_try_start_9:
	if ( android::icu::util::VersionInfo::javaVersion )     
		goto label_cond_5f;
	//    .local v6, "s":Ljava/lang/String;
	chars = java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.version")))->toCharArray();
	//    .local v1, "chars":[C
	//    .local v4, "r":I
	w = 0x0;
	//    .local v8, "w":I
	count = 0x0;
	//    .local v2, "count":I
	numeric = 0x0;
	//    .local v3, "numeric":Z
	w = w;
	//    .end local v8    # "w":I
	//    .local v9, "w":I
	r = 0x0;
	//    .end local v4    # "r":I
	//    .local v5, "r":I
label_goto_1e:
	if ( r >= chars->size() )
		goto label_cond_65;
	//    .end local v5    # "r":I
	//    .restart local v4    # "r":I
	c = chars[r];
	//    .local v0, "c":C
	if ( c <  0x30 )
		goto label_cond_2d;
	if ( c <= 0x39 )
		goto label_cond_4a;
label_cond_2d:
	if ( !(numeric) )  
		goto label_cond_63;
	if ( count != 0x3 )
		goto label_cond_3e;
	w = w;
	//    .end local v0    # "c":C
	//    .end local v9    # "w":I
	//    .restart local v8    # "w":I
label_goto_33:
	if ( w <= 0 )
		goto label_cond_53;
	if ( chars[( w + -0x1)] != 0x2e )
		goto label_cond_53;
	w = ( w + -0x1);
	goto label_goto_33;
	// 961    .line 342
	// 962    .end local v8    # "w":I
	// 963    .restart local v0    # "c":C
	// 964    .restart local v9    # "w":I
label_cond_3e:
	numeric = 0x0;
	w = ( w + 0x1);
	//    .end local v9    # "w":I
	//    .restart local v8    # "w":I
	chars[w] = 0x2e;
	count = ( count + 0x1);
label_goto_47:
	w = w;
	//    .end local v8    # "w":I
	//    .restart local v9    # "w":I
	r = ( r + 0x1);
	//    .end local v4    # "r":I
	//    .restart local v5    # "r":I
	goto label_goto_1e;
	// 991    .line 347
	// 992    .end local v5    # "r":I
	// 993    .restart local v4    # "r":I
label_cond_4a:
	0x1;
	w = ( w + 0x1);
	//    .end local v9    # "w":I
	//    .restart local v8    # "w":I
	chars[w] = c;
	//label_try_end_4f:
	}
	catch (...){
		goto label_catchall_50;
	}
	//    .catchall {:try_start_9 .. :try_end_4f} :catchall_50
	goto label_goto_47;
	// 1008    .line 323
	// 1009    .end local v0    # "c":C
	// 1010    .end local v1    # "chars":[C
	// 1011    .end local v2    # "count":I
	// 1012    .end local v3    # "numeric":Z
	// 1013    .end local v4    # "r":I
	// 1014    .end local v8    # "w":I
label_catchall_50:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 1022    .line 355
	// 1023    .restart local v1    # "chars":[C
	// 1024    .restart local v2    # "count":I
	// 1025    .restart local v3    # "numeric":Z
	// 1026    .restart local v4    # "r":I
	// 1027    .restart local v8    # "w":I
label_cond_53:
	try {
	//label_try_start_53:
	vs = std::make_shared<java::lang::String>(chars, 0x0, w);
	//    .local v7, "vs":Ljava/lang/String;
	android::icu::util::VersionInfo::javaVersion = android::icu::util::VersionInfo::getInstance(vs);
	//label_try_end_5f:
	}
	catch (...){
		goto label_catchall_50;
	}
	//    .catchall {:try_start_53 .. :try_end_5f} :catchall_50
label_cond_5f:
	cVar0->monitor_exit();
label_cond_60:
	return android::icu::util::VersionInfo::javaVersion;
	// 1055    .end local v7    # "vs":Ljava/lang/String;
	// 1056    .end local v8    # "w":I
	// 1057    .restart local v0    # "c":C
	// 1058    .restart local v9    # "w":I
label_cond_63:
	w = w;
	//    .end local v9    # "w":I
	//    .restart local v8    # "w":I
	goto label_goto_47;
	// 1066    .end local v0    # "c":C
	// 1067    .end local v4    # "r":I
	// 1068    .end local v8    # "w":I
	// 1069    .restart local v5    # "r":I
	// 1070    .restart local v9    # "w":I
label_cond_65:
	w = w;
	//    .end local v9    # "w":I
	//    .restart local v8    # "w":I
	r;
	//    .end local v5    # "r":I
	//    .restart local v4    # "r":I
	goto label_goto_33;

}
// .method public static main([Ljava/lang/String;)V
void android::icu::util::VersionInfo::main(std::shared_ptr<std::vector<java::lang::String>> args)
{
	
	int cVar0;
	int cVar1;
	int major;
	int minor;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	
	//    .param p0, "args"    # [Ljava/lang/String;
	cVar0 = 0x4;
	cVar1 = 0x2;
	if ( android::icu::util::VersionInfo::ICU_VERSION->getMajor() >  cVar0 )
		goto label_cond_100;
	if ( !(( android::icu::util::VersionInfo::ICU_VERSION->getMinor() % 0x2)) )  
		goto label_cond_f8;
	major = android::icu::util::VersionInfo::ICU_VERSION->getMajor();
	//    .local v1, "major":I
	minor = ( android::icu::util::VersionInfo::ICU_VERSION->getMinor() + 0x1);
	//    .local v2, "minor":I
	if ( minor <  0xa )
		goto label_cond_2a;
label_cond_2a:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	//    .end local v1    # "major":I
	//    .end local v2    # "minor":I
	//    .local v0, "icuApiVer":Ljava/lang/String;
label_goto_5a:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("International Components for Unicode for Java ")))->append(icuApiVer)->toString());
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Implementation Version: ")))->append(android::icu::util::VersionInfo::ICU_VERSION->getVersionString(cVar1, cVar0))->toString());
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unicode Data Version:   ")))->append(android::icu::util::VersionInfo::UNICODE_VERSION->getVersionString(cVar1, cVar0))->toString());
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CLDR Data Version:      ")))->append(android::icu::util::LocaleData::getCLDRVersion({const[class].FS-Param})->getVersionString(cVar1, cVar0))->toString());
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Time Zone Data Version: ")))->append(android::icu::util::VersionInfo::getTZDataVersion({const[class].FS-Param}))->toString());
	return;
	// 1340    .line 575
	// 1341    .end local v0    # "icuApiVer":Ljava/lang/String;
label_cond_f8:
	//    .restart local v0    # "icuApiVer":Ljava/lang/String;
	goto label_goto_5a;
	// 1352    .line 578
	// 1353    .end local v0    # "icuApiVer":Ljava/lang/String;
label_cond_100:
	if ( android::icu::util::VersionInfo::ICU_VERSION->getMinor() )     
		goto label_cond_135;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	//    .restart local v0    # "icuApiVer":Ljava/lang/String;
	goto label_goto_5a;
	// 1407    .line 582
	// 1408    .end local v0    # "icuApiVer":Ljava/lang/String;
label_cond_135:
	//    .restart local v0    # "icuApiVer":Ljava/lang/String;
	goto label_goto_5a;

}
// .method public compareTo(Landroid/icu/util/VersionInfo;)I
int android::icu::util::VersionInfo::compareTo(std::shared_ptr<android::icu::util::VersionInfo> other)
{
	
	//    .param p1, "other"    # Landroid/icu/util/VersionInfo;
	return (this->m_version_ -  other->m_version_);

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::VersionInfo::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	if ( other != this )
		goto label_cond_4;
	cVar0 = 0x1;
label_goto_3:
	return cVar0;
label_cond_4:
	cVar0 = 0x0;
	goto label_goto_3;

}
// .method public getMajor()I
int android::icu::util::VersionInfo::getMajor()
{
	
	return ( _shri(this->m_version_,0x18) & 0xff);

}
// .method public getMicro()I
int android::icu::util::VersionInfo::getMicro()
{
	
	return ( this->m_version_ & 0xff);

}
// .method public getMilli()I
int android::icu::util::VersionInfo::getMilli()
{
	
	return ( _shri(this->m_version_,0x8) & 0xff);

}
// .method public getMinor()I
int android::icu::util::VersionInfo::getMinor()
{
	
	return ( _shri(this->m_version_,0x10) & 0xff);

}
// .method public getVersionString(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::VersionInfo::getVersionString(int minDigits,int maxDigits)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared<std::vector<int[]>> digits;
	int numDigits;
	std::shared_ptr<java::lang::StringBuilder> verStr;
	int i;
	
	//    .param p1, "minDigits"    # I
	//    .param p2, "maxDigits"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1529    .end annotation
	cVar0 = 0x4;
	cVar1 = 0x1;
	cVar2 = 0x0;
	if ( minDigits <  cVar1 )
		goto label_cond_7;
	if ( maxDigits >= cVar1 )
		goto label_cond_10;
label_cond_7:
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid min/maxDigits range")));
	// throw
	throw cVar3;
	// 1553    .line 610
label_cond_10:
	if ( minDigits >  cVar0 )
		goto label_cond_7;
	if ( maxDigits >  cVar0 )
		goto label_cond_7;
	if ( minDigits >  maxDigits )
		goto label_cond_7;
	digits = std::make_shared<std::vector<int[]>>(cVar0);
	//    .local v0, "digits":[I
	digits[cVar2] = this->getMajor();
	digits[cVar1] = this->getMinor();
	digits[0x2] = this->getMilli();
	digits[0x3] = this->getMicro();
	numDigits = maxDigits;
	//    .local v2, "numDigits":I
label_goto_33:
	if ( numDigits <= minDigits )
		goto label_cond_3b;
	if ( !(digits[( numDigits + -0x1)]) )  
		goto label_cond_57;
label_cond_3b:
	verStr = std::make_shared<java::lang::StringBuilder>(0x7);
	//    .local v3, "verStr":Ljava/lang/StringBuilder;
	verStr->append(digits[cVar2]);
	i = 0x1;
	//    .local v1, "i":I
label_goto_47:
	if ( i >= numDigits )
		goto label_cond_5a;
	verStr->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")));
	verStr->append(digits[i]);
	i = ( i + 0x1);
	goto label_goto_47;
	// 1648    .line 625
	// 1649    .end local v1    # "i":I
	// 1650    .end local v3    # "verStr":Ljava/lang/StringBuilder;
label_cond_57:
	numDigits = ( numDigits + -0x1);
	goto label_goto_33;
	// 1656    .line 635
	// 1657    .restart local v1    # "i":I
	// 1658    .restart local v3    # "verStr":Ljava/lang/StringBuilder;
label_cond_5a:
	return verStr->toString();

}
// .method public hashCode()I
int android::icu::util::VersionInfo::hashCode()
{
	
	return this->m_version_;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::VersionInfo::toString()
{
	
	char cVar0;
	std::shared_ptr<java::lang::StringBuilder> result;
	
	cVar0 = 0x2e;
	result = std::make_shared<java::lang::StringBuilder>(0x7);
	//    .local v0, "result":Ljava/lang/StringBuilder;
	result->append(this->getMajor());
	result->append(cVar0);
	result->append(this->getMinor());
	result->append(cVar0);
	result->append(this->getMilli());
	result->append(cVar0);
	result->append(this->getMicro());
	return result->toString();

}


