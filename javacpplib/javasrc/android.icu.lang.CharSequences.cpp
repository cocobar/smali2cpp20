// CPP L:\smali2cpp20\x64\Release\out\android\icu\lang\CharSequences.smali
#include "java2ctype.h"
#include "android.icu.lang.CharSequences.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.System.h"

// .method private constructor <init>()V
android::icu::lang::CharSequences::CharSequences()
{
	
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static codePoints(Ljava/lang/CharSequence;)[I
int android::icu::lang::CharSequences::codePoints(std::shared_ptr<java::lang::CharSequence> s)
{
	
	int cVar0;
	std::shared<std::vector<int[]>> result;
	int j;
	int i;
	char cp;
	char last;
	std::shared<std::vector<int[]>> shortResult;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 027    .end annotation
	cVar0 = 0x0;
	result = std::make_shared<std::vector<int[]>>(s->length());
	//    .local v5, "result":[I
	j = 0x0;
	//    .local v2, "j":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_9:
	if ( i >= s->length() )
		goto label_cond_3f;
	cp = s->charAt(i);
	//    .local v0, "cp":C
	if ( cp <  0xdc00 )
		goto label_cond_39;
	if ( cp >  0xdfff )
		goto label_cond_39;
	if ( !(i) )  
		goto label_cond_39;
	last = (char)(result[( j + -0x1)]);
	//    .local v4, "last":C
	if ( last <  0xd800 )
		goto label_cond_39;
	if ( last >  0xdbff )
		goto label_cond_39;
	result[( j + -0x1)] = java::lang::Character::toCodePoint(last, cp);
	//    .end local v4    # "last":C
label_goto_36:
	i = ( i + 0x1);
	goto label_goto_9;
	// 105    .line 302
label_cond_39:
	//    .end local v2    # "j":I
	//    .local v3, "j":I
	result[j] = cp;
	j = ( j + 0x1);
	//    .end local v3    # "j":I
	//    .restart local v2    # "j":I
	goto label_goto_36;
	// 119    .line 304
	// 120    .end local v0    # "cp":C
label_cond_3f:
	if ( j != result->size() )
		goto label_cond_43;
	return result;
	// 129    .line 307
label_cond_43:
	shortResult = std::make_shared<std::vector<int[]>>(j);
	//    .local v6, "shortResult":[I
	java::lang::System::arraycopy(result, cVar0, shortResult, cVar0, j);
	return shortResult;

}
// .method public static compare(ILjava/lang/CharSequence;)I
int android::icu::lang::CharSequences::compare(int codepoint,std::shared_ptr<java::lang::CharSequence> a)
{
	
	int cVar1;
	int result;
	
	//    .param p0, "codepoint"    # I
	//    .param p1, "a"    # Ljava/lang/CharSequence;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 146    .end annotation
	cVar1 = 0x0;
	result = android::icu::lang::CharSequences::compare(a, codepoint);
	//    .local v0, "result":I
	if ( result <= 0 )
		goto label_cond_9;
	cVar1 = -0x1;
label_cond_8:
label_goto_8:
	return cVar1;
label_cond_9:
	if ( result >= 0 )
		goto label_cond_8;
	cVar1 = 0x1;
	goto label_goto_8;

}
// .method public static compare(Ljava/lang/CharSequence;I)I
int android::icu::lang::CharSequences::compare(std::shared_ptr<java::lang::CharSequence> string,int codePoint)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int stringLength;
	int firstChar;
	int offset;
	int result;
	
	//    .param p0, "string"    # Ljava/lang/CharSequence;
	//    .param p1, "codePoint"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 179    .end annotation
	cVar0 = 0x1;
	if ( codePoint < 0 ) 
		goto label_cond_9;
	if ( codePoint <= 0x10ffff )
		goto label_cond_f;
label_cond_9:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar1;
	// 201    .line 138
label_cond_f:
	stringLength = string->length();
	//    .local v4, "stringLength":I
	if ( stringLength )     
		goto label_cond_17;
	return -0x1;
	// 216    .line 142
label_cond_17:
	firstChar = string->charAt(0x0);
	//    .local v0, "firstChar":C
	offset = (codePoint - 0x10000);
	//    .local v2, "offset":I
	if ( offset >= 0 )
		goto label_cond_29;
	result = (firstChar - codePoint);
	//    .local v3, "result":I
	if ( !(result) )  
		goto label_cond_26;
	return result;
	// 242    .line 150
label_cond_26:
	return ( stringLength + -0x1);
	// 248    .line 153
	// 249    .end local v3    # "result":I
label_cond_29:
	//    .local v1, "lead":C
	result = (firstChar - (char)((_ushri(offset,0xa) +  0xd800)));
	//    .restart local v3    # "result":I
	if ( !(result) )  
		goto label_cond_35;
	return result;
	// 270    .line 158
label_cond_35:
	if ( stringLength <= cVar0 )
		goto label_cond_47;
	//    .local v5, "trail":C
	result = (string->charAt(cVar0) - (char)((( offset & 0x3ff) +  0xdc00)));
	if ( !(result) )  
		goto label_cond_47;
	return result;
	// 297    .line 165
	// 298    .end local v5    # "trail":C
label_cond_47:
	return ( stringLength + -0x2);

}
// .method public static compare(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I
int android::icu::lang::CharSequences::compare(std::shared_ptr<java::lang::CharSequence> a,std::shared_ptr<java::lang::CharSequence> b)
{
	
	int alength;
	int blength;
	int i;
	int diff;
	
	//    .param p0, "a"    # Ljava/lang/CharSequence;
	//    .param p1, "b"    # Ljava/lang/CharSequence;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 310    .end annotation
	alength = a->length();
	//    .local v0, "alength":I
	blength = b->length();
	//    .local v1, "blength":I
	if ( alength >  blength )
		goto label_cond_1b;
	//    .local v4, "min":I
label_goto_b:
	i = 0x0;
	//    .local v3, "i":I
label_goto_c:
	if ( i >= min )
		goto label_cond_20;
	diff = (a->charAt(i) - b->charAt(i));
	//    .local v2, "diff":I
	if ( !(diff) )  
		goto label_cond_1d;
	return diff;
	// 357    .line 223
	// 358    .end local v2    # "diff":I
	// 359    .end local v3    # "i":I
	// 360    .end local v4    # "min":I
label_cond_1b:
	//    .restart local v4    # "min":I
	goto label_goto_b;
	// 367    .line 224
	// 368    .restart local v2    # "diff":I
	// 369    .restart local v3    # "i":I
label_cond_1d:
	i = ( i + 0x1);
	goto label_goto_c;
	// 375    .line 230
	// 376    .end local v2    # "diff":I
label_cond_20:
	return (alength - blength);

}
// .method public static final equals(ILjava/lang/CharSequence;)Z
bool android::icu::lang::CharSequences::equals(int codepoint,std::shared_ptr<java::lang::CharSequence> other)
{
	
	bool cVar0;
	bool cVar3;
	
	//    .param p0, "codepoint"    # I
	//    .param p1, "other"    # Ljava/lang/CharSequence;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 388    .end annotation
	cVar0 = 0x1;
	cVar3 = 0x0;
	if ( other )     
		goto label_cond_5;
	return cVar3;
	// 401    .line 107
label_cond_5:
	// switch
	{
	auto item = ( other->length() );
	if (item == 1) goto label_pswitch_d;
	if (item == 2) goto label_pswitch_16;
	}
	return cVar3;
	// 412    .line 108
label_pswitch_d:
	if ( codepoint != other->charAt(cVar3) )
		goto label_cond_14;
label_goto_13:
	return cVar0;
label_cond_14:
	cVar0 = cVar3;
	goto label_goto_13;
	// 428    .line 109
label_pswitch_16:
	if ( codepoint <= 0xffff )
		goto label_cond_22;
	if ( codepoint != java::lang::Character::codePointAt(other, cVar3) )
		goto label_cond_22;
	cVar3 = cVar0;
label_cond_22:
	return cVar3;
	// 445    .line 107
	// 446    nop
	// 448    :pswitch_data_24
	// 449    .packed-switch 0x1
	// 450        :pswitch_d
	// 451        :pswitch_16
	// 452    .end packed-switch

}
// .method public static final equals(Ljava/lang/CharSequence;I)Z
bool android::icu::lang::CharSequences::equals(std::shared_ptr<java::lang::CharSequence> other,int codepoint)
{
	
	//    .param p0, "other"    # Ljava/lang/CharSequence;
	//    .param p1, "codepoint"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 460    .end annotation
	return android::icu::lang::CharSequences::equals(codepoint, other);

}
// .method public static final equals(Ljava/lang/Object;Ljava/lang/Object;)Z
template <typename T>
bool android::icu::lang::CharSequences::equals(std::shared_ptr<T> a,std::shared_ptr<T> b)
{
	
	bool cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 474        value = {
	// 475            "<T:",
	// 476            "Ljava/lang/Object;",
	// 477            ">(TT;TT;)Z"
	// 478        }
	// 479    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 482    .end annotation
	//    .local p0, "a":Ljava/lang/Object;, "TT;"
	//    .local p1, "b":Ljava/lang/Object;, "TT;"
	cVar1 = 0x0;
	if ( a )     
		goto label_cond_7;
	if ( b )     
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
label_goto_6:
	return cVar1;
	// 500    .line 209
label_cond_7:
	if ( !(b) )  
		goto label_cond_6;
	cVar1 = a->equals(b);
	goto label_goto_6;

}
// .method public static equalsChars(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z
bool android::icu::lang::CharSequences::equalsChars(std::shared_ptr<java::lang::CharSequence> a,std::shared_ptr<java::lang::CharSequence> b)
{
	
	bool cVar1;
	
	//    .param p0, "a"    # Ljava/lang/CharSequence;
	//    .param p1, "b"    # Ljava/lang/CharSequence;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 517    .end annotation
	cVar1 = 0x0;
	if ( a->length() != b->length() )
		goto label_cond_12;
	if ( android::icu::lang::CharSequences::compare(a, b) )     
		goto label_cond_12;
	cVar1 = 0x1;
label_cond_12:
	return cVar1;

}
// .method public static getSingleCodePoint(Ljava/lang/CharSequence;)I
int android::icu::lang::CharSequences::getSingleCodePoint(std::shared_ptr<java::lang::CharSequence> s)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int length;
	int result;
	int cVar3;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 549    .end annotation
	cVar0 = 0x7fffffff;
	cVar1 = 0x0;
	cVar2 = 0x1;
	length = s->length();
	//    .local v0, "length":I
	if ( length <  cVar2 )
		goto label_cond_e;
	if ( length <= 0x2 )
		goto label_cond_f;
label_cond_e:
	return cVar0;
	// 575    .line 195
label_cond_f:
	result = java::lang::Character::codePointAt(s, cVar1);
	//    .local v1, "result":I
	if ( result >= 0x10000 )
		goto label_cond_1d;
	cVar3 = cVar2;
label_goto_18:
	if ( length != cVar2 )
		goto label_cond_1f;
label_goto_1a:
	if ( cVar3 != cVar2 )
		goto label_cond_21;
	//    .end local v1    # "result":I
label_goto_1c:
	return result;
	// 599    .restart local v1    # "result":I
label_cond_1d:
	cVar3 = cVar1;
	goto label_goto_18;
label_cond_1f:
	cVar2 = cVar1;
	goto label_goto_1a;
label_cond_21:
	result = cVar0;
	goto label_goto_1c;

}
// .method public static indexOf(Ljava/lang/CharSequence;I)I
int android::icu::lang::CharSequences::indexOf(std::shared_ptr<java::lang::CharSequence> s,int codePoint)
{
	
	int i;
	int cp;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	//    .param p1, "codePoint"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 621    .end annotation
	i = 0x0;
	//    .local v1, "i":I
label_goto_1:
	if ( i >= s->length() )
		goto label_cond_14;
	cp = java::lang::Character::codePointAt(s, i);
	//    .local v0, "cp":I
	if ( cp != codePoint )
		goto label_cond_e;
	return i;
	// 647    .line 268
label_cond_e:
	i = (i +  java::lang::Character::charCount(cp));
	goto label_goto_1;
	// 657    .line 274
	// 658    .end local v0    # "cp":I
label_cond_14:
	return -0x1;

}
// .method public static matchAfter(Ljava/lang/CharSequence;Ljava/lang/CharSequence;II)I
int android::icu::lang::CharSequences::matchAfter(std::shared_ptr<java::lang::CharSequence> a,std::shared_ptr<java::lang::CharSequence> b,int aIndex,int bIndex)
{
	
	int i;
	int j;
	int result;
	
	//    .param p0, "a"    # Ljava/lang/CharSequence;
	//    .param p1, "b"    # Ljava/lang/CharSequence;
	//    .param p2, "aIndex"    # I
	//    .param p3, "bIndex"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 672    .end annotation
	i = aIndex;
	//    .local v4, "i":I
	j = bIndex;
	//    .local v5, "j":I
	//    .local v0, "alen":I
	//    .local v1, "blen":I
label_goto_a:
	if ( i >= a->length() )
		goto label_cond_18;
	if ( j >= b->length() )
		goto label_cond_18;
	//    .local v2, "ca":C
	//    .local v3, "cb":C
	if ( a->charAt(i) == b->charAt(j) )
		goto label_cond_2f;
	//    .end local v2    # "ca":C
	//    .end local v3    # "cb":C
label_cond_18:
	result = (i - aIndex);
	//    .local v6, "result":I
	if ( !(result) )  
		goto label_cond_2e;
	if ( !(( android::icu::lang::CharSequences::onCharacterBoundary(a, i) ^ 0x1)) )  
		goto label_cond_2e;
	if ( !(( android::icu::lang::CharSequences::onCharacterBoundary(b, j) ^ 0x1)) )  
		goto label_cond_2e;
label_cond_2e:
	return result;
	// 748    .line 59
	// 749    .end local v6    # "result":I
	// 750    .restart local v2    # "ca":C
	// 751    .restart local v3    # "cb":C
label_cond_2f:
	i = ( i + 0x1);
	j = ( j + 0x1);
	goto label_goto_a;

}
// .method public static onCharacterBoundary(Ljava/lang/CharSequence;I)Z
bool android::icu::lang::CharSequences::onCharacterBoundary(std::shared_ptr<java::lang::CharSequence> s,int i)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	//    .param p1, "i"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 765    .end annotation
	if ( i <= 0 )
		goto label_cond_8;
	if ( i <  s->length() )
		goto label_cond_a;
label_cond_8:
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
	// 785    .line 255
label_cond_a:
	if ( ( java::lang::Character::isHighSurrogate(s->charAt(( i + -0x1))) ^ 0x1) )     
		goto label_cond_8;
	cVar0 = ( java::lang::Character::isLowSurrogate(s->charAt(i)) ^ 0x1);
	goto label_goto_9;

}
// .method public codePointLength(Ljava/lang/CharSequence;)I
int android::icu::lang::CharSequences::codePointLength(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 822    .end annotation
	return java::lang::Character::codePointCount(s, 0x0, s->length());

}


