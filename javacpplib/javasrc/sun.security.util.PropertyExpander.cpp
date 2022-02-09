// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\PropertyExpander.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.net.URI.h"
#include "java.net.URISyntaxException.h"
#include "sun.net.www.ParseUtil.h"
#include "sun.security.util.PropertyExpander_S_ExpandException.h"
#include "sun.security.util.PropertyExpander.h"

// .method public constructor <init>()V
sun::security::util::PropertyExpander::PropertyExpander()
{
	
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static expand(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::PropertyExpander::expand(std::shared_ptr<java::lang::String> value)
{
	
	//    .param p0, "value"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 029        value = {
	// 030            Lsun/security/util/PropertyExpander$ExpandException;
	// 031        }
	// 032    .end annotation
	return sun::security::util::PropertyExpander::expand(value, 0x0);

}
// .method public static expand(Ljava/lang/String;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::PropertyExpander::expand(std::shared_ptr<java::lang::String> value,bool encodeURL)
{
	
	int cVar0;
	int p;
	std::shared_ptr<java::lang::StringBuffer> sb;
	int max;
	int i;
	int pe;
	std::shared_ptr<java::lang::String> prop;
	std::shared_ptr<java::lang::String> val;
	std::shared_ptr<java::net::URI> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::util::PropertyExpander_S_ExpandException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p0, "value"    # Ljava/lang/String;
	//    .param p1, "encodeURL"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 050        value = {
	// 051            Lsun/security/util/PropertyExpander$ExpandException;
	// 052        }
	// 053    .end annotation
	cVar0 = -0x1;
	if ( value )     
		goto label_cond_6;
	return 0x0;
	// 068    .line 65
label_cond_6:
	p = value->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("${")), 0x0);
	//    .local v2, "p":I
	if ( p != cVar0 )
		goto label_cond_10;
	return value;
	// 082    .line 70
label_cond_10:
	sb = std::make_shared<java::lang::StringBuffer>(value->length());
	//    .local v5, "sb":Ljava/lang/StringBuffer;
	max = value->length();
	//    .local v1, "max":I
	i = 0x0;
	//    .local v0, "i":I
label_cond_1e:
	if ( p >= max )
		goto label_cond_4a;
	if ( p <= i )
		goto label_cond_2a;
	sb->append(value->substring(i, p));
	p;
label_cond_2a:
	pe = ( p + 0x2);
	//    .local v3, "pe":I
	if ( pe >= max )
		goto label_cond_6f;
	if ( value->charAt(pe) != 0x7b )
		goto label_cond_6f;
	pe = value->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("}}")), pe);
	if ( pe == cVar0 )
		goto label_cond_43;
	if ( ( pe + 0x2) != max )
		goto label_cond_4f;
label_cond_43:
	sb->append(value->substring(p));
	//    .end local v3    # "pe":I
label_cond_4a:
label_goto_4a:
	return sb->toString();
	// 168    .line 92
	// 169    .restart local v3    # "pe":I
label_cond_4f:
	pe = ( pe + 0x1);
	sb->append(value->substring(p, ( pe + 0x1)));
label_goto_5a:
	i = ( pe + 0x1);
	p = value->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("${")), i);
	if ( p != cVar0 )
		goto label_cond_1e;
	if ( i >= max )
		goto label_cond_4a;
	sb->append(value->substring(i, max));
	goto label_goto_4a;
	// 208    .line 96
label_cond_6f:
label_goto_6f:
	if ( pe >= max )
		goto label_cond_7c;
	if ( value->charAt(pe) == 0x7d )
		goto label_cond_7c;
	pe = ( pe + 0x1);
	goto label_goto_6f;
	// 226    .line 99
label_cond_7c:
	if ( pe != max )
		goto label_cond_86;
	sb->append(value->substring(p, pe));
	goto label_goto_4a;
	// 239    .line 104
label_cond_86:
	prop = value->substring(( p + 0x2), pe);
	//    .local v4, "prop":Ljava/lang/String;
	if ( !(prop->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))) )  
		goto label_cond_9b;
	sb->append(java::io::File::separatorChar);
	goto label_goto_5a;
	// 264    .line 108
label_cond_9b:
	val = java::lang::System::getProperty(prop);
	//    .local v7, "val":Ljava/lang/String;
	if ( !(val) )  
		goto label_cond_c4;
	if ( !(encodeURL) )  
		goto label_cond_ba;
	try {
	//label_try_start_a3:
	if ( sb->length() > 0 ) 
		goto label_cond_b6;
	cVar1 = std::make_shared<java::net::URI>(val);
	if ( !(( cVar1->isAbsolute() ^ 0x1)) )  
		goto label_cond_ba;
label_cond_b6:
	//label_try_end_b9:
	}
	catch (java::net::URISyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_be;
	}
	//    .catch Ljava/net/URISyntaxException; {:try_start_a3 .. :try_end_b9} :catch_be
	val = sun::net::www::ParseUtil::encodePath(val);
label_cond_ba:
label_goto_ba:
	sb->append(val);
	goto label_goto_5a;
	// 314    .line 118
label_catch_be:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v6, "use":Ljava/net/URISyntaxException;
	val = sun::net::www::ParseUtil::encodePath(val);
	goto label_goto_ba;
	// 326    .line 124
	// 327    .end local v6    # "use":Ljava/net/URISyntaxException;
label_cond_c4:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<sun::security::util::PropertyExpander_S_ExpandException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unable to expand property ")))->append(prop)->toString());
	// throw
	throw cVar2;

}


