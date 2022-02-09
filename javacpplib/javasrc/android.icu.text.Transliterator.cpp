// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Transliterator.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.AnyTransliterator.h"
#include "android.icu.text.BreakTransliterator.h"
#include "android.icu.text.CaseFoldTransliterator.h"
#include "android.icu.text.CompoundTransliterator.h"
#include "android.icu.text.EscapeTransliterator.h"
#include "android.icu.text.LowercaseTransliterator.h"
#include "android.icu.text.NameUnicodeTransliterator.h"
#include "android.icu.text.NormalizationTransliterator.h"
#include "android.icu.text.NullTransliterator.h"
#include "android.icu.text.RemoveTransliterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.ReplaceableString.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.RuleBasedTransliterator.h"
#include "android.icu.text.TitlecaseTransliterator.h"
#include "android.icu.text.Transliterator_S_Factory.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.TransliteratorIDParser.h"
#include "android.icu.text.TransliteratorParser.h"
#include "android.icu.text.TransliteratorRegistry.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnescapeTransliterator.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeNameTransliterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.text.UppercaseTransliterator.h"
#include "android.icu.util.CaseInsensitiveString.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Class.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Math.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.MessageFormat.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.Enumeration.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"

static android::icu::text::Transliterator::DEBUG = false;
static android::icu::text::Transliterator::FORWARD = 0x0;
static android::icu::text::Transliterator::ID_DELIM = ';';
static android::icu::text::Transliterator::ID_SEP = '-';
static android::icu::text::Transliterator::RB_DISPLAY_NAME_PATTERN = std::make_shared<java::lang::String>("TransliteratorNamePattern");
static android::icu::text::Transliterator::RB_DISPLAY_NAME_PREFIX = std::make_shared<java::lang::String>("%Translit%%");
static android::icu::text::Transliterator::RB_RULE_BASED_IDS = std::make_shared<java::lang::String>("RuleBasedTransliteratorIDs");
static android::icu::text::Transliterator::RB_SCRIPT_DISPLAY_NAME_PREFIX = std::make_shared<java::lang::String>("%Translit%");
static android::icu::text::Transliterator::REVERSE = 0x1;
static android::icu::text::Transliterator::ROOT = std::make_shared<java::lang::String>("root");
static android::icu::text::Transliterator::VARIANT_SEP = '/';
static android::icu::text::Transliterator::displayNameCache;
static android::icu::text::Transliterator::registry;
// .method static constructor <clinit>()V
void android::icu::text::Transliterator::static_cinit()
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::TransliteratorRegistry> cVar1;
	std::shared_ptr<java::util::HashMap> cVar2;
	std::shared_ptr<android::icu::util::UResourceBundle> transIDs;
	int row;
	std::shared_ptr<android::icu::util::UResourceBundle> colBund;
	std::shared_ptr<java::lang::String> ID;
	std::shared_ptr<android::icu::util::UResourceBundle> res;
	std::shared_ptr<java::lang::String> type;
	std::shared_ptr<java::lang::String> direction;
	std::shared_ptr<java::lang::RuntimeException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::RuntimeException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::text::TransliteratorRegistry>();
	android::icu::text::Transliterator::registry = cVar1;
	cVar2 = std::make_shared<java::util::HashMap>();
	android::icu::text::Transliterator::displayNameCache = java::util::Collections::synchronizedMap(cVar2);
	//    .local v1, "bundle":Landroid/icu/util/UResourceBundle;
	transIDs = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/translit")), std::make_shared<java::lang::String>(std::make_shared<char[]>("root")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("RuleBasedTransliteratorIDs")));
	//    .local v9, "transIDs":Landroid/icu/util/UResourceBundle;
	//    .local v5, "maxRows":I
	row = 0x0;
	//    .local v8, "row":I
label_goto_29:
	if ( row >= transIDs->getSize() )
		goto label_cond_c8;
	colBund = transIDs->get(row);
	//    .local v2, "colBund":Landroid/icu/util/UResourceBundle;
	ID = colBund->getKey();
	//    .local v0, "ID":Ljava/lang/String;
	if ( ID->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("-t-"))) < 0 ) 
		goto label_cond_3f;
label_goto_3c:
	row = ( row + 0x1);
	goto label_goto_29;
	// 147    .line 1881
label_cond_3f:
	res = colBund->get(cVar0);
	//    .local v6, "res":Landroid/icu/util/UResourceBundle;
	type = res->getKey();
	//    .local v10, "type":Ljava/lang/String;
	if ( type->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("file"))) )     
		goto label_cond_59;
	if ( !(type->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("internal")))) )  
		goto label_cond_9a;
label_cond_59:
	//    .local v7, "resString":Ljava/lang/String;
	direction = res->getString(std::make_shared<java::lang::String>(std::make_shared<char[]>("direction")));
	//    .local v4, "direction":Ljava/lang/String;
	// switch
	{
	auto item = ( direction->charAt(cVar0) );
	if (item == 0x46) goto label_sswitch_88;
	if (item == 0x52) goto label_sswitch_98;
	}
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::RuntimeException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t parse direction: ")))->append(direction)->toString());
	// throw
	throw cVar3;
	// 226    .line 1891
label_sswitch_88:
	//    .local v3, "dir":I
label_goto_89:
	android::icu::text::Transliterator::registry->put(ID, res->getString(std::make_shared<java::lang::String>(std::make_shared<char[]>("resource"))), dir, ( type->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("internal"))) ^ 0x1));
	goto label_goto_3c;
	// 249    .line 1894
	// 250    .end local v3    # "dir":I
label_sswitch_98:
	//    .restart local v3    # "dir":I
	goto label_goto_89;
	// 258    .line 1903
	// 259    .end local v3    # "dir":I
	// 260    .end local v4    # "direction":Ljava/lang/String;
	// 261    .end local v7    # "resString":Ljava/lang/String;
label_cond_9a:
	if ( !(type->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("alias")))) )  
		goto label_cond_ae;
	//    .restart local v7    # "resString":Ljava/lang/String;
	android::icu::text::Transliterator::registry->put(ID, res->getString(), 0x1);
	goto label_goto_3c;
	// 286    .line 1909
	// 287    .end local v7    # "resString":Ljava/lang/String;
