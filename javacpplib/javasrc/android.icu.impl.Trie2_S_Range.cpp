// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2$Range.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"

// .method public constructor <init>()V
android::icu::impl::Trie2_S_Range::Trie2_S_Range()
{
	
	// 033    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::Trie2_S_Range::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> tother;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(other) )  
		goto label_cond_13;
	if ( !(( other->getClass()->equals(this->getClass()) ^ 0x1)) )  
		goto label_cond_14;
label_cond_13:
	return cVar1;
label_cond_14:
	tother = other;
	tother->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v0, "tother":Landroid/icu/impl/Trie2$Range;
	if ( this->startCodePoint != tother->startCodePoint )
		goto label_cond_30;
	if ( this->endCodePoint != tother->endCodePoint )
		goto label_cond_30;
	if ( this->value != tother->value )
		goto label_cond_30;
	if ( this->leadSurrogate != tother->leadSurrogate )
		goto label_cond_30;
	cVar1 = 0x1;
label_cond_30:
	return cVar1;

}
// .method public hashCode()I
int android::icu::impl::Trie2_S_Range::hashCode()
{
	
	int cVar0;
	
	//    .local v0, "h":I
	if ( !(this->leadSurrogate) )  
		goto label_cond_20;
	cVar0 = 0x1;
label_goto_1b:
	return android::icu::impl::Trie2::-wrap0(android::icu::impl::Trie2::-wrap1(android::icu::impl::Trie2::-wrap2(android::icu::impl::Trie2::-wrap2(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap2(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap2(android::icu::impl::Trie2::-wrap2(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap2(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap1(android::icu::impl::Trie2::-wrap2(android::icu::impl::Trie2::-wrap2(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap2(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap2(android::icu::impl::Trie2::-wrap2(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap2(android::icu::impl::Trie2::-wrap3(android::icu::impl::Trie2::-wrap3({const[class].FS-Param}), this->startCodePoint), this->startCodePoint), this->endCodePoint), this->startCodePoint), this->startCodePoint), this->endCodePoint), this->value), this->startCodePoint), this->startCodePoint), this->endCodePoint), this->startCodePoint), this->startCodePoint), this->endCodePoint), this->value), cVar0), this->startCodePoint), this->startCodePoint), this->endCodePoint), this->startCodePoint), this->startCodePoint), this->endCodePoint), this->value), this->startCodePoint), this->startCodePoint), this->endCodePoint), this->startCodePoint), this->startCodePoint), this->endCodePoint), this->value), cVar0);
	// 158    .line 367
label_cond_20:
	cVar0 = 0x0;
	goto label_goto_1b;

}


