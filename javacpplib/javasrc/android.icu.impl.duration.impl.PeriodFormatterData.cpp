// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\PeriodFormatterData.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "android.icu.impl.duration.impl.DataRecord_S_ScopeData.h"
#include "android.icu.impl.duration.impl.DataRecord.h"
#include "android.icu.impl.duration.impl.PeriodFormatterData.h"
#include "android.icu.impl.duration.impl.Utils_S_ChineseDigits.h"
#include "android.icu.impl.duration.impl.Utils.h"
#include "java.io.PrintStream.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Thread.h"
#include "java.util.Arrays.h"

static android::icu::impl::duration::impl::PeriodFormatterData::FORM_DUAL = 0x2;
static android::icu::impl::duration::impl::PeriodFormatterData::FORM_HALF_SPELLED = 0x6;
static android::icu::impl::duration::impl::PeriodFormatterData::FORM_PAUCAL = 0x3;
static android::icu::impl::duration::impl::PeriodFormatterData::FORM_PLURAL = 0x0;
static android::icu::impl::duration::impl::PeriodFormatterData::FORM_SINGULAR = 0x1;
static android::icu::impl::duration::impl::PeriodFormatterData::FORM_SINGULAR_NO_OMIT = 0x5;
static android::icu::impl::duration::impl::PeriodFormatterData::FORM_SINGULAR_SPELLED = 0x4;
static android::icu::impl::duration::impl::PeriodFormatterData::trace;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::PeriodFormatterData::static_cinit()
{
	
	android::icu::impl::duration::impl::PeriodFormatterData::trace = 0x0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/impl/duration/impl/DataRecord;)V
android::icu::impl::duration::impl::PeriodFormatterData::PeriodFormatterData(std::shared_ptr<java::lang::String> localeName,std::shared_ptr<android::icu::impl::duration::impl::DataRecord> dr)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	
	//    .param p1, "localeName"    # Ljava/lang/String;
	//    .param p2, "dr"    # Landroid/icu/impl/duration/impl/DataRecord;
	// 051    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->dr = dr;
	this->localeName = localeName;
	if ( localeName )     
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("localename is null")));
	// throw
	throw cVar0;
	// 071    .line 51
label_cond_12:
	if ( dr )     
		goto label_cond_1d;
	cVar1 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("data record is null")));
	// throw
	throw cVar1;
	// 084    .line 55
label_cond_1d:
	return;

}
// .method private computeForm(Landroid/icu/impl/duration/TimeUnit;IIZ)I
int android::icu::impl::duration::impl::PeriodFormatterData::computeForm(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,int count,int cv,bool lastOfMultiple)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	int val;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	int form;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::lang::IllegalStateException> cVar9;
	int v;
	std::shared_ptr<java::lang::IllegalStateException> cVar6;
	
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	//    .param p2, "count"    # I
	//    .param p3, "cv"    # I
	//    .param p4, "lastOfMultiple"    # Z
	cVar0 = 0x2;
	cVar1 = 0x3;
	cVar2 = 0x5;
	cVar3 = 0x0;
	cVar4 = 0x1;
	if ( !(android::icu::impl::duration::impl::PeriodFormatterData::trace) )  
		goto label_cond_4a;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::err->println(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("pfd.cf unit: ")))->append(unit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" count: ")))->append(count)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" cv: ")))->append(cv)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" dr.pl: ")))->append(this->dr->pl)->toString());
	java::lang::Thread::dumpStack({const[class].FS-Param});
label_cond_4a:
	if ( this->dr->pl )     
		goto label_cond_51;
	return cVar3;
	// 183    .line 527
label_cond_51:
	val = ( count / 0x3e8);
	//    .local v2, "val":I
	// switch
	{
	auto item = ( cv );
	if (item == 0) goto label_pswitch_b7;
	if (item == 1) goto label_pswitch_b7;
	if (item == 2) goto label_pswitch_5e;
	}
	// switch
	{
	auto item = ( this->dr->decimalHandling );
	if (item == 0) goto label_pswitch_5d;
	if (item == 1) goto label_pswitch_aa;
	if (item == 2) goto label_pswitch_ab;
	if (item == 3) goto label_pswitch_b0;
	}
label_cond_5d:
label_pswitch_5d:
	return cVar3;
	// 203    .line 535
label_pswitch_5e:
	// switch
	{
	auto item = ( this->dr->fractionHandling );
	if (item == 0) goto label_pswitch_6b;
	if (item == 1) goto label_pswitch_6c;
	if (item == 2) goto label_pswitch_6c;
	if (item == 3) goto label_pswitch_a3;
	}
	cVar6 = std::make_shared<java::lang::IllegalStateException>();
	// throw
	throw cVar6;
	// 218    .line 537
label_pswitch_6b:
	return cVar3;
	// 222    .line 544
label_pswitch_6c:
	v = ( count / 0x1f4);
	//    .local v1, "v":I
	if ( v != cVar4 )
		goto label_cond_85;
	if ( !(this->dr->halfNames) )  
		goto label_cond_84;
	if ( !(this->dr->halfNames[unit->ordinal()]) )  
		goto label_cond_84;
	return 0x6;
	// 254    .line 549
label_cond_84:
	return cVar2;
	// 258    .line 551
label_cond_85:
	if ( ( v & 0x1) != cVar4 )
		goto label_cond_b7;
	if ( this->dr->pl != cVar2 )
		goto label_cond_94;
	if ( v <= 0x15 )
		goto label_cond_94;
	return cVar2;
	// 278    .line 555
