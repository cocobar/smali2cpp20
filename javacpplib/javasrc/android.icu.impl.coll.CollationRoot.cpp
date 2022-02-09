// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationRoot.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationDataReader.h"
#include "android.icu.impl.coll.CollationRoot.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "android.icu.impl.coll.CollationTailoring.h"
#include "android.icu.impl.coll.SharedObject_S_Reference.h"
#include "android.icu.impl.coll.SharedObject.h"
#include "java.io.IOException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.MissingResourceException.h"

static android::icu::impl::coll::CollationRoot::exception;
static android::icu::impl::coll::CollationRoot::rootSingleton;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationRoot::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationTailoring> t;
	std::shared_ptr<java::util::MissingResourceException> e2;
	std::shared_ptr<android::icu::impl::coll::CollationTailoring> t2;
	std::vector<std::any> tryCatchExcetionList;
	
	t = 0x0;
	//    .local v4, "t":Landroid/icu/impl/coll/CollationTailoring;
	//    .local v3, "e2":Ljava/lang/RuntimeException;
	try {
	//label_try_start_2:
	//    .local v0, "bytes":Ljava/nio/ByteBuffer;
	t2 = std::make_shared<android::icu::impl::coll::CollationTailoring>(0x0);
	//    .local v5, "t2":Landroid/icu/impl/coll/CollationTailoring;
	android::icu::impl::coll::CollationDataReader::read(0x0, android::icu::impl::ICUBinary::getRequiredData(std::make_shared<java::lang::String>(std::make_shared<char[]>("coll/ucadata.icu"))), t2);
	//label_try_end_13:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c;
	}
	catch (java::lang::RuntimeException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_13} :catch_1c
	//    .catch Ljava/lang/RuntimeException; {:try_start_2 .. :try_end_13} :catch_19
	t = t2;
	//    .end local v0    # "bytes":Ljava/nio/ByteBuffer;
	//    .end local v5    # "t2":Landroid/icu/impl/coll/CollationTailoring;
	//    .local v2, "e":Ljava/lang/RuntimeException;
	//    .local v3, "e2":Ljava/lang/RuntimeException;
label_goto_14:
	android::icu::impl::coll::CollationRoot::rootSingleton = t;
	android::icu::impl::coll::CollationRoot::exception = 0x0;
	return;
	// 067    .line 61
	// 068    .end local v2    # "e":Ljava/lang/RuntimeException;
	// 069    .local v3, "e2":Ljava/lang/RuntimeException;
label_catch_19:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "e":Ljava/lang/RuntimeException;
	tryCatchExcetionList.pop_back();
	//    .local v3, "e2":Ljava/lang/RuntimeException;
	goto label_goto_14;
	// 080    .line 57
	// 081    .end local v2    # "e":Ljava/lang/RuntimeException;
	// 082    .local v3, "e2":Ljava/lang/RuntimeException;
label_catch_1c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	//    .end local v3    # "e2":Ljava/lang/RuntimeException;
	e2 = std::make_shared<java::util::MissingResourceException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("IOException while reading CLDR root data")), std::make_shared<java::lang::String>(std::make_shared<char[]>("CollationRoot")), std::make_shared<java::lang::String>(std::make_shared<char[]>("data/icudt58b/coll/ucadata.icu")));
	//    .local v3, "e2":Ljava/lang/RuntimeException;
	goto label_goto_14;

}
// .method public constructor <init>()V
android::icu::impl::coll::CollationRoot::CollationRoot()
{
	
	// 111    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static final getData()Landroid/icu/impl/coll/CollationData;
std::shared_ptr<android::icu::impl::coll::CollationData> android::icu::impl::coll::CollationRoot::getData()
{
	
	//    .local v0, "root":Landroid/icu/impl/coll/CollationTailoring;
	return android::icu::impl::coll::CollationRoot::getRoot({const[class].FS-Param})->data;

}
// .method public static final getRoot()Landroid/icu/impl/coll/CollationTailoring;
std::shared_ptr<android::icu::impl::coll::CollationTailoring> android::icu::impl::coll::CollationRoot::getRoot()
{
	
	if ( !(android::icu::impl::coll::CollationRoot::exception) )  
		goto label_cond_7;
	// throw
	throw android::icu::impl::coll::CollationRoot::exception;
	// 146    .line 36
label_cond_7:
	return android::icu::impl::coll::CollationRoot::rootSingleton;

}
// .method static final getSettings()Landroid/icu/impl/coll/CollationSettings;
std::shared_ptr<android::icu::impl::coll::CollationSettings> android::icu::impl::coll::CollationRoot::getSettings()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> cVar0;
	
	//    .local v0, "root":Landroid/icu/impl/coll/CollationTailoring;
	cVar0 = android::icu::impl::coll::CollationRoot::getRoot({const[class].FS-Param})->settings->readOnly();
	cVar0->checkCast("android::icu::impl::coll::CollationSettings");
	return cVar0;

}


