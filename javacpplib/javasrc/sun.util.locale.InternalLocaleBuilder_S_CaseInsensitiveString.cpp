// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\InternalLocaleBuilder$CaseInsensitiveString.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.util.locale.InternalLocaleBuilder_S_CaseInsensitiveString.h"
#include "sun.util.locale.LocaleUtils.h"

// .method constructor <init>(Ljava/lang/String;)V
sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString::InternalLocaleBuilder_S_CaseInsensitiveString(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	// 030    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->str = s;
	this->lowerStr = sun::util::locale::LocaleUtils::toLowerString(s);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 061    .line 691
label_cond_4:
	if ( obj->instanceOf("sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString") )     
		goto label_cond_a;
	return 0x0;
	// 072    .line 694
label_cond_a:
	obj->checkCast("sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString");
	//    .end local p1    # "obj":Ljava/lang/Object;
	return this->lowerStr->equals(obj->lowerStr);

}
// .method public hashCode()I
int sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString::hashCode()
{
	
	return this->lowerStr->hashCode();

}
// .method public value()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString::value()
{
	
	return this->str;

}


