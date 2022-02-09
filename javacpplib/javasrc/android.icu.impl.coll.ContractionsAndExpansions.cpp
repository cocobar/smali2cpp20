// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\ContractionsAndExpansions.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.impl.coll.Collation.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.ContractionsAndExpansions_S_CESink.h"
#include "android.icu.impl.coll.ContractionsAndExpansions.h"
#include "android.icu.impl.coll.UTF16CollationIterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.CharsTrie_S_Entry.h"
#include "android.icu.util.CharsTrie_S_Iterator.h"
#include "android.icu.util.CharsTrie.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Iterator.h"

static android::icu::impl::coll::ContractionsAndExpansions::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::coll::ContractionsAndExpansions::static_cinit()
{
	
	android::icu::impl::coll::ContractionsAndExpansions::_assertionsDisabled = ( android::icu::impl::coll::ContractionsAndExpansions()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/impl/coll/ContractionsAndExpansions$CESink;Z)V
android::icu::impl::coll::ContractionsAndExpansions::ContractionsAndExpansions(std::shared_ptr<android::icu::text::UnicodeSet> con,std::shared_ptr<android::icu::text::UnicodeSet> exp,std::shared_ptr<android::icu::impl::coll::ContractionsAndExpansions_S_CESink> s,bool prefixes)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "con"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "exp"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "s"    # Landroid/icu/impl/coll/ContractionsAndExpansions$CESink;
	//    .param p4, "prefixes"    # Z
	// 070    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->checkTailored = 0x0;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>();
	this->tailored = cVar0;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	this->unreversedPrefix = cVar1;
	this->ces = std::make_shared<std::vector<long long[]>>(0x1f);
	this->contractions = con;
	this->expansions = exp;
	this->sink = s;
	this->addPrefixes = prefixes;
	return;

}
// .method private enumCnERange(IIILandroid/icu/impl/coll/ContractionsAndExpansions;)V
void android::icu::impl::coll::ContractionsAndExpansions::enumCnERange(int start,int end,int ce32,std::shared_ptr<android::icu::impl::coll::ContractionsAndExpansions> cne)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	int i;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "ce32"    # I
	//    .param p4, "cne"    # Landroid/icu/impl/coll/ContractionsAndExpansions;
	if ( cne->checkTailored )     
		goto label_cond_8;
label_cond_4:
label_goto_4:
	cne->handleCE32(start, end, ce32);
	return;
	// 135    .line 81
label_cond_8:
	if ( cne->checkTailored >= 0 )
		goto label_cond_17;
	if ( ce32 != 0xc0 )
		goto label_cond_11;
	return;
	// 149    .line 86
label_cond_11:
	cne->tailored->add(start, end);
	goto label_goto_4;
	// 157    .line 89
label_cond_17:
	if ( start != end )
		goto label_cond_22;
	if ( !(cne->tailored->contains(start)) )  
		goto label_cond_4;
	return;
	// 173    .line 93
label_cond_22:
	if ( !(cne->tailored->containsSome(start, end)) )  
		goto label_cond_4;
	if ( cne->ranges )     
		goto label_cond_35;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>();
	cne->ranges = cVar0;
label_cond_35:
	cne->ranges->set(start, end)->removeAll(cne->tailored);
	//    .local v0, "count":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_47:
	if ( i >= cne->ranges->getRangeCount() )
		goto label_cond_4;
	cne->handleCE32(cne->ranges->getRangeStart(i), cne->ranges->getRangeEnd(i), ce32);
	i = ( i + 0x1);
	goto label_goto_47;

}
// .method private handleCE32(III)V
void android::icu::impl::coll::ContractionsAndExpansions::handleCE32(int start,int end,int ce32)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar1;
	int length;
	int i;
	int ce32;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<android::icu::impl::coll::UTF16CollationIterator> iter;
	std::shared_ptr<java::lang::StringBuilder> hangul;
	int c;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "ce32"    # I
label_goto_0:
	if ( ( ce32 & 0xff) >= 0xc0 )
		goto label_cond_14;
	if ( !(this->sink) )  
		goto label_cond_13;
	this->sink->handleCE(android::icu::impl::coll::Collation::ceFromSimpleCE32(ce32));
