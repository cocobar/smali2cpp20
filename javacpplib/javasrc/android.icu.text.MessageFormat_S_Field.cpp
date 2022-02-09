// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessageFormat$Field.smali
#include "java2ctype.h"
#include "android.icu.text.MessageFormat_S_Field.h"
#include "java.io.InvalidObjectException.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.Format_S_Field.h"

static android::icu::text::MessageFormat_S_Field::ARGUMENT;
static android::icu::text::MessageFormat_S_Field::serialVersionUID = 0x683a3b3b54a02d5dL;
// .method static constructor <clinit>()V
void android::icu::text::MessageFormat_S_Field::static_cinit()
{
	
	std::shared_ptr<android::icu::text::MessageFormat_S_Field> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::MessageFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("message argument field")));
	android::icu::text::MessageFormat_S_Field::ARGUMENT = cVar0;
	return;

}
// .method protected constructor <init>(Ljava/lang/String;)V
android::icu::text::MessageFormat_S_Field::MessageFormat_S_Field(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	java::text::Format_S_Field::(name);
	return;

}
// .method protected readResolve()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::MessageFormat_S_Field::readResolve()
{
	
	std::shared_ptr<java::io::InvalidObjectException> cVar0;
	std::shared_ptr<java::io::InvalidObjectException> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 058        value = {
	// 059            Ljava/io/InvalidObjectException;
	// 060        }
	// 061    .end annotation
	if ( this->getClass() == android::icu::text::MessageFormat_S_Field() )
		goto label_cond_11;
	cVar0 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("A subclass of MessageFormat.Field must implement readResolve.")));
	// throw
	throw cVar0;
	// 084    .line 1480
label_cond_11:
	if ( !(this->getName()->equals(android::icu::text::MessageFormat_S_Field::ARGUMENT->getName())) )  
		goto label_cond_24;
	return android::icu::text::MessageFormat_S_Field::ARGUMENT;
	// 107    .line 1483
label_cond_24:
	cVar1 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown attribute name.")));
	// throw
	throw cVar1;

}


