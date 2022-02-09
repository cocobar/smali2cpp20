// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ChineseDateFormat$Field.smali
#include "java2ctype.h"
#include "android.icu.text.ChineseDateFormat_S_Field.h"
#include "android.icu.text.DateFormat_S_Field.h"
#include "java.io.InvalidObjectException.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::text::ChineseDateFormat_S_Field::IS_LEAP_MONTH;
static android::icu::text::ChineseDateFormat_S_Field::serialVersionUID = -0x46ce68aff2525d8aL;
// .method static constructor <clinit>()V
void android::icu::text::ChineseDateFormat_S_Field::static_cinit()
{
	
	std::shared_ptr<android::icu::text::ChineseDateFormat_S_Field> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::ChineseDateFormat_S_Field>(std::make_shared<java::lang::String>(std::make_shared<char[]>("is leap month")), 0x16);
	android::icu::text::ChineseDateFormat_S_Field::IS_LEAP_MONTH = cVar0;
	return;

}
// .method protected constructor <init>(Ljava/lang/String;I)V
android::icu::text::ChineseDateFormat_S_Field::ChineseDateFormat_S_Field(std::shared_ptr<java::lang::String> name,int calendarField)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "calendarField"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 054    .end annotation
	android::icu::text::DateFormat_S_Field::(name, calendarField);
	return;

}
// .method public static ofCalendarField(I)Landroid/icu/text/DateFormat$Field;
std::shared_ptr<android::icu::text::DateFormat_S_Field> android::icu::text::ChineseDateFormat_S_Field::ofCalendarField(int calendarField)
{
	
	//    .param p0, "calendarField"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 068    .end annotation
	if ( calendarField != 0x16 )
		goto label_cond_7;
	return android::icu::text::ChineseDateFormat_S_Field::IS_LEAP_MONTH;
	// 081    .line 233
label_cond_7:
	return android::icu::text::DateFormat_S_Field::ofCalendarField(calendarField);

}
// .method protected readResolve()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::ChineseDateFormat_S_Field::readResolve()
{
	
	std::shared_ptr<java::io::InvalidObjectException> cVar0;
	std::shared_ptr<java::io::InvalidObjectException> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 095        value = {
	// 096            Ljava/io/InvalidObjectException;
	// 097        }
	// 098    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 101    .end annotation
	if ( this->getClass() == android::icu::text::ChineseDateFormat_S_Field() )
		goto label_cond_11;
	cVar0 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("A subclass of ChineseDateFormat.Field must implement readResolve.")));
	// throw
	throw cVar0;
	// 122    .line 248
label_cond_11:
	if ( !(this->getName()->equals(android::icu::text::ChineseDateFormat_S_Field::IS_LEAP_MONTH->getName())) )  
		goto label_cond_24;
	return android::icu::text::ChineseDateFormat_S_Field::IS_LEAP_MONTH;
	// 145    .line 251
label_cond_24:
	cVar1 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown attribute name.")));
	// throw
	throw cVar1;

}


