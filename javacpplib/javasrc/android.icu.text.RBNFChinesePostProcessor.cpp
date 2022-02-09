// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBNFChinesePostProcessor.smali
#include "java2ctype.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.RBNFChinesePostProcessor.h"
#include "android.icu.text.RuleBasedNumberFormat.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::RBNFChinesePostProcessor::rulesetNames;
// .method static constructor <clinit>()V
void android::icu::text::RBNFChinesePostProcessor::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("%traditional"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("%simplified"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("%accounting"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("%time"));
	android::icu::text::RBNFChinesePostProcessor::rulesetNames = cVar0;
	return;

}
// .method constructor <init>()V
android::icu::text::RBNFChinesePostProcessor::RBNFChinesePostProcessor()
{
	
	// 066    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public init(Landroid/icu/text/RuleBasedNumberFormat;Ljava/lang/String;)V
void android::icu::text::RBNFChinesePostProcessor::init(std::shared_ptr<android::icu::text::RuleBasedNumberFormat> formatter,std::shared_ptr<java::lang::String> rules)
{
	
	//    .param p1, "formatter"    # Landroid/icu/text/RuleBasedNumberFormat;
	//    .param p2, "rules"    # Ljava/lang/String;
	return;

}
// .method public process(Ljava/lang/StringBuilder;Landroid/icu/text/NFRuleSet;)V
void android::icu::text::RBNFChinesePostProcessor::process(std::shared_ptr<java::lang::StringBuilder> buf,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet)
{
	
	int i;
	bool cVar0;
	std::shared<std::vector<std::vector<std::vector<java::lang::String>>>> markers;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar2;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar3;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar4;
	auto m;
	int n;
	int x;
	int s;
	std::shared_ptr<java::lang::String> ling;
	int m;
	int nn;
	int ns;
	std::shared_ptr<java::lang::IllegalStateException> cVar5;
	int c;
	
	//    .param p1, "buf"    # Ljava/lang/StringBuilder;
	//    .param p2, "ruleSet"    # Landroid/icu/text/NFRuleSet;
	//    .local v9, "name":Ljava/lang/String;
	i = 0x0;
	//    .local v3, "i":I
label_goto_5:
	if ( i >= android::icu::text::RBNFChinesePostProcessor::rulesetNames->size() )
		goto label_cond_23;
	if ( !(android::icu::text::RBNFChinesePostProcessor::rulesetNames[i]->equals(ruleSet->getName())) )  
		goto label_cond_48;
	this->format = i;
	if ( i == 0x1 )
		goto label_cond_1e;
	if ( i != 0x3 )
		goto label_cond_46;
label_cond_1e:
	cVar0 = 0x1;
label_goto_1f:
	this->longForm = cVar0;
label_cond_23:
	if ( !(this->longForm) )  
		goto label_cond_4c;
	i = buf->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("*")));
label_goto_32:
	if ( i == -0x1 )
		goto label_cond_4b;
	buf->delete(i, ( i + 0x1));
	i = buf->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("*")), i);
	goto label_goto_32;
	// 179    .line 45
label_cond_46:
	cVar0 = 0x0;
	goto label_goto_1f;
	// 185    .line 42
label_cond_48:
	i = ( i + 0x1);
	goto label_goto_5;
	// 191    .line 55
label_cond_4b:
	return;
	// 195    .line 58
