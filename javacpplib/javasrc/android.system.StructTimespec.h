#ifndef __android_system_StructTimespec__
#define __android_system_StructTimespec__
// H L:\smali2cpp20\x64\Release\out\android\system\StructTimespec.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::system{
class StructTimespec : public java::lang::Comparable<android::system::StructTimespec> {
protected:
private:
public:
	long long tv_nsec;
	long long tv_sec;
	StructTimespec(long long tv_sec,long long tv_nsec);
	int virtual compareTo(std::shared_ptr<android::system::StructTimespec> other);
	bool virtual equals(std::shared_ptr<java::lang::Object> o);
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructTimespec(){
	}

}; // class StructTimespec
}; // namespace android::system

#endif //__android_system_StructTimespec__

