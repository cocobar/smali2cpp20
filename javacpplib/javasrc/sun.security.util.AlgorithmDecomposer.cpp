// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\AlgorithmDecomposer.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.HashSet.h"
#include "java.util.Set.h"
#include "java.util.regex.Pattern.h"
#include "sun.security.util.AlgorithmDecomposer.h"

static sun::security::util::AlgorithmDecomposer::pattern;
static sun::security::util::AlgorithmDecomposer::transPattern;
// .method static constructor <clinit>()V
void sun::security::util::AlgorithmDecomposer::static_cinit()
{
	
	sun::security::util::AlgorithmDecomposer::transPattern = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")));
	sun::security::util::AlgorithmDecomposer::pattern = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("with|and")), 0x2);
	return;

}
// .method public constructor <init>()V
sun::security::util::AlgorithmDecomposer::AlgorithmDecomposer()
{
	
	// 047    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static decomposeImpl(Ljava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::util::AlgorithmDecomposer::decomposeImpl(std::shared_ptr<java::lang::String> algorithm)
{
	
	int cVar0;
	auto transTockens;
	std::shared_ptr<java::util::HashSet> elements;
	int cVar1;
	std::shared_ptr<java::lang::String> transTocken;
	auto tokens;
	int cVar3;
	std::shared_ptr<java::lang::String> token;
	
	//    .param p0, "algorithm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 056        value = {
	// 057            "(",
	// 058            "Ljava/lang/String;",
	// 059            ")",
	// 060            "Ljava/util/Set",
	// 061            "<",
	// 062            "Ljava/lang/String;",
	// 063            ">;"
	// 064        }
	// 065    .end annotation
	cVar0 = 0x0;
	transTockens = sun::security::util::AlgorithmDecomposer::transPattern->split(algorithm);
	//    .local v4, "transTockens":[Ljava/lang/String;
	elements = std::make_shared<java::util::HashSet>();
	//    .local v0, "elements":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	cVar1 = cVar0;
label_goto_e:
	if ( cVar1 >= transTockens->size() )
		goto label_cond_39;
	transTocken = transTockens[cVar1];
	//    .local v3, "transTocken":Ljava/lang/String;
	if ( !(transTocken) )  
		goto label_cond_1a;
	if ( transTocken->length() )     
		goto label_cond_1e;
label_cond_1a:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_e;
	// 112    .line 57
label_cond_1e:
	tokens = sun::security::util::AlgorithmDecomposer::pattern->split(transTocken);
	//    .local v2, "tokens":[Ljava/lang/String;
	cVar3 = cVar0;
label_goto_26:
	if ( cVar3 >= tokens->size() )
		goto label_cond_1a;
	token = tokens[cVar3];
	//    .local v1, "token":Ljava/lang/String;
	if ( !(token) )  
		goto label_cond_32;
	if ( token->length() )     
		goto label_cond_35;
label_cond_32:
label_goto_32:
	cVar3 = ( cVar3 + 0x1);
	goto label_goto_26;
	// 148    .line 64
label_cond_35:
	elements->add(token);
	goto label_goto_32;
	// 154    .line 67
	// 155    .end local v1    # "token":Ljava/lang/String;
	// 156    .end local v2    # "tokens":[Ljava/lang/String;
	// 157    .end local v3    # "transTocken":Ljava/lang/String;
label_cond_39:
	return elements;

}
// .method public static decomposeOneHash(Ljava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::util::AlgorithmDecomposer::decomposeOneHash(std::shared_ptr<java::lang::String> algorithm)
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	std::shared_ptr<java::util::Set> elements;
	
	//    .param p0, "algorithm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 166        value = {
	// 167            "(",
	// 168            "Ljava/lang/String;",
	// 169            ")",
	// 170            "Ljava/util/Set",
	// 171            "<",
	// 172            "Ljava/lang/String;",
	// 173            ">;"
	// 174        }
	// 175    .end annotation
	if ( !(algorithm) )  
		goto label_cond_8;
	if ( algorithm->length() )     
		goto label_cond_e;
label_cond_8:
	cVar0 = std::make_shared<java::util::HashSet>();
	return cVar0;
	// 195    .line 154
label_cond_e:
	elements = sun::security::util::AlgorithmDecomposer::decomposeImpl(algorithm);
	//    .local v0, "elements":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	sun::security::util::AlgorithmDecomposer::hasLoop(elements, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-1")), std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1")));
	sun::security::util::AlgorithmDecomposer::hasLoop(elements, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-224")), std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA224")));
	sun::security::util::AlgorithmDecomposer::hasLoop(elements, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-256")), std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA256")));
	sun::security::util::AlgorithmDecomposer::hasLoop(elements, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-384")), std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA384")));
	sun::security::util::AlgorithmDecomposer::hasLoop(elements, std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-512")), std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA512")));
	return elements;

}
// .method private static hasLoop(Ljava/util/Set;Ljava/lang/String;Ljava/lang/String;)V
void sun::security::util::AlgorithmDecomposer::hasLoop(std::shared_ptr<java::util::Set<java::lang::String>> elements,std::shared_ptr<java::lang::String> find,std::shared_ptr<java::lang::String> replace)
{
	
	//    .param p1, "find"    # Ljava/lang/String;
	//    .param p2, "replace"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 246        value = {
	// 247            "(",
	// 248            "Ljava/util/Set",
	// 249            "<",
	// 250            "Ljava/lang/String;",
	// 251            ">;",
	// 252            "Ljava/lang/String;",
	// 253            "Ljava/lang/String;",
	// 254            ")V"
	// 255        }
	// 256    .end annotation
	//    .local p0, "elements":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(elements->contains(find)) )  
		goto label_cond_12;
	if ( elements->contains(replace) )     
		goto label_cond_f;
	elements->add(replace);
label_cond_f:
	elements->remove(find);
label_cond_12:
	return;

}
// .method public static hashName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::AlgorithmDecomposer::hashName(std::shared_ptr<java::lang::String> algorithm)
{
	
	//    .param p0, "algorithm"    # Ljava/lang/String;
	return algorithm->replace(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));

}
// .method public decompose(Ljava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::util::AlgorithmDecomposer::decompose(std::shared_ptr<java::lang::String> algorithm)
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	std::shared_ptr<java::util::Set> elements;
	
	//    .param p1, "algorithm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 309        value = {
	// 310            "(",
	// 311            "Ljava/lang/String;",
	// 312            ")",
	// 313            "Ljava/util/Set",
	// 314            "<",
	// 315            "Ljava/lang/String;",
	// 316            ">;"
	// 317        }
	// 318    .end annotation
	if ( !(algorithm) )  
		goto label_cond_8;
	if ( algorithm->length() )     
		goto label_cond_e;
