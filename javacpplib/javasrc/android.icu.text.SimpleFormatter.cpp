// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SimpleFormatter.smali
#include "java2ctype.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "android.icu.text.SimpleFormatter.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method private constructor <init>(Ljava/lang/String;)V
android::icu::text::SimpleFormatter::SimpleFormatter(std::shared_ptr<java::lang::String> compiledPattern)
{
	
	//    .param p1, "compiledPattern"    # Ljava/lang/String;
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->compiledPattern = compiledPattern;
	return;

}
// .method public static compile(Ljava/lang/CharSequence;)Landroid/icu/text/SimpleFormatter;
std::shared_ptr<android::icu::text::SimpleFormatter> android::icu::text::SimpleFormatter::compile(std::shared_ptr<java::lang::CharSequence> pattern)
{
	
	//    .param p0, "pattern"    # Ljava/lang/CharSequence;
	return android::icu::text::SimpleFormatter::compileMinMaxArguments(pattern, 0x0, 0x7fffffff);

}
// .method public static compileMinMaxArguments(Ljava/lang/CharSequence;II)Landroid/icu/text/SimpleFormatter;
std::shared_ptr<android::icu::text::SimpleFormatter> android::icu::text::SimpleFormatter::compileMinMaxArguments(std::shared_ptr<java::lang::CharSequence> pattern,int min,int max)
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<android::icu::text::SimpleFormatter> cVar0;
	
	//    .param p0, "pattern"    # Ljava/lang/CharSequence;
	//    .param p1, "min"    # I
	//    .param p2, "max"    # I
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "sb":Ljava/lang/StringBuilder;
	//    .local v0, "compiledPattern":Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::text::SimpleFormatter>(android::icu::impl::SimpleFormatterImpl::compileToStringMinMaxArguments(pattern, sb, min, max));
	return cVar0;

}
// .method public varargs format([Ljava/lang/CharSequence;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SimpleFormatter::format(std::shared_ptr<std::vector<java::lang::CharSequence>> values)
{
	
	//    .param p1, "values"    # [Ljava/lang/CharSequence;
	return android::icu::impl::SimpleFormatterImpl::formatCompiledPattern(this->compiledPattern, values);

}
// .method public varargs formatAndAppend(Ljava/lang/StringBuilder;[I[Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::SimpleFormatter::formatAndAppend(std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<int[]> offsets,std::shared_ptr<std::vector<java::lang::CharSequence>> values)
{
	
	//    .param p1, "appendTo"    # Ljava/lang/StringBuilder;
	//    .param p2, "offsets"    # [I
	//    .param p3, "values"    # [Ljava/lang/CharSequence;
	return android::icu::impl::SimpleFormatterImpl::formatAndAppend(this->compiledPattern, appendTo, offsets, values);

}
// .method public varargs formatAndReplace(Ljava/lang/StringBuilder;[I[Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::SimpleFormatter::formatAndReplace(std::shared_ptr<java::lang::StringBuilder> result,std::shared_ptr<int[]> offsets,std::shared_ptr<std::vector<java::lang::CharSequence>> values)
{
	
	//    .param p1, "result"    # Ljava/lang/StringBuilder;
	//    .param p2, "offsets"    # [I
	//    .param p3, "values"    # [Ljava/lang/CharSequence;
	return android::icu::impl::SimpleFormatterImpl::formatAndReplace(this->compiledPattern, result, offsets, values);

}
// .method public getArgumentLimit()I
int android::icu::text::SimpleFormatter::getArgumentLimit()
{
	
	return android::icu::impl::SimpleFormatterImpl::getArgumentLimit(this->compiledPattern);

}
// .method public getTextWithNoArguments()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SimpleFormatter::getTextWithNoArguments()
{
	
	return android::icu::impl::SimpleFormatterImpl::getTextWithNoArguments(this->compiledPattern);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SimpleFormatter::toString()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> values;
	int i;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	values = std::make_shared<std::vector<std::vector<java::lang::String>>>(this->getArgumentLimit());
	//    .local v1, "values":[Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( i >= values->size() )
		goto label_cond_29;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	values[i] = cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("{")))->append(i)->append(0x7d)->toString();
	i = ( i + 0x1);
	goto label_goto_7;
	// 202    .line 153
label_cond_29:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return this->formatAndAppend(cVar1, 0x0, values)->toString();

}


