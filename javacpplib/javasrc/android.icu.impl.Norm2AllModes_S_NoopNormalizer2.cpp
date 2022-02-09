// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$NoopNormalizer2.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_NoopNormalizer2.h"
#include "android.icu.text.Normalizer_S_QuickCheckResult.h"
#include "android.icu.text.Normalizer.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "java.io.IOException.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"

// .method public constructor <init>()V
android::icu::impl::Norm2AllModes_S_NoopNormalizer2::Norm2AllModes_S_NoopNormalizer2()
{
	
	// 023    invoke-direct {p0}, Landroid/icu/text/Normalizer2;-><init>()V
	return;

}
// .method public append(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::Norm2AllModes_S_NoopNormalizer2::append(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "first"    # Ljava/lang/StringBuilder;
	//    .param p2, "second"    # Ljava/lang/CharSequence;
	if ( first == second )
		goto label_cond_7;
	return first->append(second);
	// 046    .line 62
label_cond_7:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;

}
// .method public getDecomposition(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Norm2AllModes_S_NoopNormalizer2::getDecomposition(int c)
{
	
	//    .param p1, "c"    # I
	return 0x0;

}
// .method public hasBoundaryAfter(I)Z
bool android::icu::impl::Norm2AllModes_S_NoopNormalizer2::hasBoundaryAfter(int c)
{
	
	//    .param p1, "c"    # I
	return 0x1;

}
// .method public hasBoundaryBefore(I)Z
bool android::icu::impl::Norm2AllModes_S_NoopNormalizer2::hasBoundaryBefore(int c)
{
	
	//    .param p1, "c"    # I
	return 0x1;

}
// .method public isInert(I)Z
bool android::icu::impl::Norm2AllModes_S_NoopNormalizer2::isInert(int c)
{
	
	//    .param p1, "c"    # I
	return 0x1;

}
// .method public isNormalized(Ljava/lang/CharSequence;)Z
bool android::icu::impl::Norm2AllModes_S_NoopNormalizer2::isNormalized(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	return 0x1;

}
// .method public normalize(Ljava/lang/CharSequence;Ljava/lang/Appendable;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::impl::Norm2AllModes_S_NoopNormalizer2::normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "dest"    # Ljava/lang/Appendable;
	if ( dest == src )
		goto label_cond_e;
	try {
	//label_try_start_2:
	//label_try_end_5:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7;
	}
	//    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_5} :catch_7
	return dest->append(src);
	// 129    .line 42
label_catch_7:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 141    .line 46
	// 142    .end local v0    # "e":Ljava/io/IOException;
label_cond_e:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar1;

}
// .method public normalize(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::Norm2AllModes_S_NoopNormalizer2::normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::StringBuilder> dest)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "dest"    # Ljava/lang/StringBuilder;
	if ( dest == src )
		goto label_cond_b;
	dest->setLength(0x0);
	return dest->append(src);
	// 172    .line 34
label_cond_b:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;

}
// .method public normalizeSecondAndAppend(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::Norm2AllModes_S_NoopNormalizer2::normalizeSecondAndAppend(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "first"    # Ljava/lang/StringBuilder;
	//    .param p2, "second"    # Ljava/lang/CharSequence;
	if ( first == second )
		goto label_cond_7;
	return first->append(second);
	// 197    .line 54
label_cond_7:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;

}
// .method public quickCheck(Ljava/lang/CharSequence;)Landroid/icu/text/Normalizer$QuickCheckResult;
std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> android::icu::impl::Norm2AllModes_S_NoopNormalizer2::quickCheck(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	return android::icu::text::Normalizer::YES;

}
// .method public spanQuickCheckYes(Ljava/lang/CharSequence;)I
int android::icu::impl::Norm2AllModes_S_NoopNormalizer2::spanQuickCheckYes(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	return s->length();

}


