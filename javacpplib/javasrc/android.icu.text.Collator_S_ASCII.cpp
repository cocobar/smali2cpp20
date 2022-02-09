// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Collator$ASCII.smali
#include "java2ctype.h"
#include "android.icu.text.Collator_S_ASCII.h"
#include "java.lang.CharSequence.h"

// .method private constructor <init>()V
android::icu::text::Collator_S_ASCII::Collator_S_ASCII()
{
	
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static equalIgnoreCase(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z
bool android::icu::text::Collator_S_ASCII::equalIgnoreCase(std::shared_ptr<java::lang::CharSequence> left,std::shared_ptr<java::lang::CharSequence> right)
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	int length;
	int i;
	int lc;
	int rc;
	
	//    .param p0, "left"    # Ljava/lang/CharSequence;
	//    .param p1, "right"    # Ljava/lang/CharSequence;
	cVar0 = 0x5a;
	cVar1 = 0x41;
	cVar2 = 0x0;
	length = left->length();
	//    .local v2, "length":I
	if ( length == right->length() )
		goto label_cond_10;
	return cVar2;
	// 055    .line 607
label_cond_10:
	i = 0x0;
	//    .local v0, "i":I
label_goto_11:
	if ( i >= length )
		goto label_cond_32;
	lc = left->charAt(i);
	//    .local v1, "lc":C
	rc = right->charAt(i);
	//    .local v3, "rc":C
	if ( lc != rc )
		goto label_cond_20;
label_cond_1d:
label_goto_1d:
	i = ( i + 0x1);
	goto label_goto_11;
	// 085    .line 611
label_cond_20:
	if ( cVar1 >  lc )
		goto label_cond_29;
	if ( lc >  cVar0 )
		goto label_cond_29;
	if ( ( lc + 0x20) == rc )
		goto label_cond_1d;
label_cond_28:
	return cVar2;
	// 100    .line 613
label_cond_29:
	if ( cVar1 >  rc )
		goto label_cond_28;
	if ( rc >  cVar0 )
		goto label_cond_28;
	if ( ( rc + 0x20) != lc )
		goto label_cond_28;
	goto label_goto_1d;
	// 113    .line 618
	// 114    .end local v1    # "lc":C
	// 115    .end local v3    # "rc":C
label_cond_32:
	return 0x1;

}


