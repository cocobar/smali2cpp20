// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\STZInfo.smali
#include "java2ctype.h"
#include "android.icu.util.STZInfo.h"
#include "android.icu.util.SimpleTimeZone.h"

static android::icu::util::STZInfo::serialVersionUID = -0x6cef6c8f34397e78L;
// .method constructor <init>()V
android::icu::util::STZInfo::STZInfo()
{
	
	int cVar0;
	
	cVar0 = -0x1;
	// 049    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->sy = cVar0;
	this->sm = cVar0;
	this->em = cVar0;
	return;

}
// .method applyTo(Landroid/icu/util/SimpleTimeZone;)V
void android::icu::util::STZInfo::applyTo(std::shared_ptr<android::icu::util::SimpleTimeZone> stz)
{
	
	int cVar0;
	
	//    .param p1, "stz"    # Landroid/icu/util/SimpleTimeZone;
	cVar0 = -0x1;
	if ( this->sy == cVar0 )
		goto label_cond_a;
	stz->setStartYear(this->sy);
label_cond_a:
	if ( this->sm == cVar0 )
		goto label_cond_1d;
	if ( this->sdm != cVar0 )
		goto label_cond_31;
	stz->setStartRule(this->sm, this->sdwm, this->sdw, this->st);
label_cond_1d:
label_goto_1d:
	if ( this->em == cVar0 )
		goto label_cond_30;
	if ( this->edm != cVar0 )
		goto label_cond_4e;
	stz->setEndRule(this->em, this->edwm, this->edw, this->et);
label_cond_30:
label_goto_30:
	return;
	// 133    .line 65
label_cond_31:
	if ( this->sdw != cVar0 )
		goto label_cond_3f;
	stz->setStartRule(this->sm, this->sdm, this->st);
	goto label_goto_1d;
	// 150    .line 68
label_cond_3f:
	stz->setStartRule(this->sm, this->sdm, this->sdw, this->st, this->sa);
	goto label_goto_1d;
	// 168    .line 74
label_cond_4e:
	if ( this->edw != cVar0 )
		goto label_cond_5c;
	stz->setEndRule(this->em, this->edm, this->et);
	goto label_goto_30;
	// 185    .line 77
label_cond_5c:
	stz->setEndRule(this->em, this->edm, this->edw, this->et, this->ea);
	goto label_goto_30;

}
// .method setEnd(IIIIIZ)V
void android::icu::util::STZInfo::setEnd(int em,int edwm,int edw,int et,int edm,bool ea)
{
	
	//    .param p1, "em"    # I
	//    .param p2, "edwm"    # I
	//    .param p3, "edw"    # I
	//    .param p4, "et"    # I
	//    .param p5, "edm"    # I
	//    .param p6, "ea"    # Z
	this->em = em;
	this->edwm = edwm;
	this->edw = edw;
	this->et = et;
	this->edm = edm;
	this->ea = ea;
	return;

}
// .method setStart(IIIIIZ)V
void android::icu::util::STZInfo::setStart(int sm,int sdwm,int sdw,int st,int sdm,bool sa)
{
	
	//    .param p1, "sm"    # I
	//    .param p2, "sdwm"    # I
	//    .param p3, "sdw"    # I
	//    .param p4, "st"    # I
	//    .param p5, "sdm"    # I
	//    .param p6, "sa"    # Z
	this->sm = sm;
	this->sdwm = sdwm;
	this->sdw = sdw;
	this->st = st;
	this->sdm = sdm;
	this->sa = sa;
	return;

}


