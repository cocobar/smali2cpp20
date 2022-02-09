// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationDataBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2Writable.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.impl.coll.Collation.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_CEModifier.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_ConditionalCE32.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_CopyHelper.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_DataBuilderCollationIterator.h"
#include "android.icu.impl.coll.CollationDataBuilder.h"
#include "android.icu.impl.coll.CollationFastLatinBuilder.h"
#include "android.icu.impl.coll.UVector32.h"
#include "android.icu.impl.coll.UVector64.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.text.UnicodeSetIterator.h"
#include "android.icu.util.CharsTrie_S_Entry.h"
#include "android.icu.util.CharsTrie_S_Iterator.h"
#include "android.icu.util.CharsTrie.h"
#include "android.icu.util.CharsTrieBuilder.h"
#include "android.icu.util.StringTrieBuilder_S_Option.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.Iterator.h"

static android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled;
static android::icu::impl::coll::CollationDataBuilder::IS_BUILDER_JAMO_CE32 = 0x100;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationDataBuilder::static_cinit()
{
	
	android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled = ( android::icu::impl::coll::CollationDataBuilder()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>()V
android::icu::impl::coll::CollationDataBuilder::CollationDataBuilder()
{
	
	bool cVar0;
	std::shared_ptr<android::icu::impl::coll::CollationData> cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar4;
	std::shared_ptr<android::icu::impl::coll::UVector32> cVar5;
	std::shared_ptr<android::icu::impl::coll::UVector64> cVar6;
	std::shared_ptr<java::util::ArrayList> cVar7;
	
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 090    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>();
	this->contextChars = cVar2;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	this->contexts = cVar3;
	cVar4 = std::make_shared<android::icu::text::UnicodeSet>();
	this->unsafeBackwardSet = cVar4;
	this->nfcImpl = android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->impl;
	this->base = cVar1;
	this->baseSettings = cVar1;
	this->trie = cVar1;
	cVar5 = std::make_shared<android::icu::impl::coll::UVector32>();
	this->ce32s = cVar5;
	cVar6 = std::make_shared<android::icu::impl::coll::UVector64>();
	this->ce64s = cVar6;
	cVar7 = std::make_shared<java::util::ArrayList>();
	this->conditionalCE32s = cVar7;
	this->modified = cVar0;
	this->fastLatinEnabled = cVar0;
	this->fastLatinBuilder = cVar1;
	this->collIter = cVar1;
	this->ce32s->addElement(cVar0);
	return;

}
// .method protected static encodeOneCEAsCE32(J)I
int android::icu::impl::coll::CollationDataBuilder::encodeOneCEAsCE32(long long ce)
{
	
	long long cVar0;
	int cVar1;
	long long p;
	int lower32;
	int t;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p0, "ce"    # J
	cVar0 = 0x0;
	cVar1 = 0xc000;
	p = _ushrll(ce,0x20);
	//    .local v2, "p":J
	lower32 = (int)(ce);
	//    .local v0, "lower32":I
	t = (lower32 & 0xffff);
	//    .local v1, "t":I
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_1d;
	if ( (t & cVar1) != cVar1 )
		goto label_cond_1d;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 213    .line 455
label_cond_1d:
	if ( ((0xffff00ff00ffL &  ce) > cVar0) )     
		goto label_cond_2f;
	return (((int)(p) |  _ushri(lower32,0x10)) |  _shri(t,0x8));
	// 236    .line 458
label_cond_2f:
	if ( ((0xffffffffffL &  ce) > 0x5000500) )     
		goto label_cond_41;
	return android::icu::impl::coll::Collation::makeLongPrimaryCE32(p);
	// 255    .line 461
label_cond_41:
	if ( (p > cVar0) )     
		goto label_cond_4e;
	if ( ( t & 0xff) )     
		goto label_cond_4e;
	return android::icu::impl::coll::Collation::makeLongSecondaryCE32(lower32);
	// 272    .line 465
label_cond_4e:
	return 0x1;

}
// .method private static enumRangeForCopy(IIILandroid/icu/impl/coll/CollationDataBuilder$CopyHelper;)V
void android::icu::impl::coll::CollationDataBuilder::enumRangeForCopy(int start,int end,int value,std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_CopyHelper> helper)
{
	
	//    .param p0, "start"    # I
	//    .param p1, "end"    # I
	//    .param p2, "value"    # I
	//    .param p3, "helper"    # Landroid/icu/impl/coll/CollationDataBuilder$CopyHelper;
	if ( value == -0x1 )
		goto label_cond_a;
	if ( value == 0xc0 )
		goto label_cond_a;
	helper->copyRangeCE32(start, end, value);
label_cond_a:
	return;

}
// .method protected static isBuilderContextCE32(I)Z
bool android::icu::impl::coll::CollationDataBuilder::isBuilderContextCE32(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return android::icu::impl::coll::Collation::hasCE32Tag(ce32, 0x7);

}
// .method protected static jamoCpFromIndex(I)I
int android::icu::impl::coll::CollationDataBuilder::jamoCpFromIndex(int i)
{
	
	int cVar0;
	
	//    .param p0, "i"    # I
	if ( i >= 0x13 )
		goto label_cond_7;
	return ( i + 0x1100);
	// 333    .line 1177
label_cond_7:
	cVar0 = ( i + -0x13);
	if ( cVar0 >= 0x15 )
		goto label_cond_10;
	return ( cVar0 + 0x1161);
	// 346    .line 1179
label_cond_10:
	return ( ( cVar0 + -0x15) + 0x11a8);

}
// .method protected static makeBuilderContextCE32(I)I
int android::icu::impl::coll::CollationDataBuilder::makeBuilderContextCE32(int index)
{
	
	//    .param p0, "index"    # I
	return android::icu::impl::coll::Collation::makeCE32FromTagAndIndex(0x7, index);

}
// .method add(Ljava/lang/CharSequence;Ljava/lang/CharSequence;[JI)V
void android::icu::impl::coll::CollationDataBuilder::add(std::shared_ptr<java::lang::CharSequence> prefix,std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<long long[]> ces,int cesLength)
{
	
	//    .param p1, "prefix"    # Ljava/lang/CharSequence;
	//    .param p2, "s"    # Ljava/lang/CharSequence;
	//    .param p3, "ces"    # [J
	//    .param p4, "cesLength"    # I
	//    .local v0, "ce32":I
	this->addCE32(prefix, s, this->encodeCEs(ces, cesLength));
	return;

}
// .method protected addCE(J)I
int android::icu::impl::coll::CollationDataBuilder::addCE(long long ce)
{
	
	int length;
	int i;
	
	//    .param p1, "ce"    # J
	length = this->ce64s->size();
	//    .local v1, "length":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( i >= length )
		goto label_cond_17;
	if ( (ce > this->ce64s->elementAti(i)) )     
		goto label_cond_14;
	return i;
	// 427    .line 407
label_cond_14:
	i = ( i + 0x1);
	goto label_goto_7;
	// 433    .line 410
label_cond_17:
	this->ce64s->addElement(ce);
	return length;

}
// .method protected addCE32(I)I
int android::icu::impl::coll::CollationDataBuilder::addCE32(int ce32)
{
	
	int length;
	int i;
	
	//    .param p1, "ce32"    # I
	length = this->ce32s->size();
	//    .local v1, "length":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( i >= length )
		goto label_cond_15;
	if ( ce32 != this->ce32s->elementAti(i) )
		goto label_cond_12;
	return i;
	// 474    .line 416
label_cond_12:
	i = ( i + 0x1);
	goto label_goto_7;
	// 480    .line 419
label_cond_15:
	this->ce32s->addElement(ce32);
	return length;

}
// .method addCE32(Ljava/lang/CharSequence;Ljava/lang/CharSequence;I)V
void android::icu::impl::coll::CollationDataBuilder::addCE32(std::shared_ptr<java::lang::CharSequence> prefix,std::shared_ptr<java::lang::CharSequence> s,int ce32)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	int c;
	int cLength;
	int oldCE32;
	int hasContext;
	int baseCE32;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> cond;
	int index;
	int cond;
	std::shared_ptr<java::lang::CharSequence> suffix;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::String> context;
	int next;
	std::shared_ptr<java::lang::String> nextCond;
	int cmp;
	
	//    .param p1, "prefix"    # Ljava/lang/CharSequence;
	//    .param p2, "s"    # Ljava/lang/CharSequence;
	//    .param p3, "ce32"    # I
	if ( s->length() )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("mapping from empty string")));
	// throw
	throw cVar0;
	// 513    .line 178
label_cond_f:
	if ( this->isMutable() )     
		goto label_cond_1e;
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("attempt to add mappings after build()")));
	// throw
	throw cVar1;
	// 530    .line 181
label_cond_1e:
	c = java::lang::Character::codePointAt(s, 0x0);
	//    .local v3, "c":I
	cLength = java::lang::Character::charCount(c);
	//    .local v4, "cLength":I
	oldCE32 = this->trie->get(c);
	//    .local v13, "oldCE32":I
	if ( prefix->length() )     
		goto label_cond_3d;
	if ( s->length() <= cLength )
		goto label_cond_83;
label_cond_3d:
	hasContext = 0x1;
	//    .local v9, "hasContext":Z
