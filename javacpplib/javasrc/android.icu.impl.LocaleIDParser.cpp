// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleIDParser.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleIDParser_S_1.h"
#include "android.icu.impl.LocaleIDParser.h"
#include "android.icu.impl.LocaleIDs.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collections.h"
#include "java.util.Comparator.h"
#include "java.util.Iterator.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"

static android::icu::impl::LocaleIDParser::COMMA = ',';
static android::icu::impl::LocaleIDParser::DONE = '\uffff';
static android::icu::impl::LocaleIDParser::DOT = '.';
static android::icu::impl::LocaleIDParser::HYPHEN = '-';
static android::icu::impl::LocaleIDParser::ITEM_SEPARATOR = ';';
static android::icu::impl::LocaleIDParser::KEYWORD_ASSIGN = '=';
static android::icu::impl::LocaleIDParser::KEYWORD_SEPARATOR = '@';
static android::icu::impl::LocaleIDParser::UNDERSCORE = '_';
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::impl::LocaleIDParser::LocaleIDParser(std::shared_ptr<java::lang::String> localeID)
{
	
	//    .param p1, "localeID"    # Ljava/lang/String;
	android::icu::impl::LocaleIDParser::(localeID, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Z)V
android::icu::impl::LocaleIDParser::LocaleIDParser(std::shared_ptr<java::lang::String> localeID,bool canonicalize)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "localeID"    # Ljava/lang/String;
	//    .param p2, "canonicalize"    # Z
	// 072    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->id = localeID->toCharArray();
	this->index = 0x0;
	cVar0 = std::make_shared<java::lang::StringBuilder>(( this->id->size() + 0x5));
	this->buffer = cVar0;
	this->canonicalize = canonicalize;
	return;

}
// .method private addSeparator()V
void android::icu::impl::LocaleIDParser::addSeparator()
{
	
	this->append(0x5f);
	return;

}
// .method private append(C)V
void android::icu::impl::LocaleIDParser::append(char c)
{
	
	//    .param p1, "c"    # C
	this->buffer->append(c);
	return;

}
// .method private append(Ljava/lang/String;)V
void android::icu::impl::LocaleIDParser::append(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	this->buffer->append(s);
	return;

}
// .method private atTerminator()Z
bool android::icu::impl::LocaleIDParser::atTerminator()
{
	
	bool cVar0;
	
	if ( this->index >= this->id->size() )
		goto label_cond_12;
	cVar0 = this->isTerminator(this->id[this->index]);
label_goto_11:
	return cVar0;
label_cond_12:
	cVar0 = 0x1;
	goto label_goto_11;

}
// .method private getKeyComparator()Ljava/util/Comparator;
std::shared_ptr<java::util::Comparator<java::lang::String>> android::icu::impl::LocaleIDParser::getKeyComparator()
{
	
	std::shared_ptr<android::icu::impl::LocaleIDParser_S_1> comp;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 182        value = {
	// 183            "()",
	// 184            "Ljava/util/Comparator",
	// 185            "<",
	// 186            "Ljava/lang/String;",
	// 187            ">;"
	// 188        }
	// 189    .end annotation
	comp = std::make_shared<android::icu::impl::LocaleIDParser_S_1>(this);
	//    .local v0, "comp":Ljava/util/Comparator;, "Ljava/util/Comparator<Ljava/lang/String;>;"
	return comp;

}
// .method private getKeyword()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleIDParser::getKeyword()
{
	
	int start;
	std::shared_ptr<java::lang::String> cVar0;
	
	start = this->index;
	//    .local v0, "start":I
label_cond_2:
	if ( !(android::icu::impl::LocaleIDParser::isDoneOrKeywordAssign(this->next())) )  
		goto label_cond_2;
	this->index = ( this->index + -0x1);
	cVar0 = std::make_shared<java::lang::String>(this->id, start, (this->index -  start));
	return android::icu::impl::locale::AsciiUtil::toLowerString(cVar0->trim());

}
// .method private getString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleIDParser::getString(int start)
{
	
	//    .param p1, "start"    # I
	return this->buffer->substring(start);

}
// .method private getValue()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleIDParser::getValue()
{
	
	int start;
	std::shared_ptr<java::lang::String> cVar0;
	
	start = this->index;
	//    .local v0, "start":I
label_cond_2:
	if ( !(android::icu::impl::LocaleIDParser::isDoneOrItemSeparator(this->next())) )  
		goto label_cond_2;
	this->index = ( this->index + -0x1);
	cVar0 = std::make_shared<java::lang::String>(this->id, start, (this->index -  start));
	return cVar0->trim();

}
// .method private haveExperimentalLanguagePrefix()Z
bool android::icu::impl::LocaleIDParser::haveExperimentalLanguagePrefix()
{
	
	bool cVar0;
	bool cVar1;
	char c;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this->id->size() <= 0x2 )
		goto label_cond_2b;
	c = this->id[cVar0];
	//    .local v0, "c":C
	if ( c == 0x2d )
		goto label_cond_14;
	if ( c != 0x5f )
		goto label_cond_2b;
label_cond_14:
	c = this->id[cVar1];
	if ( c == 0x78 )
		goto label_cond_20;
	if ( c != 0x58 )
		goto label_cond_21;
label_cond_20:
label_goto_20:
	return cVar0;
label_cond_21:
	if ( c == 0x69 )
		goto label_cond_20;
	if ( c == 0x49 )
		goto label_cond_20;
	cVar0 = cVar1;
	goto label_goto_20;
	// 375    .line 176
	// 376    .end local v0    # "c":C
label_cond_2b:
	return cVar1;

}
// .method private haveKeywordAssign()Z
bool android::icu::impl::LocaleIDParser::haveKeywordAssign()
{
	
	int i;
	
	i = this->index;
	//    .local v0, "i":I
label_goto_2:
	if ( i >= this->id->size() )
		goto label_cond_14;
	if ( this->id[i] != 0x3d )
		goto label_cond_11;
	return 0x1;
	// 410    .line 184
label_cond_11:
	i = ( i + 0x1);
	goto label_goto_2;
	// 416    .line 189
label_cond_14:
	return 0x0;

}
// .method private static isDoneOrItemSeparator(C)Z
bool android::icu::impl::LocaleIDParser::isDoneOrItemSeparator(char c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # C
	cVar0 = 0x1;
	if ( c == 0xffff )
		goto label_cond_a;
	if ( c != 0x3b )
		goto label_cond_b;
label_cond_a:
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method private static isDoneOrKeywordAssign(C)Z
bool android::icu::impl::LocaleIDParser::isDoneOrKeywordAssign(char c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # C
	cVar0 = 0x1;
	if ( c == 0xffff )
		goto label_cond_a;
	if ( c != 0x3d )
		goto label_cond_b;
label_cond_a:
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method private isTerminator(C)Z
bool android::icu::impl::LocaleIDParser::isTerminator(char c)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # C
	cVar0 = 0x1;
	if ( c == 0x40 )
		goto label_cond_a;
	if ( c != 0xffff )
		goto label_cond_b;
label_cond_a:
label_goto_a:
	return cVar0;
label_cond_b:
	if ( c == 0x2e )
		goto label_cond_a;
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method private isTerminatorOrIDSeparator(C)Z
bool android::icu::impl::LocaleIDParser::isTerminatorOrIDSeparator(char c)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # C
	if ( c == 0x5f )
		goto label_cond_8;
	if ( c != 0x2d )
		goto label_cond_a;
label_cond_8:
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = this->isTerminator(c);
	goto label_goto_9;

}
// .method private next()C
char android::icu::impl::LocaleIDParser::next()
{
	
	int cVar0;
	
	if ( this->index != this->id->size() )
		goto label_cond_11;
	this->index = ( this->index + 0x1);
	return 0xffff;
	// 558    .line 130
label_cond_11:
	cVar0 = this->index;
	this->index = ( cVar0 + 0x1);
	return this->id[cVar0];

}
// .method private parseCountry()I
int android::icu::impl::LocaleIDParser::parseCountry()
{
	
	int cVar0;
	int oldBlen;
	int firstPass;
	char c;
	int charsAppended;
	std::shared_ptr<java::lang::String> region;
	
	cVar0 = 0x3;
	if ( this->atTerminator() )     
		goto label_cond_6c;
	//    .local v4, "oldIndex":I
	this->index = ( this->index + 0x1);
	oldBlen = this->buffer->length();
	//    .local v3, "oldBlen":I
	firstPass = 0x1;
	//    .local v2, "firstPass":Z
label_goto_17:
	c = this->next();
	//    .local v0, "c":C
	if ( this->isTerminatorOrIDSeparator(c) )     
		goto label_cond_34;
	if ( !(firstPass) )  
		goto label_cond_2c;
	this->hadCountry = 0x1;
	this->addSeparator();
	oldBlen = ( oldBlen + 0x1);
	firstPass = 0x0;
label_cond_2c:
	this->append(android::icu::impl::locale::AsciiUtil::toUpper(c));
	goto label_goto_17;
	// 651    .line 318
label_cond_34:
	this->index = ( this->index + -0x1);
	charsAppended = (this->buffer->length() - oldBlen);
	//    .local v1, "charsAppended":I
	if ( charsAppended )     
		goto label_cond_45;
label_cond_44:
label_goto_44:
	return oldBlen;
	// 677    .line 325
label_cond_45:
	if ( charsAppended <  0x2 )
		goto label_cond_4a;
	if ( charsAppended <= cVar0 )
		goto label_cond_5c;
label_cond_4a:
	this->index = this->index;
	oldBlen = ( oldBlen + -0x1);
	this->buffer->delete(oldBlen, this->buffer->length());
	this->hadCountry = 0x0;
	goto label_goto_44;
	// 708    .line 333
label_cond_5c:
	if ( charsAppended != cVar0 )
		goto label_cond_44;
	region = android::icu::impl::LocaleIDs::threeToTwoLetterRegion(this->getString(oldBlen));
	//    .local v5, "region":Ljava/lang/String;
	if ( !(region) )  
		goto label_cond_44;
	this->set(oldBlen, region);
	goto label_goto_44;
	// 730    .line 343
	// 731    .end local v0    # "c":C
	// 732    .end local v1    # "charsAppended":I
	// 733    .end local v2    # "firstPass":Z
	// 734    .end local v3    # "oldBlen":I
	// 735    .end local v4    # "oldIndex":I
	// 736    .end local v5    # "region":Ljava/lang/String;
label_cond_6c:
	return this->buffer->length();

}
// .method private parseKeywords()I
int android::icu::impl::LocaleIDParser::parseKeywords()
{
	
	int oldBlen;
	std::shared_ptr<java::util::Map> m;
	int first;
	std::shared_ptr<java::util::Iterator> e_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> e;
	char cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	
	oldBlen = this->buffer->length();
	//    .local v4, "oldBlen":I
	m = this->getKeywordMap();
	//    .local v3, "m":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	if ( m->isEmpty() )     
		goto label_cond_4c;
	first = 0x1;
	//    .local v2, "first":Z
	e_S_iterator = m->entrySet()->iterator();
	//    .local v1, "e$iterator":Ljava/util/Iterator;
label_goto_19:
	if ( !(e_S_iterator->hasNext()) )  
		goto label_cond_48;
	e = e_S_iterator->next();
	e->checkCast("java::util::Map_S_Entry");
	//    .local v0, "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	if ( !(first) )  
		goto label_cond_45;
	cVar0 = 0x40;
label_goto_29:
	this->append(cVar0);
	first = 0x0;
	cVar1 = e->getKey();
	cVar1->checkCast("java::lang::String");
	this->append(cVar1);
	this->append(0x3d);
	cVar2 = e->getValue();
	cVar2->checkCast("java::lang::String");
	this->append(cVar2);
	goto label_goto_19;
	// 836    .line 656
label_cond_45:
	cVar0 = 0x3b;
	goto label_goto_29;
	// 842    .line 662
	// 843    .end local v0    # "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_48:
	if ( first )     
		goto label_cond_4c;
	//    .end local v1    # "e$iterator":Ljava/util/Iterator;
	//    .end local v2    # "first":Z
label_cond_4c:
	return oldBlen;

}
// .method private parseLanguage()I
int android::icu::impl::LocaleIDParser::parseLanguage()
{
	
	int cVar0;
	char c;
	std::shared_ptr<java::lang::String> lang;
	
	cVar0 = 0x0;
	//    .local v2, "startLength":I
	if ( !(this->haveExperimentalLanguagePrefix()) )  
		goto label_cond_20;
	this->append(android::icu::impl::locale::AsciiUtil::toLower(this->id[cVar0]));
	this->append(0x2d);
	this->index = 0x2;
label_cond_20:
label_goto_20:
	c = this->next();
	//    .local v0, "c":C
	if ( this->isTerminatorOrIDSeparator(c) )     
		goto label_cond_32;
	this->append(android::icu::impl::locale::AsciiUtil::toLower(c));
	goto label_goto_20;
	// 922    .line 210
label_cond_32:
	this->index = ( this->index + -0x1);
	if ( (this->buffer->length() -  this->buffer->length()) != 0x3 )
		goto label_cond_4f;
	lang = android::icu::impl::LocaleIDs::threeToTwoLetterLanguage(this->getString(cVar0));
	//    .local v1, "lang":Ljava/lang/String;
	if ( !(lang) )  
		goto label_cond_4f;
	this->set(cVar0, lang);
	//    .end local v1    # "lang":Ljava/lang/String;
label_cond_4f:
	return cVar0;

}
// .method private parseScript()I
int android::icu::impl::LocaleIDParser::parseScript()
{
	
	int oldIndex;
	int oldBlen;
	int firstPass;
	char c;
	
	if ( this->atTerminator() )     
		goto label_cond_58;
	oldIndex = this->index;
	//    .local v3, "oldIndex":I
	this->index = ( this->index + 0x1);
	oldBlen = this->buffer->length();
	//    .local v2, "oldBlen":I
	firstPass = 0x1;
	//    .local v1, "firstPass":Z
label_goto_15:
	c = this->next();
	//    .local v0, "c":C
	if ( this->isTerminatorOrIDSeparator(c) )     
		goto label_cond_3b;
	if ( !(android::icu::impl::locale::AsciiUtil::isAlpha(c)) )  
		goto label_cond_3b;
	if ( !(firstPass) )  
		goto label_cond_33;
	this->addSeparator();
	this->append(android::icu::impl::locale::AsciiUtil::toUpper(c));
	firstPass = 0x0;
	goto label_goto_15;
	// 1036    .line 256
label_cond_33:
	this->append(android::icu::impl::locale::AsciiUtil::toLower(c));
	goto label_goto_15;
	// 1046    .line 259
label_cond_3b:
	this->index = ( this->index + -0x1);
	if ( (this->index -  oldIndex) == 0x5 )
		goto label_cond_55;
	this->index = oldIndex;
	this->buffer->delete(oldBlen, this->buffer->length());
label_goto_54:
	return oldBlen;
	// 1081    .line 266
label_cond_55:
	oldBlen = ( oldBlen + 0x1);
	goto label_goto_54;
	// 1087    .line 271
	// 1088    .end local v0    # "c":C
	// 1089    .end local v1    # "firstPass":Z
	// 1090    .end local v2    # "oldBlen":I
	// 1091    .end local v3    # "oldIndex":I
label_cond_58:
	return this->buffer->length();

}
// .method private parseVariant()I
int android::icu::impl::LocaleIDParser::parseVariant()
{
	
	int cVar0;
	int oldBlen;
	int start;
	int needSeparator;
	int firstPass;
	char c;
	
	cVar0 = 0x2d;
	oldBlen = this->buffer->length();
	//    .local v3, "oldBlen":I
	start = 0x1;
	//    .local v5, "start":Z
	needSeparator = 0x1;
	//    .local v2, "needSeparator":Z
	//    .local v4, "skipping":Z
	firstPass = 0x1;
	//    .local v1, "firstPass":Z
label_cond_c:
label_goto_c:
	c = this->next();
	//    .local v0, "c":C
	if ( c == 0xffff )
		goto label_cond_26;
	if ( c != 0x2e )
		goto label_cond_1c;
	0x0;
	0x1;
	goto label_goto_c;
	// 1157    .line 407
label_cond_1c:
	if ( c != 0x40 )
		goto label_cond_31;
	if ( !(this->haveKeywordAssign()) )  
		goto label_cond_2d;
label_cond_26:
	this->index = ( this->index + -0x1);
	return oldBlen;
	// 1181    .line 411
label_cond_2d:
	0x0;
	0x0;
	0x1;
	goto label_goto_c;
	// 1193    .line 414
label_cond_31:
	if ( !(start) )  
		goto label_cond_41;
	start = 0x0;
	if ( c == 0x5f )
		goto label_cond_c;
	if ( c == cVar0 )
		goto label_cond_c;
	this->index = ( this->index + -0x1);
	goto label_goto_c;
	// 1216    .line 419
label_cond_41:
	if ( 0x0 )     
		goto label_cond_c;
	if ( !(needSeparator) )  
		goto label_cond_5b;
	needSeparator = 0x0;
	if ( !(firstPass) )  
		goto label_cond_53;
	if ( !(( this->hadCountry ^ 0x1)) )  
		goto label_cond_53;
	this->addSeparator();
	oldBlen = ( oldBlen + 0x1);
label_cond_53:
	this->addSeparator();
	if ( !(firstPass) )  
		goto label_cond_5b;
	oldBlen = ( oldBlen + 0x1);
	firstPass = 0x0;
label_cond_5b:
	c = android::icu::impl::locale::AsciiUtil::toUpper(c);
	if ( c == cVar0 )
		goto label_cond_65;
	if ( c != 0x2c )
		goto label_cond_67;
label_cond_65:
	//    .end local v0    # "c":C
label_cond_67:
	this->append(c);
	goto label_goto_c;

}
// .method private reset()V
void android::icu::impl::LocaleIDParser::reset()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	this->index = 0x0;
	cVar0 = std::make_shared<java::lang::StringBuilder>(( this->id->size() + 0x5));
	this->buffer = cVar0;
	return;

}
// .method private set(ILjava/lang/String;)V
void android::icu::impl::LocaleIDParser::set(int pos,std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "pos"    # I
	//    .param p2, "s"    # Ljava/lang/String;
	this->buffer->delete(pos, this->buffer->length());
	this->buffer->insert(pos, s);
	return;

}
// .method private setKeywordValue(Ljava/lang/String;Ljava/lang/String;Z)V
void android::icu::impl::LocaleIDParser::setKeywordValue(std::shared_ptr<java::lang::String> keywordName,std::shared_ptr<java::lang::String> cVar2,bool reset)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::util::Map> m;
	std::shared_ptr<java::util::TreeMap> cVar4;
	
	//    .param p1, "keywordName"    # Ljava/lang/String;
	//    .param p2, "value"    # Ljava/lang/String;
	//    .param p3, "reset"    # Z
	if ( keywordName )     
		goto label_cond_b;
	if ( !(reset) )  
		goto label_cond_a;
	this->keywords = java::util::Collections::emptyMap({const[class].FS-Param});
