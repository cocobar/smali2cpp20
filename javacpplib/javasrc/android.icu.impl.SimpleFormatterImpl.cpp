// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\SimpleFormatterImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::impl::SimpleFormatterImpl::_assertionsDisabled;
static android::icu::impl::SimpleFormatterImpl::ARG_NUM_LIMIT = 0x100;
static android::icu::impl::SimpleFormatterImpl::COMMON_PATTERNS;
static android::icu::impl::SimpleFormatterImpl::LEN1_CHAR = '\u0101';
static android::icu::impl::SimpleFormatterImpl::LEN2_CHAR = '\u0102';
static android::icu::impl::SimpleFormatterImpl::LEN3_CHAR = '\u0103';
static android::icu::impl::SimpleFormatterImpl::MAX_SEGMENT_LENGTH = 0xfeff;
static android::icu::impl::SimpleFormatterImpl::SEGMENT_LENGTH_ARGUMENT_CHAR = '\uffff';
// .method static constructor <clinit>()V
void android::icu::impl::SimpleFormatterImpl::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared<std::vector<std::vector<std::vector<java::lang::String>>>> cVar3;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar7;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	android::icu::impl::SimpleFormatterImpl::_assertionsDisabled = ( android::icu::impl::SimpleFormatterImpl()->desiredAssertionStatus() ^ 0x1);
	cVar3 = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(0x4);
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar4[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} {1}"));
	cVar4[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u0002\u0000\u0101 \u0001"));
	cVar3[cVar2] = cVar4;
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} ({1})"));
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u0002\u0000\u0102 (\u0001\u0101)"));
	cVar3[cVar1] = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("{0}, {1}"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u0002\u0000\u0102, \u0001"));
	cVar3[cVar0] = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar7[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} \u2013 {1}"));
	cVar7[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u0002\u0000\u0103 \u2013 \u0001"));
	cVar3[0x3] = cVar7;
	android::icu::impl::SimpleFormatterImpl::COMMON_PATTERNS = cVar3;
	return;

}
// .method private constructor <init>()V
android::icu::impl::SimpleFormatterImpl::SimpleFormatterImpl()
{
	
	// 116    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static compileToStringMinMaxArguments(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::SimpleFormatterImpl::compileToStringMinMaxArguments(std::shared_ptr<java::lang::CharSequence> pattern,std::shared_ptr<java::lang::StringBuilder> sb,int min,int max)
{
	
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> cVar0;
	int cVar1;
	auto pair;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int patternLength;
	int textLength;
	int maxArg;
	int inQuote;
	int i;
	char c;
	int argNumber;
	int argStart;
	int c;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	int argCount;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	
	//    .param p0, "pattern"    # Ljava/lang/CharSequence;
	//    .param p1, "sb"    # Ljava/lang/StringBuilder;
	//    .param p2, "min"    # I
	//    .param p3, "max"    # I
	if ( min >  0x2 )
		goto label_cond_37;
	if ( 0x2 >  max )
		goto label_cond_37;
	cVar0 = android::icu::impl::SimpleFormatterImpl::COMMON_PATTERNS;
	cVar1 = 0x0;
label_goto_e:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_37;
	pair = cVar0[cVar1];
	//    .local v9, "pair":[Ljava/lang/String;
	if ( !(pair[0x0]->contentEquals({Reg[1].in.name})) )  
		goto label_cond_34;
	if ( android::icu::impl::SimpleFormatterImpl::_assertionsDisabled )     
		goto label_cond_30;
	if ( pair[0x1]->charAt(0x0) == 0x2 )
		goto label_cond_30;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 191    .line 80
label_cond_30:
	return pair[0x1];
	// 199    .line 77
label_cond_34:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_e;
	// 205    .line 87
	// 206    .end local v9    # "pair":[Ljava/lang/String;
label_cond_37:
	patternLength = pattern->length();
	//    .local v10, "patternLength":I
	sb->ensureCapacity(patternLength);
	sb->setLength(0x1);
	textLength = 0x0;
	//    .local v11, "textLength":I
	maxArg = -0x1;
	//    .local v8, "maxArg":I
	inQuote = 0x0;
	//    .local v7, "inQuote":Z
	i = 0x0;
	//    .local v5, "i":I
	i = i;
	//    .end local v5    # "i":I
	//    .local v6, "i":I
label_goto_4b:
	if ( i >= patternLength )
		goto label_cond_14c;
	i = ( i + 0x1);
	//    .end local v6    # "i":I
	//    .restart local v5    # "i":I
	c = pattern->charAt(i);
	//    .local v4, "c":C
	if ( c != 0x27 )
		goto label_cond_93;
	if ( i >= patternLength )
		goto label_cond_80;
	c = pattern->charAt(i);
	if ( c != 0x27 )
		goto label_cond_80;
	i = ( i + 0x1);
	//    .end local v4    # "c":C
label_cond_67:
label_goto_67:
	if ( textLength )     
		goto label_cond_71;
	sb->append(0xffff);
label_cond_71:
	sb->append(c);
	textLength = ( textLength + 0x1);
	if ( textLength != 0xfeff )
		goto label_cond_7e;
	textLength = 0x0;
label_cond_7e:
label_goto_7e:
	i = i;
	//    .end local v5    # "i":I
	//    .restart local v6    # "i":I
	goto label_goto_4b;
	// 318    .line 100
	// 319    .end local v6    # "i":I
	// 320    .restart local v4    # "c":C
	// 321    .restart local v5    # "i":I
label_cond_80:
	if ( !(inQuote) )  
		goto label_cond_84;
	inQuote = 0x0;
	goto label_goto_7e;
	// 331    .line 104
label_cond_84:
	if ( c == 0x7b )
		goto label_cond_8c;
	if ( c != 0x7d )
		goto label_cond_90;
label_cond_8c:
	i = ( i + 0x1);
	inQuote = 0x1;
	goto label_goto_67;
	// 351    .line 110
label_cond_90:
	//    .local v4, "c":C
	goto label_goto_67;
	// 358    .line 112
	// 359    .local v4, "c":C
label_cond_93:
	if ( inQuote )     
		goto label_cond_67;
	if ( c != 0x7b )
		goto label_cond_67;
	if ( textLength <= 0 )
		goto label_cond_ab;
	sb->setCharAt(( (sb->length() -  textLength) + -0x1), (char)(( textLength + 0x100)));
	textLength = 0x0;
label_cond_ab:
	if ( ( i + 0x1) >= patternLength )
		goto label_cond_d5;
	argNumber = ( pattern->charAt(i) + -0x30);
	//    .local v2, "argNumber":I
	if ( argNumber < 0 ) 
		goto label_cond_d5;
	if ( argNumber >  0x9 )
		goto label_cond_d5;
	if ( pattern->charAt(( i + 0x1)) != 0x7d )
		goto label_cond_d5;
	i = ( i + 0x2);
label_cond_cb:
	if ( argNumber <= maxArg )
		goto label_cond_ce;
	maxArg = argNumber;
label_cond_ce:
	sb->append((char)(argNumber));
	goto label_goto_7e;
	// 445    .line 126
	// 446    .end local v2    # "argNumber":I
label_cond_d5:
	argStart = ( i + -0x1);
	//    .local v3, "argStart":I
	//    .restart local v2    # "argNumber":I
	if ( i >= patternLength )
		goto label_cond_108;
	i = ( i + 0x1);
	//    .end local v5    # "i":I
	//    .restart local v6    # "i":I
	c = pattern->charAt(i);
	if ( 0x31 >  c )
		goto label_cond_146;
	if ( c >  0x39 )
		goto label_cond_146;
	argNumber = ( c + -0x30);
label_goto_ec:
	if ( i >= patternLength )
		goto label_cond_148;
	i = ( i + 0x1);
	//    .end local v6    # "i":I
	//    .restart local v5    # "i":I
	c = pattern->charAt(i);
	if ( 0x30 >  c )
		goto label_cond_108;
	if ( c >  0x39 )
		goto label_cond_108;
	argNumber = (( argNumber * 0xa) + ( c + -0x30));
	if ( argNumber <  0x100 )
		goto label_cond_14a;
label_cond_108:
label_goto_108:
	if ( -0x1 < 0 ) 
		goto label_cond_10e;
	if ( c == 0x7d )
		goto label_cond_cb;
label_cond_10e:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument syntax error in pattern \")))->append(pattern)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->append(argStart)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": ")))->append(pattern->subSequence(argStart, i))->toString());
	// throw
	throw cVar4;
	// 584    .end local v5    # "i":I
	// 585    .restart local v6    # "i":I
label_cond_146:
	i = i;
	//    .end local v6    # "i":I
	//    .restart local v5    # "i":I
	goto label_goto_108;
	// 594    .end local v5    # "i":I
	// 595    .restart local v6    # "i":I
label_cond_148:
	i = i;
	//    .end local v6    # "i":I
	//    .restart local v5    # "i":I
	goto label_goto_108;
label_cond_14a:
	i = i;
	//    .end local v5    # "i":I
	//    .restart local v6    # "i":I
	goto label_goto_ec;
	// 611    .line 160
	// 612    .end local v2    # "argNumber":I
	// 613    .end local v3    # "argStart":I
	// 614    .end local v4    # "c":C
label_cond_14c:
	if ( textLength <= 0 )
		goto label_cond_15d;
	sb->setCharAt(( (sb->length() -  textLength) + -0x1), (char)(( textLength + 0x100)));
label_cond_15d:
	argCount = ( maxArg + 0x1);
	//    .local v1, "argCount":I
	if ( argCount >= min )
		goto label_cond_193;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Fewer than minimum ")))->append(min)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" arguments in pattern \")))->append(pattern)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar6;
	// 692    .line 168
label_cond_193:
	if ( argCount <= max )
		goto label_cond_1c7;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::lang::IllegalArgumentException>(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("More than maximum ")))->append(max)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" arguments in pattern \")))->append(pattern)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar8;
	// 745    .line 172
label_cond_1c7:
	sb->setCharAt(0x0, (char)(argCount));
	return sb->toString();

}
// .method private static format(Ljava/lang/String;[Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Ljava/lang/String;Z[I)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::SimpleFormatterImpl::format(std::shared_ptr<java::lang::String> compiledPattern,std::shared_ptr<std::vector<java::lang::CharSequence>> values,std::shared_ptr<java::lang::StringBuilder> result,std::shared_ptr<java::lang::String> resultCopy,bool forbidResultAsValue,std::shared_ptr<int[]> offsets)
{
	
	int offsetsLength;
	int i;
	int n;
	std::shared_ptr<java::lang::CharSequence> value;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int limit;
	
	//    .param p0, "compiledPattern"    # Ljava/lang/String;
	//    .param p1, "values"    # [Ljava/lang/CharSequence;
	//    .param p2, "result"    # Ljava/lang/StringBuilder;
	//    .param p3, "resultCopy"    # Ljava/lang/String;
	//    .param p4, "forbidResultAsValue"    # Z
	//    .param p5, "offsets"    # [I
	if ( offsets )     
		goto label_cond_23;
	offsetsLength = 0x0;
	//    .local v4, "offsetsLength":I
label_cond_3:
	i = 0x1;
	//    .local v0, "i":I
label_goto_4:
	if ( i >= compiledPattern->length() )
		goto label_cond_5a;
	i = ( i + 0x1);
	//    .end local v0    # "i":I
	//    .local v1, "i":I
	n = compiledPattern->charAt(i);
	//    .local v3, "n":I
	if ( n >= 0x100 )
		goto label_cond_51;
	value = values[n];
	//    .local v5, "value":Ljava/lang/CharSequence;
	if ( value != result )
		goto label_cond_44;
	if ( !(forbidResultAsValue) )  
		goto label_cond_2d;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Value must not be same object as result")));
	// throw
	throw cVar0;
	// 826    .line 316
	// 827    .end local v1    # "i":I
	// 828    .end local v3    # "n":I
	// 829    .end local v4    # "offsetsLength":I
	// 830    .end local v5    # "value":Ljava/lang/CharSequence;
label_cond_23:
	//    .restart local v4    # "offsetsLength":I
	i = 0x0;
	//    .restart local v0    # "i":I
label_goto_25:
	if ( i >= offsets->size() )
		goto label_cond_3;
	offsets[i] = -0x1;
	i = ( i + 0x1);
	goto label_goto_25;
	// 852    .line 329
	// 853    .end local v0    # "i":I
	// 854    .restart local v1    # "i":I
	// 855    .restart local v3    # "n":I
	// 856    .restart local v5    # "value":Ljava/lang/CharSequence;
label_cond_2d:
	if ( i != 0x2 )
		goto label_cond_37;
	if ( n >= offsetsLength )
		goto label_cond_5b;
	offsets[n] = 0x0;
	i = i;
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	goto label_goto_4;
	// 876    .line 335
	// 877    .end local v0    # "i":I
	// 878    .restart local v1    # "i":I
label_cond_37:
	if ( n >= offsetsLength )
		goto label_cond_3f;
	offsets[n] = result->length();
label_cond_3f:
	result->append(resultCopy);
	i = i;
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	goto label_goto_4;
	// 899    .line 341
	// 900    .end local v0    # "i":I
	// 901    .restart local v1    # "i":I
label_cond_44:
	if ( n >= offsetsLength )
		goto label_cond_4c;
	offsets[n] = result->length();
label_cond_4c:
	result->append(value);
	i = i;
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	goto label_goto_4;
	// 922    .line 347
	// 923    .end local v0    # "i":I
	// 924    .end local v5    # "value":Ljava/lang/CharSequence;
	// 925    .restart local v1    # "i":I
label_cond_51:
	limit = (i + ( n + -0x100));
	//    .local v2, "limit":I
	result->append(compiledPattern, i, limit);
	i = limit;
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	goto label_goto_4;
	// 942    .line 352
	// 943    .end local v2    # "limit":I
	// 944    .end local v3    # "n":I
label_cond_5a:
	return result;
	// 948    .end local v0    # "i":I
	// 949    .restart local v1    # "i":I
	// 950    .restart local v3    # "n":I
	// 951    .restart local v5    # "value":Ljava/lang/CharSequence;
label_cond_5b:
	i = i;
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	goto label_goto_4;

}
// .method public static varargs formatAndAppend(Ljava/lang/String;Ljava/lang/StringBuilder;[I[Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::SimpleFormatterImpl::formatAndAppend(std::shared_ptr<java::lang::String> compiledPattern,std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<int[]> offsets,std::shared_ptr<std::vector<java::lang::CharSequence>> values)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "compiledPattern"    # Ljava/lang/String;
	//    .param p1, "appendTo"    # Ljava/lang/StringBuilder;
	//    .param p2, "offsets"    # [I
	//    .param p3, "values"    # [Ljava/lang/CharSequence;
	if ( !(values) )  
		goto label_cond_13;
	//    .local v6, "valuesLength":I
label_goto_4:
	if ( valuesLength >= android::icu::impl::SimpleFormatterImpl::getArgumentLimit(compiledPattern) )
		goto label_cond_15;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Too few values.")));
	// throw
	throw cVar0;
	// 993    .line 229
	// 994    .end local v6    # "valuesLength":I
label_cond_13:
	//    .restart local v6    # "valuesLength":I
	goto label_goto_4;
	// 1001    .line 233
label_cond_15:
	return android::icu::impl::SimpleFormatterImpl::format(compiledPattern, values, appendTo, 0x0, 0x1, offsets);

}
// .method public static varargs formatAndReplace(Ljava/lang/String;Ljava/lang/StringBuilder;[I[Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::SimpleFormatterImpl::formatAndReplace(std::shared_ptr<java::lang::String> compiledPattern,std::shared_ptr<java::lang::StringBuilder> result,std::shared_ptr<int[]> offsets,std::shared_ptr<std::vector<java::lang::CharSequence>> values)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::String> resultCopy;
	int i;
	int n;
	
	//    .param p0, "compiledPattern"    # Ljava/lang/String;
	//    .param p1, "result"    # Ljava/lang/StringBuilder;
	//    .param p2, "offsets"    # [I
	//    .param p3, "values"    # [Ljava/lang/CharSequence;
	cVar0 = 0x0;
	if ( !(values) )  
		goto label_cond_13;
	//    .local v10, "valuesLength":I