label_goto_3e:
	if ( oldCE32 != 0xc0 )
		goto label_cond_6c;
	baseCE32 = this->base->getFinalCE32(this->base->getCE32(c));
	//    .local v2, "baseCE32":I
	if ( hasContext )     
		goto label_cond_5e;
	if ( !(android::icu::impl::coll::Collation::ce32HasContext(baseCE32)) )  
		goto label_cond_6c;
label_cond_5e:
	oldCE32 = this->copyFromBaseCE32(c, baseCE32, 0x1);
	this->trie->set(c, oldCE32);
	//    .end local v2    # "baseCE32":I
label_cond_6c:
	if ( hasContext )     
		goto label_cond_93;
	if ( android::icu::impl::coll::CollationDataBuilder::isBuilderContextCE32(oldCE32) )     
		goto label_cond_85;
	this->trie->set(c, ce32);
label_goto_7d:
	this->modified = 0x1;
	return;
	// 660    .line 184
	// 661    .end local v9    # "hasContext":Z
label_cond_83:
	//    .restart local v9    # "hasContext":Z
	goto label_goto_3e;
	// 668    .line 201
label_cond_85:
	cond = this->getConditionalCE32ForCE32(oldCE32);
	//    .local v6, "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	cond->builtCE32 = 0x1;
	cond->ce32 = ce32;
	goto label_goto_7d;
	// 689    .line 207
	// 690    .end local v6    # "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
label_cond_93:
	if ( android::icu::impl::coll::CollationDataBuilder::isBuilderContextCE32(oldCE32) )     
		goto label_cond_fa;
	index = this->addConditionalCE32(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u0000")), oldCE32);
	//    .local v10, "index":I
	//    .local v8, "contextCE32":I
	this->trie->set(c, android::icu::impl::coll::CollationDataBuilder::makeBuilderContextCE32(index));
	this->contextChars->add(c);
	cond = this->getConditionalCE32(index);
	//    .end local v8    # "contextCE32":I
	//    .end local v10    # "index":I
	//    .restart local v6    # "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
label_goto_ba:
	suffix = s->subSequence(cLength, s->length());
	//    .local v14, "suffix":Ljava/lang/CharSequence;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	context = cVar2->append((char)(prefix->length()))->append(prefix)->append(suffix)->toString();
	//    .local v7, "context":Ljava/lang/String;
	this->unsafeBackwardSet->addAll(suffix);
label_goto_eb:
	next = cond->next;
	//    .local v11, "next":I
	if ( next >= 0 )
		goto label_cond_104;
	//    .restart local v10    # "index":I
	cond->next = this->addConditionalCE32(context, ce32);
	goto label_goto_7d;
	// 815    .line 216
	// 816    .end local v6    # "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	// 817    .end local v7    # "context":Ljava/lang/String;
	// 818    .end local v10    # "index":I
	// 819    .end local v11    # "next":I
	// 820    .end local v14    # "suffix":Ljava/lang/CharSequence;
label_cond_fa:
	cond = this->getConditionalCE32ForCE32(oldCE32);
	//    .restart local v6    # "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	cond->builtCE32 = 0x1;
	goto label_goto_ba;
	// 836    .line 232
	// 837    .restart local v7    # "context":Ljava/lang/String;
	// 838    .restart local v11    # "next":I
	// 839    .restart local v14    # "suffix":Ljava/lang/CharSequence;
label_cond_104:
	nextCond = this->getConditionalCE32(next);
	//    .local v12, "nextCond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	cmp = context->compareTo(nextCond->context);
	//    .local v5, "cmp":I
	if ( cmp >= 0 )
		goto label_cond_126;
	index = this->addConditionalCE32(context, ce32);
	//    .restart local v10    # "index":I
	cond->next = index;
	this->getConditionalCE32(index)->next = next;
	goto label_goto_7d;
	// 883    .line 240
	// 884    .end local v10    # "index":I
label_cond_126:
	if ( cmp )     
		goto label_cond_12e;
	nextCond->ce32 = ce32;
	goto label_goto_7d;
	// 895    .line 245
label_cond_12e:
	cond = nextCond;
	goto label_goto_eb;

}
// .method protected addConditionalCE32(Ljava/lang/String;I)I
int android::icu::impl::coll::CollationDataBuilder::addConditionalCE32(std::shared_ptr<java::lang::String> context,int ce32)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int index;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> cond;
	
	//    .param p1, "context"    # Ljava/lang/String;
	//    .param p2, "ce32"    # I
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_10;
	if ( context->length() )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 925    .line 425
label_cond_10:
	index = this->conditionalCE32s->size();
	//    .local v1, "index":I
	if ( index <= 0x7ffff )
		goto label_cond_24;
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("too many context-sensitive mappings")));
	// throw
	throw cVar1;
	// 948    .line 431
label_cond_24:
	cond = std::make_shared<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32>(context, ce32);
	//    .local v0, "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	this->conditionalCE32s->add(cond);
	return index;

}
// .method protected addContextTrie(ILandroid/icu/util/CharsTrieBuilder;)I
int android::icu::impl::coll::CollationDataBuilder::addContextTrie(int defaultCE32,std::shared_ptr<android::icu::util::CharsTrieBuilder> trieBuilder)
{
	
	std::shared_ptr<java::lang::StringBuilder> context;
	int index;
	
	//    .param p1, "defaultCE32"    # I
	//    .param p2, "trieBuilder"    # Landroid/icu/util/CharsTrieBuilder;
	context = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "context":Ljava/lang/StringBuilder;
	context->append((char)(_shri(defaultCE32,0x10)))->append((char)(defaultCE32));
	context->append(trieBuilder->buildCharSequence(android::icu::util::StringTrieBuilder_S_Option::SMALL));
	index = this->contexts->indexOf(context->toString());
	//    .local v1, "index":I
	if ( index >= 0 )
		goto label_cond_30;
	this->contexts->append(context);
label_cond_30:
	return index;

}
// .method build(Landroid/icu/impl/coll/CollationData;)V
void android::icu::impl::coll::CollationDataBuilder::build(std::shared_ptr<android::icu::impl::coll::CollationData> data)
{
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	this->buildMappings(data);
	if ( !(this->base) )  
		goto label_cond_25;
	data->numericPrimary = this->base->numericPrimary;
	data->compressibleBytes = this->base->compressibleBytes;
	data->numScripts = this->base->numScripts;
	data->scriptsIndex = this->base->scriptsIndex;
	data->scriptStarts = this->base->scriptStarts;
label_cond_25:
	this->buildFastLatinTable(data);
	return;

}
// .method protected buildContext(Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;)I
int android::icu::impl::coll::CollationDataBuilder::buildContext(std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> head)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<android::icu::util::CharsTrieBuilder> prefixBuilder;
	std::shared_ptr<android::icu::util::CharsTrieBuilder> contractionBuilder;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> cond;
	int cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	int prefixLength;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::StringBuilder> prefix;
	auto prefixString;
	std::shared_ptr<java::lang::String> firstCond;
	std::shared_ptr<java::lang::String> lastCond;
	int cond;
	int suffixStart;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	int ce32;
	std::shared_ptr<java::lang::AssertionError> cVar7;
	std::shared_ptr<java::lang::AssertionError> cVar9;
	int index;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar10;
	int flags;
	std::shared_ptr<java::lang::String> cond;
	std::shared_ptr<java::lang::String> suffix;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar8;
	int length;
	
	//    .param p1, "head"    # Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_10;
	if ( !(head->hasContext()) )  
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1108    .line 1024
label_cond_10:
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_22;
	if ( head->next >= 0 )
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 1128    .line 1025
label_cond_22:
	prefixBuilder = std::make_shared<android::icu::util::CharsTrieBuilder>();
	//    .local v15, "prefixBuilder":Landroid/icu/util/CharsTrieBuilder;
	contractionBuilder = std::make_shared<android::icu::util::CharsTrieBuilder>();
	//    .local v6, "contractionBuilder":Landroid/icu/util/CharsTrieBuilder;
	cond = head;
	//    .local v5, "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
label_goto_2e:
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_45;
	if ( cond == head )
		goto label_cond_42;
	cVar2 = cond->hasContext();
label_goto_3a:
	if ( cVar2 )     
		goto label_cond_45;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
label_cond_42:
	cVar2 = 0x1;
	goto label_goto_3a;
	// 1173    .line 1030
label_cond_45:
	prefixLength = cond->prefixLength();
	//    .local v16, "prefixLength":I
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	prefix = cVar5->append(cond->context, 0x0, ( prefixLength + 0x1));
	//    .local v14, "prefix":Ljava/lang/StringBuilder;
	prefixString = prefix->toString();
	//    .local v17, "prefixString":Ljava/lang/String;
	firstCond = cond;
	//    .local v9, "firstCond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	lastCond = cond;
	//    .local v12, "lastCond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
label_goto_68:
	if ( cond->next < 0 ) 
		goto label_cond_8a;
	cond = this->getConditionalCE32(cond->next);
	if ( !(cond->context->startsWith(prefixString)) )  
		goto label_cond_8a;
	cond;
	goto label_goto_68;
	// 1261    .line 1041
label_cond_8a:
	suffixStart = ( prefixLength + 0x1);
	//    .local v19, "suffixStart":I
	if ( lastCond->context->length() != suffixStart )
		goto label_cond_b5;
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_a6;
	if ( firstCond == lastCond )
		goto label_cond_a6;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 1294    .line 1045
