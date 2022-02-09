// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\DexPathList.smali
#include "java2ctype.h"
#include "android.system.ErrnoException.h"
#include "android.system.OsConstants.h"
#include "android.system.StructStat.h"
#include "dalvik.system.__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo.h"
#include "dalvik.system.DexFile.h"
#include "dalvik.system.DexPathList_S_Element.h"
#include "dalvik.system.DexPathList_S_NativeLibraryElement.h"
#include "dalvik.system.DexPathList.h"
#include "java.io.File.h"
#include "java.io.IOException.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.net.URL.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.stream.Stream.h"
#include "libcore.io.Libcore.h"
#include "libcore.io.Os.h"

static dalvik::system::DexPathList::DEX_SUFFIX = std::make_shared<java::lang::String>(".dex");
static dalvik::system::DexPathList::zipSeparator = std::make_shared<java::lang::String>("!/");
// .method public constructor <init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)V
dalvik::system::DexPathList::DexPathList(std::shared_ptr<java::lang::ClassLoader> definingContext,std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::lang::String> librarySearchPath,std::shared_ptr<java::io::File> optimizedDirectory)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<java::lang::NullPointerException> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	int cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::util::ArrayList> suppressedExceptions;
	std::shared_ptr<java::util::ArrayList> allNativeLibraryDirectories;
	std::shared_ptr<std::vector<java::io::IOException>> cVar9;
	
	//    .param p1, "definingContext"    # Ljava/lang/ClassLoader;
	//    .param p2, "dexPath"    # Ljava/lang/String;
	//    .param p3, "librarySearchPath"    # Ljava/lang/String;
	//    .param p4, "optimizedDirectory"    # Ljava/io/File;
	cVar0 = 0x0;
	// 067    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( definingContext )     
		goto label_cond_10;
	cVar1 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("definingContext == null")));
	// throw
	throw cVar1;
	// 081    .line 134
label_cond_10:
	if ( dexPath )     
		goto label_cond_1b;
	cVar2 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("dexPath == null")));
	// throw
	throw cVar2;
	// 094    .line 138
label_cond_1b:
	if ( !(optimizedDirectory) )  
		goto label_cond_65;
	if ( optimizedDirectory->exists() )     
		goto label_cond_3d;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("optimizedDirectory doesn\'t exist: ")))->append(optimizedDirectory)->toString());
	// throw
	throw cVar3;
	// 132    .line 145
label_cond_3d:
	if ( !(optimizedDirectory->canRead()) )  
		goto label_cond_63;
	cVar5 = optimizedDirectory->canWrite();
label_goto_47:
	if ( cVar5 )     
		goto label_cond_65;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("optimizedDirectory not readable/writable: ")))->append(optimizedDirectory)->toString());
	// throw
	throw cVar6;
label_cond_63:
	cVar5 = cVar0;
	goto label_goto_47;
	// 182    .line 153
label_cond_65:
	this->definingContext = definingContext;
	suppressedExceptions = std::make_shared<java::util::ArrayList>();
	//    .local v1, "suppressedExceptions":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/io/IOException;>;"
	this->dexElements = dalvik::system::DexPathList::makeDexElements(dalvik::system::DexPathList::splitDexPath(dexPath), optimizedDirectory, suppressedExceptions, definingContext);
	this->nativeLibraryDirectories = dalvik::system::DexPathList::splitPaths(librarySearchPath, cVar0);
	this->systemNativeLibraryDirectories = dalvik::system::DexPathList::splitPaths(java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.library.path"))), 0x1);
	allNativeLibraryDirectories = std::make_shared<java::util::ArrayList>(this->nativeLibraryDirectories);
	//    .local v0, "allNativeLibraryDirectories":Ljava/util/List;, "Ljava/util/List<Ljava/io/File;>;"
	allNativeLibraryDirectories->addAll(this->systemNativeLibraryDirectories);
	this->nativeLibraryPathElements = dalvik::system::DexPathList::makePathElements(allNativeLibraryDirectories);
	if ( suppressedExceptions->size() <= 0 )
		goto label_cond_b1;
	cVar9 = suppressedExceptions->toArray(std::make_shared<std::vector<std::vector<java::io::IOException>>>(suppressedExceptions->size()));
	cVar9->checkCast("std::vector<java::io::IOException>");
	this->dexElementsSuppressedExceptions = cVar9;
label_goto_b0:
	return;
	// 273    .line 182
label_cond_b1:
	this->dexElementsSuppressedExceptions = 0x0;
	goto label_goto_b0;

}
// .method public constructor <init>(Ljava/lang/ClassLoader;[Ljava/nio/ByteBuffer;)V
dalvik::system::DexPathList::DexPathList(std::shared_ptr<java::lang::ClassLoader> definingContext,std::shared_ptr<std::vector<java::nio::ByteBuffer>> dexFiles)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<java::lang::NullPointerException> cVar2;
	std::shared_ptr<java::util::ArrayList> suppressedExceptions;
	std::shared_ptr<std::vector<java::io::IOException>> cVar3;
	
	//    .param p1, "definingContext"    # Ljava/lang/ClassLoader;
	//    .param p2, "dexFiles"    # [Ljava/nio/ByteBuffer;
	// 289    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( definingContext )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("definingContext == null")));
	// throw
	throw cVar0;
	// 303    .line 90
label_cond_f:
	if ( dexFiles )     
		goto label_cond_1a;
	cVar1 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("dexFiles == null")));
	// throw
	throw cVar1;
	// 316    .line 93
