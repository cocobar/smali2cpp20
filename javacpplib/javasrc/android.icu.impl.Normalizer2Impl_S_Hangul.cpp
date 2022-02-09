// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Normalizer2Impl$Hangul.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl_S_Hangul.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "java.io.IOException.h"
#include "java.lang.Appendable.h"
#include "java.lang.Throwable.h"

static android::icu::impl::Normalizer2Impl_S_Hangul::HANGUL_BASE = 0xac00;
static android::icu::impl::Normalizer2Impl_S_Hangul::HANGUL_COUNT = 0x2ba4;
static android::icu::impl::Normalizer2Impl_S_Hangul::HANGUL_END = 0xd7a3;
static android::icu::impl::Normalizer2Impl_S_Hangul::HANGUL_LIMIT = 0xd7a4;
static android::icu::impl::Normalizer2Impl_S_Hangul::JAMO_L_BASE = 0x1100;
static android::icu::impl::Normalizer2Impl_S_Hangul::JAMO_L_COUNT = 0x13;
static android::icu::impl::Normalizer2Impl_S_Hangul::JAMO_L_END = 0x1112;
static android::icu::impl::Normalizer2Impl_S_Hangul::JAMO_L_LIMIT = 0x1113;
static android::icu::impl::Normalizer2Impl_S_Hangul::JAMO_T_BASE = 0x11a7;
static android::icu::impl::Normalizer2Impl_S_Hangul::JAMO_T_COUNT = 0x1c;
static android::icu::impl::Normalizer2Impl_S_Hangul::JAMO_T_END = 0x11c2;
static android::icu::impl::Normalizer2Impl_S_Hangul::JAMO_VT_COUNT = 0x24c;
static android::icu::impl::Normalizer2Impl_S_Hangul::JAMO_V_BASE = 0x1161;
static android::icu::impl::Normalizer2Impl_S_Hangul::JAMO_V_COUNT = 0x15;
static android::icu::impl::Normalizer2Impl_S_Hangul::JAMO_V_END = 0x1175;
static android::icu::impl::Normalizer2Impl_S_Hangul::JAMO_V_LIMIT = 0x1176;
// .method public constructor <init>()V
android::icu::impl::Normalizer2Impl_S_Hangul::Normalizer2Impl_S_Hangul()
{
	
	// 057    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static decompose(ILjava/lang/Appendable;)I
int android::icu::impl::Normalizer2Impl_S_Hangul::decompose(int c,std::shared_ptr<java::lang::Appendable> buffer)
{
	
	int cVar0;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar2;
	int c2;
	int cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "c"    # I
	//    .param p1, "buffer"    # Ljava/lang/Appendable;
	cVar0 = (c -  0xac00);
	try {
	//label_try_start_4:
	c2 = ( cVar0 % 0x1c);
	//    .local v0, "c2":I
	cVar1 = ( cVar0 / 0x1c);
	buffer->append((char)(( ( cVar1 / 0x15) + 0x1100)));
	buffer->append((char)(( ( cVar1 % 0x15) + 0x1161)));
	if ( c2 )     
		goto label_cond_1c;
	return 0x2;
	// 107    .line 79
label_cond_1c:
	buffer->append((char)(( c2 + 0x11a7)));
	//label_try_end_22:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	//    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_22} :catch_24
	return 0x3;
	// 122    .line 82
	// 123    .end local v0    # "c2":I
label_catch_24:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method public static getRawDecomposition(ILjava/lang/Appendable;)V
void android::icu::impl::Normalizer2Impl_S_Hangul::getRawDecomposition(int c,std::shared_ptr<java::lang::Appendable> buffer)
{
	
	int cVar0;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar2;
	int c2;
	int cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "c"    # I
	//    .param p1, "buffer"    # Ljava/lang/Appendable;
	//    .local v2, "orig":I
	cVar0 = (c -  0xac00);
	try {
	//label_try_start_5:
	c2 = ( cVar0 % 0x1c);
	//    .local v0, "c2":I
	if ( c2 )     
		goto label_cond_1c;
	cVar1 = ( cVar0 / 0x1c);
	buffer->append((char)(( ( cVar1 / 0x15) + 0x1100)));
	buffer->append((char)(( ( cVar1 % 0x15) + 0x1161)));
label_goto_1b:
	return;
	// 184    .line 102
label_cond_1c:
	buffer->append((char)((c - c2)));
	buffer->append((char)(( c2 + 0x11a7)));
	//label_try_end_28:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_29;
	}
	//    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_28} :catch_29
	goto label_goto_1b;
	// 203    .line 105
	// 204    .end local v0    # "c2":I
label_catch_29:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method public static isHangul(I)Z
bool android::icu::impl::Normalizer2Impl_S_Hangul::isHangul(int c)
{
	
	bool cVar1;
	
	//    .param p0, "c"    # I
	cVar1 = 0x0;
	if ( 0xac00 >  c )
		goto label_cond_c;
	if ( c >= 0xd7a4 )
		goto label_cond_c;
	cVar1 = 0x1;
label_cond_c:
	return cVar1;

}
// .method public static isHangulWithoutJamoT(C)Z
bool android::icu::impl::Normalizer2Impl_S_Hangul::isHangulWithoutJamoT(char c)
{
	
	bool cVar2;
	int cVar1;
	
	//    .param p0, "c"    # C
	cVar2 = 0x0;
	cVar1 = (char)((c - 0xac00));
	if ( cVar1 >= 0x2ba4 )
		goto label_cond_10;
	if ( ( cVar1 % 0x1c) )     
		goto label_cond_10;
	cVar2 = 0x1;
label_cond_10:
	return cVar2;

}
// .method public static isJamoL(I)Z
bool android::icu::impl::Normalizer2Impl_S_Hangul::isJamoL(int c)
{
	
	bool cVar1;
	
	//    .param p0, "c"    # I
	cVar1 = 0x0;
	if ( 0x1100 >  c )
		goto label_cond_a;
	if ( c >= 0x1113 )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method public static isJamoV(I)Z
bool android::icu::impl::Normalizer2Impl_S_Hangul::isJamoV(int c)
{
	
	bool cVar1;
	
	//    .param p0, "c"    # I
	cVar1 = 0x0;
	if ( 0x1161 >  c )
		goto label_cond_a;
	if ( c >= 0x1176 )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}