label_cond_a6:
	ce32 = lastCond->ce32;
	//    .local v4, "ce32":I
	cond = lastCond;
label_goto_a9:
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_1a0;
	if ( cond == lastCond )
		goto label_cond_1a0;
	cVar7 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar7;
	// 1316    .line 1049
	// 1317    .end local v4    # "ce32":I
label_cond_b5:
	contractionBuilder->clear();
	0x1;
	//    .local v7, "emptySuffixCE32":I
	flags = 0x0;
	//    .local v10, "flags":I
	if ( firstCond->context->length() != suffixStart )
		goto label_cond_141;
	cond = this->getConditionalCE32(firstCond->next);
label_goto_d6:
	flags = ( flags | 0x200);
label_goto_d8:
	suffix = cond->context->substring(suffixStart);
	//    .local v18, "suffix":Ljava/lang/String;
	//    .local v8, "fcd16":I
	if ( this->nfcImpl->getFCD16(suffix->codePointAt(0x0)) >  0xff )
		goto label_cond_100;
	flags = ( flags & -0x201);
label_cond_100:
	if ( this->nfcImpl->getFCD16(suffix->codePointBefore(suffix->length())) <= 0xff )
		goto label_cond_11e;
	flags = ( flags | 0x400);
label_cond_11e:
	contractionBuilder->add(suffix, cond->ce32);
	if ( cond != lastCond )
		goto label_cond_186;
	index = this->addContextTrie(firstCond->ce32, contractionBuilder);
	//    .local v11, "index":I
	if ( index <= 0x7ffff )
		goto label_cond_194;
	cVar8 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("too many context-sensitive mappings")));
	// throw
	throw cVar8;
	// 1484    .line 1061
	// 1485    .end local v8    # "fcd16":I
	// 1486    .end local v11    # "index":I
	// 1487    .end local v18    # "suffix":Ljava/lang/String;
label_cond_141:
	flags = 0x100;
	cond = head;
label_goto_145:
	length = cond->prefixLength();
	//    .local v13, "length":I
	if ( length != prefixLength )
		goto label_cond_14f;
	cond = firstCond;
	goto label_goto_d6;
	// 1511    .line 1071
label_cond_14f:
	if ( cond->defaultCE32 == 0x1 )
		goto label_cond_179;
	if ( !(length) )  
		goto label_cond_177;
	if ( !(prefixString->regionMatches((prefix->length() - length), cond->context, 0x1, length)) )  
		goto label_cond_179;
label_cond_177:
	cond->defaultCE32;
label_cond_179:
	cond = this->getConditionalCE32(cond->next);
	goto label_goto_145;
	// 1577    .line 1098
	// 1578    .end local v13    # "length":I
	// 1579    .restart local v8    # "fcd16":I
	// 1580    .restart local v18    # "suffix":Ljava/lang/String;
label_cond_186:
	cond = this->getConditionalCE32(cond->next);
	goto label_goto_d8;
	// 1596    .line 1106
	// 1597    .restart local v11    # "index":I
label_cond_194:
	ce32 = (android::icu::impl::coll::Collation::makeCE32FromTagAndIndex(0x9, index) | flags);
	//    .restart local v4    # "ce32":I
	goto label_goto_a9;
	// 1612    .line 1109
	// 1613    .end local v7    # "emptySuffixCE32":I
	// 1614    .end local v8    # "fcd16":I
	// 1615    .end local v10    # "flags":I
	// 1616    .end local v11    # "index":I
	// 1617    .end local v18    # "suffix":Ljava/lang/String;
label_cond_1a0:
	firstCond->defaultCE32 = ce32;
	if ( prefixLength )     
		goto label_cond_1ab;
	if ( cond->next >= 0 )
		goto label_cond_1da;
	return ce32;
	// 1634    .line 1116
label_cond_1ab:
	prefix->delete(0x0, 0x1);
	prefix->reverse();
	prefixBuilder->add(prefix, ce32);
	if ( cond->next >= 0 )
		goto label_cond_1da;
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_1e8;
	if ( head->defaultCE32 != 0x1 )
		goto label_cond_1e8;
	cVar9 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar9;
	// 1684    .line 1027
label_cond_1da:
	cond = this->getConditionalCE32(cond->next);
	goto label_goto_2e;
	// 1700    .line 1123
label_cond_1e8:
	index = this->addContextTrie(head->defaultCE32, prefixBuilder);
	//    .restart local v11    # "index":I
	if ( index <= 0x7ffff )
		goto label_cond_206;
	cVar10 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("too many context-sensitive mappings")));
	// throw
	throw cVar10;
	// 1733    .line 1129
label_cond_206:
	return android::icu::impl::coll::Collation::makeCE32FromTagAndIndex(0x8, index);

}
// .method protected buildContexts()V
void android::icu::impl::coll::CollationDataBuilder::buildContexts()
{
	
	std::shared_ptr<android::icu::text::UnicodeSetIterator> iter;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int c;
	int ce32;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	this->contexts->setLength(0x0);
	iter = std::make_shared<android::icu::text::UnicodeSetIterator>(this->contextChars);
	//    .local v3, "iter":Landroid/icu/text/UnicodeSetIterator;
label_goto_d:
	if ( !(iter->next()) )  
		goto label_cond_48;
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_23;
	if ( iter->codepoint != android::icu::text::UnicodeSetIterator::IS_STRING )
		goto label_cond_23;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1790    .line 1009
label_cond_23:
	c = iter->codepoint;
	//    .local v0, "c":I
	ce32 = this->trie->get(c);
	//    .local v1, "ce32":I
	if ( android::icu::impl::coll::CollationDataBuilder::isBuilderContextCE32(ce32) )     
		goto label_cond_3a;
	cVar1 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Impossible: No context data for c in contextChars.")));
	// throw
	throw cVar1;
	// 1819    .line 1014
label_cond_3a:
	//    .local v2, "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	this->trie->set(c, this->buildContext(this->getConditionalCE32ForCE32(ce32)));
	goto label_goto_d;
	// 1838    .line 1018
	// 1839    .end local v0    # "c":I
	// 1840    .end local v1    # "ce32":I
	// 1841    .end local v2    # "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
label_cond_48:
	return;

}
// .method protected buildFastLatinTable(Landroid/icu/impl/coll/CollationData;)V
void android::icu::impl::coll::CollationDataBuilder::buildFastLatinTable(std::shared_ptr<android::icu::impl::coll::CollationData> data)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationFastLatinBuilder> cVar0;
	std::shared_ptr<android::icu::impl::coll::CollationFastLatinBuilder> cVar1;
	std::shared_ptr<char[]> header;
	std::shared_ptr<char[]> table;
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	cVar0 = 0x0;
	if ( this->fastLatinEnabled )     
		goto label_cond_6;
	return;
	// 1860    .line 1147
label_cond_6:
	cVar1 = std::make_shared<android::icu::impl::coll::CollationFastLatinBuilder>();
	this->fastLatinBuilder = cVar1;
	if ( !(this->fastLatinBuilder->forData(data)) )  
		goto label_cond_48;
	header = this->fastLatinBuilder->getHeader();
	//    .local v0, "header":[C
	table = this->fastLatinBuilder->getTable();
	//    .local v1, "table":[C
	if ( !(this->base) )  
		goto label_cond_43;
	if ( !(java::util::Arrays::equals(header, this->base->fastLatinTableHeader)) )  
		goto label_cond_43;
	if ( !(java::util::Arrays::equals(table, this->base->fastLatinTable)) )  
		goto label_cond_43;
	this->fastLatinBuilder = cVar0;
label_cond_43:
	data->fastLatinTableHeader = header;
	data->fastLatinTable = table;
	//    .end local v0    # "header":[C
	//    .end local v1    # "table":[C
label_goto_47:
	return;
	// 1948    .line 1162
label_cond_48:
	this->fastLatinBuilder = cVar0;
	goto label_goto_47;

}
// .method protected buildMappings(Landroid/icu/impl/coll/CollationData;)V
void android::icu::impl::coll::CollationDataBuilder::buildMappings(std::shared_ptr<android::icu::impl::coll::CollationData> data)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared<std::vector<int[]>> jamoCE32s;
	int i;
	int hangulCE32;
	int c;
	int limit;
	int cVar2;
	int ce32;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	if ( this->isMutable() )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("attempt to build() after build()")));
	// throw
	throw cVar0;
	// 1976    .line 913
label_cond_f:
	this->buildContexts();
	jamoCE32s = std::make_shared<std::vector<int[]>>(0x43);
	//    .local v5, "jamoCE32s":[I
	//    .local v6, "jamoIndex":I
	if ( !(this->getJamoCE32s(jamoCE32s)) )  
		goto label_cond_71;
	i = 0x0;
	//    .local v3, "i":I
label_goto_24:
	if ( i >= 0x43 )
		goto label_cond_32;
	this->ce32s->addElement(jamoCE32s[i]);
	i = ( i + 0x1);
	goto label_goto_24;
	// 2025    .line 929
label_cond_32:
	0x0;
	//    .local v4, "isAnyJamoVTSpecial":Z
	i = 0x13;
label_goto_35:
	if ( i >= 0x43 )
		goto label_cond_42;
	if ( !(android::icu::impl::coll::Collation::isSpecialCE32(jamoCE32s[i])) )  
		goto label_cond_6e;
