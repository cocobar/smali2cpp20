// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBITableBuilder$RBBIStateDescriptor.smali
#include "java2ctype.h"
#include "android.icu.text.RBBITableBuilder_S_RBBIStateDescriptor.h"
#include "java.util.HashSet.h"
#include "java.util.TreeSet.h"

// .method constructor <init>(I)V
android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor::RBBITableBuilder_S_RBBIStateDescriptor(int maxInputSymbol)
{
	
	std::shared_ptr<java::util::TreeSet> cVar0;
	std::shared_ptr<java::util::HashSet> cVar1;
	
	//    .param p1, "maxInputSymbol"    # I
	// 058    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::TreeSet>();
	this->fTagVals = cVar0;
	cVar1 = std::make_shared<java::util::HashSet>();
	this->fPositions = cVar1;
	this->fDtran = std::make_shared<std::vector<int[]>>(( maxInputSymbol + 0x1));
	return;

}


