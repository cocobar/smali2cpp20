// CPP L:\smali2cpp20\x64\Release\out\java\lang\CaseMapper.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator.h"
#include "java.lang.CaseMapper_S_1.h"
#include "java.lang.CaseMapper.h"
#include "java.lang.Character.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.ThreadLocal.h"
#include "java.util.Locale.h"
#include "libcore.icu.ICU.h"

static java::lang::CaseMapper::EL_UPPER;
static java::lang::CaseMapper::GREEK_CAPITAL_SIGMA = '\u03a3';
static java::lang::CaseMapper::GREEK_SMALL_FINAL_SIGMA = '\u03c2';
static java::lang::CaseMapper::LATIN_CAPITAL_I_WITH_DOT = '\u0130';
static java::lang::CaseMapper::upperValues;
static java::lang::CaseMapper::upperValues2;
// .method static constructor <clinit>()V
void java::lang::CaseMapper::static_cinit()
{
	
	std::shared_ptr<java::lang::CaseMapper_S_1> cVar0;
	
	java::lang::CaseMapper::upperValues = std::make_shared<java::lang::String>(std::make_shared<char[]>("SS\u0000\u02bcN\u0000J\u030c\u0000\u0399\u0308\u0301\u03a5\u0308\u0301\u0535\u0552\u0000H\u0331\u0000T\u0308\u0000W\u030a\u0000Y\u030a\u0000A\u02be\u0000\u03a5\u0313\u0000\u03a5\u0313\u0300\u03a5\u0313\u0301\u03a5\u0313\u0342\u1f08\u0399\u0000\u1f09\u0399\u0000\u1f0a\u0399\u0000\u1f0b\u0399\u0000\u1f0c\u0399\u0000\u1f0d\u0399\u0000\u1f0e\u0399\u0000\u1f0f\u0399\u0000\u1f08\u0399\u0000\u1f09\u0399\u0000\u1f0a\u0399\u0000\u1f0b\u0399\u0000\u1f0c\u0399\u0000\u1f0d\u0399\u0000\u1f0e\u0399\u0000\u1f0f\u0399\u0000\u1f28\u0399\u0000\u1f29\u0399\u0000\u1f2a\u0399\u0000\u1f2b\u0399\u0000\u1f2c\u0399\u0000\u1f2d\u0399\u0000\u1f2e\u0399\u0000\u1f2f\u0399\u0000\u1f28\u0399\u0000\u1f29\u0399\u0000\u1f2a\u0399\u0000\u1f2b\u0399\u0000\u1f2c\u0399\u0000\u1f2d\u0399\u0000\u1f2e\u0399\u0000\u1f2f\u0399\u0000\u1f68\u0399\u0000\u1f69\u0399\u0000\u1f6a\u0399\u0000\u1f6b\u0399\u0000\u1f6c\u0399\u0000\u1f6d\u0399\u0000\u1f6e\u0399\u0000\u1f6f\u0399\u0000\u1f68\u0399\u0000\u1f69\u0399\u0000\u1f6a\u0399\u0000\u1f6b\u0399\u0000\u1f6c\u0399\u0000\u1f6d\u0399\u0000\u1f6e\u0399\u0000\u1f6f\u0399\u0000\u1fba\u0399\u0000\u0391\u0399\u0000\u0386\u0399\u0000\u0391\u0342\u0000\u0391\u0342\u0399\u0391\u0399\u0000\u1fca\u0399\u0000\u0397\u0399\u0000\u0389\u0399\u0000\u0397\u0342\u0000\u0397\u0342\u0399\u0397\u0399\u0000\u0399\u0308\u0300\u0399\u0308\u0301\u0399\u0342\u0000\u0399\u0308\u0342\u03a5\u0308\u0300\u03a5\u0308\u0301\u03a1\u0313\u0000\u03a5\u0342\u0000\u03a5\u0308\u0342\u1ffa\u0399\u0000\u03a9\u0399\u0000\u038f\u0399\u0000\u03a9\u0342\u0000\u03a9\u0342\u0399\u03a9\u0399\u0000FF\u0000FI\u0000FL\u0000FFIFFLST\u0000ST\u0000\u0544\u0546\u0000\u0544\u0535\u0000\u0544\u053b\u0000\u054e\u0546\u0000\u0544\u053d\u0000"))->toCharArray();
	java::lang::CaseMapper::upperValues2 = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u000b\u0000\u000c\u0000\r\u0000\u000e\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u0000\u000f\u0010\u0011\u0012\u0013\u0014\u0015\u0016\u0017\u0018\u0019\u001a\u001b\u001c\u001d\u001e\u001f !\"))->toCharArray();
	cVar0 = std::make_shared<java::lang::CaseMapper_S_1>();
	java::lang::CaseMapper::EL_UPPER = cVar0;
	return;

}
// .method private constructor <init>()V
java::lang::CaseMapper::CaseMapper()
{
	
	// 076    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static isFinalSigma(Ljava/lang/String;I)Z
bool java::lang::CaseMapper::isFinalSigma(std::shared_ptr<java::lang::String> s,int index)
{
	
	bool cVar0;
	bool cVar1;
	char previous;
	int cVar2;
	char next;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "index"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( index > 0 ) 
		goto label_cond_5;
	return cVar1;
	// 098    .line 87
label_cond_5:
	previous = s->charAt(( index + -0x1));
	//    .local v1, "previous":C
	if ( java::lang::Character::isLowerCase(previous) )     
		goto label_cond_1e;
	if ( java::lang::Character::isUpperCase(previous) )     
		goto label_cond_1e;
	cVar2 = java::lang::Character::isTitleCase(previous);
label_goto_1b:
	if ( cVar2 )     
		goto label_cond_20;
	return cVar1;
label_cond_1e:
	cVar2 = cVar0;
	goto label_goto_1b;
	// 136    .line 91
label_cond_20:
	if ( ( index + 0x1) <  s->length() )
		goto label_cond_29;
	return cVar0;
	// 149    .line 94
label_cond_29:
	next = s->charAt(( index + 0x1));
	//    .local v0, "next":C
	if ( java::lang::Character::isLowerCase(next) )     
		goto label_cond_41;
	if ( java::lang::Character::isUpperCase(next) )     
		goto label_cond_41;
	if ( !(java::lang::Character::isTitleCase(next)) )  
		goto label_cond_42;
label_cond_41:
	return cVar1;
	// 181    .line 98
label_cond_42:
	return cVar0;

}
// .method public static toLowerCase(Ljava/util/Locale;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::CaseMapper::toLowerCase(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::String> cVar2)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> languageCode;
	std::shared_ptr<char[]> newValue;
	int i;
	int end;
	char ch;
	char cVar1;
	std::shared<std::vector<char[]>> newValue;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .param p1, "s"    # Ljava/lang/String;
	cVar0 = 0x0;
	languageCode = locale->getLanguage();
	//    .local v3, "languageCode":Ljava/lang/String;
	if ( languageCode->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("tr"))) )     
		goto label_cond_20;
	if ( languageCode->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("az"))) )     
		goto label_cond_20;
	if ( !(languageCode->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("lt")))) )  
		goto label_cond_25;