label_cond_42:
	hangulCE32 = android::icu::impl::coll::Collation::makeCE32FromTagAndIndex(0xc, 0x0);
	//    .local v2, "hangulCE32":I
	c = 0xac00;
	//    .local v0, "c":I
	i = 0x0;
label_goto_4d:
	if ( i >= 0x13 )
		goto label_cond_9d;
	//    .local v1, "ce32":I
	if ( 0x1 )     
		goto label_cond_60;
	if ( !(( android::icu::impl::coll::Collation::isSpecialCE32(jamoCE32s[i]) ^ 0x1)) )  
		goto label_cond_60;
label_cond_60:
	limit = ( c + 0x24c);
	//    .local v8, "limit":I
	this->trie->setRange(c, ( limit + -0x1), hangulCE32, 0x1);
	c = limit;
	i = ( i + 0x1);
	goto label_goto_4d;
	// 2115    .line 930
	// 2116    .end local v0    # "c":I
	// 2117    .end local v1    # "ce32":I
	// 2118    .end local v2    # "hangulCE32":I
	// 2119    .end local v8    # "limit":I
label_cond_6e:
	i = ( i + 0x1);
	goto label_goto_35;
	// 2125    .line 950
	// 2126    .end local v3    # "i":I
	// 2127    .end local v4    # "isAnyJamoVTSpecial":Z
label_cond_71:
	c = 0xac00;
	//    .restart local v0    # "c":I
label_goto_74:
	if ( c >= 0xd7a4 )
		goto label_cond_9d;
	ce32 = this->base->getCE32(c);
	//    .restart local v1    # "ce32":I
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_91;
	if ( android::icu::impl::coll::Collation::hasCE32Tag(ce32, 0xc) )     
		goto label_cond_91;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 2164    .line 953
label_cond_91:
	limit = ( c + 0x24c);
	//    .restart local v8    # "limit":I
	this->trie->setRange(c, ( limit + -0x1), ce32, 0x1);
	c = limit;
	goto label_goto_74;
	// 2183    .line 959
	// 2184    .end local v1    # "ce32":I
	// 2185    .end local v8    # "limit":I
label_cond_9d:
	this->setDigitTags();
	this->setLeadSurrogates();
	this->ce32s->setElementAt(this->trie->get(0x0), 0x0);
	this->trie->set(0x0, android::icu::impl::coll::Collation::makeCE32FromTagAndIndex(0xb, 0x0));
	data->trie = this->trie->toTrie2_32();
	c = 0x10000;
	cVar2 = 0xd800;
label_goto_ca:
	if ( cVar2 >= 0xdc00 )
		goto label_cond_e4;
	if ( !(this->unsafeBackwardSet->containsSome(c, ( c + 0x3ff))) )  
		goto label_cond_de;
	this->unsafeBackwardSet->add(cVar2);
label_cond_de:
	cVar2 = (char)(( cVar2 + 0x1));
	//    .local v7, "lead":C
	c = ( c + 0x400);
	goto label_goto_ca;
	// 2269    .line 976
	// 2270    .end local v7    # "lead":C
label_cond_e4:
	this->unsafeBackwardSet->freeze();
	data->ce32s = this->ce32s->getBuffer();
	data->ces = this->ce64s->getBuffer();
	data->contexts = this->contexts->toString();
	data->base = this->base;
	if ( -0x1 < 0 ) 
		goto label_cond_10e;
	data->jamoCE32s = jamoCE32s;
label_goto_109:
	data->unsafeBackwardSet = this->unsafeBackwardSet;
	return;
	// 2323    .line 986
label_cond_10e:
	data->jamoCE32s = this->base->jamoCE32s;
	goto label_goto_109;

}
// .method protected clearContexts()V
void android::icu::impl::coll::CollationDataBuilder::clearContexts()
{
	
	std::shared_ptr<android::icu::text::UnicodeSetIterator> iter;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int ce32;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	this->contexts->setLength(0x0);
	iter = std::make_shared<android::icu::text::UnicodeSetIterator>(this->contextChars);
	//    .local v1, "iter":Landroid/icu/text/UnicodeSetIterator;
label_goto_d:
	if ( !(iter->next()) )  
		goto label_cond_43;
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_23;
	if ( iter->codepoint != android::icu::text::UnicodeSetIterator::IS_STRING )
		goto label_cond_23;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2378    .line 996
label_cond_23:
	ce32 = this->trie->get(iter->codepoint);
	//    .local v0, "ce32":I
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_3b;
	if ( android::icu::impl::coll::CollationDataBuilder::isBuilderContextCE32(ce32) )     
		goto label_cond_3b;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 2406    .line 998
label_cond_3b:
	this->getConditionalCE32ForCE32(ce32)->builtCE32 = 0x1;
	goto label_goto_d;
	// 2418    .line 1000
	// 2419    .end local v0    # "ce32":I
label_cond_43:
	return;

}
// .method protected copyContractionsFromBaseCE32(Ljava/lang/StringBuilder;IILandroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;)I
int android::icu::impl::coll::CollationDataBuilder::copyContractionsFromBaseCE32(std::shared_ptr<java::lang::StringBuilder> context,int c,int ce32,std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> cond)
{
	
	bool cVar0;
	int trieIndex;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int index;
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> suffixes;
	std::shared_ptr<java::lang::CharSequence> entry;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> cond;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	int cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	
	//    .param p1, "context"    # Ljava/lang/StringBuilder;
	//    .param p2, "c"    # I
	//    .param p3, "ce32"    # I
	//    .param p4, "cond"    # Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	cVar0 = 0x1;
	trieIndex = android::icu::impl::coll::Collation::indexFromCE32(ce32);
	//    .local v4, "trieIndex":I
	if ( !(( ce32 & 0x100)) )  
		goto label_cond_50;
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_1a;
	if ( context->length() >  cVar0 )
		goto label_cond_1a;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 2464    .line 645
label_cond_1a:
	index = -0x1;
	//    .local v1, "index":I
label_goto_1b:
	//    .local v2, "suffixStart":I
	suffixes = android::icu::util::CharsTrie::iterator(this->base->contexts, ( trieIndex + 0x2), 0x0);
	//    .local v3, "suffixes":Landroid/icu/util/CharsTrie$Iterator;
label_goto_29:
	if ( !(suffixes->hasNext()) )  
		goto label_cond_79;
	entry = suffixes->next();
	//    .local v0, "entry":Landroid/icu/util/CharsTrie$Entry;
	context->append(entry->chars);
	index = this->addConditionalCE32(context->toString(), this->copyFromBaseCE32(c, entry->value, cVar0));
	cond->next = index;
	cond = this->getConditionalCE32(index);
	context->setLength(context->length());
	goto label_goto_29;
	// 2535    .line 647
	// 2536    .end local v0    # "entry":Landroid/icu/util/CharsTrie$Entry;
	// 2537    .end local v1    # "index":I
	// 2538    .end local v2    # "suffixStart":I
	// 2539    .end local v3    # "suffixes":Landroid/icu/util/CharsTrie$Iterator;
label_cond_50:
	cVar3 = this->base->getCE32FromContexts(trieIndex);
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_66;
	if ( !(android::icu::impl::coll::Collation::isContractionCE32(cVar3)) )  
		goto label_cond_66;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 2564    .line 649
label_cond_66:
	index = this->addConditionalCE32(context->toString(), this->copyFromBaseCE32(c, cVar3, cVar0));
	//    .restart local v1    # "index":I
	cond->next = index;
	this->getConditionalCE32(index);
	goto label_goto_1b;
	// 2589    .line 666
	// 2590    .restart local v2    # "suffixStart":I
	// 2591    .restart local v3    # "suffixes":Landroid/icu/util/CharsTrie$Iterator;
label_cond_79:
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_85;
	if ( index >= 0 )
		goto label_cond_85;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 2605    .line 667
label_cond_85:
	return index;

}
// .method copyFrom(Landroid/icu/impl/coll/CollationDataBuilder;Landroid/icu/impl/coll/CollationDataBuilder$CEModifier;)V
void android::icu::impl::coll::CollationDataBuilder::copyFrom(std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> src,std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_CEModifier> modifier)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_CopyHelper> helper;
	std::shared_ptr<java::util::Iterator> trieIterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> range;
	
	//    .param p1, "src"    # Landroid/icu/impl/coll/CollationDataBuilder;
	//    .param p2, "modifier"    # Landroid/icu/impl/coll/CollationDataBuilder$CEModifier;
	if ( this->isMutable() )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("attempt to copyFrom() after build()")));
	// throw
	throw cVar0;
	// 2632    .line 259
label_cond_f:
	helper = std::make_shared<android::icu::impl::coll::CollationDataBuilder_S_CopyHelper>(src, this, modifier);
	//    .local v0, "helper":Landroid/icu/impl/coll/CollationDataBuilder$CopyHelper;
	trieIterator = src->trie->iterator();
	//    .local v2, "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_goto_1a:
	if ( !(trieIterator->hasNext()) )  
		goto label_cond_36;
	range = trieIterator->next();
	range->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v1, "range":Landroid/icu/impl/Trie2$Range;
	if ( !(( range->leadSurrogate ^ 0x1)) )  
		goto label_cond_36;
	android::icu::impl::coll::CollationDataBuilder::enumRangeForCopy(range->startCodePoint, range->endCodePoint, range->value, helper);
	goto label_goto_1a;
	// 2679    .line 268
	// 2680    .end local v1    # "range":Landroid/icu/impl/Trie2$Range;