label_cond_8:
	cVar0 = std::make_shared<java::util::HashSet>();
	return cVar0;
	// 338    .line 84
label_cond_e:
	elements = sun::security::util::AlgorithmDecomposer::decomposeImpl(algorithm);
	//    .local v0, "elements":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1")))) )  
		goto label_cond_2c;
	if ( !(( elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-1"))) ^ 0x1)) )  
		goto label_cond_2c;
	elements->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-1")));
label_cond_2c:
	if ( !(elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-1")))) )  
		goto label_cond_46;
	if ( !(( elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1"))) ^ 0x1)) )  
		goto label_cond_46;
	elements->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1")));
label_cond_46:
	if ( !(elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA224")))) )  
		goto label_cond_60;
	if ( !(( elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-224"))) ^ 0x1)) )  
		goto label_cond_60;
	elements->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-224")));
label_cond_60:
	if ( !(elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-224")))) )  
		goto label_cond_7a;
	if ( !(( elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA224"))) ^ 0x1)) )  
		goto label_cond_7a;
	elements->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA224")));
label_cond_7a:
	if ( !(elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA256")))) )  
		goto label_cond_94;
	if ( !(( elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-256"))) ^ 0x1)) )  
		goto label_cond_94;
	elements->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-256")));
label_cond_94:
	if ( !(elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-256")))) )  
		goto label_cond_ae;
	if ( !(( elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA256"))) ^ 0x1)) )  
		goto label_cond_ae;
	elements->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA256")));
label_cond_ae:
	if ( !(elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA384")))) )  
		goto label_cond_c8;
	if ( !(( elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-384"))) ^ 0x1)) )  
		goto label_cond_c8;
	elements->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-384")));
label_cond_c8:
	if ( !(elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-384")))) )  
		goto label_cond_e2;
	if ( !(( elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA384"))) ^ 0x1)) )  
		goto label_cond_e2;
	elements->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA384")));
label_cond_e2:
	if ( !(elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA512")))) )  
		goto label_cond_fc;
	if ( !(( elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-512"))) ^ 0x1)) )  
		goto label_cond_fc;
	elements->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-512")));
label_cond_fc:
	if ( !(elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-512")))) )  
		goto label_cond_116;
	if ( !(( elements->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA512"))) ^ 0x1)) )  
		goto label_cond_116;
	elements->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA512")));
label_cond_116:
	return elements;

}


