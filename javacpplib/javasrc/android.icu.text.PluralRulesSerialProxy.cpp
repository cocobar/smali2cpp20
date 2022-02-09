// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRulesSerialProxy.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.text.PluralRulesSerialProxy.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::text::PluralRulesSerialProxy::serialVersionUID = 0x2aL;
// .method constructor <init>(Ljava/lang/String;)V
android::icu::text::PluralRulesSerialProxy::PluralRulesSerialProxy(std::shared_ptr<java::lang::String> rules)
{
	
	//    .param p1, "rules"    # Ljava/lang/String;
	// 024    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->data = rules;
	return;

}
// .method private readResolve()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::PluralRulesSerialProxy::readResolve()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 036        value = {
	// 037            Ljava/io/ObjectStreamException;
	// 038        }
	// 039    .end annotation
	return android::icu::text::PluralRules::createRules(this->data);

}