label_cond_36:
	this->modified = (this->modified |  src->modified);
	return;

}
// .method protected copyFromBaseCE32(IIZ)I
int android::icu::impl::coll::CollationDataBuilder::copyFromBaseCE32(int c,int ce32,bool withContext)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int ce32;
	int trieIndex;
	int cVar5;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> head;
	std::shared_ptr<java::lang::StringBuilder> context;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> cond;
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> prefixes;
	std::shared_ptr<java::lang::CharSequence> entry;
	int cVar6;
	int index;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar9;
	
	//    .param p1, "c"    # I
	//    .param p2, "ce32"    # I
	//    .param p3, "withContext"    # Z
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( android::icu::impl::coll::Collation::isSpecialCE32(ce32) )     
		goto label_cond_9;
	return ce32;
	// 2714    .line 549
label_cond_9:
	// switch
	{
	auto item = ( android::icu::impl::coll::Collation::tagFromCE32(ce32) );
	if (item == 1) goto label_pswitch_29;
	if (item == 2) goto label_pswitch_29;
	if (item == 3) goto label_pswitch_10;
	if (item == 4) goto label_pswitch_29;
	if (item == 5) goto label_pswitch_19;
	if (item == 6) goto label_pswitch_2a;
	if (item == 7) goto label_pswitch_10;
	if (item == 8) goto label_pswitch_3b;
	if (item == 9) goto label_pswitch_d1;
	if (item == 10) goto label_pswitch_10;
	if (item == 11) goto label_pswitch_10;
	if (item == 12) goto label_pswitch_102;
	if (item == 13) goto label_pswitch_10;
	if (item == 14) goto label_pswitch_10b;
	if (item == 15) goto label_pswitch_111;
	}
label_pswitch_10:
	cVar2 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("copyFromBaseCE32(c, ce32, withContext) requires ce32 == base.getFinalCE32(ce32)")));
	// throw
	throw cVar2;
	// 2732    .line 556
label_pswitch_19:
	//    .local v4, "index":I
	//    .local v5, "length":I
	ce32 = this->encodeExpansion32(this->base->ce32s, android::icu::impl::coll::Collation::indexFromCE32(ce32), android::icu::impl::coll::Collation::lengthFromCE32(ce32));
	//    .end local v4    # "index":I
	//    .end local v5    # "length":I
label_goto_29:
label_pswitch_29:
	return ce32;
	// 2761    .line 562
label_pswitch_2a:
	//    .restart local v4    # "index":I
	//    .restart local v5    # "length":I
	ce32 = this->encodeExpansion(this->base->ces, android::icu::impl::coll::Collation::indexFromCE32(ce32), android::icu::impl::coll::Collation::lengthFromCE32(ce32));
	goto label_goto_29;
	// 2785    .line 570
	// 2786    .end local v4    # "index":I
	// 2787    .end local v5    # "length":I
label_pswitch_3b:
	trieIndex = android::icu::impl::coll::Collation::indexFromCE32(ce32);
	//    .local v7, "trieIndex":I
	cVar5 = this->base->getCE32FromContexts(trieIndex);
	if ( withContext )     
		goto label_cond_4c;
	return this->copyFromBaseCE32(c, cVar5, cVar1);
	// 2811    .line 575
label_cond_4c:
	head = std::make_shared<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), cVar1);
	//    .local v3, "head":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	context = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u0000")));
	//    .local v1, "context":Ljava/lang/StringBuilder;
	if ( !(android::icu::impl::coll::Collation::isContractionCE32(cVar5)) )  
		goto label_cond_a6;
	//    .restart local v4    # "index":I
label_goto_66:
	cond = this->getConditionalCE32(index);
	//    .local v0, "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	prefixes = android::icu::util::CharsTrie::iterator(this->base->contexts, ( trieIndex + 0x2), cVar1);
	//    .local v6, "prefixes":Landroid/icu/util/CharsTrie$Iterator;
label_goto_74:
	if ( !(prefixes->hasNext()) )  
		goto label_cond_c4;
	entry = prefixes->next();
	//    .local v2, "entry":Landroid/icu/util/CharsTrie$Entry;
	context->setLength(cVar1);
	context->append(entry->chars)->reverse()->insert(cVar1, (char)(entry->chars->length()));
	cVar6 = entry->value;
	if ( !(android::icu::impl::coll::Collation::isContractionCE32(cVar6)) )  
		goto label_cond_b5;
label_goto_a1:
	cond = this->getConditionalCE32(index);
	goto label_goto_74;
	// 2921    .line 581
	// 2922    .end local v0    # "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	// 2923    .end local v2    # "entry":Landroid/icu/util/CharsTrie$Entry;
	// 2924    .end local v4    # "index":I
	// 2925    .end local v6    # "prefixes":Landroid/icu/util/CharsTrie$Iterator;
label_cond_a6:
	index = this->addConditionalCE32(context->toString(), this->copyFromBaseCE32(c, cVar5, cVar0));
	//    .restart local v4    # "index":I
	head->next = index;
	goto label_goto_66;
	// 2945    .line 594
	// 2946    .restart local v0    # "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	// 2947    .restart local v2    # "entry":Landroid/icu/util/CharsTrie$Entry;
	// 2948    .restart local v6    # "prefixes":Landroid/icu/util/CharsTrie$Iterator;
label_cond_b5:
	index = this->addConditionalCE32(context->toString(), this->copyFromBaseCE32(c, cVar6, cVar0));
	cond->next = index;
	goto label_goto_a1;
	// 2967    .line 599
	// 2968    .end local v2    # "entry":Landroid/icu/util/CharsTrie$Entry;
label_cond_c4:
	ce32 = android::icu::impl::coll::CollationDataBuilder::makeBuilderContextCE32(head->next);
	this->contextChars->add(c);
	goto label_goto_29;
	// 2983    .line 604
	// 2984    .end local v0    # "cond":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	// 2985    .end local v1    # "context":Ljava/lang/StringBuilder;
	// 2986    .end local v3    # "head":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	// 2987    .end local v4    # "index":I
	// 2988    .end local v6    # "prefixes":Landroid/icu/util/CharsTrie$Iterator;
	// 2989    .end local v7    # "trieIndex":I
label_pswitch_d1:
	if ( withContext )     
		goto label_cond_e2;
	//    .restart local v4    # "index":I
	return this->copyFromBaseCE32(c, this->base->getCE32FromContexts(android::icu::impl::coll::Collation::indexFromCE32(ce32)), cVar1);
	// 3013    .line 609
	// 3014    .end local v4    # "index":I
label_cond_e2:
	head = std::make_shared<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), cVar1);
	//    .restart local v3    # "head":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
	context = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u0000")));
	//    .restart local v1    # "context":Ljava/lang/StringBuilder;
	this->copyContractionsFromBaseCE32(context, c, ce32, head);
	ce32 = android::icu::impl::coll::CollationDataBuilder::makeBuilderContextCE32(head->next);
	this->contextChars->add(c);
	goto label_goto_29;
	// 3048    .line 617
	// 3049    .end local v1    # "context":Ljava/lang/StringBuilder;
	// 3050    .end local v3    # "head":Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
label_pswitch_102:
	cVar9 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("We forbid tailoring of Hangul syllables.")));
	// throw
	throw cVar9;
	// 3060    .line 619
label_pswitch_10b:
	ce32 = this->getCE32FromOffsetCE32(cVar0, c, ce32);
	goto label_goto_29;
	// 3068    .line 622
label_pswitch_111:
	ce32 = this->encodeOneCE(android::icu::impl::coll::Collation::unassignedCEFromCodePoint(c));
	goto label_goto_29;
	// 3080    .line 549
	// 3081    nop
	// 3083    :pswitch_data_11c
	// 3084    .packed-switch 0x1
	// 3085        :pswitch_29
	// 3086        :pswitch_29
	// 3087        :pswitch_10
	// 3088        :pswitch_29
	// 3089        :pswitch_19
	// 3090        :pswitch_2a
	// 3091        :pswitch_10
	// 3092        :pswitch_3b
	// 3093        :pswitch_d1
	// 3094        :pswitch_10
	// 3095        :pswitch_10
	// 3096        :pswitch_102
	// 3097        :pswitch_10
	// 3098        :pswitch_10b
	// 3099        :pswitch_111
	// 3100    .end packed-switch

}
// .method enableFastLatin()V
void android::icu::impl::coll::CollationDataBuilder::enableFastLatin()
{
	
	this->fastLatinEnabled = 0x1;
	return;

}
// .method encodeCEs([JI)I
int android::icu::impl::coll::CollationDataBuilder::encodeCEs(std::shared_ptr<long long[]> ces,int cesLength)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	auto ce0;
	auto ce1;
	long long p0;
	std::shared<std::vector<int[]>> newCE32s;
	int i;
	int ce32;
	
	//    .param p1, "ces"    # [J
	//    .param p2, "cesLength"    # I
	if ( cesLength < 0 ) 
		goto label_cond_8;
	if ( cesLength <= 0x1f )
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("mapping to too many CEs")));
	// throw
	throw cVar0;
	// 3140    .line 135
