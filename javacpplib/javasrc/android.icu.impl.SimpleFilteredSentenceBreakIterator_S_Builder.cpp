// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\SimpleFilteredSentenceBreakIterator$Builder.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_OpenType.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.SimpleFilteredSentenceBreakIterator_S_Builder.h"
#include "android.icu.impl.SimpleFilteredSentenceBreakIterator.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.util.CharsTrie.h"
#include "android.icu.util.CharsTrieBuilder.h"
#include "android.icu.util.StringTrieBuilder_S_Option.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"

static android::icu::impl::SimpleFilteredSentenceBreakIterator_S_Builder::AddToForward = 0x2;
static android::icu::impl::SimpleFilteredSentenceBreakIterator_S_Builder::MATCH = 0x2;
static android::icu::impl::SimpleFilteredSentenceBreakIterator_S_Builder::PARTIAL = 0x1;
static android::icu::impl::SimpleFilteredSentenceBreakIterator_S_Builder::SuppressInReverse = 0x1;
// .method public constructor <init>()V
android::icu::impl::SimpleFilteredSentenceBreakIterator_S_Builder::SimpleFilteredSentenceBreakIterator_S_Builder()
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	std::shared_ptr<java::util::HashSet> cVar1;
	
	// 046    invoke-direct {p0}, Landroid/icu/text/FilteredBreakIteratorBuilder;-><init>()V
	cVar0 = std::make_shared<java::util::HashSet>();
	this->filterSet = cVar0;
	cVar1 = std::make_shared<java::util::HashSet>();
	this->filterSet = cVar1;
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::impl::SimpleFilteredSentenceBreakIterator_S_Builder::SimpleFilteredSentenceBreakIterator_S_Builder(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> breaks;
	int index;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> b;
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	// 072    invoke-direct {p0}, Landroid/icu/text/FilteredBreakIteratorBuilder;-><init>()V
	cVar0 = std::make_shared<java::util::HashSet>();
	this->filterSet = cVar0;
	//    .local v4, "rb":Landroid/icu/impl/ICUResourceBundle;
	breaks = android::icu::impl::ICUResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/brkitr")), loc, android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_ROOT)->findWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("exceptions/SentenceBreak")));
	//    .local v2, "breaks":Landroid/icu/impl/ICUResourceBundle;
	if ( !(breaks) )  
		goto label_cond_35;
	index = 0x0;
	//    .local v3, "index":I
	//    .local v5, "size":I
label_goto_21:
	if ( index >= breaks->getSize() )
		goto label_cond_35;
	b = breaks->get(index);
	b->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "b":Landroid/icu/impl/ICUResourceBundle;
	//    .local v1, "br":Ljava/lang/String;
	this->filterSet->add(b->getString());
	index = ( index + 0x1);
	goto label_goto_21;
	// 139    .line 299
	// 140    .end local v0    # "b":Landroid/icu/impl/ICUResourceBundle;
	// 141    .end local v1    # "br":Ljava/lang/String;
	// 142    .end local v3    # "index":I
	// 143    .end local v5    # "size":I
label_cond_35:
	return;

}
// .method public build(Landroid/icu/text/BreakIterator;)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::impl::SimpleFilteredSentenceBreakIterator_S_Builder::build(std::shared_ptr<android::icu::text::BreakIterator> adoptBreakIterator)
{
	
	std::shared_ptr<android::icu::util::CharsTrieBuilder> builder;
	std::shared_ptr<android::icu::util::CharsTrieBuilder> builder2;
	int revCount;
	int fwdCount;
	int subCount;
	auto ustrs;
	std::shared<std::vector<int[]>> partials;
	int i;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::lang::String> s;
	int nn;
	int j;
	std::shared_ptr<java::lang::StringBuilder> prefix;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<android::icu::impl::SimpleFilteredSentenceBreakIterator> cVar1;
	
	//    .param p1, "adoptBreakIterator"    # Landroid/icu/text/BreakIterator;
	if ( !(this->filterSet->isEmpty()) )  
		goto label_cond_d;
	return adoptBreakIterator;
	// 171    .line 332
label_cond_d:
	builder = std::make_shared<android::icu::util::CharsTrieBuilder>();
	//    .local v6, "builder":Landroid/icu/util/CharsTrieBuilder;
	builder2 = std::make_shared<android::icu::util::CharsTrieBuilder>();
	//    .local v7, "builder2":Landroid/icu/util/CharsTrieBuilder;
	revCount = 0x0;
	//    .local v15, "revCount":I
	fwdCount = 0x0;
	//    .local v9, "fwdCount":I
	subCount = this->filterSet->size();
	//    .local v20, "subCount":I
	ustrs = std::make_shared<std::vector<std::vector<java::lang::String>>>(subCount);
	//    .local v21, "ustrs":[Ljava/lang/String;
	partials = std::make_shared<std::vector<int[]>>(subCount);
	//    .local v13, "partials":[I
	//    .local v5, "backwardsTrie":Landroid/icu/util/CharsTrie;
	//    .local v8, "forwardsPartialTrie":Landroid/icu/util/CharsTrie;
	i = 0x0;
	//    .local v10, "i":I
	s_S_iterator = this->filterSet->iterator();
	//    .local v18, "s$iterator":Ljava/util/Iterator;
label_goto_3a:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_4f;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .local v17, "s":Ljava/lang/String;
	ustrs[i] = s;
	partials[i] = 0x0;
	i = ( i + 0x1);
	goto label_goto_3a;
	// 269    .line 352
	// 270    .end local v17    # "s":Ljava/lang/String;
label_cond_4f:
	i = 0x0;
label_goto_50:
	if ( i >= subCount )
		goto label_cond_df;
	nn = ustrs[i]->indexOf(0x2e);
	//    .local v12, "nn":I
	if ( nn <= -0x1 )
		goto label_cond_db;
	if ( ( nn + 0x1) == ustrs[i]->length() )
		goto label_cond_db;
	//    .local v19, "sameAs":I
	j = 0x0;
	//    .local v11, "j":I
label_goto_73:
	if ( j >= subCount )
		goto label_cond_a8;
	if ( j != i )
		goto label_cond_7c;
label_cond_79:
label_goto_79:
	j = ( j + 0x1);
	goto label_goto_73;
	// 333    .line 361
label_cond_7c:
	if ( !(ustrs[i]->regionMatches(0x0, ustrs[j], 0x0, ( nn + 0x1))) )  
		goto label_cond_79;
	if ( partials[j] )     
		goto label_cond_9f;
	partials[j] = 0x3;
	goto label_goto_79;
	// 373    .line 364
label_cond_9f:
	if ( !(( partials[j] & 0x1)) )  
		goto label_cond_79;
	j;
	goto label_goto_79;
	// 386    .line 370
label_cond_a8:
	if ( -0x1 != -0x1 )
		goto label_cond_db;
	if ( partials[i] )     
		goto label_cond_db;
	prefix = std::make_shared<java::lang::StringBuilder>(ustrs[i]->substring(0x0, ( nn + 0x1)));
	//    .local v14, "prefix":Ljava/lang/StringBuilder;
	prefix->reverse();
	builder->add(prefix, 0x1);
	revCount = ( revCount + 0x1);
	partials[i] = 0x3;
	//    .end local v11    # "j":I
	//    .end local v14    # "prefix":Ljava/lang/StringBuilder;
	//    .end local v19    # "sameAs":I
label_cond_db:
	i = ( i + 0x1);
	goto label_goto_50;
	// 451    .line 381
	// 452    .end local v12    # "nn":I
label_cond_df:
	i = 0x0;
label_goto_e0:
	if ( i >= subCount )
		goto label_cond_10f;
	if ( partials[i] )     
		goto label_cond_101;
	cVar0 = std::make_shared<java::lang::StringBuilder>(ustrs[i]);
	//    .local v16, "reversed":Ljava/lang/StringBuilder;
	builder->add(cVar0->reverse(), 0x2);
	revCount = ( revCount + 0x1);
	//    .end local v16    # "reversed":Ljava/lang/StringBuilder;
label_goto_fe:
	i = ( i + 0x1);
	goto label_goto_e0;
	// 497    .line 392
label_cond_101:
	builder2->add(ustrs[i], 0x2);
	fwdCount = ( fwdCount + 0x1);
	goto label_goto_fe;
	// 514    .line 397
label_cond_10f:
	if ( revCount <= 0 )
		goto label_cond_119;
	//    .end local v5    # "backwardsTrie":Landroid/icu/util/CharsTrie;
label_cond_119:
	if ( fwdCount <= 0 )
		goto label_cond_123;
	//    .end local v8    # "forwardsPartialTrie":Landroid/icu/util/CharsTrie;
label_cond_123:
	var122 = cVar1(adoptBreakIterator, 0x0, 0x0);
	return cVar1;

}
// .method public suppressBreakAfter(Ljava/lang/String;)Z
bool android::icu::impl::SimpleFilteredSentenceBreakIterator_S_Builder::suppressBreakAfter(std::shared_ptr<java::lang::String> str)
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	
	//    .param p1, "str"    # Ljava/lang/String;
	if ( this->filterSet )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::util::HashSet>();
	this->filterSet = cVar0;
label_cond_b:
	return this->filterSet->add(str);

}
// .method public unsuppressBreakAfter(Ljava/lang/String;)Z
bool android::icu::impl::SimpleFilteredSentenceBreakIterator_S_Builder::unsuppressBreakAfter(std::shared_ptr<java::lang::String> str)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	if ( this->filterSet )     
		goto label_cond_6;
	return 0x0;
	// 598    .line 321
label_cond_6:
	return this->filterSet->remove(str);

}


