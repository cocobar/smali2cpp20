#ifndef __android_icu_util_STZInfo__
#define __android_icu_util_STZInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\STZInfo.smali
#include "java2ctype.h"
#include "android.icu.util.SimpleTimeZone.h"
#include "java.io.Serializable.h"

namespace android::icu::util{
class STZInfo : public java::io::Serializable {
protected:
private:
	static long long serialVersionUID;
public:
	bool ea;
	int edm;
	int edw;
	int edwm;
	int em;
	int et;
	bool sa;
	int sdm;
	int sdw;
	int sdwm;
	int sm;
	int st;
	int sy;
	STZInfo();
	void virtual applyTo(std::shared_ptr<android::icu::util::SimpleTimeZone> stz);
	void virtual setEnd(int em,int edwm,int edw,int et,int edm,bool ea);
	void virtual setStart(int sm,int sdwm,int sdw,int st,int sdm,bool sa);
public:
	virtual ~STZInfo(){
	}

}; // class STZInfo
}; // namespace android::icu::util

#endif //__android_icu_util_STZInfo__

