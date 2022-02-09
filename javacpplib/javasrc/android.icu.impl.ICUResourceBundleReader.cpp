// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Array16.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Array32.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Array.h"
#include "android.icu.impl.ICUResourceBundleReader_S_IsAcceptable.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ReaderCache.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ReaderCacheKey.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ResourceCache.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Table1632.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Table16.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Table32.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Table.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.util.ICUException.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.Buffer.h"
#include "java.nio.ByteBuffer.h"
#include "java.nio.CharBuffer.h"
#include "java.nio.IntBuffer.h"

static android::icu::impl::ICUResourceBundleReader::_assertionsDisabled;
static android::icu::impl::ICUResourceBundleReader::CACHE = nullptr;
static android::icu::impl::ICUResourceBundleReader::DATA_FORMAT = 0x52657342;
static android::icu::impl::ICUResourceBundleReader::DEBUG = false;
static android::icu::impl::ICUResourceBundleReader::EMPTY_16_BIT_UNITS;
static android::icu::impl::ICUResourceBundleReader::EMPTY_ARRAY;
static android::icu::impl::ICUResourceBundleReader::EMPTY_TABLE;
static android::icu::impl::ICUResourceBundleReader::ICU_RESOURCE_SUFFIX = std::make_shared<java::lang::String>(".res");
static android::icu::impl::ICUResourceBundleReader::IS_ACCEPTABLE;
static android::icu::impl::ICUResourceBundleReader::LARGE_SIZE = 0x18;
static android::icu::impl::ICUResourceBundleReader::NULL_READER;
static android::icu::impl::ICUResourceBundleReader::PUBLIC_TYPES = nullptr;
static android::icu::impl::ICUResourceBundleReader::URES_ATT_IS_POOL_BUNDLE = 0x2;
static android::icu::impl::ICUResourceBundleReader::URES_ATT_NO_FALLBACK = 0x1;
static android::icu::impl::ICUResourceBundleReader::URES_ATT_USES_POOL_BUNDLE = 0x4;
static android::icu::impl::ICUResourceBundleReader::URES_INDEX_16BIT_TOP = 0x6;
static android::icu::impl::ICUResourceBundleReader::URES_INDEX_ATTRIBUTES = 0x5;
static android::icu::impl::ICUResourceBundleReader::URES_INDEX_BUNDLE_TOP = 0x3;
static android::icu::impl::ICUResourceBundleReader::URES_INDEX_KEYS_TOP = 0x1;
static android::icu::impl::ICUResourceBundleReader::URES_INDEX_LENGTH = 0x0;
static android::icu::impl::ICUResourceBundleReader::URES_INDEX_MAX_TABLE_LENGTH = 0x4;
static android::icu::impl::ICUResourceBundleReader::URES_INDEX_POOL_CHECKSUM = 0x7;
static android::icu::impl::ICUResourceBundleReader::emptyByteBuffer;
static android::icu::impl::ICUResourceBundleReader::emptyBytes;
static android::icu::impl::ICUResourceBundleReader::emptyChars;
static android::icu::impl::ICUResourceBundleReader::emptyInts;
static android::icu::impl::ICUResourceBundleReader::emptyString = std::make_shared<java::lang::String>("");
// .method static synthetic -get0()Landroid/icu/impl/ICUResourceBundleReader;
std::shared_ptr<android::icu::impl::ICUResourceBundleReader> android::icu::impl::ICUResourceBundleReader::_get0()
{
	
	return android::icu::impl::ICUResourceBundleReader::NULL_READER;

}
// .method static synthetic -get1()[I
int android::icu::impl::ICUResourceBundleReader::_get1()
{
	
	return android::icu::impl::ICUResourceBundleReader::PUBLIC_TYPES;

}
// .method static synthetic -get2(Landroid/icu/impl/ICUResourceBundleReader;)Ljava/nio/CharBuffer;
std::shared_ptr<java::nio::CharBuffer> android::icu::impl::ICUResourceBundleReader::_get2(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	return _this->b16BitUnits;

}
// .method static synthetic -get3(Landroid/icu/impl/ICUResourceBundleReader;)I
int android::icu::impl::ICUResourceBundleReader::_get3(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	return _this->poolStringIndex16Limit;

}
// .method static synthetic -get4(Landroid/icu/impl/ICUResourceBundleReader;)I
int android::icu::impl::ICUResourceBundleReader::_get4(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	return _this->poolStringIndexLimit;

}
// .method static synthetic -wrap0(Landroid/icu/impl/ICUResourceBundleReader;I)Z
bool android::icu::impl::ICUResourceBundleReader::_wrap0(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int res)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p1, "res"    # I
	return _this->isNoInheritanceMarker(res);

}
// .method static synthetic -wrap1(Landroid/icu/impl/ICUResourceBundleReader;I)[C
char android::icu::impl::ICUResourceBundleReader::_wrap1(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int offset)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p1, "offset"    # I
	return _this->getTable16KeyOffsets(offset);

}
// .method static synthetic -wrap10(Landroid/icu/impl/ICUResourceBundleReader;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader::_wrap10(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int keyOffset)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p1, "keyOffset"    # I
	return _this->getKey32String(keyOffset);

}
// .method static synthetic -wrap11(Landroid/icu/impl/ICUResourceBundleReader;ILandroid/icu/impl/UResource$Key;)V
void android::icu::impl::ICUResourceBundleReader::_wrap11(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int keyOffset,std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p1, "keyOffset"    # I
	//    .param p2, "key"    # Landroid/icu/impl/UResource$Key;
	_this->setKeyFromKey16(keyOffset, key);
	return;

}
// .method static synthetic -wrap12(Landroid/icu/impl/ICUResourceBundleReader;ILandroid/icu/impl/UResource$Key;)V
void android::icu::impl::ICUResourceBundleReader::_wrap12(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int keyOffset,std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p1, "keyOffset"    # I
	//    .param p2, "key"    # Landroid/icu/impl/UResource$Key;
	_this->setKeyFromKey32(keyOffset, key);
	return;

}
// .method static synthetic -wrap2(Landroid/icu/impl/ICUResourceBundleReader;I)[C
char android::icu::impl::ICUResourceBundleReader::_wrap2(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int offset)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p1, "offset"    # I
	return _this->getTableKeyOffsets(offset);

}
// .method static synthetic -wrap3(I)I
int android::icu::impl::ICUResourceBundleReader::_wrap3(int res)
{
	
	//    .param p0, "res"    # I
	return android::icu::impl::ICUResourceBundleReader::RES_GET_OFFSET(res);

}
// .method static synthetic -wrap4(Landroid/icu/impl/ICUResourceBundleReader;I)[I
int android::icu::impl::ICUResourceBundleReader::_wrap4(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int offset)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p1, "offset"    # I
	return _this->getTable32KeyOffsets(offset);

}
// .method static synthetic -wrap5(Landroid/icu/impl/ICUResourceBundleReader;Ljava/lang/CharSequence;I)I
int android::icu::impl::ICUResourceBundleReader::_wrap5(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,std::shared_ptr<java::lang::CharSequence> key,int keyOffset)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p1, "key"    # Ljava/lang/CharSequence;
	//    .param p2, "keyOffset"    # I
	return _this->compareKeys32(key, keyOffset);

}
// .method static synthetic -wrap6(Landroid/icu/impl/ICUResourceBundleReader;Ljava/lang/CharSequence;C)I
int android::icu::impl::ICUResourceBundleReader::_wrap6(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,std::shared_ptr<java::lang::CharSequence> key,char keyOffset)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p1, "key"    # Ljava/lang/CharSequence;
	//    .param p2, "keyOffset"    # C
	return _this->compareKeys(key, keyOffset);

}
// .method static synthetic -wrap7(Landroid/icu/impl/ICUResourceBundleReader;I)I
int android::icu::impl::ICUResourceBundleReader::_wrap7(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int offset)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p1, "offset"    # I
	return _this->getInt(offset);

}
// .method static synthetic -wrap8(Landroid/icu/impl/ICUResourceBundleReader;I)I
int android::icu::impl::ICUResourceBundleReader::_wrap8(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int offset)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p1, "offset"    # I
	return _this->getResourceByteOffset(offset);

}
// .method static synthetic -wrap9(Landroid/icu/impl/ICUResourceBundleReader;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader::_wrap9(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this,int keyOffset)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p1, "keyOffset"    # I
	return _this->getKey16String(keyOffset);

}
// .method static constructor <clinit>()V
void android::icu::impl::ICUResourceBundleReader::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_IsAcceptable> cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_IsAcceptable> cVar2;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ReaderCache> cVar3;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader> cVar4;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Array> cVar5;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Table> cVar6;
	std::shared<std::vector<int[]>> cVar7;
	
	cVar0 = 0x0;
	cVar1 = 0x0;
	android::icu::impl::ICUResourceBundleReader::_assertionsDisabled = ( android::icu::impl::ICUResourceBundleReader()->desiredAssertionStatus() ^ 0x1);
	cVar2 = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_IsAcceptable>(cVar0);
	android::icu::impl::ICUResourceBundleReader::IS_ACCEPTABLE = cVar2;
	android::icu::impl::ICUResourceBundleReader::EMPTY_16_BIT_UNITS = java::nio::CharBuffer::wrap(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u0000")));
	cVar3 = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_ReaderCache>(cVar0);
	android::icu::impl::ICUResourceBundleReader::CACHE = cVar3;
	cVar4 = std::make_shared<android::icu::impl::ICUResourceBundleReader>();
	android::icu::impl::ICUResourceBundleReader::NULL_READER = cVar4;
	android::icu::impl::ICUResourceBundleReader::emptyBytes = std::make_shared<std::vector<unsigned char[]>>(cVar1);
	android::icu::impl::ICUResourceBundleReader::emptyByteBuffer = java::nio::ByteBuffer::allocate(cVar1)->asReadOnlyBuffer();
	android::icu::impl::ICUResourceBundleReader::emptyChars = std::make_shared<std::vector<char[]>>(cVar1);
	android::icu::impl::ICUResourceBundleReader::emptyInts = std::make_shared<std::vector<int[]>>(cVar1);
	cVar5 = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_Array>();
	android::icu::impl::ICUResourceBundleReader::EMPTY_ARRAY = cVar5;
	cVar6 = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_Table>();
	android::icu::impl::ICUResourceBundleReader::EMPTY_TABLE = cVar6;
	cVar7 = std::make_shared<std::vector<int[]>>(0x10);
	?;
	android::icu::impl::ICUResourceBundleReader::PUBLIC_TYPES = cVar7;
	return;
	// 427    .line 781
	// 428    :array_58
	// 429    .array-data 4
	// 430        0x0
	// 431        0x1
	// 432        0x2
	// 433        0x3
	// 434        0x2
	// 435        0x2
	// 436        0x0
	// 437        0x7
	// 438        0x8
	// 439        0x8
	// 440        -0x1
	// 441        -0x1
	// 442        -0x1
	// 443        -0x1
	// 444        0xe
	// 445        -0x1
	// 446    .end array-data

}
// .method private constructor <init>()V
android::icu::impl::ICUResourceBundleReader::ICUResourceBundleReader()
{
	
	// 454    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private constructor <init>(Ljava/nio/ByteBuffer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V
android::icu::impl::ICUResourceBundleReader::ICUResourceBundleReader(std::shared_ptr<java::nio::ByteBuffer> inBytes,std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	
	//    .param p1, "inBytes"    # Ljava/nio/ByteBuffer;
	//    .param p2, "baseName"    # Ljava/lang/String;
	//    .param p3, "localeID"    # Ljava/lang/String;
	//    .param p4, "loader"    # Ljava/lang/ClassLoader;
	//    .annotation system Ldalvik/annotation/Throws;
	// 467        value = {
	// 468            Ljava/io/IOException;
	// 469        }
	// 470    .end annotation
	// 474    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->init(inBytes);
	if ( !(this->usesPoolBundle) )  
		goto label_cond_39;
	this->poolBundleReader = android::icu::impl::ICUResourceBundleReader::getReader(baseName, std::make_shared<java::lang::String>(std::make_shared<char[]>("pool")), loader);
	if ( !(this->poolBundleReader) )  
		goto label_cond_1f;
	if ( !(( this->poolBundleReader->isPoolBundle ^ 0x1)) )  
		goto label_cond_28;
label_cond_1f:
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("pool.res is not a pool bundle")));
	// throw
	throw cVar0;
	// 516    .line 226