label_cond_ae:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::RuntimeException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknow type: ")))->append(type)->toString());
	// throw
	throw cVar5;
	// 313    .line 1913
	// 314    .end local v0    # "ID":Ljava/lang/String;
	// 315    .end local v2    # "colBund":Landroid/icu/util/UResourceBundle;
	// 316    .end local v6    # "res":Landroid/icu/util/UResourceBundle;
	// 317    .end local v10    # "type":Ljava/lang/String;
label_cond_c8:
	android::icu::text::Transliterator::registerSpecialInverse(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Null")), cVar0);
	android::icu::text::Transliterator::registerClass(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Null")), android::icu::text::NullTransliterator(), 0x0);
	android::icu::text::RemoveTransliterator::register({const[class].FS-Param});
	android::icu::text::EscapeTransliterator::register({const[class].FS-Param});
	android::icu::text::UnescapeTransliterator::register({const[class].FS-Param});
	android::icu::text::LowercaseTransliterator::register({const[class].FS-Param});
	android::icu::text::UppercaseTransliterator::register({const[class].FS-Param});
	android::icu::text::TitlecaseTransliterator::register({const[class].FS-Param});
	android::icu::text::CaseFoldTransliterator::register({const[class].FS-Param});
	android::icu::text::UnicodeNameTransliterator::register({const[class].FS-Param});
	android::icu::text::NameUnicodeTransliterator::register({const[class].FS-Param});
	android::icu::text::NormalizationTransliterator::register({const[class].FS-Param});
	android::icu::text::BreakTransliterator::register({const[class].FS-Param});
	android::icu::text::AnyTransliterator::register({const[class].FS-Param});
	return;
	// 375    .line 1889
	// 376    nop
	// 378    :sswitch_data_100
	// 379    .sparse-switch
	// 380        0x46 -> :sswitch_88
	// 381        0x52 -> :sswitch_98
	// 382    .end sparse-switch

}
// .method protected constructor <init>(Ljava/lang/String;Landroid/icu/text/UnicodeFilter;)V
android::icu::text::Transliterator::Transliterator(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::UnicodeFilter> filter)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "filter"    # Landroid/icu/text/UnicodeFilter;
	// 392    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->maximumContextLength = 0x0;
	if ( ID )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 409    .line 495
label_cond_e:
	this->ID = ID;
	this->setFilter(filter);
	return;

}
// .method public static final createFromRules(Ljava/lang/String;Ljava/lang/String;I)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::Transliterator::createFromRules(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::String> rules,int dir)
{
	
	std::shared_ptr<android::icu::text::TransliteratorParser> parser;
	std::shared_ptr<android::icu::text::NullTransliterator> t;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator> t;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<android::icu::text::Transliterator> t;
	std::shared_ptr<java::lang::String> cVar3;
	std::shared_ptr<java::util::ArrayList> transliterators;
	int i;
	int passNumber;
	std::shared_ptr<java::lang::String> idBlock;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> data;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<android::icu::text::CompoundTransliterator> t;
	
	//    .param p0, "ID"    # Ljava/lang/String;
	//    .param p1, "rules"    # Ljava/lang/String;
	//    .param p2, "dir"    # I
	0x0;
	//    .local v7, "t":Landroid/icu/text/Transliterator;
	parser = std::make_shared<android::icu::text::TransliteratorParser>();
	//    .local v4, "parser":Landroid/icu/text/TransliteratorParser;
	parser->parse(rules, dir);
	if ( parser->idBlockVector->size() )     
		goto label_cond_1f;
	if ( parser->dataVector->size() )     
		goto label_cond_1f;
	//    .end local v7    # "t":Landroid/icu/text/Transliterator;
	t = std::make_shared<android::icu::text::NullTransliterator>();
	//    .local v7, "t":Landroid/icu/text/Transliterator;
label_cond_1e:
label_goto_1e:
	return t;
	// 469    .line 1389
	// 470    .local v7, "t":Landroid/icu/text/Transliterator;
label_cond_1f:
	if ( parser->idBlockVector->size() )     
		goto label_cond_41;
	if ( parser->dataVector->size() != 0x1 )
		goto label_cond_41;
	//    .end local v7    # "t":Landroid/icu/text/Transliterator;
	cVar0 = parser->dataVector->get(0x0);
	cVar0->checkCast("android::icu::text::RuleBasedTransliterator_S_Data");
	t = std::make_shared<android::icu::text::RuleBasedTransliterator>(ID, cVar0, parser->compoundFilter);
	//    .local v7, "t":Landroid/icu/text/Transliterator;
	goto label_goto_1e;
	// 512    .line 1392
	// 513    .local v7, "t":Landroid/icu/text/Transliterator;
label_cond_41:
	if ( parser->idBlockVector->size() != 0x1 )
		goto label_cond_96;
	if ( parser->dataVector->size() )     
		goto label_cond_96;
	if ( !(parser->compoundFilter) )  
		goto label_cond_88;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = parser->idBlockVector->get(0x0);
	cVar2->checkCast("java::lang::String");
	t = android::icu::text::Transliterator::getInstance(cVar1->append(parser->compoundFilter->toPattern(0x0))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")))->append(cVar2)->toString());
	//    .local v7, "t":Landroid/icu/text/Transliterator;
label_goto_82:
	if ( !(t) )  
		goto label_cond_1e;
	t->setID(ID);
	goto label_goto_1e;
	// 595    .line 1401
	// 596    .local v7, "t":Landroid/icu/text/Transliterator;
label_cond_88:
	cVar3 = parser->idBlockVector->get(0x0);
	cVar3->checkCast("java::lang::String");
	t = android::icu::text::Transliterator::getInstance(cVar3);
	//    .local v7, "t":Landroid/icu/text/Transliterator;
	goto label_goto_82;
	// 615    .line 1409
	// 616    .local v7, "t":Landroid/icu/text/Transliterator;
label_cond_96:
	transliterators = std::make_shared<java::util::ArrayList>();
	//    .local v9, "transliterators":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/Transliterator;>;"
	//    .local v5, "passNumber":I
	//    .local v3, "limit":I
	i = 0x0;
	//    .local v1, "i":I
	passNumber = 0x1;
	//    .end local v5    # "passNumber":I
	//    .local v6, "passNumber":I
label_goto_ae:
	if ( i >= java::lang::Math::max(parser->idBlockVector->size(), parser->dataVector->size()) )
		goto label_cond_108;
	if ( i >= parser->idBlockVector->size() )
		goto label_cond_d5;
	idBlock = parser->idBlockVector->get(i);
	idBlock->checkCast("java::lang::String");
	//    .local v2, "idBlock":Ljava/lang/String;
	if ( idBlock->length() <= 0 )
		goto label_cond_d5;
	//    .local v8, "temp":Landroid/icu/text/Transliterator;
	if ( android::icu::text::Transliterator::getInstance(idBlock)->instanceOf("android::icu::text::NullTransliterator") )     
		goto label_cond_d5;
	transliterators->add(android::icu::text::Transliterator::getInstance(idBlock));
	//    .end local v2    # "idBlock":Ljava/lang/String;
	//    .end local v8    # "temp":Landroid/icu/text/Transliterator;
label_cond_d5:
	if ( i >= parser->dataVector->size() )
		goto label_cond_11d;
	data = parser->dataVector->get(i);
	data->checkCast("android::icu::text::RuleBasedTransliterator_S_Data");
	//    .local v0, "data":Landroid/icu/text/RuleBasedTransliterator$Data;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	//    .end local v6    # "passNumber":I
	//    .restart local v5    # "passNumber":I
	cVar4 = std::make_shared<android::icu::text::RuleBasedTransliterator>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("%Pass")))->append(passNumber)->toString(), data, 0x0);
	transliterators->add(cVar4);
	//    .end local v0    # "data":Landroid/icu/text/RuleBasedTransliterator$Data;
