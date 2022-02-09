// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\PropertyExpander$ExpandException.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.GeneralSecurityException.h"
#include "sun.security.util.PropertyExpander_S_ExpandException.h"

static sun::security::util::PropertyExpander_S_ExpandException::serialVersionUID = -0x6e3778281321bb26L;
// .method public constructor <init>(Ljava/lang/String;)V
sun::security::util::PropertyExpander_S_ExpandException::PropertyExpander_S_ExpandException(std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	java::security::GeneralSecurityException::(msg);
	return;

}