label_cond_1a:
	if ( !(java::util::Arrays::stream(dexFiles)->anyMatch(dalvik::system::__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo::_S_INST_S_0)) )  
		goto label_cond_2f;
	cVar2 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("dexFiles contains a null Buffer!")));
	// throw
	throw cVar2;
	// 339    .line 97
label_cond_2f:
	this->definingContext = definingContext;
	this->nativeLibraryDirectories = java::util::Collections::emptyList({const[class].FS-Param});
	this->systemNativeLibraryDirectories = dalvik::system::DexPathList::splitPaths(java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.library.path"))), 0x1);
	this->nativeLibraryPathElements = dalvik::system::DexPathList::makePathElements(this->systemNativeLibraryDirectories);
	suppressedExceptions = std::make_shared<java::util::ArrayList>();
	//    .local v0, "suppressedExceptions":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/io/IOException;>;"
	this->dexElements = dalvik::system::DexPathList::makeInMemoryDexElements(dexFiles, suppressedExceptions);
	if ( suppressedExceptions->size() <= 0 )
		goto label_cond_6d;
	cVar3 = suppressedExceptions->toArray(std::make_shared<std::vector<std::vector<java::io::IOException>>>(suppressedExceptions->size()));
	cVar3->checkCast("std::vector<java::io::IOException>");
	this->dexElementsSuppressedExceptions = cVar3;
label_goto_6c:
	return;
	// 415    .line 110
label_cond_6d:
	this->dexElementsSuppressedExceptions = 0x0;
	goto label_goto_6c;

}
// .method static synthetic lambda$-dalvik_system_DexPathList_3307(Ljava/nio/ByteBuffer;)Z
bool dalvik::system::DexPathList::lambda_S__dalvik_system_DexPathList_3307(std::shared_ptr<java::nio::ByteBuffer> v)
{
	
	bool cVar0;
	
	//    .param p0, "v"    # Ljava/nio/ByteBuffer;
	if ( v )     
		goto label_cond_4;
	cVar0 = 0x1;
label_goto_3:
	return cVar0;
label_cond_4:
	cVar0 = 0x0;
	goto label_goto_3;

}
// .method private static loadDexFile(Ljava/io/File;Ljava/io/File;Ljava/lang/ClassLoader;[Ldalvik/system/DexPathList$Element;)Ldalvik/system/DexFile;
std::shared_ptr<dalvik::system::DexFile> dalvik::system::DexPathList::loadDexFile(std::shared_ptr<java::io::File> file,std::shared_ptr<java::io::File> optimizedDirectory,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements)
{
	
	std::shared_ptr<dalvik::system::DexFile> cVar0;
	
	//    .param p0, "file"    # Ljava/io/File;
	//    .param p1, "optimizedDirectory"    # Ljava/io/File;
	//    .param p2, "loader"    # Ljava/lang/ClassLoader;
	//    .param p3, "elements"    # [Ldalvik/system/DexPathList$Element;
	//    .annotation system Ldalvik/annotation/Throws;
	// 448        value = {
	// 449            Ljava/io/IOException;
	// 450        }
	// 451    .end annotation
	if ( optimizedDirectory )     
		goto label_cond_8;
	cVar0 = std::make_shared<dalvik::system::DexFile>(file, loader, elements);
	return cVar0;
	// 464    .line 376
label_cond_8:
	//    .local v0, "optimizedPath":Ljava/lang/String;
	return dalvik::system::DexFile::loadDex(file->getPath(), dalvik::system::DexPathList::optimizedPathFor(file, optimizedDirectory), 0x0, loader, elements);

}
// .method private static makeDexElements(Ljava/util/List;Ljava/io/File;Ljava/util/List;Ljava/lang/ClassLoader;)[Ldalvik/system/DexPathList$Element;
std::shared_ptr<dalvik::system::DexPathList_S_Element> dalvik::system::DexPathList::makeDexElements(std::shared_ptr<java::util::List<java::io::File>> files,std::shared_ptr<java::io::File> optimizedDirectory,std::shared_ptr<java::util::List<java::io::IOException>> suppressedExceptions,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	std::shared<std::vector<std::vector<dalvik::system::DexPathList_S_Element>>> elements;
	int elementsPos;
	std::shared_ptr<java::util::Iterator> file_S_iterator;
	std::shared_ptr<java::io::File> file;
	std::shared_ptr<dalvik::system::DexPathList_S_Element> cVar0;
	std::shared_ptr<java::lang::Throwable> suppressed;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<dalvik::system::DexFile> dex;
	std::shared_ptr<dalvik::system::DexPathList_S_Element> cVar1;
	std::shared_ptr<dalvik::system::DexPathList_S_Element> cVar3;
	std::shared_ptr<dalvik::system::DexPathList_S_Element> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements;
	
	//    .param p1, "optimizedDirectory"    # Ljava/io/File;
	//    .param p3, "loader"    # Ljava/lang/ClassLoader;
	//    .annotation system Ldalvik/annotation/Signature;
	// 490        value = {
	// 491            "(",
	// 492            "Ljava/util/List",
	// 493            "<",
	// 494            "Ljava/io/File;",
	// 495            ">;",
	// 496            "Ljava/io/File;",
	// 497            "Ljava/util/List",
	// 498            "<",
	// 499            "Ljava/io/IOException;",
	// 500            ">;",
	// 501            "Ljava/lang/ClassLoader;",
	// 502            ")[",
	// 503            "Ldalvik/system/DexPathList$Element;"
	// 504        }
	// 505    .end annotation
	//    .local p0, "files":Ljava/util/List;, "Ljava/util/List<Ljava/io/File;>;"
	//    .local p2, "suppressedExceptions":Ljava/util/List;, "Ljava/util/List<Ljava/io/IOException;>;"
	elements = std::make_shared<std::vector<std::vector<dalvik::system::DexPathList_S_Element>>>(files->size());
	//    .local v1, "elements":[Ldalvik/system/DexPathList$Element;
	elementsPos = 0x0;
	//    .local v2, "elementsPos":I
	file_S_iterator = files->iterator();
	//    .local v5, "file$iterator":Ljava/util/Iterator;
label_cond_b:
label_goto_b:
	if ( !(file_S_iterator->hasNext()) )  
		goto label_cond_a4;
	file = file_S_iterator->next();
	file->checkCast("java::io::File");
	//    .local v4, "file":Ljava/io/File;
	if ( !(file->isDirectory()) )  
		goto label_cond_28;
	//    .end local v2    # "elementsPos":I
	//    .local v3, "elementsPos":I
	cVar0 = std::make_shared<dalvik::system::DexPathList_S_Element>(file);
	elements[elementsPos] = cVar0;
	elementsPos = ( elementsPos + 0x1);
	//    .end local v3    # "elementsPos":I
	//    .restart local v2    # "elementsPos":I
	goto label_goto_b;
	// 567    .line 320
label_cond_28:
	if ( !(file->isFile()) )  
		goto label_cond_8b;
	//    .local v6, "name":Ljava/lang/String;
	if ( !(file->getName()->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(".dex")))) )  
		goto label_cond_69;
	try {
	//label_try_start_3b:
	//label_try_end_3e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4d;
	}
	//    .catch Ljava/io/IOException; {:try_start_3b .. :try_end_3e} :catch_4d
	dex = dalvik::system::DexPathList::loadDexFile(file, optimizedDirectory, loader, elements);
	//    .local v0, "dex":Ldalvik/system/DexFile;
	if ( !(dex) )  
		goto label_cond_b;
	elementsPos = ( elementsPos + 0x1);
	//    .end local v2    # "elementsPos":I
	//    .restart local v3    # "elementsPos":I
	try {
	//label_try_start_43:
	cVar1 = std::make_shared<dalvik::system::DexPathList_S_Element>(dex, 0x0);
	elements[elementsPos] = cVar1;
	//label_try_end_4b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ae;
	}
	//    .catch Ljava/io/IOException; {:try_start_43 .. :try_end_4b} :catch_ae
	elementsPos = elementsPos;
	//    .end local v3    # "elementsPos":I
	//    .restart local v2    # "elementsPos":I
	goto label_goto_b;
	// 624    .line 330
	// 625    .end local v0    # "dex":Ldalvik/system/DexFile;
