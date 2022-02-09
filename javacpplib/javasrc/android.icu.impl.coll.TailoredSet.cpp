// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\TailoredSet.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl_S_Hangul.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.impl.coll.Collation.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.TailoredSet.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.CharsTrie_S_Entry.h"
#include "android.icu.util.CharsTrie_S_Iterator.h"
#include "android.icu.util.CharsTrie.h"
#include "java.lang.Appendable.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Iterator.h"

static android::icu::impl::coll::TailoredSet::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::coll::TailoredSet::static_cinit()
{
	
	android::icu::impl::coll::TailoredSet::_assertionsDisabled = ( android::icu::impl::coll::TailoredSet()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(Landroid/icu/text/UnicodeSet;)V
android::icu::impl::coll::TailoredSet::TailoredSet(std::shared_ptr<android::icu::text::UnicodeSet> t)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "t"    # Landroid/icu/text/UnicodeSet;
	// 047    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->unreversedPrefix = cVar0;
	this->tailored = t;
	return;

}
// .method private add(I)V
void android::icu::impl::coll::TailoredSet::add(int c)
{
	
	std::shared_ptr<java::lang::StringBuilder> s;
	
	//    .param p1, "c"    # I
	if ( this->unreversedPrefix->length() )     
		goto label_cond_12;
	if ( this->suffix )     
		goto label_cond_12;
	this->tailored->add(c);
label_goto_11:
	return;
	// 090    .line 380
label_cond_12:
	s = std::make_shared<java::lang::StringBuilder>(this->unreversedPrefix);
	//    .local v0, "s":Ljava/lang/StringBuilder;
	s->appendCodePoint(c);
	if ( !(this->suffix) )  
		goto label_cond_25;
	s->append(this->suffix);
label_cond_25:
	this->tailored->add(s);
	goto label_goto_11;

}
// .method private addContractions(ILjava/lang/CharSequence;I)V
void android::icu::impl::coll::TailoredSet::addContractions(int c,std::shared_ptr<java::lang::CharSequence> p,int pidx)
{
	
	std::shared_ptr<android::icu::util::CharsTrie> cVar0;
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> suffixes;
	
	//    .param p1, "c"    # I
	//    .param p2, "p"    # Ljava/lang/CharSequence;
	//    .param p3, "pidx"    # I
	cVar0 = std::make_shared<android::icu::util::CharsTrie>(p, pidx);
	suffixes = cVar0->iterator();
	//    .local v1, "suffixes":Landroid/icu/util/CharsTrie$Iterator;
label_goto_9:
	if ( !(suffixes->hasNext()) )  
		goto label_cond_19;
	//    .local v0, "e":Landroid/icu/util/CharsTrie$Entry;
	this->addSuffix(c, suffixes->next()->chars);
	goto label_goto_9;
	// 159    .line 370
	// 160    .end local v0    # "e":Landroid/icu/util/CharsTrie$Entry;
label_cond_19:
	return;

}
// .method private addPrefix(Landroid/icu/impl/coll/CollationData;Ljava/lang/CharSequence;II)V
void android::icu::impl::coll::TailoredSet::addPrefix(std::shared_ptr<android::icu::impl::coll::CollationData> d,std::shared_ptr<java::lang::CharSequence> pfx,int c,int ce32)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "pfx"    # Ljava/lang/CharSequence;
	//    .param p3, "c"    # I
	//    .param p4, "ce32"    # I
	this->setPrefix(pfx);
	cVar0 = d->getFinalCE32(ce32);
	if ( !(android::icu::impl::coll::Collation::isContractionCE32(cVar0)) )  
		goto label_cond_18;
	//    .local v0, "idx":I
	this->addContractions(c, d->contexts, ( android::icu::impl::coll::Collation::indexFromCE32(cVar0) + 0x2));
	//    .end local v0    # "idx":I
label_cond_18:
	cVar1 = std::make_shared<java::lang::StringBuilder>(this->unreversedPrefix->appendCodePoint(c));
	this->tailored->add(cVar1);
	this->resetPrefix();
	return;

}
// .method private addPrefixes(Landroid/icu/impl/coll/CollationData;ILjava/lang/CharSequence;I)V
void android::icu::impl::coll::TailoredSet::addPrefixes(std::shared_ptr<android::icu::impl::coll::CollationData> d,int c,std::shared_ptr<java::lang::CharSequence> p,int pidx)
{
	
	std::shared_ptr<android::icu::util::CharsTrie> cVar0;
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> prefixes;
	std::shared_ptr<java::lang::CharSequence> e;
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "c"    # I
	//    .param p3, "p"    # Ljava/lang/CharSequence;
	//    .param p4, "pidx"    # I
	cVar0 = std::make_shared<android::icu::util::CharsTrie>(p, pidx);
	prefixes = cVar0->iterator();
	//    .local v1, "prefixes":Landroid/icu/util/CharsTrie$Iterator;
label_goto_9:
	if ( !(prefixes->hasNext()) )  
		goto label_cond_1b;
	e = prefixes->next();
	//    .local v0, "e":Landroid/icu/util/CharsTrie$Entry;
	this->addPrefix(d, e->chars, c, e->value);
	goto label_goto_9;
	// 266    .line 351
	// 267    .end local v0    # "e":Landroid/icu/util/CharsTrie$Entry;
label_cond_1b:
	return;

}
// .method private addSuffix(ILjava/lang/CharSequence;)V
void android::icu::impl::coll::TailoredSet::addSuffix(int c,std::shared_ptr<java::lang::CharSequence> sfx)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "c"    # I
	//    .param p2, "sfx"    # Ljava/lang/CharSequence;
	cVar0 = std::make_shared<java::lang::StringBuilder>(this->unreversedPrefix);
	this->tailored->add(cVar0->appendCodePoint(c)->append(sfx));
	return;

}
// .method private compare(III)V
void android::icu::impl::coll::TailoredSet::compare(int c,int cVar2,int cVar3)
{
	
	int dataIndex;
	int cVar2;
	int baseIndex;
	int cVar3;
	int tag;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar9;
	std::shared_ptr<java::lang::AssertionError> cVar10;
	int baseTag;
	std::shared_ptr<java::lang::AssertionError> cVar11;
	std::shared_ptr<java::lang::AssertionError> cVar12;
	int length;
	int i;
	std::shared_ptr<java::lang::StringBuilder> jamos;
	
	//    .param p1, "c"    # I
	//    .param p2, "ce32"    # I
	//    .param p3, "baseCE32"    # I
	if ( !(android::icu::impl::coll::Collation::isPrefixCE32(cVar2)) )  
		goto label_cond_b4;
	dataIndex = android::icu::impl::coll::Collation::indexFromCE32(cVar2);
	//    .local v11, "dataIndex":I
	cVar2 = this->data->getFinalCE32(this->data->getCE32FromContexts(dataIndex));
	if ( !(android::icu::impl::coll::Collation::isPrefixCE32(cVar3)) )  
		goto label_cond_a0;
	baseIndex = android::icu::impl::coll::Collation::indexFromCE32(cVar3);
	//    .local v8, "baseIndex":I
	cVar3 = this->baseData->getFinalCE32(this->baseData->getCE32FromContexts(baseIndex));
	this->comparePrefixes(c, this->data->contexts, ( dataIndex + 0x2), this->baseData->contexts, ( baseIndex + 0x2));
	//    .end local v8    # "baseIndex":I
	//    .end local v11    # "dataIndex":I
label_cond_4b:
label_goto_4b:
	if ( !(android::icu::impl::coll::Collation::isContractionCE32(cVar2)) )  
		goto label_cond_118;
	dataIndex = android::icu::impl::coll::Collation::indexFromCE32(cVar2);
	//    .restart local v11    # "dataIndex":I
	if ( !(( cVar2 & 0x100)) )  
		goto label_cond_e3;
	cVar2 = 0x1;
label_goto_5d:
	if ( !(android::icu::impl::coll::Collation::isContractionCE32(cVar3)) )  
		goto label_cond_107;
	baseIndex = android::icu::impl::coll::Collation::indexFromCE32(cVar3);
	//    .restart local v8    # "baseIndex":I
	if ( !(( cVar3 & 0x100)) )  
		goto label_cond_f5;
	cVar3 = 0x1;
label_goto_6f:
	this->compareContractions(c, this->data->contexts, ( dataIndex + 0x2), this->baseData->contexts, ( baseIndex + 0x2));
	//    .end local v8    # "baseIndex":I
	//    .end local v11    # "dataIndex":I
label_cond_86:
label_goto_86:
	if ( !(android::icu::impl::coll::Collation::isSpecialCE32(cVar2)) )  
		goto label_cond_163;
	tag = android::icu::impl::coll::Collation::tagFromCE32(cVar2);
	//    .local v19, "tag":I
	if ( android::icu::impl::coll::TailoredSet::_assertionsDisabled )     
		goto label_cond_143;
	if ( tag != 0x8 )
		goto label_cond_143;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 500    .line 109
	// 501    .end local v19    # "tag":I
	// 502    .restart local v11    # "dataIndex":I
label_cond_a0:
	this->addPrefixes(this->data, c, this->data->contexts, ( dataIndex + 0x2));
	goto label_goto_4b;
	// 524    .line 111
	// 525    .end local v11    # "dataIndex":I
label_cond_b4:
	if ( !(android::icu::impl::coll::Collation::isPrefixCE32(cVar3)) )  
		goto label_cond_4b;
	baseIndex = android::icu::impl::coll::Collation::indexFromCE32(cVar3);
	//    .restart local v8    # "baseIndex":I
	cVar3 = this->baseData->getFinalCE32(this->baseData->getCE32FromContexts(baseIndex));
	this->addPrefixes(this->baseData, c, this->baseData->contexts, ( baseIndex + 0x2));
	goto label_goto_4b;
	// 577    .line 122
	// 578    .end local v8    # "baseIndex":I
	// 579    .restart local v11    # "dataIndex":I
label_cond_e3:
	cVar2 = this->data->getFinalCE32(this->data->getCE32FromContexts(dataIndex));
	goto label_goto_5d;
	// 599    .line 129
	// 600    .restart local v8    # "baseIndex":I
label_cond_f5:
	cVar3 = this->baseData->getFinalCE32(this->baseData->getCE32FromContexts(baseIndex));
	goto label_goto_6f;
	// 620    .line 133
	// 621    .end local v8    # "baseIndex":I
label_cond_107:
	this->addContractions(c, this->data->contexts, ( dataIndex + 0x2));
	goto label_goto_86;
	// 639    .line 135
	// 640    .end local v11    # "dataIndex":I
label_cond_118:
	if ( !(android::icu::impl::coll::Collation::isContractionCE32(cVar3)) )  
		goto label_cond_86;
	baseIndex = android::icu::impl::coll::Collation::indexFromCE32(cVar3);
	//    .restart local v8    # "baseIndex":I
	cVar3 = this->baseData->getFinalCE32(this->baseData->getCE32FromContexts(baseIndex));
	this->addContractions(c, this->baseData->contexts, ( baseIndex + 0x2));
	goto label_goto_86;
	// 688    .line 145
	// 689    .end local v8    # "baseIndex":I
	// 690    .restart local v19    # "tag":I
label_cond_143:
	if ( android::icu::impl::coll::TailoredSet::_assertionsDisabled )     
		goto label_cond_153;
	if ( tag != 0x9 )
		goto label_cond_153;
	cVar9 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar9;
	// 708    .line 150
label_cond_153:
	if ( android::icu::impl::coll::TailoredSet::_assertionsDisabled )     
		goto label_cond_165;
	if ( tag != 0xe )
		goto label_cond_165;
	cVar10 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar10;
	// 726    .line 152
	// 727    .end local v19    # "tag":I
label_cond_163:
	tag = -0x1;
	//    .restart local v19    # "tag":I
label_cond_165:
	if ( !(android::icu::impl::coll::Collation::isSpecialCE32(cVar3)) )  
		goto label_cond_18b;
	baseTag = android::icu::impl::coll::Collation::tagFromCE32(cVar3);
	//    .local v10, "baseTag":I
	if ( android::icu::impl::coll::TailoredSet::_assertionsDisabled )     
		goto label_cond_17d;
	if ( baseTag != 0x8 )
		goto label_cond_17d;
	cVar11 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar11;
	// 761    .line 158
label_cond_17d:
	if ( android::icu::impl::coll::TailoredSet::_assertionsDisabled )     
		goto label_cond_18c;
	if ( baseTag != 0x9 )
		goto label_cond_18c;
	cVar12 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar12;
	// 777    .line 160
	// 778    .end local v10    # "baseTag":I
label_cond_18b:
	baseTag = -0x1;
	//    .restart local v10    # "baseTag":I
label_cond_18c:
	if ( baseTag != 0xe )
		goto label_cond_1b8;
	if ( android::icu::impl::coll::Collation::isLongPrimaryCE32(cVar2) )     
		goto label_cond_19a;
	this->add(c);
	return;
	// 802    .line 174
label_cond_19a:
	//    .local v12, "dataCE":J
	//    .local v20, "p":J
	if ( !((android::icu::impl::coll::Collation::primaryFromLongPrimaryCE32(cVar2) > android::icu::impl::coll::Collation::getThreeBytePrimaryForOffsetData(c, this->baseData->ces[android::icu::impl::coll::Collation::indexFromCE32(cVar3)]))) )  
		goto label_cond_1b8;
	this->add(c);
	return;
	// 840    .line 182
	// 841    .end local v12    # "dataCE":J
	// 842    .end local v20    # "p":J
label_cond_1b8:
	if ( tag == baseTag )
		goto label_cond_1c0;
	this->add(c);
	return;
	// 854    .line 187
label_cond_1c0:
	if ( tag != 0x5 )
		goto label_cond_1ff;
	length = android::icu::impl::coll::Collation::lengthFromCE32(cVar2);
	//    .local v18, "length":I
	//    .local v9, "baseLength":I
	if ( length == android::icu::impl::coll::Collation::lengthFromCE32(cVar3) )
		goto label_cond_1d5;
	this->add(c);
	return;
	// 885    .line 196
label_cond_1d5:
	//    .local v15, "idx0":I
	//    .local v16, "idx1":I
	i = 0x0;
	//    .local v14, "i":I
label_goto_1de:
	if ( i >= length )
		goto label_cond_1fb;
	if ( this->data->ce32s[(android::icu::impl::coll::Collation::indexFromCE32(cVar2) + i)] == this->baseData->ce32s[(android::icu::impl::coll::Collation::indexFromCE32(cVar3) + i)] )
		goto label_cond_1fc;
	this->add(c);
	//    .end local v9    # "baseLength":I
	//    .end local v14    # "i":I
	//    .end local v15    # "idx0":I
	//    .end local v16    # "idx1":I
	//    .end local v18    # "length":I
label_cond_1fb:
label_goto_1fb:
	return;
	// 943    .line 199
	// 944    .restart local v9    # "baseLength":I
	// 945    .restart local v14    # "i":I
	// 946    .restart local v15    # "idx0":I
	// 947    .restart local v16    # "idx1":I
	// 948    .restart local v18    # "length":I
label_cond_1fc:
	i = ( i + 0x1);
	goto label_goto_1de;
	// 954    .line 205
	// 955    .end local v9    # "baseLength":I
	// 956    .end local v14    # "i":I
	// 957    .end local v15    # "idx0":I
	// 958    .end local v16    # "idx1":I
	// 959    .end local v18    # "length":I
label_cond_1ff:
	if ( tag != 0x6 )
		goto label_cond_240;
	length = android::icu::impl::coll::Collation::lengthFromCE32(cVar2);
	//    .restart local v18    # "length":I
	//    .restart local v9    # "baseLength":I
	if ( length == android::icu::impl::coll::Collation::lengthFromCE32(cVar3) )
		goto label_cond_214;
	this->add(c);
	return;
	// 990    .line 214
label_cond_214:
	//    .restart local v15    # "idx0":I
	//    .restart local v16    # "idx1":I
	i = 0x0;
	//    .restart local v14    # "i":I
label_goto_21d:
	if ( i >= length )
		goto label_cond_1fb;
	if ( !((this->data->ces[(android::icu::impl::coll::Collation::indexFromCE32(cVar2) + i)] > this->baseData->ces[(android::icu::impl::coll::Collation::indexFromCE32(cVar3) + i)])) )  
		goto label_cond_23d;
	this->add(c);
	goto label_goto_1fb;
	// 1042    .line 217
label_cond_23d:
	i = ( i + 0x1);
	goto label_goto_21d;
	// 1048    .line 223
	// 1049    .end local v9    # "baseLength":I
	// 1050    .end local v14    # "i":I
	// 1051    .end local v15    # "idx0":I
	// 1052    .end local v16    # "idx1":I
	// 1053    .end local v18    # "length":I
label_cond_240:
	if ( tag != 0xc )
		goto label_cond_290;
	jamos = std::make_shared<java::lang::StringBuilder>();
	//    .local v17, "jamos":Ljava/lang/StringBuilder;
	//    .restart local v18    # "length":I
	if ( this->tailored->contains(jamos->charAt(0x0)) )     
		goto label_cond_28b;
	if ( this->tailored->contains(jamos->charAt(0x1)) )     
		goto label_cond_28b;
	if ( android::icu::impl::Normalizer2Impl_S_Hangul::decompose(c, jamos) != 0x3 )
		goto label_cond_1fb;
	if ( !(this->tailored->contains(jamos->charAt(0x2))) )  
		goto label_cond_1fb;
label_cond_28b:
	this->add(c);
	goto label_goto_1fb;
	// 1146    .line 230
	// 1147    .end local v17    # "jamos":Ljava/lang/StringBuilder;
	// 1148    .end local v18    # "length":I
label_cond_290:
	if ( cVar2 == cVar3 )
		goto label_cond_1fb;
	this->add(c);
	goto label_goto_1fb;

}
// .method private compareContractions(ILjava/lang/CharSequence;ILjava/lang/CharSequence;I)V
void android::icu::impl::coll::TailoredSet::compareContractions(int c,std::shared_ptr<java::lang::CharSequence> p,int pidx,std::shared_ptr<java::lang::CharSequence> q,int qidx)
{
	
	std::shared_ptr<android::icu::util::CharsTrie> cVar0;
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> suffixes;
	std::shared_ptr<android::icu::util::CharsTrie> cVar1;
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> baseSuffixes;
	std::shared_ptr<java::lang::Object> ts;
	std::shared_ptr<java::lang::String> bs;
	std::shared_ptr<java::lang::String> none;
	int be;
	std::shared_ptr<java::lang::CharSequence> te;
	std::shared_ptr<java::lang::CharSequence> be;
	std::shared_ptr<java::lang::Object> bs;
	int cmp;
	
	//    .param p1, "c"    # I
	//    .param p2, "p"    # Ljava/lang/CharSequence;
	//    .param p3, "pidx"    # I
	//    .param p4, "q"    # Ljava/lang/CharSequence;
	//    .param p5, "qidx"    # I
	cVar0 = std::make_shared<android::icu::util::CharsTrie>(p, pidx);
	suffixes = cVar0->iterator();
	//    .local v5, "suffixes":Landroid/icu/util/CharsTrie$Iterator;
	cVar1 = std::make_shared<android::icu::util::CharsTrie>(q, qidx);
	baseSuffixes = cVar1->iterator();
	//    .local v0, "baseSuffixes":Landroid/icu/util/CharsTrie$Iterator;
	ts = 0x0;
	//    .local v7, "ts":Ljava/lang/String;
	bs = 0x0;
	//    .local v2, "bs":Ljava/lang/String;
	none = std::make_shared<java::lang::String>(std::make_shared<char[]>("\uffff\uffff"));
	//    .local v4, "none":Ljava/lang/String;
	//    .local v6, "te":Landroid/icu/util/CharsTrie$Entry;
	be = 0x0;
	//    .end local v2    # "bs":Ljava/lang/String;
	//    .end local v6    # "te":Landroid/icu/util/CharsTrie$Entry;
	//    .end local v7    # "ts":Ljava/lang/String;
label_goto_19:
	if ( ts )     
		goto label_cond_2b;
	if ( !(suffixes->hasNext()) )  
		goto label_cond_4a;
	te = suffixes->next();
	//    .local v6, "te":Landroid/icu/util/CharsTrie$Entry;
	ts = te->chars->toString();
	//    .end local v6    # "te":Landroid/icu/util/CharsTrie$Entry;
label_cond_2b:
label_goto_2b:
	if ( bs )     
		goto label_cond_3d;
	if ( !(baseSuffixes->hasNext()) )  
		goto label_cond_4d;
	be = baseSuffixes->next();
	//    .local v1, "be":Landroid/icu/util/CharsTrie$Entry;
	bs = be->chars->toString();
	//    .end local v1    # "be":Landroid/icu/util/CharsTrie$Entry;
label_cond_3d:
label_goto_3d:
	if ( !(android::icu::impl::Utility::sameObjects(ts, none)) )  
		goto label_cond_50;
	if ( !(android::icu::impl::Utility::sameObjects(bs, none)) )  
		goto label_cond_50;
	return;
	// 1281    .line 308
label_cond_4a:
	//    .local v6, "te":Landroid/icu/util/CharsTrie$Entry;
	ts = none;
	//    .local v7, "ts":Ljava/lang/String;
	goto label_goto_2b;
	// 1292    .line 317
	// 1293    .end local v6    # "te":Landroid/icu/util/CharsTrie$Entry;
	// 1294    .end local v7    # "ts":Ljava/lang/String;
label_cond_4d:
	be = 0x0;
	//    .local v1, "be":Landroid/icu/util/CharsTrie$Entry;
	//    .local v2, "bs":Ljava/lang/String;
	goto label_goto_3d;
	// 1305    .line 324
	// 1306    .end local v1    # "be":Landroid/icu/util/CharsTrie$Entry;
	// 1307    .end local v2    # "bs":Ljava/lang/String;
label_cond_50:
	cmp = ts->compareTo(bs);
	//    .local v3, "cmp":I
	if ( cmp >= 0 )
		goto label_cond_5c;
	this->addSuffix(c, ts);
	0x0;
	//    .restart local v6    # "te":Landroid/icu/util/CharsTrie$Entry;
	//    .local v7, "ts":Ljava/lang/String;
	goto label_goto_19;
	// 1330    .line 330
	// 1331    .end local v6    # "te":Landroid/icu/util/CharsTrie$Entry;
	// 1332    .end local v7    # "ts":Ljava/lang/String;
label_cond_5c:
	if ( cmp <= 0 )
		goto label_cond_64;
	this->addSuffix(c, bs);
	be = 0x0;
	//    .restart local v1    # "be":Landroid/icu/util/CharsTrie$Entry;
	//    .local v2, "bs":Ljava/lang/String;
	goto label_goto_19;
	// 1349    .line 336
	// 1350    .end local v1    # "be":Landroid/icu/util/CharsTrie$Entry;
	// 1351    .end local v2    # "bs":Ljava/lang/String;
label_cond_64:
	this->suffix = ts;
	this->compare(c, te->value, be->value);
	this->suffix = 0x0;
	be = 0x0;
	//    .restart local v1    # "be":Landroid/icu/util/CharsTrie$Entry;
	//    .restart local v6    # "te":Landroid/icu/util/CharsTrie$Entry;
	bs = 0x0;
	//    .restart local v2    # "bs":Ljava/lang/String;
	ts = 0x0;
	//    .restart local v7    # "ts":Ljava/lang/String;
	goto label_goto_19;

}
// .method private comparePrefixes(ILjava/lang/CharSequence;ILjava/lang/CharSequence;I)V
void android::icu::impl::coll::TailoredSet::comparePrefixes(int c,std::shared_ptr<java::lang::CharSequence> p,int pidx,std::shared_ptr<java::lang::CharSequence> q,int qidx)
{
	
	std::shared_ptr<android::icu::util::CharsTrie> cVar0;
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> prefixes;
	std::shared_ptr<android::icu::util::CharsTrie> cVar1;
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> basePrefixes;
	std::shared_ptr<java::lang::Object> tp;
	std::shared_ptr<java::lang::String> bp;
	std::shared_ptr<java::lang::String> none;
	int be;
	std::shared_ptr<java::lang::CharSequence> te;
	std::shared_ptr<java::lang::CharSequence> be;
	std::shared_ptr<java::lang::Object> bp;
	int cmp;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	
	//    .param p1, "c"    # I
	//    .param p2, "p"    # Ljava/lang/CharSequence;
	//    .param p3, "pidx"    # I
	//    .param p4, "q"    # Ljava/lang/CharSequence;
	//    .param p5, "qidx"    # I
	cVar0 = std::make_shared<android::icu::util::CharsTrie>(p, pidx);
	prefixes = cVar0->iterator();
	//    .local v5, "prefixes":Landroid/icu/util/CharsTrie$Iterator;
	cVar1 = std::make_shared<android::icu::util::CharsTrie>(q, qidx);
	basePrefixes = cVar1->iterator();
	//    .local v0, "basePrefixes":Landroid/icu/util/CharsTrie$Iterator;
	tp = 0x0;
	//    .local v7, "tp":Ljava/lang/String;
	bp = 0x0;
	//    .local v2, "bp":Ljava/lang/String;
	none = std::make_shared<java::lang::String>(std::make_shared<char[]>("\uffff"));
	//    .local v4, "none":Ljava/lang/String;
	//    .local v6, "te":Landroid/icu/util/CharsTrie$Entry;
	be = 0x0;
	//    .end local v2    # "bp":Ljava/lang/String;
	//    .end local v6    # "te":Landroid/icu/util/CharsTrie$Entry;
	//    .end local v7    # "tp":Ljava/lang/String;
label_goto_19:
	if ( tp )     
		goto label_cond_2b;
	if ( !(prefixes->hasNext()) )  
		goto label_cond_4a;
	te = prefixes->next();
	//    .local v6, "te":Landroid/icu/util/CharsTrie$Entry;
	tp = te->chars->toString();
	//    .end local v6    # "te":Landroid/icu/util/CharsTrie$Entry;
label_cond_2b:
label_goto_2b:
	if ( bp )     
		goto label_cond_3d;
	if ( !(basePrefixes->hasNext()) )  
		goto label_cond_4d;
	be = basePrefixes->next();
	//    .local v1, "be":Landroid/icu/util/CharsTrie$Entry;
	bp = be->chars->toString();
	//    .end local v1    # "be":Landroid/icu/util/CharsTrie$Entry;
label_cond_3d:
label_goto_3d:
	if ( !(android::icu::impl::Utility::sameObjects(tp, none)) )  
		goto label_cond_50;
	if ( !(android::icu::impl::Utility::sameObjects(bp, none)) )  
		goto label_cond_50;
	return;
	// 1503    .line 251
label_cond_4a:
	//    .local v6, "te":Landroid/icu/util/CharsTrie$Entry;
	tp = none;
	//    .local v7, "tp":Ljava/lang/String;
	goto label_goto_2b;
	// 1514    .line 260
	// 1515    .end local v6    # "te":Landroid/icu/util/CharsTrie$Entry;
	// 1516    .end local v7    # "tp":Ljava/lang/String;
label_cond_4d:
	be = 0x0;
	//    .local v1, "be":Landroid/icu/util/CharsTrie$Entry;
	//    .local v2, "bp":Ljava/lang/String;
	goto label_goto_3d;
	// 1527    .line 267
	// 1528    .end local v1    # "be":Landroid/icu/util/CharsTrie$Entry;
	// 1529    .end local v2    # "bp":Ljava/lang/String;
label_cond_50:
	cmp = tp->compareTo(bp);
	//    .local v3, "cmp":I
	if ( cmp >= 0 )
		goto label_cond_6c;
	if ( android::icu::impl::coll::TailoredSet::_assertionsDisabled )     
		goto label_cond_62;
	if ( te )     
		goto label_cond_62;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 1552    .line 271
label_cond_62:
	this->addPrefix(this->data, tp, c, te->value);
	0x0;
	//    .restart local v6    # "te":Landroid/icu/util/CharsTrie$Entry;
	//    .local v7, "tp":Ljava/lang/String;
	goto label_goto_19;
	// 1570    .line 274
	// 1571    .end local v6    # "te":Landroid/icu/util/CharsTrie$Entry;
	// 1572    .end local v7    # "tp":Ljava/lang/String;
label_cond_6c:
	if ( cmp <= 0 )
		goto label_cond_84;
	if ( android::icu::impl::coll::TailoredSet::_assertionsDisabled )     
		goto label_cond_7a;
	if ( be )     
		goto label_cond_7a;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 1589    .line 277
label_cond_7a:
	this->addPrefix(this->baseData, bp, c, be->value);
	be = 0x0;
	//    .restart local v1    # "be":Landroid/icu/util/CharsTrie$Entry;
	//    .local v2, "bp":Ljava/lang/String;
	goto label_goto_19;
	// 1607    .line 281
	// 1608    .end local v1    # "be":Landroid/icu/util/CharsTrie$Entry;
	// 1609    .end local v2    # "bp":Ljava/lang/String;
label_cond_84:
	this->setPrefix(tp);
	if ( android::icu::impl::coll::TailoredSet::_assertionsDisabled )     
		goto label_cond_95;
	if ( !(te) )  
		goto label_cond_8f;
	if ( be )     
		goto label_cond_95;
label_cond_8f:
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 1629    .line 283
label_cond_95:
	this->compare(c, te->value, be->value);
	this->resetPrefix();
	be = 0x0;
	//    .restart local v1    # "be":Landroid/icu/util/CharsTrie$Entry;
	//    .restart local v6    # "te":Landroid/icu/util/CharsTrie$Entry;
	bp = 0x0;
	//    .restart local v2    # "bp":Ljava/lang/String;
	tp = 0x0;
	//    .restart local v7    # "tp":Ljava/lang/String;
	goto label_goto_19;

}
// .method private enumTailoredRange(IIILandroid/icu/impl/coll/TailoredSet;)V
void android::icu::impl::coll::TailoredSet::enumTailoredRange(int start,int end,int ce32,std::shared_ptr<android::icu::impl::coll::TailoredSet> ts)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "ce32"    # I
	//    .param p4, "ts"    # Landroid/icu/impl/coll/TailoredSet;
	if ( ce32 != 0xc0 )
		goto label_cond_5;
	return;
	// 1673    .line 70
