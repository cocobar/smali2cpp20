// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\StringPrepDataReader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.impl.StringPrepDataReader.h"
#include "java.io.PrintStream.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.nio.ByteBuffer.h"

static android::icu::impl::StringPrepDataReader::DATA_FORMAT_ID = 0x53505250;
static android::icu::impl::StringPrepDataReader::DATA_FORMAT_VERSION;
static android::icu::impl::StringPrepDataReader::debug;
// .method static constructor <clinit>()V
void android::icu::impl::StringPrepDataReader::static_cinit()
{
	
	std::shared<std::vector<unsigned char[]>> cVar0;
	
	android::icu::impl::StringPrepDataReader::debug = android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("NormalizerDataReader")));
	cVar0 = std::make_shared<std::vector<unsigned char[]>>(0x4);
	?;
	android::icu::impl::StringPrepDataReader::DATA_FORMAT_VERSION = cVar0;
	return;
	// 049    .line 85
	// 050    :array_12
	// 051    .array-data 1
	// 052        0x3t
	// 053        0x2t
	// 054        0x5t
	// 055        0x2t
	// 056    .end array-data

}
// .method public constructor <init>(Ljava/nio/ByteBuffer;)V
android::icu::impl::StringPrepDataReader::StringPrepDataReader(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 063        value = {
	// 064            Ljava/io/IOException;
	// 065        }
	// 066    .end annotation
	// 070    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( !(android::icu::impl::StringPrepDataReader::debug) )  
		goto label_cond_24;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bytes in buffer ")))->append(bytes->remaining())->toString());
label_cond_24:
	this->byteBuffer = bytes;
	this->unicodeVersion = android::icu::impl::ICUBinary::readHeader(this->byteBuffer, 0x53505250, this);
	if ( !(android::icu::impl::StringPrepDataReader::debug) )  
		goto label_cond_54;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bytes left in byteBuffer ")))->append(this->byteBuffer->remaining())->toString());
label_cond_54:
	return;

}
// .method public getUnicodeVersion()[B
unsigned char android::icu::impl::StringPrepDataReader::getUnicodeVersion()
{
	
	return android::icu::impl::ICUBinary::getVersionByteArrayFromCompactInt(this->unicodeVersion);

}
// .method public isDataVersionAcceptable([B)Z
bool android::icu::impl::StringPrepDataReader::isDataVersionAcceptable(std::shared_ptr<unsigned char[]> version)
{
	
	int cVar0;
	int cVar1;
	bool cVar3;
	
	//    .param p1, "version"    # [B
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar3 = 0x0;
	if ( version[cVar3] != android::icu::impl::StringPrepDataReader::DATA_FORMAT_VERSION[cVar3] )
		goto label_cond_1c;
	if ( version[cVar1] != android::icu::impl::StringPrepDataReader::DATA_FORMAT_VERSION[cVar1] )
		goto label_cond_1c;
	if ( version[cVar0] != android::icu::impl::StringPrepDataReader::DATA_FORMAT_VERSION[cVar0] )
		goto label_cond_1c;
	cVar3 = 0x1;
label_cond_1c:
	return cVar3;

}
// .method public read(I)[C
char android::icu::impl::StringPrepDataReader::read(int length)
{
	
	//    .param p1, "length"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 221        value = {
	// 222            Ljava/io/IOException;
	// 223        }
	// 224    .end annotation
	return android::icu::impl::ICUBinary::getChars(this->byteBuffer, length, 0x0);

}
// .method public readIndexes(I)[I
int android::icu::impl::StringPrepDataReader::readIndexes(int length)
{
	
	std::shared<std::vector<int[]>> indexes;
	int i;
	
	//    .param p1, "length"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 243        value = {
	// 244            Ljava/io/IOException;
	// 245        }
	// 246    .end annotation
	indexes = std::make_shared<std::vector<int[]>>(length);
	//    .local v1, "indexes":[I
	i = 0x0;
	//    .local v0, "i":I
label_goto_3:
	if ( i >= length )
		goto label_cond_10;
	indexes[i] = this->byteBuffer->getInt();
	i = ( i + 0x1);
	goto label_goto_3;
	// 274    .line 64
label_cond_10:
	return indexes;

}


