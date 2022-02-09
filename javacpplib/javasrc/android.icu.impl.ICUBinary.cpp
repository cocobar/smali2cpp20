// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUBinary.smali
#include "java2ctype.h"
#include "android.icu.impl.ClassLoaderUtil.h"
#include "android.icu.impl.ICUBinary_S_Authenticate.h"
#include "android.icu.impl.ICUBinary_S_DatPackageReader.h"
#include "android.icu.impl.ICUBinary_S_DataFile.h"
#include "android.icu.impl.ICUBinary_S_PackageDataFile.h"
#include "android.icu.impl.ICUBinary_S_SingleDataFile.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.ICUConfig.h"
#include "android.icu.impl.ICUData.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "android.icu.util.VersionInfo.h"
#include "java.io.DataOutputStream.h"
#include "java.io.File.h"
#include "java.io.FileInputStream.h"
#include "java.io.FileNotFoundException.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.PrintStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Byte.h"
#include "java.lang.CharSequence.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.nio.Buffer.h"
#include "java.nio.ByteBuffer.h"
#include "java.nio.ByteOrder.h"
#include "java.nio.CharBuffer.h"
#include "java.nio.IntBuffer.h"
#include "java.nio.LongBuffer.h"
#include "java.nio.MappedByteBuffer.h"
#include "java.nio.ShortBuffer.h"
#include "java.nio.channels.FileChannel_S_MapMode.h"
#include "java.nio.channels.FileChannel.h"
#include "java.util.ArrayList.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Set.h"

static android::icu::impl::ICUBinary::_assertionsDisabled;
static android::icu::impl::ICUBinary::CHAR_SET_ = 0x0t;
static android::icu::impl::ICUBinary::CHAR_SIZE_ = 0x2t;
static android::icu::impl::ICUBinary::HEADER_AUTHENTICATION_FAILED_ = std::make_shared<java::lang::String>("ICU data file error: Header authentication failed, please check if you have a valid ICU data file");
static android::icu::impl::ICUBinary::MAGIC1 = -0x26t;
static android::icu::impl::ICUBinary::MAGIC2 = 0x27t;
static android::icu::impl::ICUBinary::MAGIC_NUMBER_AUTHENTICATION_FAILED_ = std::make_shared<java::lang::String>("ICU data file error: Not an ICU data file");
static android::icu::impl::ICUBinary::icuDataFiles;
// .method static synthetic -wrap0(Ljava/io/File;)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUBinary::_wrap0(std::shared_ptr<java::io::File> path)
{
	
	//    .param p0, "path"    # Ljava/io/File;
	return android::icu::impl::ICUBinary::mapFile(path);

}
// .method static constructor <clinit>()V
void android::icu::impl::ICUBinary::static_cinit()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> dataPath;
	
	android::icu::impl::ICUBinary::_assertionsDisabled = ( android::icu::impl::ICUBinary()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<java::util::ArrayList>();
	android::icu::impl::ICUBinary::icuDataFiles = cVar0;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	dataPath = android::icu::impl::ICUConfig::get(cVar1->append(android::icu::impl::ICUBinary()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".dataPath")))->toString());
	//    .local v0, "dataPath":Ljava/lang/String;
	if ( !(dataPath) )  
		goto label_cond_36;
	android::icu::impl::ICUBinary::addDataFilesFromPath(dataPath, android::icu::impl::ICUBinary::icuDataFiles);
