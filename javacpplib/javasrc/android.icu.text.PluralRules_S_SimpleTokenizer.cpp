// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$SimpleTokenizer.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_SimpleTokenizer.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.ArrayList.h"

static android::icu::text::PluralRules_S_SimpleTokenizer::BREAK_AND_IGNORE;
static android::icu::text::PluralRules_S_SimpleTokenizer::BREAK_AND_KEEP;
// .method static constructor <clinit>()V
void android::icu::text::PluralRules_S_SimpleTokenizer::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar5;
	std::shared<std::vector<int[]>> cVar6;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar7;
	std::shared<std::vector<int[]>> cVar8;
	
	cVar0 = 0x2e;
	cVar1 = 0x2c;
	cVar2 = 0x25;
	cVar3 = 0x21;
	cVar4 = 0x6;
	cVar6 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar5 = std::make_shared<android::icu::text::UnicodeSet>(cVar6);
	android::icu::text::PluralRules_S_SimpleTokenizer::BREAK_AND_IGNORE = cVar5->freeze();
	cVar8 = std::make_shared<std::vector<int[]>>(0xa);
	cVar8[0x0] = cVar3;
	cVar8[0x1] = cVar3;
	cVar8[0x2] = cVar2;
	cVar8[0x3] = cVar2;
	cVar8[0x4] = cVar1;
	cVar8[0x5] = cVar1;
	cVar8[cVar4] = cVar0;
	cVar8[0x7] = cVar0;
	cVar8[0x8] = 0x3d;
	cVar8[0x9] = 0x3d;
	cVar7 = std::make_shared<android::icu::text::UnicodeSet>(cVar8);
	android::icu::text::PluralRules_S_SimpleTokenizer::BREAK_AND_KEEP = cVar7->freeze();
	return;
	// 113    .line 1165
	// 114    :array_4c
	// 115    .array-data 4
	// 116        0x9
	// 117        0xa
	// 118        0xc
	// 119        0xd
	// 120        0x20
	// 121        0x20
	// 122    .end array-data

}
// .method constructor <init>()V
android::icu::text::PluralRules_S_SimpleTokenizer::PluralRules_S_SimpleTokenizer()
{
	
	// 130    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static split(Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules_S_SimpleTokenizer::split(std::shared_ptr<java::lang::String> source)
{
	
	int last;
	std::shared_ptr<java::util::ArrayList> result;
	int i;
	int ch;
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p0, "source"    # Ljava/lang/String;
	last = -0x1;
	//    .local v2, "last":I
	result = std::make_shared<java::util::ArrayList>();
	//    .local v3, "result":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	i = 0x0;
	//    .local v1, "i":I
label_goto_7:
	if ( i >= source->length() )
		goto label_cond_46;
	ch = source->charAt(i);
	//    .local v0, "ch":C
	if ( !(android::icu::text::PluralRules_S_SimpleTokenizer::BREAK_AND_IGNORE->contains(ch)) )  
		goto label_cond_26;
	if ( last < 0 ) 
		goto label_cond_23;
	result->add(source->substring(last, i));
	last = -0x1;
label_cond_23:
label_goto_23:
	i = ( i + 0x1);
	goto label_goto_7;
	// 196    .line 1177
label_cond_26:
	if ( !(android::icu::text::PluralRules_S_SimpleTokenizer::BREAK_AND_KEEP->contains(ch)) )  
		goto label_cond_42;
	if ( last < 0 ) 
		goto label_cond_37;
	result->add(source->substring(last, i));
label_cond_37:
	result->add(source->substring(i, ( i + 0x1)));
	last = -0x1;
	goto label_goto_23;
	// 231    .line 1183
label_cond_42:
	if ( last >= 0 )
		goto label_cond_23;
	last = i;
	goto label_goto_23;
	// 240    .line 1187
	// 241    .end local v0    # "ch":C
label_cond_46:
	if ( last < 0 ) 
		goto label_cond_4f;
	result->add(source->substring(last));
label_cond_4f:
	cVar0 = result->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(result->size()));
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}


