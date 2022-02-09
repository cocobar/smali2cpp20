// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormat$Unit.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormat_S_Unit.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::text::DecimalFormat_S_Unit::DecimalFormat_S_Unit(std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::lang::String> suffix)
{
	
	//    .param p1, "prefix"    # Ljava/lang/String;
	//    .param p2, "suffix"    # Ljava/lang/String;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->prefix = prefix;
	this->suffix = suffix;
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::DecimalFormat_S_Unit::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return 0x1;
	// 060    .line 6069
label_cond_5:
	if ( obj->instanceOf("android::icu::text::DecimalFormat_S_Unit") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	other = obj;
	other->checkCast("android::icu::text::DecimalFormat_S_Unit");
	//    .local v0, "other":Landroid/icu/text/DecimalFormat$Unit;
	if ( !(this->prefix->equals(other->prefix)) )  
		goto label_cond_1f;
	cVar1 = this->suffix->equals(other->suffix);
label_cond_1f:
	return cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormat_S_Unit::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->prefix)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(this->suffix)->toString();

}
// .method public writePrefix(Ljava/lang/StringBuffer;)V
void android::icu::text::DecimalFormat_S_Unit::writePrefix(std::shared_ptr<java::lang::StringBuffer> toAppendTo)
{
	
	//    .param p1, "toAppendTo"    # Ljava/lang/StringBuffer;
	toAppendTo->append(this->prefix);
	return;

}
// .method public writeSuffix(Ljava/lang/StringBuffer;)V
void android::icu::text::DecimalFormat_S_Unit::writeSuffix(std::shared_ptr<java::lang::StringBuffer> toAppendTo)
{
	
	//    .param p1, "toAppendTo"    # Ljava/lang/StringBuffer;
	toAppendTo->append(this->suffix);
	return;

}


