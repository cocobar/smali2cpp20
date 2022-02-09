// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\CaseInsensitiveString.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.util.CaseInsensitiveString.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;)V
android::icu::util::CaseInsensitiveString::CaseInsensitiveString(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	// 021    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hash = 0x0;
	this->folded = 0x0;
	this->string = s;
	return;

}
// .method private static foldCase(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::CaseInsensitiveString::foldCase(std::shared_ptr<java::lang::String> foldee)
{
	
	//    .param p0, "foldee"    # Ljava/lang/String;
	return android::icu::lang::UCharacter::foldCase(foldee, 0x1);

}
// .method private getFolded()V
void android::icu::util::CaseInsensitiveString::getFolded()
{
	
	if ( this->folded )     
		goto label_cond_c;
	this->folded = android::icu::util::CaseInsensitiveString::foldCase(this->string);
label_cond_c:
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::CaseInsensitiveString::equals(std::shared_ptr<java::lang::Object> o)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cis;
	
	//    .param p1, "o"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( o )     
		goto label_cond_4;
	return cVar0;
	// 093    .line 62
label_cond_4:
	if ( this != o )
		goto label_cond_8;
	return 0x1;
	// 102    .line 65
label_cond_8:
	if ( !(o->instanceOf("android::icu::util::CaseInsensitiveString")) )  
		goto label_cond_1e;
	this->getFolded();
	cis = o;
	cis->checkCast("android::icu::util::CaseInsensitiveString");
	//    .local v0, "cis":Landroid/icu/util/CaseInsensitiveString;
	cis->getFolded();
	return this->folded->equals(cis->folded);
	// 131    .line 71
	// 132    .end local v0    # "cis":Landroid/icu/util/CaseInsensitiveString;
label_cond_1e:
	return cVar0;

}
// .method public getString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::CaseInsensitiveString::getString()
{
	
	return this->string;

}
// .method public hashCode()I
int android::icu::util::CaseInsensitiveString::hashCode()
{
	
	this->getFolded();
	if ( this->hash )     
		goto label_cond_f;
	this->hash = this->folded->hashCode();
label_cond_f:
	return this->hash;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::CaseInsensitiveString::toString()
{
	
	return this->string;

}


