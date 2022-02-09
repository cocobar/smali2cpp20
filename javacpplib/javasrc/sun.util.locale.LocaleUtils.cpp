// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\LocaleUtils.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "sun.util.locale.LocaleUtils.h"

// .method private constructor <init>()V
sun::util::locale::LocaleUtils::LocaleUtils()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static caseIgnoreCompare(Ljava/lang/String;Ljava/lang/String;)I
int sun::util::locale::LocaleUtils::caseIgnoreCompare(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2)
{
	
	//    .param p0, "s1"    # Ljava/lang/String;
	//    .param p1, "s2"    # Ljava/lang/String;
	if ( s1 != s2 )
		goto label_cond_4;
	return 0x0;
	// 032    .line 74
label_cond_4:
	return sun::util::locale::LocaleUtils::toLowerString(s1)->compareTo(sun::util::locale::LocaleUtils::toLowerString(s2));

}
// .method public static caseIgnoreMatch(Ljava/lang/String;Ljava/lang/String;)Z
bool sun::util::locale::LocaleUtils::caseIgnoreMatch(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2)
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
	if ( s1 != s2 )
		goto label_cond_5;
	return cVar0;
	// 065    .line 55
label_cond_5:
	len = s1->length();
	//    .local v3, "len":I
	if ( len == s2->length() )
		goto label_cond_10;
	return cVar1;
	// 082    .line 60
label_cond_10:
	i = 0x0;
	//    .local v2, "i":I
label_goto_11:
	if ( i >= len )
		goto label_cond_2b;
	c1 = s1->charAt(i);
	//    .local v0, "c1":C
	c2 = s2->charAt(i);
	//    .local v1, "c2":C
	if ( c1 == c2 )
		goto label_cond_28;
	if ( sun::util::locale::LocaleUtils::toLower(c1) == sun::util::locale::LocaleUtils::toLower(c2) )
		goto label_cond_28;
	return cVar1;
	// 118    .line 60
label_cond_28:
	i = ( i + 0x1);
	goto label_goto_11;
	// 124    .line 67
	// 125    .end local v0    # "c1":C
	// 126    .end local v1    # "c2":C