label_cond_13:
	return;
	// 276    .line 125
label_cond_14:
	// switch
	{
	auto item = ( android::icu::impl::coll::Collation::tagFromCE32(ce32) );
	if (item == 0) goto label_pswitch_1c;
	if (item == 1) goto label_pswitch_3f;
	if (item == 2) goto label_pswitch_4d;
	if (item == 3) goto label_pswitch_1d;
	if (item == 4) goto label_pswitch_5b;
	if (item == 5) goto label_pswitch_86;
	if (item == 6) goto label_pswitch_bc;
	if (item == 7) goto label_pswitch_1d;
	if (item == 8) goto label_pswitch_dd;
	if (item == 9) goto label_pswitch_e1;
	if (item == 10) goto label_pswitch_e5;
	if (item == 11) goto label_pswitch_f1;
	if (item == 12) goto label_pswitch_108;
	if (item == 13) goto label_pswitch_1d;
	if (item == 14) goto label_pswitch_163;
	if (item == 15) goto label_pswitch_164;
	}
	goto label_goto_0;
	// 286    .line 127
label_pswitch_1c:
	return;
	// 290    .line 132
label_pswitch_1d:
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar1[0x0] = java::lang::Integer::valueOf(android::icu::impl::coll::Collation::tagFromCE32(ce32));
	cVar1[0x1] = java::lang::Integer::valueOf(ce32);
	cVar0 = std::make_shared<java::lang::AssertionError>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unexpected CE32 tag type %d for ce32=0x%08x")), cVar1));
	// throw
	throw cVar0;
	// 332    .line 136
label_pswitch_3f:
	if ( !(this->sink) )  
		goto label_cond_4c;
	this->sink->handleCE(android::icu::impl::coll::Collation::ceFromLongPrimaryCE32(ce32));
label_cond_4c:
	return;
	// 351    .line 141
label_pswitch_4d:
	if ( !(this->sink) )  
		goto label_cond_5a;
	this->sink->handleCE(android::icu::impl::coll::Collation::ceFromLongSecondaryCE32(ce32));
label_cond_5a:
	return;
	// 370    .line 146
label_pswitch_5b:
	if ( !(this->sink) )  
		goto label_cond_7a;
	this->ces[0x0] = android::icu::impl::coll::Collation::latinCE0FromCE32(ce32);
	this->ces[0x1] = android::icu::impl::coll::Collation::latinCE1FromCE32(ce32);
	this->sink->handleExpansion(this->ces, 0x0, 0x2);
label_cond_7a:
	if ( this->unreversedPrefix->length() )     
		goto label_cond_85;
	this->addExpansions(start, end);
label_cond_85:
	return;
	// 426    .line 158
label_pswitch_86:
	if ( !(this->sink) )  
		goto label_cond_b0;
	//    .local v3, "idx":I
	length = android::icu::impl::coll::Collation::lengthFromCE32(ce32);
	//    .local v5, "length":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_93:
	if ( i >= length )
		goto label_cond_a8;
	this->ces[i] = android::icu::impl::coll::Collation::ceFromCE32(this->data->ce32s[(android::icu::impl::coll::Collation::indexFromCE32(ce32) + i)]);
	i = ( i + 0x1);
	goto label_goto_93;
	// 473    .line 164
label_cond_a8:
	this->sink->handleExpansion(this->ces, 0x0, length);
	//    .end local v2    # "i":I
	//    .end local v3    # "idx":I
	//    .end local v5    # "length":I
label_cond_b0:
	if ( this->unreversedPrefix->length() )     
		goto label_cond_bb;
	this->addExpansions(start, end);
label_cond_bb:
	return;
	// 503    .line 173
label_pswitch_bc:
	if ( !(this->sink) )  
		goto label_cond_d1;
	//    .restart local v3    # "idx":I
	//    .restart local v5    # "length":I
	this->sink->handleExpansion(this->data->ces, android::icu::impl::coll::Collation::indexFromCE32(ce32), android::icu::impl::coll::Collation::lengthFromCE32(ce32));
	//    .end local v3    # "idx":I
	//    .end local v5    # "length":I
