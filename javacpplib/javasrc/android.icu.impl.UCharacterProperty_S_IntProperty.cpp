// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$IntProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_IntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;I)V
android::icu::impl::UCharacterProperty_S_IntProperty::UCharacterProperty_S_IntProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int source)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "source"    # I
	this->this_S_0 = this_S_0;
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->column = source;
	this->mask = 0x0;
	return;

}
// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;III)V
android::icu::impl::UCharacterProperty_S_IntProperty::UCharacterProperty_S_IntProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int column,int mask,int shift)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "column"    # I
	//    .param p3, "mask"    # I
	//    .param p4, "shift"    # I
	this->this_S_0 = this_S_0;
	// 062    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->column = column;
	this->mask = mask;
	this->shift = shift;
	return;

}
// .method getMaxValue(I)I
int android::icu::impl::UCharacterProperty_S_IntProperty::getMaxValue(int which)
{
	
	//    .param p1, "which"    # I
	return _ushri((this->this_S_0->getMaxValues(this->column) &  this->mask),this->shift);

}
// .method final getSource()I
int android::icu::impl::UCharacterProperty_S_IntProperty::getSource()
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
// .method getValue(I)I
int android::icu::impl::UCharacterProperty_S_IntProperty::getValue(int c)
{
	
	//    .param p1, "c"    # I
	return _ushri((this->this_S_0->getAdditional(c, this->column) &  this->mask),this->shift);

}


