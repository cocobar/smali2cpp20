#ifndef __android_icu_impl_SortedSetRelation__
#define __android_icu_impl_SortedSetRelation__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\SortedSetRelation.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.util.SortedSet.h"

namespace android::icu::impl{
class SortedSetRelation : public java::lang::Object {
protected:
private:
public:
	static int A;
	static int ADDALL;
	static int ANY;
	static int A_AND_B;
	static int A_NOT_B;
	static int B;
	static int B_NOT_A;
	static int B_REMOVEALL;
	static int COMPLEMENTALL;
	static int CONTAINS;
	static int DISJOINT;
	static int EQUALS;
	static int ISCONTAINED;
	static int NONE;
	static int NO_A;
	static int NO_B;
	static int REMOVEALL;
	static int RETAINALL;
	SortedSetRelation();
	static std::shared_ptr<java::util::SortedSet<T>> doOperation(std::shared_ptr<java::util::SortedSet<T>> a,int relation,std::shared_ptr<java::util::SortedSet<T>> b);
	static bool hasRelation(std::shared_ptr<java::util::SortedSet<T>> a,int allow,std::shared_ptr<java::util::SortedSet<T>> b);
public:
	virtual ~SortedSetRelation(){
	}

}; // class SortedSetRelation
}; // namespace android::icu::impl

#endif //__android_icu_impl_SortedSetRelation__

