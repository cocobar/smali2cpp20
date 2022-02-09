// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\ResourceBasedPeriodFormatterDataService.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUData.h"
#include "android.icu.impl.duration.impl.DataRecord.h"
#include "android.icu.impl.duration.impl.PeriodFormatterData.h"
#include "android.icu.impl.duration.impl.ResourceBasedPeriodFormatterDataService.h"
#include "android.icu.impl.duration.impl.XMLRecordReader.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "java.io.BufferedReader.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.InputStreamReader.h"
#include "java.io.UnsupportedEncodingException.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"

static android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService::PATH = std::make_shared<java::lang::String>("data/");
static android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService::singleton;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService>();
	android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService::singleton = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService::ResourceBasedPeriodFormatterDataService()
{
	
	std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	std::shared_ptr<java::util::ArrayList> localeNames;
	std::shared_ptr<java::io::InputStream> is;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::IllegalStateException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::io::BufferedReader> br;
	std::shared_ptr<java::io::InputStreamReader> cVar2;
	std::shared_ptr<java::lang::String> string;
	
	cVar0 = 0x0;
	// 064    invoke-direct {p0}, Landroid/icu/impl/duration/impl/PeriodFormatterDataService;-><init>()V
	this->lastData = cVar0;
	this->lastLocale = cVar0;
	cVar1 = std::make_shared<java::util::HashMap>();
	this->cache = cVar1;
	localeNames = std::make_shared<java::util::ArrayList>();
	//    .local v4, "localeNames":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	is = android::icu::impl::ICUData::getRequiredStream(this->getClass(), std::make_shared<java::lang::String>(std::make_shared<char[]>("data/index.txt")));
	//    .local v3, "is":Ljava/io/InputStream;
	try {
	//label_try_start_1f:
	cVar2 = std::make_shared<java::io::InputStreamReader>(is, std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF-8")));
	br = std::make_shared<java::io::BufferedReader>(cVar2);
	//    .local v0, "br":Ljava/io/BufferedReader;
	0x0;
label_cond_2d:
label_goto_2d:
	string = br->readLine();
	//    .local v5, "string":Ljava/lang/String;
	if ( !(string) )  
		goto label_cond_6e;
	string = string->trim();
	if ( string->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("#"))) )     
		goto label_cond_2d;
	if ( !(string->length()) )  
		goto label_cond_2d;
	localeNames->add(string);
	//label_try_end_49:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4a;
	}
	catch (...){
		goto label_catchall_69;
	}
	//    .catch Ljava/io/IOException; {:try_start_1f .. :try_end_49} :catch_4a
	//    .catchall {:try_start_1f .. :try_end_49} :catchall_69
	goto label_goto_2d;
	// 153    .line 75
	// 154    .end local v0    # "br":Ljava/io/BufferedReader;
	// 155    .end local v5    # "string":Ljava/lang/String;
