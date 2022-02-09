// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorIDParser$SingleID.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.TransliteratorIDParser_S_SingleID.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::text::TransliteratorIDParser_S_SingleID::TransliteratorIDParser_S_SingleID(std::shared_ptr<java::lang::String> c,std::shared_ptr<java::lang::String> b)
{
	
	//    .param p1, "c"    # Ljava/lang/String;
	//    .param p2, "b"    # Ljava/lang/String;
	android::icu::text::TransliteratorIDParser_S_SingleID::(c, b, 0x0);
	return;

}
// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
android::icu::text::TransliteratorIDParser_S_SingleID::TransliteratorIDParser_S_SingleID(std::shared_ptr<java::lang::String> c,std::shared_ptr<java::lang::String> b,std::shared_ptr<java::lang::String> f)
{
	
	//    .param p1, "c"    # Ljava/lang/String;
	//    .param p2, "b"    # Ljava/lang/String;
	//    .param p3, "f"    # Ljava/lang/String;
	// 049    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->canonID = c;
	this->basicID = b;
	this->filter = f;
	return;

}
// .method getInstance()Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::TransliteratorIDParser_S_SingleID::getInstance()
{
	
	std::shared_ptr<android::icu::text::Transliterator> t;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	if ( !(this->basicID) )  
		goto label_cond_c;
	if ( this->basicID->length() )     
		goto label_cond_26;
label_cond_c:
	t = android::icu::text::Transliterator::getBasicInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Null")), this->canonID);
	//    .local v0, "t":Landroid/icu/text/Transliterator;
label_goto_15:
	if ( !(t) )  
		goto label_cond_25;
	if ( !(this->filter) )  
		goto label_cond_25;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(this->filter);
	t->setFilter(cVar0);
label_cond_25:
	return t;
	// 116    .line 131
	// 117    .end local v0    # "t":Landroid/icu/text/Transliterator;
label_cond_26:
	t = android::icu::text::Transliterator::getBasicInstance(this->basicID, this->canonID);
	//    .restart local v0    # "t":Landroid/icu/text/Transliterator;
	goto label_goto_15;

}


