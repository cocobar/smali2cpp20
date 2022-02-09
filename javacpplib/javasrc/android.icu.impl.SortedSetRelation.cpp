// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\SortedSetRelation.smali
#include "java2ctype.h"
#include "android.icu.impl.SortedSetRelation.h"
#include "java.lang.Comparable.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Iterator.h"
#include "java.util.SortedSet.h"
#include "java.util.TreeSet.h"

static android::icu::impl::SortedSetRelation::A = 0x6;
static android::icu::impl::SortedSetRelation::ADDALL = 0x7;
static android::icu::impl::SortedSetRelation::ANY = 0x7;
static android::icu::impl::SortedSetRelation::A_AND_B = 0x2;
static android::icu::impl::SortedSetRelation::A_NOT_B = 0x4;
static android::icu::impl::SortedSetRelation::B = 0x3;
static android::icu::impl::SortedSetRelation::B_NOT_A = 0x1;
static android::icu::impl::SortedSetRelation::B_REMOVEALL = 0x1;
static android::icu::impl::SortedSetRelation::COMPLEMENTALL = 0x5;
static android::icu::impl::SortedSetRelation::CONTAINS = 0x6;
static android::icu::impl::SortedSetRelation::DISJOINT = 0x5;
static android::icu::impl::SortedSetRelation::EQUALS = 0x2;
static android::icu::impl::SortedSetRelation::ISCONTAINED = 0x3;
static android::icu::impl::SortedSetRelation::NONE = 0x0;
static android::icu::impl::SortedSetRelation::NO_A = 0x1;
static android::icu::impl::SortedSetRelation::NO_B = 0x4;
static android::icu::impl::SortedSetRelation::REMOVEALL = 0x4;
static android::icu::impl::SortedSetRelation::RETAINALL = 0x2;
// .method public constructor <init>()V
android::icu::impl::SortedSetRelation::SortedSetRelation()
{
	
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static doOperation(Ljava/util/SortedSet;ILjava/util/SortedSet;)Ljava/util/SortedSet;
template <typename ,typename T>
std::shared_ptr<java::util::SortedSet<T>> android::icu::impl::SortedSetRelation::doOperation(std::shared_ptr<java::util::SortedSet<T>> a,int relation,std::shared_ptr<java::util::SortedSet<T>> b)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::TreeSet> temp;
	
	//    .param p1, "relation"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 059        value = {
	// 060            "<T:",
	// 061            "Ljava/lang/Object;",
	// 062            ":",
	// 063            "Ljava/lang/Comparable",
	// 064            "<-TT;>;>(",
	// 065            "Ljava/util/SortedSet",
	// 066            "<TT;>;I",
	// 067            "Ljava/util/SortedSet",
	// 068            "<TT;>;)",
	// 069            "Ljava/util/SortedSet",
	// 070            "<+TT;>;"
	// 071        }
	// 072    .end annotation
	//    .local p0, "a":Ljava/util/SortedSet;, "Ljava/util/SortedSet<TT;>;"
	//    .local p2, "b":Ljava/util/SortedSet;, "Ljava/util/SortedSet<TT;>;"
	// switch
	{
	auto item = ( relation );
	if (item == 0) goto label_pswitch_56;
	if (item == 1) goto label_pswitch_47;
	if (item == 2) goto label_pswitch_34;
	if (item == 3) goto label_pswitch_29;
	if (item == 4) goto label_pswitch_30;
	if (item == 5) goto label_pswitch_38;
	if (item == 6) goto label_pswitch_28;
	if (item == 7) goto label_pswitch_24;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Relation ")))->append(relation)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" out of range")))->toString());
	// throw
	throw cVar0;
	// 111    .line 149
label_pswitch_24:
	a->addAll(b);
	return a;
	// 118    .line 152
label_pswitch_28:
	return a;
	// 122    .line 154
label_pswitch_29:
	a->clear();
	a->addAll(b);
	return a;
	// 132    .line 158
label_pswitch_30:
	a->removeAll(b);
	return a;
	// 139    .line 161
label_pswitch_34:
	a->retainAll(b);
	return a;
	// 146    .line 166
label_pswitch_38:
	temp = std::make_shared<java::util::TreeSet>(b);
	//    .local v0, "temp":Ljava/util/TreeSet;, "Ljava/util/TreeSet<+TT;>;"
	temp->removeAll(a);
	a->removeAll(b);
	a->addAll(temp);
	return a;
	// 165    .line 172
	// 166    .end local v0    # "temp":Ljava/util/TreeSet;, "Ljava/util/TreeSet<+TT;>;"
label_pswitch_47:
	temp = std::make_shared<java::util::TreeSet>(b);
	//    .restart local v0    # "temp":Ljava/util/TreeSet;, "Ljava/util/TreeSet<+TT;>;"
	temp->removeAll(a);
	a->clear();
	a->addAll(temp);
	return a;
	// 185    .line 178
	// 186    .end local v0    # "temp":Ljava/util/TreeSet;, "Ljava/util/TreeSet<+TT;>;"
label_pswitch_56:
	a->clear();
	return a;
	// 193    .line 147
	// 194    :pswitch_data_5a
	// 195    .packed-switch 0x0
	// 196        :pswitch_56
	// 197        :pswitch_47
	// 198        :pswitch_34
	// 199        :pswitch_29
	// 200        :pswitch_30
	// 201        :pswitch_38
	// 202        :pswitch_28
	// 203        :pswitch_24
	// 204    .end packed-switch

}
// .method public static hasRelation(Ljava/util/SortedSet;ILjava/util/SortedSet;)Z
template <typename ,typename T>
bool android::icu::impl::SortedSetRelation::hasRelation(std::shared_ptr<java::util::SortedSet<T>> a,int allow,std::shared_ptr<java::util::SortedSet<T>> b)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	bool anb;
	bool bna;
	std::shared_ptr<java::util::Iterator> ait;
	std::shared_ptr<java::util::Iterator> bit;
	auto aa;
	std::shared_ptr<java::lang::Object> bb;
	std::shared_ptr<java::lang::Comparable> cVar4;
	int comp;
	
	//    .param p1, "allow"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 211        value = {
	// 212            "<T:",
	// 213            "Ljava/lang/Object;",
	// 214            ":",
	// 215            "Ljava/lang/Comparable",
	// 216            "<-TT;>;>(",
	// 217            "Ljava/util/SortedSet",
	// 218            "<TT;>;I",
	// 219            "Ljava/util/SortedSet",
	// 220            "<TT;>;)Z"
	// 221        }
	// 222    .end annotation
	//    .local p0, "a":Ljava/util/SortedSet;, "Ljava/util/SortedSet<TT;>;"
	//    .local p2, "b":Ljava/util/SortedSet;, "Ljava/util/SortedSet<TT;>;"
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( allow < 0 ) 
		goto label_cond_7;
	if ( allow <= 0x7 )
		goto label_cond_28;
label_cond_7:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Relation ")))->append(allow)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" out of range")))->toString());
	// throw
	throw cVar2;
	// 270    .line 82
label_cond_28:
	if ( !(( allow & 0x4)) )  
		goto label_cond_47;
	anb = 0x1;
	//    .local v3, "anb":Z
label_goto_2d:
	if ( !(( allow & 0x2)) )  
		goto label_cond_49;
	//    .local v1, "ab":Z
label_goto_32:
	if ( !(( allow & 0x1)) )  
		goto label_cond_4b;
	bna = 0x1;
	//    .local v6, "bna":Z
label_goto_37:
	// switch
	{
	auto item = ( allow );
	if (item == 2) goto label_pswitch_63;
	if (item == 3) goto label_pswitch_58;
	if (item == 4) goto label_pswitch_3a;
	if (item == 5) goto label_pswitch_3a;
	if (item == 6) goto label_pswitch_4d;
	}
label_cond_3a:
label_pswitch_3a:
	if ( a->size() )     
		goto label_cond_6f;
	if ( b->size() )     
		goto label_cond_6e;
	return cVar0;
	// 319    .line 82
	// 320    .end local v1    # "ab":Z
	// 321    .end local v3    # "anb":Z
	// 322    .end local v6    # "bna":Z
label_cond_47:
	0x0;
	//    .restart local v3    # "anb":Z
	goto label_goto_2d;
	// 329    .line 83
label_cond_49:
	0x0;
	//    .restart local v1    # "ab":Z
	goto label_goto_32;
	// 336    .line 84
label_cond_4b:
	//    .restart local v6    # "bna":Z
	goto label_goto_37;
	// 343    .line 88
label_pswitch_4d:
	if ( a->size() >= b->size() )
		goto label_cond_3a;
	return cVar1;
	// 357    .line 89
label_pswitch_58:
	if ( a->size() <= b->size() )
		goto label_cond_3a;
	return cVar1;
	// 371    .line 90
label_pswitch_63:
	if ( a->size() == b->size() )
		goto label_cond_3a;
	return cVar1;
	// 385    .line 96
label_cond_6e:
	return bna;
	// 389    .line 97
label_cond_6f:
	if ( b->size() )     
		goto label_cond_76;
	return anb;
	// 400    .line 102
label_cond_76:
	ait = a->iterator();
	//    .local v2, "ait":Ljava/util/Iterator;, "Ljava/util/Iterator<+TT;>;"
	bit = b->iterator();
	//    .local v5, "bit":Ljava/util/Iterator;, "Ljava/util/Iterator<+TT;>;"
	aa = ait->next();
	//    .local v0, "aa":Ljava/lang/Object;, "TT;"
	bb = bit->next();
	//    .local v4, "bb":Ljava/lang/Object;, "TT;"
label_goto_86:
	cVar4 = aa;
	cVar4->checkCast("java::lang::Comparable");
	comp = cVar4->compareTo(bb);
	//    .local v7, "comp":I
	if ( comp )     
		goto label_cond_b0;
	if ( 0x1 )     
		goto label_cond_92;
	return cVar1;
	// 444    .line 112
label_cond_92:
	if ( ait->hasNext() )     
		goto label_cond_a0;
	if ( bit->hasNext() )     
		goto label_cond_9f;
	return cVar0;
	// 461    .line 114
label_cond_9f:
	return bna;
	// 465    .line 115
label_cond_a0:
	if ( bit->hasNext() )     
		goto label_cond_a7;
	return anb;
	// 476    .line 118
label_cond_a7:
	aa = ait->next();
	bb = bit->next();
	goto label_goto_86;
	// 489    .line 120
label_cond_b0:
	if ( comp >= 0 )
		goto label_cond_c1;
	if ( anb )     
		goto label_cond_b5;
	return cVar1;
	// 498    .line 122
label_cond_b5:
	if ( ait->hasNext() )     
		goto label_cond_bc;
	return bna;
	// 509    .line 125
label_cond_bc:
	aa = ait->next();
	goto label_goto_86;
	// 517    .line 127
label_cond_c1:
	if ( bna )     
		goto label_cond_c4;
	return cVar1;
	// 523    .line 128
label_cond_c4:
	if ( bit->hasNext() )     
		goto label_cond_cb;
	return anb;
	// 534    .line 131
label_cond_cb:
	bb = bit->next();
	goto label_goto_86;
	// 542    .line 87
	// 543    :pswitch_data_d0
	// 544    .packed-switch 0x2
	// 545        :pswitch_63
	// 546        :pswitch_58
	// 547        :pswitch_3a
	// 548        :pswitch_3a
	// 549        :pswitch_4d
	// 550    .end packed-switch

}