label_cond_20:
	return libcore::icu::ICU::toLowerCase(cVar2, locale);
	// 233    .line 53
label_cond_25:
	newValue = 0x0;
	//    .local v5, "newValue":[C
	i = 0x0;
	//    .local v2, "i":I
	end = cVar2->length();
	//    .end local v5    # "newValue":[C
	//    .local v1, "end":I
label_goto_2b:
	if ( i >= end )
		goto label_cond_5f;
	ch = cVar2->charAt(i);
	//    .local v0, "ch":C
	if ( ch == 0x130 )
		goto label_cond_3b;
	if ( !(java::lang::Character::isHighSurrogate(ch)) )  
		goto label_cond_40;
label_cond_3b:
	return libcore::icu::ICU::toLowerCase(cVar2, locale);
	// 276    .line 60
label_cond_40:
	if ( ch != 0x3a3 )
		goto label_cond_5a;
	if ( !(java::lang::CaseMapper::isFinalSigma(cVar2, i)) )  
		goto label_cond_5a;
	cVar1 = 0x3c2;
label_goto_4c:
	if ( ch == cVar1 )
		goto label_cond_57;
	if ( newValue )     
		goto label_cond_55;
	newValue = std::make_shared<std::vector<char[]>>(end);
	//    .local v5, "newValue":[C
	cVar2->getCharsNoCheck(cVar0, end, newValue, cVar0);
	//    .end local v5    # "newValue":[C
