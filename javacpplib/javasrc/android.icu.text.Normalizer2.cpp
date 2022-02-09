// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer2.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.Norm2AllModes_S_ComposeNormalizer2.h"
#include "android.icu.impl.Norm2AllModes_S_DecomposeNormalizer2.h"
#include "android.icu.impl.Norm2AllModes_S_FCDNormalizer2.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.text.Normalizer2_S_Mode.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.lang.CharSequence.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.nio.ByteBuffer.h"

static android::icu::text::Normalizer2::_android_icu_text_Normalizer2_S_ModeSwitchesValues;
// .method private static synthetic -getandroid-icu-text-Normalizer2$ModeSwitchesValues()[I
int android::icu::text::Normalizer2::_getandroid_icu_text_Normalizer2_S_ModeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::text::Normalizer2::_android_icu_text_Normalizer2_S_ModeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::text::Normalizer2::_android_icu_text_Normalizer2_S_ModeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::Normalizer2_S_Mode::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::Normalizer2_S_Mode::COMPOSE->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3b;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_3b
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::text::Normalizer2_S_Mode::COMPOSE_CONTIGUOUS->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_39;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_39
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::text::Normalizer2_S_Mode::DECOMPOSE->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_37
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[android::icu::text::Normalizer2_S_Mode::FCD->ordinal()] = 0x4;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_35
label_goto_32:
	android::icu::text::Normalizer2::_android_icu_text_Normalizer2_S_ModeSwitchesValues = cVar0;
	return cVar0;
label_catch_35:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_37:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_39:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_3b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method protected constructor <init>()V
android::icu::text::Normalizer2::Normalizer2()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 123    .end annotation
	// 127    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getInstance(Ljava/io/InputStream;Ljava/lang/String;Landroid/icu/text/Normalizer2$Mode;)Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::text::Normalizer2::getInstance(std::shared_ptr<java::io::InputStream> data,std::shared_ptr<java::lang::String> name,std::shared_ptr<android::icu::text::Normalizer2_S_Mode> mode)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_ComposeNormalizer2> all2Modes;
	
	//    .param p0, "data"    # Ljava/io/InputStream;
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "mode"    # Landroid/icu/text/Normalizer2$Mode;
	//    .local v1, "bytes":Ljava/nio/ByteBuffer;
	if ( !(data) )  
		goto label_cond_8;
	try {
	//label_try_start_4:
	//label_try_end_7:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1a;
	}
	//    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_7} :catch_1a
	//    .end local v1    # "bytes":Ljava/nio/ByteBuffer;
label_cond_8:
	all2Modes = android::icu::impl::Norm2AllModes::getInstance(0x0, name);
	//    .local v0, "all2Modes":Landroid/icu/impl/Norm2AllModes;
	// switch
	{
	auto item = ( android::icu::text::Normalizer2::-getandroid-icu-text-Normalizer2$ModeSwitchesValues({const[class].FS-Param})[mode->ordinal()] );
	if (item == 1) goto label_pswitch_21;
	if (item == 2) goto label_pswitch_2a;
	if (item == 3) goto label_pswitch_24;
	if (item == 4) goto label_pswitch_27;
	}
	return 0x0;
	// 181    .line 187
	// 182    .end local v0    # "all2Modes":Landroid/icu/impl/Norm2AllModes;
	// 183    .restart local v1    # "bytes":Ljava/nio/ByteBuffer;
label_catch_1a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 195    .line 193
	// 196    .end local v1    # "bytes":Ljava/nio/ByteBuffer;
	// 197    .end local v2    # "e":Ljava/io/IOException;
	// 198    .restart local v0    # "all2Modes":Landroid/icu/impl/Norm2AllModes;
label_pswitch_21:
	return all2Modes->comp;
	// 204    .line 194
label_pswitch_24:
	return all2Modes->decomp;
	// 210    .line 195
label_pswitch_27:
	return all2Modes->fcd;
	// 216    .line 196
label_pswitch_2a:
	return all2Modes->fcc;
	// 222    .line 192
	// 223    nop
	// 225    :pswitch_data_2e
	// 226    .packed-switch 0x1
	// 227        :pswitch_21
	// 228        :pswitch_2a
	// 229        :pswitch_24
	// 230        :pswitch_27
	// 231    .end packed-switch

}
// .method public static getNFCInstance()Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::text::Normalizer2::getNFCInstance()
{
	
	return android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->comp;

}
// .method public static getNFDInstance()Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::text::Normalizer2::getNFDInstance()
{
	
	return android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->decomp;

}
// .method public static getNFKCCasefoldInstance()Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::text::Normalizer2::getNFKCCasefoldInstance()
{
	
	return android::icu::impl::Norm2AllModes::getNFKC_CFInstance({const[class].FS-Param})->comp;

}
// .method public static getNFKCInstance()Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::text::Normalizer2::getNFKCInstance()
{
	
	return android::icu::impl::Norm2AllModes::getNFKCInstance({const[class].FS-Param})->comp;

}
// .method public static getNFKDInstance()Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::text::Normalizer2::getNFKDInstance()
{
	
	return android::icu::impl::Norm2AllModes::getNFKCInstance({const[class].FS-Param})->decomp;

}
// .method public composePair(II)I
int android::icu::text::Normalizer2::composePair(int a,int b)
{
	
	//    .param p1, "a"    # I
	//    .param p2, "b"    # I
	return -0x1;

}
// .method public getCombiningClass(I)I
int android::icu::text::Normalizer2::getCombiningClass(int c)
{
	
	//    .param p1, "c"    # I
	return 0x0;

}
// .method public getRawDecomposition(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer2::getRawDecomposition(int c)
{
	
	//    .param p1, "c"    # I
	return 0x0;

}
// .method public normalize(Ljava/lang/CharSequence;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer2::normalize(std::shared_ptr<java::lang::CharSequence> src)
{
	
	int spanLength;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	if ( !(src->instanceOf("java::lang::String")) )  
		goto label_cond_30;
	spanLength = this->spanQuickCheckYes(src);
	//    .local v1, "spanLength":I
	if ( spanLength != src->length() )
		goto label_cond_11;
	src->checkCast("java::lang::String");
	//    .end local p1    # "src":Ljava/lang/CharSequence;
	return src;
	// 390    .line 214
	// 391    .restart local p1    # "src":Ljava/lang/CharSequence;
label_cond_11:
	cVar0 = std::make_shared<java::lang::StringBuilder>(src->length());
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	return this->normalizeSecondAndAppend(cVar0->append(src, 0x0, spanLength), src->subSequence(spanLength, src->length()))->toString();
	// 427    .line 217
	// 428    .end local v0    # "sb":Ljava/lang/StringBuilder;
	// 429    .end local v1    # "spanLength":I
label_cond_30:
	cVar1 = std::make_shared<java::lang::StringBuilder>(src->length());
	return this->normalize(src, cVar1)->toString();

}