label_cond_a:
label_goto_a:
	return;
	// 1356    .line 716
label_cond_b:
	cVar0 = android::icu::impl::locale::AsciiUtil::toLowerString(keywordName->trim());
	if ( cVar0->length() )     
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("keyword must not be empty")));
	// throw
	throw cVar1;
	// 1382    .line 720
label_cond_22:
	if ( !(cVar2) )  
		goto label_cond_37;
	cVar2 = cVar2->trim();
	if ( cVar2->length() )     
		goto label_cond_37;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("value must not be empty")));
	// throw
	throw cVar3;
	// 1407    .line 726
label_cond_37:
	m = this->getKeywordMap();
	//    .local v0, "m":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	if ( !(m->isEmpty()) )  
		goto label_cond_58;
	if ( !(cVar2) )  
		goto label_cond_a;
	cVar4 = std::make_shared<java::util::TreeMap>(this->getKeyComparator());
	this->keywords = cVar4;
	this->keywords->put(cVar0, cVar2->trim());
	goto label_goto_a;
	// 1446    .line 734
label_cond_58:
	if ( reset )     
		goto label_cond_62;
	if ( !(( m->containsKey(cVar0) ^ 0x1)) )  
		goto label_cond_a;
label_cond_62:
	if ( !(cVar2) )  
		goto label_cond_68;
	m->put(cVar0, cVar2);
	goto label_goto_a;
	// 1467    .line 738
