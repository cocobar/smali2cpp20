// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixUriUtils.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.lang.AssertionError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.net.URI.h"
#include "java.net.URISyntaxException.h"
#include "java.nio.file.Path.h"
#include "java.util.Arrays.h"
#include "sun.nio.fs.UnixException.h"
#include "sun.nio.fs.UnixFileAttributes.h"
#include "sun.nio.fs.UnixFileSystem.h"
#include "sun.nio.fs.UnixPath.h"
#include "sun.nio.fs.UnixUriUtils.h"

static sun::nio::fs::UnixUriUtils::_assertionsDisabled;
static sun::nio::fs::UnixUriUtils::H_ALPHA;
static sun::nio::fs::UnixUriUtils::H_ALPHANUM;
static sun::nio::fs::UnixUriUtils::H_DIGIT;
static sun::nio::fs::UnixUriUtils::H_LOWALPHA;
static sun::nio::fs::UnixUriUtils::H_MARK;
static sun::nio::fs::UnixUriUtils::H_PATH;
static sun::nio::fs::UnixUriUtils::H_PCHAR;
static sun::nio::fs::UnixUriUtils::H_UNRESERVED;
static sun::nio::fs::UnixUriUtils::H_UPALPHA;
static sun::nio::fs::UnixUriUtils::L_ALPHA;
static sun::nio::fs::UnixUriUtils::L_ALPHANUM;
static sun::nio::fs::UnixUriUtils::L_DIGIT;
static sun::nio::fs::UnixUriUtils::L_LOWALPHA;
static sun::nio::fs::UnixUriUtils::L_MARK;
static sun::nio::fs::UnixUriUtils::L_PATH;
static sun::nio::fs::UnixUriUtils::L_PCHAR;
static sun::nio::fs::UnixUriUtils::L_UNRESERVED;
static sun::nio::fs::UnixUriUtils::L_UPALPHA;
static sun::nio::fs::UnixUriUtils::hexDigits;
// .method static constructor <clinit>()V
void sun::nio::fs::UnixUriUtils::static_cinit()
{
	
	long long cVar0;
	std::shared<std::vector<char[]>> cVar1;
	
	cVar0 = 0x0;
	sun::nio::fs::UnixUriUtils::_assertionsDisabled = ( sun::nio::fs::UnixUriUtils()->desiredAssertionStatus() ^ 0x1);
	sun::nio::fs::UnixUriUtils::L_DIGIT = sun::nio::fs::UnixUriUtils::lowMask(0x30, 0x39);
	sun::nio::fs::UnixUriUtils::H_UPALPHA = sun::nio::fs::UnixUriUtils::highMask(0x41, 0x5a);
	sun::nio::fs::UnixUriUtils::H_LOWALPHA = sun::nio::fs::UnixUriUtils::highMask(0x61, 0x7a);
	sun::nio::fs::UnixUriUtils::H_ALPHA = (sun::nio::fs::UnixUriUtils::H_LOWALPHA |  sun::nio::fs::UnixUriUtils::H_UPALPHA);
	sun::nio::fs::UnixUriUtils::L_ALPHANUM = (sun::nio::fs::UnixUriUtils::L_DIGIT |  cVar0);
	sun::nio::fs::UnixUriUtils::H_ALPHANUM = (sun::nio::fs::UnixUriUtils::H_ALPHA |  cVar0);
	sun::nio::fs::UnixUriUtils::L_MARK = sun::nio::fs::UnixUriUtils::lowMask(std::make_shared<java::lang::String>(std::make_shared<char[]>("-_.!~*\'()")));
	sun::nio::fs::UnixUriUtils::H_MARK = sun::nio::fs::UnixUriUtils::highMask(std::make_shared<java::lang::String>(std::make_shared<char[]>("-_.!~*\'()")));
	sun::nio::fs::UnixUriUtils::L_UNRESERVED = (sun::nio::fs::UnixUriUtils::L_ALPHANUM |  sun::nio::fs::UnixUriUtils::L_MARK);
	sun::nio::fs::UnixUriUtils::H_UNRESERVED = (sun::nio::fs::UnixUriUtils::H_ALPHANUM |  sun::nio::fs::UnixUriUtils::H_MARK);
	sun::nio::fs::UnixUriUtils::L_PCHAR = (sun::nio::fs::UnixUriUtils::L_UNRESERVED |  sun::nio::fs::UnixUriUtils::lowMask(std::make_shared<java::lang::String>(std::make_shared<char[]>(":@&=+$,"))));
	sun::nio::fs::UnixUriUtils::H_PCHAR = (sun::nio::fs::UnixUriUtils::H_UNRESERVED |  sun::nio::fs::UnixUriUtils::highMask(std::make_shared<java::lang::String>(std::make_shared<char[]>(":@&=+$,"))));
	sun::nio::fs::UnixUriUtils::L_PATH = (sun::nio::fs::UnixUriUtils::L_PCHAR |  sun::nio::fs::UnixUriUtils::lowMask(std::make_shared<java::lang::String>(std::make_shared<char[]>(";/"))));
	sun::nio::fs::UnixUriUtils::H_PATH = (sun::nio::fs::UnixUriUtils::H_PCHAR |  sun::nio::fs::UnixUriUtils::highMask(std::make_shared<java::lang::String>(std::make_shared<char[]>(";/"))));
	cVar1 = std::make_shared<std::vector<char[]>>(0x10);
	?;
	sun::nio::fs::UnixUriUtils::hexDigits = cVar1;
	return;
	// 223    .line 245
	// 224    nop
	// 226    :array_96
	// 227    .array-data 2
	// 228        0x30s
	// 229        0x31s
	// 230        0x32s
	// 231        0x33s
	// 232        0x34s
	// 233        0x35s
	// 234        0x36s
	// 235        0x37s
	// 236        0x38s
	// 237        0x39s
	// 238        0x41s
	// 239        0x42s
	// 240        0x43s
	// 241        0x44s
	// 242        0x45s
	// 243        0x46s
	// 244    .end array-data

}
// .method private constructor <init>()V
sun::nio::fs::UnixUriUtils::UnixUriUtils()
{
	
	// 252    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static decode(C)I
int sun::nio::fs::UnixUriUtils::decode(char c)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p0, "c"    # C
	if ( c <  0x30 )
		goto label_cond_b;
	if ( c >  0x39 )
		goto label_cond_b;
	return ( c + -0x30);
	// 276    .line 193
label_cond_b:
	if ( c <  0x61 )
		goto label_cond_18;
	if ( c >  0x66 )
		goto label_cond_18;
	return ( ( c + -0x61) + 0xa);
	// 293    .line 195
label_cond_18:
	if ( c <  0x41 )
		goto label_cond_25;
	if ( c >  0x46 )
		goto label_cond_25;
	return ( ( c + -0x41) + 0xa);
	// 310    .line 197
label_cond_25:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;

}
// .method static fromUri(Lsun/nio/fs/UnixFileSystem;Ljava/net/URI;)Ljava/nio/file/Path;
std::shared_ptr<java::nio::file::Path> sun::nio::fs::UnixUriUtils::fromUri(std::shared_ptr<sun::nio::fs::UnixFileSystem> fs,std::shared_ptr<java::net::URI> uri)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::String> scheme;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::io::File> cVar6;
	std::shared_ptr<java::lang::String> p;
	int len;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar7;
	std::shared<std::vector<unsigned char[]>> result;
	int pos;
	int rlen;
	int c;
	std::shared_ptr<java::lang::AssertionError> cVar8;
	unsigned char b;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar9;
	std::shared_ptr<java::lang::AssertionError> cVar10;
	std::shared_ptr<sun::nio::fs::UnixPath> cVar11;
	
	//    .param p0, "fs"    # Lsun/nio/fs/UnixFileSystem;
	//    .param p1, "uri"    # Ljava/net/URI;
	if ( uri->isAbsolute() )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI is not absolute")));
	// throw
	throw cVar0;
	// 341    .line 47