label_cond_28:
	if ( this->poolBundleReader->poolCheckSum == this->poolCheckSum )
		goto label_cond_39;
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("pool.res has a different checksum than this bundle")));
	// throw
	throw cVar1;
	// 535    .line 230
label_cond_39:
	return;

}
// .method synthetic constructor <init>(Ljava/nio/ByteBuffer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Landroid/icu/impl/ICUResourceBundleReader;)V
android::icu::impl::ICUResourceBundleReader::ICUResourceBundleReader(std::shared_ptr<java::nio::ByteBuffer> inBytes,std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<android::icu::impl::ICUResourceBundleReader> _this4)
{
	
	//    .param p1, "inBytes"    # Ljava/nio/ByteBuffer;
	//    .param p2, "baseName"    # Ljava/lang/String;
	//    .param p3, "localeID"    # Ljava/lang/String;
	//    .param p4, "loader"    # Ljava/lang/ClassLoader;
	//    .param p5, "-this4"    # Landroid/icu/impl/ICUResourceBundleReader;
	android::icu::impl::ICUResourceBundleReader::(inBytes, baseName, localeID, loader);
	return;

}
// .method static RES_GET_INT(I)I
int android::icu::impl::ICUResourceBundleReader::RES_GET_INT(int res)
{
	
	//    .param p0, "res"    # I
	return _shri(( res << 0x4),0x4);

}
// .method private static RES_GET_OFFSET(I)I
int android::icu::impl::ICUResourceBundleReader::RES_GET_OFFSET(int res)
{
	
	//    .param p0, "res"    # I
	return (0xfffffff &  res);

}
// .method static RES_GET_TYPE(I)I
int android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(int res)
{
	
	//    .param p0, "res"    # I
	return _ushri(res,0x1c);

}
// .method static RES_GET_UINT(I)I
int android::icu::impl::ICUResourceBundleReader::RES_GET_UINT(int res)
{
	
	//    .param p0, "res"    # I
	return (0xfffffff &  res);

}
// .method static URES_IS_ARRAY(I)Z
bool android::icu::impl::ICUResourceBundleReader::URES_IS_ARRAY(int type)
{
	
	bool cVar0;
	
	//    .param p0, "type"    # I
	cVar0 = 0x1;
	if ( type == 0x8 )
		goto label_cond_9;
	if ( type != 0x9 )
		goto label_cond_a;
label_cond_9:
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method static URES_IS_TABLE(I)Z
bool android::icu::impl::ICUResourceBundleReader::URES_IS_TABLE(int type)
{
	
	bool cVar0;
	
	//    .param p0, "type"    # I
	cVar0 = 0x1;
	if ( type == 0x2 )
		goto label_cond_7;
	if ( type != 0x5 )
		goto label_cond_8;
label_cond_7:
label_goto_7:
	return cVar0;
label_cond_8:
	if ( type == 0x4 )
		goto label_cond_7;
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method private compareKeys(Ljava/lang/CharSequence;C)I
int android::icu::impl::ICUResourceBundleReader::compareKeys(std::shared_ptr<java::lang::CharSequence> key,char keyOffset)
{
	
	//    .param p1, "key"    # Ljava/lang/CharSequence;
	//    .param p2, "keyOffset"    # C
	if ( keyOffset >= this->localKeyLimit )
		goto label_cond_b;
	return android::icu::impl::ICUBinary::compareKeys(key, this->keyBytes, keyOffset);
	// 680    .line 488
label_cond_b:
	return android::icu::impl::ICUBinary::compareKeys(key, this->poolBundleReader->keyBytes, (keyOffset - this->localKeyLimit));

}
// .method private compareKeys32(Ljava/lang/CharSequence;I)I
int android::icu::impl::ICUResourceBundleReader::compareKeys32(std::shared_ptr<java::lang::CharSequence> key,int keyOffset)
{
	
	//    .param p1, "key"    # Ljava/lang/CharSequence;
	//    .param p2, "keyOffset"    # I
	if ( keyOffset < 0 ) 
		goto label_cond_9;
	return android::icu::impl::ICUBinary::compareKeys(key, this->keyBytes, keyOffset);
	// 715    .line 495
label_cond_9:
	return android::icu::impl::ICUBinary::compareKeys(key, this->poolBundleReader->keyBytes, (0x7fffffff &  keyOffset));

}
// .method private getChars(II)[C
char android::icu::impl::ICUResourceBundleReader::getChars(int offset,int count)
{
	
	std::shared<std::vector<char[]>> chars;
	int i;
	int offset;
	std::shared_ptr<java::nio::CharBuffer> temp;
	
	//    .param p1, "offset"    # I
	//    .param p2, "count"    # I
	chars = std::make_shared<std::vector<char[]>>(count);
	//    .local v0, "chars":[C
	if ( count >  0x10 )
		goto label_cond_16;
	i = 0x0;
	//    .local v1, "i":I
label_goto_7:
	if ( i >= count )
		goto label_cond_24;
	chars[i] = this->bytes->getChar(offset);
	offset = ( offset + 0x2);
	i = ( i + 0x1);
	goto label_goto_7;
	// 770    .line 390
	// 771    .end local v1    # "i":I
label_cond_16:
	temp = this->bytes->asCharBuffer();
	//    .local v2, "temp":Ljava/nio/CharBuffer;
	temp->position(( offset / 0x2));
	temp->get(chars);
	//    .end local v2    # "temp":Ljava/nio/CharBuffer;
label_cond_24:
	return chars;

}
// .method public static getFullName(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader::getFullName(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeName)
{
	
	char cVar0;
	int cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::String> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeName"    # Ljava/lang/String;
	cVar0 = 0x2f;
	cVar1 = 0x2e;
	if ( !(baseName) )  
		goto label_cond_c;
	if ( baseName->length() )     
		goto label_cond_30;
label_cond_c:
	if ( localeName->length() )     
		goto label_cond_1b;
	return android::icu::util::ULocale::getDefault({const[class].FS-Param})->toString();
	// 832    .line 1380
label_cond_1b:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	return cVar2->append(localeName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".res")))->toString();
	// 854    .line 1382
label_cond_30:
	if ( baseName->indexOf(cVar1) != -0x1 )
		goto label_cond_7c;
	if ( baseName->charAt(( baseName->length() + -0x1)) == cVar0 )
		goto label_cond_63;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	return cVar3->append(baseName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(localeName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".res")))->toString();
	// 908    .line 1386
