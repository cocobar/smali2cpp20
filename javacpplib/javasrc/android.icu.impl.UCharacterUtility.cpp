// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterUtility.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterUtility.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

static android::icu::impl::UCharacterUtility::NON_CHARACTER_MAX_3_1_ = 0xfdef;
static android::icu::impl::UCharacterUtility::NON_CHARACTER_MIN_3_1_ = 0xfdd0;
static android::icu::impl::UCharacterUtility::NON_CHARACTER_SUFFIX_MIN_3_0_ = 0xfffe;
// .method private constructor <init>()V
android::icu::impl::UCharacterUtility::UCharacterUtility()
{
	
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static compareNullTermByteSubString(Ljava/lang/String;[BII)I
int android::icu::impl::UCharacterUtility::compareNullTermByteSubString(std::shared_ptr<java::lang::String> str,std::shared_ptr<unsigned char[]> array,int strindex,int aindex)
{
	
	unsigned char b;
	int aindex;
	int strindex;
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "array"    # [B
	//    .param p2, "strindex"    # I
	//    .param p3, "aindex"    # I
	//    .local v0, "b":B
	//    .end local v0    # "b":B
	//    .local v1, "length":I
label_goto_5:
	if ( !(b) )  
		goto label_cond_d;
	b = array[aindex];
	//    .local v0, "b":B
	aindex = ( aindex + 0x1);
	if ( b )     
		goto label_cond_e;
	//    .end local v0    # "b":B
label_cond_d:
	return strindex;
	// 064    .line 105
	// 065    .restart local v0    # "b":B
label_cond_e:
	if ( strindex == str->length() )
		goto label_cond_19;
	if ( str->charAt(strindex) == (char)(( b & 0xff)) )
		goto label_cond_1b;
label_cond_19:
	return -0x1;
	// 086    .line 109
label_cond_1b:
	strindex = ( strindex + 0x1);
	goto label_goto_5;

}
// .method static getNullTermByteSubString(Ljava/lang/StringBuffer;[BI)I
int android::icu::impl::UCharacterUtility::getNullTermByteSubString(std::shared_ptr<java::lang::StringBuffer> str,std::shared_ptr<unsigned char[]> array,int index)
{
	
	int cVar0;
	int index;
	
	//    .param p0, "str"    # Ljava/lang/StringBuffer;
	//    .param p1, "array"    # [B
	//    .param p2, "index"    # I
	cVar0 = 0x1;
label_goto_1:
	if ( !(cVar0) )  
		goto label_cond_10;
	cVar0 = array[index];
	//    .local v0, "b":B
	if ( !(cVar0) )  
		goto label_cond_d;
	str->append((char)(( cVar0 & 0xff)));
label_cond_d:
	index = ( index + 0x1);
	goto label_goto_1;
	// 127    .line 75
	// 128    .end local v0    # "b":B
label_cond_10:
	return index;

}
// .method public static isNonCharacter(I)Z
bool android::icu::impl::UCharacterUtility::isNonCharacter(int ch)
{
	
	int cVar0;
	bool cVar1;
	
	//    .param p0, "ch"    # I
	cVar0 = 0xfffe;
	cVar1 = 0x1;
	if ( (ch & cVar0) != cVar0 )
		goto label_cond_a;
	return cVar1;
	// 152    .line 35
label_cond_a:
	if ( ch <  0xfdd0 )
		goto label_cond_15;
	if ( ch >  0xfdef )
		goto label_cond_15;
label_goto_14:
	return cVar1;
label_cond_15:
	cVar1 = 0x0;
	goto label_goto_14;

}
// .method static skipByteSubString([BIIB)I
int android::icu::impl::UCharacterUtility::skipByteSubString(std::shared_ptr<unsigned char[]> array,int index,int length,unsigned char skipend)
{
	
	int result;
	
	//    .param p0, "array"    # [B
	//    .param p1, "index"    # I
	//    .param p2, "length"    # I
	//    .param p3, "skipend"    # B
	result = 0x0;
	//    .local v1, "result":I
label_goto_1:
	if ( result >= length )
		goto label_cond_b;
	//    .local v0, "b":B
	if ( array[(index + result)] != skipend )
		goto label_cond_c;
	result = ( result + 0x1);
	//    .end local v0    # "b":B
label_cond_b:
	return result;
	// 203    .line 157
	// 204    .restart local v0    # "b":B
label_cond_c:
	result = ( result + 0x1);
	goto label_goto_1;

}
// .method static skipNullTermByteSubString([BII)I
int android::icu::impl::UCharacterUtility::skipNullTermByteSubString(std::shared_ptr<unsigned char[]> array,int index,int skipcount)
{
	
	int i;
	int cVar0;
	int index;
	
	//    .param p0, "array"    # [B
	//    .param p1, "index"    # I
	//    .param p2, "skipcount"    # I
	i = 0x0;
	//    .local v1, "i":I
label_goto_1:
	if ( i >= skipcount )
		goto label_cond_e;
	cVar0 = 0x1;
label_goto_4:
	if ( !(cVar0) )  
		goto label_cond_b;
	cVar0 = array[index];
	//    .local v0, "b":B
	index = ( index + 0x1);
	goto label_goto_4;
	// 241    .line 128
	// 242    .end local v0    # "b":B
label_cond_b:
	i = ( i + 0x1);
	goto label_goto_1;
	// 248    .line 137
label_cond_e:
	return index;

}
// .method static toInt(CC)I
int android::icu::impl::UCharacterUtility::toInt(char msc,char lsc)
{
	
	//    .param p0, "msc"    # C
	//    .param p1, "lsc"    # C
	return (( msc << 0x10) |  lsc);

}


