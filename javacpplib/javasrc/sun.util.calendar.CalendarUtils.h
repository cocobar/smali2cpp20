#ifndef __sun_util_calendar_CalendarUtils__
#define __sun_util_calendar_CalendarUtils__
// H L:\smali2cpp20\x64\Release\out\sun\util\calendar\CalendarUtils.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"

namespace sun::util::calendar{
class CalendarUtils : public java::lang::Object {
protected:
private:
public:
	CalendarUtils();
	static int amod(int x,int y);
	static long long amod(long long x,long long y);
	static int floorDivide(int n,int d);
	static int floorDivide(int n,int d,std::shared_ptr<int[]> r);
	static int floorDivide(long long n,int d,std::shared_ptr<int[]> r);
	static long long floorDivide(long long n,long long d);
	static bool isGregorianLeapYear(int gregorianYear);
	static bool isJulianLeapYear(int normalizedJulianYear);
	static int mod(int x,int y);
	static long long mod(long long x,long long y);
	static std::shared_ptr<java::lang::StringBuffer> sprintf0d(std::shared_ptr<java::lang::StringBuffer> sb,int value,int cVar0);
	static std::shared_ptr<java::lang::StringBuilder> sprintf0d(std::shared_ptr<java::lang::StringBuilder> sb,int value,int cVar0);
public:
	virtual ~CalendarUtils(){
	}

}; // class CalendarUtils
}; // namespace sun::util::calendar

#endif //__sun_util_calendar_CalendarUtils__

