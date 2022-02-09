// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Bidi$ImpTabPair.smali
#include "java2ctype.h"
#include "android.icu.text.Bidi_S_ImpTabPair.h"

// .method constructor <init>([[B[[B[S[S)V
android::icu::text::Bidi_S_ImpTabPair::Bidi_S_ImpTabPair(std::shared_ptr<unsigned char[][]> table1,std::shared_ptr<unsigned char[][]> table2,std::shared_ptr<short[]> act1,std::shared_ptr<short[]> act2)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared<std::vector<unsigned char[][][]>> cVar3;
	std::shared<std::vector<short[][]>> cVar4;
	
	//    .param p1, "table1"    # [[B
	//    .param p2, "table2"    # [[B
	//    .param p3, "act1"    # [S
	//    .param p4, "act2"    # [S
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar3 = std::make_shared<std::vector<unsigned char[][][]>>(cVar0);
	cVar3[cVar2] = table1;
	cVar3[cVar1] = table2;
	this->imptab = cVar3;
	cVar4 = std::make_shared<std::vector<short[][]>>(cVar0);
	cVar4[cVar2] = act1;
	cVar4[cVar1] = act2;
	this->impact = cVar4;
	return;

}


