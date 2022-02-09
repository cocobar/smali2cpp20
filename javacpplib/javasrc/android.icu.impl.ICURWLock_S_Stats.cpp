// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICURWLock$Stats.smali
#include "java2ctype.h"
#include "android.icu.impl.ICURWLock_S_Stats.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method private constructor <init>()V
android::icu::impl::ICURWLock_S_Stats::ICURWLock_S_Stats()
{
	
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private constructor <init>(IIIII)V
android::icu::impl::ICURWLock_S_Stats::ICURWLock_S_Stats(int rc,int mrc,int wrc,int wc,int wwc)
{
	
	//    .param p1, "rc"    # I
	//    .param p2, "mrc"    # I
	//    .param p3, "wrc"    # I
	//    .param p4, "wc"    # I
	//    .param p5, "wwc"    # I
	// 051    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_rc = rc;
	this->_mrc = mrc;
	this->_wrc = wrc;
	this->_wc = wc;
	this->_wwc = wwc;
	return;

}
// .method private constructor <init>(Landroid/icu/impl/ICURWLock$Stats;)V
android::icu::impl::ICURWLock_S_Stats::ICURWLock_S_Stats(std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> rhs)
{
	
	//    .param p1, "rhs"    # Landroid/icu/impl/ICURWLock$Stats;
	android::icu::impl::ICURWLock_S_Stats::(rhs->_rc, rhs->_mrc, rhs->_wrc, rhs->_wc, rhs->_wwc);
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/ICURWLock$Stats;Landroid/icu/impl/ICURWLock$Stats;)V
android::icu::impl::ICURWLock_S_Stats::ICURWLock_S_Stats(std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> rhs,std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> _this1)
{
	
	//    .param p1, "rhs"    # Landroid/icu/impl/ICURWLock$Stats;
	//    .param p2, "-this1"    # Landroid/icu/impl/ICURWLock$Stats;
	android::icu::impl::ICURWLock_S_Stats::(rhs);
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/ICURWLock$Stats;Landroid/icu/impl/ICURWLock$Stats;Landroid/icu/impl/ICURWLock$Stats;)V
android::icu::impl::ICURWLock_S_Stats::ICURWLock_S_Stats(std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> _this0,std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> _this1,std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> _this2)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/ICURWLock$Stats;
	//    .param p2, "-this1"    # Landroid/icu/impl/ICURWLock$Stats;
	//    .param p3, "-this2"    # Landroid/icu/impl/ICURWLock$Stats;
	// 114    invoke-direct {p0}, Landroid/icu/impl/ICURWLock$Stats;-><init>()V
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICURWLock_S_Stats::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" rc: ")))->append(this->_rc)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" mrc: ")))->append(this->_mrc)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" wrc: ")))->append(this->_wrc)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" wc: ")))->append(this->_wc)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" wwc: ")))->append(this->_wwc)->toString();

}