label_cond_55:
	newValue[i] = cVar1;
label_cond_57:
	i = ( i + 0x1);
	goto label_goto_2b;
	// 316    .line 63
label_cond_5a:
	cVar1 = java::lang::Character::toLowerCase(ch);
	//    .local v4, "newCh":C
	goto label_goto_4c;
	// 325    .line 73
	// 326    .end local v0    # "ch":C
	// 327    .end local v4    # "newCh":C
label_cond_5f:
	if ( !(newValue) )  
		goto label_cond_66;
	//    .end local p1    # "s":Ljava/lang/String;
	cVar2 = std::make_shared<java::lang::String>(newValue);
label_cond_66:
	return cVar2;

}
// .method public static toUpperCase(Ljava/util/Locale;Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::CaseMapper::toUpperCase(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::String> s,int count)
{
	
	std::shared_ptr<java::lang::String> languageCode;
	std::shared_ptr<android::icu::text::Transliterator> cVar0;
	std::shared_ptr<char[]> output;
	int o;
	int i;
	char ch;
	int index;
	std::shared<std::vector<char[]>> newoutput;
	int upch;
	std::shared<std::vector<char[]>> output;
	int target;
	char val3;
	int cVar1;
	std::shared_ptr<java::lang::String> cVar3;
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "count"    # I
	languageCode = locale->getLanguage();
	//    .local v6, "languageCode":Ljava/lang/String;
	if ( languageCode->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("tr"))) )     
		goto label_cond_1f;
	if ( languageCode->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("az"))) )     
		goto label_cond_1f;
	if ( !(languageCode->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("lt")))) )  
		goto label_cond_28;
label_cond_1f:
	return libcore::icu::ICU::toUpperCase(s, locale);
	// 390    .line 151
label_cond_28:
	if ( !(languageCode->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("el")))) )  
		goto label_cond_40;
	cVar0 = java::lang::CaseMapper::EL_UPPER->get();
	cVar0->checkCast("android::icu::text::Transliterator");
	return cVar0->transliterate(s);
	// 417    .line 155
label_cond_40:
	output = 0x0;
	//    .local v9, "output":[C
	//    .local v3, "i":I
	o = 0x0;
	//    .local v8, "o":I
	i = 0x0;
	//    .end local v3    # "i":I
	//    .end local v9    # "output":[C
	//    .local v4, "i":I
label_goto_44:
	if ( o >= count )
		goto label_cond_ee;
	ch = s->charAt(o);
	//    .local v2, "ch":C
	if ( !(java::lang::Character::isHighSurrogate(ch)) )  
		goto label_cond_5d;
	return libcore::icu::ICU::toUpperCase(s, locale);
	// 466    .line 162
