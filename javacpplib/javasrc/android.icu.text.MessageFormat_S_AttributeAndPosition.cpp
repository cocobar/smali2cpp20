// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessageFormat$AttributeAndPosition.smali
#include "java2ctype.h"
#include "android.icu.text.MessageFormat_S_AttributeAndPosition.h"
#include "android.icu.text.MessageFormat_S_Field.h"
#include "java.lang.Object.h"
#include "java.text.AttributedCharacterIterator_S_Attribute.h"

// .method static synthetic -get0(Landroid/icu/text/MessageFormat$AttributeAndPosition;)Ljava/text/AttributedCharacterIterator$Attribute;
std::shared_ptr<java::text::AttributedCharacterIterator_S_Attribute> android::icu::text::MessageFormat_S_AttributeAndPosition::_get0(std::shared_ptr<android::icu::text::MessageFormat_S_AttributeAndPosition> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessageFormat$AttributeAndPosition;
	return _this->key;

}
// .method static synthetic -get1(Landroid/icu/text/MessageFormat$AttributeAndPosition;)I
int android::icu::text::MessageFormat_S_AttributeAndPosition::_get1(std::shared_ptr<android::icu::text::MessageFormat_S_AttributeAndPosition> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessageFormat$AttributeAndPosition;
	return _this->limit;

}
// .method static synthetic -get2(Landroid/icu/text/MessageFormat$AttributeAndPosition;)I
int android::icu::text::MessageFormat_S_AttributeAndPosition::_get2(std::shared_ptr<android::icu::text::MessageFormat_S_AttributeAndPosition> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessageFormat$AttributeAndPosition;
	return _this->start;

}
// .method static synthetic -get3(Landroid/icu/text/MessageFormat$AttributeAndPosition;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::MessageFormat_S_AttributeAndPosition::_get3(std::shared_ptr<android::icu::text::MessageFormat_S_AttributeAndPosition> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessageFormat$AttributeAndPosition;
	return _this->value;

}
// .method public constructor <init>(Ljava/lang/Object;II)V
android::icu::text::MessageFormat_S_AttributeAndPosition::MessageFormat_S_AttributeAndPosition(std::shared_ptr<java::lang::Object> fieldValue,int startIndex,int limitIndex)
{
	
	//    .param p1, "fieldValue"    # Ljava/lang/Object;
	//    .param p2, "startIndex"    # I
	//    .param p3, "limitIndex"    # I
	// 076    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->init(android::icu::text::MessageFormat_S_Field::ARGUMENT, fieldValue, startIndex, limitIndex);
	return;

}
// .method public constructor <init>(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;II)V
android::icu::text::MessageFormat_S_AttributeAndPosition::MessageFormat_S_AttributeAndPosition(std::shared_ptr<java::text::AttributedCharacterIterator_S_Attribute> field,std::shared_ptr<java::lang::Object> fieldValue,int startIndex,int limitIndex)
{
	
	//    .param p1, "field"    # Ljava/text/AttributedCharacterIterator$Attribute;
	//    .param p2, "fieldValue"    # Ljava/lang/Object;
	//    .param p3, "startIndex"    # I
	//    .param p4, "limitIndex"    # I
	// 096    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->init(field, fieldValue, startIndex, limitIndex);
	return;

}
// .method public init(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;II)V
void android::icu::text::MessageFormat_S_AttributeAndPosition::init(std::shared_ptr<java::text::AttributedCharacterIterator_S_Attribute> field,std::shared_ptr<java::lang::Object> fieldValue,int startIndex,int limitIndex)
{
	
	//    .param p1, "field"    # Ljava/text/AttributedCharacterIterator$Attribute;
	//    .param p2, "fieldValue"    # Ljava/lang/Object;
	//    .param p3, "startIndex"    # I
	//    .param p4, "limitIndex"    # I
	this->key = field;
	this->value = fieldValue;
	this->start = startIndex;
	this->limit = limitIndex;
	return;

}