label_cond_f:
	if ( !(uri->isOpaque()) )  
		goto label_cond_1e;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI is not hierarchical")));
	// throw
	throw cVar1;
	// 358    .line 49
label_cond_1e:
	scheme = uri->getScheme();
	//    .local v11, "scheme":Ljava/lang/String;
	if ( !(scheme) )  
		goto label_cond_2f;
	if ( !(( scheme->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("file"))) ^ 0x1)) )  
		goto label_cond_38;
label_cond_2f:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI scheme is not \")));
	// throw
	throw cVar2;
	// 388    .line 52
label_cond_38:
	if ( !(uri->getAuthority()) )  
		goto label_cond_47;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI has an authority component")));
	// throw
	throw cVar3;
	// 405    .line 54
label_cond_47:
	if ( !(uri->getFragment()) )  
		goto label_cond_56;
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI has a fragment component")));
	// throw
	throw cVar4;
	// 422    .line 56
label_cond_56:
	if ( !(uri->getQuery()) )  
		goto label_cond_65;
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI has a query component")));
	// throw
	throw cVar5;
	// 439    .line 60
label_cond_65:
	if ( uri->toString()->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("file:///"))) )     
		goto label_cond_7c;
	cVar6 = std::make_shared<java::io::File>(uri);
	return cVar6->toPath();
	// 464    .line 64
