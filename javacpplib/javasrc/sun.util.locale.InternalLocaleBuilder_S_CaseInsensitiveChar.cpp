// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\InternalLocaleBuilder$CaseInsensitiveChar.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.util.locale.InternalLocaleBuilder_S_CaseInsensitiveChar.h"
#include "sun.util.locale.LocaleUtils.h"

// .method constructor <init>(C)V
sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar::InternalLocaleBuilder_S_CaseInsensitiveChar(char c)
{
	
	//    .param p1, "c"    # C
	// 030    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->ch = c;
	this->lowerCh = sun::util::locale::LocaleUtils::toLower(this->ch);
	return;

}
// .method private constructor <init>(Ljava/lang/String;)V
sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar::InternalLocaleBuilder_S_CaseInsensitiveChar(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar::(s->charAt(0x0));
	return;

}
// .method synthetic constructor <init>(Ljava/lang/String;Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar;)V
sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar::InternalLocaleBuilder_S_CaseInsensitiveChar(std::shared_ptr<java::lang::String> s,std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> _this1)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "-this1"    # Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar;
	sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar::(s);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return cVar0;
	// 094    .line 728
label_cond_5:
	if ( obj->instanceOf("sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar") )     
		goto label_cond_a;
	return cVar1;
	// 103    .line 731
label_cond_a:
	obj->checkCast("sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar");
	//    .end local p1    # "obj":Ljava/lang/Object;
	if ( this->lowerCh != obj->lowerCh )
		goto label_cond_13;
label_goto_12:
	return cVar0;
label_cond_13:
	cVar0 = cVar1;
	goto label_goto_12;

}
// .method public hashCode()I
int sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar::hashCode()
{
	
	return this->lowerCh;

}
// .method public value()C
char sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar::value()
{
	
	return this->ch;

}


