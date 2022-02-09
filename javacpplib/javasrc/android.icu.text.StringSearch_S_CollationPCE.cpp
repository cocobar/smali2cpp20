// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\StringSearch$CollationPCE.smali
#include "java2ctype.h"
#include "android.icu.text.CollationElementIterator.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "android.icu.text.StringSearch_S_CollationPCE_S_PCEBuffer.h"
#include "android.icu.text.StringSearch_S_CollationPCE_S_PCEI.h"
#include "android.icu.text.StringSearch_S_CollationPCE_S_RCEBuffer.h"
#include "android.icu.text.StringSearch_S_CollationPCE_S_RCEI.h"
#include "android.icu.text.StringSearch_S_CollationPCE_S_Range.h"
#include "android.icu.text.StringSearch_S_CollationPCE.h"

static android::icu::text::StringSearch_S_CollationPCE::BUFFER_GROW = 0x8;
static android::icu::text::StringSearch_S_CollationPCE::CONTINUATION_MARKER = 0xc0;
static android::icu::text::StringSearch_S_CollationPCE::DEFAULT_BUFFER_SIZE = 0x10;
static android::icu::text::StringSearch_S_CollationPCE::PRIMARYORDERMASK = -0x10000;
static android::icu::text::StringSearch_S_CollationPCE::PROCESSED_NULLORDER = -0x1L;
// .method public constructor <init>(Landroid/icu/text/CollationElementIterator;)V
android::icu::text::StringSearch_S_CollationPCE::StringSearch_S_CollationPCE(std::shared_ptr<android::icu::text::CollationElementIterator> iter)
{
	
	std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_PCEBuffer> cVar0;
	
	//    .param p1, "iter"    # Landroid/icu/text/CollationElementIterator;
	// 060    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::text::StringSearch_S_CollationPCE_S_PCEBuffer>(0x0);
	this->pceBuffer_ = cVar0;
	this->init(iter);
	return;

}
// .method private init(Landroid/icu/text/RuleBasedCollator;)V
void android::icu::text::StringSearch_S_CollationPCE::init(std::shared_ptr<android::icu::text::RuleBasedCollator> coll)
{
	
	//    .param p1, "coll"    # Landroid/icu/text/RuleBasedCollator;
	this->strength_ = coll->getStrength();
	this->toShift_ = coll->isAlternateHandlingShifted();
	this->isShifted_ = 0x0;
	this->variableTop_ = coll->getVariableTop();
	return;

}
// .method private static isContinuation(I)Z
bool android::icu::text::StringSearch_S_CollationPCE::isContinuation(int ce)
{
	
	bool cVar0;
	
	//    .param p0, "ce"    # I
	if ( ( ce & 0xc0) != 0xc0 )
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method private processCE(I)J
long long android::icu::text::StringSearch_S_CollationPCE::processCE(int ce)
{
	
	int cVar0;
	long long cVar1;
	auto secondary;
	auto tertiary;
	auto quaternary;
	long long tertiary;
	long long secondary;
	long long primary;
	
	//    .param p1, "ce"    # I
	cVar0 = 0x3;
	cVar1 = 0x0;
	0x0;
	//    .local v0, "primary":J
	secondary = 0x0;
	//    .local v4, "secondary":J
	tertiary = 0x0;
	//    .local v6, "tertiary":J
	quaternary = 0x0;
	//    .local v2, "quaternary":J
	// switch
	{
	auto item = ( this->strength_ );
	if (item == 0) goto label_pswitch_1a;
	if (item == 1) goto label_pswitch_15;
	}
	tertiary = (long long)(android::icu::text::CollationElementIterator::tertiaryOrder(ce));
label_pswitch_15:
	secondary = (long long)(android::icu::text::CollationElementIterator::secondaryOrder(ce));
label_pswitch_1a:
	primary = (long long)(android::icu::text::CollationElementIterator::primaryOrder(ce));
	if ( !(this->toShift_) )  
		goto label_cond_30;
	if ( this->variableTop_ <= ce )
		goto label_cond_30;
	if ( !((primary > cVar1)) )  
		goto label_cond_30;
label_cond_2b:
	if ( (primary > cVar1) )     
		goto label_cond_52;
	return cVar1;
	// 208    .line 1683
label_cond_30:
	if ( !(this->isShifted_) )  
		goto label_cond_38;
	if ( !((primary > cVar1)) )  
		goto label_cond_2b;
label_cond_38:
	if ( this->strength_ <  cVar0 )
		goto label_cond_3f;
	quaternary = 0xffff;
label_cond_3f:
	this->isShifted_ = 0x0;
label_goto_42:
	return ((((primary << 0x30) |  (secondary << 0x20)) |  (tertiary << 0x10)) |  quaternary);
	// 255    .line 1689
label_cond_52:
	if ( this->strength_ <  cVar0 )
		goto label_cond_57;
	quaternary = primary;
label_cond_57:
	tertiary = 0x0;
	secondary = 0x0;
	this->isShifted_ = 0x1;
	goto label_goto_42;
	// 279    .line 1662
	// 280    nop
	// 282    :pswitch_data_62
	// 283    .packed-switch 0x0
	// 284        :pswitch_1a
	// 285        :pswitch_15
	// 286    .end packed-switch

}
// .method public init(Landroid/icu/text/CollationElementIterator;)V
void android::icu::text::StringSearch_S_CollationPCE::init(std::shared_ptr<android::icu::text::CollationElementIterator> iter)
{
	
	//    .param p1, "iter"    # Landroid/icu/text/CollationElementIterator;
	this->cei_ = iter;
	this->init(iter->getRuleBasedCollator());
	return;

}
// .method public nextProcessed(Landroid/icu/text/StringSearch$CollationPCE$Range;)J
long long android::icu::text::StringSearch_S_CollationPCE::nextProcessed(std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_Range> range)
{
	
	int ce;
	long long result;
	
	//    .param p1, "range"    # Landroid/icu/text/StringSearch$CollationPCE$Range;
	0x0;
	//    .local v4, "result":J
	0x0;
	//    .local v2, "low":I
	0x0;
	//    .local v1, "high":I
	this->pceBuffer_->reset();
label_goto_9:
	ce = this->cei_->next();
	//    .local v0, "ce":I
	if ( ce != -0x1 )
		goto label_cond_27;
label_cond_20:
	if ( !(range) )  
		goto label_cond_26;
	range->ixLow_ = this->cei_->getOffset();
	range->ixHigh_ = this->cei_->getOffset();
label_cond_26:
	return result;
	// 376    .line 1733
label_cond_27:
	result = this->processCE(ce);
	if ( (result > 0x0) )     
		goto label_cond_20;
	goto label_goto_9;

}
// .method public previousProcessed(Landroid/icu/text/StringSearch$CollationPCE$Range;)J
long long android::icu::text::StringSearch_S_CollationPCE::previousProcessed(std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_Range> range)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_RCEBuffer> rceb;
	int finish;
	int ce;
	int pcei;
	int rcei;
	long long result;
	
	//    .param p1, "range"    # Landroid/icu/text/StringSearch$CollationPCE$Range;
	cVar0 = -0x1;
	0x0;
	//    .local v8, "result":J
	0x0;
	//    .local v3, "low":I
	0x0;
	//    .local v2, "high":I
label_cond_6:
	if ( !(this->pceBuffer_->empty()) )  
		goto label_cond_30;
	rceb = std::make_shared<android::icu::text::StringSearch_S_CollationPCE_S_RCEBuffer>(0x0);
	//    .local v5, "rceb":Landroid/icu/text/StringSearch$CollationPCE$RCEBuffer;
	finish = 0x0;
	//    .local v1, "finish":Z
label_cond_14:
label_goto_14:
	ce = this->cei_->previous();
	//    .local v0, "ce":I
	if ( ce != cVar0 )
		goto label_cond_43;
	if ( rceb->empty() )     
		goto label_cond_41;
label_cond_2e:
label_goto_2e:
	if ( !(finish) )  
		goto label_cond_52;
	//    .end local v0    # "ce":I
	//    .end local v1    # "finish":Z
	//    .end local v5    # "rceb":Landroid/icu/text/StringSearch$CollationPCE$RCEBuffer;
label_cond_30:
	if ( !(this->pceBuffer_->empty()) )  
		goto label_cond_72;
	if ( !(range) )  
		goto label_cond_3e;
	range->ixLow_ = cVar0;
	range->ixHigh_ = cVar0;
label_cond_3e:
	return -0x1;
	// 499    .line 1780
	// 500    .restart local v0    # "ce":I
	// 501    .restart local v1    # "finish":Z
	// 502    .restart local v5    # "rceb":Landroid/icu/text/StringSearch$CollationPCE$RCEBuffer;
label_cond_41:
	finish = 0x1;
	goto label_goto_2e;
	// 509    .line 1784
label_cond_43:
	rceb->put(ce, this->cei_->getOffset(), this->cei_->getOffset());
	if ( !((-0x10000 &  ce)) )  
		goto label_cond_14;
	if ( !(android::icu::text::StringSearch_S_CollationPCE::isContinuation(ce)) )  
		goto label_cond_2e;
	goto label_goto_14;
	// 528    .line 1792
label_cond_52:
label_goto_52:
	if ( rceb->empty() )     
		goto label_cond_6;
	rcei = rceb->get();
	//    .local v6, "rcei":Landroid/icu/text/StringSearch$CollationPCE$RCEI;
	result = this->processCE(rcei->ce_);
	if ( !((result > 0x0)) )  
		goto label_cond_52;
	this->pceBuffer_->put(result, rcei->low_, rcei->high_);
	goto label_goto_52;
	// 568    .line 1812
	// 569    .end local v0    # "ce":I
	// 570    .end local v1    # "finish":Z
	// 571    .end local v5    # "rceb":Landroid/icu/text/StringSearch$CollationPCE$RCEBuffer;
	// 572    .end local v6    # "rcei":Landroid/icu/text/StringSearch$CollationPCE$RCEI;
label_cond_72:
	pcei = this->pceBuffer_->get();
	//    .local v4, "pcei":Landroid/icu/text/StringSearch$CollationPCE$PCEI;
	if ( !(range) )  
		goto label_cond_82;
	range->ixLow_ = pcei->low_;
	range->ixHigh_ = pcei->high_;
label_cond_82:
	return pcei->ce_;

}


