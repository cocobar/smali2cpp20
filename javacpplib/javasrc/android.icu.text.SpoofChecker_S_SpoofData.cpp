// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$SpoofData.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.SpoofChecker_S_ConfusableDataUtils.h"
#include "android.icu.text.SpoofChecker_S_SpoofData_S_DefaultData.h"
#include "android.icu.text.SpoofChecker_S_SpoofData_S_IsAcceptable.h"
#include "android.icu.text.SpoofChecker_S_SpoofData.h"
#include "java.io.IOException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.Buffer.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Arrays.h"
#include "java.util.MissingResourceException.h"

static android::icu::text::SpoofChecker_S_SpoofData::DATA_FORMAT = 0x43667520;
static android::icu::text::SpoofChecker_S_SpoofData::IS_ACCEPTABLE;
// .method static constructor <clinit>()V
void android::icu::text::SpoofChecker_S_SpoofData::static_cinit()
{
	
	std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData_S_IsAcceptable> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::SpoofChecker_S_SpoofData_S_IsAcceptable>(0x0);
	android::icu::text::SpoofChecker_S_SpoofData::IS_ACCEPTABLE = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::text::SpoofChecker_S_SpoofData::SpoofChecker_S_SpoofData()
{
	
	// 061    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/SpoofChecker$SpoofData;)V
android::icu::text::SpoofChecker_S_SpoofData::SpoofChecker_S_SpoofData(std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/SpoofChecker$SpoofData;
	// 072    invoke-direct {p0}, Landroid/icu/text/SpoofChecker$SpoofData;-><init>()V
	return;

}
// .method private constructor <init>(Ljava/nio/ByteBuffer;)V
android::icu::text::SpoofChecker_S_SpoofData::SpoofChecker_S_SpoofData(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 081        value = {
	// 082            Ljava/io/IOException;
	// 083        }
	// 084    .end annotation
	// 088    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	android::icu::impl::ICUBinary::readHeader(bytes, 0x43667520, android::icu::text::SpoofChecker_S_SpoofData::IS_ACCEPTABLE);
	bytes->mark();
	this->readData(bytes);
	return;

}
// .method synthetic constructor <init>(Ljava/nio/ByteBuffer;Landroid/icu/text/SpoofChecker$SpoofData;)V
android::icu::text::SpoofChecker_S_SpoofData::SpoofChecker_S_SpoofData(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> _this1)
{
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p2, "-this1"    # Landroid/icu/text/SpoofChecker$SpoofData;
	android::icu::text::SpoofChecker_S_SpoofData::(bytes);
	return;

}
// .method public static getDefault()Landroid/icu/text/SpoofChecker$SpoofData;
std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> android::icu::text::SpoofChecker_S_SpoofData::getDefault()
{
	
	std::shared_ptr<java::util::MissingResourceException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	if ( !(android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::-get0({const[class].FS-Param})) )  
		goto label_cond_2e;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::util::MissingResourceException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not load default confusables data: ")))->append(android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::-get0({const[class].FS-Param})->getMessage())->toString(), std::make_shared<java::lang::String>(std::make_shared<char[]>("SpoofChecker")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;
	// 169    .line 1731
label_cond_2e:
	return android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::-get1({const[class].FS-Param});

}
// .method private readData(Ljava/nio/ByteBuffer;)V
void android::icu::text::SpoofChecker_S_SpoofData::readData(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 182        value = {
	// 183            Ljava/io/IOException;
	// 184        }
	// 185    .end annotation
	cVar0 = 0x0;
	//    .local v8, "magic":I
	if ( bytes->getInt() == 0x3845fdef )
		goto label_cond_13;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad Spoof Check Data.")));
	// throw
	throw cVar1;
	// 210    .line 1779
label_cond_13:
	bytes->getInt();
	//    .local v6, "dataFormatVersion":I
	bytes->getInt();
	//    .local v7, "dataLength":I
	//    .local v0, "CFUKeysOffset":I
	//    .local v1, "CFUKeysSize":I
	//    .local v4, "CFUValuesOffset":I
	//    .local v5, "CFUValuesSize":I
	//    .local v2, "CFUStringTableOffset":I
	//    .local v3, "CFUStringTableSize":I
	bytes->reset();
	android::icu::impl::ICUBinary::skipBytes(bytes, bytes->getInt());
	this->fCFUKeys = android::icu::impl::ICUBinary::getInts(bytes, bytes->getInt(), cVar0);
	bytes->reset();
	android::icu::impl::ICUBinary::skipBytes(bytes, bytes->getInt());
	this->fCFUValues = android::icu::impl::ICUBinary::getShorts(bytes, bytes->getInt(), cVar0);
	bytes->reset();
	android::icu::impl::ICUBinary::skipBytes(bytes, bytes->getInt());
	this->fCFUStrings = android::icu::impl::ICUBinary::getString(bytes, bytes->getInt(), cVar0);
	return;

}
// .method public appendValueTo(ILjava/lang/StringBuilder;)V
void android::icu::text::SpoofChecker_S_SpoofData::appendValueTo(int index,std::shared_ptr<java::lang::StringBuilder> dest)
{
	
	int stringLength;
	int value;
	
	//    .param p1, "index"    # I
	//    .param p2, "dest"    # Ljava/lang/StringBuilder;
	stringLength = android::icu::text::SpoofChecker_S_ConfusableDataUtils::keyToLength(this->fCFUKeys[index]);
	//    .local v0, "stringLength":I
	value = this->fCFUValues[index];
	//    .local v1, "value":S
	if ( stringLength != 0x1 )
		goto label_cond_14;
	dest->append((char)(value));
label_goto_13:
	return;
	// 340    .line 1882
label_cond_14:
	dest->append(this->fCFUStrings, value, (value + stringLength));
	goto label_goto_13;

}
// .method public codePointAt(I)I
int android::icu::text::SpoofChecker_S_SpoofData::codePointAt(int index)
{
	
	//    .param p1, "index"    # I
	return android::icu::text::SpoofChecker_S_ConfusableDataUtils::keyToCodePoint(this->fCFUKeys[index]);

}
// .method public confusableLookup(ILjava/lang/StringBuilder;)V
void android::icu::text::SpoofChecker_S_SpoofData::confusableLookup(int inChar,std::shared_ptr<java::lang::StringBuilder> dest)
{
	
	int lo;
	int hi;
	int mid;
	
	//    .param p1, "inChar"    # I
	//    .param p2, "dest"    # Ljava/lang/StringBuilder;
	lo = 0x0;
	//    .local v1, "lo":I
	hi = this->length();
	//    .local v0, "hi":I
label_cond_5:
	mid = ( (lo + hi) / 0x2);
	//    .local v2, "mid":I
	if ( this->codePointAt(mid) <= inChar )
		goto label_cond_1f;
	hi = mid;
label_goto_10:
	if ( (hi - lo) >  0x1 )
		goto label_cond_5;
label_goto_15:
	if ( this->codePointAt(lo) == inChar )
		goto label_cond_29;
	dest->appendCodePoint(inChar);
	return;
	// 423    .line 1825
label_cond_1f:
	if ( this->codePointAt(mid) >= inChar )
		goto label_cond_27;
	lo = mid;
	goto label_goto_10;
	// 436    .line 1829
label_cond_27:
	lo = mid;
	goto label_goto_15;
	// 443    .line 1841
label_cond_29:
	this->appendValueTo(lo, dest);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::SpoofChecker_S_SpoofData::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> otherData;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( other->instanceOf("android::icu::text::SpoofChecker_S_SpoofData") )     
		goto label_cond_6;
	return cVar0;
label_cond_6:
	otherData = other;
	otherData->checkCast("android::icu::text::SpoofChecker_S_SpoofData");
	//    .local v0, "otherData":Landroid/icu/text/SpoofChecker$SpoofData;
	if ( java::util::Arrays::equals(this->fCFUKeys, otherData->fCFUKeys) )     
		goto label_cond_14;
	return cVar0;
	// 487    .line 1755
label_cond_14:
	if ( java::util::Arrays::equals(this->fCFUValues, otherData->fCFUValues) )     
		goto label_cond_1f;
	return cVar0;
	// 502    .line 1757
label_cond_1f:
	if ( android::icu::impl::Utility::sameObjects(this->fCFUStrings, otherData->fCFUStrings) )     
		goto label_cond_3a;
	if ( !(this->fCFUStrings) )  
		goto label_cond_3a;
	if ( !(( this->fCFUStrings->equals(otherData->fCFUStrings) ^ 0x1)) )  
		goto label_cond_3a;
	return cVar0;
	// 535    .line 1760
label_cond_3a:
	return 0x1;

}
// .method public hashCode()I
int android::icu::text::SpoofChecker_S_SpoofData::hashCode()
{
	
	return ((java::util::Arrays::hashCode(this->fCFUKeys) ^  java::util::Arrays::hashCode(this->fCFUValues)) ^  this->fCFUStrings->hashCode());

}
// .method public length()I
int android::icu::text::SpoofChecker_S_SpoofData::length()
{
	
	return this->fCFUKeys->size();

}