label_goto_104:
	i = ( i + 0x1);
	passNumber = passNumber;
	//    .end local v5    # "passNumber":I
	//    .restart local v6    # "passNumber":I
	goto label_goto_ae;
	// 764    .line 1428
label_cond_108:
	//    .end local v7    # "t":Landroid/icu/text/Transliterator;
	t = std::make_shared<android::icu::text::CompoundTransliterator>(transliterators, ( passNumber + -0x1));
	//    .local v7, "t":Landroid/icu/text/Transliterator;
	t->setID(ID);
	if ( !(parser->compoundFilter) )  
		goto label_cond_1e;
	t->setFilter(parser->compoundFilter);
	goto label_goto_1e;
	// 789    .local v7, "t":Landroid/icu/text/Transliterator;
label_cond_11d:
	//    .end local v6    # "passNumber":I
	//    .restart local v5    # "passNumber":I
	goto label_goto_104;

}
// .method private filteredTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;ZZ)V
void android::icu::text::Transliterator::filteredTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,bool incremental,bool rollback)
{
	
	int globalLimit;
	int c;
	bool cVar0;
	int runStart;
	int runLimit;
	int rollbackOrigin;
	int passStart;
	int rollbackStart;
	int passLimit;
	int uncommittedLength;
	int totalDelta;
	int charLength;
	int delta;
	int rs;
	std::shared_ptr<java::lang::RuntimeException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "index"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "incremental"    # Z
	//    .param p4, "rollback"    # Z
	if ( this->filter )     
		goto label_cond_10;
	if ( !(( rollback ^ 0x1)) )  
		goto label_cond_10;
	this->handleTransliterate(text, index, incremental);
	return;
	// 825    .line 816
label_cond_10:
	globalLimit = index->limit;
	//    .local v7, "globalLimit":I
	0x0;
	//    .local v10, "log":Ljava/lang/StringBuffer;
label_cond_15:
	if ( !(this->filter) )  
		goto label_cond_9d;
label_goto_1d:
	if ( index->start >= globalLimit )
		goto label_cond_58;
	c = text->char32At(index->start);
	//    .local v4, "c":I
	if ( !(( this->filter->contains(c) ^ 0x1)) )  
		goto label_cond_58;
	index->start = (index->start + android::icu::text::UTF16::getCharCount(c));
	goto label_goto_1d;
	// 912    .line 847
	// 913    .end local v4    # "c":I
label_cond_58:
	index->limit = index->start;
label_goto_64:
	if ( index->limit >= globalLimit )
		goto label_cond_9d;
	c = text->char32At(index->limit);
	//    .restart local v4    # "c":I
	if ( !(this->filter->contains(c)) )  
		goto label_cond_9d;
	index->limit = (index->limit + android::icu::text::UTF16::getCharCount(c));
	goto label_goto_64;
	// 991    .line 857
	// 992    .end local v4    # "c":I
label_cond_9d:
	if ( index->start != index->limit )
		goto label_cond_b4;
label_cond_af:
label_goto_af:
	index->limit = globalLimit;
	return;
	// 1022    .line 866
label_cond_b4:
	if ( index->limit >= globalLimit )
		goto label_cond_119;
	cVar0 = 0x0;
label_goto_bf:
	if ( !(rollback) )  
		goto label_cond_199;
	if ( !(cVar0) )  
		goto label_cond_199;
	runStart = index->start;
	//    .local v18, "runStart":I
	runLimit = index->limit;
	//    .local v17, "runLimit":I
	//    .local v16, "runLength":I
	rollbackOrigin = text->length();
	//    .local v13, "rollbackOrigin":I
	text->copy(runStart, runLimit, rollbackOrigin);
	passStart = runStart;
	//    .local v12, "passStart":I
	rollbackStart = rollbackOrigin;
	//    .local v14, "rollbackStart":I
	passLimit = index->start;
	//    .local v11, "passLimit":I
	uncommittedLength = 0x0;
	//    .local v20, "uncommittedLength":I
	totalDelta = 0x0;
	//    .local v19, "totalDelta":I
label_goto_e9:
	charLength = android::icu::text::UTF16::getCharCount(text->char32At(passLimit));
	//    .local v5, "charLength":I
	passLimit = (passLimit +  charLength);
	if ( passLimit <= runLimit )
		goto label_cond_11c;
	rollbackOrigin = (rollbackOrigin + totalDelta);
	globalLimit = (globalLimit + totalDelta);
	text->replace(rollbackOrigin, (rollbackOrigin + (runLimit - runStart)), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	index->start = passStart;
	//    .end local v5    # "charLength":I
	//    .end local v11    # "passLimit":I
	//    .end local v12    # "passStart":I
	//    .end local v13    # "rollbackOrigin":I
	//    .end local v14    # "rollbackStart":I
	//    .end local v16    # "runLength":I
	//    .end local v17    # "runLimit":I
	//    .end local v18    # "runStart":I
	//    .end local v19    # "totalDelta":I
	//    .end local v20    # "uncommittedLength":I
label_goto_10e:
	if ( !(this->filter) )  
		goto label_cond_af;
	if ( !(cVar0) )  
		goto label_cond_15;
	goto label_goto_af;
	// 1168    .line 866
label_cond_119:
	cVar0 = incremental;
	//    .local v8, "isIncrementalRun":Z
	goto label_goto_bf;
	// 1175    .line 944
	// 1176    .end local v8    # "isIncrementalRun":Z
	// 1177    .restart local v5    # "charLength":I
	// 1178    .restart local v11    # "passLimit":I
	// 1179    .restart local v12    # "passStart":I
	// 1180    .restart local v13    # "rollbackOrigin":I
	// 1181    .restart local v14    # "rollbackStart":I
	// 1182    .restart local v16    # "runLength":I
	// 1183    .restart local v17    # "runLimit":I
	// 1184    .restart local v18    # "runStart":I
	// 1185    .restart local v19    # "totalDelta":I
	// 1186    .restart local v20    # "uncommittedLength":I
label_cond_11c:
	uncommittedLength = (uncommittedLength + charLength);
	index->limit = passLimit;
	this->handleTransliterate(text, index, 0x1);
	delta = (index->limit - passLimit);
	//    .local v6, "delta":I
	if ( index->start == index->limit )
		goto label_cond_188;
	rs = ((rollbackStart + delta) - (index->limit - passStart));
	//    .local v15, "rs":I
	text->replace(passStart, index->limit, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	text->copy(rs, (rs + uncommittedLength), passStart);
	index->start = passStart;
	index->limit = passLimit;
	index->contextLimit = (index->contextLimit - delta);
	goto label_goto_e9;
	// 1304    .line 996
	// 1305    .end local v15    # "rs":I
label_cond_188:
	passLimit = index->start;
	passLimit;
	rollbackStart = (rollbackStart + (delta + uncommittedLength));
	uncommittedLength = 0x0;
	runLimit = (runLimit + delta);
	totalDelta = (totalDelta + delta);
	goto label_goto_e9;
	// 1329    .line 1036
	// 1330    .end local v5    # "charLength":I
	// 1331    .end local v6    # "delta":I
	// 1332    .end local v11    # "passLimit":I
	// 1333    .end local v12    # "passStart":I
	// 1334    .end local v13    # "rollbackOrigin":I
	// 1335    .end local v14    # "rollbackStart":I
	// 1336    .end local v16    # "runLength":I
	// 1337    .end local v17    # "runLimit":I
	// 1338    .end local v18    # "runStart":I
	// 1339    .end local v19    # "totalDelta":I
	// 1340    .end local v20    # "uncommittedLength":I
label_cond_199:
	//    .local v9, "limit":I
	this->handleTransliterate(text, index, cVar0);
	//    .restart local v6    # "delta":I
	if ( cVar0 )     
		goto label_cond_1e0;
	if ( index->start == index->limit )
		goto label_cond_1e0;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::RuntimeException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ERROR: Incomplete non-incremental transliteration by ")))->append(this->getID())->toString());
	// throw
	throw cVar1;
	// 1416    .line 1059
label_cond_1e0:
	globalLimit = (globalLimit +  (index->limit - index->limit));
	goto label_goto_10e;

}
// .method public static final getAvailableIDs()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> android::icu::text::Transliterator::getAvailableIDs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1426        value = {
	// 1427            "()",
	// 1428            "Ljava/util/Enumeration",
	// 1429            "<",
	// 1430            "Ljava/lang/String;",
	// 1431            ">;"
	// 1432        }
	// 1433    .end annotation
	return android::icu::text::Transliterator::registry->getAvailableIDs();

}
// .method public static final getAvailableSources()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> android::icu::text::Transliterator::getAvailableSources()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1449        value = {
	// 1450            "()",
	// 1451            "Ljava/util/Enumeration",
	// 1452            "<",
	// 1453            "Ljava/lang/String;",
	// 1454            ">;"
	// 1455        }
	// 1456    .end annotation
	return android::icu::text::Transliterator::registry->getAvailableSources();

}
// .method public static final getAvailableTargets(Ljava/lang/String;)Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> android::icu::text::Transliterator::getAvailableTargets(std::shared_ptr<java::lang::String> source)
{
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1473        value = {
	// 1474            "(",
	// 1475            "Ljava/lang/String;",
	// 1476            ")",
	// 1477            "Ljava/util/Enumeration",
	// 1478            "<",
	// 1479            "Ljava/lang/String;",
	// 1480            ">;"
	// 1481        }
	// 1482    .end annotation
	return android::icu::text::Transliterator::registry->getAvailableTargets(source);

}
// .method public static final getAvailableVariants(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> android::icu::text::Transliterator::getAvailableVariants(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target)
{
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "target"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1500        value = {
	// 1501            "(",
	// 1502            "Ljava/lang/String;",
	// 1503            "Ljava/lang/String;",
	// 1504            ")",
	// 1505            "Ljava/util/Enumeration",
	// 1506            "<",
	// 1507            "Ljava/lang/String;",
	// 1508            ">;"
	// 1509        }
	// 1510    .end annotation
	return android::icu::text::Transliterator::registry->getAvailableVariants(source, target);

}
// .method static getBasicInstance(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::Transliterator::getBasicInstance(std::shared_ptr<java::lang::String> id,std::shared_ptr<java::lang::String> canonID)
{
	
	std::shared_ptr<java::lang::StringBuffer> s;
	std::shared_ptr<android::icu::text::Transliterator> t;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "canonID"    # Ljava/lang/String;
	s = std::make_shared<java::lang::StringBuffer>();
	//    .local v0, "s":Ljava/lang/StringBuffer;
	t = android::icu::text::Transliterator::registry->get(id, s);
	//    .local v1, "t":Landroid/icu/text/Transliterator;
	if ( !(s->length()) )  
		goto label_cond_1a;
	t = android::icu::text::Transliterator::getInstance(s->toString(), 0x0);
label_cond_1a:
	if ( !(t) )  
		goto label_cond_21;
	if ( !(canonID) )  
		goto label_cond_21;
	t->setID(canonID);
label_cond_21:
	return t;

}
// .method public static final getDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Transliterator::getDisplayName(std::shared_ptr<java::lang::String> ID)
{
	
	//    .param p0, "ID"    # Ljava/lang/String;
	return android::icu::text::Transliterator::getDisplayName(ID, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public static getDisplayName(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Transliterator::getDisplayName(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::util::ULocale> inLocale)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	auto stv;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> ID;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cVar3;
	std::shared_ptr<java::lang::String> n;
	std::shared_ptr<java::lang::RuntimeException> cVar10;
	std::shared_ptr<java::text::MessageFormat> format;
	std::shared<std::vector<std::vector<java::lang::Object>>> args;
	std::vector<std::any> tryCatchExcetionList;
	int j;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::String> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::String> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "inLocale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x2;
	bundle = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/translit")), inLocale);
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v2, "bundle":Landroid/icu/impl/ICUResourceBundle;
	stv = android::icu::text::TransliteratorIDParser::IDtoSTV(id);
	//    .local v8, "stv":[Ljava/lang/String;
	if ( stv )     
		goto label_cond_18;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 1633    .line 1212
label_cond_18:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	ID = cVar1->append(stv[0x0])->append(0x2d)->append(stv[0x1])->toString();
	//    .local v0, "ID":Ljava/lang/String;
	if ( !(stv[cVar0]) )  
		goto label_cond_56;
	if ( stv[cVar0]->length() <= 0 )
		goto label_cond_56;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	ID = cVar2->append(ID)->append(0x2f)->append(stv[cVar0])->toString();
label_cond_56:
	cVar3 = std::make_shared<android::icu::util::CaseInsensitiveString>(ID);
	n = android::icu::text::Transliterator::displayNameCache->get(cVar3);
	n->checkCast("java::lang::String");
	//    .local v7, "n":Ljava/lang/String;
	if ( !(n) )  
		goto label_cond_66;
	return n;
	// 1719    .line 1226
label_cond_66:
	try {
	//label_try_start_66:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	//label_try_end_7d:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7f;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_66 .. :try_end_7d} :catch_7f
	return bundle->getString(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("%Translit%%")))->append(ID)->toString());
	// 1748    .line 1227
label_catch_7f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/util/MissingResourceException;
	try {
	//label_try_start_80:
	format = std::make_shared<java::text::MessageFormat>(bundle->getString(std::make_shared<java::lang::String>(std::make_shared<char[]>("TransliteratorNamePattern"))));
	//    .local v5, "format":Ljava/text/MessageFormat;
	args = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x3);
	args[0x0] = java::lang::Integer::valueOf(0x2);
	args[0x1] = stv[0x0];
	args[0x2] = stv[0x1];
	//label_try_end_a3:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f4;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_80 .. :try_end_a3} :catch_f4
	//    .local v1, "args":[Ljava/lang/Object;
	j = 0x1;
	//    .local v6, "j":I
label_goto_a4:
	if ( j >  cVar0 )
		goto label_cond_c7;
	try {
	//label_try_start_a6:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = args[j];
	cVar6->checkCast("java::lang::String");
	args[j] = bundle->getString(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("%Translit%")))->append(cVar6)->toString());
	//label_try_end_c4:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_fb;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_a6 .. :try_end_c4} :catch_fb
label_goto_c4:
	j = ( j + 0x1);
	goto label_goto_a4;
	// 1849    .line 1246
label_cond_c7:
	try {
	//label_try_start_c8:
	if ( stv[0x2]->length() <= 0 )
		goto label_cond_ef;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = cVar7->append(format->format(args))->append(0x2f)->append(stv[0x2])->toString();
label_goto_ee:
	return cVar8;
	// 1897    .line 1248
label_cond_ef:
	//label_try_end_f2:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f4;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_c8 .. :try_end_f2} :catch_f4
	cVar8 = format->format(args);
	goto label_goto_ee;
	// 1907    .line 1249
	// 1908    .end local v1    # "args":[Ljava/lang/Object;
	// 1909    .end local v5    # "format":Ljava/text/MessageFormat;
	// 1910    .end local v6    # "j":I
label_catch_f4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "e2":Ljava/util/MissingResourceException;
	cVar10 = std::make_shared<java::lang::RuntimeException>();
	// throw
	throw cVar10;
	// 1922    .line 1242
	// 1923    .end local v4    # "e2":Ljava/util/MissingResourceException;
	// 1924    .restart local v1    # "args":[Ljava/lang/Object;
	// 1925    .restart local v5    # "format":Ljava/text/MessageFormat;
	// 1926    .restart local v6    # "j":I
label_catch_fb:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_c4;

}
// .method public static getDisplayName(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Transliterator::getDisplayName(std::shared_ptr<java::lang::String> id,std::shared_ptr<java::util::Locale> inLocale)
{
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "inLocale"    # Ljava/util/Locale;
	return android::icu::text::Transliterator::getDisplayName(id, android::icu::util::ULocale::forLocale(inLocale));

}
// .method public static final getInstance(Ljava/lang/String;)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::Transliterator::getInstance(std::shared_ptr<java::lang::String> ID)
{
	
	//    .param p0, "ID"    # Ljava/lang/String;
	return android::icu::text::Transliterator::getInstance(ID, 0x0);

}
// .method public static getInstance(Ljava/lang/String;I)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::Transliterator::getInstance(std::shared_ptr<java::lang::String> ID,int dir)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::StringBuffer> canonID;
	std::shared_ptr<java::util::ArrayList> list;
	std::shared<std::vector<std::vector<android::icu::text::UnicodeSet>>> globalFilter;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::util::List> translits;
	std::shared_ptr<android::icu::text::CompoundTransliterator> t;
	std::shared_ptr<android::icu::text::Transliterator> t;
	
	//    .param p0, "ID"    # Ljava/lang/String;
	//    .param p1, "dir"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	canonID = std::make_shared<java::lang::StringBuffer>();
	//    .local v0, "canonID":Ljava/lang/StringBuffer;
	list = std::make_shared<java::util::ArrayList>();
	//    .local v2, "list":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/TransliteratorIDParser$SingleID;>;"
	globalFilter = std::make_shared<std::vector<std::vector<android::icu::text::UnicodeSet>>>(cVar0);
	//    .local v1, "globalFilter":[Landroid/icu/text/UnicodeSet;
	if ( android::icu::text::TransliteratorIDParser::parseCompoundID(ID, dir, canonID, list, globalFilter) )     
		goto label_cond_2e;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid ID ")))->append(ID)->toString());
	// throw
	throw cVar2;
	// 2024    .line 1324
label_cond_2e:
	translits = android::icu::text::TransliteratorIDParser::instantiateList(list);
	//    .local v4, "translits":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/Transliterator;>;"
	0x0;
	//    .local v3, "t":Landroid/icu/text/Transliterator;
	if ( list->size() >  cVar0 )
		goto label_cond_42;
	if ( canonID->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(";"))) < 0 ) 
		goto label_cond_58;
label_cond_42:
	//    .end local v3    # "t":Landroid/icu/text/Transliterator;
	t = std::make_shared<android::icu::text::CompoundTransliterator>(translits);
	//    .local v3, "t":Landroid/icu/text/Transliterator;
label_goto_47:
	t->setID(canonID->toString());
	if ( !(globalFilter[cVar1]) )  
		goto label_cond_57;
	t->setFilter(globalFilter[cVar1]);
label_cond_57:
	return t;
	// 2080    .line 1337
	// 2081    .local v3, "t":Landroid/icu/text/Transliterator;
label_cond_58:
	t = translits->get(cVar1);
	//    .end local v3    # "t":Landroid/icu/text/Transliterator;
	t->checkCast("android::icu::text::Transliterator");
	//    .local v3, "t":Landroid/icu/text/Transliterator;
	goto label_goto_47;

}
// .method public static registerAlias(Ljava/lang/String;Ljava/lang/String;)V
void android::icu::text::Transliterator::registerAlias(std::shared_ptr<java::lang::String> aliasID,std::shared_ptr<java::lang::String> realID)
{
	
	//    .param p0, "aliasID"    # Ljava/lang/String;
	//    .param p1, "realID"    # Ljava/lang/String;
	android::icu::text::Transliterator::registry->put(aliasID, realID, 0x1);
	return;

}
// .method public static registerAny()V
void android::icu::text::Transliterator::registerAny()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2114    .end annotation
	android::icu::text::AnyTransliterator::register({const[class].FS-Param});
	return;

}
// .method public static registerClass(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;)V
void android::icu::text::Transliterator::registerClass(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::Class<android::icu::text::Transliterator>> transClass,std::shared_ptr<java::lang::String> displayName)
{
	
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cVar0;
	
	//    .param p0, "ID"    # Ljava/lang/String;
	//    .param p2, "displayName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2129        value = {
	// 2130            "(",
	// 2131            "Ljava/lang/String;",
	// 2132            "Ljava/lang/Class",
	// 2133            "<+",
	// 2134            "Landroid/icu/text/Transliterator;",
	// 2135            ">;",
	// 2136            "Ljava/lang/String;",
	// 2137            ")V"
	// 2138        }
	// 2139    .end annotation
	//    .local p1, "transClass":Ljava/lang/Class;, "Ljava/lang/Class<+Landroid/icu/text/Transliterator;>;"
	android::icu::text::Transliterator::registry->put(ID, transClass, 0x1);
	if ( !(displayName) )  
		goto label_cond_12;
	cVar0 = std::make_shared<android::icu::util::CaseInsensitiveString>(ID);
	android::icu::text::Transliterator::displayNameCache->put(cVar0, displayName);
label_cond_12:
	return;

}
// .method public static registerFactory(Ljava/lang/String;Landroid/icu/text/Transliterator$Factory;)V
void android::icu::text::Transliterator::registerFactory(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::Transliterator_S_Factory> factory)
{
	
	//    .param p0, "ID"    # Ljava/lang/String;
	//    .param p1, "factory"    # Landroid/icu/text/Transliterator$Factory;
	android::icu::text::Transliterator::registry->put(ID, factory, 0x1);
	return;

}
// .method public static registerInstance(Landroid/icu/text/Transliterator;)V
void android::icu::text::Transliterator::registerInstance(std::shared_ptr<android::icu::text::Transliterator> trans)
{
	
	//    .param p0, "trans"    # Landroid/icu/text/Transliterator;
	android::icu::text::Transliterator::registry->put(trans->getID(), trans, 0x1);
	return;

}
// .method static registerInstance(Landroid/icu/text/Transliterator;Z)V
void android::icu::text::Transliterator::registerInstance(std::shared_ptr<android::icu::text::Transliterator> trans,bool visible)
{
	
	//    .param p0, "trans"    # Landroid/icu/text/Transliterator;
	//    .param p1, "visible"    # Z
	android::icu::text::Transliterator::registry->put(trans->getID(), trans, visible);
	return;

}
// .method static registerSpecialInverse(Ljava/lang/String;Ljava/lang/String;Z)V
void android::icu::text::Transliterator::registerSpecialInverse(std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> inverseTarget,bool bidirectional)
{
	
	//    .param p0, "target"    # Ljava/lang/String;
	//    .param p1, "inverseTarget"    # Ljava/lang/String;
	//    .param p2, "bidirectional"    # Z
	android::icu::text::TransliteratorIDParser::registerSpecialInverse(target, inverseTarget, bidirectional);
	return;

}
// .method public static unregister(Ljava/lang/String;)V
void android::icu::text::Transliterator::unregister(std::shared_ptr<java::lang::String> ID)
{
	
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cVar0;
	
	//    .param p0, "ID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::CaseInsensitiveString>(ID);
	android::icu::text::Transliterator::displayNameCache->remove(cVar0);
	android::icu::text::Transliterator::registry->remove(ID);
	return;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::Transliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> temp;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::Object> t;
	
	//    .param p1, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2268    .end annotation
	//    .local v0, "myFilter":Landroid/icu/text/UnicodeSet;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(this->handleGetSourceSet());
	temp = cVar0->retainAll(this->getFilterAsUnicodeSet(inputFilter));
	//    .local v4, "temp":Landroid/icu/text/UnicodeSet;
	sourceSet->addAll(temp);
	s_S_iterator = temp->iterator();
	//    .local v2, "s$iterator":Ljava/util/Iterator;
label_cond_18:
label_goto_18:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_32;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .local v1, "s":Ljava/lang/String;
	t = this->transliterate(s);
	//    .local v3, "t":Ljava/lang/String;
	if ( s->equals(t) )     
		goto label_cond_18;
	targetSet->addAll(t);
	goto label_goto_18;
	// 2333    .line 1611
	// 2334    .end local v1    # "s":Ljava/lang/String;
	// 2335    .end local v3    # "t":Ljava/lang/String;
label_cond_32:
	return;

}
// .method protected final baseToRules(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Transliterator::baseToRules(bool escapeUnprintable)
{
	
	char cVar0;
	std::shared_ptr<java::lang::StringBuffer> rulesSource;
	std::shared_ptr<java::lang::String> id;
	int i;
	int c;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "escapeUnprintable"    # Z
	cVar0 = 0x3b;
	if ( !(escapeUnprintable) )  
		goto label_cond_36;
	rulesSource = std::make_shared<java::lang::StringBuffer>();
	//    .local v3, "rulesSource":Ljava/lang/StringBuffer;
	id = this->getID();
	//    .local v2, "id":Ljava/lang/String;
	i = 0x0;
	//    .local v1, "i":I
label_goto_e:
	if ( i >= id->length() )
		goto label_cond_27;
	c = android::icu::text::UTF16::charAt(id, i);
	//    .local v0, "c":I
	if ( android::icu::impl::Utility::escapeUnprintable(rulesSource, c) )     
		goto label_cond_21;
	android::icu::text::UTF16::append(rulesSource, c);
label_cond_21:
	i = (i +  android::icu::text::UTF16::getCharCount(c));
	goto label_goto_e;
	// 2399    .line 1471
	// 2400    .end local v0    # "c":I
label_cond_27:
	rulesSource->insert(0x0, std::make_shared<java::lang::String>(std::make_shared<char[]>("::")));
	rulesSource->append(cVar0);
	return rulesSource->toString();
	// 2418    .line 1475
	// 2419    .end local v1    # "i":I
	// 2420    .end local v2    # "id":Ljava/lang/String;
	// 2421    .end local v3    # "rulesSource":Ljava/lang/StringBuffer;
label_cond_36:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("::")))->append(this->getID())->append(cVar0)->toString();

}
// .method public filteredTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::Transliterator::filteredTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,bool incremental)
{
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "index"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "incremental"    # Z
	this->filteredTransliterate(text, index, incremental, 0x0);
	return;

}
// .method public final finishTransliteration(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)V
void android::icu::text::Transliterator::finishTransliteration(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index)
{
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "index"    # Landroid/icu/text/Transliterator$Position;
	index->validate(text->length());
	this->filteredTransliterate(text, index, 0x0, 0x1);
	return;

}
// .method public getElements()[Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::Transliterator::getElements()
{
	
	std::shared_ptr<android::icu::text::CompoundTransliterator> cpd;
	std::shared<std::vector<std::vector<android::icu::text::Transliterator>>> result;
	int i;
	
	if ( !(this->instanceOf("android::icu::text::CompoundTransliterator")) )  
		goto label_cond_1a;
	cpd = this;
	cpd->checkCast("android::icu::text::CompoundTransliterator");
	//    .local v0, "cpd":Landroid/icu/text/CompoundTransliterator;
	result = std::make_shared<std::vector<std::vector<android::icu::text::Transliterator>>>(cpd->getCount());
	//    .local v2, "result":[Landroid/icu/text/Transliterator;
	i = 0x0;
	//    .local v1, "i":I
label_goto_e:
	if ( i >= result->size() )
		goto label_cond_20;
	result[i] = cpd->getTransliterator(i);
	i = ( i + 0x1);
	goto label_goto_e;
	// 2536    .line 1500
	// 2537    .end local v0    # "cpd":Landroid/icu/text/CompoundTransliterator;
	// 2538    .end local v1    # "i":I
	// 2539    .end local v2    # "result":[Landroid/icu/text/Transliterator;
label_cond_1a:
	result = std::make_shared<std::vector<std::vector<android::icu::text::Transliterator>>>(0x1);
	result[0x0] = this;
	//    .restart local v2    # "result":[Landroid/icu/text/Transliterator;
label_cond_20:
	return result;

}
// .method public final getFilter()Landroid/icu/text/UnicodeFilter;
std::shared_ptr<android::icu::text::UnicodeFilter> android::icu::text::Transliterator::getFilter()
{
	
	return this->filter;

}
// .method public getFilterAsUnicodeSet(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::Transliterator::getFilterAsUnicodeSet(std::shared_ptr<android::icu::text::UnicodeSet> externalFilter)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> filterSet;
	std::shared_ptr<android::icu::text::UnicodeSet> temp;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "externalFilter"    # Landroid/icu/text/UnicodeSet;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2569    .end annotation
	if ( this->filter )     
		goto label_cond_5;
	return externalFilter;
	// 2580    .line 1626
