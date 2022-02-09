// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$FixedDecimalSamples.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_FixedDecimalRange.h"
#include "android.icu.text.PluralRules_S_FixedDecimalSamples.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "android.icu.text.PluralRules.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashSet.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"
#include "java.util.regex.Pattern.h"

// .method private constructor <init>(Landroid/icu/text/PluralRules$SampleType;Ljava/util/Set;Z)V
android::icu::text::PluralRules_S_FixedDecimalSamples::PluralRules_S_FixedDecimalSamples(std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType,std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimalRange>> samples,bool bounded)
{
	
	//    .param p1, "sampleType"    # Landroid/icu/text/PluralRules$SampleType;
	//    .param p3, "bounded"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 052        value = {
	// 053            "(",
	// 054            "Landroid/icu/text/PluralRules$SampleType;",
	// 055            "Ljava/util/Set",
	// 056            "<",
	// 057            "Landroid/icu/text/PluralRules$FixedDecimalRange;",
	// 058            ">;Z)V"
	// 059        }
	// 060    .end annotation
	//    .local p2, "samples":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimalRange;>;"
	// 065    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->sampleType = sampleType;
	this->samples = samples;
	this->bounded = bounded;
	return;

}
// .method private static checkDecimal(Landroid/icu/text/PluralRules$SampleType;Landroid/icu/text/PluralRules$FixedDecimal;)V
void android::icu::text::PluralRules_S_FixedDecimalSamples::checkDecimal(std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType2,std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> sample)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p0, "sampleType2"    # Landroid/icu/text/PluralRules$SampleType;
	//    .param p1, "sample"    # Landroid/icu/text/PluralRules$FixedDecimal;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( sampleType2 != android::icu::text::PluralRules_S_SampleType::INTEGER )
		goto label_cond_29;
	cVar2 = cVar0;
label_goto_7:
	if ( sample->getVisibleDecimalDigitCount() )     
		goto label_cond_2b;
label_goto_d:
	if ( cVar2 == cVar0 )
		goto label_cond_2d;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed number range: ")))->append(sample)->toString());
	// throw
	throw cVar3;
label_cond_29:
	cVar2 = cVar1;
	goto label_goto_7;
label_cond_2b:
	cVar0 = cVar1;
	goto label_goto_d;
	// 143    .line 1078
label_cond_2d:
	return;

}
// .method static parse(Ljava/lang/String;)Landroid/icu/text/PluralRules$FixedDecimalSamples;
std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> android::icu::text::PluralRules_S_FixedDecimalSamples::parse(std::shared_ptr<java::lang::String> source)
{
	
	int cVar0;
	std::shared_ptr<java::util::LinkedHashSet> samples2;
	std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType2;
	std::shared_ptr<java::lang::Object> cVar1;
	int cVar2;
	std::shared_ptr<java::lang::String> range;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	auto rangeParts;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> sample;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalRange> cVar9;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> start;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> end;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalRange> cVar10;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> cVar11;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	
	//    .param p0, "source"    # Ljava/lang/String;
	cVar0 = 0x0;
	//    .local v0, "bounded2":Z
	//    .local v2, "haveBound":Z
	samples2 = std::make_shared<java::util::LinkedHashSet>();
	//    .local v7, "samples2":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimalRange;>;"
	if ( !(source->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("integer")))) )  
		goto label_cond_3f;
	sampleType2 = android::icu::text::PluralRules_S_SampleType::INTEGER;
	//    .local v6, "sampleType2":Landroid/icu/text/PluralRules$SampleType;
label_goto_13:
	cVar1 = android::icu::text::PluralRules::COMMA_SEPARATED->split(source->substring(0x7)->trim());
	cVar2 = cVar0;
label_goto_24:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_c6;
	range = cVar1[cVar2];
	//    .local v3, "range":Ljava/lang/String;
	if ( range->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u2026"))) )     
		goto label_cond_3a;
	if ( !(range->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("...")))) )  
		goto label_cond_54;
label_cond_3a:
	0x0;
	0x1;