label_cond_d1:
	if ( this->unreversedPrefix->length() )     
		goto label_cond_dc;
	this->addExpansions(start, end);
label_cond_dc:
	return;
	// 549    .line 185
label_pswitch_dd:
	this->handlePrefixes(start, end, ce32);
	return;
	// 556    .line 188
label_pswitch_e1:
	this->handleContractions(start, end, ce32);
	return;
	// 563    .line 192
label_pswitch_e5:
	ce32 = this->data->ce32s[android::icu::impl::coll::Collation::indexFromCE32(ce32)];
	goto label_goto_0;
	// 577    .line 195
label_pswitch_f1:
	if ( android::icu::impl::coll::ContractionsAndExpansions::_assertionsDisabled )     
		goto label_cond_ff;
	if ( start )     
		goto label_cond_f9;
	if ( !(end) )  
		goto label_cond_ff;
label_cond_f9:
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 594    .line 197
label_cond_ff:
	ce32 = this->data->ce32s[0x0];
	goto label_goto_0;
	// 606    .line 200
label_pswitch_108:
	if ( !(this->sink) )  
		goto label_cond_157;
	iter = std::make_shared<android::icu::impl::coll::UTF16CollationIterator>(this->data);
	//    .local v4, "iter":Landroid/icu/impl/coll/UTF16CollationIterator;
	hangul = std::make_shared<java::lang::StringBuilder>(0x1);
	//    .local v1, "hangul":Ljava/lang/StringBuilder;
	c = start;
	//    .local v0, "c":I
label_goto_11a:
	if ( c >  end )
		goto label_cond_157;
	hangul->setLength(0x0);
	hangul->appendCodePoint(c);
	iter->setText(0x0, hangul, 0x0);
	length = iter->fetchCEs();
	//    .restart local v5    # "length":I
	if ( android::icu::impl::coll::ContractionsAndExpansions::_assertionsDisabled )     
		goto label_cond_148;
	if ( length <  0x2 )
		goto label_cond_142;
	if ( !((iter->getCE(( length + -0x1)) > 0x101000100L)) )  
		goto label_cond_148;
label_cond_142:
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 684    .line 212
label_cond_148:
	this->sink->handleExpansion(iter->getCEs(), 0x0, ( length + -0x1));
	c = ( c + 0x1);
	goto label_goto_11a;
	// 703    .line 217
	// 704    .end local v0    # "c":I
	// 705    .end local v1    # "hangul":Ljava/lang/StringBuilder;
	// 706    .end local v4    # "iter":Landroid/icu/impl/coll/UTF16CollationIterator;
	// 707    .end local v5    # "length":I
label_cond_157:
	if ( this->unreversedPrefix->length() )     
		goto label_cond_162;
	this->addExpansions(start, end);
label_cond_162:
	return;
	// 724    .line 223
label_pswitch_163:
	return;
	// 728    .line 226