label_catch_4a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	try {
	//label_try_start_4b:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar3 = std::make_shared<java::lang::IllegalStateException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IO Error reading data/index.txt: ")))->append(getCatchExcetionFromList->toString())->toString());
	// throw
	throw cVar3;
	// 191    :try_end_69
	// 192    .catchall {:try_start_4b .. :try_end_69} :catchall_69
	// 194    .line 78
	// 195    .end local v1    # "e":Ljava/io/IOException;
label_catchall_69:
	// move-exception
	
	try {
	//label_try_start_6a:
	is->close();
	//label_try_end_6d:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7d;
	}
	//    .catch Ljava/io/IOException; {:try_start_6a .. :try_end_6d} :catch_7d
label_goto_6d:
	// throw
	throw;
	// 209    .line 74
	// 210    .restart local v0    # "br":Ljava/io/BufferedReader;
	// 211    .restart local v5    # "string":Ljava/lang/String;
label_cond_6e:
	try {
	//label_try_start_6e:
	br->close();
	//label_try_end_71:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4a;
	}
	catch (...){
		goto label_catchall_69;
	}
	//    .catch Ljava/io/IOException; {:try_start_6e .. :try_end_71} :catch_4a
	//    .catchall {:try_start_6e .. :try_end_71} :catchall_69
	try {
	//label_try_start_71:
	is->close();
	//label_try_end_74:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7b;
	}
	//    .catch Ljava/io/IOException; {:try_start_71 .. :try_end_74} :catch_7b
label_goto_74:
	this->availableLocales = java::util::Collections::unmodifiableList(localeNames);
	return;
	// 236    .line 81
label_catch_7b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ignored":Ljava/io/IOException;
	goto label_goto_74;
	// 243    .end local v0    # "br":Ljava/io/BufferedReader;
	// 244    .end local v2    # "ignored":Ljava/io/IOException;
	// 245    .end local v5    # "string":Ljava/lang/String;
label_catch_7d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "ignored":Ljava/io/IOException;
	goto label_goto_6d;

}
// .method public static getInstance()Landroid/icu/impl/duration/impl/ResourceBasedPeriodFormatterDataService;
std::shared_ptr<android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService> android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService::getInstance()
{
	
	return android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService::singleton;

}
// .method public get(Ljava/lang/String;)Landroid/icu/impl/duration/impl/PeriodFormatterData;
std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService::get(std::shared_ptr<java::lang::String> cVar1)
{
	
	int cVar0;
	int x;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> ld;
	std::shared_ptr<java::lang::Object> ln;
	int ix;
	std::shared_ptr<java::lang::String> ln;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::util::MissingResourceException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::io::InputStreamReader> reader;
	std::shared_ptr<android::icu::impl::duration::impl::XMLRecordReader> cVar3;
	std::shared_ptr<android::icu::impl::duration::impl::DataRecord> dr;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::MissingResourceException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	
	//    .param p1, "localeName"    # Ljava/lang/String;
	cVar0 = -0x1;
	x = cVar1->indexOf(0x40);
	//    .local v8, "x":I
	if ( x == cVar0 )
		goto label_cond_e;
	cVar1 = cVar1->substring(0x0, x);
label_cond_e:
	this->monitor_enter();
	try {
	//label_try_start_f:
	if ( !(this->lastLocale) )  
		goto label_cond_1f;
	if ( !(this->lastLocale->equals(cVar1)) )  
		goto label_cond_1f;
	//label_try_end_1d:
	}
	catch (...){
		goto label_catchall_b5;
	}
	//    .catchall {:try_start_f .. :try_end_1d} :catchall_b5
	this->monitor_exit();
	return this->lastData;
	// 317    .line 100
label_cond_1f:
	try {
	//label_try_start_1f:
	ld = this->cache->get(cVar1);
	ld->checkCast("android::icu::impl::duration::impl::PeriodFormatterData");
	//    .local v4, "ld":Landroid/icu/impl/duration/impl/PeriodFormatterData;
	if ( ld )     
		goto label_cond_94;
	ln = cVar1;
	//    .local v5, "ln":Ljava/lang/String;
label_goto_2a:
	if ( this->availableLocales->contains(ln) )     
		goto label_cond_4f;
	ix = ln->lastIndexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	//    .local v3, "ix":I
	if ( ix <= cVar0 )
		goto label_cond_41;
	ln = ln->substring(0x0, ix);
	goto label_goto_2a;
	// 366    .line 107
label_cond_41:
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("test"))->equals(ln) )     
		goto label_cond_4e;
	ln = std::make_shared<java::lang::String>(std::make_shared<char[]>("test"));
	goto label_goto_2a;
	// 381    .line 110
label_cond_4e:
	ln = 0x0;
	//    .end local v3    # "ix":I
	//    .end local v5    # "ln":Ljava/lang/String;