label_cond_94:
	if ( v != cVar1 )
		goto label_cond_b7;
	if ( this->dr->pl != cVar4 )
		goto label_cond_b7;
	if ( this->dr->fractionHandling == cVar0 )
		goto label_cond_b7;
	return cVar3;
	// 298    .line 565
	// 299    .end local v1    # "v":I
label_pswitch_a3:
	v = ( count / 0x1f4);
	//    .restart local v1    # "v":I
	if ( v == cVar4 )
		goto label_cond_a9;
	if ( v != cVar1 )
		goto label_cond_b7;
label_cond_a9:
	return cVar1;
	// 313    .line 579
	// 314    .end local v1    # "v":I
label_pswitch_aa:
	return cVar2;
	// 318    .line 581
label_pswitch_ab:
	if ( count >= 0x3e8 )
		goto label_cond_5d;
	return cVar2;
	// 327    .line 586
label_pswitch_b0:
	if ( this->dr->pl != cVar1 )
		goto label_cond_5d;
	return cVar1;
	// 338    .line 598
label_cond_b7:
label_pswitch_b7:
	if ( !(android::icu::impl::duration::impl::PeriodFormatterData::trace) )  
		goto label_cond_da;
	if ( count )     
		goto label_cond_da;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::err->println(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("EZeroHandling = ")))->append(this->dr->zeroHandling)->toString());
label_cond_da:
	if ( count )     
		goto label_cond_e4;
	if ( this->dr->zeroHandling != cVar4 )
		goto label_cond_e4;
	return 0x4;
	// 389    .line 605
label_cond_e4:
	form = 0x0;
	//    .local v0, "form":I
	// switch
	{
	auto item = ( this->dr->pl );
	if (item == 0) goto label_pswitch_112;
	if (item == 1) goto label_pswitch_10f;
	if (item == 2) goto label_pswitch_113;
	if (item == 3) goto label_pswitch_11b;
	if (item == 4) goto label_pswitch_12e;
	if (item == 5) goto label_pswitch_144;
	}
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::err->println(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("dr.pl is ")))->append(this->dr->pl)->toString());
	cVar9 = std::make_shared<java::lang::IllegalStateException>();
	// throw
	throw cVar9;
	// 435    .line 609
label_pswitch_10f:
	if ( val != cVar4 )
		goto label_cond_112;
	form = 0x4;
label_cond_112:
label_goto_112:
label_pswitch_112:
	return form;
	// 448    .line 614
label_pswitch_113:
	if ( val != cVar0 )
		goto label_cond_117;
	form = 0x2;
	goto label_goto_112;
	// 457    .line 616
label_cond_117:
	if ( val != cVar4 )
		goto label_cond_112;
	form = 0x1;
	goto label_goto_112;
	// 466    .line 621
label_pswitch_11b:
	val;
	//    .restart local v1    # "v":I
	v = ( val % 0x64);
	if ( v <= 0x14 )
		goto label_cond_124;
	v = ( v % 0xa);
label_cond_124:
	if ( v != cVar4 )
		goto label_cond_128;
	form = 0x1;
	goto label_goto_112;
	// 491    .line 628
label_cond_128:
	if ( v <= cVar4 )
		goto label_cond_112;
	if ( v >= cVar2 )
		goto label_cond_112;
	form = 0x3;
	goto label_goto_112;
	// 502    .line 648
	// 503    .end local v1    # "v":I
label_pswitch_12e:
	if ( val != cVar0 )
		goto label_cond_132;
	form = 0x2;
	goto label_goto_112;
	// 512    .line 650
label_cond_132:
	if ( val != cVar4 )
		goto label_cond_13a;
	if ( !(lastOfMultiple) )  
		goto label_cond_138;
	form = 0x4;
	goto label_goto_112;
	// 524    .line 654
label_cond_138:
	form = 0x1;
	goto label_goto_112;
	// 530    .line 656
label_cond_13a:
	if ( unit != android::icu::impl::duration::TimeUnit::YEAR )
		goto label_cond_112;
	if ( val <= 0xb )
		goto label_cond_112;
	form = 0x5;
	goto label_goto_112;
	// 545    .line 661
label_pswitch_144:
	if ( val != cVar0 )
		goto label_cond_148;
	form = 0x2;
	goto label_goto_112;
	// 554    .line 663
label_cond_148:
	if ( val != cVar4 )
		goto label_cond_14c;
	form = 0x1;
	goto label_goto_112;
	// 563    .line 665
