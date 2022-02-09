// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ValidIdentifiers$ValiditySet.smali
#include "java2ctype.h"
#include "android.icu.impl.ValidIdentifiers_S_ValiditySet.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

// .method public constructor <init>(Ljava/util/Set;Z)V
android::icu::impl::ValidIdentifiers_S_ValiditySet::ValidIdentifiers_S_ValiditySet(std::shared_ptr<java::util::Set<java::lang::String>> plainData,bool makeMap)
{
	
	std::shared_ptr<java::util::HashMap> _subdivisionData;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::lang::String> s;
	int pos;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<java::util::Set> oldSet;
	std::shared_ptr<java::util::HashSet> oldSet;
	std::shared_ptr<java::util::HashMap> _subdivisionData2;
	std::shared_ptr<java::util::Iterator> e_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> e;
	std::shared_ptr<java::util::Set> value;
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .param p2, "makeMap"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 049        value = {
	// 050            "(",
	// 051            "Ljava/util/Set",
	// 052            "<",
	// 053            "Ljava/lang/String;",
	// 054            ">;Z)V"
	// 055        }
	// 056    .end annotation
	//    .local p1, "plainData":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 061    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( !(makeMap) )  
		goto label_cond_9b;
	_subdivisionData = std::make_shared<java::util::HashMap>();
	//    .local v0, "_subdivisionData":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	s_S_iterator = plainData->iterator();
	//    .local v9, "s$iterator":Ljava/util/Iterator;
label_goto_e:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_4e;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .local v8, "s":Ljava/lang/String;
	pos = s->indexOf(0x2d);
	//    .local v6, "pos":I
	//    .local v7, "pos2":I
	if ( pos >= 0 )
		goto label_cond_2f;
	if ( s->charAt(0x0) >= 0x41 )
		goto label_cond_4c;
	pos = 0x3;
label_goto_2e:
label_cond_2f:
	key = s->substring(0x0, pos);
	//    .local v4, "key":Ljava/lang/String;
	//    .local v11, "subdivision":Ljava/lang/String;
	oldSet = _subdivisionData->get(key);
	oldSet->checkCast("java::util::Set");
	//    .local v5, "oldSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( oldSet )     
		goto label_cond_48;
	//    .end local v5    # "oldSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	oldSet = std::make_shared<java::util::HashSet>();
	//    .restart local v5    # "oldSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	_subdivisionData->put(key, oldSet);
label_cond_48:
	oldSet->add(s->substring(( pos + 0x1)));
	goto label_goto_e;
	// 164    .line 64
	// 165    .end local v4    # "key":Ljava/lang/String;
	// 166    .end local v5    # "oldSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 167    .end local v11    # "subdivision":Ljava/lang/String;
label_cond_4c:
	pos = 0x2;
	goto label_goto_2e;
	// 173    .line 75
	// 174    .end local v6    # "pos":I
	// 175    .end local v7    # "pos2":I
	// 176    .end local v8    # "s":Ljava/lang/String;
label_cond_4e:
	this->regularData = 0x0;
	_subdivisionData2 = std::make_shared<java::util::HashMap>();
	//    .local v1, "_subdivisionData2":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	e_S_iterator = _subdivisionData->entrySet()->iterator();
	//    .local v3, "e$iterator":Ljava/util/Iterator;
label_goto_5e:
	if ( !(e_S_iterator->hasNext()) )  
		goto label_cond_94;
	e = e_S_iterator->next();
	e->checkCast("java::util::Map_S_Entry");
	//    .local v2, "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	value = e->getValue();
	value->checkCast("java::util::Set");
	//    .local v12, "value":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( value->size() != 0x1 )
		goto label_cond_8f;
	cVar0 = value->iterator()->next();
	cVar0->checkCast("java::lang::String");
	//    .local v10, "set":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_goto_85:
	cVar1 = e->getKey();
	cVar1->checkCast("java::lang::String");
	_subdivisionData2->put(cVar1, set);
	goto label_goto_5e;
	// 256    .line 82
	// 257    .end local v10    # "set":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_8f:
	//    .restart local v10    # "set":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	goto label_goto_85;
	// 266    .line 86
	// 267    .end local v2    # "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	// 268    .end local v10    # "set":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 269    .end local v12    # "value":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_94:
	this->subdivisionData = java::util::Collections::unmodifiableMap(_subdivisionData2);
	//    .end local v0    # "_subdivisionData":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	//    .end local v1    # "_subdivisionData2":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	//    .end local v3    # "e$iterator":Ljava/util/Iterator;
	//    .end local v9    # "s$iterator":Ljava/util/Iterator;
label_goto_9a:
	return;
	// 285    .line 88
label_cond_9b:
	this->regularData = java::util::Collections::unmodifiableSet(plainData);
	this->subdivisionData = 0x0;
	goto label_goto_9a;

}
// .method public contains(Ljava/lang/String;)Z
bool android::icu::impl::ValidIdentifiers_S_ValiditySet::contains(std::shared_ptr<java::lang::String> code)
{
	
	int pos;
	
	//    .param p1, "code"    # Ljava/lang/String;
	if ( !(this->regularData) )  
		goto label_cond_b;
	return this->regularData->contains(code);
	// 322    .line 97
label_cond_b:
	pos = code->indexOf(0x2d);
	//    .local v1, "pos":I
	//    .local v0, "key":Ljava/lang/String;
	//    .local v2, "value":Ljava/lang/String;
	return this->contains(code->substring(0x0, pos), code->substring(( pos + 0x1)));

}
// .method public contains(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::impl::ValidIdentifiers_S_ValiditySet::contains(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> value)
{
	
	std::shared_ptr<java::util::Set> oldSet;
	bool cVar0;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "value"    # Ljava/lang/String;
	oldSet = this->subdivisionData->get(key);
	oldSet->checkCast("java::util::Set");
	//    .local v0, "oldSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(oldSet) )  
		goto label_cond_f;
	cVar0 = oldSet->contains(value);
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ValidIdentifiers_S_ValiditySet::toString()
{
	
	if ( !(this->regularData) )  
		goto label_cond_b;
	return this->regularData->toString();
	// 405    .line 114
label_cond_b:
	return this->subdivisionData->toString();

}


