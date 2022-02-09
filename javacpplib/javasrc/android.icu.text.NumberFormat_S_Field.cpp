// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormat$Field.smali
#include "java2ctype.h"
#include "android.icu.text.NumberFormat_S_Field.h"
#include "java.io.InvalidObjectException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.Format_S_Field.h"

static android::icu::text::NumberFormat_S_Field::CURRENCY;
static android::icu::text::NumberFormat_S_Field::DECIMAL_SEPARATOR;
static android::icu::text::NumberFormat_S_Field::EXPONENT;
static android::icu::text::NumberFormat_S_Field::EXPONENT_SIGN;
static android::icu::text::NumberFormat_S_Field::EXPONENT_SYMBOL;
static android::icu::text::NumberFormat_S_Field::FRACTION;
static android::icu::text::NumberFormat_S_Field::GROUPING_SEPARATOR;
static android::icu::text::NumberFormat_S_Field::INTEGER;
static android::icu::text::NumberFormat_S_Field::PERCENT;
static android::icu::text::NumberFormat_S_Field::PERMILLE;
static android::icu::text::NumberFormat_S_Field::SIGN;
static android::icu::text::NumberFormat_S_Field::serialVersionUID = -0x3ead070c1cf65f72L;
// .method static constructor <clinit>()V
void android::icu::text::NumberFormat_S_Field::static_cinit()
{
	
	std::shared_ptr<android::icu::text::NumberFormat_S_Field> cVar0;
	std::shared_ptr<android::icu::text::NumberFormat_S_Field> cVar1;
	std::shared_ptr<android::icu::text::NumberFormat_S_Field> cVar2;
	std::shared_ptr<android::icu::text::NumberFormat_S_Field> cVar3;
	std::shared_ptr<android::icu::text::NumberFormat_S_Field> cVar4;
	std::shared_ptr<android::icu::text::NumberFormat_S_Field> cVar5;
	std::shared_ptr<android::icu::text::NumberFormat_S_Field> cVar6;
	std::shared_ptr<android::icu::text::NumberFormat_S_Field> cVar7;
	std::shared_ptr<android::icu::text::NumberFormat_S_Field> cVar8;
	std::shared_ptr<android::icu::text::NumberFormat_S_Field> cVar9;
	std::shared_ptr<android::icu::text::NumberFormat_S_Field> cVar10;
	
	cVar0 = std::make_shared<android::icu::text::NumberFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("sign")));
	android::icu::text::NumberFormat_S_Field::SIGN = cVar0;
	cVar1 = std::make_shared<android::icu::text::NumberFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("integer")));
	android::icu::text::NumberFormat_S_Field::INTEGER = cVar1;
	cVar2 = std::make_shared<android::icu::text::NumberFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("fraction")));
	android::icu::text::NumberFormat_S_Field::FRACTION = cVar2;
	cVar3 = std::make_shared<android::icu::text::NumberFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("exponent")));
	android::icu::text::NumberFormat_S_Field::EXPONENT = cVar3;
	cVar4 = std::make_shared<android::icu::text::NumberFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("exponent sign")));
	android::icu::text::NumberFormat_S_Field::EXPONENT_SIGN = cVar4;
	cVar5 = std::make_shared<android::icu::text::NumberFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("exponent symbol")));
	android::icu::text::NumberFormat_S_Field::EXPONENT_SYMBOL = cVar5;
	cVar6 = std::make_shared<android::icu::text::NumberFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("decimal separator")));
	android::icu::text::NumberFormat_S_Field::DECIMAL_SEPARATOR = cVar6;
	cVar7 = std::make_shared<android::icu::text::NumberFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("grouping separator")));
	android::icu::text::NumberFormat_S_Field::GROUPING_SEPARATOR = cVar7;
	cVar8 = std::make_shared<android::icu::text::NumberFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("percent")));
	android::icu::text::NumberFormat_S_Field::PERCENT = cVar8;
	cVar9 = std::make_shared<android::icu::text::NumberFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("per mille")));
	android::icu::text::NumberFormat_S_Field::PERMILLE = cVar9;
	cVar10 = std::make_shared<android::icu::text::NumberFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("currency")));
	android::icu::text::NumberFormat_S_Field::CURRENCY = cVar10;
	return;

}
// .method protected constructor <init>(Ljava/lang/String;)V
android::icu::text::NumberFormat_S_Field::NumberFormat_S_Field(std::shared_ptr<java::lang::String> fieldName)
{
	
	//    .param p1, "fieldName"    # Ljava/lang/String;
	java::text::Format_S_Field::(fieldName);
	return;

}
// .method protected readResolve()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::NumberFormat_S_Field::readResolve()
{
	
	std::shared_ptr<java::io::InvalidObjectException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 168        value = {
	// 169            Ljava/io/InvalidObjectException;
	// 170        }
	// 171    .end annotation
	if ( !(this->getName()->equals(android::icu::text::NumberFormat_S_Field::INTEGER->getName())) )  
		goto label_cond_13;
	return android::icu::text::NumberFormat_S_Field::INTEGER;
	// 196    .line 1746
label_cond_13:
	if ( !(this->getName()->equals(android::icu::text::NumberFormat_S_Field::FRACTION->getName())) )  
		goto label_cond_26;
	return android::icu::text::NumberFormat_S_Field::FRACTION;
	// 219    .line 1748
label_cond_26:
	if ( !(this->getName()->equals(android::icu::text::NumberFormat_S_Field::EXPONENT->getName())) )  
		goto label_cond_39;
	return android::icu::text::NumberFormat_S_Field::EXPONENT;
	// 242    .line 1750
label_cond_39:
	if ( !(this->getName()->equals(android::icu::text::NumberFormat_S_Field::EXPONENT_SIGN->getName())) )  
		goto label_cond_4c;
	return android::icu::text::NumberFormat_S_Field::EXPONENT_SIGN;
	// 265    .line 1752
label_cond_4c:
	if ( !(this->getName()->equals(android::icu::text::NumberFormat_S_Field::EXPONENT_SYMBOL->getName())) )  
		goto label_cond_5f;
	return android::icu::text::NumberFormat_S_Field::EXPONENT_SYMBOL;
	// 288    .line 1754
label_cond_5f:
	if ( !(this->getName()->equals(android::icu::text::NumberFormat_S_Field::CURRENCY->getName())) )  
		goto label_cond_72;
	return android::icu::text::NumberFormat_S_Field::CURRENCY;
	// 311    .line 1756
label_cond_72:
	if ( !(this->getName()->equals(android::icu::text::NumberFormat_S_Field::DECIMAL_SEPARATOR->getName())) )  
		goto label_cond_85;
	return android::icu::text::NumberFormat_S_Field::DECIMAL_SEPARATOR;
	// 334    .line 1758
label_cond_85:
	if ( !(this->getName()->equals(android::icu::text::NumberFormat_S_Field::GROUPING_SEPARATOR->getName())) )  
		goto label_cond_98;
	return android::icu::text::NumberFormat_S_Field::GROUPING_SEPARATOR;
	// 357    .line 1760
label_cond_98:
	if ( !(this->getName()->equals(android::icu::text::NumberFormat_S_Field::PERCENT->getName())) )  
		goto label_cond_ab;
	return android::icu::text::NumberFormat_S_Field::PERCENT;
	// 380    .line 1762
label_cond_ab:
	if ( !(this->getName()->equals(android::icu::text::NumberFormat_S_Field::PERMILLE->getName())) )  
		goto label_cond_be;
	return android::icu::text::NumberFormat_S_Field::PERMILLE;
	// 403    .line 1764
label_cond_be:
	if ( !(this->getName()->equals(android::icu::text::NumberFormat_S_Field::SIGN->getName())) )  
		goto label_cond_d1;
	return android::icu::text::NumberFormat_S_Field::SIGN;
	// 426    .line 1767
label_cond_d1:
	cVar0 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("An invalid object.")));
	// throw
	throw cVar0;

}