label_cond_7c:
	p = uri->getRawPath();
	//    .local v5, "p":Ljava/lang/String;
	len = p->length();
	//    .local v4, "len":I
	if ( len )     
		goto label_cond_8f;
	cVar7 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI path component is empty")));
	// throw
	throw cVar7;
	// 489    .line 70
label_cond_8f:
	if ( !(p->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))) )  
		goto label_cond_9d;
	if ( len <= 0x1 )
		goto label_cond_9d;
	len = ( len + -0x1);
label_cond_9d:
	result = std::make_shared<std::vector<unsigned char[]>>(len);
	//    .local v8, "result":[B
	//    .local v9, "rlen":I
	//    .local v6, "pos":I
	pos = 0x0;
	//    .end local v6    # "pos":I
	//    .local v7, "pos":I
	rlen = 0x0;
	//    .end local v9    # "rlen":I
	//    .local v10, "rlen":I
label_goto_a3:
	if ( pos >= len )
		goto label_cond_f6;
	pos = ( pos + 0x1);
	//    .end local v7    # "pos":I
	//    .restart local v6    # "pos":I
	c = p->charAt(pos);
	//    .local v1, "c":C
	if ( c != 0x25 )
		goto label_cond_e0;
	if ( sun::nio::fs::UnixUriUtils::_assertionsDisabled )     
		goto label_cond_bd;
	if ( ( pos + 0x2) <= len )
		goto label_cond_bd;
	cVar8 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar8;
	// 561    .line 80
label_cond_bd:
	pos = ( pos + 0x1);
	//    .end local v6    # "pos":I
	//    .restart local v7    # "pos":I
	//    .local v2, "c1":C
	//    .end local v7    # "pos":I
	//    .restart local v6    # "pos":I
	//    .local v3, "c2":C
	b = (unsigned char)((( sun::nio::fs::UnixUriUtils::decode(p->charAt(pos)) << 0x4) |  sun::nio::fs::UnixUriUtils::decode(p->charAt(pos))));
	//    .local v0, "b":B
	if ( b )     
		goto label_cond_ef;
	cVar9 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Nul character not allowed")));
	// throw
	throw cVar9;
	// 610    .line 86
	// 611    .end local v0    # "b":B
	// 612    .end local v2    # "c1":C
	// 613    .end local v3    # "c2":C
label_cond_e0:
	if ( sun::nio::fs::UnixUriUtils::_assertionsDisabled )     
		goto label_cond_ee;
	if ( c <  0x80 )
		goto label_cond_ee;
	cVar10 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar10;
	// 629    .line 87
label_cond_ee:
	//    .restart local v0    # "b":B
label_cond_ef:
	//    .end local v10    # "rlen":I
	//    .restart local v9    # "rlen":I
	result[rlen] = b;
	pos = pos;
	//    .end local v6    # "pos":I
	//    .restart local v7    # "pos":I
	rlen = ( rlen + 0x1);
	//    .end local v9    # "rlen":I
	//    .restart local v10    # "rlen":I
	goto label_goto_a3;
	// 652    .line 91
	// 653    .end local v0    # "b":B
	// 654    .end local v1    # "c":C
