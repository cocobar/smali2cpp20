// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CompoundTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.CompoundTransliterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.List.h"

// .method constructor <init>(Ljava/lang/String;Landroid/icu/text/UnicodeFilter;[Landroid/icu/text/Transliterator;I)V
android::icu::text::CompoundTransliterator::CompoundTransliterator(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::text::UnicodeFilter> filter2,std::shared_ptr<std::vector<android::icu::text::Transliterator>> trans2,int numAnonymousRBTs2)
{
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .param p2, "filter2"    # Landroid/icu/text/UnicodeFilter;
	//    .param p3, "trans2"    # [Landroid/icu/text/Transliterator;
	//    .param p4, "numAnonymousRBTs2"    # I
	android::icu::text::Transliterator::(id, filter2);
	this->numAnonymousRBTs = 0x0;
	this->trans = trans2;
	this->numAnonymousRBTs = numAnonymousRBTs2;
	return;

}
// .method constructor <init>(Ljava/util/List;)V
android::icu::text::CompoundTransliterator::CompoundTransliterator(std::shared_ptr<java::util::List<android::icu::text::Transliterator>> list)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 042        value = {
	// 043            "(",
	// 044            "Ljava/util/List",
	// 045            "<",
	// 046            "Landroid/icu/text/Transliterator;",
	// 047            ">;)V"
	// 048        }
	// 049    .end annotation
	//    .local p1, "list":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/Transliterator;>;"
	android::icu::text::CompoundTransliterator::(list, 0x0);
	return;

}
// .method constructor <init>(Ljava/util/List;I)V
android::icu::text::CompoundTransliterator::CompoundTransliterator(std::shared_ptr<java::util::List<android::icu::text::Transliterator>> list,int numAnonymousRBTs)
{
	
	std::shared_ptr<android::icu::text::UnicodeFilter> cVar0;
	int cVar1;
	
	//    .param p2, "numAnonymousRBTs"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 066        value = {
	// 067            "(",
	// 068            "Ljava/util/List",
	// 069            "<",
	// 070            "Landroid/icu/text/Transliterator;",
	// 071            ">;I)V"
	// 072        }
	// 073    .end annotation
	//    .local p1, "list":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/Transliterator;>;"
	cVar0 = 0x0;
	cVar1 = 0x0;
	android::icu::text::Transliterator::(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), cVar0);
	this->numAnonymousRBTs = cVar1;
	this->trans = cVar0;
	this->init(list, cVar1, cVar1);
	this->numAnonymousRBTs = numAnonymousRBTs;
	return;

}
// .method private static _smartAppend(Ljava/lang/StringBuilder;C)V
void android::icu::text::CompoundTransliterator::_smartAppend(std::shared_ptr<java::lang::StringBuilder> buf,char c)
{
	
	//    .param p0, "buf"    # Ljava/lang/StringBuilder;
	//    .param p1, "c"    # C
	if ( !(buf->length()) )  
		goto label_cond_15;
	if ( buf->charAt(( buf->length() + -0x1)) == c )
		goto label_cond_15;
	buf->append(c);
label_cond_15:
	return;

}
// .method private computeMaximumContextLength()V
void android::icu::text::CompoundTransliterator::computeMaximumContextLength()
{
	
	int max;
	int i;
	int len;
	
	max = 0x0;
	//    .local v2, "max":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_2:
	if ( i >= this->trans->size() )
		goto label_cond_15;
	len = this->trans[i]->getMaximumContextLength();
	//    .local v1, "len":I
	if ( len <= max )
		goto label_cond_12;
	max = len;
label_cond_12:
	i = ( i + 0x1);
	goto label_goto_2;
	// 177    .line 523
	// 178    .end local v1    # "len":I
label_cond_15:
	this->setMaximumContextLength(max);
	return;

}
// .method private init(Ljava/util/List;IZ)V
void android::icu::text::CompoundTransliterator::init(std::shared_ptr<java::util::List<android::icu::text::Transliterator>> list,int direction,bool fixReverseID)
{
	
	int count;
	int i;
	std::shared_ptr<android::icu::text::Transliterator> cVar0;
	std::shared_ptr<java::lang::StringBuilder> newID;
	
	//    .param p2, "direction"    # I
	//    .param p3, "fixReverseID"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 191        value = {
	// 192            "(",
	// 193            "Ljava/util/List",
	// 194            "<",
	// 195            "Landroid/icu/text/Transliterator;",
	// 196            ">;IZ)V"
	// 197        }
	// 198    .end annotation
	//    .local p1, "list":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/Transliterator;>;"
	count = list->size();
	//    .local v0, "count":I
	this->trans = std::make_shared<std::vector<std::vector<android::icu::text::Transliterator>>>(count);
	i = 0x0;
	//    .local v1, "i":I
label_goto_9:
	if ( i >= count )
		goto label_cond_20;
	if ( direction )     
		goto label_cond_1b;
	//    .local v2, "j":I
label_goto_e:
	cVar0 = list->get(j);
	cVar0->checkCast("android::icu::text::Transliterator");
	this->trans[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_9;
	// 243    .line 194
	// 244    .end local v2    # "j":I
label_cond_1b:
	//    .restart local v2    # "j":I
	goto label_goto_e;
	// 253    .line 200
	// 254    .end local v2    # "j":I
label_cond_20:
	if ( direction != 0x1 )
		goto label_cond_49;
	if ( !(fixReverseID) )  
		goto label_cond_49;
	newID = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "newID":Ljava/lang/StringBuilder;
	i = 0x0;
label_goto_2b:
	if ( i >= count )
		goto label_cond_42;
	if ( i <= 0 )
		goto label_cond_34;
	newID->append(0x3b);
label_cond_34:
	newID->append(this->trans[i]->getID());
	i = ( i + 0x1);
	goto label_goto_2b;
	// 299    .line 208
label_cond_42:
	this->setID(newID->toString());
	//    .end local v3    # "newID":Ljava/lang/StringBuilder;
label_cond_49:
	this->computeMaximumContextLength();
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::CompoundTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> filter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> myFilter;
	std::shared_ptr<android::icu::text::UnicodeSet> tempTargetSet;
	int i;
	
	//    .param p1, "filter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	myFilter = std::make_shared<android::icu::text::UnicodeSet>(this->getFilterAsUnicodeSet(filter));
	//    .local v1, "myFilter":Landroid/icu/text/UnicodeSet;
	tempTargetSet = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v2, "tempTargetSet":Landroid/icu/text/UnicodeSet;
	i = 0x0;
	//    .local v0, "i":I
label_goto_f:
	if ( i >= this->trans->size() )
		goto label_cond_27;
	tempTargetSet->clear();
	this->trans[i]->addSourceTargetSet(myFilter, sourceSet, tempTargetSet);
	targetSet->addAll(tempTargetSet);
	myFilter->addAll(tempTargetSet);
	i = ( i + 0x1);
	goto label_goto_f;
	// 373    .line 326
label_cond_27:
	return;

}
// .method public getCount()I
int android::icu::text::CompoundTransliterator::getCount()
{
	
	return this->trans->size();

}
// .method public getTransliterator(I)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::CompoundTransliterator::getTransliterator(int index)
{
	
	//    .param p1, "index"    # I
	return this->trans[index];

}
// .method protected handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::CompoundTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,bool incremental)
{
	
	int delta;
	int i;
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "index"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "incremental"    # Z
	if ( this->trans->size() >= 0x1 )
		goto label_cond_b;
	index->start = index->limit;
	return;
	// 427    .line 411
label_cond_b:
	//    .local v0, "compoundLimit":I
	//    .local v1, "compoundStart":I
	delta = 0x0;
	//    .local v2, "delta":I
	0x0;
	//    .local v5, "log":Ljava/lang/StringBuffer;
	i = 0x0;
	//    .local v3, "i":I
label_goto_12:
	if ( i >= this->trans->size() )
		goto label_cond_21;
	index->start = index->start;
	//    .local v4, "limit":I
	if ( index->start != index->limit )
		goto label_cond_25;
	//    .end local v4    # "limit":I
label_cond_21:
	index->limit = (index->limit +  delta);
	return;
	// 480    .line 459
	// 481    .restart local v4    # "limit":I
label_cond_25:
	this->trans[i]->filteredTransliterate(text, index, incremental);
	if ( incremental )     
		goto label_cond_56;
	if ( index->start == index->limit )
		goto label_cond_56;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::RuntimeException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ERROR: Incomplete non-incremental transliteration by ")))->append(this->trans[i]->getID())->toString());
	// throw
	throw cVar0;
	// 531    .line 481
label_cond_56:
	delta = (delta +  (index->limit -  index->limit));
	if ( !(incremental) )  
		goto label_cond_60;
	index->limit = index->start;
label_cond_60:
	i = ( i + 0x1);
	goto label_goto_12;

}
// .method public safeClone()Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::CompoundTransliterator::safeClone()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> filter;
	std::shared_ptr<android::icu::text::CompoundTransliterator> cVar0;
	
	filter = this->getFilter();
	//    .local v0, "filter":Landroid/icu/text/UnicodeFilter;
	if ( !(filter) )  
		goto label_cond_12;
	if ( !(filter->instanceOf("android::icu::text::UnicodeSet")) )  
		goto label_cond_12;
	filter->checkCast("android::icu::text::UnicodeSet");
	//    .end local v0    # "filter":Landroid/icu/text/UnicodeFilter;
	filter = std::make_shared<android::icu::text::UnicodeSet>(filter);
	//    .local v1, "filter":Landroid/icu/text/UnicodeFilter;
	//    .end local v1    # "filter":Landroid/icu/text/UnicodeFilter;
	//    .restart local v0    # "filter":Landroid/icu/text/UnicodeFilter;
label_cond_12:
	cVar0 = std::make_shared<android::icu::text::CompoundTransliterator>(this->getID(), filter, this->trans, this->numAnonymousRBTs);
	return cVar0;

}
// .method public toRules(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CompoundTransliterator::toRules(bool escapeUnprintable)
{
	
	int cVar0;
	char cVar1;
	std::shared_ptr<java::lang::StringBuilder> rulesSource;
	int i;
	std::shared_ptr<java::lang::String> rule;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "escapeUnprintable"    # Z
	cVar0 = 0x1;
	cVar1 = 0x3b;
	rulesSource = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "rulesSource":Ljava/lang/StringBuilder;
	if ( this->numAnonymousRBTs <  cVar0 )
		goto label_cond_28;
	if ( !(this->getFilter()) )  
		goto label_cond_28;
	rulesSource->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("::")))->append(this->getFilter()->toPattern(escapeUnprintable))->append(cVar1);
