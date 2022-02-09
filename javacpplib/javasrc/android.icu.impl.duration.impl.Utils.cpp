// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\Utils.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.Utils_S_ChineseDigits.h"
#include "android.icu.impl.duration.impl.Utils.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"

// .method public constructor <init>()V
android::icu::impl::duration::impl::Utils::Utils()
{
	
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static chineseNumber(JLandroid/icu/impl/duration/impl/Utils$ChineseDigits;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::impl::Utils::chineseNumber(long long cVar0,std::shared_ptr<android::icu::impl::duration::impl::Utils_S_ChineseDigits> zh)
{
	
	long long cVar0;
	std::shared<std::vector<char[]>> buf;
	auto digits;
	int x;
	int i;
	int u;
	int l;
	int d;
	int last;
	int j;
	int w;
	int r;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .param p0, "n"    # J
	//    .param p2, "zh"    # Landroid/icu/impl/duration/impl/Utils$ChineseDigits;
	if ( (cVar0 > 0x0) >= 0 )
		goto label_cond_b;
	cVar0 = (0 - cVar0);
label_cond_b:
	if ( (cVar0 > 0xa) > 0 ) 
		goto label_cond_34;
	if ( (cVar0 > 0x2) )     
		goto label_cond_22;
	return java::lang::String::valueOf(zh->liang);
	// 073    .line 66
label_cond_22:
	return java::lang::String::valueOf(zh->digits[(int)(cVar0)]);
	// 095    .line 70
label_cond_34:
	buf = std::make_shared<std::vector<char[]>>(0x28);
	//    .local v4, "buf":[C
	digits = java::lang::String::valueOf(cVar0)->toCharArray();
	//    .local v6, "digits":[C
	0x1;
	//    .local v11, "inZero":Z
	0x0;
	//    .local v9, "forcedZero":Z
	x = buf->size();
	//    .local v20, "x":I
	i = digits->size();
	//    .local v10, "i":I
	u = -0x1;
	//    .local v16, "u":I
	l = -0x1;
	//    .local v13, "l":I
	u = u;
	//    .end local v16    # "u":I
	//    .local v17, "u":I
label_goto_4d:
	i = ( i + -0x1);
	if ( i < 0 ) 
		goto label_cond_d7;
	if ( u != -0x1 )
		goto label_cond_93;
	if ( l == -0x1 )
		goto label_cond_6d;
	x = ( x + -0x1);
	buf[x] = zh->levels[l];
label_cond_6d:
	u = ( u + 0x1);
	//    .end local v17    # "u":I
	//    .restart local v16    # "u":I
label_cond_6f:
label_goto_6f:
	d = ( digits[i] + -0x30);
	//    .local v5, "d":I
	if ( d )     
		goto label_cond_c9;
	if ( x >= ( buf->size() + -0x1) )
		goto label_cond_86;
	if ( !(u) )  
		goto label_cond_86;
	buf[x] = 0x2a;
label_cond_86:
	if ( 0x1 )     
		goto label_cond_8a;
	if ( !(0x0) )  
		goto label_cond_ae;
label_cond_8a:
	x = ( x + -0x1);
	buf[x] = 0x2a;
label_goto_90:
	u = u;
	//    .end local v16    # "u":I
	//    .restart local v17    # "u":I
	goto label_goto_4d;
	// 240    .line 88
	// 241    .end local v5    # "d":I
label_cond_93:
	x = ( x + -0x1);
	u = ( u + 0x1);
	//    .end local v17    # "u":I
	//    .restart local v16    # "u":I
	buf[x] = zh->units[u];
	if ( u != 0x3 )
		goto label_cond_6f;
	u = -0x1;
	l = ( l + 0x1);
	goto label_goto_6f;
	// 276    .line 102
	// 277    .restart local v5    # "d":I
label_cond_ae:
	x = ( x + -0x1);
	buf[x] = zh->digits[0x0];
	0x1;
	if ( u != 0x1 )
		goto label_cond_c7;
	0x1;
	goto label_goto_90;
label_cond_c7:
	0x0;
	goto label_goto_90;
	// 314    .line 107
label_cond_c9:
	0x0;
	x = ( x + -0x1);
	buf[x] = zh->digits[d];
	goto label_goto_90;
	// 333    .line 115
	// 334    .end local v5    # "d":I
	// 335    .end local v16    # "u":I
	// 336    .restart local v17    # "u":I
label_cond_d7:
	if ( (cVar0 > 0xf4240) <= 0 )
		goto label_cond_16d;
	last = 0x1;
	//    .local v14, "last":Z
	i = ( buf->size() + -0x3);
	//    .end local v14    # "last":Z
label_goto_e4:
	if ( buf[i] != 0x30 )
		goto label_cond_18b;
label_cond_ee:
	i = ( buf->size() + -0x7);
label_cond_f3:
	if ( buf[i] != zh->digits[0x0] )
		goto label_cond_10d;
	if ( !(( last ^ 0x1)) )  
		goto label_cond_10d;
	buf[i] = 0x2a;
label_cond_10d:
	i = ( i + -0x8);
	last = ( last ^ 0x1);
	//    .local v14, "last":Z
	if ( i >  x )
		goto label_cond_f3;
	if ( (cVar0 > 0x5f5e100) < 0 ) 
		goto label_cond_16d;
	i = ( buf->size() + -0x8);
label_cond_121:
	//    .local v8, "empty":Z
	j = ( i + -0x1);
	//    .local v12, "j":I
	//    .local v7, "e":I
label_goto_12c:
	if ( j <= java::lang::Math::max(( x + -0x1), ( i + -0x8)) )
		goto label_cond_139;
	if ( buf[j] == 0x2a )
		goto label_cond_195;
label_cond_139:
	if ( !(0x1) )  
		goto label_cond_167;
	if ( buf[( i + 0x1)] == 0x2a )
		goto label_cond_198;
	if ( buf[( i + 0x1)] == zh->digits[0x0] )
		goto label_cond_198;
	buf[i] = zh->digits[0x0];
label_cond_167:
label_goto_167:
	i = ( i + -0x8);
	if ( i >  x )
		goto label_cond_121;
	//    .end local v7    # "e":I
	//    .end local v8    # "empty":Z
	//    .end local v12    # "j":I
	//    .end local v14    # "last":Z
label_cond_16d:
	i = x;
label_goto_16f:
	if ( i >= buf->size() )
		goto label_cond_1fb;
	if ( buf[i] == zh->digits[0x2] )
		goto label_cond_19d;
label_cond_188:
label_goto_188:
	i = ( i + 0x1);
	goto label_goto_16f;
	// 570    .line 122
label_cond_18b:
	i = ( i + -0x8);
	last = ( last ^ 0x1);
	//    .restart local v14    # "last":Z
	if ( i <= x )
		goto label_cond_ee;
	goto label_goto_e4;
	// 585    .line 140
	// 586    .restart local v7    # "e":I
	// 587    .restart local v8    # "empty":Z
	// 588    .restart local v12    # "j":I
label_cond_195:
	j = ( j + -0x1);
	goto label_goto_12c;
	// 594    .line 150
label_cond_198:
	buf[i] = 0x2a;
	goto label_goto_167;
	// 602    .line 161
	// 603    .end local v7    # "e":I
	// 604    .end local v8    # "empty":Z
	// 605    .end local v12    # "j":I
	// 606    .end local v14    # "last":Z
label_cond_19d:
	if ( i >= ( buf->size() + -0x1) )
		goto label_cond_1ba;
	if ( buf[( i + 0x1)] == zh->units[0x0] )
		goto label_cond_188;
label_cond_1ba:
	if ( i <= x )
		goto label_cond_1f2;
	if ( buf[( i + -0x1)] == zh->units[0x0] )
		goto label_cond_188;
	if ( buf[( i + -0x1)] == zh->digits[0x0] )
		goto label_cond_188;
	if ( buf[( i + -0x1)] == 0x2a )
		goto label_cond_188;
label_cond_1f2:
	buf[i] = zh->liang;
	goto label_goto_188;
	// 708    .line 168
label_cond_1fb:
	if ( buf[x] != zh->digits[0x1] )
		goto label_cond_22b;
	if ( zh->ko )     
		goto label_cond_229;
	if ( buf[( x + 0x1)] != zh->units[0x0] )
		goto label_cond_22b;
label_cond_229:
	x = ( x + 0x1);
label_cond_22b:
	w = x;
	//    .local v18, "w":I
	r = x;
	//    .local v15, "r":I
label_goto_22f:
	if ( r >= buf->size() )
		goto label_cond_24b;
	if ( buf[r] == 0x2a )
		goto label_cond_248;
	//    .end local v18    # "w":I
	//    .local v19, "w":I
	buf[w] = buf[r];
	w = ( w + 0x1);
	//    .end local v19    # "w":I
	//    .restart local v18    # "w":I
label_cond_248:
	r = ( r + 0x1);
	goto label_goto_22f;
	// 808    .line 179
label_cond_24b:
	var251 = cVar1(buf, x, (w - x));
	return cVar1;

}
// .method public static final localeFromString(Ljava/lang/String;)Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::impl::duration::impl::Utils::localeFromString(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> region;
	int x;
	std::shared_ptr<java::util::Locale> cVar2;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = -0x1;
	//    .local v0, "language":Ljava/lang/String;
	region = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v1, "region":Ljava/lang/String;
	//    .local v2, "variant":Ljava/lang/String;
	x = s->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	//    .local v3, "x":I
	if ( x == cVar1 )
		goto label_cond_1c;
	region = s->substring(( x + 0x1));
label_cond_1c:
	x = region->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	if ( x == cVar1 )
		goto label_cond_2f;
label_cond_2f:
	cVar2 = std::make_shared<java::util::Locale>(s, region, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	return cVar2;

}