label_cond_36:
	return;

}
// .method public constructor <init>()V
android::icu::impl::ICUBinary::ICUBinary()
{
	
	// 127    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static addBaseNamesInFileFolder(Ljava/lang/String;Ljava/lang/String;Ljava/util/Set;)V
void android::icu::impl::ICUBinary::addBaseNamesInFileFolder(std::shared_ptr<java::lang::String> folder,std::shared_ptr<java::lang::String> suffix,std::shared_ptr<java::util::Set<java::lang::String>> names)
{
	
	std::shared_ptr<java::util::Iterator> dataFile_S_iterator;
	std::shared_ptr<android::icu::impl::ICUBinary_S_DataFile> dataFile;
	
	//    .param p0, "folder"    # Ljava/lang/String;
	//    .param p1, "suffix"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 137        value = {
	// 138            "(",
	// 139            "Ljava/lang/String;",
	// 140            "Ljava/lang/String;",
	// 141            "Ljava/util/Set",
	// 142            "<",
	// 143            "Ljava/lang/String;",
	// 144            ">;)V"
	// 145        }
	// 146    .end annotation
	//    .local p2, "names":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	dataFile_S_iterator = android::icu::impl::ICUBinary::icuDataFiles->iterator();
	//    .local v1, "dataFile$iterator":Ljava/util/Iterator;
label_goto_6:
	if ( !(dataFile_S_iterator->hasNext()) )  
		goto label_cond_16;
	dataFile = dataFile_S_iterator->next();
	dataFile->checkCast("android::icu::impl::ICUBinary_S_DataFile");
	//    .local v0, "dataFile":Landroid/icu/impl/ICUBinary$DataFile;
	dataFile->addBaseNamesInFolder(folder, suffix, names);
	goto label_goto_6;
	// 177    .line 551
	// 178    .end local v0    # "dataFile":Landroid/icu/impl/ICUBinary$DataFile;
label_cond_16:
	return;

}
// .method private static addDataFilesFromFolder(Ljava/io/File;Ljava/lang/StringBuilder;Ljava/util/List;)V
void android::icu::impl::ICUBinary::addDataFilesFromFolder(std::shared_ptr<java::io::File> folder,std::shared_ptr<java::lang::StringBuilder> itemPath,std::shared_ptr<java::util::List<android::icu::impl::ICUBinary_S_DataFile>> dataFiles)
{
	
	int cVar0;
	auto files;
	int folderPathLength;
	std::shared_ptr<java::io::File> file;
	std::shared_ptr<java::lang::String> fileName;
	std::shared_ptr<java::nio::ByteBuffer> pkgBytes;
	std::shared_ptr<android::icu::impl::ICUBinary_S_PackageDataFile> cVar2;
	std::shared_ptr<android::icu::impl::ICUBinary_S_SingleDataFile> cVar3;
	
	//    .param p0, "folder"    # Ljava/io/File;
	//    .param p1, "itemPath"    # Ljava/lang/StringBuilder;
	//    .annotation system Ldalvik/annotation/Signature;
	// 188        value = {
	// 189            "(",
	// 190            "Ljava/io/File;",
	// 191            "Ljava/lang/StringBuilder;",
	// 192            "Ljava/util/List",
	// 193            "<",
	// 194            "Landroid/icu/impl/ICUBinary$DataFile;",
	// 195            ">;)V"
	// 196        }
	// 197    .end annotation
	//    .local p2, "dataFiles":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/ICUBinary$DataFile;>;"
	cVar0 = 0x0;
	files = folder->listFiles();
	//    .local v2, "files":[Ljava/io/File;
	if ( !(files) )  
		goto label_cond_a;
	if ( files->size() )     
		goto label_cond_b;
label_cond_a:
	return;
	// 220    .line 329
label_cond_b:
	folderPathLength = itemPath->length();
	//    .local v3, "folderPathLength":I
	if ( folderPathLength <= 0 )
		goto label_cond_18;
	itemPath->append(0x2f);
label_cond_18:
label_goto_19:
	if ( cVar0 >= files->size() )
		goto label_cond_6c;
	file = files[cVar0];
	//    .local v0, "file":Ljava/io/File;
	fileName = file->getName();
	//    .local v1, "fileName":Ljava/lang/String;
	if ( !(fileName->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(".txt")))) )  
		goto label_cond_2d;
label_goto_2a:
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_19;
	// 269    .line 342
label_cond_2d:
	itemPath->append(fileName);
	if ( !(file->isDirectory()) )  
		goto label_cond_3d;
	android::icu::impl::ICUBinary::addDataFilesFromFolder(file, itemPath, dataFiles);
label_cond_39:
label_goto_39:
	itemPath->setLength(( folderPathLength + 0x1));
	goto label_goto_2a;
	// 290    .line 346
label_cond_3d:
	if ( !(fileName->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(".dat")))) )  
		goto label_cond_5f;
	pkgBytes = android::icu::impl::ICUBinary::mapFile(file);
	//    .local v4, "pkgBytes":Ljava/nio/ByteBuffer;
	if ( !(pkgBytes) )  
		goto label_cond_39;
	if ( !(android::icu::impl::ICUBinary_S_DatPackageReader::validate(pkgBytes)) )  
		goto label_cond_39;
	cVar2 = std::make_shared<android::icu::impl::ICUBinary_S_PackageDataFile>(itemPath->toString(), pkgBytes);
	dataFiles->add(cVar2);
	goto label_goto_39;
	// 328    .line 352
	// 329    .end local v4    # "pkgBytes":Ljava/nio/ByteBuffer;
label_cond_5f:
	cVar3 = std::make_shared<android::icu::impl::ICUBinary_S_SingleDataFile>(itemPath->toString(), file);
	dataFiles->add(cVar3);
	goto label_goto_39;
	// 343    .line 356
	// 344    .end local v0    # "file":Ljava/io/File;
	// 345    .end local v1    # "fileName":Ljava/lang/String;
