// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UnicodeRegex.smali
#include "java2ctype.h"
#include "android.icu.impl.UnicodeRegex_S_1.h"
#include "android.icu.impl.UnicodeRegex.h"
#include "android.icu.text.SymbolTable.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.io.BufferedReader.h"
#include "java.io.FileInputStream.h"
#include "java.io.InputStream.h"
#include "java.io.InputStreamReader.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.text.ParsePosition.h"
#include "java.util.Arrays.h"
#include "java.util.Collection.h"
#include "java.util.Comparator.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashSet.h"
#include "java.util.List.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"
#include "java.util.regex.Pattern.h"

static android::icu::impl::UnicodeRegex::STANDARD;
// .method static constructor <clinit>()V
void android::icu::impl::UnicodeRegex::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::UnicodeRegex> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::UnicodeRegex>();
	android::icu::impl::UnicodeRegex::STANDARD = cVar0;
	return;

}
// .method public constructor <init>()V
android::icu::impl::UnicodeRegex::UnicodeRegex()
{
	
	std::shared_ptr<android::icu::impl::UnicodeRegex_S_1> cVar0;
	
	// 077    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->bnfCommentString = std::make_shared<java::lang::String>(std::make_shared<char[]>("#"));
	this->bnfVariableInfix = std::make_shared<java::lang::String>(std::make_shared<char[]>("="));
	this->bnfLineSeparator = std::make_shared<java::lang::String>(std::make_shared<char[]>("\n"));
	cVar0 = std::make_shared<android::icu::impl::UnicodeRegex_S_1>(this);
	this->LongestFirst = cVar0;
	return;

}
// .method public static appendLines(Ljava/util/List;Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> android::icu::impl::UnicodeRegex::appendLines(std::shared_ptr<java::util::List<java::lang::String>> result,std::shared_ptr<java::io::InputStream> inputStream,std::shared_ptr<java::lang::String> cVar1)
{
	
	std::shared_ptr<java::io::BufferedReader> in;
	std::shared_ptr<java::io::InputStreamReader> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::Object> line;
	
	//    .param p1, "inputStream"    # Ljava/io/InputStream;
	//    .param p2, "encoding"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 110        value = {
	// 111            "(",
	// 112            "Ljava/util/List",
	// 113            "<",
	// 114            "Ljava/lang/String;",
	// 115            ">;",
	// 116            "Ljava/io/InputStream;",
	// 117            "Ljava/lang/String;",
	// 118            ")",
	// 119            "Ljava/util/List",
	// 120            "<",
	// 121            "Ljava/lang/String;",
	// 122            ">;"
	// 123        }
	// 124    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 127        value = {
	// 128            Ljava/io/UnsupportedEncodingException;,
	// 129            Ljava/io/IOException;
	// 130        }
	// 131    .end annotation
	//    .local p0, "result":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	if ( cVar1 )     
		goto label_cond_9;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF-8"));
	//    .end local p2    # "encoding":Ljava/lang/String;
label_cond_9:
	cVar0 = std::make_shared<java::io::InputStreamReader>(inputStream, cVar1);
	in = std::make_shared<java::io::BufferedReader>(cVar0);
	//    .local v0, "in":Ljava/io/BufferedReader;
label_goto_f:
	line = in->readLine();
	//    .local v1, "line":Ljava/lang/String;
	if ( line )     
		goto label_cond_16;
	return result;
	// 164    .line 302
label_cond_16:
	result->add(line);
	goto label_goto_f;

}
// .method public static appendLines(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> android::icu::impl::UnicodeRegex::appendLines(std::shared_ptr<java::util::List<java::lang::String>> result,std::shared_ptr<java::lang::String> file,std::shared_ptr<java::lang::String> encoding)
{
	
	std::shared_ptr<java::io::FileInputStream> is;
	
	//    .param p1, "file"    # Ljava/lang/String;
	//    .param p2, "encoding"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 176        value = {
	// 177            "(",
	// 178            "Ljava/util/List",
	// 179            "<",
	// 180            "Ljava/lang/String;",
	// 181            ">;",
	// 182            "Ljava/lang/String;",
	// 183            "Ljava/lang/String;",
	// 184            ")",
	// 185            "Ljava/util/List",
	// 186            "<",
	// 187            "Ljava/lang/String;",
	// 188            ">;"
	// 189        }
	// 190    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 193        value = {
	// 194            Ljava/io/IOException;
	// 195        }
	// 196    .end annotation
	//    .local p0, "result":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	is = std::make_shared<java::io::FileInputStream>(file);
	//    .local v0, "is":Ljava/io/InputStream;
	try {
	//label_try_start_5:
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_5 .. :try_end_8} :catchall_d
	is->close();
	return android::icu::impl::UnicodeRegex::appendLines(result, is, encoding);
	// 220    .line 283
label_catchall_d:
	// move-exception
	
	is->close();
	// throw
	throw;

}
// .method public static compile(Ljava/lang/String;)Ljava/util/regex/Pattern;
std::shared_ptr<java::util::regex::Pattern> android::icu::impl::UnicodeRegex::compile(std::shared_ptr<java::lang::String> regex)
{
	
	//    .param p0, "regex"    # Ljava/lang/String;
	return java::util::regex::Pattern::compile(android::icu::impl::UnicodeRegex::STANDARD->transform(regex));

}
// .method public static compile(Ljava/lang/String;I)Ljava/util/regex/Pattern;
std::shared_ptr<java::util::regex::Pattern> android::icu::impl::UnicodeRegex::compile(std::shared_ptr<java::lang::String> regex,int options)
{
	
	//    .param p0, "regex"    # Ljava/lang/String;
	//    .param p1, "options"    # I
	return java::util::regex::Pattern::compile(android::icu::impl::UnicodeRegex::STANDARD->transform(regex), options);

}
// .method public static fix(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UnicodeRegex::fix(std::shared_ptr<java::lang::String> regex)
{
	
	//    .param p0, "regex"    # Ljava/lang/String;
	return android::icu::impl::UnicodeRegex::STANDARD->transform(regex);

}
// .method private getVariables(Ljava/util/List;)Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::impl::UnicodeRegex::getVariables(std::shared_ptr<java::util::List<java::lang::String>> lines)
{
	
	int cVar0;
	std::shared_ptr<java::util::TreeMap> variables;
	int variable;
	std::shared_ptr<java::lang::StringBuffer> definition;
	std::shared_ptr<java::util::Iterator> line_S_iterator;
	std::shared_ptr<java::lang::String> line;
	int count;
	int hashPos;
	std::shared_ptr<java::lang::String> trimline;
	std::shared_ptr<java::lang::String> linePart;
	int terminated;
	int equalsPos;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::Object> variable;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar7;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 288        value = {
	// 289            "(",
	// 290            "Ljava/util/List",
	// 291            "<",
	// 292            "Ljava/lang/String;",
	// 293            ">;)",
	// 294            "Ljava/util/Map",
	// 295            "<",
	// 296            "Ljava/lang/String;",
	// 297            "Ljava/lang/String;",
	// 298            ">;"
	// 299        }
	// 300    .end annotation
	//    .local p1, "lines":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	cVar0 = 0x0;
	variables = std::make_shared<java::util::TreeMap>(this->LongestFirst);
	//    .local v10, "variables":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	variable = 0x0;
	//    .local v9, "variable":Ljava/lang/String;
	definition = std::make_shared<java::lang::StringBuffer>();
	//    .local v1, "definition":Ljava/lang/StringBuffer;
	//    .local v0, "count":I
	line_S_iterator = lines->iterator();
	//    .end local v9    # "variable":Ljava/lang/String;
	//    .local v5, "line$iterator":Ljava/util/Iterator;
label_cond_13:
label_goto_13:
	if ( !(line_S_iterator->hasNext()) )  
		goto label_cond_111;
	line = line_S_iterator->next();
	line->checkCast("java::lang::String");
	//    .local v4, "line":Ljava/lang/String;
	count = ( count + 0x1);
	if ( !(line->length()) )  
		goto label_cond_13;
	if ( line->charAt(cVar0) != 0xfeff )
		goto label_cond_35;
	line = line->substring(0x1);
label_cond_35:
	if ( !(this->bnfCommentString) )  
		goto label_cond_45;
	hashPos = line->indexOf(this->bnfCommentString);
	//    .local v3, "hashPos":I
	if ( hashPos < 0 ) 
		goto label_cond_45;
	line = line->substring(cVar0, hashPos);
	//    .end local v3    # "hashPos":I
label_cond_45:
	trimline = line->trim();
	//    .local v8, "trimline":Ljava/lang/String;
	if ( !(trimline->length()) )  
		goto label_cond_13;
	linePart = line;
	//    .local v6, "linePart":Ljava/lang/String;
	if ( !(line->trim()->length()) )  
		goto label_cond_13;
	terminated = trimline->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")));
	//    .local v7, "terminated":Z
	if ( !(terminated) )  
		goto label_cond_6d;
	linePart = linePart->substring(cVar0, linePart->lastIndexOf(0x3b));
label_cond_6d:
	equalsPos = linePart->indexOf(this->bnfVariableInfix);
	//    .local v2, "equalsPos":I
	if ( equalsPos < 0 ) 
		goto label_cond_e0;
	if ( !(variable) )  
		goto label_cond_9c;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing \';\' before ")))->append(count)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") ")))->append(line)->toString());
	// throw
	throw cVar1;
	// 498    .line 403
label_cond_9c:
	variable = linePart->substring(cVar0, equalsPos)->trim();
	//    .local v9, "variable":Ljava/lang/String;
	if ( !(variables->containsKey(variable)) )  
		goto label_cond_c4;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate variable definition in ")))->append(line)->toString());
	// throw
	throw cVar3;
	// 541    .line 407
label_cond_c4:
	definition->append(linePart->substring(( equalsPos + 0x1))->trim());
	//    .end local v9    # "variable":Ljava/lang/String;
label_goto_d1:
	if ( !(terminated) )  
		goto label_cond_13;
	variables->put(variable, definition->toString());
	//    .local v9, "variable":Ljava/lang/String;
	definition->setLength(cVar0);
	goto label_goto_13;
	// 576    .line 409
	// 577    .end local v9    # "variable":Ljava/lang/String;
label_cond_e0:
	if ( variable )     
		goto label_cond_107;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing \'=\' at ")))->append(count)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") ")))->append(line)->toString());
	// throw
	throw cVar5;
	// 616    .line 412
label_cond_107:
	definition->append(this->bnfLineSeparator)->append(linePart);
	goto label_goto_d1;
	// 628    .line 421
	// 629    .end local v2    # "equalsPos":I
	// 630    .end local v4    # "line":Ljava/lang/String;
	// 631    .end local v6    # "linePart":Ljava/lang/String;
	// 632    .end local v7    # "terminated":Z
	// 633    .end local v8    # "trimline":Ljava/lang/String;
label_cond_111:
	if ( !(variable) )  
		goto label_cond_11c;
	cVar7 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing \';\' at end")));
	// throw
	throw cVar7;
	// 646    .line 424
label_cond_11c:
	return variables;

}
// .method private processSet(Ljava/lang/String;ILjava/lang/StringBuilder;Landroid/icu/text/UnicodeSet;Ljava/text/ParsePosition;)I
int android::icu::impl::UnicodeRegex::processSet(std::shared_ptr<java::lang::String> regex,int i,std::shared_ptr<java::lang::StringBuilder> result,std::shared_ptr<android::icu::text::UnicodeSet> temp,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<android::icu::text::UnicodeSet> x;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "regex"    # Ljava/lang/String;
	//    .param p2, "i"    # I
	//    .param p3, "result"    # Ljava/lang/StringBuilder;
	//    .param p4, "temp"    # Landroid/icu/text/UnicodeSet;
	//    .param p5, "pos"    # Ljava/text/ParsePosition;
	try {
	//label_try_start_0:
	pos->setIndex(i);
	x = temp->clear()->applyPattern(regex, pos, this->symbolTable, 0x0);
	//    .local v1, "x":Landroid/icu/text/UnicodeSet;
	x->complement()->complement();
	result->append(x->toPattern(0x0));
	//label_try_end_20:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	//    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_20} :catch_24
	return ( pos->getIndex() + -0x1);
	// 706    .line 350
	// 707    .end local v1    # "x":Landroid/icu/text/UnicodeSet;
label_catch_24:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error in ")))->append(regex)->toString());
	cVar2 = cVar0->initCause(getCatchExcetionFromList);
	cVar2->checkCast("java::lang::IllegalArgumentException");
	// throw
	throw cVar2;

}
// .method public cloneAsThawed()Landroid/icu/impl/UnicodeRegex;
std::shared_ptr<android::icu::impl::UnicodeRegex> android::icu::impl::UnicodeRegex::cloneAsThawed()
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<android::icu::impl::UnicodeRegex> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	cVar0 = this->clone();
	cVar0->checkCast("android::icu::impl::UnicodeRegex");
	//label_try_end_6:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_6} :catch_7
	return cVar0;
	// 762    .line 317
label_catch_7:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar1;

}
// .method public compileBnf(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UnicodeRegex::compileBnf(std::shared_ptr<java::lang::String> bnfLines)
{
	
	//    .param p1, "bnfLines"    # Ljava/lang/String;
	return this->compileBnf(java::util::Arrays::asList(bnfLines->split(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\r\\n?|\\n")))));

}
// .method public compileBnf(Ljava/util/List;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UnicodeRegex::compileBnf(std::shared_ptr<java::util::List<java::lang::String>> lines)
{
	
	std::shared_ptr<java::util::Map> variables;
	std::shared_ptr<java::util::LinkedHashSet> unused;
	int i;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<java::lang::String> variable;
	std::shared_ptr<java::lang::String> definition;
	std::shared_ptr<java::util::Iterator> entry2_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry2;
	std::shared_ptr<java::lang::String> variable2;
	std::shared_ptr<java::lang::String> definition2;
	std::shared_ptr<java::lang::String> altered2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 813        value = {
	// 814            "(",
	// 815            "Ljava/util/List",
	// 816            "<",
	// 817            "Ljava/lang/String;",
	// 818            ">;)",
	// 819            "Ljava/lang/String;"
	// 820        }
	// 821    .end annotation
	//    .local p1, "lines":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	variables = this->getVariables(lines);
	//    .local v11, "variables":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	unused = std::make_shared<java::util::LinkedHashSet>(variables->keySet());
	//    .local v8, "unused":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	i = 0x0;
	//    .local v7, "i":I
label_goto_e:
	if ( i >= 0x2 )
		goto label_cond_6b;
	entry_S_iterator = variables->entrySet()->iterator();
	//    .local v4, "entry$iterator":Ljava/util/Iterator;
label_cond_19:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_68;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v3, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	variable = entry->getKey();
	variable->checkCast("java::lang::String");
	//    .local v9, "variable":Ljava/lang/String;
	definition = entry->getValue();
	definition->checkCast("java::lang::String");
	//    .local v1, "definition":Ljava/lang/String;
	entry2_S_iterator = variables->entrySet()->iterator();
	//    .local v6, "entry2$iterator":Ljava/util/Iterator;
label_cond_39:
label_goto_39:
	if ( !(entry2_S_iterator->hasNext()) )  
		goto label_cond_19;
	entry2 = entry2_S_iterator->next();
	entry2->checkCast("java::util::Map_S_Entry");
	//    .local v5, "entry2":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	variable2 = entry2->getKey();
	variable2->checkCast("java::lang::String");
	//    .local v10, "variable2":Ljava/lang/String;
	definition2 = entry2->getValue();
	definition2->checkCast("java::lang::String");
	//    .local v2, "definition2":Ljava/lang/String;
	if ( variable->equals(variable2) )     
		goto label_cond_39;
	altered2 = definition2->replace(variable, definition);
	//    .local v0, "altered2":Ljava/lang/String;
	if ( altered2->equals(definition2) )     
		goto label_cond_39;
	unused->remove(variable);
	variables->put(variable2, altered2);
	goto label_goto_39;
	// 959    .line 215
	// 960    .end local v0    # "altered2":Ljava/lang/String;
	// 961    .end local v1    # "definition":Ljava/lang/String;
	// 962    .end local v2    # "definition2":Ljava/lang/String;
	// 963    .end local v3    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	// 964    .end local v5    # "entry2":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	// 965    .end local v6    # "entry2$iterator":Ljava/util/Iterator;
	// 966    .end local v9    # "variable":Ljava/lang/String;
	// 967    .end local v10    # "variable2":Ljava/lang/String;
label_cond_68:
	i = ( i + 0x1);
	goto label_goto_e;
	// 973    .line 241
	// 974    .end local v4    # "entry$iterator":Ljava/util/Iterator;
label_cond_6b:
	if ( unused->size() == 0x1 )
		goto label_cond_8c;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Not a single root: ")))->append(unused)->toString());
	// throw
	throw cVar0;
	// 1009    .line 244
label_cond_8c:
	cVar2 = variables->get(unused->iterator()->next());
	cVar2->checkCast("java::lang::String");
	return cVar2;

}
// .method public freeze()Landroid/icu/impl/UnicodeRegex;
std::shared_ptr<android::icu::impl::UnicodeRegex> android::icu::impl::UnicodeRegex::freeze()
{
	
	return this;

}
// .method public getBnfCommentString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UnicodeRegex::getBnfCommentString()
{
	
	return this->bnfCommentString;

}
// .method public getBnfLineSeparator()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UnicodeRegex::getBnfLineSeparator()
{
	
	return this->bnfLineSeparator;

}
// .method public getBnfVariableInfix()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UnicodeRegex::getBnfVariableInfix()
{
	
	return this->bnfVariableInfix;

}
// .method public getSymbolTable()Landroid/icu/text/SymbolTable;
std::shared_ptr<android::icu::text::SymbolTable> android::icu::impl::UnicodeRegex::getSymbolTable()
{
	
	return this->symbolTable;

}
// .method public isFrozen()Z
bool android::icu::impl::UnicodeRegex::isFrozen()
{
	
	return 0x1;

}
// .method public setBnfCommentString(Ljava/lang/String;)V
void android::icu::impl::UnicodeRegex::setBnfCommentString(std::shared_ptr<java::lang::String> bnfCommentString)
{
	
	//    .param p1, "bnfCommentString"    # Ljava/lang/String;
	this->bnfCommentString = bnfCommentString;
	return;

}
// .method public setBnfLineSeparator(Ljava/lang/String;)V
void android::icu::impl::UnicodeRegex::setBnfLineSeparator(std::shared_ptr<java::lang::String> bnfLineSeparator)
{
	
	//    .param p1, "bnfLineSeparator"    # Ljava/lang/String;
	this->bnfLineSeparator = bnfLineSeparator;
	return;

}
// .method public setBnfVariableInfix(Ljava/lang/String;)V
void android::icu::impl::UnicodeRegex::setBnfVariableInfix(std::shared_ptr<java::lang::String> bnfVariableInfix)
{
	
	//    .param p1, "bnfVariableInfix"    # Ljava/lang/String;
	this->bnfVariableInfix = bnfVariableInfix;
	return;

}
// .method public setSymbolTable(Landroid/icu/text/SymbolTable;)Landroid/icu/impl/UnicodeRegex;
std::shared_ptr<android::icu::impl::UnicodeRegex> android::icu::impl::UnicodeRegex::setSymbolTable(std::shared_ptr<android::icu::text::SymbolTable> symbolTable)
{
	
	//    .param p1, "symbolTable"    # Landroid/icu/text/SymbolTable;
	this->symbolTable = symbolTable;
	return this;

}
// .method public transform(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UnicodeRegex::transform(std::shared_ptr<java::lang::String> regex)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<android::icu::text::UnicodeSet> temp;
	std::shared_ptr<java::text::ParsePosition> pos;
	int state;
	int i;
	char ch;
	
	//    .param p1, "regex"    # Ljava/lang/String;
	cVar0 = 0x5c;
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "result":Ljava/lang/StringBuilder;
	temp = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v4, "temp":Landroid/icu/text/UnicodeSet;
	pos = std::make_shared<java::text::ParsePosition>(0x0);
	//    .local v5, "pos":Ljava/text/ParsePosition;
	state = 0x0;
	//    .local v7, "state":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_14:
	if ( i >= regex->length() )
		goto label_cond_5c;
	ch = regex->charAt(i);
	//    .local v6, "ch":C
	// switch
	{
	auto item = ( state );
	if (item == 0) goto label_pswitch_27;
	if (item == 1) goto label_pswitch_49;
	if (item == 2) goto label_pswitch_51;
	if (item == 3) goto label_pswitch_55;
	}
label_cond_21:
label_goto_21:
	result->append(ch);
label_goto_24:
	i = ( i + 0x1);
	goto label_goto_14;
	// 1222    .line 103
label_pswitch_27:
	if ( ch != cVar0 )
		goto label_cond_38;
	if ( !(android::icu::text::UnicodeSet::resemblesPattern(regex, i)) )  
		goto label_cond_36;
	i = this->processSet(regex, i, result, temp, pos);
	goto label_goto_24;
	// 1244    .line 109
label_cond_36:
	state = 0x1;
	goto label_goto_21;
	// 1250    .line 110
label_cond_38:
	if ( ch != 0x5b )
		goto label_cond_21;
	if ( !(android::icu::text::UnicodeSet::resemblesPattern(regex, i)) )  
		goto label_cond_21;
	i = this->processSet(regex, i, result, temp, pos);
	goto label_goto_24;
	// 1274    .line 120
label_pswitch_49:
	if ( ch != 0x51 )
		goto label_cond_4f;
	state = 0x1;
	goto label_goto_21;
	// 1285    .line 123
label_cond_4f:
	state = 0x0;
	goto label_goto_21;
	// 1291    .line 128
label_pswitch_51:
	if ( ch != cVar0 )
		goto label_cond_21;
	state = 0x3;
	goto label_goto_21;
	// 1300    .line 134
label_pswitch_55:
	if ( ch != 0x45 )
		goto label_cond_5a;
	0x0;
label_cond_5a:
	state = 0x2;
	goto label_goto_21;
	// 1316    .line 142
	// 1317    .end local v6    # "ch":C
label_cond_5c:
	return result->toString();
	// 1325    .line 101
	// 1326    nop
	// 1328    :pswitch_data_62
	// 1329    .packed-switch 0x0
	// 1330        :pswitch_27
	// 1331        :pswitch_49
	// 1332        :pswitch_51
	// 1333        :pswitch_55
	// 1334    .end packed-switch

}


