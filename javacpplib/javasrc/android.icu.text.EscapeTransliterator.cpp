// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\EscapeTransliterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.EscapeTransliterator_S_1.h"
#include "android.icu.text.EscapeTransliterator_S_2.h"
#include "android.icu.text.EscapeTransliterator_S_3.h"
#include "android.icu.text.EscapeTransliterator_S_4.h"
#include "android.icu.text.EscapeTransliterator_S_5.h"
#include "android.icu.text.EscapeTransliterator_S_6.h"
#include "android.icu.text.EscapeTransliterator_S_7.h"
#include "android.icu.text.EscapeTransliterator_S_8.h"
#include "android.icu.text.EscapeTransliterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZLandroid/icu/text/EscapeTransliterator;)V
android::icu::text::EscapeTransliterator::EscapeTransliterator(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::lang::String> suffix,int radix,int minDigits,bool grokSupplementals,std::shared_ptr<android::icu::text::EscapeTransliterator> supplementalHandler)
{
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "prefix"    # Ljava/lang/String;
	//    .param p3, "suffix"    # Ljava/lang/String;
	//    .param p4, "radix"    # I
	//    .param p5, "minDigits"    # I
	//    .param p6, "grokSupplementals"    # Z
	//    .param p7, "supplementalHandler"    # Landroid/icu/text/EscapeTransliterator;
	android::icu::text::Transliterator::(ID, 0x0);
	this->prefix = prefix;
	this->suffix = suffix;
	this->radix = radix;
	this->minDigits = minDigits;
	this->grokSupplementals = grokSupplementals;
	this->supplementalHandler = supplementalHandler;
	return;

}
// .method static register()V
void android::icu::text::EscapeTransliterator::register()
{
	
	std::shared_ptr<android::icu::text::EscapeTransliterator_S_1> cVar0;
	std::shared_ptr<android::icu::text::EscapeTransliterator_S_2> cVar1;
	std::shared_ptr<android::icu::text::EscapeTransliterator_S_3> cVar2;
	std::shared_ptr<android::icu::text::EscapeTransliterator_S_4> cVar3;
	std::shared_ptr<android::icu::text::EscapeTransliterator_S_5> cVar4;
	std::shared_ptr<android::icu::text::EscapeTransliterator_S_6> cVar5;
	std::shared_ptr<android::icu::text::EscapeTransliterator_S_7> cVar6;
	std::shared_ptr<android::icu::text::EscapeTransliterator_S_8> cVar7;
	
	cVar0 = std::make_shared<android::icu::text::EscapeTransliterator_S_1>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Hex/Unicode")), cVar0);
	cVar1 = std::make_shared<android::icu::text::EscapeTransliterator_S_2>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Hex/Java")), cVar1);
	cVar2 = std::make_shared<android::icu::text::EscapeTransliterator_S_3>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Hex/C")), cVar2);
	cVar3 = std::make_shared<android::icu::text::EscapeTransliterator_S_4>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Hex/XML")), cVar3);
	cVar4 = std::make_shared<android::icu::text::EscapeTransliterator_S_5>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Hex/XML10")), cVar4);
	cVar5 = std::make_shared<android::icu::text::EscapeTransliterator_S_6>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Hex/Perl")), cVar5);
	cVar6 = std::make_shared<android::icu::text::EscapeTransliterator_S_7>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Hex/Plain")), cVar6);
	cVar7 = std::make_shared<android::icu::text::EscapeTransliterator_S_8>();
	android::icu::text::Transliterator::registerFactory(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Hex")), cVar7);
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::EscapeTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	std::shared_ptr<java::lang::String> it;
	std::shared_ptr<java::lang::StringBuilder> buffer;
	int i;
	std::shared_ptr<android::icu::text::EscapeTransliterator> it;
	
	//    .param p1, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	sourceSet->addAll(this->getFilterAsUnicodeSet(inputFilter));
	it = this;
	//    .local v2, "it":Landroid/icu/text/EscapeTransliterator;
label_goto_8:
	if ( !(it) )  
		goto label_cond_38;
	if ( !(inputFilter->size()) )  
		goto label_cond_35;
	targetSet->addAll(it->prefix);
	targetSet->addAll(it->suffix);
	buffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buffer":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v1, "i":I
label_goto_20:
	if ( i >= it->radix )
		goto label_cond_2e;
	android::icu::impl::Utility::appendNumber(buffer, i, it->radix, it->minDigits);
	i = ( i + 0x1);
	goto label_goto_20;
	// 206    .line 235
label_cond_2e:
	targetSet->addAll(buffer->toString());
	//    .end local v0    # "buffer":Ljava/lang/StringBuilder;
	//    .end local v1    # "i":I
label_cond_35:
	it = it->supplementalHandler;
	goto label_goto_8;
	// 222    .line 238
label_cond_38:
	return;

}
// .method protected handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::EscapeTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos,bool incremental)
{
	
	int cVar0;
	int start;
	int limit;
	std::shared_ptr<java::lang::StringBuilder> buf;
	int redoPrefix;
	int c;
	int charLen;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "pos"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "incremental"    # Z
	cVar0 = 0x0;
	start = pos->start;
	//    .local v6, "start":I
	limit = pos->limit;
	//    .local v3, "limit":I
	buf = std::make_shared<java::lang::StringBuilder>(this->prefix);
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	//    .local v4, "prefixLen":I
	redoPrefix = 0x0;
	//    .local v5, "redoPrefix":Z
label_goto_13:
	if ( start >= limit )
		goto label_cond_83;
	if ( !(this->grokSupplementals) )  
		goto label_cond_60;
	c = text->char32At(start);
	//    .local v1, "c":I
label_goto_1d:
	if ( !(this->grokSupplementals) )  
		goto label_cond_65;
	charLen = android::icu::text::UTF16::getCharCount(c);
	//    .local v2, "charLen":I
label_goto_25:
	if ( !((-0x10000 &  c)) )  
		goto label_cond_67;
	if ( !(this->supplementalHandler) )  
		goto label_cond_67;
	buf->setLength(cVar0);
	buf->append(this->supplementalHandler->prefix);
	android::icu::impl::Utility::appendNumber(buf, c, this->supplementalHandler->radix, this->supplementalHandler->minDigits);
	buf->append(this->supplementalHandler->suffix);
	0x1;
label_goto_4b:
	text->replace(start, (start + charLen), buf->toString());
	start = (start +  buf->length());
	limit = (limit +  (buf->length() -  charLen));
	goto label_goto_13;
	// 362    .line 189
	// 363    .end local v1    # "c":I
	// 364    .end local v2    # "charLen":I
label_cond_60:
	c = text->charAt(start);
	//    .restart local v1    # "c":I
	goto label_goto_1d;
	// 373    .line 190
label_cond_65:
	charLen = 0x1;
	//    .restart local v2    # "charLen":I
	goto label_goto_25;
	// 380    .line 200
label_cond_67:
	if ( !(redoPrefix) )  
		goto label_cond_7f;
	buf->setLength(cVar0);
	buf->append(this->prefix);
	redoPrefix = 0x0;
label_goto_72:
	android::icu::impl::Utility::appendNumber(buf, c, this->radix, this->minDigits);
	buf->append(this->suffix);
	goto label_goto_4b;
	// 410    .line 205
label_cond_7f:
	buf->setLength(this->prefix->length());
	goto label_goto_72;
	// 416    .line 216
	// 417    .end local v1    # "c":I
	// 418    .end local v2    # "charLen":I
label_cond_83:
	pos->contextLimit = (pos->contextLimit +  (limit - pos->limit));
	pos->limit = limit;
	pos->start = start;
	return;

}


