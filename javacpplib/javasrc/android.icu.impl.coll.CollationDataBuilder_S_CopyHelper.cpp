// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationDataBuilder$CopyHelper.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2Writable.h"
#include "android.icu.impl.coll.Collation.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_CEModifier.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_ConditionalCE32.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_CopyHelper.h"
#include "android.icu.impl.coll.CollationDataBuilder.h"
#include "android.icu.impl.coll.UVector32.h"
#include "android.icu.impl.coll.UVector64.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"

static android::icu::impl::coll::CollationDataBuilder_S_CopyHelper::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationDataBuilder_S_CopyHelper::static_cinit()
{
	
	android::icu::impl::coll::CollationDataBuilder_S_CopyHelper::_assertionsDisabled = ( android::icu::impl::coll::CollationDataBuilder_S_CopyHelper()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>(Landroid/icu/impl/coll/CollationDataBuilder;Landroid/icu/impl/coll/CollationDataBuilder;Landroid/icu/impl/coll/CollationDataBuilder$CEModifier;)V
android::icu::impl::coll::CollationDataBuilder_S_CopyHelper::CollationDataBuilder_S_CopyHelper(std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> s,std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> d,std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_CEModifier> m)
{
	
	//    .param p1, "s"    # Landroid/icu/impl/coll/CollationDataBuilder;
	//    .param p2, "d"    # Landroid/icu/impl/coll/CollationDataBuilder;
	//    .param p3, "m"    # Landroid/icu/impl/coll/CollationDataBuilder$CEModifier;
	// 058    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->modifiedCEs = std::make_shared<std::vector<long long[]>>(0x1f);
	this->src = s;
	this->dest = d;
	this->modifier = m;
	return;

}
// .method copyCE32(I)I
int android::icu::impl::coll::CollationDataBuilder_S_CopyHelper::copyCE32(int cVar0)
{
	
	long long ce;
	int cVar0;
	int tag;
	std::shared_ptr<int[]> srcCE32s;
	int srcIndex;
	int length;
	int isModified;
	int i;
	int cVar1;
	auto ce;
	int j;
	std::shared_ptr<long long[]> srcCEs;
	long long srcCE;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> cond;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	int destIndex;
	int cond;
	std::shared_ptr<java::lang::AssertionError> cVar8;
	
	//    .param p1, "ce32"    # I
	if ( android::icu::impl::coll::Collation::isSpecialCE32(cVar0) )     
		goto label_cond_2a;
	ce = this->modifier->modifyCE32(cVar0);
	//    .local v2, "ce":J
	if ( !((ce > 0x101000100L)) )  
		goto label_cond_29;
	cVar0 = this->dest->encodeOneCE(ce);
	//    .end local v2    # "ce":J
label_cond_29:
label_goto_29:
	return cVar0;
	// 136    .line 693
label_cond_2a:
	tag = android::icu::impl::coll::Collation::tagFromCE32(cVar0);
	//    .local v17, "tag":I
	if ( tag != 0x5 )
		goto label_cond_cc;
	srcCE32s = this->src->ce32s->getBuffer();
	//    .local v11, "srcCE32s":[I
	srcIndex = android::icu::impl::coll::Collation::indexFromCE32(cVar0);
	//    .local v15, "srcIndex":I
	length = android::icu::impl::coll::Collation::lengthFromCE32(cVar0);
	//    .local v9, "length":I
	isModified = 0x0;
	//    .local v7, "isModified":Z
	i = 0x0;
	//    .local v6, "i":I
label_goto_50:
	if ( i >= length )
		goto label_cond_a6;
	cVar1 = srcCE32s[(srcIndex + i)];
	if ( android::icu::impl::coll::Collation::isSpecialCE32(cVar1) )     
		goto label_cond_73;
	ce = this->modifier->modifyCE32(cVar1);
	//    .restart local v2    # "ce":J
	if ( (ce > 0x101000100L) )     
		goto label_cond_84;
	//    .end local v2    # "ce":J
label_cond_73:
	if ( !(isModified) )  
		goto label_cond_81;
	this->modifiedCEs[i] = android::icu::impl::coll::Collation::ceFromCE32(cVar1);
label_cond_81:
label_goto_81:
	i = ( i + 0x1);
	goto label_goto_50;
	// 252    .line 710
	// 253    .restart local v2    # "ce":J
label_cond_84:
	if ( isModified )     
		goto label_cond_9d;
	j = 0x0;
	//    .local v8, "j":I
label_goto_87:
	if ( j >= i )
		goto label_cond_9c;
	this->modifiedCEs[j] = android::icu::impl::coll::Collation::ceFromCE32(srcCE32s[(srcIndex + j)]);
	j = ( j + 0x1);
	goto label_goto_87;
	// 286    .line 714
label_cond_9c:
	isModified = 0x1;
	//    .end local v8    # "j":I
label_cond_9d:
	this->modifiedCEs[i] = ce;
	goto label_goto_81;
	// 303    .line 719
	// 304    .end local v2    # "ce":J
label_cond_a6:
	if ( !(isModified) )  
		goto label_cond_be;
	cVar0 = this->dest->encodeCEs(this->modifiedCEs, length);
	goto label_goto_29;
	// 331    .line 722
label_cond_be:
	cVar0 = this->dest->encodeExpansion32(srcCE32s, srcIndex, length);
	goto label_goto_29;
	// 347    .line 724
	// 348    .end local v6    # "i":I
	// 349    .end local v7    # "isModified":Z
	// 350    .end local v9    # "length":I
	// 351    .end local v11    # "srcCE32s":[I
	// 352    .end local v15    # "srcIndex":I
label_cond_cc:
	if ( tag != 0x6 )
		goto label_cond_15a;
	srcCEs = this->src->ce64s->getBuffer();
	//    .local v14, "srcCEs":[J
	srcIndex = android::icu::impl::coll::Collation::indexFromCE32(cVar0);
	//    .restart local v15    # "srcIndex":I
	length = android::icu::impl::coll::Collation::lengthFromCE32(cVar0);
	//    .restart local v9    # "length":I
	isModified = 0x0;
	//    .restart local v7    # "isModified":Z
	i = 0x0;
	//    .restart local v6    # "i":I
label_goto_ee:
	if ( i >= length )
		goto label_cond_134;
	srcCE = srcCEs[(srcIndex + i)];
	//    .local v12, "srcCE":J
	ce = this->modifier->modifyCE(srcCE);
	//    .restart local v2    # "ce":J
	if ( (ce > 0x101000100L) )     
		goto label_cond_116;
	if ( !(isModified) )  
		goto label_cond_113;
	this->modifiedCEs[i] = srcCE;
label_cond_113:
label_goto_113:
	i = ( i + 0x1);
	goto label_goto_ee;
	// 449    .line 739
label_cond_116:
	if ( isModified )     
		goto label_cond_12b;
	j = 0x0;
	//    .restart local v8    # "j":I
label_goto_119:
	if ( j >= i )
		goto label_cond_12a;
	this->modifiedCEs[j] = srcCEs[(srcIndex + j)];
	j = ( j + 0x1);
	goto label_goto_119;
	// 478    .line 743
label_cond_12a:
	isModified = 0x1;
	//    .end local v8    # "j":I
label_cond_12b:
	this->modifiedCEs[i] = ce;
	goto label_goto_113;
	// 495    .line 748
	// 496    .end local v2    # "ce":J
	// 497    .end local v12    # "srcCE":J
label_cond_134:
	if ( !(isModified) )  
		goto label_cond_14c;
	cVar0 = this->dest->encodeCEs(this->modifiedCEs, length);
	goto label_goto_29;
	// 524    .line 751
label_cond_14c:
	cVar0 = this->dest->encodeExpansion(srcCEs, srcIndex, length);
	goto label_goto_29;
	// 540    .line 753
	// 541    .end local v6    # "i":I
	// 542    .end local v7    # "isModified":Z
	// 543    .end local v9    # "length":I
	// 544    .end local v14    # "srcCEs":[J
	// 545    .end local v15    # "srcIndex":I
label_cond_15a:
	if ( tag != 0x7 )
		goto label_cond_1fc;
	cond = this->src->getConditionalCE32ForCE32(cVar0);
	//    .local v4, "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	if ( android::icu::impl::coll::CollationDataBuilder_S_CopyHelper::_assertionsDisabled )     
		goto label_cond_180;
	if ( !(cond->hasContext()) )  
		goto label_cond_180;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 588    .line 757
label_cond_180:
	destIndex = this->dest->addConditionalCE32(cond->context, this->copyCE32(cond->ce32));
	//    .local v5, "destIndex":I
	cVar0 = android::icu::impl::coll::CollationDataBuilder::makeBuilderContextCE32(destIndex);
label_goto_19e:
	if ( cond->next < 0 ) 
		goto label_cond_29;
	cond = this->src->getConditionalCE32(cond->next);
	//    .local v10, "prevDestCond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	destIndex = this->dest->addConditionalCE32(cond->context, this->copyCE32(cond->ce32));
	//    .local v16, "suffixStart":I
	this->dest->unsafeBackwardSet->addAll(cond->context->substring(( cond->prefixLength() + 0x1)));
	this->dest->getConditionalCE32(destIndex)->next = destIndex;
	goto label_goto_19e;
	// 730    .line 772
	// 731    .end local v4    # "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	// 732    .end local v5    # "destIndex":I
	// 733    .end local v10    # "prevDestCond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	// 734    .end local v16    # "suffixStart":I
label_cond_1fc:
	if ( android::icu::impl::coll::CollationDataBuilder_S_CopyHelper::_assertionsDisabled )     
		goto label_cond_29;
	if ( tag == 0x1 )
		goto label_cond_29;
	if ( tag == 0x2 )
		goto label_cond_29;
	if ( tag == 0x4 )
		goto label_cond_29;
	if ( tag == 0xc )
		goto label_cond_29;
	cVar8 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar8;

}
// .method copyRangeCE32(III)V
void android::icu::impl::coll::CollationDataBuilder_S_CopyHelper::copyRangeCE32(int start,int end,int ce32)
{
	
	int cVar0;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "ce32"    # I
	cVar0 = this->copyCE32(ce32);
	this->dest->trie->setRange(start, end, cVar0, 0x1);
	if ( !(android::icu::impl::coll::CollationDataBuilder::isBuilderContextCE32(cVar0)) )  
		goto label_cond_19;
	this->dest->contextChars->add(start, end);
label_cond_19:
	return;

}