label_cond_4c:
	std::make_shared<java::lang::String>(std::make_shared<char[]>("\u9ede"));
	//    .local v1, "DIAN":Ljava/lang/String;
	markers = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(0x3);
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar2[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u842c"));
	cVar2[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u5104"));
	cVar2[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u5146"));
	cVar2[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u3007"));
	markers[0x0] = cVar2;
	cVar3 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar3[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u4e07"));
	cVar3[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u4ebf"));
	cVar3[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u5146"));
	cVar3[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u3007"));
	markers[0x1] = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar4[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u842c"));
	cVar4[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u5104"));
	cVar4[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u5146"));
	cVar4[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u96f6"));
	markers[0x2] = cVar4;
	//    .local v7, "markers":[[Ljava/lang/String;
	m = markers[this->format];
	//    .local v6, "m":[Ljava/lang/String;
	i = 0x0;
label_goto_bf:
	if ( i >= ( m->size() + -0x1) )
		goto label_cond_e0;
	n = buf->indexOf(m[i]);
	//    .local v8, "n":I
	if ( n == -0x1 )
		goto label_cond_dd;
	buf->insert((m[i]->length() +  n), 0x7c);
label_cond_dd:
	i = ( i + 0x1);
	goto label_goto_bf;
	// 359    .line 93
	// 360    .end local v8    # "n":I
label_cond_e0:
	x = buf->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u9ede")));
	//    .local v13, "x":I
	if ( x != -0x1 )
		goto label_cond_f0;
	x = buf->length();
label_cond_f0:
	s = 0x0;
	//    .local v12, "s":I
	n = -0x1;
	//    .restart local v8    # "n":I
	ling = markers[this->format][0x3];
	//    .local v4, "ling":Ljava/lang/String;
label_goto_fb:
	if ( x < 0 ) 
		goto label_cond_16d;
	m = buf->lastIndexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("|")), x);
	//    .local v5, "m":I
	nn = buf->lastIndexOf(ling, x);
	//    .local v10, "nn":I
	ns = 0x0;
	//    .local v11, "ns":I
	if ( nn <= m )
		goto label_cond_11e;
	if ( nn <= 0 )
		goto label_cond_12c;
	if ( buf->charAt(( nn + -0x1)) == 0x2a )
		goto label_cond_12c;
	ns = 0x2;
label_cond_11e:
label_goto_11e:
	x = ( m + -0x1);
	// switch
	{
	auto item = ( (( s * 0x3) +  ns) );
	if (item == 0) goto label_pswitch_12e;
	if (item == 1) goto label_pswitch_131;
	if (item == 2) goto label_pswitch_134;
	if (item == 3) goto label_pswitch_137;
	if (item == 4) goto label_pswitch_13a;
	if (item == 5) goto label_pswitch_149;
	if (item == 6) goto label_pswitch_158;
	if (item == 7) goto label_pswitch_15b;
	if (item == 8) goto label_pswitch_16a;
	}
	cVar5 = std::make_shared<java::lang::IllegalStateException>();
	// throw
	throw cVar5;
	// 467    .line 105
label_cond_12c:
	ns = 0x1;
	goto label_goto_11e;
	// 473    .line 112
label_pswitch_12e:
	s = ns;
	-0x1;
	goto label_goto_fb;
	// 483    .line 116
label_pswitch_131:
	s = ns;
	nn;
	goto label_goto_fb;
	// 493    .line 120
label_pswitch_134:
	s = ns;
	-0x1;
	goto label_goto_fb;
	// 503    .line 124
label_pswitch_137:
	s = ns;
	-0x1;
	goto label_goto_fb;
	// 513    .line 128
label_pswitch_13a:
	buf->delete(( nn + -0x1), (ling->length() +  nn));
	s = 0x0;
	-0x1;
	goto label_goto_fb;
	// 536    .line 133
label_pswitch_149:
	buf->delete(( n + -0x1), (ling->length() +  n));
	s = ns;
	n = -0x1;
	goto label_goto_fb;
	// 559    .line 138
label_pswitch_158:
	s = ns;
	-0x1;
	goto label_goto_fb;
	// 569    .line 142
label_pswitch_15b:
	buf->delete(( nn + -0x1), (ling->length() +  nn));
	s = 0x0;
	-0x1;
	goto label_goto_fb;
	// 592    .line 147
label_pswitch_16a:
	s = ns;
	-0x1;
	goto label_goto_fb;
	// 602    .line 155
	// 603    .end local v5    # "m":I
	// 604    .end local v10    # "nn":I
	// 605    .end local v11    # "ns":I
label_cond_16d:
	i = buf->length();
label_cond_171:
label_goto_171:
	i = ( i + -0x1);
	if ( i < 0 ) 
		goto label_cond_18b;
	c = buf->charAt(i);
	//    .local v2, "c":C
	if ( c == 0x2a )
		goto label_cond_183;
	if ( c != 0x7c )
		goto label_cond_171;
label_cond_183:
	buf->delete(i, ( i + 0x1));
	goto label_goto_171;
	// 644    .line 161
	// 645    .end local v2    # "c":C
label_cond_18b:
	return;
	// 649    .line 110
	// 650    :pswitch_data_18c
	// 651    .packed-switch 0x0
	// 652        :pswitch_12e
	// 653        :pswitch_131
	// 654        :pswitch_134
	// 655        :pswitch_137
	// 656        :pswitch_13a
	// 657        :pswitch_149
	// 658        :pswitch_158
	// 659        :pswitch_15b
	// 660        :pswitch_16a
	// 661    .end packed-switch

}