label_goto_3c:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_24;
	// 241    .line 1038
	// 242    .end local v3    # "range":Ljava/lang/String;
	// 243    .end local v6    # "sampleType2":Landroid/icu/text/PluralRules$SampleType;
label_cond_3f:
	if ( !(source->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("decimal")))) )  
		goto label_cond_4b;
	//    .restart local v6    # "sampleType2":Landroid/icu/text/PluralRules$SampleType;
	goto label_goto_13;
	// 259    .line 1041
	// 260    .end local v6    # "sampleType2":Landroid/icu/text/PluralRules$SampleType;
label_cond_4b:
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Samples must start with \'integer\' or \'decimal\'")));
	// throw
	throw cVar4;
	// 270    .line 1051
	// 271    .restart local v3    # "range":Ljava/lang/String;
	// 272    .restart local v6    # "sampleType2":Landroid/icu/text/PluralRules$SampleType;
label_cond_54:
	if ( !(0x0) )  
		goto label_cond_70;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can only have \u2026 at the end of samples: ")))->append(range)->toString());
	// throw
	throw cVar5;
	// 301    .line 1054
label_cond_70:
	rangeParts = android::icu::text::PluralRules::TILDE_SEPARATED->split(range);
	//    .local v4, "rangeParts":[Ljava/lang/String;
	// switch
	{
	auto item = ( rangeParts->size() );
	if (item == 1) goto label_pswitch_94;
	if (item == 2) goto label_pswitch_a7;
	}
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	cVar7 = std::make_shared<java::lang::IllegalArgumentException>(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed number range: ")))->append(range)->toString());
	// throw
	throw cVar7;
	// 340    .line 1057
label_pswitch_94:
	sample = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(rangeParts[cVar0]);
	//    .local v5, "sample":Landroid/icu/text/PluralRules$FixedDecimal;
	android::icu::text::PluralRules_S_FixedDecimalSamples::checkDecimal(sampleType2, sample);
	cVar9 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimalRange>(sample, sample);
	samples2->add(cVar9);
	goto label_goto_3c;
	// 361    .line 1062
	// 362    .end local v5    # "sample":Landroid/icu/text/PluralRules$FixedDecimal;
label_pswitch_a7:
	start = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(rangeParts[cVar0]);
	//    .local v8, "start":Landroid/icu/text/PluralRules$FixedDecimal;
	end = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(rangeParts[0x1]);
	//    .local v1, "end":Landroid/icu/text/PluralRules$FixedDecimal;
	android::icu::text::PluralRules_S_FixedDecimalSamples::checkDecimal(sampleType2, start);
	android::icu::text::PluralRules_S_FixedDecimalSamples::checkDecimal(sampleType2, end);
	cVar10 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimalRange>(start, end);
	samples2->add(cVar10);
	goto label_goto_3c;
	// 396    .line 1071
	// 397    .end local v1    # "end":Landroid/icu/text/PluralRules$FixedDecimal;
	// 398    .end local v3    # "range":Ljava/lang/String;
	// 399    .end local v4    # "rangeParts":[Ljava/lang/String;
	// 400    .end local v8    # "start":Landroid/icu/text/PluralRules$FixedDecimal;
label_cond_c6:
	cVar11 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimalSamples>(sampleType2, java::util::Collections::unmodifiableSet(samples2), 0x1);
	return cVar11;
	// 412    .line 1055
	// 413    :pswitch_data_d0
	// 414    .packed-switch 0x1
	// 415        :pswitch_94
	// 416        :pswitch_a7
	// 417    .end packed-switch

}
// .method public addSamples(Ljava/util/Set;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::Double>> android::icu::text::PluralRules_S_FixedDecimalSamples::addSamples(std::shared_ptr<java::util::Set<java::lang::Double>> result)
{
	
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalRange> item;
	auto d;
	long long d;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 425        value = {
	// 426            "(",
	// 427            "Ljava/util/Set",
	// 428            "<",
	// 429            "Ljava/lang/Double;",
	// 430            ">;)",
	// 431            "Ljava/util/Set",
	// 432            "<",
	// 433            "Ljava/lang/Double;",
	// 434            ">;"
	// 435        }
	// 436    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 439    .end annotation
	//    .local p1, "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Double;>;"
	item_S_iterator = this->samples->iterator();
	//    .local v5, "item$iterator":Ljava/util/Iterator;
label_cond_6:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_37;
	item = item_S_iterator->next();
	item->checkCast("android::icu::text::PluralRules_S_FixedDecimalRange");
	//    .local v4, "item":Landroid/icu/text/PluralRules$FixedDecimalRange;
	//    .local v6, "startDouble":J
	//    .local v2, "endDouble":J
	d = item->start->getShiftedValue();
	//    .local v0, "d":J
label_goto_1f:
	if ( (d > item->end->getShiftedValue()) > 0 ) 
		goto label_cond_6;
	result->add(java::lang::Double::valueOf(( (double)(d) / (double)(android::icu::text::PluralRules_S_FixedDecimal::-get0(item->start)))));
	d = (d +  0x1);
	goto label_goto_1f;
	// 516    .line 1096
	// 517    .end local v0    # "d":J
	// 518    .end local v2    # "endDouble":J
	// 519    .end local v4    # "item":Landroid/icu/text/PluralRules$FixedDecimalRange;
	// 520    .end local v6    # "startDouble":J
label_cond_37:
	return result;

}
// .method public getSamples()Ljava/util/Set;
std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimalRange>> android::icu::text::PluralRules_S_FixedDecimalSamples::getSamples()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 528        value = {
	// 529            "()",
	// 530            "Ljava/util/Set",
	// 531            "<",
	// 532            "Landroid/icu/text/PluralRules$FixedDecimalRange;",
	// 533            ">;"
	// 534        }
	// 535    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 538    .end annotation
	return this->samples;

}
// .method public getStartEndSamples(Ljava/util/Set;)V
void android::icu::text::PluralRules_S_FixedDecimalSamples::getStartEndSamples(std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> target)
{
	
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalRange> item;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 550        value = {
	// 551            "(",
	// 552            "Ljava/util/Set",
	// 553            "<",
	// 554            "Landroid/icu/text/PluralRules$FixedDecimal;",
	// 555            ">;)V"
	// 556        }
	// 557    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 560    .end annotation
	//    .local p1, "target":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	item_S_iterator = this->samples->iterator();
	//    .local v1, "item$iterator":Ljava/util/Iterator;
label_goto_6:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_1d;
	item = item_S_iterator->next();
	item->checkCast("android::icu::text::PluralRules_S_FixedDecimalRange");
	//    .local v0, "item":Landroid/icu/text/PluralRules$FixedDecimalRange;
	target->add(item->start);
	target->add(item->end);
	goto label_goto_6;
	// 598    .line 1144
	// 599    .end local v0    # "item":Landroid/icu/text/PluralRules$FixedDecimalRange;
label_cond_1d:
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules_S_FixedDecimalSamples::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> b;
	int first;
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalRange> item;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 607    .end annotation
	cVar0 = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("@")));
	b = cVar0->append(this->sampleType->toString()->toLowerCase(java::util::Locale::ENGLISH));
	//    .local v0, "b":Ljava/lang/StringBuilder;
	first = 0x1;
	//    .local v1, "first":Z
	item_S_iterator = this->samples->iterator();
	//    .local v3, "item$iterator":Ljava/util/Iterator;
label_goto_1f:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_3f;
	item = item_S_iterator->next();
	item->checkCast("android::icu::text::PluralRules_S_FixedDecimalRange");
	//    .local v2, "item":Landroid/icu/text/PluralRules$FixedDecimalRange;
	if ( !(first) )  
		goto label_cond_38;
	first = 0x0;
label_goto_2e:
	b->append(0x20)->append(item);
	goto label_goto_1f;
	// 678    .line 1113
label_cond_38:
	b->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")));
	goto label_goto_2e;
	// 686    .line 1117
	// 687    .end local v2    # "item":Landroid/icu/text/PluralRules$FixedDecimalRange;
label_cond_3f:
	if ( this->bounded )     
		goto label_cond_49;
	b->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", \u2026")));
label_cond_49:
	return b->toString();

}


