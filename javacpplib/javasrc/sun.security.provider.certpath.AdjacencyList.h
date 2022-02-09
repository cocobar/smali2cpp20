#ifndef __sun_security_provider_certpath_AdjacencyList__
#define __sun_security_provider_certpath_AdjacencyList__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\AdjacencyList.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.ArrayList.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.provider.certpath.BuildStep.h"
#include "sun.security.provider.certpath.Vertex.h"

namespace sun::security::provider::certpath{
class AdjacencyList : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::List<java::util::List<sun::security::provider::certpath::Vertex>>> mOrigList;
	std::shared_ptr<java::util::ArrayList<sun::security::provider::certpath::BuildStep>> mStepList;
	bool virtual buildList(std::shared_ptr<java::util::List<java::util::List<sun::security::provider::certpath::Vertex>>> theList,int index,std::shared_ptr<sun::security::provider::certpath::BuildStep> follow);
public:
	AdjacencyList(std::shared_ptr<java::util::List<java::util::List<sun::security::provider::certpath::Vertex>>> list);
	std::shared_ptr<java::util::Iterator<sun::security::provider::certpath::BuildStep>> virtual iterator();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~AdjacencyList(){
	}

}; // class AdjacencyList
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_AdjacencyList__

