// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\AsciiUtil.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>()V
android::icu::impl::locale::AsciiUtil::AsciiUtil()
{
	
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static caseIgnoreCompare(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::impl::locale::AsciiUtil::caseIgnoreCompare(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2)
{
	
	//    .param p0, "s1"    # Ljava/lang/String;
	//    .param p1, "s2"    # Ljava/lang/String;
	if ( !(android::icu::impl::Utility::sameObjects(s1, s2)) )  
		goto label_cond_8;
	return 0x0;
	// 043    .line 42
label_cond_8:
	return android::icu::impl::locale::AsciiUtil::toLowerString(s1)->compareTo(android::icu::impl::locale::AsciiUtil::toLowerString(s2));

}
// .method public static caseIgnoreMatch(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::impl::locale::AsciiUtil::caseIgnoreMatch(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2)
{
	
	bool cVar0;
	bool cVar1;
	int len;
	int i;
	char c1;
	char c2;
	
	//    .param p0, "s1"    # Ljava/lang/String;
	//    .param p1, "s2"    # Ljava/lang/String;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( !(android::icu::impl::Utility::sameObjects(s1, s2)) )  
		goto label_cond_9;
	return cVar0;
	// 080    .line 22
label_cond_9:
	len = s1->length();
	//    .local v3, "len":I
	if ( len == s2->length() )
		goto label_cond_14;
	return cVar1;
	// 097    .line 26
label_cond_14:
	i = 0x0;
	//    .local v2, "i":I
label_goto_15:
	if ( i >= len )
		goto label_cond_2b;
	c1 = s1->charAt(i);
	//    .local v0, "c1":C
	c2 = s2->charAt(i);
	//    .local v1, "c2":C
	if ( c1 == c2 )
		goto label_cond_2e;
	if ( android::icu::impl::locale::AsciiUtil::toLower(c1) == android::icu::impl::locale::AsciiUtil::toLower(c2) )
		goto label_cond_2e;
	//    .end local v0    # "c1":C
	//    .end local v1    # "c2":C
label_cond_2b:
	if ( i != len )
		goto label_cond_31;
label_goto_2d:
	return cVar0;
	// 140    .line 33
	// 141    .restart local v0    # "c1":C
	// 142    .restart local v1    # "c2":C
label_cond_2e:
	i = ( i + 0x1);
	goto label_goto_15;
	// 148    .end local v0    # "c1":C
	// 149    .end local v1    # "c2":C
label_cond_31:
	cVar0 = cVar1;
	goto label_goto_2d;

}
// .method public static isAlpha(C)Z
bool android::icu::impl::locale::AsciiUtil::isAlpha(char c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # C
	cVar0 = 0x1;
	if ( c <  0x41 )
		goto label_cond_b;
	if ( c >  0x5a )
		goto label_cond_b;
label_cond_a:
label_goto_a:
	return cVar0;
label_cond_b:
	if ( c <  0x61 )
		goto label_cond_13;
	if ( c <= 0x7a )
		goto label_cond_a;
label_cond_13:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method public static isAlphaNumeric(C)Z
bool android::icu::impl::locale::AsciiUtil::isAlphaNumeric(char c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # C
	if ( android::icu::impl::locale::AsciiUtil::isAlpha(c) )     
		goto label_cond_b;
	cVar0 = android::icu::impl::locale::AsciiUtil::isNumeric(c);
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x1;
	goto label_goto_a;

}
// .method public static isAlphaNumericString(Ljava/lang/String;)Z
bool android::icu::impl::locale::AsciiUtil::isAlphaNumericString(std::shared_ptr<java::lang::String> s)
{
	
	int i;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .local v0, "b":Z
	i = 0x0;
	//    .local v1, "i":I
label_goto_2:
	if ( i >= s->length() )
		goto label_cond_13;
	if ( android::icu::impl::locale::AsciiUtil::isAlphaNumeric(s->charAt(i)) )     
		goto label_cond_14;
label_cond_13:
	return 0x1;
	// 257    .line 159
label_cond_14:
	i = ( i + 0x1);
	goto label_goto_2;

}
// .method public static isAlphaString(Ljava/lang/String;)Z
bool android::icu::impl::locale::AsciiUtil::isAlphaString(std::shared_ptr<java::lang::String> s)
{
	
	int i;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .local v0, "b":Z
	i = 0x0;
	//    .local v1, "i":I
label_goto_2:
	if ( i >= s->length() )
		goto label_cond_13;
	if ( android::icu::impl::locale::AsciiUtil::isAlpha(s->charAt(i)) )     
		goto label_cond_14;
label_cond_13:
	return 0x1;
	// 302    .line 129
label_cond_14:
	i = ( i + 0x1);
	goto label_goto_2;

}
// .method public static isNumeric(C)Z
bool android::icu::impl::locale::AsciiUtil::isNumeric(char c)
{
	
	bool cVar1;
	
	//    .param p0, "c"    # C
	cVar1 = 0x0;
	if ( c <  0x30 )
		goto label_cond_a;
	if ( c >  0x39 )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method public static isNumericString(Ljava/lang/String;)Z
bool android::icu::impl::locale::AsciiUtil::isNumericString(std::shared_ptr<java::lang::String> s)
{
	
	int i;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .local v0, "b":Z
	i = 0x0;
	//    .local v1, "i":I
label_goto_2:
	if ( i >= s->length() )
		goto label_cond_13;
	if ( android::icu::impl::locale::AsciiUtil::isNumeric(s->charAt(i)) )     
		goto label_cond_14;
label_cond_13:
	return 0x1;
	// 369    .line 144
label_cond_14:
	i = ( i + 0x1);
	goto label_goto_2;

}
// .method public static toLower(C)C
char android::icu::impl::locale::AsciiUtil::toLower(char cVar0)
{
	
	char cVar0;
	
	//    .param p0, "c"    # C
	if ( cVar0 <  0x41 )
		goto label_cond_b;
	if ( cVar0 >  0x5a )
		goto label_cond_b;
	cVar0 = (char)(( cVar0 + 0x20));
label_cond_b:
	return cVar0;

}
// .method public static toLowerString(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::AsciiUtil::toLowerString(std::shared_ptr<java::lang::String> s)
{
	
	int idx;
	int c;
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	//    .param p0, "s"    # Ljava/lang/String;
	idx = 0x0;
	//    .local v2, "idx":I
label_goto_1:
	if ( idx >= s->length() )
		goto label_cond_13;
	c = s->charAt(idx);
	//    .local v1, "c":C
	if ( c <  0x41 )
		goto label_cond_1a;
	if ( c >  0x5a )
		goto label_cond_1a;
	//    .end local v1    # "c":C
label_cond_13:
	if ( idx != s->length() )
		goto label_cond_1d;
	return s;
	// 444    .line 62
	// 445    .restart local v1    # "c":C
label_cond_1a:
	idx = ( idx + 0x1);
	goto label_goto_1;
	// 451    .line 71
	// 452    .end local v1    # "c":C
label_cond_1d:
	buf = std::make_shared<java::lang::StringBuilder>(s->substring(0x0, idx));
	//    .local v0, "buf":Ljava/lang/StringBuilder;
label_goto_27:
	if ( idx >= s->length() )
		goto label_cond_3b;
	buf->append(android::icu::impl::locale::AsciiUtil::toLower(s->charAt(idx)));
	idx = ( idx + 0x1);
	goto label_goto_27;
	// 489    .line 75
label_cond_3b:
	return buf->toString();

}
// .method public static toTitleString(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::AsciiUtil::toTitleString(std::shared_ptr<java::lang::String> s)
{
	
	int idx;
	int c;
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() )     
		goto label_cond_8;
	return s;
	// 515    .line 100
label_cond_8:
	idx = 0x0;
	//    .local v2, "idx":I
	c = s->charAt(idx);
	//    .local v1, "c":C
	if ( c <  0x61 )
		goto label_cond_15;
	if ( c <= 0x7a )
		goto label_cond_24;
label_cond_15:
	idx = 0x1;
label_goto_16:
	if ( idx >= s->length() )
		goto label_cond_24;
	if ( c <  0x41 )
		goto label_cond_2b;
	if ( c >  0x5a )
		goto label_cond_2b;
label_cond_24:
	if ( idx != s->length() )
		goto label_cond_2e;
	return s;
	// 566    .line 103
label_cond_2b:
	idx = ( idx + 0x1);
	goto label_goto_16;
	// 572    .line 112
label_cond_2e:
	buf = std::make_shared<java::lang::StringBuilder>(s->substring(0x0, idx));
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	if ( idx )     
		goto label_cond_46;
	buf->append(android::icu::impl::locale::AsciiUtil::toUpper(s->charAt(idx)));
	idx = ( idx + 0x1);
label_cond_46:
label_goto_46:
	if ( idx >= s->length() )
		goto label_cond_5a;
	buf->append(android::icu::impl::locale::AsciiUtil::toLower(s->charAt(idx)));
	idx = ( idx + 0x1);
	goto label_goto_46;
	// 625    .line 120
label_cond_5a:
	return buf->toString();

}
// .method public static toUpper(C)C
char android::icu::impl::locale::AsciiUtil::toUpper(char cVar0)
{
	
	char cVar0;
	
	//    .param p0, "c"    # C
	if ( cVar0 <  0x61 )
		goto label_cond_b;
	if ( cVar0 >  0x7a )
		goto label_cond_b;
	cVar0 = (char)(( cVar0 + -0x20));
label_cond_b:
	return cVar0;

}
// .method public static toUpperString(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::AsciiUtil::toUpperString(std::shared_ptr<java::lang::String> s)
{
	
	int idx;
	int c;
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	//    .param p0, "s"    # Ljava/lang/String;
	idx = 0x0;
	//    .local v2, "idx":I
label_goto_1:
	if ( idx >= s->length() )
		goto label_cond_13;
	c = s->charAt(idx);
	//    .local v1, "c":C
	if ( c <  0x61 )
		goto label_cond_1a;
	if ( c >  0x7a )
		goto label_cond_1a;
	//    .end local v1    # "c":C
label_cond_13:
	if ( idx != s->length() )
		goto label_cond_1d;
	return s;
	// 702    .line 80
	// 703    .restart local v1    # "c":C
label_cond_1a:
	idx = ( idx + 0x1);
	goto label_goto_1;
	// 709    .line 89
	// 710    .end local v1    # "c":C
label_cond_1d:
	buf = std::make_shared<java::lang::StringBuilder>(s->substring(0x0, idx));
	//    .local v0, "buf":Ljava/lang/StringBuilder;
label_goto_27:
	if ( idx >= s->length() )
		goto label_cond_3b;
	buf->append(android::icu::impl::locale::AsciiUtil::toUpper(s->charAt(idx)));
	idx = ( idx + 0x1);
	goto label_goto_27;
	// 747    .line 93
label_cond_3b:
	return buf->toString();

}


