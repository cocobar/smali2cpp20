// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UResource$Value.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method protected constructor <init>()V
android::icu::impl::UResource_S_Value::UResource_S_Value()
{
	
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UResource_S_Value::toString()
{
	
	auto iv;
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	
	// switch
	{
	auto item = ( this->getType() );
	if (item == 0x0) goto label_sswitch_c;
	if (item == 0x1) goto label_sswitch_57;
	if (item == 0x2) goto label_sswitch_5f;
	if (item == 0x7) goto label_sswitch_11;
	if (item == 0x8) goto label_sswitch_5b;
	if (item == 0xe) goto label_sswitch_1a;
	}
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("???"));
	// 087    .line 424
label_sswitch_c:
	return this->getString();
	// 095    .line 426
label_sswitch_11:
	return java::lang::Integer::toString(this->getInt());
	// 107    .line 428
label_sswitch_1a:
	iv = this->getIntVector();
	//    .local v1, "iv":[I
	sb = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[")));
	//    .local v2, "sb":Ljava/lang/StringBuilder;
	sb->append(iv->size())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]{")));
	if ( !(iv->size()) )  
		goto label_cond_4c;
	sb->append(iv[0x0]);
	i = 0x1;
	//    .local v0, "i":I
label_goto_3a:
	if ( i >= iv->size() )
		goto label_cond_4c;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(iv[i]);
	i = ( i + 0x1);
	goto label_goto_3a;
	// 168    .line 437
	// 169    .end local v0    # "i":I
label_cond_4c:
	return sb->append(0x7d)->toString();
	// 183    .line 439
	// 184    .end local v1    # "iv":[I
	// 185    .end local v2    # "sb":Ljava/lang/StringBuilder;
label_sswitch_57:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("(binary blob)"));
	// 191    .line 441
label_sswitch_5b:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("(array)"));
	// 197    .line 443
label_sswitch_5f:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("(table)"));
	// 203    .line 422
	// 204    nop
	// 206    :sswitch_data_64
	// 207    .sparse-switch
	// 208        0x0 -> :sswitch_c
	// 209        0x1 -> :sswitch_57
	// 210        0x2 -> :sswitch_5f
	// 211        0x7 -> :sswitch_11
	// 212        0x8 -> :sswitch_5b
	// 213        0xe -> :sswitch_1a
	// 214    .end sparse-switch

}


