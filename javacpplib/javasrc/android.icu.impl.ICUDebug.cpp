// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUDebug.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.util.VersionInfo.h"
#include "java.io.PrintStream.h"
#include "java.lang.SecurityException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"

static android::icu::impl::ICUDebug::debug;
static android::icu::impl::ICUDebug::help;
static android::icu::impl::ICUDebug::isJDK14OrHigher;
static android::icu::impl::ICUDebug::javaVersion;
static android::icu::impl::ICUDebug::javaVersionString;
static android::icu::impl::ICUDebug::params;
// .method static constructor <clinit>()V
void android::icu::impl::ICUDebug::static_cinit()
{
	
	bool cVar0;
	int cVar1;
	bool cVar2;
	bool cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	try {
	//label_try_start_2:
	android::icu::impl::ICUDebug::params = java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("ICUDebug")));
	//label_try_end_b:
	}
	catch (java::lang::SecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7b;
	}
	//    .catch Ljava/lang/SecurityException; {:try_start_2 .. :try_end_b} :catch_7b
	//    .local v0, "e":Ljava/lang/SecurityException;
label_goto_b:
	if ( !(android::icu::impl::ICUDebug::params) )  
		goto label_cond_75;
	cVar2 = cVar0;
label_goto_10:
	android::icu::impl::ICUDebug::debug = cVar2;
	if ( !(android::icu::impl::ICUDebug::debug) )  
		goto label_cond_77;
	if ( android::icu::impl::ICUDebug::params->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>(""))) )     
		goto label_cond_2d;
	if ( android::icu::impl::ICUDebug::params->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("help"))) == -0x1 )
		goto label_cond_77;
label_cond_2d:
	cVar3 = cVar0;
label_goto_2e:
	android::icu::impl::ICUDebug::help = cVar3;
	if ( !(android::icu::impl::ICUDebug::debug) )  
		goto label_cond_4f;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nICUDebug=")))->append(android::icu::impl::ICUDebug::params)->toString());
label_cond_4f:
	android::icu::impl::ICUDebug::javaVersionString = java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.version")), std::make_shared<java::lang::String>(std::make_shared<char[]>("0")));
	android::icu::impl::ICUDebug::javaVersion = android::icu::impl::ICUDebug::getInstanceLenient(android::icu::impl::ICUDebug::javaVersionString);
	//    .end local v0    # "e":Ljava/lang/SecurityException;
	//    .local v1, "java14Version":Landroid/icu/util/VersionInfo;
	if ( android::icu::impl::ICUDebug::javaVersion->compareTo(android::icu::util::VersionInfo::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("1.4.0")))) < 0 ) 
		goto label_cond_79;
label_goto_72:
	android::icu::impl::ICUDebug::isJDK14OrHigher = cVar0;
	return;
	// 161    .end local v1    # "java14Version":Landroid/icu/util/VersionInfo;
	// 162    .restart local v0    # "e":Ljava/lang/SecurityException;
label_cond_75:
	cVar2 = cVar1;
	goto label_goto_10;
label_cond_77:
	cVar3 = cVar1;
	goto label_goto_2e;
	// 175    .end local v0    # "e":Ljava/lang/SecurityException;
	// 176    .restart local v1    # "java14Version":Landroid/icu/util/VersionInfo;
label_cond_79:
	cVar0 = cVar1;
	goto label_goto_72;
	// 183    .line 23
	// 184    .end local v1    # "java14Version":Landroid/icu/util/VersionInfo;
