// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$ReaderValue.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Array.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ReaderValue.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Table.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.impl.UResource_S_Array.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.util.UResourceTypeMismatchException.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

// .method constructor <init>()V
android::icu::impl::ICUResourceBundleReader_S_ReaderValue::ICUResourceBundleReader_S_ReaderValue()
{
	
	// 029    invoke-direct {p0}, Landroid/icu/impl/UResource$Value;-><init>()V
	return;

}
// .method private getStringArray(Landroid/icu/impl/ICUResourceBundleReader$Array;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader_S_ReaderValue::getStringArray(std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Array> array)
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> result;
	int i;
	auto s;
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	//    .param p1, "array"    # Landroid/icu/impl/ICUResourceBundleReader$Array;
	result = std::make_shared<std::vector<std::vector<java::lang::String>>>(array->size);
	//    .local v2, "result":[Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( i >= array->size )
		goto label_cond_25;
	//    .local v1, "r":I
	s = this->reader->getString(array->getContainerResource(this->reader, i));
	//    .local v3, "s":Ljava/lang/String;
	if ( s )     
		goto label_cond_20;
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;
	// 082    .line 934
label_cond_20:
	result[i] = s;
	i = ( i + 0x1);
	goto label_goto_5;
	// 091    .line 936
	// 092    .end local v1    # "r":I
	// 093    .end local v3    # "s":Ljava/lang/String;
label_cond_25:
	return result;

}
// .method public getAliasString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader_S_ReaderValue::getAliasString()
{
	
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	s = this->reader->getAlias(this->res);
	//    .local v0, "s":Ljava/lang/String;
	if ( s )     
		goto label_cond_13;
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;
	// 126    .line 827
label_cond_13:
	return s;

}
// .method public getArray()Landroid/icu/impl/UResource$Array;
std::shared_ptr<android::icu::impl::UResource_S_Array> android::icu::impl::ICUResourceBundleReader_S_ReaderValue::getArray()
{
	
	std::shared_ptr<android::icu::impl::UResource_S_Array> array;
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	array = this->reader->getArray(this->res);
	//    .local v0, "array":Landroid/icu/impl/ICUResourceBundleReader$Array;
	if ( array )     
		goto label_cond_13;
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;
	// 157    .line 870
label_cond_13:
	return array;

}
// .method public getBinary()Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUResourceBundleReader_S_ReaderValue::getBinary()
{
	
	std::shared_ptr<java::nio::ByteBuffer> bb;
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	bb = this->reader->getBinary(this->res);
	//    .local v0, "bb":Ljava/nio/ByteBuffer;
	if ( bb )     
		goto label_cond_13;
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;
	// 188    .line 861
label_cond_13:
	return bb;

}
// .method public getInt()I
int android::icu::impl::ICUResourceBundleReader_S_ReaderValue::getInt()
{
	
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	if ( android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(this->res) == 0x7 )
		goto label_cond_12;
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;
	// 217    .line 835
label_cond_12:
	return android::icu::impl::ICUResourceBundleReader::RES_GET_INT(this->res);

}
// .method public getIntVector()[I
int android::icu::impl::ICUResourceBundleReader_S_ReaderValue::getIntVector()
{
	
	std::shared_ptr<int[]> iv;
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	iv = this->reader->getIntVector(this->res);
	//    .local v0, "iv":[I
	if ( iv )     
		goto label_cond_13;
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;
	// 254    .line 852
label_cond_13:
	return iv;

}
// .method public getString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader_S_ReaderValue::getString()
{
	
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	s = this->reader->getString(this->res);
	//    .local v0, "s":Ljava/lang/String;
	if ( s )     
		goto label_cond_13;
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;
	// 285    .line 818
label_cond_13:
	return s;

}
// .method public getStringArray()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader_S_ReaderValue::getStringArray()
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Array> array;
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	array = this->reader->getArray(this->res);
	//    .local v0, "array":Landroid/icu/impl/ICUResourceBundleReader$Array;
	if ( array )     
		goto label_cond_13;
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;
	// 316    .line 893
label_cond_13:
	return this->getStringArray(array);

}
// .method public getStringArrayOrStringAsArray()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader_S_ReaderValue::getStringArrayOrStringAsArray()
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Array> array;
	auto s;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar1;
	
	array = this->reader->getArray(this->res);
	//    .local v0, "array":Landroid/icu/impl/ICUResourceBundleReader$Array;
	if ( !(array) )  
		goto label_cond_f;
	return this->getStringArray(array);
	// 349    .line 902
label_cond_f:
	s = this->reader->getString(this->res);
	//    .local v1, "s":Ljava/lang/String;
	if ( !(s) )  
		goto label_cond_20;
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x1);
	cVar0[0x0] = s;
	return cVar0;
	// 374    .line 906
label_cond_20:
	cVar1 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar1;

}
// .method public getStringOrFirstOfArray()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader_S_ReaderValue::getStringOrFirstOfArray()
{
	
	std::shared_ptr<java::lang::String> s;
	int array;
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	s = this->reader->getString(this->res);
	//    .local v2, "s":Ljava/lang/String;
	if ( !(s) )  
		goto label_cond_c;
	return s;
	// 407    .line 915
label_cond_c:
	array = this->reader->getArray(this->res);
	//    .local v0, "array":Landroid/icu/impl/ICUResourceBundleReader$Array;
	if ( !(array) )  
		goto label_cond_29;
	if ( array->size <= 0 )
		goto label_cond_29;
	//    .local v1, "r":I
	s = this->reader->getString(array->getContainerResource(this->reader, 0x0));
	if ( !(s) )  
		goto label_cond_29;
	return s;
	// 446    .line 923
	// 447    .end local v1    # "r":I
label_cond_29:
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;

}
// .method public getTable()Landroid/icu/impl/UResource$Table;
std::shared_ptr<android::icu::impl::UResource_S_Table> android::icu::impl::ICUResourceBundleReader_S_ReaderValue::getTable()
{
	
	std::shared_ptr<android::icu::impl::UResource_S_Table> table;
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	table = this->reader->getTable(this->res);
	//    .local v0, "table":Landroid/icu/impl/ICUResourceBundleReader$Table;
	if ( table )     
		goto label_cond_13;
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;
	// 484    .line 879
label_cond_13:
	return table;

}
// .method public getType()I
int android::icu::impl::ICUResourceBundleReader_S_ReaderValue::getType()
{
	
	return android::icu::impl::ICUResourceBundleReader::-get1({const[class].FS-Param})[android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(this->res)];

}
// .method public getUInt()I
int android::icu::impl::ICUResourceBundleReader_S_ReaderValue::getUInt()
{
	
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	if ( android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(this->res) == 0x7 )
		goto label_cond_12;
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;
	// 533    .line 843
label_cond_12:
	return android::icu::impl::ICUResourceBundleReader::RES_GET_UINT(this->res);

}
// .method public isNoInheritanceMarker()Z
bool android::icu::impl::ICUResourceBundleReader_S_ReaderValue::isNoInheritanceMarker()
{
	
	return android::icu::impl::ICUResourceBundleReader::-wrap0(this->reader, this->res);

}