label_cond_11:
	if ( this->isMutable() )     
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("attempt to add mappings after build()")));
	// throw
	throw cVar1;
	// 3157    .line 138
label_cond_20:
	if ( cesLength )     
		goto label_cond_29;
	return android::icu::impl::coll::CollationDataBuilder::encodeOneCEAsCE32(0x0);
	// 3170    .line 142
label_cond_29:
	if ( cesLength != 0x1 )
		goto label_cond_38;
	return this->encodeOneCE(ces[0x0]);
	// 3191    .line 144
label_cond_38:
	if ( cesLength != 0x2 )
		goto label_cond_7c;
	ce0 = ces[0x0];
	//    .local v4, "ce0":J
	ce1 = ces[0x1];
	//    .local v6, "ce1":J
	p0 = _ushrll(ce0,0x20);
	//    .local v12, "p0":J
	if ( ((0xffffffffff00ffL &  ce0) > 0x5000000) )     
		goto label_cond_7c;
	if ( ((-0xff000001L &  ce1) > 0x500) )     
		goto label_cond_7c;
	if ( !((p0 > 0x0)) )  
		goto label_cond_7c;
	return ( ( (((int)(p0) |  ( ((int)(ce0) &  0xff00) << 0x8)) |  (_shri((int)(ce1),0x10) &  0xff00)) | 0xc0) | 0x4);
	// 3280    .line 162
	// 3281    .end local v4    # "ce0":J
	// 3282    .end local v6    # "ce1":J
	// 3283    .end local v12    # "p0":J
label_cond_7c:
	newCE32s = std::make_shared<std::vector<int[]>>(0x1f);
	//    .local v10, "newCE32s":[I
	i = 0x0;
	//    .local v9, "i":I
label_goto_81:
	if ( i != cesLength )
		goto label_cond_8f;
	return this->encodeExpansion32(newCE32s, 0x0, cesLength);
	// 3313    .line 167
label_cond_8f:
	ce32 = android::icu::impl::coll::CollationDataBuilder::encodeOneCEAsCE32(ces[i]);
	//    .local v8, "ce32":I
	if ( ce32 != 0x1 )
		goto label_cond_a4;
	return this->encodeExpansion(ces, 0x0, cesLength);
	// 3342    .line 169
label_cond_a4:
	newCE32s[i] = ce32;
	i = ( i + 0x1);
	goto label_goto_81;

}
// .method protected encodeExpansion([JII)I
int android::icu::impl::coll::CollationDataBuilder::encodeExpansion(std::shared_ptr<long long[]> ces,int start,int length)
{
	
	int cVar0;
	int cVar1;
	int i;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	int j;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar3;
	
	//    .param p1, "ces"    # [J
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	cVar0 = 0x7ffff;
	cVar1 = 0x6;
	//    .local v2, "first":J
	//    .local v0, "ce64sMax":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_f:
	if ( i >  (this->ce64s->size() - length) )
		goto label_cond_44;
	if ( (ces[start] > this->ce64s->elementAti(i)) )     
		goto label_cond_3e;
	if ( i <= cVar0 )
		goto label_cond_26;
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("too many mappings")));
	// throw
	throw cVar2;
	// 3407    .line 492
label_cond_26:
	j = 0x1;
	//    .local v4, "j":I
label_goto_27:
	if ( j != length )
		goto label_cond_2e;
	return android::icu::impl::coll::Collation::makeCE32FromTagIndexAndLength(cVar1, i, length);
	// 3423    .line 497
label_cond_2e:
	if ( !((this->ce64s->elementAti((i + j)) > ces[(start + j)])) )  
		goto label_cond_41;
	//    .end local v4    # "j":I
label_cond_3e:
	i = ( i + 0x1);
	goto label_goto_f;
	// 3448    .line 492
	// 3449    .restart local v4    # "j":I
label_cond_41:
	j = ( j + 0x1);
	goto label_goto_27;
	// 3455    .line 502
	// 3456    .end local v4    # "j":I
label_cond_44:
	i = this->ce64s->size();
	if ( i <= cVar0 )
		goto label_cond_55;
	cVar3 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("too many mappings")));
	// throw
	throw cVar3;
	// 3476    .line 508
label_cond_55:
	j = 0x0;
	//    .restart local v4    # "j":I
label_goto_56:
	if ( j >= length )
		goto label_cond_64;
	this->ce64s->addElement(ces[(start + j)]);
	j = ( j + 0x1);
	goto label_goto_56;
	// 3498    .line 511
label_cond_64:
	return android::icu::impl::coll::Collation::makeCE32FromTagIndexAndLength(cVar1, i, length);

}
// .method protected encodeExpansion32([III)I
int android::icu::impl::coll::CollationDataBuilder::encodeExpansion32(std::shared_ptr<int[]> newCE32s,int start,int length)
{
	
	int cVar0;
	int cVar1;
	int i;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	int j;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar3;
	
	//    .param p1, "newCE32s"    # [I
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	cVar0 = 0x7ffff;
	cVar1 = 0x5;
	//    .local v1, "first":I
	//    .local v0, "ce32sMax":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_f:
	if ( i >  (this->ce32s->size() - length) )
		goto label_cond_40;
	if ( newCE32s[start] != this->ce32s->elementAti(i) )
		goto label_cond_3a;
	if ( i <= cVar0 )
		goto label_cond_24;
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("too many mappings")));
	// throw
	throw cVar2;
	// 3560    .line 525
label_cond_24:
	j = 0x1;
	//    .local v3, "j":I
label_goto_25:
	if ( j != length )
		goto label_cond_2c;
	return android::icu::impl::coll::Collation::makeCE32FromTagIndexAndLength(cVar1, i, length);
	// 3576    .line 530
label_cond_2c:
	if ( this->ce32s->elementAti((i + j)) == newCE32s[(start + j)] )
		goto label_cond_3d;
	//    .end local v3    # "j":I
label_cond_3a:
	i = ( i + 0x1);
	goto label_goto_f;
	// 3599    .line 525
	// 3600    .restart local v3    # "j":I
label_cond_3d:
	j = ( j + 0x1);
	goto label_goto_25;
	// 3606    .line 535
	// 3607    .end local v3    # "j":I
label_cond_40:
	i = this->ce32s->size();
	if ( i <= cVar0 )
		goto label_cond_51;
	cVar3 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("too many mappings")));
	// throw
	throw cVar3;
	// 3627    .line 541
label_cond_51:
	j = 0x0;
	//    .restart local v3    # "j":I
label_goto_52:
	if ( j >= length )
		goto label_cond_60;
	this->ce32s->addElement(newCE32s[(start + j)]);
	j = ( j + 0x1);
	goto label_goto_52;
	// 3649    .line 544
label_cond_60:
	return android::icu::impl::coll::Collation::makeCE32FromTagIndexAndLength(cVar1, i, length);

}
// .method protected encodeOneCE(J)I
int android::icu::impl::coll::CollationDataBuilder::encodeOneCE(long long ce)
{
	
	int cVar0;
	int ce32;
	int index;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	
	//    .param p1, "ce"    # J
	cVar0 = 0x1;
	ce32 = android::icu::impl::coll::CollationDataBuilder::encodeOneCEAsCE32(ce);
	//    .local v0, "ce32":I
	if ( ce32 == cVar0 )
		goto label_cond_8;
	return ce32;
	// 3676    .line 472
label_cond_8:
	index = this->addCE(ce);
	//    .local v1, "index":I
	if ( index <= 0x7ffff )
		goto label_cond_1a;
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("too many mappings")));
	// throw
	throw cVar1;
	// 3697    .line 478
label_cond_1a:
	return android::icu::impl::coll::Collation::makeCE32FromTagIndexAndLength(0x6, index, cVar0);

}
// .method protected getCE32FromOffsetCE32(ZII)I
int android::icu::impl::coll::CollationDataBuilder::getCE32FromOffsetCE32(bool fromBase,int c,int ce32)
{
	
	int i;
	
	//    .param p1, "fromBase"    # Z
	//    .param p2, "c"    # I
	//    .param p3, "ce32"    # I
	i = android::icu::impl::coll::Collation::indexFromCE32(ce32);
	//    .local v2, "i":I
	if ( !(fromBase) )  
		goto label_cond_15;
	//    .local v0, "dataCE":J
label_goto_c:
	//    .local v4, "p":J
	return android::icu::impl::coll::Collation::makeLongPrimaryCE32(android::icu::impl::coll::Collation::getThreeBytePrimaryForOffsetData(c, dataCE));
	// 3745    .line 400
	// 3746    .end local v0    # "dataCE":J
	// 3747    .end local v4    # "p":J
label_cond_15:
	//    .restart local v0    # "dataCE":J
	goto label_goto_c;

}
// .method protected getCEs(Ljava/lang/CharSequence;I[JI)I
int android::icu::impl::coll::CollationDataBuilder::getCEs(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<long long[]> ces,int cesLength)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator> cVar0;
	std::shared_ptr<android::icu::impl::coll::CollationData> cVar1;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "ces"    # [J
	//    .param p4, "cesLength"    # I
	if ( this->collIter )     
		goto label_cond_18;
	cVar1 = std::make_shared<android::icu::impl::coll::CollationData>(this->nfcImpl);
	cVar0 = std::make_shared<android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator>(this, cVar1);
	this->collIter = cVar0;
	if ( this->collIter )     
		goto label_cond_18;
	return 0x0;
	// 3794    .line 1171
