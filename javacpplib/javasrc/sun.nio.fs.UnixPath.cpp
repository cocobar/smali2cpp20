// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixPath.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Math.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.ThreadLocal.h"
#include "java.lang.ref.SoftReference.h"
#include "java.net.URI.h"
#include "java.nio.ByteBuffer.h"
#include "java.nio.CharBuffer.h"
#include "java.nio.charset.Charset.h"
#include "java.nio.charset.CharsetEncoder.h"
#include "java.nio.charset.CoderResult.h"
#include "java.nio.charset.CodingErrorAction.h"
#include "java.nio.file.FileSystemException.h"
#include "java.nio.file.InvalidPathException.h"
#include "java.nio.file.LinkOption.h"
#include "java.nio.file.Path.h"
#include "java.nio.file.ProviderMismatchException.h"
#include "java.nio.file.WatchEvent_S_Kind.h"
#include "java.nio.file.WatchEvent_S_Modifier.h"
#include "java.nio.file.WatchKey.h"
#include "java.nio.file.WatchService.h"
#include "java.util.Arrays.h"
#include "java.util.Objects.h"
#include "sun.nio.fs.AbstractWatchService.h"
#include "sun.nio.fs.UnixConstants.h"
#include "sun.nio.fs.UnixException.h"
#include "sun.nio.fs.UnixFileAttributes.h"
#include "sun.nio.fs.UnixFileSystem.h"
#include "sun.nio.fs.UnixNativeDispatcher.h"
#include "sun.nio.fs.UnixPath.h"
#include "sun.nio.fs.UnixUriUtils.h"
#include "sun.nio.fs.Util.h"

static sun::nio::fs::UnixPath::_assertionsDisabled;
static sun::nio::fs::UnixPath::encoder;
// .method static constructor <clinit>()V
void sun::nio::fs::UnixPath::static_cinit()
{
	
	std::shared_ptr<java::lang::ThreadLocal> cVar0;
	
	sun::nio::fs::UnixPath::_assertionsDisabled = ( sun::nio::fs::UnixPath()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<java::lang::ThreadLocal>();
	sun::nio::fs::UnixPath::encoder = cVar0;
	return;

}
// .method constructor <init>(Lsun/nio/fs/UnixFileSystem;Ljava/lang/String;)V
sun::nio::fs::UnixPath::UnixPath(std::shared_ptr<sun::nio::fs::UnixFileSystem> fs,std::shared_ptr<java::lang::String> input)
{
	
	//    .param p1, "fs"    # Lsun/nio/fs/UnixFileSystem;
	//    .param p2, "input"    # Ljava/lang/String;
	sun::nio::fs::UnixPath::(fs, sun::nio::fs::UnixPath::encode(fs, sun::nio::fs::UnixPath::normalizeAndCheck(input)));
	return;

}
// .method constructor <init>(Lsun/nio/fs/UnixFileSystem;[B)V
sun::nio::fs::UnixPath::UnixPath(std::shared_ptr<sun::nio::fs::UnixFileSystem> fs,std::shared_ptr<unsigned char[]> path)
{
	
	//    .param p1, "fs"    # Lsun/nio/fs/UnixFileSystem;
	//    .param p2, "path"    # [B
	// 090    invoke-direct {p0}, Lsun/nio/fs/AbstractPath;-><init>()V
	this->fs = fs;
	this->path = path;
	return;

}
// .method private static checkNotNul(Ljava/lang/String;C)V
void sun::nio::fs::UnixPath::checkNotNul(std::shared_ptr<java::lang::String> input,char c)
{
	
	std::shared_ptr<java::nio::file::InvalidPathException> cVar0;
	
	//    .param p0, "input"    # Ljava/lang/String;
	//    .param p1, "c"    # C
	if ( c )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::nio::file::InvalidPathException>(input, std::make_shared<java::lang::String>(std::make_shared<char[]>("Nul character not allowed")));
	// throw
	throw cVar0;
	// 120    .line 94
label_cond_b:
	return;

}
// .method private emptyPath()Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixPath::emptyPath()
{
	
	std::shared_ptr<sun::nio::fs::UnixPath> cVar0;
	
	cVar0 = std::make_shared<sun::nio::fs::UnixPath>(this->getFileSystem(), std::make_shared<std::vector<unsigned char[]>>(0x0));
	return cVar0;

}
// .method private static encode(Lsun/nio/fs/UnixFileSystem;Ljava/lang/String;)[B
unsigned char sun::nio::fs::UnixPath::encode(std::shared_ptr<sun::nio::fs::UnixFileSystem> fs,std::shared_ptr<java::lang::String> input)
{
	
	std::shared_ptr<java::lang::ref::SoftReference> ref;
	std::shared_ptr<java::nio::charset::CharsetEncoder> ce;
	std::shared_ptr<java::lang::Object> ce;
	std::shared_ptr<java::lang::ref::SoftReference> cVar1;
	std::shared_ptr<char[]> ca;
	std::shared<std::vector<unsigned char[]>> ba;
	std::shared_ptr<java::nio::ByteBuffer> bb;
	int cVar2;
	std::shared_ptr<java::nio::file::InvalidPathException> cVar3;
	int len;
	
	//    .param p0, "fs"    # Lsun/nio/fs/UnixFileSystem;
	//    .param p1, "input"    # Ljava/lang/String;
	ref = sun::nio::fs::UnixPath::encoder->get();
	ref->checkCast("java::lang::ref::SoftReference");
	//    .local v8, "ref":Ljava/lang/ref/SoftReference;, "Ljava/lang/ref/SoftReference<Ljava/nio/charset/CharsetEncoder;>;"
	if ( !(ref) )  
		goto label_cond_65;
	ce = ref->get();
	ce->checkCast("java::nio::charset::CharsetEncoder");
label_goto_10:
	if ( ce )     
		goto label_cond_30;
	ce = sun::nio::fs::Util::jnuEncoding({const[class].FS-Param})->newEncoder()->onMalformedInput(java::nio::charset::CodingErrorAction::REPORT)->onUnmappableCharacter(java::nio::charset::CodingErrorAction::REPORT);
	//    .local v4, "ce":Ljava/nio/charset/CharsetEncoder;
	cVar1 = std::make_shared<java::lang::ref::SoftReference>(ce);
	sun::nio::fs::UnixPath::encoder->set(cVar1);
	//    .end local v4    # "ce":Ljava/nio/charset/CharsetEncoder;
label_cond_30:
	ca = fs->normalizeNativePath(input->toCharArray());
	//    .local v2, "ca":[C
	ba = std::make_shared<std::vector<unsigned char[]>>((int)(( (double)(ca->size()) * (double)(ce->maxBytesPerChar()))));
	//    .local v0, "ba":[B
	bb = java::nio::ByteBuffer::wrap(ba);
	//    .local v1, "bb":Ljava/nio/ByteBuffer;
	//    .local v3, "cb":Ljava/nio/CharBuffer;
	ce->reset();
	//    .local v5, "cr":Ljava/nio/charset/CoderResult;
	if ( ce->encode(java::nio::CharBuffer::wrap(ca), bb, 0x1)->isUnderflow() )     
		goto label_cond_67;
	cVar2 = 0x1;
label_goto_5a:
	if ( !(cVar2) )  
		goto label_cond_72;
	cVar3 = std::make_shared<java::nio::file::InvalidPathException>(input, std::make_shared<java::lang::String>(std::make_shared<char[]>("Malformed input or input contains unmappable characters")));
	// throw
	throw cVar3;
	// 287    .line 121
	// 288    .end local v0    # "ba":[B
	// 289    .end local v1    # "bb":Ljava/nio/ByteBuffer;
	// 290    .end local v2    # "ca":[C
	// 291    .end local v3    # "cb":Ljava/nio/CharBuffer;
	// 292    .end local v5    # "cr":Ljava/nio/charset/CoderResult;
label_cond_65:
	ce = 0x0;
	//    .local v4, "ce":Ljava/nio/charset/CharsetEncoder;
	goto label_goto_10;
	// 299    .line 143
	// 300    .end local v4    # "ce":Ljava/nio/charset/CharsetEncoder;
	// 301    .restart local v0    # "ba":[B
	// 302    .restart local v1    # "bb":Ljava/nio/ByteBuffer;
	// 303    .restart local v2    # "ca":[C
	// 304    .restart local v3    # "cb":Ljava/nio/CharBuffer;
	// 305    .restart local v5    # "cr":Ljava/nio/charset/CoderResult;
label_cond_67:
	cVar2 = ( ce->flush(bb)->isUnderflow() ^ 0x1);
	//    .local v6, "error":Z
	goto label_goto_5a;
	// 321    .line 152
	// 322    .end local v6    # "error":Z
label_cond_72:
	len = bb->position();
	//    .local v7, "len":I
	if ( len == ba->size() )
		goto label_cond_7d;
label_cond_7d:
	return ba;

}
// .method private initOffsets()V
void sun::nio::fs::UnixPath::initOffsets()
{
	
	int cVar0;
	int count;
	int index;
	std::shared<std::vector<int[]>> result;
	
	cVar0 = 0x2f;
	if ( this->offsets )     
		goto label_cond_5f;
	count = 0x0;
	//    .local v1, "count":I
	index = 0x0;
	//    .local v3, "index":I
	if ( !(this->isEmpty()) )  
		goto label_cond_22;
	count = 0x1;
label_cond_f:
	result = std::make_shared<std::vector<int[]>>(count);
	//    .local v5, "result":[I
	count = 0x0;
	index = 0x0;
label_goto_13:
	if ( index >= this->path->size() )
		goto label_cond_57;
	//    .local v0, "c":B
	if ( this->path[index] != cVar0 )
		goto label_cond_40;
	index = ( index + 0x1);
	goto label_goto_13;
	// 406    .end local v3    # "index":I
	// 407    .end local v5    # "result":[I
	// 408    .local v4, "index":I
label_cond_21:
	index = index;
	//    .end local v0    # "c":B
	//    .end local v4    # "index":I
	//    .restart local v3    # "index":I
label_cond_22:
	if ( index >= this->path->size() )
		goto label_cond_f;
	index = ( index + 0x1);
	//    .end local v3    # "index":I
	//    .restart local v4    # "index":I
	//    .restart local v0    # "c":B
	if ( this->path[index] == cVar0 )
		goto label_cond_21;
	count = ( count + 0x1);
	index = index;
	//    .end local v4    # "index":I
	//    .restart local v3    # "index":I
label_goto_32:
	if ( index >= this->path->size() )
		goto label_cond_22;
	if ( this->path[index] == cVar0 )
		goto label_cond_22;
	index = ( index + 0x1);
	goto label_goto_32;
	// 462    .line 235
	// 463    .restart local v5    # "result":[I
label_cond_40:
	count = ( count + 0x1);
	//    .end local v1    # "count":I
	//    .local v2, "count":I
	index = ( index + 0x1);
	//    .end local v3    # "index":I
	//    .restart local v4    # "index":I
	result[count] = index;
	index = index;
	//    .end local v4    # "index":I
	//    .restart local v3    # "index":I
label_goto_47:
	if ( index >= this->path->size() )
		goto label_cond_55;
	if ( this->path[index] == cVar0 )
		goto label_cond_55;
	index = ( index + 0x1);
	goto label_goto_47;
label_cond_55:
	count = count;
	//    .end local v2    # "count":I
	//    .restart local v1    # "count":I
	goto label_goto_13;
	// 505    .line 240
	// 506    .end local v0    # "c":B
label_cond_57:
	this->monitor_enter();
	try {
	//label_try_start_58:
	if ( this->offsets )     
		goto label_cond_5e;
	this->offsets = result;
	//label_try_end_5e:
	}
	catch (...){
		goto label_catchall_60;
	}
	//    .catchall {:try_start_58 .. :try_end_5e} :catchall_60
label_cond_5e:
	this->monitor_exit();
	//    .end local v1    # "count":I
	//    .end local v3    # "index":I
	//    .end local v5    # "result":[I
label_cond_5f:
	return;
	// 531    .line 240
	// 532    .restart local v1    # "count":I
	// 533    .restart local v3    # "index":I
	// 534    .restart local v5    # "result":[I
label_catchall_60:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private isEmpty()Z
bool sun::nio::fs::UnixPath::isEmpty()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->path->size() )     
		goto label_cond_7;
	cVar1 = 0x1;
label_cond_7:
	return cVar1;

}
// .method private static normalize(Ljava/lang/String;II)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixPath::normalize(std::shared_ptr<java::lang::String> input,int len,int off)
{
	
	int cVar0;
	int n;
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	char c;
	
	//    .param p0, "input"    # Ljava/lang/String;
	//    .param p1, "len"    # I
	//    .param p2, "off"    # I
	cVar0 = 0x2f;
	if ( len )     
		goto label_cond_6;
	return input;
	// 579    .line 99
label_cond_6:
	n = len;
	//    .local v2, "n":I
label_goto_7:
	if ( n <= 0 )
		goto label_cond_14;
	if ( input->charAt(( n + -0x1)) != cVar0 )
		goto label_cond_14;
	n = ( n + -0x1);
	goto label_goto_7;
	// 600    .line 101
label_cond_14:
	if ( n )     
		goto label_cond_1a;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("/"));
	// 609    .line 103
