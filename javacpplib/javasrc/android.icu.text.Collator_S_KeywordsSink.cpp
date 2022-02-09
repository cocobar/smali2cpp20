// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Collator$KeywordsSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.Collator_S_KeywordsSink.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.LinkedList.h"

// .method private constructor <init>()V
android::icu::text::Collator_S_KeywordsSink::Collator_S_KeywordsSink()
{
	
	std::shared_ptr<java::util::LinkedList> cVar0;
	
	// 038    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	cVar0 = std::make_shared<java::util::LinkedList>();
	this->values = cVar0;
	this->hasDefault = 0x0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/Collator$KeywordsSink;)V
android::icu::text::Collator_S_KeywordsSink::Collator_S_KeywordsSink(std::shared_ptr<android::icu::text::Collator_S_KeywordsSink> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/Collator$KeywordsSink;
	// 061    invoke-direct {p0}, Landroid/icu/text/Collator$KeywordsSink;-><init>()V
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::text::Collator_S_KeywordsSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int i;
	int type;
	std::shared_ptr<java::lang::String> defcoll;
	std::shared_ptr<java::lang::Object> collkey;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	//    .local v0, "collations":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v3, "i":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_58;
	type = value->getType();
	//    .local v4, "type":I
	if ( type )     
		goto label_cond_38;
	if ( this->hasDefault )     
		goto label_cond_35;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("default")))) )  
		goto label_cond_35;
	defcoll = value->getString();
	//    .local v2, "defcoll":Ljava/lang/String;
	if ( defcoll->isEmpty() )     
		goto label_cond_35;
	this->values->remove(defcoll);
	this->values->addFirst(defcoll);
	this->hasDefault = 0x1;
	//    .end local v2    # "defcoll":Ljava/lang/String;
label_cond_35:
label_goto_35:
	i = ( i + 0x1);
	goto label_goto_5;
	// 150    .line 997
label_cond_38:
	if ( type != 0x2 )
		goto label_cond_35;
	if ( !(( key->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("private-"))) ^ 0x1)) )  
		goto label_cond_35;
	collkey = key->toString();
	//    .local v1, "collkey":Ljava/lang/String;
	if ( this->values->contains(collkey) )     
		goto label_cond_35;
	this->values->add(collkey);
	goto label_goto_35;
	// 188    .line 1004
	// 189    .end local v1    # "collkey":Ljava/lang/String;
	// 190    .end local v4    # "type":I
label_cond_58:
	return;

}