label_catch_4d:
	// move-exception
	suppressed = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v7, "suppressed":Ljava/io/IOException;
label_goto_4e:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::logE(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to load dex file: ")))->append(file)->toString(), suppressed);
	suppressedExceptions->add(suppressed);
	goto label_goto_b;
	// 657    .line 335
	// 658    .end local v7    # "suppressed":Ljava/io/IOException;
label_cond_69:
	dex = 0x0;
	//    .local v0, "dex":Ldalvik/system/DexFile;
	try {
	//label_try_start_6a:
	//label_try_end_6d:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7b;
	}
	//    .catch Ljava/io/IOException; {:try_start_6a .. :try_end_6d} :catch_7b
	dex = dalvik::system::DexPathList::loadDexFile(file, optimizedDirectory, loader, elements);
	//    .end local v0    # "dex":Ldalvik/system/DexFile;
label_goto_6e:
	if ( dex )     
		goto label_cond_80;
	//    .end local v2    # "elementsPos":I
	//    .restart local v3    # "elementsPos":I
	cVar3 = std::make_shared<dalvik::system::DexPathList_S_Element>(file);
	elements[elementsPos] = cVar3;
	elementsPos = ( elementsPos + 0x1);
	//    .end local v3    # "elementsPos":I
	//    .restart local v2    # "elementsPos":I
	goto label_goto_b;
	// 693    .line 338
	// 694    .restart local v0    # "dex":Ldalvik/system/DexFile;
label_catch_7b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v7    # "suppressed":Ljava/io/IOException;
	suppressedExceptions->add(getCatchExcetionFromList);
	goto label_goto_6e;
	// 704    .line 352
	// 705    .end local v0    # "dex":Ldalvik/system/DexFile;
	// 706    .end local v7    # "suppressed":Ljava/io/IOException;
label_cond_80:
	//    .end local v2    # "elementsPos":I
	//    .restart local v3    # "elementsPos":I
	cVar4 = std::make_shared<dalvik::system::DexPathList_S_Element>(dex, file);
	elements[elementsPos] = cVar4;
	elementsPos = ( elementsPos + 0x1);
	//    .end local v3    # "elementsPos":I
	//    .restart local v2    # "elementsPos":I
	goto label_goto_b;
	// 724    .line 356
	// 725    .end local v6    # "name":Ljava/lang/String;
label_cond_8b:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::logW(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ClassLoader referenced unknown path: ")))->append(file)->toString());
	goto label_goto_b;
	// 749    .line 359
	// 750    .end local v4    # "file":Ljava/io/File;
label_cond_a4:
	if ( elementsPos == elements->size() )
		goto label_cond_ad;
	elements = java::util::Arrays::copyOf(elements, elementsPos);
	//    .end local v1    # "elements":[Ldalvik/system/DexPathList$Element;
	elements->checkCast("std::vector<dalvik::system::DexPathList_S_Element>");
	//    .restart local v1    # "elements":[Ldalvik/system/DexPathList$Element;
label_cond_ad:
	return elements;
	// 769    .line 330
	// 770    .end local v2    # "elementsPos":I
	// 771    .local v0, "dex":Ldalvik/system/DexFile;
	// 772    .restart local v3    # "elementsPos":I
	// 773    .restart local v4    # "file":Ljava/io/File;
	// 774    .restart local v6    # "name":Ljava/lang/String;
label_catch_ae:
	// move-exception
	suppressed = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v7    # "suppressed":Ljava/io/IOException;
	//    .end local v3    # "elementsPos":I
	//    .restart local v2    # "elementsPos":I
	goto label_goto_4e;

}
// .method private static makeInMemoryDexElements([Ljava/nio/ByteBuffer;Ljava/util/List;)[Ldalvik/system/DexPathList$Element;
std::shared_ptr<dalvik::system::DexPathList_S_Element> dalvik::system::DexPathList::makeInMemoryDexElements(std::shared_ptr<std::vector<java::nio::ByteBuffer>> dexFiles,std::shared_ptr<java::util::List<java::io::IOException>> suppressedExceptions)
{
	
	std::shared<std::vector<std::vector<dalvik::system::DexPathList_S_Element>>> elements;
	int cVar0;
	int elementPos;
	std::shared_ptr<java::nio::ByteBuffer> buf;
	std::shared_ptr<java::lang::Throwable> suppressed;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<dalvik::system::DexFile> dex;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<dalvik::system::DexPathList_S_Element> cVar1;
	std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements;
	
	//    .param p0, "dexFiles"    # [Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Signature;
	// 790        value = {
	// 791            "([",
	// 792            "Ljava/nio/ByteBuffer;",
	// 793            "Ljava/util/List",
	// 794            "<",
	// 795            "Ljava/io/IOException;",
	// 796            ">;)[",
	// 797            "Ldalvik/system/DexPathList$Element;"
	// 798        }
	// 799    .end annotation
	//    .local p1, "suppressedExceptions":Ljava/util/List;, "Ljava/util/List<Ljava/io/IOException;>;"
	elements = std::make_shared<std::vector<std::vector<dalvik::system::DexPathList_S_Element>>>(dexFiles->size());
	//    .local v4, "elements":[Ldalvik/system/DexPathList$Element;
	//    .local v2, "elementPos":I
	cVar0 = 0x0;
	elementPos = 0x0;
	//    .end local v2    # "elementPos":I
	//    .local v3, "elementPos":I
label_goto_7:
	if ( cVar0 >= dexFiles->size() )
		goto label_cond_3a;
	buf = dexFiles[cVar0];
	//    .local v0, "buf":Ljava/nio/ByteBuffer;
	try {
	//label_try_start_b:
	dex = std::make_shared<dalvik::system::DexFile>(buf);
	//label_try_end_10:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1d;
	}
	//    .catch Ljava/io/IOException; {:try_start_b .. :try_end_10} :catch_1d
	//    .local v1, "dex":Ldalvik/system/DexFile;
	//    .end local v3    # "elementPos":I
	//    .restart local v2    # "elementPos":I
	try {
	//label_try_start_12:
	cVar1 = std::make_shared<dalvik::system::DexPathList_S_Element>(dex);
	elements[elementPos] = cVar1;
	//label_try_end_19:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_44;
	}
	//    .catch Ljava/io/IOException; {:try_start_12 .. :try_end_19} :catch_44
	//    .end local v1    # "dex":Ldalvik/system/DexFile;
label_goto_19:
	cVar0 = ( cVar0 + 0x1);
	elementPos = elementPos;
	//    .end local v2    # "elementPos":I
	//    .restart local v3    # "elementPos":I
	goto label_goto_7;
	// 862    .line 293
label_catch_1d:
	// move-exception
	suppressed = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "suppressed":Ljava/io/IOException;
	//    .end local v3    # "elementPos":I
	//    .restart local v2    # "elementPos":I
label_goto_1f:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::logE(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to load dex file: ")))->append(buf)->toString(), suppressed);
	suppressedExceptions->add(suppressed);
	goto label_goto_19;
	// 898    .line 298
	// 899    .end local v0    # "buf":Ljava/nio/ByteBuffer;
	// 900    .end local v2    # "elementPos":I
	// 901    .end local v5    # "suppressed":Ljava/io/IOException;
	// 902    .restart local v3    # "elementPos":I
label_cond_3a:
	if ( elementPos == elements->size() )
		goto label_cond_43;
	elements = java::util::Arrays::copyOf(elements, elementPos);
	//    .end local v4    # "elements":[Ldalvik/system/DexPathList$Element;
	elements->checkCast("std::vector<dalvik::system::DexPathList_S_Element>");
	//    .restart local v4    # "elements":[Ldalvik/system/DexPathList$Element;
label_cond_43:
	return elements;
	// 921    .line 293
	// 922    .end local v3    # "elementPos":I
	// 923    .restart local v0    # "buf":Ljava/nio/ByteBuffer;
	// 924    .restart local v1    # "dex":Ldalvik/system/DexFile;
	// 925    .restart local v2    # "elementPos":I
label_catch_44:
	// move-exception
	suppressed = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "suppressed":Ljava/io/IOException;
	goto label_goto_1f;

}
// .method private static makePathElements(Ljava/util/List;Ljava/io/File;Ljava/util/List;)[Ldalvik/system/DexPathList$Element;
std::shared_ptr<dalvik::system::DexPathList_S_Element> dalvik::system::DexPathList::makePathElements(std::shared_ptr<java::util::List<java::io::File>> files,std::shared_ptr<java::io::File> optimizedDirectory,std::shared_ptr<java::util::List<java::io::IOException>> suppressedExceptions)
{
	
	//    .param p1, "optimizedDirectory"    # Ljava/io/File;
	//    .annotation system Ldalvik/annotation/Signature;
	// 937        value = {
	// 938            "(",
	// 939            "Ljava/util/List",
	// 940            "<",
	// 941            "Ljava/io/File;",
	// 942            ">;",
	// 943            "Ljava/io/File;",
	// 944            "Ljava/util/List",
	// 945            "<",
	// 946            "Ljava/io/IOException;",
	// 947            ">;)[",
	// 948            "Ldalvik/system/DexPathList$Element;"
	// 949        }
	// 950    .end annotation
	//    .local p0, "files":Ljava/util/List;, "Ljava/util/List<Ljava/io/File;>;"
	//    .local p2, "suppressedExceptions":Ljava/util/List;, "Ljava/util/List<Ljava/io/IOException;>;"
	return dalvik::system::DexPathList::makeDexElements(files, optimizedDirectory, suppressedExceptions, 0x0);

}
// .method private static makePathElements(Ljava/util/List;)[Ldalvik/system/DexPathList$NativeLibraryElement;
std::shared_ptr<dalvik::system::DexPathList_S_NativeLibraryElement> dalvik::system::DexPathList::makePathElements(std::shared_ptr<java::util::List<java::io::File>> files)
{
	
	std::shared<std::vector<std::vector<dalvik::system::DexPathList_S_NativeLibraryElement>>> elements;
	int elementsPos;
	std::shared_ptr<java::util::Iterator> file_S_iterator;
	std::shared_ptr<java::io::File> file;
	std::shared_ptr<java::lang::String> path;
	auto split;
	std::shared_ptr<java::io::File> zip;
	std::shared_ptr<dalvik::system::DexPathList_S_NativeLibraryElement> cVar0;
	std::shared_ptr<dalvik::system::DexPathList_S_NativeLibraryElement> cVar1;
	std::shared_ptr<std::vector<dalvik::system::DexPathList_S_NativeLibraryElement>> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 968        value = {
	// 969            "(",
	// 970            "Ljava/util/List",
	// 971            "<",
	// 972            "Ljava/io/File;",
	// 973            ">;)[",
	// 974            "Ldalvik/system/DexPathList$NativeLibraryElement;"
	// 975        }
	// 976    .end annotation
	//    .local p0, "files":Ljava/util/List;, "Ljava/util/List<Ljava/io/File;>;"
	elements = std::make_shared<std::vector<std::vector<dalvik::system::DexPathList_S_NativeLibraryElement>>>(files->size());
	//    .local v1, "elements":[Ldalvik/system/DexPathList$NativeLibraryElement;
	elementsPos = 0x0;
	//    .local v2, "elementsPos":I
	file_S_iterator = files->iterator();
	//    .local v5, "file$iterator":Ljava/util/Iterator;
label_cond_b:
label_goto_b:
	if ( !(file_S_iterator->hasNext()) )  
		goto label_cond_53;
	file = file_S_iterator->next();
	file->checkCast("java::io::File");
	//    .local v4, "file":Ljava/io/File;
	path = file->getPath();
	//    .local v6, "path":Ljava/lang/String;
	if ( !(path->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("!/")))) )  
		goto label_cond_42;
	split = path->split(std::make_shared<java::lang::String>(std::make_shared<char[]>("!/")), 0x2);
	//    .local v7, "split":[Ljava/lang/String;
	zip = std::make_shared<java::io::File>(split[0x0]);
	//    .local v8, "zip":Ljava/io/File;
	//    .local v0, "dir":Ljava/lang/String;
	//    .end local v2    # "elementsPos":I
	//    .local v3, "elementsPos":I
	cVar0 = std::make_shared<dalvik::system::DexPathList_S_NativeLibraryElement>(zip, split[0x1]);
	elements[elementsPos] = cVar0;
	elementsPos = ( elementsPos + 0x1);
	//    .end local v3    # "elementsPos":I
	//    .restart local v2    # "elementsPos":I
	goto label_goto_b;
	// 1071    .line 441
	// 1072    .end local v0    # "dir":Ljava/lang/String;
	// 1073    .end local v7    # "split":[Ljava/lang/String;
	// 1074    .end local v8    # "zip":Ljava/io/File;
label_cond_42:
	if ( !(file->isDirectory()) )  
		goto label_cond_b;
	//    .end local v2    # "elementsPos":I
	//    .restart local v3    # "elementsPos":I
	cVar1 = std::make_shared<dalvik::system::DexPathList_S_NativeLibraryElement>(file);
	elements[elementsPos] = cVar1;
	elementsPos = ( elementsPos + 0x1);
	//    .end local v3    # "elementsPos":I
	//    .restart local v2    # "elementsPos":I
	goto label_goto_b;
	// 1099    .line 446
	// 1100    .end local v4    # "file":Ljava/io/File;
	// 1101    .end local v6    # "path":Ljava/lang/String;
label_cond_53:
	if ( elementsPos == elements->size() )
		goto label_cond_5c;
	elements = java::util::Arrays::copyOf(elements, elementsPos);
	//    .end local v1    # "elements":[Ldalvik/system/DexPathList$NativeLibraryElement;
	elements->checkCast("std::vector<dalvik::system::DexPathList_S_NativeLibraryElement>");
	//    .restart local v1    # "elements":[Ldalvik/system/DexPathList$NativeLibraryElement;
label_cond_5c:
	return elements;

}
// .method private static optimizedPathFor(Ljava/io/File;Ljava/io/File;)Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexPathList::optimizedPathFor(std::shared_ptr<java::io::File> path,std::shared_ptr<java::io::File> optimizedDirectory)
{
	
	std::shared_ptr<java::lang::String> fileName;
	int lastDot;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::io::File> result;
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	//    .param p0, "path"    # Ljava/io/File;
	//    .param p1, "optimizedDirectory"    # Ljava/io/File;
	fileName = path->getName();
	//    .local v0, "fileName":Ljava/lang/String;
	if ( fileName->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(".dex"))) )     
		goto label_cond_2b;
	lastDot = fileName->lastIndexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")));
	//    .local v1, "lastDot":I
	if ( lastDot >= 0 )
		goto label_cond_35;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	fileName = cVar0->append(fileName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".dex")))->toString();
	//    .end local v1    # "lastDot":I