label_cond_68:
	m->remove(cVar0);
	if ( !(m->isEmpty()) )  
		goto label_cond_a;
	this->keywords = java::util::Collections::emptyMap({const[class].FS-Param});
	goto label_goto_a;

}
// .method private setToKeywordStart()Z
bool android::icu::impl::LocaleIDParser::setToKeywordStart()
{
	
	bool cVar0;
	int i;
	int j;
	
	cVar0 = 0x1;
	i = this->index;
	//    .local v0, "i":I
label_goto_3:
	if ( i >= this->id->size() )
		goto label_cond_37;
	if ( this->id[i] != 0x40 )
		goto label_cond_34;
	if ( !(this->canonicalize) )  
		goto label_cond_2a;
	i = ( i + 0x1);
	j = i;
	//    .local v1, "j":I
label_goto_17:
	if ( j >= this->id->size() )
		goto label_cond_37;
	if ( this->id[j] != 0x3d )
		goto label_cond_27;
	this->index = i;
	return cVar0;
	// 1547    .line 552
label_cond_27:
	j = ( j + 0x1);
	goto label_goto_17;
	// 1553    .line 559
	// 1554    .end local v1    # "j":I
label_cond_2a:
	i = ( i + 0x1);
	if ( i >= this->id->size() )
		goto label_cond_37;
	this->index = i;
	return cVar0;
	// 1570    .line 549
label_cond_34:
	i = ( i + 0x1);
	goto label_goto_3;
	// 1576    .line 567
label_cond_37:
	return 0x0;

}
// .method private skipCountry()V
void android::icu::impl::LocaleIDParser::skipCountry()
{
	
	int oldIndex;
	int charsSkipped;
	
	if ( this->atTerminator() )     
		goto label_cond_31;
	if ( this->id[this->index] == 0x5f )
		goto label_cond_1a;
	if ( this->id[this->index] != 0x2d )
		goto label_cond_20;
label_cond_1a:
	this->index = ( this->index + 0x1);
label_cond_20:
	oldIndex = this->index;
	//    .local v1, "oldIndex":I
	this->skipUntilTerminatorOrIDSeparator();
	charsSkipped = (this->index - oldIndex);
	//    .local v0, "charsSkipped":I
	if ( charsSkipped <  0x2 )
		goto label_cond_2f;
	if ( charsSkipped <= 0x3 )
		goto label_cond_31;
label_cond_2f:
	this->index = oldIndex;
	//    .end local v0    # "charsSkipped":I
	//    .end local v1    # "oldIndex":I
label_cond_31:
	return;

}
// .method private skipLanguage()V
void android::icu::impl::LocaleIDParser::skipLanguage()
{
	
	if ( !(this->haveExperimentalLanguagePrefix()) )  
		goto label_cond_9;
	this->index = 0x2;
label_cond_9:
	this->skipUntilTerminatorOrIDSeparator();
	return;

}
// .method private skipScript()V
void android::icu::impl::LocaleIDParser::skipScript()
{
	
	int oldIndex;
	char c;
	
	if ( this->atTerminator() )     
		goto label_cond_2c;
	oldIndex = this->index;
	//    .local v1, "oldIndex":I
	this->index = ( this->index + 0x1);
label_cond_e:
	c = this->next();
	//    .local v0, "c":C
	if ( this->isTerminatorOrIDSeparator(c) )     
		goto label_cond_1e;
	if ( android::icu::impl::locale::AsciiUtil::isAlpha(c) )     
		goto label_cond_e;
label_cond_1e:
	this->index = ( this->index + -0x1);
	if ( (this->index -  oldIndex) == 0x5 )
		goto label_cond_2c;
	this->index = oldIndex;
	//    .end local v0    # "c":C
	//    .end local v1    # "oldIndex":I
label_cond_2c:
	return;

}
// .method private skipUntilTerminatorOrIDSeparator()V
void android::icu::impl::LocaleIDParser::skipUntilTerminatorOrIDSeparator()
{
	
label_cond_0:
	if ( !(this->isTerminatorOrIDSeparator(this->next())) )  
		goto label_cond_0;
	this->index = ( this->index + -0x1);
	return;

}
// .method public defaultKeywordValue(Ljava/lang/String;Ljava/lang/String;)V
void android::icu::impl::LocaleIDParser::defaultKeywordValue(std::shared_ptr<java::lang::String> keywordName,std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "keywordName"    # Ljava/lang/String;
	//    .param p2, "value"    # Ljava/lang/String;
	this->setKeywordValue(keywordName, value, 0x0);
	return;

}
// .method public getBaseName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleIDParser::getBaseName()
{
	
	if ( !(this->baseName) )  
		goto label_cond_7;
	return this->baseName;
	// 1807    .line 528
label_cond_7:
	this->parseBaseName();
	return this->getString(0x0);

}
// .method public getCountry()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleIDParser::getCountry()
{
	
	this->reset();
	this->skipLanguage();
	this->skipScript();
	return this->getString(this->parseCountry());

}
// .method public getKeywordMap()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::impl::LocaleIDParser::getKeywordMap()
{
	
	std::shared_ptr<java::util::Map> m;
	std::shared_ptr<java::lang::String> key;
	int c;
	std::shared_ptr<java::lang::String> value;
	std::shared_ptr<java::util::TreeMap> m;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1849        value = {
	// 1850            "()",
	// 1851            "Ljava/util/Map",
	// 1852            "<",
	// 1853            "Ljava/lang/String;",
	// 1854            "Ljava/lang/String;",
	// 1855            ">;"
	// 1856        }
	// 1857    .end annotation
	if ( this->keywords )     
		goto label_cond_19;
	m = 0x0;
	//    .local v2, "m":Ljava/util/TreeMap;, "Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;"
	if ( !(this->setToKeywordStart()) )  
		goto label_cond_15;
	//    .end local v2    # "m":Ljava/util/TreeMap;, "Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;"
label_goto_b:
	key = this->getKeyword();
	//    .local v1, "key":Ljava/lang/String;
	if ( key->length() )     
		goto label_cond_1c;
	//    .end local v1    # "key":Ljava/lang/String;
label_cond_15:
	if ( !(m) )  
		goto label_cond_52;
label_goto_17:
	this->keywords = m;
label_cond_19:
	return this->keywords;
	// 1905    .line 617
	// 1906    .restart local v1    # "key":Ljava/lang/String;
label_cond_1c:
	c = this->next();
	//    .local v0, "c":C
	if ( c == 0x3d )
		goto label_cond_32;
	if ( c == 0xffff )
		goto label_cond_15;
label_cond_29:
label_goto_29:
	if ( this->next() != 0x3b )
		goto label_cond_15;
	goto label_goto_b;
	// 1936    .line 626
label_cond_32:
	value = this->getValue();
	//    .local v3, "value":Ljava/lang/String;
	if ( !(value->length()) )  
		goto label_cond_29;
	if ( m )     
		goto label_cond_4b;
	m = std::make_shared<java::util::TreeMap>(this->getKeyComparator());
label_cond_47:
	m->put(key, value);
	goto label_goto_29;
	// 1968    .line 633
label_cond_4b:
	if ( !(m->containsKey(key)) )  
		goto label_cond_47;
	goto label_goto_29;
	// 1978    .line 640
	// 1979    .end local v0    # "c":C
	// 1980    .end local v1    # "key":Ljava/lang/String;
	// 1981    .end local v3    # "value":Ljava/lang/String;
label_cond_52:
	m = java::util::Collections::emptyMap({const[class].FS-Param});
	goto label_goto_17;

}
// .method public getKeywordValue(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleIDParser::getKeywordValue(std::shared_ptr<java::lang::String> keywordName)
{
	
	std::shared_ptr<java::util::Map> m;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "keywordName"    # Ljava/lang/String;
	m = this->getKeywordMap();
	//    .local v0, "m":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	if ( !(m->isEmpty()) )  
		goto label_cond_c;
	cVar0 = 0x0;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = m->get(android::icu::impl::locale::AsciiUtil::toLowerString(keywordName->trim()));
	cVar0->checkCast("java::lang::String");
	goto label_goto_b;

}
// .method public getKeywords()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<java::lang::String>> android::icu::impl::LocaleIDParser::getKeywords()
{
	
	std::shared_ptr<java::util::Map> m;
	std::shared_ptr<java::util::Iterator> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2034        value = {
	// 2035            "()",
	// 2036            "Ljava/util/Iterator",
	// 2037            "<",
	// 2038            "Ljava/lang/String;",
	// 2039            ">;"
	// 2040        }
	// 2041    .end annotation
	m = this->getKeywordMap();
	//    .local v0, "m":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	if ( !(m->isEmpty()) )  
		goto label_cond_c;
	cVar0 = 0x0;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = m->keySet()->iterator();
	goto label_goto_b;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleIDParser::getLanguage()
{
	
	this->reset();
	return this->getString(this->parseLanguage());

}
// .method public getLanguageScriptCountryVariant()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleIDParser::getLanguageScriptCountryVariant()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	this->reset();
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar0[0x0] = this->getString(this->parseLanguage());
	cVar0[0x1] = this->getString(this->parseScript());
	cVar0[0x2] = this->getString(this->parseCountry());
	cVar0[0x3] = this->getString(this->parseVariant());
	return cVar0;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleIDParser::getName()
{
	
	this->parseBaseName();
	this->parseKeywords();
	return this->getString(0x0);

}
// .method public getScript()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleIDParser::getScript()
{
	
	this->reset();
	this->skipLanguage();
	return this->getString(this->parseScript());

}
// .method public getVariant()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleIDParser::getVariant()
{
	
	this->reset();
	this->skipLanguage();
	this->skipScript();
	this->skipCountry();
	return this->getString(this->parseVariant());

}
// .method public parseBaseName()V
void android::icu::impl::LocaleIDParser::parseBaseName()
{
	
	int len;
	
	if ( !(this->baseName) )  
		goto label_cond_b;
	this->set(0x0, this->baseName);
label_cond_a:
label_goto_a:
	return;
	// 2252    .line 506
label_cond_b:
	this->reset();
	this->parseLanguage();
	this->parseScript();
	this->parseCountry();
	this->parseVariant();
	len = this->buffer->length();
	//    .local v0, "len":I
	if ( len <= 0 )
		goto label_cond_a;
	if ( this->buffer->charAt(( len + -0x1)) != 0x5f )
		goto label_cond_a;
	this->buffer->deleteCharAt(( len + -0x1));
	goto label_goto_a;

}
// .method public setBaseName(Ljava/lang/String;)V
void android::icu::impl::LocaleIDParser::setBaseName(std::shared_ptr<java::lang::String> baseName)
{
	
	//    .param p1, "baseName"    # Ljava/lang/String;
	this->baseName = baseName;
	return;

}
// .method public setKeywordValue(Ljava/lang/String;Ljava/lang/String;)V
void android::icu::impl::LocaleIDParser::setKeywordValue(std::shared_ptr<java::lang::String> keywordName,std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "keywordName"    # Ljava/lang/String;
	//    .param p2, "value"    # Ljava/lang/String;
	this->setKeywordValue(keywordName, value, 0x1);
	return;

}