label_cond_28:
	i = 0x0;
	//    .local v0, "i":I
label_goto_29:
	if ( i >= this->trans->size() )
		goto label_cond_a2;
	if ( !(this->trans[i]->getID()->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("%Pass")))) )  
		goto label_cond_82;
	rule = this->trans[i]->toRules(escapeUnprintable);
	//    .local v1, "rule":Ljava/lang/String;
	if ( this->numAnonymousRBTs <= cVar0 )
		goto label_cond_74;
	if ( i <= 0 )
		goto label_cond_74;
	if ( !(this->trans[( i + -0x1)]->getID()->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("%Pass")))) )  
		goto label_cond_74;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
label_cond_74:
label_goto_74:
	android::icu::text::CompoundTransliterator::_smartAppend(rulesSource, 0xa);
	rulesSource->append(rule);
	android::icu::text::CompoundTransliterator::_smartAppend(rulesSource, cVar1);
	i = ( i + 0x1);
	goto label_goto_29;
	// 749    .line 297
	// 750    .end local v1    # "rule":Ljava/lang/String;
label_cond_82:
	if ( this->trans[i]->getID()->indexOf(cVar1) < 0 ) 
		goto label_cond_99;
	//    .restart local v1    # "rule":Ljava/lang/String;
	goto label_goto_74;
	// 778    .line 302
	// 779    .end local v1    # "rule":Ljava/lang/String;
label_cond_99:
	//    .restart local v1    # "rule":Ljava/lang/String;
	goto label_goto_74;
	// 792    .line 308
	// 793    .end local v1    # "rule":Ljava/lang/String;
label_cond_a2:
	return rulesSource->toString();

}