label_cond_5d:
	index = java::lang::CaseMapper::upperIndex(ch);
	//    .local v5, "index":I
	if ( index != -0x1 )
		goto label_cond_9d;
	if ( !(output) )  
		goto label_cond_7b;
	if ( i <  output->size() )
		goto label_cond_7b;
	newoutput = std::make_shared<std::vector<char[]>>(( (output->size() +  ( count / 0x6)) + 0x2));
	//    .local v7, "newoutput":[C
	java::lang::System::arraycopy(output, 0x0, newoutput, 0x0, output->size());
	output = newoutput;
	//    .end local v7    # "newoutput":[C
label_cond_7b:
	upch = java::lang::Character::toUpperCase(ch);
	//    .local v11, "upch":C
	if ( !(output) )  
		goto label_cond_89;
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	output[i] = upch;
	//    .end local v11    # "upch":C
label_cond_85:
label_goto_85:
	o = ( o + 0x1);
	i = i;
	//    .end local v3    # "i":I
	//    .restart local v4    # "i":I
	goto label_goto_44;
	// 541    .line 172
	// 542    .restart local v11    # "upch":C
label_cond_89:
	if ( ch == upch )
		goto label_cond_10a;
	output = std::make_shared<std::vector<char[]>>(count);
	//    .local v9, "output":[C
	i = o;
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	s->getCharsNoCheck(0x0, o, output, 0x0);
	//    .end local v3    # "i":I
	//    .restart local v4    # "i":I
	output[i] = upch;
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_85;
	// 579    .line 179
	// 580    .end local v3    # "i":I
	// 581    .end local v9    # "output":[C
	// 582    .end local v11    # "upch":C
	// 583    .restart local v4    # "i":I
label_cond_9d:
	target = ( index * 0x3);
	//    .local v10, "target":I
	val3 = java::lang::CaseMapper::upperValues[( target + 0x2)];
	//    .local v13, "val3":C
	if ( output )     
		goto label_cond_d1;
	output = std::make_shared<std::vector<char[]>>(( (( count / 0x6) + count) + 0x2));
	//    .restart local v9    # "output":[C
	i = o;
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	s->getCharsNoCheck(0x0, o, output, 0x0);
	//    .end local v9    # "output":[C
label_goto_b7:
	//    .local v12, "val":C
	i = ( i + 0x1);
	//    .end local v3    # "i":I
	//    .restart local v4    # "i":I
	output[i] = java::lang::CaseMapper::upperValues[target];
	i = ( i + 0x1);
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	output[i] = java::lang::CaseMapper::upperValues[( target + 0x1)];
	if ( !(val3) )  
		goto label_cond_85;
	//    .end local v3    # "i":I
	//    .restart local v4    # "i":I
	output[i] = val3;
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_85;
	// 668    .line 185
	// 669    .end local v3    # "i":I
	// 670    .end local v12    # "val":C
	// 671    .restart local v4    # "i":I
label_cond_d1:
	if ( val3 )     
		goto label_cond_ec;
	cVar1 = 0x1;
label_goto_d4:
	if ( (cVar1 +  i) <  output->size() )
		goto label_cond_108;
	newoutput = std::make_shared<std::vector<char[]>>(( (output->size() +  ( count / 0x6)) + 0x3));
	//    .restart local v7    # "newoutput":[C
	java::lang::System::arraycopy(output, 0x0, newoutput, 0x0, output->size());
	output = newoutput;
	//    .restart local v9    # "output":[C
	i = i;
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_b7;
	// 717    .line 185
	// 718    .end local v3    # "i":I
	// 719    .end local v7    # "newoutput":[C
	// 720    .end local v9    # "output":[C
	// 721    .restart local v4    # "i":I
label_cond_ec:
	cVar1 = 0x2;
	goto label_goto_d4;
	// 727    .line 200
	// 728    .end local v2    # "ch":C
	// 729    .end local v5    # "index":I
	// 730    .end local v10    # "target":I
	// 731    .end local v13    # "val3":C
label_cond_ee:
	if ( output )     
		goto label_cond_f1;
	return s;
	// 738    .line 203