label_cond_18:
	return this->collIter->fetchCEs(s, start, ces, cesLength);

}
// .method getCEs(Ljava/lang/CharSequence;Ljava/lang/CharSequence;[JI)I
int android::icu::impl::coll::CollationDataBuilder::getCEs(std::shared_ptr<java::lang::CharSequence> prefix,std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<long long[]> ces,int cesLength)
{
	
	int prefixLength;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "prefix"    # Ljava/lang/CharSequence;
	//    .param p2, "s"    # Ljava/lang/CharSequence;
	//    .param p3, "ces"    # [J
	//    .param p4, "cesLength"    # I
	prefixLength = prefix->length();
	//    .local v0, "prefixLength":I
	if ( prefixLength )     
		goto label_cond_c;
	return this->getCEs(s, 0x0, ces, cesLength);
	// 3831    .line 341
label_cond_c:
	cVar0 = std::make_shared<java::lang::StringBuilder>(prefix);
	return this->getCEs(cVar0->append(s), prefixLength, ces, cesLength);

}
// .method getCEs(Ljava/lang/CharSequence;[JI)I
int android::icu::impl::coll::CollationDataBuilder::getCEs(std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<long long[]> ces,int cesLength)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "ces"    # [J
	//    .param p3, "cesLength"    # I
	return this->getCEs(s, 0x0, ces, cesLength);

}
// .method protected getConditionalCE32(I)Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> android::icu::impl::coll::CollationDataBuilder::getConditionalCE32(int index)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> cVar0;
	
	//    .param p1, "index"    # I
	cVar0 = this->conditionalCE32s->get(index);
	cVar0->checkCast("android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32");
	return cVar0;

}
// .method protected getConditionalCE32ForCE32(I)Landroid/icu/impl/coll/CollationDataBuilder$ConditionalCE32;
std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> android::icu::impl::coll::CollationDataBuilder::getConditionalCE32ForCE32(int ce32)
{
	
	//    .param p1, "ce32"    # I
	return this->getConditionalCE32(android::icu::impl::coll::Collation::indexFromCE32(ce32));

}
// .method protected getJamoCE32s([I)Z
bool android::icu::impl::coll::CollationDataBuilder::getJamoCE32s(std::shared_ptr<int[]> jamoCE32s)
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	bool anyJamoAssigned;
	int j;
	int jamo;
	int ce32;
	bool fromBase;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar5;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	
	//    .param p1, "jamoCE32s"    # [I
	cVar0 = 0xc0;
	cVar1 = 0x43;
	cVar2 = 0x1;
	if ( this->base )     
		goto label_cond_39;
	anyJamoAssigned = 0x1;
	//    .local v0, "anyJamoAssigned":Z
label_goto_a:
	//    .local v5, "needToCopyFromBase":Z
	j = 0x0;
	//    .end local v0    # "anyJamoAssigned":Z
	//    .local v3, "j":I
label_goto_c:
	if ( j >= cVar1 )
		goto label_cond_6c;
	jamo = android::icu::impl::coll::CollationDataBuilder::jamoCpFromIndex(j);
	//    .local v4, "jamo":I
	0x0;
	//    .local v2, "fromBase":Z
	ce32 = this->trie->get(jamo);
	//    .local v1, "ce32":I
	//    .local v0, "anyJamoAssigned":Z
	if ( ce32 != cVar0 )
		goto label_cond_27;
	fromBase = 0x1;
	ce32 = this->base->getCE32(jamo);
label_cond_27:
	if ( !(android::icu::impl::coll::Collation::isSpecialCE32(ce32)) )  
		goto label_cond_34;
	// switch
	{
	auto item = ( android::icu::impl::coll::Collation::tagFromCE32(ce32) );
	if (item == 0) goto label_pswitch_56;
	if (item == 1) goto label_pswitch_34;
	if (item == 2) goto label_pswitch_34;
	if (item == 3) goto label_pswitch_56;
	if (item == 4) goto label_pswitch_34;
	if (item == 5) goto label_pswitch_3b;
	if (item == 6) goto label_pswitch_3b;
	if (item == 7) goto label_pswitch_56;
	if (item == 8) goto label_pswitch_3b;
	if (item == 9) goto label_pswitch_3b;
	if (item == 10) goto label_pswitch_56;
	if (item == 11) goto label_pswitch_56;
	if (item == 12) goto label_pswitch_56;
	if (item == 13) goto label_pswitch_56;
	if (item == 14) goto label_pswitch_51;
	if (item == 15) goto label_pswitch_41;
	}
label_cond_34:
label_goto_34:
label_pswitch_34:
	jamoCE32s[j] = ce32;
	j = ( j + 0x1);
	goto label_goto_c;
	// 3996    .line 795
	// 3997    .end local v0    # "anyJamoAssigned":Z
	// 3998    .end local v1    # "ce32":I
	// 3999    .end local v2    # "fromBase":Z
	// 4000    .end local v3    # "j":I
	// 4001    .end local v4    # "jamo":I
	// 4002    .end local v5    # "needToCopyFromBase":Z
label_cond_39:
	anyJamoAssigned = 0x0;
	//    .local v0, "anyJamoAssigned":Z
	goto label_goto_a;
	// 4009    .line 819
	// 4010    .local v0, "anyJamoAssigned":Z
	// 4011    .restart local v1    # "ce32":I
	// 4012    .restart local v2    # "fromBase":Z
	// 4013    .restart local v3    # "j":I
	// 4014    .restart local v4    # "jamo":I
	// 4015    .restart local v5    # "needToCopyFromBase":Z
label_pswitch_3b:
	if ( !(fromBase) )  
		goto label_cond_34;
	ce32 = 0xc0;
	0x1;
	goto label_goto_34;
	// 4027    .line 827
label_pswitch_41:
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_4d;
	if ( fromBase )     
		goto label_cond_4d;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 4041    .line 828
label_cond_4d:
	ce32 = 0xc0;
	0x1;
	goto label_goto_34;
	// 4051    .line 832
label_pswitch_51:
	ce32 = this->getCE32FromOffsetCE32(fromBase, jamo, ce32);
	goto label_goto_34;
	// 4059    .line 841
label_pswitch_56:
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar2);
	cVar5[0x0] = java::lang::Integer::valueOf(ce32);
	cVar4 = std::make_shared<java::lang::AssertionError>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected special tag in ce32=0x%08x")), cVar5));
	// throw
	throw cVar4;
	// 4083    .line 846
	// 4084    .end local v0    # "anyJamoAssigned":Z
	// 4085    .end local v1    # "ce32":I
	// 4086    .end local v2    # "fromBase":Z
	// 4087    .end local v4    # "jamo":I
label_cond_6c:
	if ( !(anyJamoAssigned) )  
		goto label_cond_8a;
	if ( !(0x0) )  
		goto label_cond_8a;
	j = 0x0;
label_goto_71:
	if ( j >= cVar1 )
		goto label_cond_8a;
	if ( jamoCE32s[j] != cVar0 )
		goto label_cond_87;
	jamo = android::icu::impl::coll::CollationDataBuilder::jamoCpFromIndex(j);
	//    .restart local v4    # "jamo":I
	jamoCE32s[j] = this->copyFromBaseCE32(jamo, this->base->getCE32(jamo), cVar2);
	//    .end local v4    # "jamo":I
label_cond_87:
	j = ( j + 0x1);
	goto label_goto_71;
	// 4130    .line 855
label_cond_8a:
	return anyJamoAssigned;
	// 4134    .line 809
	// 4135    nop
	// 4137    :pswitch_data_8c
	// 4138    .packed-switch 0x0
	// 4139        :pswitch_56
	// 4140        :pswitch_34
	// 4141        :pswitch_34
	// 4142        :pswitch_56
	// 4143        :pswitch_34
	// 4144        :pswitch_3b
	// 4145        :pswitch_3b
	// 4146        :pswitch_56
	// 4147        :pswitch_3b
	// 4148        :pswitch_3b
	// 4149        :pswitch_56
	// 4150        :pswitch_56
	// 4151        :pswitch_56
	// 4152        :pswitch_56
	// 4153        :pswitch_51
	// 4154        :pswitch_41
	// 4155    .end packed-switch

}
// .method hasMappings()Z
bool android::icu::impl::coll::CollationDataBuilder::hasMappings()
{
	
	return this->modified;

}
// .method initForTailoring(Landroid/icu/impl/coll/CollationData;)V
void android::icu::impl::coll::CollationDataBuilder::initForTailoring(std::shared_ptr<android::icu::impl::coll::CollationData> b)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<android::icu::impl::Trie2Writable> cVar3;
	int c;
	
	//    .param p1, "b"    # Landroid/icu/impl/coll/CollationData;
	cVar0 = 0xc0;
	if ( !(this->trie) )  
		goto label_cond_f;
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("attempt to reuse a CollationDataBuilder")));
	// throw
	throw cVar1;
	// 4189    .line 71
label_cond_f:
	if ( b )     
		goto label_cond_1a;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("null CollationData")));
	// throw
	throw cVar2;
	// 4202    .line 74
