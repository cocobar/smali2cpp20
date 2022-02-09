// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\IDNA.smali
#include "java2ctype.h"
#include "android.icu.impl.IDNA2003.h"
#include "android.icu.impl.UTS46.h"
#include "android.icu.text.IDNA_S_Error.h"
#include "android.icu.text.IDNA_S_Info.h"
#include "android.icu.text.IDNA.h"
#include "android.icu.text.UCharacterIterator.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.EnumSet.h"

static android::icu::text::IDNA::ALLOW_UNASSIGNED = 0x1;
static android::icu::text::IDNA::CHECK_BIDI = 0x4;
static android::icu::text::IDNA::CHECK_CONTEXTJ = 0x8;
static android::icu::text::IDNA::CHECK_CONTEXTO = 0x40;
static android::icu::text::IDNA::DEFAULT = 0x0;
static android::icu::text::IDNA::NONTRANSITIONAL_TO_ASCII = 0x10;
static android::icu::text::IDNA::NONTRANSITIONAL_TO_UNICODE = 0x20;
static android::icu::text::IDNA::USE_STD3_RULES = 0x2;
// .method protected constructor <init>()V
android::icu::text::IDNA::IDNA()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 040    .end annotation
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method protected static addError(Landroid/icu/text/IDNA$Info;Landroid/icu/text/IDNA$Error;)V
void android::icu::text::IDNA::addError(std::shared_ptr<android::icu::text::IDNA_S_Info> info,std::shared_ptr<android::icu::text::IDNA_S_Error> error)
{
	
	//    .param p0, "info"    # Landroid/icu/text/IDNA$Info;
	//    .param p1, "error"    # Landroid/icu/text/IDNA$Error;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 055    .end annotation
	android::icu::text::IDNA_S_Info::-get0(info)->add(error);
	return;

}
// .method protected static addLabelError(Landroid/icu/text/IDNA$Info;Landroid/icu/text/IDNA$Error;)V
void android::icu::text::IDNA::addLabelError(std::shared_ptr<android::icu::text::IDNA_S_Info> info,std::shared_ptr<android::icu::text::IDNA_S_Error> error)
{
	
	//    .param p0, "info"    # Landroid/icu/text/IDNA$Info;
	//    .param p1, "error"    # Landroid/icu/text/IDNA$Error;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 074    .end annotation
	android::icu::text::IDNA_S_Info::-get3(info)->add(error);
	return;

}
// .method public static compare(Landroid/icu/text/UCharacterIterator;Landroid/icu/text/UCharacterIterator;I)I
int android::icu::text::IDNA::compare(std::shared_ptr<android::icu::text::UCharacterIterator> s1,std::shared_ptr<android::icu::text::UCharacterIterator> s2,int options)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "s1"    # Landroid/icu/text/UCharacterIterator;
	//    .param p1, "s2"    # Landroid/icu/text/UCharacterIterator;
	//    .param p2, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 094        value = {
	// 095            Landroid/icu/text/StringPrepParseException;
	// 096        }
	// 097    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 100    .end annotation
	if ( !(s1) )  
		goto label_cond_4;
	if ( s2 )     
		goto label_cond_d;
label_cond_4:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("One of the source buffers is null")));
	// throw
	throw cVar0;
	// 118    .line 958
label_cond_d:
	return android::icu::impl::IDNA2003::compare(s1->getText(), s2->getText(), options);

}
// .method public static compare(Ljava/lang/String;Ljava/lang/String;I)I
int android::icu::text::IDNA::compare(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2,int options)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "s1"    # Ljava/lang/String;
	//    .param p1, "s2"    # Ljava/lang/String;
	//    .param p2, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 141        value = {
	// 142            Landroid/icu/text/StringPrepParseException;
	// 143        }
	// 144    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 147    .end annotation
	if ( !(s1) )  
		goto label_cond_4;
	if ( s2 )     
		goto label_cond_d;
label_cond_4:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("One of the source buffers is null")));
	// throw
	throw cVar0;
	// 165    .line 922