label_cond_6c:
	return;

}
// .method private static addDataFilesFromPath(Ljava/lang/String;Ljava/util/List;)V
void android::icu::impl::ICUBinary::addDataFilesFromPath(std::shared_ptr<java::lang::String> dataPath,std::shared_ptr<java::util::List<android::icu::impl::ICUBinary_S_DataFile>> files)
{
	
	int pathStart;
	int sepIndex;
	std::shared_ptr<java::lang::String> path;
	std::shared_ptr<java::io::File> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "dataPath"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 354        value = {
	// 355            "(",
	// 356            "Ljava/lang/String;",
	// 357            "Ljava/util/List",
	// 358            "<",
	// 359            "Landroid/icu/impl/ICUBinary$DataFile;",
	// 360            ">;)V"
	// 361        }
	// 362    .end annotation
	//    .local p1, "files":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/ICUBinary$DataFile;>;"
	pathStart = 0x0;
	//    .local v2, "pathStart":I
label_goto_2:
	if ( pathStart >= dataPath->length() )
		goto label_cond_42;
	sepIndex = dataPath->indexOf(java::io::File::pathSeparatorChar, pathStart);
	//    .local v3, "sepIndex":I
	if ( sepIndex < 0 ) 
		goto label_cond_43;
	//    .local v1, "pathLimit":I
label_goto_11:
	path = dataPath->substring(pathStart, pathLimit)->trim();
	//    .local v0, "path":Ljava/lang/String;
	if ( !(path->endsWith(java::io::File::separator)) )  
		goto label_cond_2b;
	path = path->substring(0x0, ( path->length() + -0x1));
label_cond_2b:
	if ( !(path->length()) )  
		goto label_cond_40;
	cVar0 = std::make_shared<java::io::File>(path);
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	android::icu::impl::ICUBinary::addDataFilesFromFolder(cVar0, cVar1, android::icu::impl::ICUBinary::icuDataFiles);
label_cond_40:
	if ( sepIndex >= 0 )
		goto label_cond_48;
	//    .end local v0    # "path":Ljava/lang/String;
	//    .end local v1    # "pathLimit":I
	//    .end local v3    # "sepIndex":I
label_cond_42:
	return;
	// 458    .line 307
	// 459    .restart local v3    # "sepIndex":I
label_cond_43:
	//    .restart local v1    # "pathLimit":I
	goto label_goto_11;
	// 468    .line 319
	// 469    .restart local v0    # "path":Ljava/lang/String;
label_cond_48:
	pathStart = ( sepIndex + 0x1);
	goto label_goto_2;

}
// .method static compareKeys(Ljava/lang/CharSequence;Ljava/nio/ByteBuffer;I)I
int android::icu::impl::ICUBinary::compareKeys(std::shared_ptr<java::lang::CharSequence> key,std::shared_ptr<java::nio::ByteBuffer> bytes,int offset)
{
	
	int i;
	int c2;
	int diff;
	int offset;
	
	//    .param p0, "key"    # Ljava/lang/CharSequence;
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p2, "offset"    # I
	i = 0x0;
	//    .local v2, "i":I
label_goto_2:
	c2 = bytes->get(offset);
	//    .local v0, "c2":I
	if ( c2 )     
		goto label_cond_11;
	if ( i != key->length() )
		goto label_cond_f;
	return 0x0;
	// 509    .line 369
label_cond_f:
	return 0x1;
	// 515    .line 371
label_cond_11:
	if ( i != key->length() )
		goto label_cond_19;
	return -0x1;
	// 528    .line 374
label_cond_19:
	diff = (key->charAt(i) - c2);
	//    .local v1, "diff":I
	if ( !(diff) )  
		goto label_cond_22;
	return diff;
	// 543    .line 363
label_cond_22:
	i = ( i + 0x1);
	offset = ( offset + 0x1);
	goto label_goto_2;

}
// .method static compareKeys(Ljava/lang/CharSequence;[BI)I
int android::icu::impl::ICUBinary::compareKeys(std::shared_ptr<java::lang::CharSequence> key,std::shared_ptr<unsigned char[]> bytes,int offset)
{
	
	int i;
	unsigned char c2;
	int diff;
	int offset;
	
	//    .param p0, "key"    # Ljava/lang/CharSequence;
	//    .param p1, "bytes"    # [B
	//    .param p2, "offset"    # I
	i = 0x0;
	//    .local v2, "i":I
label_goto_2:
	c2 = bytes[offset];
	//    .local v0, "c2":I
	if ( c2 )     
		goto label_cond_f;
	if ( i != key->length() )
		goto label_cond_d;
	return 0x0;
	// 583    .line 388
label_cond_d:
	return 0x1;
	// 589    .line 390
label_cond_f:
	if ( i != key->length() )
		goto label_cond_17;
	return -0x1;
	// 602    .line 393
label_cond_17:
	diff = (key->charAt(i) - c2);
	//    .local v1, "diff":I
	if ( !(diff) )  
		goto label_cond_20;
	return diff;
	// 617    .line 382
label_cond_20:
	i = ( i + 0x1);
	offset = ( offset + 0x1);
	goto label_goto_2;

}
// .method public static getByteBufferFromInputStreamAndCloseStream(Ljava/io/InputStream;)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUBinary::getByteBufferFromInputStreamAndCloseStream(std::shared_ptr<java::io::InputStream> is)
{
	
	int avail;
	std::shared<std::vector<unsigned char[]>> bytes;
	int length;
	int numRead;
	int nextByte;
	int capacity;
	std::shared<std::vector<unsigned char[]>> newBytes;
	std::shared_ptr<unsigned char[]> bytes;
	
	//    .param p0, "is"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 630        value = {
	// 631            Ljava/io/IOException;
	// 632        }
	// 633    .end annotation
	try {
	//label_try_start_2:
	avail = is->available();
	//    .local v0, "avail":I
	if ( avail <= 0x20 )
		goto label_cond_22;
	bytes = std::make_shared<std::vector<unsigned char[]>>(avail);
	//    .local v1, "bytes":[B
label_goto_c:
	//    .local v3, "length":I
	length = 0x0;
	//    .end local v3    # "length":I
	//    .local v4, "length":I
label_goto_e:
	if ( length >= bytes->size() )
		goto label_cond_2b;
	numRead = is->read(bytes, length, (bytes->size() -  length));
	//    .local v7, "numRead":I
	if ( numRead >= 0 )
		goto label_cond_27;
	//    .end local v7    # "numRead":I
label_cond_19:
	//label_try_end_1d:
	}
	catch (...){
		goto label_catchall_46;
	}
	//    .catchall {:try_start_2 .. :try_end_1d} :catchall_46
	is->close();
	return java::nio::ByteBuffer::wrap(bytes, 0x0, length);
	// 699    .line 717
	// 700    .end local v1    # "bytes":[B
	// 701    .end local v4    # "length":I
label_cond_22:
	try {
	//label_try_start_24:
	bytes = std::make_shared<std::vector<unsigned char[]>>(0x80);
	//    .restart local v1    # "bytes":[B
	goto label_goto_c;
	// 711    .line 727
	// 712    .restart local v4    # "length":I
	// 713    .restart local v7    # "numRead":I
label_cond_27:
	//    .end local v4    # "length":I
	//    .end local v7    # "numRead":I
	//    .restart local v3    # "length":I
label_goto_29:
	length = length;
	//    .end local v3    # "length":I
	//    .restart local v4    # "length":I
	goto label_goto_e;
	// 727    .line 730
label_cond_2b:
	nextByte = is->read();
	//    .local v6, "nextByte":I
	if ( nextByte < 0 ) 
		goto label_cond_19;
	capacity = ( bytes->size() * 0x2);
	//    .local v2, "capacity":I
	if ( capacity >= 0x80 )
		goto label_cond_4b;
	capacity = 0x80;
label_cond_38:
label_goto_38:
	newBytes = std::make_shared<std::vector<unsigned char[]>>(capacity);
	//    .local v5, "newBytes":[B
	java::lang::System::arraycopy(bytes, 0x0, newBytes, 0x0, length);
	bytes = newBytes;
	//    .end local v4    # "length":I
	//    .restart local v3    # "length":I
	newBytes[length] = (unsigned char)(nextByte);
	//label_try_end_45:
	}
	catch (...){
		goto label_catchall_46;
	}
	//    .catchall {:try_start_24 .. :try_end_45} :catchall_46
	goto label_goto_29;
	// 778    .line 748
	// 779    .end local v0    # "avail":I
	// 780    .end local v1    # "bytes":[B
	// 781    .end local v2    # "capacity":I
	// 782    .end local v3    # "length":I
	// 783    .end local v5    # "newBytes":[B
	// 784    .end local v6    # "nextByte":I
label_catchall_46:
	// move-exception
	
	is->close();
	// throw
	throw;
	// 794    .line 737
	// 795    .restart local v0    # "avail":I
	// 796    .restart local v1    # "bytes":[B
	// 797    .restart local v2    # "capacity":I
	// 798    .restart local v4    # "length":I
	// 799    .restart local v6    # "nextByte":I
label_cond_4b:
	if ( capacity >= 0x4000 )
		goto label_cond_38;
	capacity = ( capacity * 0x2);
	goto label_goto_38;

}
// .method public static getChars(Ljava/nio/ByteBuffer;II)[C
char android::icu::impl::ICUBinary::getChars(std::shared_ptr<java::nio::ByteBuffer> bytes,int length,int additionalSkipLength)
{
	
	std::shared<std::vector<char[]>> dest;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "length"    # I
	//    .param p2, "additionalSkipLength"    # I
	dest = std::make_shared<std::vector<char[]>>(length);
	//    .local v0, "dest":[C
	bytes->asCharBuffer()->get(dest);
	android::icu::impl::ICUBinary::skipBytes(bytes, (( length * 0x2) +  additionalSkipLength));
	return dest;

}
// .method public static getData(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUBinary::getData(std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::lang::String> resourceName,std::shared_ptr<java::lang::String> itemPath)
{
	
	//    .param p0, "loader"    # Ljava/lang/ClassLoader;
	//    .param p1, "resourceName"    # Ljava/lang/String;
	//    .param p2, "itemPath"    # Ljava/lang/String;
	return android::icu::impl::ICUBinary::getData(loader, resourceName, itemPath, 0x0);

}
// .method private static getData(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;Z)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUBinary::getData(std::shared_ptr<java::lang::ClassLoader> cVar0,std::shared_ptr<java::lang::String> cVar2,std::shared_ptr<java::lang::String> itemPath,bool required)
{
	
	std::shared_ptr<java::nio::ByteBuffer> bytes;
	std::shared_ptr<java::lang::ClassLoader> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar3;
	std::shared_ptr<java::io::InputStream> is;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "loader"    # Ljava/lang/ClassLoader;
	//    .param p1, "resourceName"    # Ljava/lang/String;
	//    .param p2, "itemPath"    # Ljava/lang/String;
	//    .param p3, "required"    # Z
	bytes = android::icu::impl::ICUBinary::getDataFromFile(itemPath);
	//    .local v1, "bytes":Ljava/nio/ByteBuffer;
	if ( !(bytes) )  
		goto label_cond_8;
	return bytes;
	// 879    .line 490
label_cond_8:
	if ( cVar0 )     
		goto label_cond_10;
	cVar0 = android::icu::impl::ClassLoaderUtil::getClassLoader(android::icu::impl::ICUData());
label_cond_10:
	if ( cVar2 )     
		goto label_cond_26;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/")))->append(itemPath)->toString();
label_cond_26:
	0x0;
	//    .local v0, "buffer":Ljava/nio/ByteBuffer;
	try {
	//label_try_start_27:
	is = android::icu::impl::ICUData::getStream(cVar0, cVar2, required);
	//    .local v3, "is":Ljava/io/InputStream;
	if ( is )     
		goto label_cond_2e;
	return 0x0;
	// 931    .line 503
label_cond_2e:
	//label_try_end_31:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_33;
	}
	//    .catch Ljava/io/IOException; {:try_start_27 .. :try_end_31} :catch_33
	//    .local v0, "buffer":Ljava/nio/ByteBuffer;
	return android::icu::impl::ICUBinary::getByteBufferFromInputStreamAndCloseStream(is);
	// 943    .line 504
	// 944    .end local v3    # "is":Ljava/io/InputStream;
	// 945    .local v0, "buffer":Ljava/nio/ByteBuffer;
label_catch_33:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/io/IOException;
	cVar3 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar3;

}
// .method public static getData(Ljava/lang/String;)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUBinary::getData(std::shared_ptr<java::lang::String> itemPath)
{
	
	std::shared_ptr<java::lang::ClassLoader> cVar0;
	
	//    .param p0, "itemPath"    # Ljava/lang/String;
	cVar0 = 0x0;
	return android::icu::impl::ICUBinary::getData(cVar0, cVar0, itemPath, 0x0);

}
// .method private static getDataFromFile(Ljava/lang/String;)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUBinary::getDataFromFile(std::shared_ptr<java::lang::String> itemPath)
{
	
	std::shared_ptr<java::util::Iterator> dataFile_S_iterator;
	std::shared_ptr<android::icu::impl::ICUBinary_S_DataFile> dataFile;
	std::shared_ptr<java::nio::ByteBuffer> data;
	
	//    .param p0, "itemPath"    # Ljava/lang/String;
	dataFile_S_iterator = android::icu::impl::ICUBinary::icuDataFiles->iterator();
	//    .local v2, "dataFile$iterator":Ljava/util/Iterator;
label_cond_7:
	if ( !(dataFile_S_iterator->hasNext()) )  
		goto label_cond_1a;
	dataFile = dataFile_S_iterator->next();
	dataFile->checkCast("android::icu::impl::ICUBinary_S_DataFile");
	//    .local v1, "dataFile":Landroid/icu/impl/ICUBinary$DataFile;
	data = dataFile->getData(itemPath);
	//    .local v0, "data":Ljava/nio/ByteBuffer;
	if ( !(data) )  
		goto label_cond_7;
	return data;
	// 1016    .line 517
	// 1017    .end local v0    # "data":Ljava/nio/ByteBuffer;
	// 1018    .end local v1    # "dataFile":Landroid/icu/impl/ICUBinary$DataFile;
label_cond_1a:
	return 0x0;

}
// .method public static getInts(Ljava/nio/ByteBuffer;II)[I
int android::icu::impl::ICUBinary::getInts(std::shared_ptr<java::nio::ByteBuffer> bytes,int length,int additionalSkipLength)
{
	
	std::shared<std::vector<int[]>> dest;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "length"    # I
	//    .param p2, "additionalSkipLength"    # I
	dest = std::make_shared<std::vector<int[]>>(length);
	//    .local v0, "dest":[I
	bytes->asIntBuffer()->get(dest);
	android::icu::impl::ICUBinary::skipBytes(bytes, (( length * 0x4) +  additionalSkipLength));
	return dest;

}
// .method public static getLongs(Ljava/nio/ByteBuffer;II)[J
long long android::icu::impl::ICUBinary::getLongs(std::shared_ptr<java::nio::ByteBuffer> bytes,int length,int additionalSkipLength)
{
	
	std::shared<std::vector<long long[]>> dest;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "length"    # I
	//    .param p2, "additionalSkipLength"    # I
	dest = std::make_shared<std::vector<long long[]>>(length);
	//    .local v0, "dest":[J
	bytes->asLongBuffer()->get(dest);
	android::icu::impl::ICUBinary::skipBytes(bytes, (( length * 0x8) +  additionalSkipLength));
	return dest;

}
// .method public static getRequiredData(Ljava/lang/String;)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUBinary::getRequiredData(std::shared_ptr<java::lang::String> itemPath)
{
	
	std::shared_ptr<java::lang::ClassLoader> cVar0;
	
	//    .param p0, "itemPath"    # Ljava/lang/String;
	cVar0 = 0x0;
	return android::icu::impl::ICUBinary::getData(cVar0, cVar0, itemPath, 0x1);

}
// .method public static getShorts(Ljava/nio/ByteBuffer;II)[S
short android::icu::impl::ICUBinary::getShorts(std::shared_ptr<java::nio::ByteBuffer> bytes,int length,int additionalSkipLength)
{
	
	std::shared<std::vector<short[]>> dest;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "length"    # I
	//    .param p2, "additionalSkipLength"    # I
	dest = std::make_shared<std::vector<short[]>>(length);
	//    .local v0, "dest":[S
	bytes->asShortBuffer()->get(dest);
	android::icu::impl::ICUBinary::skipBytes(bytes, (( length * 0x2) +  additionalSkipLength));
	return dest;

}
// .method public static getString(Ljava/nio/ByteBuffer;II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUBinary::getString(std::shared_ptr<java::nio::ByteBuffer> bytes,int length,int additionalSkipLength)
{
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "length"    # I
	//    .param p2, "additionalSkipLength"    # I
	//    .local v0, "cs":Ljava/lang/CharSequence;
	//    .local v1, "s":Ljava/lang/String;
	android::icu::impl::ICUBinary::skipBytes(bytes, (( length * 0x2) +  additionalSkipLength));
	return bytes->asCharBuffer()->subSequence(0x0, length)->toString();

}
// .method public static getVersionByteArrayFromCompactInt(I)[B
unsigned char android::icu::impl::ICUBinary::getVersionByteArrayFromCompactInt(int version)
{
	
	std::shared<std::vector<unsigned char[]>> cVar0;
	
	//    .param p0, "version"    # I
	cVar0 = std::make_shared<std::vector<unsigned char[]>>(0x4);
	cVar0[0x0] = (unsigned char)(_shri(version,0x18));
	cVar0[0x1] = (unsigned char)(_shri(version,0x10));
	cVar0[0x2] = (unsigned char)(_shri(version,0x8));
	cVar0[0x3] = (unsigned char)(version);
	return cVar0;

}
// .method public static getVersionInfoFromCompactInt(I)Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::impl::ICUBinary::getVersionInfoFromCompactInt(int version)
{
	
	//    .param p0, "version"    # I
	return android::icu::util::VersionInfo::getInstance(_ushri(version,0x18), ( _shri(version,0x10) & 0xff), ( _shri(version,0x8) & 0xff), ( version & 0xff));

}
// .method private static mapFile(Ljava/io/File;)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUBinary::mapFile(std::shared_ptr<java::io::File> path)
{
	
	std::shared_ptr<java::io::FileInputStream> file;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::nio::channels::FileChannel> channel;
	
	//    .param p0, "path"    # Ljava/io/File;
	try {
	//label_try_start_0:
	file = std::make_shared<java::io::FileInputStream>(path);
	//    .local v7, "file":Ljava/io/FileInputStream;
	//label_try_end_8:
	}
	catch (java::io::FileNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1f;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_27;
	}
	//    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_8} :catch_1f
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_8} :catch_27
	channel = file->getChannel();
	//    .local v0, "channel":Ljava/nio/channels/FileChannel;
	0x0;
	//    .local v6, "bytes":Ljava/nio/ByteBuffer;
	try {
	//label_try_start_a:
	//label_try_end_15:
	}
	catch (...){
		goto label_catchall_1a;
	}
	//    .catchall {:try_start_a .. :try_end_15} :catchall_1a
	//    .local v6, "bytes":Ljava/nio/ByteBuffer;
	try {
	//label_try_start_16:
	file->close();
	return channel->map(java::nio::channels::FileChannel_S_MapMode::READ_ONLY, 0x0, channel->size());
	// 1286    .line 529
	// 1287    .local v6, "bytes":Ljava/nio/ByteBuffer;
label_catchall_1a:
	// move-exception
	
	file->close();
	// throw
	throw;
	// 1296    :try_end_1f
	// 1297    .catch Ljava/io/FileNotFoundException; {:try_start_16 .. :try_end_1f} :catch_1f
	// 1298    .catch Ljava/io/IOException; {:try_start_16 .. :try_end_1f} :catch_27
	// 1300    .line 533
	// 1301    .end local v0    # "channel":Ljava/nio/channels/FileChannel;
	// 1302    .end local v6    # "bytes":Ljava/nio/ByteBuffer;
	// 1303    .end local v7    # "file":Ljava/io/FileInputStream;
label_catch_1f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v8, "ignored":Ljava/io/FileNotFoundException;
	java::lang::System::err->println(getCatchExcetionFromList);
	//    .end local v8    # "ignored":Ljava/io/FileNotFoundException;
label_goto_25:
	return 0x0;
	// 1320    .line 535
label_catch_27:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v9, "ignored":Ljava/io/IOException;
	java::lang::System::err->println(getCatchExcetionFromList);
	goto label_goto_25;

}
// .method public static readHeader(Ljava/nio/ByteBuffer;ILandroid/icu/impl/ICUBinary$Authenticate;)I
int android::icu::impl::ICUBinary::readHeader(std::shared_ptr<java::nio::ByteBuffer> bytes,int dataFormat,std::shared_ptr<android::icu::impl::ICUBinary_S_Authenticate> authenticate)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	int isBigEndian;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::nio::ByteOrder> cVar3;
	int headerSize;
	int sizeofUDataInfo;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared<std::vector<unsigned char[]>> formatVersion;
	std::shared_ptr<java::io::IOException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar8;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "dataFormat"    # I
	//    .param p2, "authenticate"    # Landroid/icu/impl/ICUBinary$Authenticate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1339        value = {
	// 1340            Ljava/io/IOException;
	// 1341        }
	// 1342    .end annotation
	if ( android::icu::impl::ICUBinary::_assertionsDisabled )     
		goto label_cond_12;
	if ( !(bytes) )  
		goto label_cond_c;
	if ( !(bytes->position()) )  
		goto label_cond_12;
label_cond_c:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1365    .line 578
label_cond_12:
	//    .local v5, "magic1":B
	//    .local v6, "magic2":B
	if ( bytes->get(0x2) != -0x26 )
		goto label_cond_24;
	if ( bytes->get(0x3) == 0x27 )
		goto label_cond_2d;
label_cond_24:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ICU data file error: Not an ICU data file")));
	// throw
	throw cVar1;
	// 1401    .line 584
label_cond_2d:
	isBigEndian = bytes->get(0x8);
	//    .local v4, "isBigEndian":B
	//    .local v1, "charsetFamily":B
	//    .local v7, "sizeofUChar":B
	if ( isBigEndian < 0 ) 
		goto label_cond_44;
	if ( 0x1 >= isBigEndian )
		goto label_cond_4d;
label_cond_44:
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ICU data file error: Header authentication failed, please check if you have a valid ICU data file")));
	// throw
	throw cVar2;
	// 1443    .line 588
label_cond_4d:
	if ( bytes->get(0x9) )     
		goto label_cond_44;
	if ( bytes->get(0xa) != 0x2 )
		goto label_cond_44;
	if ( !(isBigEndian) )  
		goto label_cond_74;
	cVar3 = java::nio::ByteOrder::BIG_ENDIAN;
label_goto_56:
	bytes->order(cVar3);
	headerSize = bytes->getChar(0x0);
	//    .local v3, "headerSize":I
	sizeofUDataInfo = bytes->getChar(0x4);
	//    .local v8, "sizeofUDataInfo":I
	if ( sizeofUDataInfo <  0x14 )
		goto label_cond_6b;
	if ( headerSize >= ( sizeofUDataInfo + 0x4) )
		goto label_cond_77;
label_cond_6b:
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal Error: Header size error")));
	// throw
	throw cVar4;
	// 1494    .line 591
	// 1495    .end local v3    # "headerSize":I
	// 1496    .end local v8    # "sizeofUDataInfo":I
label_cond_74:
	cVar3 = java::nio::ByteOrder::LITTLE_ENDIAN;
	goto label_goto_56;
	// 1502    .line 600
	// 1503    .restart local v3    # "headerSize":I
	// 1504    .restart local v8    # "sizeofUDataInfo":I
label_cond_77:
	formatVersion = std::make_shared<std::vector<unsigned char[]>>(0x4);
	formatVersion[0x0] = bytes->get(0x10);
	formatVersion[0x1] = bytes->get(0x11);
	formatVersion[0x2] = bytes->get(0x12);
	formatVersion[0x3] = bytes->get(0x13);
	//    .local v2, "formatVersion":[B
	if ( bytes->get(0xc) != (unsigned char)(_shri(dataFormat,0x18)) )
		goto label_cond_b4;
	if ( bytes->get(0xd) == (unsigned char)(_shri(dataFormat,0x10)) )
		goto label_cond_13d;
label_cond_b4:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x8);
	cVar8[0x0] = java::lang::Byte::valueOf(bytes->get(0xc));
	cVar8[0x1] = java::lang::Byte::valueOf(bytes->get(0xd));
	cVar8[0x2] = java::lang::Byte::valueOf(bytes->get(0xe));
	cVar8[0x3] = java::lang::Byte::valueOf(bytes->get(0xf));
	cVar8[0x4] = java::lang::Integer::valueOf(( formatVersion[0x0] & 0xff));
	cVar8[0x5] = java::lang::Integer::valueOf(( formatVersion[0x1] & 0xff));
	cVar8[0x6] = java::lang::Integer::valueOf(( formatVersion[0x2] & 0xff));
	cVar8[0x7] = java::lang::Integer::valueOf(( formatVersion[0x3] & 0xff));
	cVar6 = std::make_shared<java::io::IOException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ICU data file error: Header authentication failed, please check if you have a valid ICU data file")))->append(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("; data format %02x%02x%02x%02x, format version %d.%d.%d.%d")), cVar8))->toString());
	// throw
	throw cVar6;
	// 1732    .line 605
