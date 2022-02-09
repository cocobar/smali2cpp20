// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\RelativeDateFormat$URelativeString.smali
#include "java2ctype.h"
#include "android.icu.impl.RelativeDateFormat_S_URelativeString.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"

// .method constructor <init>(ILjava/lang/String;)V
android::icu::impl::RelativeDateFormat_S_URelativeString::RelativeDateFormat_S_URelativeString(int offset,std::shared_ptr<java::lang::String> string)
{
	
	//    .param p1, "offset"    # I
	//    .param p2, "string"    # Ljava/lang/String;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->offset = offset;
	this->string = string;
	return;

}
// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::impl::RelativeDateFormat_S_URelativeString::RelativeDateFormat_S_URelativeString(std::shared_ptr<java::lang::String> offset,std::shared_ptr<java::lang::String> string)
{
	
	//    .param p1, "offset"    # Ljava/lang/String;
	//    .param p2, "string"    # Ljava/lang/String;
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->offset = java::lang::Integer::parseInt(offset);
	this->string = string;
	return;

}