label_cond_5:
	ts->handleCE32(start, end, ce32);
	return;

}
// .method private handleCE32(III)V
void android::icu::impl::coll::TailoredSet::handleCE32(int start,int end,int cVar2)
{
	
	int cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int cVar2;
	int baseCE32;
	int start;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "ce32"    # I
	cVar0 = 0xc0;
	if ( android::icu::impl::coll::TailoredSet::_assertionsDisabled )     
		goto label_cond_e;
	if ( cVar2 != cVar0 )
		goto label_cond_e;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 1703    .line 78
label_cond_e:
	if ( !(android::icu::impl::coll::Collation::isSpecialCE32(cVar2)) )  
		goto label_cond_1d;
	cVar2 = this->data->getIndirectCE32(cVar2);
	if ( cVar2 != cVar0 )
		goto label_cond_1d;
	return;
	// 1724    .line 85
label_cond_1d:
	baseCE32 = this->baseData->getFinalCE32(this->baseData->getCE32(start));
	//    .local v0, "baseCE32":I
	if ( !(android::icu::impl::coll::Collation::isSelfContainedCE32(cVar2)) )  
		goto label_cond_41;
	if ( !(android::icu::impl::coll::Collation::isSelfContainedCE32(baseCE32)) )  
		goto label_cond_41;
	if ( cVar2 == baseCE32 )
		goto label_cond_3c;
	this->tailored->add(start);
label_cond_3c:
label_goto_3c:
	start = ( start + 0x1);
	if ( start <= end )
		goto label_cond_1d;
	return;
	// 1770    .line 95
label_cond_41:
	this->compare(start, cVar2, baseCE32);
	goto label_goto_3c;

}
// .method private resetPrefix()V
void android::icu::impl::coll::TailoredSet::resetPrefix()
{
	
	this->unreversedPrefix->setLength(0x0);
	return;

}
// .method private setPrefix(Ljava/lang/CharSequence;)V
void android::icu::impl::coll::TailoredSet::setPrefix(std::shared_ptr<java::lang::CharSequence> pfx)
{
	
	//    .param p1, "pfx"    # Ljava/lang/CharSequence;
	this->unreversedPrefix->setLength(0x0);
	this->unreversedPrefix->append(pfx)->reverse();
	return;

}
// .method public forData(Landroid/icu/impl/coll/CollationData;)V
void android::icu::impl::coll::TailoredSet::forData(std::shared_ptr<android::icu::impl::coll::CollationData> d)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::util::Iterator> trieIterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> range;
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	this->data = d;
	this->baseData = d->base;
	if ( android::icu::impl::coll::TailoredSet::_assertionsDisabled )     
		goto label_cond_14;
	if ( this->baseData )     
		goto label_cond_14;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1847    .line 59
label_cond_14:
	trieIterator = this->data->trie->iterator();
	//    .local v1, "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_goto_1c:
	if ( !(trieIterator->hasNext()) )  
		goto label_cond_38;
	range = trieIterator->next();
	range->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v0, "range":Landroid/icu/impl/Trie2$Range;
	if ( !(( range->leadSurrogate ^ 0x1)) )  
		goto label_cond_38;
	this->enumTailoredRange(range->startCodePoint, range->endCodePoint, range->value, this);
	goto label_goto_1c;
	// 1890    .line 64
	// 1891    .end local v0    # "range":Landroid/icu/impl/Trie2$Range;
label_cond_38:
	return;

}