label_cond_1a:
	sb = std::make_shared<java::lang::StringBuilder>(input->length());
	//    .local v4, "sb":Ljava/lang/StringBuilder;
	if ( off <= 0 )
		goto label_cond_2c;
	sb->append(input->substring(0x0, off));
label_cond_2c:
	//    .local v3, "prevChar":C
	i = off;
	//    .end local v3    # "prevChar":C
	//    .local v1, "i":I
label_goto_2e:
	if ( i >= n )
		goto label_cond_43;
	c = input->charAt(i);
	//    .local v0, "c":C
	if ( c != cVar0 )
		goto label_cond_3b;
	if ( prevChar != cVar0 )
		goto label_cond_3b;
label_goto_38:
	i = ( i + 0x1);
	goto label_goto_2e;
	// 660    .line 111
label_cond_3b:
	sun::nio::fs::UnixPath::checkNotNul(input, c);
	sb->append(c);
	//    .local v3, "prevChar":C
	goto label_goto_38;
	// 673    .line 115
	// 674    .end local v0    # "c":C
	// 675    .end local v3    # "prevChar":C
label_cond_43:
	return sb->toString();

}
// .method static normalizeAndCheck(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixPath::normalizeAndCheck(std::shared_ptr<java::lang::String> input)
{
	
	int cVar0;
	int n;
	int prevChar;
	int i;
	char c;
	
	//    .param p0, "input"    # Ljava/lang/String;
	cVar0 = 0x2f;
	n = input->length();
	//    .local v2, "n":I
	prevChar = 0x0;
	//    .local v3, "prevChar":C
	i = 0x0;
	//    .end local v3    # "prevChar":C
	//    .local v1, "i":I
label_goto_8:
	if ( i >= n )
		goto label_cond_20;
	c = input->charAt(i);
	//    .local v0, "c":C
	if ( c != cVar0 )
		goto label_cond_19;
	if ( prevChar != cVar0 )
		goto label_cond_19;
	return sun::nio::fs::UnixPath::normalize(input, n, ( i + -0x1));
	// 729    .line 83
label_cond_19:
	sun::nio::fs::UnixPath::checkNotNul(input, c);
	//    .local v3, "prevChar":C
	i = ( i + 0x1);
	goto label_goto_8;
	// 742    .line 86
	// 743    .end local v0    # "c":C
	// 744    .end local v3    # "prevChar":C
label_cond_20:
	if ( prevChar != cVar0 )
		goto label_cond_29;
	return sun::nio::fs::UnixPath::normalize(input, n, ( n + -0x1));
	// 757    .line 88
label_cond_29:
	return input;

}
// .method private static resolve([B[B)[B
unsigned char sun::nio::fs::UnixPath::resolve(std::shared_ptr<unsigned char[]> base,std::shared_ptr<unsigned char[]> child)
{
	
	int cVar0;
	unsigned char cVar1;
	int cVar2;
	int baseLength;
	int childLength;
	std::shared<std::vector<unsigned char[]>> result;
	
	//    .param p0, "base"    # [B
	//    .param p1, "child"    # [B
	cVar0 = 0x1;
	cVar1 = 0x2f;
	cVar2 = 0x0;
	baseLength = base->size();
	//    .local v0, "baseLength":I
	childLength = child->size();
	//    .local v1, "childLength":I
	if ( childLength )     
		goto label_cond_9;
	return base;
	// 788    .line 379
label_cond_9:
	if ( !(baseLength) )  
		goto label_cond_f;
	if ( child[cVar2] != cVar1 )
		goto label_cond_10;
label_cond_f:
	return child;
	// 800    .line 382
label_cond_10:
	if ( baseLength != cVar0 )
		goto label_cond_20;
	if ( base[cVar2] != cVar1 )
		goto label_cond_20;
	result = std::make_shared<std::vector<unsigned char[]>>(( childLength + 0x1));
	//    .local v2, "result":[B
	result[cVar2] = cVar1;
	java::lang::System::arraycopy(child, cVar2, result, cVar0, childLength);
label_goto_1f:
	return result;
	// 824    .line 387
	// 825    .end local v2    # "result":[B
label_cond_20:
	result = std::make_shared<std::vector<unsigned char[]>>((( baseLength + 0x1) +  childLength));
	//    .restart local v2    # "result":[B
	java::lang::System::arraycopy(base, cVar2, result, cVar2, baseLength);
	result[base->size()] = cVar1;
	java::lang::System::arraycopy(child, cVar2, result, ( baseLength + 0x1), childLength);
	goto label_goto_1f;

}
// .method static toUnixPath(Ljava/nio/file/Path;)Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixPath::toUnixPath(std::shared_ptr<java::nio::file::Path> obj)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::nio::file::ProviderMismatchException> cVar1;
	
	//    .param p0, "obj"    # Ljava/nio/file/Path;
	if ( obj )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 865    .line 199
