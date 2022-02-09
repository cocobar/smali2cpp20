// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnescapeTransliterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnescapeTransliterator_S_1.h"
#include "android.icu.text.UnescapeTransliterator_S_2.h"
#include "android.icu.text.UnescapeTransliterator_S_3.h"
#include "android.icu.text.UnescapeTransliterator_S_4.h"
#include "android.icu.text.UnescapeTransliterator_S_5.h"
#include "android.icu.text.UnescapeTransliterator_S_6.h"
#include "android.icu.text.UnescapeTransliterator_S_7.h"
#include "android.icu.text.UnescapeTransliterator.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::UnescapeTransliterator::END = '\uffff';
// .method constructor <init>(Ljava/lang/String;[C)V
android::icu::text::UnescapeTransliterator::UnescapeTransliterator(std::shared_ptr<java::lang::String> ID,std::shared_ptr<char[]> spec)
{
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "spec"    # [C
	android::icu::text::Transliterator::(ID, 0x0);
	this->spec = spec;
	return;

}
// .method static register()V
void android::icu::text::UnescapeTransliterator::register()
{
	
	std::shared_ptr<android::icu::text::UnescapeTransliterator_S_1> cVar0;
	std::shared_ptr<android::icu::text::UnescapeTransliterator_S_2> cVar1;
	std::shared_ptr<android::icu::text::UnescapeTransliterator_S_3> cVar2;
	std::shared_ptr<android::icu::text::UnescapeTransliterator_S_4> cVar3;
	std::shared_ptr<android::icu::text::UnescapeTransliterator_S_5> cVar4;
	std::shared_ptr<android::icu::text::UnescapeTransliterator_S_6> cVar5;
	std::shared_ptr<android::icu::text::UnescapeTransliterator_S_7> cVar6;
	
	cVar0 = std::make_shared<android::icu::text::UnescapeTransliterator_S_1>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Hex-Any/Unicode")), cVar0);
	cVar1 = std::make_shared<android::icu::text::UnescapeTransliterator_S_2>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Hex-Any/Java")), cVar1);
	cVar2 = std::make_shared<android::icu::text::UnescapeTransliterator_S_3>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Hex-Any/C")), cVar2);
	cVar3 = std::make_shared<android::icu::text::UnescapeTransliterator_S_4>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Hex-Any/XML")), cVar3);
	cVar4 = std::make_shared<android::icu::text::UnescapeTransliterator_S_5>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Hex-Any/XML10")), cVar4);
	cVar5 = std::make_shared<android::icu::text::UnescapeTransliterator_S_6>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Hex-Any/Perl")), cVar5);
	cVar6 = std::make_shared<android::icu::text::UnescapeTransliterator_S_7>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Hex-Any")), cVar6);
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::UnescapeTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> items;
	std::shared_ptr<java::lang::StringBuilder> buffer;
	int i;
	int end;
	int radix;
	int j;
	
	//    .param p1, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	cVar0 = 0x0;
	//    .local v5, "myFilter":Landroid/icu/text/UnicodeSet;
	items = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v3, "items":Landroid/icu/text/UnicodeSet;
	buffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buffer":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v2, "i":I
label_goto_10:
	if ( this->spec[i] == 0xffff )
		goto label_cond_46;
	end = ( ((this->spec[i] +  i) +  this->spec[( i + 0x1)]) + 0x5);
	//    .local v1, "end":I
	radix = this->spec[( i + 0x2)];
	//    .local v6, "radix":I
	j = 0x0;
	//    .local v4, "j":I
label_goto_2e:
	if ( j >= radix )
		goto label_cond_36;
	android::icu::impl::Utility::appendNumber(buffer, j, radix, cVar0);
	j = ( j + 0x1);
	goto label_goto_2e;
	// 187    .line 283
label_cond_36:
	j = ( i + 0x5);
label_goto_38:
	if ( j >= end )
		goto label_cond_44;
	items->add(this->spec[j]);
	j = ( j + 0x1);
	goto label_goto_38;
	// 206    .line 287
label_cond_44:
	i = end;
	goto label_goto_10;
	// 212    .line 289
	// 213    .end local v1    # "end":I
	// 214    .end local v4    # "j":I
	// 215    .end local v6    # "radix":I
label_cond_46:
	items->addAll(buffer->toString());
	items->retainAll(this->getFilterAsUnicodeSet(inputFilter));
	if ( items->size() <= 0 )
		goto label_cond_5f;
	sourceSet->addAll(items);
	targetSet->addAll(cVar0, 0x10ffff);
label_cond_5f:
	return;

}
// .method protected handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::UnescapeTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos,bool isIncremental)
{
	
	int start;
	int limit;
	int ipat;
	char prefixLen;
	char suffixLen;
	char radix;
	int s;
	int match;
	int i;
	int u;
	int digitCount;
	std::shared_ptr<java::lang::String> str;
	int ch;
	int digit;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "pos"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "isIncremental"    # Z
	start = pos->start;
	//    .local v19, "start":I
	limit = pos->limit;
	//    .local v11, "limit":I
label_cond_a:
label_goto_a:
	if ( start >= limit )
		goto label_cond_62;
	ipat = 0x0;
	//    .local v9, "ipat":I
label_goto_f:
	if ( this->spec[ipat] == 0xffff )
		goto label_cond_ce;
	ipat = ( ipat + 0x1);
	//    .end local v9    # "ipat":I
	//    .local v10, "ipat":I
	prefixLen = this->spec[ipat];
	//    .local v15, "prefixLen":I
	ipat = ( ipat + 0x1);
	//    .end local v10    # "ipat":I
	//    .restart local v9    # "ipat":I
	suffixLen = this->spec[ipat];
	//    .local v21, "suffixLen":I
	ipat = ( ipat + 0x1);
	//    .end local v9    # "ipat":I
	//    .restart local v10    # "ipat":I
	radix = this->spec[ipat];
	//    .local v16, "radix":I
	ipat = ( ipat + 0x1);
	//    .end local v10    # "ipat":I
	//    .restart local v9    # "ipat":I
	//    .local v14, "minDigits":I
	ipat = ( ipat + 0x1);
	//    .end local v9    # "ipat":I
	//    .restart local v10    # "ipat":I
	//    .local v13, "maxDigits":I
	s = start;
	//    .local v17, "s":I
	match = 0x1;
	//    .local v12, "match":Z
	i = 0x0;
	//    .local v8, "i":I
	s = s;
	//    .end local v17    # "s":I
	//    .local v18, "s":I
label_goto_58:
	if ( i >= prefixLen )
		goto label_cond_152;
	if ( s <  limit )
		goto label_cond_e2;
	if ( i <= 0 )
		goto label_cond_e2;
	if ( !(isIncremental) )  
		goto label_cond_83;
	//    .end local v8    # "i":I
	//    .end local v10    # "ipat":I
	//    .end local v12    # "match":Z
	//    .end local v13    # "maxDigits":I
	//    .end local v14    # "minDigits":I
	//    .end local v15    # "prefixLen":I
	//    .end local v16    # "radix":I
	//    .end local v18    # "s":I
	//    .end local v21    # "suffixLen":I
label_cond_62:
	pos->contextLimit = (pos->contextLimit + (limit - pos->limit));
	pos->limit = limit;
	pos->start = start;
	return;
	// 443    .line 184
	// 444    .restart local v8    # "i":I
	// 445    .restart local v10    # "ipat":I
	// 446    .restart local v12    # "match":Z
	// 447    .restart local v13    # "maxDigits":I
	// 448    .restart local v14    # "minDigits":I
	// 449    .restart local v15    # "prefixLen":I
	// 450    .restart local v16    # "radix":I
	// 451    .restart local v18    # "s":I
	// 452    .restart local v21    # "suffixLen":I
label_cond_83:
	match = 0x0;
	s = s;
	//    .end local v18    # "s":I
	//    .restart local v17    # "s":I
label_goto_86:
	if ( !(match) )  
		goto label_cond_148;
	u = 0x0;
	//    .local v22, "u":I
	digitCount = 0x0;
	//    .local v7, "digitCount":I
label_cond_8b:
	if ( s <  limit )
		goto label_cond_102;
	if ( s <= start )
		goto label_cond_97;
	if ( isIncremental )     
		goto label_cond_62;
label_cond_97:
label_goto_97:
	if ( digitCount <  this->spec[ipat] )
		goto label_cond_122;
	match = 0x1;
label_goto_9a:
	if ( !(match) )  
		goto label_cond_148;
	i = 0x0;
	s = s;
	//    .end local v17    # "s":I
	//    .restart local v18    # "s":I
label_goto_9f:
	if ( i >= suffixLen )
		goto label_cond_14e;
	if ( s <  limit )
		goto label_cond_125;
	if ( s <= start )
		goto label_cond_af;
	if ( isIncremental )     
		goto label_cond_62;
label_cond_af:
	match = 0x0;
	s = s;
	//    .end local v18    # "s":I
	//    .restart local v17    # "s":I
label_goto_b2:
	if ( !(match) )  
		goto label_cond_148;
	str = android::icu::text::UTF16::valueOf(u);
	//    .local v20, "str":Ljava/lang/String;
	text->replace(start, s, str);
	limit = (limit - ((s - start) - str->length()));
	ipat;
	//    .end local v7    # "digitCount":I
	//    .end local v8    # "i":I
	//    .end local v10    # "ipat":I
	//    .end local v12    # "match":Z
	//    .end local v13    # "maxDigits":I
	//    .end local v14    # "minDigits":I
	//    .end local v15    # "prefixLen":I
	//    .end local v16    # "radix":I
	//    .end local v17    # "s":I
	//    .end local v20    # "str":Ljava/lang/String;
	//    .end local v21    # "suffixLen":I
	//    .end local v22    # "u":I
	//    .restart local v9    # "ipat":I
label_cond_ce:
	if ( start >= limit )
		goto label_cond_a;
	start = (start + android::icu::text::UTF16::getCharCount(text->char32At(start)));
	goto label_goto_a;
	// 602    .line 188
	// 603    .end local v9    # "ipat":I
	// 604    .restart local v8    # "i":I
	// 605    .restart local v10    # "ipat":I
	// 606    .restart local v12    # "match":Z
	// 607    .restart local v13    # "maxDigits":I
	// 608    .restart local v14    # "minDigits":I
	// 609    .restart local v15    # "prefixLen":I
	// 610    .restart local v16    # "radix":I
	// 611    .restart local v18    # "s":I
	// 612    .restart local v21    # "suffixLen":I
label_cond_e2:
	s = ( s + 0x1);
	//    .end local v18    # "s":I
	//    .restart local v17    # "s":I
	//    .local v4, "c":C
	if ( text->charAt(s) == this->spec[(ipat + i)] )
		goto label_cond_fc;
	match = 0x0;
	goto label_goto_86;
	// 648    .line 174
label_cond_fc:
	i = ( i + 0x1);
	s = s;
	//    .end local v17    # "s":I
	//    .restart local v18    # "s":I
	goto label_goto_58;
	// 658    .line 206
	// 659    .end local v4    # "c":C
	// 660    .end local v18    # "s":I
	// 661    .restart local v7    # "digitCount":I
	// 662    .restart local v17    # "s":I
	// 663    .restart local v22    # "u":I
label_cond_102:
	ch = text->char32At(s);
	//    .local v5, "ch":I
	digit = android::icu::lang::UCharacter::digit(ch, radix);
	//    .local v6, "digit":I
	if ( digit < 0 ) 
		goto label_cond_97;
	s = (s + android::icu::text::UTF16::getCharCount(ch));
	u = ((u * radix) + digit);
	digitCount = ( digitCount + 0x1);
	if ( digitCount != this->spec[ipat] )
		goto label_cond_8b;
	goto label_goto_97;
	// 704    .line 218
	// 705    .end local v5    # "ch":I
	// 706    .end local v6    # "digit":I
label_cond_122:
	match = 0x0;
	goto label_goto_9a;
	// 712    .line 230
	// 713    .end local v17    # "s":I
	// 714    .restart local v18    # "s":I
label_cond_125:
	s = ( s + 0x1);
	//    .end local v18    # "s":I
	//    .restart local v17    # "s":I
	//    .restart local v4    # "c":C
	if ( text->charAt(s) == this->spec[((ipat + prefixLen) + i)] )
		goto label_cond_142;
	match = 0x0;
	goto label_goto_b2;
	// 752    .line 221
label_cond_142:
	i = ( i + 0x1);
	s = s;
	//    .end local v17    # "s":I
	//    .restart local v18    # "s":I
	goto label_goto_9f;
	// 762    .line 251
	// 763    .end local v4    # "c":C
	// 764    .end local v7    # "digitCount":I
	// 765    .end local v18    # "s":I
	// 766    .end local v22    # "u":I
	// 767    .restart local v17    # "s":I
label_cond_148:
	ipat = (ipat + (prefixLen + suffixLen));
	//    .end local v10    # "ipat":I
	//    .restart local v9    # "ipat":I
	goto label_goto_f;
	// 777    .end local v9    # "ipat":I
	// 778    .end local v17    # "s":I
	// 779    .restart local v7    # "digitCount":I
	// 780    .restart local v10    # "ipat":I
	// 781    .restart local v18    # "s":I
	// 782    .restart local v22    # "u":I
label_cond_14e:
	s = s;
	//    .end local v18    # "s":I
	//    .restart local v17    # "s":I
	goto label_goto_b2;
	// 790    .end local v7    # "digitCount":I
	// 791    .end local v17    # "s":I
	// 792    .end local v22    # "u":I
	// 793    .restart local v18    # "s":I
label_cond_152:
	s = s;
	//    .end local v18    # "s":I
	//    .restart local v17    # "s":I
	goto label_goto_86;

}


