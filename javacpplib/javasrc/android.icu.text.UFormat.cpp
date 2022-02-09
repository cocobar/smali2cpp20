// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UFormat.smali
#include "java2ctype.h"
#include "android.icu.text.UFormat.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.IllegalArgumentException.h"

static android::icu::text::UFormat::serialVersionUID = -0x44e50edf26f8a240L;
// .method public constructor <init>()V
android::icu::text::UFormat::UFormat()
{
	
	// 022    invoke-direct {p0}, Ljava/text/Format;-><init>()V
	return;

}
// .method public final getLocale(Landroid/icu/util/ULocale$Type;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::UFormat::getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p1, "type"    # Landroid/icu/util/ULocale$Type;
	if ( type != android::icu::util::ULocale::ACTUAL_LOCALE )
		goto label_cond_7;
	cVar0 = this->actualLocale;
label_goto_6:
	return cVar0;
	// 046    .line 61
label_cond_7:
	cVar0 = this->validLocale;
	goto label_goto_6;

}
// .method final setLocale(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)V
void android::icu::text::UFormat::setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	
	//    .param p1, "valid"    # Landroid/icu/util/ULocale;
	//    .param p2, "actual"    # Landroid/icu/util/ULocale;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( valid )     
		goto label_cond_f;
	cVar2 = cVar0;
label_goto_5:
	if ( actual )     
		goto label_cond_11;
label_goto_7:
	if ( cVar2 == cVar0 )
		goto label_cond_13;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar3;
label_cond_f:
	cVar2 = cVar1;
	goto label_goto_5;
label_cond_11:
	cVar0 = cVar1;
	goto label_goto_7;
	// 092    .line 89
label_cond_13:
	this->validLocale = valid;
	this->actualLocale = actual;
	return;

}


