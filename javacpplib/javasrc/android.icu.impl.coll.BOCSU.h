#ifndef __android_icu_impl_coll_BOCSU__
#define __android_icu_impl_coll_BOCSU__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\BOCSU.smali
#include "java2ctype.h"
#include "android.icu.util.ByteArrayWrapper.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class BOCSU : public java::lang::Object {
protected:
private:
	static int SLOPE_LEAD_2_;
	static int SLOPE_LEAD_3_;
	static int SLOPE_MAX_;
	static int SLOPE_MAX_BYTES_;
	static int SLOPE_MIDDLE_;
	static int SLOPE_MIN_;
	static int SLOPE_REACH_NEG_1_;
	static int SLOPE_REACH_NEG_2_;
	static int SLOPE_REACH_NEG_3_;
	static int SLOPE_REACH_POS_1_;
	static int SLOPE_REACH_POS_2_;
	static int SLOPE_REACH_POS_3_;
	static int SLOPE_SINGLE_;
	static int SLOPE_START_NEG_2_;
	static int SLOPE_START_NEG_3_;
	static int SLOPE_START_POS_2_;
	static int SLOPE_START_POS_3_;
	static int SLOPE_TAIL_COUNT_;
	BOCSU();
	static void ensureAppendCapacity(std::shared_ptr<android::icu::util::ByteArrayWrapper> sink,int minCapacity,int cVar0);
	static long long getNegDivMod(int number,int factor);
	static int writeDiff(int diff,std::shared_ptr<unsigned char[]> buffer,int offset);
public:
	static int writeIdenticalLevelRun(int prev,std::shared_ptr<java::lang::CharSequence> s,int i,int length,std::shared_ptr<android::icu::util::ByteArrayWrapper> sink);
public:
	virtual ~BOCSU(){
	}

}; // class BOCSU
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_BOCSU__