label_cond_2b:
label_goto_2b:
	result = std::make_shared<java::io::File>(optimizedDirectory, fileName);
	//    .local v2, "result":Ljava/io/File;
	return result->getPath();
	// 1190    .line 405
	// 1191    .end local v2    # "result":Ljava/io/File;
	// 1192    .restart local v1    # "lastDot":I
label_cond_35:
	sb = std::make_shared<java::lang::StringBuilder>(( lastDot + 0x4));
	//    .local v3, "sb":Ljava/lang/StringBuilder;
	sb->append(fileName, 0x0, lastDot);
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".dex")));
	fileName = sb->toString();
	goto label_goto_2b;

}
// .method private static splitDexPath(Ljava/lang/String;)Ljava/util/List;
std::shared_ptr<java::util::List<java::io::File>> dalvik::system::DexPathList::splitDexPath(std::shared_ptr<java::lang::String> path)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1221        value = {
	// 1222            "(",
	// 1223            "Ljava/lang/String;",
	// 1224            ")",
	// 1225            "Ljava/util/List",
	// 1226            "<",
	// 1227            "Ljava/io/File;",
	// 1228            ">;"
	// 1229        }
	// 1230    .end annotation
	return dalvik::system::DexPathList::splitPaths(path, 0x0);

}
// .method private static splitPaths(Ljava/lang/String;Z)Ljava/util/List;
std::shared_ptr<java::util::List<java::io::File>> dalvik::system::DexPathList::splitPaths(std::shared_ptr<java::lang::String> searchPath,bool directoriesOnly)
{
	
	std::shared_ptr<java::util::ArrayList> result;
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> path;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::File> cVar3;
	
	//    .param p0, "searchPath"    # Ljava/lang/String;
	//    .param p1, "directoriesOnly"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 1248        value = {
	// 1249            "(",
	// 1250            "Ljava/lang/String;",
	// 1251            "Z)",
	// 1252            "Ljava/util/List",
	// 1253            "<",
	// 1254            "Ljava/io/File;",
	// 1255            ">;"
	// 1256        }
	// 1257    .end annotation
	result = std::make_shared<java::util::ArrayList>();
	//    .local v2, "result":Ljava/util/List;, "Ljava/util/List<Ljava/io/File;>;"
	if ( !(searchPath) )  
		goto label_cond_2f;
	cVar0 = searchPath->split(java::io::File::pathSeparator);
	cVar1 = 0x0;
label_goto_f:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_2f;
	path = cVar0[cVar1];
	//    .local v1, "path":Ljava/lang/String;
	if ( !(directoriesOnly) )  
		goto label_cond_26;
	try {
	//label_try_start_15:
	//    .local v3, "sb":Landroid/system/StructStat;
	//label_try_end_20:
	}
	catch (android::system::ErrnoException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_30;
	}
	//    .catch Landroid/system/ErrnoException; {:try_start_15 .. :try_end_20} :catch_30
	if ( android::system::OsConstants::S_ISDIR(libcore::io::Libcore::os->stat(path)->st_mode) )     
		goto label_cond_26;
	//    .end local v3    # "sb":Landroid/system/StructStat;
label_goto_23:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_f;
	// 1316    .line 278
label_cond_26:
	cVar3 = std::make_shared<java::io::File>(path);
	result->add(cVar3);
	goto label_goto_23;
	// 1326    .line 282
	// 1327    .end local v1    # "path":Ljava/lang/String;
label_cond_2f:
	return result;
	// 1331    .line 274
	// 1332    .restart local v1    # "path":Ljava/lang/String;
label_catch_30:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ignored":Landroid/system/ErrnoException;
	goto label_goto_23;

}
// .method public addDexPath(Ljava/lang/String;Ljava/io/File;)V
void dalvik::system::DexPathList::addDexPath(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::io::File> optimizedDirectory)
{
	
	int cVar0;
	std::shared_ptr<java::util::ArrayList> suppressedExceptionList;
	std::shared_ptr<java::lang::Object> newElements;
	std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> oldElements;
	std::shared_ptr<std::vector<java::io::IOException>> newSuppressedExceptions;
	std::shared_ptr<std::vector<java::io::IOException>> oldSuppressedExceptions;
	
	//    .param p1, "dexPath"    # Ljava/lang/String;
	//    .param p2, "optimizedDirectory"    # Ljava/io/File;
	cVar0 = 0x0;
	suppressedExceptionList = std::make_shared<java::util::ArrayList>();
	//    .local v4, "suppressedExceptionList":Ljava/util/List;, "Ljava/util/List<Ljava/io/IOException;>;"
	newElements = dalvik::system::DexPathList::makeDexElements(dalvik::system::DexPathList::splitDexPath(dexPath), optimizedDirectory, suppressedExceptionList, this->definingContext);
	//    .local v0, "newElements":[Ldalvik/system/DexPathList$Element;
	if ( !(newElements) )  
		goto label_cond_2b;
	if ( newElements->size() <= 0 )
		goto label_cond_2b;
	oldElements = this->dexElements;
	//    .local v2, "oldElements":[Ldalvik/system/DexPathList$Element;
	this->dexElements = std::make_shared<std::vector<std::vector<dalvik::system::DexPathList_S_Element>>>((oldElements->size() +  newElements->size()));
	java::lang::System::arraycopy(oldElements, cVar0, this->dexElements, cVar0, oldElements->size());
	java::lang::System::arraycopy(newElements, cVar0, this->dexElements, oldElements->size(), newElements->size());
	//    .end local v2    # "oldElements":[Ldalvik/system/DexPathList$Element;
label_cond_2b:
	if ( suppressedExceptionList->size() <= 0 )
		goto label_cond_58;
	newSuppressedExceptions = suppressedExceptionList->toArray(std::make_shared<std::vector<std::vector<java::io::IOException>>>(suppressedExceptionList->size()));
	newSuppressedExceptions->checkCast("std::vector<java::io::IOException>");
	//    .local v1, "newSuppressedExceptions":[Ljava/io/IOException;
	if ( !(this->dexElementsSuppressedExceptions) )  
		goto label_cond_59;
	oldSuppressedExceptions = this->dexElementsSuppressedExceptions;
	//    .local v3, "oldSuppressedExceptions":[Ljava/io/IOException;
	//    .local v5, "suppressedExceptionsLength":I
	this->dexElementsSuppressedExceptions = std::make_shared<std::vector<std::vector<java::io::IOException>>>((oldSuppressedExceptions->size() + newSuppressedExceptions->size()));
	java::lang::System::arraycopy(oldSuppressedExceptions, cVar0, this->dexElementsSuppressedExceptions, cVar0, oldSuppressedExceptions->size());
	java::lang::System::arraycopy(newSuppressedExceptions, cVar0, this->dexElementsSuppressedExceptions, oldSuppressedExceptions->size(), newSuppressedExceptions->size());
	//    .end local v1    # "newSuppressedExceptions":[Ljava/io/IOException;
	//    .end local v3    # "oldSuppressedExceptions":[Ljava/io/IOException;
	//    .end local v5    # "suppressedExceptionsLength":I
label_cond_58:
label_goto_58:
	return;
	// 1486    .line 240
	// 1487    .restart local v1    # "newSuppressedExceptions":[Ljava/io/IOException;
label_cond_59:
	this->dexElementsSuppressedExceptions = newSuppressedExceptions;
	goto label_goto_58;

}
// .method public findClass(Ljava/lang/String;Ljava/util/List;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> dalvik::system::DexPathList::findClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::util::List<java::lang::Throwable>> suppressed)
{
	
	std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::Class> clazz;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1498        value = {
	// 1499            "(",
	// 1500            "Ljava/lang/String;",
	// 1501            "Ljava/util/List",
	// 1502            "<",
	// 1503            "Ljava/lang/Throwable;",
	// 1504            ">;)",
	// 1505            "Ljava/lang/Class",
	// 1506            "<*>;"
	// 1507        }
	// 1508    .end annotation
	//    .local p2, "suppressed":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Throwable;>;"
	cVar0 = this->dexElements;
	cVar1 = 0x0;
label_goto_5:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_15;
	//    .local v1, "element":Ldalvik/system/DexPathList$Element;
	clazz = cVar0[cVar1]->findClass(name, this->definingContext, suppressed);
	//    .local v0, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(clazz) )  
		goto label_cond_12;
	return clazz;
	// 1541    .line 465
label_cond_12:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_5;
	// 1547    .line 472
	// 1548    .end local v0    # "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 1549    .end local v1    # "element":Ldalvik/system/DexPathList$Element;
label_cond_15:
	if ( !(this->dexElementsSuppressedExceptions) )  
		goto label_cond_22;
	suppressed->addAll(java::util::Arrays::asList(this->dexElementsSuppressedExceptions));
label_cond_22:
	return 0x0;

}
// .method public findLibrary(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexPathList::findLibrary(std::shared_ptr<java::lang::String> libraryName)
{
	
	std::shared_ptr<std::vector<dalvik::system::DexPathList_S_NativeLibraryElement>> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> path;
	
	//    .param p1, "libraryName"    # Ljava/lang/String;
	//    .local v1, "fileName":Ljava/lang/String;
	cVar0 = this->nativeLibraryPathElements;
	cVar1 = 0x0;
label_goto_9:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_17;
	//    .local v0, "element":Ldalvik/system/DexPathList$NativeLibraryElement;
	path = cVar0[cVar1]->findNativeLibrary(java::lang::System::mapLibraryName(libraryName));
	//    .local v2, "path":Ljava/lang/String;
	if ( !(path) )  
		goto label_cond_14;
	return path;
	// 1607    .line 527
label_cond_14:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_9;
	// 1613    .line 535
	// 1614    .end local v0    # "element":Ldalvik/system/DexPathList$NativeLibraryElement;
	// 1615    .end local v2    # "path":Ljava/lang/String;
label_cond_17:
	return 0x0;

}
// .method public findResource(Ljava/lang/String;)Ljava/net/URL;
std::shared_ptr<java::net::URL> dalvik::system::DexPathList::findResource(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> cVar0;
	int cVar1;
	std::shared_ptr<java::net::URL> url;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar0 = this->dexElements;
	cVar1 = 0x0;
label_goto_5:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_13;
	//    .local v0, "element":Ldalvik/system/DexPathList$Element;
	url = cVar0[cVar1]->findResource(name);
	//    .local v1, "url":Ljava/net/URL;
	if ( !(url) )  
		goto label_cond_10;
	return url;
	// 1652    .line 487
label_cond_10:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_5;
	// 1658    .line 494
	// 1659    .end local v0    # "element":Ldalvik/system/DexPathList$Element;
	// 1660    .end local v1    # "url":Ljava/net/URL;
label_cond_13:
	return 0x0;

}
// .method public findResources(Ljava/lang/String;)Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::net::URL>> dalvik::system::DexPathList::findResources(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::util::ArrayList> result;
	std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::Object> url;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1669        value = {
	// 1670            "(",
	// 1671            "Ljava/lang/String;",
	// 1672            ")",
	// 1673            "Ljava/util/Enumeration",
	// 1674            "<",
	// 1675            "Ljava/net/URL;",
	// 1676            ">;"
	// 1677        }
	// 1678    .end annotation
	result = std::make_shared<java::util::ArrayList>();
	//    .local v1, "result":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/net/URL;>;"
	cVar0 = this->dexElements;
	cVar1 = 0x0;
label_goto_9:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_19;
	//    .local v0, "element":Ldalvik/system/DexPathList$Element;
	url = cVar0[cVar1]->findResource(name);
	//    .local v2, "url":Ljava/net/URL;
	if ( !(url) )  
		goto label_cond_16;
	result->add(url);
label_cond_16:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_9;
	// 1718    .line 512
	// 1719    .end local v0    # "element":Ldalvik/system/DexPathList$Element;
	// 1720    .end local v2    # "url":Ljava/net/URL;
label_cond_19:
	return java::util::Collections::enumeration(result);

}
// .method getDexPaths()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> dalvik::system::DexPathList::getDexPaths()
{
	
	std::shared_ptr<java::util::ArrayList> dexPaths;
	std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::Object> dexPath;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1732        value = {
	// 1733            "()",
	// 1734            "Ljava/util/List",
	// 1735            "<",
	// 1736            "Ljava/lang/String;",
	// 1737            ">;"
	// 1738        }
	// 1739    .end annotation
	dexPaths = std::make_shared<java::util::ArrayList>();
	//    .local v1, "dexPaths":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	cVar0 = this->dexElements;
	cVar1 = 0x0;
label_goto_9:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_19;
	//    .local v2, "e":Ldalvik/system/DexPathList$Element;
	dexPath = dalvik::system::DexPathList_S_Element::-wrap0(cVar0[cVar1]);
	//    .local v0, "dexPath":Ljava/lang/String;
	if ( !(dexPath) )  
		goto label_cond_16;
	dexPaths->add(dexPath);
label_cond_16:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_9;
	// 1779    .line 552
	// 1780    .end local v0    # "dexPath":Ljava/lang/String;
	// 1781    .end local v2    # "e":Ldalvik/system/DexPathList$Element;
label_cond_19:
	return dexPaths;

}
// .method public getNativeLibraryDirectories()Ljava/util/List;
std::shared_ptr<java::util::List<java::io::File>> dalvik::system::DexPathList::getNativeLibraryDirectories()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1789        value = {
	// 1790            "()",
	// 1791            "Ljava/util/List",
	// 1792            "<",
	// 1793            "Ljava/io/File;",
	// 1794            ">;"
	// 1795        }
	// 1796    .end annotation
	return this->nativeLibraryDirectories;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexPathList::toString()
{
	
	std::shared_ptr<java::util::ArrayList> allNativeLibraryDirectories;
	std::shared_ptr<std::vector<java::io::File>> nativeLibraryDirectoriesArray;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	allNativeLibraryDirectories = std::make_shared<java::util::ArrayList>(this->nativeLibraryDirectories);
	//    .local v0, "allNativeLibraryDirectories":Ljava/util/List;, "Ljava/util/List<Ljava/io/File;>;"
	allNativeLibraryDirectories->addAll(this->systemNativeLibraryDirectories);
	nativeLibraryDirectoriesArray = allNativeLibraryDirectories->toArray(std::make_shared<std::vector<std::vector<java::io::File>>>(allNativeLibraryDirectories->size()));
	nativeLibraryDirectoriesArray->checkCast("std::vector<java::io::File>");
	//    .local v1, "nativeLibraryDirectoriesArray":[Ljava/io/File;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DexPathList[")))->append(java::util::Arrays::toString(this->dexElements))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",nativeLibraryDirectories=")))->append(java::util::Arrays::toString(nativeLibraryDirectoriesArray))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString();

}