label_cond_8:
	if ( obj->instanceOf("sun::nio::fs::UnixPath") )     
		goto label_cond_12;
	cVar1 = std::make_shared<java::nio::file::ProviderMismatchException>();
	// throw
	throw cVar1;
	// 878    .line 201
label_cond_12:
	obj->checkCast("sun::nio::fs::UnixPath");
	//    .end local p0    # "obj":Ljava/nio/file/Path;
	return obj;

}
// .method asByteArray()[B
unsigned char sun::nio::fs::UnixPath::asByteArray()
{
	
	return this->path;

}
// .method checkDelete()V
void sun::nio::fs::UnixPath::checkDelete()
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_d;
	sm->checkDelete(this->getPathForPermissionCheck());
label_cond_d:
	return;

}
// .method checkRead()V
void sun::nio::fs::UnixPath::checkRead()
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_d;
	sm->checkRead(this->getPathForPermissionCheck());
label_cond_d:
	return;

}
// .method checkWrite()V
void sun::nio::fs::UnixPath::checkWrite()
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_d;
	sm->checkWrite(this->getPathForPermissionCheck());
label_cond_d:
	return;

}
// .method public compareTo(Ljava/nio/file/Path;)I
int sun::nio::fs::UnixPath::compareTo(std::shared_ptr<java::nio::file::Path> other)
{
	
	int len1;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar0;
	int len2;
	int k;
	int c1;
	int c2;
	
	//    .param p1, "other"    # Ljava/nio/file/Path;
	len1 = this->path->size();
	//    .local v3, "len1":I
	cVar0 = other;
	cVar0->checkCast("sun::nio::fs::UnixPath");
	len2 = cVar0->path->size();
	//    .local v4, "len2":I
	//    .local v5, "n":I
	//    .local v6, "v1":[B
	other->checkCast("sun::nio::fs::UnixPath");
	//    .end local p1    # "other":Ljava/nio/file/Path;
	//    .local v7, "v2":[B
	k = 0x0;
	//    .local v2, "k":I
label_goto_14:
	if ( k >= java::lang::Math::min(len1, len2) )
		goto label_cond_26;
	c1 = ( this->path[k] & 0xff);
	//    .local v0, "c1":I
	c2 = ( other->path[k] & 0xff);
	//    .local v1, "c2":I
	if ( c1 == c2 )
		goto label_cond_23;
	return (c1 - c2);
	// 1053    .line 731
label_cond_23:
	k = ( k + 0x1);
	goto label_goto_14;
	// 1059    .line 733
	// 1060    .end local v0    # "c1":I
	// 1061    .end local v1    # "c2":I
label_cond_26:
	return (len1 - len2);

}
// .method public endsWith(Ljava/nio/file/Path;)Z
bool sun::nio::fs::UnixPath::endsWith(std::shared_ptr<java::nio::file::Path> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<sun::nio::fs::UnixPath> that;
	int thisLen;
	int thatLen;
	int thisOffsetCount;
	int thatOffsetCount;
	int thisPos;
	int thatPos;
	
	//    .param p1, "other"    # Ljava/nio/file/Path;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( java::util::Objects::requireNonNull(other)->instanceOf("sun::nio::fs::UnixPath") )     
		goto label_cond_b;
	return cVar1;
label_cond_b:
	that = other;
	that->checkCast("sun::nio::fs::UnixPath");
	//    .local v1, "that":Lsun/nio/fs/UnixPath;
	thisLen = this->path->size();
	//    .local v6, "thisLen":I
	thatLen = that->path->size();
	//    .local v2, "thatLen":I
	if ( thatLen <= thisLen )
		goto label_cond_17;
	return cVar1;
	// 1114    .line 672
label_cond_17:
	if ( thisLen <= 0 )
		goto label_cond_1c;
	if ( thatLen )     
		goto label_cond_1c;
	return cVar1;
	// 1123    .line 676
label_cond_1c:
	if ( !(that->isAbsolute()) )  
		goto label_cond_2b;
	if ( !(( this->isAbsolute() ^ 0x1)) )  
		goto label_cond_2b;
	return cVar1;
	// 1142    .line 679
label_cond_2b:
	thisOffsetCount = this->getNameCount();
	//    .local v7, "thisOffsetCount":I
	thatOffsetCount = that->getNameCount();
	//    .local v3, "thatOffsetCount":I
	if ( thatOffsetCount <= thisOffsetCount )
		goto label_cond_36;
	return cVar1;
	// 1161    .line 687
label_cond_36:
	if ( thatOffsetCount != thisOffsetCount )
		goto label_cond_4f;
	if ( thisOffsetCount )     
		goto label_cond_3b;
	return cVar0;
	// 1171    .line 690
label_cond_3b:
	//    .local v0, "expectedLen":I
	if ( !(this->isAbsolute()) )  
		goto label_cond_4c;
	if ( !(( that->isAbsolute() ^ 0x1)) )  
		goto label_cond_4c;
label_cond_4c:
	if ( thatLen == thisLen )
		goto label_cond_56;
	return cVar1;
	// 1201    .line 697
	// 1202    .end local v0    # "expectedLen":I
label_cond_4f:
	if ( !(that->isAbsolute()) )  
		goto label_cond_56;
	return cVar1;
	// 1213    .line 703
label_cond_56:
	thisPos = this->offsets[(thisOffsetCount - thatOffsetCount)];
	//    .local v8, "thisPos":I
	thatPos = that->offsets[cVar1];
	//    .local v4, "thatPos":I
	if ( (thatLen - thatPos) == (thisLen - thisPos) )
		goto label_cond_67;
	return cVar1;
label_cond_67:
	thatPos = thatPos;
	//    .end local v4    # "thatPos":I
	//    .local v5, "thatPos":I
	thisPos = thisPos;
	//    .end local v8    # "thisPos":I
	//    .local v9, "thisPos":I
	if ( thatPos >= thatLen )
		goto label_cond_7a;
	//    .end local v9    # "thisPos":I
	//    .restart local v8    # "thisPos":I
	//    .end local v5    # "thatPos":I
	//    .restart local v4    # "thatPos":I
	if ( this->path[thisPos] == that->path[thatPos] )
		goto label_cond_67;
	return cVar1;
	// 1272    .line 712
	// 1273    .end local v4    # "thatPos":I
	// 1274    .end local v8    # "thisPos":I
	// 1275    .restart local v5    # "thatPos":I
	// 1276    .restart local v9    # "thisPos":I
label_cond_7a:
	return cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::nio::fs::UnixPath::equals(std::shared_ptr<java::lang::Object> ob)
{
	
	bool cVar1;
	
	//    .param p1, "ob"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(ob) )  
		goto label_cond_11;
	if ( !(ob->instanceOf("sun::nio::fs::UnixPath")) )  
		goto label_cond_11;
	ob->checkCast("java::nio::file::Path");
	//    .end local p1    # "ob":Ljava/lang/Object;
	if ( this->compareTo(ob) )     
		goto label_cond_10;
	cVar1 = 0x1;
label_cond_10:
	return cVar1;
	// 1310    .line 741
	// 1311    .restart local p1    # "ob":Ljava/lang/Object;
label_cond_11:
	return cVar1;

}
// .method getByteArrayForSysCalls()[B
unsigned char sun::nio::fs::UnixPath::getByteArrayForSysCalls()
{
	
	std::shared<std::vector<unsigned char[]>> here;
	
	if ( !(this->getFileSystem()->needToResolveAgainstDefaultDirectory()) )  
		goto label_cond_19;
	return sun::nio::fs::UnixPath::resolve(this->getFileSystem()->defaultDirectory(), this->path);
	// 1348    .line 171
label_cond_19:
	if ( this->isEmpty() )     
		goto label_cond_22;
	return this->path;
	// 1361    .line 175
label_cond_22:
	here = std::make_shared<std::vector<unsigned char[]>>(0x1);
	here[0x0] = 0x2e;
	//    .local v0, "here":[B
	return here;

}
// .method public getFileName()Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixPath::getFileName()
{
	
	int cVar0;
	int count;
	int lastOffset;
	int len;
	std::shared<std::vector<unsigned char[]>> result;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar1;
	
	cVar0 = 0x0;
	this->initOffsets();
	count = this->offsets->size();
	//    .local v0, "count":I
	if ( count )     
		goto label_cond_b;
	return 0x0;
	// 1413    .line 282
label_cond_b:
	if ( count != 0x1 )
		goto label_cond_1c;
	if ( this->path->size() <= 0 )
		goto label_cond_1c;
	if ( this->path[cVar0] == 0x2f )
		goto label_cond_1c;
	return this;
	// 1436    .line 285
label_cond_1c:
	lastOffset = this->offsets[( count + -0x1)];
	//    .local v1, "lastOffset":I
	len = (this->path->size() - lastOffset);
	//    .local v2, "len":I
	result = std::make_shared<std::vector<unsigned char[]>>(len);
	//    .local v3, "result":[B
	java::lang::System::arraycopy(this->path, lastOffset, result, cVar0, len);
	cVar1 = std::make_shared<sun::nio::fs::UnixPath>(this->getFileSystem(), result);
	return cVar1;

}
// .method public getFileSystem()Lsun/nio/fs/UnixFileSystem;
std::shared_ptr<sun::nio::fs::UnixFileSystem> sun::nio::fs::UnixPath::getFileSystem()
{
	
	return this->fs;

}
// .method public getName(I)Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixPath::getName(int index)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int begin;
	int len;
	std::shared<std::vector<unsigned char[]>> result;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar2;
	
	//    .param p1, "index"    # I
	this->initOffsets();
	if ( index >= 0 )
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 1528    .line 322
label_cond_c:
	if ( index <  this->offsets->size() )
		goto label_cond_17;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar1;
	// 1543    .line 325
label_cond_17:
	begin = this->offsets[index];
	//    .local v0, "begin":I
	if ( index != ( this->offsets->size() + -0x1) )
		goto label_cond_38;
	len = (this->path->size() - begin);
	//    .local v1, "len":I
label_goto_27:
	result = std::make_shared<std::vector<unsigned char[]>>(len);
	//    .local v2, "result":[B
	java::lang::System::arraycopy(this->path, begin, result, 0x0, len);
	cVar2 = std::make_shared<sun::nio::fs::UnixPath>(this->getFileSystem(), result);
	return cVar2;
	// 1588    .line 330
	// 1589    .end local v1    # "len":I
	// 1590    .end local v2    # "result":[B
label_cond_38:
	len = ( (this->offsets[( index + 0x1)] -  begin) + -0x1);
	//    .restart local v1    # "len":I
	goto label_goto_27;

}
// .method public getNameCount()I
int sun::nio::fs::UnixPath::getNameCount()
{
	
	this->initOffsets();
	return this->offsets->size();

}
// .method public getParent()Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixPath::getParent()
{
	
	int cVar0;
	int count;
	int len;
	std::shared<std::vector<unsigned char[]>> result;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar1;
	
	cVar0 = 0x0;
	this->initOffsets();
	count = this->offsets->size();
	//    .local v0, "count":I
	if ( count )     
		goto label_cond_b;
	return 0x0;
	// 1656    .line 301
label_cond_b:
	len = ( this->offsets[( count + -0x1)] + -0x1);
	//    .local v1, "len":I
	if ( len > 0 ) 
		goto label_cond_1a;
	return this->getRoot();
	// 1677    .line 306
label_cond_1a:
	result = std::make_shared<std::vector<unsigned char[]>>(len);
	//    .local v2, "result":[B
	java::lang::System::arraycopy(this->path, cVar0, result, cVar0, len);
	cVar1 = std::make_shared<sun::nio::fs::UnixPath>(this->getFileSystem(), result);
	return cVar1;

}
// .method getPathForExceptionMessage()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixPath::getPathForExceptionMessage()
{
	
	return this->toString();

}
// .method getPathForPermissionCheck()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixPath::getPathForPermissionCheck()
{
	
	if ( !(this->getFileSystem()->needToResolveAgainstDefaultDirectory()) )  
		goto label_cond_13;
	return sun::nio::fs::Util::toString(this->getByteArrayForSysCalls());
	// 1737    .line 191
label_cond_13:
	return this->toString();

}
// .method public getRoot()Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixPath::getRoot()
{
	
	if ( this->path->size() <= 0 )
		goto label_cond_17;
	if ( this->path[0x0] != 0x2f )
		goto label_cond_17;
	return this->getFileSystem()->rootDirectory();
	// 1790    .line 267
label_cond_17:
	return 0x0;

}
// .method public hashCode()I
int sun::nio::fs::UnixPath::hashCode()
{
	
	int h;
	int i;
	
	h = this->hash;
	//    .local v0, "h":I
	if ( h )     
		goto label_cond_19;
	i = 0x0;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= this->path->size() )
		goto label_cond_17;
	h = (( h * 0x1f) + ( this->path[i] & 0xff));
	i = ( i + 0x1);
	goto label_goto_5;
	// 1835    .line 752