label_catch_7b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "e":Ljava/lang/SecurityException;
	goto label_goto_b;

}
// .method public constructor <init>()V
android::icu::impl::ICUDebug::ICUDebug()
{
	
	// 197    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static enabled()Z
bool android::icu::impl::ICUDebug::enabled()
{
	
	return android::icu::impl::ICUDebug::debug;

}
// .method public static enabled(Ljava/lang/String;)Z
bool android::icu::impl::ICUDebug::enabled(std::shared_ptr<java::lang::String> arg)
{
	
	bool result;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "arg"    # Ljava/lang/String;
	if ( !(android::icu::impl::ICUDebug::debug) )  
		goto label_cond_39;
	if ( android::icu::impl::ICUDebug::params->indexOf(arg) == -0x1 )
		goto label_cond_37;
	result = 0x1;
	//    .local v0, "result":Z
label_goto_e:
	if ( !(android::icu::impl::ICUDebug::help) )  
		goto label_cond_36;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nICUDebug.enabled(")))->append(arg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") = ")))->append(result)->toString());
label_cond_36:
	return result;
	// 278    .line 90
	// 279    .end local v0    # "result":Z
label_cond_37:
	//    .restart local v0    # "result":Z
	goto label_goto_e;
	// 286    .line 94
	// 287    .end local v0    # "result":Z
label_cond_39:
	return 0x0;

}
// .method public static getInstanceLenient(Ljava/lang/String;)Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::impl::ICUDebug::getInstanceLenient(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> ver;
	int numeric;
	int i;
	int vidx;
	int c;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar0 = 0x3;
	cVar1 = 0x0;
	ver = std::make_shared<std::vector<int[]>>(0x4);
	//    .local v4, "ver":[I
	numeric = 0x0;
	//    .local v3, "numeric":Z
	i = 0x0;
	//    .local v1, "i":I
	vidx = 0x0;
	//    .local v5, "vidx":I
label_goto_8:
	if ( i >= s->length() )
		goto label_cond_21;
	i = ( i + 0x1);
	//    .end local v1    # "i":I
	//    .local v2, "i":I
	c = s->charAt(i);
	//    .local v0, "c":C
	if ( c <  0x30 )
		goto label_cond_1c;
	if ( c <= 0x39 )
		goto label_cond_35;
label_cond_1c:
	if ( !(numeric) )  
		goto label_cond_33;
	if ( vidx != cVar0 )
		goto label_cond_30;
	i;
	//    .end local v0    # "c":C
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
label_cond_21:
label_goto_21:
	return android::icu::util::VersionInfo::getInstance(ver[cVar1], ver[0x1], ver[0x2], ver[cVar0]);
	// 380    .line 53
	// 381    .end local v1    # "i":I
	// 382    .restart local v0    # "c":C
	// 383    .restart local v2    # "i":I
label_cond_30:
	numeric = 0x0;
	vidx = ( vidx + 0x1);
label_cond_33:
label_goto_33:
	i = i;
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_8;
	// 398    .line 57
	// 399    .end local v1    # "i":I
	// 400    .restart local v2    # "i":I
label_cond_35:
	if ( !(numeric) )  
		goto label_cond_4a;
	ver[vidx] = (( ver[vidx] * 0xa) +  ( c + -0x30));
	if ( ver[vidx] <= 0xff )
		goto label_cond_33;
	ver[vidx] = cVar1;
	i;
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_21;
	// 432    .line 67
	// 433    .end local v1    # "i":I
	// 434    .restart local v2    # "i":I
label_cond_4a:
	numeric = 0x1;
	ver[vidx] = ( c + -0x30);
	goto label_goto_33;

}
// .method public static value(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUDebug::value(std::shared_ptr<java::lang::String> arg)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> result;
	int index;
	int limit;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "arg"    # Ljava/lang/String;
	cVar0 = -0x1;
	result = std::make_shared<java::lang::String>(std::make_shared<char[]>("false"));
	//    .local v2, "result":Ljava/lang/String;
	if ( !(android::icu::impl::ICUDebug::debug) )  
		goto label_cond_68;
	index = android::icu::impl::ICUDebug::params->indexOf(arg);
	//    .local v0, "index":I
	if ( index == cVar0 )
		goto label_cond_40;
	index = (index +  arg->length());
	if ( android::icu::impl::ICUDebug::params->length() <= index )
		goto label_cond_69;
	if ( android::icu::impl::ICUDebug::params->charAt(index) != 0x3d )
		goto label_cond_69;
	index = ( index + 0x1);
	limit = android::icu::impl::ICUDebug::params->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")), index);
	//    .local v1, "limit":I
	if ( limit != cVar0 )
		goto label_cond_3c;
	//    .end local v1    # "limit":I
label_cond_3c:
	result = android::icu::impl::ICUDebug::params->substring(index, limit);
label_cond_40:
label_goto_40:
	if ( !(android::icu::impl::ICUDebug::help) )  
		goto label_cond_68;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nICUDebug.value(")))->append(arg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") = ")))->append(result)->toString());
	//    .end local v0    # "index":I
label_cond_68:
	return result;
	// 573    .line 108
	// 574    .restart local v0    # "index":I
label_cond_69:
	result = std::make_shared<java::lang::String>(std::make_shared<char[]>("true"));
	goto label_goto_40;

}


