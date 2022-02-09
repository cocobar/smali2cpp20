// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\AVAComparator.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.Comparator.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AVA.h"
#include "sun.security.x509.AVAComparator.h"

static sun::security::x509::AVAComparator::INSTANCE;
// .method static constructor <clinit>()V
void sun::security::x509::AVAComparator::static_cinit()
{
	
	std::shared_ptr<sun::security::x509::AVAComparator> cVar0;
	
	cVar0 = std::make_shared<sun::security::x509::AVAComparator>();
	sun::security::x509::AVAComparator::INSTANCE = cVar0;
	return;

}
// .method private constructor <init>()V
sun::security::x509::AVAComparator::AVAComparator()
{
	
	// 055    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static getInstance()Ljava/util/Comparator;
std::shared_ptr<java::util::Comparator<sun::security::x509::AVA>> sun::security::x509::AVAComparator::getInstance()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 064        value = {
	// 065            "()",
	// 066            "Ljava/util/Comparator",
	// 067            "<",
	// 068            "Lsun/security/x509/AVA;",
	// 069            ">;"
	// 070        }
	// 071    .end annotation
	return sun::security::x509::AVAComparator::INSTANCE;

}
// .method public compare(Lsun/security/x509/AVA;Lsun/security/x509/AVA;)I
int sun::security::x509::AVAComparator::compare(std::shared_ptr<sun::security::x509::AVA> a1,std::shared_ptr<sun::security::x509::AVA> a2)
{
	
	int a2Has2253;
	auto a1Oid;
	auto a2Oid;
	int pos;
	int len;
	int cVar0;
	
	//    .param p1, "a1"    # Lsun/security/x509/AVA;
	//    .param p2, "a2"    # Lsun/security/x509/AVA;
	//    .local v0, "a1Has2253":Z
	a2Has2253 = a2->hasRFC2253Keyword();
	//    .local v2, "a2Has2253":Z
	if ( !(a1->hasRFC2253Keyword()) )  
		goto label_cond_1b;
	if ( !(a2Has2253) )  
		goto label_cond_19;
	return a1->toRFC2253CanonicalString()->compareTo(a2->toRFC2253CanonicalString());
	// 139    .line 491
label_cond_19:
	return -0x1;
	// 145    .line 494
label_cond_1b:
	if ( !(a2Has2253) )  
		goto label_cond_1f;
	return 0x1;
	// 154    .line 497
label_cond_1f:
	a1Oid = a1->getObjectIdentifier()->toIntArray();
	//    .local v1, "a1Oid":[I
	a2Oid = a2->getObjectIdentifier()->toIntArray();
	//    .local v3, "a2Oid":[I
	pos = 0x0;
	//    .local v5, "pos":I
	if ( a1Oid->size() <= a2Oid->size() )
		goto label_cond_40;
	len = a2Oid->size();
	//    .local v4, "len":I
label_goto_35:
	if ( pos >= len )
		goto label_cond_42;
	if ( a1Oid[pos] != a2Oid[pos] )
		goto label_cond_42;
	pos = ( pos + 0x1);
	goto label_goto_35;
	// 204    .line 501
	// 205    .end local v4    # "len":I
label_cond_40:
	len = a1Oid->size();
	//    .restart local v4    # "len":I
	goto label_goto_35;
	// 212    .line 505
label_cond_42:
	if ( pos != len )
		goto label_cond_48;
	cVar0 = (a1Oid->size() -  a2Oid->size());
label_goto_47:
	return cVar0;
	// 225    .line 506
label_cond_48:
	cVar0 = (a1Oid[pos] -  a2Oid[pos]);
	goto label_goto_47;

}


