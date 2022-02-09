// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UFieldPosition.smali
#include "java2ctype.h"
#include "android.icu.text.UFieldPosition.h"
#include "java.text.FieldPosition.h"
#include "java.text.Format_S_Field.h"

// .method public constructor <init>()V
android::icu::text::UFieldPosition::UFieldPosition()
{
	
	int cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 021    .end annotation
	cVar0 = -0x1;
	java::text::FieldPosition::(cVar0);
	this->countVisibleFractionDigits = cVar0;
	this->fractionDigits = 0x0;
	return;

}
// .method public constructor <init>(I)V
android::icu::text::UFieldPosition::UFieldPosition(int field)
{
	
	//    .param p1, "field"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 045    .end annotation
	java::text::FieldPosition::(field);
	this->countVisibleFractionDigits = -0x1;
	this->fractionDigits = 0x0;
	return;

}
// .method public constructor <init>(Ljava/text/Format$Field;)V
android::icu::text::UFieldPosition::UFieldPosition(std::shared_ptr<java::text::Format_S_Field> attribute)
{
	
	//    .param p1, "attribute"    # Ljava/text/Format$Field;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 069    .end annotation
	java::text::FieldPosition::(attribute);
	this->countVisibleFractionDigits = -0x1;
	this->fractionDigits = 0x0;
	return;

}
// .method public constructor <init>(Ljava/text/Format$Field;I)V
android::icu::text::UFieldPosition::UFieldPosition(std::shared_ptr<java::text::Format_S_Field> attribute,int fieldID)
{
	
	//    .param p1, "attribute"    # Ljava/text/Format$Field;
	//    .param p2, "fieldID"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 094    .end annotation
	java::text::FieldPosition::(attribute, fieldID);
	this->countVisibleFractionDigits = -0x1;
	this->fractionDigits = 0x0;
	return;

}
// .method public getCountVisibleFractionDigits()I
int android::icu::text::UFieldPosition::getCountVisibleFractionDigits()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 119    .end annotation
	return this->countVisibleFractionDigits;

}
// .method public getFractionDigits()J
long long android::icu::text::UFieldPosition::getFractionDigits()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 131    .end annotation
	return this->fractionDigits;

}
// .method public setFractionDigits(IJ)V
void android::icu::text::UFieldPosition::setFractionDigits(int countVisibleFractionDigits,long long fractionDigits)
{
	
	//    .param p1, "countVisibleFractionDigits"    # I
	//    .param p2, "fractionDigits"    # J
	//    .annotation runtime Ljava/lang/Deprecated;
	// 145    .end annotation
	this->countVisibleFractionDigits = countVisibleFractionDigits;
	this->fractionDigits = fractionDigits;
	return;

}


