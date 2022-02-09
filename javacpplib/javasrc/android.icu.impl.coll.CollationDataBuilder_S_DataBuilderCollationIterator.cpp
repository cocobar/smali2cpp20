// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationDataBuilder$DataBuilderCollationIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2Writable.h"
#include "android.icu.impl.coll.Collation.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_ConditionalCE32.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_DataBuilderCollationIterator.h"
#include "android.icu.impl.coll.CollationDataBuilder.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "android.icu.impl.coll.UVector32.h"
#include "android.icu.impl.coll.UVector64.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::static_cinit()
{
	
	android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::_assertionsDisabled = ( android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>(Landroid/icu/impl/coll/CollationDataBuilder;Landroid/icu/impl/coll/CollationData;)V
android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::CollationDataBuilder_S_DataBuilderCollationIterator(std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> b,std::shared_ptr<android::icu::impl::coll::CollationData> newData)
{
	
	int cVar0;
	int j;
	
	//    .param p1, "b"    # Landroid/icu/impl/coll/CollationDataBuilder;
	//    .param p2, "newData"    # Landroid/icu/impl/coll/CollationData;
	cVar0 = 0x43;
	android::icu::impl::coll::CollationIterator::(newData, 0x0);
	this->jamoCE32s = std::make_shared<std::vector<int[]>>(cVar0);
	this->builder = b;
	this->builderData = newData;
	this->builderData->base = this->builder->base;
	j = 0x0;
	//    .local v0, "j":I
label_goto_17:
	if ( j >= cVar0 )
		goto label_cond_2b;
	//    .local v1, "jamo":I
	this->jamoCE32s[j] = ( android::icu::impl::coll::Collation::makeCE32FromTagAndIndex(0x7, android::icu::impl::coll::CollationDataBuilder::jamoCpFromIndex(j)) | 0x100);
	j = ( j + 0x1);
	goto label_goto_17;
	// 116    .line 1215
	// 117    .end local v1    # "jamo":I
label_cond_2b:
	this->builderData->jamoCE32s = this->jamoCE32s;
	return;

}
// .method protected backwardNumCodePoints(I)V
void android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::backwardNumCodePoints(int num)
{
	
	//    .param p1, "num"    # I
	this->pos = java::lang::Character::offsetByCodePoints(this->s, this->pos, (0 - num));
	return;

}
// .method fetchCEs(Ljava/lang/CharSequence;I[JI)I
int android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::fetchCEs(std::shared_ptr<java::lang::CharSequence> str,int start,std::shared_ptr<long long[]> ces,int cesLength)
{
	
	int c;
	int ce32;
	int i;
	auto ce;
	int cesLength;
	
	//    .param p1, "str"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "ces"    # [J
	//    .param p4, "cesLength"    # I
	this->builderData->ce32s = this->builder->ce32s->getBuffer();
	this->builderData->ces = this->builder->ce64s->getBuffer();
	this->builderData->contexts = this->builder->contexts->toString();
	this->reset();
	this->s = str;
	this->pos = start;
label_cond_2b:
	if ( this->pos >= this->s->length() )
		goto label_cond_84;
	this->clearCEs();
	c = java::lang::Character::codePointAt(this->s, this->pos);
	//    .local v0, "c":I
	this->pos = (this->pos +  java::lang::Character::charCount(c));
	ce32 = this->builder->trie->get(c);
	//    .local v1, "ce32":I
	if ( ce32 != 0xc0 )
		goto label_cond_81;
	//    .local v4, "d":Landroid/icu/impl/coll/CollationData;
label_goto_61:
	this->appendCEsFromCE32(d, c, ce32, 0x1);
	i = 0x0;
	//    .local v5, "i":I
label_goto_66:
	if ( i >= this->getCEsLength() )
		goto label_cond_2b;
	ce = this->getCE(i);
	//    .local v2, "ce":J
	if ( !((ce > 0x0)) )  
		goto label_cond_7e;
	if ( cesLength >= 0x1f )
		goto label_cond_7c;
	ces[cesLength] = ce;
label_cond_7c:
	cesLength = ( cesLength + 0x1);
label_cond_7e:
	i = ( i + 0x1);
	goto label_goto_66;
	// 323    .line 1238
	// 324    .end local v2    # "ce":J
	// 325    .end local v4    # "d":Landroid/icu/impl/coll/CollationData;
	// 326    .end local v5    # "i":I
label_cond_81:
	//    .restart local v4    # "d":Landroid/icu/impl/coll/CollationData;
	goto label_goto_61;
	// 333    .line 1251
	// 334    .end local v0    # "c":I
	// 335    .end local v1    # "ce32":I
	// 336    .end local v4    # "d":Landroid/icu/impl/coll/CollationData;
label_cond_84:
	return cesLength;

}
// .method protected forwardNumCodePoints(I)V
void android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::forwardNumCodePoints(int num)
{
	
	//    .param p1, "num"    # I
	this->pos = java::lang::Character::offsetByCodePoints(this->s, this->pos, num);
	return;

}
// .method protected getCE32FromBuilderData(I)I
int android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::getCE32FromBuilderData(int ce32)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int cond;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "ce32"    # I
	if ( android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::_assertionsDisabled )     
		goto label_cond_11;
	if ( android::icu::impl::coll::Collation::hasCE32Tag(ce32, 0x7) )     
		goto label_cond_11;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 385    .line 1303
label_cond_11:
	if ( !(( ce32 & 0x100)) )  
		goto label_cond_22;
	//    .local v2, "jamo":I
	return this->builder->trie->get(android::icu::impl::coll::Collation::indexFromCE32(ce32));
	// 408    .line 1307
	// 409    .end local v2    # "jamo":I
label_cond_22:
	cond = this->builder->getConditionalCE32ForCE32(ce32);
	//    .local v0, "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	if ( cond->builtCE32 != 0x1 )
		goto label_cond_41;
	try {
	//label_try_start_2d:
	cond->builtCE32 = this->builder->buildContext(cond);
	//label_try_end_35:
	}
	catch (java::lang::IndexOutOfBoundsException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_44;
	}
	//    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_2d .. :try_end_35} :catch_44
label_goto_35:
	this->builderData->contexts = this->builder->contexts->toString();
label_cond_41:
	return cond->builtCE32;
	// 457    .line 1312
label_catch_44:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/IndexOutOfBoundsException;
	this->builder->clearContexts();
	cond->builtCE32 = this->builder->buildContext(cond);
	goto label_goto_35;

}
// .method protected getDataCE32(I)I
int android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::getDataCE32(int c)
{
	
	//    .param p1, "c"    # I
	return this->builder->trie->get(c);

}
// .method public getOffset()I
int android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::getOffset()
{
	
	return this->pos;

}
// .method public nextCodePoint()I
int android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::nextCodePoint()
{
	
	int c;
	
	if ( this->pos != this->s->length() )
		goto label_cond_c;
	return -0x1;
	// 526    .line 1270
label_cond_c:
	c = java::lang::Character::codePointAt(this->s, this->pos);
	//    .local v0, "c":I
	this->pos = (this->pos +  java::lang::Character::charCount(c));
	return c;

}
// .method public previousCodePoint()I
int android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::previousCodePoint()
{
	
	int c;
	
	if ( this->pos )     
		goto label_cond_6;
	return -0x1;
	// 566    .line 1280
label_cond_6:
	c = java::lang::Character::codePointBefore(this->s, this->pos);
	//    .local v0, "c":I
	this->pos = (this->pos -  java::lang::Character::charCount(c));
	return c;

}
// .method public resetToOffset(I)V
void android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator::resetToOffset(int newOffset)
{
	
	//    .param p1, "newOffset"    # I
	this->reset();
	this->pos = newOffset;
	return;

}


