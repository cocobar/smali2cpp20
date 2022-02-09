// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry$CompoundRBTEntry.smali
#include "java2ctype.h"
#include "android.icu.text.CompoundTransliterator.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.RuleBasedTransliterator.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.TransliteratorRegistry_S_CompoundRBTEntry.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.List.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/util/List;Ljava/util/List;Landroid/icu/text/UnicodeSet;)V
android::icu::text::TransliteratorRegistry_S_CompoundRBTEntry::TransliteratorRegistry_S_CompoundRBTEntry(std::shared_ptr<java::lang::String> theID,std::shared_ptr<java::util::List<java::lang::String>> theIDBlockVector,std::shared_ptr<java::util::List<android::icu::text::RuleBasedTransliterator_S_Data>> theDataVector,std::shared_ptr<android::icu::text::UnicodeSet> theCompoundFilter)
{
	
	//    .param p1, "theID"    # Ljava/lang/String;
	//    .param p4, "theCompoundFilter"    # Landroid/icu/text/UnicodeSet;
	//    .annotation system Ldalvik/annotation/Signature;
	// 051        value = {
	// 052            "(",
	// 053            "Ljava/lang/String;",
	// 054            "Ljava/util/List",
	// 055            "<",
	// 056            "Ljava/lang/String;",
	// 057            ">;",
	// 058            "Ljava/util/List",
	// 059            "<",
	// 060            "Landroid/icu/text/RuleBasedTransliterator$Data;",
	// 061            ">;",
	// 062            "Landroid/icu/text/UnicodeSet;",
	// 063            ")V"
	// 064        }
	// 065    .end annotation
	//    .local p2, "theIDBlockVector":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	//    .local p3, "theDataVector":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/RuleBasedTransliterator$Data;>;"
	// 071    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->ID = theID;
	this->idBlockVector = theIDBlockVector;
	this->dataVector = theDataVector;
	this->compoundFilter = theCompoundFilter;
	return;

}
// .method public getInstance()Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::TransliteratorRegistry_S_CompoundRBTEntry::getInstance()
{
	
	std::shared_ptr<java::util::ArrayList> transliterators;
	int i;
	int passNumber;
	std::shared_ptr<java::lang::String> idBlock;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> data;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::text::CompoundTransliterator> t;
	
	transliterators = std::make_shared<java::util::ArrayList>();
	//    .local v7, "transliterators":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/Transliterator;>;"
	//    .local v4, "passNumber":I
	//    .local v3, "limit":I
	i = 0x0;
	//    .local v1, "i":I
	passNumber = 0x1;
	//    .end local v4    # "passNumber":I
	//    .local v5, "passNumber":I
label_goto_19:
	if ( i >= java::lang::Math::max(this->idBlockVector->size(), this->dataVector->size()) )
		goto label_cond_6a;
	if ( i >= this->idBlockVector->size() )
		goto label_cond_38;
	idBlock = this->idBlockVector->get(i);
	idBlock->checkCast("java::lang::String");
	//    .local v2, "idBlock":Ljava/lang/String;
	if ( idBlock->length() <= 0 )
		goto label_cond_38;
	transliterators->add(android::icu::text::Transliterator::getInstance(idBlock));
	//    .end local v2    # "idBlock":Ljava/lang/String;
label_cond_38:
	if ( i >= this->dataVector->size() )
		goto label_cond_80;
	data = this->dataVector->get(i);
	data->checkCast("android::icu::text::RuleBasedTransliterator_S_Data");
	//    .local v0, "data":Landroid/icu/text/RuleBasedTransliterator$Data;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .end local v5    # "passNumber":I
	//    .restart local v4    # "passNumber":I
	cVar0 = std::make_shared<android::icu::text::RuleBasedTransliterator>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("%Pass")))->append(passNumber)->toString(), data, 0x0);
	transliterators->add(cVar0);
	//    .end local v0    # "data":Landroid/icu/text/RuleBasedTransliterator$Data;
label_goto_66:
	i = ( i + 0x1);
	passNumber = passNumber;
	//    .end local v4    # "passNumber":I
	//    .restart local v5    # "passNumber":I
	goto label_goto_19;
	// 230    .line 281
label_cond_6a:
	t = std::make_shared<android::icu::text::CompoundTransliterator>(transliterators, ( passNumber + -0x1));
	//    .local v6, "t":Landroid/icu/text/Transliterator;
	t->setID(this->ID);
	if ( !(this->compoundFilter) )  
		goto label_cond_7f;
	t->setFilter(this->compoundFilter);
label_cond_7f:
	return t;
	// 258    .end local v6    # "t":Landroid/icu/text/Transliterator;
label_cond_80:
	//    .end local v5    # "passNumber":I
	//    .restart local v4    # "passNumber":I
	goto label_goto_66;

}


