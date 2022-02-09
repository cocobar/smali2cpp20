// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CollationElementIterator$MaxExpSink.smali
#include "java2ctype.h"
#include "android.icu.text.CollationElementIterator_S_MaxExpSink.h"
#include "android.icu.text.CollationElementIterator.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.util.Map.h"

static android::icu::text::CollationElementIterator_S_MaxExpSink::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::text::CollationElementIterator_S_MaxExpSink::static_cinit()
{
	
	android::icu::text::CollationElementIterator_S_MaxExpSink::_assertionsDisabled = ( android::icu::text::CollationElementIterator_S_MaxExpSink()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>(Ljava/util/Map;)V
android::icu::text::CollationElementIterator_S_MaxExpSink::CollationElementIterator_S_MaxExpSink(std::shared_ptr<java::util::Map<java::lang::Integer,java::lang::Integer>> h)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 060        value = {
	// 061            "(",
	// 062            "Ljava/util/Map",
	// 063            "<",
	// 064            "Ljava/lang/Integer;",
	// 065            "Ljava/lang/Integer;",
	// 066            ">;)V"
	// 067        }
	// 068    .end annotation
	//    .local p1, "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/lang/Integer;>;"
	// 073    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->maxExpansions = h;
	return;

}
// .method public handleCE(J)V
void android::icu::text::CollationElementIterator_S_MaxExpSink::handleCE(long long ce)
{
	
	//    .param p1, "ce"    # J
	return;

}
// .method public handleExpansion([JII)V
void android::icu::text::CollationElementIterator_S_MaxExpSink::handleExpansion(std::shared_ptr<long long[]> ces,int start,int length)
{
	
	int count;
	int i;
	int cVar0;
	auto ce;
	long long p;
	int lower32;
	int lastHalf;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::Integer> oldCount;
	
	//    .param p1, "ces"    # [J
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	if ( length >  0x1 )
		goto label_cond_4;
	return;
	// 108    .line 585
label_cond_4:
	count = 0x0;
	//    .local v2, "count":I
	i = 0x0;
	//    .local v3, "i":I
label_goto_6:
	if ( i >= length )
		goto label_cond_19;
	if ( !(android::icu::text::CollationElementIterator::-wrap0(ces[(start + i)])) )  
		goto label_cond_17;
	cVar0 = 0x2;
label_goto_13:
	count = (count +  cVar0);
	i = ( i + 0x1);
	goto label_goto_6;
	// 141    .line 587
label_cond_17:
	cVar0 = 0x1;
	goto label_goto_13;
	// 147    .line 590
label_cond_19:
	ce = ces[( (start + length) + -0x1)];
	//    .local v0, "ce":J
	p = _ushrll(ce,0x20);
	//    .local v8, "p":J
	lower32 = (int)(ce);
	//    .local v5, "lower32":I
	lastHalf = android::icu::text::CollationElementIterator::-wrap2(p, lower32);
	//    .local v4, "lastHalf":I
	if ( lastHalf )     
		goto label_cond_3a;
	lastHalf = android::icu::text::CollationElementIterator::-wrap1(p, lower32);
	if ( android::icu::text::CollationElementIterator_S_MaxExpSink::_assertionsDisabled )     
		goto label_cond_3c;
	if ( lastHalf )     
		goto label_cond_3c;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 193    .line 598
label_cond_3a:
	lastHalf = ( lastHalf | 0xc0);
label_cond_3c:
	oldCount = this->maxExpansions->get(java::lang::Integer::valueOf(lastHalf));
	oldCount->checkCast("java::lang::Integer");
	//    .local v6, "oldCount":Ljava/lang/Integer;
	if ( !(oldCount) )  
		goto label_cond_50;
	if ( count <= oldCount->intValue() )
		goto label_cond_5d;
label_cond_50:
	this->maxExpansions->put(java::lang::Integer::valueOf(lastHalf), java::lang::Integer::valueOf(count));
label_cond_5d:
	return;

}


