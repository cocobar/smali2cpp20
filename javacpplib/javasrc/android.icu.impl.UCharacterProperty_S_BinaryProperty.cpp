// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$BinaryProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;I)V
android::icu::impl::UCharacterProperty_S_BinaryProperty::UCharacterProperty_S_BinaryProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int source)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "source"    # I
	this->this_S_0 = this_S_0;
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->column = source;
	this->mask = 0x0;
	return;

}
// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;II)V
android::icu::impl::UCharacterProperty_S_BinaryProperty::UCharacterProperty_S_BinaryProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int column,int mask)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "column"    # I
	//    .param p3, "mask"    # I
	this->this_S_0 = this_S_0;
	// 059    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->column = column;
	this->mask = mask;
	return;

}
// .method contains(I)Z
bool android::icu::impl::UCharacterProperty_S_BinaryProperty::contains(int c)
{
	
	bool cVar1;
	
	//    .param p1, "c"    # I
	cVar1 = 0x0;
	if ( !((this->this_S_0->getAdditional(c, this->column) &  this->mask)) )  
		goto label_cond_f;
	cVar1 = 0x1;
label_cond_f:
	return cVar1;

}
// .method final getSource()I
int android::icu::impl::UCharacterProperty_S_BinaryProperty::getSource()
{
	
	int cVar0;
	
	if ( this->mask )     
		goto label_cond_7;
	cVar0 = this->column;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = 0x2;
	goto label_goto_6;

}


