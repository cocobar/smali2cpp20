// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\GeneralSubtrees.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.DNSName.h"
#include "sun.security.x509.EDIPartyName.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.GeneralSubtree.h"
#include "sun.security.x509.GeneralSubtrees.h"
#include "sun.security.x509.IPAddressName.h"
#include "sun.security.x509.OIDName.h"
#include "sun.security.x509.OtherName.h"
#include "sun.security.x509.RFC822Name.h"
#include "sun.security.x509.URIName.h"
#include "sun.security.x509.X400Address.h"
#include "sun.security.x509.X500Name.h"

static sun::security::x509::GeneralSubtrees::NAME_DIFF_TYPE = -0x1;
static sun::security::x509::GeneralSubtrees::NAME_MATCH = 0x0;
static sun::security::x509::GeneralSubtrees::NAME_NARROWS = 0x1;
static sun::security::x509::GeneralSubtrees::NAME_SAME_TYPE = 0x3;
static sun::security::x509::GeneralSubtrees::NAME_WIDENS = 0x2;
// .method public constructor <init>()V
sun::security::x509::GeneralSubtrees::GeneralSubtrees()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	// 040    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->trees = cVar0;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::GeneralSubtrees::GeneralSubtrees(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<sun::security::x509::GeneralSubtree> tree;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 057        value = {
	// 058            Ljava/io/IOException;
	// 059        }
	// 060    .end annotation
	// 064    invoke-direct {p0}, Lsun/security/x509/GeneralSubtrees;-><init>()V
	if ( val->tag == 0x30 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of GeneralSubtrees.")));
	// throw
	throw cVar0;
	// 082    .line 79
label_cond_12:
label_goto_12:
	if ( !(val->data->available()) )  
		goto label_cond_29;
	//    .local v0, "opt":Lsun/security/util/DerValue;
	tree = std::make_shared<sun::security::x509::GeneralSubtree>(val->data->getDerValue());
	//    .local v1, "tree":Lsun/security/x509/GeneralSubtree;
	this->add(tree);
	goto label_goto_12;
	// 112    .line 84
	// 113    .end local v0    # "opt":Lsun/security/util/DerValue;
	// 114    .end local v1    # "tree":Lsun/security/x509/GeneralSubtree;
label_cond_29:
	return;

}
// .method private constructor <init>(Lsun/security/x509/GeneralSubtrees;)V
sun::security::x509::GeneralSubtrees::GeneralSubtrees(std::shared_ptr<sun::security::x509::GeneralSubtrees> source)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .param p1, "source"    # Lsun/security/x509/GeneralSubtrees;
	// 125    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>(source->trees);
	this->trees = cVar0;
	return;

}
// .method private createWidestSubtree(Lsun/security/x509/GeneralNameInterface;)Lsun/security/x509/GeneralSubtree;
std::shared_ptr<sun::security::x509::GeneralSubtree> sun::security::x509::GeneralSubtrees::createWidestSubtree(std::shared_ptr<sun::security::x509::GeneralNameInterface> name)
{
	
	std::shared_ptr<java::lang::Object> e;
	std::shared_ptr<java::lang::RuntimeException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<sun::security::x509::GeneralName> newName;
	std::shared_ptr<sun::security::x509::OtherName> cVar4;
	std::shared_ptr<sun::security::x509::GeneralSubtree> cVar5;
	std::shared_ptr<sun::security::x509::RFC822Name> cVar6;
	std::shared_ptr<sun::security::x509::DNSName> cVar7;
	std::shared_ptr<sun::security::x509::X400Address> cVar8;
	std::shared_ptr<unsigned char[]> cVar9;
	std::shared_ptr<sun::security::x509::X500Name> cVar10;
	std::shared_ptr<sun::security::x509::EDIPartyName> cVar11;
	std::shared_ptr<sun::security::x509::URIName> cVar12;
	std::shared_ptr<sun::security::x509::IPAddressName> cVar13;
	std::shared_ptr<unsigned char[]> cVar14;
	std::shared_ptr<sun::security::x509::OIDName> cVar15;
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar16;
	std::shared_ptr<int[]> cVar17;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "name"    # Lsun/security/x509/GeneralNameInterface;
	try {
	//label_try_start_0:
	// switch
	{
	auto item = ( name->getType() );
	if (item == 0) goto label_pswitch_40;
	if (item == 1) goto label_pswitch_59;
	if (item == 2) goto label_pswitch_67;
	if (item == 3) goto label_pswitch_75;
	if (item == 4) goto label_pswitch_83;
	if (item == 5) goto label_pswitch_91;
	if (item == 6) goto label_pswitch_9f;
	if (item == 7) goto label_pswitch_ad;
	if (item == 8) goto label_pswitch_bb;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unsupported GeneralNameInterface type: ")))->append(name->getType())->toString());
	// throw
	throw cVar0;
	// 183    :try_end_25
	// 184    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_25} :catch_25
	// 186    .line 283
	// 187    .end local p1    # "name":Lsun/security/x509/GeneralNameInterface;
label_catch_25:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::RuntimeException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unexpected error: ")))->append(e)->toString(), e);
	// throw
	throw cVar2;
	// 217    .line 250
	// 218    .end local v0    # "e":Ljava/io/IOException;
	// 219    .restart local p1    # "name":Lsun/security/x509/GeneralNameInterface;
label_pswitch_40:
	try {
	//label_try_start_40:
	name->checkCast("sun::security::x509::OtherName");
	//    .end local p1    # "name":Lsun/security/x509/GeneralNameInterface;
	//    .local v2, "otherOID":Lsun/security/util/ObjectIdentifier;
	cVar4 = std::make_shared<sun::security::x509::OtherName>(name->getOID(), 0x0);
	newName = std::make_shared<sun::security::x509::GeneralName>(cVar4);
	//    .end local v2    # "otherOID":Lsun/security/util/ObjectIdentifier;
	//    .local v1, "newName":Lsun/security/x509/GeneralName;
label_goto_51:
	cVar5 = std::make_shared<sun::security::x509::GeneralSubtree>(newName, 0x0, -0x1);
	return cVar5;
	// 255    .line 254
	// 256    .end local v1    # "newName":Lsun/security/x509/GeneralName;
	// 257    .restart local p1    # "name":Lsun/security/x509/GeneralNameInterface;
label_pswitch_59:
	cVar6 = std::make_shared<sun::security::x509::RFC822Name>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	newName = std::make_shared<sun::security::x509::GeneralName>(cVar6);
	//    .restart local v1    # "newName":Lsun/security/x509/GeneralName;
	goto label_goto_51;
	// 273    .line 257
	// 274    .end local v1    # "newName":Lsun/security/x509/GeneralName;
label_pswitch_67:
	cVar7 = std::make_shared<sun::security::x509::DNSName>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	newName = std::make_shared<sun::security::x509::GeneralName>(cVar7);
	//    .restart local v1    # "newName":Lsun/security/x509/GeneralName;
	goto label_goto_51;
	// 290    .line 260
	// 291    .end local v1    # "newName":Lsun/security/x509/GeneralName;
label_pswitch_75:
	cVar9 = 0x0;
	cVar9->checkCast("unsigned char[]");
	cVar8 = std::make_shared<sun::security::x509::X400Address>(cVar9);
	newName = std::make_shared<sun::security::x509::GeneralName>(cVar8);
	//    .restart local v1    # "newName":Lsun/security/x509/GeneralName;
	goto label_goto_51;
	// 309    .line 263
	// 310    .end local v1    # "newName":Lsun/security/x509/GeneralName;
label_pswitch_83:
	cVar10 = std::make_shared<sun::security::x509::X500Name>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	newName = std::make_shared<sun::security::x509::GeneralName>(cVar10);
	//    .restart local v1    # "newName":Lsun/security/x509/GeneralName;
	goto label_goto_51;
	// 326    .line 266
	// 327    .end local v1    # "newName":Lsun/security/x509/GeneralName;
label_pswitch_91:
	cVar11 = std::make_shared<sun::security::x509::EDIPartyName>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	newName = std::make_shared<sun::security::x509::GeneralName>(cVar11);
	//    .restart local v1    # "newName":Lsun/security/x509/GeneralName;
	goto label_goto_51;
	// 343    .line 269
	// 344    .end local v1    # "newName":Lsun/security/x509/GeneralName;
label_pswitch_9f:
	cVar12 = std::make_shared<sun::security::x509::URIName>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	newName = std::make_shared<sun::security::x509::GeneralName>(cVar12);
	//    .restart local v1    # "newName":Lsun/security/x509/GeneralName;
	goto label_goto_51;
	// 360    .line 272
	// 361    .end local v1    # "newName":Lsun/security/x509/GeneralName;
label_pswitch_ad:
	cVar14 = 0x0;
	cVar14->checkCast("unsigned char[]");
	cVar13 = std::make_shared<sun::security::x509::IPAddressName>(cVar14);
	newName = std::make_shared<sun::security::x509::GeneralName>(cVar13);
	//    .restart local v1    # "newName":Lsun/security/x509/GeneralName;
	goto label_goto_51;
	// 379    .line 275
	// 380    .end local v1    # "newName":Lsun/security/x509/GeneralName;
label_pswitch_bb:
	cVar17 = 0x0;
	cVar17->checkCast("int[]");
	cVar16 = std::make_shared<sun::security::util::ObjectIdentifier>(cVar17);
	cVar15 = std::make_shared<sun::security::x509::OIDName>(cVar16);
	newName = std::make_shared<sun::security::x509::GeneralName>(cVar15);
	//label_try_end_cd:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	//    .catch Ljava/io/IOException; {:try_start_40 .. :try_end_cd} :catch_25
	//    .restart local v1    # "newName":Lsun/security/x509/GeneralName;
	goto label_goto_51;
	// 406    .line 246
	// 407    :pswitch_data_ce
	// 408    .packed-switch 0x0
	// 409        :pswitch_40
	// 410        :pswitch_59
	// 411        :pswitch_67
	// 412        :pswitch_75
	// 413        :pswitch_83
	// 414        :pswitch_91
	// 415        :pswitch_9f
	// 416        :pswitch_ad
	// 417        :pswitch_bb
	// 418    .end packed-switch

}
// .method private getGeneralNameInterface(I)Lsun/security/x509/GeneralNameInterface;
std::shared_ptr<sun::security::x509::GeneralNameInterface> sun::security::x509::GeneralSubtrees::getGeneralNameInterface(int ndx)
{
	
	//    .param p1, "ndx"    # I
	return sun::security::x509::GeneralSubtrees::getGeneralNameInterface(this->get(ndx));

}
// .method private static getGeneralNameInterface(Lsun/security/x509/GeneralSubtree;)Lsun/security/x509/GeneralNameInterface;
std::shared_ptr<sun::security::x509::GeneralNameInterface> sun::security::x509::GeneralSubtrees::getGeneralNameInterface(std::shared_ptr<sun::security::x509::GeneralSubtree> gs)
{
	
	//    .param p0, "gs"    # Lsun/security/x509/GeneralSubtree;
	//    .local v0, "gn":Lsun/security/x509/GeneralName;
	//    .local v1, "gni":Lsun/security/x509/GeneralNameInterface;
	return gs->getName()->getName();

}
// .method private minimize()V
void sun::security::x509::GeneralSubtrees::minimize()
{
	
	int i;
	int remove1;
	int j;
	
	i = 0x0;
	//    .local v1, "i":I
label_goto_1:
	if ( i >= ( this->size() + -0x1) )
		goto label_cond_37;
	//    .local v0, "current":Lsun/security/x509/GeneralNameInterface;
	remove1 = 0x0;
	//    .local v3, "remove1":Z
	j = ( i + 0x1);
	//    .local v2, "j":I
label_goto_10:
	if ( j >= this->size() )
		goto label_cond_21;
	//    .local v4, "subsequent":Lsun/security/x509/GeneralNameInterface;
	// switch
	{
	auto item = ( this->getGeneralNameInterface(i)->constrains(this->getGeneralNameInterface(j)) );
	if (item == -1) goto label_pswitch_32;
	if (item == 0) goto label_pswitch_2b;
	if (item == 1) goto label_pswitch_2d;
	if (item == 2) goto label_pswitch_35;
	if (item == 3) goto label_pswitch_32;
	}
	//    .end local v4    # "subsequent":Lsun/security/x509/GeneralNameInterface;
label_cond_21:
label_goto_21:
	if ( !(remove1) )  
		goto label_cond_28;
	this->remove(i);
	i = ( i + -0x1);
label_cond_28:
	i = ( i + 0x1);
	goto label_goto_1;
	// 528    .line 207
	// 529    .restart local v4    # "subsequent":Lsun/security/x509/GeneralNameInterface;
label_pswitch_2b:
	remove1 = 0x1;
	goto label_goto_21;
	// 536    .line 212
label_pswitch_2d:
	this->remove(j);
	j = ( j + -0x1);
label_pswitch_32:
	j = ( j + 0x1);
	goto label_goto_10;
	// 549    .line 218
label_pswitch_35:
	remove1 = 0x1;
	goto label_goto_21;
	// 556    .line 233
	// 557    .end local v0    # "current":Lsun/security/x509/GeneralNameInterface;
	// 558    .end local v2    # "j":I
	// 559    .end local v3    # "remove1":Z
	// 560    .end local v4    # "subsequent":Lsun/security/x509/GeneralNameInterface;
label_cond_37:
	return;
	// 564    .line 201
	// 565    :pswitch_data_38
	// 566    .packed-switch -0x1
	// 567        :pswitch_32
	// 568        :pswitch_2b
	// 569        :pswitch_2d
	// 570        :pswitch_35
	// 571        :pswitch_32
	// 572    .end packed-switch

}
// .method public add(Lsun/security/x509/GeneralSubtree;)V
void sun::security::x509::GeneralSubtrees::add(std::shared_ptr<sun::security::x509::GeneralSubtree> tree)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "tree"    # Lsun/security/x509/GeneralSubtree;
	if ( tree )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 592    .line 98
label_cond_8:
	this->trees->add(tree);
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::GeneralSubtrees::clone()
{
	
	std::shared_ptr<sun::security::x509::GeneralSubtrees> cVar0;
	
	cVar0 = std::make_shared<sun::security::x509::GeneralSubtrees>(this);
	return cVar0;

}
// .method public contains(Lsun/security/x509/GeneralSubtree;)Z
bool sun::security::x509::GeneralSubtrees::contains(std::shared_ptr<sun::security::x509::GeneralSubtree> tree)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "tree"    # Lsun/security/x509/GeneralSubtree;
	if ( tree )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 629    .line 105
label_cond_8:
	return this->trees->contains(tree);

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::GeneralSubtrees::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	int i;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 644        value = {
	// 645            Ljava/io/IOException;
	// 646        }
	// 647    .end annotation
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "seq":Lsun/security/util/DerOutputStream;
	i = 0x0;
	//    .local v0, "i":I
	//    .local v1, "n":I
label_goto_a:
	if ( i >= this->size() )
		goto label_cond_16;
	this->get(i)->encode(seq);
	i = ( i + 0x1);
	goto label_goto_a;
	// 680    .line 143
label_cond_16:
	out->write(0x30, seq);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::GeneralSubtrees::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<sun::security::x509::GeneralSubtrees> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 703    .line 157
label_cond_4:
	if ( obj->instanceOf("sun::security::x509::GeneralSubtrees") )     
		goto label_cond_a;
	return 0x0;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::x509::GeneralSubtrees");
	//    .local v0, "other":Lsun/security/x509/GeneralSubtrees;
	return this->trees->equals(other->trees);

}
// .method public get(I)Lsun/security/x509/GeneralSubtree;
std::shared_ptr<sun::security::x509::GeneralSubtree> sun::security::x509::GeneralSubtrees::get(int index)
{
	
	std::shared_ptr<sun::security::x509::GeneralSubtree> cVar0;
	
	//    .param p1, "index"    # I
	cVar0 = this->trees->get(index);
	cVar0->checkCast("sun::security::x509::GeneralSubtree");
	return cVar0;

}
// .method public hashCode()I
int sun::security::x509::GeneralSubtrees::hashCode()
{
	
	return this->trees->hashCode();

}
// .method public intersect(Lsun/security/x509/GeneralSubtrees;)Lsun/security/x509/GeneralSubtrees;
std::shared_ptr<sun::security::x509::GeneralSubtrees> sun::security::x509::GeneralSubtrees::intersect(std::shared_ptr<sun::security::x509::GeneralSubtrees> other)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> newThis;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> newExcluded;
	int i;
	std::shared_ptr<sun::security::x509::GeneralNameInterface> thisEntry;
	int sameType;
	int j;
	std::shared_ptr<sun::security::x509::GeneralSubtree> otherEntryGS;
	std::shared_ptr<sun::security::x509::GeneralNameInterface> thisAltEntry;
	int k;
	int constraintType;
	auto widestSubtree;
	
	//    .param p1, "other"    # Lsun/security/x509/GeneralSubtrees;
	if ( other )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("other GeneralSubtrees must not be null")));
	// throw
	throw cVar0;
	// 781    .line 326
label_cond_b:
	newThis = std::make_shared<sun::security::x509::GeneralSubtrees>();
	//    .local v9, "newThis":Lsun/security/x509/GeneralSubtrees;
	newExcluded = 0x0;
	//    .local v8, "newExcluded":Lsun/security/x509/GeneralSubtrees;
	if ( this->size() )     
		goto label_cond_1d;
	this->union(other);
	return 0x0;
	// 807    .line 339
label_cond_1d:
	this->minimize();
	other->minimize();
	i = 0x0;
	//    .end local v8    # "newExcluded":Lsun/security/x509/GeneralSubtrees;
	//    .local v4, "i":I
label_goto_24:
	if ( i >= this->size() )
		goto label_cond_d3;
	thisEntry = this->getGeneralNameInterface(i);
	//    .local v16, "thisEntry":Lsun/security/x509/GeneralNameInterface;
	0x0;
	//    .local v13, "removeThisEntry":Z
	sameType = 0x0;
	//    .local v14, "sameType":Z
	j = 0x0;
	//    .local v6, "j":I
label_goto_35:
	if ( j >= other->size() )
		goto label_cond_5e;
	otherEntryGS = other->get(j);
	//    .local v12, "otherEntryGS":Lsun/security/x509/GeneralSubtree;
	//    .local v11, "otherEntry":Lsun/security/x509/GeneralNameInterface;
	// switch
	{
	auto item = ( thisEntry->constrains(sun::security::x509::GeneralSubtrees::getGeneralNameInterface(otherEntryGS)) );
	if (item == 0) goto label_pswitch_9f;
	if (item == 1) goto label_pswitch_53;
	if (item == 2) goto label_pswitch_9f;
	if (item == 3) goto label_pswitch_9d;
	}
label_goto_50:
	j = ( j + 0x1);
	goto label_goto_35;
	// 886    .line 366
label_pswitch_53:
	this->remove(i);
	i = ( i + -0x1);
	newThis->add(otherEntryGS);
	sameType = 0x0;
	//    .end local v11    # "otherEntry":Lsun/security/x509/GeneralNameInterface;
	//    .end local v12    # "otherEntryGS":Lsun/security/x509/GeneralSubtree;
label_cond_5e:
label_goto_5e:
	if ( !(sameType) )  
		goto label_cond_cf;
	//    .local v5, "intersection":Z
	j = 0x0;
label_goto_62:
	if ( j >= this->size() )
		goto label_cond_aa;
	thisAltEntry = this->getGeneralNameInterface(j);
	//    .local v15, "thisAltEntry":Lsun/security/x509/GeneralNameInterface;
	if ( thisAltEntry->getType() != thisEntry->getType() )
		goto label_cond_9a;
	k = 0x0;
	//    .local v7, "k":I
label_goto_7f:
	if ( k >= other->size() )
		goto label_cond_9a;
	//    .local v10, "othAltEntry":Lsun/security/x509/GeneralNameInterface;
	constraintType = thisAltEntry->constrains(other->getGeneralNameInterface(k));
	//    .local v2, "constraintType":I
	if ( !(constraintType) )  
		goto label_cond_99;
	if ( constraintType != 0x2 )
		goto label_cond_a1;
label_cond_99:
	0x1;
	//    .end local v2    # "constraintType":I
	//    .end local v7    # "k":I
	//    .end local v10    # "othAltEntry":Lsun/security/x509/GeneralNameInterface;
label_cond_9a:
	j = ( j + 0x1);
	goto label_goto_62;
	// 997    .line 372
	// 998    .end local v5    # "intersection":Z
	// 999    .end local v15    # "thisAltEntry":Lsun/security/x509/GeneralNameInterface;
	// 1000    .restart local v11    # "otherEntry":Lsun/security/x509/GeneralNameInterface;
	// 1001    .restart local v12    # "otherEntryGS":Lsun/security/x509/GeneralSubtree;
label_pswitch_9d:
	0x1;
	goto label_goto_50;
	// 1008    .line 376
label_pswitch_9f:
	sameType = 0x0;
	goto label_goto_5e;
	// 1015    .line 408
	// 1016    .end local v11    # "otherEntry":Lsun/security/x509/GeneralNameInterface;
	// 1017    .end local v12    # "otherEntryGS":Lsun/security/x509/GeneralSubtree;
	// 1018    .restart local v2    # "constraintType":I
	// 1019    .restart local v5    # "intersection":Z
	// 1020    .restart local v7    # "k":I
	// 1021    .restart local v10    # "othAltEntry":Lsun/security/x509/GeneralNameInterface;
	// 1022    .restart local v15    # "thisAltEntry":Lsun/security/x509/GeneralNameInterface;
label_cond_a1:
	if ( constraintType == 0x1 )
		goto label_cond_99;
	k = ( k + 0x1);
	goto label_goto_7f;
	// 1035    .line 415
	// 1036    .end local v2    # "constraintType":I
	// 1037    .end local v7    # "k":I
	// 1038    .end local v10    # "othAltEntry":Lsun/security/x509/GeneralNameInterface;
	// 1039    .end local v15    # "thisAltEntry":Lsun/security/x509/GeneralNameInterface;
label_cond_aa:
	if ( 0x0 )     
		goto label_cond_c8;
	if ( newExcluded )     
		goto label_cond_b3;
	newExcluded = std::make_shared<sun::security::x509::GeneralSubtrees>();
label_cond_b3:
	widestSubtree = this->createWidestSubtree(thisEntry);
	//    .local v17, "widestSubtree":Lsun/security/x509/GeneralSubtree;
	if ( newExcluded->contains(widestSubtree) )     
		goto label_cond_c8;
	newExcluded->add(widestSubtree);
	//    .end local v17    # "widestSubtree":Lsun/security/x509/GeneralSubtree;
label_cond_c8:
	this->remove(i);
	i = ( i + -0x1);
	//    .end local v5    # "intersection":Z
label_cond_cf:
	i = ( i + 0x1);
	goto label_goto_24;
	// 1093    .line 433
	// 1094    .end local v6    # "j":I
	// 1095    .end local v13    # "removeThisEntry":Z
	// 1096    .end local v14    # "sameType":Z
	// 1097    .end local v16    # "thisEntry":Lsun/security/x509/GeneralNameInterface;
label_cond_d3:
	if ( newThis->size() <= 0 )
		goto label_cond_de;
	this->union(newThis);
label_cond_de:
	i = 0x0;
label_goto_df:
	if ( i >= other->size() )
		goto label_cond_11a;
	otherEntryGS = other->get(i);
	//    .restart local v12    # "otherEntryGS":Lsun/security/x509/GeneralSubtree;
	//    .restart local v11    # "otherEntry":Lsun/security/x509/GeneralNameInterface;
	//    .local v3, "diffType":Z
	j = 0x0;
	//    .restart local v6    # "j":I
label_goto_f3:
	if ( j >= this->size() )
		goto label_cond_110;
	//    .restart local v16    # "thisEntry":Lsun/security/x509/GeneralNameInterface;
	// switch
	{
	auto item = ( this->getGeneralNameInterface(j)->constrains(sun::security::x509::GeneralSubtrees::getGeneralNameInterface(otherEntryGS)) );
	if (item == -1) goto label_pswitch_10d;
	if (item == 0) goto label_pswitch_10f;
	if (item == 1) goto label_pswitch_10f;
	if (item == 2) goto label_pswitch_10f;
	if (item == 3) goto label_pswitch_10f;
	}
label_goto_10a:
	j = ( j + 0x1);
	goto label_goto_f3;
	// 1177    .line 447
label_pswitch_10d:
	0x1;
	goto label_goto_10a;
	// 1184    .line 455
label_pswitch_10f:
	//    .end local v16    # "thisEntry":Lsun/security/x509/GeneralNameInterface;
label_cond_110:
	if ( !(0x0) )  
		goto label_cond_117;
	this->add(otherEntryGS);
label_cond_117:
	i = ( i + 0x1);
	goto label_goto_df;
	// 1204    .line 470
	// 1205    .end local v3    # "diffType":Z
	// 1206    .end local v6    # "j":I
	// 1207    .end local v11    # "otherEntry":Lsun/security/x509/GeneralNameInterface;
	// 1208    .end local v12    # "otherEntryGS":Lsun/security/x509/GeneralSubtree;
label_cond_11a:
	return newExcluded;
	// 1212    .line 364
	// 1213    nop
	// 1215    :pswitch_data_11c
	// 1216    .packed-switch 0x0
	// 1217        :pswitch_9f
	// 1218        :pswitch_53
	// 1219        :pswitch_9f
	// 1220        :pswitch_9d
	// 1221    .end packed-switch
	// 1223    .line 445
	// 1224    :pswitch_data_128
	// 1225    .packed-switch -0x1
	// 1226        :pswitch_10d
	// 1227        :pswitch_10f
	// 1228        :pswitch_10f
	// 1229        :pswitch_10f
	// 1230        :pswitch_10f
	// 1231    .end packed-switch

}
// .method public iterator()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<sun::security::x509::GeneralSubtree>> sun::security::x509::GeneralSubtrees::iterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1237        value = {
	// 1238            "()",
	// 1239            "Ljava/util/Iterator",
	// 1240            "<",
	// 1241            "Lsun/security/x509/GeneralSubtree;",
	// 1242            ">;"
	// 1243        }
	// 1244    .end annotation
	return this->trees->iterator();

}
// .method public reduce(Lsun/security/x509/GeneralSubtrees;)V
void sun::security::x509::GeneralSubtrees::reduce(std::shared_ptr<sun::security::x509::GeneralSubtrees> excluded)
{
	
	int i;
	int j;
	
	//    .param p1, "excluded"    # Lsun/security/x509/GeneralSubtrees;
	if ( excluded )     
		goto label_cond_3;
	return;
	// 1268    .line 500
label_cond_3:
	i = 0x0;
	//    .local v1, "i":I
	//    .local v3, "n":I
label_goto_8:
	if ( i >= excluded->size() )
		goto label_cond_32;
	//    .local v0, "excludedName":Lsun/security/x509/GeneralNameInterface;
	j = 0x0;
	//    .local v2, "j":I
label_goto_f:
	if ( j >= this->size() )
		goto label_cond_2f;
	//    .local v4, "permitted":Lsun/security/x509/GeneralNameInterface;
	// switch
	{
	auto item = ( excluded->getGeneralNameInterface(i)->constrains(this->getGeneralNameInterface(j)) );
	if (item == -1) goto label_pswitch_20;
	if (item == 0) goto label_pswitch_23;
	if (item == 1) goto label_pswitch_29;
	if (item == 2) goto label_pswitch_20;
	if (item == 3) goto label_pswitch_20;
	}
label_goto_20:
label_pswitch_20:
	j = ( j + 0x1);
	goto label_goto_f;
	// 1318    .line 508
label_pswitch_23:
	this->remove(j);
	j = ( j + -0x1);
	goto label_goto_20;
	// 1328    .line 513
label_pswitch_29:
	this->remove(j);
	j = ( j + -0x1);
	goto label_goto_20;
	// 1338    .line 500
	// 1339    .end local v4    # "permitted":Lsun/security/x509/GeneralNameInterface;
label_cond_2f:
	i = ( i + 0x1);
	goto label_goto_8;
	// 1345    .line 524
	// 1346    .end local v0    # "excludedName":Lsun/security/x509/GeneralNameInterface;
	// 1347    .end local v2    # "j":I
label_cond_32:
	return;
	// 1351    .line 504
	// 1352    nop
	// 1354    :pswitch_data_34
	// 1355    .packed-switch -0x1
	// 1356        :pswitch_20
	// 1357        :pswitch_23
	// 1358        :pswitch_29
	// 1359        :pswitch_20
	// 1360        :pswitch_20
	// 1361    .end packed-switch

}
// .method public remove(I)V
void sun::security::x509::GeneralSubtrees::remove(int index)
{
	
	//    .param p1, "index"    # I
	this->trees->remove(index);
	return;

}
// .method public size()I
int sun::security::x509::GeneralSubtrees::size()
{
	
	return this->trees->size();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::GeneralSubtrees::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "s":Ljava/lang/String;
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   GeneralSubtrees:\n")))->append(this->trees->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();

}
// .method public trees()Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::x509::GeneralSubtree>> sun::security::x509::GeneralSubtrees::trees()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1435        value = {
	// 1436            "()",
	// 1437            "Ljava/util/List",
	// 1438            "<",
	// 1439            "Lsun/security/x509/GeneralSubtree;",
	// 1440            ">;"
	// 1441        }
	// 1442    .end annotation
	return this->trees;

}
// .method public union(Lsun/security/x509/GeneralSubtrees;)V
void sun::security::x509::GeneralSubtrees::union(std::shared_ptr<sun::security::x509::GeneralSubtrees> other)
{
	
	int i;
	
	//    .param p1, "other"    # Lsun/security/x509/GeneralSubtrees;
	if ( !(other) )  
		goto label_cond_16;
	i = 0x0;
	//    .local v0, "i":I
	//    .local v1, "n":I
label_goto_7:
	if ( i >= other->size() )
		goto label_cond_13;
	this->add(other->get(i));
	i = ( i + 0x1);
	goto label_goto_7;
	// 1483    .line 484
label_cond_13:
	this->minimize();
	//    .end local v0    # "i":I
	//    .end local v1    # "n":I
label_cond_16:
	return;

}


