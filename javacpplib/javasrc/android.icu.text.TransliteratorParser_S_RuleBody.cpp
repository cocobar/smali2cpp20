// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorParser$RuleBody.smali
#include "java2ctype.h"
#include "android.icu.text.TransliteratorParser_S_RuleBody.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method private constructor <init>()V
android::icu::text::TransliteratorParser_S_RuleBody::TransliteratorParser_S_RuleBody()
{
	
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/TransliteratorParser$RuleBody;)V
android::icu::text::TransliteratorParser_S_RuleBody::TransliteratorParser_S_RuleBody(std::shared_ptr<android::icu::text::TransliteratorParser_S_RuleBody> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/TransliteratorParser$RuleBody;
	// 033    invoke-direct {p0}, Landroid/icu/text/TransliteratorParser$RuleBody;-><init>()V
	return;

}
// .method nextLine()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TransliteratorParser_S_RuleBody::nextLine()
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::StringBuilder> b;
	
	cVar0 = 0x5c;
	s = this->handleNextLine();
	//    .local v1, "s":Ljava/lang/String;
	if ( !(s) )  
		goto label_cond_32;
	if ( s->length() <= 0 )
		goto label_cond_32;
	if ( s->charAt(( s->length() + -0x1)) != cVar0 )
		goto label_cond_32;
	b = std::make_shared<java::lang::StringBuilder>(s);
	//    .local v0, "b":Ljava/lang/StringBuilder;
label_goto_1f:
	b->deleteCharAt(( b->length() + -0x1));
	s = this->handleNextLine();
	if ( s )     
		goto label_cond_33;
label_cond_2e:
	//    .end local v0    # "b":Ljava/lang/StringBuilder;
label_cond_32:
	return s;
	// 113    .line 310
	// 114    .restart local v0    # "b":Ljava/lang/StringBuilder;
label_cond_33:
	b->append(s);
	if ( s->length() <= 0 )
		goto label_cond_2e;
	if ( s->charAt(( s->length() + -0x1)) != cVar0 )
		goto label_cond_2e;
	goto label_goto_1f;

}


