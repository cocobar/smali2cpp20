// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePattern$Part.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern_S_ArgType.h"
#include "android.icu.text.MessagePattern_S_Part_S_Type.h"
#include "android.icu.text.MessagePattern_S_Part.h"
#include "android.icu.text.MessagePattern.h"
#include "java.lang.Class.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::MessagePattern_S_Part::MAX_LENGTH = 0xffff;
static android::icu::text::MessagePattern_S_Part::MAX_VALUE = 0x7fff;
// .method static synthetic -get0(Landroid/icu/text/MessagePattern$Part;)I
int android::icu::text::MessagePattern_S_Part::_get0(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePattern$Part;
	return _this->index;

}
// .method static synthetic -get1(Landroid/icu/text/MessagePattern$Part;)C
char android::icu::text::MessagePattern_S_Part::_get1(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePattern$Part;
	return _this->length;

}
// .method static synthetic -get2(Landroid/icu/text/MessagePattern$Part;)I
int android::icu::text::MessagePattern_S_Part::_get2(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePattern$Part;
	return _this->limitPartIndex;

}
// .method static synthetic -get3(Landroid/icu/text/MessagePattern$Part;)Landroid/icu/text/MessagePattern$Part$Type;
std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> android::icu::text::MessagePattern_S_Part::_get3(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePattern$Part;
	return _this->type;

}
// .method static synthetic -get4(Landroid/icu/text/MessagePattern$Part;)S
short android::icu::text::MessagePattern_S_Part::_get4(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePattern$Part;
	return _this->value;

}
// .method static synthetic -set0(Landroid/icu/text/MessagePattern$Part;I)I
int android::icu::text::MessagePattern_S_Part::_set0(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this,int _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePattern$Part;
	//    .param p1, "-value"    # I
	_this->limitPartIndex = _value;
	return _value;

}
// .method static synthetic -set1(Landroid/icu/text/MessagePattern$Part;S)S
short android::icu::text::MessagePattern_S_Part::_set1(std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this,short _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePattern$Part;
	//    .param p1, "-value"    # S
	_this->value = _value;
	return _value;

}
// .method private constructor <init>(Landroid/icu/text/MessagePattern$Part$Type;III)V
android::icu::text::MessagePattern_S_Part::MessagePattern_S_Part(std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> t,int i,int l,int v)
{
	
	//    .param p1, "t"    # Landroid/icu/text/MessagePattern$Part$Type;
	//    .param p2, "i"    # I
	//    .param p3, "l"    # I
	//    .param p4, "v"    # I
	// 123    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->type = t;
	this->index = i;
	this->length = (char)(l);
	this->value = (short)(v);
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/MessagePattern$Part$Type;IIILandroid/icu/text/MessagePattern$Part;)V
android::icu::text::MessagePattern_S_Part::MessagePattern_S_Part(std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> t,int i,int l,int v,std::shared_ptr<android::icu::text::MessagePattern_S_Part> _this4)
{
	
	//    .param p1, "t"    # Landroid/icu/text/MessagePattern$Part$Type;
	//    .param p2, "i"    # I
	//    .param p3, "l"    # I
	//    .param p4, "v"    # I
	//    .param p5, "-this4"    # Landroid/icu/text/MessagePattern$Part;
	android::icu::text::MessagePattern_S_Part::(t, i, l, v);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::MessagePattern_S_Part::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part> o;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 176    .line 709
label_cond_5:
	if ( !(other) )  
		goto label_cond_11;
	if ( this->getClass() == other->getClass() )
		goto label_cond_12;
label_cond_11:
	return cVar1;
label_cond_12:
	o = other;
	o->checkCast("android::icu::text::MessagePattern_S_Part");
	//    .local v0, "o":Landroid/icu/text/MessagePattern$Part;
	if ( !(this->type->equals(o->type)) )  
		goto label_cond_3a;
	if ( this->index != o->index )
		goto label_cond_3a;
	if ( this->length != o->length )
		goto label_cond_3a;
	if ( this->value != o->value )
		goto label_cond_3a;
	if ( this->limitPartIndex != o->limitPartIndex )
		goto label_cond_38;
label_goto_37:
	return cVar0;
label_cond_38:
	cVar0 = cVar1;
	goto label_goto_37;
label_cond_3a:
	cVar0 = cVar1;
	goto label_goto_37;

}
// .method public getArgType()Landroid/icu/text/MessagePattern$ArgType;
std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> android::icu::text::MessagePattern_S_Part::getArgType()
{
	
	auto type;
	
	type = this->getType();
	//    .local v0, "type":Landroid/icu/text/MessagePattern$Part$Type;
	if ( type == android::icu::text::MessagePattern_S_Part_S_Type::ARG_START )
		goto label_cond_c;
	if ( type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_LIMIT )
		goto label_cond_15;
label_cond_c:
	return android::icu::text::MessagePattern::-get0({const[class].FS-Param})[this->value];
	// 288    .line 581
label_cond_15:
	return android::icu::text::MessagePattern_S_ArgType::NONE;

}
// .method public getIndex()I
int android::icu::text::MessagePattern_S_Part::getIndex()
{
	
	return this->index;

}
// .method public getLength()I
int android::icu::text::MessagePattern_S_Part::getLength()
{
	
	return this->length;

}
// .method public getLimit()I
int android::icu::text::MessagePattern_S_Part::getLimit()
{
	
	return (this->index +  this->length);

}
// .method public getType()Landroid/icu/text/MessagePattern$Part$Type;
std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> android::icu::text::MessagePattern_S_Part::getType()
{
	
	return this->type;

}
// .method public getValue()I
int android::icu::text::MessagePattern_S_Part::getValue()
{
	
	return this->value;

}
// .method public hashCode()I
int android::icu::text::MessagePattern_S_Part::hashCode()
{
	
	return (( (( (( this->type->hashCode() * 0x25) +  this->index) * 0x25) +  this->length) * 0x25) +  this->value);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePattern_S_Part::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	if ( this->type == android::icu::text::MessagePattern_S_Part_S_Type::ARG_START )
		goto label_cond_c;
	if ( this->type != android::icu::text::MessagePattern_S_Part_S_Type::ARG_LIMIT )
		goto label_cond_40;
label_cond_c:
	//    .local v0, "valueString":Ljava/lang/String;
label_goto_14:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->type->name())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(")))->append(valueString)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")@")))->append(this->index)->toString();
	// 453    .line 696
	// 454    .end local v0    # "valueString":Ljava/lang/String;
label_cond_40:
	//    .restart local v0    # "valueString":Ljava/lang/String;
	goto label_goto_14;

}