label_cond_17:
	this->hash = h;
	//    .end local v1    # "i":I
label_cond_19:
	return h;

}
// .method public isAbsolute()Z
bool sun::nio::fs::UnixPath::isAbsolute()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->path->size() <= 0 )
		goto label_cond_f;
	if ( this->path[cVar1] != 0x2f )
		goto label_cond_f;
	cVar1 = 0x1;
label_cond_f:
	return cVar1;

}
// .method public normalize()Ljava/nio/file/Path;
std::shared_ptr<java::nio::file::Path> sun::nio::fs::UnixPath::normalize()
{
	
	int count;
	std::shared<std::vector<bool[]>> ignore;
	auto size;
	int remaining;
	int isAbsolute;
	int i;
	int begin;
	int len;
	int prevName;
	int j;
	std::shared_ptr<java::nio::file::Path> cVar0;
	auto result;
	int pos;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar2;
	
	count = this->getNameCount();
	//    .local v5, "count":I
	if ( !(count) )  
		goto label_cond_c;
	if ( !(this->isEmpty()) )  
		goto label_cond_d;
label_cond_c:
	return this;
	// 1895    .line 488
label_cond_d:
	ignore = std::make_shared<std::vector<bool[]>>(count);
	//    .local v9, "ignore":[Z
	size = std::make_shared<std::vector<int[]>>(count);
	//    .local v19, "size":[I
	remaining = count;
	//    .local v17, "remaining":I
	//    .local v6, "hasDotDot":Z
	isAbsolute = this->isAbsolute();
	//    .local v10, "isAbsolute":Z
	i = 0x0;
	//    .local v8, "i":I
label_goto_1b:
	if ( i >= count )
		goto label_cond_87;
	begin = this->offsets[i];
	//    .local v4, "begin":I
	if ( i != ( this->offsets->size() + -0x1) )
		goto label_cond_64;
	len = (this->path->size() - begin);
	//    .local v12, "len":I
label_goto_43:
	size[i] = len;
	if ( this->path[begin] != 0x2e )
		goto label_cond_61;
	if ( len != 0x1 )
		goto label_cond_73;
	ignore[i] = 0x1;
	remaining = ( remaining + -0x1);
label_cond_61:
label_goto_61:
	i = ( i + 0x1);
	goto label_goto_1b;
	// 2015    .line 504
	// 2016    .end local v12    # "len":I
label_cond_64:
	len = ( (this->offsets[( i + 0x1)] - begin) + -0x1);
	//    .restart local v12    # "len":I
	goto label_goto_43;
	// 2035    .line 514
label_cond_73:
	if ( this->path[( begin + 0x1)] != 0x2e )
		goto label_cond_61;
	0x1;
	goto label_goto_61;
	// 2060    .line 521
	// 2061    .end local v4    # "begin":I
	// 2062    .end local v12    # "len":I
label_cond_87:
	if ( !(0x0) )  
		goto label_cond_f9;
label_cond_89:
	//    .local v16, "prevRemaining":I
	prevName = -0x1;
	//    .local v15, "prevName":I
	i = 0x0;
label_goto_8d:
	if ( i >= count )
		goto label_cond_f3;
	if ( !(ignore[i]) )  
		goto label_cond_96;
label_cond_93:
label_goto_93:
	i = ( i + 0x1);
	goto label_goto_8d;
	// 2093    .line 531
label_cond_96:
	if ( size[i] == 0x2 )
		goto label_cond_a2;
	i;
	goto label_goto_93;
	// 2111    .line 536
label_cond_a2:
	begin = this->offsets[i];
	//    .restart local v4    # "begin":I
	if ( this->path[begin] != 0x2e )
		goto label_cond_cc;
	if ( this->path[( begin + 0x1)] == 0x2e )
		goto label_cond_ce;
label_cond_cc:
	i;
	goto label_goto_93;
	// 2164    .line 543
label_cond_ce:
	if ( prevName < 0 ) 
		goto label_cond_dc;
	ignore[prevName] = 0x1;
	ignore[i] = 0x1;
	remaining = ( remaining + -0x2);
	prevName = -0x1;
	goto label_goto_93;
	// 2186    .line 552
label_cond_dc:
	if ( !(isAbsolute) )  
		goto label_cond_93;
	//    .local v7, "hasPrevious":Z
	j = 0x0;
	//    .local v11, "j":I
label_goto_e0:
	if ( j >= i )
		goto label_cond_e7;
	if ( ignore[j] )     
		goto label_cond_f0;
label_cond_e7:
	if ( 0x0 )     
		goto label_cond_93;
	ignore[i] = 0x1;
	remaining = ( remaining + -0x1);
	goto label_goto_93;
	// 2223    .line 554
label_cond_f0:
	j = ( j + 0x1);
	goto label_goto_e0;
	// 2229    .line 568
	// 2230    .end local v4    # "begin":I
	// 2231    .end local v7    # "hasPrevious":Z
	// 2232    .end local v11    # "j":I
label_cond_f3:
	if ( remaining >  remaining )
		goto label_cond_89;
	//    .end local v15    # "prevName":I
	//    .end local v16    # "prevRemaining":I
label_cond_f9:
	if ( remaining != count )
		goto label_cond_fe;
	return this;
	// 2251    .line 576
label_cond_fe:
	if ( remaining )     
		goto label_cond_110;
	if ( !(isAbsolute) )  
		goto label_cond_10b;
	cVar0 = this->getFileSystem()->rootDirectory();
label_goto_10a:
	return cVar0;
label_cond_10b:
	cVar0 = this->emptyPath();
	goto label_goto_10a;
	// 2276    .line 581
label_cond_110:
	len = ( remaining + -0x1);
	//    .restart local v12    # "len":I
	if ( !(isAbsolute) )  
		goto label_cond_116;
	len = ( len + 0x1);
label_cond_116:
	i = 0x0;
label_goto_117:
	if ( i >= count )
		goto label_cond_124;
	if ( ignore[i] )     
		goto label_cond_121;
	len = (len + size[i]);
label_cond_121:
	i = ( i + 0x1);
	goto label_goto_117;
	// 2310    .line 589
label_cond_124:
	result = std::make_shared<std::vector<unsigned char[]>>(len);
	//    .local v18, "result":[B
	0x0;
	//    .local v13, "pos":I
	if ( !(isAbsolute) )  
		goto label_cond_132;
	pos = 0x1;
	result[0x0] = 0x2f;
label_cond_132:
	i = 0x0;
label_goto_133:
	if ( i >= count )
		goto label_cond_166;
	if ( ignore[i] )     
		goto label_cond_163;
	java::lang::System::arraycopy(this->path, this->offsets[i], result, pos, size[i]);
	pos = (pos + size[i]);
	remaining = ( remaining + -0x1);
	if ( remaining <= 0 )
		goto label_cond_163;
	//    .end local v13    # "pos":I
	//    .local v14, "pos":I
	result[pos] = 0x2f;
	pos = ( pos + 0x1);
	//    .end local v14    # "pos":I
	//    .restart local v13    # "pos":I
label_cond_163:
	i = ( i + 0x1);
	goto label_goto_133;
	// 2402    .line 604
label_cond_166:
	var147 = cVar2(this->getFileSystem(), result);
	return cVar2;

}
// .method openForAttributeAccess(Z)I
int sun::nio::fs::UnixPath::openForAttributeAccess(bool followLinks)
{
	
	int flags;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<sun::nio::fs::UnixException> x;
	std::shared_ptr<java::nio::file::FileSystemException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "followLinks"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 2425        value = {
	// 2426            Ljava/io/IOException;
	// 2427        }
	// 2428    .end annotation
	flags = sun::nio::fs::UnixConstants::O_RDONLY;
	//    .local v0, "flags":I
	if ( followLinks )     
		goto label_cond_14;
	if ( sun::nio::fs::UnixConstants::O_NOFOLLOW )     
		goto label_cond_11;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NOFOLLOW_LINKS is not supported on this platform")));
	// throw
	throw cVar0;
	// 2452    .line 774
label_cond_11:
label_cond_14:
	try {
	//label_try_start_15:
	//label_try_end_18:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1a;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_15 .. :try_end_18} :catch_1a
	return sun::nio::fs::UnixNativeDispatcher::open(this, flags, 0x0);
	// 2471    .line 778
label_catch_1a:
	// move-exception
	x = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "x":Lsun/nio/fs/UnixException;
	if ( !(this->getFileSystem()->isSolaris()) )  
		goto label_cond_32;
	if ( x->errno() != sun::nio::fs::UnixConstants::EINVAL )
		goto label_cond_32;
	x->setError(sun::nio::fs::UnixConstants::ELOOP);
label_cond_32:
	if ( x->errno() != sun::nio::fs::UnixConstants::ELOOP )
		goto label_cond_5d;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::nio::file::FileSystemException>(this->getPathForExceptionMessage(), 0x0, cVar2->append(x->getMessage())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" or unable to access attributes of symbolic link")))->toString());
	// throw
	throw cVar1;
	// 2547    .line 787
