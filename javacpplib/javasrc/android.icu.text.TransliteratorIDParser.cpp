// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorIDParser.smali
#include "java2ctype.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.SymbolTable.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.TransliteratorIDParser_S_SingleID.h"
#include "android.icu.text.TransliteratorIDParser_S_Specs.h"
#include "android.icu.text.TransliteratorIDParser.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.CaseInsensitiveString.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Map.h"

static android::icu::text::TransliteratorIDParser::ANY = std::make_shared<java::lang::String>("Any");
static android::icu::text::TransliteratorIDParser::CLOSE_REV = ')';
static android::icu::text::TransliteratorIDParser::FORWARD = 0x0;
static android::icu::text::TransliteratorIDParser::ID_DELIM = ';';
static android::icu::text::TransliteratorIDParser::OPEN_REV = '(';
static android::icu::text::TransliteratorIDParser::REVERSE = 0x1;
static android::icu::text::TransliteratorIDParser::SPECIAL_INVERSES;
static android::icu::text::TransliteratorIDParser::TARGET_SEP = '-';
static android::icu::text::TransliteratorIDParser::VARIANT_SEP = '/';
// .method static constructor <clinit>()V
void android::icu::text::TransliteratorIDParser::static_cinit()
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	cVar0 = std::make_shared<java::util::HashMap>();
	android::icu::text::TransliteratorIDParser::SPECIAL_INVERSES = java::util::Collections::synchronizedMap(cVar0);
	return;

}
// .method constructor <init>()V
android::icu::text::TransliteratorIDParser::TransliteratorIDParser()
{
	
	// 071    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static IDtoSTV(Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TransliteratorIDParser::IDtoSTV(std::shared_ptr<java::lang::String> id)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> source;
	std::shared_ptr<java::lang::String> variant;
	int sep;
	int var;
	int isSourcePresent;
	auto variant;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	int cVar3;
	auto source;
	
	//    .param p0, "id"    # Ljava/lang/String;
	cVar0 = 0x1;
	cVar1 = 0x0;
	source = std::make_shared<java::lang::String>(std::make_shared<char[]>("Any"));
	//    .local v3, "source":Ljava/lang/String;
	0x0;
	//    .local v4, "target":Ljava/lang/String;
	variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v6, "variant":Ljava/lang/String;
	sep = id->indexOf(0x2d);
	//    .local v1, "sep":I
	var = id->indexOf(0x2f);
	//    .local v5, "var":I
	if ( var >= 0 )
		goto label_cond_1b;
	var = id->length();
label_cond_1b:
	isSourcePresent = 0x0;
	//    .local v0, "isSourcePresent":Z
	if ( sep >= 0 )
		goto label_cond_43;
	//    .local v4, "target":Ljava/lang/String;
	variant = id->substring(var);
label_goto_26:
	if ( variant->length() <= 0 )
		goto label_cond_30;
	variant = variant->substring(cVar0);
label_cond_30:
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar2[cVar1] = source;
	cVar2[cVar0] = target;
	cVar2[0x2] = variant;
	if ( !(isSourcePresent) )  
		goto label_cond_6a;
	cVar3 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_3f:
	cVar2[0x3] = cVar3;
	return cVar2;
	// 180    .line 484
	// 181    .local v4, "target":Ljava/lang/String;
label_cond_43:
	if ( sep >= var )
		goto label_cond_57;
	if ( sep <= 0 )
		goto label_cond_4c;
	source = id->substring(cVar1, sep);
	isSourcePresent = 0x1;
label_cond_4c:
	//    .local v4, "target":Ljava/lang/String;
	variant = id->substring(var);
	goto label_goto_26;
	// 212    .line 494
	// 213    .local v4, "target":Ljava/lang/String;
label_cond_57:
	if ( var <= 0 )
		goto label_cond_5e;
	source = id->substring(cVar1, var);
	isSourcePresent = 0x1;
label_cond_5e:
	sep = ( sep + 0x1);
	//    .end local v1    # "sep":I
	//    .local v2, "sep":I
	variant = id->substring(var, sep);
	//    .local v4, "target":Ljava/lang/String;
	sep;
	//    .end local v2    # "sep":I
	//    .restart local v1    # "sep":I
	goto label_goto_26;
	// 247    .line 507
label_cond_6a:
	cVar3 = 0x0;
	goto label_goto_3f;

}
// .method public static STVtoID(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TransliteratorIDParser::STVtoID(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> variant)
{
	
	std::shared_ptr<java::lang::StringBuilder> id;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "target"    # Ljava/lang/String;
	//    .param p2, "variant"    # Ljava/lang/String;
	id = std::make_shared<java::lang::StringBuilder>(source);
	//    .local v0, "id":Ljava/lang/StringBuilder;
	if ( id->length() )     
		goto label_cond_11;
	id->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any")));
label_cond_11:
	id->append(0x2d)->append(target);
	if ( !(variant) )  
		goto label_cond_2b;
	if ( !(variant->length()) )  
		goto label_cond_2b;
	id->append(0x2f)->append(variant);
label_cond_2b:
	return id->toString();

}
// .method static instantiateList(Ljava/util/List;)Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::text::Transliterator>> android::icu::text::TransliteratorIDParser::instantiateList(std::shared_ptr<java::util::List<android::icu::text::TransliteratorIDParser_S_SingleID>> ids)
{
	
	std::shared_ptr<java::util::ArrayList> translits;
	std::shared_ptr<java::util::Iterator> single_S_iterator;
	std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> single;
	std::shared_ptr<java::lang::Object> t;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 319        value = {
	// 320            "(",
	// 321            "Ljava/util/List",
	// 322            "<",
	// 323            "Landroid/icu/text/TransliteratorIDParser$SingleID;",
	// 324            ">;)",
	// 325            "Ljava/util/List",
	// 326            "<",
	// 327            "Landroid/icu/text/Transliterator;",
	// 328            ">;"
	// 329        }
	// 330    .end annotation
	//    .local p0, "ids":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/TransliteratorIDParser$SingleID;>;"
	translits = std::make_shared<java::util::ArrayList>();
	//    .local v3, "translits":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/Transliterator;>;"
	single_S_iterator = ids->iterator();
	//    .local v1, "single$iterator":Ljava/util/Iterator;
label_cond_a:
label_goto_a:
	if ( !(single_S_iterator->hasNext()) )  
		goto label_cond_44;
	single = single_S_iterator->next();
	single->checkCast("android::icu::text::TransliteratorIDParser_S_SingleID");
	//    .local v0, "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
	if ( !(single->basicID->length()) )  
		goto label_cond_a;
	t = single->getInstance();
	//    .local v2, "t":Landroid/icu/text/Transliterator;
	if ( t )     
		goto label_cond_40;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal ID ")))->append(single->canonID)->toString());
	// throw
	throw cVar0;
	// 408    .line 442
label_cond_40:
	translits->add(t);
	goto label_goto_a;
	// 414    .line 446
	// 415    .end local v0    # "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
	// 416    .end local v2    # "t":Landroid/icu/text/Transliterator;
label_cond_44:
	if ( translits->size() )     
		goto label_cond_5f;
	t = android::icu::text::Transliterator::getBasicInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Null")), 0x0);
	//    .restart local v2    # "t":Landroid/icu/text/Transliterator;
	if ( t )     
		goto label_cond_5c;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal error; cannot instantiate Any-Null")));
	// throw
	throw cVar2;
	// 444    .line 452
label_cond_5c:
	translits->add(t);
	//    .end local v2    # "t":Landroid/icu/text/Transliterator;
label_cond_5f:
	return translits;

}
// .method public static parseCompoundID(Ljava/lang/String;ILjava/lang/StringBuffer;Ljava/util/List;[Landroid/icu/text/UnicodeSet;)Z
bool android::icu::text::TransliteratorIDParser::parseCompoundID(std::shared_ptr<java::lang::String> id,int dir,std::shared_ptr<java::lang::StringBuffer> canonID,std::shared_ptr<java::util::List<android::icu::text::TransliteratorIDParser_S_SingleID>> list,std::shared_ptr<std::vector<android::icu::text::UnicodeSet>> globalFilter)
{
	
	char cVar0;
	bool cVar1;
	int cVar2;
	std::shared<std::vector<int[]>> pos;
	std::shared<std::vector<int[]>> withParens;
	auto filter;
	int sawDelimiter;
	std::shared_ptr<java::lang::Object> single;
	int i;
	std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> single;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "dir"    # I
	//    .param p2, "canonID"    # Ljava/lang/StringBuffer;
	//    .param p4, "globalFilter"    # [Landroid/icu/text/UnicodeSet;
	//    .annotation system Ldalvik/annotation/Signature;
	// 461        value = {
	// 462            "(",
	// 463            "Ljava/lang/String;",
	// 464            "I",
	// 465            "Ljava/lang/StringBuffer;",
	// 466            "Ljava/util/List",
	// 467            "<",
	// 468            "Landroid/icu/text/TransliteratorIDParser$SingleID;",
	// 469            ">;[",
	// 470            "Landroid/icu/text/UnicodeSet;",
	// 471            ")Z"
	// 472        }
	// 473    .end annotation
	//    .local p3, "list":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/TransliteratorIDParser$SingleID;>;"
	cVar0 = 0x3b;
	cVar1 = 0x1;
	cVar2 = 0x0;
	pos = std::make_shared<std::vector<int[]>>(cVar1);
	pos[cVar2] = cVar2;
	//    .local v2, "pos":[I
	withParens = std::make_shared<std::vector<int[]>>(cVar1);
	//    .local v5, "withParens":[I
	list->clear();
	globalFilter[cVar2] = 0x0;
	canonID->setLength(cVar2);
	withParens[cVar2] = cVar2;
	filter = android::icu::text::TransliteratorIDParser::parseGlobalFilter(id, pos, dir, withParens, canonID);
	//    .local v0, "filter":Landroid/icu/text/UnicodeSet;
	if ( !(filter) )  
		goto label_cond_2a;
	if ( android::icu::impl::Utility::parseChar(id, pos, cVar0) )     
		goto label_cond_26;
	canonID->setLength(cVar2);
	pos[cVar2] = cVar2;
label_cond_26:
	if ( dir )     
		goto label_cond_2a;
	globalFilter[cVar2] = filter;
label_cond_2a:
	sawDelimiter = 0x1;
	//    .local v3, "sawDelimiter":Z
label_cond_2b:
	single = android::icu::text::TransliteratorIDParser::parseSingleID(id, pos, dir);
	//    .local v4, "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
	if ( single )     
		goto label_cond_38;
label_goto_31:
	if ( list->size() )     
		goto label_cond_49;
	return cVar2;
	// 562    .line 376
label_cond_38:
	if ( dir )     
		goto label_cond_45;
	list->add(single);
label_goto_3d:
	if ( android::icu::impl::Utility::parseChar(id, pos, cVar0) )     
		goto label_cond_2b;
	sawDelimiter = 0x0;
	goto label_goto_31;
	// 583    .line 379
label_cond_45:
	list->add(cVar2, single);
	goto label_goto_3d;
	// 589    .line 392
label_cond_49:
	i = 0x0;
	//    .local v1, "i":I
label_goto_4a:
	if ( i >= list->size() )
		goto label_cond_69;
	single = list->get(i);
	//    .end local v4    # "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
	single->checkCast("android::icu::text::TransliteratorIDParser_S_SingleID");
	//    .restart local v4    # "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
	canonID->append(single->canonID);
	if ( i == ( list->size() + -0x1) )
		goto label_cond_66;
	canonID->append(cVar0);
label_cond_66:
	i = ( i + 0x1);
	goto label_goto_4a;
	// 633    .line 402
label_cond_69:
	if ( !(sawDelimiter) )  
		goto label_cond_7a;
	withParens[cVar2] = cVar1;
	filter = android::icu::text::TransliteratorIDParser::parseGlobalFilter(id, pos, dir, withParens, canonID);
	if ( !(filter) )  
		goto label_cond_7a;
	android::icu::impl::Utility::parseChar(id, pos, cVar0);
	if ( dir != cVar1 )
		goto label_cond_7a;
	globalFilter[cVar2] = filter;
label_cond_7a:
	pos[cVar2] = android::icu::impl::PatternProps::skipWhiteSpace(id, pos[cVar2]);
	if ( pos[cVar2] == id->length() )
		goto label_cond_8b;
	return cVar2;
	// 679    .line 421
label_cond_8b:
	return cVar1;

}
// .method public static parseFilterID(Ljava/lang/String;[I)Landroid/icu/text/TransliteratorIDParser$SingleID;
std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> android::icu::text::TransliteratorIDParser::parseFilterID(std::shared_ptr<java::lang::String> id,std::shared_ptr<int[]> pos)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::TransliteratorIDParser_S_Specs> specs;
	std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> single;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "pos"    # [I
	cVar0 = 0x0;
	//    .local v2, "start":I
	specs = android::icu::text::TransliteratorIDParser::parseFilterID(id, pos, 0x1);
	//    .local v1, "specs":Landroid/icu/text/TransliteratorIDParser$Specs;
	if ( specs )     
		goto label_cond_e;
	pos[cVar0] = pos[cVar0];
	return 0x0;
	// 715    .line 161
label_cond_e:
	single = android::icu::text::TransliteratorIDParser::specsToID(specs, cVar0);
	//    .local v0, "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
	single->filter = specs->filter;
	return single;

}
// .method private static parseFilterID(Ljava/lang/String;[IZ)Landroid/icu/text/TransliteratorIDParser$Specs;
std::shared_ptr<android::icu::text::TransliteratorIDParser_S_Specs> android::icu::text::TransliteratorIDParser::parseFilterID(std::shared_ptr<java::lang::String> id,std::shared_ptr<int[]> pos,bool allowFilter)
{
	
	int first;
	std::shared_ptr<java::lang::String> source;
	std::shared_ptr<java::lang::String> target;
	std::shared_ptr<java::lang::String> variant;
	std::shared_ptr<java::lang::String> filter;
	int delimiter;
	int specCount;
	std::shared_ptr<android::icu::text::TransliteratorIDParser_S_Specs> cVar1;
	std::shared_ptr<java::text::ParsePosition> ppos;
	int c;
	int cVar0;
	auto spec;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "pos"    # [I
	//    .param p2, "allowFilter"    # Z
	first = 0x0;
	//    .local v8, "first":Ljava/lang/String;
	source = 0x0;
	//    .local v1, "source":Ljava/lang/String;
	target = 0x0;
	//    .local v2, "target":Ljava/lang/String;
	variant = 0x0;
	//    .local v3, "variant":Ljava/lang/String;
	filter = 0x0;
	//    .local v5, "filter":Ljava/lang/String;
	delimiter = 0x0;
	//    .local v7, "delimiter":C
	specCount = 0x0;
	//    .local v11, "specCount":I
	//    .end local v2    # "target":Ljava/lang/String;
	//    .end local v3    # "variant":Ljava/lang/String;
	//    .end local v5    # "filter":Ljava/lang/String;
	//    .end local v7    # "delimiter":C
	//    .end local v8    # "first":Ljava/lang/String;
	//    .local v12, "start":I
label_goto_a:
	pos[0x0] = android::icu::impl::PatternProps::skipWhiteSpace(id, pos[0x0]);
	if ( pos[0x0] != id->length() )
		goto label_cond_2b;
label_cond_1d:
	if ( !(first) )  
		goto label_cond_22;
	if ( target )     
		goto label_cond_8e;
	target = first;
	//    .end local v1    # "source":Ljava/lang/String;
label_cond_22:
label_goto_22:
	if ( source )     
		goto label_cond_90;
	if ( target )     
		goto label_cond_90;
	pos[0x0] = pos[0x0];
	return 0x0;
	// 830    .line 614
	// 831    .restart local v1    # "source":Ljava/lang/String;
label_cond_2b:
	if ( !(allowFilter) )  
		goto label_cond_59;
	if ( filter )     
		goto label_cond_59;
	if ( !(android::icu::text::UnicodeSet::resemblesPattern(id, pos[0x0])) )  
		goto label_cond_59;
	ppos = std::make_shared<java::text::ParsePosition>(pos[0x0]);
	//    .local v9, "ppos":Ljava/text/ParsePosition;
	var32 = new android::icu::text::UnicodeSet(id, ppos, 0x0);
	//    .local v5, "filter":Ljava/lang/String;
	pos[0x0] = ppos->getIndex();
	goto label_goto_a;
	// 891    .line 625
	// 892    .end local v5    # "filter":Ljava/lang/String;
	// 893    .end local v9    # "ppos":Ljava/text/ParsePosition;
label_cond_59:
	if ( delimiter )     
		goto label_cond_77;
	c = id->charAt(pos[0x0]);
	//    .local v6, "c":C
	if ( c != 0x2d )
		goto label_cond_71;
	if ( target )     
		goto label_cond_71;
label_cond_68:
	//    .local v7, "delimiter":C
	cVar0 = 0x0;
	pos[cVar0] = ( pos[cVar0] + 0x1);
	goto label_goto_a;
	// 930    .line 628
	// 931    .end local v7    # "delimiter":C
label_cond_71:
	if ( c != 0x2f )
		goto label_cond_77;
	if ( !(variant) )  
		goto label_cond_68;
	//    .end local v6    # "c":C
label_cond_77:
	if ( delimiter )     
		goto label_cond_7b;
	if ( specCount > 0 ) 
		goto label_cond_1d;
label_cond_7b:
	spec = android::icu::impl::Utility::parseUnicodeIdentifier(id, pos);
	//    .local v10, "spec":Ljava/lang/String;
	if ( !(spec) )  
		goto label_cond_1d;
	// switch
	{
	auto item = ( delimiter );
	if (item == 0x0) goto label_sswitch_88;
	if (item == 0x2d) goto label_sswitch_8a;
	if (item == 0x2f) goto label_sswitch_8c;
	}
label_goto_84:
	specCount = ( specCount + 0x1);
	delimiter = 0x0;
	//    .local v7, "delimiter":C
	goto label_goto_a;
	// 969    .line 652
	// 970    .end local v7    # "delimiter":C
label_sswitch_88:
	spec;
	//    .local v8, "first":Ljava/lang/String;
	goto label_goto_84;
	// 978    .line 655
	// 979    .end local v8    # "first":Ljava/lang/String;
label_sswitch_8a:
	//    .local v2, "target":Ljava/lang/String;
	goto label_goto_84;
	// 987    .line 658
	// 988    .end local v2    # "target":Ljava/lang/String;
label_sswitch_8c:
	//    .local v3, "variant":Ljava/lang/String;
	goto label_goto_84;
	// 996    .line 671
	// 997    .end local v3    # "variant":Ljava/lang/String;
	// 998    .end local v10    # "spec":Ljava/lang/String;
label_cond_8e:
	source = first;
	//    .local v1, "source":Ljava/lang/String;
	goto label_goto_22;
	// 1005    .line 682
	// 1006    .end local v1    # "source":Ljava/lang/String;
label_cond_90:
	//    .local v4, "sawSource":Z
	if ( source )     
		goto label_cond_97;
	//    .restart local v1    # "source":Ljava/lang/String;
	//    .end local v1    # "source":Ljava/lang/String;
label_cond_97:
	if ( target )     
		goto label_cond_9c;
label_cond_9c:
	cVar1 = std::make_shared<android::icu::text::TransliteratorIDParser_S_Specs>(source, target, variant, 0x1, filter);
	return cVar1;
	// 1037    .line 650
	// 1038    :sswitch_data_a2
	// 1039    .sparse-switch
	// 1040        0x0 -> :sswitch_88
	// 1041        0x2d -> :sswitch_8a
	// 1042        0x2f -> :sswitch_8c
	// 1043    .end sparse-switch

}
// .method public static parseGlobalFilter(Ljava/lang/String;[II[ILjava/lang/StringBuffer;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::TransliteratorIDParser::parseGlobalFilter(std::shared_ptr<java::lang::String> id,std::shared_ptr<int[]> pos,int dir,std::shared_ptr<int[]> withParens,std::shared_ptr<java::lang::StringBuffer> canonID)
{
	
	int start;
	int cVar0;
	std::shared_ptr<java::text::ParsePosition> ppos;
	std::shared_ptr<android::icu::text::UnicodeSet> filter;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::String> pattern;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "pos"    # [I
	//    .param p2, "dir"    # I
	//    .param p3, "withParens"    # [I
	//    .param p4, "canonID"    # Ljava/lang/StringBuffer;
	//    .local v1, "filter":Landroid/icu/text/UnicodeSet;
	start = pos[0x0];
	//    .local v4, "start":I
	if ( withParens[0x0] != -0x1 )
		goto label_cond_60;
	if ( !(android::icu::impl::Utility::parseChar(id, pos, 0x28)) )  
		goto label_cond_5e;
	cVar0 = 0x1;
label_goto_13:
	withParens[0x0] = cVar0;
label_cond_16:
	pos[0x0] = android::icu::impl::PatternProps::skipWhiteSpace(id, pos[0x0]);
	if ( !(android::icu::text::UnicodeSet::resemblesPattern(id, pos[0x0])) )  
		goto label_cond_b6;
	ppos = std::make_shared<java::text::ParsePosition>(pos[0x0]);
	//    .local v3, "ppos":Ljava/text/ParsePosition;
	try {
	//label_try_start_31:
	//    .end local v1    # "filter":Landroid/icu/text/UnicodeSet;
	filter = std::make_shared<android::icu::text::UnicodeSet>(id, ppos, 0x0);
	//label_try_end_37:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_73;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_31 .. :try_end_37} :catch_73
	//    .local v1, "filter":Landroid/icu/text/UnicodeSet;
	pattern = id->substring(pos[0x0], ppos->getIndex());
	//    .local v2, "pattern":Ljava/lang/String;
	pos[0x0] = ppos->getIndex();
	if ( withParens[0x0] != 0x1 )
		goto label_cond_79;
	if ( !(( android::icu::impl::Utility::parseChar(id, pos, 0x29) ^ 0x1)) )  
		goto label_cond_79;
	pos[0x0] = start;
	return 0x0;
	// 1189    .line 275
	// 1190    .end local v2    # "pattern":Ljava/lang/String;
	// 1191    .end local v3    # "ppos":Ljava/text/ParsePosition;
	// 1192    .local v1, "filter":Landroid/icu/text/UnicodeSet;
label_cond_5e:
	cVar0 = 0x0;
	goto label_goto_13;
	// 1198    .line 276
label_cond_60:
	if ( withParens[0x0] != 0x1 )
		goto label_cond_16;
	if ( android::icu::impl::Utility::parseChar(id, pos, 0x28) )     
		goto label_cond_16;
	pos[0x0] = start;
	return 0x0;
	// 1227    .line 289
	// 1228    .end local v1    # "filter":Landroid/icu/text/UnicodeSet;
	// 1229    .restart local v3    # "ppos":Ljava/text/ParsePosition;
label_catch_73:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/IllegalArgumentException;
	pos[0x0] = start;
	return 0x0;
	// 1244    .line 305
	// 1245    .end local v0    # "e":Ljava/lang/IllegalArgumentException;
	// 1246    .local v1, "filter":Landroid/icu/text/UnicodeSet;
	// 1247    .restart local v2    # "pattern":Ljava/lang/String;
label_cond_79:
	if ( !(canonID) )  
		goto label_cond_b6;
	if ( dir )     
		goto label_cond_b7;
	if ( withParens[0x0] != 0x1 )
		goto label_cond_a0;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
label_cond_a0:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	canonID->append(cVar3->append(pattern)->append(0x3b)->toString());
	//    .end local v1    # "filter":Landroid/icu/text/UnicodeSet;
	//    .end local v2    # "pattern":Ljava/lang/String;
	//    .end local v3    # "ppos":Ljava/text/ParsePosition;
label_cond_b6:
label_goto_b6:
	return 0x0;
	// 1322    .line 312
	// 1323    .restart local v1    # "filter":Landroid/icu/text/UnicodeSet;
	// 1324    .restart local v2    # "pattern":Ljava/lang/String;
	// 1325    .restart local v3    # "ppos":Ljava/text/ParsePosition;
label_cond_b7:
	if ( withParens[0x0] )     
		goto label_cond_d9;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
label_cond_d9:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	canonID->insert(0x0, cVar5->append(pattern)->append(0x3b)->toString());
	goto label_goto_b6;

}
// .method public static parseSingleID(Ljava/lang/String;[II)Landroid/icu/text/TransliteratorIDParser$SingleID;
std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> android::icu::text::TransliteratorIDParser::parseSingleID(std::shared_ptr<java::lang::String> id,std::shared_ptr<int[]> pos,int dir)
{
	
	char cVar0;
	bool cVar1;
	char cVar2;
	std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> cVar3;
	int cVar4;
	int start;
	std::shared_ptr<java::lang::String> specsA;
	int pass;
	std::shared_ptr<android::icu::text::TransliteratorIDParser_S_Specs> specsA;
	std::shared_ptr<android::icu::text::TransliteratorIDParser_S_Specs> specsB;
	std::shared_ptr<java::lang::String> single;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> single;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "pos"    # [I
	//    .param p2, "dir"    # I
	cVar0 = 0x28;
	cVar1 = 0x1;
	cVar2 = 0x29;
	cVar3 = 0x0;
	cVar4 = 0x0;
	start = pos[cVar4];
	//    .local v5, "start":I
	specsA = 0x0;
	//    .local v3, "specsA":Landroid/icu/text/TransliteratorIDParser$Specs;
	0x0;
	//    .local v4, "specsB":Landroid/icu/text/TransliteratorIDParser$Specs;
	//    .local v1, "sawParen":Z
	pass = 0x1;
	//    .end local v3    # "specsA":Landroid/icu/text/TransliteratorIDParser$Specs;
	//    .local v0, "pass":I
label_goto_d:
	if ( pass >  0x2 )
		goto label_cond_3d;
	if ( pass != 0x2 )
		goto label_cond_1c;
	specsA = android::icu::text::TransliteratorIDParser::parseFilterID(id, pos, cVar1);
	//    .local v3, "specsA":Landroid/icu/text/TransliteratorIDParser$Specs;
	if ( specsA )     
		goto label_cond_1c;
	pos[cVar4] = start;
	return cVar3;
	// 1452    .line 198
	// 1453    .end local v3    # "specsA":Landroid/icu/text/TransliteratorIDParser$Specs;
label_cond_1c:
	if ( !(android::icu::impl::Utility::parseChar(id, pos, cVar0)) )  
		goto label_cond_3a;
	if ( android::icu::impl::Utility::parseChar(id, pos, cVar2) )     
		goto label_cond_3d;
	specsB = android::icu::text::TransliteratorIDParser::parseFilterID(id, pos, cVar1);
	//    .local v4, "specsB":Landroid/icu/text/TransliteratorIDParser$Specs;
	if ( !(specsB) )  
		goto label_cond_37;
	if ( !(( android::icu::impl::Utility::parseChar(id, pos, cVar2) ^ 0x1)) )  
		goto label_cond_3d;
label_cond_37:
	pos[cVar4] = start;
	return cVar3;
	// 1495    .line 190
	// 1496    .local v4, "specsB":Landroid/icu/text/TransliteratorIDParser$Specs;
label_cond_3a:
	pass = ( pass + 0x1);
	goto label_goto_d;
	// 1502    .line 214
	// 1503    .end local v4    # "specsB":Landroid/icu/text/TransliteratorIDParser$Specs;
label_cond_3d:
	if ( !(0x0) )  
		goto label_cond_9d;
	if ( dir )     
		goto label_cond_6f;
	single = android::icu::text::TransliteratorIDParser::specsToID(specsA, cVar4);
	//    .local v2, "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	single->canonID = cVar5->append(single->canonID)->append(cVar0)->append(android::icu::text::TransliteratorIDParser::specsToID(specsB, cVar4)->canonID)->append(cVar2)->toString();
	if ( !(specsA) )  
		goto label_cond_6e;
	single->filter = specsA->filter;
label_cond_6e:
label_goto_6e:
	return single;
	// 1566    .line 223
	// 1567    .end local v2    # "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
label_cond_6f:
	single = android::icu::text::TransliteratorIDParser::specsToID(specsB, cVar4);
	//    .restart local v2    # "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	single->canonID = cVar6->append(single->canonID)->append(cVar0)->append(android::icu::text::TransliteratorIDParser::specsToID(specsA, cVar4)->canonID)->append(cVar2)->toString();
	if ( !(specsB) )  
		goto label_cond_6e;
	single->filter = specsB->filter;
	goto label_goto_6e;
	// 1621    .line 232
	// 1622    .end local v2    # "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
label_cond_9d:
	if ( dir )     
		goto label_cond_a8;
	single = android::icu::text::TransliteratorIDParser::specsToID(specsA, cVar4);
	//    .restart local v2    # "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
label_cond_a3:
label_goto_a3:
	single->filter = specsA->filter;
	goto label_goto_6e;
	// 1641    .line 235
	// 1642    .end local v2    # "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
label_cond_a8:
	single = android::icu::text::TransliteratorIDParser::specsToSpecialInverse(specsA);
	//    .restart local v2    # "single":Landroid/icu/text/TransliteratorIDParser$SingleID;
	if ( single )     
		goto label_cond_a3;
	single = android::icu::text::TransliteratorIDParser::specsToID(specsA, cVar1);
	goto label_goto_a3;

}
// .method public static registerSpecialInverse(Ljava/lang/String;Ljava/lang/String;Z)V
void android::icu::text::TransliteratorIDParser::registerSpecialInverse(std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> inverseTarget,bool bidirectional)
{
	
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cVar0;
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cVar1;
	
	//    .param p0, "target"    # Ljava/lang/String;
	//    .param p1, "inverseTarget"    # Ljava/lang/String;
	//    .param p2, "bidirectional"    # Z
	cVar0 = std::make_shared<android::icu::util::CaseInsensitiveString>(target);
	android::icu::text::TransliteratorIDParser::SPECIAL_INVERSES->put(cVar0, inverseTarget);
	if ( !(bidirectional) )  
		goto label_cond_1e;
	if ( !(( target->equalsIgnoreCase(inverseTarget) ^ 0x1)) )  
		goto label_cond_1e;
	cVar1 = std::make_shared<android::icu::util::CaseInsensitiveString>(inverseTarget);
	android::icu::text::TransliteratorIDParser::SPECIAL_INVERSES->put(cVar1, target);
label_cond_1e:
	return;

}
// .method private static specsToID(Landroid/icu/text/TransliteratorIDParser$Specs;I)Landroid/icu/text/TransliteratorIDParser$SingleID;
std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> android::icu::text::TransliteratorIDParser::specsToID(std::shared_ptr<android::icu::text::TransliteratorIDParser_S_Specs> specs,int dir)
{
	
	char cVar0;
	std::shared_ptr<java::lang::String> basicPrefix;
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p0, "specs"    # Landroid/icu/text/TransliteratorIDParser$Specs;
	//    .param p1, "dir"    # I
	cVar0 = 0x2d;
	//    .local v3, "canonID":Ljava/lang/String;
	//    .local v0, "basicID":Ljava/lang/String;
	basicPrefix = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v1, "basicPrefix":Ljava/lang/String;
	if ( !(specs) )  
		goto label_cond_58;
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "buf":Ljava/lang/StringBuilder;
	if ( dir )     
		goto label_cond_72;
	if ( !(specs->sawSource) )  
		goto label_cond_5e;
	buf->append(specs->source)->append(cVar0);
label_goto_22:
	buf->append(specs->target);
label_goto_27:
	if ( !(specs->variant) )  
		goto label_cond_36;
	buf->append(0x2f)->append(specs->variant);
label_cond_36:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	if ( !(specs->filter) )  
		goto label_cond_54;
	buf->insert(0x0, specs->filter);
label_cond_54:
	//    .end local v2    # "buf":Ljava/lang/StringBuilder;
label_cond_58:
	cVar2 = std::make_shared<android::icu::text::TransliteratorIDParser_S_SingleID>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	return cVar2;
	// 1819    .line 711
	// 1820    .restart local v2    # "buf":Ljava/lang/StringBuilder;
label_cond_5e:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	basicPrefix = cVar3->append(specs->source)->append(cVar0)->toString();
	goto label_goto_22;
	// 1842    .line 715
label_cond_72:
	buf->append(specs->target)->append(cVar0)->append(specs->source);
	goto label_goto_27;

}
// .method private static specsToSpecialInverse(Landroid/icu/text/TransliteratorIDParser$Specs;)Landroid/icu/text/TransliteratorIDParser$SingleID;
std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> android::icu::text::TransliteratorIDParser::specsToSpecialInverse(std::shared_ptr<android::icu::text::TransliteratorIDParser_S_Specs> specs)
{
	
	char cVar0;
	std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> cVar1;
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cVar2;
	std::shared_ptr<java::lang::String> inverseTarget;
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::String> basicID;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> cVar5;
	
	//    .param p0, "specs"    # Landroid/icu/text/TransliteratorIDParser$Specs;
	cVar0 = 0x2f;
	cVar1 = 0x0;
	if ( specs->source->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any"))) )     
		goto label_cond_f;
	return cVar1;
	// 1884    .line 740
label_cond_f:
	cVar2 = std::make_shared<android::icu::util::CaseInsensitiveString>(specs->target);
	inverseTarget = android::icu::text::TransliteratorIDParser::SPECIAL_INVERSES->get(cVar2);
	inverseTarget->checkCast("java::lang::String");
	//    .local v2, "inverseTarget":Ljava/lang/String;
	if ( !(inverseTarget) )  
		goto label_cond_83;
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "buf":Ljava/lang/StringBuilder;
	if ( !(specs->filter) )  
		goto label_cond_2e;
	buf->append(specs->filter);
label_cond_2e:
	if ( !(specs->sawSource) )  
		goto label_cond_3e;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any")))->append(0x2d);
label_cond_3e:
	buf->append(inverseTarget);
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	basicID = cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-")))->append(inverseTarget)->toString();
	//    .local v0, "basicID":Ljava/lang/String;
	if ( !(specs->variant) )  
		goto label_cond_79;
	buf->append(cVar0)->append(specs->variant);
	cVar4 = std::make_shared<java::lang::StringBuilder>();
label_cond_79:
	cVar5 = std::make_shared<android::icu::text::TransliteratorIDParser_S_SingleID>(buf->toString(), basicID);
	return cVar5;
	// 2010    .line 762
	// 2011    .end local v0    # "basicID":Ljava/lang/String;
	// 2012    .end local v1    # "buf":Ljava/lang/StringBuilder;
label_cond_83:
	return cVar1;

}