label_goto_4:
	if ( valuesLength >= android::icu::impl::SimpleFormatterImpl::getArgumentLimit(compiledPattern) )
		goto label_cond_15;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Too few values.")));
	// throw
	throw cVar1;
	// 1053    .line 254
	// 1054    .end local v10    # "valuesLength":I
label_cond_13:
	//    .restart local v10    # "valuesLength":I
	goto label_goto_4;
	// 1061    .line 262
label_cond_15:
	//    .local v6, "firstArg":I
	resultCopy = 0x0;
	//    .local v3, "resultCopy":Ljava/lang/String;
	if ( android::icu::impl::SimpleFormatterImpl::getArgumentLimit(compiledPattern) <= 0 )
		goto label_cond_45;
	i = 0x1;
	//    .end local v3    # "resultCopy":Ljava/lang/String;
	//    .local v7, "i":I
label_goto_1e:
	if ( i >= compiledPattern->length() )
		goto label_cond_45;
	i = ( i + 0x1);
	//    .end local v7    # "i":I
	//    .local v8, "i":I
	n = compiledPattern->charAt(i);
	//    .local v9, "n":I
	if ( n >= 0x100 )
		goto label_cond_40;
	if ( values[n] != result )
		goto label_cond_53;
	if ( i != 0x2 )
		goto label_cond_38;
	n;
	i = i;
	//    .end local v8    # "i":I
	//    .restart local v7    # "i":I
	goto label_goto_1e;
	// 1123    .line 273
	// 1124    .end local v7    # "i":I
	// 1125    .restart local v8    # "i":I
