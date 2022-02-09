// CPP L:\smali2cpp20\x64\Release\out\java\lang\Integer$IntegerCache.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Integer_S_IntegerCache.h"
#include "java.lang.Integer.h"
#include "java.lang.Math.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.String.h"
#include "sun.misc.VM.h"

static java::lang::Integer_S_IntegerCache::_assertionsDisabled;
static java::lang::Integer_S_IntegerCache::cache;
static java::lang::Integer_S_IntegerCache::high;
static java::lang::Integer_S_IntegerCache::low = -0x80;
// .method static constructor <clinit>()V
void java::lang::Integer_S_IntegerCache::static_cinit()
{
	
	int h;
	std::shared_ptr<java::lang::String> integerCacheHighPropValue;
	int j;
	int k;
	std::shared_ptr<java::lang::Integer> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	java::lang::Integer_S_IntegerCache::_assertionsDisabled = ( java::lang::Integer_S_IntegerCache()->desiredAssertionStatus() ^ 0x1);
	h = 0x7f;
	//    .local v0, "h":I
	integerCacheHighPropValue = sun::misc::VM::getSavedProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.lang.Integer.IntegerCache.high")));
	//    .local v2, "integerCacheHighPropValue":Ljava/lang/String;
	if ( !(integerCacheHighPropValue) )  
		goto label_cond_28;
	try {
	//label_try_start_17:
	//    .local v1, "i":I
	//label_try_end_27:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5a;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_17 .. :try_end_27} :catch_5a
	h = java::lang::Math::min(java::lang::Math::max(java::lang::Integer::parseInt(integerCacheHighPropValue), 0x7f), 0x7fffff7e);
	//    .end local v1    # "i":I
label_cond_28:
label_goto_28:
	java::lang::Integer_S_IntegerCache::high = h;
	java::lang::Integer_S_IntegerCache::cache = std::make_shared<std::vector<std::vector<java::lang::Integer>>>(( ( java::lang::Integer_S_IntegerCache::high + 0x80) + 0x1));
	j = -0x80;
	//    .local v3, "j":I
	k = 0x0;
	//    .local v5, "k":I
label_goto_37:
	if ( k >= java::lang::Integer_S_IntegerCache::cache->size() )
		goto label_cond_4b;
	//    .end local v3    # "j":I
	//    .local v4, "j":I
	cVar0 = std::make_shared<java::lang::Integer>(j);
	java::lang::Integer_S_IntegerCache::cache[k] = cVar0;
	k = ( k + 0x1);
	j = ( j + 0x1);
	//    .end local v4    # "j":I
	//    .restart local v3    # "j":I
	goto label_goto_37;
	// 136    .line 836
label_cond_4b:
	if ( java::lang::Integer_S_IntegerCache::_assertionsDisabled )     
		goto label_cond_59;
	if ( java::lang::Integer_S_IntegerCache::high >= 0x7f )
		goto label_cond_59;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 152    .line 808
label_cond_59:
	return;
	// 156    .line 824
	// 157    .end local v3    # "j":I
	// 158    .end local v5    # "k":I
label_catch_5a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v6, "nfe":Ljava/lang/NumberFormatException;
	goto label_goto_28;

}
// .method private constructor <init>()V
java::lang::Integer_S_IntegerCache::Integer_S_IntegerCache()
{
	
	// 171    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