label_cond_13d:
	if ( bytes->get(0xe) != (unsigned char)(_shri(dataFormat,0x8)) )
		goto label_cond_b4;
	if ( bytes->get(0xf) != (unsigned char)(dataFormat) )
		goto label_cond_b4;
	if ( !(authenticate) )  
		goto label_cond_15f;
	if ( ( authenticate->isDataVersionAcceptable(formatVersion) ^ 0x1) )     
		goto label_cond_b4;
label_cond_15f:
	bytes->position(headerSize);
	return (((( bytes->get(0x14) << 0x18) |  ( ( bytes->get(0x15) & 0xff) << 0x10)) |  ( ( bytes->get(0x16) & 0xff) << 0x8)) |  ( bytes->get(0x17) & 0xff));

}
// .method public static readHeaderAndDataVersion(Ljava/nio/ByteBuffer;ILandroid/icu/impl/ICUBinary$Authenticate;)Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::impl::ICUBinary::readHeaderAndDataVersion(std::shared_ptr<java::nio::ByteBuffer> bytes,int dataFormat,std::shared_ptr<android::icu::impl::ICUBinary_S_Authenticate> authenticate)
{
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "dataFormat"    # I
	//    .param p2, "authenticate"    # Landroid/icu/impl/ICUBinary$Authenticate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1836        value = {
	// 1837            Ljava/io/IOException;
	// 1838        }
	// 1839    .end annotation
	return android::icu::impl::ICUBinary::getVersionInfoFromCompactInt(android::icu::impl::ICUBinary::readHeader(bytes, dataFormat, authenticate));

}
// .method public static skipBytes(Ljava/nio/ByteBuffer;I)V
void android::icu::impl::ICUBinary::skipBytes(std::shared_ptr<java::nio::ByteBuffer> bytes,int skipLength)
{
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "skipLength"    # I
	if ( skipLength <= 0 )
		goto label_cond_a;
	bytes->position((bytes->position() +  skipLength));
label_cond_a:
	return;

}
// .method public static sliceWithOrder(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::impl::ICUBinary::sliceWithOrder(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .local v0, "b":Ljava/nio/ByteBuffer;
	return bytes->slice()->order(bytes->order());

}
// .method public static writeHeader(IIILjava/io/DataOutputStream;)I
int android::icu::impl::ICUBinary::writeHeader(int dataFormat,int formatVersion,int dataVersion,std::shared_ptr<java::io::DataOutputStream> dos)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p0, "dataFormat"    # I
	//    .param p1, "formatVersion"    # I
	//    .param p2, "dataVersion"    # I
	//    .param p3, "dos"    # Ljava/io/DataOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1907        value = {
	// 1908            Ljava/io/IOException;
	// 1909        }
	// 1910    .end annotation
	cVar0 = 0x20;
	cVar1 = 0x0;
	dos->writeChar(cVar0);
	dos->writeByte(-0x26);
	dos->writeByte(0x27);
	dos->writeChar(0x14);
	dos->writeChar(cVar1);
	dos->writeByte(0x1);
	dos->writeByte(cVar1);
	dos->writeByte(0x2);
	dos->writeByte(cVar1);
	dos->writeInt(dataFormat);
	dos->writeInt(formatVersion);
	dos->writeInt(dataVersion);
	dos->writeLong(0x0);
	if ( android::icu::impl::ICUBinary::_assertionsDisabled )     
		goto label_cond_44;
	if ( dos->size() == cVar0 )
		goto label_cond_44;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 1985    .line 649
label_cond_44:
	return cVar0;

}