label_cond_38:
	if ( resultCopy )     
		goto label_cond_53;
	//    .local v3, "resultCopy":Ljava/lang/String;
	i = i;
	//    .end local v8    # "i":I
	//    .restart local v7    # "i":I
	goto label_goto_1e;
	// 1141    .line 278
	// 1142    .end local v3    # "resultCopy":Ljava/lang/String;
	// 1143    .end local v7    # "i":I
	// 1144    .restart local v8    # "i":I
label_cond_40:
	i = (i + ( n + -0x100));
	//    .end local v8    # "i":I
	//    .restart local v7    # "i":I
	goto label_goto_1e;
	// 1154    .line 282
	// 1155    .end local v7    # "i":I
	// 1156    .end local v9    # "n":I
label_cond_45:
	if ( -0x1 >= 0 )
		goto label_cond_4a;
	result->setLength(cVar0);
label_cond_4a:
	return android::icu::impl::SimpleFormatterImpl::format(compiledPattern, values, result, resultCopy, cVar0, offsets);
	// 1179    .restart local v8    # "i":I
	// 1180    .restart local v9    # "n":I
label_cond_53:
	i = i;
	//    .end local v8    # "i":I
	//    .restart local v7    # "i":I
	goto label_goto_1e;

}
// .method public static varargs formatCompiledPattern(Ljava/lang/String;[Ljava/lang/CharSequence;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::SimpleFormatterImpl::formatCompiledPattern(std::shared_ptr<java::lang::String> compiledPattern,std::shared_ptr<std::vector<java::lang::CharSequence>> values)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "compiledPattern"    # Ljava/lang/String;
	//    .param p1, "values"    # [Ljava/lang/CharSequence;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return android::icu::impl::SimpleFormatterImpl::formatAndAppend(compiledPattern, cVar0, 0x0, values)->toString();

}
// .method public static varargs formatRawPattern(Ljava/lang/String;II[Ljava/lang/CharSequence;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::SimpleFormatterImpl::formatRawPattern(std::shared_ptr<java::lang::String> pattern,int min,int max,std::shared_ptr<std::vector<java::lang::CharSequence>> values)
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	//    .param p0, "pattern"    # Ljava/lang/String;
	//    .param p1, "min"    # I
	//    .param p2, "max"    # I
	//    .param p3, "values"    # [Ljava/lang/CharSequence;
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "sb":Ljava/lang/StringBuilder;
	//    .local v0, "compiledPattern":Ljava/lang/String;
	sb->setLength(0x0);
	return android::icu::impl::SimpleFormatterImpl::formatAndAppend(android::icu::impl::SimpleFormatterImpl::compileToStringMinMaxArguments(pattern, sb, min, max), sb, 0x0, values)->toString();

}
// .method public static getArgumentLimit(Ljava/lang/String;)I
int android::icu::impl::SimpleFormatterImpl::getArgumentLimit(std::shared_ptr<java::lang::String> compiledPattern)
{
	
	//    .param p0, "compiledPattern"    # Ljava/lang/String;
	return compiledPattern->charAt(0x0);

}
// .method public static getTextWithNoArguments(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::SimpleFormatterImpl::getTextWithNoArguments(std::shared_ptr<java::lang::String> compiledPattern)
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	int segmentLength;
	int limit;
	
	//    .param p0, "compiledPattern"    # Ljava/lang/String;
	//    .local v0, "capacity":I
	sb = std::make_shared<java::lang::StringBuilder>((( compiledPattern->length() + -0x1) - android::icu::impl::SimpleFormatterImpl::getArgumentLimit(compiledPattern)));
	//    .local v4, "sb":Ljava/lang/StringBuilder;
	i = 0x1;
	//    .local v1, "i":I
label_goto_12:
	if ( i >= compiledPattern->length() )
		goto label_cond_29;
	i = ( i + 0x1);
	//    .end local v1    # "i":I
	//    .local v2, "i":I
	segmentLength = ( compiledPattern->charAt(i) + -0x100);
	//    .local v5, "segmentLength":I
	if ( segmentLength <= 0 )
		goto label_cond_2e;
	limit = (i + segmentLength);
	//    .local v3, "limit":I
	sb->append(compiledPattern, i, limit);
	i = limit;
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_12;
	// 1332    .line 305
	// 1333    .end local v3    # "limit":I
	// 1334    .end local v5    # "segmentLength":I
label_cond_29:
	return sb->toString();
	// 1342    .end local v1    # "i":I
	// 1343    .restart local v2    # "i":I
	// 1344    .restart local v5    # "segmentLength":I
label_cond_2e:
	i = i;
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_12;

}


