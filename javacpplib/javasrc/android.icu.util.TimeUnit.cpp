// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\TimeUnit.smali
#include "java2ctype.h"
#include "android.icu.util.MeasureUnit_S_MeasureUnitProxy.h"
#include "android.icu.util.MeasureUnit.h"
#include "android.icu.util.TimeUnit.h"
#include "java.io.InvalidObjectException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::util::TimeUnit::serialVersionUID = -0x27699d2cbfbcc814L;
// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::util::TimeUnit::TimeUnit(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> code)
{
	
	//    .param p1, "type"    # Ljava/lang/String;
	//    .param p2, "code"    # Ljava/lang/String;
	android::icu::util::MeasureUnit::(type, code);
	this->index = 0x0;
	return;

}
// .method private readResolve()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::TimeUnit::readResolve()
{
	
	std::shared_ptr<java::io::InvalidObjectException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 036        value = {
	// 037            Ljava/io/ObjectStreamException;
	// 038        }
	// 039    .end annotation
	// switch
	{
	auto item = ( this->index );
	if (item == 0) goto label_pswitch_33;
	if (item == 1) goto label_pswitch_30;
	if (item == 2) goto label_pswitch_2d;
	if (item == 3) goto label_pswitch_2a;
	if (item == 4) goto label_pswitch_27;
	if (item == 5) goto label_pswitch_24;
	if (item == 6) goto label_pswitch_21;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::InvalidObjectException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad index: ")))->append(this->index)->toString());
	// throw
	throw cVar0;
	// 074    .line 50
label_pswitch_21:
	return android::icu::util::TimeUnit::SECOND;
	// 080    .line 52
label_pswitch_24:
	return android::icu::util::TimeUnit::MINUTE;
	// 086    .line 54
label_pswitch_27:
	return android::icu::util::TimeUnit::HOUR;
	// 092    .line 56
label_pswitch_2a:
	return android::icu::util::TimeUnit::DAY;
	// 098    .line 58
label_pswitch_2d:
	return android::icu::util::TimeUnit::WEEK;
	// 104    .line 60
label_pswitch_30:
	return android::icu::util::TimeUnit::MONTH;
	// 110    .line 62
label_pswitch_33:
	return android::icu::util::TimeUnit::YEAR;
	// 116    .line 48
	// 117    :pswitch_data_36
	// 118    .packed-switch 0x0
	// 119        :pswitch_33
	// 120        :pswitch_30
	// 121        :pswitch_2d
	// 122        :pswitch_2a
	// 123        :pswitch_27
	// 124        :pswitch_24
	// 125        :pswitch_21
	// 126    .end packed-switch

}
// .method public static values()[Landroid/icu/util/TimeUnit;
std::shared_ptr<android::icu::util::TimeUnit> android::icu::util::TimeUnit::values()
{
	
	std::shared<std::vector<std::vector<android::icu::util::TimeUnit>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<android::icu::util::TimeUnit>>>(0x7);
	cVar0[0x0] = android::icu::util::TimeUnit::SECOND;
	cVar0[0x1] = android::icu::util::TimeUnit::MINUTE;
	cVar0[0x2] = android::icu::util::TimeUnit::HOUR;
	cVar0[0x3] = android::icu::util::TimeUnit::DAY;
	cVar0[0x4] = android::icu::util::TimeUnit::WEEK;
	cVar0[0x5] = android::icu::util::TimeUnit::MONTH;
	cVar0[0x6] = android::icu::util::TimeUnit::YEAR;
	return cVar0;

}
// .method private writeReplace()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::TimeUnit::writeReplace()
{
	
	std::shared_ptr<android::icu::util::MeasureUnit_S_MeasureUnitProxy> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 186        value = {
	// 187            Ljava/io/ObjectStreamException;
	// 188        }
	// 189    .end annotation
	cVar0 = std::make_shared<android::icu::util::MeasureUnit_S_MeasureUnitProxy>(this->type, this->subType);
	return cVar0;

}