label_cond_5d:
	// throw
	x->rethrowAsIOException(this);
	return -0x1;

}
// .method public varargs register(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;
std::shared_ptr<java::nio::file::WatchKey> sun::nio::fs::UnixPath::register(std::shared_ptr<java::nio::file::WatchService> watcher,std::shared_ptr<std::vector<java::nio::file::WatchEvent_S_Kind<java::lang::Object>>> events,std::shared_ptr<std::vector<java::nio::file::WatchEvent_S_Modifier>> modifiers)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::nio::file::ProviderMismatchException> cVar1;
	
	//    .param p1, "watcher"    # Ljava/nio/file/WatchService;
	//    .param p3, "modifiers"    # [Ljava/nio/file/WatchEvent$Modifier;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2562        value = {
	// 2563            "(",
	// 2564            "Ljava/nio/file/WatchService;",
	// 2565            "[",
	// 2566            "Ljava/nio/file/WatchEvent$Kind",
	// 2567            "<*>;[",
	// 2568            "Ljava/nio/file/WatchEvent$Modifier;",
	// 2569            ")",
	// 2570            "Ljava/nio/file/WatchKey;"
	// 2571        }
	// 2572    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 2575        value = {
	// 2576            Ljava/io/IOException;
	// 2577        }
	// 2578    .end annotation
	//    .local p2, "events":[Ljava/nio/file/WatchEvent$Kind;, "[Ljava/nio/file/WatchEvent$Kind<*>;"
	if ( watcher )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 2592    .line 894
