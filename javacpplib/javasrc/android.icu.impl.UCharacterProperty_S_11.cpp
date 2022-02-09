// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$11.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.impl.UCharacterProperty_S_11.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "android.icu.lang.UCharacter.h"
#include "java.lang.Character.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;Landroid/icu/impl/UCharacterProperty;I)V
android::icu::impl::UCharacterProperty_S_11::UCharacterProperty_S_11(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1,int _S_anonymous0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "this$0_1"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p3, "$anonymous0"    # I
	this->this_S_0 = this_S_0_1;
	android::icu::impl::UCharacterProperty_S_BinaryProperty::(this_S_0, _S_anonymous0);
	return;

}
// .method contains(I)Z
bool android::icu::impl::UCharacterProperty_S_11::contains(int cVar3)
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> nfd;
	int cVar3;
	
	//    .param p1, "c"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	nfd = android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->impl->getDecomposition(cVar3);
	//    .local v2, "nfd":Ljava/lang/String;
	if ( !(nfd) )  
		goto label_cond_2f;
	cVar3 = nfd->codePointAt(cVar1);
	if ( java::lang::Character::charCount(cVar3) == nfd->length() )
		goto label_cond_1d;
	cVar3 = -0x1;
label_cond_1d:
	if ( cVar3 < 0 ) 
		goto label_cond_34;
	//    .local v0, "csp":Landroid/icu/impl/UCaseProps;
	android::icu::impl::UCaseProps::dummyStringBuilder->setLength(cVar1);
	if ( android::icu::impl::UCaseProps::INSTANCE->toFullFolding(cVar3, android::icu::impl::UCaseProps::dummyStringBuilder, cVar1) < 0 ) 
		goto label_cond_32;
label_goto_2e:
	return cVar0;
	// 109    .line 376
	// 110    .end local v0    # "csp":Landroid/icu/impl/UCaseProps;
label_cond_2f:
	if ( cVar3 >= 0 )
		goto label_cond_1d;
	return cVar1;
	// 117    .restart local v0    # "csp":Landroid/icu/impl/UCaseProps;
label_cond_32:
	cVar0 = cVar1;
	goto label_goto_2e;
	// 124    .line 386
	// 125    .end local v0    # "csp":Landroid/icu/impl/UCaseProps;
label_cond_34:
	//    .local v1, "folded":Ljava/lang/String;
	return ( android::icu::lang::UCharacter::foldCase(nfd, cVar0)->equals(nfd) ^ 0x1);

}