label_cond_63:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	return cVar4->append(baseName)->append(localeName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".res")))->toString();
	// 934    .line 1389
label_cond_7c:
	cVar5 = baseName->replace(cVar1, cVar0);
	if ( localeName->length() )     
		goto label_cond_9b;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	return cVar6->append(cVar5)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".res")))->toString();
	// 968    .line 1393
label_cond_9b:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	return cVar7->append(cVar5)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(localeName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".res")))->toString();

}
// .method private getIndexesInt(I)I
int android::icu::impl::ICUResourceBundleReader::getIndexesInt(int i)
{
	
	//    .param p1, "i"    # I
	return this->bytes->getInt(( ( i + 0x1) << 0x2));

}
// .method private getInt(I)I
int android::icu::impl::ICUResourceBundleReader::getInt(int offset)
{
	
	//    .param p1, "offset"    # I
	return this->bytes->getInt(offset);

}
// .method private getInts(II)[I
int android::icu::impl::ICUResourceBundleReader::getInts(int offset,int count)
{
	
	std::shared<std::vector<int[]>> ints;
	int i;
	int offset;
	std::shared_ptr<java::nio::IntBuffer> temp;
	
	//    .param p1, "offset"    # I
	//    .param p2, "count"    # I
	ints = std::make_shared<std::vector<int[]>>(count);
	//    .local v1, "ints":[I
	if ( count >  0x10 )
		goto label_cond_16;
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( i >= count )
		goto label_cond_24;
	ints[i] = this->bytes->getInt(offset);
	offset = ( offset + 0x4);
	i = ( i + 0x1);
	goto label_goto_7;
	// 1073    .line 406
	// 1074    .end local v0    # "i":I
label_cond_16:
	temp = this->bytes->asIntBuffer();
	//    .local v2, "temp":Ljava/nio/IntBuffer;
	temp->position(( offset / 0x4));
	temp->get(ints);
	//    .end local v2    # "temp":Ljava/nio/IntBuffer;
label_cond_24:
	return ints;

}
// .method private getKey16String(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader::getKey16String(int keyOffset)
{
	
	//    .param p1, "keyOffset"    # I
	if ( keyOffset >= this->localKeyLimit )
		goto label_cond_b;
	return android::icu::impl::ICUResourceBundleReader::makeKeyStringFromBytes(this->keyBytes, keyOffset);
	// 1116    .line 460
label_cond_b:
	return android::icu::impl::ICUResourceBundleReader::makeKeyStringFromBytes(this->poolBundleReader->keyBytes, (keyOffset - this->localKeyLimit));

}
// .method private getKey32String(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader::getKey32String(int keyOffset)
{
	
	//    .param p1, "keyOffset"    # I
	if ( keyOffset < 0 ) 
		goto label_cond_9;
	return android::icu::impl::ICUResourceBundleReader::makeKeyStringFromBytes(this->keyBytes, keyOffset);
	// 1150    .line 467
label_cond_9:
	return android::icu::impl::ICUResourceBundleReader::makeKeyStringFromBytes(this->poolBundleReader->keyBytes, (0x7fffffff &  keyOffset));

}
// .method static getReader(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Landroid/icu/impl/ICUResourceBundleReader;
std::shared_ptr<android::icu::impl::ICUResourceBundleReader> android::icu::impl::ICUResourceBundleReader::getReader(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> root)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ReaderCacheKey> info;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeID"    # Ljava/lang/String;
	//    .param p2, "root"    # Ljava/lang/ClassLoader;
	info = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_ReaderCacheKey>(baseName, localeID);
	//    .local v0, "info":Landroid/icu/impl/ICUResourceBundleReader$ReaderCacheKey;
	reader = android::icu::impl::ICUResourceBundleReader::CACHE->getInstance(info, root);
	reader->checkCast("android::icu::impl::ICUResourceBundleReader");
	//    .local v1, "reader":Landroid/icu/impl/ICUResourceBundleReader;
	if ( reader != android::icu::impl::ICUResourceBundleReader::NULL_READER )
		goto label_cond_13;
	return 0x0;
	// 1200    .line 238