label_cond_8:
	if ( watcher->instanceOf("sun::nio::fs::AbstractWatchService") )     
		goto label_cond_12;
	cVar1 = std::make_shared<java::nio::file::ProviderMismatchException>();
	// throw
	throw cVar1;
	// 2605    .line 896
label_cond_12:
	this->checkRead();
	watcher->checkCast("sun::nio::fs::AbstractWatchService");
	//    .end local p1    # "watcher":Ljava/nio/file/WatchService;
	return watcher->register(this, events, modifiers);

}
// .method public relativize(Ljava/nio/file/Path;)Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixPath::relativize(std::shared_ptr<java::nio::file::Path> obj)
{
	
	std::shared_ptr<sun::nio::fs::UnixPath> other;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int bn;
	int cn;
	int i;
	int dotdots;
	std::shared_ptr<sun::nio::fs::UnixPath> remainder;
	int isOtherEmpty;
	int len;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared<std::vector<unsigned char[]>> result;
	int pos;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar2;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar3;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	other = sun::nio::fs::UnixPath::toUnixPath(obj);
	//    .local v7, "other":Lsun/nio/fs/UnixPath;
	if ( !(other->equals(this)) )  
		goto label_cond_f;
	return this->emptyPath();
	// 2657    .line 415
label_cond_f:
	if ( this->isAbsolute() == other->isAbsolute() )
		goto label_cond_22;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'other\' is different type of Path")));
	// throw
	throw cVar0;
	// 2678    .line 419
label_cond_22:
	if ( !(this->isEmpty()) )  
		goto label_cond_29;
	return other;
	// 2689    .line 422
label_cond_29:
	bn = this->getNameCount();
	//    .local v0, "bn":I
	cn = other->getNameCount();
	//    .local v1, "cn":I
	if ( bn <= cn )
		goto label_cond_50;
	//    .local v6, "n":I
label_goto_34:
	i = 0x0;
	//    .local v3, "i":I
label_goto_35:
	if ( i >= n )
		goto label_cond_45;
	if ( this->getName(i)->equals(other->getName(i)) )     
		goto label_cond_52;
label_cond_45:
	dotdots = (bn - i);
	//    .local v2, "dotdots":I
	if ( i >= cn )
		goto label_cond_af;
	remainder = other->subpath(i, cn);
	//    .local v10, "remainder":Lsun/nio/fs/UnixPath;
	if ( dotdots )     
		goto label_cond_55;
	return remainder;
	// 2752    .line 426
	// 2753    .end local v2    # "dotdots":I
	// 2754    .end local v3    # "i":I
	// 2755    .end local v6    # "n":I
	// 2756    .end local v10    # "remainder":Lsun/nio/fs/UnixPath;
label_cond_50:
	//    .restart local v6    # "n":I
	goto label_goto_34;
	// 2763    .line 431
	// 2764    .restart local v3    # "i":I
label_cond_52:
	i = ( i + 0x1);
	goto label_goto_35;
	// 2770    .line 442
	// 2771    .restart local v2    # "dotdots":I
	// 2772    .restart local v10    # "remainder":Lsun/nio/fs/UnixPath;
label_cond_55:
	isOtherEmpty = other->isEmpty();
	//    .local v4, "isOtherEmpty":Z
	len = (( dotdots * 0x3) + remainder->path->size());
	//    .local v5, "len":I
	if ( !(isOtherEmpty) )  
		goto label_cond_74;
	if ( sun::nio::fs::UnixPath::_assertionsDisabled )     
		goto label_cond_72;
	if ( remainder->isEmpty() )     
		goto label_cond_72;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 2809    .line 450
label_cond_72:
label_cond_74:
	result = std::make_shared<std::vector<unsigned char[]>>(len);
	//    .local v11, "result":[B
	//    .local v8, "pos":I
	pos = 0x0;
	//    .end local v8    # "pos":I
	//    .local v9, "pos":I
label_goto_78:
	if ( dotdots <= 0 )
		goto label_cond_9c;
	pos = ( pos + 0x1);
	//    .end local v9    # "pos":I
	//    .restart local v8    # "pos":I
	result[pos] = 0x2e;
	pos = ( pos + 0x1);
	//    .end local v8    # "pos":I
	//    .restart local v9    # "pos":I
	result[pos] = 0x2e;
	if ( !(isOtherEmpty) )  
		goto label_cond_95;
	if ( dotdots <= 0x1 )
		goto label_cond_de;
	//    .end local v9    # "pos":I
	//    .restart local v8    # "pos":I
	result[pos] = 0x2f;
label_goto_91:
	dotdots = ( dotdots + -0x1);
	pos = pos;
	//    .end local v8    # "pos":I
	//    .restart local v9    # "pos":I
	goto label_goto_78;
	// 2874    .line 460
label_cond_95:
	//    .end local v9    # "pos":I
	//    .restart local v8    # "pos":I
	result[pos] = 0x2f;
	goto label_goto_91;
	// 2886    .line 464
	// 2887    .end local v8    # "pos":I
	// 2888    .restart local v9    # "pos":I
label_cond_9c:
	java::lang::System::arraycopy(remainder->path, 0x0, result, pos, remainder->path->size());
	cVar2 = std::make_shared<sun::nio::fs::UnixPath>(this->getFileSystem(), result);
	return cVar2;
	// 2911    .line 468
	// 2912    .end local v4    # "isOtherEmpty":Z
	// 2913    .end local v5    # "len":I
	// 2914    .end local v9    # "pos":I
	// 2915    .end local v10    # "remainder":Lsun/nio/fs/UnixPath;
	// 2916    .end local v11    # "result":[B
label_cond_af:
	result = std::make_shared<std::vector<unsigned char[]>>(( ( dotdots * 0x3) + -0x1));
	//    .restart local v11    # "result":[B
	//    .restart local v8    # "pos":I
	pos = 0x0;
	//    .end local v8    # "pos":I
	//    .restart local v9    # "pos":I
label_goto_b7:
	if ( dotdots <= 0 )
		goto label_cond_d2;
	pos = ( pos + 0x1);
	//    .end local v9    # "pos":I
	//    .restart local v8    # "pos":I
	result[pos] = 0x2e;
	pos = ( pos + 0x1);
	//    .end local v8    # "pos":I
	//    .restart local v9    # "pos":I
	result[pos] = 0x2e;
	if ( dotdots <= 0x1 )
		goto label_cond_dc;
	//    .end local v9    # "pos":I
	//    .restart local v8    # "pos":I
	result[pos] = 0x2f;
label_goto_ce:
	dotdots = ( dotdots + -0x1);
	pos = pos;
	//    .end local v8    # "pos":I
	//    .restart local v9    # "pos":I
	goto label_goto_b7;
	// 2979    .line 478
label_cond_d2:
	cVar3 = std::make_shared<sun::nio::fs::UnixPath>(this->getFileSystem(), result);
	return cVar3;
label_cond_dc:
	//    .end local v9    # "pos":I
	//    .restart local v8    # "pos":I
	goto label_goto_ce;
	// 2998    .end local v8    # "pos":I
	// 2999    .restart local v4    # "isOtherEmpty":Z
	// 3000    .restart local v5    # "len":I
	// 3001    .restart local v9    # "pos":I
	// 3002    .restart local v10    # "remainder":Lsun/nio/fs/UnixPath;
label_cond_de:
	//    .end local v9    # "pos":I
	//    .restart local v8    # "pos":I
	goto label_goto_91;

}
// .method public resolve(Ljava/nio/file/Path;)Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixPath::resolve(std::shared_ptr<java::nio::file::Path> obj)
{
	
	std::shared_ptr<unsigned char[]> other;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar0;
	
	//    .param p1, "obj"    # Ljava/nio/file/Path;
	other = sun::nio::fs::UnixPath::toUnixPath(obj)->path;
	//    .local v0, "other":[B
	if ( other->size() <= 0 )
		goto label_cond_13;
	if ( other[0x0] != 0x2f )
		goto label_cond_13;
	obj->checkCast("sun::nio::fs::UnixPath");
	//    .end local p1    # "obj":Ljava/nio/file/Path;
	return obj;
	// 3055    .line 400
	// 3056    .restart local p1    # "obj":Ljava/nio/file/Path;
label_cond_13:
	//    .local v1, "result":[B
	cVar0 = std::make_shared<sun::nio::fs::UnixPath>(this->getFileSystem(), sun::nio::fs::UnixPath::resolve(this->path, other));
	return cVar0;

}
// .method resolve([B)Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixPath::resolve(std::shared_ptr<unsigned char[]> other)
{
	
	std::shared_ptr<sun::nio::fs::UnixPath> cVar0;
	
	//    .param p1, "other"    # [B
	cVar0 = std::make_shared<sun::nio::fs::UnixPath>(this->getFileSystem(), other);
	return this->resolve(cVar0);

}
// .method public startsWith(Ljava/nio/file/Path;)Z
bool sun::nio::fs::UnixPath::startsWith(std::shared_ptr<java::nio::file::Path> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<sun::nio::fs::UnixPath> that;
	int thisOffsetCount;
	int thatOffsetCount;
	int i;
	
	//    .param p1, "other"    # Ljava/nio/file/Path;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( java::util::Objects::requireNonNull(other)->instanceOf("sun::nio::fs::UnixPath") )     
		goto label_cond_b;
	return cVar1;
label_cond_b:
	that = other;
	that->checkCast("sun::nio::fs::UnixPath");
	//    .local v3, "that":Lsun/nio/fs/UnixPath;
	if ( that->path->size() <= this->path->size() )
		goto label_cond_17;
	return cVar1;
	// 3140    .line 617
label_cond_17:
	thisOffsetCount = this->getNameCount();
	//    .local v5, "thisOffsetCount":I
	thatOffsetCount = that->getNameCount();
	//    .local v4, "thatOffsetCount":I
	if ( thatOffsetCount )     
		goto label_cond_30;
	if ( !(this->isAbsolute()) )  
		goto label_cond_30;
	if ( !(that->isEmpty()) )  
		goto label_cond_2e;
label_goto_2d:
	return cVar1;
label_cond_2e:
	cVar1 = cVar0;
	goto label_goto_2d;
	// 3177    .line 626
label_cond_30:
	if ( thatOffsetCount <= thisOffsetCount )
		goto label_cond_33;
	return cVar1;
	// 3184    .line 630
label_cond_33:
	if ( thatOffsetCount != thisOffsetCount )
		goto label_cond_3e;
	if ( this->path->size() == that->path->size() )
		goto label_cond_3e;
	return cVar1;
	// 3202    .line 636
label_cond_3e:
	i = 0x0;
	//    .local v0, "i":I
label_goto_3f:
	if ( i >= thatOffsetCount )
		goto label_cond_5b;
	//    .local v1, "o1":Ljava/lang/Integer;
	//    .local v2, "o2":Ljava/lang/Integer;
	if ( java::lang::Integer::valueOf(this->offsets[i])->equals(java::lang::Integer::valueOf(that->offsets[i])) )     
		goto label_cond_58;
	return cVar1;
	// 3240    .line 636
label_cond_58:
	i = ( i + 0x1);
	goto label_goto_3f;
	// 3246    .line 644
	// 3247    .end local v1    # "o1":Ljava/lang/Integer;
	// 3248    .end local v2    # "o2":Ljava/lang/Integer;
label_cond_5b:
	i = 0x0;
label_goto_5c:
	if ( i >= that->path->size() )
		goto label_cond_6f;
	if ( this->path[i] == that->path[i] )
		goto label_cond_6c;
	return cVar1;
	// 3274    .line 648
label_cond_6c:
	i = ( i + 0x1);
	goto label_goto_5c;
	// 3280    .line 652
label_cond_6f:
	if ( i >= this->path->size() )
		goto label_cond_7d;
	if ( this->path[i] == 0x2f )
		goto label_cond_7d;
	return cVar1;
	// 3299    .line 655
label_cond_7d:
	return cVar0;

}
// .method public subpath(II)Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixPath::subpath(int beginIndex,int endIndex)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	int begin;
	int len;
	std::shared<std::vector<unsigned char[]>> result;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar4;
	
	//    .param p1, "beginIndex"    # I
	//    .param p2, "endIndex"    # I
	this->initOffsets();
	if ( beginIndex >= 0 )
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 3337    .line 345
label_cond_c:
	if ( beginIndex <  this->offsets->size() )
		goto label_cond_17;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar1;
	// 3352    .line 347