label_cond_2b:
	return cVar0;

}
// .method static isAlpha(C)Z
bool sun::util::locale::LocaleUtils::isAlpha(char c)
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
// .method static isAlphaNumeric(C)Z
bool sun::util::locale::LocaleUtils::isAlphaNumeric(char c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # C
	if ( sun::util::locale::LocaleUtils::isAlpha(c) )     
		goto label_cond_b;
	cVar0 = sun::util::locale::LocaleUtils::isNumeric(c);
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x1;
	goto label_goto_a;

}
// .method public static isAlphaNumericString(Ljava/lang/String;)Z
bool sun::util::locale::LocaleUtils::isAlphaNumericString(std::shared_ptr<java::lang::String> s)
{
	
	int i;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .local v1, "len":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( i >= s->length() )
		goto label_cond_16;
	if ( sun::util::locale::LocaleUtils::isAlphaNumeric(s->charAt(i)) )     
		goto label_cond_13;
	return 0x0;
	// 227    .line 201
label_cond_13:
	i = ( i + 0x1);
	goto label_goto_5;
	// 233    .line 206
label_cond_16:
	return 0x1;

}
// .method static isAlphaString(Ljava/lang/String;)Z
bool sun::util::locale::LocaleUtils::isAlphaString(std::shared_ptr<java::lang::String> s)
{
	
	int i;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .local v1, "len":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( i >= s->length() )
		goto label_cond_16;
	if ( sun::util::locale::LocaleUtils::isAlpha(s->charAt(i)) )     
		goto label_cond_13;
	return 0x0;
	// 274    .line 173
label_cond_13:
	i = ( i + 0x1);
	goto label_goto_5;
	// 280    .line 178
label_cond_16:
	return 0x1;

}
// .method static isEmpty(Ljava/lang/String;)Z
bool sun::util::locale::LocaleUtils::isEmpty(std::shared_ptr<java::lang::String> str)
{
	
	bool cVar0;
	
	//    .param p0, "str"    # Ljava/lang/String;
	cVar0 = 0x1;
	if ( !(str) )  
		goto label_cond_a;
	if ( str->length() )     
		goto label_cond_b;
label_cond_a:
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method static isEmpty(Ljava/util/List;)Z
bool sun::util::locale::LocaleUtils::isEmpty(std::shared_ptr<java::util::List<java::lang::Object>> list)
{
	
	bool cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 318        value = {
	// 319            "(",
	// 320            "Ljava/util/List",
	// 321            "<*>;)Z"
	// 322        }
	// 323    .end annotation
	//    .local p0, "list":Ljava/util/List;, "Ljava/util/List<*>;"
	if ( !(list) )  
		goto label_cond_7;
	cVar0 = list->isEmpty();
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = 0x1;
	goto label_goto_6;

}
// .method static isEmpty(Ljava/util/Map;)Z
bool sun::util::locale::LocaleUtils::isEmpty(std::shared_ptr<java::util::Map<java::lang::Object,java::lang::Object>> map)
{
	
	bool cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 346        value = {
	// 347            "(",
	// 348            "Ljava/util/Map",
	// 349            "<**>;)Z"
	// 350        }
	// 351    .end annotation
	//    .local p0, "map":Ljava/util/Map;, "Ljava/util/Map<**>;"
	if ( !(map) )  
		goto label_cond_7;
	cVar0 = map->isEmpty();
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = 0x1;
	goto label_goto_6;

}
// .method static isEmpty(Ljava/util/Set;)Z
bool sun::util::locale::LocaleUtils::isEmpty(std::shared_ptr<java::util::Set<java::lang::Object>> set)
{
	
	bool cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 374        value = {
	// 375            "(",
	// 376            "Ljava/util/Set",
	// 377            "<*>;)Z"
	// 378        }
	// 379    .end annotation
	//    .local p0, "set":Ljava/util/Set;, "Ljava/util/Set<*>;"
	if ( !(set) )  
		goto label_cond_7;
	cVar0 = set->isEmpty();
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = 0x1;
	goto label_goto_6;

}
// .method private static isLower(C)Z
bool sun::util::locale::LocaleUtils::isLower(char c)
{
	
	bool cVar1;
	
	//    .param p0, "c"    # C
	cVar1 = 0x0;
	if ( c <  0x61 )
		goto label_cond_a;
	if ( c >  0x7a )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method static isNumeric(C)Z
bool sun::util::locale::LocaleUtils::isNumeric(char c)
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
// .method static isNumericString(Ljava/lang/String;)Z
bool sun::util::locale::LocaleUtils::isNumericString(std::shared_ptr<java::lang::String> s)
{
	
	int i;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .local v1, "len":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( i >= s->length() )
		goto label_cond_16;
	if ( sun::util::locale::LocaleUtils::isNumeric(s->charAt(i)) )     
		goto label_cond_13;
	return 0x0;
	// 477    .line 187
label_cond_13:
	i = ( i + 0x1);
	goto label_goto_5;
	// 483    .line 192
label_cond_16:
	return 0x1;

}
// .method private static isUpper(C)Z
bool sun::util::locale::LocaleUtils::isUpper(char c)
{
	
	bool cVar1;
	
	//    .param p0, "c"    # C
	cVar1 = 0x0;
	if ( c <  0x41 )
		goto label_cond_a;
	if ( c >  0x5a )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method static toLower(C)C
char sun::util::locale::LocaleUtils::toLower(char cVar0)
{
	
	char cVar0;
	
	//    .param p0, "c"    # C
	if ( !(sun::util::locale::LocaleUtils::isUpper(cVar0)) )  
		goto label_cond_9;
	cVar0 = (char)(( cVar0 + 0x20));
	//    .end local p0    # "c":C
label_cond_9:
	return cVar0;

}
// .method public static toLowerString(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LocaleUtils::toLowerString(std::shared_ptr<java::lang::String> s)
{
	
	int len;
	int idx;
	std::shared<std::vector<char[]>> buf;
	int i;
	char c;
	int c;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	len = s->length();
	//    .local v4, "len":I
	idx = 0x0;
	//    .local v3, "idx":I
label_goto_5:
	if ( idx >= len )
		goto label_cond_11;
	if ( !(sun::util::locale::LocaleUtils::isUpper(s->charAt(idx))) )  
		goto label_cond_14;
label_cond_11:
	if ( idx != len )
		goto label_cond_17;
	return s;
	// 570    .line 91
label_cond_14:
	idx = ( idx + 0x1);
	goto label_goto_5;
	// 576    .line 100
label_cond_17:
	buf = std::make_shared<std::vector<char[]>>(len);
	//    .local v0, "buf":[C
	i = 0x0;
	//    .local v2, "i":I
label_goto_1a:
	if ( i >= len )
		goto label_cond_2c;
	c = s->charAt(i);
	//    .local v1, "c":C
	if ( i >= idx )
		goto label_cond_27;
	//    .end local v1    # "c":C
label_goto_22:
	buf[i] = c;
	i = ( i + 0x1);
	goto label_goto_1a;
	// 606    .line 103
	// 607    .restart local v1    # "c":C
label_cond_27:
	c = sun::util::locale::LocaleUtils::toLower(c);
	goto label_goto_22;
	// 615    .line 105
	// 616    .end local v1    # "c":C
label_cond_2c:
	cVar0 = std::make_shared<java::lang::String>(buf);
	return cVar0;

}
// .method static toTitleString(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LocaleUtils::toTitleString(std::shared_ptr<java::lang::String> s)
{
	
	int len;
	int idx;
	std::shared<std::vector<char[]>> buf;
	int i;
	char c;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	len = s->length();
	//    .local v4, "len":I
	if ( len )     
		goto label_cond_7;
	return s;
	// 641    .line 133
label_cond_7:
	idx = 0x0;
	//    .local v3, "idx":I
	if ( sun::util::locale::LocaleUtils::isLower(s->charAt(idx)) )     
		goto label_cond_1f;
	idx = 0x1;
label_goto_13:
	if ( idx >= len )
		goto label_cond_1f;
	if ( !(sun::util::locale::LocaleUtils::isUpper(s->charAt(idx))) )  
		goto label_cond_22;
label_cond_1f:
	if ( idx != len )
		goto label_cond_25;
	return s;
	// 681    .line 135
label_cond_22:
	idx = ( idx + 0x1);
	goto label_goto_13;
	// 687    .line 145
label_cond_25:
	buf = std::make_shared<std::vector<char[]>>(len);
	//    .local v0, "buf":[C
	i = 0x0;
	//    .local v2, "i":I
label_goto_28:
	if ( i >= len )
		goto label_cond_47;
	c = s->charAt(i);
	//    .local v1, "c":C
	if ( i )     
		goto label_cond_3b;
	if ( idx )     
		goto label_cond_3b;
	buf[i] = sun::util::locale::LocaleUtils::toUpper(c);
label_goto_38:
	i = ( i + 0x1);
	goto label_goto_28;
	// 723    .line 150
label_cond_3b:
	if ( i >= idx )
		goto label_cond_40;
	buf[i] = c;
	goto label_goto_38;
	// 732    .line 153
label_cond_40:
	buf[i] = sun::util::locale::LocaleUtils::toLower(c);
	goto label_goto_38;
	// 742    .line 156
	// 743    .end local v1    # "c":C
label_cond_47:
	cVar0 = std::make_shared<java::lang::String>(buf);
	return cVar0;

}
// .method static toUpper(C)C
char sun::util::locale::LocaleUtils::toUpper(char cVar0)
{
	
	char cVar0;
	
	//    .param p0, "c"    # C
	if ( !(sun::util::locale::LocaleUtils::isLower(cVar0)) )  
		goto label_cond_9;
	cVar0 = (char)(( cVar0 + -0x20));
	//    .end local p0    # "c":C
label_cond_9:
	return cVar0;

}
// .method static toUpperString(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LocaleUtils::toUpperString(std::shared_ptr<java::lang::String> s)
{
	
	int len;
	int idx;
	std::shared<std::vector<char[]>> buf;
	int i;
	char c;
	int c;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	len = s->length();
	//    .local v4, "len":I
	idx = 0x0;
	//    .local v3, "idx":I
label_goto_5:
	if ( idx >= len )
		goto label_cond_11;
	if ( !(sun::util::locale::LocaleUtils::isLower(s->charAt(idx))) )  
		goto label_cond_14;
label_cond_11:
	if ( idx != len )
		goto label_cond_17;
	return s;
	// 810    .line 111
label_cond_14:
	idx = ( idx + 0x1);
	goto label_goto_5;
	// 816    .line 120
label_cond_17:
	buf = std::make_shared<std::vector<char[]>>(len);
	//    .local v0, "buf":[C
	i = 0x0;
	//    .local v2, "i":I
label_goto_1a:
	if ( i >= len )
		goto label_cond_2c;
	c = s->charAt(i);
	//    .local v1, "c":C
	if ( i >= idx )
		goto label_cond_27;
	//    .end local v1    # "c":C
label_goto_22:
	buf[i] = c;
	i = ( i + 0x1);
	goto label_goto_1a;
	// 846    .line 123
	// 847    .restart local v1    # "c":C
label_cond_27:
	c = sun::util::locale::LocaleUtils::toUpper(c);
	goto label_goto_22;
	// 855    .line 125
	// 856    .end local v1    # "c":C
label_cond_2c:
	cVar0 = std::make_shared<java::lang::String>(buf);
	return cVar0;

}


