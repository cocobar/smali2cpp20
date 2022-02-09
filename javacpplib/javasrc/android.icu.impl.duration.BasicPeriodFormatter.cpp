// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicPeriodFormatter.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodFormatter.h"
#include "android.icu.impl.duration.BasicPeriodFormatterFactory_S_Customizations.h"
#include "android.icu.impl.duration.BasicPeriodFormatterFactory.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.PeriodFormatter.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "android.icu.impl.duration.impl.PeriodFormatterData.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

// .method constructor <init>(Landroid/icu/impl/duration/BasicPeriodFormatterFactory;Ljava/lang/String;Landroid/icu/impl/duration/impl/PeriodFormatterData;Landroid/icu/impl/duration/BasicPeriodFormatterFactory$Customizations;)V
android::icu::impl::duration::BasicPeriodFormatter::BasicPeriodFormatter(std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory> factory,std::shared_ptr<java::lang::String> localeName,std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> data,std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations> customs)
{
	
	//    .param p1, "factory"    # Landroid/icu/impl/duration/BasicPeriodFormatterFactory;
	//    .param p2, "localeName"    # Ljava/lang/String;
	//    .param p3, "data"    # Landroid/icu/impl/duration/impl/PeriodFormatterData;
	//    .param p4, "customs"    # Landroid/icu/impl/duration/BasicPeriodFormatterFactory$Customizations;
	// 029    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->factory = factory;
	this->localeName = localeName;
	this->data = data;
	this->customs = customs;
	return;

}
// .method private format(IZ[I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::BasicPeriodFormatter::format(int cVar0,bool inFuture,std::shared_ptr<int[]> counts)
{
	
	int mask;
	int i;
	int m;
	int sx;
	int mx;
	int sf;
	int mf;
	int first;
	int last;
	int isZero;
	std::shared_ptr<java::lang::StringBuffer> sb;
	int cVar0;
	int td;
	bool useDigitPrefix;
	bool wasSkipped;
	int skipped;
	int j;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> unit;
	unsigned char cv;
	int cv;
	
	//    .param p1, "tl"    # I
	//    .param p2, "inFuture"    # Z
	//    .param p3, "counts"    # [I
	mask = 0x0;
	//    .local v26, "mask":I
	i = 0x0;
	//    .local v21, "i":I
label_goto_4:
	if ( i >= counts->size() )
		goto label_cond_17;
	if ( counts[i] <= 0 )
		goto label_cond_14;
	mask = (mask | (0x1 << i));
label_cond_14:
	i = ( i + 0x1);
	goto label_goto_4;
	// 089    .line 70
label_cond_17:
	if ( this->data->allowZero() )     
		goto label_cond_43;
	i = 0x0;
	m = 0x1;
	//    .local v25, "m":I
label_goto_25:
	if ( i >= counts->size() )
		goto label_cond_3f;
	if ( !((mask & m)) )  
		goto label_cond_3a;
	if ( counts[i] != 0x1 )
		goto label_cond_3a;
	mask = (mask & (~m));
label_cond_3a:
	i = ( i + 0x1);
	m = ( m << 0x1);
	goto label_goto_25;
	// 142    .line 76
label_cond_3f:
	if ( mask )     
		goto label_cond_43;
	return 0x0;
	// 151    .line 84
	// 152    .end local v25    # "m":I
label_cond_43:
	//    .local v20, "forceD3Seconds":Z
	if ( !(this->data->useMilliseconds()) )  
		goto label_cond_77;
	if ( !(((0x1 << android::icu::impl::duration::TimeUnit::MILLISECOND->ordinal) & mask)) )  
		goto label_cond_77;
	sx = android::icu::impl::duration::TimeUnit::SECOND->ordinal;
	//    .local v32, "sx":I
	mx = android::icu::impl::duration::TimeUnit::MILLISECOND->ordinal;
	//    .local v29, "mx":I
	sf = (0x1 << sx);
	//    .local v30, "sf":I
	mf = (0x1 << mx);
	//    .local v27, "mf":I
	// switch
	{
	auto item = ( this->data->useMilliseconds() );
	if (item == 1) goto label_pswitch_a6;
	if (item == 2) goto label_pswitch_8f;
	}
	//    .end local v27    # "mf":I
	//    .end local v29    # "mx":I
	//    .end local v30    # "sf":I
	//    .end local v32    # "sx":I
label_cond_77:
label_goto_77:
	first = 0x0;
	//    .local v19, "first":I
	last = ( counts->size() + -0x1);
	//    .local v24, "last":I
label_goto_7e:
	if ( first >= counts->size() )
		goto label_cond_c2;
	if ( ((0x1 << first) & mask) )     
		goto label_cond_c2;
	first = ( first + 0x1);
	goto label_goto_7e;
	// 260    .line 94
	// 261    .end local v19    # "first":I
	// 262    .end local v24    # "last":I
	// 263    .restart local v27    # "mf":I
	// 264    .restart local v29    # "mx":I
	// 265    .restart local v30    # "sf":I
	// 266    .restart local v32    # "sx":I
label_pswitch_8f:
	if ( !((mask & sf)) )  
		goto label_cond_77;
	counts[sx] = (counts[sx] +  ( ( counts[mx] + -0x1) / 0x3e8));
	(mask & (~mf));
	0x1;
	goto label_goto_77;
	// 297    .line 102
label_pswitch_a6:
	if ( (mask & sf) )     
		goto label_cond_af;
	mask = (mask | sf);
	counts[sx] = 0x1;
label_cond_af:
	counts[sx] = (counts[sx] +  ( ( counts[mx] + -0x1) / 0x3e8));
	(mask & (~mf));
	0x1;
	goto label_goto_77;
	// 338    .line 117
	// 339    .end local v27    # "mf":I
	// 340    .end local v29    # "mx":I
	// 341    .end local v30    # "sf":I
	// 342    .end local v32    # "sx":I
	// 343    .restart local v19    # "first":I
	// 344    .restart local v24    # "last":I
label_cond_c2:
label_goto_c2:
	if ( last <= first )
		goto label_cond_d2;
	if ( ((0x1 << last) & mask) )     
		goto label_cond_d2;
	last = ( last + -0x1);
	goto label_goto_c2;
	// 365    .line 120
label_cond_d2:
	0x1;
	//    .local v22, "isZero":Z
	i = first;
label_goto_d6:
	if ( i >  last )
		goto label_cond_ea;
	if ( !(((0x1 << i) & mask)) )  
		goto label_cond_14e;
	if ( counts[i] <= 0x1 )
		goto label_cond_14e;
	isZero = 0x0;
label_cond_ea:
	sb = std::make_shared<java::lang::StringBuffer>();
	//    .local v12, "sb":Ljava/lang/StringBuffer;
	if ( !(this->customs->displayLimit) )  
		goto label_cond_f9;
	if ( !(isZero) )  
		goto label_cond_fb;
label_cond_f9:
	cVar0 = 0x0;
label_cond_fb:
	if ( !(this->customs->displayDirection) )  
		goto label_cond_105;
	if ( !(isZero) )  
		goto label_cond_151;
label_cond_105:
	td = 0x0;
	//    .local v33, "td":I
label_goto_107:
	useDigitPrefix = this->data->appendPrefix(cVar0, td, sb);
	//    .local v8, "useDigitPrefix":Z
	if ( first == last )
		goto label_cond_159;
	//    .local v9, "multiple":Z
label_goto_11a:
	wasSkipped = 0x1;
	//    .local v11, "wasSkipped":Z
	skipped = 0x0;
	//    .local v31, "skipped":Z
	if ( !(this->customs->separatorVariant) )  
		goto label_cond_15b;
	//    .local v7, "countSep":Z
label_goto_126:
	i = first;
	//    .end local v8    # "useDigitPrefix":Z
	//    .end local v31    # "skipped":Z
	//    .local v23, "j":I
label_goto_12a:
	if ( i >  last )
		goto label_cond_1d1;
	if ( !(skipped) )  
		goto label_cond_13c;
	this->data->appendSkippedUnit(sb);
	//    .restart local v31    # "skipped":Z
	wasSkipped = 0x1;
	//    .end local v31    # "skipped":Z
label_cond_13c:
label_goto_13c:
	j = ( j + 0x1);
	if ( j >= last )
		goto label_cond_15d;
	if ( ((0x1 << j) & mask) )     
		goto label_cond_15d;
	0x1;
	//    .restart local v31    # "skipped":Z
	goto label_goto_13c;
	// 542    .line 121
	// 543    .end local v7    # "countSep":Z
	// 544    .end local v9    # "multiple":Z
	// 545    .end local v11    # "wasSkipped":Z
	// 546    .end local v12    # "sb":Ljava/lang/StringBuffer;
	// 547    .end local v23    # "j":I
	// 548    .end local v31    # "skipped":Z
	// 549    .end local v33    # "td":I
label_cond_14e:
	i = ( i + 0x1);
	goto label_goto_d6;
	// 555    .line 142
	// 556    .restart local v12    # "sb":Ljava/lang/StringBuffer;
label_cond_151:
	if ( !(inFuture) )  
		goto label_cond_156;
	td = 0x2;
	//    .restart local v33    # "td":I
label_goto_155:
	goto label_goto_107;
	// 566    .end local v33    # "td":I
label_cond_156:
	td = 0x1;
	goto label_goto_155;
	// 572    .line 151
	// 573    .restart local v8    # "useDigitPrefix":Z
	// 574    .restart local v33    # "td":I
label_cond_159:
	0x0;
	//    .restart local v9    # "multiple":Z
	goto label_goto_11a;
	// 581    .line 154
	// 582    .restart local v11    # "wasSkipped":Z
	// 583    .restart local v31    # "skipped":Z
label_cond_15b:
	0x0;
	//    .restart local v7    # "countSep":Z
	goto label_goto_126;
	// 590    .line 169
	// 591    .end local v8    # "useDigitPrefix":Z
	// 592    .end local v31    # "skipped":Z
	// 593    .restart local v23    # "j":I
label_cond_15d:
	unit = android::icu::impl::duration::TimeUnit::units[i];
	//    .local v3, "unit":Landroid/icu/impl/duration/TimeUnit;
	//    .local v4, "count":I
	cv = this->customs->countVariant;
	//    .local v5, "cv":I
	if ( i != last )
		goto label_cond_1c3;
	if ( !(0x0) )  
		goto label_cond_174;
	cv = 0x5;
label_cond_174:
label_goto_174:
	if ( i != last )
		goto label_cond_1c5;
	//    .local v10, "isLast":Z
label_goto_17b:
	//    .local v28, "mustSkip":Z
	skipped = (skipped | this->data->appendUnit(unit, ( counts[i] + -0x1), cv, this->customs->unitVariant, 0x1, useDigitPrefix, 0x1, isLast, wasSkipped, sb));
	//    .local v31, "skipped":Z
	wasSkipped = 0x0;
	if ( !(this->customs->separatorVariant) )  
		goto label_cond_1cf;
	if ( j >  last )
		goto label_cond_1cf;
	if ( i != first )
		goto label_cond_1c7;
	//    .local v16, "afterFirst":Z
label_goto_1a2:
	if ( j != last )
		goto label_cond_1ca;
	//    .local v17, "beforeLast":Z
label_goto_1aa:
	if ( this->customs->separatorVariant != 0x2 )
		goto label_cond_1cd;
	//    .local v15, "fullSep":Z
label_goto_1b4:
	useDigitPrefix = this->data->appendUnitSeparator(unit, fullSep, afterFirst, beforeLast, sb);
	//    .end local v15    # "fullSep":Z
	//    .end local v16    # "afterFirst":Z
	//    .end local v17    # "beforeLast":Z
label_goto_1bf:
	i = j;
	goto label_goto_12a;
	// 737    .line 179
	// 738    .end local v10    # "isLast":Z
	// 739    .end local v28    # "mustSkip":Z
	// 740    .end local v31    # "skipped":Z
label_cond_1c3:
	cv = 0x0;
	goto label_goto_174;
	// 746    .line 181
label_cond_1c5:
	//    .restart local v10    # "isLast":Z
	goto label_goto_17b;
	// 753    .line 188
	// 754    .restart local v28    # "mustSkip":Z
	// 755    .restart local v31    # "skipped":Z
label_cond_1c7:
	//    .restart local v16    # "afterFirst":Z
	goto label_goto_1a2;
	// 762    .line 189
label_cond_1ca:
	//    .restart local v17    # "beforeLast":Z
	goto label_goto_1aa;
	// 769    .line 190
label_cond_1cd:
	//    .restart local v15    # "fullSep":Z
	goto label_goto_1b4;
	// 776    .line 193
	// 777    .end local v15    # "fullSep":Z
	// 778    .end local v16    # "afterFirst":Z
	// 779    .end local v17    # "beforeLast":Z
label_cond_1cf:
	useDigitPrefix = 0x0;
	//    .local v8, "useDigitPrefix":Z
	goto label_goto_1bf;
	// 786    .line 196
	// 787    .end local v3    # "unit":Landroid/icu/impl/duration/TimeUnit;
	// 788    .end local v4    # "count":I
	// 789    .end local v5    # "cv":I
	// 790    .end local v8    # "useDigitPrefix":Z
	// 791    .end local v10    # "isLast":Z
	// 792    .end local v28    # "mustSkip":Z
	// 793    .end local v31    # "skipped":Z
label_cond_1d1:
	this->data->appendSuffix(cVar0, td, sb);
	return sb->toString();
	// 812    .line 91
	// 813    nop
	// 815    :pswitch_data_1e2
	// 816    .packed-switch 0x1
	// 817        :pswitch_a6
	// 818        :pswitch_8f
	// 819    .end packed-switch

}
// .method public format(Landroid/icu/impl/duration/Period;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::BasicPeriodFormatter::format(std::shared_ptr<android::icu::impl::duration::Period> period)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "period"    # Landroid/icu/impl/duration/Period;
	if ( period->isSet() )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("period is not set")));
	// throw
	throw cVar0;
	// 845    .line 45
label_cond_f:
	return this->format(period->timeLimit, period->inFuture, period->counts);

}
// .method public withLocale(Ljava/lang/String;)Landroid/icu/impl/duration/PeriodFormatter;
std::shared_ptr<android::icu::impl::duration::PeriodFormatter> android::icu::impl::duration::BasicPeriodFormatter::withLocale(std::shared_ptr<java::lang::String> locName)
{
	
	std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatter> cVar0;
	
	//    .param p1, "locName"    # Ljava/lang/String;
	if ( this->localeName->equals(locName) )     
		goto label_cond_18;
	//    .local v0, "newData":Landroid/icu/impl/duration/impl/PeriodFormatterData;
	cVar0 = std::make_shared<android::icu::impl::duration::BasicPeriodFormatter>(this->factory, locName, this->factory->getData(locName), this->customs);
	return cVar0;
	// 895    .line 55
	// 896    .end local v0    # "newData":Landroid/icu/impl/duration/impl/PeriodFormatterData;
label_cond_18:
	return this;

}