label_cond_f6:
	if ( rlen == result->size() )
		goto label_cond_fd;
label_cond_fd:
	cVar11 = std::make_shared<sun::nio::fs::UnixPath>(fs, result);
	return cVar11;

}
// .method private static highMask(CC)J
long long sun::nio::fs::UnixUriUtils::highMask(char first,char last)
{
	
	int cVar0;
	int cVar1;
	long long m;
	int i;
	
	//    .param p0, "first"    # C
	//    .param p1, "last"    # C
	cVar0 = 0x7f;
	cVar1 = 0x40;
	m = 0x0;
	//    .local v4, "m":J
	//    .local v0, "f":I
	//    .local v2, "l":I
	i = ( java::lang::Math::max(java::lang::Math::min(first, cVar0), cVar1) + -0x40);
	//    .local v1, "i":I
label_goto_1b:
	if ( i >  ( java::lang::Math::max(java::lang::Math::min(last, cVar0), cVar1) + -0x40) )
		goto label_cond_24;
	m = (m |  (0x1 << i));
	i = ( i + 0x1);
	goto label_goto_1b;
	// 731    .line 177
label_cond_24:
	return m;

}
// .method private static highMask(Ljava/lang/String;)J
long long sun::nio::fs::UnixUriUtils::highMask(std::shared_ptr<java::lang::String> chars)
{
	
	long long m;
	int i;
	int c;
	
	//    .param p0, "chars"    # Ljava/lang/String;
	//    .local v4, "n":I
	m = 0x0;
	//    .local v2, "m":J
	i = 0x0;
	//    .local v1, "i":I
label_goto_7:
	if ( i >= chars->length() )
		goto label_cond_1e;
	c = chars->charAt(i);
	//    .local v0, "c":C
	if ( c <  0x40 )
		goto label_cond_1b;
	if ( c >= 0x80 )
		goto label_cond_1b;
	m = (m |  (0x1 << ( c + -0x40)));
label_cond_1b:
	i = ( i + 0x1);
	goto label_goto_7;
	// 788    .line 155
	// 789    .end local v0    # "c":C
label_cond_1e:
	return m;

}
// .method private static lowMask(CC)J
long long sun::nio::fs::UnixUriUtils::lowMask(char first,char last)
{
	
	int cVar0;
	int cVar1;
	long long m;
	int i;
	
	//    .param p0, "first"    # C
	//    .param p1, "last"    # C
	cVar0 = 0x3f;
	cVar1 = 0x0;
	m = 0x0;
	//    .local v4, "m":J
	//    .local v0, "f":I
	//    .local v2, "l":I
	i = java::lang::Math::max(java::lang::Math::min(first, cVar0), cVar1);
	//    .local v1, "i":I
label_goto_16:
	if ( i >  java::lang::Math::max(java::lang::Math::min(last, cVar0), cVar1) )
		goto label_cond_1f;
	m = (m |  (0x1 << i));
	i = ( i + 0x1);
	goto label_goto_16;
	// 847    .line 166
label_cond_1f:
	return m;

}
// .method private static lowMask(Ljava/lang/String;)J
long long sun::nio::fs::UnixUriUtils::lowMask(std::shared_ptr<java::lang::String> chars)
{
	
	long long m;
	int i;
	int c;
	
	//    .param p0, "chars"    # Ljava/lang/String;
	//    .local v4, "n":I
	m = 0x0;
	//    .local v2, "m":J
	i = 0x0;
	//    .local v1, "i":I
label_goto_7:
	if ( i >= chars->length() )
		goto label_cond_18;
	c = chars->charAt(i);
	//    .local v0, "c":C
	if ( c >= 0x40 )
		goto label_cond_15;
	m = (m |  (0x1 << c));
label_cond_15:
	i = ( i + 0x1);
	goto label_goto_7;
	// 898    .line 143
	// 899    .end local v0    # "c":C
label_cond_18:
	return m;

}
// .method private static match(CJJ)Z
bool sun::nio::fs::UnixUriUtils::match(char c,long long lowMask,long long highMask)
{
	
	long long cVar0;
	long long cVar1;
	bool cVar2;
	bool cVar3;
	
	//    .param p0, "c"    # C
	//    .param p1, "lowMask"    # J
	//    .param p3, "highMask"    # J
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = 0x1;
	cVar3 = 0x0;
	if ( c >= 0x40 )
		goto label_cond_14;
	if ( !((((cVar0 << c) &  lowMask) > cVar1)) )  
		goto label_cond_12;
label_goto_11:
	return cVar2;
label_cond_12:
	cVar2 = cVar3;
	goto label_goto_11;
	// 941    .line 184
label_cond_14:
	if ( c >= 0x80 )
		goto label_cond_24;
	if ( !((((cVar0 << ( c + -0x40)) &  highMask) > cVar1)) )  
		goto label_cond_22;
label_goto_21:
	return cVar2;
label_cond_22:
	cVar2 = cVar3;
	goto label_goto_21;
	// 966    .line 186
label_cond_24:
	return cVar3;

}
// .method static toUri(Lsun/nio/fs/UnixPath;)Ljava/net/URI;
std::shared_ptr<java::net::URI> sun::nio::fs::UnixUriUtils::toUri(std::shared_ptr<sun::nio::fs::UnixPath> up)
{
	
	int cVar0;
	auto path;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int i;
	char c;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::net::URI> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "up"    # Lsun/nio/fs/UnixPath;
	cVar0 = 0x2f;
	path = up->toAbsolutePath()->asByteArray();
	//    .local v2, "path":[B
	sb = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("file:///")));
	//    .local v3, "sb":Ljava/lang/StringBuilder;
	if ( sun::nio::fs::UnixUriUtils::_assertionsDisabled )     
		goto label_cond_21;
	if ( path[0x0] == cVar0 )
		goto label_cond_21;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 1013    .line 104
