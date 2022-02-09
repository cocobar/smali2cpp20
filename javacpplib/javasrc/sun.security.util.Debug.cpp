// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\Debug.smali
#include "java2ctype.h"
#include "java.io.PrintStream.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.math.BigInteger.h"
#include "java.util.Locale.h"
#include "java.util.regex.Matcher.h"
#include "java.util.regex.Pattern.h"
#include "sun.security.util.Debug.h"

static sun::security::util::Debug::args;
static sun::security::util::Debug::hexDigits;
// .method static constructor <clinit>()V
void sun::security::util::Debug::static_cinit()
{
	
	sun::security::util::Debug::hexDigits = std::make_shared<java::lang::String>(std::make_shared<char[]>("0123456789abcdef"))->toCharArray();
	return;

}
// .method public constructor <init>()V
sun::security::util::Debug::Debug()
{
	
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getInstance(Ljava/lang/String;)Lsun/security/util/Debug;
std::shared_ptr<sun::security::util::Debug> sun::security::util::Debug::getInstance(std::shared_ptr<java::lang::String> option)
{
	
	//    .param p0, "option"    # Ljava/lang/String;
	return sun::security::util::Debug::getInstance(option, option);

}
// .method public static getInstance(Ljava/lang/String;Ljava/lang/String;)Lsun/security/util/Debug;
std::shared_ptr<sun::security::util::Debug> sun::security::util::Debug::getInstance(std::shared_ptr<java::lang::String> option,std::shared_ptr<java::lang::String> prefix)
{
	
	std::shared_ptr<sun::security::util::Debug> d;
	
	//    .param p0, "option"    # Ljava/lang/String;
	//    .param p1, "prefix"    # Ljava/lang/String;
	if ( !(sun::security::util::Debug::isOn(option)) )  
		goto label_cond_e;
	d = std::make_shared<sun::security::util::Debug>();
	//    .local v0, "d":Lsun/security/util/Debug;
	d->prefix = prefix;
	return d;
	// 082    .line 149
	// 083    .end local v0    # "d":Lsun/security/util/Debug;
label_cond_e:
	return 0x0;

}
// .method public static isOn(Ljava/lang/String;)Z
bool sun::security::util::Debug::isOn(std::shared_ptr<java::lang::String> option)
{
	
	bool cVar0;
	bool cVar1;
	int cVar2;
	
	//    .param p0, "option"    # Ljava/lang/String;
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = -0x1;
	if ( sun::security::util::Debug::args )     
		goto label_cond_8;
	return cVar1;
	// 109    .line 162
label_cond_8:
	if ( sun::security::util::Debug::args->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("all"))) == cVar2 )
		goto label_cond_14;
	return cVar0;
	// 124    .line 165
label_cond_14:
	if ( sun::security::util::Debug::args->indexOf(option) == cVar2 )
		goto label_cond_1d;
label_goto_1c:
	return cVar0;