label_cond_4f:
	if ( !(ln) )  
		goto label_cond_d6;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	//label_try_end_6b:
	}
	catch (...){
		goto label_catchall_b5;
	}
	//    .catchall {:try_start_1f .. :try_end_6b} :catchall_b5
	name = cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("data/pfd_")))->append(ln)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".xml")))->toString();
	//    .local v6, "name":Ljava/lang/String;
	try {
	//label_try_start_6c:
	reader = std::make_shared<java::io::InputStreamReader>(android::icu::impl::ICUData::getRequiredStream(this->getClass(), name), std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF-8")));
	//    .local v7, "reader":Ljava/io/InputStreamReader;
	cVar3 = std::make_shared<android::icu::impl::duration::impl::XMLRecordReader>(reader);
	dr = android::icu::impl::duration::impl::DataRecord::read(ln, cVar3);
	//    .local v0, "dr":Landroid/icu/impl/duration/impl/DataRecord;
	reader->close();
	if ( !(dr) )  
		goto label_cond_8f;
	//    .end local v4    # "ld":Landroid/icu/impl/duration/impl/PeriodFormatterData;
	ld = std::make_shared<android::icu::impl::duration::impl::PeriodFormatterData>(cVar1, dr);
	//label_try_end_8f:
	}
	catch (java::io::UnsupportedEncodingException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b8;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	catch (...){
		goto label_catchall_b5;
	}
	//    .catch Ljava/io/UnsupportedEncodingException; {:try_start_6c .. :try_end_8f} :catch_b8
	//    .catch Ljava/io/IOException; {:try_start_6c .. :try_end_8f} :catch_9a
	//    .catchall {:try_start_6c .. :try_end_8f} :catchall_b5
	//    .restart local v4    # "ld":Landroid/icu/impl/duration/impl/PeriodFormatterData;
label_cond_8f:
	try {
	//label_try_start_8f:
	this->cache->put(cVar1, ld);
	//    .end local v0    # "dr":Landroid/icu/impl/duration/impl/DataRecord;
	//    .end local v6    # "name":Ljava/lang/String;
	//    .end local v7    # "reader":Ljava/io/InputStreamReader;
label_cond_94:
	this->lastData = ld;
	this->lastLocale = cVar1;
	//label_try_end_98:
	}
	catch (...){
		goto label_catchall_b5;
	}
	//    .catchall {:try_start_8f .. :try_end_98} :catchall_b5
	this->monitor_exit();
	return ld;
	// 489    .line 136
	// 490    .end local v4    # "ld":Landroid/icu/impl/duration/impl/PeriodFormatterData;
	// 491    .restart local v6    # "name":Ljava/lang/String;
label_catch_9a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	try {
	//label_try_start_9b:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<android::icu::util::ICUUncheckedIOException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Failed to close() resource ")))->append(name)->toString(), getCatchExcetionFromList);
	// throw
	throw cVar4;
	// 523    :try_end_b5
	// 524    .catchall {:try_start_9b .. :try_end_b5} :catchall_b5
	// 526    .line 95
	// 527    .end local v1    # "e":Ljava/io/IOException;
	// 528    .end local v6    # "name":Ljava/lang/String;
label_catchall_b5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 536    .line 133
	// 537    .restart local v6    # "name":Ljava/lang/String;
label_catch_b8:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/io/UnsupportedEncodingException;
	try {
	//label_try_start_b9:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::util::MissingResourceException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unhandled encoding for resource ")))->append(name)->toString(), name, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar6;
	// 572    .line 141
	// 573    .end local v2    # "e":Ljava/io/UnsupportedEncodingException;
	// 574    .end local v6    # "name":Ljava/lang/String;
	// 575    .restart local v4    # "ld":Landroid/icu/impl/duration/impl/PeriodFormatterData;
label_cond_d6:
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::util::MissingResourceException>(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duration data not found for  ")))->append(cVar1)->toString(), std::make_shared<java::lang::String>(std::make_shared<char[]>("data/")), cVar1);
	// throw
	throw cVar8;
	// 604    :try_end_f3
	// 605    .catchall {:try_start_b9 .. :try_end_f3} :catchall_b5

}
// .method public getAvailableLocales()Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::lang::String>> android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService::getAvailableLocales()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 611        value = {
	// 612            "()",
	// 613            "Ljava/util/Collection",
	// 614            "<",
	// 615            "Ljava/lang/String;",
	// 616            ">;"
	// 617        }
	// 618    .end annotation
	return this->availableLocales;

}


