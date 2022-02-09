// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationBuilder$CEFinalizer.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.Collation.h"
#include "android.icu.impl.coll.CollationBuilder_S_CEFinalizer.h"
#include "android.icu.impl.coll.CollationBuilder.h"
#include "java.lang.AssertionError.h"

static android::icu::impl::coll::CollationBuilder_S_CEFinalizer::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationBuilder_S_CEFinalizer::static_cinit()
{
	
	android::icu::impl::coll::CollationBuilder_S_CEFinalizer::_assertionsDisabled = ( android::icu::impl::coll::CollationBuilder_S_CEFinalizer()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>([J)V
android::icu::impl::coll::CollationBuilder_S_CEFinalizer::CollationBuilder_S_CEFinalizer(std::shared_ptr<long long[]> ces)
{
	
	//    .param p1, "ces"    # [J
	// 053    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->finalCEs = ces;
	return;

}
// .method public modifyCE(J)J
long long android::icu::impl::coll::CollationBuilder_S_CEFinalizer::modifyCE(long long ce)
{
	
	//    .param p1, "ce"    # J
	if ( !(android::icu::impl::coll::CollationBuilder::-wrap1(ce)) )  
		goto label_cond_14;
	return (this->finalCEs[android::icu::impl::coll::CollationBuilder::-wrap3(ce)] |  (0xc000 &  ce));
	// 093    .line 1346
label_cond_14:
	return 0x101000100L;

}
// .method public modifyCE32(I)J
long long android::icu::impl::coll::CollationBuilder_S_CEFinalizer::modifyCE32(int ce32)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "ce32"    # I
	if ( android::icu::impl::coll::CollationBuilder_S_CEFinalizer::_assertionsDisabled )     
		goto label_cond_10;
	if ( !(android::icu::impl::coll::Collation::isSpecialCE32(ce32)) )  
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 122    .line 1333
label_cond_10:
	if ( !(android::icu::impl::coll::CollationBuilder::-wrap0(ce32)) )  
		goto label_cond_25;
	return (this->finalCEs[android::icu::impl::coll::CollationBuilder::-wrap2(ce32)] |  (long long)(( ( ce32 & 0xc0) << 0x8)));
	// 149    .line 1337
label_cond_25:
	return 0x101000100L;

}