label_cond_1d:
	cVar0 = cVar1;
	goto label_goto_1c;

}
// .method private static marshal(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::Debug::marshal(std::shared_ptr<java::lang::String> args)
{
	
	std::shared_ptr<java::lang::StringBuffer> target;
	std::shared_ptr<java::lang::StringBuffer> source;
	std::shared_ptr<java::lang::String> keyReg;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::regex::Matcher> matcher;
	std::shared_ptr<java::lang::StringBuffer> left;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "args"    # Ljava/lang/String;
	if ( !(args) )  
		goto label_cond_b1;
	target = std::make_shared<java::lang::StringBuffer>();
	//    .local v8, "target":Ljava/lang/StringBuffer;
	source = std::make_shared<java::lang::StringBuffer>(args);
	//    .local v7, "source":Ljava/lang/StringBuffer;
	keyReg = std::make_shared<java::lang::String>(std::make_shared<char[]>("[Pp][Ee][Rr][Mm][Ii][Ss][Ss][Ii][Oo][Nn]="));
	//    .local v0, "keyReg":Ljava/lang/String;
	//    .local v1, "keyStr":Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v6, "reg":Ljava/lang/String;
	//    .local v5, "pattern":Ljava/util/regex/Pattern;
	matcher = java::util::regex::Pattern::compile(cVar0->append(keyReg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[a-zA-Z_$][a-zA-Z0-9_$]*([.][a-zA-Z_$][a-zA-Z0-9_$]*)*")))->toString())->matcher(source);
	//    .local v4, "matcher":Ljava/util/regex/Matcher;
	left = std::make_shared<java::lang::StringBuffer>();
	//    .local v2, "left":Ljava/lang/StringBuffer;
label_goto_34:
	if ( !(matcher->find()) )  
		goto label_cond_52;
	//    .local v3, "matched":Ljava/lang/String;
	target->append(matcher->group()->replaceFirst(keyReg, std::make_shared<java::lang::String>(std::make_shared<char[]>("permission="))));
	target->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")));
	matcher->appendReplacement(left, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	goto label_goto_34;
	// 246    .line 262
	// 247    .end local v3    # "matched":Ljava/lang/String;
label_cond_52:
	matcher->appendTail(left);
	left;
	keyReg = std::make_shared<java::lang::String>(std::make_shared<char[]>("[Cc][Oo][Dd][Ee][Bb][Aa][Ss][Ee]="));
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	matcher = java::util::regex::Pattern::compile(cVar1->append(keyReg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[^, ;]*")))->toString())->matcher(left);
	//    .end local v2    # "left":Ljava/lang/StringBuffer;
	left = std::make_shared<java::lang::StringBuffer>();
	//    .restart local v2    # "left":Ljava/lang/StringBuffer;
label_goto_7d:
	if ( !(matcher->find()) )  
		goto label_cond_9b;
	//    .restart local v3    # "matched":Ljava/lang/String;
	target->append(matcher->group()->replaceFirst(keyReg, std::make_shared<java::lang::String>(std::make_shared<char[]>("codebase="))));
	target->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")));
	matcher->appendReplacement(left, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	goto label_goto_7d;
	// 329    .line 286
	// 330    .end local v3    # "matched":Ljava/lang/String;
label_cond_9b:
	matcher->appendTail(left);
	left;
	target->append(left->toString()->toLowerCase(java::util::Locale::ENGLISH));
	return target->toString();
	// 357    .line 295
	// 358    .end local v0    # "keyReg":Ljava/lang/String;
	// 359    .end local v1    # "keyStr":Ljava/lang/String;
	// 360    .end local v2    # "left":Ljava/lang/StringBuffer;
	// 361    .end local v4    # "matcher":Ljava/util/regex/Matcher;
	// 362    .end local v5    # "pattern":Ljava/util/regex/Pattern;
	// 363    .end local v6    # "reg":Ljava/lang/String;
	// 364    .end local v7    # "source":Ljava/lang/StringBuffer;
	// 365    .end local v8    # "target":Ljava/lang/StringBuffer;
label_cond_b1:
	return 0x0;

}
// .method public static toHexString(Ljava/math/BigInteger;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::Debug::toHexString(std::shared_ptr<java::math::BigInteger> b)
{
	
	std::shared_ptr<java::lang::String> hexValue;
	std::shared_ptr<java::lang::StringBuffer> buf;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	int i;
	
	//    .param p0, "b"    # Ljava/math/BigInteger;
	hexValue = b->toString(0x10);
	//    .local v1, "hexValue":Ljava/lang/String;
	buf = std::make_shared<java::lang::StringBuffer>(( hexValue->length() * 0x2));
	//    .local v0, "buf":Ljava/lang/StringBuffer;
	if ( !(hexValue->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))) )  
		goto label_cond_64;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   -")));
	hexValue = hexValue->substring(0x1);
label_goto_25:
	if ( !(( hexValue->length() % 0x2)) )  
		goto label_cond_41;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	hexValue = cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("0")))->append(hexValue)->toString();
label_cond_41:
	i = 0x0;
	//    .local v2, "i":I
label_cond_42:
label_goto_42:
	if ( i >= hexValue->length() )
		goto label_cond_76;
	buf->append(hexValue->substring(i, ( i + 0x2)));
	i = ( i + 0x2);
	if ( i == hexValue->length() )
		goto label_cond_42;
	if ( ( i % 0x40) )     
		goto label_cond_6b;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n    ")));
	goto label_goto_42;
	// 490    .line 213
	// 491    .end local v2    # "i":I
label_cond_64:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("    ")));
	goto label_goto_25;
	// 499    .line 227
	// 500    .restart local v2    # "i":I
label_cond_6b:
	if ( ( i % 0x8) )     
		goto label_cond_42;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")));
	goto label_goto_42;
	// 513    .line 232
label_cond_76:
	return buf->toString();

}
// .method public static toString([B)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::Debug::toString(std::shared_ptr<unsigned char[]> b)
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	int k;
	
	//    .param p0, "b"    # [B
	if ( b )     
		goto label_cond_6;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("(null)"));
	// 535    .line 304
label_cond_6:
	sb = std::make_shared<java::lang::StringBuilder>(( b->size() * 0x3));
	//    .local v2, "sb":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v0, "i":I
label_goto_f:
	if ( i >= b->size() )
		goto label_cond_32;
	k = ( b[i] & 0xff);
	//    .local v1, "k":I
	if ( !(i) )  
		goto label_cond_1d;
	sb->append(0x3a);
label_cond_1d:
	sb->append(sun::security::util::Debug::hexDigits[_ushri(k,0x4)]);
	sb->append(sun::security::util::Debug::hexDigits[( k & 0xf)]);
	i = ( i + 0x1);
	goto label_goto_f;
	// 593    .line 313
	// 594    .end local v1    # "k":I
label_cond_32:
	return sb->toString();

}
// .method public println()V
void sun::security::util::Debug::println()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::err->println(cVar0->append(this->prefix)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")))->toString());
	return;

}
// .method public println(Ljava/lang/String;)V
void sun::security::util::Debug::println(std::shared_ptr<java::lang::String> message)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "message"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::err->println(cVar0->append(this->prefix)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": ")))->append(message)->toString());
	return;

}