label_cond_5:
	filterSet = std::make_shared<android::icu::text::UnicodeSet>(externalFilter);
	//    .local v1, "filterSet":Landroid/icu/text/UnicodeSet;
	try {
	//label_try_start_a:
	//label_try_end_c:
	}
	catch (java::lang::ClassCastException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_15;
	}
	//    .catch Ljava/lang/ClassCastException; {:try_start_a .. :try_end_c} :catch_15
	//    .local v2, "temp":Landroid/icu/text/UnicodeSet;
label_goto_c:
	return filterSet->retainAll(temp)->freeze();
	// 2606    .line 1632
	// 2607    .end local v2    # "temp":Landroid/icu/text/UnicodeSet;
label_catch_15:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/ClassCastException;
	temp = std::make_shared<android::icu::text::UnicodeSet>();
	//    .restart local v2    # "temp":Landroid/icu/text/UnicodeSet;
	this->filter->addMatchSetTo(temp);
	goto label_goto_c;

}
// .method public final getID()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Transliterator::getID()
{
	
	return this->ID;

}
// .method public final getInverse()Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::Transliterator::getInverse()
{
	
	return android::icu::text::Transliterator::getInstance(this->ID, 0x1);

}
// .method public final getMaximumContextLength()I
int android::icu::text::Transliterator::getMaximumContextLength()
{
	
	return this->maximumContextLength;

}
// .method public final getSourceSet()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::Transliterator::getSourceSet()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> result;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	result = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v0, "result":Landroid/icu/text/UnicodeSet;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>();
	this->addSourceTargetSet(this->getFilterAsUnicodeSet(android::icu::text::UnicodeSet::ALL_CODE_POINTS), result, cVar0);
	return result;

}
// .method public getTargetSet()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::Transliterator::getTargetSet()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> result;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	result = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v0, "result":Landroid/icu/text/UnicodeSet;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>();
	this->addSourceTargetSet(this->getFilterAsUnicodeSet(android::icu::text::UnicodeSet::ALL_CODE_POINTS), cVar0, result);
	return result;

}
// .method protected handleGetSourceSet()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::Transliterator::handleGetSourceSet()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>();
	return cVar0;

}
// .method public setFilter(Landroid/icu/text/UnicodeFilter;)V
void android::icu::text::Transliterator::setFilter(std::shared_ptr<android::icu::text::UnicodeFilter> filter)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "filter"    # Landroid/icu/text/UnicodeFilter;
	if ( filter )     
		goto label_cond_6;
	this->filter = 0x0;