label_pswitch_164:
	return;
	// 732    .line 125
	// 733    nop
	// 735    :pswitch_data_166
	// 736    .packed-switch 0x0
	// 737        :pswitch_1c
	// 738        :pswitch_3f
	// 739        :pswitch_4d
	// 740        :pswitch_1d
	// 741        :pswitch_5b
	// 742        :pswitch_86
	// 743        :pswitch_bc
	// 744        :pswitch_1d
	// 745        :pswitch_dd
	// 746        :pswitch_e1
	// 747        :pswitch_e5
	// 748        :pswitch_f1
	// 749        :pswitch_108
	// 750        :pswitch_1d
	// 751        :pswitch_163
	// 752        :pswitch_164
	// 753    .end packed-switch

}
// .method private handlePrefixes(III)V
void android::icu::impl::coll::ContractionsAndExpansions::handlePrefixes(int start,int end,int ce32)
{
	
	int index;
	std::shared_ptr<android::icu::util::CharsTrie> cVar0;
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> prefixes;
	std::shared_ptr<java::lang::CharSequence> e;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "ce32"    # I
	index = android::icu::impl::coll::Collation::indexFromCE32(ce32);
	//    .local v1, "index":I
	this->handleCE32(start, end, this->data->getCE32FromContexts(index));
	if ( this->addPrefixes )     
		goto label_cond_12;
	return;
	// 787    .line 238
label_cond_12:
	cVar0 = std::make_shared<android::icu::util::CharsTrie>(this->data->contexts, ( index + 0x2));
	prefixes = cVar0->iterator();
	//    .local v2, "prefixes":Landroid/icu/util/CharsTrie$Iterator;
label_goto_21:
	if ( !(prefixes->hasNext()) )  
		goto label_cond_40;
	e = prefixes->next();
	//    .local v0, "e":Landroid/icu/util/CharsTrie$Entry;
	this->setPrefix(e->chars);
	this->addStrings(start, end, this->contractions);
	this->addStrings(start, end, this->expansions);
	this->handleCE32(start, end, e->value);
	goto label_goto_21;
	// 840    .line 248
	// 841    .end local v0    # "e":Landroid/icu/util/CharsTrie$Entry;
label_cond_40:
	this->resetPrefix();
	return;

}
// .method private resetPrefix()V
void android::icu::impl::coll::ContractionsAndExpansions::resetPrefix()
{
	
	this->unreversedPrefix->setLength(0x0);
	return;

}
// .method private setPrefix(Ljava/lang/CharSequence;)V
void android::icu::impl::coll::ContractionsAndExpansions::setPrefix(std::shared_ptr<java::lang::CharSequence> pfx)
{
	
	//    .param p1, "pfx"    # Ljava/lang/CharSequence;
	this->unreversedPrefix->setLength(0x0);
	this->unreversedPrefix->append(pfx)->reverse();
	return;

}
// .method addExpansions(II)V
void android::icu::impl::coll::ContractionsAndExpansions::addExpansions(int start,int end)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	if ( this->unreversedPrefix->length() )     
		goto label_cond_16;
	if ( this->suffix )     
		goto label_cond_16;
	if ( !(this->expansions) )  
		goto label_cond_15;
	this->expansions->add(start, end);
label_cond_15:
label_goto_15:
	return;
	// 925    .line 282