label_cond_14c:
	if ( val <= 0xa )
		goto label_cond_112;
	form = 0x5;
	goto label_goto_112;
	// 574    .line 529
	// 575    :pswitch_data_152
	// 576    .packed-switch 0x0
	// 577        :pswitch_b7
	// 578        :pswitch_b7
	// 579        :pswitch_5e
	// 580    .end packed-switch
	// 582    .line 577
	// 583    :pswitch_data_15c
	// 584    .packed-switch 0x0
	// 585        :pswitch_5d
	// 586        :pswitch_aa
	// 587        :pswitch_ab
	// 588        :pswitch_b0
	// 589    .end packed-switch
	// 591    .line 535
	// 592    :pswitch_data_168
	// 593    .packed-switch 0x0
	// 594        :pswitch_6b
	// 595        :pswitch_6c
	// 596        :pswitch_6c
	// 597        :pswitch_a3
	// 598    .end packed-switch
	// 600    .line 606
	// 601    :pswitch_data_174
	// 602    .packed-switch 0x0
	// 603        :pswitch_112
	// 604        :pswitch_10f
	// 605        :pswitch_113
	// 606        :pswitch_11b
	// 607        :pswitch_12e
	// 608        :pswitch_144
	// 609    .end packed-switch

}
// .method public allowZero()Z
bool android::icu::impl::duration::impl::PeriodFormatterData::allowZero()
{
	
	return this->dr->allowZero;

}
// .method public appendCount(Landroid/icu/impl/duration/TimeUnit;ZZIIZLjava/lang/String;ZLjava/lang/StringBuffer;)I
int android::icu::impl::duration::impl::PeriodFormatterData::appendCount(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,bool omitCount,bool useDigitPrefix,int count,int cVar0,bool useSep,std::shared_ptr<java::lang::String> name,bool last,std::shared_ptr<java::lang::StringBuffer> sb)
{
	
	int cVar0;
	int index;
	std::shared_ptr<java::lang::String> measure;
	int val;
	std::shared_ptr<java::lang::Object> name;
	int v;
	int solox;
	unsigned char hp;
	std::shared_ptr<java::lang::String> half;
	std::shared_ptr<java::lang::String> cVar3;
	
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	//    .param p2, "omitCount"    # Z
	//    .param p3, "useDigitPrefix"    # Z
	//    .param p4, "count"    # I
	//    .param p5, "cv"    # I
	//    .param p6, "useSep"    # Z
	//    .param p7, "name"    # Ljava/lang/String;
	//    .param p8, "last"    # Z
	//    .param p9, "sb"    # Ljava/lang/StringBuffer;
	if ( cVar0 != 0x2 )
		goto label_cond_d;
	if ( this->dr->halves )     
		goto label_cond_d;
	cVar0 = 0x0;
label_cond_d:
	if ( omitCount )     
		goto label_cond_20;
	if ( !(useDigitPrefix) )  
		goto label_cond_20;
	if ( !(this->dr->digitPrefix) )  
		goto label_cond_20;
	sb->append(this->dr->digitPrefix);
label_cond_20:
	index = unit->ordinal();
	//    .local v5, "index":I
	// switch
	{
	auto item = ( cVar0 );
	if (item == 0) goto label_pswitch_68;
	if (item == 1) goto label_pswitch_77;
	if (item == 2) goto label_pswitch_e2;
	}
	//    .local v2, "decimals":I
	// switch
	{
	auto item = ( cVar0 );
	if (item == 4) goto label_pswitch_1c1;
	if (item == 5) goto label_pswitch_1c4;
	}
label_goto_2b:
	if ( omitCount )     
		goto label_cond_35;
	this->appendCountValue(count, 0x1, 0x1, sb);
	//    .end local v2    # "decimals":I
label_cond_35:
label_goto_35:
	if ( omitCount )     
		goto label_cond_42;
	if ( !(useSep) )  
		goto label_cond_42;
	sb->append(this->dr->countSep);
label_cond_42:
	if ( omitCount )     
		goto label_cond_5e;
	if ( !(this->dr->measures) )  
		goto label_cond_5e;
	if ( index >= this->dr->measures->size() )
		goto label_cond_5e;
	measure = this->dr->measures[index];
	//    .local v6, "measure":Ljava/lang/String;
	if ( !(measure) )  
		goto label_cond_5e;
	sb->append(measure);
	//    .end local v6    # "measure":Ljava/lang/String;
label_cond_5e:
	sb->append(name);
	if ( !(last) )  
		goto label_cond_1c7;
	//    .end local v5    # "index":I
label_goto_67:
	return index;
	// 772    .line 274
	// 773    .restart local v5    # "index":I
label_pswitch_68:
	if ( omitCount )     
		goto label_cond_35;
	this->appendInteger(( count / 0x3e8), 0x1, 0xa, sb);
	goto label_goto_35;
	// 792    .line 280
label_pswitch_77:
	val = ( count / 0x3e8);
	//    .local v9, "val":I
	if ( unit != android::icu::impl::duration::TimeUnit::MINUTE )
		goto label_cond_d6;
	if ( this->dr->fiveMinutes )     
		goto label_cond_8b;
	if ( !(this->dr->fifteenMinutes) )  
		goto label_cond_d6;
label_cond_8b:
	if ( !(val) )  
		goto label_cond_d6;
	if ( ( val % 0x5) )     
		goto label_cond_d6;
	if ( !(this->dr->fifteenMinutes) )  
		goto label_cond_ba;
	if ( val == 0xf )
		goto label_cond_9f;
	if ( val != 0x2d )
		goto label_cond_ba;
label_cond_9f:
	if ( val != 0xf )
		goto label_cond_b8;
label_goto_a4:
	if ( omitCount )     
		goto label_cond_ae;
	this->appendInteger(0x1, 0x1, 0xa, sb);
label_cond_ae:
	name = this->dr->fifteenMinutes;
	0x8;
	goto label_goto_35;
	// 874    .line 286
label_cond_b8:
	0x3;
	goto label_goto_a4;
	// 880    .line 292
label_cond_ba:
	if ( !(this->dr->fiveMinutes) )  
		goto label_cond_d6;
	if ( omitCount )     
		goto label_cond_cc;
	this->appendInteger(( val / 0x5), 0x1, 0xa, sb);
label_cond_cc:
	name = this->dr->fiveMinutes;
	0x9;
	goto label_goto_35;
	// 916    .line 301
label_cond_d6:
	if ( omitCount )     
		goto label_cond_35;
	this->appendInteger(val, 0x1, 0xa, sb);
	goto label_goto_35;
	// 930    .line 306
	// 931    .end local v9    # "val":I
label_pswitch_e2:
	v = ( count / 0x1f4);
	//    .local v8, "v":I
	if ( v == 0x1 )
		goto label_cond_f4;
	if ( omitCount )     
		goto label_cond_f4;
	this->appendCountValue(count, 0x1, 0x0, sb);
label_cond_f4:
	if ( ( v & 0x1) != 0x1 )
		goto label_cond_35;
	if ( v != 0x1 )
		goto label_cond_116;
	if ( !(this->dr->halfNames) )  
		goto label_cond_116;
	if ( !(this->dr->halfNames[index]) )  
		goto label_cond_116;
	sb->append(name);
	if ( !(last) )  
		goto label_cond_114;
	//    .end local v5    # "index":I
label_goto_113:
	return index;
	// 997    .restart local v5    # "index":I
label_cond_114:
	index = -0x1;
	goto label_goto_113;
	// 1003    .line 317
label_cond_116:
	if ( v != 0x1 )
		goto label_cond_153;
	solox = 0x0;
	//    .local v7, "solox":I
label_goto_11a:
	if ( !(this->dr->genders) )  
		goto label_cond_133;
	if ( this->dr->halves->size() <= 0x2 )
		goto label_cond_133;
	if ( this->dr->genders[index] != 0x1 )
		goto label_cond_133;
	solox = ( solox + 0x2);
label_cond_133:
	if ( this->dr->halfPlacements )     
		goto label_cond_155;
	hp = 0x0;
	//    .local v4, "hp":I
label_goto_13a:
	half = this->dr->halves[solox];
	//    .local v3, "half":Ljava/lang/String;
	if ( this->dr->measures )     
		goto label_cond_15e;
	cVar3 = 0x0;
label_goto_147:
	// switch
	{
	auto item = ( hp );
	if (item == 0) goto label_pswitch_14c;
	if (item == 1) goto label_pswitch_165;
	if (item == 2) goto label_pswitch_19a;
	}
	goto label_goto_35;
	// 1080    .line 330
label_pswitch_14c:
	sb->append(half);
	goto label_goto_35;
	// 1088    .line 317
	// 1089    .end local v3    # "half":Ljava/lang/String;
	// 1090    .end local v4    # "hp":I
	// 1091    .end local v7    # "solox":I
label_cond_153:
	solox = 0x1;
	//    .restart local v7    # "solox":I
	goto label_goto_11a;
	// 1098    .line 325
label_cond_155:
	hp = this->dr->halfPlacements[( solox & 0x1)];
	goto label_goto_13a;
	// 1110    .line 327
	// 1111    .restart local v3    # "half":Ljava/lang/String;
	// 1112    .restart local v4    # "hp":I
label_cond_15e:
	this->dr->measures[index];
	//    .restart local v6    # "measure":Ljava/lang/String;
	goto label_goto_147;
	// 1123    .line 333
	// 1124    .end local v6    # "measure":Ljava/lang/String;
label_pswitch_165:
	if ( !(cVar3) )  
		goto label_cond_189;
	sb->append(cVar3);
	sb->append(half);
	if ( !(useSep) )  
		goto label_cond_180;
	if ( !(( omitCount ^ 0x1)) )  
		goto label_cond_180;
	sb->append(this->dr->countSep);
label_cond_180:
	sb->append(name);
	return -0x1;
	// 1167    .line 341
label_cond_189:
	sb->append(name);
	sb->append(half);
	if ( !(last) )  
		goto label_cond_198;
	//    .end local v5    # "index":I
label_goto_197:
	return index;
	// 1187    .restart local v5    # "index":I
label_cond_198:
	index = -0x1;
	goto label_goto_197;
	// 1193    .line 347
label_pswitch_19a:
	if ( !(cVar3) )  
		goto label_cond_1a1;
	sb->append(cVar3);
label_cond_1a1:
	if ( !(useSep) )  
		goto label_cond_1b0;
	if ( !(( omitCount ^ 0x1)) )  
		goto label_cond_1b0;
	sb->append(this->dr->countSep);
label_cond_1b0:
	sb->append(name);
	sb->append(half);
	if ( !(last) )  
		goto label_cond_1bf;
	//    .end local v5    # "index":I
label_goto_1be:
	return index;
	// 1239    .restart local v5    # "index":I
label_cond_1bf:
	index = -0x1;
	goto label_goto_1be;
	// 1245    .line 362
	// 1246    .end local v3    # "half":Ljava/lang/String;
	// 1247    .end local v4    # "hp":I
	// 1248    .end local v7    # "solox":I
	// 1249    .end local v8    # "v":I
	// 1250    .restart local v2    # "decimals":I
label_pswitch_1c1:
	0x2;
	goto label_goto_2b;
	// 1256    .line 363
label_pswitch_1c4:
	0x3;
	goto label_goto_2b;
	// 1262    .line 379
	// 1263    .end local v2    # "decimals":I
label_cond_1c7:
	index = -0x1;
	goto label_goto_67;
	// 1269    .line 272
	// 1270    :pswitch_data_1ca
	// 1271    .packed-switch 0x0
	// 1272        :pswitch_68
	// 1273        :pswitch_77
	// 1274        :pswitch_e2
	// 1275    .end packed-switch
	// 1277    .line 361
	// 1278    :pswitch_data_1d4
	// 1279    .packed-switch 0x4
	// 1280        :pswitch_1c1
	// 1281        :pswitch_1c4
	// 1282    .end packed-switch
	// 1284    .line 328
	// 1285    :pswitch_data_1dc
	// 1286    .packed-switch 0x0
	// 1287        :pswitch_14c
	// 1288        :pswitch_165
	// 1289        :pswitch_19a
	// 1290    .end packed-switch

}
// .method public appendCountValue(IIILjava/lang/StringBuffer;)V
void android::icu::impl::duration::impl::PeriodFormatterData::appendCountValue(int count,int integralDigits,int decimalDigits,std::shared_ptr<java::lang::StringBuffer> sb)
{
	
	char cVar0;
	int cVar1;
	int ival;
	int dval;
	
	//    .param p1, "count"    # I
	//    .param p2, "integralDigits"    # I
	//    .param p3, "decimalDigits"    # I
	//    .param p4, "sb"    # Ljava/lang/StringBuffer;
	cVar0 = 0x20;
	cVar1 = 0xa;
	ival = ( count / 0x3e8);
	//    .local v7, "ival":I
	if ( decimalDigits )     
		goto label_cond_c;
	this->appendInteger(ival, integralDigits, cVar1, sb);
	return;
	// 1318    .line 398
label_cond_c:
	if ( !(this->dr->requiresDigitSeparator) )  
		goto label_cond_1b;
	if ( sb->length() <= 0 )
		goto label_cond_1b;
	sb->append(cVar0);
label_cond_1b:
	this->appendDigits((long long)(ival), integralDigits, cVar1, sb);
	dval = ( count % 0x3e8);
	//    .local v0, "dval":I
	if ( decimalDigits != 0x1 )
		goto label_cond_42;
	dval = ( dval / 0x64);
label_cond_29:
label_goto_29:
	sb->append(this->dr->decimalSep);
	this->appendDigits((long long)(dval), decimalDigits, decimalDigits, sb);
	if ( !(this->dr->requiresDigitSeparator) )  
		goto label_cond_41;
	sb->append(cVar0);
label_cond_41:
	return;
	// 1395    .line 405
label_cond_42:
	if ( decimalDigits != 0x2 )
		goto label_cond_29;
	dval = ( dval / 0xa);
	goto label_goto_29;

}
// .method public appendDigits(JIILjava/lang/StringBuffer;)V
void android::icu::impl::duration::impl::PeriodFormatterData::appendDigits(long long num,int mindigits,int maxdigits,std::shared_ptr<java::lang::StringBuffer> sb)
{
	
	long long cVar0;
	std::shared<std::vector<char[]>> buf;
	int ix;
	long long num;
	
	//    .param p1, "num"    # J
	//    .param p3, "mindigits"    # I
	//    .param p4, "maxdigits"    # I
	//    .param p5, "sb"    # Ljava/lang/StringBuffer;
	cVar0 = 0xa;
	buf = std::make_shared<std::vector<char[]>>(maxdigits);
	//    .local v2, "buf":[C
	ix = maxdigits;
	//    .local v4, "ix":I
label_goto_8:
	if ( ix <= 0 )
		goto label_cond_20;
	if ( (num > 0x0) <= 0 )
		goto label_cond_20;
	ix = ( ix + -0x1);
	buf[ix] = (char)((int)(((long long)(this->dr->zero) +  (num % cVar0))));
	num = (num /  cVar0);
	goto label_goto_8;
	// 1461    .line 458
label_cond_20:
	//    .local v3, "e":I
label_goto_22:
	if ( ix <= (maxdigits - mindigits) )
		goto label_cond_2d;
	ix = ( ix + -0x1);
	buf[ix] = this->dr->zero;
	goto label_goto_22;
	// 1480    .line 461
label_cond_2d:
	sb->append(buf, ix, (maxdigits - ix));
	return;

}
// .method public appendInteger(IIILjava/lang/StringBuffer;)V
void android::icu::impl::duration::impl::PeriodFormatterData::appendInteger(int num,int mindigits,int maxdigits,std::shared_ptr<java::lang::StringBuffer> sb)
{
	
	char cVar0;
	std::shared_ptr<java::lang::String> name;
	
	//    .param p1, "num"    # I
	//    .param p2, "mindigits"    # I
	//    .param p3, "maxdigits"    # I
	//    .param p4, "sb"    # Ljava/lang/StringBuffer;
	cVar0 = 0x20;
	if ( !(this->dr->numberNames) )  
		goto label_cond_1b;
	if ( num >= this->dr->numberNames->size() )
		goto label_cond_1b;
	name = this->dr->numberNames[num];
	//    .local v0, "name":Ljava/lang/String;
	if ( !(name) )  
		goto label_cond_1b;
	sb->append(name);
	return;
	// 1534    .line 425
	// 1535    .end local v0    # "name":Ljava/lang/String;
label_cond_1b:
	if ( !(this->dr->requiresDigitSeparator) )  
		goto label_cond_2a;
	if ( sb->length() <= 0 )
		goto label_cond_2a;
	sb->append(cVar0);
label_cond_2a:
	// switch
	{
	auto item = ( this->dr->numberSystem );
	if (item == 0) goto label_pswitch_3b;
	if (item == 1) goto label_pswitch_44;
	if (item == 2) goto label_pswitch_4f;
	if (item == 3) goto label_pswitch_5a;
	}
label_goto_31:
	if ( !(this->dr->requiresDigitSeparator) )  
		goto label_cond_3a;
	sb->append(cVar0);
label_cond_3a:
	return;
	// 1575    .line 429
label_pswitch_3b:
	this->appendDigits((long long)(num), mindigits, maxdigits, sb);
	goto label_goto_31;
	// 1591    .line 431
label_pswitch_44:
	sb->append(android::icu::impl::duration::impl::Utils::chineseNumber((long long)(num), android::icu::impl::duration::impl::Utils_S_ChineseDigits::TRADITIONAL));
	goto label_goto_31;
	// 1606    .line 433
label_pswitch_4f:
	sb->append(android::icu::impl::duration::impl::Utils::chineseNumber((long long)(num), android::icu::impl::duration::impl::Utils_S_ChineseDigits::SIMPLIFIED));
	goto label_goto_31;
	// 1621    .line 435
label_pswitch_5a:
	sb->append(android::icu::impl::duration::impl::Utils::chineseNumber((long long)(num), android::icu::impl::duration::impl::Utils_S_ChineseDigits::KOREAN));
	goto label_goto_31;
	// 1636    .line 428
	// 1637    nop
	// 1639    :pswitch_data_66
	// 1640    .packed-switch 0x0
	// 1641        :pswitch_3b
	// 1642        :pswitch_44
	// 1643        :pswitch_4f
	// 1644        :pswitch_5a
	// 1645    .end packed-switch

}
// .method public appendPrefix(IILjava/lang/StringBuffer;)Z
bool android::icu::impl::duration::impl::PeriodFormatterData::appendPrefix(int tl,int td,std::shared_ptr<java::lang::StringBuffer> sb)
{
	
	std::shared_ptr<java::lang::String> sd;
	std::shared_ptr<java::lang::String> prefix;
	
	//    .param p1, "tl"    # I
	//    .param p2, "td"    # I
	//    .param p3, "sb"    # Ljava/lang/StringBuffer;
	if ( !(this->dr->scopeData) )  
		goto label_cond_1c;
	//    .local v0, "ix":I
	sd = this->dr->scopeData[(( tl * 0x3) + td)];
	//    .local v2, "sd":Landroid/icu/impl/duration/impl/DataRecord$ScopeData;
	if ( !(sd) )  
		goto label_cond_1c;
	prefix = sd->prefix;
	//    .local v1, "prefix":Ljava/lang/String;
	if ( !(prefix) )  
		goto label_cond_1c;
	sb->append(prefix);
	return sd->requiresDigitPrefix;
	// 1694    .line 110
	// 1695    .end local v0    # "ix":I
	// 1696    .end local v1    # "prefix":Ljava/lang/String;
	// 1697    .end local v2    # "sd":Landroid/icu/impl/duration/impl/DataRecord$ScopeData;
label_cond_1c:
	return 0x0;

}
// .method public appendSkippedUnit(Ljava/lang/StringBuffer;)V
void android::icu::impl::duration::impl::PeriodFormatterData::appendSkippedUnit(std::shared_ptr<java::lang::StringBuffer> sb)
{
	
	//    .param p1, "sb"    # Ljava/lang/StringBuffer;
	if ( !(this->dr->skippedUnitMarker) )  
		goto label_cond_d;
	sb->append(this->dr->skippedUnitMarker);
label_cond_d:
	return;

}
// .method public appendSuffix(IILjava/lang/StringBuffer;)V
void android::icu::impl::duration::impl::PeriodFormatterData::appendSuffix(int tl,int td,std::shared_ptr<java::lang::StringBuffer> sb)
{
	
	std::shared_ptr<java::lang::String> sd;
	std::shared_ptr<java::lang::String> suffix;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "tl"    # I
	//    .param p2, "td"    # I
	//    .param p3, "sb"    # Ljava/lang/StringBuffer;
	if ( !(this->dr->scopeData) )  
		goto label_cond_3d;
	//    .local v0, "ix":I
	sd = this->dr->scopeData[(( tl * 0x3) + td)];
	//    .local v1, "sd":Landroid/icu/impl/duration/impl/DataRecord$ScopeData;
	if ( !(sd) )  
		goto label_cond_3d;
	suffix = sd->suffix;
	//    .local v2, "suffix":Ljava/lang/String;
	if ( !(suffix) )  
		goto label_cond_3d;
	if ( !(android::icu::impl::duration::impl::PeriodFormatterData::trace) )  
		goto label_cond_3a;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("appendSuffix \'")))->append(suffix)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString());