label_cond_d:
	return android::icu::impl::IDNA2003::compare(s1, s2, options);

}
// .method public static compare(Ljava/lang/StringBuffer;Ljava/lang/StringBuffer;I)I
int android::icu::text::IDNA::compare(std::shared_ptr<java::lang::StringBuffer> s1,std::shared_ptr<java::lang::StringBuffer> s2,int options)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "s1"    # Ljava/lang/StringBuffer;
	//    .param p1, "s2"    # Ljava/lang/StringBuffer;
	//    .param p2, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 180        value = {
	// 181            Landroid/icu/text/StringPrepParseException;
	// 182        }
	// 183    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 186    .end annotation
	if ( !(s1) )  
		goto label_cond_4;
	if ( s2 )     
		goto label_cond_d;
label_cond_4:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("One of the source buffers is null")));
	// throw
	throw cVar0;
	// 204    .line 886
label_cond_d:
	return android::icu::impl::IDNA2003::compare(s1->toString(), s2->toString(), options);

}
// .method public static convertIDNToASCII(Landroid/icu/text/UCharacterIterator;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::IDNA::convertIDNToASCII(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options)
{
	
	//    .param p0, "src"    # Landroid/icu/text/UCharacterIterator;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 226        value = {
	// 227            Landroid/icu/text/StringPrepParseException;
	// 228        }
	// 229    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 232    .end annotation
	return android::icu::text::IDNA::convertIDNToASCII(src->getText(), options);

}
// .method public static convertIDNToASCII(Ljava/lang/String;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::IDNA::convertIDNToASCII(std::shared_ptr<java::lang::String> src,int options)
{
	
	//    .param p0, "src"    # Ljava/lang/String;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 252        value = {
	// 253            Landroid/icu/text/StringPrepParseException;
	// 254        }
	// 255    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 258    .end annotation
	return android::icu::impl::IDNA2003::convertIDNToASCII(src, options);

}
// .method public static convertIDNToASCII(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::IDNA::convertIDNToASCII(std::shared_ptr<java::lang::StringBuffer> src,int options)
{
	
	//    .param p0, "src"    # Ljava/lang/StringBuffer;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 274        value = {
	// 275            Landroid/icu/text/StringPrepParseException;
	// 276        }
	// 277    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 280    .end annotation
	return android::icu::text::IDNA::convertIDNToASCII(src->toString(), options);

}
// .method public static convertIDNToUnicode(Landroid/icu/text/UCharacterIterator;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::IDNA::convertIDNToUnicode(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options)
{
	
	//    .param p0, "src"    # Landroid/icu/text/UCharacterIterator;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 300        value = {
	// 301            Landroid/icu/text/StringPrepParseException;
	// 302        }
	// 303    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 306    .end annotation
	return android::icu::text::IDNA::convertIDNToUnicode(src->getText(), options);

}
// .method public static convertIDNToUnicode(Ljava/lang/String;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::IDNA::convertIDNToUnicode(std::shared_ptr<java::lang::String> src,int options)
{
	
	//    .param p0, "src"    # Ljava/lang/String;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 326        value = {
	// 327            Landroid/icu/text/StringPrepParseException;
	// 328        }
	// 329    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 332    .end annotation
	return android::icu::impl::IDNA2003::convertIDNToUnicode(src, options);

}
// .method public static convertIDNToUnicode(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::IDNA::convertIDNToUnicode(std::shared_ptr<java::lang::StringBuffer> src,int options)
{
	
	//    .param p0, "src"    # Ljava/lang/StringBuffer;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 348        value = {
	// 349            Landroid/icu/text/StringPrepParseException;
	// 350        }
	// 351    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 354    .end annotation
	return android::icu::text::IDNA::convertIDNToUnicode(src->toString(), options);

}
// .method public static convertToASCII(Landroid/icu/text/UCharacterIterator;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::IDNA::convertToASCII(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options)
{
	
	//    .param p0, "src"    # Landroid/icu/text/UCharacterIterator;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 374        value = {
	// 375            Landroid/icu/text/StringPrepParseException;
	// 376        }
	// 377    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 380    .end annotation
	return android::icu::impl::IDNA2003::convertToASCII(src, options);

}
// .method public static convertToASCII(Ljava/lang/String;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::IDNA::convertToASCII(std::shared_ptr<java::lang::String> src,int options)
{
	
	//    .param p0, "src"    # Ljava/lang/String;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 396        value = {
	// 397            Landroid/icu/text/StringPrepParseException;
	// 398        }
	// 399    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 402    .end annotation
	//    .local v0, "iter":Landroid/icu/text/UCharacterIterator;
	return android::icu::text::IDNA::convertToASCII(android::icu::text::UCharacterIterator::getInstance(src), options);

}
// .method public static convertToASCII(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::IDNA::convertToASCII(std::shared_ptr<java::lang::StringBuffer> src,int options)
{
	
	//    .param p0, "src"    # Ljava/lang/StringBuffer;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 424        value = {
	// 425            Landroid/icu/text/StringPrepParseException;
	// 426        }
	// 427    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 430    .end annotation
	//    .local v0, "iter":Landroid/icu/text/UCharacterIterator;
	return android::icu::text::IDNA::convertToASCII(android::icu::text::UCharacterIterator::getInstance(src), options);

}
// .method public static convertToUnicode(Landroid/icu/text/UCharacterIterator;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::IDNA::convertToUnicode(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options)
{
	
	//    .param p0, "src"    # Landroid/icu/text/UCharacterIterator;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 452        value = {
	// 453            Landroid/icu/text/StringPrepParseException;
	// 454        }
	// 455    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 458    .end annotation
	return android::icu::impl::IDNA2003::convertToUnicode(src, options);

}
// .method public static convertToUnicode(Ljava/lang/String;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::IDNA::convertToUnicode(std::shared_ptr<java::lang::String> src,int options)
{
	
	//    .param p0, "src"    # Ljava/lang/String;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 474        value = {
	// 475            Landroid/icu/text/StringPrepParseException;
	// 476        }
	// 477    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 480    .end annotation
	//    .local v0, "iter":Landroid/icu/text/UCharacterIterator;
	return android::icu::text::IDNA::convertToUnicode(android::icu::text::UCharacterIterator::getInstance(src), options);

}
// .method public static convertToUnicode(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::IDNA::convertToUnicode(std::shared_ptr<java::lang::StringBuffer> src,int options)
{
	
	//    .param p0, "src"    # Ljava/lang/StringBuffer;
	//    .param p1, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 502        value = {
	// 503            Landroid/icu/text/StringPrepParseException;
	// 504        }
	// 505    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 508    .end annotation
	//    .local v0, "iter":Landroid/icu/text/UCharacterIterator;
	return android::icu::text::IDNA::convertToUnicode(android::icu::text::UCharacterIterator::getInstance(src), options);

}
// .method public static getUTS46Instance(I)Landroid/icu/text/IDNA;
std::shared_ptr<android::icu::text::IDNA> android::icu::text::IDNA::getUTS46Instance(int options)
{
	
	std::shared_ptr<android::icu::impl::UTS46> cVar0;
	
	//    .param p0, "options"    # I
	cVar0 = std::make_shared<android::icu::impl::UTS46>(options);
	return cVar0;

}
// .method protected static hasCertainErrors(Landroid/icu/text/IDNA$Info;Ljava/util/EnumSet;)Z
bool android::icu::text::IDNA::hasCertainErrors(std::shared_ptr<android::icu::text::IDNA_S_Info> info,std::shared_ptr<java::util::EnumSet<android::icu::text::IDNA_S_Error>> errors)
{
	
	bool cVar0;
	
	//    .param p0, "info"    # Landroid/icu/text/IDNA$Info;
	//    .annotation system Ldalvik/annotation/Signature;
	// 542        value = {
	// 543            "(",
	// 544            "Landroid/icu/text/IDNA$Info;",
	// 545            "Ljava/util/EnumSet",
	// 546            "<",
	// 547            "Landroid/icu/text/IDNA$Error;",
	// 548            ">;)Z"
	// 549        }
	// 550    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 553    .end annotation
	//    .local p1, "errors":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/IDNA$Error;>;"
	if ( android::icu::text::IDNA_S_Info::-get0(info)->isEmpty() )     
		goto label_cond_15;
	cVar0 = ( java::util::Collections::disjoint(android::icu::text::IDNA_S_Info::-get0(info), errors) ^ 0x1);
label_goto_14:
	return cVar0;
label_cond_15:
	cVar0 = 0x0;
	goto label_goto_14;

}
// .method protected static hasCertainLabelErrors(Landroid/icu/text/IDNA$Info;Ljava/util/EnumSet;)Z
bool android::icu::text::IDNA::hasCertainLabelErrors(std::shared_ptr<android::icu::text::IDNA_S_Info> info,std::shared_ptr<java::util::EnumSet<android::icu::text::IDNA_S_Error>> errors)
{
	
	bool cVar0;
	
	//    .param p0, "info"    # Landroid/icu/text/IDNA$Info;
	//    .annotation system Ldalvik/annotation/Signature;
	// 591        value = {
	// 592            "(",
	// 593            "Landroid/icu/text/IDNA$Info;",
	// 594            "Ljava/util/EnumSet",
	// 595            "<",
	// 596            "Landroid/icu/text/IDNA$Error;",
	// 597            ">;)Z"
	// 598        }
	// 599    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 602    .end annotation
	//    .local p1, "errors":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/IDNA$Error;>;"
	if ( android::icu::text::IDNA_S_Info::-get3(info)->isEmpty() )     
		goto label_cond_15;
	cVar0 = ( java::util::Collections::disjoint(android::icu::text::IDNA_S_Info::-get3(info), errors) ^ 0x1);
label_goto_14:
	return cVar0;
label_cond_15:
	cVar0 = 0x0;
	goto label_goto_14;

}
// .method protected static isBiDi(Landroid/icu/text/IDNA$Info;)Z
bool android::icu::text::IDNA::isBiDi(std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	//    .param p0, "info"    # Landroid/icu/text/IDNA$Info;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 640    .end annotation
	return android::icu::text::IDNA_S_Info::-get1(info);

}
// .method protected static isOkBiDi(Landroid/icu/text/IDNA$Info;)Z
bool android::icu::text::IDNA::isOkBiDi(std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	//    .param p0, "info"    # Landroid/icu/text/IDNA$Info;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 655    .end annotation
	return android::icu::text::IDNA_S_Info::-get2(info);

}
// .method protected static promoteAndResetLabelErrors(Landroid/icu/text/IDNA$Info;)V
void android::icu::text::IDNA::promoteAndResetLabelErrors(std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	//    .param p0, "info"    # Landroid/icu/text/IDNA$Info;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 670    .end annotation
	if ( android::icu::text::IDNA_S_Info::-get3(info)->isEmpty() )     
		goto label_cond_1c;
	android::icu::text::IDNA_S_Info::-get0(info)->addAll(android::icu::text::IDNA_S_Info::-get3(info));
	android::icu::text::IDNA_S_Info::-get3(info)->clear();
label_cond_1c:
	return;

}
// .method protected static resetInfo(Landroid/icu/text/IDNA$Info;)V
void android::icu::text::IDNA::resetInfo(std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	//    .param p0, "info"    # Landroid/icu/text/IDNA$Info;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 711    .end annotation
	android::icu::text::IDNA_S_Info::-wrap0(info);
	return;

}
// .method protected static setBiDi(Landroid/icu/text/IDNA$Info;)V
void android::icu::text::IDNA::setBiDi(std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	//    .param p0, "info"    # Landroid/icu/text/IDNA$Info;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 725    .end annotation
	android::icu::text::IDNA_S_Info::-set0(info, 0x1);
	return;

}
// .method protected static setNotOkBiDi(Landroid/icu/text/IDNA$Info;)V
void android::icu::text::IDNA::setNotOkBiDi(std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	//    .param p0, "info"    # Landroid/icu/text/IDNA$Info;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 741    .end annotation
	android::icu::text::IDNA_S_Info::-set1(info, 0x0);
	return;

}
// .method protected static setTransitionalDifferent(Landroid/icu/text/IDNA$Info;)V
void android::icu::text::IDNA::setTransitionalDifferent(std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	//    .param p0, "info"    # Landroid/icu/text/IDNA$Info;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 757    .end annotation
	android::icu::text::IDNA_S_Info::-set2(info, 0x1);
	return;

}