label_cond_f1:
	if ( output->size() == i )
		goto label_cond_fa;
	if ( (output->size() -  i) >= 0x8 )
		goto label_cond_101;
label_cond_fa:
	cVar3 = std::make_shared<java::lang::String>(0x0, i, output);
label_goto_100:
	return cVar3;
label_cond_101:
	cVar3 = std::make_shared<java::lang::String>(output, 0x0, i);
	goto label_goto_100;
	// 771    .restart local v2    # "ch":C
	// 772    .restart local v5    # "index":I
	// 773    .restart local v10    # "target":I
	// 774    .restart local v13    # "val3":C
label_cond_108:
	i = i;
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_b7;
	// 782    .end local v3    # "i":I
	// 783    .end local v10    # "target":I
	// 784    .end local v13    # "val3":C
	// 785    .restart local v4    # "i":I
	// 786    .restart local v11    # "upch":C
label_cond_10a:
	//    .end local v4    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_85;

}
// .method private static upperIndex(I)I
int java::lang::CaseMapper::upperIndex(int ch)
{
	
	int cVar0;
	int cVar1;
	int index;
	
	//    .param p0, "ch"    # I
	cVar0 = 0xfb13;
	cVar1 = 0xfb00;
	index = -0x1;
	//    .local v0, "index":I
	if ( ch <  0xdf )
		goto label_cond_13;
	if ( ch >  0x587 )
		goto label_cond_1f;
	// switch
	{
	auto item = ( ch );
	if (item == 0xdf) goto label_sswitch_14;
	if (item == 0x149) goto label_sswitch_15;
	if (item == 0x1f0) goto label_sswitch_17;
	if (item == 0x390) goto label_sswitch_19;
	if (item == 0x3b0) goto label_sswitch_1b;
	if (item == 0x587) goto label_sswitch_1d;
	}
label_cond_13:
label_goto_13:
	return index;
	// 828    .line 113
label_sswitch_14:
	return 0x0;
	// 832    .line 114
label_sswitch_15:
	return 0x1;
	// 838    .line 115
label_sswitch_17:
	return 0x2;
	// 844    .line 116
label_sswitch_19:
	return 0x3;
	// 850    .line 117
label_sswitch_1b:
	return 0x4;
	// 856    .line 118
label_sswitch_1d:
	return 0x5;
	// 862    .line 120
label_cond_1f:
	if ( ch <  0x1e96 )
		goto label_cond_13;
	if ( ch >  0x1e9a )
		goto label_cond_2c;
	index = ( ( ch + 0x6) + -0x1e96);
	goto label_goto_13;
	// 880    .line 123
label_cond_2c:
	if ( ch <  0x1f50 )
		goto label_cond_3e;
	if ( ch >  0x1ffc )
		goto label_cond_3e;
	index = java::lang::CaseMapper::upperValues2[( ch + -0x1f50)];
	if ( index )     
		goto label_cond_13;
	index = -0x1;
	goto label_goto_13;
	// 905    .line 128
label_cond_3e:
	if ( ch <  cVar1 )
		goto label_cond_13;
	if ( ch >  0xfb06 )
		goto label_cond_4a;
	index = (( ch + 0x5a) - cVar1);
	goto label_goto_13;
	// 921    .line 131
label_cond_4a:
	if ( ch <  cVar0 )
		goto label_cond_13;
	if ( ch >  0xfb17 )
		goto label_cond_13;
	index = (( ch + 0x61) - cVar0);
	goto label_goto_13;
	// 936    .line 112
	// 937    :sswitch_data_56
	// 938    .sparse-switch
	// 939        0xdf -> :sswitch_14
	// 940        0x149 -> :sswitch_15
	// 941        0x1f0 -> :sswitch_17
	// 942        0x390 -> :sswitch_19
	// 943        0x3b0 -> :sswitch_1b
	// 944        0x587 -> :sswitch_1d
	// 945    .end sparse-switch

}