label_goto_5:
	return;
	// 2747    .line 1279
label_cond_6:
	try {
	//label_try_start_6:
	cVar1 = filter;
	cVar1->checkCast("android::icu::text::UnicodeSet");
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(cVar1);
	this->filter = cVar0->freeze();
	//label_try_end_15:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_15} :catch_16
	goto label_goto_5;
	// 2770    .line 1280
label_catch_16:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>();
	this->filter = cVar2;
	filter->addMatchSetTo(this->filter);
	this->filter->freeze();
	goto label_goto_5;

}
// .method protected final setID(Ljava/lang/String;)V
void android::icu::text::Transliterator::setID(std::shared_ptr<java::lang::String> id)
{
	
	//    .param p1, "id"    # Ljava/lang/String;
	this->ID = id;
	return;

}
// .method protected setMaximumContextLength(I)V
void android::icu::text::Transliterator::setMaximumContextLength(int a)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "a"    # I
	if ( a >= 0 )
		goto label_cond_1c;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid context length ")))->append(a)->toString());
	// throw
	throw cVar0;
	// 2840    .line 1123
label_cond_1c:
	this->maximumContextLength = a;
	return;

}
// .method public toRules(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Transliterator::toRules(bool escapeUnprintable)
{
	
	//    .param p1, "escapeUnprintable"    # Z
	return this->baseToRules(escapeUnprintable);

}
// .method public transform(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Transliterator::transform(std::shared_ptr<java::lang::String> source)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	return this->transliterate(source);

}
// .method public final transliterate(Landroid/icu/text/Replaceable;II)I
int android::icu::text::Transliterator::transliterate(std::shared_ptr<android::icu::text::Replaceable> text,int start,int limit)
{
	
	std::shared_ptr<android::icu::text::Transliterator_S_Position> pos;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	if ( start < 0 ) 
		goto label_cond_5;
	if ( limit >= start )
		goto label_cond_7;
label_cond_5:
	return -0x1;
	// 2909    .line 516
label_cond_7:
	if ( text->length() <  limit )
		goto label_cond_5;
	pos = std::make_shared<android::icu::text::Transliterator_S_Position>(start, limit, start);
	//    .local v0, "pos":Landroid/icu/text/Transliterator$Position;
	this->filteredTransliterate(text, pos, 0x0, 0x1);
	return pos->limit;

}
// .method public final transliterate(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Transliterator::transliterate(std::shared_ptr<java::lang::String> text)
{
	
	std::shared_ptr<android::icu::text::ReplaceableString> result;
	
	//    .param p1, "text"    # Ljava/lang/String;
	result = std::make_shared<android::icu::text::ReplaceableString>(text);
	//    .local v0, "result":Landroid/icu/text/ReplaceableString;
	this->transliterate(result);
	return result->toString();

}
// .method public final transliterate(Landroid/icu/text/Replaceable;)V
void android::icu::text::Transliterator::transliterate(std::shared_ptr<android::icu::text::Replaceable> text)
{
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	this->transliterate(text, 0x0, text->length());
	return;

}
// .method public final transliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)V
void android::icu::text::Transliterator::transliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index)
{
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "index"    # Landroid/icu/text/Transliterator$Position;
	this->transliterate(text, index, 0x0);
	return;

}
// .method public final transliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;I)V
void android::icu::text::Transliterator::transliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,int insertion)
{
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "index"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "insertion"    # I
	this->transliterate(text, index, android::icu::text::UTF16::valueOf(insertion));
	return;

}
// .method public final transliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Ljava/lang/String;)V
void android::icu::text::Transliterator::transliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,std::shared_ptr<java::lang::String> insertion)
{
	
	bool cVar0;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "index"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "insertion"    # Ljava/lang/String;
	cVar0 = 0x1;
	index->validate(text->length());
	if ( !(insertion) )  
		goto label_cond_23;
	text->replace(index->limit, index->limit, insertion);
	index->limit = (index->limit +  insertion->length());
	index->contextLimit = (index->contextLimit +  insertion->length());
label_cond_23:
	if ( index->limit <= 0 )
		goto label_cond_36;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(text->charAt(( index->limit + -0x1)))) )  
		goto label_cond_36;
	return;
	// 3080    .line 612
label_cond_36:
	this->filteredTransliterate(text, index, cVar0, cVar0);
	return;

}


