// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\AdjacencyList.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.provider.certpath.AdjacencyList.h"
#include "sun.security.provider.certpath.BuildStep.h"
#include "sun.security.provider.certpath.Vertex.h"

// .method public constructor <init>(Ljava/util/List;)V
sun::security::provider::certpath::AdjacencyList::AdjacencyList(std::shared_ptr<java::util::List<java::util::List<sun::security::provider::certpath::Vertex>>> list)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 036        value = {
	// 037            "(",
	// 038            "Ljava/util/List",
	// 039            "<",
	// 040            "Ljava/util/List",
	// 041            "<",
	// 042            "Lsun/security/provider/certpath/Vertex;",
	// 043            ">;>;)V"
	// 044        }
	// 045    .end annotation
	//    .local p1, "list":Ljava/util/List;, "Ljava/util/List<Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;>;"
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->mStepList = cVar0;
	this->mOrigList = list;
	this->buildList(list, 0x0, 0x0);
	return;

}
// .method private buildList(Ljava/util/List;ILsun/security/provider/certpath/BuildStep;)Z
bool sun::security::provider::certpath::AdjacencyList::buildList(std::shared_ptr<java::util::List<java::util::List<sun::security::provider::certpath::Vertex>>> theList,int index,std::shared_ptr<sun::security::provider::certpath::BuildStep> follow)
{
	
	std::shared_ptr<java::util::List> l;
	std::shared_ptr<java::util::Iterator> v_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::Vertex> v;
	std::shared_ptr<java::util::List> cVar0;
	std::shared_ptr<sun::security::provider::certpath::BuildStep> cVar1;
	std::shared_ptr<sun::security::provider::certpath::BuildStep> cVar2;
	std::shared_ptr<sun::security::provider::certpath::BuildStep> cVar3;
	std::shared_ptr<java::util::ArrayList> possibles;
	std::shared_ptr<sun::security::provider::certpath::BuildStep> cVar4;
	std::shared_ptr<sun::security::provider::certpath::Vertex> cVar5;
	std::shared_ptr<sun::security::provider::certpath::BuildStep> cVar6;
	std::shared_ptr<sun::security::provider::certpath::Vertex> cVar7;
	std::shared_ptr<java::util::List> cVar8;
	std::shared_ptr<sun::security::provider::certpath::BuildStep> bs;
	std::shared_ptr<sun::security::provider::certpath::BuildStep> cVar9;
	std::shared_ptr<sun::security::provider::certpath::BuildStep> cVar10;
	
	//    .param p2, "index"    # I
	//    .param p3, "follow"    # Lsun/security/provider/certpath/BuildStep;
	//    .annotation system Ldalvik/annotation/Signature;
	// 078        value = {
	// 079            "(",
	// 080            "Ljava/util/List",
	// 081            "<",
	// 082            "Ljava/util/List",
	// 083            "<",
	// 084            "Lsun/security/provider/certpath/Vertex;",
	// 085            ">;>;I",
	// 086            "Lsun/security/provider/certpath/BuildStep;",
	// 087            ")Z"
	// 088        }
	// 089    .end annotation
	//    .local p1, "theList":Ljava/util/List;, "Ljava/util/List<Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;>;"
	l = theList->get(index);
	l->checkCast("java::util::List");
	//    .local v3, "l":Ljava/util/List;, "Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;"
	//    .local v0, "allNegOne":Z
	//    .local v1, "allXcps":Z
	v_S_iterator = l->iterator();
	//    .local v7, "v$iterator":Ljava/util/Iterator;
label_goto_c:
	if ( !(v_S_iterator->hasNext()) )  
		goto label_cond_44;
	v = v_S_iterator->next();
	v->checkCast("sun::security::provider::certpath::Vertex");
	//    .local v6, "v":Lsun/security/provider/certpath/Vertex;
	if ( v->getIndex() == -0x1 )
		goto label_cond_3c;
	cVar0 = theList->get(v->getIndex());
	cVar0->checkCast("java::util::List");
	if ( !(cVar0->size()) )  
		goto label_cond_30;
	0x0;
label_cond_30:
label_goto_30:
	cVar1 = std::make_shared<sun::security::provider::certpath::BuildStep>(v, 0x1);
	this->mStepList->add(cVar1);
	goto label_goto_c;
	// 173    .line 143
label_cond_3c:
	if ( v->getThrowable() )     
		goto label_cond_30;
	0x0;
	goto label_goto_30;
	// 186    .line 151
	// 187    .end local v6    # "v":Lsun/security/provider/certpath/Vertex;
label_cond_44:
	if ( !(0x1) )  
		goto label_cond_b5;
	if ( !(0x1) )  
		goto label_cond_68;
	if ( follow )     
		goto label_cond_58;
	cVar2 = std::make_shared<sun::security::provider::certpath::BuildStep>(0x0, 0x4);
	this->mStepList->add(cVar2);
label_goto_56:
	return 0x0;
	// 216    .line 161
label_cond_58:
	cVar3 = std::make_shared<sun::security::provider::certpath::BuildStep>(follow->getVertex(), 0x2);
	this->mStepList->add(cVar3);
	goto label_goto_56;
	// 236    .line 170
label_cond_68:
	possibles = std::make_shared<java::util::ArrayList>();
	//    .local v4, "possibles":Ljava/util/List;, "Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;"
	v_S_iterator = l->iterator();
label_cond_71:
label_goto_71:
	if ( !(v_S_iterator->hasNext()) )  
		goto label_cond_87;
	v = v_S_iterator->next();
	v->checkCast("sun::security::provider::certpath::Vertex");
	//    .restart local v6    # "v":Lsun/security/provider/certpath/Vertex;
	if ( v->getThrowable() )     
		goto label_cond_71;
	possibles->add(v);
	goto label_goto_71;
	// 275    .line 176
	// 276    .end local v6    # "v":Lsun/security/provider/certpath/Vertex;
label_cond_87:
	if ( possibles->size() != 0x1 )
		goto label_cond_a2;
	cVar5 = possibles->get(0x0);
	cVar5->checkCast("sun::security::provider::certpath::Vertex");
	cVar4 = std::make_shared<sun::security::provider::certpath::BuildStep>(cVar5, 0x5);
	this->mStepList->add(cVar4);
label_goto_a0:
	return 0x1;
	// 313    .line 188
label_cond_a2:
	cVar7 = possibles->get(0x0);
	cVar7->checkCast("sun::security::provider::certpath::Vertex");
	cVar6 = std::make_shared<sun::security::provider::certpath::BuildStep>(cVar7, 0x5);
	this->mStepList->add(cVar6);
	goto label_goto_a0;
	// 337    .line 200
	// 338    .end local v4    # "possibles":Ljava/util/List;, "Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;"
label_cond_b5:
	//    .local v5, "success":Z
	v_S_iterator = l->iterator();
	//    .end local v5    # "success":Z
label_cond_ba:
label_goto_ba:
	if ( !(v_S_iterator->hasNext()) )  
		goto label_cond_f1;
	v = v_S_iterator->next();
	v->checkCast("sun::security::provider::certpath::Vertex");
	//    .restart local v6    # "v":Lsun/security/provider/certpath/Vertex;
	if ( v->getIndex() == -0x1 )
		goto label_cond_ba;
	cVar8 = theList->get(v->getIndex());
	cVar8->checkCast("java::util::List");
	if ( !(cVar8->size()) )  
		goto label_cond_ba;
	bs = std::make_shared<sun::security::provider::certpath::BuildStep>(v, 0x3);
	//    .local v2, "bs":Lsun/security/provider/certpath/BuildStep;
	this->mStepList->add(bs);
	this->buildList(theList, v->getIndex(), bs);
	//    .local v5, "success":Z
	goto label_goto_ba;
	// 415    .line 220
	// 416    .end local v2    # "bs":Lsun/security/provider/certpath/BuildStep;
	// 417    .end local v5    # "success":Z
	// 418    .end local v6    # "v":Lsun/security/provider/certpath/Vertex;
label_cond_f1:
	if ( !(0x0) )  
		goto label_cond_f5;
	return 0x1;
	// 427    .line 226
label_cond_f5:
	if ( follow )     
		goto label_cond_105;
	cVar9 = std::make_shared<sun::security::provider::certpath::BuildStep>(0x0, 0x4);
	this->mStepList->add(cVar9);
label_goto_103:
	return 0x0;
	// 450    .line 229
label_cond_105:
	cVar10 = std::make_shared<sun::security::provider::certpath::BuildStep>(follow->getVertex(), 0x2);
	this->mStepList->add(cVar10);
	goto label_goto_103;

}
// .method public iterator()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<sun::security::provider::certpath::BuildStep>> sun::security::provider::certpath::AdjacencyList::iterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 476        value = {
	// 477            "()",
	// 478            "Ljava/util/Iterator",
	// 479            "<",
	// 480            "Lsun/security/provider/certpath/BuildStep;",
	// 481            ">;"
	// 482        }
	// 483    .end annotation
	return java::util::Collections::unmodifiableList(this->mStepList)->iterator();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::AdjacencyList::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	std::shared_ptr<java::util::Iterator> l_S_iterator;
	std::shared_ptr<java::util::List> l;
	std::shared_ptr<java::util::Iterator> step_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::Vertex> step;
	
	sb = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[\n")));
	//    .local v4, "sb":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v0, "i":I
	l_S_iterator = this->mOrigList->iterator();
	//    .local v3, "l$iterator":Ljava/util/Iterator;
label_goto_f:
	if ( !(l_S_iterator->hasNext()) )  
		goto label_cond_4f;
	l = l_S_iterator->next();
	l->checkCast("java::util::List");
	//    .local v2, "l":Ljava/util/List;, "Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;"
	//    .end local v0    # "i":I
	//    .local v1, "i":I
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("LinkedList[")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]:\n")));
	step_S_iterator = l->iterator();
	//    .local v6, "step$iterator":Ljava/util/Iterator;
label_goto_32:
	if ( !(step_S_iterator->hasNext()) )  
		goto label_cond_4d;
	step = step_S_iterator->next();
	step->checkCast("sun::security::provider::certpath::Vertex");
	//    .local v5, "step":Lsun/security/provider/certpath/Vertex;
	sb->append(step->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	goto label_goto_32;
	// 592    .end local v5    # "step":Lsun/security/provider/certpath/Vertex;
label_cond_4d:
	i = ( i + 0x1);
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	goto label_goto_f;
	// 600    .line 254
	// 601    .end local v2    # "l":Ljava/util/List;, "Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;"
	// 602    .end local v6    # "step$iterator":Ljava/util/Iterator;
label_cond_4f:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")));
	return sb->toString();

}


