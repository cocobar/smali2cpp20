// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationLoader$ASCII.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationLoader_S_ASCII.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method private constructor <init>()V
android::icu::impl::coll::CollationLoader_S_ASCII::CollationLoader_S_ASCII()
{
	
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static toLowerCase(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::coll::CollationLoader_S_ASCII::toLowerCase(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	int cVar1;
	int i;
	int c;
	std::shared_ptr<java::lang::StringBuilder> sb;
	char c;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar0 = 0x5a;
	cVar1 = 0x41;
	i = 0x0;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= s->length() )
		goto label_cond_46;
	c = s->charAt(i);
	//    .local v0, "c":C
	if ( cVar1 >  c )
		goto label_cond_43;
	if ( c >  cVar0 )
		goto label_cond_43;
	sb = std::make_shared<java::lang::StringBuilder>(s->length());
	//    .local v2, "sb":Ljava/lang/StringBuilder;
	sb->append(s, 0x0, i)->append((char)(( c + 0x20)));
label_goto_27:
	i = ( i + 0x1);
	if ( i >= s->length() )
		goto label_cond_3e;
	c = s->charAt(i);
	if ( cVar1 >  c )
		goto label_cond_3a;
	if ( c >  cVar0 )
		goto label_cond_3a;
label_cond_3a:
	sb->append(c);
	goto label_goto_27;
	// 112    .line 77
label_cond_3e:
	return sb->toString();
	// 120    .line 67
	// 121    .end local v2    # "sb":Ljava/lang/StringBuilder;
label_cond_43:
	i = ( i + 0x1);
	goto label_goto_5;
	// 127    .line 80
	// 128    .end local v0    # "c":C
label_cond_46:
	return s;

}