label_cond_13:
	return reader;

}
// .method private getResourceByteOffset(I)I
int android::icu::impl::ICUResourceBundleReader::getResourceByteOffset(int offset)
{
	
	//    .param p1, "offset"    # I
	return ( offset << 0x2);

}
// .method private getTable16KeyOffsets(I)[C
char android::icu::impl::ICUResourceBundleReader::getTable16KeyOffsets(int offset)
{
	
	int offset;
	int length;
	std::shared<std::vector<char[]>> result;
	int i;
	std::shared_ptr<java::nio::CharBuffer> temp;
	
	//    .param p1, "offset"    # I
	offset = ( offset + 0x1);
	//    .end local p1    # "offset":I
	//    .local v2, "offset":I
	length = this->b16BitUnits->charAt(offset);
	//    .local v1, "length":I
	if ( length <= 0 )
		goto label_cond_2f;
	result = std::make_shared<std::vector<char[]>>(length);
	//    .local v3, "result":[C
	if ( length >  0x10 )
		goto label_cond_21;
	i = 0x0;
	//    .local v0, "i":I
label_goto_11:
	if ( i >= length )
		goto label_cond_32;
	//    .end local v2    # "offset":I
	//    .restart local p1    # "offset":I
	result[i] = this->b16BitUnits->charAt(offset);
	i = ( i + 0x1);
	offset = ( offset + 0x1);
	//    .end local p1    # "offset":I
	//    .restart local v2    # "offset":I
	goto label_goto_11;
	// 1274    .line 421
	// 1275    .end local v0    # "i":I
label_cond_21:
	temp = this->b16BitUnits->duplicate();
	//    .local v4, "temp":Ljava/nio/CharBuffer;
	temp->position(offset);
	temp->get(result);
	offset;
	//    .end local v2    # "offset":I
	//    .end local v4    # "temp":Ljava/nio/CharBuffer;
	//    .restart local p1    # "offset":I
label_goto_2e:
	return result;
	// 1299    .line 427
	// 1300    .end local v3    # "result":[C
	// 1301    .end local p1    # "offset":I
	// 1302    .restart local v2    # "offset":I
label_cond_2f:
	return android::icu::impl::ICUResourceBundleReader::emptyChars;
	// 1308    .restart local v0    # "i":I
	// 1309    .restart local v3    # "result":[C
label_cond_32:
	offset;
	//    .end local v2    # "offset":I
	//    .restart local p1    # "offset":I
	goto label_goto_2e;

}
// .method private getTable32KeyOffsets(I)[I
int android::icu::impl::ICUResourceBundleReader::getTable32KeyOffsets(int offset)
{
	
	int length;
	
	//    .param p1, "offset"    # I
	length = this->getInt(offset);
	//    .local v0, "length":I
	if ( length <= 0 )
		goto label_cond_d;
	return this->getInts(( offset + 0x4), length);
	// 1341    .line 443
label_cond_d:
	return android::icu::impl::ICUResourceBundleReader::emptyInts;

}
// .method private getTableKeyOffsets(I)[C
char android::icu::impl::ICUResourceBundleReader::getTableKeyOffsets(int offset)
{
	
	int length;
	
	//    .param p1, "offset"    # I
	length = this->bytes->getChar(offset);
	//    .local v0, "length":I
	if ( length <= 0 )
		goto label_cond_f;
	return this->getChars(( offset + 0x2), length);
	// 1373    .line 435
label_cond_f:
	return android::icu::impl::ICUResourceBundleReader::emptyChars;

}
// .method private init(Ljava/nio/ByteBuffer;)V
void android::icu::impl::ICUResourceBundleReader::init(std::shared_ptr<java::nio::ByteBuffer> inBytes)
{
	
	int dataLength;
	int indexes0;
	int indexLength;
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	int bundleTop;
	std::shared_ptr<android::icu::util::ICUException> cVar1;
	int maxOffset;
	int att;
	bool cVar2;
	bool cVar3;
	bool cVar4;
	int keysBottom;
	int keysTop;
	int _16BitTop;
	int num16BitUnits;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ResourceCache> cVar5;
	
	//    .param p1, "inBytes"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1384        value = {
	// 1385            Ljava/io/IOException;
	// 1386        }
	// 1387    .end annotation
	this->dataVersion = android::icu::impl::ICUBinary::readHeader(inBytes, 0x52657342, android::icu::impl::ICUResourceBundleReader::IS_ACCEPTABLE);
	//    .local v8, "majorFormatVersion":I
	this->bytes = android::icu::impl::ICUBinary::sliceWithOrder(inBytes);
	dataLength = this->bytes->remaining();
	//    .local v3, "dataLength":I
	this->rootRes = this->bytes->getInt(0x0);
	indexes0 = this->getIndexesInt(0x0);
	//    .local v5, "indexes0":I
	indexLength = ( indexes0 & 0xff);
	//    .local v4, "indexLength":I
	if ( indexLength >  0x4 )
		goto label_cond_39;
	cVar0 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not enough indexes")));
	// throw
	throw cVar0;
	// 1461    .line 263
label_cond_39:
	if ( dataLength <  ( ( indexLength + 0x1) << 0x2) )
		goto label_cond_48;
	bundleTop = this->getIndexesInt(0x3);
	//    .local v2, "bundleTop":I
	if ( dataLength >= ( bundleTop << 0x2) )
		goto label_cond_51;
	//    .end local v2    # "bundleTop":I
label_cond_48:
	cVar1 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not enough bytes")));
	// throw
	throw cVar1;
	// 1492    .line 267
	// 1493    .restart local v2    # "bundleTop":I
label_cond_51:
	maxOffset = ( bundleTop + -0x1);
	//    .local v9, "maxOffset":I
	if ( inBytes->get(0x10) <  0x3 )
		goto label_cond_5a;
	this->poolStringIndexLimit = _ushri(indexes0,0x8);
label_cond_5a:
	if ( indexLength <= 0x5 )
		goto label_cond_86;
	att = this->getIndexesInt(0x5);
	//    .local v1, "att":I
	if ( !(( att & 0x1)) )  
		goto label_cond_f3;
	cVar2 = 0x1;
label_goto_67:
	this->noFallback = cVar2;
	if ( !(( att & 0x2)) )  
		goto label_cond_f6;
	cVar3 = 0x1;
label_goto_6e:
	this->isPoolBundle = cVar3;
	if ( !(( att & 0x4)) )  
		goto label_cond_f9;
	cVar4 = 0x1;
label_goto_75:
	this->usesPoolBundle = cVar4;
	this->poolStringIndexLimit = (this->poolStringIndexLimit |  ( (0xf000 &  att) << 0xc));
	this->poolStringIndex16Limit = _ushri(att,0x10);
	//    .end local v1    # "att":I
label_cond_86:
	keysBottom = ( indexLength + 0x1);
	//    .local v6, "keysBottom":I
	keysTop = this->getIndexesInt(0x1);
	//    .local v7, "keysTop":I
	if ( keysTop <= keysBottom )
		goto label_cond_a9;
	if ( !(this->isPoolBundle) )  
		goto label_cond_fc;
	this->keyBytes = std::make_shared<std::vector<unsigned char[]>>(( (keysTop - keysBottom) << 0x2));
	this->bytes->position(( keysBottom << 0x2));
label_goto_a2:
	this->bytes->get(this->keyBytes);
label_cond_a9:
	if ( indexLength <= 0x6 )
		goto label_cond_10c;
	_16BitTop = this->getIndexesInt(0x6);
	//    .local v0, "_16BitTop":I
	if ( _16BitTop <= keysTop )
		goto label_cond_107;
	num16BitUnits = ( (_16BitTop - keysTop) * 0x2);
	//    .local v10, "num16BitUnits":I
	this->bytes->position(( keysTop << 0x2));
	this->b16BitUnits = this->bytes->asCharBuffer();
	this->b16BitUnits->limit(num16BitUnits);
	//    .end local v0    # "_16BitTop":I
	//    .end local v10    # "num16BitUnits":I
label_goto_ce:
	if ( indexLength <= 0x7 )
		goto label_cond_d8;
	this->poolCheckSum = this->getIndexesInt(0x7);
label_cond_d8:
	if ( !(this->isPoolBundle) )  
		goto label_cond_e5;
	if ( this->b16BitUnits->length() <= 0x1 )
		goto label_cond_ec;
label_cond_e5:
	cVar5 = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_ResourceCache>(maxOffset);
	this->resourceCache = cVar5;
label_cond_ec:
	this->bytes->position(0x0);
	return;
	// 1717    .line 280
	// 1718    .end local v6    # "keysBottom":I
	// 1719    .end local v7    # "keysTop":I
	// 1720    .restart local v1    # "att":I
label_cond_f3:
	cVar2 = 0x0;
	goto label_goto_67;
	// 1726    .line 281
label_cond_f6:
	cVar3 = 0x0;
	goto label_goto_6e;
	// 1732    .line 282
label_cond_f9:
	cVar4 = 0x0;
	goto label_goto_75;
	// 1738    .line 300
	// 1739    .end local v1    # "att":I
	// 1740    .restart local v6    # "keysBottom":I
	// 1741    .restart local v7    # "keysTop":I
label_cond_fc:
	this->localKeyLimit = ( keysTop << 0x2);
	this->keyBytes = std::make_shared<std::vector<unsigned char[]>>(this->localKeyLimit);
	goto label_goto_a2;
	// 1756    .line 316
	// 1757    .restart local v0    # "_16BitTop":I
label_cond_107:
	this->b16BitUnits = android::icu::impl::ICUResourceBundleReader::EMPTY_16_BIT_UNITS;
	goto label_goto_ce;
	// 1765    .line 319
	// 1766    .end local v0    # "_16BitTop":I
label_cond_10c:
	this->b16BitUnits = android::icu::impl::ICUResourceBundleReader::EMPTY_16_BIT_UNITS;
	goto label_goto_ce;

}
// .method private isNoInheritanceMarker(I)Z
bool android::icu::impl::ICUResourceBundleReader::isNoInheritanceMarker(int res)
{
	
	int cVar0;
	bool cVar2;
	int offset;
	
	//    .param p1, "res"    # I
	cVar0 = 0x2205;
	cVar2 = 0x0;
	offset = android::icu::impl::ICUResourceBundleReader::RES_GET_OFFSET(res);
	//    .local v0, "offset":I
	if ( offset )     
		goto label_cond_a;
label_cond_9:
	return cVar2;
	// 1797    .line 594
label_cond_a:
	if ( res != offset )
		goto label_cond_37;
	offset = this->getResourceByteOffset(offset);
	if ( this->getInt(offset) != 0x3 )
		goto label_cond_36;
	if ( this->bytes->getChar(( offset + 0x4)) != cVar0 )
		goto label_cond_36;
	if ( this->bytes->getChar(( offset + 0x6)) != cVar0 )
		goto label_cond_36;
	if ( this->bytes->getChar(( offset + 0x8)) != cVar0 )
		goto label_cond_36;
	cVar2 = 0x1;
label_cond_36:
	return cVar2;
	// 1852    .line 598
label_cond_37:
	if ( android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(res) != 0x6 )
		goto label_cond_9;
	if ( offset >= this->poolStringIndexLimit )
		goto label_cond_49;
	return this->poolBundleReader->isStringV2NoInheritanceMarker(offset);
	// 1876    .line 602
label_cond_49:
	return this->isStringV2NoInheritanceMarker((offset - this->poolStringIndexLimit));

}
// .method private isStringV2NoInheritanceMarker(I)Z
bool android::icu::impl::ICUResourceBundleReader::isStringV2NoInheritanceMarker(int offset)
{
	
	bool cVar0;
	int cVar1;
	bool cVar2;
	int first;
	
	//    .param p1, "offset"    # I
	cVar0 = 0x1;
	cVar1 = 0x2205;
	cVar2 = 0x0;
	first = this->b16BitUnits->charAt(offset);
	//    .local v0, "first":I
	if ( first != cVar1 )
		goto label_cond_2f;
	if ( this->b16BitUnits->charAt(( offset + 0x1)) != cVar1 )
		goto label_cond_2d;
	if ( this->b16BitUnits->charAt(( offset + 0x2)) != cVar1 )
		goto label_cond_2d;
	if ( this->b16BitUnits->charAt(( offset + 0x3)) )     
		goto label_cond_2b;
label_goto_2a:
	return cVar0;
label_cond_2b:
	cVar0 = cVar2;
	goto label_goto_2a;
label_cond_2d:
	cVar0 = cVar2;
	goto label_goto_2a;
	// 1960    .line 614
label_cond_2f:
	if ( first != 0xdc03 )
		goto label_cond_57;
	if ( this->b16BitUnits->charAt(( offset + 0x1)) != cVar1 )
		goto label_cond_55;
	if ( this->b16BitUnits->charAt(( offset + 0x2)) != cVar1 )
		goto label_cond_55;
	if ( this->b16BitUnits->charAt(( offset + 0x3)) != cVar1 )
		goto label_cond_53;
label_goto_52:
	return cVar0;
label_cond_53:
	cVar0 = cVar2;
	goto label_goto_52;
label_cond_55:
	cVar0 = cVar2;
	goto label_goto_52;
	// 2015    .line 620
label_cond_57:
	return cVar2;

}
// .method private static makeKeyStringFromBytes([BI)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader::makeKeyStringFromBytes(std::shared_ptr<unsigned char[]> keyBytes,int keyOffset)
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	unsigned char b;
	int keyOffset;
	
	//    .param p0, "keyBytes"    # [B
	//    .param p1, "keyOffset"    # I
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "sb":Ljava/lang/StringBuilder;
label_goto_5:
	b = keyBytes[keyOffset];
	//    .local v0, "b":B
	if ( !(b) )  
		goto label_cond_10;
	keyOffset = ( keyOffset + 0x1);
	sb->append((char)(b));
	goto label_goto_5;
	// 2049    .line 454
