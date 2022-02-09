// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$ScopeData.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_ScopeData.h"
#include "android.icu.impl.duration.impl.RecordReader.h"
#include "android.icu.impl.duration.impl.RecordWriter.h"
#include "java.lang.String.h"

// .method public constructor <init>()V
android::icu::impl::duration::impl::DataRecord_S_ScopeData::DataRecord_S_ScopeData()
{
	
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static read(Landroid/icu/impl/duration/impl/RecordReader;)Landroid/icu/impl/duration/impl/DataRecord$ScopeData;
std::shared_ptr<android::icu::impl::duration::impl::DataRecord_S_ScopeData> android::icu::impl::duration::impl::DataRecord_S_ScopeData::read(std::shared_ptr<android::icu::impl::duration::impl::RecordReader> in)
{
	
	std::shared_ptr<android::icu::impl::duration::impl::DataRecord_S_ScopeData> scope;
	
	//    .param p0, "in"    # Landroid/icu/impl/duration/impl/RecordReader;
	if ( !(in->open(std::make_shared<java::lang::String>(std::make_shared<char[]>("ScopeData")))) )  
		goto label_cond_30;
	scope = std::make_shared<android::icu::impl::duration::impl::DataRecord_S_ScopeData>();
	//    .local v0, "scope":Landroid/icu/impl/duration/impl/DataRecord$ScopeData;
	scope->prefix = in->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("prefix")));
	scope->requiresDigitPrefix = in->bool(std::make_shared<java::lang::String>(std::make_shared<char[]>("requiresDigitPrefix")));
	scope->suffix = in->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("suffix")));
	if ( !(in->close()) )  
		goto label_cond_30;
	return scope;
	// 093    .line 201
	// 094    .end local v0    # "scope":Landroid/icu/impl/duration/impl/DataRecord$ScopeData;
label_cond_30:
	return 0x0;

}
// .method public write(Landroid/icu/impl/duration/impl/RecordWriter;)V
void android::icu::impl::duration::impl::DataRecord_S_ScopeData::write(std::shared_ptr<android::icu::impl::duration::impl::RecordWriter> out)
{
	
	//    .param p1, "out"    # Landroid/icu/impl/duration/impl/RecordWriter;
	out->open(std::make_shared<java::lang::String>(std::make_shared<char[]>("ScopeData")));
	out->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("prefix")), this->prefix);
	out->bool(std::make_shared<java::lang::String>(std::make_shared<char[]>("requiresDigitPrefix")), this->requiresDigitPrefix);
	out->string(std::make_shared<java::lang::String>(std::make_shared<char[]>("suffix")), this->suffix);
	out->close();
	return;

}