label_cond_21:
	i = 0x1;
	//    .local v1, "i":I
label_goto_22:
	if ( i >= path->size() )
		goto label_cond_54;
	c = (char)(( path[i] & 0xff));
	//    .local v0, "c":C
	if ( !(sun::nio::fs::UnixUriUtils::match(c, sun::nio::fs::UnixUriUtils::L_PATH, sun::nio::fs::UnixUriUtils::H_PATH)) )  
		goto label_cond_3a;
	sb->append(c);
label_goto_37:
	i = ( i + 0x1);
	goto label_goto_22;
	// 1051    .line 109
label_cond_3a:
	sb->append(0x25);
	sb->append(sun::nio::fs::UnixUriUtils::hexDigits[( _shri(c,0x4) & 0xf)]);
	sb->append(sun::nio::fs::UnixUriUtils::hexDigits[( c & 0xf)]);
	goto label_goto_37;
	// 1079    .line 116
	// 1080    .end local v0    # "c":C
label_cond_54:
	if ( sb->charAt(( sb->length() + -0x1)) == cVar0 )
		goto label_cond_70;
	try {
	//label_try_start_61:
	if ( !(sun::nio::fs::UnixFileAttributes::get(up, 0x1)->isDirectory()) )  
		goto label_cond_70;
	sb->append(0x2f);
	//label_try_end_70:
	}
	catch (sun::nio::fs::UnixException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_81;
	}
	//    .catch Lsun/nio/fs/UnixException; {:try_start_61 .. :try_end_70} :catch_81
label_cond_70:
label_goto_70:
	try {
	//label_try_start_70:
	cVar2 = std::make_shared<java::net::URI>(sb->toString());
	//label_try_end_79:
	}
	catch (java::net::URISyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7a;
	}
	//    .catch Ljava/net/URISyntaxException; {:try_start_70 .. :try_end_79} :catch_7a
	return cVar2;
	// 1131    .line 127
label_catch_7a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v4, "x":Ljava/net/URISyntaxException;
	cVar3 = std::make_shared<java::lang::AssertionError>(getCatchExcetionFromList);
	// throw
	throw cVar3;
	// 1143    .line 120
	// 1144    .end local v4    # "x":Ljava/net/URISyntaxException;
label_catch_81:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "x":Lsun/nio/fs/UnixException;
	goto label_goto_70;

}