label_cond_10:
	return sb->toString();

}
// .method private makeStringFromBytes(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader::makeStringFromBytes(int offset,int length)
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	int offset;
	int cVar1;
	
	//    .param p1, "offset"    # I
	//    .param p2, "length"    # I
	if ( length >  0x10 )
		goto label_cond_1f;
	sb = std::make_shared<java::lang::StringBuilder>(length);
	//    .local v2, "sb":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v1, "i":I
label_goto_a:
	if ( i >= length )
		goto label_cond_1a;
	sb->append(this->bytes->getChar(offset));
	offset = ( offset + 0x2);
	i = ( i + 0x1);
	goto label_goto_a;
	// 2098    .line 553
label_cond_1a:
	return sb->toString();
	// 2106    .line 555
	// 2107    .end local v1    # "i":I
	// 2108    .end local v2    # "sb":Ljava/lang/StringBuilder;
label_cond_1f:
	//    .local v0, "cs":Ljava/lang/CharSequence;
	cVar1 = ( offset / 0x2);
	return this->bytes->asCharBuffer()->subSequence(cVar1, (cVar1 + length))->toString();

}
// .method private setKeyFromKey16(ILandroid/icu/impl/UResource$Key;)V
void android::icu::impl::ICUResourceBundleReader::setKeyFromKey16(int keyOffset,std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	//    .param p1, "keyOffset"    # I
	//    .param p2, "key"    # Landroid/icu/impl/UResource$Key;
	if ( keyOffset >= this->localKeyLimit )
		goto label_cond_a;
	key->setBytes(this->keyBytes, keyOffset);
label_goto_9:
	return;
	// 2154    .line 474
label_cond_a:
	key->setBytes(this->poolBundleReader->keyBytes, (keyOffset - this->localKeyLimit));
	goto label_goto_9;

}
// .method private setKeyFromKey32(ILandroid/icu/impl/UResource$Key;)V
void android::icu::impl::ICUResourceBundleReader::setKeyFromKey32(int keyOffset,std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	//    .param p1, "keyOffset"    # I
	//    .param p2, "key"    # Landroid/icu/impl/UResource$Key;
	if ( keyOffset < 0 ) 
		goto label_cond_8;
	key->setBytes(this->keyBytes, keyOffset);
label_goto_7:
	return;
	// 2187    .line 481
label_cond_8:
	key->setBytes(this->poolBundleReader->keyBytes, (0x7fffffff &  keyOffset));
	goto label_goto_7;

}
// .method getAlias(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader::getAlias(int res)
{
	
	int offset;
	std::shared_ptr<java::lang::String> value;
	int length;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "res"    # I
	offset = android::icu::impl::ICUResourceBundleReader::RES_GET_OFFSET(res);
	//    .local v1, "offset":I
	if ( android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(res) != 0x3 )
		goto label_cond_36;
	if ( offset )     
		goto label_cond_12;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 2234    .line 631
label_cond_12:
	value = this->resourceCache->get(res);
	//    .local v3, "value":Ljava/lang/Object;
	if ( !(value) )  
		goto label_cond_1d;
	value->checkCast("java::lang::String");
	//    .end local v3    # "value":Ljava/lang/Object;
	return value;
	// 2252    .line 635
	// 2253    .restart local v3    # "value":Ljava/lang/Object;
label_cond_1d:
	offset = this->getResourceByteOffset(offset);
	length = this->getInt(offset);
	//    .local v0, "length":I
	//    .local v2, "s":Ljava/lang/String;
	cVar0 = this->resourceCache->putIfAbsent(res, this->makeStringFromBytes(( offset + 0x4), length), ( length * 0x2));
	cVar0->checkCast("java::lang::String");
	return cVar0;
	// 2286    .line 641
	// 2287    .end local v0    # "length":I
	// 2288    .end local v2    # "s":Ljava/lang/String;
	// 2289    .end local v3    # "value":Ljava/lang/Object;
label_cond_36:
	return 0x0;

}
// .method getArray(I)Landroid/icu/impl/ICUResourceBundleReader$Array;
std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Array> android::icu::impl::ICUResourceBundleReader::getArray(int res)
{
	
	int type;
	int offset;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Array> value;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Array32> array;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Array> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Array16> array;
	
	//    .param p1, "res"    # I
	type = android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(res);
	//    .local v2, "type":I
	if ( android::icu::impl::ICUResourceBundleReader::URES_IS_ARRAY(type) )     
		goto label_cond_d;
	return 0x0;
	// 2319    .line 735
label_cond_d:
	offset = android::icu::impl::ICUResourceBundleReader::RES_GET_OFFSET(res);
	//    .local v1, "offset":I
	if ( offset )     
		goto label_cond_16;
	return android::icu::impl::ICUResourceBundleReader::EMPTY_ARRAY;
	// 2334    .line 739
label_cond_16:
	value = this->resourceCache->get(res);
	//    .local v3, "value":Ljava/lang/Object;
	if ( !(value) )  
		goto label_cond_21;
	value->checkCast("android::icu::impl::ICUResourceBundleReader_S_Array");
	//    .end local v3    # "value":Ljava/lang/Object;
	return value;
	// 2352    .line 743
	// 2353    .restart local v3    # "value":Ljava/lang/Object;
label_cond_21:
	if ( type != 0x8 )
		goto label_cond_33;
	array = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_Array32>(this, offset);
	//    .local v0, "array":Landroid/icu/impl/ICUResourceBundleReader$Array;
label_goto_2a:
	cVar0 = this->resourceCache->putIfAbsent(res, array, 0x0);
	cVar0->checkCast("android::icu::impl::ICUResourceBundleReader_S_Array");
	return cVar0;
	// 2377    .line 744
	// 2378    .end local v0    # "array":Landroid/icu/impl/ICUResourceBundleReader$Array;
label_cond_33:
	array = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_Array16>(this, offset);
	goto label_goto_2a;

}
// .method getBinary(I)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUResourceBundleReader::getBinary(int res)
{
	
	int offset;
	int length;
	std::shared_ptr<java::nio::ByteBuffer> result;
	
	//    .param p1, "res"    # I
	offset = android::icu::impl::ICUResourceBundleReader::RES_GET_OFFSET(res);
	//    .local v1, "offset":I
	if ( android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(res) != 0x1 )
		goto label_cond_45;
	if ( offset )     
		goto label_cond_14;
	return android::icu::impl::ICUResourceBundleReader::emptyByteBuffer->duplicate();
	// 2419    .line 693
label_cond_14:
	offset = this->getResourceByteOffset(offset);
	length = this->getInt(offset);
	//    .local v0, "length":I
	if ( length )     
		goto label_cond_25;
	return android::icu::impl::ICUResourceBundleReader::emptyByteBuffer->duplicate();
	// 2443    .line 698
label_cond_25:
	offset = ( offset + 0x4);
	result = this->bytes->duplicate();
	//    .local v2, "result":Ljava/nio/ByteBuffer;
	result->position(offset)->limit((offset + length));
	result = android::icu::impl::ICUBinary::sliceWithOrder(result);
	if ( result->isReadOnly() )     
		goto label_cond_44;
label_cond_44:
	return result;
	// 2485    .line 708
	// 2486    .end local v0    # "length":I
	// 2487    .end local v2    # "result":Ljava/nio/ByteBuffer;
label_cond_45:
	return 0x0;

}
// .method getBinary(I[B)[B
unsigned char android::icu::impl::ICUResourceBundleReader::getBinary(int res,std::shared_ptr<unsigned char[]> cVar0)
{
	
	int offset;
	int length;
	std::shared<std::vector<unsigned char[]>> cVar0;
	int i;
	std::shared_ptr<java::nio::ByteBuffer> temp;
	
	//    .param p1, "res"    # I
	//    .param p2, "ba"    # [B
	offset = android::icu::impl::ICUResourceBundleReader::RES_GET_OFFSET(res);
	//    .local v2, "offset":I
	if ( android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(res) != 0x1 )
		goto label_cond_4a;
	if ( offset )     
		goto label_cond_11;
	return android::icu::impl::ICUResourceBundleReader::emptyBytes;
	// 2525    .line 652
label_cond_11:
	offset = this->getResourceByteOffset(offset);
	length = this->getInt(offset);
	//    .local v1, "length":I
	if ( length )     
		goto label_cond_1e;
	return android::icu::impl::ICUResourceBundleReader::emptyBytes;
	// 2545    .line 659
label_cond_1e:
	if ( !(cVar0) )  
		goto label_cond_23;
	if ( cVar0->size() == length )
		goto label_cond_25;
label_cond_23:
	cVar0 = std::make_shared<std::vector<unsigned char[]>>(length);
label_cond_25:
	offset = ( offset + 0x4);
	if ( length >  0x10 )
		goto label_cond_3d;
	i = 0x0;
	//    .local v0, "i":I
	offset = offset;
	//    .end local v2    # "offset":I
	//    .local v3, "offset":I
label_goto_2d:
	if ( i >= length )
		goto label_cond_4b;
	//    .end local v3    # "offset":I
	//    .restart local v2    # "offset":I
	cVar0[i] = this->bytes->get(offset);
	i = ( i + 0x1);
	offset = ( offset + 0x1);
	//    .end local v2    # "offset":I
	//    .restart local v3    # "offset":I
	goto label_goto_2d;
	// 2599    .line 668
	// 2600    .end local v0    # "i":I
	// 2601    .end local v3    # "offset":I
	// 2602    .restart local v2    # "offset":I
label_cond_3d:
	temp = this->bytes->duplicate();
	//    .local v4, "temp":Ljava/nio/ByteBuffer;
	temp->position(offset);
	temp->get(cVar0);
	//    .end local v4    # "temp":Ljava/nio/ByteBuffer;
label_goto_49:
	return cVar0;
	// 2622    .line 675
	// 2623    .end local v1    # "length":I
label_cond_4a:
	return 0x0;
	// 2627    .end local v2    # "offset":I
	// 2628    .restart local v0    # "i":I
	// 2629    .restart local v1    # "length":I
	// 2630    .restart local v3    # "offset":I
label_cond_4b:
	offset;
	//    .end local v3    # "offset":I
	//    .restart local v2    # "offset":I
	goto label_goto_49;

}
// .method getIntVector(I)[I
int android::icu::impl::ICUResourceBundleReader::getIntVector(int res)
{
	
	int offset;
	
	//    .param p1, "res"    # I
	offset = android::icu::impl::ICUResourceBundleReader::RES_GET_OFFSET(res);
	//    .local v1, "offset":I
	if ( android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(res) != 0xe )
		goto label_cond_20;
	if ( offset )     
		goto label_cond_11;
	return android::icu::impl::ICUResourceBundleReader::emptyInts;
	// 2667    .line 721
label_cond_11:
	offset = this->getResourceByteOffset(offset);
	//    .local v0, "length":I
	return this->getInts(( offset + 0x4), this->getInt(offset));
	// 2688    .line 726
	// 2689    .end local v0    # "length":I
label_cond_20:
	return 0x0;

}
// .method getNoFallback()Z
bool android::icu::impl::ICUResourceBundleReader::getNoFallback()
{
	
	return this->noFallback;

}
// .method getRootResource()I
int android::icu::impl::ICUResourceBundleReader::getRootResource()
{
	
	return this->rootRes;

}
// .method getString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader::getString(int res)
{
	
	int offset;
	std::shared_ptr<java::lang::String> value;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "res"    # I
	offset = android::icu::impl::ICUResourceBundleReader::RES_GET_OFFSET(res);
	//    .local v1, "offset":I
	if ( res == offset )
		goto label_cond_f;
	if ( android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(res) == 0x6 )
		goto label_cond_f;
	return 0x0;
	// 2744    .line 567
label_cond_f:
	if ( offset )     
		goto label_cond_15;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 2753    .line 570
label_cond_15:
	if ( res == offset )
		goto label_cond_2b;
	if ( offset >= this->poolStringIndexLimit )
		goto label_cond_22;
	return this->poolBundleReader->getStringV2(res);
	// 2771    .line 574
label_cond_22:
	return this->getStringV2((res - this->poolStringIndexLimit));
	// 2783    .line 577
label_cond_2b:
	value = this->resourceCache->get(res);
	//    .local v3, "value":Ljava/lang/Object;
	if ( !(value) )  
		goto label_cond_36;
	value->checkCast("java::lang::String");
	//    .end local v3    # "value":Ljava/lang/Object;
	return value;
	// 2801    .line 581
	// 2802    .restart local v3    # "value":Ljava/lang/Object;
label_cond_36:
	offset = this->getResourceByteOffset(offset);
	//    .local v0, "length":I
	s = this->makeStringFromBytes(( offset + 0x4), this->getInt(offset));
	//    .local v2, "s":Ljava/lang/String;
	cVar0 = this->resourceCache->putIfAbsent(res, s, ( s->length() * 0x2));
	cVar0->checkCast("java::lang::String");
	return cVar0;

}
// .method getStringV2(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader::getStringV2(int res)
{
	
	int cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int offset;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::String> value;
	int first;
	std::shared_ptr<java::lang::StringBuilder> sb;
	char c;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::String> cVar3;
	
	//    .param p1, "res"    # I
	cVar0 = 0xdfef;
	if ( android::icu::impl::ICUResourceBundleReader::_assertionsDisabled )     
		goto label_cond_14;
	if ( android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(res) == 0x6 )
		goto label_cond_14;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 2866    .line 509
label_cond_14:
	offset = android::icu::impl::ICUResourceBundleReader::RES_GET_OFFSET(res);
	//    .local v3, "offset":I
	if ( android::icu::impl::ICUResourceBundleReader::_assertionsDisabled )     
		goto label_cond_24;
	if ( offset )     
		goto label_cond_24;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 2886    .line 511
label_cond_24:
	value = this->resourceCache->get(res);
	//    .local v6, "value":Ljava/lang/Object;
	if ( !(value) )  
		goto label_cond_2f;
	value->checkCast("java::lang::String");
	//    .end local v6    # "value":Ljava/lang/Object;
	return value;
	// 2904    .line 516
	// 2905    .restart local v6    # "value":Ljava/lang/Object;
label_cond_2f:
	first = this->b16BitUnits->charAt(offset);
	//    .local v1, "first":I
	if ( ( first & -0x400) == 0xdc00 )
		goto label_cond_6c;
	if ( first )     
		goto label_cond_42;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 2929    .line 521
label_cond_42:
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v5, "sb":Ljava/lang/StringBuilder;
	sb->append((char)(first));
label_goto_4b:
	offset = ( offset + 0x1);
	c = this->b16BitUnits->charAt(offset);
	//    .local v0, "c":C
	if ( !(c) )  
		goto label_cond_59;
	sb->append(c);
	goto label_goto_4b;
	// 2959    .line 527
label_cond_59:
	s = sb->toString();
	//    .end local v0    # "c":C
	//    .end local v5    # "sb":Ljava/lang/StringBuilder;
	//    .local v4, "s":Ljava/lang/String;
label_goto_5d:
	cVar3 = this->resourceCache->putIfAbsent(res, s, ( s->length() * 0x2));
	cVar3->checkCast("java::lang::String");
	return cVar3;
	// 2986    .line 530
	// 2987    .end local v4    # "s":Ljava/lang/String;
label_cond_6c:
	if ( first >= cVar0 )
		goto label_cond_7f;
	//    .local v2, "length":I
	offset = ( offset + 0x1);
label_goto_72:
	s = this->b16BitUnits->subSequence(offset, (offset + length))->toString();
	//    .restart local v4    # "s":Ljava/lang/String;
	goto label_goto_5d;
	// 3015    .line 533
	// 3016    .end local v2    # "length":I
	// 3017    .end local v4    # "s":Ljava/lang/String;
label_cond_7f:
	if ( first >= 0xdfff )
		goto label_cond_95;
	//    .restart local v2    # "length":I
	offset = ( offset + 0x2);
	goto label_goto_72;
	// 3044    .line 537
	// 3045    .end local v2    # "length":I
label_cond_95:
	//    .restart local v2    # "length":I
	offset = ( offset + 0x3);
	goto label_goto_72;

}
// .method getTable(I)Landroid/icu/impl/ICUResourceBundleReader$Table;
std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Table> android::icu::impl::ICUResourceBundleReader::getTable(int res)
{
	
	int type;
	int offset;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Table> value;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Table1632> table;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Table> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Table16> table;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Table32> table;
	
	//    .param p1, "res"    # I
	type = android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(res);
	//    .local v3, "type":I
	if ( android::icu::impl::ICUResourceBundleReader::URES_IS_TABLE(type) )     
		goto label_cond_c;
	return 0x0;
	// 3097    .line 753
label_cond_c:
	offset = android::icu::impl::ICUResourceBundleReader::RES_GET_OFFSET(res);
	//    .local v0, "offset":I
	if ( offset )     
		goto label_cond_15;
	return android::icu::impl::ICUResourceBundleReader::EMPTY_TABLE;
	// 3112    .line 757
label_cond_15:
	value = this->resourceCache->get(res);
	//    .local v4, "value":Ljava/lang/Object;
	if ( !(value) )  
		goto label_cond_20;
	value->checkCast("android::icu::impl::ICUResourceBundleReader_S_Table");
	//    .end local v4    # "value":Ljava/lang/Object;
	return value;
	// 3130    .line 763
	// 3131    .restart local v4    # "value":Ljava/lang/Object;
label_cond_20:
	if ( type != 0x2 )
		goto label_cond_37;
	table = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_Table1632>(this, offset);
	//    .local v2, "table":Landroid/icu/impl/ICUResourceBundleReader$Table;
	//    .local v1, "size":I
label_goto_2e:
	cVar0 = this->resourceCache->putIfAbsent(res, table, size);
	cVar0->checkCast("android::icu::impl::ICUResourceBundleReader_S_Table");
	return cVar0;
	// 3163    .line 766
	// 3164    .end local v1    # "size":I
	// 3165    .end local v2    # "table":Landroid/icu/impl/ICUResourceBundleReader$Table;
label_cond_37:
	if ( type != 0x5 )
		goto label_cond_46;
	table = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_Table16>(this, offset);
	//    .restart local v2    # "table":Landroid/icu/impl/ICUResourceBundleReader$Table;
	//    .restart local v1    # "size":I
	goto label_goto_2e;
	// 3187    .line 770
	// 3188    .end local v1    # "size":I
	// 3189    .end local v2    # "table":Landroid/icu/impl/ICUResourceBundleReader$Table;
label_cond_46:
	table = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_Table32>(this, offset);
	//    .restart local v2    # "table":Landroid/icu/impl/ICUResourceBundleReader$Table;
	//    .restart local v1    # "size":I
	goto label_goto_2e;

}
// .method getUsesPoolBundle()Z
bool android::icu::impl::ICUResourceBundleReader::getUsesPoolBundle()
{
	
	return this->usesPoolBundle;

}
// .method getVersion()Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::impl::ICUResourceBundleReader::getVersion()
{
	
	return android::icu::impl::ICUBinary::getVersionInfoFromCompactInt(this->dataVersion);

}