label_cond_1a:
	this->base = b;
	cVar3 = std::make_shared<android::icu::impl::Trie2Writable>(cVar0, -0x2fafb);
	this->trie = cVar3;
	c = 0xc0;
	//    .local v0, "c":I
label_goto_28:
	if ( c >  0xff )
		goto label_cond_34;
	this->trie->set(c, cVar0);
	c = ( c + 0x1);
	goto label_goto_28;
	// 4234    .line 92
label_cond_34:
	//    .local v1, "hangulCE32":I
	this->trie->setRange(0xac00, 0xd7a3, android::icu::impl::coll::Collation::makeCE32FromTagAndIndex(0xc, 0x0), 0x1);
	this->unsafeBackwardSet->addAll(b->unsafeBackwardSet);
	return;

}
// .method isAssigned(I)Z
bool android::icu::impl::coll::CollationDataBuilder::isAssigned(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::impl::coll::Collation::isAssignedCE32(this->trie->get(c));

}
// .method isCompressibleLeadByte(I)Z
bool android::icu::impl::coll::CollationDataBuilder::isCompressibleLeadByte(int b)
{
	
	//    .param p1, "b"    # I
	return this->base->isCompressibleLeadByte(b);

}
// .method isCompressiblePrimary(J)Z
bool android::icu::impl::coll::CollationDataBuilder::isCompressiblePrimary(long long p)
{
	
	//    .param p1, "p"    # J
	return this->isCompressibleLeadByte(_ushri((int)(p),0x18));

}
// .method protected final isMutable()Z
bool android::icu::impl::coll::CollationDataBuilder::isMutable()
{
	
	bool cVar0;
	
	if ( !(this->trie) )  
		goto label_cond_11;
	if ( !(this->unsafeBackwardSet) )  
		goto label_cond_11;
	cVar0 = ( this->unsafeBackwardSet->isFrozen() ^ 0x1);
label_goto_10:
	return cVar0;
label_cond_11:
	cVar0 = 0x0;
	goto label_goto_10;

}
// .method optimize(Landroid/icu/text/UnicodeSet;)V
void android::icu::impl::coll::CollationDataBuilder::optimize(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::UnicodeSetIterator> iter;
	int c;
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	cVar0 = 0x1;
	if ( !(set->isEmpty()) )  
		goto label_cond_8;
	return;
	// 4364    .line 273
label_cond_8:
	iter = std::make_shared<android::icu::text::UnicodeSetIterator>(set);
	//    .local v2, "iter":Landroid/icu/text/UnicodeSetIterator;
label_cond_d:
label_goto_d:
	if ( !(iter->next()) )  
		goto label_cond_3b;
	if ( iter->codepoint == android::icu::text::UnicodeSetIterator::IS_STRING )
		goto label_cond_3b;
	c = iter->codepoint;
	//    .local v0, "c":I
	//    .local v1, "ce32":I
	if ( this->trie->get(c) != 0xc0 )
		goto label_cond_d;
	this->trie->set(c, this->copyFromBaseCE32(c, this->base->getFinalCE32(this->base->getCE32(c)), cVar0));
	goto label_goto_d;
	// 4428    .line 283
	// 4429    .end local v0    # "c":I
	// 4430    .end local v1    # "ce32":I
label_cond_3b:
	this->modified = cVar0;
	return;

}
// .method protected setDigitTags()V
void android::icu::impl::coll::CollationDataBuilder::setDigitTags()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> digits;
	std::shared_ptr<android::icu::text::UnicodeSetIterator> iter;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int c;
	int ce32;
	int index;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	
	digits = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[:Nd:]")));
	//    .local v2, "digits":Landroid/icu/text/UnicodeSet;
	iter = std::make_shared<android::icu::text::UnicodeSetIterator>(digits);
	//    .local v4, "iter":Landroid/icu/text/UnicodeSetIterator;
label_cond_d:
label_goto_d:
	if ( !(iter->next()) )  
		goto label_cond_54;
	if ( android::icu::impl::coll::CollationDataBuilder::_assertionsDisabled )     
		goto label_cond_23;
	if ( iter->codepoint != android::icu::text::UnicodeSetIterator::IS_STRING )
		goto label_cond_23;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 4482    .line 863
label_cond_23:
	c = iter->codepoint;
	//    .local v0, "c":I
	ce32 = this->trie->get(c);
	//    .local v1, "ce32":I
	if ( ce32 == 0xc0 )
		goto label_cond_d;
	if ( ce32 == -0x1 )
		goto label_cond_d;
	index = this->addCE32(ce32);
	//    .local v3, "index":I
	if ( index <= 0x7ffff )
		goto label_cond_44;
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("too many mappings")));
	// throw
	throw cVar1;
	// 4524    .line 873
label_cond_44:
	this->trie->set(c, android::icu::impl::coll::Collation::makeCE32FromTagIndexAndLength(0xa, index, android::icu::lang::UCharacter::digit(c)));
	goto label_goto_d;
	// 4544    .line 877
	// 4545    .end local v0    # "c":I
	// 4546    .end local v1    # "ce32":I
	// 4547    .end local v3    # "index":I
label_cond_54:
	return;

}
// .method protected setLeadSurrogates()V
void android::icu::impl::coll::CollationDataBuilder::setLeadSurrogates()
{
	
	char cVar0;
	int leadValue;
	std::shared_ptr<java::util::Iterator> trieIterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> range;
	int value;
	
	cVar0 = 0xd800;
label_goto_4:
	if ( cVar0 >= 0xdc00 )
		goto label_cond_44;
	leadValue = -0x1;
	//    .local v1, "leadValue":I
	trieIterator = this->trie->iteratorForLeadSurrogate(cVar0);
	//    .local v3, "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_cond_10:
label_goto_10:
	if ( !(trieIterator->hasNext()) )  
		goto label_cond_2f;
	range = trieIterator->next();
	range->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v2, "range":Landroid/icu/impl/Trie2$Range;
	value = range->value;
	//    .local v4, "value":I
	if ( value != -0x1 )
		goto label_cond_26;
	value = 0x0;
label_goto_22:
	if ( leadValue >= 0 )
		goto label_cond_3f;
	leadValue = value;
	goto label_goto_10;
	// 4616    .line 890
label_cond_26:
	if ( value != 0xc0 )
		goto label_cond_2d;
	value = 0x100;
	goto label_goto_22;
	// 4627    .line 893
label_cond_2d:
	leadValue = 0x200;
	//    .end local v2    # "range":Landroid/icu/impl/Trie2$Range;
	//    .end local v4    # "value":I
label_cond_2f:
label_goto_2f:
	this->trie->setForLeadSurrogateCodeUnit(cVar0, (android::icu::impl::coll::Collation::makeCE32FromTagAndIndex(0xd, 0x0) |  leadValue));
	cVar0 = (char)(( cVar0 + 0x1));
	//    .local v0, "lead":C
	goto label_goto_4;
	// 4658    .line 898
	// 4659    .end local v0    # "lead":C
	// 4660    .restart local v2    # "range":Landroid/icu/impl/Trie2$Range;
	// 4661    .restart local v4    # "value":I
label_cond_3f:
	if ( leadValue == value )
		goto label_cond_10;
	leadValue = 0x200;
	goto label_goto_2f;
	// 4671    .line 906
	// 4672    .end local v1    # "leadValue":I
	// 4673    .end local v2    # "range":Landroid/icu/impl/Trie2$Range;
	// 4674    .end local v3    # "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
	// 4675    .end local v4    # "value":I
label_cond_44:
	return;

}
// .method suppressContractions(Landroid/icu/text/UnicodeSet;)V
void android::icu::impl::coll::CollationDataBuilder::suppressContractions(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	std::shared_ptr<android::icu::text::UnicodeSetIterator> iter;
	int c;
	int ce32;
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	if ( !(set->isEmpty()) )  
		goto label_cond_7;
	return;
	// 4694    .line 288
label_cond_7:
	iter = std::make_shared<android::icu::text::UnicodeSetIterator>(set);
	//    .local v2, "iter":Landroid/icu/text/UnicodeSetIterator;
label_cond_c:
label_goto_c:
	if ( !(iter->next()) )  
		goto label_cond_58;
	if ( iter->codepoint == android::icu::text::UnicodeSetIterator::IS_STRING )
		goto label_cond_58;
	c = iter->codepoint;
	//    .local v0, "c":I
	ce32 = this->trie->get(c);
	//    .local v1, "ce32":I
	if ( ce32 != 0xc0 )
		goto label_cond_41;
	ce32 = this->base->getFinalCE32(this->base->getCE32(c));
	if ( !(android::icu::impl::coll::Collation::ce32HasContext(ce32)) )  
		goto label_cond_c;
	this->trie->set(c, this->copyFromBaseCE32(c, ce32, 0x0));
	goto label_goto_c;
	// 4767    .line 298
label_cond_41:
	if ( !(android::icu::impl::coll::CollationDataBuilder::isBuilderContextCE32(ce32)) )  
		goto label_cond_c;
	this->trie->set(c, this->getConditionalCE32ForCE32(ce32)->ce32);
	this->contextChars->remove(c);
	goto label_goto_c;
	// 4794    .line 307
	// 4795    .end local v0    # "c":I
	// 4796    .end local v1    # "ce32":I
label_cond_58:
	this->modified = 0x1;
	return;

}