label_cond_3a:
	sb->append(suffix);
	//    .end local v0    # "ix":I
	//    .end local v1    # "sd":Landroid/icu/impl/duration/impl/DataRecord$ScopeData;
	//    .end local v2    # "suffix":Ljava/lang/String;
label_cond_3d:
	return;

}
// .method public appendUnit(Landroid/icu/impl/duration/TimeUnit;IIIZZZZZLjava/lang/StringBuffer;)Z
bool android::icu::impl::duration::impl::PeriodFormatterData::appendUnit(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,int count,int cv,int uv,bool useCountSep,bool useDigitPrefix,bool multiple,bool last,bool wasSkipped,std::shared_ptr<java::lang::StringBuffer> sb)
{
	
	int px;
	int useMedium;
	auto names;
	bool cVar0;
	int form;
	std::shared_ptr<java::lang::String> name;
	int suffixIndex;
	int suffix;
	auto suffix;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::vector<std::any> tryCatchExcetionList;
	int count;
	int cv;
	
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	//    .param p2, "count"    # I
	//    .param p3, "cv"    # I
	//    .param p4, "uv"    # I
	//    .param p5, "useCountSep"    # Z
	//    .param p6, "useDigitPrefix"    # Z
	//    .param p7, "multiple"    # Z
	//    .param p8, "last"    # Z
	//    .param p9, "wasSkipped"    # Z
	//    .param p10, "sb"    # Ljava/lang/StringBuffer;
	px = unit->ordinal();
	//    .local v17, "px":I
	//    .local v21, "willRequireSkipMarker":Z
	if ( !(this->dr->requiresSkipMarker) )  
		goto label_cond_31;
	if ( !(this->dr->requiresSkipMarker[px]) )  
		goto label_cond_31;
	if ( !(this->dr->skippedUnitMarker) )  
		goto label_cond_31;
	if ( wasSkipped )     
		goto label_cond_2f;
	if ( !(last) )  
		goto label_cond_2f;
	sb->append(this->dr->skippedUnitMarker);
label_cond_2f:
label_cond_31:
	if ( !(uv) )  
		goto label_cond_86;
	if ( uv != 0x1 )
		goto label_cond_71;
	useMedium = 0x1;
	//    .local v20, "useMedium":Z
label_goto_3a:
	if ( !(useMedium) )  
		goto label_cond_74;
	names = this->dr->mediumNames;
	//    .local v16, "names":[Ljava/lang/String;
label_goto_44:
	if ( !(names) )  
		goto label_cond_4a;
	if ( names[px] )     
		goto label_cond_54;
label_cond_4a:
	if ( !(useMedium) )  
		goto label_cond_7d;
	names = this->dr->shortNames;
label_cond_54:
label_goto_54:
	if ( !(names) )  
		goto label_cond_86;
	if ( !(names[px]) )  
		goto label_cond_86;
	this->appendCount(unit, 0x0, 0x0, count, cv, useCountSep, names[px], last, sb);
	return 0x0;
	// 1969    .line 170
	// 1970    .end local v16    # "names":[Ljava/lang/String;
	// 1971    .end local v20    # "useMedium":Z
label_cond_71:
	useMedium = 0x0;
	//    .restart local v20    # "useMedium":Z
	goto label_goto_3a;
	// 1978    .line 171
label_cond_74:
	names = this->dr->shortNames;
	//    .restart local v16    # "names":[Ljava/lang/String;
	goto label_goto_44;
	// 1991    .line 173
label_cond_7d:
	names = this->dr->mediumNames;
	goto label_goto_54;
	// 2003    .line 183
	// 2004    .end local v16    # "names":[Ljava/lang/String;
	// 2005    .end local v20    # "useMedium":Z
label_cond_86:
	if ( cv != 0x2 )
		goto label_cond_9e;
	if ( !(this->dr->halfSupport) )  
		goto label_cond_9e;
	// switch
	{
	auto item = ( this->dr->halfSupport[px] );
	if (item == 0) goto label_pswitch_9e;
	if (item == 1) goto label_pswitch_13b;
	if (item == 2) goto label_pswitch_135;
	}
label_cond_9e:
label_goto_9e:
label_pswitch_9e:
	0x0;
	//    .local v11, "name":Ljava/lang/String;
	if ( !(multiple) )  
		goto label_cond_147;
	cVar0 = last;
label_goto_a3:
	form = this->computeForm(unit, count, cv, cVar0);
	//    .local v15, "form":I
	if ( form != 0x4 )
		goto label_cond_154;
	if ( this->dr->singularNames )     
		goto label_cond_14a;
	form = 0x1;
	name = this->dr->pluralNames[px][form];
	//    .local v11, "name":Ljava/lang/String;
label_goto_c5:
	if ( name )     
		goto label_cond_d2;
	form = 0x0;
label_cond_d2:
	if ( form == 0x4 )
		goto label_cond_d8;
	if ( form != 0x6 )
		goto label_cond_1c9;
label_cond_d8:
	//    .local v6, "omitCount":Z
label_goto_d9:
	suffixIndex = this->appendCount(unit, omitCount, useDigitPrefix, count, cv, useCountSep, name, last, sb);
	//    .local v19, "suffixIndex":I
	if ( !(last) )  
		goto label_cond_134;
	if ( suffixIndex < 0 ) 
		goto label_cond_134;
	suffix = 0x0;
	//    .local v18, "suffix":Ljava/lang/String;
	if ( !(this->dr->rqdSuffixes) )  
		goto label_cond_10e;
	if ( suffixIndex >= this->dr->rqdSuffixes->size() )
		goto label_cond_10e;
	suffix = this->dr->rqdSuffixes[suffixIndex];
	//    .end local v18    # "suffix":Ljava/lang/String;
label_cond_10e:
	if ( suffix )     
		goto label_cond_12b;
	if ( !(this->dr->optSuffixes) )  
		goto label_cond_12b;
	if ( suffixIndex >= this->dr->optSuffixes->size() )
		goto label_cond_12b;
	suffix = this->dr->optSuffixes[suffixIndex];
label_cond_12b:
	if ( !(suffix) )  
		goto label_cond_134;
	sb->append(suffix);
label_cond_134:
	return 0x0;
	// 2231    .line 187
	// 2232    .end local v6    # "omitCount":Z
	// 2233    .end local v11    # "name":Ljava/lang/String;
	// 2234    .end local v15    # "form":I
	// 2235    .end local v19    # "suffixIndex":I
label_pswitch_135:
	if ( count >  0x3e8 )
		goto label_cond_9e;
label_pswitch_13b:
	count = ( ( count / 0x1f4) * 0x1f4);
	cv = 0x3;
	goto label_goto_9e;
	// 2259    .line 199
	// 2260    .local v11, "name":Ljava/lang/String;
label_cond_147:
	cVar0 = 0x0;
	goto label_goto_a3;
	// 2266    .line 205
	// 2267    .restart local v15    # "form":I
label_cond_14a:
	name = this->dr->singularNames[px];
	//    .local v11, "name":Ljava/lang/String;
	goto label_goto_c5;
	// 2280    .line 207
	// 2281    .local v11, "name":Ljava/lang/String;
label_cond_154:
	if ( form != 0x5 )
		goto label_cond_164;
	name = this->dr->pluralNames[px][0x1];
	//    .local v11, "name":Ljava/lang/String;
	goto label_goto_c5;
	// 2303    .line 209
	// 2304    .local v11, "name":Ljava/lang/String;
label_cond_164:
	if ( form != 0x6 )
		goto label_cond_171;
	name = this->dr->halfNames[px];
	//    .local v11, "name":Ljava/lang/String;
	goto label_goto_c5;
	// 2322    .line 213
	// 2323    .local v11, "name":Ljava/lang/String;
label_cond_171:
	try {
	//label_try_start_171:
	name = this->dr->pluralNames[px][form];
	//label_try_end_17b:
	}
	catch (java::lang::NullPointerException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_17d;
	}
	//    .catch Ljava/lang/NullPointerException; {:try_start_171 .. :try_end_17b} :catch_17d
	//    .local v11, "name":Ljava/lang/String;
	goto label_goto_c5;
	// 2341    .line 214
	// 2342    .local v11, "name":Ljava/lang/String;
label_catch_17d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v14, "e":Ljava/lang/NullPointerException;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null Pointer in PeriodFormatterData[")))->append(this->localeName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("].au px: ")))->append(px)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" form: ")))->append(form)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" pn: ")))->append(java::util::Arrays::toString(this->dr->pluralNames))->toString());
	// throw
	throw;
	// 2419    .line 226
	// 2420    .end local v14    # "e":Ljava/lang/NullPointerException;
	// 2421    .local v11, "name":Ljava/lang/String;
label_cond_1c9:
	if ( !(this->dr->omitSingularCount) )  
		goto label_cond_1d4;
	if ( form == 0x1 )
		goto label_cond_d8;
label_cond_1d4:
	if ( !(this->dr->omitDualCount) )  
		goto label_cond_1e2;
	if ( form != 0x2 )
		goto label_cond_1e2;
	//    .restart local v6    # "omitCount":Z
	goto label_goto_d9;
	// 2454    .end local v6    # "omitCount":Z
label_cond_1e2:
	//    .restart local v6    # "omitCount":Z
	goto label_goto_d9;
	// 2461    .line 184
	// 2462    nop
	// 2464    :pswitch_data_1e6
	// 2465    .packed-switch 0x0
	// 2466        :pswitch_9e
	// 2467        :pswitch_13b
	// 2468        :pswitch_135
	// 2469    .end packed-switch

}
// .method public appendUnitSeparator(Landroid/icu/impl/duration/TimeUnit;ZZZLjava/lang/StringBuffer;)Z
bool android::icu::impl::duration::impl::PeriodFormatterData::appendUnitSeparator(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,bool longSep,bool afterFirst,bool beforeLast,std::shared_ptr<java::lang::StringBuffer> sb)
{
	
	bool cVar3;
	int cVar1;
	int cVar2;
	int ix;
	
	//    .param p1, "unit"    # Landroid/icu/impl/duration/TimeUnit;
	//    .param p2, "longSep"    # Z
	//    .param p3, "afterFirst"    # Z
	//    .param p4, "beforeLast"    # Z
	//    .param p5, "sb"    # Ljava/lang/StringBuffer;
	cVar3 = 0x0;
	if ( !(longSep) )  
		goto label_cond_30;
	if ( !(this->dr->unitSep) )  
		goto label_cond_30;
label_cond_9:
	if ( !(longSep) )  
		goto label_cond_3b;
	if ( !(this->dr->unitSep) )  
		goto label_cond_3b;
	if ( !(afterFirst) )  
		goto label_cond_37;
	cVar1 = 0x2;
label_goto_15:
	if ( !(beforeLast) )  
		goto label_cond_39;
	cVar2 = 0x1;
label_goto_18:
	ix = (cVar1 + cVar2);
	//    .local v0, "ix":I
	sb->append(this->dr->unitSep[ix]);
	if ( !(this->dr->unitSepRequiresDP) )  
		goto label_cond_2f;
	cVar3 = this->dr->unitSepRequiresDP[ix];
label_cond_2f:
	return cVar3;
	// 2543    .line 491
	// 2544    .end local v0    # "ix":I
label_cond_30:
	if ( this->dr->shortUnitSep )     
		goto label_cond_9;
label_goto_36:
	return cVar3;
label_cond_37:
	cVar1 = cVar3;
	goto label_goto_15;
label_cond_39:
	cVar2 = cVar3;
	goto label_goto_18;
	// 2567    .line 497
label_cond_3b:
	sb->append(this->dr->shortUnitSep);
	goto label_goto_36;

}
// .method public pluralization()I
int android::icu::impl::duration::impl::PeriodFormatterData::pluralization()
{
	
	return this->dr->pl;

}
// .method public useMilliseconds()I
int android::icu::impl::duration::impl::PeriodFormatterData::useMilliseconds()
{
	
	return this->dr->useMilliseconds;

}
// .method public weeksAloneOnly()Z
bool android::icu::impl::duration::impl::PeriodFormatterData::weeksAloneOnly()
{
	
	return this->dr->weeksAloneOnly;

}


