// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalDataCache$Data.smali
#include "java2ctype.h"
#include "android.icu.text.CompactDecimalDataCache_S_Data.h"
#include "android.icu.text.DecimalFormat_S_Unit.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

// .method constructor <init>([JLjava/util/Map;)V
android::icu::text::CompactDecimalDataCache_S_Data::CompactDecimalDataCache_S_Data(std::shared_ptr<long long[]> divisors,std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> units)
{
	
	//    .param p1, "divisors"    # [J
	//    .annotation system Ldalvik/annotation/Signature;
	// 041        value = {
	// 042            "([J",
	// 043            "Ljava/util/Map",
	// 044            "<",
	// 045            "Ljava/lang/String;",
	// 046            "[",
	// 047            "Landroid/icu/text/DecimalFormat$Unit;",
	// 048            ">;)V"
	// 049        }
	// 050    .end annotation
	//    .local p2, "units":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Landroid/icu/text/DecimalFormat$Unit;>;"
	// 055    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->divisors = divisors;
	this->units = units;
	return;

}
// .method public isEmpty()Z
bool android::icu::text::CompactDecimalDataCache_S_Data::isEmpty()
{
	
	bool cVar0;
	
	if ( !(this->units) )  
		goto label_cond_b;
	cVar0 = this->units->isEmpty();
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x1;
	goto label_goto_a;

}