label_cond_16:
	this->addStrings(start, end, this->expansions);
	goto label_goto_15;

}
// .method addStrings(IILandroid/icu/text/UnicodeSet;)V
void android::icu::impl::coll::ContractionsAndExpansions::addStrings(int start,int end,std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	std::shared_ptr<java::lang::StringBuilder> s;
	int start;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "set"    # Landroid/icu/text/UnicodeSet;
	if ( set )     
		goto label_cond_3;
	return;
	// 947    .line 290
label_cond_3:
	s = std::make_shared<java::lang::StringBuilder>(this->unreversedPrefix);
	//    .local v0, "s":Ljava/lang/StringBuilder;
label_cond_a:
	s->appendCodePoint(start);
	if ( !(this->suffix) )  
		goto label_cond_16;
	s->append(this->suffix);
label_cond_16:
	set->add(s);
	s->setLength(this->unreversedPrefix->length());
	start = ( start + 0x1);
	if ( start <= end )
		goto label_cond_a;
	return;

}
// .method public forCodePoint(Landroid/icu/impl/coll/CollationData;I)V
void android::icu::impl::coll::ContractionsAndExpansions::forCodePoint(std::shared_ptr<android::icu::impl::coll::CollationData> cVar0,int c)
{
	
	int ce32;
	std::shared_ptr<android::icu::impl::coll::CollationData> cVar0;
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "c"    # I
	ce32 = cVar0->getCE32(c);
	//    .local v0, "ce32":I
	if ( ce32 != 0xc0 )
		goto label_cond_e;
	cVar0 = cVar0->base;
label_cond_e:
	this->data = cVar0;
	this->handleCE32(c, c, ce32);
	return;

}
// .method public forData(Landroid/icu/impl/coll/CollationData;)V
void android::icu::impl::coll::ContractionsAndExpansions::forData(std::shared_ptr<android::icu::impl::coll::CollationData> d)
{
	
	std::shared_ptr<java::util::Iterator> trieIterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> range;
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	if ( !(d->base) )  
		goto label_cond_7;
	this->checkTailored = -0x1;
label_cond_7:
	this->data = d;
	trieIterator = this->data->trie->iterator();
	//    .local v1, "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_goto_11:
	if ( !(trieIterator->hasNext()) )  
		goto label_cond_2d;
	range = trieIterator->next();
	range->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v0, "range":Landroid/icu/impl/Trie2$Range;
	if ( !(( range->leadSurrogate ^ 0x1)) )  
		goto label_cond_2d;
	this->enumCnERange(range->startCodePoint, range->endCodePoint, range->value, this);
	goto label_goto_11;
	// 1089    .line 64
	// 1090    .end local v0    # "range":Landroid/icu/impl/Trie2$Range;
label_cond_2d:
	if ( d->base )     
		goto label_cond_32;
	return;
	// 1099    .line 68
label_cond_32:
	this->tailored->freeze();
	this->checkTailored = 0x1;
	this->data = d->base;
	trieIterator = this->data->trie->iterator();
label_goto_46:
	if ( !(trieIterator->hasNext()) )  
		goto label_cond_62;
	range = trieIterator->next();
	range->checkCast("android::icu::impl::Trie2_S_Range");
	//    .restart local v0    # "range":Landroid/icu/impl/Trie2$Range;
	if ( !(( range->leadSurrogate ^ 0x1)) )  
		goto label_cond_62;
	this->enumCnERange(range->startCodePoint, range->endCodePoint, range->value, this);
	goto label_goto_46;
	// 1156    .line 75
	// 1157    .end local v0    # "range":Landroid/icu/impl/Trie2$Range;
label_cond_62:
	return;

}
// .method handleContractions(III)V
void android::icu::impl::coll::ContractionsAndExpansions::handleContractions(int start,int end,int ce32)
{
	
	int index;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<android::icu::util::CharsTrie> cVar3;
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> suffixes;
	std::shared_ptr<java::lang::CharSequence> e;
	int cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "ce32"    # I
	index = android::icu::impl::coll::Collation::indexFromCE32(ce32);
	//    .local v1, "index":I
	if ( !(( ce32 & 0x100)) )  
		goto label_cond_1a;
	if ( android::icu::impl::coll::ContractionsAndExpansions::_assertionsDisabled )     
		goto label_cond_33;
	if ( this->unreversedPrefix->length() )     
		goto label_cond_33;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1199    .line 259
label_cond_1a:
	cVar1 = this->data->getCE32FromContexts(index);
	if ( android::icu::impl::coll::ContractionsAndExpansions::_assertionsDisabled )     
		goto label_cond_30;
	if ( !(android::icu::impl::coll::Collation::isContractionCE32(cVar1)) )  
		goto label_cond_30;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 1224    .line 261
label_cond_30:
	this->handleCE32(start, end, cVar1);
label_cond_33:
	cVar3 = std::make_shared<android::icu::util::CharsTrie>(this->data->contexts, ( index + 0x2));
	suffixes = cVar3->iterator();
	//    .local v2, "suffixes":Landroid/icu/util/CharsTrie$Iterator;
label_goto_42:
	if ( !(suffixes->hasNext()) )  
		goto label_cond_6c;
	e = suffixes->next();
	//    .local v0, "e":Landroid/icu/util/CharsTrie$Entry;
	this->suffix = e->chars->toString();
	this->addStrings(start, end, this->contractions);
	if ( !(this->unreversedPrefix->length()) )  
		goto label_cond_66;
	this->addStrings(start, end, this->expansions);
label_cond_66:
	this->handleCE32(start, end, e->value);
	goto label_goto_42;
	// 1295    .line 273
	// 1296    .end local v0    # "e":Landroid/icu/util/CharsTrie$Entry;
label_cond_6c:
	this->suffix = 0x0;
	return;

}


