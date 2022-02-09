// CPP L:\smali2cpp20\x64\Release\out\java\lang\CaseMapper$1.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator.h"
#include "java.lang.CaseMapper_S_1.h"
#include "java.lang.String.h"

// .method constructor <init>()V
java::lang::CaseMapper_S_1::CaseMapper_S_1()
{
	
	// 032    invoke-direct {p0}, Ljava/lang/ThreadLocal;-><init>()V
	return;

}
// .method protected initialValue()Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> java::lang::CaseMapper_S_1::initialValue()
{
	
	return android::icu::text::Transliterator::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("el-Upper")));

}


