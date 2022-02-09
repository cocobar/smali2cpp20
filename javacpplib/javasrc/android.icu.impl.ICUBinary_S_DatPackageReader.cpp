// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUBinary$DatPackageReader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_DatPackageReader_S_IsAcceptable.h"
#include "android.icu.impl.ICUBinary_S_DatPackageReader.h"
#include "android.icu.impl.ICUBinary.h"
#include "java.io.IOException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.Buffer.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Set.h"

static android::icu::impl::ICUBinary_S_DatPackageReader::_assertionsDisabled;
static android::icu::impl::ICUBinary_S_DatPackageReader::DATA_FORMAT = 0x436d6e44;
static android::icu::impl::ICUBinary_S_DatPackageReader::IS_ACCEPTABLE;
// .method static constructor <clinit>()V
void android::icu::impl::ICUBinary_S_DatPackageReader::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::ICUBinary_S_DatPackageReader_S_IsAcceptable> cVar0;
	
	android::icu::impl::ICUBinary_S_DatPackageReader::_assertionsDisabled = ( android::icu::impl::ICUBinary_S_DatPackageReader()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<android::icu::impl::ICUBinary_S_DatPackageReader_S_IsAcceptable>(0x0);
	android::icu::impl::ICUBinary_S_DatPackageReader::IS_ACCEPTABLE = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::impl::ICUBinary_S_DatPackageReader::ICUBinary_S_DatPackageReader()
{
	
	// 064    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static addBaseName(Ljava/nio/ByteBuffer;ILjava/lang/String;Ljava/lang/String;Ljava/lang/StringBuilder;Ljava/util/Set;)Z
bool android::icu::impl::ICUBinary_S_DatPackageReader::addBaseName(std::shared_ptr<java::nio::ByteBuffer> bytes,int index,std::shared_ptr<java::lang::String> folder,std::shared_ptr<java::lang::String> suffix,std::shared_ptr<java::lang::StringBuilder> sb,std::shared_ptr<java::util::Set<java::lang::String>> names)
{
	
	int offset;
	int i;
	int b;
	char c;
	int nameLimit;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "index"    # I
	//    .param p2, "folder"    # Ljava/lang/String;
	//    .param p3, "suffix"    # Ljava/lang/String;
	//    .param p4, "sb"    # Ljava/lang/StringBuilder;
	//    .annotation system Ldalvik/annotation/Signature;
	// 077        value = {
	// 078            "(",
	// 079            "Ljava/nio/ByteBuffer;",
	// 080            "I",
	// 081            "Ljava/lang/String;",
	// 082            "Ljava/lang/String;",
	// 083            "Ljava/lang/StringBuilder;",
	// 084            "Ljava/util/Set",
	// 085            "<",
	// 086            "Ljava/lang/String;",
	// 087            ">;)Z"
	// 088        }
	// 089    .end annotation
	//    .local p5, "names":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	offset = android::icu::impl::ICUBinary_S_DatPackageReader::getNameOffset(bytes, index);
	//    .local v4, "offset":I
	offset = (offset +  ( std::make_shared<java::lang::String>(std::make_shared<char[]>("icudt58b"))->length() + 0x1));
	if ( !(folder->length()) )  
		goto label_cond_39;
	i = 0x0;
	//    .local v2, "i":I
label_goto_15:
	if ( i >= folder->length() )
		goto label_cond_2c;
	if ( bytes->get(offset) == folder->charAt(i) )
		goto label_cond_27;
	return 0x0;
	// 144    .line 177
label_cond_27:
	i = ( i + 0x1);
	offset = ( offset + 0x1);
	goto label_goto_15;
	// 152    .line 182
label_cond_2c:
	offset = ( offset + 0x1);
	//    .end local v4    # "offset":I
	//    .local v5, "offset":I
	if ( bytes->get(offset) == 0x2f )
		goto label_cond_38;
	return 0x0;
label_cond_38:
	offset = offset;
	//    .end local v2    # "i":I
	//    .end local v5    # "offset":I
	//    .restart local v4    # "offset":I
label_cond_39:
	sb->setLength(0x0);
label_goto_3d:
	offset = ( offset + 0x1);
	//    .end local v4    # "offset":I
	//    .restart local v5    # "offset":I
	b = bytes->get(offset);
	//    .local v0, "b":B
	if ( !(b) )  
		goto label_cond_51;
	c = (char)(b);
	//    .local v1, "c":C
	if ( c != 0x2f )
		goto label_cond_4c;
	return 0x1;
	// 210    .line 194
label_cond_4c:
	sb->append(c);
	offset = offset;
	//    .end local v5    # "offset":I
	//    .restart local v4    # "offset":I
	goto label_goto_3d;
	// 220    .line 196
	// 221    .end local v1    # "c":C
	// 222    .end local v4    # "offset":I
	// 223    .restart local v5    # "offset":I
label_cond_51:
	nameLimit = (sb->length() - suffix->length());
	//    .local v3, "nameLimit":I
	if ( sb->lastIndexOf(suffix, nameLimit) < 0 ) 
		goto label_cond_69;
	names->add(sb->substring(0x0, nameLimit));
label_cond_69:
	return 0x1;

}
// .method static addBaseNamesInFolder(Ljava/nio/ByteBuffer;Ljava/lang/String;Ljava/lang/String;Ljava/util/Set;)V
void android::icu::impl::ICUBinary_S_DatPackageReader::addBaseNamesInFolder(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<java::lang::String> folder,std::shared_ptr<java::lang::String> suffix,std::shared_ptr<java::util::Set<java::lang::String>> names)
{
	
	int index;
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "folder"    # Ljava/lang/String;
	//    .param p2, "suffix"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 265        value = {
	// 266            "(",
	// 267            "Ljava/nio/ByteBuffer;",
	// 268            "Ljava/lang/String;",
	// 269            "Ljava/lang/String;",
	// 270            "Ljava/util/Set",
	// 271            "<",
	// 272            "Ljava/lang/String;",
	// 273            ">;)V"
	// 274        }
	// 275    .end annotation
	//    .local p3, "names":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	index = android::icu::impl::ICUBinary_S_DatPackageReader::binarySearch(bytes, folder);
	//    .local v1, "index":I
	if ( index >= 0 )
		goto label_cond_7;
	index = (~index);
label_cond_7:
	//    .local v6, "base":I
	//    .local v7, "count":I
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "sb":Ljava/lang/StringBuilder;
label_goto_14:
	if ( index >= bytes->getInt(bytes->position()) )
		goto label_cond_23;
	if ( !(android::icu::impl::ICUBinary_S_DatPackageReader::addBaseName(bytes, index, folder, suffix, sb, names)) )  
		goto label_cond_23;
	index = ( index + 0x1);
	goto label_goto_14;
	// 333    .line 121
label_cond_23:
	return;

}
// .method private static binarySearch(Ljava/nio/ByteBuffer;Ljava/lang/CharSequence;)I
int android::icu::impl::ICUBinary_S_DatPackageReader::binarySearch(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<java::lang::CharSequence> key)
{
	
	int start;
	int limit;
	int mid;
	int result;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "key"    # Ljava/lang/CharSequence;
	//    .local v0, "base":I
	//    .local v1, "count":I
	start = 0x0;
	//    .local v6, "start":I
	limit = bytes->getInt(bytes->position());
	//    .local v2, "limit":I
label_goto_a:
	if ( start >= limit )
		goto label_cond_2c;
	mid = _ushri((start + limit),0x1);
	//    .local v3, "mid":I
	//    .local v4, "nameOffset":I
	result = android::icu::impl::ICUBinary::compareKeys(key, bytes, (android::icu::impl::ICUBinary_S_DatPackageReader::getNameOffset(bytes, mid) +  ( std::make_shared<java::lang::String>(std::make_shared<char[]>("icudt58b"))->length() + 0x1)));
	//    .local v5, "result":I
	if ( result >= 0 )
		goto label_cond_26;
	limit = mid;
	goto label_goto_a;
	// 405    .line 138
label_cond_26:
	if ( result <= 0 )
		goto label_cond_2b;
	start = ( mid + 0x1);
	goto label_goto_a;
	// 414    .line 142
label_cond_2b:
	return mid;
	// 418    .line 145
	// 419    .end local v3    # "mid":I
	// 420    .end local v4    # "nameOffset":I
	// 421    .end local v5    # "result":I
label_cond_2c:
	return (~start);

}
// .method static getData(Ljava/nio/ByteBuffer;Ljava/lang/CharSequence;)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUBinary_S_DatPackageReader::getData(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<java::lang::CharSequence> key)
{
	
	int index;
	std::shared_ptr<java::nio::ByteBuffer> data;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "key"    # Ljava/lang/CharSequence;
	index = android::icu::impl::ICUBinary_S_DatPackageReader::binarySearch(bytes, key);
	//    .local v1, "index":I
	if ( index < 0 ) 
		goto label_cond_1f;
	data = bytes->duplicate();
	//    .local v0, "data":Ljava/nio/ByteBuffer;
	data->position(android::icu::impl::ICUBinary_S_DatPackageReader::getDataOffset(bytes, index));
	data->limit(android::icu::impl::ICUBinary_S_DatPackageReader::getDataOffset(bytes, ( index + 0x1)));
	return android::icu::impl::ICUBinary::sliceWithOrder(data);
	// 472    .line 104
	// 473    .end local v0    # "data":Ljava/nio/ByteBuffer;
label_cond_1f:
	return 0x0;

}
// .method private static getDataOffset(Ljava/nio/ByteBuffer;I)I
int android::icu::impl::ICUBinary_S_DatPackageReader::getDataOffset(std::shared_ptr<java::nio::ByteBuffer> bytes,int index)
{
	
	int base;
	int count;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "index"    # I
	base = bytes->position();
	//    .local v0, "base":I
	count = bytes->getInt(base);
	//    .local v1, "count":I
	if ( index != count )
		goto label_cond_f;
	return bytes->capacity();
	// 508    .line 163
label_cond_f:
	if ( android::icu::impl::ICUBinary_S_DatPackageReader::_assertionsDisabled )     
		goto label_cond_1d;
	if ( index < 0 ) 
		goto label_cond_17;
	if ( index <  count )
		goto label_cond_1d;
label_cond_17:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 525    .line 167
label_cond_1d:
	return (bytes->getInt((( ( base + 0x4) + 0x4) +  ( index * 0x8))) +  base);

}
// .method private static getNameOffset(Ljava/nio/ByteBuffer;I)I
int android::icu::impl::ICUBinary_S_DatPackageReader::getNameOffset(std::shared_ptr<java::nio::ByteBuffer> bytes,int index)
{
	
	int base;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "index"    # I
	base = bytes->position();
	//    .local v0, "base":I
	if ( android::icu::impl::ICUBinary_S_DatPackageReader::_assertionsDisabled )     
		goto label_cond_16;
	if ( index < 0 ) 
		goto label_cond_10;
	if ( index <  bytes->getInt(base) )
		goto label_cond_16;
label_cond_10:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 576    .line 153
label_cond_16:
	return (bytes->getInt((( base + 0x4) +  ( index * 0x8))) +  base);

}
// .method private static startsWithPackageName(Ljava/nio/ByteBuffer;I)Z
bool android::icu::impl::ICUBinary_S_DatPackageReader::startsWithPackageName(std::shared_ptr<java::nio::ByteBuffer> bytes,int start)
{
	
	bool cVar0;
	int length;
	int i;
	int c;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "start"    # I
	cVar0 = 0x0;
	length = ( std::make_shared<java::lang::String>(std::make_shared<char[]>("icudt58b"))->length() + -0x1);
	//    .local v2, "length":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_b:
	if ( i >= length )
		goto label_cond_20;
	if ( bytes->get((start + i)) == std::make_shared<java::lang::String>(std::make_shared<char[]>("icudt58b"))->charAt(i) )
		goto label_cond_1d;
	return cVar0;
	// 636    .line 83
label_cond_1d:
	i = ( i + 0x1);
	goto label_goto_b;
	// 642    .line 89
label_cond_20:
	//    .end local v2    # "length":I
	//    .local v3, "length":I
	c = bytes->get((start + length));
	//    .local v0, "c":B
	if ( c == 0x62 )
		goto label_cond_31;
	if ( c == 0x6c )
		goto label_cond_31;
label_cond_30:
	return cVar0;
	// 668    .line 90
label_cond_31:
	if ( bytes->get((start + ( length + 0x1))) != 0x2f )
		goto label_cond_30;
	return 0x1;

}
// .method static validate(Ljava/nio/ByteBuffer;)Z
bool android::icu::impl::ICUBinary_S_DatPackageReader::validate(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	bool cVar0;
	std::vector<std::any> tryCatchExcetionList;
	int count;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	cVar0 = 0x0;
	try {
	//label_try_start_1:
	android::icu::impl::ICUBinary::readHeader(bytes, 0x436d6e44, android::icu::impl::ICUBinary_S_DatPackageReader::IS_ACCEPTABLE);
	//label_try_end_9:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_14;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_9} :catch_14
	count = bytes->getInt(bytes->position());
	//    .local v0, "count":I
	if ( count > 0 ) 
		goto label_cond_16;
	return cVar0;
	// 719    .line 60
	// 720    .end local v0    # "count":I
label_catch_14:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ignored":Ljava/io/IOException;
	return cVar0;
	// 728    .line 70
	// 729    .end local v1    # "ignored":Ljava/io/IOException;
	// 730    .restart local v0    # "count":I
label_cond_16:
	if ( (( bytes->position() + 0x4) +  ( count * 0x18)) <= bytes->capacity() )
		goto label_cond_26;
	return cVar0;
	// 751    .line 73
label_cond_26:
	if ( !(android::icu::impl::ICUBinary_S_DatPackageReader::startsWithPackageName(bytes, android::icu::impl::ICUBinary_S_DatPackageReader::getNameOffset(bytes, cVar0))) )  
		goto label_cond_3e;
	if ( !(( android::icu::impl::ICUBinary_S_DatPackageReader::startsWithPackageName(bytes, android::icu::impl::ICUBinary_S_DatPackageReader::getNameOffset(bytes, ( count + -0x1))) ^ 0x1)) )  
		goto label_cond_3f;
label_cond_3e:
	return cVar0;
	// 783    .line 77
label_cond_3f:
	return 0x1;

}


