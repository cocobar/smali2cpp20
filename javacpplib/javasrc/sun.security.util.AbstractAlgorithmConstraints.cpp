// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\AbstractAlgorithmConstraints.smali
#include "java2ctype.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.AccessController.h"
#include "java.util.Iterator.h"
#include "java.util.Set.h"
#include "sun.security.util.AbstractAlgorithmConstraints_S_1.h"
#include "sun.security.util.AbstractAlgorithmConstraints.h"
#include "sun.security.util.AlgorithmDecomposer.h"

// .method protected constructor <init>(Lsun/security/util/AlgorithmDecomposer;)V
sun::security::util::AbstractAlgorithmConstraints::AbstractAlgorithmConstraints(std::shared_ptr<sun::security::util::AlgorithmDecomposer> decomposer)
{
	
	//    .param p1, "decomposer"    # Lsun/security/util/AlgorithmDecomposer;
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->decomposer = decomposer;
	return;

}
// .method static checkAlgorithm([Ljava/lang/String;Ljava/lang/String;Lsun/security/util/AlgorithmDecomposer;)Z
bool sun::security::util::AbstractAlgorithmConstraints::checkAlgorithm(std::shared_ptr<std::vector<java::lang::String>> algorithms,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<sun::security::util::AlgorithmDecomposer> decomposer)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::Iterable> elements;
	int cVar2;
	std::shared_ptr<java::lang::String> item;
	std::shared_ptr<java::util::Iterator> element_S_iterator;
	std::shared_ptr<java::lang::String> element;
	
	//    .param p0, "algorithms"    # [Ljava/lang/String;
	//    .param p1, "algorithm"    # Ljava/lang/String;
	//    .param p2, "decomposer"    # Lsun/security/util/AlgorithmDecomposer;
	cVar0 = 0x0;
	if ( !(algorithm) )  
		goto label_cond_9;
	if ( algorithm->length() )     
		goto label_cond_12;
label_cond_9:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No algorithm name specified")));
	// throw
	throw cVar1;
	// 057    .line 83
label_cond_12:
	elements = 0x0;
	//    .local v2, "elements":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	cVar2 = cVar0;
	//    .end local v2    # "elements":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_goto_15:
	if ( cVar2 >= algorithms->size() )
		goto label_cond_48;
	item = algorithms[cVar2];
	//    .local v3, "item":Ljava/lang/String;
	if ( !(item) )  
		goto label_cond_21;
	if ( !(item->isEmpty()) )  
		goto label_cond_24;
label_cond_21:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_15;
	// 089    .line 90
label_cond_24:
	if ( !(item->equalsIgnoreCase(algorithm)) )  
		goto label_cond_2b;
	return cVar0;
	// 100    .line 95
label_cond_2b:
	if ( elements )     
		goto label_cond_31;
	elements = decomposer->decompose(algorithm);
label_cond_31:
	element_S_iterator = elements->iterator();
	//    .local v1, "element$iterator":Ljava/util/Iterator;
label_cond_35:
	if ( !(element_S_iterator->hasNext()) )  
		goto label_cond_21;
	element = element_S_iterator->next();
	element->checkCast("java::lang::String");
	//    .local v0, "element":Ljava/lang/String;
	if ( !(item->equalsIgnoreCase(element)) )  
		goto label_cond_35;
	return cVar0;
	// 140    .line 107
	// 141    .end local v0    # "element":Ljava/lang/String;
	// 142    .end local v1    # "element$iterator":Ljava/util/Iterator;
	// 143    .end local v3    # "item":Ljava/lang/String;
label_cond_48:
	return 0x1;

}
// .method static getAlgorithms(Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::AbstractAlgorithmConstraints::getAlgorithms(std::shared_ptr<java::lang::String> propertyName)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<sun::security::util::AbstractAlgorithmConstraints_S_1> cVar2;
	std::shared_ptr<java::lang::String> property;
	std::shared_ptr<std::vector<java::lang::String>> algorithmsInProperty;
	int i;
	
	//    .param p0, "propertyName"    # Ljava/lang/String;
	cVar0 = 0x22;
	cVar1 = 0x0;
	cVar2 = std::make_shared<sun::security::util::AbstractAlgorithmConstraints_S_1>(propertyName);
	property = java::security::AccessController::doPrivileged(cVar2);
	property->checkCast("java::lang::String");
	//    .local v2, "property":Ljava/lang/String;
	algorithmsInProperty = 0x0;
	//    .local v0, "algorithmsInProperty":[Ljava/lang/String;
	if ( !(property) )  
		goto label_cond_53;
	if ( !(( property->isEmpty() ^ 0x1)) )  
		goto label_cond_53;
	if ( property->length() <  0x2 )
		goto label_cond_3d;
	if ( property->charAt(cVar1) != cVar0 )
		goto label_cond_3d;
	if ( property->charAt(( property->length() + -0x1)) != cVar0 )
		goto label_cond_3d;
label_cond_3d:
	algorithmsInProperty = property->split(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")));
	//    .local v0, "algorithmsInProperty":[Ljava/lang/String;
	i = 0x0;
	//    .local v1, "i":I
label_goto_45:
	if ( i >= algorithmsInProperty->size() )
		goto label_cond_53;
	algorithmsInProperty[i] = algorithmsInProperty[i]->trim();
	i = ( i + 0x1);
	goto label_goto_45;
	// 260    .line 71
	// 261    .end local v0    # "algorithmsInProperty":[Ljava/lang/String;
	// 262    .end local v1    # "i":I
label_cond_53:
	if ( algorithmsInProperty )     
		goto label_cond_57;
label_cond_57:
	return algorithmsInProperty;

}