label_cond_17:
	if ( endIndex <= this->offsets->size() )
		goto label_cond_22;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar2;
	// 3367    .line 349
label_cond_22:
	if ( beginIndex <  endIndex )
		goto label_cond_2a;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar3;
	// 3378    .line 354
label_cond_2a:
	begin = this->offsets[beginIndex];
	//    .local v0, "begin":I
	if ( endIndex != this->offsets->size() )
		goto label_cond_49;
	len = (this->path->size() - begin);
	//    .local v1, "len":I
label_goto_38:
	result = std::make_shared<std::vector<unsigned char[]>>(len);
	//    .local v2, "result":[B
	java::lang::System::arraycopy(this->path, begin, result, 0x0, len);
	cVar4 = std::make_shared<sun::nio::fs::UnixPath>(this->getFileSystem(), result);
	return cVar4;
	// 3421    .line 359
	// 3422    .end local v1    # "len":I
	// 3423    .end local v2    # "result":[B
label_cond_49:
	len = ( (this->offsets[endIndex] -  begin) + -0x1);
	//    .restart local v1    # "len":I
	goto label_goto_38;

}
// .method public toAbsolutePath()Lsun/nio/fs/UnixPath;
std::shared_ptr<sun::nio::fs::UnixPath> sun::nio::fs::UnixPath::toAbsolutePath()
{
	
	std::shared_ptr<java::lang::SecurityManager> sm;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar0;
	
	if ( !(this->isAbsolute()) )  
		goto label_cond_7;
	return this;
	// 3463    .line 817
label_cond_7:
	sm = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v0, "sm":Ljava/lang/SecurityManager;
	if ( !(sm) )  
		goto label_cond_13;
	sm->checkPropertyAccess(std::make_shared<java::lang::String>(std::make_shared<char[]>("user.dir")));
label_cond_13:
	cVar0 = std::make_shared<sun::nio::fs::UnixPath>(this->getFileSystem(), sun::nio::fs::UnixPath::resolve(this->getFileSystem()->defaultDirectory(), this->path));
	return cVar0;

}
// .method public varargs toRealPath([Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;
std::shared_ptr<java::nio::file::Path> sun::nio::fs::UnixPath::toRealPath(std::shared_ptr<std::vector<java::nio::file::LinkOption>> options)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<sun::nio::fs::UnixPath> absolute;
	std::shared_ptr<sun::nio::fs::UnixPath> result;
	int i;
	std::shared_ptr<sun::nio::fs::UnixPath> element;
	std::shared_ptr<sun::nio::fs::UnixFileAttributes> attrs;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar3;
	
	//    .param p1, "options"    # [Ljava/nio/file/LinkOption;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3511        value = {
	// 3512            Ljava/io/IOException;
	// 3513        }
	// 3514    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x2e;
	cVar2 = 0x0;
	this->checkRead();
	absolute = this->toAbsolutePath();
	//    .local v0, "absolute":Lsun/nio/fs/UnixPath;
	if ( !(sun::nio::fs::Util::followLinks(options)) )  
		goto label_cond_23;
	try {
	//label_try_start_11:
	//    .local v5, "rp":[B
	cVar3 = std::make_shared<sun::nio::fs::UnixPath>(this->getFileSystem(), sun::nio::fs::UnixNativeDispatcher::realpath(absolute));
	//label_try_end_1e:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1f;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_11 .. :try_end_1e} :catch_1f
	return cVar3;
	// 3559    .line 836
	// 3560    .end local v5    # "rp":[B
label_catch_1f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v6, "x":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v6    # "x":Lsun/nio/fs/UnixException;
label_cond_23:
	result = this->fs->rootDirectory();
	//    .local v4, "result":Lsun/nio/fs/UnixPath;
	i = 0x0;
	//    .local v3, "i":I
label_goto_2a:
	if ( i >= absolute->getNameCount() )
		goto label_cond_81;
	element = absolute->getName(i);
	//    .local v2, "element":Lsun/nio/fs/UnixPath;
	if ( element->asByteArray()->size() != cVar0 )
		goto label_cond_46;
	if ( element->asByteArray()[cVar2] != cVar1 )
		goto label_cond_46;
label_cond_43:
label_goto_43:
	i = ( i + 0x1);
	goto label_goto_2a;
	// 3619    .line 852
label_cond_46:
	if ( element->asByteArray()->size() != 0x2 )
		goto label_cond_7c;
	if ( element->asByteArray()[cVar2] != cVar1 )
		goto label_cond_7c;
	if ( element->asByteArray()[cVar0] != cVar1 )
		goto label_cond_7c;
	attrs = 0x0;
	//    .local v1, "attrs":Lsun/nio/fs/UnixFileAttributes;
	try {
	//label_try_start_60:
	//label_try_end_63:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_77;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_60 .. :try_end_63} :catch_77
	attrs = sun::nio::fs::UnixFileAttributes::get(result, 0x0);
	//    .end local v1    # "attrs":Lsun/nio/fs/UnixFileAttributes;
label_goto_64:
	if ( attrs->isSymbolicLink() )     
		goto label_cond_7c;
	result = result->getParent();
	if ( result )     
		goto label_cond_43;
	result = this->fs->rootDirectory();
	goto label_goto_43;
	// 3688    .line 858
	// 3689    .restart local v1    # "attrs":Lsun/nio/fs/UnixFileAttributes;
label_catch_77:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v6    # "x":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_64;
	// 3699    .line 869
	// 3700    .end local v1    # "attrs":Lsun/nio/fs/UnixFileAttributes;
	// 3701    .end local v6    # "x":Lsun/nio/fs/UnixException;
label_cond_7c:
	result = result->resolve(element);
	goto label_goto_43;
	// 3709    .line 874
	// 3710    .end local v2    # "element":Lsun/nio/fs/UnixPath;
label_cond_81:
	try {
	//label_try_start_82:
	sun::nio::fs::UnixFileAttributes::get(result, 0x0);
	//label_try_end_85:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_86;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_82 .. :try_end_85} :catch_86
label_goto_85:
	return result;
	// 3723    .line 875
label_catch_86:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v6    # "x":Lsun/nio/fs/UnixException;
	// throw
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_85;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixPath::toString()
{
	
	if ( this->stringValue )     
		goto label_cond_12;
	this->stringValue = this->fs->normalizeJavaPath(sun::nio::fs::Util::toString(this->path));
label_cond_12:
	return this->stringValue;

}
// .method public toUri()Ljava/net/URI;
std::shared_ptr<java::net::URI> sun::nio::fs::UnixPath::toUri()
{
	
	return sun::nio::fs::UnixUriUtils::toUri(this);

}


